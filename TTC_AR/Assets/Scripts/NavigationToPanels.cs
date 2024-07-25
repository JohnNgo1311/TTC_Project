using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class NavigationToPanels : MonoBehaviour
{
    public GameObject initialScreen;
    public GameObject[] destinationScreens;
    public List<Button> navButtons;
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
