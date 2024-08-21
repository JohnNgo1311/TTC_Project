using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class DropdownSearch : MonoBehaviour
{
    [SerializeField]
    private TMP_InputField inputField;
    [SerializeField]
    private GameObject parentGameObject; // GameObject cha chứa các GameObject mục tiêu

    void Awake()
    {
        // Kiểm tra nếu `inputField` hoặc `parentGameObject` không được gán
        if (inputField == null || parentGameObject == null)
        {
            Debug.LogError("InputField hoặc ParentGameObject không được gán!");
        }
    }

    public void OnInputValueChanged(string input)
    {
        if (string.IsNullOrEmpty(input)) return;

        bool foundMatch = false;

        foreach (Transform child in parentGameObject.transform)
        {
            bool isMatch = string.Equals(child.gameObject.name, input, System.StringComparison.OrdinalIgnoreCase);
            child.gameObject.SetActive(isMatch);
            if (isMatch)
            {
                foundMatch = true;
                break; // Dừng lại sau khi kích hoạt phần tử khớp
            }
        }

        // Nếu không tìm thấy khớp, có thể thực hiện xử lý bổ sung ở đây
        if (!foundMatch)
        {
            Debug.Log("Không tìm thấy mục nào khớp với đầu vào: " + input);
        }
    }
}
