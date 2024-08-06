using System;
using System.Collections;
using System.Collections.Generic;
using System.Data;
using System.IO;
using Newtonsoft.Json;
using TMPro;
using UnityEngine;

public class Get_Devices_Infor : MonoBehaviour
{
    string filePath = "D:/TTC_Project_AR/TTC_AR/Assets/Scripts/Device_Search_Json.json";
    string jsonData;
    private void Awake()
    {
        // Read the json file
        jsonData = File.ReadAllText(filePath);
        List<DeviceModel> devices = JsonConvert.DeserializeObject<List<DeviceModel>>(jsonData);
        GlobalVariable_Search_Devices.deviceModels = devices;
        DeviceModel device = GetDeviceByCode(GlobalVariable_Search_Devices.deviceModels, "02TT003");

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
        }
    }

    private DeviceModel GetDeviceByCode(List<DeviceModel> devices, string code)
    {
        return devices.Find(device => device.code == code);
    }
}


