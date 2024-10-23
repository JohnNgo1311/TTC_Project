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
public class Get_All_Device_By_Grapper : MonoBehaviour
{
    [SerializeField]
    private string grapper_Name = "A";

    [SerializeField]
    private List<TMP_Text> student_information = new List<TMP_Text>();

    [SerializeField]
    private List<DeviceModel> devices = new List<DeviceModel>();

    void Start()
    {
        // StartCoroutine(Get_Devices_By_Grapper($"{GlobalVariable.baseUrl}{grapper_Name}"));
    }
    //GET Request
    private IEnumerator Get_Devices_By_Grapper(string url)
    {
        using (UnityWebRequest webRequest = UnityWebRequest.Get(url))
        {
            var operation = webRequest.SendWebRequest();
            yield return operation;

            if (webRequest.result == UnityWebRequest.Result.ConnectionError || webRequest.result == UnityWebRequest.Result.ProtocolError)
            {
                Debug.LogError($"Request error: {webRequest.error}");
            }
            try
            {
                string jsonData = webRequest.downloadHandler.text;
                devices = JsonConvert.DeserializeObject<List<DeviceModel>>(jsonData);
                Debug.Log("Received data successfully.");
                if (devices.Count > 0)
                {
                    // GlobalVariable_Search_Devices.all_Device_GrapperA = devices;
                }
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
    IEnumerator Create_New_Device_By_Grapper(string url, DeviceModel device)
    {
        string jsonData = JsonConvert.SerializeObject(device);
        using (UnityWebRequest webRequest = UnityWebRequest.Post(url, jsonData))
        {
            webRequest.SetRequestHeader("Content-Type", "application/json");
            var operation = webRequest.SendWebRequest();
            yield return operation;

            if (webRequest.result == UnityWebRequest.Result.ConnectionError || webRequest.result == UnityWebRequest.Result.ProtocolError)
            {
                Debug.LogError($"Request error: {webRequest.error}");
            }
            try
            {
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

    //POST Request With JSON
    IEnumerator postRequest(string url, string json)
    {
        var webRequest = new UnityWebRequest(url, "POST");
        byte[] jsonToSend = new System.Text.UTF8Encoding().GetBytes(json);
        webRequest.uploadHandler = (UploadHandler)new UploadHandlerRaw(jsonToSend);
        webRequest.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
        webRequest.SetRequestHeader("Content-Type", "application/json");

        //Send the request then wait here until it returns
        yield return webRequest.SendWebRequest();

        if (webRequest.result == UnityWebRequest.Result.ConnectionError)

        {
            Debug.Log("Error While Sending: " + webRequest.error);
        }
        else
        {
            Debug.Log("Received: " + webRequest.downloadHandler.text);
        }
    }
    //POST request with Multipart FormData/Multipart Form File:
    IEnumerator postRequestFromFile(string url)
    {
        List<IMultipartFormSection> formData = new List<IMultipartFormSection>();
        formData.Add(new MultipartFormDataSection("field1=foo&field2=bar"));
        formData.Add(new MultipartFormFileSection("my file data", "myfile.txt"));

        UnityWebRequest webRequest = UnityWebRequest.Post(url, formData);
        yield return webRequest.SendWebRequest();


        if (webRequest.result == UnityWebRequest.Result.ConnectionError)

        {
            Debug.Log("Error While Sending: " + webRequest.error);
        }
        else
        {
            Debug.Log("Received: " + webRequest.downloadHandler.text);
        }
    }
    //PUT Request
    IEnumerator putRequest(string url)
    {
        byte[] dataToPut = System.Text.Encoding.UTF8.GetBytes("Hello, This is a test");
        UnityWebRequest webRequest = UnityWebRequest.Put(url, dataToPut);
        yield return webRequest.SendWebRequest();

        if (webRequest.result == UnityWebRequest.Result.ConnectionError)

        {
            Debug.Log("Error While Sending: " + webRequest.error);
        }
        else
        {
            Debug.Log("Received: " + webRequest.downloadHandler.text);
        }
    }
    IEnumerator deleteRequest(string url)
    {
        UnityWebRequest webRequest = UnityWebRequest.Delete(url);
        yield return webRequest.SendWebRequest();

        if (webRequest.result == UnityWebRequest.Result.ConnectionError)
        {
            Debug.Log("Error While Sending: " + webRequest.error);
        }
        else
        {
            Debug.Log("Deleted");
        }
    }
}
