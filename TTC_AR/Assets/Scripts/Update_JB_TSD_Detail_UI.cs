using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System.Linq;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;

//! Script này để load data sau khi chuyển trang đến JB_TSD_Detail_Panel 
public class Update_JB_TSD_Detail_UI : MonoBehaviour
{
    public GameObject jB_TSD_Detail_Panel_Prefab;
    public GameObject canvas_Parent;
    
    [SerializeField]
    private TMP_Text jB_TSD_Title;
    [SerializeField]
    private TMP_Text jb_location_value;
    [SerializeField]
    private Image jb_location_iamgePrefab; // Tham chiếu đến prefab của hình ảnh
    [SerializeField]
    private Image jb_connection_imagePrefab; // Tham chiếu đến prefab của hình ảnh
    [SerializeField]
    private GameObject jb_connection_imagePrefab_group; // Tham chiếu đến prefab của hình ảnh

    private Transform parentPanel; // Tham chiếu đến Panel cha chứa các nhóm dọc => content
    private GameObject jB_TSD_General_Panel;
    private GameObject jB_TSD_Detail_Panel;
    private Button buttons_Nav_JB_TSD_Detail;
    private float width, height;

    private List<GameObject> createdObjects = new List<GameObject>();
    private Dictionary<string, Sprite> spriteCache = new Dictionary<string, Sprite>();
    void Start()
    {
    }

    void Update()
    {
        if (!string.IsNullOrEmpty(GlobalVariable.jb_TSD_Title))
        {
            jB_TSD_Title.text = GlobalVariable.jb_TSD_Title.Substring(1);
        }
    }
    private void OnEnable()
    {
        //? tiêu đề của JB_TSD
        jB_TSD_Title = jB_TSD_Detail_Panel_Prefab.transform.Find("Horizontal_JB_TSD_Title/JB_TSD_Title").GetComponent<TMP_Text>();
        //? giá trị của JB_location
        jb_location_value = jB_TSD_Detail_Panel_Prefab.transform.Find("Scroll_Area/Content/Text_JB_location_group/Text_Jb_Location_Value").GetComponent<TMP_Text>();
        //? prefab của hình ảnh JB_location
        jb_location_iamgePrefab = jB_TSD_Detail_Panel_Prefab.transform.Find("Scroll_Area/Content/JB_location_imagePrefab").GetComponent<Image>();
        //? prefab của group và hình ảnh JB_connection
        jb_connection_imagePrefab_group = jB_TSD_Detail_Panel_Prefab.transform.Find("Scroll_Area/Content/JB_TSD_connection_imagePrefab_group").gameObject;
        jb_connection_imagePrefab = jb_connection_imagePrefab_group.transform.Find("JB_TSD_connection_imagePrefab").GetComponent<Image>();
        /* parentPanel = jB_TSD_Detail_Panel_Prefab.transform.Find("Content");
         jB_TSD_General_Panel = jB_TSD_Detail_Panel_Prefab.transform.Find("JB_TSD_General_Panel").gameObject;
         jB_TSD_Detail_Panel = jB_TSD_Detail_Panel_Prefab.transform.Find("JB_TSD_Detail_Panel").gameObject;
         buttons_Nav_JB_TSD_Detail = jB_TSD_Detail_Panel_Prefab.transform.Find("Buttons_Nav_JB_TSD_Detail").GetComponent<Button>();*/
        Load_Sprites();
    }

    private void Load_Sprites()
    {
        List<string> addressableKeys = new List<string>
        {
            "Real_Outdoor_JB_TSD",
            "default" // Default là JB_Wiring
        };

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
                /* var filteredList = spriteCache.Keys
                     .Where(key => key.Contains($"{GlobalVariable_Search_Devices.jbName}_"))
                     .Select(key =>
                     {
                         var parts = key.Split('_');
                         return parts.Length > 1 && int.TryParse(parts[1], out int number) ? number : (int?)null;
                     })
                     .Where(number => number.HasValue)
                     .OrderBy(number => number.Value)
                     .Select(number => $"{GlobalVariable_Search_Devices.jbName}_{number.Value}")
                     .ToList();*/

                //ApplySpritesToImages(filteredList);
            }
            else
            {
                Debug.LogError("Failed to load sprites: " + handle.OperationException);
            }
        };
    }


    //! Thực hiện các hành động tiếp theo sau khi tất cả sprite đã tải
    private void OnSpritesLoadComplete(AsyncOperationHandle<IList<Sprite>> handle)

    {
        if (handle.Status == AsyncOperationStatus.Succeeded)
        {
        }
        else
        {
            Debug.LogError("Failed to load sprites: " + handle.OperationException);

        }
    }

    public void NavigateJBDetailScreen(string jB_TSD_Name)
    {
        GlobalVariable.jb_TSD_Title = jB_TSD_Name;
        jB_TSD_General_Panel.SetActive(false);
        jB_TSD_Detail_Panel.SetActive(true);

        List<string> imagesName = spriteCache.Keys
            .Where(name => name.Contains(jB_TSD_Name))
            .ToList();

        Debug.Log(imagesName.Count);
        // CreateVerticalGroup(imagesName);
    }

    private void Update_Detail_Data(List<string> imageNames)
    {
        /*   GameObject verticalGroup = new GameObject("VerticalGroup");
           createdObjects.Add(verticalGroup);
           verticalGroup.transform.SetParent(parentPanel, false);

           RectTransform rectTransform = verticalGroup.AddComponent<RectTransform>();
           RectTransform jb_location_iamgePrefabRectTransform = jb_location_iamgePrefab.GetComponent<RectTransform>();
           width = jb_location_iamgePrefabRectTransform.rect.width;
           height = parentPanel.GetComponent<RectTransform>().rect.height;

           rectTransform.sizeDelta = new Vector2(width, height);
           rectTransform.anchoredPosition = new Vector2(0, 0);
           rectTransform.anchorMin = new Vector2(0.5f, 0.5f);
           rectTransform.anchorMax = new Vector2(0.5f, 0.5f);

           VerticalLayoutGroup layoutGroup = verticalGroup.AddComponent<VerticalLayoutGroup>();
           layoutGroup.childAlignment = TextAnchor.UpperCenter;
           layoutGroup.padding = new RectOffset(0, 0, 30, 0);
           layoutGroup.childControlWidth = false;
           layoutGroup.childControlHeight = false;
           layoutGroup.childForceExpandWidth = false;
           layoutGroup.childForceExpandHeight = false;
           layoutGroup.spacing = 20;

           foreach (string imageName in imageNames)
           {
               GameObject imageObject = Instantiate(jb_location_iamgePrefab, verticalGroup.transform);
               createdObjects.Add(imageObject);
               RectTransform objectRectTransform = imageObject.GetComponent<RectTransform>();
               objectRectTransform.sizeDelta = new Vector2(jb_location_iamgePrefabRectTransform.rect.width, jb_location_iamgePrefabRectTransform.rect.height);
               Image imageComponent = imageObject.GetComponent<Image>();
               imageObject.SetActive(true);

               if (spriteCache.TryGetValue(imageName, out Sprite sprite))
               {
                   imageComponent.sprite = sprite;
               }
               else
               {
                   Debug.LogError("Không tìm thấy sprite: " + imageName);
               }
           }*/
    }

    public void NavigatePop()
    {
        foreach (GameObject obj in createdObjects)
        {
            Destroy(obj);
        }
        createdObjects.Clear();

        jB_TSD_Detail_Panel.SetActive(false);
        jB_TSD_General_Panel.SetActive(true);
    }
}
