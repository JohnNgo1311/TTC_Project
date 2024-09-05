using System.Collections.Generic;
using Newtonsoft.Json;

[System.Serializable]
public class Module_General_Model
{
  // [JsonProperty("Module")]
  public string Module;
  // [JsonProperty("jbConnection")]
  public List<string> JbConnection;
  // [JsonProperty("deviceConnection")]
  public List<string> DeviceConnection;
}


[System.Serializable]

public class RackData_GrapperA
{
  public List<Module_General_Model> Rack_1;
  public List<Module_General_Model> Rack_2;
  //public List<Module_General_Model> Rack_3;
  public List<Module_General_Model> Rack_4;
  public List<Module_General_Model> Rack_5;
  public List<Module_General_Model> Rack_6;

  // Nếu có thêm Rack_6, Rack_7, bạn có thể thêm các thuộc tính tương tự ở đây.
  // Hoặc nếu số lượng rack không cố định, bạn có thể dùng từ điển (Dictionary) như sau:

  // public Dictionary<string, List<ConnectionInfo>> Racks { get; set; }
}

// Sử dụng mẫu chuỗi JSON để deserialize thành đối tượng C#:
//string json = // Chuỗi JSON của bạn ở đây;
//  RackData rackData = JsonConvert.DeserializeObject<RackData>(json);
