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
    private RectTransform contentTransform;
    private TMP_Text code_Value_Text;
    private TMP_Text function_Value_Text;
    private TMP_Text range_Value_Text;
    private TMP_Text io_Value_Text;
    private TMP_Text jb_Connection_Value_Text;
    private TMP_Text jb_Connection_Location_Text;
    private Image module_Image;
    private GameObject JB_Connection_Group;
    private Image JB_Location_Image_Prefab;
    private Image JB_Connection_Wiring_Image_Prefab;
    private GameObject JB_Connection_Wiring_Group;
    private Dictionary<string, Sprite> spriteCache = new Dictionary<string, Sprite>();
    private int pendingSpriteLoads = 0;
    private List<Image> instantiatedImages = new List<Image>(); // Danh sách lưu trữ các Image đã instantiate
    //Sciript này sử dụng cho Dropdown_On_ValueChange trong trang PLC Box
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
        if (GlobalVariable_Search_Devices.devices_Model_By_Grapper.Count > 0)
        {
            UpdateDeviceInformation(GlobalVariable_Search_Devices.devices_Model_By_Grapper[0]);
        }

        //     LoadDeviceSprites();
        inputField.onValueChanged.AddListener(OnInputValueChanged);
        inputField.text = GlobalVariable_Search_Devices.devices_Model_By_Grapper[0].code;
    }

    private void CacheUIElements()
    {
        contentTransform = prefab_Device.transform.Find("Content").GetComponent<RectTransform>();
        code_Value_Text = contentTransform.Find("Device_information/Code_group/Code_value").GetComponent<TMP_Text>();
        function_Value_Text = contentTransform.Find("Device_information/Function_group/Function_value").GetComponent<TMP_Text>();
        range_Value_Text = contentTransform.Find("Device_information/Range_group/Range_value").GetComponent<TMP_Text>();
        io_Value_Text = contentTransform.Find("Device_information/IO_group/IO_value").GetComponent<TMP_Text>();
        jb_Connection_Value_Text = contentTransform.Find("JB_Connection_group/JB_Connection_text_group/JB_Connection_value").GetComponent<TMP_Text>();
        jb_Connection_Location_Text = contentTransform.Find("JB_Connection_group/JB_Connection_text_group/JB_Connection_location").GetComponent<TMP_Text>();
        module_Image = contentTransform.Find("Module_group/Real_Module_Image").GetComponent<Image>();
        JB_Connection_Group = contentTransform.Find("JB_Connection_group").gameObject;
        JB_Location_Image_Prefab = JB_Connection_Group.transform.Find("JB_Location_Image").GetComponent<Image>();
        JB_Connection_Wiring_Group = contentTransform.Find("JB_Connection_group/JB_Connection_Wiring_Group").gameObject;
        JB_Connection_Wiring_Image_Prefab = JB_Connection_Wiring_Group.transform.Find("JB_Connection_Wiring").GetComponent<Image>();
    }

    private void OnInputValueChanged(string input)
    {
        ClearWiringGroupAndCache();
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
                        .Where(key => key.StartsWith($"{GlobalVariable_Search_Devices.jbName}_") && key.Split('_').Length > 1 && int.TryParse(key.Split('_')[1][0].ToString(), out _))
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
        ClearInstantiatedImages();
        JB_Location_Image_Prefab.transform.gameObject.SetActive(true);

        // Apply Sprite cho JB_Location_Image khi số lượng JB > 1 (ví dụ: JB100-JB101)
        if (GlobalVariable_Search_Devices.jbName.Contains("-"))
        {
            JB_Location_Image_Prefab.transform.gameObject.SetActive(false);
            string[] jb_name_split = GlobalVariable_Search_Devices.jbName.Split('-');
            foreach (string jb in jb_name_split)
            {
                CreateAndSetSprite($"{jb.Trim()}_Location");
            }
        }
        else
        {   // Apply Sprite cho JB_Location_Image khi số lượng JB chỉ có 1
            SetSprite(JB_Location_Image_Prefab, $"{GlobalVariable_Search_Devices.jbName}_Location");
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

    private void SetSprite(Image imageComponent, string jb_name)
    {
        if (!spriteCache.TryGetValue(jb_name, out var jbSprite))
        {
            spriteCache.TryGetValue("JB_Location_none", out jbSprite);
        }
        imageComponent.sprite = jbSprite;
    }

    private void CreateAndSetSprite(string jb_name)
    {
        Image jb_location_image_new = Instantiate(JB_Location_Image_Prefab, JB_Connection_Group.transform);
        int index = JB_Location_Image_Prefab.transform.GetSiblingIndex();
        jb_location_image_new.transform.SetSiblingIndex(index + 1);

        jb_location_image_new.gameObject.SetActive(true);
        SetSprite(jb_location_image_new, jb_name);
        instantiatedImages.Add(jb_location_image_new);
    }
    void AdjustGroupSize()
    {
        float totalHeight = 0f;

        // Tính tổng chiều cao của tất cả các con
        foreach (Transform child in contentTransform.transform)
        {
            RectTransform childRect = child.GetComponent<RectTransform>();
            if (childRect != null)
            {
                totalHeight += childRect.rect.height;
            }
        }

        // Cập nhật kích thước của JB_Connection_group
        contentTransform.sizeDelta = new Vector2(contentTransform.sizeDelta.x, (float)(totalHeight * 1.15));
    }

    private void ClearInstantiatedImages()
    {
        foreach (Image img in instantiatedImages)
        {
            if (img != null)
            {
                Destroy(img.gameObject);
            }
        }
        instantiatedImages.Clear();
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
        inputField.onValueChanged.RemoveListener(OnInputValueChanged);
        spriteCache.Clear();
    }
}
