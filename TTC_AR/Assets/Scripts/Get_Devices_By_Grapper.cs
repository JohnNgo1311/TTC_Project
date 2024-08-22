using System;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using Newtonsoft.Json;
using UnityEngine.Networking;
using System.Collections;

public class Get_Devices_By_Grapper : MonoBehaviour
{
    public string grapper;

    private void Awake()
    {
        string filePath = Path.Combine(Application.streamingAssetsPath, $"Device_Grapper{grapper}.json");

        if (Application.platform == RuntimePlatform.Android)
        {
            filePath = $"jar:file://{Application.dataPath}!/assets/Device_Grapper{grapper}.json";
            StartCoroutine(LoadJsonFromAndroid(filePath));
        }
        else
        {
            LoadJsonFromFile(filePath);
            Debug.Log("Read file from StreamingAssets on non-Android platform");
        }
    }

    private void LoadJsonFromFile(string filePath)
    {
        try
        {
            string jsonData = File.ReadAllText(filePath);
            ProcessJsonData(jsonData);
        }
        catch (Exception e)
        {
            Debug.LogError($"Failed to read JSON file: {e.Message}");
        }
    }

    private IEnumerator LoadJsonFromAndroid(string filePath)
    {
        using (UnityWebRequest www = UnityWebRequest.Get(filePath))
        {
            yield return www.SendWebRequest();

            if (www.result != UnityWebRequest.Result.Success)
            {
                Debug.LogError($"Failed to load JSON file on Android: {www.error}");
            }
            else
            {
                ProcessJsonData(www.downloadHandler.text);
            }
        }
    }

    private void ProcessJsonData(string jsonData)
    {
        try
        {
            var devices = JsonConvert.DeserializeObject<List<DeviceModel>>(jsonData);
            GlobalVariable_Search_Devices.devices_Model_By_Grapper = devices;
            GlobalVariable_Search_Devices.devices_Model_For_Filter = GetDeviceForFilter(devices);
            //Lưu danh sách vào Local phòng hờ GlobalVariable_Search_Devices.devices_Model_For_Filter bị null
            Save_Data_To_Local.SaveStringList($"List_Device_For_Fitler_{grapper}", GlobalVariable_Search_Devices.devices_Model_For_Filter);
            Debug.Log($"Lượng data đã lưu: {Save_Data_To_Local.GetStringList($"List_Device_For_Fitler_{grapper}").Count}");
        }
        catch (Exception e)
        {
            Debug.LogError($"Failed to deserialize JSON data: {e.Message}");
        }
    }

    private List<string> GetDeviceForFilter(List<DeviceModel> deviceModels)
    {
        var devicesForFilter = new List<string>();

        foreach (var device in deviceModels)
        {
            devicesForFilter.Add(device.code);
            devicesForFilter.Add(device.function);
        }

        return devicesForFilter;
    }
}

