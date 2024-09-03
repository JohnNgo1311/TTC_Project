using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.UI;
using System.Linq;

public class Dropdown_On_ValueChange : MonoBehaviour
{
    public GameObject prefab_Device;
    public TMP_InputField inputField;
    private TMP_Text code_Value_Text;
    private TMP_Text function_Value_Text;
    private TMP_Text range_Value_Text;
    private TMP_Text io_Value_Text;
    private TMP_Text jb_Connection_Value_Text;
    private TMP_Text jb_Connection_Location_Text;
    private Image module_Image;
    private Image JB_Location_Image;
    private List<Image> JB_Connection_Wiring_Images;
    private Dictionary<string, Sprite> spriteCache = new Dictionary<string, Sprite>();

    private void Awake()
    {
        if (inputField == null)
        {
            Debug.LogError("InputField không được gán!");
            return;
        }

        inputField.onValueChanged.AddListener(OnInputValueChanged);
        CacheUIElements();
    }

    private void CacheUIElements()
    {
        Transform contentTransform = prefab_Device.transform.Find("Content");
        code_Value_Text = contentTransform.Find("Device_information/Code_group/Code_value").GetComponent<TMP_Text>();
        function_Value_Text = contentTransform.Find("Device_information/Function_group/Function_value").GetComponent<TMP_Text>();
        range_Value_Text = contentTransform.Find("Device_information/Range_group/Range_value").GetComponent<TMP_Text>();
        io_Value_Text = contentTransform.Find("Device_information/IO_group/IO_value").GetComponent<TMP_Text>();
        jb_Connection_Value_Text = contentTransform.Find("JB_Connection_group/JB_Connection_text_group/JB_Connection_value").GetComponent<TMP_Text>();
        jb_Connection_Location_Text = contentTransform.Find("JB_Connection_group/JB_Connection_text_group/JB_Connection_location").GetComponent<TMP_Text>();
        module_Image = contentTransform.Find("Module_group/Real_Module_Image").GetComponent<Image>();
        JB_Location_Image = contentTransform.Find("JB_Connection_group/JB_Connection_Image").GetComponent<Image>();

        JB_Connection_Wiring_Images = new List<Image>();
        for (int i = 1; i <= 10; i++)
        {
            Transform wiringTransform = contentTransform.Find($"JB_Connection_group/JB_Connection_Wiring_{i}");
            if (wiringTransform != null)
            {
                JB_Connection_Wiring_Images.Add(wiringTransform.GetComponent<Image>());
            }
        }

        Debug.Log("JB_Connection_Wiring_Images: " + JB_Connection_Wiring_Images.Count);
    }

    private void OnInputValueChanged(string input)
    {
        if (string.IsNullOrEmpty(input)) return;

        var device = GlobalVariable_Search_Devices.devices_Model_By_Grapper
            .FirstOrDefault(d => d.code == input || d.function == input);

        if (device == null) return;

        UpdateDeviceInformation(device);
        LoadDeviceSprites();
    }

    private void UpdateDeviceInformation(DeviceModel device)
    {
        prefab_Device.name = $"Scroll_Area_{device.code}";
        code_Value_Text.text = device.code;
        function_Value_Text.text = device.function;
        range_Value_Text.text = device.rangeMeasurement;
        io_Value_Text.text = device.ioAddress;

        var parts = device.jbConnection.Split('_');
        jb_Connection_Value_Text.text = parts[0];
        jb_Connection_Location_Text.text = parts.Length > 1 ? parts[1] : string.Empty;

        GlobalVariable_Search_Devices.jbName = parts[0];
        GlobalVariable_Search_Devices.moduleName = device.ioAddress.Substring(0, device.ioAddress.LastIndexOf('.'));
    }

    private void LoadDeviceSprites()
    {
        List<string> addressableKeys = new List<string>
        {
            "Real_Outdoor_JB_TSD",
            "default" // Default là JB_Wiring
        };

        addressableKeys.AddRange(Enumerable.Range(1, 6).Select(i => $"GrapperA_Module_Location_Rack{i}"));

        foreach (string key in addressableKeys)
        {
            PreloadSprites(key);
        }
    }

    private void PreloadSprites(string addressableKey)
    {
        Addressables.LoadAssetsAsync<Sprite>(addressableKey, sprite =>
        {
            spriteCache[sprite.name] = sprite;
        }).Completed += handle =>
        {
            if (handle.Status == AsyncOperationStatus.Succeeded)
            {
                // Lọc và sắp xếp các key với một kiểm tra phân tích số an toàn
                var filteredList = spriteCache.Keys
                    .Where(key => key.Contains($"{GlobalVariable_Search_Devices.jbName}_"))
                    .Select(key =>
                    {
                        var parts = key.Split('_');
                        return parts.Length > 1 && int.TryParse(parts[1], out int number) ? number : (int?)null;
                    })
                    .Where(number => number.HasValue)
                    .OrderBy(number => number.Value)
                    .Select(number => $"{GlobalVariable_Search_Devices.jbName}_{number.Value}")
                    .ToList();

                ApplySpritesToImages(filteredList);
            }
            else
            {
                Debug.LogError("Failed to load sprites: " + handle.OperationException);
            }
        };
    }


    private void ApplySpritesToImages(List<string> filteredList)
    {
        if (spriteCache.TryGetValue(GlobalVariable_Search_Devices.moduleName, out Sprite moduleSprite))
        {
            module_Image.sprite = moduleSprite;
        }

        if (spriteCache.TryGetValue(GlobalVariable_Search_Devices.jbName, out Sprite jbSprite))
        {
            JB_Location_Image.sprite = jbSprite;
        }
        else
        {
            spriteCache.TryGetValue("JB_none", out Sprite jb_none_Sprite);
            JB_Location_Image.sprite = jb_none_Sprite;
        }

        for (int i = 0; i < filteredList.Count && i < JB_Connection_Wiring_Images.Count; i++)
        {
            if (spriteCache.TryGetValue(filteredList[i], out Sprite jbConnectionSprite))
            {
                JB_Connection_Wiring_Images[i].sprite = jbConnectionSprite;
                JB_Connection_Wiring_Images[i].gameObject.SetActive(true);
            }
        }
    }

    private List<string> FilterDevice(List<DeviceModel> deviceModels)
    {
        return deviceModels
            .Where(device => !string.IsNullOrWhiteSpace(device.code) || !string.IsNullOrWhiteSpace(device.function))
            .SelectMany(device => new[] { device.code, device.function })
            .Where(value => !string.IsNullOrWhiteSpace(value))
            .Distinct()
            .ToList();
    }
}
