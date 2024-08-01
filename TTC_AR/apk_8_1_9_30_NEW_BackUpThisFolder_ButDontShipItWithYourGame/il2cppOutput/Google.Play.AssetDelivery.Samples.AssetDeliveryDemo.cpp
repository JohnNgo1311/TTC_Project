#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<Google.Play.Common.PlayAsyncOperation`2<Google.Play.AssetDelivery.ConfirmationDialogResult,Google.Play.AssetDelivery.AssetDeliveryErrorCode>>
struct Action_1_t801F5044905AD9F763BEEF81E65B8029D103CF0C;
// System.Action`1<Google.Play.Common.PlayAsyncOperation`2<System.Int32Enum,System.Int32Enum>>
struct Action_1_t519DDB0FCA931A253989B932BB070BA7E2EA9583;
// System.Action`1<Google.Play.Common.PlayAsyncOperation`2<System.Int64,Google.Play.AssetDelivery.AssetDeliveryErrorCode>>
struct Action_1_tAF2F0C6D9832C4CE7D39F5AC5F2AB9C889710BF5;
// System.Action`1<Google.Play.Common.PlayAsyncOperation`2<System.Int64,System.Int32Enum>>
struct Action_1_tC0E0EC2910CBEB9048565BA6A2471C3D35543824;
// System.Action`1<Google.Play.Common.PlayAsyncOperation`2<System.Object,System.Int32Enum>>
struct Action_1_t1580D1A1CBB53E76410E3445912FF69146C644A0;
// System.Action`1<Google.Play.Common.PlayAsyncOperation`2<Google.Play.Common.VoidResult,Google.Play.AssetDelivery.AssetDeliveryErrorCode>>
struct Action_1_t312EDE2B729344A135C171CDCF374E4ACE2E56F7;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<Google.Play.AssetDelivery.PlayAssetBundleRequest>
struct Action_1_tE50929EF99928DDE22CE09EADACABC0DAB2544C0;
// System.Action`1<Google.Play.AssetDelivery.PlayAssetPackBatchRequest>
struct Action_1_t8FBF93552BF83F0A3BA46866C01A29DAF3B1FF1D;
// System.Action`1<Google.Play.AssetDelivery.PlayAssetPackRequest>
struct Action_1_t573D8E84A92BC53BBA4293E78532146B5C8D7B29;
// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/ButtonFromDownloader`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader>
struct ButtonFromDownloader_1_tA2799689A60EC73EF8B5AE562F93CEE4D53AC0C6;
// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/ButtonFromDownloader`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader>
struct ButtonFromDownloader_1_tD7993D71501910BD8D13A0D63844C4D8699E43D3;
// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/ButtonFromDownloader`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader>
struct ButtonFromDownloader_1_t506B9580D771FD322640060B6F2DC5B4F0D17C8C;
// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/ButtonFromDownloader`1<System.Object>
struct ButtonFromDownloader_1_t58F4F22307313F7634443793FAB80FBFF64524A7;
// System.Collections.Generic.Dictionary`2<Google.Play.AssetDelivery.AssetDeliveryStatus,System.Collections.Generic.List`1<UnityEngine.UI.Button>>
struct Dictionary_2_tD56BE9AC2B9A2440E3883B68E63D96980A8DF1EC;
// System.Collections.Generic.Dictionary`2<Google.Play.AssetDelivery.AssetDeliveryStatus,UnityEngine.Color>
struct Dictionary_2_t4C916E66BEF8BD9590CD356274E6DB5934A2990D;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,UnityEngine.Color>
struct Dictionary_2_t02712D85A437174C466DE8AAC0A7E57F4A02FDDA;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>
struct Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71;
// System.Collections.Generic.Dictionary`2<UnityEngine.KeyCode,Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/ButtonFromDownloader`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader>>
struct Dictionary_2_t2BEE0B6563F88D6F1ACA1C7095F12BB7F1A7C0BA;
// System.Collections.Generic.Dictionary`2<UnityEngine.KeyCode,Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/ButtonFromDownloader`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader>>
struct Dictionary_2_t91C8A923863C4F8996A36010D3447BD78F809F8D;
// System.Collections.Generic.Dictionary`2<UnityEngine.KeyCode,Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/ButtonFromDownloader`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader>>
struct Dictionary_2_t3BEBDC70F0A50BB404F53D3071BFBE3E192BB9BC;
// System.Collections.Generic.Dictionary`2<UnityEngine.KeyCode,System.Action>
struct Dictionary_2_t961634992B8C7A1CD2414B0736961441B05B610F;
// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/DownloaderInputMapper`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader>
struct DownloaderInputMapper_1_tD40C43DD11CCDB08EA8C1419FFE3114433C1ABE4;
// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/DownloaderInputMapper`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader>
struct DownloaderInputMapper_1_tA52A4D97B24F5A9239FC2D6848A74C26AE76A790;
// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/DownloaderInputMapper`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader>
struct DownloaderInputMapper_1_t31C9AC8D70F7A548AAC262167CA8C370BDBEA957;
// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/DownloaderInputMapper`1<System.Object>
struct DownloaderInputMapper_1_t3CB2FE886AC54C92DE7C49D45034A41813C3A51A;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Func`2<UnityEngine.UI.Button,System.Boolean>
struct Func_2_tE7B48BCEE2F78C885FD6E61A15E473ACC2A36017;
// System.Func`2<System.Object,System.Collections.Generic.IEnumerable`1<System.Int32Enum>>
struct Func_2_tF7D97A1688A135712FF2B89E352D7354AE820DE5;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/AssetWithinPack,System.String>
struct Func_2_t07CAF9D420EC549EF159B1FC8D173AD0751FBF2F;
// System.Func`2<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/IDownloaderInputMapper,System.Collections.Generic.IEnumerable`1<UnityEngine.KeyCode>>
struct Func_2_t165CB6061C1CED35EC6B0E9FFDD60B5D4D36E2FA;
// System.Func`2<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/IDownloaderInputMapper,UnityEngine.UI.Button>
struct Func_2_tB1B84D12BEBA1BCB5F9BD7DFEB37DA4AA0E70715;
// System.Collections.Generic.HashSet`1<UnityEngine.UI.Button>
struct HashSet_1_tF168427C45B13CF5D70310549C18B8AB18046A41;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.IDictionary`2<Google.Play.AssetDelivery.AssetDeliveryStatus,System.Collections.Generic.List`1<UnityEngine.UI.Button>>
struct IDictionary_2_t4DDDF01FED9147ADFACC4EBED3AE2CC23791E0E6;
// System.Collections.Generic.IDictionary`2<Google.Play.AssetDelivery.AssetDeliveryStatus,UnityEngine.Color>
struct IDictionary_2_t06502717AD8A9EDA9C0F033DBFC047E313322EE3;
// System.Collections.Generic.IDictionary`2<System.String,Google.Play.AssetDelivery.PlayAssetPackRequest>
struct IDictionary_2_t8A59DC945DD0DADFF8BCB5865F1598D5B359BFAE;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Button>
struct IEnumerable_1_tAE120E56656B9388F74088D9C261FAED08738D33;
// System.Collections.Generic.IEnumerable`1<System.Int32Enum>
struct IEnumerable_1_t71A46277DBD73BD4009B2B20885D2B7057593A1A;
// System.Collections.Generic.IEnumerable`1<UnityEngine.KeyCode>
struct IEnumerable_1_t81DC796C96B2697B63F6E45CE7BC4B5881604527;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEnumerable`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/AssetWithinPack>
struct IEnumerable_1_tEF4B17EB78DC6D6AA21F783DE64D7AB2D0A8A143;
// System.Collections.Generic.IEnumerable`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/IDownloaderInputMapper>
struct IEnumerable_1_t7DDEE5FBDCF507BACEBC70865302D7388E59EC55;
// System.Collections.Generic.IEnumerator`1<Google.Play.AssetDelivery.PlayAssetPackRequest>
struct IEnumerator_1_tBE4F7010EF8E8D1241059B184623A9B39E175583;
// System.Collections.Generic.IEqualityComparer`1<Google.Play.AssetDelivery.AssetDeliveryStatus>
struct IEqualityComparer_1_t6614EE02CD2C2F6252ED5B684C3C15128BBAF51E;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.UI.Button>
struct IEqualityComparer_1_tCC80856E11DFEDB41A962434110F4EB85529B43C;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.KeyCode>
struct IEqualityComparer_1_t8966F805A4BD94DDBE380958CE385A95B2064F36;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t97B3B39CDB830632CF9A846DD5FD149D333D9EDB;
// System.Collections.Generic.Dictionary`2/KeyCollection<Google.Play.AssetDelivery.AssetDeliveryStatus,System.Collections.Generic.List`1<UnityEngine.UI.Button>>
struct KeyCollection_tAAC8839C5FBD688CBE24DEA3114C64B565113122;
// System.Collections.Generic.Dictionary`2/KeyCollection<Google.Play.AssetDelivery.AssetDeliveryStatus,UnityEngine.Color>
struct KeyCollection_tAA788236D3CBE92773391088FE0B03AF3177AD74;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.KeyCode,Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/ButtonFromDownloader`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader>>
struct KeyCollection_t25556F2E551C979788CC853250B6608DAB216590;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.KeyCode,Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/ButtonFromDownloader`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader>>
struct KeyCollection_tC0B827214C43EB2FA71DDA2D1B0F688336C05C56;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.KeyCode,Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/ButtonFromDownloader`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader>>
struct KeyCollection_t6EB80B20AB3B0FD32A62875312EF2520D45A650E;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.KeyCode,System.Action>
struct KeyCollection_t619E0318F0578ADE2820D28F5B1AB8A081720FFF;
// System.Collections.Generic.List`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader>
struct List_1_t1880AE72E54A88645F952BE6A8778419B65E1D94;
// System.Collections.Generic.List`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader>
struct List_1_t9377DF2561252735B78BDD064180DA92104163AC;
// System.Collections.Generic.List`1<UnityEngine.UI.Button>
struct List_1_tCB5B3B0C70F6DFB6B059BB2C65DC77B101849444;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Int32Enum>
struct List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576;
// System.Collections.Generic.List`1<UnityEngine.KeyCode>
struct List_1_tB7F9EA9DD46F974E3E396408B3EF9E0ED62F6D32;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/AssetWithinPack>
struct List_1_tA59DCF9584AAD07D38DEBB531E8F52DE73D0A259;
// System.Collections.Generic.List`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/IDownloaderInputMapper>
struct List_1_tE9981AC1FFBE2D475181694CF7B1674AB079D4EC;
// Google.Play.Common.PlayAsyncOperation`2<Google.Play.AssetDelivery.ConfirmationDialogResult,Google.Play.AssetDelivery.AssetDeliveryErrorCode>
struct PlayAsyncOperation_2_tC6A6D4EDC2216A5FC7BA21B23397DDA69F3FB7E1;
// Google.Play.Common.PlayAsyncOperation`2<System.Int32Enum,System.Int32Enum>
struct PlayAsyncOperation_2_t35A86E04E6675059813C75C233D1062DE8697CF5;
// Google.Play.Common.PlayAsyncOperation`2<System.Int64,Google.Play.AssetDelivery.AssetDeliveryErrorCode>
struct PlayAsyncOperation_2_t8FC9C3969AFBE80A0CA5842EDA86B6F5771BE731;
// Google.Play.Common.PlayAsyncOperation`2<System.Int64,System.Int32Enum>
struct PlayAsyncOperation_2_tC1FB7EAF29A401C728B4ADC2F4E6B835A3DE4AB0;
// Google.Play.Common.PlayAsyncOperation`2<System.Object,System.Int32Enum>
struct PlayAsyncOperation_2_tAA336484128A0F72EF0E51819AC1CD0B80554C54;
// Google.Play.Common.PlayAsyncOperation`2<Google.Play.Common.VoidResult,Google.Play.AssetDelivery.AssetDeliveryErrorCode>
struct PlayAsyncOperation_2_tFA007165B6896547555D503DE0381BDC8A9D9D8C;
// System.Predicate`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader>
struct Predicate_1_t25409EB2666F3EF51B6776AA69A502741AE586CE;
// System.Predicate`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader>
struct Predicate_1_t61215A903E08C55609FCEB0A952B6873EA699397;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Collections.Generic.Dictionary`2/ValueCollection<Google.Play.AssetDelivery.AssetDeliveryStatus,System.Collections.Generic.List`1<UnityEngine.UI.Button>>
struct ValueCollection_t5FA4486EB86519CF1FF5D8A8C814D174601F579F;
// System.Collections.Generic.Dictionary`2/ValueCollection<Google.Play.AssetDelivery.AssetDeliveryStatus,UnityEngine.Color>
struct ValueCollection_t32A8D76377213F64BF0AB5CB83383191F1E575FB;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.KeyCode,Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/ButtonFromDownloader`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader>>
struct ValueCollection_t03EA7AD4806C8B12EB6753B323F98BDBDE7E1E8D;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.KeyCode,Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/ButtonFromDownloader`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader>>
struct ValueCollection_tDFFEE232B498790550DB0AD63C1BB628CCC24763;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.KeyCode,Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/ButtonFromDownloader`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader>>
struct ValueCollection_t84E40945F8FFC629FBE2978D1AF003F867A34C48;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.KeyCode,System.Action>
struct ValueCollection_t4C714BCD79C1CBD480FCBBB14EEF1526CC56786E;
// System.Collections.Generic.Dictionary`2/Entry<Google.Play.AssetDelivery.AssetDeliveryStatus,System.Collections.Generic.List`1<UnityEngine.UI.Button>>[]
struct EntryU5BU5D_tBD1E45A94724DF6A886DCD3283F65458AD561575;
// System.Collections.Generic.Dictionary`2/Entry<Google.Play.AssetDelivery.AssetDeliveryStatus,UnityEngine.Color>[]
struct EntryU5BU5D_t6E6C2DF901D12C3770DAAEC22103C20BD4825626;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.KeyCode,Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/ButtonFromDownloader`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader>>[]
struct EntryU5BU5D_t263A7B580E943D8D723A7D808FA02C81C80F3AAA;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.KeyCode,Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/ButtonFromDownloader`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader>>[]
struct EntryU5BU5D_tDB78A59212FE51FCABD5F8EF84D28C903E4863CC;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.KeyCode,Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/ButtonFromDownloader`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader>>[]
struct EntryU5BU5D_tD4518C0301E05ABFFC0451C8DBF70F403E8DFAD5;
// System.Collections.Generic.Dictionary`2/Entry<UnityEngine.KeyCode,System.Action>[]
struct EntryU5BU5D_tF5A9E2087193C168B22663E26BDBA34DE358DEC0;
// System.Collections.Generic.HashSet`1/Slot<UnityEngine.UI.Button>[]
struct SlotU5BU5D_t268328A0148AF192A584AFADFFAC3467B4720105;
// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader[]
struct AssetBundleDownloaderU5BU5D_tF5F7B1BD33CC1A99A062933454AE6FD271AD6A89;
// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader[]
struct AssetPackDownloaderU5BU5D_t48B87C89A943625297CCF4C0FBF991DB68409456;
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.KeyCode[]
struct KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Touch[]
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/AssetWithinPack[]
struct AssetWithinPackU5BU5D_t13529DB981AA4488F75A2BF09E17ACEFC43CC315;
// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/IDownloaderInputMapper[]
struct IDownloaderInputMapperU5BU5D_t533E419EAE5C8A353DD1F46E52F3DE29600192E5;
// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoPager/Page[]
struct PageU5BU5D_tD10AF857BB16009CADF6D467592CA8B0EFCAEBD0;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.AssetBundle
struct AssetBundle_tB38418819A49060CD738CB21541649340F082943;
// UnityEngine.AssetBundleCreateRequest
struct AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6;
// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader
struct AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B;
// Google.Play.AssetDelivery.AssetLocation
struct AssetLocation_t0793F2DE982E47275F0837DE78452359683C3C80;
// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader
struct AssetPackBatchDownloader_tE776DD9212256FBF18573752A1E130CEF64B595A;
// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader
struct AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController
struct DemoController_t10B60839C2F080D6587383BA0242AC07EC1965B2;
// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoPager
struct DemoPager_t0470EDB09F4AE3D5CAAFC3AE112A3C07CB82F439;
// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DownloadDisplay
struct DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// Google.Play.Common.LoadingScreen.LoadingBar
struct LoadingBar_t499215F28A93E9B219B9BF523B928A2A271B67C7;
// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.LookAround
struct LookAround_tF85F5C7BA4BF6AE15082C15A580CC8912713FEEE;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// Google.Play.AssetDelivery.PlayAssetBundleRequest
struct PlayAssetBundleRequest_tF91045E772B64A769998917B0141A4C7EEF03A14;
// Google.Play.AssetDelivery.PlayAssetPackBatchRequest
struct PlayAssetPackBatchRequest_t870FF270EED353BBE7C7103FE8A264D2DD79F02D;
// Google.Play.AssetDelivery.PlayAssetPackRequest
struct PlayAssetPackRequest_t02798684A55633E4F651042F75B09FD47459642F;
// UnityEngine.UI.RawImage
struct RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.RotateInPlace
struct RotateInPlace_t20AC017B46D43E4CC2F93C11D59D59DA96E30155;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.SceneNavigator
struct SceneNavigator_tF21A25E0BE40A200C3D34C1F76F1E33DF8D6FA72;
// Google.Play.Common.LoadingScreen.ScrollingFillAnimator
struct ScrollingFillAnimator_tB2E4FC8D635F7C3FD423116A5EB2C4B34363DACA;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69;
// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.TextAssetHolder
struct TextAssetHolder_tD54F9EAF78F3ADA8E6D68B0088DC651A62D53C0A;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitUntil
struct WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD;
// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader/<>c
struct U3CU3Ec_t913E8F36F28A99221F3E23352101263D2E2334E3;
// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader/<DownloadAssetBundleCo>d__23
struct U3CDownloadAssetBundleCoU3Ed__23_t1F03B5409B4DFC72DD1CAF38CD766CEC15CDD440;
// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/<>c
struct U3CU3Ec_tA8EAA00333BCDD7B9A7A8B9E4E1A8ED2B4697512;
// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t4CA7E6D8419DE7640D7B7372D1E5A67D0E0E2185;
// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/<CoLoadAssetPackBatch>d__14
struct U3CCoLoadAssetPackBatchU3Ed__14_t7D69F65F8A17610B42A6C5858F1A1BD5F30C0844;
// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/AssetWithinPack
struct AssetWithinPack_t675DE17DF7B2A4390E90CF4BFBBD35B708F8A888;
// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader/<>c
struct U3CU3Ec_tAB125A3BC4423BFAEEA5EEA4C174BD1A19B5EE75;
// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader/<DownloadAssetPackCo>d__31
struct U3CDownloadAssetPackCoU3Ed__31_t8A7973CA088D068780861BF9CF9213C663799916;
// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader/<LoadAssetBundleFromRequest>d__32
struct U3CLoadAssetBundleFromRequestU3Ed__32_t9CF286BBFC5DF116185B7A8805E9341A7D84F5D3;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<>c
struct U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E;
// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_t1AE2F007F691AB4C80A3A277A32D29363031A83F;
// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<Start>d__14
struct U3CStartU3Ed__14_t57AC3B2B24DE8B132D2F26ECD006DB1BB601B640;
// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/IDownloaderInputMapper
struct IDownloaderInputMapper_t523C8C42D42142DC2400EA308C9E3DCA1829A398;
// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoPager/Page
struct Page_t654646AF8CFA0A91CB3477E71E5CAB53307D494B;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t312EDE2B729344A135C171CDCF374E4ACE2E56F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tAF2F0C6D9832C4CE7D39F5AC5F2AB9C889710BF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AssetDeliveryErrorCode_tBDD13D9D0AAB694759166DB6CFEA5786CE363ACA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AssetDeliveryStatus_t6D22784589DF51CC1D10FA2560381F8048D30C55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ButtonFromDownloader_1_t506B9580D771FD322640060B6F2DC5B4F0D17C8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ButtonFromDownloader_1_tA2799689A60EC73EF8B5AE562F93CEE4D53AC0C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ButtonFromDownloader_1_tD7993D71501910BD8D13A0D63844C4D8699E43D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t2BEE0B6563F88D6F1ACA1C7095F12BB7F1A7C0BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t3BEBDC70F0A50BB404F53D3071BFBE3E192BB9BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t4C916E66BEF8BD9590CD356274E6DB5934A2990D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t91C8A923863C4F8996A36010D3447BD78F809F8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t961634992B8C7A1CD2414B0736961441B05B610F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tD56BE9AC2B9A2440E3883B68E63D96980A8DF1EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DownloaderInputMapper_1_t31C9AC8D70F7A548AAC262167CA8C370BDBEA957_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DownloaderInputMapper_1_tA52A4D97B24F5A9239FC2D6848A74C26AE76A790_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DownloaderInputMapper_1_tD40C43DD11CCDB08EA8C1419FFE3114433C1ABE4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t07CAF9D420EC549EF159B1FC8D173AD0751FBF2F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t165CB6061C1CED35EC6B0E9FFDD60B5D4D36E2FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tB1B84D12BEBA1BCB5F9BD7DFEB37DA4AA0E70715_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tE7B48BCEE2F78C885FD6E61A15E473ACC2A36017_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tF168427C45B13CF5D70310549C18B8AB18046A41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t823341DC866742C0A0E036ECF1FC65037B13A486_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t06502717AD8A9EDA9C0F033DBFC047E313322EE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t4DDDF01FED9147ADFACC4EBED3AE2CC23791E0E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t8A59DC945DD0DADFF8BCB5865F1598D5B359BFAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDownloaderInputMapper_t523C8C42D42142DC2400EA308C9E3DCA1829A398_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t0C187DF699940D4BD2D0A1B0CBAE2A37EB2BD70C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tAE120E56656B9388F74088D9C261FAED08738D33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t6985187DC42F33B6AA4A388FDB199AF21DFA5647_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tBE4F7010EF8E8D1241059B184623A9B39E175583_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tCB5B3B0C70F6DFB6B059BB2C65DC77B101849444_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE9981AC1FFBE2D475181694CF7B1674AB079D4EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t25409EB2666F3EF51B6776AA69A502741AE586CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t61215A903E08C55609FCEB0A952B6873EA699397_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCoLoadAssetPackBatchU3Ed__14_t7D69F65F8A17610B42A6C5858F1A1BD5F30C0844_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDownloadAssetBundleCoU3Ed__23_t1F03B5409B4DFC72DD1CAF38CD766CEC15CDD440_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDownloadAssetPackCoU3Ed__31_t8A7973CA088D068780861BF9CF9213C663799916_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadAssetBundleFromRequestU3Ed__32_t9CF286BBFC5DF116185B7A8805E9341A7D84F5D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartU3Ed__14_t57AC3B2B24DE8B132D2F26ECD006DB1BB601B640_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass16_0_t1AE2F007F691AB4C80A3A277A32D29363031A83F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass8_0_t4CA7E6D8419DE7640D7B7372D1E5A67D0E0E2185_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t913E8F36F28A99221F3E23352101263D2E2334E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tA8EAA00333BCDD7B9A7A8B9E4E1A8ED2B4697512_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tAB125A3BC4423BFAEEA5EEA4C174BD1A19B5EE75_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral04A5510C8B0FE20C508364BA9BADF7373782F864;
IL2CPP_EXTERN_C String_t* _stringLiteral14B651F3933E2742FD0FE0E45504AD43A5985248;
IL2CPP_EXTERN_C String_t* _stringLiteral1E7ABC94263547E6E33D46DC5321CC3CDF30555D;
IL2CPP_EXTERN_C String_t* _stringLiteral2D4C24A1ACA0CB6E213D41CDD46C0BC7420D226D;
IL2CPP_EXTERN_C String_t* _stringLiteral43ED1501FDD5A66D5F7E4D3D8687EB5390A64DFD;
IL2CPP_EXTERN_C String_t* _stringLiteral63EB81F5B69FCF78DE86128D91565D78D8489F57;
IL2CPP_EXTERN_C String_t* _stringLiteral68264632B88E3E7AC200BC932A18E6105E9A451C;
IL2CPP_EXTERN_C String_t* _stringLiteral6A1A0442FCE016F702A4C2570647ED57DAA8DB0D;
IL2CPP_EXTERN_C String_t* _stringLiteral788898E8B8B9284FF59B339BCF0766F96A4A417B;
IL2CPP_EXTERN_C String_t* _stringLiteral7F3E84CD5BB90F5EF0A0EE8C27F03E4A21368AE8;
IL2CPP_EXTERN_C String_t* _stringLiteral8169AA05F95389FA6BF8911ADAD78870FC4D7107;
IL2CPP_EXTERN_C String_t* _stringLiteral82ED9DFD422972F5C6335A11C7336226440530F8;
IL2CPP_EXTERN_C String_t* _stringLiteral85746C21280F3A30BFA06A89B878136C49B6586B;
IL2CPP_EXTERN_C String_t* _stringLiteral890AA82BA0D5A683C3CA604090D2B22D7572F9AC;
IL2CPP_EXTERN_C String_t* _stringLiteral8FA829CFC665FE18E4BBE0966FD5719CD9CA6784;
IL2CPP_EXTERN_C String_t* _stringLiteral968B72A9CDEA40D776C10E89F7021DD71D5B2FDC;
IL2CPP_EXTERN_C String_t* _stringLiteral982F0ACC2DE7C945678C99B6439A7921B26AB767;
IL2CPP_EXTERN_C String_t* _stringLiteral9CE45356699AB73EB0F336BA759D4C4D1A5E6AD9;
IL2CPP_EXTERN_C String_t* _stringLiteral9F8F56A74714961A7501B669716CA3ABB5FD93A1;
IL2CPP_EXTERN_C String_t* _stringLiteralA3C48F920CA03FE8BCEF33375645725C40BA7ADD;
IL2CPP_EXTERN_C String_t* _stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F;
IL2CPP_EXTERN_C String_t* _stringLiteralAE78B6886D414C717E72A4B368A9761C6E0AF676;
IL2CPP_EXTERN_C String_t* _stringLiteralBA63D640D14793065606B3839D23B018F48560BA;
IL2CPP_EXTERN_C String_t* _stringLiteralC4701CD6F3A7BD19E3D0B46A514E7BFA2F923AF5;
IL2CPP_EXTERN_C String_t* _stringLiteralC4E550DB7753938B55BD2444CB204B2C254AF826;
IL2CPP_EXTERN_C String_t* _stringLiteralCA5BF1CA11170EB3106BCA996CDC763D693E9798;
IL2CPP_EXTERN_C String_t* _stringLiteralE817AAA15FFD69D00BE6031E5C8A6EF7CF081933;
IL2CPP_EXTERN_C String_t* _stringLiteralF1E972CD03013DE732424893507C3C55D004E089;
IL2CPP_EXTERN_C String_t* _stringLiteralFB890D7A9694301632821DAC160E587810DC0901;
IL2CPP_EXTERN_C const RuntimeMethod* AssetBundleDownloader_ButtonEventCancelDownload_mE8A388D327297B023A1340C68145E1877F8B69E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AssetBundleDownloader_ButtonEventLoadSceneFromAssetBundle_mD66CCE680C9A446459435824840B9560E3E9B188_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AssetBundleDownloader_ButtonEventRemoveAssetBundle_m73799EF74770B01FD6B39EA3636346916BFB5D81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AssetBundleDownloader_ButtonEventRetrieveAssetBundle_m67B8B9E6AD8C291618B736EC5DF2663DBFA67662_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AssetBundleDownloader_ButtonEventShowConfirmationDialog_m8D4C34876E86A5B31D8ABC143CD62E816B748A97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AssetBundleDownloader_U3CButtonEventRemoveAssetBundleU3Eb__19_0_m2C941826F6E8BE0799632055BD4DFF92E1215458_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AssetBundleDownloader_U3CDisplayDownloadSizeU3Eb__24_0_m9A1DF22D401ECAA822D9AC7DDC4F38973EFD192A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AssetBundleDownloader_U3CDownloadAssetBundleCoU3Eb__23_0_m1C926A5C8AF4DDDEE08FC89C5CD23E6F5A22338E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AssetPackBatchDownloader_ButtonEventDisplayTextAsset_mEB38E65D74BCDE49F4674502C354886AD9FCAFF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AssetPackBatchDownloader_ButtonEventRemovePacks_m9644CFE682EA141F3DF09EAA5DD43C4421B71BD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AssetPackBatchDownloader_ButtonEventRetrieveAssetPackBatch_m08EA6905AEB5D450B54F1D995EC8EE6C9771874A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AssetPackDownloader_ButtonEventCancelDownload_mC529D6594FFFB18F6EF9E86AF6019685C60FD88B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AssetPackDownloader_ButtonEventDisplayTextAsset_mE4E6ECD28C8868E621F90FD3E74C8004E8212E81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AssetPackDownloader_ButtonEventLoadAssetBundle_mD1B7F241B06EE0281C5CFEE36C6E2FF64908553C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AssetPackDownloader_ButtonEventLoadSceneFromAssetBundle_m40E67668B3897CA059F278AAE3CDDFF40438D331_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AssetPackDownloader_ButtonEventRemoveAssetPack_mFBFF86EFA2882E0D823A4A75B0A2573E002BB398_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AssetPackDownloader_ButtonEventRetrieveAssetPack_m87430A724546C10C92F04C53EAB0BB44848C1008_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AssetPackDownloader_ButtonEventShowConfirmationDialog_mEF26B4D8DB27FC9B4C1D1AFFCDFAF789D66A7C20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AssetPackDownloader_U3CButtonEventRemoveAssetPackU3Eb__27_0_m6F9286044150C7661265D01775CFDFFB4D30FB6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AssetPackDownloader_U3CDisplayDownloadSizeU3Eb__33_0_m59B0A0033EAE27CAA1329266AD2DAFB6799B7D45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AssetPackDownloader_U3CDownloadAssetPackCoU3Eb__31_0_mF1AF07AFAE34701BBC41D18A987BD3485E538F53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisDemoPager_t0470EDB09F4AE3D5CAAFC3AE112A3C07CB82F439_m10223CAB3313EAC7A7A4BE6EC27F7D54355E3286_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DemoController_QueryOutputText_m56FE6CF93D3F23CADA66C8F858EF9037DF3A9529_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DemoController_QueryStatusText_mFB1BC80C787BAE9A3F5D4A489EC70EAB38D9F7ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DemoController_U3CStartU3Eb__14_1_m30352E0EB486D06B9B7359FCC689C5C1E5BB276B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DemoController_U3CStartU3Eb__14_2_m25BF97BF6F2F6FB758189DC15D03BFD57671C686_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DemoController_U3CStartU3Eb__14_3_mD0CEF2BC3E0027AD3658370C301F5EC5A121ADC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DemoController_U3CStartU3Eb__14_4_m04C6CF7C8B57BA2A34C42B77B4E56EE0BFBF776D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DemoController_U3CStartU3Eb__14_5_mEDDC991F97CD7C0D8E5DC3E1440529821A42CD6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DemoController_U3CStartU3Eb__14_6_mDCFD88004EB19EDCF30F09AF37DCB3597B760E07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DemoPager_ButtonEventNext_m5B2CB140222D9BAC38E93C834ECD4098546B5B04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DemoPager_ButtonEventPrevious_m402176840EDDD5F9F9AE2A02DC433B2F7484F1FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m4FEBF44FF50D4F06146EF6B9FE6A8BB24980D629_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m706C3E8D2AEADEF73B2A0957C636FB5644FAED99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m71DA0732D123B9377FF53F5D6AA5418D7E79CA11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m9F4E1EF1159C1F90E9F6A52ED3F9ABF28F8D87E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mC579893BE0ECE7E8AD35CDB1DB42A40737BF0BEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m1792755F4994F7B283CDF5812B9A94AF977F161F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m6032F983B96F193C896FB3D6D32E8E361D14E5D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m83FED82B1CF0991E38E45E920C5FC576D3283578_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m98ADEC4EE3C326D464FF26716ED11BCA73803358_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC8A2ED7AF1169869007C72B5A3D2101FA015D882_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mF1138E99255A29F054BABFABC8228D927F081237_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DownloaderInputMapper_1__ctor_m1FC840D8D62782BFABCDD8269F4E97E254B52AD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DownloaderInputMapper_1__ctor_mB42D8345E04660AA72FEFA91784AD4D38CDAE181_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DownloaderInputMapper_1__ctor_mE50D3A2EFF64A484F7384DEAA26F8B41C01B6F1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Distinct_TisKeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_mA20F5EAE0BA56B5438E077C38B3A04D33DFD392B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Distinct_TisString_t_m1E99E758E2A5605D0EE48F5715C69AF1096BF99B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_SelectMany_TisIDownloaderInputMapper_t523C8C42D42142DC2400EA308C9E3DCA1829A398_TisKeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_m4AF0815E4628A9A5FC3B69FE78BEEF6CD3FCBD7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisAssetWithinPack_t675DE17DF7B2A4390E90CF4BFBBD35B708F8A888_TisString_t_mF0CAB691562DB6F73982AF274CBEF12594AA0714_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisIDownloaderInputMapper_t523C8C42D42142DC2400EA308C9E3DCA1829A398_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m601C39EC0BB01397240F5E5489E57214E800F391_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisKeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_mBDCDE5676D2E03C287AB081ABD3B45F01243BAA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m8E2ECFF174A4CDB8D3BB37CF8C4B24030CF4C2F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m617C29693EB2801276678FF3113122991240CDF0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m69A91D35B30F7C0C720585BD3C998DA06D1D4C85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mBB007C6D80EFCDC08E96F9CD186179E88E43A530_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mC48BEA5616F0EAE3D981F1A7093C0ADCF657D4D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m5A2D93DB9E8C84353BAC6993A42F54F85C0B03E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mB46607AA8EBED12F5C4392F03DA7A93FB5EE5172_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF5E61A4CFC054BA9B576C411E1E6C93BC88933CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mFD9EC57D48262EFB569B4DE5D425CBF584FF54A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m03911319D49D0D645CF6EE36689BC6AD20FFBAF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m1EB88CCB3276E602D3FE9BB36D2F521ABDD86E20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6CEFBA65D7DDB14606C98CE1C6E298923E00FDA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9E531977700E2A8DEBA530001FDE293F2DFBC4F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisDownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740_m3B391AAD31B7FEC7E16B2E07F90EEB0007445A1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mB31DFE3E3E4C545989419040477D4A6A71DFAF23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_GetEnumerator_m47F97C089D4B6DAED3C45998C29B34DEBFF619CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m915925BE87DC24A8CD897473F5B2E1A42C2B1E1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mBC9FD00759B32D10E02989FE9985F0C6E87446DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mC2CDCC4FEF41C1C391CE4263437B2676B480062B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m4F809219B2B92D16365B4B27F60BA2DD8F5A5650_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m9E44E7DEE89BE92B8AA50AACDFE26D66CACCEFBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m812062EA22C7025B853992D2B75144A91192C34C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mEB5CAC74E588EFB6530371C6DD9DA9E6E8F9F61D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mA5249763CC5D6A0B85B1463BF70B178383FF1813_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_TrueForAll_m5C8F7A94FA810D3456B468A6E7BE286192178BCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_TrueForAll_mA6D99482126C1FAAA7DF4E453F628E4966C0CC92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mAC889D2D3A04D4473E8B932E17FBD4A18E17852B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mBCE3BE1FB943396333E483F66490F0690048CA2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m884AF419DE2920D112B731DA187F8334672A9314_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m91584B5F83283AF0FFE92C3BE294297E595A7A70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mABD073A6F6B75E205B8E9A6E5B2D14CDA5F19B81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayAsyncOperation_2_GetResult_m58C0DE3F1CB38C9DDA3C4A664473CA59FD99A5C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayAsyncOperation_2_GetResult_mDF46357E89072C9BB4166B0F7C6B3403C45EE28F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayAsyncOperation_2_get_Error_m106B9FC9CAD7E71A9975352E4A989F5A04579881_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayAsyncOperation_2_get_Error_m9DCD4460CB536E71272456C8384989EF42479663_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayAsyncOperation_2_get_Error_mF492B1BADBE8A093FA78AC10418058819825C163_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoLoadAssetPackBatchU3Ed__14_System_Collections_IEnumerator_Reset_m38F8A0BD855EB24D84713A6A1BB0564C4C6E13DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDownloadAssetBundleCoU3Ed__23_System_Collections_IEnumerator_Reset_m4E5F32291404327EEAF71C5D43290EF28F4A81AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDownloadAssetPackCoU3Ed__31_System_Collections_IEnumerator_Reset_m7F72E2A1BCF6FE20741066B7C5FF4D4B919439D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadAssetBundleFromRequestU3Ed__32_System_Collections_IEnumerator_Reset_m3C535E3EA41BA15A6253E62DAA0FA8C69ABFD6E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__14_System_Collections_IEnumerator_Reset_m6330BA2E0D53C5383C41D8C47415B540536573D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CAllDisplaysInitializedU3Eb__21_0_m3CFAEDC44A47C38D9CA233BAAD32A69E212A3D7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCoLoadAssetPackBatchU3Eb__14_0_m6A91C73194BE6CB3C553B8F2317D8410B5E9B36B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CProcessDownloaderCommandU3Eb__16_1_mCD979B8747EF11FC127B4A72829FC227E7129822_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__14_0_mB18DAB495E0ADA7B93B5035645E4937993603D62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__14_10_m98433FD475CC327AF2AB1E6C2FDE8552B1872CE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__14_11_m9FA451E7486BE1159968B77C471B41B70666A2FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__14_12_m54658B19B36A0BDD2EB66934D65C2D8E1F6A2261_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__14_13_m0B889C47B5C842B33DCD80D0FF780AF33C5C436A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__14_14_m35D1D25C87C957E5CC8D6518873BE09C06D39BAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__14_15_mB3ECA26A8735F5056A787B256D5BF98E6F051D6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__14_16_m29A50BEE8A8EF02D4A58421473A619D4B26A0A92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__14_17_m37E4A467D27A4F7F2913CC04EDCF79B0FB965177_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__14_18_m0F3CAC92F74363CF165D529D94591DB23038AD56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__14_19_mE9996538E943FE198A028674D56715FAFF71136B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__14_20_m74E5FEB419BA570C475EC85DA14C9049EA6B3986_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__14_7_mEE4D0CA82AB1F53DFEEADC3C4C93A1E68320BA9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__14_8_mECC2134BB02DB6284E6058D25D5AA04F6549E0CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__14_9_mB029598F4E8C36236E6FEB9B93BF0E334CD0BA68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CUpdateU3Eb__21_0_m13CB3E08E1DD84252CE935CD5AD88D103412999E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CUpdateU3Eb__29_0_mF5B4FCFAFF9868862A1C26E1488F96303AA923DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass16_0_U3CProcessDownloaderCommandU3Eb__0_m8103F9670B35C94A6A782FB3C192415F55174978_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_0_U3CStartU3Eb__0_mF17CF442219EE7524A6EF183961D13800DC0E5AC_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3;
struct PageU5BU5D_tD10AF857BB16009CADF6D467592CA8B0EFCAEBD0;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t62824CEE56A60C056D1C6F5C90CE35BDF7A2ED2A 
{
};

// System.Collections.Generic.Dictionary`2<Google.Play.AssetDelivery.AssetDeliveryStatus,System.Collections.Generic.List`1<UnityEngine.UI.Button>>
struct Dictionary_2_tD56BE9AC2B9A2440E3883B68E63D96980A8DF1EC  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tBD1E45A94724DF6A886DCD3283F65458AD561575* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tAAC8839C5FBD688CBE24DEA3114C64B565113122* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t5FA4486EB86519CF1FF5D8A8C814D174601F579F* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<Google.Play.AssetDelivery.AssetDeliveryStatus,UnityEngine.Color>
struct Dictionary_2_t4C916E66BEF8BD9590CD356274E6DB5934A2990D  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t6E6C2DF901D12C3770DAAEC22103C20BD4825626* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tAA788236D3CBE92773391088FE0B03AF3177AD74* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t32A8D76377213F64BF0AB5CB83383191F1E575FB* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<UnityEngine.KeyCode,Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/ButtonFromDownloader`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader>>
struct Dictionary_2_t2BEE0B6563F88D6F1ACA1C7095F12BB7F1A7C0BA  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t263A7B580E943D8D723A7D808FA02C81C80F3AAA* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t25556F2E551C979788CC853250B6608DAB216590* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t03EA7AD4806C8B12EB6753B323F98BDBDE7E1E8D* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<UnityEngine.KeyCode,Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/ButtonFromDownloader`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader>>
struct Dictionary_2_t91C8A923863C4F8996A36010D3447BD78F809F8D  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tDB78A59212FE51FCABD5F8EF84D28C903E4863CC* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tC0B827214C43EB2FA71DDA2D1B0F688336C05C56* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tDFFEE232B498790550DB0AD63C1BB628CCC24763* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<UnityEngine.KeyCode,Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/ButtonFromDownloader`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader>>
struct Dictionary_2_t3BEBDC70F0A50BB404F53D3071BFBE3E192BB9BC  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tD4518C0301E05ABFFC0451C8DBF70F403E8DFAD5* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t6EB80B20AB3B0FD32A62875312EF2520D45A650E* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t84E40945F8FFC629FBE2978D1AF003F867A34C48* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<UnityEngine.KeyCode,System.Action>
struct Dictionary_2_t961634992B8C7A1CD2414B0736961441B05B610F  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tF5A9E2087193C168B22663E26BDBA34DE358DEC0* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t619E0318F0578ADE2820D28F5B1AB8A081720FFF* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t4C714BCD79C1CBD480FCBBB14EEF1526CC56786E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/DownloaderInputMapper`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader>
struct DownloaderInputMapper_1_tD40C43DD11CCDB08EA8C1419FFE3114433C1ABE4  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<UnityEngine.KeyCode,Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/ButtonFromDownloader`1<T>> Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/DownloaderInputMapper`1::KeyMapping
	Dictionary_2_t2BEE0B6563F88D6F1ACA1C7095F12BB7F1A7C0BA* ___KeyMapping_0;
};

// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/DownloaderInputMapper`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader>
struct DownloaderInputMapper_1_tA52A4D97B24F5A9239FC2D6848A74C26AE76A790  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<UnityEngine.KeyCode,Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/ButtonFromDownloader`1<T>> Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/DownloaderInputMapper`1::KeyMapping
	Dictionary_2_t91C8A923863C4F8996A36010D3447BD78F809F8D* ___KeyMapping_0;
};

// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/DownloaderInputMapper`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader>
struct DownloaderInputMapper_1_t31C9AC8D70F7A548AAC262167CA8C370BDBEA957  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<UnityEngine.KeyCode,Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/ButtonFromDownloader`1<T>> Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/DownloaderInputMapper`1::KeyMapping
	Dictionary_2_t3BEBDC70F0A50BB404F53D3071BFBE3E192BB9BC* ___KeyMapping_0;
};

// System.Collections.Generic.HashSet`1<UnityEngine.UI.Button>
struct HashSet_1_tF168427C45B13CF5D70310549C18B8AB18046A41  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t268328A0148AF192A584AFADFFAC3467B4720105* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.List`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader>
struct List_1_t1880AE72E54A88645F952BE6A8778419B65E1D94  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	AssetBundleDownloaderU5BU5D_tF5F7B1BD33CC1A99A062933454AE6FD271AD6A89* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t1880AE72E54A88645F952BE6A8778419B65E1D94_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	AssetBundleDownloaderU5BU5D_tF5F7B1BD33CC1A99A062933454AE6FD271AD6A89* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader>
struct List_1_t9377DF2561252735B78BDD064180DA92104163AC  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	AssetPackDownloaderU5BU5D_t48B87C89A943625297CCF4C0FBF991DB68409456* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t9377DF2561252735B78BDD064180DA92104163AC_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	AssetPackDownloaderU5BU5D_t48B87C89A943625297CCF4C0FBF991DB68409456* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.UI.Button>
struct List_1_tCB5B3B0C70F6DFB6B059BB2C65DC77B101849444  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tCB5B3B0C70F6DFB6B059BB2C65DC77B101849444_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.KeyCode>
struct List_1_tB7F9EA9DD46F974E3E396408B3EF9E0ED62F6D32  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB7F9EA9DD46F974E3E396408B3EF9E0ED62F6D32_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	KeyCodeU5BU5D_tE5EF2F42327664A9138C613B265BEE8524672B85* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/AssetWithinPack>
struct List_1_tA59DCF9584AAD07D38DEBB531E8F52DE73D0A259  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	AssetWithinPackU5BU5D_t13529DB981AA4488F75A2BF09E17ACEFC43CC315* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA59DCF9584AAD07D38DEBB531E8F52DE73D0A259_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	AssetWithinPackU5BU5D_t13529DB981AA4488F75A2BF09E17ACEFC43CC315* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/IDownloaderInputMapper>
struct List_1_tE9981AC1FFBE2D475181694CF7B1674AB079D4EC  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IDownloaderInputMapperU5BU5D_t533E419EAE5C8A353DD1F46E52F3DE29600192E5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tE9981AC1FFBE2D475181694CF7B1674AB079D4EC_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IDownloaderInputMapperU5BU5D_t533E419EAE5C8A353DD1F46E52F3DE29600192E5* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// Google.Play.AssetDelivery.AssetLocation
struct AssetLocation_t0793F2DE982E47275F0837DE78452359683C3C80  : public RuntimeObject
{
	// System.String Google.Play.AssetDelivery.AssetLocation::<Path>k__BackingField
	String_t* ___U3CPathU3Ek__BackingField_0;
	// System.UInt64 Google.Play.AssetDelivery.AssetLocation::<Offset>k__BackingField
	uint64_t ___U3COffsetU3Ek__BackingField_1;
	// System.UInt64 Google.Play.AssetDelivery.AssetLocation::<Size>k__BackingField
	uint64_t ___U3CSizeU3Ek__BackingField_2;
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader/<>c
struct U3CU3Ec_t913E8F36F28A99221F3E23352101263D2E2334E3  : public RuntimeObject
{
};

struct U3CU3Ec_t913E8F36F28A99221F3E23352101263D2E2334E3_StaticFields
{
	// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader/<>c Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader/<>c::<>9
	U3CU3Ec_t913E8F36F28A99221F3E23352101263D2E2334E3* ___U3CU3E9_0;
	// System.Predicate`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader> Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader/<>c::<>9__21_0
	Predicate_1_t25409EB2666F3EF51B6776AA69A502741AE586CE* ___U3CU3E9__21_0_1;
};

// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader/<DownloadAssetBundleCo>d__23
struct U3CDownloadAssetBundleCoU3Ed__23_t1F03B5409B4DFC72DD1CAF38CD766CEC15CDD440  : public RuntimeObject
{
	// System.Int32 Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader/<DownloadAssetBundleCo>d__23::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader/<DownloadAssetBundleCo>d__23::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader/<DownloadAssetBundleCo>d__23::<>4__this
	AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* ___U3CU3E4__this_2;
	// Google.Play.Common.PlayAsyncOperation`2<Google.Play.AssetDelivery.ConfirmationDialogResult,Google.Play.AssetDelivery.AssetDeliveryErrorCode> Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader/<DownloadAssetBundleCo>d__23::<asyncOperation>5__1
	PlayAsyncOperation_2_tC6A6D4EDC2216A5FC7BA21B23397DDA69F3FB7E1* ___U3CasyncOperationU3E5__1_3;
};

// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/<>c
struct U3CU3Ec_tA8EAA00333BCDD7B9A7A8B9E4E1A8ED2B4697512  : public RuntimeObject
{
};

struct U3CU3Ec_tA8EAA00333BCDD7B9A7A8B9E4E1A8ED2B4697512_StaticFields
{
	// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/<>c Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/<>c::<>9
	U3CU3Ec_tA8EAA00333BCDD7B9A7A8B9E4E1A8ED2B4697512* ___U3CU3E9_0;
	// System.Func`2<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/AssetWithinPack,System.String> Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/<>c::<>9__14_0
	Func_2_t07CAF9D420EC549EF159B1FC8D173AD0751FBF2F* ___U3CU3E9__14_0_1;
};

// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t4CA7E6D8419DE7640D7B7372D1E5A67D0E0E2185  : public RuntimeObject
{
	// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/AssetWithinPack Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/<>c__DisplayClass8_0::assetDataInClosure
	AssetWithinPack_t675DE17DF7B2A4390E90CF4BFBBD35B708F8A888* ___assetDataInClosure_0;
	// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/<>c__DisplayClass8_0::<>4__this
	AssetPackBatchDownloader_tE776DD9212256FBF18573752A1E130CEF64B595A* ___U3CU3E4__this_1;
};

// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/<CoLoadAssetPackBatch>d__14
struct U3CCoLoadAssetPackBatchU3Ed__14_t7D69F65F8A17610B42A6C5858F1A1BD5F30C0844  : public RuntimeObject
{
	// System.Int32 Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/<CoLoadAssetPackBatch>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/<CoLoadAssetPackBatch>d__14::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/<CoLoadAssetPackBatch>d__14::<>4__this
	AssetPackBatchDownloader_tE776DD9212256FBF18573752A1E130CEF64B595A* ___U3CU3E4__this_2;
	// System.Collections.Generic.List`1<System.String> Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/<CoLoadAssetPackBatch>d__14::<assetPackNames>5__1
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CassetPackNamesU3E5__1_3;
	// System.Boolean Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/<CoLoadAssetPackBatch>d__14::<allSucceeded>5__2
	bool ___U3CallSucceededU3E5__2_4;
	// System.Single Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/<CoLoadAssetPackBatch>d__14::<totalProgress>5__3
	float ___U3CtotalProgressU3E5__3_5;
	// System.Collections.Generic.IEnumerator`1<Google.Play.AssetDelivery.PlayAssetPackRequest> Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/<CoLoadAssetPackBatch>d__14::<>s__4
	RuntimeObject* ___U3CU3Es__4_6;
	// Google.Play.AssetDelivery.PlayAssetPackRequest Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/<CoLoadAssetPackBatch>d__14::<request>5__5
	PlayAssetPackRequest_t02798684A55633E4F651042F75B09FD47459642F* ___U3CrequestU3E5__5_7;
	// System.Collections.Generic.IEnumerator`1<Google.Play.AssetDelivery.PlayAssetPackRequest> Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/<CoLoadAssetPackBatch>d__14::<>s__6
	RuntimeObject* ___U3CU3Es__6_8;
	// Google.Play.AssetDelivery.PlayAssetPackRequest Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/<CoLoadAssetPackBatch>d__14::<request>5__7
	PlayAssetPackRequest_t02798684A55633E4F651042F75B09FD47459642F* ___U3CrequestU3E5__7_9;
};

// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/AssetWithinPack
struct AssetWithinPack_t675DE17DF7B2A4390E90CF4BFBBD35B708F8A888  : public RuntimeObject
{
	// System.String Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/AssetWithinPack::AssetPackName
	String_t* ___AssetPackName_0;
	// System.String Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/AssetWithinPack::AssetPath
	String_t* ___AssetPath_1;
	// UnityEngine.UI.Button Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/AssetWithinPack::DisplayContentsButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___DisplayContentsButton_2;
};

// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader/<>c
struct U3CU3Ec_tAB125A3BC4423BFAEEA5EEA4C174BD1A19B5EE75  : public RuntimeObject
{
};

struct U3CU3Ec_tAB125A3BC4423BFAEEA5EEA4C174BD1A19B5EE75_StaticFields
{
	// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader/<>c Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader/<>c::<>9
	U3CU3Ec_tAB125A3BC4423BFAEEA5EEA4C174BD1A19B5EE75* ___U3CU3E9_0;
	// System.Predicate`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader> Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader/<>c::<>9__29_0
	Predicate_1_t61215A903E08C55609FCEB0A952B6873EA699397* ___U3CU3E9__29_0_1;
};

// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader/<DownloadAssetPackCo>d__31
struct U3CDownloadAssetPackCoU3Ed__31_t8A7973CA088D068780861BF9CF9213C663799916  : public RuntimeObject
{
	// System.Int32 Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader/<DownloadAssetPackCo>d__31::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader/<DownloadAssetPackCo>d__31::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader/<DownloadAssetPackCo>d__31::<>4__this
	AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* ___U3CU3E4__this_2;
	// Google.Play.Common.PlayAsyncOperation`2<Google.Play.AssetDelivery.ConfirmationDialogResult,Google.Play.AssetDelivery.AssetDeliveryErrorCode> Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader/<DownloadAssetPackCo>d__31::<asyncOperation>5__1
	PlayAsyncOperation_2_tC6A6D4EDC2216A5FC7BA21B23397DDA69F3FB7E1* ___U3CasyncOperationU3E5__1_3;
};

// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader/<LoadAssetBundleFromRequest>d__32
struct U3CLoadAssetBundleFromRequestU3Ed__32_t9CF286BBFC5DF116185B7A8805E9341A7D84F5D3  : public RuntimeObject
{
	// System.Int32 Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader/<LoadAssetBundleFromRequest>d__32::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader/<LoadAssetBundleFromRequest>d__32::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader/<LoadAssetBundleFromRequest>d__32::<>4__this
	AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* ___U3CU3E4__this_2;
	// UnityEngine.AssetBundleCreateRequest Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader/<LoadAssetBundleFromRequest>d__32::<assetBundleCreateRequest>5__1
	AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6* ___U3CassetBundleCreateRequestU3E5__1_3;
};

// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<>c
struct U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E  : public RuntimeObject
{
};

struct U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields
{
	// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<>c Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<>c::<>9
	U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E* ___U3CU3E9_0;
	// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/ButtonFromDownloader`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader> Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<>c::<>9__14_7
	ButtonFromDownloader_1_tA2799689A60EC73EF8B5AE562F93CEE4D53AC0C6* ___U3CU3E9__14_7_1;
	// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/ButtonFromDownloader`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader> Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<>c::<>9__14_8
	ButtonFromDownloader_1_tA2799689A60EC73EF8B5AE562F93CEE4D53AC0C6* ___U3CU3E9__14_8_2;
	// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/ButtonFromDownloader`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader> Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<>c::<>9__14_9
	ButtonFromDownloader_1_tA2799689A60EC73EF8B5AE562F93CEE4D53AC0C6* ___U3CU3E9__14_9_3;
	// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/ButtonFromDownloader`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader> Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<>c::<>9__14_10
	ButtonFromDownloader_1_tA2799689A60EC73EF8B5AE562F93CEE4D53AC0C6* ___U3CU3E9__14_10_4;
	// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/ButtonFromDownloader`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader> Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<>c::<>9__14_11
	ButtonFromDownloader_1_t506B9580D771FD322640060B6F2DC5B4F0D17C8C* ___U3CU3E9__14_11_5;
	// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/ButtonFromDownloader`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader> Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<>c::<>9__14_12
	ButtonFromDownloader_1_t506B9580D771FD322640060B6F2DC5B4F0D17C8C* ___U3CU3E9__14_12_6;
	// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/ButtonFromDownloader`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader> Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<>c::<>9__14_13
	ButtonFromDownloader_1_t506B9580D771FD322640060B6F2DC5B4F0D17C8C* ___U3CU3E9__14_13_7;
	// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/ButtonFromDownloader`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader> Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<>c::<>9__14_14
	ButtonFromDownloader_1_t506B9580D771FD322640060B6F2DC5B4F0D17C8C* ___U3CU3E9__14_14_8;
	// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/ButtonFromDownloader`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader> Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<>c::<>9__14_15
	ButtonFromDownloader_1_t506B9580D771FD322640060B6F2DC5B4F0D17C8C* ___U3CU3E9__14_15_9;
	// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/ButtonFromDownloader`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader> Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<>c::<>9__14_16
	ButtonFromDownloader_1_tD7993D71501910BD8D13A0D63844C4D8699E43D3* ___U3CU3E9__14_16_10;
	// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/ButtonFromDownloader`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader> Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<>c::<>9__14_17
	ButtonFromDownloader_1_tD7993D71501910BD8D13A0D63844C4D8699E43D3* ___U3CU3E9__14_17_11;
	// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/ButtonFromDownloader`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader> Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<>c::<>9__14_18
	ButtonFromDownloader_1_tD7993D71501910BD8D13A0D63844C4D8699E43D3* ___U3CU3E9__14_18_12;
	// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/ButtonFromDownloader`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader> Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<>c::<>9__14_19
	ButtonFromDownloader_1_tD7993D71501910BD8D13A0D63844C4D8699E43D3* ___U3CU3E9__14_19_13;
	// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/ButtonFromDownloader`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader> Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<>c::<>9__14_20
	ButtonFromDownloader_1_tD7993D71501910BD8D13A0D63844C4D8699E43D3* ___U3CU3E9__14_20_14;
	// System.Func`2<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/IDownloaderInputMapper,System.Collections.Generic.IEnumerable`1<UnityEngine.KeyCode>> Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<>c::<>9__14_0
	Func_2_t165CB6061C1CED35EC6B0E9FFDD60B5D4D36E2FA* ___U3CU3E9__14_0_15;
	// System.Func`2<UnityEngine.UI.Button,System.Boolean> Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<>c::<>9__16_1
	Func_2_tE7B48BCEE2F78C885FD6E61A15E473ACC2A36017* ___U3CU3E9__16_1_16;
	// System.Predicate`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader> Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<>c::<>9__21_0
	Predicate_1_t25409EB2666F3EF51B6776AA69A502741AE586CE* ___U3CU3E9__21_0_17;
};

// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<>c__DisplayClass16_0
struct U3CU3Ec__DisplayClass16_0_t1AE2F007F691AB4C80A3A277A32D29363031A83F  : public RuntimeObject
{
	// UnityEngine.KeyCode Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<>c__DisplayClass16_0::keyCode
	int32_t ___keyCode_0;
	// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<>c__DisplayClass16_0::<>4__this
	DemoController_t10B60839C2F080D6587383BA0242AC07EC1965B2* ___U3CU3E4__this_1;
};

// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<Start>d__14
struct U3CStartU3Ed__14_t57AC3B2B24DE8B132D2F26ECD006DB1BB601B640  : public RuntimeObject
{
	// System.Int32 Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<Start>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<Start>d__14::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<Start>d__14::<>4__this
	DemoController_t10B60839C2F080D6587383BA0242AC07EC1965B2* ___U3CU3E4__this_2;
};

// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoPager/Page
struct Page_t654646AF8CFA0A91CB3477E71E5CAB53307D494B  : public RuntimeObject
{
	// UnityEngine.GameObject Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoPager/Page::PageRoot
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___PageRoot_0;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoPager/Page::DownloaderObjects
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___DownloaderObjects_1;
	// UnityEngine.UI.Text Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoPager/Page::OutputText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___OutputText_2;
};

// System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.UI.Button>
struct Enumerator_tF9998FA17ED4A1F6464D2F5579FEF6719703F85E 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_tF168427C45B13CF5D70310549C18B8AB18046A41* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Int32Enum>
struct Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	int32_t ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.KeyCode>
struct Enumerator_t4192013435A770FA2346D36DBBBFA7EFF452CEE5 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB7F9EA9DD46F974E3E396408B3EF9E0ED62F6D32* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	int32_t ____current_3;
};

// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
struct Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 
{
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/AssetWithinPack>
struct Enumerator_t324E44CBED9D18AB38FB942CF42E7165DA8324B9 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA59DCF9584AAD07D38DEBB531E8F52DE73D0A259* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	AssetWithinPack_t675DE17DF7B2A4390E90CF4BFBBD35B708F8A888* ____current_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>
struct KeyValuePair_2_tF70DDE0C5A349727371FB070D433FA147032A13B 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<UnityEngine.KeyCode,System.Action>
struct KeyValuePair_2_tA5109975B9D659C4CDF0BA586254EC261816BA3D 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value_1;
};

// Google.Play.Common.PlayAsyncOperation`2<Google.Play.AssetDelivery.ConfirmationDialogResult,Google.Play.AssetDelivery.AssetDeliveryErrorCode>
struct PlayAsyncOperation_2_tC6A6D4EDC2216A5FC7BA21B23397DDA69F3FB7E1  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Boolean Google.Play.Common.PlayAsyncOperation`2::<IsDone>k__BackingField
	bool ___U3CIsDoneU3Ek__BackingField_0;
	// TError Google.Play.Common.PlayAsyncOperation`2::<Error>k__BackingField
	int32_t ___U3CErrorU3Ek__BackingField_1;
	// System.Action`1<Google.Play.Common.PlayAsyncOperation`2<TResult,TError>> Google.Play.Common.PlayAsyncOperation`2::Completed
	Action_1_t801F5044905AD9F763BEEF81E65B8029D103CF0C* ___Completed_2;
};

// Google.Play.Common.PlayAsyncOperation`2<System.Int32Enum,System.Int32Enum>
struct PlayAsyncOperation_2_t35A86E04E6675059813C75C233D1062DE8697CF5  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Boolean Google.Play.Common.PlayAsyncOperation`2::<IsDone>k__BackingField
	bool ___U3CIsDoneU3Ek__BackingField_0;
	// TError Google.Play.Common.PlayAsyncOperation`2::<Error>k__BackingField
	int32_t ___U3CErrorU3Ek__BackingField_1;
	// System.Action`1<Google.Play.Common.PlayAsyncOperation`2<TResult,TError>> Google.Play.Common.PlayAsyncOperation`2::Completed
	Action_1_t519DDB0FCA931A253989B932BB070BA7E2EA9583* ___Completed_2;
};

// Google.Play.Common.PlayAsyncOperation`2<System.Int64,Google.Play.AssetDelivery.AssetDeliveryErrorCode>
struct PlayAsyncOperation_2_t8FC9C3969AFBE80A0CA5842EDA86B6F5771BE731  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Boolean Google.Play.Common.PlayAsyncOperation`2::<IsDone>k__BackingField
	bool ___U3CIsDoneU3Ek__BackingField_0;
	// TError Google.Play.Common.PlayAsyncOperation`2::<Error>k__BackingField
	int32_t ___U3CErrorU3Ek__BackingField_1;
	// System.Action`1<Google.Play.Common.PlayAsyncOperation`2<TResult,TError>> Google.Play.Common.PlayAsyncOperation`2::Completed
	Action_1_tAF2F0C6D9832C4CE7D39F5AC5F2AB9C889710BF5* ___Completed_2;
};

// Google.Play.Common.PlayAsyncOperation`2<System.Int64,System.Int32Enum>
struct PlayAsyncOperation_2_tC1FB7EAF29A401C728B4ADC2F4E6B835A3DE4AB0  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Boolean Google.Play.Common.PlayAsyncOperation`2::<IsDone>k__BackingField
	bool ___U3CIsDoneU3Ek__BackingField_0;
	// TError Google.Play.Common.PlayAsyncOperation`2::<Error>k__BackingField
	int32_t ___U3CErrorU3Ek__BackingField_1;
	// System.Action`1<Google.Play.Common.PlayAsyncOperation`2<TResult,TError>> Google.Play.Common.PlayAsyncOperation`2::Completed
	Action_1_tC0E0EC2910CBEB9048565BA6A2471C3D35543824* ___Completed_2;
};

// Google.Play.Common.PlayAsyncOperation`2<System.Object,System.Int32Enum>
struct PlayAsyncOperation_2_tAA336484128A0F72EF0E51819AC1CD0B80554C54  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Boolean Google.Play.Common.PlayAsyncOperation`2::<IsDone>k__BackingField
	bool ___U3CIsDoneU3Ek__BackingField_0;
	// TError Google.Play.Common.PlayAsyncOperation`2::<Error>k__BackingField
	int32_t ___U3CErrorU3Ek__BackingField_1;
	// System.Action`1<Google.Play.Common.PlayAsyncOperation`2<TResult,TError>> Google.Play.Common.PlayAsyncOperation`2::Completed
	Action_1_t1580D1A1CBB53E76410E3445912FF69146C644A0* ___Completed_2;
};

// Google.Play.Common.PlayAsyncOperation`2<Google.Play.Common.VoidResult,Google.Play.AssetDelivery.AssetDeliveryErrorCode>
struct PlayAsyncOperation_2_tFA007165B6896547555D503DE0381BDC8A9D9D8C  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Boolean Google.Play.Common.PlayAsyncOperation`2::<IsDone>k__BackingField
	bool ___U3CIsDoneU3Ek__BackingField_0;
	// TError Google.Play.Common.PlayAsyncOperation`2::<Error>k__BackingField
	int32_t ___U3CErrorU3Ek__BackingField_1;
	// System.Action`1<Google.Play.Common.PlayAsyncOperation`2<TResult,TError>> Google.Play.Common.PlayAsyncOperation`2::Completed
	Action_1_t312EDE2B729344A135C171CDCF374E4ACE2E56F7* ___Completed_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// Google.Play.AssetDelivery.PlayAssetBundleRequest
struct PlayAssetBundleRequest_tF91045E772B64A769998917B0141A4C7EEF03A14  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Single Google.Play.AssetDelivery.PlayAssetBundleRequest::<DownloadProgress>k__BackingField
	float ___U3CDownloadProgressU3Ek__BackingField_0;
	// Google.Play.AssetDelivery.AssetDeliveryErrorCode Google.Play.AssetDelivery.PlayAssetBundleRequest::<Error>k__BackingField
	int32_t ___U3CErrorU3Ek__BackingField_1;
	// System.Boolean Google.Play.AssetDelivery.PlayAssetBundleRequest::<IsDone>k__BackingField
	bool ___U3CIsDoneU3Ek__BackingField_2;
	// Google.Play.AssetDelivery.AssetDeliveryStatus Google.Play.AssetDelivery.PlayAssetBundleRequest::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_3;
	// UnityEngine.AssetBundle Google.Play.AssetDelivery.PlayAssetBundleRequest::<AssetBundle>k__BackingField
	AssetBundle_tB38418819A49060CD738CB21541649340F082943* ___U3CAssetBundleU3Ek__BackingField_4;
	// System.Action`1<Google.Play.AssetDelivery.PlayAssetBundleRequest> Google.Play.AssetDelivery.PlayAssetBundleRequest::Completed
	Action_1_tE50929EF99928DDE22CE09EADACABC0DAB2544C0* ___Completed_5;
};

// Google.Play.AssetDelivery.PlayAssetPackBatchRequest
struct PlayAssetPackBatchRequest_t870FF270EED353BBE7C7103FE8A264D2DD79F02D  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Collections.Generic.IDictionary`2<System.String,Google.Play.AssetDelivery.PlayAssetPackRequest> Google.Play.AssetDelivery.PlayAssetPackBatchRequest::Requests
	RuntimeObject* ___Requests_0;
	// System.Boolean Google.Play.AssetDelivery.PlayAssetPackBatchRequest::<IsDone>k__BackingField
	bool ___U3CIsDoneU3Ek__BackingField_1;
	// System.Action`1<Google.Play.AssetDelivery.PlayAssetPackBatchRequest> Google.Play.AssetDelivery.PlayAssetPackBatchRequest::Completed
	Action_1_t8FBF93552BF83F0A3BA46866C01A29DAF3B1FF1D* ___Completed_2;
};

// Google.Play.AssetDelivery.PlayAssetPackRequest
struct PlayAssetPackRequest_t02798684A55633E4F651042F75B09FD47459642F  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Single Google.Play.AssetDelivery.PlayAssetPackRequest::<DownloadProgress>k__BackingField
	float ___U3CDownloadProgressU3Ek__BackingField_0;
	// Google.Play.AssetDelivery.AssetDeliveryErrorCode Google.Play.AssetDelivery.PlayAssetPackRequest::<Error>k__BackingField
	int32_t ___U3CErrorU3Ek__BackingField_1;
	// System.Boolean Google.Play.AssetDelivery.PlayAssetPackRequest::<IsDone>k__BackingField
	bool ___U3CIsDoneU3Ek__BackingField_2;
	// Google.Play.AssetDelivery.AssetDeliveryStatus Google.Play.AssetDelivery.PlayAssetPackRequest::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_3;
	// System.Action`1<Google.Play.AssetDelivery.PlayAssetPackRequest> Google.Play.AssetDelivery.PlayAssetPackRequest::Completed
	Action_1_t573D8E84A92BC53BBA4293E78532146B5C8D7B29* ___Completed_4;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitUntil
struct WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Func`1<System.Boolean> UnityEngine.WaitUntil::m_Predicate
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___m_Predicate_0;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32Enum,System.Object>
struct Enumerator_t72F234BE749BE6BA202FC41626B5E819E4F208B4 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tF70DDE0C5A349727371FB070D433FA147032A13B ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.KeyCode,System.Action>
struct Enumerator_tE1D422C647B8372E66DC1E06CC5B2D8D95E01F34 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t961634992B8C7A1CD2414B0736961441B05B610F* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tA5109975B9D659C4CDF0BA586254EC261816BA3D ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_6;
	// System.String System.IO.FileStream::name
	String_t* ___name_7;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* ___safeHandle_8;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_9;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_10;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_11;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_12;
	// System.Boolean System.IO.FileStream::async
	bool ___async_13;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_14;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_15;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_16;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_17;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_18;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_19;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_20;
};

struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_StaticFields
{
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject* ___buf_recycle_lock_5;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Touch
struct Touch_t03E51455ED508492B3F278903A0114FA0E87B417 
{
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// UnityEngine.AssetBundle
struct AssetBundle_tB38418819A49060CD738CB21541649340F082943  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.AssetBundleCreateRequest
struct AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.AssetBundleCreateRequest
struct AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.AssetBundleCreateRequest
struct AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Action`1<Google.Play.Common.PlayAsyncOperation`2<System.Int64,Google.Play.AssetDelivery.AssetDeliveryErrorCode>>
struct Action_1_tAF2F0C6D9832C4CE7D39F5AC5F2AB9C889710BF5  : public MulticastDelegate_t
{
};

// System.Action`1<Google.Play.Common.PlayAsyncOperation`2<Google.Play.Common.VoidResult,Google.Play.AssetDelivery.AssetDeliveryErrorCode>>
struct Action_1_t312EDE2B729344A135C171CDCF374E4ACE2E56F7  : public MulticastDelegate_t
{
};

// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/ButtonFromDownloader`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader>
struct ButtonFromDownloader_1_tA2799689A60EC73EF8B5AE562F93CEE4D53AC0C6  : public MulticastDelegate_t
{
};

// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/ButtonFromDownloader`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader>
struct ButtonFromDownloader_1_tD7993D71501910BD8D13A0D63844C4D8699E43D3  : public MulticastDelegate_t
{
};

// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/ButtonFromDownloader`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader>
struct ButtonFromDownloader_1_t506B9580D771FD322640060B6F2DC5B4F0D17C8C  : public MulticastDelegate_t
{
};

// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.UI.Button,System.Boolean>
struct Func_2_tE7B48BCEE2F78C885FD6E61A15E473ACC2A36017  : public MulticastDelegate_t
{
};

// System.Func`2<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/AssetWithinPack,System.String>
struct Func_2_t07CAF9D420EC549EF159B1FC8D173AD0751FBF2F  : public MulticastDelegate_t
{
};

// System.Func`2<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/IDownloaderInputMapper,System.Collections.Generic.IEnumerable`1<UnityEngine.KeyCode>>
struct Func_2_t165CB6061C1CED35EC6B0E9FFDD60B5D4D36E2FA  : public MulticastDelegate_t
{
};

// System.Func`2<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/IDownloaderInputMapper,UnityEngine.UI.Button>
struct Func_2_tB1B84D12BEBA1BCB5F9BD7DFEB37DA4AA0E70715  : public MulticastDelegate_t
{
};

// System.Predicate`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader>
struct Predicate_1_t25409EB2666F3EF51B6776AA69A502741AE586CE  : public MulticastDelegate_t
{
};

// System.Predicate`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader>
struct Predicate_1_t61215A903E08C55609FCEB0A952B6873EA699397  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader
struct AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader::AssetBundleName
	String_t* ___AssetBundleName_4;
	// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DownloadDisplay Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader::Display
	DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* ___Display_5;
	// UnityEngine.UI.Button Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader::RetrieveAssetBundleButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___RetrieveAssetBundleButton_6;
	// UnityEngine.UI.Button Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader::LoadSceneButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___LoadSceneButton_7;
	// UnityEngine.UI.Button Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader::ShowCellularDialogButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___ShowCellularDialogButton_8;
	// UnityEngine.UI.Button Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader::CancelDownloadButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___CancelDownloadButton_9;
	// UnityEngine.UI.Button Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader::RemoveButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___RemoveButton_10;
	// System.Collections.Generic.List`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader> Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader::Dependencies
	List_1_t1880AE72E54A88645F952BE6A8778419B65E1D94* ___Dependencies_11;
	// System.Boolean Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader::ShowSize
	bool ___ShowSize_12;
	// UnityEngine.AssetBundle Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader::_assetBundle
	AssetBundle_tB38418819A49060CD738CB21541649340F082943* ____assetBundle_13;
	// Google.Play.AssetDelivery.PlayAssetBundleRequest Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader::_request
	PlayAssetBundleRequest_tF91045E772B64A769998917B0141A4C7EEF03A14* ____request_14;
	// System.Boolean Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader::<IsInitialized>k__BackingField
	bool ___U3CIsInitializedU3Ek__BackingField_15;
};

// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader
struct AssetPackBatchDownloader_tE776DD9212256FBF18573752A1E130CEF64B595A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/AssetWithinPack> Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader::Assets
	List_1_tA59DCF9584AAD07D38DEBB531E8F52DE73D0A259* ___Assets_4;
	// UnityEngine.UI.Button Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader::RetrieveAssetPackBatchButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___RetrieveAssetPackBatchButton_5;
	// UnityEngine.UI.Button Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader::RemovePacksButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___RemovePacksButton_6;
	// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DownloadDisplay Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader::Display
	DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* ___Display_7;
	// UnityEngine.UI.Text Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader::DisplayTextBox
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___DisplayTextBox_8;
	// Google.Play.AssetDelivery.PlayAssetPackBatchRequest Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader::_batchRequest
	PlayAssetPackBatchRequest_t870FF270EED353BBE7C7103FE8A264D2DD79F02D* ____batchRequest_9;
	// System.Boolean Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader::_requestInProgress
	bool ____requestInProgress_10;
};

// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader
struct AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader::AssetPackName
	String_t* ___AssetPackName_4;
	// System.String Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader::AssetBundlePath
	String_t* ___AssetBundlePath_5;
	// System.String Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader::TextAssetPath
	String_t* ___TextAssetPath_6;
	// UnityEngine.UI.Button Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader::RetrieveAssetBundleButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___RetrieveAssetBundleButton_7;
	// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DownloadDisplay Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader::Display
	DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* ___Display_8;
	// UnityEngine.UI.Button Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader::LoadSceneButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___LoadSceneButton_9;
	// UnityEngine.UI.Button Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader::ShowCellularDialogButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___ShowCellularDialogButton_10;
	// UnityEngine.UI.Button Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader::CancelDownloadButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___CancelDownloadButton_11;
	// UnityEngine.UI.Button Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader::RemoveButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___RemoveButton_12;
	// UnityEngine.UI.Button Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader::LoadAssetBundleButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___LoadAssetBundleButton_13;
	// UnityEngine.UI.Button Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader::DisplayTextAssetButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___DisplayTextAssetButton_14;
	// UnityEngine.UI.Text Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader::DisplayTextBox
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___DisplayTextBox_15;
	// System.Collections.Generic.List`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader> Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader::Dependencies
	List_1_t9377DF2561252735B78BDD064180DA92104163AC* ___Dependencies_16;
	// System.Boolean Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader::ShowSize
	bool ___ShowSize_17;
	// UnityEngine.AssetBundle Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader::_assetBundle
	AssetBundle_tB38418819A49060CD738CB21541649340F082943* ____assetBundle_18;
	// Google.Play.AssetDelivery.PlayAssetPackRequest Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader::_request
	PlayAssetPackRequest_t02798684A55633E4F651042F75B09FD47459642F* ____request_19;
	// System.Boolean Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader::_requestInProgress
	bool ____requestInProgress_20;
	// System.Boolean Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader::<IsInitialized>k__BackingField
	bool ___U3CIsInitializedU3Ek__BackingField_21;
};

// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController
struct DemoController_t10B60839C2F080D6587383BA0242AC07EC1965B2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader> Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController::InitializedDownloaders
	List_1_t1880AE72E54A88645F952BE6A8778419B65E1D94* ___InitializedDownloaders_4;
	// UnityEngine.UI.Image Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController::SelectionBox
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___SelectionBox_5;
	// UnityEngine.GameObject Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController::_selectedDownloaderObj
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____selectedDownloaderObj_6;
	// UnityEngine.UI.Text Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController::_selectedOutputText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____selectedOutputText_7;
	// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/DownloaderInputMapper`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader> Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController::_assetBundleKeyMapping
	DownloaderInputMapper_1_tD40C43DD11CCDB08EA8C1419FFE3114433C1ABE4* ____assetBundleKeyMapping_8;
	// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/DownloaderInputMapper`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader> Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController::_assetPackKeyMapping
	DownloaderInputMapper_1_t31C9AC8D70F7A548AAC262167CA8C370BDBEA957* ____assetPackKeyMapping_9;
	// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/DownloaderInputMapper`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader> Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController::_assetPackBatchKeyMapping
	DownloaderInputMapper_1_tA52A4D97B24F5A9239FC2D6848A74C26AE76A790* ____assetPackBatchKeyMapping_10;
	// System.Collections.Generic.Dictionary`2<UnityEngine.KeyCode,System.Action> Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController::_navigationKeyMappings
	Dictionary_2_t961634992B8C7A1CD2414B0736961441B05B610F* ____navigationKeyMappings_11;
	// System.Collections.Generic.List`1<UnityEngine.KeyCode> Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController::_keyCodesMappedToCommands
	List_1_tB7F9EA9DD46F974E3E396408B3EF9E0ED62F6D32* ____keyCodesMappedToCommands_12;
	// System.Collections.Generic.List`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/IDownloaderInputMapper> Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController::_downloaderInputMappers
	List_1_tE9981AC1FFBE2D475181694CF7B1674AB079D4EC* ____downloaderInputMappers_13;
	// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoPager Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController::_demoPager
	DemoPager_t0470EDB09F4AE3D5CAAFC3AE112A3C07CB82F439* ____demoPager_14;
};

// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoPager
struct DemoPager_t0470EDB09F4AE3D5CAAFC3AE112A3C07CB82F439  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoPager/Page[] Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoPager::Pages
	PageU5BU5D_tD10AF857BB16009CADF6D467592CA8B0EFCAEBD0* ___Pages_4;
	// UnityEngine.UI.Button Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoPager::NextButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___NextButton_5;
	// UnityEngine.UI.Button Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoPager::PreviousButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___PreviousButton_6;
	// System.Int32 Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoPager::_currentIndex
	int32_t ____currentIndex_7;
	// UnityEngine.Vector3 Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoPager::_visiblePosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____visiblePosition_8;
	// UnityEngine.Vector3 Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoPager::_offscreenPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____offscreenPosition_9;
};

// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DownloadDisplay
struct DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DownloadDisplay::StatusText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___StatusText_4;
	// UnityEngine.UI.Text Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DownloadDisplay::NameText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___NameText_5;
	// UnityEngine.UI.Text Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DownloadDisplay::RetrieveButtonText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___RetrieveButtonText_6;
	// UnityEngine.UI.Image Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DownloadDisplay::ColorTint
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___ColorTint_7;
	// Google.Play.Common.LoadingScreen.LoadingBar Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DownloadDisplay::LoadingBar
	LoadingBar_t499215F28A93E9B219B9BF523B928A2A271B67C7* ___LoadingBar_8;
	// Google.Play.Common.LoadingScreen.ScrollingFillAnimator Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DownloadDisplay::ScrollingFill
	ScrollingFillAnimator_tB2E4FC8D635F7C3FD423116A5EB2C4B34363DACA* ___ScrollingFill_9;
	// UnityEngine.RectTransform Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DownloadDisplay::ButtonOutline
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___ButtonOutline_10;
	// UnityEngine.Color Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DownloadDisplay::ErrorColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___ErrorColor_11;
	// UnityEngine.Color Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DownloadDisplay::SuccessColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___SuccessColor_12;
	// UnityEngine.Color Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DownloadDisplay::NeutralColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___NeutralColor_13;
	// System.Collections.Generic.IDictionary`2<Google.Play.AssetDelivery.AssetDeliveryStatus,System.Collections.Generic.List`1<UnityEngine.UI.Button>> Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DownloadDisplay::_buttonsByStatus
	RuntimeObject* ____buttonsByStatus_14;
	// System.Collections.Generic.HashSet`1<UnityEngine.UI.Button> Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DownloadDisplay::_allButtons
	HashSet_1_tF168427C45B13CF5D70310549C18B8AB18046A41* ____allButtons_15;
	// System.Collections.Generic.IDictionary`2<Google.Play.AssetDelivery.AssetDeliveryStatus,UnityEngine.Color> Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DownloadDisplay::_colorsByStatus
	RuntimeObject* ____colorsByStatus_16;
};

// Google.Play.Common.LoadingScreen.LoadingBar
struct LoadingBar_t499215F28A93E9B219B9BF523B928A2A271B67C7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Google.Play.Common.LoadingScreen.LoadingBar::OutlineWidth
	float ___OutlineWidth_4;
	// System.Single Google.Play.Common.LoadingScreen.LoadingBar::InnerBorderWidth
	float ___InnerBorderWidth_5;
	// System.Boolean Google.Play.Common.LoadingScreen.LoadingBar::ResizeAutomatically
	bool ___ResizeAutomatically_6;
	// System.Single Google.Play.Common.LoadingScreen.LoadingBar::Progress
	float ___Progress_7;
	// UnityEngine.RectTransform Google.Play.Common.LoadingScreen.LoadingBar::Background
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___Background_8;
	// UnityEngine.RectTransform Google.Play.Common.LoadingScreen.LoadingBar::Outline
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___Outline_9;
	// UnityEngine.RectTransform Google.Play.Common.LoadingScreen.LoadingBar::ProgressHolder
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___ProgressHolder_10;
	// UnityEngine.RectTransform Google.Play.Common.LoadingScreen.LoadingBar::ProgressFill
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___ProgressFill_11;
	// System.Single Google.Play.Common.LoadingScreen.LoadingBar::AssetBundleDownloadToInstallRatio
	float ___AssetBundleDownloadToInstallRatio_12;
};

// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.LookAround
struct LookAround_tF85F5C7BA4BF6AE15082C15A580CC8912713FEEE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.LookAround::_currentLocalPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____currentLocalPoint_4;
	// UnityEngine.Vector3 Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.LookAround::_previousLocalPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____previousLocalPoint_5;
	// UnityEngine.Camera Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.LookAround::_camera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ____camera_6;
};

// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.RotateInPlace
struct RotateInPlace_t20AC017B46D43E4CC2F93C11D59D59DA96E30155  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.RotateInPlace::Axis
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___Axis_4;
	// System.Single Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.RotateInPlace::DegreesPerSecond
	float ___DegreesPerSecond_5;
};

// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.SceneNavigator
struct SceneNavigator_tF21A25E0BE40A200C3D34C1F76F1E33DF8D6FA72  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Google.Play.Common.LoadingScreen.ScrollingFillAnimator
struct ScrollingFillAnimator_tB2E4FC8D635F7C3FD423116A5EB2C4B34363DACA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Google.Play.Common.LoadingScreen.ScrollingFillAnimator::ScrollSpeed
	float ___ScrollSpeed_4;
	// UnityEngine.UI.RawImage Google.Play.Common.LoadingScreen.ScrollingFillAnimator::_image
	RawImage_tFF12F7DB574FBDC1863CF607C7A12A5D9F8D6179* ____image_5;
	// UnityEngine.RectTransform Google.Play.Common.LoadingScreen.ScrollingFillAnimator::_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ____rectTransform_6;
};

// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.TextAssetHolder
struct TextAssetHolder_tD54F9EAF78F3ADA8E6D68B0088DC651A62D53C0A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.TextAsset Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.TextAssetHolder::HeldTextAsset
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* ___HeldTextAsset_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF  : public RuntimeArray
{
	ALIGN_FIELD (8) Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* m_Items[1];

	inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoPager/Page[]
struct PageU5BU5D_tD10AF857BB16009CADF6D467592CA8B0EFCAEBD0  : public RuntimeArray
{
	ALIGN_FIELD (8) Page_t654646AF8CFA0A91CB3477E71E5CAB53307D494B* m_Items[1];

	inline Page_t654646AF8CFA0A91CB3477E71E5CAB53307D494B* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Page_t654646AF8CFA0A91CB3477E71E5CAB53307D494B** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Page_t654646AF8CFA0A91CB3477E71E5CAB53307D494B* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Page_t654646AF8CFA0A91CB3477E71E5CAB53307D494B* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Page_t654646AF8CFA0A91CB3477E71E5CAB53307D494B** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Page_t654646AF8CFA0A91CB3477E71E5CAB53307D494B* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Touch[]
struct TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3  : public RuntimeArray
{
	ALIGN_FIELD (8) Touch_t03E51455ED508492B3F278903A0114FA0E87B417 m_Items[1];

	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Touch_t03E51455ED508492B3F278903A0114FA0E87B417* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Touch_t03E51455ED508492B3F278903A0114FA0E87B417 value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::TrueForAll(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_TrueForAll_m42970A37E48F81C72653F656FC51EC3A14709698_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___match0, const RuntimeMethod* method) ;
// TError Google.Play.Common.PlayAsyncOperation`2<System.Object,System.Int32Enum>::get_Error()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PlayAsyncOperation_2_get_Error_mB61CF943D83082432D5CA19D778859724CCEA42E_gshared_inline (PlayAsyncOperation_2_tAA336484128A0F72EF0E51819AC1CD0B80554C54* __this, const RuntimeMethod* method) ;
// TError Google.Play.Common.PlayAsyncOperation`2<System.Int64,System.Int32Enum>::get_Error()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PlayAsyncOperation_2_get_Error_m747FBBFA51A5F956396A88549EDC62C86187036A_gshared_inline (PlayAsyncOperation_2_tC1FB7EAF29A401C728B4ADC2F4E6B835A3DE4AB0* __this, const RuntimeMethod* method) ;
// TResult Google.Play.Common.PlayAsyncOperation`2<System.Int64,System.Int32Enum>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t PlayAsyncOperation_2_GetResult_m6A4097E7CAF73B99045BF892A96A9D51BE35A651_gshared (PlayAsyncOperation_2_tC1FB7EAF29A401C728B4ADC2F4E6B835A3DE4AB0* __this, const RuntimeMethod* method) ;
// TError Google.Play.Common.PlayAsyncOperation`2<System.Int32Enum,System.Int32Enum>::get_Error()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PlayAsyncOperation_2_get_Error_m71815CFA9518BFA25754BE151A7FAE8C068E2155_gshared_inline (PlayAsyncOperation_2_t35A86E04E6675059813C75C233D1062DE8697CF5* __this, const RuntimeMethod* method) ;
// TResult Google.Play.Common.PlayAsyncOperation`2<System.Int32Enum,System.Int32Enum>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayAsyncOperation_2_GetResult_m24A123D146C53FCCEA204557907B5351195E9AEA_gshared (PlayAsyncOperation_2_t35A86E04E6675059813C75C233D1062DE8697CF5* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared (RuntimeObject* ___source0, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Distinct_TisRuntimeObject_mBCF33F5AD0A25B1E57B46FF34330DF74278ADB9E_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t72F234BE749BE6BA202FC41626B5E819E4F208B4 Dictionary_2_GetEnumerator_m4126F9137DF46492CEB1563FCCD5A16C5F99D686_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32Enum,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m183A70972A3287360EE9443997160D3AA6D4662D_gshared (Enumerator_t72F234BE749BE6BA202FC41626B5E819E4F208B4* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32Enum,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tF70DDE0C5A349727371FB070D433FA147032A13B Enumerator_get_Current_m12EE850D56E586DF121B059557CEAF4A7472995B_gshared_inline (Enumerator_t72F234BE749BE6BA202FC41626B5E819E4F208B4* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m9698075D0C5F788A3B6AEBF1ABDFACCAB5854E90_gshared_inline (KeyValuePair_2_tF70DDE0C5A349727371FB070D433FA147032A13B* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32Enum,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m415A21240AEF58C2E0A2FBA97E2BB75637781DB5_gshared_inline (KeyValuePair_2_tF70DDE0C5A349727371FB070D433FA147032A13B* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32Enum,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m48EC022EB2EB605F29EE19F3A0A79E3CB05FD283_gshared (Enumerator_t72F234BE749BE6BA202FC41626B5E819E4F208B4* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32Enum>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B List_1_GetEnumerator_m87BBBF3FBB0A4EBF1C2940AA91570D7F1565F60D_gshared (List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32Enum>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m09AF8D2807410AAEB42E9FCC1A54299458EFEFF2_gshared (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Int32Enum>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mB6A201CD563FEF33A6BDA75B83C7BF2AA36CD98C_gshared_inline (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32Enum>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCAE99D26B8B4D7880B37A70AC8DFD8C7AA4FCCE5_gshared (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/DownloaderInputMapper`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloaderInputMapper_1__ctor_m040AF13C531E06E51058199A1B3589F45913F8DF_gshared (DownloaderInputMapper_1_t3CB2FE886AC54C92DE7C49D45034A41813C3A51A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCC9983804D8DC41E938E080075F9EA7BDD0C7059_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mC515884C0546021A29DC0A00DBCABD89B1B65872_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/ButtonFromDownloader`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonFromDownloader_1__ctor_m23048C8464336586BB4B2647A910F3EFFAC8BEF0_gshared (ButtonFromDownloader_1_t58F4F22307313F7634443793FAB80FBFF64524A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany<System.Object,System.Int32Enum>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_SelectMany_TisRuntimeObject_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m3591E43F258F2F50A90412FE052C3518925C74F9_gshared (RuntimeObject* ___source0, Func_2_tF7D97A1688A135712FF2B89E352D7354AE820DE5* ___selector1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct<System.Int32Enum>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Distinct_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m599E6C741116CE25F595B45D424BEF6C56BE3829_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Int32Enum>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDA4D291C60B1EFA9EA50BBA3367C657CC9410576* Enumerable_ToList_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m2212F4FB231C9EAAC7FF8907D5D1D7F6B3B57A66_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8 HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657_gshared (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.HashSet`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6_gshared (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,UnityEngine.Color>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m504750EDD1E892E04F507E93D04DABE88540A2C2_gshared (Dictionary_2_t02712D85A437174C466DE8AAC0A7E57F4A02FDDA* __this, const RuntimeMethod* method) ;

// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DownloadDisplay::BindButton(UnityEngine.UI.Button,Google.Play.AssetDelivery.AssetDeliveryStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadDisplay_BindButton_m14577FE0BA953CD08832AFB68EF1519E2844D1C2 (DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___button0, int32_t ___status1, const RuntimeMethod* method) ;
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DownloadDisplay::BindColor(UnityEngine.Color,Google.Play.AssetDelivery.AssetDeliveryStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadDisplay_BindColor_m3E906A37EFB9C9EC5CD03A638567FB5CBCAAAED3 (DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, int32_t ___status1, const RuntimeMethod* method) ;
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DownloadDisplay::SetNameText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadDisplay_SetNameText_m92B5C46851DD3F3AFAA5ADEEB8B9C622D79A917A (DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* __this, String_t* ___nameText0, const RuntimeMethod* method) ;
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader::SetInitialStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetBundleDownloader_SetInitialStatus_mE3EC60EE93A3638BE0B9ADC165A655659D79E4A8 (AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* __this, const RuntimeMethod* method) ;
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader::DisplayDownloadSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetBundleDownloader_DisplayDownloadSize_m52D04C0EE79F4435D2972913502BC3D1CBE14800 (AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* __this, const RuntimeMethod* method) ;
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader::set_IsInitialized(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AssetBundleDownloader_set_IsInitialized_mB76D543B064A812BC83C54342CAFAC44E71F3FD2_inline (AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DownloadDisplay::HideButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadDisplay_HideButtons_mB4EBCA024901A383C81E610F4A467E2474FD9194 (DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader::DownloadAssetBundleCo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AssetBundleDownloader_DownloadAssetBundleCo_m80B4E81D2775D34A5B78E105C5E9C056BD240C9D (AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.String[] UnityEngine.AssetBundle::GetAllScenePaths()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* AssetBundle_GetAllScenePaths_m75D1CD4415067D64A8265A7929B6FF76B91B62FE (AssetBundle_tB38418819A49060CD738CB21541649340F082943* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___sceneName0, const RuntimeMethod* method) ;
// Google.Play.Common.PlayAsyncOperation`2<Google.Play.Common.VoidResult,Google.Play.AssetDelivery.AssetDeliveryErrorCode> Google.Play.AssetDelivery.PlayAssetDelivery::RemoveAssetPack(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayAsyncOperation_2_tFA007165B6896547555D503DE0381BDC8A9D9D8C* PlayAssetDelivery_RemoveAssetPack_m6EA0BA3267B0682B9A7098A2B0A26F755945DA85 (String_t* ___assetPackName0, const RuntimeMethod* method) ;
// System.Void System.Action`1<Google.Play.Common.PlayAsyncOperation`2<Google.Play.Common.VoidResult,Google.Play.AssetDelivery.AssetDeliveryErrorCode>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m3E3698E4C19A12E48FEBDBBA67E1400FF9C7D5E6 (Action_1_t312EDE2B729344A135C171CDCF374E4ACE2E56F7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t312EDE2B729344A135C171CDCF374E4ACE2E56F7*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// Google.Play.Common.PlayAsyncOperation`2<Google.Play.AssetDelivery.ConfirmationDialogResult,Google.Play.AssetDelivery.AssetDeliveryErrorCode> Google.Play.AssetDelivery.PlayAssetDelivery::ShowConfirmationDialog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayAsyncOperation_2_tC6A6D4EDC2216A5FC7BA21B23397DDA69F3FB7E1* PlayAssetDelivery_ShowConfirmationDialog_mF897B045EE008A58CA4C67A3553B73B5ACBD3AD6 (const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader>::get_Count()
inline int32_t List_1_get_Count_m884AF419DE2920D112B731DA187F8334672A9314_inline (List_1_t1880AE72E54A88645F952BE6A8778419B65E1D94* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1880AE72E54A88645F952BE6A8778419B65E1D94*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Predicate`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_mEB93D2B8F9A1BDE43B175ACAA1C59548DF963719 (Predicate_1_t25409EB2666F3EF51B6776AA69A502741AE586CE* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t25409EB2666F3EF51B6776AA69A502741AE586CE*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean System.Collections.Generic.List`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader>::TrueForAll(System.Predicate`1<T>)
inline bool List_1_TrueForAll_m5C8F7A94FA810D3456B468A6E7BE286192178BCA (List_1_t1880AE72E54A88645F952BE6A8778419B65E1D94* __this, Predicate_1_t25409EB2666F3EF51B6776AA69A502741AE586CE* ___match0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t1880AE72E54A88645F952BE6A8778419B65E1D94*, Predicate_1_t25409EB2666F3EF51B6776AA69A502741AE586CE*, const RuntimeMethod*))List_1_TrueForAll_m42970A37E48F81C72653F656FC51EC3A14709698_gshared)(__this, ___match0, method);
}
// System.Boolean Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader::IsLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AssetBundleDownloader_IsLoaded_m791859678194EEAD075F820FA5B58CAEB45283AC (AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DownloadDisplay::SetScrolling(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadDisplay_SetScrolling_mA0D8E34FEA91F024A1E28E96786F9FA44EA9A243 (DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* __this, bool ___scrolling0, const RuntimeMethod* method) ;
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DownloadDisplay::ShowButtons(UnityEngine.UI.Button[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadDisplay_ShowButtons_m9AB68AEB7ABC1DF6A1FC7CA8A8021063C5F730BC (DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* __this, ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* ___buttonsToShow0, const RuntimeMethod* method) ;
// System.Boolean Google.Play.AssetDelivery.PlayAssetDelivery::IsDownloaded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayAssetDelivery_IsDownloaded_m6F16EFC41F159FB201A1EAB1ED102001DAD36B3E (String_t* ___assetPackName0, const RuntimeMethod* method) ;
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DownloadDisplay::SetInitialStatus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadDisplay_SetInitialStatus_m36D2A91666EEA0E58E63C048622570AB6BAF4301 (DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* __this, bool ___isDownloaded0, const RuntimeMethod* method) ;
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader/<DownloadAssetBundleCo>d__23::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownloadAssetBundleCoU3Ed__23__ctor_m490723D152255D4AB79E02B839F327342DEAE68A (U3CDownloadAssetBundleCoU3Ed__23_t1F03B5409B4DFC72DD1CAF38CD766CEC15CDD440* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// Google.Play.Common.PlayAsyncOperation`2<System.Int64,Google.Play.AssetDelivery.AssetDeliveryErrorCode> Google.Play.AssetDelivery.PlayAssetDelivery::GetDownloadSize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayAsyncOperation_2_t8FC9C3969AFBE80A0CA5842EDA86B6F5771BE731* PlayAssetDelivery_GetDownloadSize_mFE7382DA23C4EBEE7ADD44E3E5516435A4F413F2 (String_t* ___assetPackName0, const RuntimeMethod* method) ;
// System.Void System.Action`1<Google.Play.Common.PlayAsyncOperation`2<System.Int64,Google.Play.AssetDelivery.AssetDeliveryErrorCode>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mFDBC4E02DA3CDFD8626503796E51A817A737E0BF (Action_1_tAF2F0C6D9832C4CE7D39F5AC5F2AB9C889710BF5* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tAF2F0C6D9832C4CE7D39F5AC5F2AB9C889710BF5*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AssetBundle::Unload(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetBundle_Unload_m0A189871E61A0D6735A2B41B3360A1F0677B636B (AssetBundle_tB38418819A49060CD738CB21541649340F082943* __this, bool ___unloadAllLoadedObjects0, const RuntimeMethod* method) ;
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader::UnloadAssetBundle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetBundleDownloader_UnloadAssetBundle_mA4DC4EDB71EF4A846CBA3567D9A9E62F77B2075D (AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// TError Google.Play.Common.PlayAsyncOperation`2<Google.Play.Common.VoidResult,Google.Play.AssetDelivery.AssetDeliveryErrorCode>::get_Error()
inline int32_t PlayAsyncOperation_2_get_Error_mF492B1BADBE8A093FA78AC10418058819825C163_inline (PlayAsyncOperation_2_tFA007165B6896547555D503DE0381BDC8A9D9D8C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (PlayAsyncOperation_2_tFA007165B6896547555D503DE0381BDC8A9D9D8C*, const RuntimeMethod*))PlayAsyncOperation_2_get_Error_mB61CF943D83082432D5CA19D778859724CCEA42E_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Debug::LogErrorFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// TError Google.Play.Common.PlayAsyncOperation`2<System.Int64,Google.Play.AssetDelivery.AssetDeliveryErrorCode>::get_Error()
inline int32_t PlayAsyncOperation_2_get_Error_m9DCD4460CB536E71272456C8384989EF42479663_inline (PlayAsyncOperation_2_t8FC9C3969AFBE80A0CA5842EDA86B6F5771BE731* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (PlayAsyncOperation_2_t8FC9C3969AFBE80A0CA5842EDA86B6F5771BE731*, const RuntimeMethod*))PlayAsyncOperation_2_get_Error_m747FBBFA51A5F956396A88549EDC62C86187036A_gshared_inline)(__this, method);
}
// TResult Google.Play.Common.PlayAsyncOperation`2<System.Int64,Google.Play.AssetDelivery.AssetDeliveryErrorCode>::GetResult()
inline int64_t PlayAsyncOperation_2_GetResult_mDF46357E89072C9BB4166B0F7C6B3403C45EE28F (PlayAsyncOperation_2_t8FC9C3969AFBE80A0CA5842EDA86B6F5771BE731* __this, const RuntimeMethod* method)
{
	return ((  int64_t (*) (PlayAsyncOperation_2_t8FC9C3969AFBE80A0CA5842EDA86B6F5771BE731*, const RuntimeMethod*))PlayAsyncOperation_2_GetResult_m6A4097E7CAF73B99045BF892A96A9D51BE35A651_gshared)(__this, method);
}
// System.String Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DownloadDisplay::FormatSize(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadDisplay_FormatSize_mC9218983D5E766F0C6E66821D605DAD13AA0B0C4 (DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* __this, int64_t ___numBytes0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFD5B040D9C67999E218CA02E038238B46A7EA8CD (U3CU3Ec_t913E8F36F28A99221F3E23352101263D2E2334E3* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// Google.Play.AssetDelivery.PlayAssetBundleRequest Google.Play.AssetDelivery.PlayAssetDelivery::RetrieveAssetBundleAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayAssetBundleRequest_tF91045E772B64A769998917B0141A4C7EEF03A14* PlayAssetDelivery_RetrieveAssetBundleAsync_m09BD8950FA5F26CEAFD3F583CEB0E168F8793B37 (String_t* ___assetBundleName0, const RuntimeMethod* method) ;
// TError Google.Play.Common.PlayAsyncOperation`2<Google.Play.AssetDelivery.ConfirmationDialogResult,Google.Play.AssetDelivery.AssetDeliveryErrorCode>::get_Error()
inline int32_t PlayAsyncOperation_2_get_Error_m106B9FC9CAD7E71A9975352E4A989F5A04579881_inline (PlayAsyncOperation_2_tC6A6D4EDC2216A5FC7BA21B23397DDA69F3FB7E1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (PlayAsyncOperation_2_tC6A6D4EDC2216A5FC7BA21B23397DDA69F3FB7E1*, const RuntimeMethod*))PlayAsyncOperation_2_get_Error_m71815CFA9518BFA25754BE151A7FAE8C068E2155_gshared_inline)(__this, method);
}
// TResult Google.Play.Common.PlayAsyncOperation`2<Google.Play.AssetDelivery.ConfirmationDialogResult,Google.Play.AssetDelivery.AssetDeliveryErrorCode>::GetResult()
inline int32_t PlayAsyncOperation_2_GetResult_m58C0DE3F1CB38C9DDA3C4A664473CA59FD99A5C3 (PlayAsyncOperation_2_tC6A6D4EDC2216A5FC7BA21B23397DDA69F3FB7E1* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (PlayAsyncOperation_2_tC6A6D4EDC2216A5FC7BA21B23397DDA69F3FB7E1*, const RuntimeMethod*))PlayAsyncOperation_2_GetResult_m24A123D146C53FCCEA204557907B5351195E9AEA_gshared)(__this, method);
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DownloadDisplay::SetStatus(Google.Play.AssetDelivery.AssetDeliveryStatus,Google.Play.AssetDelivery.AssetDeliveryErrorCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadDisplay_SetStatus_m81D1DAB50049DA5C61FC806164BB9588FDCA8B4C (DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* __this, int32_t ___status0, int32_t ___error1, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22 (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.WaitUntil::.ctor(System.Func`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* __this, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___predicate0, const RuntimeMethod* method) ;
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DownloadDisplay::SetProgress(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadDisplay_SetProgress_mFA3B98D656B414E7BE347D41052E5F1D28A5B36A (DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* __this, float ___progress0, const RuntimeMethod* method) ;
// System.Boolean Google.Play.AssetDelivery.PlayAssetBundleRequest::get_IsDone()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PlayAssetBundleRequest_get_IsDone_mCE97AAD66758C70BBFFD23951ECE3958C45287F9_inline (PlayAssetBundleRequest_tF91045E772B64A769998917B0141A4C7EEF03A14* __this, const RuntimeMethod* method) ;
// UnityEngine.AssetBundle Google.Play.AssetDelivery.PlayAssetBundleRequest::get_AssetBundle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AssetBundle_tB38418819A49060CD738CB21541649340F082943* PlayAssetBundleRequest_get_AssetBundle_m0126C158B7D2388FAEF7801881B1F910AC03798C_inline (PlayAssetBundleRequest_tF91045E772B64A769998917B0141A4C7EEF03A14* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/AssetWithinPack>::GetEnumerator()
inline Enumerator_t324E44CBED9D18AB38FB942CF42E7165DA8324B9 List_1_GetEnumerator_m812062EA22C7025B853992D2B75144A91192C34C (List_1_tA59DCF9584AAD07D38DEBB531E8F52DE73D0A259* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t324E44CBED9D18AB38FB942CF42E7165DA8324B9 (*) (List_1_tA59DCF9584AAD07D38DEBB531E8F52DE73D0A259*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/AssetWithinPack>::Dispose()
inline void Enumerator_Dispose_mC48BEA5616F0EAE3D981F1A7093C0ADCF657D4D3 (Enumerator_t324E44CBED9D18AB38FB942CF42E7165DA8324B9* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t324E44CBED9D18AB38FB942CF42E7165DA8324B9*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/AssetWithinPack>::get_Current()
inline AssetWithinPack_t675DE17DF7B2A4390E90CF4BFBBD35B708F8A888* Enumerator_get_Current_m9E531977700E2A8DEBA530001FDE293F2DFBC4F2_inline (Enumerator_t324E44CBED9D18AB38FB942CF42E7165DA8324B9* __this, const RuntimeMethod* method)
{
	return ((  AssetWithinPack_t675DE17DF7B2A4390E90CF4BFBBD35B708F8A888* (*) (Enumerator_t324E44CBED9D18AB38FB942CF42E7165DA8324B9*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m5E690BA6FF4EEAF77134046BD5DE25E648525B99 (U3CU3Ec__DisplayClass8_0_t4CA7E6D8419DE7640D7B7372D1E5A67D0E0E2185* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/AssetWithinPack>::MoveNext()
inline bool Enumerator_MoveNext_mFD9EC57D48262EFB569B4DE5D425CBF584FF54A7 (Enumerator_t324E44CBED9D18AB38FB942CF42E7165DA8324B9* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t324E44CBED9D18AB38FB942CF42E7165DA8324B9*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader::SetInitialStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetPackBatchDownloader_SetInitialStatus_m26C8BA5EB72925D374AD48DE1E3BCC98AFD02B2B (AssetPackBatchDownloader_tE776DD9212256FBF18573752A1E130CEF64B595A* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader::CoLoadAssetPackBatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AssetPackBatchDownloader_CoLoadAssetPackBatch_mD5DDC9C8CEE576FF7F798EEA3E15A8A8B813FA67 (AssetPackBatchDownloader_tE776DD9212256FBF18573752A1E130CEF64B595A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.String Google.Play.AssetDelivery.AssetLocation::get_Path()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AssetLocation_get_Path_mE42C8AE55104A19118D83F461D5322452222A327_inline (AssetLocation_t0793F2DE982E47275F0837DE78452359683C3C80* __this, const RuntimeMethod* method) ;
// System.IO.FileStream System.IO.File::OpenRead(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* File_OpenRead_m6181B052EB0E98D2E18FAC79E7744D766BA4244C (String_t* ___path0, const RuntimeMethod* method) ;
// System.UInt64 Google.Play.AssetDelivery.AssetLocation::get_Size()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t AssetLocation_get_Size_mCCC1E1F6201029DE26395F8DAD625608964719D8_inline (AssetLocation_t0793F2DE982E47275F0837DE78452359683C3C80* __this, const RuntimeMethod* method) ;
// System.UInt64 Google.Play.AssetDelivery.AssetLocation::get_Offset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t AssetLocation_get_Offset_mA0E7D8C9A46AA09DE92EA0B326D690A26C0B00C6_inline (AssetLocation_t0793F2DE982E47275F0837DE78452359683C3C80* __this, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/<CoLoadAssetPackBatch>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoLoadAssetPackBatchU3Ed__14__ctor_mD1510615C12CAD3344CF52C2F66E56ED0558EDA4 (U3CCoLoadAssetPackBatchU3Ed__14_t7D69F65F8A17610B42A6C5858F1A1BD5F30C0844* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader::ButtonEventDisplayTextAsset(Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/AssetWithinPack)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetPackBatchDownloader_ButtonEventDisplayTextAsset_mEB38E65D74BCDE49F4674502C354886AD9FCAFF7 (AssetPackBatchDownloader_tE776DD9212256FBF18573752A1E130CEF64B595A* __this, AssetWithinPack_t675DE17DF7B2A4390E90CF4BFBBD35B708F8A888* ___asset0, const RuntimeMethod* method) ;
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEF0B40903F3C4AA0A67AD93AB459755E83FEBD29 (U3CU3Ec_tA8EAA00333BCDD7B9A7A8B9E4E1A8ED2B4697512* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/AssetWithinPack,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mDF556E5A8849B1BF72945789B559C42797901E22 (Func_2_t07CAF9D420EC549EF159B1FC8D173AD0751FBF2F* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t07CAF9D420EC549EF159B1FC8D173AD0751FBF2F*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/AssetWithinPack,System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisAssetWithinPack_t675DE17DF7B2A4390E90CF4BFBBD35B708F8A888_TisString_t_mF0CAB691562DB6F73982AF274CBEF12594AA0714 (RuntimeObject* ___source0, Func_2_t07CAF9D420EC549EF159B1FC8D173AD0751FBF2F* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t07CAF9D420EC549EF159B1FC8D173AD0751FBF2F*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared)(___source0, ___selector1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline RuntimeObject* Enumerable_Distinct_TisString_t_m1E99E758E2A5605D0EE48F5715C69AF1096BF99B (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Distinct_TisRuntimeObject_mBCF33F5AD0A25B1E57B46FF34330DF74278ADB9E_gshared)(___source0, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___source0, method);
}
// Google.Play.AssetDelivery.PlayAssetPackBatchRequest Google.Play.AssetDelivery.PlayAssetDelivery::RetrieveAssetPackBatchAsync(System.Collections.Generic.IList`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayAssetPackBatchRequest_t870FF270EED353BBE7C7103FE8A264D2DD79F02D* PlayAssetDelivery_RetrieveAssetPackBatchAsync_m07DC8429537D7E5BADE34BD9EBC75746EBB9EBD8 (RuntimeObject* ___assetPackNames0, const RuntimeMethod* method) ;
// System.Single Google.Play.AssetDelivery.PlayAssetPackRequest::get_DownloadProgress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PlayAssetPackRequest_get_DownloadProgress_mA490FFA978283C5FE0AD726E4D068D6047B161D7_inline (PlayAssetPackRequest_t02798684A55633E4F651042F75B09FD47459642F* __this, const RuntimeMethod* method) ;
// System.Boolean Google.Play.AssetDelivery.PlayAssetPackBatchRequest::get_IsDone()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PlayAssetPackBatchRequest_get_IsDone_m2AED4BE21473E5256202EE7847252C8165F80059_inline (PlayAssetPackBatchRequest_t870FF270EED353BBE7C7103FE8A264D2DD79F02D* __this, const RuntimeMethod* method) ;
// Google.Play.AssetDelivery.AssetDeliveryErrorCode Google.Play.AssetDelivery.PlayAssetPackRequest::get_Error()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PlayAssetPackRequest_get_Error_m12DDFDA5DFB4C43B70DEA4CDFA3A48C5EB8A86C6_inline (PlayAssetPackRequest_t02798684A55633E4F651042F75B09FD47459642F* __this, const RuntimeMethod* method) ;
// Google.Play.AssetDelivery.AssetDeliveryStatus Google.Play.AssetDelivery.PlayAssetPackRequest::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PlayAssetPackRequest_get_Status_mA68461C226CA4AE1D83E70B45DEBAB2486347B04_inline (PlayAssetPackRequest_t02798684A55633E4F651042F75B09FD47459642F* __this, const RuntimeMethod* method) ;
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DownloadDisplay::BindButton(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadDisplay_BindButton_mF70687045EB933311DD7EECB041401D9B045D66C (DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___button0, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader::SetInitialStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetPackDownloader_SetInitialStatus_m9084D31499C005595DE0AB447EA6F798D46A50D5 (AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* __this, const RuntimeMethod* method) ;
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader::DisplayDownloadSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetPackDownloader_DisplayDownloadSize_m1FE74FD9F112330987CB0B3C9F7F910472091C12 (AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* __this, const RuntimeMethod* method) ;
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader::set_IsInitialized(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AssetPackDownloader_set_IsInitialized_m1D0A1D05640AEBA36544E3CE81467E9D8300A9E5_inline (AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader::DownloadAssetPackCo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AssetPackDownloader_DownloadAssetPackCo_mCFD201704A2A9BD8FA9FCD23FA12F20C4B3FF8AB (AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader::LoadAssetBundleFromRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AssetPackDownloader_LoadAssetBundleFromRequest_m84F3C28CDE1AD8CB33123851D18B89BBAE06B67E (AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader>::get_Count()
inline int32_t List_1_get_Count_m91584B5F83283AF0FFE92C3BE294297E595A7A70_inline (List_1_t9377DF2561252735B78BDD064180DA92104163AC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t9377DF2561252735B78BDD064180DA92104163AC*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Predicate`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m0159716919EDB5078A99313E0ADAF2F43A1D0AAE (Predicate_1_t61215A903E08C55609FCEB0A952B6873EA699397* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t61215A903E08C55609FCEB0A952B6873EA699397*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean System.Collections.Generic.List`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader>::TrueForAll(System.Predicate`1<T>)
inline bool List_1_TrueForAll_mA6D99482126C1FAAA7DF4E453F628E4966C0CC92 (List_1_t9377DF2561252735B78BDD064180DA92104163AC* __this, Predicate_1_t61215A903E08C55609FCEB0A952B6873EA699397* ___match0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t9377DF2561252735B78BDD064180DA92104163AC*, Predicate_1_t61215A903E08C55609FCEB0A952B6873EA699397*, const RuntimeMethod*))List_1_TrueForAll_m42970A37E48F81C72653F656FC51EC3A14709698_gshared)(__this, ___match0, method);
}
// System.Boolean Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader::IsLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AssetPackDownloader_IsLoaded_m3AF47DCA7AAB430A117DB84E7F056DEE2941FCCD (AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* __this, const RuntimeMethod* method) ;
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader/<DownloadAssetPackCo>d__31::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownloadAssetPackCoU3Ed__31__ctor_mFB6CF51171823FF663A689D8459B7936A83F0B4C (U3CDownloadAssetPackCoU3Ed__31_t8A7973CA088D068780861BF9CF9213C663799916* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader/<LoadAssetBundleFromRequest>d__32::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAssetBundleFromRequestU3Ed__32__ctor_m6BCDD0CDBD8E7E626CD069746AFB873C718FA371 (U3CLoadAssetBundleFromRequestU3Ed__32_t9CF286BBFC5DF116185B7A8805E9341A7D84F5D3* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader::UnloadAssetBundle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetPackDownloader_UnloadAssetBundle_mACC7B3A81213FA10453522345F729FF3905939F3 (AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* __this, const RuntimeMethod* method) ;
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1268F5EE3A993DBBE52584B1FA996FB55D004A2A (U3CU3Ec_tAB125A3BC4423BFAEEA5EEA4C174BD1A19B5EE75* __this, const RuntimeMethod* method) ;
// Google.Play.AssetDelivery.PlayAssetPackRequest Google.Play.AssetDelivery.PlayAssetDelivery::RetrieveAssetPackAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayAssetPackRequest_t02798684A55633E4F651042F75B09FD47459642F* PlayAssetDelivery_RetrieveAssetPackAsync_m60A03D02CEFD08C2A8CC16C21C210B4FA2649A5D (String_t* ___assetPackName0, const RuntimeMethod* method) ;
// System.Boolean Google.Play.AssetDelivery.PlayAssetPackRequest::get_IsDone()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PlayAssetPackRequest_get_IsDone_m4281D1A24674FF595FC582EA50C5BDC6F90B7094_inline (PlayAssetPackRequest_t02798684A55633E4F651042F75B09FD47459642F* __this, const RuntimeMethod* method) ;
// UnityEngine.AssetBundle UnityEngine.AssetBundleCreateRequest::get_assetBundle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetBundle_tB38418819A49060CD738CB21541649340F082943* AssetBundleCreateRequest_get_assetBundle_m613FDE589FB86BE1E6920D38ED0706F785D9DB21 (AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<Start>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__14__ctor_m7E5FC4EFAF48917F773A0170FE7D1A9F803B543C (U3CStartU3Ed__14_t57AC3B2B24DE8B132D2F26ECD006DB1BB601B640* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::get_anyKeyDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_get_anyKeyDown_m9B8D98B5574A2AA63CEED98FBF0E2A1D946BCA71 (const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<UnityEngine.KeyCode,System.Action>::GetEnumerator()
inline Enumerator_tE1D422C647B8372E66DC1E06CC5B2D8D95E01F34 Dictionary_2_GetEnumerator_mC579893BE0ECE7E8AD35CDB1DB42A40737BF0BEC (Dictionary_2_t961634992B8C7A1CD2414B0736961441B05B610F* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tE1D422C647B8372E66DC1E06CC5B2D8D95E01F34 (*) (Dictionary_2_t961634992B8C7A1CD2414B0736961441B05B610F*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m4126F9137DF46492CEB1563FCCD5A16C5F99D686_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.KeyCode,System.Action>::Dispose()
inline void Enumerator_Dispose_m69A91D35B30F7C0C720585BD3C998DA06D1D4C85 (Enumerator_tE1D422C647B8372E66DC1E06CC5B2D8D95E01F34* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE1D422C647B8372E66DC1E06CC5B2D8D95E01F34*, const RuntimeMethod*))Enumerator_Dispose_m183A70972A3287360EE9443997160D3AA6D4662D_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.KeyCode,System.Action>::get_Current()
inline KeyValuePair_2_tA5109975B9D659C4CDF0BA586254EC261816BA3D Enumerator_get_Current_m6CEFBA65D7DDB14606C98CE1C6E298923E00FDA3_inline (Enumerator_tE1D422C647B8372E66DC1E06CC5B2D8D95E01F34* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tA5109975B9D659C4CDF0BA586254EC261816BA3D (*) (Enumerator_tE1D422C647B8372E66DC1E06CC5B2D8D95E01F34*, const RuntimeMethod*))Enumerator_get_Current_m12EE850D56E586DF121B059557CEAF4A7472995B_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<UnityEngine.KeyCode,System.Action>::get_Key()
inline int32_t KeyValuePair_2_get_Key_mBC9FD00759B32D10E02989FE9985F0C6E87446DC_inline (KeyValuePair_2_tA5109975B9D659C4CDF0BA586254EC261816BA3D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_tA5109975B9D659C4CDF0BA586254EC261816BA3D*, const RuntimeMethod*))KeyValuePair_2_get_Key_m9698075D0C5F788A3B6AEBF1ABDFACCAB5854E90_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___key0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<UnityEngine.KeyCode,System.Action>::get_Value()
inline Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* KeyValuePair_2_get_Value_mC2CDCC4FEF41C1C391CE4263437B2676B480062B_inline (KeyValuePair_2_tA5109975B9D659C4CDF0BA586254EC261816BA3D* __this, const RuntimeMethod* method)
{
	return ((  Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* (*) (KeyValuePair_2_tA5109975B9D659C4CDF0BA586254EC261816BA3D*, const RuntimeMethod*))KeyValuePair_2_get_Value_m415A21240AEF58C2E0A2FBA97E2BB75637781DB5_gshared_inline)(__this, method);
}
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.KeyCode,System.Action>::MoveNext()
inline bool Enumerator_MoveNext_mF5E61A4CFC054BA9B576C411E1E6C93BC88933CA (Enumerator_tE1D422C647B8372E66DC1E06CC5B2D8D95E01F34* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE1D422C647B8372E66DC1E06CC5B2D8D95E01F34*, const RuntimeMethod*))Enumerator_MoveNext_m48EC022EB2EB605F29EE19F3A0A79E3CB05FD283_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.KeyCode>::GetEnumerator()
inline Enumerator_t4192013435A770FA2346D36DBBBFA7EFF452CEE5 List_1_GetEnumerator_mEB5CAC74E588EFB6530371C6DD9DA9E6E8F9F61D (List_1_tB7F9EA9DD46F974E3E396408B3EF9E0ED62F6D32* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t4192013435A770FA2346D36DBBBFA7EFF452CEE5 (*) (List_1_tB7F9EA9DD46F974E3E396408B3EF9E0ED62F6D32*, const RuntimeMethod*))List_1_GetEnumerator_m87BBBF3FBB0A4EBF1C2940AA91570D7F1565F60D_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.KeyCode>::Dispose()
inline void Enumerator_Dispose_m617C29693EB2801276678FF3113122991240CDF0 (Enumerator_t4192013435A770FA2346D36DBBBFA7EFF452CEE5* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t4192013435A770FA2346D36DBBBFA7EFF452CEE5*, const RuntimeMethod*))Enumerator_Dispose_m09AF8D2807410AAEB42E9FCC1A54299458EFEFF2_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.KeyCode>::get_Current()
inline int32_t Enumerator_get_Current_m1EB88CCB3276E602D3FE9BB36D2F521ABDD86E20_inline (Enumerator_t4192013435A770FA2346D36DBBBFA7EFF452CEE5* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_t4192013435A770FA2346D36DBBBFA7EFF452CEE5*, const RuntimeMethod*))Enumerator_get_Current_mB6A201CD563FEF33A6BDA75B83C7BF2AA36CD98C_gshared_inline)(__this, method);
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController::ProcessDownloaderCommand(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoController_ProcessDownloaderCommand_m53AADB55AB690A1FAE5C1DDD5EF0E5EDA843EB3A (DemoController_t10B60839C2F080D6587383BA0242AC07EC1965B2* __this, int32_t ___keyCode0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.KeyCode>::MoveNext()
inline bool Enumerator_MoveNext_mB46607AA8EBED12F5C4392F03DA7A93FB5EE5172 (Enumerator_t4192013435A770FA2346D36DBBBFA7EFF452CEE5* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t4192013435A770FA2346D36DBBBFA7EFF452CEE5*, const RuntimeMethod*))Enumerator_MoveNext_mCAE99D26B8B4D7880B37A70AC8DFD8C7AA4FCCE5_gshared)(__this, method);
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<>c__DisplayClass16_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0__ctor_m09F4870BF63A54CD3BBB8FA005F36F6326505CCA (U3CU3Ec__DisplayClass16_0_t1AE2F007F691AB4C80A3A277A32D29363031A83F* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/IDownloaderInputMapper,UnityEngine.UI.Button>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mCA1C352FE99905E1414C8B956E87F2A9C5A3D69A (Func_2_tB1B84D12BEBA1BCB5F9BD7DFEB37DA4AA0E70715* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tB1B84D12BEBA1BCB5F9BD7DFEB37DA4AA0E70715*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/IDownloaderInputMapper,UnityEngine.UI.Button>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisIDownloaderInputMapper_t523C8C42D42142DC2400EA308C9E3DCA1829A398_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m601C39EC0BB01397240F5E5489E57214E800F391 (RuntimeObject* ___source0, Func_2_tB1B84D12BEBA1BCB5F9BD7DFEB37DA4AA0E70715* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tB1B84D12BEBA1BCB5F9BD7DFEB37DA4AA0E70715*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared)(___source0, ___selector1, method);
}
// System.Void System.Func`2<UnityEngine.UI.Button,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m42BD9813B2D79292321A17699E28F9CAEBBA761F (Func_2_tE7B48BCEE2F78C885FD6E61A15E473ACC2A36017* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tE7B48BCEE2F78C885FD6E61A15E473ACC2A36017*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<UnityEngine.UI.Button>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m8E2ECFF174A4CDB8D3BB37CF8C4B24030CF4C2F9 (RuntimeObject* ___source0, Func_2_tE7B48BCEE2F78C885FD6E61A15E473ACC2A36017* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tE7B48BCEE2F78C885FD6E61A15E473ACC2A36017*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared)(___source0, ___predicate1, method);
}
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController::ClickButton(UnityEngine.UI.Button,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoController_ClickButton_mDEC5EDA034B9264F6830214F3B679DE0F8EC48D6 (DemoController_t10B60839C2F080D6587383BA0242AC07EC1965B2* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___button0, String_t* ___buttonName1, const RuntimeMethod* method) ;
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoPager::SetPage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoPager_SetPage_mAD2DCEF7AB4EDFC7382FC39C1D75743F0664874D (DemoPager_t0470EDB09F4AE3D5CAAFC3AE112A3C07CB82F439* __this, int32_t ___pageIndex0, const RuntimeMethod* method) ;
// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoPager/Page Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoPager::GetCurrentPage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Page_t654646AF8CFA0A91CB3477E71E5CAB53307D494B* DemoPager_GetCurrentPage_m996E87E0DB75F93B5AEA255063F4C2BC4AD5320D (DemoPager_t0470EDB09F4AE3D5CAAFC3AE112A3C07CB82F439* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DownloadDisplay>()
inline DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* GameObject_GetComponent_TisDownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740_m3B391AAD31B7FEC7E16B2E07F90EEB0007445A1E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/DownloaderInputMapper`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader>::.ctor()
inline void DownloaderInputMapper_1__ctor_mE50D3A2EFF64A484F7384DEAA26F8B41C01B6F1F (DownloaderInputMapper_1_tD40C43DD11CCDB08EA8C1419FFE3114433C1ABE4* __this, const RuntimeMethod* method)
{
	((  void (*) (DownloaderInputMapper_1_tD40C43DD11CCDB08EA8C1419FFE3114433C1ABE4*, const RuntimeMethod*))DownloaderInputMapper_1__ctor_m040AF13C531E06E51058199A1B3589F45913F8DF_gshared)(__this, method);
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/DownloaderInputMapper`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader>::.ctor()
inline void DownloaderInputMapper_1__ctor_m1FC840D8D62782BFABCDD8269F4E97E254B52AD7 (DownloaderInputMapper_1_t31C9AC8D70F7A548AAC262167CA8C370BDBEA957* __this, const RuntimeMethod* method)
{
	((  void (*) (DownloaderInputMapper_1_t31C9AC8D70F7A548AAC262167CA8C370BDBEA957*, const RuntimeMethod*))DownloaderInputMapper_1__ctor_m040AF13C531E06E51058199A1B3589F45913F8DF_gshared)(__this, method);
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/DownloaderInputMapper`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader>::.ctor()
inline void DownloaderInputMapper_1__ctor_mB42D8345E04660AA72FEFA91784AD4D38CDAE181 (DownloaderInputMapper_1_tA52A4D97B24F5A9239FC2D6848A74C26AE76A790* __this, const RuntimeMethod* method)
{
	((  void (*) (DownloaderInputMapper_1_tA52A4D97B24F5A9239FC2D6848A74C26AE76A790*, const RuntimeMethod*))DownloaderInputMapper_1__ctor_m040AF13C531E06E51058199A1B3589F45913F8DF_gshared)(__this, method);
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController::SelectDownloader(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoController_SelectDownloader_m7C1100893EB37A7019F4B87ED98DB33C8C93965A (DemoController_t10B60839C2F080D6587383BA0242AC07EC1965B2* __this, int32_t ___pageIndex0, int32_t ___downloaderIndex1, const RuntimeMethod* method) ;
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6D75855917D18F96CE5743409B1D53B1A543BCBA (U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/AssetWithinPack>::get_Item(System.Int32)
inline AssetWithinPack_t675DE17DF7B2A4390E90CF4BFBBD35B708F8A888* List_1_get_Item_mABD073A6F6B75E205B8E9A6E5B2D14CDA5F19B81 (List_1_tA59DCF9584AAD07D38DEBB531E8F52DE73D0A259* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  AssetWithinPack_t675DE17DF7B2A4390E90CF4BFBBD35B708F8A888* (*) (List_1_tA59DCF9584AAD07D38DEBB531E8F52DE73D0A259*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Boolean Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader::get_IsInitialized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AssetBundleDownloader_get_IsInitialized_mEECA681BA13F43C0BC6BC236A8C2F90A57702E29_inline (AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoPager>()
inline DemoPager_t0470EDB09F4AE3D5CAAFC3AE112A3C07CB82F439* Component_GetComponent_TisDemoPager_t0470EDB09F4AE3D5CAAFC3AE112A3C07CB82F439_m10223CAB3313EAC7A7A4BE6EC27F7D54355E3286 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  DemoPager_t0470EDB09F4AE3D5CAAFC3AE112A3C07CB82F439* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.KeyCode,System.Action>::.ctor()
inline void Dictionary_2__ctor_m1792755F4994F7B283CDF5812B9A94AF977F161F (Dictionary_2_t961634992B8C7A1CD2414B0736961441B05B610F* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t961634992B8C7A1CD2414B0736961441B05B610F*, const RuntimeMethod*))Dictionary_2__ctor_mCC9983804D8DC41E938E080075F9EA7BDD0C7059_gshared)(__this, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.KeyCode,System.Action>::Add(TKey,TValue)
inline void Dictionary_2_Add_m71DA0732D123B9377FF53F5D6AA5418D7E79CA11 (Dictionary_2_t961634992B8C7A1CD2414B0736961441B05B610F* __this, int32_t ___key0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t961634992B8C7A1CD2414B0736961441B05B610F*, int32_t, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))Dictionary_2_Add_mC515884C0546021A29DC0A00DBCABD89B1B65872_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.KeyCode,Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/ButtonFromDownloader`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader>>::.ctor()
inline void Dictionary_2__ctor_m6032F983B96F193C896FB3D6D32E8E361D14E5D4 (Dictionary_2_t2BEE0B6563F88D6F1ACA1C7095F12BB7F1A7C0BA* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2BEE0B6563F88D6F1ACA1C7095F12BB7F1A7C0BA*, const RuntimeMethod*))Dictionary_2__ctor_mCC9983804D8DC41E938E080075F9EA7BDD0C7059_gshared)(__this, method);
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/ButtonFromDownloader`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader>::.ctor(System.Object,System.IntPtr)
inline void ButtonFromDownloader_1__ctor_mD8EED84996D9852722BFD5B10AFAC3F62877BD23 (ButtonFromDownloader_1_tA2799689A60EC73EF8B5AE562F93CEE4D53AC0C6* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (ButtonFromDownloader_1_tA2799689A60EC73EF8B5AE562F93CEE4D53AC0C6*, RuntimeObject*, intptr_t, const RuntimeMethod*))ButtonFromDownloader_1__ctor_m23048C8464336586BB4B2647A910F3EFFAC8BEF0_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.KeyCode,Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/ButtonFromDownloader`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader>>::Add(TKey,TValue)
inline void Dictionary_2_Add_m4FEBF44FF50D4F06146EF6B9FE6A8BB24980D629 (Dictionary_2_t2BEE0B6563F88D6F1ACA1C7095F12BB7F1A7C0BA* __this, int32_t ___key0, ButtonFromDownloader_1_tA2799689A60EC73EF8B5AE562F93CEE4D53AC0C6* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2BEE0B6563F88D6F1ACA1C7095F12BB7F1A7C0BA*, int32_t, ButtonFromDownloader_1_tA2799689A60EC73EF8B5AE562F93CEE4D53AC0C6*, const RuntimeMethod*))Dictionary_2_Add_mC515884C0546021A29DC0A00DBCABD89B1B65872_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.KeyCode,Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/ButtonFromDownloader`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader>>::.ctor()
inline void Dictionary_2__ctor_mF1138E99255A29F054BABFABC8228D927F081237 (Dictionary_2_t3BEBDC70F0A50BB404F53D3071BFBE3E192BB9BC* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3BEBDC70F0A50BB404F53D3071BFBE3E192BB9BC*, const RuntimeMethod*))Dictionary_2__ctor_mCC9983804D8DC41E938E080075F9EA7BDD0C7059_gshared)(__this, method);
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/ButtonFromDownloader`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader>::.ctor(System.Object,System.IntPtr)
inline void ButtonFromDownloader_1__ctor_m83A92B4754FB75E858F8339F675EAC291DB035B8 (ButtonFromDownloader_1_t506B9580D771FD322640060B6F2DC5B4F0D17C8C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (ButtonFromDownloader_1_t506B9580D771FD322640060B6F2DC5B4F0D17C8C*, RuntimeObject*, intptr_t, const RuntimeMethod*))ButtonFromDownloader_1__ctor_m23048C8464336586BB4B2647A910F3EFFAC8BEF0_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.KeyCode,Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/ButtonFromDownloader`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader>>::Add(TKey,TValue)
inline void Dictionary_2_Add_m706C3E8D2AEADEF73B2A0957C636FB5644FAED99 (Dictionary_2_t3BEBDC70F0A50BB404F53D3071BFBE3E192BB9BC* __this, int32_t ___key0, ButtonFromDownloader_1_t506B9580D771FD322640060B6F2DC5B4F0D17C8C* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3BEBDC70F0A50BB404F53D3071BFBE3E192BB9BC*, int32_t, ButtonFromDownloader_1_t506B9580D771FD322640060B6F2DC5B4F0D17C8C*, const RuntimeMethod*))Dictionary_2_Add_mC515884C0546021A29DC0A00DBCABD89B1B65872_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.KeyCode,Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/ButtonFromDownloader`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader>>::.ctor()
inline void Dictionary_2__ctor_mC8A2ED7AF1169869007C72B5A3D2101FA015D882 (Dictionary_2_t91C8A923863C4F8996A36010D3447BD78F809F8D* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t91C8A923863C4F8996A36010D3447BD78F809F8D*, const RuntimeMethod*))Dictionary_2__ctor_mCC9983804D8DC41E938E080075F9EA7BDD0C7059_gshared)(__this, method);
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/ButtonFromDownloader`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader>::.ctor(System.Object,System.IntPtr)
inline void ButtonFromDownloader_1__ctor_m4D6FFAFA81D2A3D6376EC0BCCC93C8A214F063BF (ButtonFromDownloader_1_tD7993D71501910BD8D13A0D63844C4D8699E43D3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (ButtonFromDownloader_1_tD7993D71501910BD8D13A0D63844C4D8699E43D3*, RuntimeObject*, intptr_t, const RuntimeMethod*))ButtonFromDownloader_1__ctor_m23048C8464336586BB4B2647A910F3EFFAC8BEF0_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.KeyCode,Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/ButtonFromDownloader`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader>>::Add(TKey,TValue)
inline void Dictionary_2_Add_m9F4E1EF1159C1F90E9F6A52ED3F9ABF28F8D87E0 (Dictionary_2_t91C8A923863C4F8996A36010D3447BD78F809F8D* __this, int32_t ___key0, ButtonFromDownloader_1_tD7993D71501910BD8D13A0D63844C4D8699E43D3* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t91C8A923863C4F8996A36010D3447BD78F809F8D*, int32_t, ButtonFromDownloader_1_tD7993D71501910BD8D13A0D63844C4D8699E43D3*, const RuntimeMethod*))Dictionary_2_Add_mC515884C0546021A29DC0A00DBCABD89B1B65872_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/IDownloaderInputMapper>::.ctor()
inline void List_1__ctor_mAC889D2D3A04D4473E8B932E17FBD4A18E17852B (List_1_tE9981AC1FFBE2D475181694CF7B1674AB079D4EC* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE9981AC1FFBE2D475181694CF7B1674AB079D4EC*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/IDownloaderInputMapper>::Add(T)
inline void List_1_Add_m9E44E7DEE89BE92B8AA50AACDFE26D66CACCEFBB_inline (List_1_tE9981AC1FFBE2D475181694CF7B1674AB079D4EC* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE9981AC1FFBE2D475181694CF7B1674AB079D4EC*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Func`2<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/IDownloaderInputMapper,System.Collections.Generic.IEnumerable`1<UnityEngine.KeyCode>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mEE7FEAACBB5916CF2A0E2DAD624AF220DC163C23 (Func_2_t165CB6061C1CED35EC6B0E9FFDD60B5D4D36E2FA* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t165CB6061C1CED35EC6B0E9FFDD60B5D4D36E2FA*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany<Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/IDownloaderInputMapper,UnityEngine.KeyCode>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
inline RuntimeObject* Enumerable_SelectMany_TisIDownloaderInputMapper_t523C8C42D42142DC2400EA308C9E3DCA1829A398_TisKeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_m4AF0815E4628A9A5FC3B69FE78BEEF6CD3FCBD7C (RuntimeObject* ___source0, Func_2_t165CB6061C1CED35EC6B0E9FFDD60B5D4D36E2FA* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t165CB6061C1CED35EC6B0E9FFDD60B5D4D36E2FA*, const RuntimeMethod*))Enumerable_SelectMany_TisRuntimeObject_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m3591E43F258F2F50A90412FE052C3518925C74F9_gshared)(___source0, ___selector1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct<UnityEngine.KeyCode>(System.Collections.Generic.IEnumerable`1<TSource>)
inline RuntimeObject* Enumerable_Distinct_TisKeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_mA20F5EAE0BA56B5438E077C38B3A04D33DFD392B (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Distinct_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m599E6C741116CE25F595B45D424BEF6C56BE3829_gshared)(___source0, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<UnityEngine.KeyCode>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_tB7F9EA9DD46F974E3E396408B3EF9E0ED62F6D32* Enumerable_ToList_TisKeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_mBDCDE5676D2E03C287AB081ABD3B45F01243BAA2 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_tB7F9EA9DD46F974E3E396408B3EF9E0ED62F6D32* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m2212F4FB231C9EAAC7FF8907D5D1D7F6B3B57A66_gshared)(___source0, method);
}
// System.Boolean Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController::AllDisplaysInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DemoController_AllDisplaysInitialized_mE0570A8FF44586EF6CBD6E5616419DC07FAB4049 (DemoController_t10B60839C2F080D6587383BA0242AC07EC1965B2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Button>::.ctor()
inline void List_1__ctor_mBCE3BE1FB943396333E483F66490F0690048CA2E (List_1_tCB5B3B0C70F6DFB6B059BB2C65DC77B101849444* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCB5B3B0C70F6DFB6B059BB2C65DC77B101849444*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Button>::Add(T)
inline void List_1_Add_m4F809219B2B92D16365B4B27F60BA2DD8F5A5650_inline (List_1_tCB5B3B0C70F6DFB6B059BB2C65DC77B101849444* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCB5B3B0C70F6DFB6B059BB2C65DC77B101849444*, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<UnityEngine.UI.Button>::Add(T)
inline bool HashSet_1_Add_mB31DFE3E3E4C545989419040477D4A6A71DFAF23 (HashSet_1_tF168427C45B13CF5D70310549C18B8AB18046A41* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tF168427C45B13CF5D70310549C18B8AB18046A41*, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___item0, method);
}
// System.Void Google.Play.Common.LoadingScreen.LoadingBar::SetProgress(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadingBar_SetProgress_m993F37353EB1287A71FDA8EA813E06B6CC3F92D9 (LoadingBar_t499215F28A93E9B219B9BF523B928A2A271B67C7* __this, float ___proportionOfLoadingBar0, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<UnityEngine.UI.Button>::ToArray()
inline ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* List_1_ToArray_mA5249763CC5D6A0B85B1463BF70B178383FF1813 (List_1_tCB5B3B0C70F6DFB6B059BB2C65DC77B101849444* __this, const RuntimeMethod* method)
{
	return ((  ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* (*) (List_1_tCB5B3B0C70F6DFB6B059BB2C65DC77B101849444*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<UnityEngine.UI.Button>::GetEnumerator()
inline Enumerator_tF9998FA17ED4A1F6464D2F5579FEF6719703F85E HashSet_1_GetEnumerator_m47F97C089D4B6DAED3C45998C29B34DEBFF619CA (HashSet_1_tF168427C45B13CF5D70310549C18B8AB18046A41* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tF9998FA17ED4A1F6464D2F5579FEF6719703F85E (*) (HashSet_1_tF168427C45B13CF5D70310549C18B8AB18046A41*, const RuntimeMethod*))HashSet_1_GetEnumerator_m143B98FEED7E9CABA2C494AB2F04DAD60A504635_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.UI.Button>::Dispose()
inline void Enumerator_Dispose_mBB007C6D80EFCDC08E96F9CD186179E88E43A530 (Enumerator_tF9998FA17ED4A1F6464D2F5579FEF6719703F85E* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF9998FA17ED4A1F6464D2F5579FEF6719703F85E*, const RuntimeMethod*))Enumerator_Dispose_mFB582AEAA2E73F3128B5571197BEDE256A83F657_gshared)(__this, method);
}
// T System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.UI.Button>::get_Current()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* Enumerator_get_Current_m03911319D49D0D645CF6EE36689BC6AD20FFBAF7_inline (Enumerator_tF9998FA17ED4A1F6464D2F5579FEF6719703F85E* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (Enumerator_tF9998FA17ED4A1F6464D2F5579FEF6719703F85E*, const RuntimeMethod*))Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<UnityEngine.UI.Button>::MoveNext()
inline bool Enumerator_MoveNext_m5A2D93DB9E8C84353BAC6993A42F54F85C0B03E1 (Enumerator_tF9998FA17ED4A1F6464D2F5579FEF6719703F85E* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF9998FA17ED4A1F6464D2F5579FEF6719703F85E*, const RuntimeMethod*))Enumerator_MoveNext_m27565F5ACCCC75C3DD34CC4CAE3E6AEFEB9144A6_gshared)(__this, method);
}
// System.String System.Int64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B (int64_t* __this, const RuntimeMethod* method) ;
// System.Double System.Math::Pow(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Pow_mEAE651F0858203FBE12B72B6A53951BBD0FB5265 (double ___x0, double ___y1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Google.Play.AssetDelivery.AssetDeliveryStatus,System.Collections.Generic.List`1<UnityEngine.UI.Button>>::.ctor()
inline void Dictionary_2__ctor_m98ADEC4EE3C326D464FF26716ED11BCA73803358 (Dictionary_2_tD56BE9AC2B9A2440E3883B68E63D96980A8DF1EC* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tD56BE9AC2B9A2440E3883B68E63D96980A8DF1EC*, const RuntimeMethod*))Dictionary_2__ctor_mCC9983804D8DC41E938E080075F9EA7BDD0C7059_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1<UnityEngine.UI.Button>::.ctor()
inline void HashSet_1__ctor_m915925BE87DC24A8CD897473F5B2E1A42C2B1E1A (HashSet_1_tF168427C45B13CF5D70310549C18B8AB18046A41* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tF168427C45B13CF5D70310549C18B8AB18046A41*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Google.Play.AssetDelivery.AssetDeliveryStatus,UnityEngine.Color>::.ctor()
inline void Dictionary_2__ctor_m83FED82B1CF0991E38E45E920C5FC576D3283578 (Dictionary_2_t4C916E66BEF8BD9590CD356274E6DB5934A2990D* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t4C916E66BEF8BD9590CD356274E6DB5934A2990D*, const RuntimeMethod*))Dictionary_2__ctor_m504750EDD1E892E04F507E93D04DABE88540A2C2_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.LookAround::HandleInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookAround_HandleInput_mF3C267896D014843CDD7027C9B34AB14C79FF496 (LookAround_tF85F5C7BA4BF6AE15082C15A580CC8912713FEEE* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fromDirection0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___toDirection1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Boolean Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.LookAround::IsDragging()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LookAround_IsDragging_mA68DA0AF131E6FB7F538F6507DE418C045B6D206 (LookAround_tF85F5C7BA4BF6AE15082C15A580CC8912713FEEE* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Matrix4x4_op_Multiply_m319DF5B7DD9C9499EB8A5682FA63B1AAF0EE87A4 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___vector1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector4_op_Implicit_m0217ADDC8CADDB93ACBABB17A50207698DAB0071_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___v0, const RuntimeMethod* method) ;
// System.Boolean Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.LookAround::DidDraggingBegin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LookAround_DidDraggingBegin_m3B8CCADC894207B5A4E3CA5278A1DDE3E712649B (LookAround_tF85F5C7BA4BF6AE15082C15A580CC8912713FEEE* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA (int32_t ___button0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39 (const RuntimeMethod* method) ;
// UnityEngine.Touch[] UnityEngine.Input::get_touches()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* Input_get_touches_m7CFDF6848F3EC3A8FE458436B2B8BD14B5C65CEF (const RuntimeMethod* method) ;
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0 (Touch_t03E51455ED508492B3F278903A0114FA0E87B417* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3 (int32_t ___button0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___axis0, float ___angle1, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader::get_IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AssetBundleDownloader_get_IsInitialized_mEECA681BA13F43C0BC6BC236A8C2F90A57702E29 (AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsInitialized { get; private set; }
		bool L_0 = __this->___U3CIsInitializedU3Ek__BackingField_15;
		return L_0;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader::set_IsInitialized(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetBundleDownloader_set_IsInitialized_mB76D543B064A812BC83C54342CAFAC44E71F3FD2 (AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsInitialized { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CIsInitializedU3Ek__BackingField_15 = L_0;
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetBundleDownloader_Start_mFC8BC5F6EB5E415A64971A89493E5636A62B3A36 (AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetBundleDownloader_ButtonEventCancelDownload_mE8A388D327297B023A1340C68145E1877F8B69E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetBundleDownloader_ButtonEventLoadSceneFromAssetBundle_mD66CCE680C9A446459435824840B9560E3E9B188_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetBundleDownloader_ButtonEventRemoveAssetBundle_m73799EF74770B01FD6B39EA3636346916BFB5D81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetBundleDownloader_ButtonEventRetrieveAssetBundle_m67B8B9E6AD8C291618B736EC5DF2663DBFA67662_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetBundleDownloader_ButtonEventShowConfirmationDialog_m8D4C34876E86A5B31D8ABC143CD62E816B748A97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// RetrieveAssetBundleButton.onClick.AddListener(ButtonEventRetrieveAssetBundle);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___RetrieveAssetBundleButton_6;
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_0, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_2, __this, (intptr_t)((void*)AssetBundleDownloader_ButtonEventRetrieveAssetBundle_m67B8B9E6AD8C291618B736EC5DF2663DBFA67662_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_1, L_2, NULL);
		// LoadSceneButton.onClick.AddListener(ButtonEventLoadSceneFromAssetBundle);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->___LoadSceneButton_7;
		NullCheck(L_3);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_4;
		L_4 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_3, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_5, __this, (intptr_t)((void*)AssetBundleDownloader_ButtonEventLoadSceneFromAssetBundle_mD66CCE680C9A446459435824840B9560E3E9B188_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_4, L_5, NULL);
		// ShowCellularDialogButton.onClick.AddListener(ButtonEventShowConfirmationDialog);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_6 = __this->___ShowCellularDialogButton_8;
		NullCheck(L_6);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_7;
		L_7 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_6, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_8 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_8, __this, (intptr_t)((void*)AssetBundleDownloader_ButtonEventShowConfirmationDialog_m8D4C34876E86A5B31D8ABC143CD62E816B748A97_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_7, L_8, NULL);
		// CancelDownloadButton.onClick.AddListener(ButtonEventCancelDownload);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_9 = __this->___CancelDownloadButton_9;
		NullCheck(L_9);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_10;
		L_10 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_9, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_11 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_11, __this, (intptr_t)((void*)AssetBundleDownloader_ButtonEventCancelDownload_mE8A388D327297B023A1340C68145E1877F8B69E7_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_10, L_11, NULL);
		// RemoveButton.onClick.AddListener(ButtonEventRemoveAssetBundle);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_12 = __this->___RemoveButton_10;
		NullCheck(L_12);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_13;
		L_13 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_12, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_14 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_14, __this, (intptr_t)((void*)AssetBundleDownloader_ButtonEventRemoveAssetBundle_m73799EF74770B01FD6B39EA3636346916BFB5D81_RuntimeMethod_var), NULL);
		NullCheck(L_13);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_13, L_14, NULL);
		// Display.BindButton(CancelDownloadButton, AssetDeliveryStatus.Pending);
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_15 = __this->___Display_5;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_16 = __this->___CancelDownloadButton_9;
		NullCheck(L_15);
		DownloadDisplay_BindButton_m14577FE0BA953CD08832AFB68EF1519E2844D1C2(L_15, L_16, 0, NULL);
		// Display.BindButton(CancelDownloadButton, AssetDeliveryStatus.Retrieving);
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_17 = __this->___Display_5;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_18 = __this->___CancelDownloadButton_9;
		NullCheck(L_17);
		DownloadDisplay_BindButton_m14577FE0BA953CD08832AFB68EF1519E2844D1C2(L_17, L_18, 1, NULL);
		// Display.BindButton(ShowCellularDialogButton, AssetDeliveryStatus.WaitingForWifi);
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_19 = __this->___Display_5;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_20 = __this->___ShowCellularDialogButton_8;
		NullCheck(L_19);
		DownloadDisplay_BindButton_m14577FE0BA953CD08832AFB68EF1519E2844D1C2(L_19, L_20, 6, NULL);
		// Display.BindButton(ShowCellularDialogButton, AssetDeliveryStatus.RequiresUserConfirmation);
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_21 = __this->___Display_5;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_22 = __this->___ShowCellularDialogButton_8;
		NullCheck(L_21);
		DownloadDisplay_BindButton_m14577FE0BA953CD08832AFB68EF1519E2844D1C2(L_21, L_22, 7, NULL);
		// Display.BindButton(RemoveButton, AssetDeliveryStatus.Loaded);
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_23 = __this->___Display_5;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_24 = __this->___RemoveButton_10;
		NullCheck(L_23);
		DownloadDisplay_BindButton_m14577FE0BA953CD08832AFB68EF1519E2844D1C2(L_23, L_24, 4, NULL);
		// Display.BindButton(LoadSceneButton, AssetDeliveryStatus.Loaded);
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_25 = __this->___Display_5;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_26 = __this->___LoadSceneButton_7;
		NullCheck(L_25);
		DownloadDisplay_BindButton_m14577FE0BA953CD08832AFB68EF1519E2844D1C2(L_25, L_26, 4, NULL);
		// Display.BindButton(RetrieveAssetBundleButton, AssetDeliveryStatus.Failed);
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_27 = __this->___Display_5;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_28 = __this->___RetrieveAssetBundleButton_6;
		NullCheck(L_27);
		DownloadDisplay_BindButton_m14577FE0BA953CD08832AFB68EF1519E2844D1C2(L_27, L_28, 5, NULL);
		// Display.BindColor(Display.SuccessColor, AssetDeliveryStatus.Loaded);
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_29 = __this->___Display_5;
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_30 = __this->___Display_5;
		NullCheck(L_30);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31 = L_30->___SuccessColor_12;
		NullCheck(L_29);
		DownloadDisplay_BindColor_m3E906A37EFB9C9EC5CD03A638567FB5CBCAAAED3(L_29, L_31, 4, NULL);
		// Display.BindColor(Display.ErrorColor, AssetDeliveryStatus.Failed);
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_32 = __this->___Display_5;
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_33 = __this->___Display_5;
		NullCheck(L_33);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_34 = L_33->___ErrorColor_11;
		NullCheck(L_32);
		DownloadDisplay_BindColor_m3E906A37EFB9C9EC5CD03A638567FB5CBCAAAED3(L_32, L_34, 5, NULL);
		// Display.SetNameText(AssetBundleName);
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_35 = __this->___Display_5;
		String_t* L_36 = __this->___AssetBundleName_4;
		NullCheck(L_35);
		DownloadDisplay_SetNameText_m92B5C46851DD3F3AFAA5ADEEB8B9C622D79A917A(L_35, L_36, NULL);
		// SetInitialStatus();
		AssetBundleDownloader_SetInitialStatus_mE3EC60EE93A3638BE0B9ADC165A655659D79E4A8(__this, NULL);
		// if (ShowSize)
		bool L_37 = __this->___ShowSize_12;
		V_0 = L_37;
		bool L_38 = V_0;
		if (!L_38)
		{
			goto IL_0175;
		}
	}
	{
		// DisplayDownloadSize();
		AssetBundleDownloader_DisplayDownloadSize_m52D04C0EE79F4435D2972913502BC3D1CBE14800(__this, NULL);
		goto IL_017f;
	}

IL_0175:
	{
		// IsInitialized = true;
		AssetBundleDownloader_set_IsInitialized_mB76D543B064A812BC83C54342CAFAC44E71F3FD2_inline(__this, (bool)1, NULL);
	}

IL_017f:
	{
		// }
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader::ButtonEventRetrieveAssetBundle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetBundleDownloader_ButtonEventRetrieveAssetBundle_m67B8B9E6AD8C291618B736EC5DF2663DBFA67662 (AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* __this, const RuntimeMethod* method) 
{
	{
		// Display.HideButtons();
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_0 = __this->___Display_5;
		NullCheck(L_0);
		DownloadDisplay_HideButtons_mB4EBCA024901A383C81E610F4A467E2474FD9194(L_0, NULL);
		// StartCoroutine(DownloadAssetBundleCo());
		RuntimeObject* L_1;
		L_1 = AssetBundleDownloader_DownloadAssetBundleCo_m80B4E81D2775D34A5B78E105C5E9C056BD240C9D(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader::ButtonEventLoadSceneFromAssetBundle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetBundleDownloader_ButtonEventLoadSceneFromAssetBundle_mD66CCE680C9A446459435824840B9560E3E9B188 (AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// var sceneToLoad = _assetBundle.GetAllScenePaths()[0];
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_0 = __this->____assetBundle_13;
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1;
		L_1 = AssetBundle_GetAllScenePaths_m75D1CD4415067D64A8265A7929B6FF76B91B62FE(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2 = 0;
		String_t* L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		// SceneManager.LoadScene(sceneToLoad);
		String_t* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_4, NULL);
		// }
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader::ButtonEventCancelDownload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetBundleDownloader_ButtonEventCancelDownload_mE8A388D327297B023A1340C68145E1877F8B69E7 (AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (_request == null)
		PlayAssetBundleRequest_tF91045E772B64A769998917B0141A4C7EEF03A14* L_0 = __this->____request_14;
		V_0 = (bool)((((RuntimeObject*)(PlayAssetBundleRequest_tF91045E772B64A769998917B0141A4C7EEF03A14*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// return;
		goto IL_001d;
	}

IL_0011:
	{
		// _request.AttemptCancel();
		PlayAssetBundleRequest_tF91045E772B64A769998917B0141A4C7EEF03A14* L_2 = __this->____request_14;
		NullCheck(L_2);
		VirtualActionInvoker0::Invoke(17 /* System.Void Google.Play.AssetDelivery.PlayAssetBundleRequest::AttemptCancel() */, L_2);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader::ButtonEventRemoveAssetBundle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetBundleDownloader_ButtonEventRemoveAssetBundle_m73799EF74770B01FD6B39EA3636346916BFB5D81 (AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t312EDE2B729344A135C171CDCF374E4ACE2E56F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetBundleDownloader_U3CButtonEventRemoveAssetBundleU3Eb__19_0_m2C941826F6E8BE0799632055BD4DFF92E1215458_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayAsyncOperation_2_tFA007165B6896547555D503DE0381BDC8A9D9D8C* V_0 = NULL;
	{
		// var removeOperation = PlayAssetDelivery.RemoveAssetPack(AssetBundleName);
		String_t* L_0 = __this->___AssetBundleName_4;
		PlayAsyncOperation_2_tFA007165B6896547555D503DE0381BDC8A9D9D8C* L_1;
		L_1 = PlayAssetDelivery_RemoveAssetPack_m6EA0BA3267B0682B9A7098A2B0A26F755945DA85(L_0, NULL);
		V_0 = L_1;
		// removeOperation.Completed += (operation) =>
		// {
		//     if (operation.Error != AssetDeliveryErrorCode.NoError)
		//     {
		//         Debug.LogErrorFormat("Error removing AssetBundle {0}: {1}", AssetBundleName, operation.Error);
		//         return;
		//     }
		// 
		//     SetInitialStatus();
		//     UnloadAssetBundle();
		// };
		PlayAsyncOperation_2_tFA007165B6896547555D503DE0381BDC8A9D9D8C* L_2 = V_0;
		Action_1_t312EDE2B729344A135C171CDCF374E4ACE2E56F7* L_3 = (Action_1_t312EDE2B729344A135C171CDCF374E4ACE2E56F7*)il2cpp_codegen_object_new(Action_1_t312EDE2B729344A135C171CDCF374E4ACE2E56F7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_m3E3698E4C19A12E48FEBDBBA67E1400FF9C7D5E6(L_3, __this, (intptr_t)((void*)AssetBundleDownloader_U3CButtonEventRemoveAssetBundleU3Eb__19_0_m2C941826F6E8BE0799632055BD4DFF92E1215458_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< Action_1_t312EDE2B729344A135C171CDCF374E4ACE2E56F7* >::Invoke(10 /* System.Void Google.Play.Common.PlayAsyncOperation`2<Google.Play.Common.VoidResult,Google.Play.AssetDelivery.AssetDeliveryErrorCode>::add_Completed(System.Action`1<Google.Play.Common.PlayAsyncOperation`2<TResult,TError>>) */, L_2, L_3);
		// }
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader::ButtonEventShowConfirmationDialog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetBundleDownloader_ButtonEventShowConfirmationDialog_m8D4C34876E86A5B31D8ABC143CD62E816B748A97 (AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* __this, const RuntimeMethod* method) 
{
	{
		// PlayAssetDelivery.ShowConfirmationDialog();
		PlayAsyncOperation_2_tC6A6D4EDC2216A5FC7BA21B23397DDA69F3FB7E1* L_0;
		L_0 = PlayAssetDelivery_ShowConfirmationDialog_mF897B045EE008A58CA4C67A3553B73B5ACBD3AD6(NULL);
		// }
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetBundleDownloader_Update_m8F7CD303442A82C883A4CACD4396893CD295BAC6 (AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_TrueForAll_m5C8F7A94FA810D3456B468A6E7BE286192178BCA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m884AF419DE2920D112B731DA187F8334672A9314_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t25409EB2666F3EF51B6776AA69A502741AE586CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CUpdateU3Eb__21_0_m13CB3E08E1DD84252CE935CD5AD88D103412999E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t913E8F36F28A99221F3E23352101263D2E2334E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Predicate_1_t25409EB2666F3EF51B6776AA69A502741AE586CE* G_B3_0 = NULL;
	List_1_t1880AE72E54A88645F952BE6A8778419B65E1D94* G_B3_1 = NULL;
	Predicate_1_t25409EB2666F3EF51B6776AA69A502741AE586CE* G_B2_0 = NULL;
	List_1_t1880AE72E54A88645F952BE6A8778419B65E1D94* G_B2_1 = NULL;
	int32_t G_B5_0 = 0;
	{
		// var dependenciesLoaded = Dependencies.Count == 0 || Dependencies.TrueForAll(dep => dep.IsLoaded());
		List_1_t1880AE72E54A88645F952BE6A8778419B65E1D94* L_0 = __this->___Dependencies_11;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m884AF419DE2920D112B731DA187F8334672A9314_inline(L_0, List_1_get_Count_m884AF419DE2920D112B731DA187F8334672A9314_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		List_1_t1880AE72E54A88645F952BE6A8778419B65E1D94* L_2 = __this->___Dependencies_11;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t913E8F36F28A99221F3E23352101263D2E2334E3_il2cpp_TypeInfo_var);
		Predicate_1_t25409EB2666F3EF51B6776AA69A502741AE586CE* L_3 = ((U3CU3Ec_t913E8F36F28A99221F3E23352101263D2E2334E3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t913E8F36F28A99221F3E23352101263D2E2334E3_il2cpp_TypeInfo_var))->___U3CU3E9__21_0_1;
		Predicate_1_t25409EB2666F3EF51B6776AA69A502741AE586CE* L_4 = L_3;
		G_B2_0 = L_4;
		G_B2_1 = L_2;
		if (L_4)
		{
			G_B3_0 = L_4;
			G_B3_1 = L_2;
			goto IL_0033;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t913E8F36F28A99221F3E23352101263D2E2334E3_il2cpp_TypeInfo_var);
		U3CU3Ec_t913E8F36F28A99221F3E23352101263D2E2334E3* L_5 = ((U3CU3Ec_t913E8F36F28A99221F3E23352101263D2E2334E3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t913E8F36F28A99221F3E23352101263D2E2334E3_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Predicate_1_t25409EB2666F3EF51B6776AA69A502741AE586CE* L_6 = (Predicate_1_t25409EB2666F3EF51B6776AA69A502741AE586CE*)il2cpp_codegen_object_new(Predicate_1_t25409EB2666F3EF51B6776AA69A502741AE586CE_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Predicate_1__ctor_mEB93D2B8F9A1BDE43B175ACAA1C59548DF963719(L_6, L_5, (intptr_t)((void*)U3CU3Ec_U3CUpdateU3Eb__21_0_m13CB3E08E1DD84252CE935CD5AD88D103412999E_RuntimeMethod_var), NULL);
		Predicate_1_t25409EB2666F3EF51B6776AA69A502741AE586CE* L_7 = L_6;
		((U3CU3Ec_t913E8F36F28A99221F3E23352101263D2E2334E3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t913E8F36F28A99221F3E23352101263D2E2334E3_il2cpp_TypeInfo_var))->___U3CU3E9__21_0_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t913E8F36F28A99221F3E23352101263D2E2334E3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t913E8F36F28A99221F3E23352101263D2E2334E3_il2cpp_TypeInfo_var))->___U3CU3E9__21_0_1), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_0033:
	{
		NullCheck(G_B3_1);
		bool L_8;
		L_8 = List_1_TrueForAll_m5C8F7A94FA810D3456B468A6E7BE286192178BCA(G_B3_1, G_B3_0, List_1_TrueForAll_m5C8F7A94FA810D3456B468A6E7BE286192178BCA_RuntimeMethod_var);
		G_B5_0 = ((int32_t)(L_8));
		goto IL_003b;
	}

IL_003a:
	{
		G_B5_0 = 1;
	}

IL_003b:
	{
		V_0 = (bool)G_B5_0;
		// LoadSceneButton.interactable = IsLoaded() && dependenciesLoaded;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_9 = __this->___LoadSceneButton_7;
		bool L_10;
		L_10 = AssetBundleDownloader_IsLoaded_m791859678194EEAD075F820FA5B58CAEB45283AC(__this, NULL);
		bool L_11 = V_0;
		NullCheck(L_9);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_9, (bool)((int32_t)((int32_t)L_10&(int32_t)L_11)), NULL);
		// Display.SetScrolling(_request == null);
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_12 = __this->___Display_5;
		PlayAssetBundleRequest_tF91045E772B64A769998917B0141A4C7EEF03A14* L_13 = __this->____request_14;
		NullCheck(L_12);
		DownloadDisplay_SetScrolling_mA0D8E34FEA91F024A1E28E96786F9FA44EA9A243(L_12, (bool)((((RuntimeObject*)(PlayAssetBundleRequest_tF91045E772B64A769998917B0141A4C7EEF03A14*)L_13) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0), NULL);
		// }
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader::SetInitialStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetBundleDownloader_SetInitialStatus_mE3EC60EE93A3638BE0B9ADC165A655659D79E4A8 (AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Display.ShowButtons(RetrieveAssetBundleButton);
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_0 = __this->___Display_5;
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_1 = (ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF*)(ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF*)SZArrayNew(ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF_il2cpp_TypeInfo_var, (uint32_t)1);
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_2 = L_1;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->___RetrieveAssetBundleButton_6;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098*)L_3);
		NullCheck(L_0);
		DownloadDisplay_ShowButtons_m9AB68AEB7ABC1DF6A1FC7CA8A8021063C5F730BC(L_0, L_2, NULL);
		// Display.SetInitialStatus(PlayAssetDelivery.IsDownloaded(AssetBundleName));
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_4 = __this->___Display_5;
		String_t* L_5 = __this->___AssetBundleName_4;
		bool L_6;
		L_6 = PlayAssetDelivery_IsDownloaded_m6F16EFC41F159FB201A1EAB1ED102001DAD36B3E(L_5, NULL);
		NullCheck(L_4);
		DownloadDisplay_SetInitialStatus_m36D2A91666EEA0E58E63C048622570AB6BAF4301(L_4, L_6, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader::DownloadAssetBundleCo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AssetBundleDownloader_DownloadAssetBundleCo_m80B4E81D2775D34A5B78E105C5E9C056BD240C9D (AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDownloadAssetBundleCoU3Ed__23_t1F03B5409B4DFC72DD1CAF38CD766CEC15CDD440_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDownloadAssetBundleCoU3Ed__23_t1F03B5409B4DFC72DD1CAF38CD766CEC15CDD440* L_0 = (U3CDownloadAssetBundleCoU3Ed__23_t1F03B5409B4DFC72DD1CAF38CD766CEC15CDD440*)il2cpp_codegen_object_new(U3CDownloadAssetBundleCoU3Ed__23_t1F03B5409B4DFC72DD1CAF38CD766CEC15CDD440_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CDownloadAssetBundleCoU3Ed__23__ctor_m490723D152255D4AB79E02B839F327342DEAE68A(L_0, 0, NULL);
		U3CDownloadAssetBundleCoU3Ed__23_t1F03B5409B4DFC72DD1CAF38CD766CEC15CDD440* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader::DisplayDownloadSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetBundleDownloader_DisplayDownloadSize_m52D04C0EE79F4435D2972913502BC3D1CBE14800 (AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tAF2F0C6D9832C4CE7D39F5AC5F2AB9C889710BF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetBundleDownloader_U3CDisplayDownloadSizeU3Eb__24_0_m9A1DF22D401ECAA822D9AC7DDC4F38973EFD192A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayAsyncOperation_2_t8FC9C3969AFBE80A0CA5842EDA86B6F5771BE731* V_0 = NULL;
	{
		// var getSizeOperation = PlayAssetDelivery.GetDownloadSize(AssetBundleName);
		String_t* L_0 = __this->___AssetBundleName_4;
		PlayAsyncOperation_2_t8FC9C3969AFBE80A0CA5842EDA86B6F5771BE731* L_1;
		L_1 = PlayAssetDelivery_GetDownloadSize_mFE7382DA23C4EBEE7ADD44E3E5516435A4F413F2(L_0, NULL);
		V_0 = L_1;
		// getSizeOperation.Completed += (operation) =>
		// {
		//     if (operation.Error != AssetDeliveryErrorCode.NoError)
		//     {
		//         Debug.LogErrorFormat("Error getting download size for {0}: {1}",
		//             AssetBundleName, operation.Error);
		//         return;
		//     }
		// 
		//     IsInitialized = true;
		//     string nameWithSize =
		//         string.Format("{0} : {1}", AssetBundleName, Display.FormatSize(operation.GetResult()));
		//     Display.SetNameText(nameWithSize);
		// };
		PlayAsyncOperation_2_t8FC9C3969AFBE80A0CA5842EDA86B6F5771BE731* L_2 = V_0;
		Action_1_tAF2F0C6D9832C4CE7D39F5AC5F2AB9C889710BF5* L_3 = (Action_1_tAF2F0C6D9832C4CE7D39F5AC5F2AB9C889710BF5*)il2cpp_codegen_object_new(Action_1_tAF2F0C6D9832C4CE7D39F5AC5F2AB9C889710BF5_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_mFDBC4E02DA3CDFD8626503796E51A817A737E0BF(L_3, __this, (intptr_t)((void*)AssetBundleDownloader_U3CDisplayDownloadSizeU3Eb__24_0_m9A1DF22D401ECAA822D9AC7DDC4F38973EFD192A_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< Action_1_tAF2F0C6D9832C4CE7D39F5AC5F2AB9C889710BF5* >::Invoke(10 /* System.Void Google.Play.Common.PlayAsyncOperation`2<System.Int64,Google.Play.AssetDelivery.AssetDeliveryErrorCode>::add_Completed(System.Action`1<Google.Play.Common.PlayAsyncOperation`2<TResult,TError>>) */, L_2, L_3);
		// }
		return;
	}
}
// System.Boolean Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader::IsLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AssetBundleDownloader_IsLoaded_m791859678194EEAD075F820FA5B58CAEB45283AC (AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return _assetBundle != null;
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_0 = __this->____assetBundle_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader::UnloadAssetBundle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetBundleDownloader_UnloadAssetBundle_mA4DC4EDB71EF4A846CBA3567D9A9E62F77B2075D (AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (_assetBundle != null)
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_0 = __this->____assetBundle_13;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// _assetBundle.Unload(false);
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_3 = __this->____assetBundle_13;
		NullCheck(L_3);
		AssetBundle_Unload_m0A189871E61A0D6735A2B41B3360A1F0677B636B(L_3, (bool)0, NULL);
		// _assetBundle = null;
		__this->____assetBundle_13 = (AssetBundle_tB38418819A49060CD738CB21541649340F082943*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____assetBundle_13), (void*)(AssetBundle_tB38418819A49060CD738CB21541649340F082943*)NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetBundleDownloader_OnDestroy_m796DDF638EC57864738775F0513969B5C4E5634F (AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* __this, const RuntimeMethod* method) 
{
	{
		// UnloadAssetBundle();
		AssetBundleDownloader_UnloadAssetBundle_mA4DC4EDB71EF4A846CBA3567D9A9E62F77B2075D(__this, NULL);
		// }
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetBundleDownloader__ctor_mF738A7CF60CE1ABB3FE67F0E2D00C2BAE2CF1118 (AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader::<ButtonEventRemoveAssetBundle>b__19_0(Google.Play.Common.PlayAsyncOperation`2<Google.Play.Common.VoidResult,Google.Play.AssetDelivery.AssetDeliveryErrorCode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetBundleDownloader_U3CButtonEventRemoveAssetBundleU3Eb__19_0_m2C941826F6E8BE0799632055BD4DFF92E1215458 (AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* __this, PlayAsyncOperation_2_tFA007165B6896547555D503DE0381BDC8A9D9D8C* ___operation0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetDeliveryErrorCode_tBDD13D9D0AAB694759166DB6CFEA5786CE363ACA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayAsyncOperation_2_get_Error_mF492B1BADBE8A093FA78AC10418058819825C163_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB890D7A9694301632821DAC160E587810DC0901);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (operation.Error != AssetDeliveryErrorCode.NoError)
		PlayAsyncOperation_2_tFA007165B6896547555D503DE0381BDC8A9D9D8C* L_0 = ___operation0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = PlayAsyncOperation_2_get_Error_mF492B1BADBE8A093FA78AC10418058819825C163_inline(L_0, PlayAsyncOperation_2_get_Error_mF492B1BADBE8A093FA78AC10418058819825C163_RuntimeMethod_var);
		V_0 = (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		// Debug.LogErrorFormat("Error removing AssetBundle {0}: {1}", AssetBundleName, operation.Error);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		String_t* L_5 = __this->___AssetBundleName_4;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		PlayAsyncOperation_2_tFA007165B6896547555D503DE0381BDC8A9D9D8C* L_7 = ___operation0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = PlayAsyncOperation_2_get_Error_mF492B1BADBE8A093FA78AC10418058819825C163_inline(L_7, PlayAsyncOperation_2_get_Error_mF492B1BADBE8A093FA78AC10418058819825C163_RuntimeMethod_var);
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(AssetDeliveryErrorCode_tBDD13D9D0AAB694759166DB6CFEA5786CE363ACA_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_10);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C(_stringLiteralFB890D7A9694301632821DAC160E587810DC0901, L_6, NULL);
		// return;
		goto IL_0047;
	}

IL_0039:
	{
		// SetInitialStatus();
		AssetBundleDownloader_SetInitialStatus_mE3EC60EE93A3638BE0B9ADC165A655659D79E4A8(__this, NULL);
		// UnloadAssetBundle();
		AssetBundleDownloader_UnloadAssetBundle_mA4DC4EDB71EF4A846CBA3567D9A9E62F77B2075D(__this, NULL);
	}

IL_0047:
	{
		// };
		return;
	}
}
// System.Boolean Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader::<DownloadAssetBundleCo>b__23_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AssetBundleDownloader_U3CDownloadAssetBundleCoU3Eb__23_0_m1C926A5C8AF4DDDEE08FC89C5CD23E6F5A22338E (AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* __this, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		// yield return new WaitUntil(() => _request.Status != AssetDeliveryStatus.WaitingForWifi && _request.Status != AssetDeliveryStatus.RequiresUserConfirmation);
		PlayAssetBundleRequest_tF91045E772B64A769998917B0141A4C7EEF03A14* L_0 = __this->____request_14;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(13 /* Google.Play.AssetDelivery.AssetDeliveryStatus Google.Play.AssetDelivery.PlayAssetBundleRequest::get_Status() */, L_0);
		if ((((int32_t)L_1) == ((int32_t)6)))
		{
			goto IL_0021;
		}
	}
	{
		PlayAssetBundleRequest_tF91045E772B64A769998917B0141A4C7EEF03A14* L_2 = __this->____request_14;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(13 /* Google.Play.AssetDelivery.AssetDeliveryStatus Google.Play.AssetDelivery.PlayAssetBundleRequest::get_Status() */, L_2);
		G_B3_0 = ((((int32_t)((((int32_t)L_3) == ((int32_t)7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return (bool)G_B3_0;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader::<DisplayDownloadSize>b__24_0(Google.Play.Common.PlayAsyncOperation`2<System.Int64,Google.Play.AssetDelivery.AssetDeliveryErrorCode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetBundleDownloader_U3CDisplayDownloadSizeU3Eb__24_0_m9A1DF22D401ECAA822D9AC7DDC4F38973EFD192A (AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* __this, PlayAsyncOperation_2_t8FC9C3969AFBE80A0CA5842EDA86B6F5771BE731* ___operation0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetDeliveryErrorCode_tBDD13D9D0AAB694759166DB6CFEA5786CE363ACA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayAsyncOperation_2_GetResult_mDF46357E89072C9BB4166B0F7C6B3403C45EE28F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayAsyncOperation_2_get_Error_m9DCD4460CB536E71272456C8384989EF42479663_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04A5510C8B0FE20C508364BA9BADF7373782F864);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D4C24A1ACA0CB6E213D41CDD46C0BC7420D226D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	{
		// if (operation.Error != AssetDeliveryErrorCode.NoError)
		PlayAsyncOperation_2_t8FC9C3969AFBE80A0CA5842EDA86B6F5771BE731* L_0 = ___operation0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = PlayAsyncOperation_2_get_Error_m9DCD4460CB536E71272456C8384989EF42479663_inline(L_0, PlayAsyncOperation_2_get_Error_m9DCD4460CB536E71272456C8384989EF42479663_RuntimeMethod_var);
		V_1 = (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		// Debug.LogErrorFormat("Error getting download size for {0}: {1}",
		//     AssetBundleName, operation.Error);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		String_t* L_5 = __this->___AssetBundleName_4;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		PlayAsyncOperation_2_t8FC9C3969AFBE80A0CA5842EDA86B6F5771BE731* L_7 = ___operation0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = PlayAsyncOperation_2_get_Error_m9DCD4460CB536E71272456C8384989EF42479663_inline(L_7, PlayAsyncOperation_2_get_Error_m9DCD4460CB536E71272456C8384989EF42479663_RuntimeMethod_var);
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(AssetDeliveryErrorCode_tBDD13D9D0AAB694759166DB6CFEA5786CE363ACA_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_10);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C(_stringLiteral04A5510C8B0FE20C508364BA9BADF7373782F864, L_6, NULL);
		// return;
		goto IL_0070;
	}

IL_0039:
	{
		// IsInitialized = true;
		AssetBundleDownloader_set_IsInitialized_mB76D543B064A812BC83C54342CAFAC44E71F3FD2_inline(__this, (bool)1, NULL);
		// string nameWithSize =
		//     string.Format("{0} : {1}", AssetBundleName, Display.FormatSize(operation.GetResult()));
		String_t* L_11 = __this->___AssetBundleName_4;
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_12 = __this->___Display_5;
		PlayAsyncOperation_2_t8FC9C3969AFBE80A0CA5842EDA86B6F5771BE731* L_13 = ___operation0;
		NullCheck(L_13);
		int64_t L_14;
		L_14 = PlayAsyncOperation_2_GetResult_mDF46357E89072C9BB4166B0F7C6B3403C45EE28F(L_13, PlayAsyncOperation_2_GetResult_mDF46357E89072C9BB4166B0F7C6B3403C45EE28F_RuntimeMethod_var);
		NullCheck(L_12);
		String_t* L_15;
		L_15 = DownloadDisplay_FormatSize_mC9218983D5E766F0C6E66821D605DAD13AA0B0C4(L_12, L_14, NULL);
		String_t* L_16;
		L_16 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2D4C24A1ACA0CB6E213D41CDD46C0BC7420D226D, L_11, L_15, NULL);
		V_0 = L_16;
		// Display.SetNameText(nameWithSize);
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_17 = __this->___Display_5;
		String_t* L_18 = V_0;
		NullCheck(L_17);
		DownloadDisplay_SetNameText_m92B5C46851DD3F3AFAA5ADEEB8B9C622D79A917A(L_17, L_18, NULL);
	}

IL_0070:
	{
		// };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m3C35B351CD0778E5A89161F6F9D76C5983610700 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t913E8F36F28A99221F3E23352101263D2E2334E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t913E8F36F28A99221F3E23352101263D2E2334E3* L_0 = (U3CU3Ec_t913E8F36F28A99221F3E23352101263D2E2334E3*)il2cpp_codegen_object_new(U3CU3Ec_t913E8F36F28A99221F3E23352101263D2E2334E3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mFD5B040D9C67999E218CA02E038238B46A7EA8CD(L_0, NULL);
		((U3CU3Ec_t913E8F36F28A99221F3E23352101263D2E2334E3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t913E8F36F28A99221F3E23352101263D2E2334E3_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t913E8F36F28A99221F3E23352101263D2E2334E3_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t913E8F36F28A99221F3E23352101263D2E2334E3_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFD5B040D9C67999E218CA02E038238B46A7EA8CD (U3CU3Ec_t913E8F36F28A99221F3E23352101263D2E2334E3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader/<>c::<Update>b__21_0(Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CUpdateU3Eb__21_0_m13CB3E08E1DD84252CE935CD5AD88D103412999E (U3CU3Ec_t913E8F36F28A99221F3E23352101263D2E2334E3* __this, AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* ___dep0, const RuntimeMethod* method) 
{
	{
		// var dependenciesLoaded = Dependencies.Count == 0 || Dependencies.TrueForAll(dep => dep.IsLoaded());
		AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* L_0 = ___dep0;
		NullCheck(L_0);
		bool L_1;
		L_1 = AssetBundleDownloader_IsLoaded_m791859678194EEAD075F820FA5B58CAEB45283AC(L_0, NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader/<DownloadAssetBundleCo>d__23::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownloadAssetBundleCoU3Ed__23__ctor_m490723D152255D4AB79E02B839F327342DEAE68A (U3CDownloadAssetBundleCoU3Ed__23_t1F03B5409B4DFC72DD1CAF38CD766CEC15CDD440* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader/<DownloadAssetBundleCo>d__23::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownloadAssetBundleCoU3Ed__23_System_IDisposable_Dispose_m6F76626AF55426EE474FBD7865246A1F3F1ACA0F (U3CDownloadAssetBundleCoU3Ed__23_t1F03B5409B4DFC72DD1CAF38CD766CEC15CDD440* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader/<DownloadAssetBundleCo>d__23::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDownloadAssetBundleCoU3Ed__23_MoveNext_m5E2B25258531F2218ED0E7B62AC228CAFF1B9E00 (U3CDownloadAssetBundleCoU3Ed__23_t1F03B5409B4DFC72DD1CAF38CD766CEC15CDD440* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetBundleDownloader_U3CDownloadAssetBundleCoU3Eb__23_0_m1C926A5C8AF4DDDEE08FC89C5CD23E6F5A22338E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetDeliveryErrorCode_tBDD13D9D0AAB694759166DB6CFEA5786CE363ACA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayAsyncOperation_2_GetResult_m58C0DE3F1CB38C9DDA3C4A664473CA59FD99A5C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayAsyncOperation_2_get_Error_m106B9FC9CAD7E71A9975352E4A989F5A04579881_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8169AA05F95389FA6BF8911ADAD78870FC4D7107);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B11_0 = 0;
	int32_t G_B16_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001f;
			}
			case 1:
			{
				goto IL_0021;
			}
			case 2:
			{
				goto IL_0026;
			}
			case 3:
			{
				goto IL_002b;
			}
		}
	}
	{
		goto IL_0030;
	}

IL_001f:
	{
		goto IL_0032;
	}

IL_0021:
	{
		goto IL_00ac;
	}

IL_0026:
	{
		goto IL_0130;
	}

IL_002b:
	{
		goto IL_01a1;
	}

IL_0030:
	{
		return (bool)0;
	}

IL_0032:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// _request = PlayAssetDelivery.RetrieveAssetBundleAsync(AssetBundleName);
		AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* L_2 = __this->___U3CU3E4__this_2;
		AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* L_3 = __this->___U3CU3E4__this_2;
		NullCheck(L_3);
		String_t* L_4 = L_3->___AssetBundleName_4;
		PlayAssetBundleRequest_tF91045E772B64A769998917B0141A4C7EEF03A14* L_5;
		L_5 = PlayAssetDelivery_RetrieveAssetBundleAsync_m09BD8950FA5F26CEAFD3F583CEB0E168F8793B37(L_4, NULL);
		NullCheck(L_2);
		L_2->____request_14 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->____request_14), (void*)L_5);
		goto IL_01a9;
	}

IL_005a:
	{
		// if (_request.Status == AssetDeliveryStatus.WaitingForWifi || _request.Status == AssetDeliveryStatus.RequiresUserConfirmation)
		AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* L_6 = __this->___U3CU3E4__this_2;
		NullCheck(L_6);
		PlayAssetBundleRequest_tF91045E772B64A769998917B0141A4C7EEF03A14* L_7 = L_6->____request_14;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtualFuncInvoker0< int32_t >::Invoke(13 /* Google.Play.AssetDelivery.AssetDeliveryStatus Google.Play.AssetDelivery.PlayAssetBundleRequest::get_Status() */, L_7);
		if ((((int32_t)L_8) == ((int32_t)6)))
		{
			goto IL_0083;
		}
	}
	{
		AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* L_9 = __this->___U3CU3E4__this_2;
		NullCheck(L_9);
		PlayAssetBundleRequest_tF91045E772B64A769998917B0141A4C7EEF03A14* L_10 = L_9->____request_14;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = VirtualFuncInvoker0< int32_t >::Invoke(13 /* Google.Play.AssetDelivery.AssetDeliveryStatus Google.Play.AssetDelivery.PlayAssetBundleRequest::get_Status() */, L_10);
		G_B11_0 = ((((int32_t)L_11) == ((int32_t)7))? 1 : 0);
		goto IL_0084;
	}

IL_0083:
	{
		G_B11_0 = 1;
	}

IL_0084:
	{
		V_1 = (bool)G_B11_0;
		bool L_12 = V_1;
		if (!L_12)
		{
			goto IL_013f;
		}
	}
	{
		// var asyncOperation = PlayAssetDelivery.ShowConfirmationDialog();
		PlayAsyncOperation_2_tC6A6D4EDC2216A5FC7BA21B23397DDA69F3FB7E1* L_13;
		L_13 = PlayAssetDelivery_ShowConfirmationDialog_mF897B045EE008A58CA4C67A3553B73B5ACBD3AD6(NULL);
		__this->___U3CasyncOperationU3E5__1_3 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CasyncOperationU3E5__1_3), (void*)L_13);
		// yield return asyncOperation; // Wait until user has confirmed or cancelled the dialog.
		PlayAsyncOperation_2_tC6A6D4EDC2216A5FC7BA21B23397DDA69F3FB7E1* L_14 = __this->___U3CasyncOperationU3E5__1_3;
		__this->___U3CU3E2__current_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_14);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00ac:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (asyncOperation.Error != AssetDeliveryErrorCode.NoError
		//     || asyncOperation.GetResult() != ConfirmationDialogResult.Accepted)
		PlayAsyncOperation_2_tC6A6D4EDC2216A5FC7BA21B23397DDA69F3FB7E1* L_15 = __this->___U3CasyncOperationU3E5__1_3;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = PlayAsyncOperation_2_get_Error_m106B9FC9CAD7E71A9975352E4A989F5A04579881_inline(L_15, PlayAsyncOperation_2_get_Error_m106B9FC9CAD7E71A9975352E4A989F5A04579881_RuntimeMethod_var);
		if (L_16)
		{
			goto IL_00d3;
		}
	}
	{
		PlayAsyncOperation_2_tC6A6D4EDC2216A5FC7BA21B23397DDA69F3FB7E1* L_17 = __this->___U3CasyncOperationU3E5__1_3;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = PlayAsyncOperation_2_GetResult_m58C0DE3F1CB38C9DDA3C4A664473CA59FD99A5C3(L_17, PlayAsyncOperation_2_GetResult_m58C0DE3F1CB38C9DDA3C4A664473CA59FD99A5C3_RuntimeMethod_var);
		G_B16_0 = ((((int32_t)((((int32_t)L_18) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00d4;
	}

IL_00d3:
	{
		G_B16_0 = 1;
	}

IL_00d4:
	{
		V_2 = (bool)G_B16_0;
		bool L_19 = V_2;
		if (!L_19)
		{
			goto IL_010b;
		}
	}
	{
		// Display.SetStatus(_request.Status, _request.Error);
		AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* L_20 = __this->___U3CU3E4__this_2;
		NullCheck(L_20);
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_21 = L_20->___Display_5;
		AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* L_22 = __this->___U3CU3E4__this_2;
		NullCheck(L_22);
		PlayAssetBundleRequest_tF91045E772B64A769998917B0141A4C7EEF03A14* L_23 = L_22->____request_14;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = VirtualFuncInvoker0< int32_t >::Invoke(13 /* Google.Play.AssetDelivery.AssetDeliveryStatus Google.Play.AssetDelivery.PlayAssetBundleRequest::get_Status() */, L_23);
		AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* L_25 = __this->___U3CU3E4__this_2;
		NullCheck(L_25);
		PlayAssetBundleRequest_tF91045E772B64A769998917B0141A4C7EEF03A14* L_26 = L_25->____request_14;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = VirtualFuncInvoker0< int32_t >::Invoke(11 /* Google.Play.AssetDelivery.AssetDeliveryErrorCode Google.Play.AssetDelivery.PlayAssetBundleRequest::get_Error() */, L_26);
		NullCheck(L_21);
		DownloadDisplay_SetStatus_m81D1DAB50049DA5C61FC806164BB9588FDCA8B4C(L_21, L_24, L_27, NULL);
	}

IL_010b:
	{
		// yield return new WaitUntil(() => _request.Status != AssetDeliveryStatus.WaitingForWifi && _request.Status != AssetDeliveryStatus.RequiresUserConfirmation);
		AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* L_28 = __this->___U3CU3E4__this_2;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_29 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_29, L_28, (intptr_t)((void*)AssetBundleDownloader_U3CDownloadAssetBundleCoU3Eb__23_0_m1C926A5C8AF4DDDEE08FC89C5CD23E6F5A22338E_RuntimeMethod_var), NULL);
		WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* L_30 = (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD*)il2cpp_codegen_object_new(WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF(L_30, L_29, NULL);
		__this->___U3CU3E2__current_1 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_30);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0130:
	{
		__this->___U3CU3E1__state_0 = (-1);
		__this->___U3CasyncOperationU3E5__1_3 = (PlayAsyncOperation_2_tC6A6D4EDC2216A5FC7BA21B23397DDA69F3FB7E1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CasyncOperationU3E5__1_3), (void*)(PlayAsyncOperation_2_tC6A6D4EDC2216A5FC7BA21B23397DDA69F3FB7E1*)NULL);
	}

IL_013f:
	{
		// Display.SetProgress(_request.DownloadProgress);
		AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* L_31 = __this->___U3CU3E4__this_2;
		NullCheck(L_31);
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_32 = L_31->___Display_5;
		AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* L_33 = __this->___U3CU3E4__this_2;
		NullCheck(L_33);
		PlayAssetBundleRequest_tF91045E772B64A769998917B0141A4C7EEF03A14* L_34 = L_33->____request_14;
		NullCheck(L_34);
		float L_35;
		L_35 = VirtualFuncInvoker0< float >::Invoke(9 /* System.Single Google.Play.AssetDelivery.PlayAssetBundleRequest::get_DownloadProgress() */, L_34);
		NullCheck(L_32);
		DownloadDisplay_SetProgress_mFA3B98D656B414E7BE347D41052E5F1D28A5B36A(L_32, L_35, NULL);
		// Display.SetStatus(_request.Status, _request.Error);
		AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* L_36 = __this->___U3CU3E4__this_2;
		NullCheck(L_36);
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_37 = L_36->___Display_5;
		AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* L_38 = __this->___U3CU3E4__this_2;
		NullCheck(L_38);
		PlayAssetBundleRequest_tF91045E772B64A769998917B0141A4C7EEF03A14* L_39 = L_38->____request_14;
		NullCheck(L_39);
		int32_t L_40;
		L_40 = VirtualFuncInvoker0< int32_t >::Invoke(13 /* Google.Play.AssetDelivery.AssetDeliveryStatus Google.Play.AssetDelivery.PlayAssetBundleRequest::get_Status() */, L_39);
		AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* L_41 = __this->___U3CU3E4__this_2;
		NullCheck(L_41);
		PlayAssetBundleRequest_tF91045E772B64A769998917B0141A4C7EEF03A14* L_42 = L_41->____request_14;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = VirtualFuncInvoker0< int32_t >::Invoke(11 /* Google.Play.AssetDelivery.AssetDeliveryErrorCode Google.Play.AssetDelivery.PlayAssetBundleRequest::get_Error() */, L_42);
		NullCheck(L_37);
		DownloadDisplay_SetStatus_m81D1DAB50049DA5C61FC806164BB9588FDCA8B4C(L_37, L_40, L_43, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_01a1:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_01a9:
	{
		// while (!_request.IsDone)
		AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* L_44 = __this->___U3CU3E4__this_2;
		NullCheck(L_44);
		PlayAssetBundleRequest_tF91045E772B64A769998917B0141A4C7EEF03A14* L_45 = L_44->____request_14;
		NullCheck(L_45);
		bool L_46;
		L_46 = PlayAssetBundleRequest_get_IsDone_mCE97AAD66758C70BBFFD23951ECE3958C45287F9_inline(L_45, NULL);
		V_3 = (bool)((((int32_t)L_46) == ((int32_t)0))? 1 : 0);
		bool L_47 = V_3;
		if (L_47)
		{
			goto IL_005a;
		}
	}
	{
		// Display.SetStatus(_request.Status, _request.Error);
		AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* L_48 = __this->___U3CU3E4__this_2;
		NullCheck(L_48);
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_49 = L_48->___Display_5;
		AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* L_50 = __this->___U3CU3E4__this_2;
		NullCheck(L_50);
		PlayAssetBundleRequest_tF91045E772B64A769998917B0141A4C7EEF03A14* L_51 = L_50->____request_14;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = VirtualFuncInvoker0< int32_t >::Invoke(13 /* Google.Play.AssetDelivery.AssetDeliveryStatus Google.Play.AssetDelivery.PlayAssetBundleRequest::get_Status() */, L_51);
		AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* L_53 = __this->___U3CU3E4__this_2;
		NullCheck(L_53);
		PlayAssetBundleRequest_tF91045E772B64A769998917B0141A4C7EEF03A14* L_54 = L_53->____request_14;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = VirtualFuncInvoker0< int32_t >::Invoke(11 /* Google.Play.AssetDelivery.AssetDeliveryErrorCode Google.Play.AssetDelivery.PlayAssetBundleRequest::get_Error() */, L_54);
		NullCheck(L_49);
		DownloadDisplay_SetStatus_m81D1DAB50049DA5C61FC806164BB9588FDCA8B4C(L_49, L_52, L_55, NULL);
		// if (_request.Error != AssetDeliveryErrorCode.NoError)
		AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* L_56 = __this->___U3CU3E4__this_2;
		NullCheck(L_56);
		PlayAssetBundleRequest_tF91045E772B64A769998917B0141A4C7EEF03A14* L_57 = L_56->____request_14;
		NullCheck(L_57);
		int32_t L_58;
		L_58 = VirtualFuncInvoker0< int32_t >::Invoke(11 /* Google.Play.AssetDelivery.AssetDeliveryErrorCode Google.Play.AssetDelivery.PlayAssetBundleRequest::get_Error() */, L_57);
		V_4 = (bool)((!(((uint32_t)L_58) <= ((uint32_t)0)))? 1 : 0);
		bool L_59 = V_4;
		if (!L_59)
		{
			goto IL_0245;
		}
	}
	{
		// Debug.LogErrorFormat("Couldn't load AssetBundles: {0}", _request.Error);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_60 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_61 = L_60;
		AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* L_62 = __this->___U3CU3E4__this_2;
		NullCheck(L_62);
		PlayAssetBundleRequest_tF91045E772B64A769998917B0141A4C7EEF03A14* L_63 = L_62->____request_14;
		NullCheck(L_63);
		int32_t L_64;
		L_64 = VirtualFuncInvoker0< int32_t >::Invoke(11 /* Google.Play.AssetDelivery.AssetDeliveryErrorCode Google.Play.AssetDelivery.PlayAssetBundleRequest::get_Error() */, L_63);
		int32_t L_65 = L_64;
		RuntimeObject* L_66 = Box(AssetDeliveryErrorCode_tBDD13D9D0AAB694759166DB6CFEA5786CE363ACA_il2cpp_TypeInfo_var, &L_65);
		NullCheck(L_61);
		ArrayElementTypeCheck (L_61, L_66);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_66);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C(_stringLiteral8169AA05F95389FA6BF8911ADAD78870FC4D7107, L_61, NULL);
		// _request = null;
		AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* L_67 = __this->___U3CU3E4__this_2;
		NullCheck(L_67);
		L_67->____request_14 = (PlayAssetBundleRequest_tF91045E772B64A769998917B0141A4C7EEF03A14*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_67->____request_14), (void*)(PlayAssetBundleRequest_tF91045E772B64A769998917B0141A4C7EEF03A14*)NULL);
		// yield break;
		return (bool)0;
	}

IL_0245:
	{
		// _assetBundle = _request.AssetBundle;
		AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* L_68 = __this->___U3CU3E4__this_2;
		AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* L_69 = __this->___U3CU3E4__this_2;
		NullCheck(L_69);
		PlayAssetBundleRequest_tF91045E772B64A769998917B0141A4C7EEF03A14* L_70 = L_69->____request_14;
		NullCheck(L_70);
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_71;
		L_71 = PlayAssetBundleRequest_get_AssetBundle_m0126C158B7D2388FAEF7801881B1F910AC03798C_inline(L_70, NULL);
		NullCheck(L_68);
		L_68->____assetBundle_13 = L_71;
		Il2CppCodeGenWriteBarrier((void**)(&L_68->____assetBundle_13), (void*)L_71);
		// _request = null;
		AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* L_72 = __this->___U3CU3E4__this_2;
		NullCheck(L_72);
		L_72->____request_14 = (PlayAssetBundleRequest_tF91045E772B64A769998917B0141A4C7EEF03A14*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_72->____request_14), (void*)(PlayAssetBundleRequest_tF91045E772B64A769998917B0141A4C7EEF03A14*)NULL);
		// }
		return (bool)0;
	}
}
// System.Object Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader/<DownloadAssetBundleCo>d__23::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDownloadAssetBundleCoU3Ed__23_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1733B435BF786176065A1D6AA500AC1582A33E39 (U3CDownloadAssetBundleCoU3Ed__23_t1F03B5409B4DFC72DD1CAF38CD766CEC15CDD440* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader/<DownloadAssetBundleCo>d__23::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownloadAssetBundleCoU3Ed__23_System_Collections_IEnumerator_Reset_m4E5F32291404327EEAF71C5D43290EF28F4A81AE (U3CDownloadAssetBundleCoU3Ed__23_t1F03B5409B4DFC72DD1CAF38CD766CEC15CDD440* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDownloadAssetBundleCoU3Ed__23_System_Collections_IEnumerator_Reset_m4E5F32291404327EEAF71C5D43290EF28F4A81AE_RuntimeMethod_var)));
	}
}
// System.Object Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader/<DownloadAssetBundleCo>d__23::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDownloadAssetBundleCoU3Ed__23_System_Collections_IEnumerator_get_Current_m8D2851BD0B628EDD49C268779B4B5F58DA7DD0AB (U3CDownloadAssetBundleCoU3Ed__23_t1F03B5409B4DFC72DD1CAF38CD766CEC15CDD440* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetPackBatchDownloader_Start_mE2DDFB60C731E4D216D9365BAC9A52F809447902 (AssetPackBatchDownloader_tE776DD9212256FBF18573752A1E130CEF64B595A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetPackBatchDownloader_ButtonEventRemovePacks_m9644CFE682EA141F3DF09EAA5DD43C4421B71BD1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetPackBatchDownloader_ButtonEventRetrieveAssetPackBatch_m08EA6905AEB5D450B54F1D995EC8EE6C9771874A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC48BEA5616F0EAE3D981F1A7093C0ADCF657D4D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mFD9EC57D48262EFB569B4DE5D425CBF584FF54A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9E531977700E2A8DEBA530001FDE293F2DFBC4F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m812062EA22C7025B853992D2B75144A91192C34C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_U3CStartU3Eb__0_mF17CF442219EE7524A6EF183961D13800DC0E5AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_t4CA7E6D8419DE7640D7B7372D1E5A67D0E0E2185_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t324E44CBED9D18AB38FB942CF42E7165DA8324B9 V_0;
	memset((&V_0), 0, sizeof(V_0));
	AssetWithinPack_t675DE17DF7B2A4390E90CF4BFBBD35B708F8A888* V_1 = NULL;
	U3CU3Ec__DisplayClass8_0_t4CA7E6D8419DE7640D7B7372D1E5A67D0E0E2185* V_2 = NULL;
	{
		// RetrieveAssetPackBatchButton.onClick.AddListener(ButtonEventRetrieveAssetPackBatch);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___RetrieveAssetPackBatchButton_5;
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_0, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_2, __this, (intptr_t)((void*)AssetPackBatchDownloader_ButtonEventRetrieveAssetPackBatch_m08EA6905AEB5D450B54F1D995EC8EE6C9771874A_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_1, L_2, NULL);
		// RemovePacksButton.onClick.AddListener(ButtonEventRemovePacks);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->___RemovePacksButton_6;
		NullCheck(L_3);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_4;
		L_4 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_3, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_5, __this, (intptr_t)((void*)AssetPackBatchDownloader_ButtonEventRemovePacks_m9644CFE682EA141F3DF09EAA5DD43C4421B71BD1_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_4, L_5, NULL);
		// Display.BindButton(RetrieveAssetPackBatchButton, AssetDeliveryStatus.Failed);
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_6 = __this->___Display_7;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_7 = __this->___RetrieveAssetPackBatchButton_5;
		NullCheck(L_6);
		DownloadDisplay_BindButton_m14577FE0BA953CD08832AFB68EF1519E2844D1C2(L_6, L_7, 5, NULL);
		// Display.BindButton(RemovePacksButton, AssetDeliveryStatus.Available);
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_8 = __this->___Display_7;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_9 = __this->___RemovePacksButton_6;
		NullCheck(L_8);
		DownloadDisplay_BindButton_m14577FE0BA953CD08832AFB68EF1519E2844D1C2(L_8, L_9, 2, NULL);
		// foreach (var assetData in Assets)
		List_1_tA59DCF9584AAD07D38DEBB531E8F52DE73D0A259* L_10 = __this->___Assets_4;
		NullCheck(L_10);
		Enumerator_t324E44CBED9D18AB38FB942CF42E7165DA8324B9 L_11;
		L_11 = List_1_GetEnumerator_m812062EA22C7025B853992D2B75144A91192C34C(L_10, List_1_GetEnumerator_m812062EA22C7025B853992D2B75144A91192C34C_RuntimeMethod_var);
		V_0 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c9:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mC48BEA5616F0EAE3D981F1A7093C0ADCF657D4D3((&V_0), Enumerator_Dispose_mC48BEA5616F0EAE3D981F1A7093C0ADCF657D4D3_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00be_1;
			}

IL_0070_1:
			{
				// foreach (var assetData in Assets)
				AssetWithinPack_t675DE17DF7B2A4390E90CF4BFBBD35B708F8A888* L_12;
				L_12 = Enumerator_get_Current_m9E531977700E2A8DEBA530001FDE293F2DFBC4F2_inline((&V_0), Enumerator_get_Current_m9E531977700E2A8DEBA530001FDE293F2DFBC4F2_RuntimeMethod_var);
				V_1 = L_12;
				U3CU3Ec__DisplayClass8_0_t4CA7E6D8419DE7640D7B7372D1E5A67D0E0E2185* L_13 = (U3CU3Ec__DisplayClass8_0_t4CA7E6D8419DE7640D7B7372D1E5A67D0E0E2185*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass8_0_t4CA7E6D8419DE7640D7B7372D1E5A67D0E0E2185_il2cpp_TypeInfo_var);
				NullCheck(L_13);
				U3CU3Ec__DisplayClass8_0__ctor_m5E690BA6FF4EEAF77134046BD5DE25E648525B99(L_13, NULL);
				V_2 = L_13;
				U3CU3Ec__DisplayClass8_0_t4CA7E6D8419DE7640D7B7372D1E5A67D0E0E2185* L_14 = V_2;
				NullCheck(L_14);
				L_14->___U3CU3E4__this_1 = __this;
				Il2CppCodeGenWriteBarrier((void**)(&L_14->___U3CU3E4__this_1), (void*)__this);
				// var assetDataInClosure = assetData;
				U3CU3Ec__DisplayClass8_0_t4CA7E6D8419DE7640D7B7372D1E5A67D0E0E2185* L_15 = V_2;
				AssetWithinPack_t675DE17DF7B2A4390E90CF4BFBBD35B708F8A888* L_16 = V_1;
				NullCheck(L_15);
				L_15->___assetDataInClosure_0 = L_16;
				Il2CppCodeGenWriteBarrier((void**)(&L_15->___assetDataInClosure_0), (void*)L_16);
				// assetData.DisplayContentsButton.onClick.AddListener(
				//     () => ButtonEventDisplayTextAsset(assetDataInClosure));
				AssetWithinPack_t675DE17DF7B2A4390E90CF4BFBBD35B708F8A888* L_17 = V_1;
				NullCheck(L_17);
				Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_18 = L_17->___DisplayContentsButton_2;
				NullCheck(L_18);
				ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_19;
				L_19 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_18, NULL);
				U3CU3Ec__DisplayClass8_0_t4CA7E6D8419DE7640D7B7372D1E5A67D0E0E2185* L_20 = V_2;
				UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_21 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
				NullCheck(L_21);
				UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_21, L_20, (intptr_t)((void*)U3CU3Ec__DisplayClass8_0_U3CStartU3Eb__0_mF17CF442219EE7524A6EF183961D13800DC0E5AC_RuntimeMethod_var), NULL);
				NullCheck(L_19);
				UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_19, L_21, NULL);
				// Display.BindButton(assetData.DisplayContentsButton, AssetDeliveryStatus.Available);
				DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_22 = __this->___Display_7;
				AssetWithinPack_t675DE17DF7B2A4390E90CF4BFBBD35B708F8A888* L_23 = V_1;
				NullCheck(L_23);
				Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_24 = L_23->___DisplayContentsButton_2;
				NullCheck(L_22);
				DownloadDisplay_BindButton_m14577FE0BA953CD08832AFB68EF1519E2844D1C2(L_22, L_24, 2, NULL);
			}

IL_00be_1:
			{
				// foreach (var assetData in Assets)
				bool L_25;
				L_25 = Enumerator_MoveNext_mFD9EC57D48262EFB569B4DE5D425CBF584FF54A7((&V_0), Enumerator_MoveNext_mFD9EC57D48262EFB569B4DE5D425CBF584FF54A7_RuntimeMethod_var);
				if (L_25)
				{
					goto IL_0070_1;
				}
			}
			{
				goto IL_00d8;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00d8:
	{
		// Display.BindColor(Display.SuccessColor, AssetDeliveryStatus.Available);
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_26 = __this->___Display_7;
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_27 = __this->___Display_7;
		NullCheck(L_27);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28 = L_27->___SuccessColor_12;
		NullCheck(L_26);
		DownloadDisplay_BindColor_m3E906A37EFB9C9EC5CD03A638567FB5CBCAAAED3(L_26, L_28, 2, NULL);
		// Display.BindColor(Display.ErrorColor, AssetDeliveryStatus.Failed);
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_29 = __this->___Display_7;
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_30 = __this->___Display_7;
		NullCheck(L_30);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31 = L_30->___ErrorColor_11;
		NullCheck(L_29);
		DownloadDisplay_BindColor_m3E906A37EFB9C9EC5CD03A638567FB5CBCAAAED3(L_29, L_31, 5, NULL);
		// SetInitialStatus();
		AssetPackBatchDownloader_SetInitialStatus_m26C8BA5EB72925D374AD48DE1E3BCC98AFD02B2B(__this, NULL);
		// }
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader::ButtonEventRetrieveAssetPackBatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetPackBatchDownloader_ButtonEventRetrieveAssetPackBatch_m08EA6905AEB5D450B54F1D995EC8EE6C9771874A (AssetPackBatchDownloader_tE776DD9212256FBF18573752A1E130CEF64B595A* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(CoLoadAssetPackBatch());
		RuntimeObject* L_0;
		L_0 = AssetPackBatchDownloader_CoLoadAssetPackBatch_mD5DDC9C8CEE576FF7F798EEA3E15A8A8B813FA67(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader::ButtonEventRemovePacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetPackBatchDownloader_ButtonEventRemovePacks_m9644CFE682EA141F3DF09EAA5DD43C4421B71BD1 (AssetPackBatchDownloader_tE776DD9212256FBF18573752A1E130CEF64B595A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC48BEA5616F0EAE3D981F1A7093C0ADCF657D4D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mFD9EC57D48262EFB569B4DE5D425CBF584FF54A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9E531977700E2A8DEBA530001FDE293F2DFBC4F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m812062EA22C7025B853992D2B75144A91192C34C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_t324E44CBED9D18AB38FB942CF42E7165DA8324B9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	AssetWithinPack_t675DE17DF7B2A4390E90CF4BFBBD35B708F8A888* V_2 = NULL;
	{
		// if (_batchRequest == null)
		PlayAssetPackBatchRequest_t870FF270EED353BBE7C7103FE8A264D2DD79F02D* L_0 = __this->____batchRequest_9;
		V_0 = (bool)((((RuntimeObject*)(PlayAssetPackBatchRequest_t870FF270EED353BBE7C7103FE8A264D2DD79F02D*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// return;
		goto IL_0057;
	}

IL_0011:
	{
		// foreach (var asset in Assets)
		List_1_tA59DCF9584AAD07D38DEBB531E8F52DE73D0A259* L_2 = __this->___Assets_4;
		NullCheck(L_2);
		Enumerator_t324E44CBED9D18AB38FB942CF42E7165DA8324B9 L_3;
		L_3 = List_1_GetEnumerator_m812062EA22C7025B853992D2B75144A91192C34C(L_2, List_1_GetEnumerator_m812062EA22C7025B853992D2B75144A91192C34C_RuntimeMethod_var);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0041:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mC48BEA5616F0EAE3D981F1A7093C0ADCF657D4D3((&V_1), Enumerator_Dispose_mC48BEA5616F0EAE3D981F1A7093C0ADCF657D4D3_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0036_1;
			}

IL_0020_1:
			{
				// foreach (var asset in Assets)
				AssetWithinPack_t675DE17DF7B2A4390E90CF4BFBBD35B708F8A888* L_4;
				L_4 = Enumerator_get_Current_m9E531977700E2A8DEBA530001FDE293F2DFBC4F2_inline((&V_1), Enumerator_get_Current_m9E531977700E2A8DEBA530001FDE293F2DFBC4F2_RuntimeMethod_var);
				V_2 = L_4;
				// PlayAssetDelivery.RemoveAssetPack(asset.AssetPackName);
				AssetWithinPack_t675DE17DF7B2A4390E90CF4BFBBD35B708F8A888* L_5 = V_2;
				NullCheck(L_5);
				String_t* L_6 = L_5->___AssetPackName_0;
				PlayAsyncOperation_2_tFA007165B6896547555D503DE0381BDC8A9D9D8C* L_7;
				L_7 = PlayAssetDelivery_RemoveAssetPack_m6EA0BA3267B0682B9A7098A2B0A26F755945DA85(L_6, NULL);
			}

IL_0036_1:
			{
				// foreach (var asset in Assets)
				bool L_8;
				L_8 = Enumerator_MoveNext_mFD9EC57D48262EFB569B4DE5D425CBF584FF54A7((&V_1), Enumerator_MoveNext_mFD9EC57D48262EFB569B4DE5D425CBF584FF54A7_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_0020_1;
				}
			}
			{
				goto IL_0050;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0050:
	{
		// SetInitialStatus();
		AssetPackBatchDownloader_SetInitialStatus_m26C8BA5EB72925D374AD48DE1E3BCC98AFD02B2B(__this, NULL);
	}

IL_0057:
	{
		// }
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader::ButtonEventDisplayTextAsset(Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/AssetWithinPack)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetPackBatchDownloader_ButtonEventDisplayTextAsset_mEB38E65D74BCDE49F4674502C354886AD9FCAFF7 (AssetPackBatchDownloader_tE776DD9212256FBF18573752A1E130CEF64B595A* __this, AssetWithinPack_t675DE17DF7B2A4390E90CF4BFBBD35B708F8A888* ___asset0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetPackBatchDownloader_ButtonEventDisplayTextAsset_mEB38E65D74BCDE49F4674502C354886AD9FCAFF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t8A59DC945DD0DADFF8BCB5865F1598D5B359BFAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral982F0ACC2DE7C945678C99B6439A7921B26AB767);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA5BF1CA11170EB3106BCA996CDC763D693E9798);
		s_Il2CppMethodInitialized = true;
	}
	PlayAssetPackRequest_t02798684A55633E4F651042F75B09FD47459642F* V_0 = NULL;
	AssetLocation_t0793F2DE982E47275F0837DE78452359683C3C80* V_1 = NULL;
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	String_t* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	{
		// if (_batchRequest == null)
		PlayAssetPackBatchRequest_t870FF270EED353BBE7C7103FE8A264D2DD79F02D* L_0 = __this->____batchRequest_9;
		V_5 = (bool)((((RuntimeObject*)(PlayAssetPackBatchRequest_t870FF270EED353BBE7C7103FE8A264D2DD79F02D*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_5;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// return;
		goto IL_00ba;
	}

IL_0016:
	{
		// var request = _batchRequest.Requests[asset.AssetPackName];
		PlayAssetPackBatchRequest_t870FF270EED353BBE7C7103FE8A264D2DD79F02D* L_2 = __this->____batchRequest_9;
		NullCheck(L_2);
		RuntimeObject* L_3 = L_2->___Requests_0;
		AssetWithinPack_t675DE17DF7B2A4390E90CF4BFBBD35B708F8A888* L_4 = ___asset0;
		NullCheck(L_4);
		String_t* L_5 = L_4->___AssetPackName_0;
		NullCheck(L_3);
		PlayAssetPackRequest_t02798684A55633E4F651042F75B09FD47459642F* L_6;
		L_6 = InterfaceFuncInvoker1< PlayAssetPackRequest_t02798684A55633E4F651042F75B09FD47459642F*, String_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.String,Google.Play.AssetDelivery.PlayAssetPackRequest>::get_Item(TKey) */, IDictionary_2_t8A59DC945DD0DADFF8BCB5865F1598D5B359BFAE_il2cpp_TypeInfo_var, L_3, L_5);
		V_0 = L_6;
		// var assetLocation = request.GetAssetLocation(asset.AssetPath);
		PlayAssetPackRequest_t02798684A55633E4F651042F75B09FD47459642F* L_7 = V_0;
		AssetWithinPack_t675DE17DF7B2A4390E90CF4BFBBD35B708F8A888* L_8 = ___asset0;
		NullCheck(L_8);
		String_t* L_9 = L_8->___AssetPath_1;
		NullCheck(L_7);
		AssetLocation_t0793F2DE982E47275F0837DE78452359683C3C80* L_10;
		L_10 = VirtualFuncInvoker1< AssetLocation_t0793F2DE982E47275F0837DE78452359683C3C80*, String_t* >::Invoke(11 /* Google.Play.AssetDelivery.AssetLocation Google.Play.AssetDelivery.PlayAssetPackRequest::GetAssetLocation(System.String) */, L_7, L_9);
		V_1 = L_10;
		// if (assetLocation == null)
		AssetLocation_t0793F2DE982E47275F0837DE78452359683C3C80* L_11 = V_1;
		V_6 = (bool)((((RuntimeObject*)(AssetLocation_t0793F2DE982E47275F0837DE78452359683C3C80*)L_11) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_12 = V_6;
		if (!L_12)
		{
			goto IL_0052;
		}
	}
	{
		// Debug.LogError("Asset cannot be found");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral982F0ACC2DE7C945678C99B6439A7921B26AB767, NULL);
		// return;
		goto IL_00ba;
	}

IL_0052:
	{
		// var assetFileStream = File.OpenRead(assetLocation.Path);
		AssetLocation_t0793F2DE982E47275F0837DE78452359683C3C80* L_13 = V_1;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = AssetLocation_get_Path_mE42C8AE55104A19118D83F461D5322452222A327_inline(L_13, NULL);
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_15;
		L_15 = File_OpenRead_m6181B052EB0E98D2E18FAC79E7744D766BA4244C(L_14, NULL);
		V_2 = L_15;
		// var buffer = new byte[assetLocation.Size];
		AssetLocation_t0793F2DE982E47275F0837DE78452359683C3C80* L_16 = V_1;
		NullCheck(L_16);
		uint64_t L_17;
		L_17 = AssetLocation_get_Size_mCCC1E1F6201029DE26395F8DAD625608964719D8_inline(L_16, NULL);
		if ((uint64_t)(L_17) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), AssetPackBatchDownloader_ButtonEventDisplayTextAsset_mEB38E65D74BCDE49F4674502C354886AD9FCAFF7_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((intptr_t)L_17));
		V_3 = L_18;
		// assetFileStream.Seek((long) assetLocation.Offset, SeekOrigin.Begin);
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_19 = V_2;
		AssetLocation_t0793F2DE982E47275F0837DE78452359683C3C80* L_20 = V_1;
		NullCheck(L_20);
		uint64_t L_21;
		L_21 = AssetLocation_get_Offset_mA0E7D8C9A46AA09DE92EA0B326D690A26C0B00C6_inline(L_20, NULL);
		NullCheck(L_19);
		int64_t L_22;
		L_22 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(29 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_19, L_21, 0);
		// assetFileStream.Read(buffer, /* offset= */ 0, buffer.Length);
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_23 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_3;
		NullCheck(L_25);
		NullCheck(L_23);
		int32_t L_26;
		L_26 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(30 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_23, L_24, 0, ((int32_t)(((RuntimeArray*)L_25)->max_length)));
		// var fileContents = Encoding.UTF8.GetString(buffer, 0, buffer.Length);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_27;
		L_27 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_28 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_3;
		NullCheck(L_29);
		NullCheck(L_27);
		String_t* L_30;
		L_30 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_27, L_28, 0, ((int32_t)(((RuntimeArray*)L_29)->max_length)));
		V_4 = L_30;
		// DisplayTextBox.text = string.Format("Contents of file {0} in asset pack {1}: {2}",
		//     asset.AssetPath, asset.AssetPackName, fileContents);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_31 = __this->___DisplayTextBox_8;
		AssetWithinPack_t675DE17DF7B2A4390E90CF4BFBBD35B708F8A888* L_32 = ___asset0;
		NullCheck(L_32);
		String_t* L_33 = L_32->___AssetPath_1;
		AssetWithinPack_t675DE17DF7B2A4390E90CF4BFBBD35B708F8A888* L_34 = ___asset0;
		NullCheck(L_34);
		String_t* L_35 = L_34->___AssetPackName_0;
		String_t* L_36 = V_4;
		String_t* L_37;
		L_37 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(_stringLiteralCA5BF1CA11170EB3106BCA996CDC763D693E9798, L_33, L_35, L_36, NULL);
		NullCheck(L_31);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_31, L_37);
	}

IL_00ba:
	{
		// }
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetPackBatchDownloader_Update_m585E0DDD538225A329F5A71473B26B17C3790605 (AssetPackBatchDownloader_tE776DD9212256FBF18573752A1E130CEF64B595A* __this, const RuntimeMethod* method) 
{
	{
		// Display.SetScrolling(_requestInProgress);
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_0 = __this->___Display_7;
		bool L_1 = __this->____requestInProgress_10;
		NullCheck(L_0);
		DownloadDisplay_SetScrolling_mA0D8E34FEA91F024A1E28E96786F9FA44EA9A243(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader::SetInitialStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetPackBatchDownloader_SetInitialStatus_m26C8BA5EB72925D374AD48DE1E3BCC98AFD02B2B (AssetPackBatchDownloader_tE776DD9212256FBF18573752A1E130CEF64B595A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mC48BEA5616F0EAE3D981F1A7093C0ADCF657D4D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mFD9EC57D48262EFB569B4DE5D425CBF584FF54A7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9E531977700E2A8DEBA530001FDE293F2DFBC4F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m812062EA22C7025B853992D2B75144A91192C34C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_t324E44CBED9D18AB38FB942CF42E7165DA8324B9 V_1;
	memset((&V_1), 0, sizeof(V_1));
	AssetWithinPack_t675DE17DF7B2A4390E90CF4BFBBD35B708F8A888* V_2 = NULL;
	bool V_3 = false;
	{
		// Display.ShowButtons(RetrieveAssetPackBatchButton);
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_0 = __this->___Display_7;
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_1 = (ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF*)(ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF*)SZArrayNew(ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF_il2cpp_TypeInfo_var, (uint32_t)1);
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_2 = L_1;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->___RetrieveAssetPackBatchButton_5;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098*)L_3);
		NullCheck(L_0);
		DownloadDisplay_ShowButtons_m9AB68AEB7ABC1DF6A1FC7CA8A8021063C5F730BC(L_0, L_2, NULL);
		// var allDownloaded = true;
		V_0 = (bool)1;
		// foreach (var asset in Assets)
		List_1_tA59DCF9584AAD07D38DEBB531E8F52DE73D0A259* L_4 = __this->___Assets_4;
		NullCheck(L_4);
		Enumerator_t324E44CBED9D18AB38FB942CF42E7165DA8324B9 L_5;
		L_5 = List_1_GetEnumerator_m812062EA22C7025B853992D2B75144A91192C34C(L_4, List_1_GetEnumerator_m812062EA22C7025B853992D2B75144A91192C34C_RuntimeMethod_var);
		V_1 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0059:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mC48BEA5616F0EAE3D981F1A7093C0ADCF657D4D3((&V_1), Enumerator_Dispose_mC48BEA5616F0EAE3D981F1A7093C0ADCF657D4D3_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004e_1;
			}

IL_002d_1:
			{
				// foreach (var asset in Assets)
				AssetWithinPack_t675DE17DF7B2A4390E90CF4BFBBD35B708F8A888* L_6;
				L_6 = Enumerator_get_Current_m9E531977700E2A8DEBA530001FDE293F2DFBC4F2_inline((&V_1), Enumerator_get_Current_m9E531977700E2A8DEBA530001FDE293F2DFBC4F2_RuntimeMethod_var);
				V_2 = L_6;
				// if (!PlayAssetDelivery.IsDownloaded(asset.AssetPackName))
				AssetWithinPack_t675DE17DF7B2A4390E90CF4BFBBD35B708F8A888* L_7 = V_2;
				NullCheck(L_7);
				String_t* L_8 = L_7->___AssetPackName_0;
				bool L_9;
				L_9 = PlayAssetDelivery_IsDownloaded_m6F16EFC41F159FB201A1EAB1ED102001DAD36B3E(L_8, NULL);
				V_3 = (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0);
				bool L_10 = V_3;
				if (!L_10)
				{
					goto IL_004d_1;
				}
			}
			{
				// allDownloaded = false;
				V_0 = (bool)0;
				// break;
				goto IL_0057_1;
			}

IL_004d_1:
			{
			}

IL_004e_1:
			{
				// foreach (var asset in Assets)
				bool L_11;
				L_11 = Enumerator_MoveNext_mFD9EC57D48262EFB569B4DE5D425CBF584FF54A7((&V_1), Enumerator_MoveNext_mFD9EC57D48262EFB569B4DE5D425CBF584FF54A7_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_002d_1;
				}
			}

IL_0057_1:
			{
				goto IL_0068;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0068:
	{
		// Display.SetInitialStatus(allDownloaded);
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_12 = __this->___Display_7;
		bool L_13 = V_0;
		NullCheck(L_12);
		DownloadDisplay_SetInitialStatus_m36D2A91666EEA0E58E63C048622570AB6BAF4301(L_12, L_13, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader::CoLoadAssetPackBatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AssetPackBatchDownloader_CoLoadAssetPackBatch_mD5DDC9C8CEE576FF7F798EEA3E15A8A8B813FA67 (AssetPackBatchDownloader_tE776DD9212256FBF18573752A1E130CEF64B595A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoLoadAssetPackBatchU3Ed__14_t7D69F65F8A17610B42A6C5858F1A1BD5F30C0844_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCoLoadAssetPackBatchU3Ed__14_t7D69F65F8A17610B42A6C5858F1A1BD5F30C0844* L_0 = (U3CCoLoadAssetPackBatchU3Ed__14_t7D69F65F8A17610B42A6C5858F1A1BD5F30C0844*)il2cpp_codegen_object_new(U3CCoLoadAssetPackBatchU3Ed__14_t7D69F65F8A17610B42A6C5858F1A1BD5F30C0844_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCoLoadAssetPackBatchU3Ed__14__ctor_mD1510615C12CAD3344CF52C2F66E56ED0558EDA4(L_0, 0, NULL);
		U3CCoLoadAssetPackBatchU3Ed__14_t7D69F65F8A17610B42A6C5858F1A1BD5F30C0844* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetPackBatchDownloader__ctor_mDA3B48AB7BF1DFB131458843761EDAC559C36646 (AssetPackBatchDownloader_tE776DD9212256FBF18573752A1E130CEF64B595A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/AssetWithinPack::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetWithinPack__ctor_mFE5BFA29B86801B1BBC1BDB5FD3D3A4612ECB7C5 (AssetWithinPack_t675DE17DF7B2A4390E90CF4BFBBD35B708F8A888* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_m5E690BA6FF4EEAF77134046BD5DE25E648525B99 (U3CU3Ec__DisplayClass8_0_t4CA7E6D8419DE7640D7B7372D1E5A67D0E0E2185* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/<>c__DisplayClass8_0::<Start>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0_U3CStartU3Eb__0_mF17CF442219EE7524A6EF183961D13800DC0E5AC (U3CU3Ec__DisplayClass8_0_t4CA7E6D8419DE7640D7B7372D1E5A67D0E0E2185* __this, const RuntimeMethod* method) 
{
	{
		// () => ButtonEventDisplayTextAsset(assetDataInClosure));
		AssetPackBatchDownloader_tE776DD9212256FBF18573752A1E130CEF64B595A* L_0 = __this->___U3CU3E4__this_1;
		AssetWithinPack_t675DE17DF7B2A4390E90CF4BFBBD35B708F8A888* L_1 = __this->___assetDataInClosure_0;
		NullCheck(L_0);
		AssetPackBatchDownloader_ButtonEventDisplayTextAsset_mEB38E65D74BCDE49F4674502C354886AD9FCAFF7(L_0, L_1, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mDEE2B37579040A97AACE19260F81A713BD66FBAF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA8EAA00333BCDD7B9A7A8B9E4E1A8ED2B4697512_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tA8EAA00333BCDD7B9A7A8B9E4E1A8ED2B4697512* L_0 = (U3CU3Ec_tA8EAA00333BCDD7B9A7A8B9E4E1A8ED2B4697512*)il2cpp_codegen_object_new(U3CU3Ec_tA8EAA00333BCDD7B9A7A8B9E4E1A8ED2B4697512_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mEF0B40903F3C4AA0A67AD93AB459755E83FEBD29(L_0, NULL);
		((U3CU3Ec_tA8EAA00333BCDD7B9A7A8B9E4E1A8ED2B4697512_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA8EAA00333BCDD7B9A7A8B9E4E1A8ED2B4697512_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tA8EAA00333BCDD7B9A7A8B9E4E1A8ED2B4697512_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA8EAA00333BCDD7B9A7A8B9E4E1A8ED2B4697512_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEF0B40903F3C4AA0A67AD93AB459755E83FEBD29 (U3CU3Ec_tA8EAA00333BCDD7B9A7A8B9E4E1A8ED2B4697512* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/<>c::<CoLoadAssetPackBatch>b__14_0(Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/AssetWithinPack)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CCoLoadAssetPackBatchU3Eb__14_0_m6A91C73194BE6CB3C553B8F2317D8410B5E9B36B (U3CU3Ec_tA8EAA00333BCDD7B9A7A8B9E4E1A8ED2B4697512* __this, AssetWithinPack_t675DE17DF7B2A4390E90CF4BFBBD35B708F8A888* ___a0, const RuntimeMethod* method) 
{
	{
		// var assetPackNames = Assets.Select(a => a.AssetPackName).Distinct().ToList();
		AssetWithinPack_t675DE17DF7B2A4390E90CF4BFBBD35B708F8A888* L_0 = ___a0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___AssetPackName_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/<CoLoadAssetPackBatch>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoLoadAssetPackBatchU3Ed__14__ctor_mD1510615C12CAD3344CF52C2F66E56ED0558EDA4 (U3CCoLoadAssetPackBatchU3Ed__14_t7D69F65F8A17610B42A6C5858F1A1BD5F30C0844* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/<CoLoadAssetPackBatch>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoLoadAssetPackBatchU3Ed__14_System_IDisposable_Dispose_mD8AB4108A1DE32E0DDB05951FC630AE42C904770 (U3CCoLoadAssetPackBatchU3Ed__14_t7D69F65F8A17610B42A6C5858F1A1BD5F30C0844* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/<CoLoadAssetPackBatch>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCoLoadAssetPackBatchU3Ed__14_MoveNext_m69C5C054839ECC088852A8F173954CC9E76C0256 (U3CCoLoadAssetPackBatchU3Ed__14_t7D69F65F8A17610B42A6C5858F1A1BD5F30C0844* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Distinct_TisString_t_m1E99E758E2A5605D0EE48F5715C69AF1096BF99B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisAssetWithinPack_t675DE17DF7B2A4390E90CF4BFBBD35B708F8A888_TisString_t_mF0CAB691562DB6F73982AF274CBEF12594AA0714_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t07CAF9D420EC549EF159B1FC8D173AD0751FBF2F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t823341DC866742C0A0E036ECF1FC65037B13A486_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t8A59DC945DD0DADFF8BCB5865F1598D5B359BFAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t0C187DF699940D4BD2D0A1B0CBAE2A37EB2BD70C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tBE4F7010EF8E8D1241059B184623A9B39E175583_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCoLoadAssetPackBatchU3Eb__14_0_m6A91C73194BE6CB3C553B8F2317D8410B5E9B36B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tA8EAA00333BCDD7B9A7A8B9E4E1A8ED2B4697512_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	Func_2_t07CAF9D420EC549EF159B1FC8D173AD0751FBF2F* G_B9_0 = NULL;
	List_1_tA59DCF9584AAD07D38DEBB531E8F52DE73D0A259* G_B9_1 = NULL;
	U3CCoLoadAssetPackBatchU3Ed__14_t7D69F65F8A17610B42A6C5858F1A1BD5F30C0844* G_B9_2 = NULL;
	Func_2_t07CAF9D420EC549EF159B1FC8D173AD0751FBF2F* G_B8_0 = NULL;
	List_1_tA59DCF9584AAD07D38DEBB531E8F52DE73D0A259* G_B8_1 = NULL;
	U3CCoLoadAssetPackBatchU3Ed__14_t7D69F65F8A17610B42A6C5858F1A1BD5F30C0844* G_B8_2 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		goto IL_001b;
	}

IL_0014:
	{
		goto IL_0166;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// var assetPackNames = Assets.Select(a => a.AssetPackName).Distinct().ToList();
		AssetPackBatchDownloader_tE776DD9212256FBF18573752A1E130CEF64B595A* L_3 = __this->___U3CU3E4__this_2;
		NullCheck(L_3);
		List_1_tA59DCF9584AAD07D38DEBB531E8F52DE73D0A259* L_4 = L_3->___Assets_4;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tA8EAA00333BCDD7B9A7A8B9E4E1A8ED2B4697512_il2cpp_TypeInfo_var);
		Func_2_t07CAF9D420EC549EF159B1FC8D173AD0751FBF2F* L_5 = ((U3CU3Ec_tA8EAA00333BCDD7B9A7A8B9E4E1A8ED2B4697512_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA8EAA00333BCDD7B9A7A8B9E4E1A8ED2B4697512_il2cpp_TypeInfo_var))->___U3CU3E9__14_0_1;
		Func_2_t07CAF9D420EC549EF159B1FC8D173AD0751FBF2F* L_6 = L_5;
		G_B8_0 = L_6;
		G_B8_1 = L_4;
		G_B8_2 = __this;
		if (L_6)
		{
			G_B9_0 = L_6;
			G_B9_1 = L_4;
			G_B9_2 = __this;
			goto IL_004e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tA8EAA00333BCDD7B9A7A8B9E4E1A8ED2B4697512_il2cpp_TypeInfo_var);
		U3CU3Ec_tA8EAA00333BCDD7B9A7A8B9E4E1A8ED2B4697512* L_7 = ((U3CU3Ec_tA8EAA00333BCDD7B9A7A8B9E4E1A8ED2B4697512_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA8EAA00333BCDD7B9A7A8B9E4E1A8ED2B4697512_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t07CAF9D420EC549EF159B1FC8D173AD0751FBF2F* L_8 = (Func_2_t07CAF9D420EC549EF159B1FC8D173AD0751FBF2F*)il2cpp_codegen_object_new(Func_2_t07CAF9D420EC549EF159B1FC8D173AD0751FBF2F_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Func_2__ctor_mDF556E5A8849B1BF72945789B559C42797901E22(L_8, L_7, (intptr_t)((void*)U3CU3Ec_U3CCoLoadAssetPackBatchU3Eb__14_0_m6A91C73194BE6CB3C553B8F2317D8410B5E9B36B_RuntimeMethod_var), NULL);
		Func_2_t07CAF9D420EC549EF159B1FC8D173AD0751FBF2F* L_9 = L_8;
		((U3CU3Ec_tA8EAA00333BCDD7B9A7A8B9E4E1A8ED2B4697512_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA8EAA00333BCDD7B9A7A8B9E4E1A8ED2B4697512_il2cpp_TypeInfo_var))->___U3CU3E9__14_0_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tA8EAA00333BCDD7B9A7A8B9E4E1A8ED2B4697512_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tA8EAA00333BCDD7B9A7A8B9E4E1A8ED2B4697512_il2cpp_TypeInfo_var))->___U3CU3E9__14_0_1), (void*)L_9);
		G_B9_0 = L_9;
		G_B9_1 = G_B8_1;
		G_B9_2 = G_B8_2;
	}

IL_004e:
	{
		RuntimeObject* L_10;
		L_10 = Enumerable_Select_TisAssetWithinPack_t675DE17DF7B2A4390E90CF4BFBBD35B708F8A888_TisString_t_mF0CAB691562DB6F73982AF274CBEF12594AA0714(G_B9_1, G_B9_0, Enumerable_Select_TisAssetWithinPack_t675DE17DF7B2A4390E90CF4BFBBD35B708F8A888_TisString_t_mF0CAB691562DB6F73982AF274CBEF12594AA0714_RuntimeMethod_var);
		RuntimeObject* L_11;
		L_11 = Enumerable_Distinct_TisString_t_m1E99E758E2A5605D0EE48F5715C69AF1096BF99B(L_10, Enumerable_Distinct_TisString_t_m1E99E758E2A5605D0EE48F5715C69AF1096BF99B_RuntimeMethod_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_12;
		L_12 = Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131(L_11, Enumerable_ToList_TisString_t_m86360148F90DE6EA1A8363F38B7C2A88FD139131_RuntimeMethod_var);
		NullCheck(G_B9_2);
		G_B9_2->___U3CassetPackNamesU3E5__1_3 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&G_B9_2->___U3CassetPackNamesU3E5__1_3), (void*)L_12);
		// _batchRequest = PlayAssetDelivery.RetrieveAssetPackBatchAsync(assetPackNames);
		AssetPackBatchDownloader_tE776DD9212256FBF18573752A1E130CEF64B595A* L_13 = __this->___U3CU3E4__this_2;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_14 = __this->___U3CassetPackNamesU3E5__1_3;
		PlayAssetPackBatchRequest_t870FF270EED353BBE7C7103FE8A264D2DD79F02D* L_15;
		L_15 = PlayAssetDelivery_RetrieveAssetPackBatchAsync_m07DC8429537D7E5BADE34BD9EBC75746EBB9EBD8(L_14, NULL);
		NullCheck(L_13);
		L_13->____batchRequest_9 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->____batchRequest_9), (void*)L_15);
		// _requestInProgress = true;
		AssetPackBatchDownloader_tE776DD9212256FBF18573752A1E130CEF64B595A* L_16 = __this->___U3CU3E4__this_2;
		NullCheck(L_16);
		L_16->____requestInProgress_10 = (bool)1;
		goto IL_016e;
	}

IL_0089:
	{
		// var totalProgress = 0f;
		__this->___U3CtotalProgressU3E5__3_5 = (0.0f);
		// foreach (var request in _batchRequest.Requests.Values)
		AssetPackBatchDownloader_tE776DD9212256FBF18573752A1E130CEF64B595A* L_17 = __this->___U3CU3E4__this_2;
		NullCheck(L_17);
		PlayAssetPackBatchRequest_t870FF270EED353BBE7C7103FE8A264D2DD79F02D* L_18 = L_17->____batchRequest_9;
		NullCheck(L_18);
		RuntimeObject* L_19 = L_18->___Requests_0;
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<System.String,Google.Play.AssetDelivery.PlayAssetPackRequest>::get_Values() */, IDictionary_2_t8A59DC945DD0DADFF8BCB5865F1598D5B359BFAE_il2cpp_TypeInfo_var, L_19);
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Google.Play.AssetDelivery.PlayAssetPackRequest>::GetEnumerator() */, IEnumerable_1_t0C187DF699940D4BD2D0A1B0CBAE2A37EB2BD70C_il2cpp_TypeInfo_var, L_20);
		__this->___U3CU3Es__4_6 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_6), (void*)L_21);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00f9:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_22 = __this->___U3CU3Es__4_6;
					if (!L_22)
					{
						goto IL_010d;
					}
				}
				{
					RuntimeObject* L_23 = __this->___U3CU3Es__4_6;
					NullCheck(L_23);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_23);
				}

IL_010d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00ea_1;
			}

IL_00b8_1:
			{
				// foreach (var request in _batchRequest.Requests.Values)
				RuntimeObject* L_24 = __this->___U3CU3Es__4_6;
				NullCheck(L_24);
				PlayAssetPackRequest_t02798684A55633E4F651042F75B09FD47459642F* L_25;
				L_25 = InterfaceFuncInvoker0< PlayAssetPackRequest_t02798684A55633E4F651042F75B09FD47459642F* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Google.Play.AssetDelivery.PlayAssetPackRequest>::get_Current() */, IEnumerator_1_tBE4F7010EF8E8D1241059B184623A9B39E175583_il2cpp_TypeInfo_var, L_24);
				__this->___U3CrequestU3E5__5_7 = L_25;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrequestU3E5__5_7), (void*)L_25);
				// totalProgress += request.DownloadProgress;
				float L_26 = __this->___U3CtotalProgressU3E5__3_5;
				PlayAssetPackRequest_t02798684A55633E4F651042F75B09FD47459642F* L_27 = __this->___U3CrequestU3E5__5_7;
				NullCheck(L_27);
				float L_28;
				L_28 = PlayAssetPackRequest_get_DownloadProgress_mA490FFA978283C5FE0AD726E4D068D6047B161D7_inline(L_27, NULL);
				__this->___U3CtotalProgressU3E5__3_5 = ((float)il2cpp_codegen_add(L_26, L_28));
				__this->___U3CrequestU3E5__5_7 = (PlayAssetPackRequest_t02798684A55633E4F651042F75B09FD47459642F*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrequestU3E5__5_7), (void*)(PlayAssetPackRequest_t02798684A55633E4F651042F75B09FD47459642F*)NULL);
			}

IL_00ea_1:
			{
				// foreach (var request in _batchRequest.Requests.Values)
				RuntimeObject* L_29 = __this->___U3CU3Es__4_6;
				NullCheck(L_29);
				bool L_30;
				L_30 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_29);
				if (L_30)
				{
					goto IL_00b8_1;
				}
			}
			{
				goto IL_010e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_010e:
	{
		__this->___U3CU3Es__4_6 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_6), (void*)(RuntimeObject*)NULL);
		// Display.SetProgress(totalProgress / _batchRequest.Requests.Count);
		AssetPackBatchDownloader_tE776DD9212256FBF18573752A1E130CEF64B595A* L_31 = __this->___U3CU3E4__this_2;
		NullCheck(L_31);
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_32 = L_31->___Display_7;
		float L_33 = __this->___U3CtotalProgressU3E5__3_5;
		AssetPackBatchDownloader_tE776DD9212256FBF18573752A1E130CEF64B595A* L_34 = __this->___U3CU3E4__this_2;
		NullCheck(L_34);
		PlayAssetPackBatchRequest_t870FF270EED353BBE7C7103FE8A264D2DD79F02D* L_35 = L_34->____batchRequest_9;
		NullCheck(L_35);
		RuntimeObject* L_36 = L_35->___Requests_0;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,Google.Play.AssetDelivery.PlayAssetPackRequest>>::get_Count() */, ICollection_1_t823341DC866742C0A0E036ECF1FC65037B13A486_il2cpp_TypeInfo_var, L_36);
		NullCheck(L_32);
		DownloadDisplay_SetProgress_mFA3B98D656B414E7BE347D41052E5F1D28A5B36A(L_32, ((float)(L_33/((float)L_37))), NULL);
		// Display.SetStatus(AssetDeliveryStatus.Retrieving, AssetDeliveryErrorCode.NoError);
		AssetPackBatchDownloader_tE776DD9212256FBF18573752A1E130CEF64B595A* L_38 = __this->___U3CU3E4__this_2;
		NullCheck(L_38);
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_39 = L_38->___Display_7;
		NullCheck(L_39);
		DownloadDisplay_SetStatus_m81D1DAB50049DA5C61FC806164BB9588FDCA8B4C(L_39, 1, 0, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0166:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_016e:
	{
		// while (!_batchRequest.IsDone)
		AssetPackBatchDownloader_tE776DD9212256FBF18573752A1E130CEF64B595A* L_40 = __this->___U3CU3E4__this_2;
		NullCheck(L_40);
		PlayAssetPackBatchRequest_t870FF270EED353BBE7C7103FE8A264D2DD79F02D* L_41 = L_40->____batchRequest_9;
		NullCheck(L_41);
		bool L_42;
		L_42 = PlayAssetPackBatchRequest_get_IsDone_m2AED4BE21473E5256202EE7847252C8165F80059_inline(L_41, NULL);
		V_1 = (bool)((((int32_t)L_42) == ((int32_t)0))? 1 : 0);
		bool L_43 = V_1;
		if (L_43)
		{
			goto IL_0089;
		}
	}
	{
		// var allSucceeded = true;
		__this->___U3CallSucceededU3E5__2_4 = (bool)1;
		// foreach (var request in _batchRequest.Requests.Values)
		AssetPackBatchDownloader_tE776DD9212256FBF18573752A1E130CEF64B595A* L_44 = __this->___U3CU3E4__this_2;
		NullCheck(L_44);
		PlayAssetPackBatchRequest_t870FF270EED353BBE7C7103FE8A264D2DD79F02D* L_45 = L_44->____batchRequest_9;
		NullCheck(L_45);
		RuntimeObject* L_46 = L_45->___Requests_0;
		NullCheck(L_46);
		RuntimeObject* L_47;
		L_47 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.IDictionary`2<System.String,Google.Play.AssetDelivery.PlayAssetPackRequest>::get_Values() */, IDictionary_2_t8A59DC945DD0DADFF8BCB5865F1598D5B359BFAE_il2cpp_TypeInfo_var, L_46);
		NullCheck(L_47);
		RuntimeObject* L_48;
		L_48 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Google.Play.AssetDelivery.PlayAssetPackRequest>::GetEnumerator() */, IEnumerable_1_t0C187DF699940D4BD2D0A1B0CBAE2A37EB2BD70C_il2cpp_TypeInfo_var, L_47);
		__this->___U3CU3Es__6_8 = L_48;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__6_8), (void*)L_48);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_021e:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_49 = __this->___U3CU3Es__6_8;
					if (!L_49)
					{
						goto IL_0232;
					}
				}
				{
					RuntimeObject* L_50 = __this->___U3CU3Es__6_8;
					NullCheck(L_50);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_50);
				}

IL_0232:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_020f_1;
			}

IL_01b2_1:
			{
				// foreach (var request in _batchRequest.Requests.Values)
				RuntimeObject* L_51 = __this->___U3CU3Es__6_8;
				NullCheck(L_51);
				PlayAssetPackRequest_t02798684A55633E4F651042F75B09FD47459642F* L_52;
				L_52 = InterfaceFuncInvoker0< PlayAssetPackRequest_t02798684A55633E4F651042F75B09FD47459642F* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Google.Play.AssetDelivery.PlayAssetPackRequest>::get_Current() */, IEnumerator_1_tBE4F7010EF8E8D1241059B184623A9B39E175583_il2cpp_TypeInfo_var, L_51);
				__this->___U3CrequestU3E5__7_9 = L_52;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrequestU3E5__7_9), (void*)L_52);
				// if (request.Error != AssetDeliveryErrorCode.NoError)
				PlayAssetPackRequest_t02798684A55633E4F651042F75B09FD47459642F* L_53 = __this->___U3CrequestU3E5__7_9;
				NullCheck(L_53);
				int32_t L_54;
				L_54 = PlayAssetPackRequest_get_Error_m12DDFDA5DFB4C43B70DEA4CDFA3A48C5EB8A86C6_inline(L_53, NULL);
				V_2 = (bool)((!(((uint32_t)L_54) <= ((uint32_t)0)))? 1 : 0);
				bool L_55 = V_2;
				if (!L_55)
				{
					goto IL_0207_1;
				}
			}
			{
				// Display.SetStatus(request.Status, request.Error);
				AssetPackBatchDownloader_tE776DD9212256FBF18573752A1E130CEF64B595A* L_56 = __this->___U3CU3E4__this_2;
				NullCheck(L_56);
				DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_57 = L_56->___Display_7;
				PlayAssetPackRequest_t02798684A55633E4F651042F75B09FD47459642F* L_58 = __this->___U3CrequestU3E5__7_9;
				NullCheck(L_58);
				int32_t L_59;
				L_59 = PlayAssetPackRequest_get_Status_mA68461C226CA4AE1D83E70B45DEBAB2486347B04_inline(L_58, NULL);
				PlayAssetPackRequest_t02798684A55633E4F651042F75B09FD47459642F* L_60 = __this->___U3CrequestU3E5__7_9;
				NullCheck(L_60);
				int32_t L_61;
				L_61 = PlayAssetPackRequest_get_Error_m12DDFDA5DFB4C43B70DEA4CDFA3A48C5EB8A86C6_inline(L_60, NULL);
				NullCheck(L_57);
				DownloadDisplay_SetStatus_m81D1DAB50049DA5C61FC806164BB9588FDCA8B4C(L_57, L_59, L_61, NULL);
				// allSucceeded = false;
				__this->___U3CallSucceededU3E5__2_4 = (bool)0;
				// break;
				goto IL_021c_1;
			}

IL_0207_1:
			{
				__this->___U3CrequestU3E5__7_9 = (PlayAssetPackRequest_t02798684A55633E4F651042F75B09FD47459642F*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CrequestU3E5__7_9), (void*)(PlayAssetPackRequest_t02798684A55633E4F651042F75B09FD47459642F*)NULL);
			}

IL_020f_1:
			{
				// foreach (var request in _batchRequest.Requests.Values)
				RuntimeObject* L_62 = __this->___U3CU3Es__6_8;
				NullCheck(L_62);
				bool L_63;
				L_63 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_62);
				if (L_63)
				{
					goto IL_01b2_1;
				}
			}

IL_021c_1:
			{
				goto IL_0233;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0233:
	{
		__this->___U3CU3Es__6_8 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__6_8), (void*)(RuntimeObject*)NULL);
		// if (allSucceeded)
		bool L_64 = __this->___U3CallSucceededU3E5__2_4;
		V_3 = L_64;
		bool L_65 = V_3;
		if (!L_65)
		{
			goto IL_026f;
		}
	}
	{
		// Display.SetProgress(1f);
		AssetPackBatchDownloader_tE776DD9212256FBF18573752A1E130CEF64B595A* L_66 = __this->___U3CU3E4__this_2;
		NullCheck(L_66);
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_67 = L_66->___Display_7;
		NullCheck(L_67);
		DownloadDisplay_SetProgress_mFA3B98D656B414E7BE347D41052E5F1D28A5B36A(L_67, (1.0f), NULL);
		// Display.SetStatus(AssetDeliveryStatus.Available, AssetDeliveryErrorCode.NoError);
		AssetPackBatchDownloader_tE776DD9212256FBF18573752A1E130CEF64B595A* L_68 = __this->___U3CU3E4__this_2;
		NullCheck(L_68);
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_69 = L_68->___Display_7;
		NullCheck(L_69);
		DownloadDisplay_SetStatus_m81D1DAB50049DA5C61FC806164BB9588FDCA8B4C(L_69, 2, 0, NULL);
	}

IL_026f:
	{
		// _requestInProgress = false;
		AssetPackBatchDownloader_tE776DD9212256FBF18573752A1E130CEF64B595A* L_70 = __this->___U3CU3E4__this_2;
		NullCheck(L_70);
		L_70->____requestInProgress_10 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/<CoLoadAssetPackBatch>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCoLoadAssetPackBatchU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF7E3474A8AE6FB7F79F73E633A465D9B3A2EF0A9 (U3CCoLoadAssetPackBatchU3Ed__14_t7D69F65F8A17610B42A6C5858F1A1BD5F30C0844* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/<CoLoadAssetPackBatch>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoLoadAssetPackBatchU3Ed__14_System_Collections_IEnumerator_Reset_m38F8A0BD855EB24D84713A6A1BB0564C4C6E13DD (U3CCoLoadAssetPackBatchU3Ed__14_t7D69F65F8A17610B42A6C5858F1A1BD5F30C0844* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCoLoadAssetPackBatchU3Ed__14_System_Collections_IEnumerator_Reset_m38F8A0BD855EB24D84713A6A1BB0564C4C6E13DD_RuntimeMethod_var)));
	}
}
// System.Object Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader/<CoLoadAssetPackBatch>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCoLoadAssetPackBatchU3Ed__14_System_Collections_IEnumerator_get_Current_m82F772210B67FCEE1270461A94BCE125D1D39C72 (U3CCoLoadAssetPackBatchU3Ed__14_t7D69F65F8A17610B42A6C5858F1A1BD5F30C0844* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader::get_IsInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AssetPackDownloader_get_IsInitialized_mD22A9F96A28F173E281EE2D7B01698206375D4B9 (AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsInitialized { get; private set; }
		bool L_0 = __this->___U3CIsInitializedU3Ek__BackingField_21;
		return L_0;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader::set_IsInitialized(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetPackDownloader_set_IsInitialized_m1D0A1D05640AEBA36544E3CE81467E9D8300A9E5 (AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsInitialized { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CIsInitializedU3Ek__BackingField_21 = L_0;
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetPackDownloader_Start_m4762545DD7DC5123D9299A3AB9EA7DF2D7545896 (AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetPackDownloader_ButtonEventCancelDownload_mC529D6594FFFB18F6EF9E86AF6019685C60FD88B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetPackDownloader_ButtonEventDisplayTextAsset_mE4E6ECD28C8868E621F90FD3E74C8004E8212E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetPackDownloader_ButtonEventLoadAssetBundle_mD1B7F241B06EE0281C5CFEE36C6E2FF64908553C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetPackDownloader_ButtonEventLoadSceneFromAssetBundle_m40E67668B3897CA059F278AAE3CDDFF40438D331_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetPackDownloader_ButtonEventRemoveAssetPack_mFBFF86EFA2882E0D823A4A75B0A2573E002BB398_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetPackDownloader_ButtonEventRetrieveAssetPack_m87430A724546C10C92F04C53EAB0BB44848C1008_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetPackDownloader_ButtonEventShowConfirmationDialog_mEF26B4D8DB27FC9B4C1D1AFFCDFAF789D66A7C20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// RetrieveAssetBundleButton.onClick.AddListener(ButtonEventRetrieveAssetPack);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___RetrieveAssetBundleButton_7;
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_0, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_2, __this, (intptr_t)((void*)AssetPackDownloader_ButtonEventRetrieveAssetPack_m87430A724546C10C92F04C53EAB0BB44848C1008_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_1, L_2, NULL);
		// LoadSceneButton.onClick.AddListener(ButtonEventLoadSceneFromAssetBundle);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->___LoadSceneButton_9;
		NullCheck(L_3);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_4;
		L_4 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_3, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_5, __this, (intptr_t)((void*)AssetPackDownloader_ButtonEventLoadSceneFromAssetBundle_m40E67668B3897CA059F278AAE3CDDFF40438D331_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_4, L_5, NULL);
		// ShowCellularDialogButton.onClick.AddListener(ButtonEventShowConfirmationDialog);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_6 = __this->___ShowCellularDialogButton_10;
		NullCheck(L_6);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_7;
		L_7 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_6, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_8 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_8, __this, (intptr_t)((void*)AssetPackDownloader_ButtonEventShowConfirmationDialog_mEF26B4D8DB27FC9B4C1D1AFFCDFAF789D66A7C20_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_7, L_8, NULL);
		// CancelDownloadButton.onClick.AddListener(ButtonEventCancelDownload);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_9 = __this->___CancelDownloadButton_11;
		NullCheck(L_9);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_10;
		L_10 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_9, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_11 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_11, __this, (intptr_t)((void*)AssetPackDownloader_ButtonEventCancelDownload_mC529D6594FFFB18F6EF9E86AF6019685C60FD88B_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_10, L_11, NULL);
		// RemoveButton.onClick.AddListener(ButtonEventRemoveAssetPack);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_12 = __this->___RemoveButton_12;
		NullCheck(L_12);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_13;
		L_13 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_12, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_14 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_14, __this, (intptr_t)((void*)AssetPackDownloader_ButtonEventRemoveAssetPack_mFBFF86EFA2882E0D823A4A75B0A2573E002BB398_RuntimeMethod_var), NULL);
		NullCheck(L_13);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_13, L_14, NULL);
		// LoadAssetBundleButton.onClick.AddListener(ButtonEventLoadAssetBundle);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_15 = __this->___LoadAssetBundleButton_13;
		NullCheck(L_15);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_16;
		L_16 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_15, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_17 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_17, __this, (intptr_t)((void*)AssetPackDownloader_ButtonEventLoadAssetBundle_mD1B7F241B06EE0281C5CFEE36C6E2FF64908553C_RuntimeMethod_var), NULL);
		NullCheck(L_16);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_16, L_17, NULL);
		// DisplayTextAssetButton.onClick.AddListener(ButtonEventDisplayTextAsset);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_18 = __this->___DisplayTextAssetButton_14;
		NullCheck(L_18);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_19;
		L_19 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_18, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_20 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_20, __this, (intptr_t)((void*)AssetPackDownloader_ButtonEventDisplayTextAsset_mE4E6ECD28C8868E621F90FD3E74C8004E8212E81_RuntimeMethod_var), NULL);
		NullCheck(L_19);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_19, L_20, NULL);
		// Display.BindButton(CancelDownloadButton, AssetDeliveryStatus.Pending);
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_21 = __this->___Display_8;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_22 = __this->___CancelDownloadButton_11;
		NullCheck(L_21);
		DownloadDisplay_BindButton_m14577FE0BA953CD08832AFB68EF1519E2844D1C2(L_21, L_22, 0, NULL);
		// Display.BindButton(CancelDownloadButton, AssetDeliveryStatus.Retrieving);
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_23 = __this->___Display_8;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_24 = __this->___CancelDownloadButton_11;
		NullCheck(L_23);
		DownloadDisplay_BindButton_m14577FE0BA953CD08832AFB68EF1519E2844D1C2(L_23, L_24, 1, NULL);
		// Display.BindButton(ShowCellularDialogButton, AssetDeliveryStatus.WaitingForWifi);
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_25 = __this->___Display_8;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_26 = __this->___ShowCellularDialogButton_10;
		NullCheck(L_25);
		DownloadDisplay_BindButton_m14577FE0BA953CD08832AFB68EF1519E2844D1C2(L_25, L_26, 6, NULL);
		// Display.BindButton(ShowCellularDialogButton, AssetDeliveryStatus.RequiresUserConfirmation);
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_27 = __this->___Display_8;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_28 = __this->___ShowCellularDialogButton_10;
		NullCheck(L_27);
		DownloadDisplay_BindButton_m14577FE0BA953CD08832AFB68EF1519E2844D1C2(L_27, L_28, 7, NULL);
		// Display.BindButton(RemoveButton, AssetDeliveryStatus.Available);
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_29 = __this->___Display_8;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_30 = __this->___RemoveButton_12;
		NullCheck(L_29);
		DownloadDisplay_BindButton_m14577FE0BA953CD08832AFB68EF1519E2844D1C2(L_29, L_30, 2, NULL);
		// Display.BindButton(RetrieveAssetBundleButton, AssetDeliveryStatus.Failed);
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_31 = __this->___Display_8;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_32 = __this->___RetrieveAssetBundleButton_7;
		NullCheck(L_31);
		DownloadDisplay_BindButton_m14577FE0BA953CD08832AFB68EF1519E2844D1C2(L_31, L_32, 5, NULL);
		// Display.BindButton(LoadSceneButton);
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_33 = __this->___Display_8;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_34 = __this->___LoadSceneButton_9;
		NullCheck(L_33);
		DownloadDisplay_BindButton_mF70687045EB933311DD7EECB041401D9B045D66C(L_33, L_34, NULL);
		// if (!string.IsNullOrEmpty(AssetBundlePath))
		String_t* L_35 = __this->___AssetBundlePath_5;
		bool L_36;
		L_36 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_35, NULL);
		V_0 = (bool)((((int32_t)L_36) == ((int32_t)0))? 1 : 0);
		bool L_37 = V_0;
		if (!L_37)
		{
			goto IL_0177;
		}
	}
	{
		// Display.BindButton(LoadAssetBundleButton, AssetDeliveryStatus.Available);
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_38 = __this->___Display_8;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_39 = __this->___LoadAssetBundleButton_13;
		NullCheck(L_38);
		DownloadDisplay_BindButton_m14577FE0BA953CD08832AFB68EF1519E2844D1C2(L_38, L_39, 2, NULL);
	}

IL_0177:
	{
		// if (!string.IsNullOrEmpty(TextAssetPath))
		String_t* L_40 = __this->___TextAssetPath_6;
		bool L_41;
		L_41 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_40, NULL);
		V_1 = (bool)((((int32_t)L_41) == ((int32_t)0))? 1 : 0);
		bool L_42 = V_1;
		if (!L_42)
		{
			goto IL_019e;
		}
	}
	{
		// Display.BindButton(DisplayTextAssetButton, AssetDeliveryStatus.Available);
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_43 = __this->___Display_8;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_44 = __this->___DisplayTextAssetButton_14;
		NullCheck(L_43);
		DownloadDisplay_BindButton_m14577FE0BA953CD08832AFB68EF1519E2844D1C2(L_43, L_44, 2, NULL);
	}

IL_019e:
	{
		// Display.BindColor(Display.SuccessColor, AssetDeliveryStatus.Available);
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_45 = __this->___Display_8;
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_46 = __this->___Display_8;
		NullCheck(L_46);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_47 = L_46->___SuccessColor_12;
		NullCheck(L_45);
		DownloadDisplay_BindColor_m3E906A37EFB9C9EC5CD03A638567FB5CBCAAAED3(L_45, L_47, 2, NULL);
		// Display.BindColor(Display.ErrorColor, AssetDeliveryStatus.Failed);
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_48 = __this->___Display_8;
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_49 = __this->___Display_8;
		NullCheck(L_49);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_50 = L_49->___ErrorColor_11;
		NullCheck(L_48);
		DownloadDisplay_BindColor_m3E906A37EFB9C9EC5CD03A638567FB5CBCAAAED3(L_48, L_50, 5, NULL);
		// Display.SetNameText(AssetPackName);
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_51 = __this->___Display_8;
		String_t* L_52 = __this->___AssetPackName_4;
		NullCheck(L_51);
		DownloadDisplay_SetNameText_m92B5C46851DD3F3AFAA5ADEEB8B9C622D79A917A(L_51, L_52, NULL);
		// SetInitialStatus();
		AssetPackDownloader_SetInitialStatus_m9084D31499C005595DE0AB447EA6F798D46A50D5(__this, NULL);
		// if (ShowSize)
		bool L_53 = __this->___ShowSize_17;
		V_2 = L_53;
		bool L_54 = V_2;
		if (!L_54)
		{
			goto IL_01fc;
		}
	}
	{
		// DisplayDownloadSize();
		AssetPackDownloader_DisplayDownloadSize_m1FE74FD9F112330987CB0B3C9F7F910472091C12(__this, NULL);
		goto IL_0206;
	}

IL_01fc:
	{
		// IsInitialized = true;
		AssetPackDownloader_set_IsInitialized_m1D0A1D05640AEBA36544E3CE81467E9D8300A9E5_inline(__this, (bool)1, NULL);
	}

IL_0206:
	{
		// }
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader::ButtonEventRetrieveAssetPack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetPackDownloader_ButtonEventRetrieveAssetPack_m87430A724546C10C92F04C53EAB0BB44848C1008 (AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* __this, const RuntimeMethod* method) 
{
	{
		// Display.HideButtons();
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_0 = __this->___Display_8;
		NullCheck(L_0);
		DownloadDisplay_HideButtons_mB4EBCA024901A383C81E610F4A467E2474FD9194(L_0, NULL);
		// StartCoroutine(DownloadAssetPackCo());
		RuntimeObject* L_1;
		L_1 = AssetPackDownloader_DownloadAssetPackCo_mCFD201704A2A9BD8FA9FCD23FA12F20C4B3FF8AB(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader::ButtonEventDisplayTextAsset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetPackDownloader_ButtonEventDisplayTextAsset_mE4E6ECD28C8868E621F90FD3E74C8004E8212E81 (AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetPackDownloader_ButtonEventDisplayTextAsset_mE4E6ECD28C8868E621F90FD3E74C8004E8212E81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE45356699AB73EB0F336BA759D4C4D1A5E6AD9);
		s_Il2CppMethodInitialized = true;
	}
	AssetLocation_t0793F2DE982E47275F0837DE78452359683C3C80* V_0 = NULL;
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	String_t* V_3 = NULL;
	bool V_4 = false;
	int32_t G_B3_0 = 0;
	{
		// if (_request == null || _requestInProgress)
		PlayAssetPackRequest_t02798684A55633E4F651042F75B09FD47459642F* L_0 = __this->____request_19;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		bool L_1 = __this->____requestInProgress_20;
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
	}

IL_0012:
	{
		V_4 = (bool)G_B3_0;
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return;
		goto IL_008d;
	}

IL_001b:
	{
		// var assetLocation = _request.GetAssetLocation(TextAssetPath);
		PlayAssetPackRequest_t02798684A55633E4F651042F75B09FD47459642F* L_3 = __this->____request_19;
		String_t* L_4 = __this->___TextAssetPath_6;
		NullCheck(L_3);
		AssetLocation_t0793F2DE982E47275F0837DE78452359683C3C80* L_5;
		L_5 = VirtualFuncInvoker1< AssetLocation_t0793F2DE982E47275F0837DE78452359683C3C80*, String_t* >::Invoke(11 /* Google.Play.AssetDelivery.AssetLocation Google.Play.AssetDelivery.PlayAssetPackRequest::GetAssetLocation(System.String) */, L_3, L_4);
		V_0 = L_5;
		// var assetFileStream = File.OpenRead(assetLocation.Path);
		AssetLocation_t0793F2DE982E47275F0837DE78452359683C3C80* L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = AssetLocation_get_Path_mE42C8AE55104A19118D83F461D5322452222A327_inline(L_6, NULL);
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_8;
		L_8 = File_OpenRead_m6181B052EB0E98D2E18FAC79E7744D766BA4244C(L_7, NULL);
		V_1 = L_8;
		// var buffer = new byte[assetLocation.Size];
		AssetLocation_t0793F2DE982E47275F0837DE78452359683C3C80* L_9 = V_0;
		NullCheck(L_9);
		uint64_t L_10;
		L_10 = AssetLocation_get_Size_mCCC1E1F6201029DE26395F8DAD625608964719D8_inline(L_9, NULL);
		if ((uint64_t)(L_10) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), AssetPackDownloader_ButtonEventDisplayTextAsset_mE4E6ECD28C8868E621F90FD3E74C8004E8212E81_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((intptr_t)L_10));
		V_2 = L_11;
		// assetFileStream.Seek((long) assetLocation.Offset, SeekOrigin.Begin);
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_12 = V_1;
		AssetLocation_t0793F2DE982E47275F0837DE78452359683C3C80* L_13 = V_0;
		NullCheck(L_13);
		uint64_t L_14;
		L_14 = AssetLocation_get_Offset_mA0E7D8C9A46AA09DE92EA0B326D690A26C0B00C6_inline(L_13, NULL);
		NullCheck(L_12);
		int64_t L_15;
		L_15 = VirtualFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(29 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_12, L_14, 0);
		// assetFileStream.Read(buffer, /* offset= */ 0, buffer.Length);
		FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_16 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_2;
		NullCheck(L_18);
		NullCheck(L_16);
		int32_t L_19;
		L_19 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(30 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_16, L_17, 0, ((int32_t)(((RuntimeArray*)L_18)->max_length)));
		// var fileContents = Encoding.UTF8.GetString(buffer, 0, buffer.Length);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_20;
		L_20 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = V_2;
		NullCheck(L_22);
		NullCheck(L_20);
		String_t* L_23;
		L_23 = VirtualFuncInvoker3< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(35 /* System.String System.Text.Encoding::GetString(System.Byte[],System.Int32,System.Int32) */, L_20, L_21, 0, ((int32_t)(((RuntimeArray*)L_22)->max_length)));
		V_3 = L_23;
		// DisplayTextBox.text = string.Format("Contents of file {0}: {1}", TextAssetPath, fileContents);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_24 = __this->___DisplayTextBox_15;
		String_t* L_25 = __this->___TextAssetPath_6;
		String_t* L_26 = V_3;
		String_t* L_27;
		L_27 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral9CE45356699AB73EB0F336BA759D4C4D1A5E6AD9, L_25, L_26, NULL);
		NullCheck(L_24);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_24, L_27);
	}

IL_008d:
	{
		// }
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader::ButtonEventLoadSceneFromAssetBundle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetPackDownloader_ButtonEventLoadSceneFromAssetBundle_m40E67668B3897CA059F278AAE3CDDFF40438D331 (AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// var sceneToLoad = _assetBundle.GetAllScenePaths()[0];
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_0 = __this->____assetBundle_18;
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1;
		L_1 = AssetBundle_GetAllScenePaths_m75D1CD4415067D64A8265A7929B6FF76B91B62FE(L_0, NULL);
		NullCheck(L_1);
		int32_t L_2 = 0;
		String_t* L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		// SceneManager.LoadScene(sceneToLoad);
		String_t* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_4, NULL);
		// }
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader::ButtonEventLoadAssetBundle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetPackDownloader_ButtonEventLoadAssetBundle_mD1B7F241B06EE0281C5CFEE36C6E2FF64908553C (AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (_request == null || _requestInProgress)
		PlayAssetPackRequest_t02798684A55633E4F651042F75B09FD47459642F* L_0 = __this->____request_19;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		bool L_1 = __this->____requestInProgress_20;
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
	}

IL_0012:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// return;
		goto IL_0026;
	}

IL_0019:
	{
		// StartCoroutine(LoadAssetBundleFromRequest());
		RuntimeObject* L_3;
		L_3 = AssetPackDownloader_LoadAssetBundleFromRequest_m84F3C28CDE1AD8CB33123851D18B89BBAE06B67E(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader::ButtonEventCancelDownload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetPackDownloader_ButtonEventCancelDownload_mC529D6594FFFB18F6EF9E86AF6019685C60FD88B (AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (_request == null)
		PlayAssetPackRequest_t02798684A55633E4F651042F75B09FD47459642F* L_0 = __this->____request_19;
		V_0 = (bool)((((RuntimeObject*)(PlayAssetPackRequest_t02798684A55633E4F651042F75B09FD47459642F*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		// return;
		goto IL_001d;
	}

IL_0011:
	{
		// _request.AttemptCancel();
		PlayAssetPackRequest_t02798684A55633E4F651042F75B09FD47459642F* L_2 = __this->____request_19;
		NullCheck(L_2);
		VirtualActionInvoker0::Invoke(13 /* System.Void Google.Play.AssetDelivery.PlayAssetPackRequest::AttemptCancel() */, L_2);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader::ButtonEventRemoveAssetPack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetPackDownloader_ButtonEventRemoveAssetPack_mFBFF86EFA2882E0D823A4A75B0A2573E002BB398 (AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t312EDE2B729344A135C171CDCF374E4ACE2E56F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetPackDownloader_U3CButtonEventRemoveAssetPackU3Eb__27_0_m6F9286044150C7661265D01775CFDFFB4D30FB6E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayAsyncOperation_2_tFA007165B6896547555D503DE0381BDC8A9D9D8C* V_0 = NULL;
	{
		// var removeOperation = PlayAssetDelivery.RemoveAssetPack(AssetPackName);
		String_t* L_0 = __this->___AssetPackName_4;
		PlayAsyncOperation_2_tFA007165B6896547555D503DE0381BDC8A9D9D8C* L_1;
		L_1 = PlayAssetDelivery_RemoveAssetPack_m6EA0BA3267B0682B9A7098A2B0A26F755945DA85(L_0, NULL);
		V_0 = L_1;
		// removeOperation.Completed += (operation) =>
		// {
		//     if (operation.Error != AssetDeliveryErrorCode.NoError)
		//     {
		//         Debug.LogErrorFormat("Error removing AssetBundle {0}: {1}", AssetPackName, operation.Error);
		//         return;
		//     }
		// 
		//     SetInitialStatus();
		//     UnloadAssetBundle();
		// };
		PlayAsyncOperation_2_tFA007165B6896547555D503DE0381BDC8A9D9D8C* L_2 = V_0;
		Action_1_t312EDE2B729344A135C171CDCF374E4ACE2E56F7* L_3 = (Action_1_t312EDE2B729344A135C171CDCF374E4ACE2E56F7*)il2cpp_codegen_object_new(Action_1_t312EDE2B729344A135C171CDCF374E4ACE2E56F7_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_m3E3698E4C19A12E48FEBDBBA67E1400FF9C7D5E6(L_3, __this, (intptr_t)((void*)AssetPackDownloader_U3CButtonEventRemoveAssetPackU3Eb__27_0_m6F9286044150C7661265D01775CFDFFB4D30FB6E_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< Action_1_t312EDE2B729344A135C171CDCF374E4ACE2E56F7* >::Invoke(10 /* System.Void Google.Play.Common.PlayAsyncOperation`2<Google.Play.Common.VoidResult,Google.Play.AssetDelivery.AssetDeliveryErrorCode>::add_Completed(System.Action`1<Google.Play.Common.PlayAsyncOperation`2<TResult,TError>>) */, L_2, L_3);
		// }
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader::ButtonEventShowConfirmationDialog()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetPackDownloader_ButtonEventShowConfirmationDialog_mEF26B4D8DB27FC9B4C1D1AFFCDFAF789D66A7C20 (AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* __this, const RuntimeMethod* method) 
{
	{
		// PlayAssetDelivery.ShowConfirmationDialog();
		PlayAsyncOperation_2_tC6A6D4EDC2216A5FC7BA21B23397DDA69F3FB7E1* L_0;
		L_0 = PlayAssetDelivery_ShowConfirmationDialog_mF897B045EE008A58CA4C67A3553B73B5ACBD3AD6(NULL);
		// }
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetPackDownloader_Update_mC13B85D20FDB541A35C31EFE1D806191AC033627 (AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_TrueForAll_mA6D99482126C1FAAA7DF4E453F628E4966C0CC92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m91584B5F83283AF0FFE92C3BE294297E595A7A70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t61215A903E08C55609FCEB0A952B6873EA699397_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CUpdateU3Eb__29_0_mF5B4FCFAFF9868862A1C26E1488F96303AA923DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tAB125A3BC4423BFAEEA5EEA4C174BD1A19B5EE75_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Predicate_1_t61215A903E08C55609FCEB0A952B6873EA699397* G_B3_0 = NULL;
	List_1_t9377DF2561252735B78BDD064180DA92104163AC* G_B3_1 = NULL;
	Predicate_1_t61215A903E08C55609FCEB0A952B6873EA699397* G_B2_0 = NULL;
	List_1_t9377DF2561252735B78BDD064180DA92104163AC* G_B2_1 = NULL;
	int32_t G_B5_0 = 0;
	{
		// var dependenciesLoaded = Dependencies.Count == 0 || Dependencies.TrueForAll(dep => dep.IsLoaded());
		List_1_t9377DF2561252735B78BDD064180DA92104163AC* L_0 = __this->___Dependencies_16;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m91584B5F83283AF0FFE92C3BE294297E595A7A70_inline(L_0, List_1_get_Count_m91584B5F83283AF0FFE92C3BE294297E595A7A70_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		List_1_t9377DF2561252735B78BDD064180DA92104163AC* L_2 = __this->___Dependencies_16;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tAB125A3BC4423BFAEEA5EEA4C174BD1A19B5EE75_il2cpp_TypeInfo_var);
		Predicate_1_t61215A903E08C55609FCEB0A952B6873EA699397* L_3 = ((U3CU3Ec_tAB125A3BC4423BFAEEA5EEA4C174BD1A19B5EE75_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAB125A3BC4423BFAEEA5EEA4C174BD1A19B5EE75_il2cpp_TypeInfo_var))->___U3CU3E9__29_0_1;
		Predicate_1_t61215A903E08C55609FCEB0A952B6873EA699397* L_4 = L_3;
		G_B2_0 = L_4;
		G_B2_1 = L_2;
		if (L_4)
		{
			G_B3_0 = L_4;
			G_B3_1 = L_2;
			goto IL_0033;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tAB125A3BC4423BFAEEA5EEA4C174BD1A19B5EE75_il2cpp_TypeInfo_var);
		U3CU3Ec_tAB125A3BC4423BFAEEA5EEA4C174BD1A19B5EE75* L_5 = ((U3CU3Ec_tAB125A3BC4423BFAEEA5EEA4C174BD1A19B5EE75_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAB125A3BC4423BFAEEA5EEA4C174BD1A19B5EE75_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Predicate_1_t61215A903E08C55609FCEB0A952B6873EA699397* L_6 = (Predicate_1_t61215A903E08C55609FCEB0A952B6873EA699397*)il2cpp_codegen_object_new(Predicate_1_t61215A903E08C55609FCEB0A952B6873EA699397_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Predicate_1__ctor_m0159716919EDB5078A99313E0ADAF2F43A1D0AAE(L_6, L_5, (intptr_t)((void*)U3CU3Ec_U3CUpdateU3Eb__29_0_mF5B4FCFAFF9868862A1C26E1488F96303AA923DD_RuntimeMethod_var), NULL);
		Predicate_1_t61215A903E08C55609FCEB0A952B6873EA699397* L_7 = L_6;
		((U3CU3Ec_tAB125A3BC4423BFAEEA5EEA4C174BD1A19B5EE75_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAB125A3BC4423BFAEEA5EEA4C174BD1A19B5EE75_il2cpp_TypeInfo_var))->___U3CU3E9__29_0_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tAB125A3BC4423BFAEEA5EEA4C174BD1A19B5EE75_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAB125A3BC4423BFAEEA5EEA4C174BD1A19B5EE75_il2cpp_TypeInfo_var))->___U3CU3E9__29_0_1), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_0033:
	{
		NullCheck(G_B3_1);
		bool L_8;
		L_8 = List_1_TrueForAll_mA6D99482126C1FAAA7DF4E453F628E4966C0CC92(G_B3_1, G_B3_0, List_1_TrueForAll_mA6D99482126C1FAAA7DF4E453F628E4966C0CC92_RuntimeMethod_var);
		G_B5_0 = ((int32_t)(L_8));
		goto IL_003b;
	}

IL_003a:
	{
		G_B5_0 = 1;
	}

IL_003b:
	{
		V_0 = (bool)G_B5_0;
		// LoadSceneButton.interactable = IsLoaded() && dependenciesLoaded;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_9 = __this->___LoadSceneButton_9;
		bool L_10;
		L_10 = AssetPackDownloader_IsLoaded_m3AF47DCA7AAB430A117DB84E7F056DEE2941FCCD(__this, NULL);
		bool L_11 = V_0;
		NullCheck(L_9);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_9, (bool)((int32_t)((int32_t)L_10&(int32_t)L_11)), NULL);
		// Display.SetScrolling(_requestInProgress);
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_12 = __this->___Display_8;
		bool L_13 = __this->____requestInProgress_20;
		NullCheck(L_12);
		DownloadDisplay_SetScrolling_mA0D8E34FEA91F024A1E28E96786F9FA44EA9A243(L_12, L_13, NULL);
		// }
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader::SetInitialStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetPackDownloader_SetInitialStatus_m9084D31499C005595DE0AB447EA6F798D46A50D5 (AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Display.SetInitialStatus(PlayAssetDelivery.IsDownloaded(AssetPackName));
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_0 = __this->___Display_8;
		String_t* L_1 = __this->___AssetPackName_4;
		bool L_2;
		L_2 = PlayAssetDelivery_IsDownloaded_m6F16EFC41F159FB201A1EAB1ED102001DAD36B3E(L_1, NULL);
		NullCheck(L_0);
		DownloadDisplay_SetInitialStatus_m36D2A91666EEA0E58E63C048622570AB6BAF4301(L_0, L_2, NULL);
		// Display.ShowButtons(RetrieveAssetBundleButton);
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_3 = __this->___Display_8;
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_4 = (ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF*)(ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF*)SZArrayNew(ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF_il2cpp_TypeInfo_var, (uint32_t)1);
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_5 = L_4;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_6 = __this->___RetrieveAssetBundleButton_7;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098*)L_6);
		NullCheck(L_3);
		DownloadDisplay_ShowButtons_m9AB68AEB7ABC1DF6A1FC7CA8A8021063C5F730BC(L_3, L_5, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader::DownloadAssetPackCo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AssetPackDownloader_DownloadAssetPackCo_mCFD201704A2A9BD8FA9FCD23FA12F20C4B3FF8AB (AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDownloadAssetPackCoU3Ed__31_t8A7973CA088D068780861BF9CF9213C663799916_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDownloadAssetPackCoU3Ed__31_t8A7973CA088D068780861BF9CF9213C663799916* L_0 = (U3CDownloadAssetPackCoU3Ed__31_t8A7973CA088D068780861BF9CF9213C663799916*)il2cpp_codegen_object_new(U3CDownloadAssetPackCoU3Ed__31_t8A7973CA088D068780861BF9CF9213C663799916_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CDownloadAssetPackCoU3Ed__31__ctor_mFB6CF51171823FF663A689D8459B7936A83F0B4C(L_0, 0, NULL);
		U3CDownloadAssetPackCoU3Ed__31_t8A7973CA088D068780861BF9CF9213C663799916* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader::LoadAssetBundleFromRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AssetPackDownloader_LoadAssetBundleFromRequest_m84F3C28CDE1AD8CB33123851D18B89BBAE06B67E (AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadAssetBundleFromRequestU3Ed__32_t9CF286BBFC5DF116185B7A8805E9341A7D84F5D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoadAssetBundleFromRequestU3Ed__32_t9CF286BBFC5DF116185B7A8805E9341A7D84F5D3* L_0 = (U3CLoadAssetBundleFromRequestU3Ed__32_t9CF286BBFC5DF116185B7A8805E9341A7D84F5D3*)il2cpp_codegen_object_new(U3CLoadAssetBundleFromRequestU3Ed__32_t9CF286BBFC5DF116185B7A8805E9341A7D84F5D3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CLoadAssetBundleFromRequestU3Ed__32__ctor_m6BCDD0CDBD8E7E626CD069746AFB873C718FA371(L_0, 0, NULL);
		U3CLoadAssetBundleFromRequestU3Ed__32_t9CF286BBFC5DF116185B7A8805E9341A7D84F5D3* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader::DisplayDownloadSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetPackDownloader_DisplayDownloadSize_m1FE74FD9F112330987CB0B3C9F7F910472091C12 (AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tAF2F0C6D9832C4CE7D39F5AC5F2AB9C889710BF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetPackDownloader_U3CDisplayDownloadSizeU3Eb__33_0_m59B0A0033EAE27CAA1329266AD2DAFB6799B7D45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayAsyncOperation_2_t8FC9C3969AFBE80A0CA5842EDA86B6F5771BE731* V_0 = NULL;
	{
		// var getSizeOperation = PlayAssetDelivery.GetDownloadSize(AssetPackName);
		String_t* L_0 = __this->___AssetPackName_4;
		PlayAsyncOperation_2_t8FC9C3969AFBE80A0CA5842EDA86B6F5771BE731* L_1;
		L_1 = PlayAssetDelivery_GetDownloadSize_mFE7382DA23C4EBEE7ADD44E3E5516435A4F413F2(L_0, NULL);
		V_0 = L_1;
		// getSizeOperation.Completed += (operation) =>
		// {
		//     if (operation.Error != AssetDeliveryErrorCode.NoError)
		//     {
		//         Debug.LogErrorFormat("Error getting download size for {0}: {1}",
		//             AssetPackName, operation.Error);
		//         return;
		//     }
		// 
		//     IsInitialized = true;
		//     var nameWithSize = string.Format("{0} : {1}", AssetPackName, Display.FormatSize(operation.GetResult()));
		//     Display.SetNameText(nameWithSize);
		// };
		PlayAsyncOperation_2_t8FC9C3969AFBE80A0CA5842EDA86B6F5771BE731* L_2 = V_0;
		Action_1_tAF2F0C6D9832C4CE7D39F5AC5F2AB9C889710BF5* L_3 = (Action_1_tAF2F0C6D9832C4CE7D39F5AC5F2AB9C889710BF5*)il2cpp_codegen_object_new(Action_1_tAF2F0C6D9832C4CE7D39F5AC5F2AB9C889710BF5_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_mFDBC4E02DA3CDFD8626503796E51A817A737E0BF(L_3, __this, (intptr_t)((void*)AssetPackDownloader_U3CDisplayDownloadSizeU3Eb__33_0_m59B0A0033EAE27CAA1329266AD2DAFB6799B7D45_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< Action_1_tAF2F0C6D9832C4CE7D39F5AC5F2AB9C889710BF5* >::Invoke(10 /* System.Void Google.Play.Common.PlayAsyncOperation`2<System.Int64,Google.Play.AssetDelivery.AssetDeliveryErrorCode>::add_Completed(System.Action`1<Google.Play.Common.PlayAsyncOperation`2<TResult,TError>>) */, L_2, L_3);
		// }
		return;
	}
}
// System.Boolean Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader::IsLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AssetPackDownloader_IsLoaded_m3AF47DCA7AAB430A117DB84E7F056DEE2941FCCD (AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return _assetBundle != null;
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_0 = __this->____assetBundle_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader::UnloadAssetBundle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetPackDownloader_UnloadAssetBundle_mACC7B3A81213FA10453522345F729FF3905939F3 (AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (_assetBundle != null)
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_0 = __this->____assetBundle_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// _assetBundle.Unload(false);
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_3 = __this->____assetBundle_18;
		NullCheck(L_3);
		AssetBundle_Unload_m0A189871E61A0D6735A2B41B3360A1F0677B636B(L_3, (bool)0, NULL);
		// _assetBundle = null;
		__this->____assetBundle_18 = (AssetBundle_tB38418819A49060CD738CB21541649340F082943*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____assetBundle_18), (void*)(AssetBundle_tB38418819A49060CD738CB21541649340F082943*)NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetPackDownloader_OnDestroy_mBDE8C1DB055A2A2B6D3677FC24A93050BD6EC64D (AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* __this, const RuntimeMethod* method) 
{
	{
		// UnloadAssetBundle();
		AssetPackDownloader_UnloadAssetBundle_mACC7B3A81213FA10453522345F729FF3905939F3(__this, NULL);
		// }
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetPackDownloader__ctor_mAE69C73D853EA2F03FAE330CED49F69506916FC3 (AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader::<ButtonEventRemoveAssetPack>b__27_0(Google.Play.Common.PlayAsyncOperation`2<Google.Play.Common.VoidResult,Google.Play.AssetDelivery.AssetDeliveryErrorCode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetPackDownloader_U3CButtonEventRemoveAssetPackU3Eb__27_0_m6F9286044150C7661265D01775CFDFFB4D30FB6E (AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* __this, PlayAsyncOperation_2_tFA007165B6896547555D503DE0381BDC8A9D9D8C* ___operation0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetDeliveryErrorCode_tBDD13D9D0AAB694759166DB6CFEA5786CE363ACA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayAsyncOperation_2_get_Error_mF492B1BADBE8A093FA78AC10418058819825C163_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB890D7A9694301632821DAC160E587810DC0901);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (operation.Error != AssetDeliveryErrorCode.NoError)
		PlayAsyncOperation_2_tFA007165B6896547555D503DE0381BDC8A9D9D8C* L_0 = ___operation0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = PlayAsyncOperation_2_get_Error_mF492B1BADBE8A093FA78AC10418058819825C163_inline(L_0, PlayAsyncOperation_2_get_Error_mF492B1BADBE8A093FA78AC10418058819825C163_RuntimeMethod_var);
		V_0 = (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		// Debug.LogErrorFormat("Error removing AssetBundle {0}: {1}", AssetPackName, operation.Error);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		String_t* L_5 = __this->___AssetPackName_4;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		PlayAsyncOperation_2_tFA007165B6896547555D503DE0381BDC8A9D9D8C* L_7 = ___operation0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = PlayAsyncOperation_2_get_Error_mF492B1BADBE8A093FA78AC10418058819825C163_inline(L_7, PlayAsyncOperation_2_get_Error_mF492B1BADBE8A093FA78AC10418058819825C163_RuntimeMethod_var);
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(AssetDeliveryErrorCode_tBDD13D9D0AAB694759166DB6CFEA5786CE363ACA_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_10);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C(_stringLiteralFB890D7A9694301632821DAC160E587810DC0901, L_6, NULL);
		// return;
		goto IL_0047;
	}

IL_0039:
	{
		// SetInitialStatus();
		AssetPackDownloader_SetInitialStatus_m9084D31499C005595DE0AB447EA6F798D46A50D5(__this, NULL);
		// UnloadAssetBundle();
		AssetPackDownloader_UnloadAssetBundle_mACC7B3A81213FA10453522345F729FF3905939F3(__this, NULL);
	}

IL_0047:
	{
		// };
		return;
	}
}
// System.Boolean Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader::<DownloadAssetPackCo>b__31_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AssetPackDownloader_U3CDownloadAssetPackCoU3Eb__31_0_mF1AF07AFAE34701BBC41D18A987BD3485E538F53 (AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* __this, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		// yield return new WaitUntil(() => _request.Status != AssetDeliveryStatus.WaitingForWifi && _request.Status != AssetDeliveryStatus.RequiresUserConfirmation);
		PlayAssetPackRequest_t02798684A55633E4F651042F75B09FD47459642F* L_0 = __this->____request_19;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = PlayAssetPackRequest_get_Status_mA68461C226CA4AE1D83E70B45DEBAB2486347B04_inline(L_0, NULL);
		if ((((int32_t)L_1) == ((int32_t)6)))
		{
			goto IL_0021;
		}
	}
	{
		PlayAssetPackRequest_t02798684A55633E4F651042F75B09FD47459642F* L_2 = __this->____request_19;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = PlayAssetPackRequest_get_Status_mA68461C226CA4AE1D83E70B45DEBAB2486347B04_inline(L_2, NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_3) == ((int32_t)7))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 0;
	}

IL_0022:
	{
		return (bool)G_B3_0;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader::<DisplayDownloadSize>b__33_0(Google.Play.Common.PlayAsyncOperation`2<System.Int64,Google.Play.AssetDelivery.AssetDeliveryErrorCode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetPackDownloader_U3CDisplayDownloadSizeU3Eb__33_0_m59B0A0033EAE27CAA1329266AD2DAFB6799B7D45 (AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* __this, PlayAsyncOperation_2_t8FC9C3969AFBE80A0CA5842EDA86B6F5771BE731* ___operation0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetDeliveryErrorCode_tBDD13D9D0AAB694759166DB6CFEA5786CE363ACA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayAsyncOperation_2_GetResult_mDF46357E89072C9BB4166B0F7C6B3403C45EE28F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayAsyncOperation_2_get_Error_m9DCD4460CB536E71272456C8384989EF42479663_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04A5510C8B0FE20C508364BA9BADF7373782F864);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D4C24A1ACA0CB6E213D41CDD46C0BC7420D226D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	bool V_1 = false;
	{
		// if (operation.Error != AssetDeliveryErrorCode.NoError)
		PlayAsyncOperation_2_t8FC9C3969AFBE80A0CA5842EDA86B6F5771BE731* L_0 = ___operation0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = PlayAsyncOperation_2_get_Error_m9DCD4460CB536E71272456C8384989EF42479663_inline(L_0, PlayAsyncOperation_2_get_Error_m9DCD4460CB536E71272456C8384989EF42479663_RuntimeMethod_var);
		V_1 = (bool)((!(((uint32_t)L_1) <= ((uint32_t)0)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		// Debug.LogErrorFormat("Error getting download size for {0}: {1}",
		//     AssetPackName, operation.Error);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		String_t* L_5 = __this->___AssetPackName_4;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		PlayAsyncOperation_2_t8FC9C3969AFBE80A0CA5842EDA86B6F5771BE731* L_7 = ___operation0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = PlayAsyncOperation_2_get_Error_m9DCD4460CB536E71272456C8384989EF42479663_inline(L_7, PlayAsyncOperation_2_get_Error_m9DCD4460CB536E71272456C8384989EF42479663_RuntimeMethod_var);
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(AssetDeliveryErrorCode_tBDD13D9D0AAB694759166DB6CFEA5786CE363ACA_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_10);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C(_stringLiteral04A5510C8B0FE20C508364BA9BADF7373782F864, L_6, NULL);
		// return;
		goto IL_0070;
	}

IL_0039:
	{
		// IsInitialized = true;
		AssetPackDownloader_set_IsInitialized_m1D0A1D05640AEBA36544E3CE81467E9D8300A9E5_inline(__this, (bool)1, NULL);
		// var nameWithSize = string.Format("{0} : {1}", AssetPackName, Display.FormatSize(operation.GetResult()));
		String_t* L_11 = __this->___AssetPackName_4;
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_12 = __this->___Display_8;
		PlayAsyncOperation_2_t8FC9C3969AFBE80A0CA5842EDA86B6F5771BE731* L_13 = ___operation0;
		NullCheck(L_13);
		int64_t L_14;
		L_14 = PlayAsyncOperation_2_GetResult_mDF46357E89072C9BB4166B0F7C6B3403C45EE28F(L_13, PlayAsyncOperation_2_GetResult_mDF46357E89072C9BB4166B0F7C6B3403C45EE28F_RuntimeMethod_var);
		NullCheck(L_12);
		String_t* L_15;
		L_15 = DownloadDisplay_FormatSize_mC9218983D5E766F0C6E66821D605DAD13AA0B0C4(L_12, L_14, NULL);
		String_t* L_16;
		L_16 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral2D4C24A1ACA0CB6E213D41CDD46C0BC7420D226D, L_11, L_15, NULL);
		V_0 = L_16;
		// Display.SetNameText(nameWithSize);
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_17 = __this->___Display_8;
		String_t* L_18 = V_0;
		NullCheck(L_17);
		DownloadDisplay_SetNameText_m92B5C46851DD3F3AFAA5ADEEB8B9C622D79A917A(L_17, L_18, NULL);
	}

IL_0070:
	{
		// };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m3F725C2237F038E6299F7F19AA136238BCA34082 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tAB125A3BC4423BFAEEA5EEA4C174BD1A19B5EE75_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tAB125A3BC4423BFAEEA5EEA4C174BD1A19B5EE75* L_0 = (U3CU3Ec_tAB125A3BC4423BFAEEA5EEA4C174BD1A19B5EE75*)il2cpp_codegen_object_new(U3CU3Ec_tAB125A3BC4423BFAEEA5EEA4C174BD1A19B5EE75_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m1268F5EE3A993DBBE52584B1FA996FB55D004A2A(L_0, NULL);
		((U3CU3Ec_tAB125A3BC4423BFAEEA5EEA4C174BD1A19B5EE75_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAB125A3BC4423BFAEEA5EEA4C174BD1A19B5EE75_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tAB125A3BC4423BFAEEA5EEA4C174BD1A19B5EE75_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAB125A3BC4423BFAEEA5EEA4C174BD1A19B5EE75_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m1268F5EE3A993DBBE52584B1FA996FB55D004A2A (U3CU3Ec_tAB125A3BC4423BFAEEA5EEA4C174BD1A19B5EE75* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader/<>c::<Update>b__29_0(Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CUpdateU3Eb__29_0_mF5B4FCFAFF9868862A1C26E1488F96303AA923DD (U3CU3Ec_tAB125A3BC4423BFAEEA5EEA4C174BD1A19B5EE75* __this, AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* ___dep0, const RuntimeMethod* method) 
{
	{
		// var dependenciesLoaded = Dependencies.Count == 0 || Dependencies.TrueForAll(dep => dep.IsLoaded());
		AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* L_0 = ___dep0;
		NullCheck(L_0);
		bool L_1;
		L_1 = AssetPackDownloader_IsLoaded_m3AF47DCA7AAB430A117DB84E7F056DEE2941FCCD(L_0, NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader/<DownloadAssetPackCo>d__31::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownloadAssetPackCoU3Ed__31__ctor_mFB6CF51171823FF663A689D8459B7936A83F0B4C (U3CDownloadAssetPackCoU3Ed__31_t8A7973CA088D068780861BF9CF9213C663799916* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader/<DownloadAssetPackCo>d__31::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownloadAssetPackCoU3Ed__31_System_IDisposable_Dispose_mA9D4678D80F76705CADF264230DCDE63BF7CD4E7 (U3CDownloadAssetPackCoU3Ed__31_t8A7973CA088D068780861BF9CF9213C663799916* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader/<DownloadAssetPackCo>d__31::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDownloadAssetPackCoU3Ed__31_MoveNext_mB3440222B46414E91818CDE1A5FEC228AF10C95A (U3CDownloadAssetPackCoU3Ed__31_t8A7973CA088D068780861BF9CF9213C663799916* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetDeliveryErrorCode_tBDD13D9D0AAB694759166DB6CFEA5786CE363ACA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetPackDownloader_U3CDownloadAssetPackCoU3Eb__31_0_mF1AF07AFAE34701BBC41D18A987BD3485E538F53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayAsyncOperation_2_GetResult_m58C0DE3F1CB38C9DDA3C4A664473CA59FD99A5C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayAsyncOperation_2_get_Error_m106B9FC9CAD7E71A9975352E4A989F5A04579881_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE78B6886D414C717E72A4B368A9761C6E0AF676);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B11_0 = 0;
	int32_t G_B16_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001f;
			}
			case 1:
			{
				goto IL_0021;
			}
			case 2:
			{
				goto IL_0026;
			}
			case 3:
			{
				goto IL_002b;
			}
		}
	}
	{
		goto IL_0030;
	}

IL_001f:
	{
		goto IL_0032;
	}

IL_0021:
	{
		goto IL_00b8;
	}

IL_0026:
	{
		goto IL_013c;
	}

IL_002b:
	{
		goto IL_01ad;
	}

IL_0030:
	{
		return (bool)0;
	}

IL_0032:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// _request = PlayAssetDelivery.RetrieveAssetPackAsync(AssetPackName);
		AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* L_2 = __this->___U3CU3E4__this_2;
		AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* L_3 = __this->___U3CU3E4__this_2;
		NullCheck(L_3);
		String_t* L_4 = L_3->___AssetPackName_4;
		PlayAssetPackRequest_t02798684A55633E4F651042F75B09FD47459642F* L_5;
		L_5 = PlayAssetDelivery_RetrieveAssetPackAsync_m60A03D02CEFD08C2A8CC16C21C210B4FA2649A5D(L_4, NULL);
		NullCheck(L_2);
		L_2->____request_19 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->____request_19), (void*)L_5);
		// _requestInProgress = true;
		AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* L_6 = __this->___U3CU3E4__this_2;
		NullCheck(L_6);
		L_6->____requestInProgress_20 = (bool)1;
		goto IL_01b5;
	}

IL_0066:
	{
		// if (_request.Status == AssetDeliveryStatus.WaitingForWifi || _request.Status == AssetDeliveryStatus.RequiresUserConfirmation)
		AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* L_7 = __this->___U3CU3E4__this_2;
		NullCheck(L_7);
		PlayAssetPackRequest_t02798684A55633E4F651042F75B09FD47459642F* L_8 = L_7->____request_19;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = PlayAssetPackRequest_get_Status_mA68461C226CA4AE1D83E70B45DEBAB2486347B04_inline(L_8, NULL);
		if ((((int32_t)L_9) == ((int32_t)6)))
		{
			goto IL_008f;
		}
	}
	{
		AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* L_10 = __this->___U3CU3E4__this_2;
		NullCheck(L_10);
		PlayAssetPackRequest_t02798684A55633E4F651042F75B09FD47459642F* L_11 = L_10->____request_19;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = PlayAssetPackRequest_get_Status_mA68461C226CA4AE1D83E70B45DEBAB2486347B04_inline(L_11, NULL);
		G_B11_0 = ((((int32_t)L_12) == ((int32_t)7))? 1 : 0);
		goto IL_0090;
	}

IL_008f:
	{
		G_B11_0 = 1;
	}

IL_0090:
	{
		V_1 = (bool)G_B11_0;
		bool L_13 = V_1;
		if (!L_13)
		{
			goto IL_014b;
		}
	}
	{
		// var asyncOperation = PlayAssetDelivery.ShowConfirmationDialog();
		PlayAsyncOperation_2_tC6A6D4EDC2216A5FC7BA21B23397DDA69F3FB7E1* L_14;
		L_14 = PlayAssetDelivery_ShowConfirmationDialog_mF897B045EE008A58CA4C67A3553B73B5ACBD3AD6(NULL);
		__this->___U3CasyncOperationU3E5__1_3 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CasyncOperationU3E5__1_3), (void*)L_14);
		// yield return asyncOperation;
		PlayAsyncOperation_2_tC6A6D4EDC2216A5FC7BA21B23397DDA69F3FB7E1* L_15 = __this->___U3CasyncOperationU3E5__1_3;
		__this->___U3CU3E2__current_1 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_15);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00b8:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (asyncOperation.Error != AssetDeliveryErrorCode.NoError
		//     || asyncOperation.GetResult() != ConfirmationDialogResult.Accepted)
		PlayAsyncOperation_2_tC6A6D4EDC2216A5FC7BA21B23397DDA69F3FB7E1* L_16 = __this->___U3CasyncOperationU3E5__1_3;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = PlayAsyncOperation_2_get_Error_m106B9FC9CAD7E71A9975352E4A989F5A04579881_inline(L_16, PlayAsyncOperation_2_get_Error_m106B9FC9CAD7E71A9975352E4A989F5A04579881_RuntimeMethod_var);
		if (L_17)
		{
			goto IL_00df;
		}
	}
	{
		PlayAsyncOperation_2_tC6A6D4EDC2216A5FC7BA21B23397DDA69F3FB7E1* L_18 = __this->___U3CasyncOperationU3E5__1_3;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = PlayAsyncOperation_2_GetResult_m58C0DE3F1CB38C9DDA3C4A664473CA59FD99A5C3(L_18, PlayAsyncOperation_2_GetResult_m58C0DE3F1CB38C9DDA3C4A664473CA59FD99A5C3_RuntimeMethod_var);
		G_B16_0 = ((((int32_t)((((int32_t)L_19) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00e0;
	}

IL_00df:
	{
		G_B16_0 = 1;
	}

IL_00e0:
	{
		V_2 = (bool)G_B16_0;
		bool L_20 = V_2;
		if (!L_20)
		{
			goto IL_0117;
		}
	}
	{
		// Display.SetStatus(_request.Status, _request.Error);
		AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* L_21 = __this->___U3CU3E4__this_2;
		NullCheck(L_21);
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_22 = L_21->___Display_8;
		AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* L_23 = __this->___U3CU3E4__this_2;
		NullCheck(L_23);
		PlayAssetPackRequest_t02798684A55633E4F651042F75B09FD47459642F* L_24 = L_23->____request_19;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = PlayAssetPackRequest_get_Status_mA68461C226CA4AE1D83E70B45DEBAB2486347B04_inline(L_24, NULL);
		AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* L_26 = __this->___U3CU3E4__this_2;
		NullCheck(L_26);
		PlayAssetPackRequest_t02798684A55633E4F651042F75B09FD47459642F* L_27 = L_26->____request_19;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = PlayAssetPackRequest_get_Error_m12DDFDA5DFB4C43B70DEA4CDFA3A48C5EB8A86C6_inline(L_27, NULL);
		NullCheck(L_22);
		DownloadDisplay_SetStatus_m81D1DAB50049DA5C61FC806164BB9588FDCA8B4C(L_22, L_25, L_28, NULL);
	}

IL_0117:
	{
		// yield return new WaitUntil(() => _request.Status != AssetDeliveryStatus.WaitingForWifi && _request.Status != AssetDeliveryStatus.RequiresUserConfirmation);
		AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* L_29 = __this->___U3CU3E4__this_2;
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_30 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_30, L_29, (intptr_t)((void*)AssetPackDownloader_U3CDownloadAssetPackCoU3Eb__31_0_mF1AF07AFAE34701BBC41D18A987BD3485E538F53_RuntimeMethod_var), NULL);
		WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD* L_31 = (WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD*)il2cpp_codegen_object_new(WaitUntil_tA1CD487C5811E7C1F8C4ADA85DF5F4EFDC1D41BD_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		WaitUntil__ctor_m2C925CF39695C35F4CB1AC997531F203AE1434DF(L_31, L_30, NULL);
		__this->___U3CU3E2__current_1 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_31);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_013c:
	{
		__this->___U3CU3E1__state_0 = (-1);
		__this->___U3CasyncOperationU3E5__1_3 = (PlayAsyncOperation_2_tC6A6D4EDC2216A5FC7BA21B23397DDA69F3FB7E1*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CasyncOperationU3E5__1_3), (void*)(PlayAsyncOperation_2_tC6A6D4EDC2216A5FC7BA21B23397DDA69F3FB7E1*)NULL);
	}

IL_014b:
	{
		// Display.SetProgress(_request.DownloadProgress);
		AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* L_32 = __this->___U3CU3E4__this_2;
		NullCheck(L_32);
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_33 = L_32->___Display_8;
		AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* L_34 = __this->___U3CU3E4__this_2;
		NullCheck(L_34);
		PlayAssetPackRequest_t02798684A55633E4F651042F75B09FD47459642F* L_35 = L_34->____request_19;
		NullCheck(L_35);
		float L_36;
		L_36 = PlayAssetPackRequest_get_DownloadProgress_mA490FFA978283C5FE0AD726E4D068D6047B161D7_inline(L_35, NULL);
		NullCheck(L_33);
		DownloadDisplay_SetProgress_mFA3B98D656B414E7BE347D41052E5F1D28A5B36A(L_33, L_36, NULL);
		// Display.SetStatus(_request.Status, _request.Error);
		AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* L_37 = __this->___U3CU3E4__this_2;
		NullCheck(L_37);
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_38 = L_37->___Display_8;
		AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* L_39 = __this->___U3CU3E4__this_2;
		NullCheck(L_39);
		PlayAssetPackRequest_t02798684A55633E4F651042F75B09FD47459642F* L_40 = L_39->____request_19;
		NullCheck(L_40);
		int32_t L_41;
		L_41 = PlayAssetPackRequest_get_Status_mA68461C226CA4AE1D83E70B45DEBAB2486347B04_inline(L_40, NULL);
		AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* L_42 = __this->___U3CU3E4__this_2;
		NullCheck(L_42);
		PlayAssetPackRequest_t02798684A55633E4F651042F75B09FD47459642F* L_43 = L_42->____request_19;
		NullCheck(L_43);
		int32_t L_44;
		L_44 = PlayAssetPackRequest_get_Error_m12DDFDA5DFB4C43B70DEA4CDFA3A48C5EB8A86C6_inline(L_43, NULL);
		NullCheck(L_38);
		DownloadDisplay_SetStatus_m81D1DAB50049DA5C61FC806164BB9588FDCA8B4C(L_38, L_41, L_44, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_01ad:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_01b5:
	{
		// while (!_request.IsDone)
		AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* L_45 = __this->___U3CU3E4__this_2;
		NullCheck(L_45);
		PlayAssetPackRequest_t02798684A55633E4F651042F75B09FD47459642F* L_46 = L_45->____request_19;
		NullCheck(L_46);
		bool L_47;
		L_47 = PlayAssetPackRequest_get_IsDone_m4281D1A24674FF595FC582EA50C5BDC6F90B7094_inline(L_46, NULL);
		V_3 = (bool)((((int32_t)L_47) == ((int32_t)0))? 1 : 0);
		bool L_48 = V_3;
		if (L_48)
		{
			goto IL_0066;
		}
	}
	{
		// Display.SetProgress(_request.DownloadProgress);
		AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* L_49 = __this->___U3CU3E4__this_2;
		NullCheck(L_49);
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_50 = L_49->___Display_8;
		AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* L_51 = __this->___U3CU3E4__this_2;
		NullCheck(L_51);
		PlayAssetPackRequest_t02798684A55633E4F651042F75B09FD47459642F* L_52 = L_51->____request_19;
		NullCheck(L_52);
		float L_53;
		L_53 = PlayAssetPackRequest_get_DownloadProgress_mA490FFA978283C5FE0AD726E4D068D6047B161D7_inline(L_52, NULL);
		NullCheck(L_50);
		DownloadDisplay_SetProgress_mFA3B98D656B414E7BE347D41052E5F1D28A5B36A(L_50, L_53, NULL);
		// Display.SetStatus(_request.Status, _request.Error);
		AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* L_54 = __this->___U3CU3E4__this_2;
		NullCheck(L_54);
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_55 = L_54->___Display_8;
		AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* L_56 = __this->___U3CU3E4__this_2;
		NullCheck(L_56);
		PlayAssetPackRequest_t02798684A55633E4F651042F75B09FD47459642F* L_57 = L_56->____request_19;
		NullCheck(L_57);
		int32_t L_58;
		L_58 = PlayAssetPackRequest_get_Status_mA68461C226CA4AE1D83E70B45DEBAB2486347B04_inline(L_57, NULL);
		AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* L_59 = __this->___U3CU3E4__this_2;
		NullCheck(L_59);
		PlayAssetPackRequest_t02798684A55633E4F651042F75B09FD47459642F* L_60 = L_59->____request_19;
		NullCheck(L_60);
		int32_t L_61;
		L_61 = PlayAssetPackRequest_get_Error_m12DDFDA5DFB4C43B70DEA4CDFA3A48C5EB8A86C6_inline(L_60, NULL);
		NullCheck(L_55);
		DownloadDisplay_SetStatus_m81D1DAB50049DA5C61FC806164BB9588FDCA8B4C(L_55, L_58, L_61, NULL);
		// if (_request.Error != AssetDeliveryErrorCode.NoError)
		AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* L_62 = __this->___U3CU3E4__this_2;
		NullCheck(L_62);
		PlayAssetPackRequest_t02798684A55633E4F651042F75B09FD47459642F* L_63 = L_62->____request_19;
		NullCheck(L_63);
		int32_t L_64;
		L_64 = PlayAssetPackRequest_get_Error_m12DDFDA5DFB4C43B70DEA4CDFA3A48C5EB8A86C6_inline(L_63, NULL);
		V_4 = (bool)((!(((uint32_t)L_64) <= ((uint32_t)0)))? 1 : 0);
		bool L_65 = V_4;
		if (!L_65)
		{
			goto IL_0271;
		}
	}
	{
		// Debug.LogErrorFormat("Couldn't load asset pack: {0}", _request.Error);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_66 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_67 = L_66;
		AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* L_68 = __this->___U3CU3E4__this_2;
		NullCheck(L_68);
		PlayAssetPackRequest_t02798684A55633E4F651042F75B09FD47459642F* L_69 = L_68->____request_19;
		NullCheck(L_69);
		int32_t L_70;
		L_70 = PlayAssetPackRequest_get_Error_m12DDFDA5DFB4C43B70DEA4CDFA3A48C5EB8A86C6_inline(L_69, NULL);
		int32_t L_71 = L_70;
		RuntimeObject* L_72 = Box(AssetDeliveryErrorCode_tBDD13D9D0AAB694759166DB6CFEA5786CE363ACA_il2cpp_TypeInfo_var, &L_71);
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, L_72);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_72);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C(_stringLiteralAE78B6886D414C717E72A4B368A9761C6E0AF676, L_67, NULL);
		// _request = null;
		AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* L_73 = __this->___U3CU3E4__this_2;
		NullCheck(L_73);
		L_73->____request_19 = (PlayAssetPackRequest_t02798684A55633E4F651042F75B09FD47459642F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_73->____request_19), (void*)(PlayAssetPackRequest_t02798684A55633E4F651042F75B09FD47459642F*)NULL);
	}

IL_0271:
	{
		// _requestInProgress = false;
		AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* L_74 = __this->___U3CU3E4__this_2;
		NullCheck(L_74);
		L_74->____requestInProgress_20 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader/<DownloadAssetPackCo>d__31::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDownloadAssetPackCoU3Ed__31_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m7ED05E4B2980F0FF9331882E238CB6A793AE141B (U3CDownloadAssetPackCoU3Ed__31_t8A7973CA088D068780861BF9CF9213C663799916* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader/<DownloadAssetPackCo>d__31::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownloadAssetPackCoU3Ed__31_System_Collections_IEnumerator_Reset_m7F72E2A1BCF6FE20741066B7C5FF4D4B919439D0 (U3CDownloadAssetPackCoU3Ed__31_t8A7973CA088D068780861BF9CF9213C663799916* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDownloadAssetPackCoU3Ed__31_System_Collections_IEnumerator_Reset_m7F72E2A1BCF6FE20741066B7C5FF4D4B919439D0_RuntimeMethod_var)));
	}
}
// System.Object Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader/<DownloadAssetPackCo>d__31::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDownloadAssetPackCoU3Ed__31_System_Collections_IEnumerator_get_Current_mCC23EFDC8C704FFBF63706F1229C74DCE55C5E15 (U3CDownloadAssetPackCoU3Ed__31_t8A7973CA088D068780861BF9CF9213C663799916* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader/<LoadAssetBundleFromRequest>d__32::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAssetBundleFromRequestU3Ed__32__ctor_m6BCDD0CDBD8E7E626CD069746AFB873C718FA371 (U3CLoadAssetBundleFromRequestU3Ed__32_t9CF286BBFC5DF116185B7A8805E9341A7D84F5D3* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader/<LoadAssetBundleFromRequest>d__32::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAssetBundleFromRequestU3Ed__32_System_IDisposable_Dispose_m33F128D89D83214B1F66B76150469AE7BDA3BCA2 (U3CLoadAssetBundleFromRequestU3Ed__32_t9CF286BBFC5DF116185B7A8805E9341A7D84F5D3* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader/<LoadAssetBundleFromRequest>d__32::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadAssetBundleFromRequestU3Ed__32_MoveNext_mEB20152BC66648D9CDCE3823C3955841D7E3F007 (U3CLoadAssetBundleFromRequestU3Ed__32_t9CF286BBFC5DF116185B7A8805E9341A7D84F5D3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral968B72A9CDEA40D776C10E89F7021DD71D5B2FDC);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_0056;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// var assetBundleCreateRequest = _request.LoadAssetBundleAsync(AssetBundlePath);
		AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* L_3 = __this->___U3CU3E4__this_2;
		NullCheck(L_3);
		PlayAssetPackRequest_t02798684A55633E4F651042F75B09FD47459642F* L_4 = L_3->____request_19;
		AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* L_5 = __this->___U3CU3E4__this_2;
		NullCheck(L_5);
		String_t* L_6 = L_5->___AssetBundlePath_5;
		NullCheck(L_4);
		AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6* L_7;
		L_7 = VirtualFuncInvoker1< AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6*, String_t* >::Invoke(12 /* UnityEngine.AssetBundleCreateRequest Google.Play.AssetDelivery.PlayAssetPackRequest::LoadAssetBundleAsync(System.String) */, L_4, L_6);
		__this->___U3CassetBundleCreateRequestU3E5__1_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CassetBundleCreateRequestU3E5__1_3), (void*)L_7);
		// yield return assetBundleCreateRequest;
		AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6* L_8 = __this->___U3CassetBundleCreateRequestU3E5__1_3;
		__this->___U3CU3E2__current_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_8);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0056:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (assetBundleCreateRequest.assetBundle == null)
		AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6* L_9 = __this->___U3CassetBundleCreateRequestU3E5__1_3;
		NullCheck(L_9);
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_10;
		L_10 = AssetBundleCreateRequest_get_assetBundle_m613FDE589FB86BE1E6920D38ED0706F785D9DB21(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_11;
		bool L_12 = V_1;
		if (!L_12)
		{
			goto IL_0080;
		}
	}
	{
		// Debug.LogError("Failed to load AssetBundle from request.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral968B72A9CDEA40D776C10E89F7021DD71D5B2FDC, NULL);
		// yield break;
		return (bool)0;
	}

IL_0080:
	{
		// _assetBundle = assetBundleCreateRequest.assetBundle;
		AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* L_13 = __this->___U3CU3E4__this_2;
		AssetBundleCreateRequest_t73B8714B9459A01540E091C3770A408E67188CF6* L_14 = __this->___U3CassetBundleCreateRequestU3E5__1_3;
		NullCheck(L_14);
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_15;
		L_15 = AssetBundleCreateRequest_get_assetBundle_m613FDE589FB86BE1E6920D38ED0706F785D9DB21(L_14, NULL);
		NullCheck(L_13);
		L_13->____assetBundle_18 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->____assetBundle_18), (void*)L_15);
		// Display.ShowButtons(LoadSceneButton, RemoveButton);
		AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* L_16 = __this->___U3CU3E4__this_2;
		NullCheck(L_16);
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_17 = L_16->___Display_8;
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_18 = (ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF*)(ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF*)SZArrayNew(ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF_il2cpp_TypeInfo_var, (uint32_t)2);
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_19 = L_18;
		AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* L_20 = __this->___U3CU3E4__this_2;
		NullCheck(L_20);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_21 = L_20->___LoadSceneButton_9;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_21);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098*)L_21);
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_22 = L_19;
		AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* L_23 = __this->___U3CU3E4__this_2;
		NullCheck(L_23);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_24 = L_23->___RemoveButton_12;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_24);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(1), (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098*)L_24);
		NullCheck(L_17);
		DownloadDisplay_ShowButtons_m9AB68AEB7ABC1DF6A1FC7CA8A8021063C5F730BC(L_17, L_22, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader/<LoadAssetBundleFromRequest>d__32::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadAssetBundleFromRequestU3Ed__32_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m295B074F93CE87021F5DF5B451160857AEF766D5 (U3CLoadAssetBundleFromRequestU3Ed__32_t9CF286BBFC5DF116185B7A8805E9341A7D84F5D3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader/<LoadAssetBundleFromRequest>d__32::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadAssetBundleFromRequestU3Ed__32_System_Collections_IEnumerator_Reset_m3C535E3EA41BA15A6253E62DAA0FA8C69ABFD6E1 (U3CLoadAssetBundleFromRequestU3Ed__32_t9CF286BBFC5DF116185B7A8805E9341A7D84F5D3* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadAssetBundleFromRequestU3Ed__32_System_Collections_IEnumerator_Reset_m3C535E3EA41BA15A6253E62DAA0FA8C69ABFD6E1_RuntimeMethod_var)));
	}
}
// System.Object Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader/<LoadAssetBundleFromRequest>d__32::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadAssetBundleFromRequestU3Ed__32_System_Collections_IEnumerator_get_Current_mB11C9B9AAFCC003462F1E511F42C7948BD3B84D8 (U3CLoadAssetBundleFromRequestU3Ed__32_t9CF286BBFC5DF116185B7A8805E9341A7D84F5D3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.IEnumerator Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DemoController_Start_m831B11FA8A920510E4694F5CFADCAFBE3943561A (DemoController_t10B60839C2F080D6587383BA0242AC07EC1965B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartU3Ed__14_t57AC3B2B24DE8B132D2F26ECD006DB1BB601B640_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartU3Ed__14_t57AC3B2B24DE8B132D2F26ECD006DB1BB601B640* L_0 = (U3CStartU3Ed__14_t57AC3B2B24DE8B132D2F26ECD006DB1BB601B640*)il2cpp_codegen_object_new(U3CStartU3Ed__14_t57AC3B2B24DE8B132D2F26ECD006DB1BB601B640_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartU3Ed__14__ctor_m7E5FC4EFAF48917F773A0170FE7D1A9F803B543C(L_0, 0, NULL);
		U3CStartU3Ed__14_t57AC3B2B24DE8B132D2F26ECD006DB1BB601B640* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoController_Update_mEEECF5AB6D5499638AE0B58E21CBD75FF9CDD7D8 (DemoController_t10B60839C2F080D6587383BA0242AC07EC1965B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mC579893BE0ECE7E8AD35CDB1DB42A40737BF0BEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m617C29693EB2801276678FF3113122991240CDF0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m69A91D35B30F7C0C720585BD3C998DA06D1D4C85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB46607AA8EBED12F5C4392F03DA7A93FB5EE5172_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF5E61A4CFC054BA9B576C411E1E6C93BC88933CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m1EB88CCB3276E602D3FE9BB36D2F521ABDD86E20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6CEFBA65D7DDB14606C98CE1C6E298923E00FDA3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mBC9FD00759B32D10E02989FE9985F0C6E87446DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mC2CDCC4FEF41C1C391CE4263437B2676B480062B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mEB5CAC74E588EFB6530371C6DD9DA9E6E8F9F61D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_tE1D422C647B8372E66DC1E06CC5B2D8D95E01F34 V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_tA5109975B9D659C4CDF0BA586254EC261816BA3D V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	Enumerator_t4192013435A770FA2346D36DBBBFA7EFF452CEE5 V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	bool V_6 = false;
	{
		// if (!Input.anyKeyDown)
		bool L_0;
		L_0 = Input_get_anyKeyDown_m9B8D98B5574A2AA63CEED98FBF0E2A1D946BCA71(NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return;
		goto IL_00b2;
	}

IL_0013:
	{
		// foreach (var keyMapping in _navigationKeyMappings)
		Dictionary_2_t961634992B8C7A1CD2414B0736961441B05B610F* L_2 = __this->____navigationKeyMappings_11;
		NullCheck(L_2);
		Enumerator_tE1D422C647B8372E66DC1E06CC5B2D8D95E01F34 L_3;
		L_3 = Dictionary_2_GetEnumerator_mC579893BE0ECE7E8AD35CDB1DB42A40737BF0BEC(L_2, Dictionary_2_GetEnumerator_mC579893BE0ECE7E8AD35CDB1DB42A40737BF0BEC_RuntimeMethod_var);
		V_1 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0056:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m69A91D35B30F7C0C720585BD3C998DA06D1D4C85((&V_1), Enumerator_Dispose_m69A91D35B30F7C0C720585BD3C998DA06D1D4C85_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004b_1;
			}

IL_0022_1:
			{
				// foreach (var keyMapping in _navigationKeyMappings)
				KeyValuePair_2_tA5109975B9D659C4CDF0BA586254EC261816BA3D L_4;
				L_4 = Enumerator_get_Current_m6CEFBA65D7DDB14606C98CE1C6E298923E00FDA3_inline((&V_1), Enumerator_get_Current_m6CEFBA65D7DDB14606C98CE1C6E298923E00FDA3_RuntimeMethod_var);
				V_2 = L_4;
				// if (Input.GetKeyDown(keyMapping.Key))
				int32_t L_5;
				L_5 = KeyValuePair_2_get_Key_mBC9FD00759B32D10E02989FE9985F0C6E87446DC_inline((&V_2), KeyValuePair_2_get_Key_mBC9FD00759B32D10E02989FE9985F0C6E87446DC_RuntimeMethod_var);
				bool L_6;
				L_6 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(L_5, NULL);
				V_3 = L_6;
				bool L_7 = V_3;
				if (!L_7)
				{
					goto IL_004a_1;
				}
			}
			{
				// keyMapping.Value.Invoke();
				Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
				L_8 = KeyValuePair_2_get_Value_mC2CDCC4FEF41C1C391CE4263437B2676B480062B_inline((&V_2), KeyValuePair_2_get_Value_mC2CDCC4FEF41C1C391CE4263437B2676B480062B_RuntimeMethod_var);
				NullCheck(L_8);
				Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_8, NULL);
			}

IL_004a_1:
			{
			}

IL_004b_1:
			{
				// foreach (var keyMapping in _navigationKeyMappings)
				bool L_9;
				L_9 = Enumerator_MoveNext_mF5E61A4CFC054BA9B576C411E1E6C93BC88933CA((&V_1), Enumerator_MoveNext_mF5E61A4CFC054BA9B576C411E1E6C93BC88933CA_RuntimeMethod_var);
				if (L_9)
				{
					goto IL_0022_1;
				}
			}
			{
				goto IL_0065;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0065:
	{
		// foreach (var keyCode in _keyCodesMappedToCommands)
		List_1_tB7F9EA9DD46F974E3E396408B3EF9E0ED62F6D32* L_10 = __this->____keyCodesMappedToCommands_12;
		NullCheck(L_10);
		Enumerator_t4192013435A770FA2346D36DBBBFA7EFF452CEE5 L_11;
		L_11 = List_1_GetEnumerator_mEB5CAC74E588EFB6530371C6DD9DA9E6E8F9F61D(L_10, List_1_GetEnumerator_mEB5CAC74E588EFB6530371C6DD9DA9E6E8F9F61D_RuntimeMethod_var);
		V_4 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a3:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m617C29693EB2801276678FF3113122991240CDF0((&V_4), Enumerator_Dispose_m617C29693EB2801276678FF3113122991240CDF0_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0098_1;
			}

IL_0075_1:
			{
				// foreach (var keyCode in _keyCodesMappedToCommands)
				int32_t L_12;
				L_12 = Enumerator_get_Current_m1EB88CCB3276E602D3FE9BB36D2F521ABDD86E20_inline((&V_4), Enumerator_get_Current_m1EB88CCB3276E602D3FE9BB36D2F521ABDD86E20_RuntimeMethod_var);
				V_5 = L_12;
				// if (Input.GetKeyDown(keyCode))
				int32_t L_13 = V_5;
				bool L_14;
				L_14 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(L_13, NULL);
				V_6 = L_14;
				bool L_15 = V_6;
				if (!L_15)
				{
					goto IL_0097_1;
				}
			}
			{
				// ProcessDownloaderCommand(keyCode);
				int32_t L_16 = V_5;
				DemoController_ProcessDownloaderCommand_m53AADB55AB690A1FAE5C1DDD5EF0E5EDA843EB3A(__this, L_16, NULL);
			}

IL_0097_1:
			{
			}

IL_0098_1:
			{
				// foreach (var keyCode in _keyCodesMappedToCommands)
				bool L_17;
				L_17 = Enumerator_MoveNext_mB46607AA8EBED12F5C4392F03DA7A93FB5EE5172((&V_4), Enumerator_MoveNext_mB46607AA8EBED12F5C4392F03DA7A93FB5EE5172_RuntimeMethod_var);
				if (L_17)
				{
					goto IL_0075_1;
				}
			}
			{
				goto IL_00b2;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b2:
	{
		// }
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController::ProcessDownloaderCommand(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoController_ProcessDownloaderCommand_m53AADB55AB690A1FAE5C1DDD5EF0E5EDA843EB3A (DemoController_t10B60839C2F080D6587383BA0242AC07EC1965B2* __this, int32_t ___keyCode0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisIDownloaderInputMapper_t523C8C42D42142DC2400EA308C9E3DCA1829A398_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m601C39EC0BB01397240F5E5489E57214E800F391_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m8E2ECFF174A4CDB8D3BB37CF8C4B24030CF4C2F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tB1B84D12BEBA1BCB5F9BD7DFEB37DA4AA0E70715_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tE7B48BCEE2F78C885FD6E61A15E473ACC2A36017_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tAE120E56656B9388F74088D9C261FAED08738D33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t6985187DC42F33B6AA4A388FDB199AF21DFA5647_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CProcessDownloaderCommandU3Eb__16_1_mCD979B8747EF11FC127B4A72829FC227E7129822_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass16_0_U3CProcessDownloaderCommandU3Eb__0_m8103F9670B35C94A6A782FB3C192415F55174978_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass16_0_t1AE2F007F691AB4C80A3A277A32D29363031A83F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68264632B88E3E7AC200BC932A18E6105E9A451C);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass16_0_t1AE2F007F691AB4C80A3A277A32D29363031A83F* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* V_4 = NULL;
	Func_2_tE7B48BCEE2F78C885FD6E61A15E473ACC2A36017* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	Func_2_tE7B48BCEE2F78C885FD6E61A15E473ACC2A36017* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	{
		U3CU3Ec__DisplayClass16_0_t1AE2F007F691AB4C80A3A277A32D29363031A83F* L_0 = (U3CU3Ec__DisplayClass16_0_t1AE2F007F691AB4C80A3A277A32D29363031A83F*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass16_0_t1AE2F007F691AB4C80A3A277A32D29363031A83F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass16_0__ctor_m09F4870BF63A54CD3BBB8FA005F36F6326505CCA(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass16_0_t1AE2F007F691AB4C80A3A277A32D29363031A83F* L_1 = V_0;
		int32_t L_2 = ___keyCode0;
		NullCheck(L_1);
		L_1->___keyCode_0 = L_2;
		U3CU3Ec__DisplayClass16_0_t1AE2F007F691AB4C80A3A277A32D29363031A83F* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_1), (void*)__this);
		// if (_selectedDownloaderObj == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->____selectedDownloaderObj_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_5;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0047;
		}
	}
	{
		// Debug.LogErrorFormat("Cannot click \"{0}\" key. No downloader selected.", keyCode);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7;
		U3CU3Ec__DisplayClass16_0_t1AE2F007F691AB4C80A3A277A32D29363031A83F* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = L_9->___keyCode_0;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_12);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_12);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C(_stringLiteral68264632B88E3E7AC200BC932A18E6105E9A451C, L_8, NULL);
		// return;
		goto IL_00bc;
	}

IL_0047:
	{
		// var matchingButtons = _downloaderInputMappers
		//     .Select(mapping => mapping.GetButton(keyCode, _selectedDownloaderObj))
		//     .Where(mapping => mapping != null);
		List_1_tE9981AC1FFBE2D475181694CF7B1674AB079D4EC* L_13 = __this->____downloaderInputMappers_13;
		U3CU3Ec__DisplayClass16_0_t1AE2F007F691AB4C80A3A277A32D29363031A83F* L_14 = V_0;
		Func_2_tB1B84D12BEBA1BCB5F9BD7DFEB37DA4AA0E70715* L_15 = (Func_2_tB1B84D12BEBA1BCB5F9BD7DFEB37DA4AA0E70715*)il2cpp_codegen_object_new(Func_2_tB1B84D12BEBA1BCB5F9BD7DFEB37DA4AA0E70715_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		Func_2__ctor_mCA1C352FE99905E1414C8B956E87F2A9C5A3D69A(L_15, L_14, (intptr_t)((void*)U3CU3Ec__DisplayClass16_0_U3CProcessDownloaderCommandU3Eb__0_m8103F9670B35C94A6A782FB3C192415F55174978_RuntimeMethod_var), NULL);
		RuntimeObject* L_16;
		L_16 = Enumerable_Select_TisIDownloaderInputMapper_t523C8C42D42142DC2400EA308C9E3DCA1829A398_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m601C39EC0BB01397240F5E5489E57214E800F391(L_13, L_15, Enumerable_Select_TisIDownloaderInputMapper_t523C8C42D42142DC2400EA308C9E3DCA1829A398_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m601C39EC0BB01397240F5E5489E57214E800F391_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var);
		Func_2_tE7B48BCEE2F78C885FD6E61A15E473ACC2A36017* L_17 = ((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9__16_1_16;
		Func_2_tE7B48BCEE2F78C885FD6E61A15E473ACC2A36017* L_18 = L_17;
		G_B3_0 = L_18;
		G_B3_1 = L_16;
		if (L_18)
		{
			G_B4_0 = L_18;
			G_B4_1 = L_16;
			goto IL_007d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var);
		U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E* L_19 = ((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tE7B48BCEE2F78C885FD6E61A15E473ACC2A36017* L_20 = (Func_2_tE7B48BCEE2F78C885FD6E61A15E473ACC2A36017*)il2cpp_codegen_object_new(Func_2_tE7B48BCEE2F78C885FD6E61A15E473ACC2A36017_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		Func_2__ctor_m42BD9813B2D79292321A17699E28F9CAEBBA761F(L_20, L_19, (intptr_t)((void*)U3CU3Ec_U3CProcessDownloaderCommandU3Eb__16_1_mCD979B8747EF11FC127B4A72829FC227E7129822_RuntimeMethod_var), NULL);
		Func_2_tE7B48BCEE2F78C885FD6E61A15E473ACC2A36017* L_21 = L_20;
		((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9__16_1_16 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9__16_1_16), (void*)L_21);
		G_B4_0 = L_21;
		G_B4_1 = G_B3_1;
	}

IL_007d:
	{
		RuntimeObject* L_22;
		L_22 = Enumerable_Where_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m8E2ECFF174A4CDB8D3BB37CF8C4B24030CF4C2F9(G_B4_1, G_B4_0, Enumerable_Where_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_m8E2ECFF174A4CDB8D3BB37CF8C4B24030CF4C2F9_RuntimeMethod_var);
		V_1 = L_22;
		// foreach (var button in matchingButtons)
		RuntimeObject* L_23 = V_1;
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Button>::GetEnumerator() */, IEnumerable_1_tAE120E56656B9388F74088D9C261FAED08738D33_il2cpp_TypeInfo_var, L_23);
		V_3 = L_24;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b1:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_25 = V_3;
					if (!L_25)
					{
						goto IL_00bb;
					}
				}
				{
					RuntimeObject* L_26 = V_3;
					NullCheck(L_26);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_26);
				}

IL_00bb:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00a7_1;
			}

IL_008d_1:
			{
				// foreach (var button in matchingButtons)
				RuntimeObject* L_27 = V_3;
				NullCheck(L_27);
				Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_28;
				L_28 = InterfaceFuncInvoker0< Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Button>::get_Current() */, IEnumerator_1_t6985187DC42F33B6AA4A388FDB199AF21DFA5647_il2cpp_TypeInfo_var, L_27);
				V_4 = L_28;
				// ClickButton(button, button.name);
				Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_29 = V_4;
				Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_30 = V_4;
				NullCheck(L_30);
				String_t* L_31;
				L_31 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_30, NULL);
				DemoController_ClickButton_mDEC5EDA034B9264F6830214F3B679DE0F8EC48D6(__this, L_29, L_31, NULL);
			}

IL_00a7_1:
			{
				// foreach (var button in matchingButtons)
				RuntimeObject* L_32 = V_3;
				NullCheck(L_32);
				bool L_33;
				L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_32);
				if (L_33)
				{
					goto IL_008d_1;
				}
			}
			{
				goto IL_00bc;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00bc:
	{
		// }
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController::SelectDownloader(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoController_SelectDownloader_m7C1100893EB37A7019F4B87ED98DB33C8C93965A (DemoController_t10B60839C2F080D6587383BA0242AC07EC1965B2* __this, int32_t ___pageIndex0, int32_t ___downloaderIndex1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral788898E8B8B9284FF59B339BCF0766F96A4A417B);
		s_Il2CppMethodInitialized = true;
	}
	Page_t654646AF8CFA0A91CB3477E71E5CAB53307D494B* V_0 = NULL;
	{
		// _demoPager.SetPage(pageIndex);
		DemoPager_t0470EDB09F4AE3D5CAAFC3AE112A3C07CB82F439* L_0 = __this->____demoPager_14;
		int32_t L_1 = ___pageIndex0;
		NullCheck(L_0);
		DemoPager_SetPage_mAD2DCEF7AB4EDFC7382FC39C1D75743F0664874D(L_0, L_1, NULL);
		// var currentPage = _demoPager.GetCurrentPage();
		DemoPager_t0470EDB09F4AE3D5CAAFC3AE112A3C07CB82F439* L_2 = __this->____demoPager_14;
		NullCheck(L_2);
		Page_t654646AF8CFA0A91CB3477E71E5CAB53307D494B* L_3;
		L_3 = DemoPager_GetCurrentPage_m996E87E0DB75F93B5AEA255063F4C2BC4AD5320D(L_2, NULL);
		V_0 = L_3;
		// _selectedDownloaderObj = currentPage.DownloaderObjects[downloaderIndex];
		Page_t654646AF8CFA0A91CB3477E71E5CAB53307D494B* L_4 = V_0;
		NullCheck(L_4);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5 = L_4->___DownloaderObjects_1;
		int32_t L_6 = ___downloaderIndex1;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_5, L_6, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		__this->____selectedDownloaderObj_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____selectedDownloaderObj_6), (void*)L_7);
		// _selectedOutputText = currentPage.OutputText;
		Page_t654646AF8CFA0A91CB3477E71E5CAB53307D494B* L_8 = V_0;
		NullCheck(L_8);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = L_8->___OutputText_2;
		__this->____selectedOutputText_7 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____selectedOutputText_7), (void*)L_9);
		// SelectionBox.transform.position = _selectedDownloaderObj.transform.position;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___SelectionBox_5;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_10, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->____selectedDownloaderObj_6;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		NullCheck(L_11);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_11, L_14, NULL);
		// SelectionBox.gameObject.SetActive(true);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = __this->___SelectionBox_5;
		NullCheck(L_15);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_15, NULL);
		NullCheck(L_16);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)1, NULL);
		// Debug.Log("Selected " + _selectedDownloaderObj.name);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->____selectedDownloaderObj_6;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_17, NULL);
		String_t* L_19;
		L_19 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral788898E8B8B9284FF59B339BCF0766F96A4A417B, L_18, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_19, NULL);
		// }
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController::ClickButton(UnityEngine.UI.Button,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoController_ClickButton_mDEC5EDA034B9264F6830214F3B679DE0F8EC48D6 (DemoController_t10B60839C2F080D6587383BA0242AC07EC1965B2* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___button0, String_t* ___buttonName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85746C21280F3A30BFA06A89B878136C49B6586B);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!button.isActiveAndEnabled)
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = ___button0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Behaviour_get_isActiveAndEnabled_mEB4ECCE9761A7016BC619557CEFEA1A30D3BF28A(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// Debug.LogErrorFormat("The \"{0}\" button is currently disabled.", buttonName);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		String_t* L_5 = ___buttonName1;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C(_stringLiteral85746C21280F3A30BFA06A89B878136C49B6586B, L_4, NULL);
		// return;
		goto IL_0032;
	}

IL_0026:
	{
		// button.onClick.Invoke();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_6 = ___button0;
		NullCheck(L_6);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_7;
		L_7 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_6, NULL);
		NullCheck(L_7);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_7, NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController::QueryStatusText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoController_QueryStatusText_mFB1BC80C787BAE9A3F5D4A489EC70EAB38D9F7ED (DemoController_t10B60839C2F080D6587383BA0242AC07EC1965B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740_m3B391AAD31B7FEC7E16B2E07F90EEB0007445A1E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E7ABC94263547E6E33D46DC5321CC3CDF30555D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82ED9DFD422972F5C6335A11C7336226440530F8);
		s_Il2CppMethodInitialized = true;
	}
	DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (_selectedDownloaderObj == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____selectedDownloaderObj_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// Debug.LogError("Cannot query status because there is no downloader selected.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral82ED9DFD422972F5C6335A11C7336226440530F8, NULL);
		// return;
		goto IL_0055;
	}

IL_001f:
	{
		// var display = _selectedDownloaderObj.GetComponent<DownloadDisplay>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->____selectedDownloaderObj_6;
		NullCheck(L_3);
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_4;
		L_4 = GameObject_GetComponent_TisDownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740_m3B391AAD31B7FEC7E16B2E07F90EEB0007445A1E(L_3, GameObject_GetComponent_TisDownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740_m3B391AAD31B7FEC7E16B2E07F90EEB0007445A1E_RuntimeMethod_var);
		V_0 = L_4;
		// if (display == null)
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0044;
		}
	}
	{
		// Debug.LogError("Cannot query status because the selected object has no DownloadDisplay.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral1E7ABC94263547E6E33D46DC5321CC3CDF30555D, NULL);
		// return;
		goto IL_0055;
	}

IL_0044:
	{
		// Debug.Log(display.StatusText.text);
		DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* L_8 = V_0;
		NullCheck(L_8);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = L_8->___StatusText_4;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_9);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_10, NULL);
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController::QueryOutputText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoController_QueryOutputText_m56FE6CF93D3F23CADA66C8F858EF9037DF3A9529 (DemoController_t10B60839C2F080D6587383BA0242AC07EC1965B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4701CD6F3A7BD19E3D0B46A514E7BFA2F923AF5);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (_selectedOutputText == null)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->____selectedOutputText_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// Debug.LogError("Cannot query output text box because there is no selected text box");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralC4701CD6F3A7BD19E3D0B46A514E7BFA2F923AF5, NULL);
		// return;
		goto IL_0030;
	}

IL_001f:
	{
		// Debug.Log(_selectedOutputText.text);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->____selectedOutputText_7;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_3);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_4, NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Boolean Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController::AllDisplaysInitialized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DemoController_AllDisplaysInitialized_mE0570A8FF44586EF6CBD6E5616419DC07FAB4049 (DemoController_t10B60839C2F080D6587383BA0242AC07EC1965B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_TrueForAll_m5C8F7A94FA810D3456B468A6E7BE286192178BCA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t25409EB2666F3EF51B6776AA69A502741AE586CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CAllDisplaysInitializedU3Eb__21_0_m3CFAEDC44A47C38D9CA233BAAD32A69E212A3D7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Predicate_1_t25409EB2666F3EF51B6776AA69A502741AE586CE* G_B2_0 = NULL;
	List_1_t1880AE72E54A88645F952BE6A8778419B65E1D94* G_B2_1 = NULL;
	Predicate_1_t25409EB2666F3EF51B6776AA69A502741AE586CE* G_B1_0 = NULL;
	List_1_t1880AE72E54A88645F952BE6A8778419B65E1D94* G_B1_1 = NULL;
	{
		// return InitializedDownloaders.TrueForAll((display) => display.IsInitialized);
		List_1_t1880AE72E54A88645F952BE6A8778419B65E1D94* L_0 = __this->___InitializedDownloaders_4;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var);
		Predicate_1_t25409EB2666F3EF51B6776AA69A502741AE586CE* L_1 = ((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9__21_0_17;
		Predicate_1_t25409EB2666F3EF51B6776AA69A502741AE586CE* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0026;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var);
		U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E* L_3 = ((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Predicate_1_t25409EB2666F3EF51B6776AA69A502741AE586CE* L_4 = (Predicate_1_t25409EB2666F3EF51B6776AA69A502741AE586CE*)il2cpp_codegen_object_new(Predicate_1_t25409EB2666F3EF51B6776AA69A502741AE586CE_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Predicate_1__ctor_mEB93D2B8F9A1BDE43B175ACAA1C59548DF963719(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CAllDisplaysInitializedU3Eb__21_0_m3CFAEDC44A47C38D9CA233BAAD32A69E212A3D7C_RuntimeMethod_var), NULL);
		Predicate_1_t25409EB2666F3EF51B6776AA69A502741AE586CE* L_5 = L_4;
		((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9__21_0_17 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9__21_0_17), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0026:
	{
		NullCheck(G_B2_1);
		bool L_6;
		L_6 = List_1_TrueForAll_m5C8F7A94FA810D3456B468A6E7BE286192178BCA(G_B2_1, G_B2_0, List_1_TrueForAll_m5C8F7A94FA810D3456B468A6E7BE286192178BCA_RuntimeMethod_var);
		V_0 = L_6;
		goto IL_002e;
	}

IL_002e:
	{
		// }
		bool L_7 = V_0;
		return L_7;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoController__ctor_mF61D051ED5B190BEC27B29F3EC5892364938A413 (DemoController_t10B60839C2F080D6587383BA0242AC07EC1965B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloaderInputMapper_1__ctor_m1FC840D8D62782BFABCDD8269F4E97E254B52AD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloaderInputMapper_1__ctor_mB42D8345E04660AA72FEFA91784AD4D38CDAE181_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloaderInputMapper_1__ctor_mE50D3A2EFF64A484F7384DEAA26F8B41C01B6F1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloaderInputMapper_1_t31C9AC8D70F7A548AAC262167CA8C370BDBEA957_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloaderInputMapper_1_tA52A4D97B24F5A9239FC2D6848A74C26AE76A790_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloaderInputMapper_1_tD40C43DD11CCDB08EA8C1419FFE3114433C1ABE4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly DownloaderInputMapper<AssetBundleDownloader> _assetBundleKeyMapping =
		//     new DownloaderInputMapper<AssetBundleDownloader>();
		DownloaderInputMapper_1_tD40C43DD11CCDB08EA8C1419FFE3114433C1ABE4* L_0 = (DownloaderInputMapper_1_tD40C43DD11CCDB08EA8C1419FFE3114433C1ABE4*)il2cpp_codegen_object_new(DownloaderInputMapper_1_tD40C43DD11CCDB08EA8C1419FFE3114433C1ABE4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DownloaderInputMapper_1__ctor_mE50D3A2EFF64A484F7384DEAA26F8B41C01B6F1F(L_0, DownloaderInputMapper_1__ctor_mE50D3A2EFF64A484F7384DEAA26F8B41C01B6F1F_RuntimeMethod_var);
		__this->____assetBundleKeyMapping_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____assetBundleKeyMapping_8), (void*)L_0);
		// private readonly DownloaderInputMapper<AssetPackDownloader> _assetPackKeyMapping =
		//     new DownloaderInputMapper<AssetPackDownloader>();
		DownloaderInputMapper_1_t31C9AC8D70F7A548AAC262167CA8C370BDBEA957* L_1 = (DownloaderInputMapper_1_t31C9AC8D70F7A548AAC262167CA8C370BDBEA957*)il2cpp_codegen_object_new(DownloaderInputMapper_1_t31C9AC8D70F7A548AAC262167CA8C370BDBEA957_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		DownloaderInputMapper_1__ctor_m1FC840D8D62782BFABCDD8269F4E97E254B52AD7(L_1, DownloaderInputMapper_1__ctor_m1FC840D8D62782BFABCDD8269F4E97E254B52AD7_RuntimeMethod_var);
		__this->____assetPackKeyMapping_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____assetPackKeyMapping_9), (void*)L_1);
		// private readonly DownloaderInputMapper<AssetPackBatchDownloader> _assetPackBatchKeyMapping =
		//     new DownloaderInputMapper<AssetPackBatchDownloader>();
		DownloaderInputMapper_1_tA52A4D97B24F5A9239FC2D6848A74C26AE76A790* L_2 = (DownloaderInputMapper_1_tA52A4D97B24F5A9239FC2D6848A74C26AE76A790*)il2cpp_codegen_object_new(DownloaderInputMapper_1_tA52A4D97B24F5A9239FC2D6848A74C26AE76A790_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		DownloaderInputMapper_1__ctor_mB42D8345E04660AA72FEFA91784AD4D38CDAE181(L_2, DownloaderInputMapper_1__ctor_mB42D8345E04660AA72FEFA91784AD4D38CDAE181_RuntimeMethod_var);
		__this->____assetPackBatchKeyMapping_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____assetPackBatchKeyMapping_10), (void*)L_2);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController::<Start>b__14_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoController_U3CStartU3Eb__14_1_m30352E0EB486D06B9B7359FCC689C5C1E5BB276B (DemoController_t10B60839C2F080D6587383BA0242AC07EC1965B2* __this, const RuntimeMethod* method) 
{
	{
		// {KeyCode.Alpha0, () => SelectDownloader(0, 0)},
		DemoController_SelectDownloader_m7C1100893EB37A7019F4B87ED98DB33C8C93965A(__this, 0, 0, NULL);
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController::<Start>b__14_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoController_U3CStartU3Eb__14_2_m25BF97BF6F2F6FB758189DC15D03BFD57671C686 (DemoController_t10B60839C2F080D6587383BA0242AC07EC1965B2* __this, const RuntimeMethod* method) 
{
	{
		// {KeyCode.Alpha1, () => SelectDownloader(0, 1)},
		DemoController_SelectDownloader_m7C1100893EB37A7019F4B87ED98DB33C8C93965A(__this, 0, 1, NULL);
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController::<Start>b__14_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoController_U3CStartU3Eb__14_3_mD0CEF2BC3E0027AD3658370C301F5EC5A121ADC4 (DemoController_t10B60839C2F080D6587383BA0242AC07EC1965B2* __this, const RuntimeMethod* method) 
{
	{
		// {KeyCode.Alpha2, () => SelectDownloader(0, 2)},
		DemoController_SelectDownloader_m7C1100893EB37A7019F4B87ED98DB33C8C93965A(__this, 0, 2, NULL);
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController::<Start>b__14_4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoController_U3CStartU3Eb__14_4_m04C6CF7C8B57BA2A34C42B77B4E56EE0BFBF776D (DemoController_t10B60839C2F080D6587383BA0242AC07EC1965B2* __this, const RuntimeMethod* method) 
{
	{
		// {KeyCode.Alpha3, () => SelectDownloader(1, 0)},
		DemoController_SelectDownloader_m7C1100893EB37A7019F4B87ED98DB33C8C93965A(__this, 1, 0, NULL);
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController::<Start>b__14_5()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoController_U3CStartU3Eb__14_5_mEDDC991F97CD7C0D8E5DC3E1440529821A42CD6E (DemoController_t10B60839C2F080D6587383BA0242AC07EC1965B2* __this, const RuntimeMethod* method) 
{
	{
		// {KeyCode.Alpha4, () => SelectDownloader(1, 1)},
		DemoController_SelectDownloader_m7C1100893EB37A7019F4B87ED98DB33C8C93965A(__this, 1, 1, NULL);
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController::<Start>b__14_6()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoController_U3CStartU3Eb__14_6_mDCFD88004EB19EDCF30F09AF37DCB3597B760E07 (DemoController_t10B60839C2F080D6587383BA0242AC07EC1965B2* __this, const RuntimeMethod* method) 
{
	{
		// {KeyCode.Alpha5, () => SelectDownloader(2, 0)},
		DemoController_SelectDownloader_m7C1100893EB37A7019F4B87ED98DB33C8C93965A(__this, 2, 0, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m79765CAFC627838A52CD25C5A8E3ADF4373DE54E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E* L_0 = (U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E*)il2cpp_codegen_object_new(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m6D75855917D18F96CE5743409B1D53B1A543BCBA(L_0, NULL);
		((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6D75855917D18F96CE5743409B1D53B1A543BCBA (U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// UnityEngine.UI.Button Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<>c::<Start>b__14_7(Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* U3CU3Ec_U3CStartU3Eb__14_7_mEE4D0CA82AB1F53DFEEADC3C4C93A1E68320BA9C (U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E* __this, AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* ___downloader0, const RuntimeMethod* method) 
{
	{
		// {KeyCode.R, downloader => downloader.RetrieveAssetBundleButton},
		AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* L_0 = ___downloader0;
		NullCheck(L_0);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = L_0->___RetrieveAssetBundleButton_6;
		return L_1;
	}
}
// UnityEngine.UI.Button Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<>c::<Start>b__14_8(Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* U3CU3Ec_U3CStartU3Eb__14_8_mECC2134BB02DB6284E6058D25D5AA04F6549E0CF (U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E* __this, AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* ___downloader0, const RuntimeMethod* method) 
{
	{
		// {KeyCode.L, downloader => downloader.LoadSceneButton},
		AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* L_0 = ___downloader0;
		NullCheck(L_0);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = L_0->___LoadSceneButton_7;
		return L_1;
	}
}
// UnityEngine.UI.Button Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<>c::<Start>b__14_9(Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* U3CU3Ec_U3CStartU3Eb__14_9_mB029598F4E8C36236E6FEB9B93BF0E334CD0BA68 (U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E* __this, AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* ___downloader0, const RuntimeMethod* method) 
{
	{
		// {KeyCode.C, downloader => downloader.CancelDownloadButton},
		AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* L_0 = ___downloader0;
		NullCheck(L_0);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = L_0->___CancelDownloadButton_9;
		return L_1;
	}
}
// UnityEngine.UI.Button Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<>c::<Start>b__14_10(Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* U3CU3Ec_U3CStartU3Eb__14_10_m98433FD475CC327AF2AB1E6C2FDE8552B1872CE8 (U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E* __this, AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* ___downloader0, const RuntimeMethod* method) 
{
	{
		// {KeyCode.X, downloader => downloader.RemoveButton},
		AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* L_0 = ___downloader0;
		NullCheck(L_0);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = L_0->___RemoveButton_10;
		return L_1;
	}
}
// UnityEngine.UI.Button Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<>c::<Start>b__14_11(Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* U3CU3Ec_U3CStartU3Eb__14_11_m9FA451E7486BE1159968B77C471B41B70666A2FF (U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E* __this, AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* ___downloader0, const RuntimeMethod* method) 
{
	{
		// {KeyCode.R, downloader => downloader.RetrieveAssetBundleButton},
		AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* L_0 = ___downloader0;
		NullCheck(L_0);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = L_0->___RetrieveAssetBundleButton_7;
		return L_1;
	}
}
// UnityEngine.UI.Button Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<>c::<Start>b__14_12(Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* U3CU3Ec_U3CStartU3Eb__14_12_m54658B19B36A0BDD2EB66934D65C2D8E1F6A2261 (U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E* __this, AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* ___downloader0, const RuntimeMethod* method) 
{
	{
		// {KeyCode.L, downloader => downloader.LoadSceneButton},
		AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* L_0 = ___downloader0;
		NullCheck(L_0);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = L_0->___LoadSceneButton_9;
		return L_1;
	}
}
// UnityEngine.UI.Button Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<>c::<Start>b__14_13(Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* U3CU3Ec_U3CStartU3Eb__14_13_m0B889C47B5C842B33DCD80D0FF780AF33C5C436A (U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E* __this, AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* ___downloader0, const RuntimeMethod* method) 
{
	{
		// {KeyCode.C, downloader => downloader.CancelDownloadButton},
		AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* L_0 = ___downloader0;
		NullCheck(L_0);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = L_0->___CancelDownloadButton_11;
		return L_1;
	}
}
// UnityEngine.UI.Button Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<>c::<Start>b__14_14(Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* U3CU3Ec_U3CStartU3Eb__14_14_m35D1D25C87C957E5CC8D6518873BE09C06D39BAD (U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E* __this, AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* ___downloader0, const RuntimeMethod* method) 
{
	{
		// {KeyCode.X, downloader => downloader.RemoveButton},
		AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* L_0 = ___downloader0;
		NullCheck(L_0);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = L_0->___RemoveButton_12;
		return L_1;
	}
}
// UnityEngine.UI.Button Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<>c::<Start>b__14_15(Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackDownloader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* U3CU3Ec_U3CStartU3Eb__14_15_mB3ECA26A8735F5056A787B256D5BF98E6F051D6A (U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E* __this, AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* ___downloader0, const RuntimeMethod* method) 
{
	{
		// {KeyCode.O, downloader => downloader.LoadAssetBundleButton},
		AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* L_0 = ___downloader0;
		NullCheck(L_0);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = L_0->___LoadAssetBundleButton_13;
		return L_1;
	}
}
// UnityEngine.UI.Button Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<>c::<Start>b__14_16(Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* U3CU3Ec_U3CStartU3Eb__14_16_m29A50BEE8A8EF02D4A58421473A619D4B26A0A92 (U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E* __this, AssetPackBatchDownloader_tE776DD9212256FBF18573752A1E130CEF64B595A* ___downloader0, const RuntimeMethod* method) 
{
	{
		// {KeyCode.R, downloader => downloader.RetrieveAssetPackBatchButton},
		AssetPackBatchDownloader_tE776DD9212256FBF18573752A1E130CEF64B595A* L_0 = ___downloader0;
		NullCheck(L_0);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = L_0->___RetrieveAssetPackBatchButton_5;
		return L_1;
	}
}
// UnityEngine.UI.Button Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<>c::<Start>b__14_17(Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* U3CU3Ec_U3CStartU3Eb__14_17_m37E4A467D27A4F7F2913CC04EDCF79B0FB965177 (U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E* __this, AssetPackBatchDownloader_tE776DD9212256FBF18573752A1E130CEF64B595A* ___downloader0, const RuntimeMethod* method) 
{
	{
		// {KeyCode.X, downloader => downloader.RemovePacksButton},
		AssetPackBatchDownloader_tE776DD9212256FBF18573752A1E130CEF64B595A* L_0 = ___downloader0;
		NullCheck(L_0);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = L_0->___RemovePacksButton_6;
		return L_1;
	}
}
// UnityEngine.UI.Button Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<>c::<Start>b__14_18(Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* U3CU3Ec_U3CStartU3Eb__14_18_m0F3CAC92F74363CF165D529D94591DB23038AD56 (U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E* __this, AssetPackBatchDownloader_tE776DD9212256FBF18573752A1E130CEF64B595A* ___downloader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mABD073A6F6B75E205B8E9A6E5B2D14CDA5F19B81_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// {KeyCode.I, downloader => downloader.Assets[0].DisplayContentsButton},
		AssetPackBatchDownloader_tE776DD9212256FBF18573752A1E130CEF64B595A* L_0 = ___downloader0;
		NullCheck(L_0);
		List_1_tA59DCF9584AAD07D38DEBB531E8F52DE73D0A259* L_1 = L_0->___Assets_4;
		NullCheck(L_1);
		AssetWithinPack_t675DE17DF7B2A4390E90CF4BFBBD35B708F8A888* L_2;
		L_2 = List_1_get_Item_mABD073A6F6B75E205B8E9A6E5B2D14CDA5F19B81(L_1, 0, List_1_get_Item_mABD073A6F6B75E205B8E9A6E5B2D14CDA5F19B81_RuntimeMethod_var);
		NullCheck(L_2);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = L_2->___DisplayContentsButton_2;
		return L_3;
	}
}
// UnityEngine.UI.Button Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<>c::<Start>b__14_19(Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* U3CU3Ec_U3CStartU3Eb__14_19_mE9996538E943FE198A028674D56715FAFF71136B (U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E* __this, AssetPackBatchDownloader_tE776DD9212256FBF18573752A1E130CEF64B595A* ___downloader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mABD073A6F6B75E205B8E9A6E5B2D14CDA5F19B81_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// {KeyCode.J, downloader => downloader.Assets[1].DisplayContentsButton},
		AssetPackBatchDownloader_tE776DD9212256FBF18573752A1E130CEF64B595A* L_0 = ___downloader0;
		NullCheck(L_0);
		List_1_tA59DCF9584AAD07D38DEBB531E8F52DE73D0A259* L_1 = L_0->___Assets_4;
		NullCheck(L_1);
		AssetWithinPack_t675DE17DF7B2A4390E90CF4BFBBD35B708F8A888* L_2;
		L_2 = List_1_get_Item_mABD073A6F6B75E205B8E9A6E5B2D14CDA5F19B81(L_1, 1, List_1_get_Item_mABD073A6F6B75E205B8E9A6E5B2D14CDA5F19B81_RuntimeMethod_var);
		NullCheck(L_2);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = L_2->___DisplayContentsButton_2;
		return L_3;
	}
}
// UnityEngine.UI.Button Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<>c::<Start>b__14_20(Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetPackBatchDownloader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* U3CU3Ec_U3CStartU3Eb__14_20_m74E5FEB419BA570C475EC85DA14C9049EA6B3986 (U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E* __this, AssetPackBatchDownloader_tE776DD9212256FBF18573752A1E130CEF64B595A* ___downloader0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mABD073A6F6B75E205B8E9A6E5B2D14CDA5F19B81_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// {KeyCode.K, downloader => downloader.Assets[2].DisplayContentsButton},
		AssetPackBatchDownloader_tE776DD9212256FBF18573752A1E130CEF64B595A* L_0 = ___downloader0;
		NullCheck(L_0);
		List_1_tA59DCF9584AAD07D38DEBB531E8F52DE73D0A259* L_1 = L_0->___Assets_4;
		NullCheck(L_1);
		AssetWithinPack_t675DE17DF7B2A4390E90CF4BFBBD35B708F8A888* L_2;
		L_2 = List_1_get_Item_mABD073A6F6B75E205B8E9A6E5B2D14CDA5F19B81(L_1, 2, List_1_get_Item_mABD073A6F6B75E205B8E9A6E5B2D14CDA5F19B81_RuntimeMethod_var);
		NullCheck(L_2);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = L_2->___DisplayContentsButton_2;
		return L_3;
	}
}
// System.Collections.Generic.IEnumerable`1<UnityEngine.KeyCode> Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<>c::<Start>b__14_0(Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/IDownloaderInputMapper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CStartU3Eb__14_0_mB18DAB495E0ADA7B93B5035645E4937993603D62 (U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E* __this, RuntimeObject* ___controller0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDownloaderInputMapper_t523C8C42D42142DC2400EA308C9E3DCA1829A398_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _downloaderInputMappers.SelectMany(controller => controller.GetKeyCodes()).Distinct().ToList();
		RuntimeObject* L_0 = ___controller0;
		NullCheck(L_0);
		List_1_tB7F9EA9DD46F974E3E396408B3EF9E0ED62F6D32* L_1;
		L_1 = InterfaceFuncInvoker0< List_1_tB7F9EA9DD46F974E3E396408B3EF9E0ED62F6D32* >::Invoke(1 /* System.Collections.Generic.List`1<UnityEngine.KeyCode> Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/IDownloaderInputMapper::GetKeyCodes() */, IDownloaderInputMapper_t523C8C42D42142DC2400EA308C9E3DCA1829A398_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<>c::<ProcessDownloaderCommand>b__16_1(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CProcessDownloaderCommandU3Eb__16_1_mCD979B8747EF11FC127B4A72829FC227E7129822 (U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___mapping0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .Where(mapping => mapping != null);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = ___mapping0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		return L_1;
	}
}
// System.Boolean Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<>c::<AllDisplaysInitialized>b__21_0(Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.AssetBundleDownloader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CAllDisplaysInitializedU3Eb__21_0_m3CFAEDC44A47C38D9CA233BAAD32A69E212A3D7C (U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E* __this, AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* ___display0, const RuntimeMethod* method) 
{
	{
		// return InitializedDownloaders.TrueForAll((display) => display.IsInitialized);
		AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* L_0 = ___display0;
		NullCheck(L_0);
		bool L_1;
		L_1 = AssetBundleDownloader_get_IsInitialized_mEECA681BA13F43C0BC6BC236A8C2F90A57702E29_inline(L_0, NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<Start>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__14__ctor_m7E5FC4EFAF48917F773A0170FE7D1A9F803B543C (U3CStartU3Ed__14_t57AC3B2B24DE8B132D2F26ECD006DB1BB601B640* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<Start>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__14_System_IDisposable_Dispose_m39F5E5DBE2F461D53A3D6BF26973A754F46EF2A7 (U3CStartU3Ed__14_t57AC3B2B24DE8B132D2F26ECD006DB1BB601B640* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<Start>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__14_MoveNext_m0480277F666873A6FD7B7B2F12A8D1146A0E9451 (U3CStartU3Ed__14_t57AC3B2B24DE8B132D2F26ECD006DB1BB601B640* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonFromDownloader_1_t506B9580D771FD322640060B6F2DC5B4F0D17C8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonFromDownloader_1_tA2799689A60EC73EF8B5AE562F93CEE4D53AC0C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ButtonFromDownloader_1_tD7993D71501910BD8D13A0D63844C4D8699E43D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisDemoPager_t0470EDB09F4AE3D5CAAFC3AE112A3C07CB82F439_m10223CAB3313EAC7A7A4BE6EC27F7D54355E3286_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DemoController_QueryOutputText_m56FE6CF93D3F23CADA66C8F858EF9037DF3A9529_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DemoController_QueryStatusText_mFB1BC80C787BAE9A3F5D4A489EC70EAB38D9F7ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DemoController_U3CStartU3Eb__14_1_m30352E0EB486D06B9B7359FCC689C5C1E5BB276B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DemoController_U3CStartU3Eb__14_2_m25BF97BF6F2F6FB758189DC15D03BFD57671C686_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DemoController_U3CStartU3Eb__14_3_mD0CEF2BC3E0027AD3658370C301F5EC5A121ADC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DemoController_U3CStartU3Eb__14_4_m04C6CF7C8B57BA2A34C42B77B4E56EE0BFBF776D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DemoController_U3CStartU3Eb__14_5_mEDDC991F97CD7C0D8E5DC3E1440529821A42CD6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DemoController_U3CStartU3Eb__14_6_mDCFD88004EB19EDCF30F09AF37DCB3597B760E07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m4FEBF44FF50D4F06146EF6B9FE6A8BB24980D629_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m706C3E8D2AEADEF73B2A0957C636FB5644FAED99_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m71DA0732D123B9377FF53F5D6AA5418D7E79CA11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m9F4E1EF1159C1F90E9F6A52ED3F9ABF28F8D87E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m1792755F4994F7B283CDF5812B9A94AF977F161F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m6032F983B96F193C896FB3D6D32E8E361D14E5D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC8A2ED7AF1169869007C72B5A3D2101FA015D882_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mF1138E99255A29F054BABFABC8228D927F081237_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t2BEE0B6563F88D6F1ACA1C7095F12BB7F1A7C0BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t3BEBDC70F0A50BB404F53D3071BFBE3E192BB9BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t91C8A923863C4F8996A36010D3447BD78F809F8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t961634992B8C7A1CD2414B0736961441B05B610F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Distinct_TisKeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_mA20F5EAE0BA56B5438E077C38B3A04D33DFD392B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_SelectMany_TisIDownloaderInputMapper_t523C8C42D42142DC2400EA308C9E3DCA1829A398_TisKeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_m4AF0815E4628A9A5FC3B69FE78BEEF6CD3FCBD7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisKeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_mBDCDE5676D2E03C287AB081ABD3B45F01243BAA2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t165CB6061C1CED35EC6B0E9FFDD60B5D4D36E2FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m9E44E7DEE89BE92B8AA50AACDFE26D66CACCEFBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mAC889D2D3A04D4473E8B932E17FBD4A18E17852B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE9981AC1FFBE2D475181694CF7B1674AB079D4EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__14_0_mB18DAB495E0ADA7B93B5035645E4937993603D62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__14_10_m98433FD475CC327AF2AB1E6C2FDE8552B1872CE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__14_11_m9FA451E7486BE1159968B77C471B41B70666A2FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__14_12_m54658B19B36A0BDD2EB66934D65C2D8E1F6A2261_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__14_13_m0B889C47B5C842B33DCD80D0FF780AF33C5C436A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__14_14_m35D1D25C87C957E5CC8D6518873BE09C06D39BAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__14_15_mB3ECA26A8735F5056A787B256D5BF98E6F051D6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__14_16_m29A50BEE8A8EF02D4A58421473A619D4B26A0A92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__14_17_m37E4A467D27A4F7F2913CC04EDCF79B0FB965177_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__14_18_m0F3CAC92F74363CF165D529D94591DB23038AD56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__14_19_mE9996538E943FE198A028674D56715FAFF71136B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__14_20_m74E5FEB419BA570C475EC85DA14C9049EA6B3986_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__14_7_mEE4D0CA82AB1F53DFEEADC3C4C93A1E68320BA9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__14_8_mECC2134BB02DB6284E6058D25D5AA04F6549E0CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__14_9_mB029598F4E8C36236E6FEB9B93BF0E334CD0BA68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43ED1501FDD5A66D5F7E4D3D8687EB5390A64DFD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA63D640D14793065606B3839D23B018F48560BA);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	ButtonFromDownloader_1_tA2799689A60EC73EF8B5AE562F93CEE4D53AC0C6* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	Dictionary_2_t2BEE0B6563F88D6F1ACA1C7095F12BB7F1A7C0BA* G_B9_2 = NULL;
	Dictionary_2_t2BEE0B6563F88D6F1ACA1C7095F12BB7F1A7C0BA* G_B9_3 = NULL;
	DownloaderInputMapper_1_tD40C43DD11CCDB08EA8C1419FFE3114433C1ABE4* G_B9_4 = NULL;
	ButtonFromDownloader_1_tA2799689A60EC73EF8B5AE562F93CEE4D53AC0C6* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	Dictionary_2_t2BEE0B6563F88D6F1ACA1C7095F12BB7F1A7C0BA* G_B8_2 = NULL;
	Dictionary_2_t2BEE0B6563F88D6F1ACA1C7095F12BB7F1A7C0BA* G_B8_3 = NULL;
	DownloaderInputMapper_1_tD40C43DD11CCDB08EA8C1419FFE3114433C1ABE4* G_B8_4 = NULL;
	ButtonFromDownloader_1_tA2799689A60EC73EF8B5AE562F93CEE4D53AC0C6* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	Dictionary_2_t2BEE0B6563F88D6F1ACA1C7095F12BB7F1A7C0BA* G_B11_2 = NULL;
	Dictionary_2_t2BEE0B6563F88D6F1ACA1C7095F12BB7F1A7C0BA* G_B11_3 = NULL;
	DownloaderInputMapper_1_tD40C43DD11CCDB08EA8C1419FFE3114433C1ABE4* G_B11_4 = NULL;
	ButtonFromDownloader_1_tA2799689A60EC73EF8B5AE562F93CEE4D53AC0C6* G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	Dictionary_2_t2BEE0B6563F88D6F1ACA1C7095F12BB7F1A7C0BA* G_B10_2 = NULL;
	Dictionary_2_t2BEE0B6563F88D6F1ACA1C7095F12BB7F1A7C0BA* G_B10_3 = NULL;
	DownloaderInputMapper_1_tD40C43DD11CCDB08EA8C1419FFE3114433C1ABE4* G_B10_4 = NULL;
	ButtonFromDownloader_1_tA2799689A60EC73EF8B5AE562F93CEE4D53AC0C6* G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	Dictionary_2_t2BEE0B6563F88D6F1ACA1C7095F12BB7F1A7C0BA* G_B13_2 = NULL;
	Dictionary_2_t2BEE0B6563F88D6F1ACA1C7095F12BB7F1A7C0BA* G_B13_3 = NULL;
	DownloaderInputMapper_1_tD40C43DD11CCDB08EA8C1419FFE3114433C1ABE4* G_B13_4 = NULL;
	ButtonFromDownloader_1_tA2799689A60EC73EF8B5AE562F93CEE4D53AC0C6* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	Dictionary_2_t2BEE0B6563F88D6F1ACA1C7095F12BB7F1A7C0BA* G_B12_2 = NULL;
	Dictionary_2_t2BEE0B6563F88D6F1ACA1C7095F12BB7F1A7C0BA* G_B12_3 = NULL;
	DownloaderInputMapper_1_tD40C43DD11CCDB08EA8C1419FFE3114433C1ABE4* G_B12_4 = NULL;
	ButtonFromDownloader_1_tA2799689A60EC73EF8B5AE562F93CEE4D53AC0C6* G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	Dictionary_2_t2BEE0B6563F88D6F1ACA1C7095F12BB7F1A7C0BA* G_B15_2 = NULL;
	Dictionary_2_t2BEE0B6563F88D6F1ACA1C7095F12BB7F1A7C0BA* G_B15_3 = NULL;
	DownloaderInputMapper_1_tD40C43DD11CCDB08EA8C1419FFE3114433C1ABE4* G_B15_4 = NULL;
	ButtonFromDownloader_1_tA2799689A60EC73EF8B5AE562F93CEE4D53AC0C6* G_B14_0 = NULL;
	int32_t G_B14_1 = 0;
	Dictionary_2_t2BEE0B6563F88D6F1ACA1C7095F12BB7F1A7C0BA* G_B14_2 = NULL;
	Dictionary_2_t2BEE0B6563F88D6F1ACA1C7095F12BB7F1A7C0BA* G_B14_3 = NULL;
	DownloaderInputMapper_1_tD40C43DD11CCDB08EA8C1419FFE3114433C1ABE4* G_B14_4 = NULL;
	ButtonFromDownloader_1_t506B9580D771FD322640060B6F2DC5B4F0D17C8C* G_B17_0 = NULL;
	int32_t G_B17_1 = 0;
	Dictionary_2_t3BEBDC70F0A50BB404F53D3071BFBE3E192BB9BC* G_B17_2 = NULL;
	Dictionary_2_t3BEBDC70F0A50BB404F53D3071BFBE3E192BB9BC* G_B17_3 = NULL;
	DownloaderInputMapper_1_t31C9AC8D70F7A548AAC262167CA8C370BDBEA957* G_B17_4 = NULL;
	ButtonFromDownloader_1_t506B9580D771FD322640060B6F2DC5B4F0D17C8C* G_B16_0 = NULL;
	int32_t G_B16_1 = 0;
	Dictionary_2_t3BEBDC70F0A50BB404F53D3071BFBE3E192BB9BC* G_B16_2 = NULL;
	Dictionary_2_t3BEBDC70F0A50BB404F53D3071BFBE3E192BB9BC* G_B16_3 = NULL;
	DownloaderInputMapper_1_t31C9AC8D70F7A548AAC262167CA8C370BDBEA957* G_B16_4 = NULL;
	ButtonFromDownloader_1_t506B9580D771FD322640060B6F2DC5B4F0D17C8C* G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	Dictionary_2_t3BEBDC70F0A50BB404F53D3071BFBE3E192BB9BC* G_B19_2 = NULL;
	Dictionary_2_t3BEBDC70F0A50BB404F53D3071BFBE3E192BB9BC* G_B19_3 = NULL;
	DownloaderInputMapper_1_t31C9AC8D70F7A548AAC262167CA8C370BDBEA957* G_B19_4 = NULL;
	ButtonFromDownloader_1_t506B9580D771FD322640060B6F2DC5B4F0D17C8C* G_B18_0 = NULL;
	int32_t G_B18_1 = 0;
	Dictionary_2_t3BEBDC70F0A50BB404F53D3071BFBE3E192BB9BC* G_B18_2 = NULL;
	Dictionary_2_t3BEBDC70F0A50BB404F53D3071BFBE3E192BB9BC* G_B18_3 = NULL;
	DownloaderInputMapper_1_t31C9AC8D70F7A548AAC262167CA8C370BDBEA957* G_B18_4 = NULL;
	ButtonFromDownloader_1_t506B9580D771FD322640060B6F2DC5B4F0D17C8C* G_B21_0 = NULL;
	int32_t G_B21_1 = 0;
	Dictionary_2_t3BEBDC70F0A50BB404F53D3071BFBE3E192BB9BC* G_B21_2 = NULL;
	Dictionary_2_t3BEBDC70F0A50BB404F53D3071BFBE3E192BB9BC* G_B21_3 = NULL;
	DownloaderInputMapper_1_t31C9AC8D70F7A548AAC262167CA8C370BDBEA957* G_B21_4 = NULL;
	ButtonFromDownloader_1_t506B9580D771FD322640060B6F2DC5B4F0D17C8C* G_B20_0 = NULL;
	int32_t G_B20_1 = 0;
	Dictionary_2_t3BEBDC70F0A50BB404F53D3071BFBE3E192BB9BC* G_B20_2 = NULL;
	Dictionary_2_t3BEBDC70F0A50BB404F53D3071BFBE3E192BB9BC* G_B20_3 = NULL;
	DownloaderInputMapper_1_t31C9AC8D70F7A548AAC262167CA8C370BDBEA957* G_B20_4 = NULL;
	ButtonFromDownloader_1_t506B9580D771FD322640060B6F2DC5B4F0D17C8C* G_B23_0 = NULL;
	int32_t G_B23_1 = 0;
	Dictionary_2_t3BEBDC70F0A50BB404F53D3071BFBE3E192BB9BC* G_B23_2 = NULL;
	Dictionary_2_t3BEBDC70F0A50BB404F53D3071BFBE3E192BB9BC* G_B23_3 = NULL;
	DownloaderInputMapper_1_t31C9AC8D70F7A548AAC262167CA8C370BDBEA957* G_B23_4 = NULL;
	ButtonFromDownloader_1_t506B9580D771FD322640060B6F2DC5B4F0D17C8C* G_B22_0 = NULL;
	int32_t G_B22_1 = 0;
	Dictionary_2_t3BEBDC70F0A50BB404F53D3071BFBE3E192BB9BC* G_B22_2 = NULL;
	Dictionary_2_t3BEBDC70F0A50BB404F53D3071BFBE3E192BB9BC* G_B22_3 = NULL;
	DownloaderInputMapper_1_t31C9AC8D70F7A548AAC262167CA8C370BDBEA957* G_B22_4 = NULL;
	ButtonFromDownloader_1_t506B9580D771FD322640060B6F2DC5B4F0D17C8C* G_B25_0 = NULL;
	int32_t G_B25_1 = 0;
	Dictionary_2_t3BEBDC70F0A50BB404F53D3071BFBE3E192BB9BC* G_B25_2 = NULL;
	Dictionary_2_t3BEBDC70F0A50BB404F53D3071BFBE3E192BB9BC* G_B25_3 = NULL;
	DownloaderInputMapper_1_t31C9AC8D70F7A548AAC262167CA8C370BDBEA957* G_B25_4 = NULL;
	ButtonFromDownloader_1_t506B9580D771FD322640060B6F2DC5B4F0D17C8C* G_B24_0 = NULL;
	int32_t G_B24_1 = 0;
	Dictionary_2_t3BEBDC70F0A50BB404F53D3071BFBE3E192BB9BC* G_B24_2 = NULL;
	Dictionary_2_t3BEBDC70F0A50BB404F53D3071BFBE3E192BB9BC* G_B24_3 = NULL;
	DownloaderInputMapper_1_t31C9AC8D70F7A548AAC262167CA8C370BDBEA957* G_B24_4 = NULL;
	ButtonFromDownloader_1_tD7993D71501910BD8D13A0D63844C4D8699E43D3* G_B27_0 = NULL;
	int32_t G_B27_1 = 0;
	Dictionary_2_t91C8A923863C4F8996A36010D3447BD78F809F8D* G_B27_2 = NULL;
	Dictionary_2_t91C8A923863C4F8996A36010D3447BD78F809F8D* G_B27_3 = NULL;
	DownloaderInputMapper_1_tA52A4D97B24F5A9239FC2D6848A74C26AE76A790* G_B27_4 = NULL;
	ButtonFromDownloader_1_tD7993D71501910BD8D13A0D63844C4D8699E43D3* G_B26_0 = NULL;
	int32_t G_B26_1 = 0;
	Dictionary_2_t91C8A923863C4F8996A36010D3447BD78F809F8D* G_B26_2 = NULL;
	Dictionary_2_t91C8A923863C4F8996A36010D3447BD78F809F8D* G_B26_3 = NULL;
	DownloaderInputMapper_1_tA52A4D97B24F5A9239FC2D6848A74C26AE76A790* G_B26_4 = NULL;
	ButtonFromDownloader_1_tD7993D71501910BD8D13A0D63844C4D8699E43D3* G_B29_0 = NULL;
	int32_t G_B29_1 = 0;
	Dictionary_2_t91C8A923863C4F8996A36010D3447BD78F809F8D* G_B29_2 = NULL;
	Dictionary_2_t91C8A923863C4F8996A36010D3447BD78F809F8D* G_B29_3 = NULL;
	DownloaderInputMapper_1_tA52A4D97B24F5A9239FC2D6848A74C26AE76A790* G_B29_4 = NULL;
	ButtonFromDownloader_1_tD7993D71501910BD8D13A0D63844C4D8699E43D3* G_B28_0 = NULL;
	int32_t G_B28_1 = 0;
	Dictionary_2_t91C8A923863C4F8996A36010D3447BD78F809F8D* G_B28_2 = NULL;
	Dictionary_2_t91C8A923863C4F8996A36010D3447BD78F809F8D* G_B28_3 = NULL;
	DownloaderInputMapper_1_tA52A4D97B24F5A9239FC2D6848A74C26AE76A790* G_B28_4 = NULL;
	ButtonFromDownloader_1_tD7993D71501910BD8D13A0D63844C4D8699E43D3* G_B31_0 = NULL;
	int32_t G_B31_1 = 0;
	Dictionary_2_t91C8A923863C4F8996A36010D3447BD78F809F8D* G_B31_2 = NULL;
	Dictionary_2_t91C8A923863C4F8996A36010D3447BD78F809F8D* G_B31_3 = NULL;
	DownloaderInputMapper_1_tA52A4D97B24F5A9239FC2D6848A74C26AE76A790* G_B31_4 = NULL;
	ButtonFromDownloader_1_tD7993D71501910BD8D13A0D63844C4D8699E43D3* G_B30_0 = NULL;
	int32_t G_B30_1 = 0;
	Dictionary_2_t91C8A923863C4F8996A36010D3447BD78F809F8D* G_B30_2 = NULL;
	Dictionary_2_t91C8A923863C4F8996A36010D3447BD78F809F8D* G_B30_3 = NULL;
	DownloaderInputMapper_1_tA52A4D97B24F5A9239FC2D6848A74C26AE76A790* G_B30_4 = NULL;
	ButtonFromDownloader_1_tD7993D71501910BD8D13A0D63844C4D8699E43D3* G_B33_0 = NULL;
	int32_t G_B33_1 = 0;
	Dictionary_2_t91C8A923863C4F8996A36010D3447BD78F809F8D* G_B33_2 = NULL;
	Dictionary_2_t91C8A923863C4F8996A36010D3447BD78F809F8D* G_B33_3 = NULL;
	DownloaderInputMapper_1_tA52A4D97B24F5A9239FC2D6848A74C26AE76A790* G_B33_4 = NULL;
	ButtonFromDownloader_1_tD7993D71501910BD8D13A0D63844C4D8699E43D3* G_B32_0 = NULL;
	int32_t G_B32_1 = 0;
	Dictionary_2_t91C8A923863C4F8996A36010D3447BD78F809F8D* G_B32_2 = NULL;
	Dictionary_2_t91C8A923863C4F8996A36010D3447BD78F809F8D* G_B32_3 = NULL;
	DownloaderInputMapper_1_tA52A4D97B24F5A9239FC2D6848A74C26AE76A790* G_B32_4 = NULL;
	ButtonFromDownloader_1_tD7993D71501910BD8D13A0D63844C4D8699E43D3* G_B35_0 = NULL;
	int32_t G_B35_1 = 0;
	Dictionary_2_t91C8A923863C4F8996A36010D3447BD78F809F8D* G_B35_2 = NULL;
	Dictionary_2_t91C8A923863C4F8996A36010D3447BD78F809F8D* G_B35_3 = NULL;
	DownloaderInputMapper_1_tA52A4D97B24F5A9239FC2D6848A74C26AE76A790* G_B35_4 = NULL;
	ButtonFromDownloader_1_tD7993D71501910BD8D13A0D63844C4D8699E43D3* G_B34_0 = NULL;
	int32_t G_B34_1 = 0;
	Dictionary_2_t91C8A923863C4F8996A36010D3447BD78F809F8D* G_B34_2 = NULL;
	Dictionary_2_t91C8A923863C4F8996A36010D3447BD78F809F8D* G_B34_3 = NULL;
	DownloaderInputMapper_1_tA52A4D97B24F5A9239FC2D6848A74C26AE76A790* G_B34_4 = NULL;
	Func_2_t165CB6061C1CED35EC6B0E9FFDD60B5D4D36E2FA* G_B37_0 = NULL;
	List_1_tE9981AC1FFBE2D475181694CF7B1674AB079D4EC* G_B37_1 = NULL;
	DemoController_t10B60839C2F080D6587383BA0242AC07EC1965B2* G_B37_2 = NULL;
	Func_2_t165CB6061C1CED35EC6B0E9FFDD60B5D4D36E2FA* G_B36_0 = NULL;
	List_1_tE9981AC1FFBE2D475181694CF7B1674AB079D4EC* G_B36_1 = NULL;
	DemoController_t10B60839C2F080D6587383BA0242AC07EC1965B2* G_B36_2 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		goto IL_001b;
	}

IL_0014:
	{
		goto IL_0430;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// _demoPager = GetComponent<DemoPager>();
		DemoController_t10B60839C2F080D6587383BA0242AC07EC1965B2* L_3 = __this->___U3CU3E4__this_2;
		DemoController_t10B60839C2F080D6587383BA0242AC07EC1965B2* L_4 = __this->___U3CU3E4__this_2;
		NullCheck(L_4);
		DemoPager_t0470EDB09F4AE3D5CAAFC3AE112A3C07CB82F439* L_5;
		L_5 = Component_GetComponent_TisDemoPager_t0470EDB09F4AE3D5CAAFC3AE112A3C07CB82F439_m10223CAB3313EAC7A7A4BE6EC27F7D54355E3286(L_4, Component_GetComponent_TisDemoPager_t0470EDB09F4AE3D5CAAFC3AE112A3C07CB82F439_m10223CAB3313EAC7A7A4BE6EC27F7D54355E3286_RuntimeMethod_var);
		NullCheck(L_3);
		L_3->____demoPager_14 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->____demoPager_14), (void*)L_5);
		// _navigationKeyMappings = new Dictionary<KeyCode, Action>()
		// {
		//     {KeyCode.Alpha0, () => SelectDownloader(0, 0)},
		//     {KeyCode.Alpha1, () => SelectDownloader(0, 1)},
		//     {KeyCode.Alpha2, () => SelectDownloader(0, 2)},
		//     {KeyCode.Alpha3, () => SelectDownloader(1, 0)},
		//     {KeyCode.Alpha4, () => SelectDownloader(1, 1)},
		//     {KeyCode.Alpha5, () => SelectDownloader(2, 0)},
		//     {KeyCode.Q, QueryStatusText},
		//     {KeyCode.T, QueryOutputText}
		// };
		DemoController_t10B60839C2F080D6587383BA0242AC07EC1965B2* L_6 = __this->___U3CU3E4__this_2;
		Dictionary_2_t961634992B8C7A1CD2414B0736961441B05B610F* L_7 = (Dictionary_2_t961634992B8C7A1CD2414B0736961441B05B610F*)il2cpp_codegen_object_new(Dictionary_2_t961634992B8C7A1CD2414B0736961441B05B610F_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Dictionary_2__ctor_m1792755F4994F7B283CDF5812B9A94AF977F161F(L_7, Dictionary_2__ctor_m1792755F4994F7B283CDF5812B9A94AF977F161F_RuntimeMethod_var);
		Dictionary_2_t961634992B8C7A1CD2414B0736961441B05B610F* L_8 = L_7;
		DemoController_t10B60839C2F080D6587383BA0242AC07EC1965B2* L_9 = __this->___U3CU3E4__this_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_10, L_9, (intptr_t)((void*)DemoController_U3CStartU3Eb__14_1_m30352E0EB486D06B9B7359FCC689C5C1E5BB276B_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		Dictionary_2_Add_m71DA0732D123B9377FF53F5D6AA5418D7E79CA11(L_8, ((int32_t)48), L_10, Dictionary_2_Add_m71DA0732D123B9377FF53F5D6AA5418D7E79CA11_RuntimeMethod_var);
		Dictionary_2_t961634992B8C7A1CD2414B0736961441B05B610F* L_11 = L_8;
		DemoController_t10B60839C2F080D6587383BA0242AC07EC1965B2* L_12 = __this->___U3CU3E4__this_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_13 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_13, L_12, (intptr_t)((void*)DemoController_U3CStartU3Eb__14_2_m25BF97BF6F2F6FB758189DC15D03BFD57671C686_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		Dictionary_2_Add_m71DA0732D123B9377FF53F5D6AA5418D7E79CA11(L_11, ((int32_t)49), L_13, Dictionary_2_Add_m71DA0732D123B9377FF53F5D6AA5418D7E79CA11_RuntimeMethod_var);
		Dictionary_2_t961634992B8C7A1CD2414B0736961441B05B610F* L_14 = L_11;
		DemoController_t10B60839C2F080D6587383BA0242AC07EC1965B2* L_15 = __this->___U3CU3E4__this_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_16 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_16, L_15, (intptr_t)((void*)DemoController_U3CStartU3Eb__14_3_mD0CEF2BC3E0027AD3658370C301F5EC5A121ADC4_RuntimeMethod_var), NULL);
		NullCheck(L_14);
		Dictionary_2_Add_m71DA0732D123B9377FF53F5D6AA5418D7E79CA11(L_14, ((int32_t)50), L_16, Dictionary_2_Add_m71DA0732D123B9377FF53F5D6AA5418D7E79CA11_RuntimeMethod_var);
		Dictionary_2_t961634992B8C7A1CD2414B0736961441B05B610F* L_17 = L_14;
		DemoController_t10B60839C2F080D6587383BA0242AC07EC1965B2* L_18 = __this->___U3CU3E4__this_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_19 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_19, L_18, (intptr_t)((void*)DemoController_U3CStartU3Eb__14_4_m04C6CF7C8B57BA2A34C42B77B4E56EE0BFBF776D_RuntimeMethod_var), NULL);
		NullCheck(L_17);
		Dictionary_2_Add_m71DA0732D123B9377FF53F5D6AA5418D7E79CA11(L_17, ((int32_t)51), L_19, Dictionary_2_Add_m71DA0732D123B9377FF53F5D6AA5418D7E79CA11_RuntimeMethod_var);
		Dictionary_2_t961634992B8C7A1CD2414B0736961441B05B610F* L_20 = L_17;
		DemoController_t10B60839C2F080D6587383BA0242AC07EC1965B2* L_21 = __this->___U3CU3E4__this_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_22 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_22, L_21, (intptr_t)((void*)DemoController_U3CStartU3Eb__14_5_mEDDC991F97CD7C0D8E5DC3E1440529821A42CD6E_RuntimeMethod_var), NULL);
		NullCheck(L_20);
		Dictionary_2_Add_m71DA0732D123B9377FF53F5D6AA5418D7E79CA11(L_20, ((int32_t)52), L_22, Dictionary_2_Add_m71DA0732D123B9377FF53F5D6AA5418D7E79CA11_RuntimeMethod_var);
		Dictionary_2_t961634992B8C7A1CD2414B0736961441B05B610F* L_23 = L_20;
		DemoController_t10B60839C2F080D6587383BA0242AC07EC1965B2* L_24 = __this->___U3CU3E4__this_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_25 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_25, L_24, (intptr_t)((void*)DemoController_U3CStartU3Eb__14_6_mDCFD88004EB19EDCF30F09AF37DCB3597B760E07_RuntimeMethod_var), NULL);
		NullCheck(L_23);
		Dictionary_2_Add_m71DA0732D123B9377FF53F5D6AA5418D7E79CA11(L_23, ((int32_t)53), L_25, Dictionary_2_Add_m71DA0732D123B9377FF53F5D6AA5418D7E79CA11_RuntimeMethod_var);
		Dictionary_2_t961634992B8C7A1CD2414B0736961441B05B610F* L_26 = L_23;
		DemoController_t10B60839C2F080D6587383BA0242AC07EC1965B2* L_27 = __this->___U3CU3E4__this_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_28 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_28, L_27, (intptr_t)((void*)DemoController_QueryStatusText_mFB1BC80C787BAE9A3F5D4A489EC70EAB38D9F7ED_RuntimeMethod_var), NULL);
		NullCheck(L_26);
		Dictionary_2_Add_m71DA0732D123B9377FF53F5D6AA5418D7E79CA11(L_26, ((int32_t)113), L_28, Dictionary_2_Add_m71DA0732D123B9377FF53F5D6AA5418D7E79CA11_RuntimeMethod_var);
		Dictionary_2_t961634992B8C7A1CD2414B0736961441B05B610F* L_29 = L_26;
		DemoController_t10B60839C2F080D6587383BA0242AC07EC1965B2* L_30 = __this->___U3CU3E4__this_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_31 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_31, L_30, (intptr_t)((void*)DemoController_QueryOutputText_m56FE6CF93D3F23CADA66C8F858EF9037DF3A9529_RuntimeMethod_var), NULL);
		NullCheck(L_29);
		Dictionary_2_Add_m71DA0732D123B9377FF53F5D6AA5418D7E79CA11(L_29, ((int32_t)116), L_31, Dictionary_2_Add_m71DA0732D123B9377FF53F5D6AA5418D7E79CA11_RuntimeMethod_var);
		NullCheck(L_6);
		L_6->____navigationKeyMappings_11 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->____navigationKeyMappings_11), (void*)L_29);
		// _assetBundleKeyMapping.KeyMapping = new Dictionary<KeyCode, ButtonFromDownloader<AssetBundleDownloader>>()
		// {
		//     {KeyCode.R, downloader => downloader.RetrieveAssetBundleButton},
		//     {KeyCode.L, downloader => downloader.LoadSceneButton},
		//     {KeyCode.C, downloader => downloader.CancelDownloadButton},
		//     {KeyCode.X, downloader => downloader.RemoveButton},
		// };
		DemoController_t10B60839C2F080D6587383BA0242AC07EC1965B2* L_32 = __this->___U3CU3E4__this_2;
		NullCheck(L_32);
		DownloaderInputMapper_1_tD40C43DD11CCDB08EA8C1419FFE3114433C1ABE4* L_33 = L_32->____assetBundleKeyMapping_8;
		Dictionary_2_t2BEE0B6563F88D6F1ACA1C7095F12BB7F1A7C0BA* L_34 = (Dictionary_2_t2BEE0B6563F88D6F1ACA1C7095F12BB7F1A7C0BA*)il2cpp_codegen_object_new(Dictionary_2_t2BEE0B6563F88D6F1ACA1C7095F12BB7F1A7C0BA_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		Dictionary_2__ctor_m6032F983B96F193C896FB3D6D32E8E361D14E5D4(L_34, Dictionary_2__ctor_m6032F983B96F193C896FB3D6D32E8E361D14E5D4_RuntimeMethod_var);
		Dictionary_2_t2BEE0B6563F88D6F1ACA1C7095F12BB7F1A7C0BA* L_35 = L_34;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var);
		ButtonFromDownloader_1_tA2799689A60EC73EF8B5AE562F93CEE4D53AC0C6* L_36 = ((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9__14_7_1;
		ButtonFromDownloader_1_tA2799689A60EC73EF8B5AE562F93CEE4D53AC0C6* L_37 = L_36;
		G_B8_0 = L_37;
		G_B8_1 = ((int32_t)114);
		G_B8_2 = L_35;
		G_B8_3 = L_35;
		G_B8_4 = L_33;
		if (L_37)
		{
			G_B9_0 = L_37;
			G_B9_1 = ((int32_t)114);
			G_B9_2 = L_35;
			G_B9_3 = L_35;
			G_B9_4 = L_33;
			goto IL_014b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var);
		U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E* L_38 = ((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		ButtonFromDownloader_1_tA2799689A60EC73EF8B5AE562F93CEE4D53AC0C6* L_39 = (ButtonFromDownloader_1_tA2799689A60EC73EF8B5AE562F93CEE4D53AC0C6*)il2cpp_codegen_object_new(ButtonFromDownloader_1_tA2799689A60EC73EF8B5AE562F93CEE4D53AC0C6_il2cpp_TypeInfo_var);
		NullCheck(L_39);
		ButtonFromDownloader_1__ctor_mD8EED84996D9852722BFD5B10AFAC3F62877BD23(L_39, L_38, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__14_7_mEE4D0CA82AB1F53DFEEADC3C4C93A1E68320BA9C_RuntimeMethod_var), NULL);
		ButtonFromDownloader_1_tA2799689A60EC73EF8B5AE562F93CEE4D53AC0C6* L_40 = L_39;
		((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9__14_7_1 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9__14_7_1), (void*)L_40);
		G_B9_0 = L_40;
		G_B9_1 = G_B8_1;
		G_B9_2 = G_B8_2;
		G_B9_3 = G_B8_3;
		G_B9_4 = G_B8_4;
	}

IL_014b:
	{
		NullCheck(G_B9_2);
		Dictionary_2_Add_m4FEBF44FF50D4F06146EF6B9FE6A8BB24980D629(G_B9_2, G_B9_1, G_B9_0, Dictionary_2_Add_m4FEBF44FF50D4F06146EF6B9FE6A8BB24980D629_RuntimeMethod_var);
		Dictionary_2_t2BEE0B6563F88D6F1ACA1C7095F12BB7F1A7C0BA* L_41 = G_B9_3;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var);
		ButtonFromDownloader_1_tA2799689A60EC73EF8B5AE562F93CEE4D53AC0C6* L_42 = ((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9__14_8_2;
		ButtonFromDownloader_1_tA2799689A60EC73EF8B5AE562F93CEE4D53AC0C6* L_43 = L_42;
		G_B10_0 = L_43;
		G_B10_1 = ((int32_t)108);
		G_B10_2 = L_41;
		G_B10_3 = L_41;
		G_B10_4 = G_B9_4;
		if (L_43)
		{
			G_B11_0 = L_43;
			G_B11_1 = ((int32_t)108);
			G_B11_2 = L_41;
			G_B11_3 = L_41;
			G_B11_4 = G_B9_4;
			goto IL_0173;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var);
		U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E* L_44 = ((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		ButtonFromDownloader_1_tA2799689A60EC73EF8B5AE562F93CEE4D53AC0C6* L_45 = (ButtonFromDownloader_1_tA2799689A60EC73EF8B5AE562F93CEE4D53AC0C6*)il2cpp_codegen_object_new(ButtonFromDownloader_1_tA2799689A60EC73EF8B5AE562F93CEE4D53AC0C6_il2cpp_TypeInfo_var);
		NullCheck(L_45);
		ButtonFromDownloader_1__ctor_mD8EED84996D9852722BFD5B10AFAC3F62877BD23(L_45, L_44, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__14_8_mECC2134BB02DB6284E6058D25D5AA04F6549E0CF_RuntimeMethod_var), NULL);
		ButtonFromDownloader_1_tA2799689A60EC73EF8B5AE562F93CEE4D53AC0C6* L_46 = L_45;
		((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9__14_8_2 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9__14_8_2), (void*)L_46);
		G_B11_0 = L_46;
		G_B11_1 = G_B10_1;
		G_B11_2 = G_B10_2;
		G_B11_3 = G_B10_3;
		G_B11_4 = G_B10_4;
	}

IL_0173:
	{
		NullCheck(G_B11_2);
		Dictionary_2_Add_m4FEBF44FF50D4F06146EF6B9FE6A8BB24980D629(G_B11_2, G_B11_1, G_B11_0, Dictionary_2_Add_m4FEBF44FF50D4F06146EF6B9FE6A8BB24980D629_RuntimeMethod_var);
		Dictionary_2_t2BEE0B6563F88D6F1ACA1C7095F12BB7F1A7C0BA* L_47 = G_B11_3;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var);
		ButtonFromDownloader_1_tA2799689A60EC73EF8B5AE562F93CEE4D53AC0C6* L_48 = ((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9__14_9_3;
		ButtonFromDownloader_1_tA2799689A60EC73EF8B5AE562F93CEE4D53AC0C6* L_49 = L_48;
		G_B12_0 = L_49;
		G_B12_1 = ((int32_t)99);
		G_B12_2 = L_47;
		G_B12_3 = L_47;
		G_B12_4 = G_B11_4;
		if (L_49)
		{
			G_B13_0 = L_49;
			G_B13_1 = ((int32_t)99);
			G_B13_2 = L_47;
			G_B13_3 = L_47;
			G_B13_4 = G_B11_4;
			goto IL_019b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var);
		U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E* L_50 = ((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		ButtonFromDownloader_1_tA2799689A60EC73EF8B5AE562F93CEE4D53AC0C6* L_51 = (ButtonFromDownloader_1_tA2799689A60EC73EF8B5AE562F93CEE4D53AC0C6*)il2cpp_codegen_object_new(ButtonFromDownloader_1_tA2799689A60EC73EF8B5AE562F93CEE4D53AC0C6_il2cpp_TypeInfo_var);
		NullCheck(L_51);
		ButtonFromDownloader_1__ctor_mD8EED84996D9852722BFD5B10AFAC3F62877BD23(L_51, L_50, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__14_9_mB029598F4E8C36236E6FEB9B93BF0E334CD0BA68_RuntimeMethod_var), NULL);
		ButtonFromDownloader_1_tA2799689A60EC73EF8B5AE562F93CEE4D53AC0C6* L_52 = L_51;
		((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9__14_9_3 = L_52;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9__14_9_3), (void*)L_52);
		G_B13_0 = L_52;
		G_B13_1 = G_B12_1;
		G_B13_2 = G_B12_2;
		G_B13_3 = G_B12_3;
		G_B13_4 = G_B12_4;
	}

IL_019b:
	{
		NullCheck(G_B13_2);
		Dictionary_2_Add_m4FEBF44FF50D4F06146EF6B9FE6A8BB24980D629(G_B13_2, G_B13_1, G_B13_0, Dictionary_2_Add_m4FEBF44FF50D4F06146EF6B9FE6A8BB24980D629_RuntimeMethod_var);
		Dictionary_2_t2BEE0B6563F88D6F1ACA1C7095F12BB7F1A7C0BA* L_53 = G_B13_3;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var);
		ButtonFromDownloader_1_tA2799689A60EC73EF8B5AE562F93CEE4D53AC0C6* L_54 = ((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9__14_10_4;
		ButtonFromDownloader_1_tA2799689A60EC73EF8B5AE562F93CEE4D53AC0C6* L_55 = L_54;
		G_B14_0 = L_55;
		G_B14_1 = ((int32_t)120);
		G_B14_2 = L_53;
		G_B14_3 = L_53;
		G_B14_4 = G_B13_4;
		if (L_55)
		{
			G_B15_0 = L_55;
			G_B15_1 = ((int32_t)120);
			G_B15_2 = L_53;
			G_B15_3 = L_53;
			G_B15_4 = G_B13_4;
			goto IL_01c3;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var);
		U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E* L_56 = ((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		ButtonFromDownloader_1_tA2799689A60EC73EF8B5AE562F93CEE4D53AC0C6* L_57 = (ButtonFromDownloader_1_tA2799689A60EC73EF8B5AE562F93CEE4D53AC0C6*)il2cpp_codegen_object_new(ButtonFromDownloader_1_tA2799689A60EC73EF8B5AE562F93CEE4D53AC0C6_il2cpp_TypeInfo_var);
		NullCheck(L_57);
		ButtonFromDownloader_1__ctor_mD8EED84996D9852722BFD5B10AFAC3F62877BD23(L_57, L_56, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__14_10_m98433FD475CC327AF2AB1E6C2FDE8552B1872CE8_RuntimeMethod_var), NULL);
		ButtonFromDownloader_1_tA2799689A60EC73EF8B5AE562F93CEE4D53AC0C6* L_58 = L_57;
		((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9__14_10_4 = L_58;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9__14_10_4), (void*)L_58);
		G_B15_0 = L_58;
		G_B15_1 = G_B14_1;
		G_B15_2 = G_B14_2;
		G_B15_3 = G_B14_3;
		G_B15_4 = G_B14_4;
	}

IL_01c3:
	{
		NullCheck(G_B15_2);
		Dictionary_2_Add_m4FEBF44FF50D4F06146EF6B9FE6A8BB24980D629(G_B15_2, G_B15_1, G_B15_0, Dictionary_2_Add_m4FEBF44FF50D4F06146EF6B9FE6A8BB24980D629_RuntimeMethod_var);
		NullCheck(G_B15_4);
		G_B15_4->___KeyMapping_0 = G_B15_3;
		Il2CppCodeGenWriteBarrier((void**)(&G_B15_4->___KeyMapping_0), (void*)G_B15_3);
		// _assetPackKeyMapping.KeyMapping = new Dictionary<KeyCode, ButtonFromDownloader<AssetPackDownloader>>()
		// {
		//     {KeyCode.R, downloader => downloader.RetrieveAssetBundleButton},
		//     {KeyCode.L, downloader => downloader.LoadSceneButton},
		//     {KeyCode.C, downloader => downloader.CancelDownloadButton},
		//     {KeyCode.X, downloader => downloader.RemoveButton},
		//     {KeyCode.O, downloader => downloader.LoadAssetBundleButton},
		// };
		DemoController_t10B60839C2F080D6587383BA0242AC07EC1965B2* L_59 = __this->___U3CU3E4__this_2;
		NullCheck(L_59);
		DownloaderInputMapper_1_t31C9AC8D70F7A548AAC262167CA8C370BDBEA957* L_60 = L_59->____assetPackKeyMapping_9;
		Dictionary_2_t3BEBDC70F0A50BB404F53D3071BFBE3E192BB9BC* L_61 = (Dictionary_2_t3BEBDC70F0A50BB404F53D3071BFBE3E192BB9BC*)il2cpp_codegen_object_new(Dictionary_2_t3BEBDC70F0A50BB404F53D3071BFBE3E192BB9BC_il2cpp_TypeInfo_var);
		NullCheck(L_61);
		Dictionary_2__ctor_mF1138E99255A29F054BABFABC8228D927F081237(L_61, Dictionary_2__ctor_mF1138E99255A29F054BABFABC8228D927F081237_RuntimeMethod_var);
		Dictionary_2_t3BEBDC70F0A50BB404F53D3071BFBE3E192BB9BC* L_62 = L_61;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var);
		ButtonFromDownloader_1_t506B9580D771FD322640060B6F2DC5B4F0D17C8C* L_63 = ((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9__14_11_5;
		ButtonFromDownloader_1_t506B9580D771FD322640060B6F2DC5B4F0D17C8C* L_64 = L_63;
		G_B16_0 = L_64;
		G_B16_1 = ((int32_t)114);
		G_B16_2 = L_62;
		G_B16_3 = L_62;
		G_B16_4 = L_60;
		if (L_64)
		{
			G_B17_0 = L_64;
			G_B17_1 = ((int32_t)114);
			G_B17_2 = L_62;
			G_B17_3 = L_62;
			G_B17_4 = L_60;
			goto IL_0200;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var);
		U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E* L_65 = ((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		ButtonFromDownloader_1_t506B9580D771FD322640060B6F2DC5B4F0D17C8C* L_66 = (ButtonFromDownloader_1_t506B9580D771FD322640060B6F2DC5B4F0D17C8C*)il2cpp_codegen_object_new(ButtonFromDownloader_1_t506B9580D771FD322640060B6F2DC5B4F0D17C8C_il2cpp_TypeInfo_var);
		NullCheck(L_66);
		ButtonFromDownloader_1__ctor_m83A92B4754FB75E858F8339F675EAC291DB035B8(L_66, L_65, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__14_11_m9FA451E7486BE1159968B77C471B41B70666A2FF_RuntimeMethod_var), NULL);
		ButtonFromDownloader_1_t506B9580D771FD322640060B6F2DC5B4F0D17C8C* L_67 = L_66;
		((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9__14_11_5 = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9__14_11_5), (void*)L_67);
		G_B17_0 = L_67;
		G_B17_1 = G_B16_1;
		G_B17_2 = G_B16_2;
		G_B17_3 = G_B16_3;
		G_B17_4 = G_B16_4;
	}

IL_0200:
	{
		NullCheck(G_B17_2);
		Dictionary_2_Add_m706C3E8D2AEADEF73B2A0957C636FB5644FAED99(G_B17_2, G_B17_1, G_B17_0, Dictionary_2_Add_m706C3E8D2AEADEF73B2A0957C636FB5644FAED99_RuntimeMethod_var);
		Dictionary_2_t3BEBDC70F0A50BB404F53D3071BFBE3E192BB9BC* L_68 = G_B17_3;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var);
		ButtonFromDownloader_1_t506B9580D771FD322640060B6F2DC5B4F0D17C8C* L_69 = ((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9__14_12_6;
		ButtonFromDownloader_1_t506B9580D771FD322640060B6F2DC5B4F0D17C8C* L_70 = L_69;
		G_B18_0 = L_70;
		G_B18_1 = ((int32_t)108);
		G_B18_2 = L_68;
		G_B18_3 = L_68;
		G_B18_4 = G_B17_4;
		if (L_70)
		{
			G_B19_0 = L_70;
			G_B19_1 = ((int32_t)108);
			G_B19_2 = L_68;
			G_B19_3 = L_68;
			G_B19_4 = G_B17_4;
			goto IL_0228;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var);
		U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E* L_71 = ((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		ButtonFromDownloader_1_t506B9580D771FD322640060B6F2DC5B4F0D17C8C* L_72 = (ButtonFromDownloader_1_t506B9580D771FD322640060B6F2DC5B4F0D17C8C*)il2cpp_codegen_object_new(ButtonFromDownloader_1_t506B9580D771FD322640060B6F2DC5B4F0D17C8C_il2cpp_TypeInfo_var);
		NullCheck(L_72);
		ButtonFromDownloader_1__ctor_m83A92B4754FB75E858F8339F675EAC291DB035B8(L_72, L_71, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__14_12_m54658B19B36A0BDD2EB66934D65C2D8E1F6A2261_RuntimeMethod_var), NULL);
		ButtonFromDownloader_1_t506B9580D771FD322640060B6F2DC5B4F0D17C8C* L_73 = L_72;
		((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9__14_12_6 = L_73;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9__14_12_6), (void*)L_73);
		G_B19_0 = L_73;
		G_B19_1 = G_B18_1;
		G_B19_2 = G_B18_2;
		G_B19_3 = G_B18_3;
		G_B19_4 = G_B18_4;
	}

IL_0228:
	{
		NullCheck(G_B19_2);
		Dictionary_2_Add_m706C3E8D2AEADEF73B2A0957C636FB5644FAED99(G_B19_2, G_B19_1, G_B19_0, Dictionary_2_Add_m706C3E8D2AEADEF73B2A0957C636FB5644FAED99_RuntimeMethod_var);
		Dictionary_2_t3BEBDC70F0A50BB404F53D3071BFBE3E192BB9BC* L_74 = G_B19_3;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var);
		ButtonFromDownloader_1_t506B9580D771FD322640060B6F2DC5B4F0D17C8C* L_75 = ((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9__14_13_7;
		ButtonFromDownloader_1_t506B9580D771FD322640060B6F2DC5B4F0D17C8C* L_76 = L_75;
		G_B20_0 = L_76;
		G_B20_1 = ((int32_t)99);
		G_B20_2 = L_74;
		G_B20_3 = L_74;
		G_B20_4 = G_B19_4;
		if (L_76)
		{
			G_B21_0 = L_76;
			G_B21_1 = ((int32_t)99);
			G_B21_2 = L_74;
			G_B21_3 = L_74;
			G_B21_4 = G_B19_4;
			goto IL_0250;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var);
		U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E* L_77 = ((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		ButtonFromDownloader_1_t506B9580D771FD322640060B6F2DC5B4F0D17C8C* L_78 = (ButtonFromDownloader_1_t506B9580D771FD322640060B6F2DC5B4F0D17C8C*)il2cpp_codegen_object_new(ButtonFromDownloader_1_t506B9580D771FD322640060B6F2DC5B4F0D17C8C_il2cpp_TypeInfo_var);
		NullCheck(L_78);
		ButtonFromDownloader_1__ctor_m83A92B4754FB75E858F8339F675EAC291DB035B8(L_78, L_77, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__14_13_m0B889C47B5C842B33DCD80D0FF780AF33C5C436A_RuntimeMethod_var), NULL);
		ButtonFromDownloader_1_t506B9580D771FD322640060B6F2DC5B4F0D17C8C* L_79 = L_78;
		((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9__14_13_7 = L_79;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9__14_13_7), (void*)L_79);
		G_B21_0 = L_79;
		G_B21_1 = G_B20_1;
		G_B21_2 = G_B20_2;
		G_B21_3 = G_B20_3;
		G_B21_4 = G_B20_4;
	}

IL_0250:
	{
		NullCheck(G_B21_2);
		Dictionary_2_Add_m706C3E8D2AEADEF73B2A0957C636FB5644FAED99(G_B21_2, G_B21_1, G_B21_0, Dictionary_2_Add_m706C3E8D2AEADEF73B2A0957C636FB5644FAED99_RuntimeMethod_var);
		Dictionary_2_t3BEBDC70F0A50BB404F53D3071BFBE3E192BB9BC* L_80 = G_B21_3;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var);
		ButtonFromDownloader_1_t506B9580D771FD322640060B6F2DC5B4F0D17C8C* L_81 = ((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9__14_14_8;
		ButtonFromDownloader_1_t506B9580D771FD322640060B6F2DC5B4F0D17C8C* L_82 = L_81;
		G_B22_0 = L_82;
		G_B22_1 = ((int32_t)120);
		G_B22_2 = L_80;
		G_B22_3 = L_80;
		G_B22_4 = G_B21_4;
		if (L_82)
		{
			G_B23_0 = L_82;
			G_B23_1 = ((int32_t)120);
			G_B23_2 = L_80;
			G_B23_3 = L_80;
			G_B23_4 = G_B21_4;
			goto IL_0278;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var);
		U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E* L_83 = ((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		ButtonFromDownloader_1_t506B9580D771FD322640060B6F2DC5B4F0D17C8C* L_84 = (ButtonFromDownloader_1_t506B9580D771FD322640060B6F2DC5B4F0D17C8C*)il2cpp_codegen_object_new(ButtonFromDownloader_1_t506B9580D771FD322640060B6F2DC5B4F0D17C8C_il2cpp_TypeInfo_var);
		NullCheck(L_84);
		ButtonFromDownloader_1__ctor_m83A92B4754FB75E858F8339F675EAC291DB035B8(L_84, L_83, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__14_14_m35D1D25C87C957E5CC8D6518873BE09C06D39BAD_RuntimeMethod_var), NULL);
		ButtonFromDownloader_1_t506B9580D771FD322640060B6F2DC5B4F0D17C8C* L_85 = L_84;
		((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9__14_14_8 = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9__14_14_8), (void*)L_85);
		G_B23_0 = L_85;
		G_B23_1 = G_B22_1;
		G_B23_2 = G_B22_2;
		G_B23_3 = G_B22_3;
		G_B23_4 = G_B22_4;
	}

IL_0278:
	{
		NullCheck(G_B23_2);
		Dictionary_2_Add_m706C3E8D2AEADEF73B2A0957C636FB5644FAED99(G_B23_2, G_B23_1, G_B23_0, Dictionary_2_Add_m706C3E8D2AEADEF73B2A0957C636FB5644FAED99_RuntimeMethod_var);
		Dictionary_2_t3BEBDC70F0A50BB404F53D3071BFBE3E192BB9BC* L_86 = G_B23_3;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var);
		ButtonFromDownloader_1_t506B9580D771FD322640060B6F2DC5B4F0D17C8C* L_87 = ((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9__14_15_9;
		ButtonFromDownloader_1_t506B9580D771FD322640060B6F2DC5B4F0D17C8C* L_88 = L_87;
		G_B24_0 = L_88;
		G_B24_1 = ((int32_t)111);
		G_B24_2 = L_86;
		G_B24_3 = L_86;
		G_B24_4 = G_B23_4;
		if (L_88)
		{
			G_B25_0 = L_88;
			G_B25_1 = ((int32_t)111);
			G_B25_2 = L_86;
			G_B25_3 = L_86;
			G_B25_4 = G_B23_4;
			goto IL_02a0;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var);
		U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E* L_89 = ((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		ButtonFromDownloader_1_t506B9580D771FD322640060B6F2DC5B4F0D17C8C* L_90 = (ButtonFromDownloader_1_t506B9580D771FD322640060B6F2DC5B4F0D17C8C*)il2cpp_codegen_object_new(ButtonFromDownloader_1_t506B9580D771FD322640060B6F2DC5B4F0D17C8C_il2cpp_TypeInfo_var);
		NullCheck(L_90);
		ButtonFromDownloader_1__ctor_m83A92B4754FB75E858F8339F675EAC291DB035B8(L_90, L_89, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__14_15_mB3ECA26A8735F5056A787B256D5BF98E6F051D6A_RuntimeMethod_var), NULL);
		ButtonFromDownloader_1_t506B9580D771FD322640060B6F2DC5B4F0D17C8C* L_91 = L_90;
		((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9__14_15_9 = L_91;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9__14_15_9), (void*)L_91);
		G_B25_0 = L_91;
		G_B25_1 = G_B24_1;
		G_B25_2 = G_B24_2;
		G_B25_3 = G_B24_3;
		G_B25_4 = G_B24_4;
	}

IL_02a0:
	{
		NullCheck(G_B25_2);
		Dictionary_2_Add_m706C3E8D2AEADEF73B2A0957C636FB5644FAED99(G_B25_2, G_B25_1, G_B25_0, Dictionary_2_Add_m706C3E8D2AEADEF73B2A0957C636FB5644FAED99_RuntimeMethod_var);
		NullCheck(G_B25_4);
		G_B25_4->___KeyMapping_0 = G_B25_3;
		Il2CppCodeGenWriteBarrier((void**)(&G_B25_4->___KeyMapping_0), (void*)G_B25_3);
		// _assetPackBatchKeyMapping.KeyMapping =
		//     new Dictionary<KeyCode, ButtonFromDownloader<AssetPackBatchDownloader>>()
		//     {
		//         {KeyCode.R, downloader => downloader.RetrieveAssetPackBatchButton},
		//         {KeyCode.X, downloader => downloader.RemovePacksButton},
		//         {KeyCode.I, downloader => downloader.Assets[0].DisplayContentsButton},
		//         {KeyCode.J, downloader => downloader.Assets[1].DisplayContentsButton},
		//         {KeyCode.K, downloader => downloader.Assets[2].DisplayContentsButton},
		//     };
		DemoController_t10B60839C2F080D6587383BA0242AC07EC1965B2* L_92 = __this->___U3CU3E4__this_2;
		NullCheck(L_92);
		DownloaderInputMapper_1_tA52A4D97B24F5A9239FC2D6848A74C26AE76A790* L_93 = L_92->____assetPackBatchKeyMapping_10;
		Dictionary_2_t91C8A923863C4F8996A36010D3447BD78F809F8D* L_94 = (Dictionary_2_t91C8A923863C4F8996A36010D3447BD78F809F8D*)il2cpp_codegen_object_new(Dictionary_2_t91C8A923863C4F8996A36010D3447BD78F809F8D_il2cpp_TypeInfo_var);
		NullCheck(L_94);
		Dictionary_2__ctor_mC8A2ED7AF1169869007C72B5A3D2101FA015D882(L_94, Dictionary_2__ctor_mC8A2ED7AF1169869007C72B5A3D2101FA015D882_RuntimeMethod_var);
		Dictionary_2_t91C8A923863C4F8996A36010D3447BD78F809F8D* L_95 = L_94;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var);
		ButtonFromDownloader_1_tD7993D71501910BD8D13A0D63844C4D8699E43D3* L_96 = ((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9__14_16_10;
		ButtonFromDownloader_1_tD7993D71501910BD8D13A0D63844C4D8699E43D3* L_97 = L_96;
		G_B26_0 = L_97;
		G_B26_1 = ((int32_t)114);
		G_B26_2 = L_95;
		G_B26_3 = L_95;
		G_B26_4 = L_93;
		if (L_97)
		{
			G_B27_0 = L_97;
			G_B27_1 = ((int32_t)114);
			G_B27_2 = L_95;
			G_B27_3 = L_95;
			G_B27_4 = L_93;
			goto IL_02dd;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var);
		U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E* L_98 = ((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		ButtonFromDownloader_1_tD7993D71501910BD8D13A0D63844C4D8699E43D3* L_99 = (ButtonFromDownloader_1_tD7993D71501910BD8D13A0D63844C4D8699E43D3*)il2cpp_codegen_object_new(ButtonFromDownloader_1_tD7993D71501910BD8D13A0D63844C4D8699E43D3_il2cpp_TypeInfo_var);
		NullCheck(L_99);
		ButtonFromDownloader_1__ctor_m4D6FFAFA81D2A3D6376EC0BCCC93C8A214F063BF(L_99, L_98, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__14_16_m29A50BEE8A8EF02D4A58421473A619D4B26A0A92_RuntimeMethod_var), NULL);
		ButtonFromDownloader_1_tD7993D71501910BD8D13A0D63844C4D8699E43D3* L_100 = L_99;
		((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9__14_16_10 = L_100;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9__14_16_10), (void*)L_100);
		G_B27_0 = L_100;
		G_B27_1 = G_B26_1;
		G_B27_2 = G_B26_2;
		G_B27_3 = G_B26_3;
		G_B27_4 = G_B26_4;
	}

IL_02dd:
	{
		NullCheck(G_B27_2);
		Dictionary_2_Add_m9F4E1EF1159C1F90E9F6A52ED3F9ABF28F8D87E0(G_B27_2, G_B27_1, G_B27_0, Dictionary_2_Add_m9F4E1EF1159C1F90E9F6A52ED3F9ABF28F8D87E0_RuntimeMethod_var);
		Dictionary_2_t91C8A923863C4F8996A36010D3447BD78F809F8D* L_101 = G_B27_3;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var);
		ButtonFromDownloader_1_tD7993D71501910BD8D13A0D63844C4D8699E43D3* L_102 = ((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9__14_17_11;
		ButtonFromDownloader_1_tD7993D71501910BD8D13A0D63844C4D8699E43D3* L_103 = L_102;
		G_B28_0 = L_103;
		G_B28_1 = ((int32_t)120);
		G_B28_2 = L_101;
		G_B28_3 = L_101;
		G_B28_4 = G_B27_4;
		if (L_103)
		{
			G_B29_0 = L_103;
			G_B29_1 = ((int32_t)120);
			G_B29_2 = L_101;
			G_B29_3 = L_101;
			G_B29_4 = G_B27_4;
			goto IL_0305;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var);
		U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E* L_104 = ((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		ButtonFromDownloader_1_tD7993D71501910BD8D13A0D63844C4D8699E43D3* L_105 = (ButtonFromDownloader_1_tD7993D71501910BD8D13A0D63844C4D8699E43D3*)il2cpp_codegen_object_new(ButtonFromDownloader_1_tD7993D71501910BD8D13A0D63844C4D8699E43D3_il2cpp_TypeInfo_var);
		NullCheck(L_105);
		ButtonFromDownloader_1__ctor_m4D6FFAFA81D2A3D6376EC0BCCC93C8A214F063BF(L_105, L_104, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__14_17_m37E4A467D27A4F7F2913CC04EDCF79B0FB965177_RuntimeMethod_var), NULL);
		ButtonFromDownloader_1_tD7993D71501910BD8D13A0D63844C4D8699E43D3* L_106 = L_105;
		((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9__14_17_11 = L_106;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9__14_17_11), (void*)L_106);
		G_B29_0 = L_106;
		G_B29_1 = G_B28_1;
		G_B29_2 = G_B28_2;
		G_B29_3 = G_B28_3;
		G_B29_4 = G_B28_4;
	}

IL_0305:
	{
		NullCheck(G_B29_2);
		Dictionary_2_Add_m9F4E1EF1159C1F90E9F6A52ED3F9ABF28F8D87E0(G_B29_2, G_B29_1, G_B29_0, Dictionary_2_Add_m9F4E1EF1159C1F90E9F6A52ED3F9ABF28F8D87E0_RuntimeMethod_var);
		Dictionary_2_t91C8A923863C4F8996A36010D3447BD78F809F8D* L_107 = G_B29_3;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var);
		ButtonFromDownloader_1_tD7993D71501910BD8D13A0D63844C4D8699E43D3* L_108 = ((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9__14_18_12;
		ButtonFromDownloader_1_tD7993D71501910BD8D13A0D63844C4D8699E43D3* L_109 = L_108;
		G_B30_0 = L_109;
		G_B30_1 = ((int32_t)105);
		G_B30_2 = L_107;
		G_B30_3 = L_107;
		G_B30_4 = G_B29_4;
		if (L_109)
		{
			G_B31_0 = L_109;
			G_B31_1 = ((int32_t)105);
			G_B31_2 = L_107;
			G_B31_3 = L_107;
			G_B31_4 = G_B29_4;
			goto IL_032d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var);
		U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E* L_110 = ((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		ButtonFromDownloader_1_tD7993D71501910BD8D13A0D63844C4D8699E43D3* L_111 = (ButtonFromDownloader_1_tD7993D71501910BD8D13A0D63844C4D8699E43D3*)il2cpp_codegen_object_new(ButtonFromDownloader_1_tD7993D71501910BD8D13A0D63844C4D8699E43D3_il2cpp_TypeInfo_var);
		NullCheck(L_111);
		ButtonFromDownloader_1__ctor_m4D6FFAFA81D2A3D6376EC0BCCC93C8A214F063BF(L_111, L_110, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__14_18_m0F3CAC92F74363CF165D529D94591DB23038AD56_RuntimeMethod_var), NULL);
		ButtonFromDownloader_1_tD7993D71501910BD8D13A0D63844C4D8699E43D3* L_112 = L_111;
		((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9__14_18_12 = L_112;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9__14_18_12), (void*)L_112);
		G_B31_0 = L_112;
		G_B31_1 = G_B30_1;
		G_B31_2 = G_B30_2;
		G_B31_3 = G_B30_3;
		G_B31_4 = G_B30_4;
	}

IL_032d:
	{
		NullCheck(G_B31_2);
		Dictionary_2_Add_m9F4E1EF1159C1F90E9F6A52ED3F9ABF28F8D87E0(G_B31_2, G_B31_1, G_B31_0, Dictionary_2_Add_m9F4E1EF1159C1F90E9F6A52ED3F9ABF28F8D87E0_RuntimeMethod_var);
		Dictionary_2_t91C8A923863C4F8996A36010D3447BD78F809F8D* L_113 = G_B31_3;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var);
		ButtonFromDownloader_1_tD7993D71501910BD8D13A0D63844C4D8699E43D3* L_114 = ((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9__14_19_13;
		ButtonFromDownloader_1_tD7993D71501910BD8D13A0D63844C4D8699E43D3* L_115 = L_114;
		G_B32_0 = L_115;
		G_B32_1 = ((int32_t)106);
		G_B32_2 = L_113;
		G_B32_3 = L_113;
		G_B32_4 = G_B31_4;
		if (L_115)
		{
			G_B33_0 = L_115;
			G_B33_1 = ((int32_t)106);
			G_B33_2 = L_113;
			G_B33_3 = L_113;
			G_B33_4 = G_B31_4;
			goto IL_0355;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var);
		U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E* L_116 = ((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		ButtonFromDownloader_1_tD7993D71501910BD8D13A0D63844C4D8699E43D3* L_117 = (ButtonFromDownloader_1_tD7993D71501910BD8D13A0D63844C4D8699E43D3*)il2cpp_codegen_object_new(ButtonFromDownloader_1_tD7993D71501910BD8D13A0D63844C4D8699E43D3_il2cpp_TypeInfo_var);
		NullCheck(L_117);
		ButtonFromDownloader_1__ctor_m4D6FFAFA81D2A3D6376EC0BCCC93C8A214F063BF(L_117, L_116, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__14_19_mE9996538E943FE198A028674D56715FAFF71136B_RuntimeMethod_var), NULL);
		ButtonFromDownloader_1_tD7993D71501910BD8D13A0D63844C4D8699E43D3* L_118 = L_117;
		((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9__14_19_13 = L_118;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9__14_19_13), (void*)L_118);
		G_B33_0 = L_118;
		G_B33_1 = G_B32_1;
		G_B33_2 = G_B32_2;
		G_B33_3 = G_B32_3;
		G_B33_4 = G_B32_4;
	}

IL_0355:
	{
		NullCheck(G_B33_2);
		Dictionary_2_Add_m9F4E1EF1159C1F90E9F6A52ED3F9ABF28F8D87E0(G_B33_2, G_B33_1, G_B33_0, Dictionary_2_Add_m9F4E1EF1159C1F90E9F6A52ED3F9ABF28F8D87E0_RuntimeMethod_var);
		Dictionary_2_t91C8A923863C4F8996A36010D3447BD78F809F8D* L_119 = G_B33_3;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var);
		ButtonFromDownloader_1_tD7993D71501910BD8D13A0D63844C4D8699E43D3* L_120 = ((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9__14_20_14;
		ButtonFromDownloader_1_tD7993D71501910BD8D13A0D63844C4D8699E43D3* L_121 = L_120;
		G_B34_0 = L_121;
		G_B34_1 = ((int32_t)107);
		G_B34_2 = L_119;
		G_B34_3 = L_119;
		G_B34_4 = G_B33_4;
		if (L_121)
		{
			G_B35_0 = L_121;
			G_B35_1 = ((int32_t)107);
			G_B35_2 = L_119;
			G_B35_3 = L_119;
			G_B35_4 = G_B33_4;
			goto IL_037d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var);
		U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E* L_122 = ((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		ButtonFromDownloader_1_tD7993D71501910BD8D13A0D63844C4D8699E43D3* L_123 = (ButtonFromDownloader_1_tD7993D71501910BD8D13A0D63844C4D8699E43D3*)il2cpp_codegen_object_new(ButtonFromDownloader_1_tD7993D71501910BD8D13A0D63844C4D8699E43D3_il2cpp_TypeInfo_var);
		NullCheck(L_123);
		ButtonFromDownloader_1__ctor_m4D6FFAFA81D2A3D6376EC0BCCC93C8A214F063BF(L_123, L_122, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__14_20_m74E5FEB419BA570C475EC85DA14C9049EA6B3986_RuntimeMethod_var), NULL);
		ButtonFromDownloader_1_tD7993D71501910BD8D13A0D63844C4D8699E43D3* L_124 = L_123;
		((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9__14_20_14 = L_124;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9__14_20_14), (void*)L_124);
		G_B35_0 = L_124;
		G_B35_1 = G_B34_1;
		G_B35_2 = G_B34_2;
		G_B35_3 = G_B34_3;
		G_B35_4 = G_B34_4;
	}

IL_037d:
	{
		NullCheck(G_B35_2);
		Dictionary_2_Add_m9F4E1EF1159C1F90E9F6A52ED3F9ABF28F8D87E0(G_B35_2, G_B35_1, G_B35_0, Dictionary_2_Add_m9F4E1EF1159C1F90E9F6A52ED3F9ABF28F8D87E0_RuntimeMethod_var);
		NullCheck(G_B35_4);
		G_B35_4->___KeyMapping_0 = G_B35_3;
		Il2CppCodeGenWriteBarrier((void**)(&G_B35_4->___KeyMapping_0), (void*)G_B35_3);
		// _downloaderInputMappers = new List<IDownloaderInputMapper>()
		// {
		//     _assetBundleKeyMapping,
		//     _assetPackKeyMapping,
		//     _assetPackBatchKeyMapping
		// };
		DemoController_t10B60839C2F080D6587383BA0242AC07EC1965B2* L_125 = __this->___U3CU3E4__this_2;
		List_1_tE9981AC1FFBE2D475181694CF7B1674AB079D4EC* L_126 = (List_1_tE9981AC1FFBE2D475181694CF7B1674AB079D4EC*)il2cpp_codegen_object_new(List_1_tE9981AC1FFBE2D475181694CF7B1674AB079D4EC_il2cpp_TypeInfo_var);
		NullCheck(L_126);
		List_1__ctor_mAC889D2D3A04D4473E8B932E17FBD4A18E17852B(L_126, List_1__ctor_mAC889D2D3A04D4473E8B932E17FBD4A18E17852B_RuntimeMethod_var);
		List_1_tE9981AC1FFBE2D475181694CF7B1674AB079D4EC* L_127 = L_126;
		DemoController_t10B60839C2F080D6587383BA0242AC07EC1965B2* L_128 = __this->___U3CU3E4__this_2;
		NullCheck(L_128);
		DownloaderInputMapper_1_tD40C43DD11CCDB08EA8C1419FFE3114433C1ABE4* L_129 = L_128->____assetBundleKeyMapping_8;
		NullCheck(L_127);
		List_1_Add_m9E44E7DEE89BE92B8AA50AACDFE26D66CACCEFBB_inline(L_127, L_129, List_1_Add_m9E44E7DEE89BE92B8AA50AACDFE26D66CACCEFBB_RuntimeMethod_var);
		List_1_tE9981AC1FFBE2D475181694CF7B1674AB079D4EC* L_130 = L_127;
		DemoController_t10B60839C2F080D6587383BA0242AC07EC1965B2* L_131 = __this->___U3CU3E4__this_2;
		NullCheck(L_131);
		DownloaderInputMapper_1_t31C9AC8D70F7A548AAC262167CA8C370BDBEA957* L_132 = L_131->____assetPackKeyMapping_9;
		NullCheck(L_130);
		List_1_Add_m9E44E7DEE89BE92B8AA50AACDFE26D66CACCEFBB_inline(L_130, L_132, List_1_Add_m9E44E7DEE89BE92B8AA50AACDFE26D66CACCEFBB_RuntimeMethod_var);
		List_1_tE9981AC1FFBE2D475181694CF7B1674AB079D4EC* L_133 = L_130;
		DemoController_t10B60839C2F080D6587383BA0242AC07EC1965B2* L_134 = __this->___U3CU3E4__this_2;
		NullCheck(L_134);
		DownloaderInputMapper_1_tA52A4D97B24F5A9239FC2D6848A74C26AE76A790* L_135 = L_134->____assetPackBatchKeyMapping_10;
		NullCheck(L_133);
		List_1_Add_m9E44E7DEE89BE92B8AA50AACDFE26D66CACCEFBB_inline(L_133, L_135, List_1_Add_m9E44E7DEE89BE92B8AA50AACDFE26D66CACCEFBB_RuntimeMethod_var);
		NullCheck(L_125);
		L_125->____downloaderInputMappers_13 = L_133;
		Il2CppCodeGenWriteBarrier((void**)(&L_125->____downloaderInputMappers_13), (void*)L_133);
		// _keyCodesMappedToCommands =
		//     _downloaderInputMappers.SelectMany(controller => controller.GetKeyCodes()).Distinct().ToList();
		DemoController_t10B60839C2F080D6587383BA0242AC07EC1965B2* L_136 = __this->___U3CU3E4__this_2;
		DemoController_t10B60839C2F080D6587383BA0242AC07EC1965B2* L_137 = __this->___U3CU3E4__this_2;
		NullCheck(L_137);
		List_1_tE9981AC1FFBE2D475181694CF7B1674AB079D4EC* L_138 = L_137->____downloaderInputMappers_13;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var);
		Func_2_t165CB6061C1CED35EC6B0E9FFDD60B5D4D36E2FA* L_139 = ((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9__14_0_15;
		Func_2_t165CB6061C1CED35EC6B0E9FFDD60B5D4D36E2FA* L_140 = L_139;
		G_B36_0 = L_140;
		G_B36_1 = L_138;
		G_B36_2 = L_136;
		if (L_140)
		{
			G_B37_0 = L_140;
			G_B37_1 = L_138;
			G_B37_2 = L_136;
			goto IL_03fe;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var);
		U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E* L_141 = ((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t165CB6061C1CED35EC6B0E9FFDD60B5D4D36E2FA* L_142 = (Func_2_t165CB6061C1CED35EC6B0E9FFDD60B5D4D36E2FA*)il2cpp_codegen_object_new(Func_2_t165CB6061C1CED35EC6B0E9FFDD60B5D4D36E2FA_il2cpp_TypeInfo_var);
		NullCheck(L_142);
		Func_2__ctor_mEE7FEAACBB5916CF2A0E2DAD624AF220DC163C23(L_142, L_141, (intptr_t)((void*)U3CU3Ec_U3CStartU3Eb__14_0_mB18DAB495E0ADA7B93B5035645E4937993603D62_RuntimeMethod_var), NULL);
		Func_2_t165CB6061C1CED35EC6B0E9FFDD60B5D4D36E2FA* L_143 = L_142;
		((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9__14_0_15 = L_143;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t415770691B372B50F58CDD73EDF6017C8A98826E_il2cpp_TypeInfo_var))->___U3CU3E9__14_0_15), (void*)L_143);
		G_B37_0 = L_143;
		G_B37_1 = G_B36_1;
		G_B37_2 = G_B36_2;
	}

IL_03fe:
	{
		RuntimeObject* L_144;
		L_144 = Enumerable_SelectMany_TisIDownloaderInputMapper_t523C8C42D42142DC2400EA308C9E3DCA1829A398_TisKeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_m4AF0815E4628A9A5FC3B69FE78BEEF6CD3FCBD7C(G_B37_1, G_B37_0, Enumerable_SelectMany_TisIDownloaderInputMapper_t523C8C42D42142DC2400EA308C9E3DCA1829A398_TisKeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_m4AF0815E4628A9A5FC3B69FE78BEEF6CD3FCBD7C_RuntimeMethod_var);
		RuntimeObject* L_145;
		L_145 = Enumerable_Distinct_TisKeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_mA20F5EAE0BA56B5438E077C38B3A04D33DFD392B(L_144, Enumerable_Distinct_TisKeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_mA20F5EAE0BA56B5438E077C38B3A04D33DFD392B_RuntimeMethod_var);
		List_1_tB7F9EA9DD46F974E3E396408B3EF9E0ED62F6D32* L_146;
		L_146 = Enumerable_ToList_TisKeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_mBDCDE5676D2E03C287AB081ABD3B45F01243BAA2(L_145, Enumerable_ToList_TisKeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9_mBDCDE5676D2E03C287AB081ABD3B45F01243BAA2_RuntimeMethod_var);
		NullCheck(G_B37_2);
		G_B37_2->____keyCodesMappedToCommands_12 = L_146;
		Il2CppCodeGenWriteBarrier((void**)(&G_B37_2->____keyCodesMappedToCommands_12), (void*)L_146);
		// Debug.Log("Initialized key mappings");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral43ED1501FDD5A66D5F7E4D3D8687EB5390A64DFD, NULL);
		goto IL_0438;
	}

IL_041f:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0430:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0438:
	{
		// while (!AllDisplaysInitialized())
		DemoController_t10B60839C2F080D6587383BA0242AC07EC1965B2* L_147 = __this->___U3CU3E4__this_2;
		NullCheck(L_147);
		bool L_148;
		L_148 = DemoController_AllDisplaysInitialized_mE0570A8FF44586EF6CBD6E5616419DC07FAB4049(L_147, NULL);
		V_1 = (bool)((((int32_t)L_148) == ((int32_t)0))? 1 : 0);
		bool L_149 = V_1;
		if (L_149)
		{
			goto IL_041f;
		}
	}
	{
		// Debug.Log("Initialized download displays");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralBA63D640D14793065606B3839D23B018F48560BA, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<Start>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAC746958C4A3B34167F800C60EA817B5F46E5DCE (U3CStartU3Ed__14_t57AC3B2B24DE8B132D2F26ECD006DB1BB601B640* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<Start>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__14_System_Collections_IEnumerator_Reset_m6330BA2E0D53C5383C41D8C47415B540536573D7 (U3CStartU3Ed__14_t57AC3B2B24DE8B132D2F26ECD006DB1BB601B640* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartU3Ed__14_System_Collections_IEnumerator_Reset_m6330BA2E0D53C5383C41D8C47415B540536573D7_RuntimeMethod_var)));
	}
}
// System.Object Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<Start>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__14_System_Collections_IEnumerator_get_Current_m3000EAC1CEDB772503C79356A08490014AF2EB7C (U3CStartU3Ed__14_t57AC3B2B24DE8B132D2F26ECD006DB1BB601B640* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<>c__DisplayClass16_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass16_0__ctor_m09F4870BF63A54CD3BBB8FA005F36F6326505CCA (U3CU3Ec__DisplayClass16_0_t1AE2F007F691AB4C80A3A277A32D29363031A83F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// UnityEngine.UI.Button Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/<>c__DisplayClass16_0::<ProcessDownloaderCommand>b__0(Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/IDownloaderInputMapper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* U3CU3Ec__DisplayClass16_0_U3CProcessDownloaderCommandU3Eb__0_m8103F9670B35C94A6A782FB3C192415F55174978 (U3CU3Ec__DisplayClass16_0_t1AE2F007F691AB4C80A3A277A32D29363031A83F* __this, RuntimeObject* ___mapping0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDownloaderInputMapper_t523C8C42D42142DC2400EA308C9E3DCA1829A398_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// .Select(mapping => mapping.GetButton(keyCode, _selectedDownloaderObj))
		RuntimeObject* L_0 = ___mapping0;
		int32_t L_1 = __this->___keyCode_0;
		DemoController_t10B60839C2F080D6587383BA0242AC07EC1965B2* L_2 = __this->___U3CU3E4__this_1;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = L_2->____selectedDownloaderObj_6;
		NullCheck(L_0);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4;
		L_4 = InterfaceFuncInvoker2< Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098*, int32_t, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(0 /* UnityEngine.UI.Button Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoController/IDownloaderInputMapper::GetButton(UnityEngine.KeyCode,UnityEngine.GameObject) */, IDownloaderInputMapper_t523C8C42D42142DC2400EA308C9E3DCA1829A398_il2cpp_TypeInfo_var, L_0, L_1, L_3);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoPager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoPager_Start_m17E9FEC1949EAB30305682016FB770B725C8481F (DemoPager_t0470EDB09F4AE3D5CAAFC3AE112A3C07CB82F439* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DemoPager_ButtonEventNext_m5B2CB140222D9BAC38E93C834ECD4098546B5B04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DemoPager_ButtonEventPrevious_m402176840EDDD5F9F9AE2A02DC433B2F7484F1FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PageU5BU5D_tD10AF857BB16009CADF6D467592CA8B0EFCAEBD0* V_0 = NULL;
	int32_t V_1 = 0;
	Page_t654646AF8CFA0A91CB3477E71E5CAB53307D494B* V_2 = NULL;
	{
		// NextButton.onClick.AddListener(ButtonEventNext);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->___NextButton_5;
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_0, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_2, __this, (intptr_t)((void*)DemoPager_ButtonEventNext_m5B2CB140222D9BAC38E93C834ECD4098546B5B04_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_1, L_2, NULL);
		// PreviousButton.onClick.AddListener(ButtonEventPrevious);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->___PreviousButton_6;
		NullCheck(L_3);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_4;
		L_4 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C(L_3, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_5, __this, (intptr_t)((void*)DemoPager_ButtonEventPrevious_m402176840EDDD5F9F9AE2A02DC433B2F7484F1FB_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_4, L_5, NULL);
		// foreach (var page in Pages)
		PageU5BU5D_tD10AF857BB16009CADF6D467592CA8B0EFCAEBD0* L_6 = __this->___Pages_4;
		V_0 = L_6;
		V_1 = 0;
		goto IL_0075;
	}

IL_0047:
	{
		// foreach (var page in Pages)
		PageU5BU5D_tD10AF857BB16009CADF6D467592CA8B0EFCAEBD0* L_7 = V_0;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Page_t654646AF8CFA0A91CB3477E71E5CAB53307D494B* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_2 = L_10;
		// page.PageRoot.SetActive(true);
		Page_t654646AF8CFA0A91CB3477E71E5CAB53307D494B* L_11 = V_2;
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = L_11->___PageRoot_0;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)1, NULL);
		// page.PageRoot.transform.localPosition = _offscreenPosition;
		Page_t654646AF8CFA0A91CB3477E71E5CAB53307D494B* L_13 = V_2;
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = L_13->___PageRoot_0;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = __this->____offscreenPosition_9;
		NullCheck(L_15);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_15, L_16, NULL);
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0075:
	{
		// foreach (var page in Pages)
		int32_t L_18 = V_1;
		PageU5BU5D_tD10AF857BB16009CADF6D467592CA8B0EFCAEBD0* L_19 = V_0;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
		{
			goto IL_0047;
		}
	}
	{
		// SetPage(_currentIndex);
		int32_t L_20 = __this->____currentIndex_7;
		DemoPager_SetPage_mAD2DCEF7AB4EDFC7382FC39C1D75743F0664874D(__this, L_20, NULL);
		// }
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoPager::SetPage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoPager_SetPage_mAD2DCEF7AB4EDFC7382FC39C1D75743F0664874D (DemoPager_t0470EDB09F4AE3D5CAAFC3AE112A3C07CB82F439* __this, int32_t ___pageIndex0, const RuntimeMethod* method) 
{
	{
		// Pages[_currentIndex].PageRoot.transform.localPosition = _offscreenPosition;
		PageU5BU5D_tD10AF857BB16009CADF6D467592CA8B0EFCAEBD0* L_0 = __this->___Pages_4;
		int32_t L_1 = __this->____currentIndex_7;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Page_t654646AF8CFA0A91CB3477E71E5CAB53307D494B* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = L_3->___PageRoot_0;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->____offscreenPosition_9;
		NullCheck(L_5);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_5, L_6, NULL);
		// _currentIndex = pageIndex;
		int32_t L_7 = ___pageIndex0;
		__this->____currentIndex_7 = L_7;
		// Pages[_currentIndex].PageRoot.transform.localPosition = _visiblePosition;
		PageU5BU5D_tD10AF857BB16009CADF6D467592CA8B0EFCAEBD0* L_8 = __this->___Pages_4;
		int32_t L_9 = __this->____currentIndex_7;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Page_t654646AF8CFA0A91CB3477E71E5CAB53307D494B* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = L_11->___PageRoot_0;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = __this->____visiblePosition_8;
		NullCheck(L_13);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_13, L_14, NULL);
		// }
		return;
	}
}
// Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoPager/Page Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoPager::GetCurrentPage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Page_t654646AF8CFA0A91CB3477E71E5CAB53307D494B* DemoPager_GetCurrentPage_m996E87E0DB75F93B5AEA255063F4C2BC4AD5320D (DemoPager_t0470EDB09F4AE3D5CAAFC3AE112A3C07CB82F439* __this, const RuntimeMethod* method) 
{
	Page_t654646AF8CFA0A91CB3477E71E5CAB53307D494B* V_0 = NULL;
	{
		// return Pages[_currentIndex];
		PageU5BU5D_tD10AF857BB16009CADF6D467592CA8B0EFCAEBD0* L_0 = __this->___Pages_4;
		int32_t L_1 = __this->____currentIndex_7;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Page_t654646AF8CFA0A91CB3477E71E5CAB53307D494B* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		Page_t654646AF8CFA0A91CB3477E71E5CAB53307D494B* L_4 = V_0;
		return L_4;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoPager::ButtonEventNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoPager_ButtonEventNext_m5B2CB140222D9BAC38E93C834ECD4098546B5B04 (DemoPager_t0470EDB09F4AE3D5CAAFC3AE112A3C07CB82F439* __this, const RuntimeMethod* method) 
{
	{
		// SetPage((_currentIndex + 1) % Pages.Length);
		int32_t L_0 = __this->____currentIndex_7;
		PageU5BU5D_tD10AF857BB16009CADF6D467592CA8B0EFCAEBD0* L_1 = __this->___Pages_4;
		NullCheck(L_1);
		DemoPager_SetPage_mAD2DCEF7AB4EDFC7382FC39C1D75743F0664874D(__this, ((int32_t)(((int32_t)il2cpp_codegen_add(L_0, 1))%((int32_t)(((RuntimeArray*)L_1)->max_length)))), NULL);
		// }
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoPager::ButtonEventPrevious()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoPager_ButtonEventPrevious_m402176840EDDD5F9F9AE2A02DC433B2F7484F1FB (DemoPager_t0470EDB09F4AE3D5CAAFC3AE112A3C07CB82F439* __this, const RuntimeMethod* method) 
{
	{
		// SetPage((Pages.Length + _currentIndex - 1) % Pages.Length);
		PageU5BU5D_tD10AF857BB16009CADF6D467592CA8B0EFCAEBD0* L_0 = __this->___Pages_4;
		NullCheck(L_0);
		int32_t L_1 = __this->____currentIndex_7;
		PageU5BU5D_tD10AF857BB16009CADF6D467592CA8B0EFCAEBD0* L_2 = __this->___Pages_4;
		NullCheck(L_2);
		DemoPager_SetPage_mAD2DCEF7AB4EDFC7382FC39C1D75743F0664874D(__this, ((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_0)->max_length)), L_1)), 1))%((int32_t)(((RuntimeArray*)L_2)->max_length)))), NULL);
		// }
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoPager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoPager__ctor_mBF85BF4C4D9946CE66413D4EF0A9E1E66C002A2D (DemoPager_t0470EDB09F4AE3D5CAAFC3AE112A3C07CB82F439* __this, const RuntimeMethod* method) 
{
	{
		// private readonly Vector3 _visiblePosition = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->____visiblePosition_8 = L_0;
		// private readonly Vector3 _offscreenPosition = Vector3.right * 3000f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_1, (3000.0f), NULL);
		__this->____offscreenPosition_9 = L_2;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DemoPager/Page::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Page__ctor_m1BAC071B48A1E86AE496BDE7311EFD0DFE701F51 (Page_t654646AF8CFA0A91CB3477E71E5CAB53307D494B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DownloadDisplay::BindButton(UnityEngine.UI.Button,Google.Play.AssetDelivery.AssetDeliveryStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadDisplay_BindButton_m14577FE0BA953CD08832AFB68EF1519E2844D1C2 (DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___button0, int32_t ___status1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mB31DFE3E3E4C545989419040477D4A6A71DFAF23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t4DDDF01FED9147ADFACC4EBED3AE2CC23791E0E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m4F809219B2B92D16365B4B27F60BA2DD8F5A5650_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mBCE3BE1FB943396333E483F66490F0690048CA2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCB5B3B0C70F6DFB6B059BB2C65DC77B101849444_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tCB5B3B0C70F6DFB6B059BB2C65DC77B101849444* V_0 = NULL;
	bool V_1 = false;
	{
		// if (!_buttonsByStatus.TryGetValue(status, out buttonsForStatus))
		RuntimeObject* L_0 = __this->____buttonsByStatus_14;
		int32_t L_1 = ___status1;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker2< bool, int32_t, List_1_tCB5B3B0C70F6DFB6B059BB2C65DC77B101849444** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<Google.Play.AssetDelivery.AssetDeliveryStatus,System.Collections.Generic.List`1<UnityEngine.UI.Button>>::TryGetValue(TKey,TValue&) */, IDictionary_2_t4DDDF01FED9147ADFACC4EBED3AE2CC23791E0E6_il2cpp_TypeInfo_var, L_0, L_1, (&V_0));
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		// buttonsForStatus = new List<Button>();
		List_1_tCB5B3B0C70F6DFB6B059BB2C65DC77B101849444* L_4 = (List_1_tCB5B3B0C70F6DFB6B059BB2C65DC77B101849444*)il2cpp_codegen_object_new(List_1_tCB5B3B0C70F6DFB6B059BB2C65DC77B101849444_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_mBCE3BE1FB943396333E483F66490F0690048CA2E(L_4, List_1__ctor_mBCE3BE1FB943396333E483F66490F0690048CA2E_RuntimeMethod_var);
		V_0 = L_4;
		// _buttonsByStatus.Add(status, buttonsForStatus);
		RuntimeObject* L_5 = __this->____buttonsByStatus_14;
		int32_t L_6 = ___status1;
		List_1_tCB5B3B0C70F6DFB6B059BB2C65DC77B101849444* L_7 = V_0;
		NullCheck(L_5);
		InterfaceActionInvoker2< int32_t, List_1_tCB5B3B0C70F6DFB6B059BB2C65DC77B101849444* >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<Google.Play.AssetDelivery.AssetDeliveryStatus,System.Collections.Generic.List`1<UnityEngine.UI.Button>>::Add(TKey,TValue) */, IDictionary_2_t4DDDF01FED9147ADFACC4EBED3AE2CC23791E0E6_il2cpp_TypeInfo_var, L_5, L_6, L_7);
	}

IL_002c:
	{
		// buttonsForStatus.Add(button);
		List_1_tCB5B3B0C70F6DFB6B059BB2C65DC77B101849444* L_8 = V_0;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_9 = ___button0;
		NullCheck(L_8);
		List_1_Add_m4F809219B2B92D16365B4B27F60BA2DD8F5A5650_inline(L_8, L_9, List_1_Add_m4F809219B2B92D16365B4B27F60BA2DD8F5A5650_RuntimeMethod_var);
		// _allButtons.Add(button);
		HashSet_1_tF168427C45B13CF5D70310549C18B8AB18046A41* L_10 = __this->____allButtons_15;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_11 = ___button0;
		NullCheck(L_10);
		bool L_12;
		L_12 = HashSet_1_Add_mB31DFE3E3E4C545989419040477D4A6A71DFAF23(L_10, L_11, HashSet_1_Add_mB31DFE3E3E4C545989419040477D4A6A71DFAF23_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DownloadDisplay::BindButton(UnityEngine.UI.Button)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadDisplay_BindButton_mF70687045EB933311DD7EECB041401D9B045D66C (DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* __this, Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___button0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mB31DFE3E3E4C545989419040477D4A6A71DFAF23_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _allButtons.Add(button);
		HashSet_1_tF168427C45B13CF5D70310549C18B8AB18046A41* L_0 = __this->____allButtons_15;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = ___button0;
		NullCheck(L_0);
		bool L_2;
		L_2 = HashSet_1_Add_mB31DFE3E3E4C545989419040477D4A6A71DFAF23(L_0, L_1, HashSet_1_Add_mB31DFE3E3E4C545989419040477D4A6A71DFAF23_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DownloadDisplay::BindColor(UnityEngine.Color,Google.Play.AssetDelivery.AssetDeliveryStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadDisplay_BindColor_m3E906A37EFB9C9EC5CD03A638567FB5CBCAAAED3 (DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color0, int32_t ___status1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t06502717AD8A9EDA9C0F033DBFC047E313322EE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _colorsByStatus.Add(status, color);
		RuntimeObject* L_0 = __this->____colorsByStatus_16;
		int32_t L_1 = ___status1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___color0;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<Google.Play.AssetDelivery.AssetDeliveryStatus,UnityEngine.Color>::Add(TKey,TValue) */, IDictionary_2_t06502717AD8A9EDA9C0F033DBFC047E313322EE3_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// }
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DownloadDisplay::SetScrolling(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadDisplay_SetScrolling_mA0D8E34FEA91F024A1E28E96786F9FA44EA9A243 (DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* __this, bool ___scrolling0, const RuntimeMethod* method) 
{
	ScrollingFillAnimator_tB2E4FC8D635F7C3FD423116A5EB2C4B34363DACA* G_B2_0 = NULL;
	ScrollingFillAnimator_tB2E4FC8D635F7C3FD423116A5EB2C4B34363DACA* G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	ScrollingFillAnimator_tB2E4FC8D635F7C3FD423116A5EB2C4B34363DACA* G_B3_1 = NULL;
	{
		// ScrollingFill.ScrollSpeed = scrolling ? ActiveScrollSpeed : 0f;
		ScrollingFillAnimator_tB2E4FC8D635F7C3FD423116A5EB2C4B34363DACA* L_0 = __this->___ScrollingFill_9;
		bool L_1 = ___scrolling0;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0011;
		}
	}
	{
		G_B3_0 = (0.0f);
		G_B3_1 = G_B1_0;
		goto IL_0016;
	}

IL_0011:
	{
		G_B3_0 = (2.5f);
		G_B3_1 = G_B2_0;
	}

IL_0016:
	{
		NullCheck(G_B3_1);
		G_B3_1->___ScrollSpeed_4 = G_B3_0;
		// }
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DownloadDisplay::SetInitialStatus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadDisplay_SetInitialStatus_m36D2A91666EEA0E58E63C048622570AB6BAF4301 (DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* __this, bool ___isDownloaded0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetDeliveryStatus_t6D22784589DF51CC1D10FA2560381F8048D30C55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B3_1 = NULL;
	{
		// ColorTint.color = NeutralColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___ColorTint_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = __this->___NeutralColor_13;
		NullCheck(L_0);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_1);
		// LoadingBar.SetProgress(0f);
		LoadingBar_t499215F28A93E9B219B9BF523B928A2A271B67C7* L_2 = __this->___LoadingBar_8;
		NullCheck(L_2);
		LoadingBar_SetProgress_m993F37353EB1287A71FDA8EA813E06B6CC3F92D9(L_2, (0.0f), NULL);
		// StatusText.text = isDownloaded
		//     ? AssetDeliveryStatus.Available.ToString()
		//     : AssetDeliveryStatus.Pending.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___StatusText_4;
		bool L_4 = ___isDownloaded0;
		G_B1_0 = L_3;
		if (L_4)
		{
			G_B2_0 = L_3;
			goto IL_003e;
		}
	}
	{
		V_0 = 0;
		Il2CppFakeBox<int32_t> L_5(AssetDeliveryStatus_t6D22784589DF51CC1D10FA2560381F8048D30C55_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_6;
		L_6 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_5), NULL);
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		goto IL_004d;
	}

IL_003e:
	{
		V_0 = 2;
		Il2CppFakeBox<int32_t> L_7(AssetDeliveryStatus_t6D22784589DF51CC1D10FA2560381F8048D30C55_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_8;
		L_8 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_7), NULL);
		G_B3_0 = L_8;
		G_B3_1 = G_B2_0;
	}

IL_004d:
	{
		NullCheck(G_B3_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B3_1, G_B3_0);
		// }
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DownloadDisplay::SetStatus(Google.Play.AssetDelivery.AssetDeliveryStatus,Google.Play.AssetDelivery.AssetDeliveryErrorCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadDisplay_SetStatus_m81D1DAB50049DA5C61FC806164BB9588FDCA8B4C (DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* __this, int32_t ___status0, int32_t ___error1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetDeliveryErrorCode_tBDD13D9D0AAB694759166DB6CFEA5786CE363ACA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetDeliveryStatus_t6D22784589DF51CC1D10FA2560381F8048D30C55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t06502717AD8A9EDA9C0F033DBFC047E313322EE3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t4DDDF01FED9147ADFACC4EBED3AE2CC23791E0E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mA5249763CC5D6A0B85B1463BF70B178383FF1813_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A1A0442FCE016F702A4C2570647ED57DAA8DB0D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3C48F920CA03FE8BCEF33375645725C40BA7ADD);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// StatusText.text = status.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___StatusText_4;
		Il2CppFakeBox<int32_t> L_1(AssetDeliveryStatus_t6D22784589DF51CC1D10FA2560381F8048D30C55_il2cpp_TypeInfo_var, (&___status0));
		String_t* L_2;
		L_2 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_1), NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// if (_buttonsByStatus.ContainsKey(status))
		RuntimeObject* L_3 = __this->____buttonsByStatus_14;
		int32_t L_4 = ___status0;
		NullCheck(L_3);
		bool L_5;
		L_5 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<Google.Play.AssetDelivery.AssetDeliveryStatus,System.Collections.Generic.List`1<UnityEngine.UI.Button>>::ContainsKey(TKey) */, IDictionary_2_t4DDDF01FED9147ADFACC4EBED3AE2CC23791E0E6_il2cpp_TypeInfo_var, L_3, L_4);
		V_0 = L_5;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		// ShowButtons(_buttonsByStatus[status].ToArray());
		RuntimeObject* L_7 = __this->____buttonsByStatus_14;
		int32_t L_8 = ___status0;
		NullCheck(L_7);
		List_1_tCB5B3B0C70F6DFB6B059BB2C65DC77B101849444* L_9;
		L_9 = InterfaceFuncInvoker1< List_1_tCB5B3B0C70F6DFB6B059BB2C65DC77B101849444*, int32_t >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<Google.Play.AssetDelivery.AssetDeliveryStatus,System.Collections.Generic.List`1<UnityEngine.UI.Button>>::get_Item(TKey) */, IDictionary_2_t4DDDF01FED9147ADFACC4EBED3AE2CC23791E0E6_il2cpp_TypeInfo_var, L_7, L_8);
		NullCheck(L_9);
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_10;
		L_10 = List_1_ToArray_mA5249763CC5D6A0B85B1463BF70B178383FF1813(L_9, List_1_ToArray_mA5249763CC5D6A0B85B1463BF70B178383FF1813_RuntimeMethod_var);
		DownloadDisplay_ShowButtons_m9AB68AEB7ABC1DF6A1FC7CA8A8021063C5F730BC(__this, L_10, NULL);
		goto IL_0061;
	}

IL_0046:
	{
		// HideButtons();
		DownloadDisplay_HideButtons_mB4EBCA024901A383C81E610F4A467E2474FD9194(__this, NULL);
		// ColorTint.color = NeutralColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_11 = __this->___ColorTint_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = __this->___NeutralColor_13;
		NullCheck(L_11);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_11, L_12);
	}

IL_0061:
	{
		// if (_colorsByStatus.ContainsKey(status))
		RuntimeObject* L_13 = __this->____colorsByStatus_16;
		int32_t L_14 = ___status0;
		NullCheck(L_13);
		bool L_15;
		L_15 = InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<Google.Play.AssetDelivery.AssetDeliveryStatus,UnityEngine.Color>::ContainsKey(TKey) */, IDictionary_2_t06502717AD8A9EDA9C0F033DBFC047E313322EE3_il2cpp_TypeInfo_var, L_13, L_14);
		V_1 = L_15;
		bool L_16 = V_1;
		if (!L_16)
		{
			goto IL_008b;
		}
	}
	{
		// ColorTint.color = _colorsByStatus[status];
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_17 = __this->___ColorTint_7;
		RuntimeObject* L_18 = __this->____colorsByStatus_16;
		int32_t L_19 = ___status0;
		NullCheck(L_18);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		L_20 = InterfaceFuncInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F, int32_t >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<Google.Play.AssetDelivery.AssetDeliveryStatus,UnityEngine.Color>::get_Item(TKey) */, IDictionary_2_t06502717AD8A9EDA9C0F033DBFC047E313322EE3_il2cpp_TypeInfo_var, L_18, L_19);
		NullCheck(L_17);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_17, L_20);
	}

IL_008b:
	{
		// if (error != AssetDeliveryErrorCode.NoError)
		int32_t L_21 = ___error1;
		V_2 = (bool)((!(((uint32_t)L_21) <= ((uint32_t)0)))? 1 : 0);
		bool L_22 = V_2;
		if (!L_22)
		{
			goto IL_00d6;
		}
	}
	{
		// StatusText.text = string.Format("{0}: {1}", status.ToString(), error.ToString());
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_23 = __this->___StatusText_4;
		Il2CppFakeBox<int32_t> L_24(AssetDeliveryStatus_t6D22784589DF51CC1D10FA2560381F8048D30C55_il2cpp_TypeInfo_var, (&___status0));
		String_t* L_25;
		L_25 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_24), NULL);
		Il2CppFakeBox<int32_t> L_26(AssetDeliveryErrorCode_tBDD13D9D0AAB694759166DB6CFEA5786CE363ACA_il2cpp_TypeInfo_var, (&___error1));
		String_t* L_27;
		L_27 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_26), NULL);
		String_t* L_28;
		L_28 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralA3C48F920CA03FE8BCEF33375645725C40BA7ADD, L_25, L_27, NULL);
		NullCheck(L_23);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_23, L_28);
		// RetrieveButtonText.text = "Try Again";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_29 = __this->___RetrieveButtonText_6;
		NullCheck(L_29);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_29, _stringLiteral6A1A0442FCE016F702A4C2570647ED57DAA8DB0D);
	}

IL_00d6:
	{
		// }
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DownloadDisplay::SetProgress(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadDisplay_SetProgress_mFA3B98D656B414E7BE347D41052E5F1D28A5B36A (DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* __this, float ___progress0, const RuntimeMethod* method) 
{
	{
		// LoadingBar.Progress = progress;
		LoadingBar_t499215F28A93E9B219B9BF523B928A2A271B67C7* L_0 = __this->___LoadingBar_8;
		float L_1 = ___progress0;
		NullCheck(L_0);
		L_0->___Progress_7 = L_1;
		// }
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DownloadDisplay::HideButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadDisplay_HideButtons_mB4EBCA024901A383C81E610F4A467E2474FD9194 (DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mBB007C6D80EFCDC08E96F9CD186179E88E43A530_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5A2D93DB9E8C84353BAC6993A42F54F85C0B03E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m03911319D49D0D645CF6EE36689BC6AD20FFBAF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_m47F97C089D4B6DAED3C45998C29B34DEBFF619CA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tF9998FA17ED4A1F6464D2F5579FEF6719703F85E V_0;
	memset((&V_0), 0, sizeof(V_0));
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* V_1 = NULL;
	{
		// foreach (var button in _allButtons)
		HashSet_1_tF168427C45B13CF5D70310549C18B8AB18046A41* L_0 = __this->____allButtons_15;
		NullCheck(L_0);
		Enumerator_tF9998FA17ED4A1F6464D2F5579FEF6719703F85E L_1;
		L_1 = HashSet_1_GetEnumerator_m47F97C089D4B6DAED3C45998C29B34DEBFF619CA(L_0, HashSet_1_GetEnumerator_m47F97C089D4B6DAED3C45998C29B34DEBFF619CA_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0032:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mBB007C6D80EFCDC08E96F9CD186179E88E43A530((&V_0), Enumerator_Dispose_mBB007C6D80EFCDC08E96F9CD186179E88E43A530_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0027_1;
			}

IL_0010_1:
			{
				// foreach (var button in _allButtons)
				Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_2;
				L_2 = Enumerator_get_Current_m03911319D49D0D645CF6EE36689BC6AD20FFBAF7_inline((&V_0), Enumerator_get_Current_m03911319D49D0D645CF6EE36689BC6AD20FFBAF7_RuntimeMethod_var);
				V_1 = L_2;
				// button.gameObject.SetActive(false);
				Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = V_1;
				NullCheck(L_3);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
				L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
				NullCheck(L_4);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
			}

IL_0027_1:
			{
				// foreach (var button in _allButtons)
				bool L_5;
				L_5 = Enumerator_MoveNext_m5A2D93DB9E8C84353BAC6993A42F54F85C0B03E1((&V_0), Enumerator_MoveNext_m5A2D93DB9E8C84353BAC6993A42F54F85C0B03E1_RuntimeMethod_var);
				if (L_5)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_0041;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0041:
	{
		// ButtonOutline.gameObject.SetActive(false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = __this->___ButtonOutline_10;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DownloadDisplay::ShowButtons(UnityEngine.UI.Button[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadDisplay_ShowButtons_m9AB68AEB7ABC1DF6A1FC7CA8A8021063C5F730BC (DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* __this, ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* ___buttonsToShow0, const RuntimeMethod* method) 
{
	ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* V_0 = NULL;
	int32_t V_1 = 0;
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* V_2 = NULL;
	{
		// HideButtons();
		DownloadDisplay_HideButtons_mB4EBCA024901A383C81E610F4A467E2474FD9194(__this, NULL);
		// foreach (var button in buttonsToShow)
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_0 = ___buttonsToShow0;
		V_0 = L_0;
		V_1 = 0;
		goto IL_0026;
	}

IL_000f:
	{
		// foreach (var button in buttonsToShow)
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// button.gameObject.SetActive(true);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_5 = V_2;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0026:
	{
		// foreach (var button in buttonsToShow)
		int32_t L_8 = V_1;
		ButtonU5BU5D_t0D512FF2FF5A72DAC04754F2C10182F850328BEF* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_000f;
		}
	}
	{
		// ButtonOutline.gameObject.SetActive(true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = __this->___ButtonOutline_10;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DownloadDisplay::SetNameText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadDisplay_SetNameText_m92B5C46851DD3F3AFAA5ADEEB8B9C622D79A917A (DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* __this, String_t* ___nameText0, const RuntimeMethod* method) 
{
	{
		// NameText.text = nameText;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___NameText_5;
		String_t* L_1 = ___nameText0;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.String Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DownloadDisplay::FormatSize(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadDisplay_FormatSize_mC9218983D5E766F0C6E66821D605DAD13AA0B0C4 (DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* __this, int64_t ___numBytes0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14B651F3933E2742FD0FE0E45504AD43A5985248);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63EB81F5B69FCF78DE86128D91565D78D8489F57);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F3E84CD5BB90F5EF0A0EE8C27F03E4A21368AE8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral890AA82BA0D5A683C3CA604090D2B22D7572F9AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8FA829CFC665FE18E4BBE0966FD5719CD9CA6784);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4E550DB7753938B55BD2444CB204B2C254AF826);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE817AAA15FFD69D00BE6031E5C8A6EF7CF081933);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1E972CD03013DE732424893507C3C55D004E089);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	double V_2 = 0.0;
	bool V_3 = false;
	String_t* V_4 = NULL;
	{
		// if (numBytes < 2)
		int64_t L_0 = ___numBytes0;
		V_3 = (bool)((((int64_t)L_0) < ((int64_t)((int64_t)2)))? 1 : 0);
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// return numBytes + " B";
		String_t* L_2;
		L_2 = Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B((&___numBytes0), NULL);
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_2, _stringLiteralE817AAA15FFD69D00BE6031E5C8A6EF7CF081933, NULL);
		V_4 = L_3;
		goto IL_009a;
	}

IL_0020:
	{
		// string[] units = {"B", "KB", "MB", "GB", "TB", "PB", "EB"};
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralAB69FA1AB6BB831506EFCAD83900FEE751E85F6F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral14B651F3933E2742FD0FE0E45504AD43A5985248);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral14B651F3933E2742FD0FE0E45504AD43A5985248);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralC4E550DB7753938B55BD2444CB204B2C254AF826);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralC4E550DB7753938B55BD2444CB204B2C254AF826);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteralF1E972CD03013DE732424893507C3C55D004E089);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralF1E972CD03013DE732424893507C3C55D004E089);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral7F3E84CD5BB90F5EF0A0EE8C27F03E4A21368AE8);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral7F3E84CD5BB90F5EF0A0EE8C27F03E4A21368AE8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral8FA829CFC665FE18E4BBE0966FD5719CD9CA6784);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral8FA829CFC665FE18E4BBE0966FD5719CD9CA6784);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral890AA82BA0D5A683C3CA604090D2B22D7572F9AC);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral890AA82BA0D5A683C3CA604090D2B22D7572F9AC);
		V_0 = L_11;
		// var unitIndex = (int) Math.Floor(Math.Log10(numBytes)) / 3;
		int64_t L_12 = ___numBytes0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_13;
		L_13 = log10(((double)L_12));
		double L_14;
		L_14 = floor(L_13);
		V_1 = ((int32_t)(il2cpp_codegen_cast_double_to_int<int32_t>(L_14)/3));
		// double shiftedBytes = numBytes / Math.Pow(1000, unitIndex);
		int64_t L_15 = ___numBytes0;
		int32_t L_16 = V_1;
		double L_17;
		L_17 = Math_Pow_mEAE651F0858203FBE12B72B6A53951BBD0FB5265((1000.0), ((double)L_16), NULL);
		V_2 = ((double)(((double)L_15)/L_17));
		// return string.Format("{0:0.##} {1}", shiftedBytes, units[unitIndex]);
		double L_18 = V_2;
		double L_19 = L_18;
		RuntimeObject* L_20 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_19);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = V_0;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		String_t* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		String_t* L_25;
		L_25 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral63EB81F5B69FCF78DE86128D91565D78D8489F57, L_20, L_24, NULL);
		V_4 = L_25;
		goto IL_009a;
	}

IL_009a:
	{
		// }
		String_t* L_26 = V_4;
		return L_26;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.DownloadDisplay::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadDisplay__ctor_m56F6F857E627D965A87A6E720F0E200DEB3FEFF2 (DownloadDisplay_t5E1F6871DE983435E949E6435278C60EF9A2B740* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m83FED82B1CF0991E38E45E920C5FC576D3283578_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m98ADEC4EE3C326D464FF26716ED11BCA73803358_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t4C916E66BEF8BD9590CD356274E6DB5934A2990D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tD56BE9AC2B9A2440E3883B68E63D96980A8DF1EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m915925BE87DC24A8CD897473F5B2E1A42C2B1E1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tF168427C45B13CF5D70310549C18B8AB18046A41_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly IDictionary<AssetDeliveryStatus, List<Button>> _buttonsByStatus =
		//     new Dictionary<AssetDeliveryStatus, List<Button>>();
		Dictionary_2_tD56BE9AC2B9A2440E3883B68E63D96980A8DF1EC* L_0 = (Dictionary_2_tD56BE9AC2B9A2440E3883B68E63D96980A8DF1EC*)il2cpp_codegen_object_new(Dictionary_2_tD56BE9AC2B9A2440E3883B68E63D96980A8DF1EC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m98ADEC4EE3C326D464FF26716ED11BCA73803358(L_0, Dictionary_2__ctor_m98ADEC4EE3C326D464FF26716ED11BCA73803358_RuntimeMethod_var);
		__this->____buttonsByStatus_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buttonsByStatus_14), (void*)L_0);
		// private readonly HashSet<Button> _allButtons = new HashSet<Button>();
		HashSet_1_tF168427C45B13CF5D70310549C18B8AB18046A41* L_1 = (HashSet_1_tF168427C45B13CF5D70310549C18B8AB18046A41*)il2cpp_codegen_object_new(HashSet_1_tF168427C45B13CF5D70310549C18B8AB18046A41_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		HashSet_1__ctor_m915925BE87DC24A8CD897473F5B2E1A42C2B1E1A(L_1, HashSet_1__ctor_m915925BE87DC24A8CD897473F5B2E1A42C2B1E1A_RuntimeMethod_var);
		__this->____allButtons_15 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____allButtons_15), (void*)L_1);
		// private readonly IDictionary<AssetDeliveryStatus, Color> _colorsByStatus =
		//     new Dictionary<AssetDeliveryStatus, Color>();
		Dictionary_2_t4C916E66BEF8BD9590CD356274E6DB5934A2990D* L_2 = (Dictionary_2_t4C916E66BEF8BD9590CD356274E6DB5934A2990D*)il2cpp_codegen_object_new(Dictionary_2_t4C916E66BEF8BD9590CD356274E6DB5934A2990D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m83FED82B1CF0991E38E45E920C5FC576D3283578(L_2, Dictionary_2__ctor_m83FED82B1CF0991E38E45E920C5FC576D3283578_RuntimeMethod_var);
		__this->____colorsByStatus_16 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____colorsByStatus_16), (void*)L_2);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.LookAround::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookAround_Start_m82E558692A5D8F7C54FA69843962A37AF345987D (LookAround_tF85F5C7BA4BF6AE15082C15A580CC8912713FEEE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _camera = GetComponent<Camera>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		__this->____camera_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____camera_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.LookAround::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookAround_Update_m8051AADE7847DA1539A675ECF689C1E6FE14ABC9 (LookAround_tF85F5C7BA4BF6AE15082C15A580CC8912713FEEE* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// HandleInput();
		LookAround_HandleInput_mF3C267896D014843CDD7027C9B34AB14C79FF496(__this, NULL);
		// var to = transform.position - _previousLocalPoint;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->____previousLocalPoint_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_1, L_2, NULL);
		V_0 = L_3;
		// var from = transform.position - _currentLocalPoint;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->____currentLocalPoint_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_5, L_6, NULL);
		V_1 = L_7;
		// var rotation = Quaternion.FromToRotation(from, to);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A(L_8, L_9, NULL);
		V_2 = L_10;
		// transform.rotation *= rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = L_11;
		NullCheck(L_12);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_12, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = V_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_13, L_14, NULL);
		NullCheck(L_12);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_12, L_15, NULL);
		// }
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.LookAround::HandleInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookAround_HandleInput_mF3C267896D014843CDD7027C9B34AB14C79FF496 (LookAround_tF85F5C7BA4BF6AE15082C15A580CC8912713FEEE* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (!IsDragging()) return;
		bool L_0;
		L_0 = LookAround_IsDragging_mA68DA0AF131E6FB7F538F6507DE418C045B6D206(__this, NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// if (!IsDragging()) return;
		goto IL_007a;
	}

IL_0010:
	{
		// _previousLocalPoint = _currentLocalPoint;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->____currentLocalPoint_4;
		__this->____previousLocalPoint_5 = L_2;
		// var screenPoint = Input.mousePosition + Vector3.forward * BigNumber;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_4, (1000000.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_3, L_5, NULL);
		V_0 = L_6;
		// _currentLocalPoint = transform.worldToLocalMatrix * _camera.ScreenToWorldPoint(screenPoint);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_7);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_8;
		L_8 = Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1(L_7, NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_9 = __this->____camera_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_9, L_10, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12;
		L_12 = Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline(L_11, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13;
		L_13 = Matrix4x4_op_Multiply_m319DF5B7DD9C9499EB8A5682FA63B1AAF0EE87A4(L_8, L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector4_op_Implicit_m0217ADDC8CADDB93ACBABB17A50207698DAB0071_inline(L_13, NULL);
		__this->____currentLocalPoint_4 = L_14;
		// if (DidDraggingBegin())
		bool L_15;
		L_15 = LookAround_DidDraggingBegin_m3B8CCADC894207B5A4E3CA5278A1DDE3E712649B(__this, NULL);
		V_2 = L_15;
		bool L_16 = V_2;
		if (!L_16)
		{
			goto IL_007a;
		}
	}
	{
		// _previousLocalPoint = _currentLocalPoint;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = __this->____currentLocalPoint_4;
		__this->____previousLocalPoint_5 = L_17;
	}

IL_007a:
	{
		// }
		return;
	}
}
// System.Boolean Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.LookAround::IsDragging()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LookAround_IsDragging_mA68DA0AF131E6FB7F538F6507DE418C045B6D206 (LookAround_tF85F5C7BA4BF6AE15082C15A580CC8912713FEEE* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return Input.GetMouseButton(0) || Input.touchCount > 0;
		bool L_0;
		L_0 = Input_GetMouseButton_m4995DD4A2D4F916565C1B1B5AAF7DF17C126B3EA(0, NULL);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1;
		L_1 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		G_B3_0 = ((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0017;
	}

IL_0017:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.LookAround::DidDraggingBegin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LookAround_DidDraggingBegin_m3B8CCADC894207B5A4E3CA5278A1DDE3E712649B (LookAround_tF85F5C7BA4BF6AE15082C15A580CC8912713FEEE* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// var didTouchBegin = Input.touchCount > 0 && Input.touches[0].phase == TouchPhase.Began;
		int32_t L_0;
		L_0 = Input_get_touchCount_m057388BFC67A0F4CA53764B1022867ED81D01E39(NULL);
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		TouchU5BU5D_t242545870BFCA81F368CCF82E00F9E2A7FB523B3* L_1;
		L_1 = Input_get_touches_m7CFDF6848F3EC3A8FE458436B2B8BD14B5C65CEF(NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Touch_get_phase_mB82409FB2BE1C32ABDBA6A72E52A099D28AB70B0(((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
	}

IL_001f:
	{
		V_0 = (bool)G_B3_0;
		// return Input.GetMouseButtonDown(0) || didTouchBegin;
		bool L_3;
		L_3 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		bool L_4 = V_0;
		V_1 = (bool)((int32_t)((int32_t)L_3|(int32_t)L_4));
		goto IL_002b;
	}

IL_002b:
	{
		// }
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.LookAround::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookAround__ctor_m741F9EF3CC2A46DE5551EB280225C837EE77229A (LookAround_tF85F5C7BA4BF6AE15082C15A580CC8912713FEEE* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.RotateInPlace::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateInPlace_Update_m2B10612FC35F2C3DEABFCB92C5A0B3D43C376B3A (RotateInPlace_t20AC017B46D43E4CC2F93C11D59D59DA96E30155* __this, const RuntimeMethod* method) 
{
	{
		// transform.Rotate(Axis, Time.deltaTime*DegreesPerSecond);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___Axis_4;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_3 = __this->___DegreesPerSecond_5;
		NullCheck(L_0);
		Transform_Rotate_m35B44707FE16FF8015D519D8C162C0B4A85D6D1F(L_0, L_1, ((float)il2cpp_codegen_multiply(L_2, L_3)), NULL);
		// }
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.RotateInPlace::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RotateInPlace__ctor_mF8334E15905ADF7BE80BB0F41549FB9A017F6CBA (RotateInPlace_t20AC017B46D43E4CC2F93C11D59D59DA96E30155* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.SceneNavigator::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneNavigator_Start_m1B0ED82D1F555895F4EDEFA1070876F8BF4D9046 (SceneNavigator_tF21A25E0BE40A200C3D34C1F76F1E33DF8D6FA72* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F8F56A74714961A7501B669716CA3ABB5FD93A1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Successfully loaded scene");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral9F8F56A74714961A7501B669716CA3ABB5FD93A1, NULL);
		// }
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.SceneNavigator::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneNavigator_Update_mF8557D90E658D7059C902C1A0025B5833033E755 (SceneNavigator_tF21A25E0BE40A200C3D34C1F76F1E33DF8D6FA72* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (Input.GetKeyDown(KeyCode.Escape))
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)27), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// SceneManager.LoadScene(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(0, NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.SceneNavigator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneNavigator__ctor_m4F333510AC913BC4584852FCE51CD03917C8F073 (SceneNavigator_tF21A25E0BE40A200C3D34C1F76F1E33DF8D6FA72* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Google.Play.AssetDelivery.Samples.AssetDeliveryDemo.TextAssetHolder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextAssetHolder__ctor_m43B7110988CBF55DA10CBB8380DCDDAEC039FDF1 (TextAssetHolder_tD54F9EAF78F3ADA8E6D68B0088DC651A62D53C0A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AssetBundleDownloader_set_IsInitialized_mB76D543B064A812BC83C54342CAFAC44E71F3FD2_inline (AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsInitialized { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CIsInitializedU3Ek__BackingField_15 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PlayAssetBundleRequest_get_IsDone_mCE97AAD66758C70BBFFD23951ECE3958C45287F9_inline (PlayAssetBundleRequest_tF91045E772B64A769998917B0141A4C7EEF03A14* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsDone { get; protected set; }
		bool L_0 = __this->___U3CIsDoneU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AssetBundle_tB38418819A49060CD738CB21541649340F082943* PlayAssetBundleRequest_get_AssetBundle_m0126C158B7D2388FAEF7801881B1F910AC03798C_inline (PlayAssetBundleRequest_tF91045E772B64A769998917B0141A4C7EEF03A14* __this, const RuntimeMethod* method) 
{
	{
		// public AssetBundle AssetBundle { get; protected set; }
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_0 = __this->___U3CAssetBundleU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AssetLocation_get_Path_mE42C8AE55104A19118D83F461D5322452222A327_inline (AssetLocation_t0793F2DE982E47275F0837DE78452359683C3C80* __this, const RuntimeMethod* method) 
{
	{
		// public string Path { get; protected set; }
		String_t* L_0 = __this->___U3CPathU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t AssetLocation_get_Size_mCCC1E1F6201029DE26395F8DAD625608964719D8_inline (AssetLocation_t0793F2DE982E47275F0837DE78452359683C3C80* __this, const RuntimeMethod* method) 
{
	{
		// public ulong Size { get; protected set; }
		uint64_t L_0 = __this->___U3CSizeU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t AssetLocation_get_Offset_mA0E7D8C9A46AA09DE92EA0B326D690A26C0B00C6_inline (AssetLocation_t0793F2DE982E47275F0837DE78452359683C3C80* __this, const RuntimeMethod* method) 
{
	{
		// public ulong Offset { get; protected set; }
		uint64_t L_0 = __this->___U3COffsetU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float PlayAssetPackRequest_get_DownloadProgress_mA490FFA978283C5FE0AD726E4D068D6047B161D7_inline (PlayAssetPackRequest_t02798684A55633E4F651042F75B09FD47459642F* __this, const RuntimeMethod* method) 
{
	{
		// public float DownloadProgress { get; protected set; }
		float L_0 = __this->___U3CDownloadProgressU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PlayAssetPackBatchRequest_get_IsDone_m2AED4BE21473E5256202EE7847252C8165F80059_inline (PlayAssetPackBatchRequest_t870FF270EED353BBE7C7103FE8A264D2DD79F02D* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsDone { get; protected set; }
		bool L_0 = __this->___U3CIsDoneU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PlayAssetPackRequest_get_Error_m12DDFDA5DFB4C43B70DEA4CDFA3A48C5EB8A86C6_inline (PlayAssetPackRequest_t02798684A55633E4F651042F75B09FD47459642F* __this, const RuntimeMethod* method) 
{
	{
		// public AssetDeliveryErrorCode Error { get; protected set; }
		int32_t L_0 = __this->___U3CErrorU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PlayAssetPackRequest_get_Status_mA68461C226CA4AE1D83E70B45DEBAB2486347B04_inline (PlayAssetPackRequest_t02798684A55633E4F651042F75B09FD47459642F* __this, const RuntimeMethod* method) 
{
	{
		// public AssetDeliveryStatus Status { get; protected set; }
		int32_t L_0 = __this->___U3CStatusU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AssetPackDownloader_set_IsInitialized_m1D0A1D05640AEBA36544E3CE81467E9D8300A9E5_inline (AssetPackDownloader_tE3D4A0E5C73651391626EA09EB5F1F1D030FB8C4* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsInitialized { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CIsInitializedU3Ek__BackingField_21 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PlayAssetPackRequest_get_IsDone_m4281D1A24674FF595FC582EA50C5BDC6F90B7094_inline (PlayAssetPackRequest_t02798684A55633E4F651042F75B09FD47459642F* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsDone { get; protected set; }
		bool L_0 = __this->___U3CIsDoneU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AssetBundleDownloader_get_IsInitialized_mEECA681BA13F43C0BC6BC236A8C2F90A57702E29_inline (AssetBundleDownloader_t20A56C5FB46FFC30E864482186B0E6C65752260B* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsInitialized { get; private set; }
		bool L_0 = __this->___U3CIsInitializedU3Ek__BackingField_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___lhs0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rhs1, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___lhs0;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___lhs0;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___rhs1;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___lhs0;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___rhs1;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___lhs0;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___rhs1;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___lhs0;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___rhs1;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___lhs0;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___rhs1;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___lhs0;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___rhs1;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___lhs0;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___rhs1;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___lhs0;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___rhs1;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___lhs0;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___rhs1;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___lhs0;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___rhs1;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___lhs0;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___rhs1;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___lhs0;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___rhs1;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___lhs0;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___rhs1;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___lhs0;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___rhs1;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___lhs0;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___rhs1;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_m2ECA73F345A7AD84144133E9E51657204002B12D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___v0;
		float L_5 = L_4.___z_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_6), L_1, L_3, L_5, (0.0f), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0020;
	}

IL_0020:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector4_op_Implicit_m0217ADDC8CADDB93ACBABB17A50207698DAB0071_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___v0;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___v0;
		float L_3 = L_2.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___v0;
		float L_5 = L_4.___z_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), L_1, L_3, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PlayAsyncOperation_2_get_Error_mB61CF943D83082432D5CA19D778859724CCEA42E_gshared_inline (PlayAsyncOperation_2_tAA336484128A0F72EF0E51819AC1CD0B80554C54* __this, const RuntimeMethod* method) 
{
	{
		// public TError Error { get; protected set; }
		int32_t L_0 = (int32_t)__this->___U3CErrorU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PlayAsyncOperation_2_get_Error_m747FBBFA51A5F956396A88549EDC62C86187036A_gshared_inline (PlayAsyncOperation_2_tC1FB7EAF29A401C728B4ADC2F4E6B835A3DE4AB0* __this, const RuntimeMethod* method) 
{
	{
		// public TError Error { get; protected set; }
		int32_t L_0 = (int32_t)__this->___U3CErrorU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t PlayAsyncOperation_2_get_Error_m71815CFA9518BFA25754BE151A7FAE8C068E2155_gshared_inline (PlayAsyncOperation_2_t35A86E04E6675059813C75C233D1062DE8697CF5* __this, const RuntimeMethod* method) 
{
	{
		// public TError Error { get; protected set; }
		int32_t L_0 = (int32_t)__this->___U3CErrorU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tF70DDE0C5A349727371FB070D433FA147032A13B Enumerator_get_Current_m12EE850D56E586DF121B059557CEAF4A7472995B_gshared_inline (Enumerator_t72F234BE749BE6BA202FC41626B5E819E4F208B4* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tF70DDE0C5A349727371FB070D433FA147032A13B L_0 = (KeyValuePair_2_tF70DDE0C5A349727371FB070D433FA147032A13B)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_m9698075D0C5F788A3B6AEBF1ABDFACCAB5854E90_gshared_inline (KeyValuePair_2_tF70DDE0C5A349727371FB070D433FA147032A13B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_m415A21240AEF58C2E0A2FBA97E2BB75637781DB5_gshared_inline (KeyValuePair_2_tF70DDE0C5A349727371FB070D433FA147032A13B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mB6A201CD563FEF33A6BDA75B83C7BF2AA36CD98C_gshared_inline (Enumerator_t6209EE23CCD16838DA331AC87789A15508C6C72B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m139A176CD271A0532D75BE08DA7831C8C45CE28F_gshared_inline (Enumerator_t72556E98D7DDBE118A973D782D523D15A96461C8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		float L_2 = ___z2;
		__this->___z_2 = L_2;
		float L_3 = ___w3;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
		return;
	}
}
