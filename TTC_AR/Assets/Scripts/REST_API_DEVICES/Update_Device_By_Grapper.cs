using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.Networking;
using Newtonsoft.Json;
using TMPro;
using UnityEngine.UI;
using System.Collections.Generic;
using System;

public class Update_Device_By_Grapper : MonoBehaviour
{
    [SerializeField]
    private string grapper_Name = "A";

    [SerializeField]
    private DeviceModel device = new DeviceModel();

    public Text code_text;
    public string title = "Update Device Data";
    public Button cancelButton;
    public Button confirmButton;
    public GameObject panel_Dialog;
    //  public GameObject loadingIcon; // Biểu tượng loading
    public List<TMP_InputField> inputFields = new List<TMP_InputField>();

    private void Start()
    {
        panel_Dialog.SetActive(false);
    }

    public void Open_Panel_Update_Device()
    {
        device = GlobalVariable_Search_Devices.all_Device_GrapperA.Find(d => d.code == code_text.text);
        if (device != null)
        {
            PopulateInputFields(device);
        }
        else
        {
            Debug.LogWarning("Device not found!");
            return;
        }

        Show_Question_Dialog(
            confirmAction: () =>
            {
                UpdateDeviceData();
            },
            cancelAction: () =>
            {
                ClearInputFieldsAndListeners();
            }
        );
    }

    private void PopulateInputFields(DeviceModel device)
    {
        inputFields[0].text = device.code;
        inputFields[1].text = device.function;
        inputFields[2].text = device.rangeMeasurement;
        inputFields[3].text = device.ioAddress;

        var jbConnectionParts = device.jbConnection?.Split('_');
        if (jbConnectionParts != null && jbConnectionParts.Length == 2)
        {
            inputFields[4].text = jbConnectionParts[0];
            inputFields[5].text = jbConnectionParts[1];
        }
        else
        {
            Debug.LogWarning("Invalid jbConnection format.");
        }
    }

    private void Show_Question_Dialog(Action confirmAction, Action cancelAction)
    {
        panel_Dialog.SetActive(true);
        cancelButton.onClick.AddListener(new UnityEngine.Events.UnityAction(cancelAction));
        confirmButton.onClick.AddListener(new UnityEngine.Events.UnityAction(confirmAction));
    }

    private void UpdateDeviceData()
    {
        device.location = $"Grapper{grapper_Name}";
        device.code = inputFields[0].text;
        device.function = inputFields[1].text;
        device.rangeMeasurement = inputFields[2].text;
        device.ioAddress = inputFields[3].text;
        device.jbConnection = $"{inputFields[4].text}_{inputFields[5].text}";

        Update_device();
        ClearInputFieldsAndListeners();
    }

    private void ClearInputFieldsAndListeners()
    {
        panel_Dialog.SetActive(false);
        confirmButton.onClick.RemoveAllListeners();
        cancelButton.onClick.RemoveAllListeners();
        foreach (var inputField in inputFields)
        {
            inputField.text = "";
        }
    }

    public async void Update_device()
    {
        panel_Dialog.SetActive(false);
        // loadingIcon.SetActive(true); // Hiển thị biểu tượng loading

        await Update_device_Data($"{GlobalVariable.baseUrl}{grapper_Name}", device);

        // loadingIcon.SetActive(false); // Ẩn biểu tượng loading khi hoàn thành
    }

    private async Task Update_device_Data(string url, DeviceModel device)
    {
        string jsonData = JsonConvert.SerializeObject(device);
        byte[] dataToByte = System.Text.Encoding.UTF8.GetBytes(jsonData);

        using (UnityWebRequest www = new UnityWebRequest($"{url}/{device.id}", "PUT"))
        {
            www.uploadHandler = new UploadHandlerRaw(dataToByte);
            www.downloadHandler = new DownloadHandlerBuffer();
            www.SetRequestHeader("Content-Type", "application/json");

            var operation = www.SendWebRequest();

            while (!operation.isDone)
            {
                await Task.Yield(); // Chờ đợi trong khi vẫn duy trì hiệu suất
            }

            if (www.result != UnityWebRequest.Result.Success)
            {
                Debug.LogError($"Error: {www.error}");
            }
            else
            {
                Debug.Log("Update complete!");
            }
        }
    }
}
