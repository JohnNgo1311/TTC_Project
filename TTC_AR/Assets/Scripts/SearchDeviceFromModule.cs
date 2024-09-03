using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class SearchDeviceFromModule : MonoBehaviour
{
    public List<TMP_Text> deviceInformation = new List<TMP_Text>();
    private List<DeviceModel> listDeviceFromModule;
    private DeviceModel deviceInfor;
    public TMP_Dropdown dropdown;
    public GameObject contentPanel;
    public GameObject target_Parent_Canvas;
    private string moduleName = "D1.0.I";
    private const string noDeviceMessage = "không có thiết bị kết nối";

    private void OnEnable()
    {
        if (target_Parent_Canvas.activeSelf)
        {
            // Tách moduleName một lần và lưu trữ
            moduleName = target_Parent_Canvas.name.Split('_')[0];
            listDeviceFromModule = Get_List_Device_By_Module(moduleName);

            // Xóa các tùy chọn trước đó
            dropdown.options.Clear();

            if (listDeviceFromModule.Count > 0)
            {
                // Chuyển đổi danh sách thiết bị thành danh sách tùy chọn cho dropdown
                foreach (var device in listDeviceFromModule)
                {
                    dropdown.options.Add(new TMP_Dropdown.OptionData(device.code));
                }

                // Đảm bảo rằng option1 luôn được chọn
                dropdown.value = 0;
                dropdown.RefreshShownValue();
                OnValueChange(0); // Gọi OnValueChange để cập nhật thông tin thiết bị đầu tiên
            }
            else
            {
                // Nếu không có thiết bị nào, thêm tùy chọn mặc định
                dropdown.options.Add(new TMP_Dropdown.OptionData(noDeviceMessage));
                dropdown.value = 0;
                dropdown.RefreshShownValue();

                // Ẩn contentPanel và xóa thông tin thiết bị
                contentPanel.SetActive(false);
                ClearDeviceInformation();
            }

            // Gán sự kiện chỉ khi dropdown đã sẵn sàng
            dropdown.onValueChanged.AddListener(OnValueChange);
        }
    }

    private void OnDisable()
    {
        // Xóa các tùy chọn trong dropdown
        dropdown.options.Clear();

        // Xóa thông tin hiển thị về thiết bị
        ClearDeviceInformation();

        // Ẩn contentPanel
        contentPanel.SetActive(false);

        // Gỡ sự kiện khi OnDisable được gọi
        dropdown.onValueChanged.RemoveListener(OnValueChange);
    }

    void Start()
    {
        contentPanel.SetActive(false);
    }

    public void OnValueChange(int value)
    {
        if (value >= 0 && value < listDeviceFromModule.Count)
        {
            deviceInfor = listDeviceFromModule[value];
            UpdateDeviceInformation(deviceInfor);

            if (!contentPanel.activeSelf)
            {
                contentPanel.SetActive(true);
            }
        }
        else
        {
            // Nếu chọn tùy chọn mặc định "không có thiết bị kết nối"
            contentPanel.SetActive(false);
            ClearDeviceInformation();
        }
    }

    private List<DeviceModel> Get_List_Device_By_Module(string moduleName)
    {
        return GlobalVariable_Search_Devices.devices_Model_By_Grapper.FindAll(
            device => device.ioAddress.StartsWith(moduleName + ".")
        );
    }

    private void UpdateDeviceInformation(DeviceModel device)
    {
        deviceInformation[0].text = device.code;
        deviceInformation[1].text = device.function;
        deviceInformation[2].text = device.rangeMeasurement;
        deviceInformation[3].text = device.ioAddress;

        var jbParts = device.jbConnection.Split('_');
        deviceInformation[4].text = jbParts[0];
        deviceInformation[5].text = jbParts.Length > 1 ? jbParts[1] : string.Empty;
    }

    private void ClearDeviceInformation()
    {
        foreach (var info in deviceInformation)
        {
            info.text = string.Empty;
        }
    }
}
