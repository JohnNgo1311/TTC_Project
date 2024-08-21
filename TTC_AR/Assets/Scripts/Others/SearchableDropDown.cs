using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using Debug = UnityEngine.Debug;

public class SearchableDropDown : MonoBehaviour
{
    [SerializeField] private Button arrowButtonUp;
    [SerializeField] private Button arrowButtonDown;
    [SerializeField] private GameObject itemPrefab = null;
    // [SerializeField] private int maxContentHeight = 1500;
    [SerializeField] private List<string> availableOptions = new List<string>();
    [SerializeField] private GameObject combobox = null;
    [SerializeField] private TMP_InputField inputField = null;
    [SerializeField] private ScrollRect scrollRect = null;
    [SerializeField] private RectTransform content = null;

    private List<Button> itemButtons = new List<Button>();
    private bool contentActive = false;

    public delegate void OnValueChangedDel(string val);
    public OnValueChangedDel OnValueChangedEvt;

    void Awake()
    {
        if (GlobalVariable_Search_Devices.devices_Model_For_Filter?.Count > 0)
        {
            availableOptions = GlobalVariable_Search_Devices.devices_Model_For_Filter;
        }
        Initialize();
    }
    private void Start()
    {

    }

    private void Initialize()
    {
        scrollRect = combobox.GetComponentInChildren<ScrollRect>();
        inputField = combobox.GetComponentInChildren<TMP_InputField>();
        content = scrollRect.content;
        PopulateDropdown(availableOptions);

        inputField.onValueChanged.AddListener(OnInputValueChange);
        arrowButtonDown.onClick.AddListener(ToggleDropdown);
        arrowButtonUp.onClick.AddListener(ToggleDropdown);
    }

    private void ToggleDropdown()
    {
        contentActive = !contentActive;
        SetContentActive(contentActive);
    }

    private void SetContentActive(bool isActive)
    {
        scrollRect.gameObject.SetActive(isActive);
        arrowButtonDown.gameObject.SetActive(isActive);
        arrowButtonUp.gameObject.SetActive(!isActive);
        ResizeContent();
    }

    private void PopulateDropdown(List<string> options)
    {
        StartCoroutine(InstantiateItemsWithTimeout(options, 10f));
    }
    IEnumerator InstantiateItemsWithTimeout(List<string> options, float timeout)
    {
        Stopwatch stopwatch = new Stopwatch();
        stopwatch.Start();

        float startTime = Time.time;
        foreach (var option in options)
        {
            if (Time.time - startTime > timeout)
            {
                Debug.LogWarning("Quá trình Instantiate đã vượt quá 10 giây và sẽ dừng lại.");
                yield break; // Dừng coroutine nếu vượt quá thời gian cho phép
            }
            GameObject newObject = Instantiate<GameObject>(Resources.Load<GameObject>("Prefabs/ItemTemplate"), content);
            //newObject.GetComponentInChildren<TMP_Text>().transform.SetParent(newObject.transform, false);
            newObject.GetComponentInChildren<TMP_Text>().text = option;
            newObject.name = option;
            Debug.Log($"Text: {newObject.name}");
            Debug.Log($"Tên: {newObject.name}");
            var itemButton = newObject.GetComponent<Button>();
            itemButtons.Add(itemButton);
            itemButton.onClick.AddListener(() => OnItemSelected(option));
            yield return null; // Đợi một frame để tiếp tục
        }
        stopwatch.Stop();
        // In ra thời gian đã đo
        Debug.Log("Thời gian để Instantiate: " + stopwatch.ElapsedMilliseconds + "ms");
        Destroy(itemPrefab);
        ResizeContent();
        scrollRect.gameObject.SetActive(false);
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
        foreach (var item in itemButtons)
        {
            bool shouldActivate = item.name.ToLower().Contains(input.ToLower());
            item.gameObject.SetActive(shouldActivate);
            if (shouldActivate) hasActiveItems = true;
        }
        SetContentActive(hasActiveItems);
        ResizeContent();
    }

    private void ResizeContent()
    {
        Canvas.ForceUpdateCanvases();
        LayoutRebuilder.ForceRebuildLayoutImmediate((RectTransform)content.transform);

        int activeItemCount = content.Cast<Transform>().Count(child => child.gameObject.activeSelf == true);

        RectTransform itemRect = content.GetChild(0).GetComponent<RectTransform>();

        float newHeight = itemRect.sizeDelta.y * activeItemCount * (float)1.05;

        Vector2 sizeDelta = content.sizeDelta;
        sizeDelta.y = newHeight;
        content.sizeDelta = sizeDelta;
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
        if (inputField.text != string.Empty)
        {
            OnValueChangedEvt?.Invoke(inputField.text);
        }
    }
    //TODO note lại có thể sử dụng
    private void OnScrollRectvalueChange(Vector2 arg0)
    {
        // Không cần xử lý gì thêm ở đây cho Android
    }
    //TODO note lại có thể sử dụng
    public void ResetDropDown()
    {
        inputField.text = string.Empty;
    }

    //TODO note lại có thể sử dụng
    private void OnEndEditing(string arg)
    {
        if (string.IsNullOrEmpty(arg))
        {
            UnityEngine.Debug.Log("No value entered.");
            return;
        }
        StartCoroutine(CheckIfValidInput(arg));
    }



    //TODO note lại có thể sử dụng
    private void OnDDButtonClick()
    {
        if (GetActiveButtons() <= 0)
        {
            return;
        }
        //  ResizeContent();
        //SetContentActive(isContentHidden);
    }
    //TODO note lại có thể sử dụng

    private float GetActiveButtons()
    {
        var buttonRect = itemPrefab.GetComponent<RectTransform>().sizeDelta.y;
        var count = content.transform.Cast<Transform>().Count(child => child.gameObject.activeSelf);
        return buttonRect * count;
    }

}
