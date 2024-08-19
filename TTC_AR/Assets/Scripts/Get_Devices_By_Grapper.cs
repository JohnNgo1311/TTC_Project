using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using Newtonsoft.Json;
using TMPro;
using UnityEngine;
using UnityEngine.Networking;

public class Get_Devices_By_Grapper : MonoBehaviour
{
    private string filePath;
    public string grapper;

    private void Awake()
    {
        // Xác định đường dẫn file dựa trên platform
        filePath = Path.Combine(Application.streamingAssetsPath, $"Device_Grapper{grapper}.json");
        // Bắt đầu coroutine để tải dữ liệu JSON
        StartCoroutine(LoadJsonData());
    }

    private IEnumerator LoadJsonData()
    {
        string jsonData = null;

        // Kiểm tra nếu filePath là URL hay là đường dẫn địa phương
        if (filePath.StartsWith("http") || filePath.StartsWith("https") || filePath.StartsWith("file://"))
        {
            using (UnityWebRequest www = UnityWebRequest.Get(filePath))
            {
                yield return www.SendWebRequest();

                if (www.result == UnityWebRequest.Result.Success)
                {
                    jsonData = www.downloadHandler.text;
                }
                else
                {
                    Debug.LogError($"Failed to load JSON data from {filePath}: {www.error}");
                    yield break;
                }
            }
        }
        else
        {
            if (File.Exists(filePath))
            {
                jsonData = File.ReadAllText(filePath);
            }
            else
            {
                Debug.LogError($"File not found: {filePath}");
                yield break;
            }
        }

        if (string.IsNullOrEmpty(jsonData))
        {
            Debug.LogError($"Loaded JSON data is null or empty: {filePath}");
            yield break;
        }

        try
        {
            // Deserialize dữ liệu JSON
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

        // Thêm các mã và chức năng của thiết bị vào danh sách lọc
        foreach (var device in deviceModels)
        {
            devicesForFilter.Add(device.code);
            devicesForFilter.Add(device.function);
        }

        return devicesForFilter;
    }
}
