using System.Collections.Generic;
using UnityEngine;

public class OpenCanvas : MonoBehaviour
{
    public List<GameObject> targetCanvas;
    public List<GameObject> imageTargets;

    [SerializeField]
    private List<string> tagName;

    [SerializeField]
    private Camera mainCamera;

    [SerializeField]
    private List<GameObject> btnOpen, btnClose;

    [SerializeField]
    private List<GameObject> generalPanel;
    private bool isShowCanvas = false;

    void Awake()
    {
        // Sử dụng kiểm tra độ dài trước khi thực hiện để tránh lỗi
        int canvasCount = targetCanvas.Count;
        Debug.Log("canvasCount: " + canvasCount);
        for (int i = 0; i < canvasCount; i++)
        {
            Debug.Log("i: " + i);
            if (targetCanvas[i] != null)
            {
                generalPanel.Add(targetCanvas[i].transform.Find("General_Panel")?.gameObject);
                btnClose.Add(generalPanel[i].transform.Find("Close_Canvas_Btn")?.gameObject);
            }
        }

        int imageTargetCount = imageTargets.Count;
        Debug.Log("imageTargetCount: " + imageTargetCount);
        for (int i = 0; i < imageTargetCount; i++)
        {
            btnOpen.Add(imageTargets[i].transform.GetChild(0)?.gameObject);
            tagName.Add(btnOpen[i].tag);
        }
    }
    private void OnDestroy()
    {
        tagName.Clear();
        btnOpen.Clear();
        btnClose.Clear();
        generalPanel.Clear();
    }
    void Start()
    {
        // Ẩn tất cả các canvas
        SetActiveForList(targetCanvas, false);
        SetActiveForList(generalPanel, true);
        SetActiveForList(btnClose, false);
        SetActiveForList(btnOpen, true);
    }

    void Update()
    {
        if (Input.GetMouseButtonDown(0) || Input.touchCount > 0)
        {
            Vector3 inputPosition = Input.GetMouseButtonDown(0) ? Input.mousePosition : (Vector3)Input.GetTouch(0).position;
            HandleInput(inputPosition);
        }
    }

    private void HandleInput(Vector3 inputPosition)
    {
        Ray ray = mainCamera.ScreenPointToRay(inputPosition);
        if (Physics.Raycast(ray, out RaycastHit hit))
        {
            // Dùng FindIndex để tìm nhanh hơn thay vì lặp
            int index = tagName.FindIndex(tag => hit.collider.CompareTag(tag));
            if (index != -1)
            {
                if (isShowCanvas)
                    OnCloseCanvas(index);
                else
                    OnOpenCanvas(index);

                isShowCanvas = !isShowCanvas;
            }
        }
    }

    private void OnOpenCanvas(int index)
    {
        if (IsValidIndex(index, targetCanvas))
            targetCanvas[index].SetActive(true);

        SetActiveForList(imageTargets, false);
        if (IsValidIndex(index, btnOpen))
            btnOpen[index].SetActive(false);

        if (IsValidIndex(index, btnClose))
            btnClose[index].SetActive(true);
    }

    private void OnCloseCanvas(int index)
    {
        if (IsValidIndex(index, targetCanvas))
            targetCanvas[index].SetActive(false);

        SetActiveForList(imageTargets, true);
        if (IsValidIndex(index, btnClose) && btnClose[index].activeSelf)
            btnClose[index].SetActive(false);

        if (IsValidIndex(index, btnOpen) && !btnOpen[index].activeSelf)
            btnOpen[index].SetActive(true);
    }

    // Phương thức hỗ trợ kiểm tra chỉ số hợp lệ
    private bool IsValidIndex(int index, List<GameObject> list)
    {
        return list != null && index >= 0 && index < list.Count;
    }

    // Phương thức hỗ trợ đặt trạng thái SetActive cho tất cả phần tử của danh sách
    private void SetActiveForList(List<GameObject> list, bool isActive)
    {
        if (list != null)
        {
            foreach (var obj in list)
            {
                if (obj != null && obj.activeSelf != isActive)
                {
                    obj.SetActive(isActive);
                }
            }
        }
    }
}
