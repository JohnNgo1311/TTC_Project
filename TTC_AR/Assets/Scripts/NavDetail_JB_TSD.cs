using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System.Linq;
using Unity.VisualScripting;
public class NavDetail_JB_TSD : MonoBehaviour
{

    public GameObject imagePrefab; // Tham chiếu đến prefab của hình ảnh
    public Transform parentPanel; // Tham chiếu đến Panel cha chứa các nhóm dọc => content
    public GameObject jB_TSD_General_Panel;
    public GameObject jB_TSD_Detail_Panel;
    public TMP_Text jB_TSD_Title;
    float width, height;
    //Mỗi Button tương ứng 1 JB_TSD
    void Start()
    {
        jB_TSD_General_Panel.SetActive(true);
        jB_TSD_Detail_Panel.SetActive(false);
    }
    void Update()
    {
        jB_TSD_Title.text = GlobalVariable.jb_TSD_Title;

    }
    public void NavigateJBDetailScreen(string jB_TSD_Name)
    {
        GlobalVariable.jb_TSD_Title = jB_TSD_Name;
        jB_TSD_General_Panel.SetActive(false);
        jB_TSD_Detail_Panel.SetActive(true);
        Sprite[] jb_TSD_images = Resources.LoadAll<Sprite>("images/JB_TSD");
        // Lọc các ảnh có tên chứa jB_TSD_Name
        List<string> imagesName = jb_TSD_images
            .Where(sprite => sprite.name.Contains(jB_TSD_Name))
            .Select(sprite => sprite.name)
            .ToList();
        Debug.Log(imagesName.Count);
        CreateVerticalGroup(imagesName);
    }
    private void CreateVerticalGroup(List<string> imageNames)
    {
        GameObject verticalGroup = new GameObject("VerticalGroup");
        verticalGroup.transform.SetParent(parentPanel, false);
        RectTransform rectTransform = verticalGroup.AddComponent<RectTransform>();
        RectTransform imagePrefabRectTransform = imagePrefab.GetComponent<RectTransform>();

        width = imagePrefabRectTransform.rect.width;
        height = parentPanel.GetComponent<RectTransform>().rect.height;

        //? Chỉnh verticalGroup theo Content
        rectTransform.sizeDelta = new Vector2(width, height);
        rectTransform.anchoredPosition = new Vector2(0, 0);
        rectTransform.anchorMin = new Vector2(0.5f, 0.5f);
        rectTransform.anchorMax = new Vector2(0.5f, 0.5f);
        //? chỉnh thuộc tính vertical LayoutGroup
        VerticalLayoutGroup layoutGroup = verticalGroup.AddComponent<VerticalLayoutGroup>();
        layoutGroup.childAlignment = TextAnchor.UpperCenter;
        layoutGroup.padding = new RectOffset(0, 0, 20, 0);
        layoutGroup.childControlWidth = false;
        layoutGroup.childControlHeight = false;
        layoutGroup.childForceExpandWidth = false;
        layoutGroup.childForceExpandHeight = false;
        layoutGroup.spacing = 30;


        foreach (string imageName in imageNames)
        {
            //! verticalGroup là parent, tạo imageObject mới từ imagePrefab
            GameObject imageObject = Instantiate(imagePrefab, verticalGroup.transform);
            RectTransform objectRectTransform = imageObject.GetComponent<RectTransform>();
            objectRectTransform.sizeDelta = new Vector2(1442.48f, 1016.24f);

            Image imageComponent = imageObject.GetComponent<Image>();
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
        //Destroy(imagePrefab);
    }
    public void NavigatePop()
    {
        jB_TSD_Detail_Panel.SetActive(false);
        jB_TSD_General_Panel.SetActive(true);
    }


}
