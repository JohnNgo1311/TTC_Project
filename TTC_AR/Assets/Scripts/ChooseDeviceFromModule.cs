using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Unity.VisualScripting;
using UnityEngine.UI;

public class ChooseDeviceFromModule : MonoBehaviour
{
    public List<TMP_Text> deviceInformation = new List<TMP_Text>();
    private List<DeviceModel> listDeviceFromModule;
    private DeviceModel deviceInfor;
    public TMP_Dropdown dropdown;

    public GameObject contentPanel;
    void Start()
    {
        contentPanel.SetActive(false);
        if (GlobalVariable_Search_Devices.deviceModels != null)
        {
            listDeviceFromModule = GlobalVariable_Search_Devices.deviceModels;
            Debug.Log(listDeviceFromModule.Count);
        }
        else
        {
            Debug.LogWarning("Device models list is null.");
        }
    }
    public void OnValueChange()
    {
        int index = dropdown.value;
        string selectedOption = dropdown.options[index].text;

        deviceInfor = GetDeviceByCode(selectedOption);
        if (deviceInfor != null)
        {
            UpdateDeviceInformation(deviceInfor);
        }
        else
        {
            Debug.LogWarning($"No device found with code: {selectedOption}");
        }
        if (contentPanel.activeSelf == false)
        {
            contentPanel.SetActive(true);
        }
    }
    private DeviceModel GetDeviceByCode(string codeDevice)
    {
        DeviceModel listDevice = listDeviceFromModule.Find(device => device.code == codeDevice);
        // Debug.Log(listDevice.code);
        return listDevice;
    }
    private void UpdateDeviceInformation(DeviceModel device)
    {
        deviceInformation[0].text = device.code;
        deviceInformation[1].text = device.function;
        deviceInformation[2].text = device.rangeMeasurement;
        deviceInformation[3].text = device.ioAddress;
        string jbName = device.jbConnection.Split('_')[0];
        string jBLocation = device.jbConnection.Split('_')[1];
        deviceInformation[4].text = jbName;
        deviceInformation[5].text = jBLocation;
    }
}
