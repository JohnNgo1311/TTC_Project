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
    [SerializeField] private List<string> availableOptions = GlobalVariable_Search_Devices.devices_Model_For_Filter ?? new List<string>();

    private List<GameObject> itemGameObjects = new List<GameObject>();
    private bool contentActive = false;

    public delegate void OnValueChangedDel(string val);
    public OnValueChangedDel OnValueChangedEvt;

    private void Awake()
    {
        Initialize();
    }

    private void Start()
    {
        UpdateUI();
        inputField.onValueChanged.AddListener(OnInputValueChange);
        arrowButtonDown.GetComponent<Button>().onClick.AddListener(ToggleDropdown);
        arrowButtonUp.GetComponent<Button>().onClick.AddListener(ToggleDropdown);

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

        contentRect = content.GetComponent<RectTransform>();
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

        foreach (string option in options)
        {
            Instantiate(itemTemplate, content.transform);
        }

        Destroy(itemPrefab);
        ResizeContent();
        scrollRect.gameObject.SetActive(false);
    }

    private void UpdateUI()
    {
        foreach (Transform child in content.transform)
        {
            GameObject childGameObject = child.gameObject;
            int index = child.GetSiblingIndex() - 1;
            if (index >= 0 && index < availableOptions.Count)
            {
                var textComponent = child.transform.Find("Text")?.GetComponent<TMP_Text>();
                if (textComponent != null)
                {
                    if (string.IsNullOrWhiteSpace(availableOptions[index]))
                    {
                        availableOptions = Save_Data_To_Local.GetStringList("List_Device_For_Fitler_A");
                        Debug.Log("Sử dụng data từ Local: List_Device_For_Fitler_A");
                    }
                    if (!string.IsNullOrWhiteSpace(availableOptions[index]))
                    {
                        textComponent.text = availableOptions[index]; ;
                        Debug.Log($"Cập nhật text cho new Object: {textComponent.text}");
                        childGameObject.name = availableOptions[index];
                    }
                }
                else
                {
                    Debug.LogError("Không thể tìm thấy TMP_Text trong itemPrefab!");
                }



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
            else if (index >= availableOptions.Count)
            {
                Debug.LogError($"Chỉ số {index} vượt quá kích thước danh sách availableOptions.");
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
        int activeItemCount = contentRect.Cast<Transform>().Count(child => child.gameObject.activeSelf);
        RectTransform itemRect = contentRect.GetChild(0).GetComponent<RectTransform>();
        float newHeight = itemRect.sizeDelta.y * activeItemCount * 1.05f;

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
