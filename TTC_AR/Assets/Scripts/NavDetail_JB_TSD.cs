using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System.Linq;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;

public class NavDetail_JB_TSD : MonoBehaviour
{
    /*  public GameObject imagePrefab; // Tham chiếu đến prefab của hình ảnh
      public Transform parentPanel; // Tham chiếu đến Panel cha chứa các nhóm dọc => content
      public GameObject jB_TSD_General_Panel;
      public GameObject jB_TSD_Detail_Panel;
      public TMP_Text jB_TSD_Title;
      public Button buttons_Nav_JB_TSD_Detail;
      private float width, height;

      private List<GameObject> createdObjects = new List<GameObject>();
      private Dictionary<string, Sprite> spriteCache = new Dictionary<string, Sprite>();*/
    public Canvas module_Canvas;
    private RectTransform list_Devices_Transform;
    private RectTransform jb_TSD_General_Transform;
    private RectTransform jb_TSD_Detail_Transform;
    void Start()
    {
        /*jB_TSD_Detail_Panel.SetActive(false);
          PreloadSprites();*/
        list_Devices_Transform = module_Canvas.gameObject.transform.Find("List_Devices").GetComponent<RectTransform>();
        jb_TSD_General_Transform = module_Canvas.gameObject.transform.Find("JB_TSD_General_Panel").GetComponent<RectTransform>();
        jb_TSD_Detail_Transform = module_Canvas.gameObject.transform.Find("Detail_JB_TSD").GetComponent<RectTransform>();

    }

    void Update()
    {
        /*if (!string.IsNullOrEmpty(GlobalVariable.jb_TSD_Title))
        {
            jB_TSD_Title.text = GlobalVariable.jb_TSD_Title.Substring(1);
        }*/
    }
    /*
        private void PreloadSprites()
        {
            Addressables.LoadAssetsAsync<Sprite>("Real_Outdoor_JB_TSD", OnSpriteLoaded).Completed += OnSpritesLoadComplete;
        }*/


    /*
        //! Xử lý mỗi sprite sau khi được tải, ví dụ: thêm vào một danh sách hoặc hiển thị trên UI
        private void OnSpriteLoaded(Sprite sprite)
        {
            spriteCache[sprite.name] = sprite; // Lưu trữ sprite vào cache
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
        }*/

    public void NavigateJBDetailScreen(string jB_TSD_Name)
    {
        GlobalVariable.jb_TSD_Title = jB_TSD_Name;
        if (GlobalVariable.navigate_from_JB_TSD_General)
        {
            jb_TSD_General_Transform.gameObject.SetActive(false);
            jb_TSD_Detail_Transform.gameObject.SetActive(true);
        }
        if (GlobalVariable.navigate_from_JB_TSD_General)
        {
            list_Devices_Transform.gameObject.SetActive(false);
            jb_TSD_Detail_Transform.gameObject.SetActive(true);
        }
        /* jB_TSD_General_Panel.SetActive(false);
         jB_TSD_Detail_Panel.SetActive(true);

         List<string> imagesName = spriteCache.Keys
             .Where(name => name.Contains(jB_TSD_Name))
             .ToList();

         Debug.Log(imagesName.Count);
         CreateVerticalGroup(imagesName);*/
    }

    /*
        private void CreateVerticalGroup(List<string> imageNames)
        {
            GameObject verticalGroup = new GameObject("VerticalGroup");
            createdObjects.Add(verticalGroup);
            verticalGroup.transform.SetParent(parentPanel, false);

            RectTransform rectTransform = verticalGroup.AddComponent<RectTransform>();
            RectTransform imagePrefabRectTransform = imagePrefab.GetComponent<RectTransform>();
            width = imagePrefabRectTransform.rect.width;
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
                GameObject imageObject = Instantiate(imagePrefab, verticalGroup.transform);
                createdObjects.Add(imageObject);
                RectTransform objectRectTransform = imageObject.GetComponent<RectTransform>();
                objectRectTransform.sizeDelta = new Vector2(imagePrefabRectTransform.rect.width, imagePrefabRectTransform.rect.height);
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
            }
        }
    */
    public  void NavigatePop()
    {

        if (GlobalVariable.navigate_from_JB_TSD_General)
        {
            jb_TSD_Detail_Transform.gameObject.SetActive(false);
            jb_TSD_General_Transform.gameObject.SetActive(true);
            GlobalVariable.navigate_from_JB_TSD_General = false;
        }
        if (GlobalVariable.navigate_from_List_Devices)
        {
            jb_TSD_Detail_Transform.gameObject.SetActive(false);
            list_Devices_Transform.gameObject.SetActive(true);
            GlobalVariable.navigate_from_List_Devices = false;
        }
        /*  foreach (GameObject obj in createdObjects)
          {
              Destroy(obj);
          }
          createdObjects.Clear();

          jB_TSD_Detail_Panel.SetActive(false);
          jB_TSD_General_Panel.SetActive(true);*/

    }
}
