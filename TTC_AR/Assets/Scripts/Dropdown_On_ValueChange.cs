using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;
using UnityEngine.UI;
using System.Linq;


//! Sử dụng khi InputField thay đổi giá trị thì cập nhật giao diện ở trang Menu Search Devices (Tra cứu nhanh)
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
    private Image JB_Connection_Wiring_Image_Prefab;
    private GameObject JB_Connection_Wiring_Group;
    private Dictionary<string, Sprite> spriteCache = new Dictionary<string, Sprite>();
    private int pendingSpriteLoads = 0;

    private void Awake()
    {
        if (inputField == null)
        {
            Debug.LogError("InputField không được gán!");
            return;
        }
    }
    private void Start()
    {
        CacheUIElements();
        inputField.onValueChanged.AddListener(OnInputValueChanged);
    }
    private void CacheUIElements()
    {
        var contentTransform = prefab_Device.transform.Find("Content");

        code_Value_Text = contentTransform.Find("Device_information/Code_group/Code_value").GetComponent<TMP_Text>();
        function_Value_Text = contentTransform.Find("Device_information/Function_group/Function_value").GetComponent<TMP_Text>();
        range_Value_Text = contentTransform.Find("Device_information/Range_group/Range_value").GetComponent<TMP_Text>();
        io_Value_Text = contentTransform.Find("Device_information/IO_group/IO_value").GetComponent<TMP_Text>();
        jb_Connection_Value_Text = contentTransform.Find("JB_Connection_group/JB_Connection_text_group/JB_Connection_value").GetComponent<TMP_Text>();
        jb_Connection_Location_Text = contentTransform.Find("JB_Connection_group/JB_Connection_text_group/JB_Connection_location").GetComponent<TMP_Text>();
        module_Image = contentTransform.Find("Module_group/Real_Module_Image").GetComponent<Image>();
        JB_Location_Image = contentTransform.Find("JB_Connection_group/JB_Connection_Image").GetComponent<Image>();
        JB_Connection_Wiring_Group = contentTransform.Find("JB_Connection_group/JB_Connection_Wiring_Group").gameObject;
        JB_Connection_Wiring_Image_Prefab = JB_Connection_Wiring_Group.transform.Find("JB_Connection_Wiring").GetComponent<Image>();
    }

    private void OnInputValueChanged(string input)
    {
        if (string.IsNullOrEmpty(input))
        {
            ClearWiringGroupAndCache();
            return;
        }

        var device = GlobalVariable_Search_Devices.devices_Model_By_Grapper
            .FirstOrDefault(d => d.code == input || d.function == input);

        if (device == null)
        {
            ClearWiringGroupAndCache();
            return;
        }

        UpdateDeviceInformation(device);
        LoadDeviceSprites();
    }

    private void ClearWiringGroupAndCache()
    {
        // Xóa tất cả các đối tượng con trong JB_Connection_Wiring_Group
        foreach (Transform child in JB_Connection_Wiring_Group.transform)
        {
            if (child.gameObject.activeSelf && child.gameObject != JB_Connection_Wiring_Image_Prefab.gameObject)
            {
                Destroy(child.gameObject);
            }
        }

        // Xóa cache sprite
        spriteCache.Clear();
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
        var addressableKeys = new List<string>
        {
            "Real_Outdoor_JB_TSD",
            "GrapperA_Connection_Wiring"
        };

        addressableKeys.AddRange(Enumerable.Range(1, 6).Select(i => $"GrapperA_Module_Location_Rack{i}"));

        pendingSpriteLoads = addressableKeys.Count;

        foreach (var key in addressableKeys)
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
                pendingSpriteLoads--; // Giảm số lượng tài nguyên đang tải
                if (pendingSpriteLoads == 0) // Chỉ gọi khi tất cả tài nguyên đã được tải
                {
                    var filteredList = spriteCache.Keys
                        .Where(key => key.StartsWith($"{GlobalVariable_Search_Devices.jbName}_") && key.Split('_').Length > 1)
                        .OrderBy(key => int.Parse(key.Split('_')[1][0].ToString()))
                        .ToList();
                    ApplyModuleLocationSprite();
                    ApplySpritesToImages(filteredList);
                }

            }
            else
            {
                Debug.LogError($"Failed to load sprites: {handle.OperationException}");
            }
        };
    }
    private void ApplyModuleLocationSprite()
    {
        if (spriteCache.TryGetValue(GlobalVariable_Search_Devices.moduleName, out var moduleSprite))
        {
            module_Image.sprite = moduleSprite;
        }

    }
    private void ApplySpritesToImages(List<string> filteredList)
    {

        if (spriteCache.TryGetValue(GlobalVariable_Search_Devices.jbName, out var jbSprite))
        {
            JB_Location_Image.sprite = jbSprite;
        }
        else
        {
            spriteCache.TryGetValue("JB_none", out var jbNoneSprite);
            JB_Location_Image.sprite = jbNoneSprite;
        }

        foreach (var spriteName in filteredList)
        {
            if (spriteCache.TryGetValue(spriteName, out var jbConnectionSprite))
            {
                var newImage = Instantiate(JB_Connection_Wiring_Image_Prefab, JB_Connection_Wiring_Group.transform);
                newImage.sprite = jbConnectionSprite;
                newImage.gameObject.SetActive(true);
            }
        }
        JB_Connection_Wiring_Image_Prefab.gameObject.SetActive(false);
    }

    private void OnDisable()
    {
        ResetResources();
    }

    private void OnDestroy()
    {
        ResetResources();
    }

    private void ResetResources()
    {
        spriteCache.Clear();

        // Giải phóng tài nguyên Addressable nếu cần thiết
        // Addressables.Release(handle); // Thay handle bằng các handle cần giải phóng

        module_Image.sprite = null;
        JB_Location_Image.sprite = null;

        if (JB_Connection_Wiring_Group != null)
        {
            foreach (Transform child in JB_Connection_Wiring_Group.transform)
            {
                Destroy(child.gameObject);
            }
        }
    }
}
