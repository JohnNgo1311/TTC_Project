using System.Collections.Generic;
using UnityEngine;
using Newtonsoft.Json;
using TMPro;
using System;
using UnityEngine.UI;
using UnityEngine.Networking;
using System.Text;
using System.Threading.Tasks;

public class Create_New_Device_By_Grapper : MonoBehaviour
{
    [SerializeField]
    private string grapperName = "A";

    [SerializeField]
    private DeviceModel device = new DeviceModel();
    public List<TMP_InputField> inputFields = new List<TMP_InputField>();
    public Button cancelButton;
    public Button confirmButton;
    public GameObject panelDialog;
    public Show_Dialog show_Dialog;
    private void Start()
    {
        if (show_Dialog == null)
        { show_Dialog = Show_Dialog.Instance; };
        panelDialog.SetActive(false);
    }
    private void OnDestroy()
    {
        Destroy(show_Dialog);
    }
    public void OpenPanelCreateDevice()
    {
        ShowQuestionDialog(
            confirmAction: async () => await CreateDevicesByGrapper(),
            cancelAction: ClearInputFieldsAndListeners
        );
    }

    private void ShowQuestionDialog(Action confirmAction, Action cancelAction)
    {
        panelDialog.SetActive(true);
        cancelButton.onClick.AddListener(new UnityEngine.Events.UnityAction(cancelAction));
        confirmButton.onClick.AddListener(new UnityEngine.Events.UnityAction(confirmAction));
    }

    private void ClearInputFieldsAndListeners()
    {
        panelDialog.SetActive(false);
        confirmButton.onClick.RemoveAllListeners();
        cancelButton.onClick.RemoveAllListeners();
        foreach (var inputField in inputFields)
        {
            inputField.text = "";
        }
    }

    private async Task CreateDevicesByGrapper()
    {
        device.location = $"Grapper{grapperName}";
        device.code = inputFields[0].text;
        device.function = inputFields[1].text;
        device.rangeMeasurement = inputFields[2].text;
        device.ioAddress = inputFields[3].text;
        device.jbConnection = $"{inputFields[4].text}_{inputFields[5].text}";
        foreach (var inputField in inputFields)
        {
            if (string.IsNullOrEmpty(inputField.text))
            {
                Debug.LogError("Input fields cannot be empty.");
                Debug.LogError("Stop Create Device.");
                show_Dialog.ShowToast("failure", "Hãy điền đầy đủ thông tin.");
                return;
            }
        }
        show_Dialog.ShowToast("loading", "Đang cập nhật dữ liệu ", 1);
        await CreateNewDevice($"{GlobalVariable.baseUrl}{grapperName}", device);
    }

    private async Task CreateNewDevice(string url, DeviceModel device)
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
            byte[] jsonToSend = Encoding.UTF8.GetBytes(jsonData);
            webRequest.uploadHandler = new UploadHandlerRaw(jsonToSend);
            webRequest.downloadHandler = new DownloadHandlerBuffer();
            webRequest.SetRequestHeader("Content-Type", "application/json");

            var operation = webRequest.SendWebRequest();
            while (!operation.isDone)
            {
                await Task.Yield();
            }

            if (webRequest.result == UnityWebRequest.Result.ConnectionError || webRequest.result == UnityWebRequest.Result.ProtocolError)
            {
                show_Dialog.ShowToast("failure", $"Request error: {webRequest.error}");
                Debug.LogError($"Request error: {webRequest.error}");
            }
            else
            {
                try
                {
                    Debug.Log("Post data successfully.");
                    show_Dialog.ShowToast("success", "Thêm thiết bị mới thành công: " + device.code);
                    GlobalVariable_Search_Devices.all_Device_GrapperA.Add(device);
                    ClearInputFieldsAndListeners();
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
}
