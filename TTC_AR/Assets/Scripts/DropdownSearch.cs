using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI.Extensions;

public class DropdownSearch : MonoBehaviour
{
    [SerializeField]
    private TMP_InputField inputField;
    public GameObject parentGameObject; // GameObject cha chứa các GameObject mục tiêu

    void Start()
    {
        // Đảm bảo rằng inputField không null

    }
    public void OnInputValueChanged(string input)
    {
        if (inputField != null)
        {
            // Vô hiệu hóa tất cả các GameObject con của GameObject cha
            foreach (Transform child in parentGameObject.transform)
            {
                child.gameObject.SetActive(false);
            }

            // Kiểm tra văn bản của InputField và kích hoạt GameObject tương ứng
            foreach (Transform child in parentGameObject.transform)
            {
                if (child.gameObject.name.ToLower() == input.ToLower())
                {
                    child.gameObject.SetActive(true);
                    break; // Dừng lại sau khi kích hoạt phần tử khớp
                }
            }
        }

    }
}
