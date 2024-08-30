using System;
using System.Collections;
using System.Collections.Generic;
using System.Data;
using Newtonsoft.Json;
using TMPro;
using UnityEngine;

[System.Serializable]
public class DeviceModel
{
  //[JsonProperty("location")]
  public string location;

  //[JsonProperty("code")]
  public string code;

  //[JsonProperty("function")]
  public string function;

  //[JsonProperty("rangeMeasurement")]
  public string rangeMeasurement;

  //[JsonProperty("ioAddress")]a  
  public string ioAddress;

  // [JsonProperty("jbConnection")]
  public string jbConnection;
}

