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

    private void Start()
    {
        initialScale = transform.localScale;

        // Tìm ScrollRect của đối tượng cha nếu có
        parentScrollRect = GetComponentInParent<ScrollRect>();

        // Lấy GraphicRaycaster từ Canvas
        raycaster = GetComponentInParent<GraphicRaycaster>();
        eventSystem = EventSystem.current;
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
