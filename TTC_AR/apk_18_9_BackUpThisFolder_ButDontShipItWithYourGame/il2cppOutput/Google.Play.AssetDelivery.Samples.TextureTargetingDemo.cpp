#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Action`1<Google.Play.AssetDelivery.PlayAssetBundleRequest>
struct Action_1_tE50929EF99928DDE22CE09EADACABC0DAB2544C0;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.AssetBundle
struct AssetBundle_tB38418819A49060CD738CB21541649340F082943;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// Google.Play.AssetDelivery.PlayAssetBundleRequest
struct PlayAssetBundleRequest_tF91045E772B64A769998917B0141A4C7EEF03A14;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// Google.Play.AssetDelivery.Samples.TextureTargetingDemo.Scripts.TextureFormatDisplayer
struct TextureFormatDisplayer_tC8E07147F31AF04D2D37208C1C90C514D735CF7D;
// Google.Play.AssetDelivery.Samples.TextureTargetingDemo.Scripts.TexturedSceneLoader
struct TexturedSceneLoader_t52A11DEB5F014BA4E3F19B0AD3656FD96B7252D5;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Google.Play.AssetDelivery.Samples.TextureTargetingDemo.Scripts.TexturedSceneLoader/<DownloadAssetBundles>d__1
struct U3CDownloadAssetBundlesU3Ed__1_t439CE0D0B1197FA9E856F03862B0DBEC9F8631FA;

IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsGoogle_Play_AssetDelivery[];
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo[];
IL2CPP_EXTERN_C RuntimeClass* AssetDeliveryErrorCode_tBDD13D9D0AAB694759166DB6CFEA5786CE363ACA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextureFormat_t87A73E4A3850D3410DC211676FC14B94226C1C1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDownloadAssetBundlesU3Ed__1_t439CE0D0B1197FA9E856F03862B0DBEC9F8631FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1C7F48A460D635145D3632382421015C728BF6ED;
IL2CPP_EXTERN_C String_t* _stringLiteral6C1DBB84F21D416A0B7817A4EC5A4E80D9CE7CD4;
IL2CPP_EXTERN_C String_t* _stringLiteral7DB27BBD4795971EF12075BDA924D0B06FC05E84;
IL2CPP_EXTERN_C String_t* _stringLiteral84718C692649EC76487A2052D6166E3A3AA88D1C;
IL2CPP_EXTERN_C String_t* _stringLiteral84921AC18E88111CEDAE69629BBCBAE44DE8D976;
IL2CPP_EXTERN_C String_t* _stringLiteralA8D1A02E9FD26A91CE6B763902C1B362F4697025;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayAssetBundleRequest_get_AssetBundle_m0126C158B7D2388FAEF7801881B1F910AC03798C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayAssetBundleRequest_get_IsDone_mCE97AAD66758C70BBFFD23951ECE3958C45287F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextureFormatDisplayer_Start_mF683E8BADF202BEDC40DF111603A18E2791DC342_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TextureFormatDisplayer__ctor_mFB3929E743648602E540213533AF05F1F88A6091_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TexturedSceneLoader_DownloadAssetBundles_m2B5E8C0C829D00E577C66195D2E40BD18A158282_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TexturedSceneLoader_Start_m38735D1AABB38F8A8BFBE7CDDCFA7D914EBA4F0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TexturedSceneLoader__ctor_mED4DE167F6865F180AEC3FD17A0E647A590D5126_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDownloadAssetBundlesU3Ed__1_MoveNext_m0C7C3625732044B167EBC32DD45E3D3E803CD506_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDownloadAssetBundlesU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF1677AE45FE1D0BE4D21A19569282FFDE6F97E88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDownloadAssetBundlesU3Ed__1_System_Collections_IEnumerator_Reset_mBD9EB9BF93D631D23FFDE4E99E7A26D29B4ABB2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDownloadAssetBundlesU3Ed__1_System_Collections_IEnumerator_get_Current_m2041761243F7F952EA2C21669EF82E9DCF1DB156_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDownloadAssetBundlesU3Ed__1_System_IDisposable_Dispose_mCF4E1634BEC11A426B981C88C7AE0593F85F2789_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDownloadAssetBundlesU3Ed__1__ctor_m4AD5AF7D2C2006BF0034B1AA79001CF54ECECC14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PlayAssetBundleRequest_tF91045E772B64A769998917B0141A4C7EEF03A14_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TextureFormatDisplayer_tC8E07147F31AF04D2D37208C1C90C514D735CF7D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* TexturedSceneLoader_t52A11DEB5F014BA4E3F19B0AD3656FD96B7252D5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* U3CDownloadAssetBundlesU3Ed__1_t439CE0D0B1197FA9E856F03862B0DBEC9F8631FA_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tA56A55A163A676671F6E6CF2D8FBF33FED5B6345 
{
};
struct Il2CppArrayBounds;

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
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

// Google.Play.AssetDelivery.Samples.TextureTargetingDemo.Scripts.TexturedSceneLoader/<DownloadAssetBundles>d__1
struct U3CDownloadAssetBundlesU3Ed__1_t439CE0D0B1197FA9E856F03862B0DBEC9F8631FA  : public RuntimeObject
{
	// System.Int32 Google.Play.AssetDelivery.Samples.TextureTargetingDemo.Scripts.TexturedSceneLoader/<DownloadAssetBundles>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Google.Play.AssetDelivery.Samples.TextureTargetingDemo.Scripts.TexturedSceneLoader/<DownloadAssetBundles>d__1::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Google.Play.AssetDelivery.Samples.TextureTargetingDemo.Scripts.TexturedSceneLoader Google.Play.AssetDelivery.Samples.TextureTargetingDemo.Scripts.TexturedSceneLoader/<DownloadAssetBundles>d__1::<>4__this
	TexturedSceneLoader_t52A11DEB5F014BA4E3F19B0AD3656FD96B7252D5* ___U3CU3E4__this_2;
	// Google.Play.AssetDelivery.PlayAssetBundleRequest Google.Play.AssetDelivery.Samples.TextureTargetingDemo.Scripts.TexturedSceneLoader/<DownloadAssetBundles>d__1::<sceneAssetBundleRequest>5__1
	PlayAssetBundleRequest_tF91045E772B64A769998917B0141A4C7EEF03A14* ___U3CsceneAssetBundleRequestU3E5__1_3;
	// Google.Play.AssetDelivery.PlayAssetBundleRequest Google.Play.AssetDelivery.Samples.TextureTargetingDemo.Scripts.TexturedSceneLoader/<DownloadAssetBundles>d__1::<textureAssetBundleRequest>5__2
	PlayAssetBundleRequest_tF91045E772B64A769998917B0141A4C7EEF03A14* ___U3CtextureAssetBundleRequestU3E5__2_4;
	// System.String Google.Play.AssetDelivery.Samples.TextureTargetingDemo.Scripts.TexturedSceneLoader/<DownloadAssetBundles>d__1::<sceneToLoad>5__3
	String_t* ___U3CsceneToLoadU3E5__3_5;
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

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
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

// UnityEngine.AssetBundle
struct AssetBundle_tB38418819A49060CD738CB21541649340F082943  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Google.Play.AssetDelivery.Samples.TextureTargetingDemo.Scripts.TextureFormatDisplayer
struct TextureFormatDisplayer_tC8E07147F31AF04D2D37208C1C90C514D735CF7D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Renderer Google.Play.AssetDelivery.Samples.TextureTargetingDemo.Scripts.TextureFormatDisplayer::rendererWithMaterial
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___rendererWithMaterial_4;
};

// Google.Play.AssetDelivery.Samples.TextureTargetingDemo.Scripts.TexturedSceneLoader
struct TexturedSceneLoader_t52A11DEB5F014BA4E3F19B0AD3656FD96B7252D5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
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


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

// System.Collections.IEnumerator Google.Play.AssetDelivery.Samples.TextureTargetingDemo.Scripts.TexturedSceneLoader::DownloadAssetBundles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TexturedSceneLoader_DownloadAssetBundles_m2B5E8C0C829D00E577C66195D2E40BD18A158282 (TexturedSceneLoader_t52A11DEB5F014BA4E3F19B0AD3656FD96B7252D5* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void Google.Play.AssetDelivery.Samples.TextureTargetingDemo.Scripts.TexturedSceneLoader/<DownloadAssetBundles>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownloadAssetBundlesU3Ed__1__ctor_m4AD5AF7D2C2006BF0034B1AA79001CF54ECECC14 (U3CDownloadAssetBundlesU3Ed__1_t439CE0D0B1197FA9E856F03862B0DBEC9F8631FA* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// Google.Play.AssetDelivery.PlayAssetBundleRequest Google.Play.AssetDelivery.PlayAssetDelivery::RetrieveAssetBundleAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayAssetBundleRequest_tF91045E772B64A769998917B0141A4C7EEF03A14* PlayAssetDelivery_RetrieveAssetBundleAsync_m09BD8950FA5F26CEAFD3F583CEB0E168F8793B37 (String_t* ___assetBundleName0, const RuntimeMethod* method) ;
// System.Boolean Google.Play.AssetDelivery.PlayAssetBundleRequest::get_IsDone()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PlayAssetBundleRequest_get_IsDone_mCE97AAD66758C70BBFFD23951ECE3958C45287F9_inline (PlayAssetBundleRequest_tF91045E772B64A769998917B0141A4C7EEF03A14* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogErrorFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// UnityEngine.AssetBundle Google.Play.AssetDelivery.PlayAssetBundleRequest::get_AssetBundle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AssetBundle_tB38418819A49060CD738CB21541649340F082943* PlayAssetBundleRequest_get_AssetBundle_m0126C158B7D2388FAEF7801881B1F910AC03798C_inline (PlayAssetBundleRequest_tF91045E772B64A769998917B0141A4C7EEF03A14* __this, const RuntimeMethod* method) ;
// System.String[] UnityEngine.AssetBundle::GetAllScenePaths()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* AssetBundle_GetAllScenePaths_m75D1CD4415067D64A8265A7929B6FF76B91B62FE (AssetBundle_tB38418819A49060CD738CB21541649340F082943* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* Material_get_mainTexture_mC6C6B860B44321F0342AEFA0DD7702384334F37D (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, const RuntimeMethod* method) ;
// UnityEngine.TextureFormat UnityEngine.Texture2D::get_format()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Texture2D_get_format_mE39DD922F83CA1097383309278BB6F20636A7D9D (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
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
// System.Void Google.Play.AssetDelivery.Samples.TextureTargetingDemo.Scripts.TexturedSceneLoader::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TexturedSceneLoader_Start_m38735D1AABB38F8A8BFBE7CDDCFA7D914EBA4F0E (TexturedSceneLoader_t52A11DEB5F014BA4E3F19B0AD3656FD96B7252D5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TexturedSceneLoader_Start_m38735D1AABB38F8A8BFBE7CDDCFA7D914EBA4F0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TexturedSceneLoader_t52A11DEB5F014BA4E3F19B0AD3656FD96B7252D5_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TexturedSceneLoader_Start_m38735D1AABB38F8A8BFBE7CDDCFA7D914EBA4F0E_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 0));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 1));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 2));
		// StartCoroutine(DownloadAssetBundles());
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 3));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 4));
		RuntimeObject* L_0;
		L_0 = TexturedSceneLoader_DownloadAssetBundles_m2B5E8C0C829D00E577C66195D2E40BD18A158282(__this, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 4));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 5));
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 5));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 6));
		return;
	}
}
// System.Collections.IEnumerator Google.Play.AssetDelivery.Samples.TextureTargetingDemo.Scripts.TexturedSceneLoader::DownloadAssetBundles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TexturedSceneLoader_DownloadAssetBundles_m2B5E8C0C829D00E577C66195D2E40BD18A158282 (TexturedSceneLoader_t52A11DEB5F014BA4E3F19B0AD3656FD96B7252D5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TexturedSceneLoader_DownloadAssetBundles_m2B5E8C0C829D00E577C66195D2E40BD18A158282_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDownloadAssetBundlesU3Ed__1_t439CE0D0B1197FA9E856F03862B0DBEC9F8631FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TexturedSceneLoader_DownloadAssetBundles_m2B5E8C0C829D00E577C66195D2E40BD18A158282_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		U3CDownloadAssetBundlesU3Ed__1_t439CE0D0B1197FA9E856F03862B0DBEC9F8631FA* L_0 = (U3CDownloadAssetBundlesU3Ed__1_t439CE0D0B1197FA9E856F03862B0DBEC9F8631FA*)il2cpp_codegen_object_new(U3CDownloadAssetBundlesU3Ed__1_t439CE0D0B1197FA9E856F03862B0DBEC9F8631FA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CDownloadAssetBundlesU3Ed__1__ctor_m4AD5AF7D2C2006BF0034B1AA79001CF54ECECC14(L_0, 0, NULL);
		U3CDownloadAssetBundlesU3Ed__1_t439CE0D0B1197FA9E856F03862B0DBEC9F8631FA* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.TextureTargetingDemo.Scripts.TexturedSceneLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TexturedSceneLoader__ctor_mED4DE167F6865F180AEC3FD17A0E647A590D5126 (TexturedSceneLoader_t52A11DEB5F014BA4E3F19B0AD3656FD96B7252D5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TexturedSceneLoader__ctor_mED4DE167F6865F180AEC3FD17A0E647A590D5126_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TexturedSceneLoader__ctor_mED4DE167F6865F180AEC3FD17A0E647A590D5126_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
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
// System.Void Google.Play.AssetDelivery.Samples.TextureTargetingDemo.Scripts.TexturedSceneLoader/<DownloadAssetBundles>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownloadAssetBundlesU3Ed__1__ctor_m4AD5AF7D2C2006BF0034B1AA79001CF54ECECC14 (U3CDownloadAssetBundlesU3Ed__1_t439CE0D0B1197FA9E856F03862B0DBEC9F8631FA* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDownloadAssetBundlesU3Ed__1__ctor_m4AD5AF7D2C2006BF0034B1AA79001CF54ECECC14_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CDownloadAssetBundlesU3Ed__1__ctor_m4AD5AF7D2C2006BF0034B1AA79001CF54ECECC14_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.TextureTargetingDemo.Scripts.TexturedSceneLoader/<DownloadAssetBundles>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownloadAssetBundlesU3Ed__1_System_IDisposable_Dispose_mCF4E1634BEC11A426B981C88C7AE0593F85F2789 (U3CDownloadAssetBundlesU3Ed__1_t439CE0D0B1197FA9E856F03862B0DBEC9F8631FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDownloadAssetBundlesU3Ed__1_System_IDisposable_Dispose_mCF4E1634BEC11A426B981C88C7AE0593F85F2789_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CDownloadAssetBundlesU3Ed__1_System_IDisposable_Dispose_mCF4E1634BEC11A426B981C88C7AE0593F85F2789_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		return;
	}
}
// System.Boolean Google.Play.AssetDelivery.Samples.TextureTargetingDemo.Scripts.TexturedSceneLoader/<DownloadAssetBundles>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDownloadAssetBundlesU3Ed__1_MoveNext_m0C7C3625732044B167EBC32DD45E3D3E803CD506 (U3CDownloadAssetBundlesU3Ed__1_t439CE0D0B1197FA9E856F03862B0DBEC9F8631FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssetDeliveryErrorCode_tBDD13D9D0AAB694759166DB6CFEA5786CE363ACA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDownloadAssetBundlesU3Ed__1_MoveNext_m0C7C3625732044B167EBC32DD45E3D3E803CD506_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDownloadAssetBundlesU3Ed__1_t439CE0D0B1197FA9E856F03862B0DBEC9F8631FA_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C7F48A460D635145D3632382421015C728BF6ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C1DBB84F21D416A0B7817A4EC5A4E80D9CE7CD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DB27BBD4795971EF12075BDA924D0B06FC05E84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84921AC18E88111CEDAE69629BBCBAE44DE8D976);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8D1A02E9FD26A91CE6B763902C1B362F4697025);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CDownloadAssetBundlesU3Ed__1_MoveNext_m0C7C3625732044B167EBC32DD45E3D3E803CD506_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 7));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 8));
	int32_t G_B13_0 = 0;
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 9));
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
		goto IL_005e;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 10));
		// Debug.Log("Starting to retrieve AssetBundle");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 11));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 12));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral7DB27BBD4795971EF12075BDA924D0B06FC05E84, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 12));
		// var sceneAssetBundleRequest = PlayAssetDelivery.RetrieveAssetBundleAsync("sceneassetbundle");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 13));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 14));
		PlayAssetBundleRequest_tF91045E772B64A769998917B0141A4C7EEF03A14* L_3;
		L_3 = PlayAssetDelivery_RetrieveAssetBundleAsync_m09BD8950FA5F26CEAFD3F583CEB0E168F8793B37(_stringLiteral6C1DBB84F21D416A0B7817A4EC5A4E80D9CE7CD4, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 14));
		__this->___U3CsceneAssetBundleRequestU3E5__1_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsceneAssetBundleRequestU3E5__1_3), (void*)L_3);
		// var textureAssetBundleRequest = PlayAssetDelivery.RetrieveAssetBundleAsync("textureassetbundle");
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 15));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 16));
		PlayAssetBundleRequest_tF91045E772B64A769998917B0141A4C7EEF03A14* L_4;
		L_4 = PlayAssetDelivery_RetrieveAssetBundleAsync_m09BD8950FA5F26CEAFD3F583CEB0E168F8793B37(_stringLiteral1C7F48A460D635145D3632382421015C728BF6ED, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 16));
		__this->___U3CtextureAssetBundleRequestU3E5__2_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtextureAssetBundleRequestU3E5__2_4), (void*)L_4);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 17));
		goto IL_0066;
	}

IL_004d:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 18));
		// yield return null;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 19));
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_005e:
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 20));
		__this->___U3CU3E1__state_0 = (-1);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 21));
	}

IL_0066:
	{
		// while (!sceneAssetBundleRequest.IsDone && !textureAssetBundleRequest.IsDone)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 22));
		PlayAssetBundleRequest_tF91045E772B64A769998917B0141A4C7EEF03A14* L_5 = __this->___U3CsceneAssetBundleRequestU3E5__1_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 23));
		NullCheck(L_5);
		bool L_6;
		L_6 = PlayAssetBundleRequest_get_IsDone_mCE97AAD66758C70BBFFD23951ECE3958C45287F9_inline(L_5, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 23));
		if (L_6)
		{
			goto IL_0083;
		}
	}
	{
		PlayAssetBundleRequest_tF91045E772B64A769998917B0141A4C7EEF03A14* L_7 = __this->___U3CtextureAssetBundleRequestU3E5__2_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 24));
		NullCheck(L_7);
		bool L_8;
		L_8 = PlayAssetBundleRequest_get_IsDone_mCE97AAD66758C70BBFFD23951ECE3958C45287F9_inline(L_7, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 24));
		G_B13_0 = ((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		goto IL_0084;
	}

IL_0083:
	{
		G_B13_0 = 0;
	}

IL_0084:
	{
		V_1 = (bool)G_B13_0;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 25));
		bool L_9 = V_1;
		if (L_9)
		{
			goto IL_004d;
		}
	}
	{
		// if (sceneAssetBundleRequest.Error != AssetDeliveryErrorCode.NoError)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 26));
		PlayAssetBundleRequest_tF91045E772B64A769998917B0141A4C7EEF03A14* L_10 = __this->___U3CsceneAssetBundleRequestU3E5__1_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 27));
		NullCheck(L_10);
		int32_t L_11;
		L_11 = VirtualFuncInvoker0< int32_t >::Invoke(11 /* Google.Play.AssetDelivery.AssetDeliveryErrorCode Google.Play.AssetDelivery.PlayAssetBundleRequest::get_Error() */, L_10);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 27));
		V_2 = (bool)((!(((uint32_t)L_11) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 28));
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_00c1;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 29));
		// Debug.LogErrorFormat("Couldn't load sceneassetbundle: {0}", sceneAssetBundleRequest.Error);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 30));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_13;
		PlayAssetBundleRequest_tF91045E772B64A769998917B0141A4C7EEF03A14* L_15 = __this->___U3CsceneAssetBundleRequestU3E5__1_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 31));
		NullCheck(L_15);
		int32_t L_16;
		L_16 = VirtualFuncInvoker0< int32_t >::Invoke(11 /* Google.Play.AssetDelivery.AssetDeliveryErrorCode Google.Play.AssetDelivery.PlayAssetBundleRequest::get_Error() */, L_15);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 31));
		int32_t L_17 = L_16;
		RuntimeObject* L_18 = Box(AssetDeliveryErrorCode_tBDD13D9D0AAB694759166DB6CFEA5786CE363ACA_il2cpp_TypeInfo_var, &L_17);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_18);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_18);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 32));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C(_stringLiteral84921AC18E88111CEDAE69629BBCBAE44DE8D976, L_14, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 32));
		// yield break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 33));
		return (bool)0;
	}

IL_00c1:
	{
		// if (textureAssetBundleRequest.Error != AssetDeliveryErrorCode.NoError)
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 34));
		PlayAssetBundleRequest_tF91045E772B64A769998917B0141A4C7EEF03A14* L_19 = __this->___U3CtextureAssetBundleRequestU3E5__2_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 35));
		NullCheck(L_19);
		int32_t L_20;
		L_20 = VirtualFuncInvoker0< int32_t >::Invoke(11 /* Google.Play.AssetDelivery.AssetDeliveryErrorCode Google.Play.AssetDelivery.PlayAssetBundleRequest::get_Error() */, L_19);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 35));
		V_3 = (bool)((!(((uint32_t)L_20) <= ((uint32_t)0)))? 1 : 0);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 36));
		bool L_21 = V_3;
		if (!L_21)
		{
			goto IL_00fa;
		}
	}
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 37));
		// Debug.LogErrorFormat("Couldn't load textureassetbundle: {0}", textureAssetBundleRequest.Error);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 38));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_22;
		PlayAssetBundleRequest_tF91045E772B64A769998917B0141A4C7EEF03A14* L_24 = __this->___U3CtextureAssetBundleRequestU3E5__2_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 39));
		NullCheck(L_24);
		int32_t L_25;
		L_25 = VirtualFuncInvoker0< int32_t >::Invoke(11 /* Google.Play.AssetDelivery.AssetDeliveryErrorCode Google.Play.AssetDelivery.PlayAssetBundleRequest::get_Error() */, L_24);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 39));
		int32_t L_26 = L_25;
		RuntimeObject* L_27 = Box(AssetDeliveryErrorCode_tBDD13D9D0AAB694759166DB6CFEA5786CE363ACA_il2cpp_TypeInfo_var, &L_26);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_27);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_27);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 40));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C(_stringLiteralA8D1A02E9FD26A91CE6B763902C1B362F4697025, L_23, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 40));
		// yield break;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 41));
		return (bool)0;
	}

IL_00fa:
	{
		// var sceneToLoad = sceneAssetBundleRequest.AssetBundle.GetAllScenePaths()[0];
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 42));
		PlayAssetBundleRequest_tF91045E772B64A769998917B0141A4C7EEF03A14* L_28 = __this->___U3CsceneAssetBundleRequestU3E5__1_3;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 43));
		NullCheck(L_28);
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_29;
		L_29 = PlayAssetBundleRequest_get_AssetBundle_m0126C158B7D2388FAEF7801881B1F910AC03798C_inline(L_28, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 43));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 44));
		NullCheck(L_29);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30;
		L_30 = AssetBundle_GetAllScenePaths_m75D1CD4415067D64A8265A7929B6FF76B91B62FE(L_29, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 44));
		NullCheck(L_30);
		int32_t L_31 = 0;
		String_t* L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		__this->___U3CsceneToLoadU3E5__3_5 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CsceneToLoadU3E5__3_5), (void*)L_32);
		// SceneManager.LoadScene(sceneToLoad);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 45));
		String_t* L_33 = __this->___U3CsceneToLoadU3E5__3_5;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 46));
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_33, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 46));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 47));
		return (bool)0;
	}
}
// System.Object Google.Play.AssetDelivery.Samples.TextureTargetingDemo.Scripts.TexturedSceneLoader/<DownloadAssetBundles>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDownloadAssetBundlesU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF1677AE45FE1D0BE4D21A19569282FFDE6F97E88 (U3CDownloadAssetBundlesU3Ed__1_t439CE0D0B1197FA9E856F03862B0DBEC9F8631FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDownloadAssetBundlesU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF1677AE45FE1D0BE4D21A19569282FFDE6F97E88_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CDownloadAssetBundlesU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF1677AE45FE1D0BE4D21A19569282FFDE6F97E88_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.TextureTargetingDemo.Scripts.TexturedSceneLoader/<DownloadAssetBundles>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDownloadAssetBundlesU3Ed__1_System_Collections_IEnumerator_Reset_mBD9EB9BF93D631D23FFDE4E99E7A26D29B4ABB2F (U3CDownloadAssetBundlesU3Ed__1_t439CE0D0B1197FA9E856F03862B0DBEC9F8631FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDownloadAssetBundlesU3Ed__1_System_Collections_IEnumerator_Reset_mBD9EB9BF93D631D23FFDE4E99E7A26D29B4ABB2F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CDownloadAssetBundlesU3Ed__1_System_Collections_IEnumerator_Reset_mBD9EB9BF93D631D23FFDE4E99E7A26D29B4ABB2F_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDownloadAssetBundlesU3Ed__1_System_Collections_IEnumerator_Reset_mBD9EB9BF93D631D23FFDE4E99E7A26D29B4ABB2F_RuntimeMethod_var)));
	}
}
// System.Object Google.Play.AssetDelivery.Samples.TextureTargetingDemo.Scripts.TexturedSceneLoader/<DownloadAssetBundles>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDownloadAssetBundlesU3Ed__1_System_Collections_IEnumerator_get_Current_m2041761243F7F952EA2C21669EF82E9DCF1DB156 (U3CDownloadAssetBundlesU3Ed__1_t439CE0D0B1197FA9E856F03862B0DBEC9F8631FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDownloadAssetBundlesU3Ed__1_System_Collections_IEnumerator_get_Current_m2041761243F7F952EA2C21669EF82E9DCF1DB156_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, U3CDownloadAssetBundlesU3Ed__1_System_Collections_IEnumerator_get_Current_m2041761243F7F952EA2C21669EF82E9DCF1DB156_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
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
// System.Void Google.Play.AssetDelivery.Samples.TextureTargetingDemo.Scripts.TextureFormatDisplayer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureFormatDisplayer_Start_mF683E8BADF202BEDC40DF111603A18E2791DC342 (TextureFormatDisplayer_tC8E07147F31AF04D2D37208C1C90C514D735CF7D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureFormatDisplayer_Start_mF683E8BADF202BEDC40DF111603A18E2791DC342_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureFormatDisplayer_tC8E07147F31AF04D2D37208C1C90C514D735CF7D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureFormat_t87A73E4A3850D3410DC211676FC14B94226C1C1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84718C692649EC76487A2052D6166E3A3AA88D1C);
		s_Il2CppMethodInitialized = true;
	}
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* V_0 = NULL;
	String_t* V_1 = NULL;
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_LOCALS(methodExecutionContextLocals, (&V_0), (&V_1));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TextureFormatDisplayer_Start_mF683E8BADF202BEDC40DF111603A18E2791DC342_RuntimeMethod_var, methodExecutionContextThis, NULL, methodExecutionContextLocals);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 48));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 49));
	{
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 50));
		// var material = rendererWithMaterial.material;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 51));
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = __this->___rendererWithMaterial_4;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 52));
		NullCheck(L_0);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1;
		L_1 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(L_0, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 52));
		V_0 = L_1;
		// var text = string.Format("Texture is {0}", ((Texture2D)material.mainTexture).format);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 53));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = V_0;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 54));
		NullCheck(L_2);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_3;
		L_3 = Material_get_mainTexture_mC6C6B860B44321F0342AEFA0DD7702384334F37D(L_2, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 54));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 55));
		NullCheck(((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)CastclassSealed((RuntimeObject*)L_3, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var)));
		int32_t L_4;
		L_4 = Texture2D_get_format_mE39DD922F83CA1097383309278BB6F20636A7D9D(((Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4*)CastclassSealed((RuntimeObject*)L_3, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var)), NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 55));
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(TextureFormat_t87A73E4A3850D3410DC211676FC14B94226C1C1D_il2cpp_TypeInfo_var, &L_5);
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 56));
		String_t* L_7;
		L_7 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral84718C692649EC76487A2052D6166E3A3AA88D1C, L_6, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 56));
		V_1 = L_7;
		// GetComponent<Text>().text = text;
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 57));
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 58));
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8;
		L_8 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(__this, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 58));
		String_t* L_9 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 59));
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_9);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 59));
		// Debug.Log(text);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 60));
		String_t* L_10 = V_1;
		STORE_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 61));
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_10, NULL);
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 61));
		// }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery_Samples_TextureTargetingDemo + 62));
		return;
	}
}
// System.Void Google.Play.AssetDelivery.Samples.TextureTargetingDemo.Scripts.TextureFormatDisplayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureFormatDisplayer__ctor_mFB3929E743648602E540213533AF05F1F88A6091 (TextureFormatDisplayer_tC8E07147F31AF04D2D37208C1C90C514D735CF7D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextureFormatDisplayer__ctor_mFB3929E743648602E540213533AF05F1F88A6091_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, TextureFormatDisplayer__ctor_mFB3929E743648602E540213533AF05F1F88A6091_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PlayAssetBundleRequest_get_IsDone_mCE97AAD66758C70BBFFD23951ECE3958C45287F9_inline (PlayAssetBundleRequest_tF91045E772B64A769998917B0141A4C7EEF03A14* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayAssetBundleRequest_get_IsDone_mCE97AAD66758C70BBFFD23951ECE3958C45287F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayAssetBundleRequest_tF91045E772B64A769998917B0141A4C7EEF03A14_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, PlayAssetBundleRequest_get_IsDone_mCE97AAD66758C70BBFFD23951ECE3958C45287F9_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery + 27));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery + 28));
	{
		// public bool IsDone { get; protected set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery + 29));
		bool L_0 = __this->___U3CIsDoneU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AssetBundle_tB38418819A49060CD738CB21541649340F082943* PlayAssetBundleRequest_get_AssetBundle_m0126C158B7D2388FAEF7801881B1F910AC03798C_inline (PlayAssetBundleRequest_tF91045E772B64A769998917B0141A4C7EEF03A14* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayAssetBundleRequest_get_AssetBundle_m0126C158B7D2388FAEF7801881B1F910AC03798C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayAssetBundleRequest_tF91045E772B64A769998917B0141A4C7EEF03A14_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_THIS(methodExecutionContextThis, (&__this));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, PlayAssetBundleRequest_get_AssetBundle_m0126C158B7D2388FAEF7801881B1F910AC03798C_RuntimeMethod_var, methodExecutionContextThis, NULL, NULL);
	CHECK_METHOD_ENTRY_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery + 36));
	CHECK_METHOD_EXIT_SEQ_POINT(methodExitChecker, methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery + 37));
	{
		// public AssetBundle AssetBundle { get; protected set; }
		CHECK_SEQ_POINT(methodExecutionContext, (g_sequencePointsGoogle_Play_AssetDelivery + 38));
		AssetBundle_tB38418819A49060CD738CB21541649340F082943* L_0 = __this->___U3CAssetBundleU3Ek__BackingField_4;
		return L_0;
	}
}
