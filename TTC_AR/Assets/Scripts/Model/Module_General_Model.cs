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

  /* [JsonProperty("Rack_1")]
   public List<Module_General_Model> Rack1 { get; set; }

   [JsonProperty("Rack_2")]
   public List<Module_General_Model> Rack2 { get; set; }

   [JsonProperty("Rack_3")]
   public List<Module_General_Model> Rack3 { get; set; }*/

  public List<Module_General_Model> Rack_4;

  /* [JsonProperty("Rack_5")]
   public List<Module_General_Model> Rack5 { get; set; }

   [JsonProperty("Rack_6")]
   public List<Module_General_Model> Rack6 { get; set; }*/
  // Nếu có thêm Rack_6, Rack_7, bạn có thể thêm các thuộc tính tương tự ở đây.
  // Hoặc nếu số lượng rack không cố định, bạn có thể dùng từ điển (Dictionary) như sau:

  // public Dictionary<string, List<ConnectionInfo>> Racks { get; set; }
}

// Sử dụng mẫu chuỗi JSON để deserialize thành đối tượng C#:
//string json = // Chuỗi JSON của bạn ở đây;
//  RackData rackData = JsonConvert.DeserializeObject<RackData>(json);
