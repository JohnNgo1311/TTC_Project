using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using Newtonsoft.Json;
using UnityEngine;
using UnityEngine.Networking;

public class Get_Devices_Infor : MonoBehaviour
{
    string filePath;
    string jsonData;

    private void Awake()
    {
        filePath = Path.Combine(Application.streamingAssetsPath, "Device_Search_Json.json");
        StartCoroutine(LoadJsonData());
    }

    private IEnumerator LoadJsonData()
    {
        // Load the json file
        if (filePath.Contains("://") || filePath.Contains(":///"))
        {
            using (UnityWebRequest www = UnityWebRequest.Get(filePath))
            {
                yield return www.SendWebRequest();

                if (www.result != UnityWebRequest.Result.Success)
                {
                    Debug.LogError("Failed to load JSON data: " + www.error);
                    yield break;
                }
                else
                {
                    jsonData = www.downloadHandler.text;
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
                Debug.LogError("File not found: " + filePath);
                yield break;
            }
        }

            List<DeviceModel> devices = JsonConvert.DeserializeObject<List<DeviceModel>>(jsonData);
        GlobalVariable_Search_Devices.deviceModels = devices;
        /* DeviceModel device = GetDeviceByCode(GlobalVariable_Search_Devices.deviceModels, "02TT003A");
         if (device != null)
         {
             Debug.Log($"Code: {device.code}");
             Debug.Log($"Function: {device.function}");
             Debug.Log($"Range Measurement: {device.rangeMeasurement}");
             Debug.Log($"I/O Address: {device.ioAddress}");
             Debug.Log($"JB Connection: {device.jbConnection}");
         }
         else
         {
             Debug.Log("Device not found.");
         }*/
    }

    /*   private DeviceModel GetDeviceByCode(List<DeviceModel> devices, string code)
       {
           return devices.Find(device => device.code == code);
       }*/
}
