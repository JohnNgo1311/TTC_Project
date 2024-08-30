using System.Collections.Generic;
using UnityEngine;
using TMPro;
using Unity.VisualScripting;

public class DropdownSearch : MonoBehaviour
{
    public GameObject prefab_Device;
    private TMP_InputField inputField;

    [SerializeField]
    private GameObject parentGameObject; // GameObject cha chứa các GameObject mục tiêu

    void Awake()
    {

    }

    void start()
    {
        // Kiểm tra nếu `inputField` hoặc `parentGameObject` không được gán
        if (inputField == null || parentGameObject == null)
        {
            Debug.LogError("InputField hoặc ParentGameObject không được gán!");
        }
        else
        {
            inputField.onValueChanged.AddListener(OnInputValueChanged);
        }
    }
    private void OnInputValueChanged(string input)
    {
        if (string.IsNullOrEmpty(input)) return;
        else
        {
            if (prefab_Device != null)
            {
                prefab_Device.gameObject.name = "Scroll_Area_01TT007";
            }
            //! device_Information
            TMP_Text code_Value_Text = prefab_Device.transform.Find("Content/Device_Information/Code_group/Code_value").GetComponent<TMP_Text>();
            TMP_Text function_Value_Text = prefab_Device.transform.Find("Content/Device_Information/Function_group/Funtcion_value").GetComponent<TMP_Text>();
            TMP_Text range_Value_Text = prefab_Device.transform.Find("Content/Device_Information/Range_group/Range_value").GetComponent<TMP_Text>();
            TMP_Text io_Value_Text = prefab_Device.transform.Find("Content/Device_Information/IO_group/IO_value").GetComponent<TMP_Text>();
            //! JB_Connection
            TMP_Text jb_Connection_Value_Text = prefab_Device.transform.Find("Content/JB_Connection_group/JB_Connection_text_group/JB_Connection_Value").GetComponent<TMP_Text>();
            TMP_Text jb_Connection_Location_Text = prefab_Device.transform.Find("Content/JB_Connection_group/JB_Connection_text_group/JB_Connection_Location").GetComponent<TMP_Text>();
        }

    }
}
