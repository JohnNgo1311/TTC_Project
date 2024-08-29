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
            // Đọc từ asset trong APK Android
            if (!File.Exists(filePath))
            {
                filePath = Path.Combine("jar:file://" + Application.dataPath + "!/assets", $"Device_Grapper{grapper}.json");
            }
            else
            {
                StartCoroutine(LoadJsonFromAndroid(filePath));
            }

        }
        else
        {
            // Đọc từ StreamingAssets trên nền tảng không phải Android
            LoadJsonFromFile(filePath);
            Debug.Log("Read file from StreamingAssets on non-Android platform");
        }
    }

    private void LoadJsonFromFile(string filePath)
    {
        try
        {
            if (File.Exists(filePath))
            {
                string jsonData = File.ReadAllText(filePath);
                ProcessJsonData(jsonData);
            }
            else
            {
                Debug.LogError($"File not found: {filePath}");
            }
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

            if (www.result == UnityWebRequest.Result.ConnectionError || www.result == UnityWebRequest.Result.ProtocolError)
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
            if (devices != null)
            {
                Debug.Log($"Số lượng thiết bị: {devices.Count} + {devices[5].code} + {devices[5].function}");

                GlobalVariable_Search_Devices.devices_Model_By_Grapper = devices;

                var filteredDevices = GetDeviceForFilter(devices);

                GlobalVariable_Search_Devices.devices_Model_For_Filter = filteredDevices;

                // Lưu danh sách vào Local phòng hờ GlobalVariable_Search_Devices.devices_Model_For_Filter bị null
                Save_Data_To_Local.SaveStringList($"List_Device_For_Fitler_{grapper}", filteredDevices);

            }
            else
            {
                Debug.LogWarning("Deserialized devices list is null.");
            }

            List<string> savedList = Save_Data_To_Local.GetStringList($"List_Device_For_Fitler_{grapper}");
            Debug.Log($"Lượng data đã lưu: {savedList.Count} + {savedList[5]}");
        }
        catch (JsonException je)
        {
            Debug.LogError($"Failed to deserialize JSON data: {je.Message}");
        }
        catch (Exception e)
        {
            Debug.LogError($"Unexpected error during JSON processing: {e.Message}");
        }
    }

    private List<string> GetDeviceForFilter(List<DeviceModel> deviceModels)
    {
        var devicesForFilter = new List<string>();

        foreach (var device in deviceModels)
        {
            if (!string.IsNullOrWhiteSpace(device.code))
                devicesForFilter.Add(device.code);

            if (!string.IsNullOrWhiteSpace(device.function))
                devicesForFilter.Add(device.function);
        }

        return devicesForFilter;
    }
}
