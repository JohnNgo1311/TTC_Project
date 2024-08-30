using System;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using Newtonsoft.Json;
using UnityEngine.Networking;
using System.Collections;
using UnityWebRequest = UnityEngine.Networking.UnityWebRequest;

public class Get_Devices_By_Grapper : MonoBehaviour
{
    public string grapper;
    private string filePath;

    private void Awake()
    {

    }
    private void Start()
    {

    }
    public void Get_List_Device_By_Grapper()
    {
        filePath = Path.Combine(Application.streamingAssetsPath, $"Device_Grapper{grapper}.json");
        if (Application.platform == RuntimePlatform.Android)
        {
            StartCoroutine(LoadJsonFromAndroid(filePath));
        }
        else
        {
            LoadJsonFromFile(filePath);
        }
    }
    private void LoadJsonFromFile(string file)
    {
        try
        {
            if (File.Exists(file))
            {
                string jsonData = File.ReadAllText(file);
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

    private IEnumerator LoadJsonFromAndroid(string file)
    {
        string androidPath = file;
        if (!File.Exists(file) || string.IsNullOrWhiteSpace(File.ReadAllText(file)))
        {
            androidPath = $"jar:file://{Application.dataPath}!/assets/Device_Grapper{grapper}.json";
        }
        UnityWebRequest www = UnityWebRequest.Get(androidPath);
        www.timeout = 30;
        yield return www.SendWebRequest();

        if (www.result != UnityWebRequest.Result.Success)
        {
            Debug.LogError($"Failed to load JSON file on Android: {www.error}");
        }
        else
        {
            string jsonData = www.downloadHandler.text;

            Debug.Log($"Loaded JSON data lần 1: {jsonData}");

            Debug.Log($"Loaded JSON data:{jsonData.Length} + {jsonData}");

            try
            {
                Debug.Log($"Loaded JSON data: {jsonData}");
                // Deserialize JSON data
                List<DeviceModel> devices = JsonConvert.DeserializeObject<List<DeviceModel>>(jsonData);
                GlobalVariable_Search_Devices.devices_Model_By_Grapper = devices;

                // Ensure that the deserialization has completed successfully and the list contains valid data
                if (devices != null && devices.Count > 0 && !string.IsNullOrWhiteSpace(devices[1].function))
                {
                    ProcessAndSaveDevices(devices);
                }
                else
                {
                    Debug.LogError("List thiết bị null hoặc không có đủ dữ liệu hợp lệ.");
                }
            }
            catch (JsonException je)
            {
                Debug.LogError($"Failed to deserialize JSON data: {je.Message}");
            }
            catch (Exception e)
            {
                Debug.LogError($"Unexpected error during JSON processing: {e.Message}");
            }
            Debug.Log($"Loaded JSON data lần 2: {jsonData}");
        }

    }

    private void ProcessJsonData(string jsonData)
    {
        Debug.Log($"Loaded JSON data:{jsonData.Length} + {jsonData}"); //! 8255 ký tự

        try
        {
            Debug.Log($"Loaded JSON data: {jsonData}");
            // Deserialize JSON data
            List<DeviceModel> devices = JsonConvert.DeserializeObject<List<DeviceModel>>(jsonData);
            GlobalVariable_Search_Devices.devices_Model_By_Grapper = devices;
            // Ensure that the deserialization has completed successfully and the list contains valid data
            if (devices != null && devices.Count > 0 && !string.IsNullOrWhiteSpace(devices[1].function))
            {
                ProcessAndSaveDevices(devices);
            }
            else
            {
                Debug.LogError("List thiết bị null hoặc không có đủ dữ liệu hợp lệ.");
            }
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

    private void ProcessAndSaveDevices(List<DeviceModel> devices)
    {
        // Filter devices
        List<string> filteredDevices = GetDeviceForFilter(devices);

        // Save filtered devices locally
        Save_Data_To_Local.SaveStringList($"List_Device_For_Filter_{grapper}", filteredDevices);

        // Retrieve and validate the saved list
        List<string> savedList = Save_Data_To_Local.GetStringList($"List_Device_For_Filter_{grapper}");
        GlobalVariable_Search_Devices.devices_Model_For_Filter = savedList;
        if (savedList != null && savedList.Count > 0)
        {
            Debug.Log($"Lượng data đã lưu: {savedList.Count} + {savedList[1]}");
        }
        else
        {
            Debug.LogError("Danh sách đã lưu có ít hơn 6 phần tử hoặc null");
        }
    }


    private List<string> GetDeviceForFilter(List<DeviceModel> deviceModels)
    {
        List<string> devicesForFilter = new List<string>();

        foreach (var device in deviceModels)
        {
            if (!string.IsNullOrWhiteSpace(device.code))
            {
                devicesForFilter.Add(device.code);
            }

            if (!string.IsNullOrWhiteSpace(device.function))
            {
                devicesForFilter.Add(device.function);
            }
        }
        return devicesForFilter;
    }




}
