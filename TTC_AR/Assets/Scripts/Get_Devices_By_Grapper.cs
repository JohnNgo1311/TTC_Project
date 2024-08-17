using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using Newtonsoft.Json;
using UnityEngine;
using UnityEngine.Networking;

public class Get_Devices_By_Grapper : MonoBehaviour
{
    // public string grapper;
    private string filePath;

    private void Awake()
    {
    }
    public void Get_Devices(string grapper)
    {
        filePath = Path.Combine(Application.streamingAssetsPath, $"Device_Grapper{grapper}.json");
        StartCoroutine(LoadJsonData());
    }
    private IEnumerator LoadJsonData()
    {
        string jsonData = null;

        if (filePath.Contains("://") || filePath.Contains(":///"))
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
        for (int i = 0; i < deviceModels.Count; i++)
        {
            devicesForFilter.Add(deviceModels[i].code);
        }
        for (int i = 0; i < deviceModels.Count; i++)
        {
            devicesForFilter.Add(deviceModels[i].function);
        }
        return devicesForFilter;
    }
}
