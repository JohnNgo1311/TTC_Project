using System.Collections.Generic;
using UnityEngine;

public class OpenCanvas : MonoBehaviour
{
    [SerializeField]
    private Camera mainCamera;

    public List<GameObject> targetCanvas, btnOpen, btnClose;
    public List<GameObject> generalPanel;
    public List<string> tagName;
    public List<GameObject> imageTargets;
    private bool isShowCanvas = false;

    void Start()
    {
        // Đảm bảo rằng danh sách không rỗng trước khi thao tác
        if (targetCanvas != null)
        {
            foreach (var canvas in targetCanvas)
            {
                canvas.SetActive(false);
            }
        }

        if (generalPanel != null)
        {
            foreach (var panel in generalPanel)
            {
                panel.SetActive(true);
            }
        }

        if (btnClose != null)
        {
            foreach (var btn in btnClose)
            {
                btn.SetActive(false);
            }
        }

        if (btnOpen != null)
        {
            foreach (var btn in btnOpen)
            {
                btn.SetActive(true);
            }
        }
    }

    void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            HandleInput(Input.mousePosition);
        }
        else if (Input.touchCount > 0)
        {
            HandleInput(Input.GetTouch(0).position);
        }
    }

    private void HandleInput(Vector3 inputPosition)
    {
        Ray ray = mainCamera.ScreenPointToRay(inputPosition);
        if (Physics.Raycast(ray, out RaycastHit hit))
        {
            // Kiểm tra tất cả các tagName
            for (int i = 0; i < tagName.Count; i++)
            {
                if (hit.collider.CompareTag(tagName[i]))
                {
                    if (isShowCanvas)
                    {
                        OnCloseCanvas(i);
                    }
                    else
                    {
                        OnOpenCanvas(i);
                    }
                    isShowCanvas = !isShowCanvas;
                    break;
                }
            }
        }
    }

    private void OnOpenCanvas(int index)
    {
        if (targetCanvas != null && index < targetCanvas.Count)
        {
            targetCanvas[index].SetActive(true);
        }

        if (imageTargets != null)
        {
            foreach (GameObject imageTarget in imageTargets)
            {
                imageTarget.SetActive(false);
            }
        }

        if (btnOpen != null && index < btnOpen.Count)
        {
            btnOpen[index].SetActive(false);
        }

        if (btnClose != null && index < btnClose.Count)
        {
            btnClose[index].SetActive(true);
        }
    }

    private void OnCloseCanvas(int index)
    {
        if (targetCanvas != null && index < targetCanvas.Count)
        {
            targetCanvas[index].SetActive(false);
        }

        if (imageTargets != null)
        {
            foreach (GameObject imageTarget in imageTargets)
            {
                imageTarget.SetActive(true);
            }
        }

        if (btnClose != null && index < btnClose.Count)
        {
            if (btnClose[index].activeSelf)
            {
                btnClose[index].SetActive(false);

            }
        }

        if (btnOpen != null && index < btnOpen.Count)
        {
            if (!btnOpen[index].activeSelf)
            {
                btnOpen[index].SetActive(true);
            }
        }
    }
}
