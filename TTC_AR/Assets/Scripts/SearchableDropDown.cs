using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using Newtonsoft.Json;
using TMPro;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class SearchableDropDown : MonoBehaviour
{
    public GameObject combobox;
    public GameObject arrowButtonUp;
    public GameObject arrowButtonDown;
    public GameObject itemPrefab;
    public TMP_InputField inputField;
    public ScrollRect scrollRect;
    public GameObject content;
    private RectTransform contentRect;
    private List<string> availableOptions = new List<string>() { };

    private List<GameObject> itemGameObjects = new List<GameObject>();
    private bool contentActive = false;

    public delegate void OnValueChangedDel(string val);
    public OnValueChangedDel OnValueChangedEvt;
    // private bool isTemplateDestroyed = false;
    private void Awake()
    {
        availableOptions = Save_Data_To_Local.GetStringList("List_Device_For_Fitler_A");
        Debug.Log($"Khởi tạo availableOptions từ Local: {availableOptions.Count} + {availableOptions[0]}");
        contentRect = content.GetComponent<RectTransform>();
        Initialize();
    }

    private void Start()
    {
        inputField.onValueChanged.AddListener(OnInputValueChange);
        arrowButtonDown.GetComponent<Button>().onClick.AddListener(ToggleDropdown);
        arrowButtonUp.GetComponent<Button>().onClick.AddListener(ToggleDropdown);
        UpdateUI();
    }

    private void Initialize()
    {
        if (combobox == null)
        {
            Debug.LogError("Combobox chưa được gán!");
            return;
        }
        if (scrollRect == null || inputField == null || content == null)
        {
            Debug.LogError("Không thể tìm thấy các thành phần cần thiết trong combobox!");
            return;
        }
        PopulateDropdown(availableOptions);
    }

    private void PopulateDropdown(List<string> options)
    {
        GameObject itemTemplate = itemPrefab != null ? itemPrefab : Resources.Load<GameObject>("Prefabs/ItemTemplate");
        if (itemTemplate == null)
        {
            Debug.LogError("ItemTemplate không được tìm thấy trong Resources!");
            return;
        }

        for (int i = 0; i < options.Count; i++)
        {
            Instantiate(itemTemplate, content.transform);
        }


        //  StartCoroutine(WaitForSomeSeconds(3f));
        // isTemplateDestroyed = true;
        ResizeContent();
        scrollRect.gameObject.SetActive(false);
    }
    private IEnumerator WaitForSomeSeconds(float time)
    {
        Debug.Log("Bắt đầu đợi...");
        yield return new WaitForSeconds(time);  // Đợi 2 giây
        Debug.Log($"Đợi {time} giây đã xong!");
    }
    private void UpdateUI()
    {

        // Lấy dữ liệu từ local nếu cần
        if (availableOptions == null || availableOptions.Count == 0 || string.IsNullOrWhiteSpace(availableOptions[5]))
        {
            availableOptions = Save_Data_To_Local.GetStringList("List_Device_For_Fitler_A");
            Debug.Log($"Tái Sử dụng data từ Local: {availableOptions.Count} + {availableOptions[5]}");
        }

        Debug.Log($"Số phần tử availableOptions hiện tại: {availableOptions.Count}");

        // Lặp qua các đối tượng con
        for (int i = 0; i < content.transform.childCount; i++)
        {
            Transform childTransform = content.transform.GetChild(i);
            GameObject childGameObject = childTransform.gameObject;


            // Kiểm tra chỉ số
            if (i < availableOptions.Count)
            {
                string optionText = availableOptions[i];
                var textComponent = childTransform.Find("Text")?.GetComponent<TMP_Text>();

                if (textComponent != null)
                {
                    // Cập nhật textComponent và tên gameObject
                    if (!string.IsNullOrWhiteSpace(optionText))
                    {
                        textComponent.text = optionText;
                        childGameObject.name = optionText;
                        Debug.Log($"Cập nhật text cho new Object: {textComponent.text} + {optionText}");
                    }
                    else
                    {
                        Debug.LogWarning($"Option text is null or white space for index {i}");
                    }
                }

                // Thêm itemButton nếu chưa có
                if (!itemGameObjects.Contains(childGameObject))
                {
                    itemGameObjects.Add(childGameObject);
                    var itemButton = childGameObject.GetComponent<Button>();

                    if (itemButton != null)
                    {
                        itemButton.onClick.AddListener(() => OnItemSelected(childGameObject.name));
                    }
                    else
                    {
                        Debug.LogError("Không thể tìm thấy Button trong itemPrefab!");
                    }
                }
            }
            else
            {
                Debug.LogError($"Chỉ số {i} vượt quá kích thước danh sách availableOptions.");
            }


        }


    }


    private void ToggleDropdown()
    {
        contentActive = !contentActive;
        SetContentActive(contentActive);
    }

    private void SetContentActive(bool isActive)
    {
        scrollRect.gameObject.SetActive(isActive);
        arrowButtonDown.gameObject.SetActive(!isActive);
        arrowButtonUp.gameObject.SetActive(isActive);
        ResizeContent();
    }

    private void OnInputValueChange(string input)
    {
        if (!availableOptions.Contains(input))
        {
            FilterDropdown(input);
        }
    }

    private void FilterDropdown(string input)
    {
        bool hasActiveItems = false;
        foreach (var item in itemGameObjects)
        {
            bool shouldActivate = item.name.ToLower().Contains(input.ToLower());
            item.SetActive(shouldActivate);
            if (shouldActivate) hasActiveItems = true;
        }
        SetContentActive(hasActiveItems);
        ResizeContent();
    }

    private void ResizeContent()
    {
        Canvas.ForceUpdateCanvases();
        LayoutRebuilder.ForceRebuildLayoutImmediate(contentRect);
        int activeItemCount = contentRect.Cast<Transform>().Count(child => child.gameObject.activeSelf);
        RectTransform itemRect = contentRect.GetChild(0).GetComponent<RectTransform>();
        float newHeight = itemRect.sizeDelta.y * activeItemCount * 1.2f;
        contentRect.sizeDelta = new Vector2(contentRect.sizeDelta.x, newHeight);
    }

    private void OnItemSelected(string selectedItem)
    {
        inputField.text = selectedItem;
        StartCoroutine(CheckIfValidInput(selectedItem));
        arrowButtonDown.gameObject.SetActive(false);
        arrowButtonUp.gameObject.SetActive(true);
        scrollRect.gameObject.SetActive(false);
    }

    IEnumerator CheckIfValidInput(string input)
    {
        yield return new WaitForSeconds(0.5f);
        if (!availableOptions.Contains(input))
        {
            Debug.LogWarning("Invalid Input! Please choose from the dropdown.");
            inputField.text = string.Empty;
        }
        if (!string.IsNullOrEmpty(inputField.text))
        {
            OnValueChangedEvt?.Invoke(inputField.text);
        }
    }

    public void ResetDropDown()
    {
        inputField.text = string.Empty;
    }
}
