using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class openOneScreen : MonoBehaviour
{
    public GameObject screen;
    void Start()
    {
        screen.SetActive(false);
    }
    void Update()
    {
    }
    public void OpenScreen()
    {
        screen.SetActive(true);
    }

    public void NavigatePop()
    {

        screen.SetActive(false);
    }
}