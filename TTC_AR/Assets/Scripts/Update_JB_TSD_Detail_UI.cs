using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System.Linq;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;

public class Update_JB_TSD_Detail_UI : MonoBehaviour
{
    public string grapper;
    [SerializeField] private GameObject jB_TSD_Detail_Panel_Prefab;
    [SerializeField] private Canvas canvas_Parent;
    [SerializeField] private TMP_Text jB_TSD_Title;
    [SerializeField] private TMP_Text jb_location_value;
    [SerializeField] private GameObject jb_location_imagePrefab_hortizontal_group;
    [SerializeField] private Image jb_location_imagePrefab;
    [SerializeField] private Image jb_connection_imagePrefab;
    [SerializeField] private GameObject jb_connection_imagePrefab_group;

    private List<Image> instantiatedImages = new List<Image>(); // Danh sách lưu trữ các Image đã instantiate
    private string jb_name;
    private string jb_location;
    private Dictionary<string, Sprite> spriteCache1 = new Dictionary<string, Sprite>();
    private Dictionary<string, Sprite> spriteCache = new Dictionary<string, Sprite>();

    private int pendingSpriteLoads;

    private void OnEnable()
    {
        SetJobDetails();
        InitializeReferences();
        UpdateTitle();
        LoadSprites();
    }

    private void SetJobDetails()
    {
        var jobDetails = GlobalVariable.jb_TSD_Title.Split('_');
        jb_name = jobDetails[0];
        jb_location = jobDetails.Length > 1 ? jobDetails[1] : string.Empty;
    }

    private void InitializeReferences()
    {
        if (canvas_Parent == null)
        {
            canvas_Parent = GetComponentInParent<Canvas>();
        }
        if (!canvas_Parent) return;

        if (jB_TSD_Detail_Panel_Prefab == null)
        {
            jB_TSD_Detail_Panel_Prefab = canvas_Parent.transform.Find("Detail_JB_TSD")?.gameObject;
        }

        if (jB_TSD_Title == null)
        {
            jB_TSD_Title = jB_TSD_Detail_Panel_Prefab?.transform.Find("Horizontal_JB_TSD_Title/JB_TSD_Title")?.GetComponent<TMP_Text>();
        }

        if (jb_location_value == null)
        {
            jb_location_value = jB_TSD_Detail_Panel_Prefab?.transform.Find("Scroll_Area/Content/Text_JB_location_group/Text_JB_Location_Value")?.GetComponent<TMP_Text>();
        }

        if (jb_location_imagePrefab_hortizontal_group == null)
        {
            jb_location_imagePrefab_hortizontal_group = jB_TSD_Detail_Panel_Prefab?.transform.Find("Scroll_Area/Content/JB_location_imagePrefab_Horizontal_Group").gameObject;
        }

        if (jb_location_imagePrefab == null)
        {
            jb_location_imagePrefab = jb_location_imagePrefab_hortizontal_group?.transform.Find("JB_location_imagePrefab")?.GetComponent<Image>();
        }

        if (jb_connection_imagePrefab_group == null)
        {
            jb_connection_imagePrefab_group = jB_TSD_Detail_Panel_Prefab?.transform.Find("Scroll_Area/Content/JB_TSD_connection_imagePrefab_group")?.gameObject;
        }

        if (jb_connection_imagePrefab == null)
        {
            jb_connection_imagePrefab = jb_connection_imagePrefab_group?.transform.Find("JB_TSD_connection_imagePrefab")?.GetComponent<Image>();
        }
    }

    private void UpdateTitle()
    {
        if (!string.IsNullOrEmpty(jb_name))
        {
            jB_TSD_Title.text = jb_name;
            jb_location_value.text = jb_location;
        }
    }

    private void LoadSprites()
    {
        Load_Real_Outdoor_JB_TSD_Sprites();
        Load_Grapper_Connection_Wiring_Sprites();
    }

    private void Load_Real_Outdoor_JB_TSD_Sprites()
    {
        pendingSpriteLoads++;
        Addressables.LoadAssetsAsync<Sprite>("Real_Outdoor_JB_TSD", sprite =>
        {
            spriteCache[sprite.name] = sprite;
            Debug.Log($"Loaded sprite: {sprite.name}");
        }).Completed += On_Real_Outdoor_JB_TSD_Sprites_LoadComplete;
    }

    private void On_Real_Outdoor_JB_TSD_Sprites_LoadComplete(AsyncOperationHandle<IList<Sprite>> handle)
    {
        if (handle.Status != AsyncOperationStatus.Succeeded)
        {
            Debug.LogError("Failed to load Real_Outdoor_JB_TSD sprites: " + handle.OperationException);
            return;
        }

        pendingSpriteLoads--;
        CheckIfAllSpritesLoaded();
    }

    private void Load_Grapper_Connection_Wiring_Sprites()
    {
        pendingSpriteLoads++;
        Addressables.LoadAssetsAsync<Sprite>($"Grapper{grapper}_Connection_Wiring", sprite =>
        {
            spriteCache[sprite.name] = sprite;
        }).Completed += On_Grapper_Connection_Wiring_Sprites_LoadComplete;
    }

    private void On_Grapper_Connection_Wiring_Sprites_LoadComplete(AsyncOperationHandle<IList<Sprite>> handle)
    {
        if (handle.Status != AsyncOperationStatus.Succeeded)
        {
            Debug.LogError($"Failed to load Grapper{grapper}_Connection_Wiring sprites: " + handle.OperationException);
            return;
        }

        pendingSpriteLoads--;
        CheckIfAllSpritesLoaded();
    }

    private void CheckIfAllSpritesLoaded()
    {
        if (pendingSpriteLoads == 0)
        {
            ApplyFilteredSprites();
        }
    }

    private void ApplyFilteredSprites()
    {
        var filteredList = spriteCache.Keys
            .Where(key => key.StartsWith($"{jb_name}_") && key.Split('_').Length > 1 && int.TryParse(key.Split('_')[1][0].ToString(), out _))
            .OrderBy(key => int.Parse(key.Split('_')[1][0].ToString()))
            .ToList();

        ApplyMainLocationSprite();
        ApplyConnectionSprites(filteredList);
    }

    private void ApplyMainLocationSprite()
    {
        ClearInstantiatedImages();
        jb_location_imagePrefab.transform.gameObject.SetActive(true);

        if (jb_name.Contains("-"))
        {
            jb_location_imagePrefab.transform.gameObject.SetActive(false);

            string[] jb_name_split = jb_name.Split('-');
            foreach (string jb in jb_name_split)
            {
                CreateAndSetSprite($"{jb}_Location");
            }
        }
        else
        {
            SetSprite(jb_location_imagePrefab, $"{jb_name}_Location");
        }
    }

    private void CreateAndSetSprite(string jb_name)
    {
        Image jb_location_image_new = Instantiate(jb_location_imagePrefab, jb_location_imagePrefab_hortizontal_group.transform);
        jb_location_image_new.gameObject.SetActive(true);
        SetSprite(jb_location_image_new, jb_name);
        instantiatedImages.Add(jb_location_image_new);
    }

    private void SetSprite(Image imageComponent, string jb_name)
    {
        if (!spriteCache.TryGetValue(jb_name, out var jbSprite))
        {
            spriteCache.TryGetValue("TSD_Location_none", out jbSprite);
        }
        imageComponent.sprite = jbSprite;
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

    private void ApplyConnectionSprites(List<string> filteredList)
    {
        foreach (var imageName in filteredList)
        {
            var imageObject = Instantiate(jb_connection_imagePrefab, jb_connection_imagePrefab_group.transform);
            if (spriteCache.TryGetValue(imageName, out var sprite))
            {
                imageObject.GetComponent<Image>().sprite = sprite;

                Vector2 spriteSize = sprite.rect.size;
                RectTransform rectTransform = imageObject.GetComponent<RectTransform>();
                rectTransform.sizeDelta = new Vector2(rectTransform.sizeDelta.x, spriteSize.y / 1.3f);
            }
            imageObject.gameObject.SetActive(true);
        }

        jb_connection_imagePrefab.gameObject.SetActive(false);
    }

    private void OnDisable()
    {
        ClearSpritesAndObjects();
    }

    private void ClearSpritesAndObjects()
    {
        foreach (Transform child in jb_connection_imagePrefab_group.transform)
        {
            if (child.gameObject != jb_connection_imagePrefab.gameObject)
            {
                Destroy(child.gameObject);
            }
        }
        spriteCache.Clear();
    }
}
