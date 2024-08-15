using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Unity.VisualScripting;
using UnityEngine.UI;
using System;
using JetBrains.Annotations;
using Mono.Cecil.Cil;
using UnityEngine.iOS;

public class SearchDevicesFromGrapper : MonoBehaviour
{
    public List<string> device_Code_Of_Grapper = new List<string>();
    private List<DeviceModel> list_All_Devices;
    private List<DeviceModel> list_Grapper_Devices = new List<DeviceModel>();

    private DeviceModel deviceInfor;
    public TMP_Dropdown dropdown;

    public GameObject contentPanel;

    void Awake()
    {
        if (GlobalVariable_Search_Devices.deviceModels != null)
        {
            list_All_Devices = GlobalVariable_Search_Devices.deviceModels;
            Debug.Log(list_All_Devices.Count);
        }
        else
        {
            Debug.LogWarning("Device models list is null.");
        }
        switch (GlobalVariable.recentScene)
        {
            case "PLCBoxGrapA":
                device_Code_Of_Grapper = GlobalVariable_Search_Devices.devicesGrapperA_code;
                break;
            case "PLCBoxGrapB":
                device_Code_Of_Grapper = GlobalVariable_Search_Devices.devicesGrapperA_code; //B
                break;
            case "PLCBoxGrapC":
                device_Code_Of_Grapper = GlobalVariable_Search_Devices.devicesGrapperA_code; //C
                break;
            case "PLCBoxLH":
                device_Code_Of_Grapper = GlobalVariable_Search_Devices.devicesGrapperA_code; //LH
                break;
            default:
                break;
        }
    }
    void Start()
    {
        // Tạo một HashSet để lưu trữ các mã thiết bị từ device_Code_Of_Grapper
        HashSet<string> deviceCodeSet = new HashSet<string>(device_Code_Of_Grapper);
        // Duyệt qua danh sách tất cả các thiết bị và chỉ thêm những thiết bị có mã trong HashSet
        foreach (DeviceModel device in list_All_Devices)
        {
            if (deviceCodeSet.Contains(device.code))
            {
                list_Grapper_Devices.Add(device);
            }
        }
       // contentPanel.SetActive(false);
    }



  /*  public void OnValueChange(int value)
    {

        if (value > 0 && value <= list_All_Devices.Count)
        {
            string selectedOption = dropdown.options[value].text;
            deviceInfor = GetDeviceByCode(selectedOption);
            if (deviceInfor != null)
            {
                Updatedevice_Code_Of_Grapper(deviceInfor);
            }
            else
            {
                Debug.LogWarning($"No device found with code: {selectedOption}");
            }
            if (contentPanel.activeSelf == false)
            {
                contentPanel.SetActive(true);
            }
            //dropdown.RefreshShownValue();

        }
        else if (value == 0)
        {
            contentPanel.SetActive(false);
            //   dropdown.RefreshShownValue();

        }

    }
    private DeviceModel GetDeviceByCode(string codeDevice)
    {
        DeviceModel listDevice = list_All_Devices.Find(device => device.code == codeDevice);
        // Debug.Log(listDevice.code);
        return listDevice;
    }
    private void Updatedevice_Code_Of_Grapper(DeviceModel device)
    {
        device_Code_Of_Grapper[0] = device.code;
        device_Code_Of_Grapper[1] = device.function;
        device_Code_Of_Grapper[2] = device.rangeMeasurement;
        device_Code_Of_Grapper[3] = device.ioAddress;
        string jbName = device.jbConnection.Split('_')[0];
        string jBLocation = device.jbConnection.Split('_')[1];
        device_Code_Of_Grapper[4] = jbName;
        device_Code_Of_Grapper[5] = jBLocation;
    }*/
   /* private void OnDestroy()
    {
        dropdown.onValueChanged.RemoveListener(OnValueChange);
    }*/


}
