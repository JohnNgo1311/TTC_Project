using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System.Linq;

public class NavDetail_JB_TSD : MonoBehaviour
{
    public GameObject imagePrefab; // Tham chiếu đến prefab của hình ảnh
    public Transform parentPanel; // Tham chiếu đến Panel cha chứa các nhóm dọc => content
    public GameObject jB_TSD_General_Panel;
    public GameObject jB_TSD_Detail_Panel;
    public TMP_Text jB_TSD_Title;
    float width, height;

    // Danh sách để lưu các đối tượng đã tạo ra
    private List<GameObject> createdObjects = new List<GameObject>();

    // Mỗi Button tương ứng 1 JB_TSD
    void Start()
    {
        jB_TSD_Detail_Panel.SetActive(false);
    }

    void Update()
    {
        if (GlobalVariable.jb_TSD_Title != "")
        {
            jB_TSD_Title.text = GlobalVariable.jb_TSD_Title.Substring(1);

        }
    }

    public void NavigateJBDetailScreen(string jB_TSD_Name)
    {
        GlobalVariable.jb_TSD_Title = jB_TSD_Name;
        jB_TSD_General_Panel.SetActive(false);
        jB_TSD_Detail_Panel.SetActive(true);
        Sprite[] jb_TSD_images;
        jb_TSD_images = Resources.LoadAll<Sprite>("images/JB_TSD");
        // Lọc các ảnh có tên chứa jB_TSD_Name
        List<string> imagesName = new List<string>();
        imagesName = jb_TSD_images
            .Where(sprite => sprite.name.Contains(jB_TSD_Name))
            .Select(sprite => sprite.name)
            .ToList();
        Debug.Log(imagesName.Count);
        CreateVerticalGroup(imagesName);
    }

    private void CreateVerticalGroup(List<string> imageNames)
    {
        GameObject verticalGroup = new GameObject("VerticalGroup");
        createdObjects.Add(verticalGroup); // Lưu trữ đối tượng vào danh sách
        verticalGroup.transform.SetParent(parentPanel, false);

        RectTransform rectTransform = verticalGroup.AddComponent<RectTransform>();
        RectTransform imagePrefabRectTransform = imagePrefab.GetComponent<RectTransform>();
        width = imagePrefabRectTransform.rect.width;
        height = parentPanel.GetComponent<RectTransform>().rect.height;

        // Chỉnh verticalGroup theo Content
        rectTransform.sizeDelta = new Vector2(width, height);
        rectTransform.anchoredPosition = new Vector2(0, 0);
        rectTransform.anchorMin = new Vector2(0.5f, 0.5f);
        rectTransform.anchorMax = new Vector2(0.5f, 0.5f);

        // Chỉnh thuộc tính Vertical LayoutGroup
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
            // verticalGroup là parent, tạo imageObject mới từ imagePrefab
            GameObject imageObject = Instantiate(imagePrefab, verticalGroup.transform);
            createdObjects.Add(imageObject); // Lưu trữ đối tượng vào danh sách
            RectTransform objectRectTransform = imageObject.GetComponent<RectTransform>();
            objectRectTransform.sizeDelta = new Vector2(imagePrefabRectTransform.rect.width, imagePrefabRectTransform.rect.height);
            Image imageComponent = imageObject.GetComponent<Image>();
            imageObject.SetActive(true);
            Sprite sprite = Resources.Load<Sprite>($"images/JB_TSD/{imageName}");
            if (sprite != null)
            {
                imageComponent.sprite = sprite;
            }
            else
            {
                Debug.LogError("Không tìm thấy sprite: " + imageName);
            }
        }
    }

    public void NavigatePop()
    {
        // Xóa tất cả các đối tượng đã tạo ra
        foreach (GameObject obj in createdObjects)
        {
            Destroy(obj);
        }
        createdObjects.Clear();

        jB_TSD_Detail_Panel.SetActive(false);
        jB_TSD_General_Panel.SetActive(true);
    }
}
