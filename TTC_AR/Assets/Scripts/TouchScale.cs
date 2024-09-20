using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class TouchScale : MonoBehaviour
{
    private float initialTouchDistance;
    private Vector3 initialScale;
    private bool isScaling = false;
    public ScrollRect parentScrollRect;

    private GraphicRaycaster raycaster;
    private PointerEventData pointerEventData;
    private EventSystem eventSystem;

    private Canvas originalCanvas;
    private Canvas tempCanvas;

    private void Start()
    {
        initialScale = transform.localScale;

        // Tìm ScrollRect của đối tượng cha nếu có
        parentScrollRect = GetComponentInParent<ScrollRect>();

        // Lấy GraphicRaycaster từ Canvas
        raycaster = GetComponentInParent<GraphicRaycaster>();
        eventSystem = EventSystem.current;

        // Lưu trữ Canvas ban đầu của đối tượng
        originalCanvas = GetComponentInParent<Canvas>();
    }

    private void Update()
    {
        HandleTouchScaling();
    }

    private void HandleTouchScaling()
    {
        if (Input.touchCount == 2)
        {
            Touch touch0 = Input.GetTouch(0);
            Touch touch1 = Input.GetTouch(1);

            // Kiểm tra nếu cả hai ngón tay đang chạm vào đối tượng này
            if (IsTouchOverGameObject(touch0) && IsTouchOverGameObject(touch1))
            {
                // Tính toán khoảng cách giữa hai ngón tay
                float currentTouchDistance = Vector2.Distance(touch0.position, touch1.position);

                if (!isScaling)
                {
                    initialTouchDistance = currentTouchDistance;
                    isScaling = true;

                    // Vô hiệu hóa ScrollView của đối tượng cha khi đang scale
                    if (parentScrollRect != null)
                    {
                        parentScrollRect.enabled = false;
                    }

                    // Đưa GameObject lên trên tất cả các child khác bằng cách thêm Canvas tạm thời
                    if (tempCanvas == null)
                    {
                        tempCanvas = gameObject.AddComponent<Canvas>();
                        tempCanvas.overrideSorting = true;
                        tempCanvas.sortingOrder = 1000; // Giá trị lớn để đảm bảo nằm trên cùng
                    }
                }
                else
                {
                    // Tính toán hệ số phóng to/thu nhỏ
                    float scaleFactor = currentTouchDistance / initialTouchDistance;

                    // Áp dụng việc phóng to/thu nhỏ vào GameObject
                    transform.localScale = initialScale * scaleFactor;
                }
            }
        }
        else if (Input.touchCount < 2)
        {
            // Đặt lại trạng thái khi số ngón tay chạm ít hơn 2
            isScaling = false;
            initialScale = transform.localScale;

            // Bật lại ScrollView của đối tượng cha khi không còn scale
            if (parentScrollRect != null)
            {
                parentScrollRect.enabled = true;
            }

            // Reset lại Canvas về trạng thái ban đầu
            if (tempCanvas != null)
            {
                Destroy(tempCanvas);  // Xóa Canvas tạm thời
            }
        }
    }

    private bool IsTouchOverGameObject(Touch touch)
    {
        // Chuẩn bị Raycast
        pointerEventData = new PointerEventData(eventSystem)
        {
            position = touch.position
        };

        // Raycast vào các đối tượng UI
        var results = new System.Collections.Generic.List<RaycastResult>();
        raycaster.Raycast(pointerEventData, results);

        // Kiểm tra nếu có kết quả raycast và đối tượng là chính GameObject hiện tại
        foreach (RaycastResult result in results)
        {
            if (result.gameObject == gameObject)
            {
                return true;
            }
        }

        return false;
    }
}
