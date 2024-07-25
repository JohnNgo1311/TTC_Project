using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PressPDF : MonoBehaviour
{

    public List<Button> listButton;
    public string[] urls;
    void Start()
    {
        for (int i = 0; i < listButton.Count; i++)
        {
            int localIndex = i; // Tạo bản sao cục bộ của i
            listButton[i].onClick.AddListener(() => OpenURL(localIndex, urls[localIndex]));
        }
    }


    void OpenURL(int index, string url)
    {
        Application.OpenURL(url);
    }
}
