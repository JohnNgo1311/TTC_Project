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
    private string jsonData;

    private void Awake()
    {
        if (Application.platform == RuntimePlatform.Android)
        {
            string filePath = Path.Combine(Application.streamingAssetsPath, $"Device_Grapper{grapper}.json");
            if (filePath != null)
            {
                filePath = Path.Combine("jar:file://" + Application.dataPath + "!/assets", $"Device_Grapper{grapper}.json");
            }
            // Đọc file từ StreamingAssets trên Android
            StartCoroutine(LoadJsonFromAndroid(filePath));
        }
        else
        {
            string filePath = Path.Combine(Application.streamingAssetsPath, $"Device_Grapper{grapper}.json");

            jsonData = File.ReadAllText(filePath);
            ProcessJsonData(jsonData);
            Debug.Log("Read file from StreamingAssets on non-Android platform");
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
                jsonData = www.downloadHandler.text;
                ProcessJsonData(jsonData);
            }
        }
    }

    private void ProcessJsonData(string jsonData)
    {
        try
        {
            GlobalVariable_Search_Devices.devices_Model_By_Grapper = JsonConvert.DeserializeObject<List<DeviceModel>>(jsonData);
            GlobalVariable_Search_Devices.devices_Model_For_Filter = GetDeviceForFilter();
        }
        catch (Exception e)
        {
            Debug.LogError($"Failed to deserialize JSON data: {e.Message}");
        }
    }

    private List<string> GetDeviceForFilter()
    {
        List<DeviceModel> deviceModels = GlobalVariable_Search_Devices.devices_Model_By_Grapper;
        List<string> devicesForFilter = new List<string>();

        foreach (var device in deviceModels)
        {
            devicesForFilter.Add(device.code);
            devicesForFilter.Add(device.function);
        }

        return devicesForFilter;
    }
}
