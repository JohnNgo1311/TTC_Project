using System;
using System.Collections;
using System.Collections.Generic;
using System.Data;
using Newtonsoft.Json;
using TMPro;
using UnityEngine;

public class GlobalVariable_Search_Devices : MonoBehaviour
{

    public static List<DeviceModel> deviceModels;// List of devices for search
}

[System.Serializable]
public class DeviceModel
{
    [JsonProperty("Code")]
    public string code { get; set; }

    [JsonProperty("Function")]
    public string function { get; set; }

    [JsonProperty("Range Measurement")]
    public string rangeMeasurement { get; set; }

    [JsonProperty("I/O Address")]
    public string ioAddress { get; set; }

    [JsonProperty("JB Connection")]
    public string jbConnection { get; set; }
}
