using UnityEngine;

public class TimeOut_Function : MonoBehaviour
{
  public float timeoutDuration = 240f;  // Thời gian timeout (tính bằng giây)
  private float timeSinceLastInteraction; // Thời gian kể từ lần tương tác cuối cùng

  void Start()
  {
    ResetTimeout();  // Khởi tạo bộ đếm thời gian
  }

  void Update()
  {
    // Cập nhật thời gian kể từ lần tương tác cuối cùng
    timeSinceLastInteraction += Time.deltaTime;

    // Kiểm tra nếu thời gian vượt quá giới hạn timeout
    if (timeSinceLastInteraction >= timeoutDuration)
    {
      ExitApplication();  // Thoát ứng dụng
    }

    // Kiểm tra các sự kiện tương tác
    if (Input.anyKey || Input.touchCount > 0)
    {
      ResetTimeout();  // Reset bộ đếm thời gian khi có tương tác
    }
  }

  // Hàm reset thời gian khi có tương tác
  void ResetTimeout()
  {
    timeSinceLastInteraction = 0f;
  }

  // Hàm thoát ứng dụng
  void ExitApplication()
  {
    Debug.Log("Ứng dụng sẽ thoát do không có tương tác...");
    Application.Quit();  // Thoát ứng dụng trên Android
  }
}
