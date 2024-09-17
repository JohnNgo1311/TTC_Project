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

    private List<Image> instantiatedImages = new List<Image>();
    private string jb_name;
    private string jb_location;
    private Dictionary<string, Sprite> connectionSprites = new Dictionary<string, Sprite>();
    private Dictionary<string, Sprite> locationSprites = new Dictionary<string, Sprite>();
    private int pendingSpriteLoad1 = 0;
    private int pendingSpriteLoad2 = 0;

    private void OnEnable()
    {
        SetJobDetails();
        InitializeReferences();
        UpdateTitle();
        LoadLocationSprites(); // hàm này chạy bất đông bộ
        LoadConnectionSprites(); // hàm này chạy bất đông bộ
    }

    private void SetJobDetails()
    {
        var jobDetails = GlobalVariable.jb_TSD_Title.Split('_');
        jb_name = jobDetails[0];
        Debug.Log("jb_name: " + jb_name);
        jb_location = jobDetails.Length > 1 ? jobDetails[1] : string.Empty;
        Debug.Log("jb_location: " + jb_location);
    }

    private void InitializeReferences()
    {
        canvas_Parent = GetComponentInParent<Canvas>();
        jB_TSD_Detail_Panel_Prefab = canvas_Parent?.transform.Find("Detail_JB_TSD")?.gameObject;
        jB_TSD_Title = jB_TSD_Detail_Panel_Prefab?.transform.Find("Horizontal_JB_TSD_Title/JB_TSD_Title")?.GetComponent<TMP_Text>();
        jb_location_value = jB_TSD_Detail_Panel_Prefab?.transform.Find("Scroll_Area/Content/Text_JB_location_group/Text_JB_Location_Value")?.GetComponent<TMP_Text>();
        jb_location_imagePrefab_hortizontal_group = jB_TSD_Detail_Panel_Prefab?.transform.Find("Scroll_Area/Content/JB_location_imagePrefab_Horizontal_Group").gameObject;
        jb_location_imagePrefab = jb_location_imagePrefab_hortizontal_group?.transform.Find("JB_location_imagePrefab")?.GetComponent<Image>();
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

    private void LoadLocationSprites()
    {
        pendingSpriteLoad1++;
        //! Addressables khiến cho hàm LoadLocationSprites() chạy bất đồng bộ
        Addressables.LoadAssetsAsync<Sprite>("Real_Outdoor_JB_TSD", sprite =>
        {
            locationSprites[sprite.name] = sprite;
            Debug.Log("Location sprite loaded: " + sprite.name);
        }).Completed += handle =>
        {
            Debug.Log("pendingSpriteLoads: " + pendingSpriteLoad1);
            pendingSpriteLoad1--;
            if (handle.Status == AsyncOperationStatus.Succeeded && pendingSpriteLoad1 == 0)
            {
                Debug.Log("All location sprites loaded successfully.");
                ApplyLocationSprite();
            }
            else
            {
                Debug.LogError("Failed to load location sprites");
            }
        };
    }

    private void ApplyLocationSprite()
    {
        ClearInstantiatedImages();
        jb_location_imagePrefab.transform.gameObject.SetActive(true);

        if (jb_name.Contains("-"))
        {
            jb_location_imagePrefab.transform.gameObject.SetActive(false);

            string[] jb_name_split = jb_name.Split("-");
            for (int i = 0; i < jb_name_split.Length; i++)
            {
                Create_And_Set_Sprite_For_JB_Location($"{jb_name_split[i]}_Location");
            }
        }
        else SetSpriteLocation(jb_location_imagePrefab, $"{jb_name}_Location", locationSprites);
    }

    private void Create_And_Set_Sprite_For_JB_Location(string spriteName)
    {
        // Debug.Log("spriteName: " + locationSprites[spriteName]);
        var imageObject = Instantiate(jb_location_imagePrefab, jb_location_imagePrefab_hortizontal_group.transform);
        SetSpriteLocation(imageObject, spriteName, locationSprites);
        imageObject.gameObject.SetActive(true);
        instantiatedImages.Add(imageObject);
    }
    private void LoadConnectionSprites()
    {
        pendingSpriteLoad2++;
        //! Addressables khiến cho hàm LoadConnectionSprites() chạy bất đồng bộ
        Addressables.LoadAssetsAsync<Sprite>($"Grapper{grapper}_Connection_Wiring", sprite =>
        {
            connectionSprites[sprite.name] = sprite;
            Debug.Log("sprite.name: " + sprite.name);
        }).Completed += handle =>
        {
            pendingSpriteLoad2--;
            if (handle.Status == AsyncOperationStatus.Succeeded && pendingSpriteLoad2 == 0)
            {
                Debug.Log("All location Load Connection Sprites successfully.");
                ApplyConnectionSprites();
            }
            else
            {
                Debug.LogError("Failed to LoadC onnection Sprites ");
            }
        };
    }


    private void ApplyConnectionSprites()
    {
        var filteredList = connectionSprites.Keys
            .Where(key => key.StartsWith($"{jb_name}_") && key.Split('_').Length > 1 && int.TryParse(key.Split('_')[1][0].ToString(), out _))
            .OrderBy(key => int.Parse(key.Split('_')[1][0].ToString()))
            .ToList();

        if (filteredList.Count != 0 && filteredList != null)
        {
            foreach (var imageName in filteredList)
            {
                var imageObject = Instantiate(jb_connection_imagePrefab, jb_connection_imagePrefab_group.transform);
                SetSprite(imageObject.GetComponent<Image>(), imageName, connectionSprites);
                imageObject.gameObject.SetActive(true);
            }

        }

        jb_connection_imagePrefab.gameObject.SetActive(false);
    }

    private void SetSpriteLocation(Image imageComponent, string spriteName, Dictionary<string, Sprite> spriteDictionary)
    {
        if (!spriteDictionary.TryGetValue(spriteName, out var sprite))
        {
            spriteDictionary.TryGetValue("JB_TSD_Location_Note", out sprite);
        }
        imageComponent.sprite = sprite;
    }
    private void SetSprite(Image imageComponent, string spriteName, Dictionary<string, Sprite> spriteDictionary)
    {
        spriteDictionary.TryGetValue(spriteName, out var sprite);
        imageComponent.sprite = sprite;
    }
    private void ClearInstantiatedImages()
    {
        foreach (var img in instantiatedImages)
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
        locationSprites.Clear();
        connectionSprites.Clear();
    }
}
