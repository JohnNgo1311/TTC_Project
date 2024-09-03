using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class NavigationToPanels : MonoBehaviour
{
    public GameObject initialScreen;
    public GameObject[] destinationScreens;
    public List<Button> navButtons;

    [SerializeField]
    private bool navigate_To_JB_TSD_Detail = false;
    [SerializeField]
    private string jb_TSD_Title;
    //  public string tagName;
    void Start()
    {
        initialScreen.SetActive(true);
        foreach (GameObject destinationScreen in destinationScreens)
        {
            destinationScreen.SetActive(false);
        }

        for (int i = 0; i < navButtons.Count; i++)
        {
            int localIndex = i; // Tạo bản sao cục bộ của i
            navButtons[i].onClick.AddListener(() => NavigateNewScreen(localIndex));
        }
    }
    void Update()
    {
    }
    public void NavigateNewScreen(int index)
    {
        initialScreen.SetActive(false);
        destinationScreens[index].SetActive(true);

        if (navigate_To_JB_TSD_Detail && jb_TSD_Title != null)
        {
            GlobalVariable.jb_TSD_Title = jb_TSD_Title;
        }
    }

    public void NavigatePop()
    {

        foreach (GameObject destinationScreen in destinationScreens)
        {
            destinationScreen.SetActive(false);
        }
        initialScreen.SetActive(true);
    }
}
