using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System.Linq;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;

public class Update_JB_TSD_Detail_UI : MonoBehaviour
{
    [SerializeField] private GameObject jB_TSD_Detail_Panel_Prefab;
    [SerializeField] private Canvas canvas_Parent;
    [SerializeField] private TMP_Text jB_TSD_Title;
    [SerializeField] private TMP_Text jb_location_value;
    [SerializeField] private Image jb_location_imagePrefab;
    [SerializeField] private Image jb_connection_imagePrefab;
    [SerializeField] private GameObject jb_connection_imagePrefab_group;
    private string jb_name;
    private string jb_location;
    private Dictionary<string, Sprite> spriteCache = new Dictionary<string, Sprite>();
    private List<string> addressableKeys = new List<string>();
    private int pendingSpriteLoads = 0; // Biến để theo dõi số lượng tài nguyên đang tải

    private void OnEnable()
    {
        jb_name = GlobalVariable.jb_TSD_Title.Split('_')[0];
        jb_location = GlobalVariable.jb_TSD_Title.Split('_')[1];
        InitializeReferences();
        UpdateTitle();
        LoadSprites();
    }

    // Caching references to UI elements
    private void InitializeReferences()
    {
        canvas_Parent = GetComponentInParent<Canvas>();
        jB_TSD_Detail_Panel_Prefab = canvas_Parent.gameObject.transform.Find("Detail_JB_TSD").gameObject;
        //? tiêu đề của JB_TSD
        jB_TSD_Title = jB_TSD_Detail_Panel_Prefab.transform.Find("Horizontal_JB_TSD_Title/JB_TSD_Title").GetComponent<TMP_Text>();
        //? giá trị của JB_location
        jb_location_value = jB_TSD_Detail_Panel_Prefab.transform.Find("Scroll_Area/Content/Text_JB_location_group/Text_JB_Location_Value").GetComponent<TMP_Text>();
        //? prefab của hình ảnh JB_location
        jb_location_imagePrefab = jB_TSD_Detail_Panel_Prefab.transform.Find("Scroll_Area/Content/JB_location_imagePrefab").GetComponent<Image>();
        //? prefab của group và hình ảnh JB_connection
        jb_connection_imagePrefab_group = jB_TSD_Detail_Panel_Prefab.transform.Find("Scroll_Area/Content/JB_TSD_connection_imagePrefab_group").gameObject;
        //? prefab của hình ảnh JB_connection
        jb_connection_imagePrefab = jb_connection_imagePrefab_group.transform.Find("JB_TSD_connection_imagePrefab").GetComponent<Image>();
    }

    private void UpdateTitle()
    {
        if (!string.IsNullOrEmpty(GlobalVariable.jb_TSD_Title))
        {
            jB_TSD_Title.text = jb_name;
            jb_location_value.text = jb_location;
        }
    }

    private void LoadSprites()
    {
        addressableKeys = new List<string>
        {
            "Real_Outdoor_JB_TSD",
            "default" // Default là JB_Wiring
        };

        pendingSpriteLoads = addressableKeys.Count; // Cập nhật số lượng tài nguyên cần tải

        foreach (var key in addressableKeys)
        {
            PreloadSprites(key);
        }
    }

    // Loads and caches sprites based on addressable keys
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
                    ApplyFilteredSprites();
                }
            }
            else
            {
                Debug.LogError("Failed to load sprites: " + handle.OperationException);
            }
        };
    }

    // Filters and applies sprites to the appropriate images
    private void ApplyFilteredSprites()
    {
        var filteredList = spriteCache.Keys
                    .Where(key => key.StartsWith($"{GlobalVariable_Search_Devices.jbName}_") && key.Split('_').Length > 1)
                    .OrderBy(key => int.Parse(key.Split('_')[1][0].ToString()))
                    .ToList();
        // Filter keys and order numerically


        Debug.Log("Filtered list: " + filteredList.Count); // Chỉ in ra 1 lần khi hoàn tất tải

        // Apply main location sprite
        ApplyMainLocationSprite();

        // Apply connection sprites
        ApplyConnectionSprites(filteredList);
    }

    private void ApplyMainLocationSprite()
    {
        if (spriteCache.TryGetValue(jb_name, out Sprite jbSprite))
        {
            jb_location_imagePrefab.sprite = jbSprite;
        }
        else
        {
            spriteCache.TryGetValue("TSD_none", out Sprite jb_none_Sprite);
            jb_location_imagePrefab.sprite = jb_none_Sprite;
        }
    }

    private void ApplyConnectionSprites(List<string> filteredList)
    {
        foreach (var imageName in filteredList)
        {
            var imageObject = Instantiate(jb_connection_imagePrefab, jb_connection_imagePrefab_group.transform);
            var imageComponent = imageObject.GetComponent<Image>();
            imageObject.name = imageName;
            if (spriteCache.TryGetValue(imageName, out Sprite jb_Connection_sprite))
            {
                imageComponent.sprite = jb_Connection_sprite;
            }
            else
            {
                Debug.LogError("Sprite not found: " + imageName);
            }
            imageObject.gameObject.SetActive(true);
        }
        jb_connection_imagePrefab.gameObject.SetActive(false);
    }

    private void OnDisable()
    {
        ClearSpritesAndObjects();
    }

    // Clears loaded objects and sprite cache when disabling the panel
    private void ClearSpritesAndObjects()
    {
        foreach (Transform child in jb_connection_imagePrefab_group.transform)
        {
            if (child.gameObject.activeSelf)
            {
                Destroy(child.gameObject);
            }
        }
        spriteCache.Clear();
    }
}
