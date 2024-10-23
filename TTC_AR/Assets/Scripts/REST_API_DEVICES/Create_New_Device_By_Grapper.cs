using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using JsonUtility = UnityEngine.JsonUtility;
using UnityEngine.Networking;
using Newtonsoft.Json;
using TMPro;
using System;
using UnityEngine.UI;
using Unity.VisualScripting;
public class Create_New_Device_By_Grapper : MonoBehaviour
{
    [SerializeField]
    private string grapper_Name = "A";

    [SerializeField]
    private DeviceModel device = new DeviceModel();
    public List<TMP_InputField> inputFields = new List<TMP_InputField>();
    void Start()
    {
    }
    public void Create_Devices_By_Grapper()
    {
        device.location = $"Grapper{grapper_Name}";
        device.code = inputFields[0].text;
        device.function = inputFields[1].text;
        device.rangeMeasurement = inputFields[2].text;
        device.ioAddress = inputFields[3].text;
        device.jbConnection = $"{inputFields[4].text}_{inputFields[5].text}";
        StartCoroutine(Create_New_Device($"{GlobalVariable.baseUrl}{grapper_Name}", device));
    }
    IEnumerator Create_New_Device(string url, DeviceModel device)
    {
        if (string.IsNullOrEmpty(device.id))
        {
            device.id = (GlobalVariable_Search_Devices.all_Device_GrapperA.Count + 1).ToString();
        }

        if (device.listImageConnection == null || device.listImageConnection.Count == 0)
        {
            device.listImageConnection = GlobalVariable_Search_Devices.all_Device_GrapperA[0].listImageConnection;
        }

        string jsonData = JsonConvert.SerializeObject(device);

        using (UnityWebRequest webRequest = new UnityWebRequest(url, "POST"))
        {
            byte[] jsonToSend = new System.Text.UTF8Encoding().GetBytes(jsonData);

            webRequest.uploadHandler = new UploadHandlerRaw(jsonToSend); // Set the data to be sent

            webRequest.downloadHandler = new DownloadHandlerBuffer(); // Get the data to be received

            webRequest.SetRequestHeader("Content-Type", "application/json");

            var operation = webRequest.SendWebRequest();
            yield return operation;

            if (webRequest.result == UnityWebRequest.Result.ConnectionError || webRequest.result == UnityWebRequest.Result.ProtocolError)
            {
                Debug.LogError($"Request error: {webRequest.error}");
            }
            try
            {
                // Xử lý dữ liệu thành công
                Debug.Log("Post data successfully.");
            }
            catch (JsonException jsonEx)
            {
                Debug.LogError($"Error parsing JSON: {jsonEx.Message}");
            }
            catch (Exception ex)
            {
                Debug.LogError($"Unexpected error: {ex.Message}");
            }
        }
    }
}
