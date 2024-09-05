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
        canvas_Parent = GetComponentInParent<Canvas>();
        if (!canvas_Parent) return;
        jB_TSD_Detail_Panel_Prefab = canvas_Parent.transform.Find("Detail_JB_TSD")?.gameObject;
        jB_TSD_Title = jB_TSD_Detail_Panel_Prefab?.transform.Find("Horizontal_JB_TSD_Title/JB_TSD_Title")?.GetComponent<TMP_Text>();
        jb_location_value = jB_TSD_Detail_Panel_Prefab?.transform.Find("Scroll_Area/Content/Text_JB_location_group/Text_JB_Location_Value")?.GetComponent<TMP_Text>();
        jb_location_imagePrefab = jB_TSD_Detail_Panel_Prefab?.transform.Find("Scroll_Area/Content/JB_location_imagePrefab")?.GetComponent<Image>();
        jb_connection_imagePrefab_group = jB_TSD_Detail_Panel_Prefab?.transform.Find("Scroll_Area/Content/JB_TSD_connection_imagePrefab_group")?.gameObject;
        jb_connection_imagePrefab = jb_connection_imagePrefab_group?.transform.Find("JB_TSD_connection_imagePrefab")?.GetComponent<Image>();
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
        var addressableKeys = new List<string> { "Real_Outdoor_JB_TSD", "default" };
        pendingSpriteLoads = addressableKeys.Count;

        foreach (var key in addressableKeys)
        {
            Addressables.LoadAssetsAsync<Sprite>(key, sprite =>
            {
                spriteCache[sprite.name] = sprite;
            }).Completed += OnSpriteLoadComplete;
        }
    }

    private void OnSpriteLoadComplete(AsyncOperationHandle<IList<Sprite>> handle)
    {
        if (handle.Status != AsyncOperationStatus.Succeeded)
        {
            Debug.LogError("Failed to load sprites: " + handle.OperationException);
            return;
        }

        pendingSpriteLoads--;
        if (pendingSpriteLoads == 0)
        {
            ApplyFilteredSprites();
        }
    }

    private void ApplyFilteredSprites()
    {
        var filteredList = spriteCache.Keys
            .Where(key => key.StartsWith($"{jb_name}_") && key.Split('_').Length > 1)
            .OrderBy(key => int.Parse(key.Split('_')[1][0].ToString()))
            .ToList();

        ApplyMainLocationSprite();
        ApplyConnectionSprites(filteredList);
    }

    private void ApplyMainLocationSprite()
    {
        if (!spriteCache.TryGetValue(jb_name, out var jbSprite))
        {
            spriteCache.TryGetValue("TSD_none", out jbSprite);
        }
        jb_location_imagePrefab.sprite = jbSprite;
    }

    private void ApplyConnectionSprites(List<string> filteredList)
    {
        foreach (var imageName in filteredList)
        {
            var imageObject = Instantiate(jb_connection_imagePrefab, jb_connection_imagePrefab_group.transform);
            if (spriteCache.TryGetValue(imageName, out var sprite))
            {
                imageObject.GetComponent<Image>().sprite = sprite;
            }
            else
            {
                Debug.LogError($"Sprite not found: {imageName}");
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
