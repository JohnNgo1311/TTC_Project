using System.Collections.Generic;
using System.Reflection;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class NavigationToPanels : MonoBehaviour
{
    [SerializeField] private GameObject initialScreen;
    [SerializeField] private TMP_Text generalModuleTitle;
    [SerializeField] private Canvas parentCanvas;
    [SerializeField] private GameObject[] destinationScreens;
    [SerializeField] private List<Button> navButtons;

    void Start()
    {
        if (parentCanvas == null)
            parentCanvas = GetComponentInParent<Canvas>();

        if (initialScreen == null)
            initialScreen = parentCanvas.transform.Find("InitialScreen").gameObject;

        if (generalModuleTitle == null)
            generalModuleTitle = initialScreen.transform.Find("Title").GetComponent<TMP_Text>();
        generalModuleTitle.text = GetModuleTitle(parentCanvas.gameObject.name);
        SetInitialState();

        for (int i = 0; i < navButtons.Count; i++)
        {
            int localIndex = i; // Bản sao cục bộ để tránh lỗi closure
            navButtons[i].onClick.AddListener(() => NavigateNewScreen(localIndex));
        }
    }

    private void SetInitialState()
    {
        initialScreen.SetActive(true);
        foreach (var screen in destinationScreens)
        {
            screen.SetActive(false);
        }
    }

    private string GetModuleTitle(string fullName)
    {
        // Lấy tên module từ tên của Canvas (có thể tách hoặc chỉnh sửa dễ hơn sau này)
        return $"Module {fullName.Split('_')[0]}";
    }

    public void NavigateNewScreen(int index)
    {
        initialScreen.SetActive(false);
        for (int i = 0; i < destinationScreens.Length; i++)
        {
            destinationScreens[i].SetActive(i == index);
        }
    }

    public void NavigatePop()
    {
        foreach (var screen in destinationScreens)
        {
            screen.SetActive(false);
        }
        initialScreen.SetActive(true);
    }
}
