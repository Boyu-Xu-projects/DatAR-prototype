#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>

#include "vm/CachedCCWBase.h"
#include "utils/New.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>
struct AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833;
// Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Perception.People.HandMeshObserver>
struct AsyncOperationCompletedHandler_1_t9941802FAFCAEA5AFAF80CD47D7361C7AF9973FB;
// Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IBuffer>
struct AsyncOperationCompletedHandler_1_t5827CD05C17566D3B54709AE10684C908E69902A;
// Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType>
struct AsyncOperationCompletedHandler_1_tFFC79BA1F00AF8AF192CB11D7A8381654658E1B4;
// Windows.Foundation.AsyncOperationCompletedHandler`1<System.Object>
struct AsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D;
// Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>
struct AsyncOperationCompletedHandler_1_t328808A8D9489316F5F1EF92341677DA0C501125;
// Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.StorageFile>
struct AsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061;
// Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.StorageFolder>
struct AsyncOperationCompletedHandler_1_t2196E1E2BD9AF393427332E9C9F22A7D85B1D6B4;
// Windows.Foundation.AsyncOperationCompletedHandler`1<System.UInt32>
struct AsyncOperationCompletedHandler_1_tF454F1E4B28A15E6AC9801C8A1708668213E16BE;
// Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct AsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83;
// Windows.Foundation.AsyncOperationProgressHandler`2<System.Object,System.Object>
struct AsyncOperationProgressHandler_2_tDABCAA894A199A003194DB49B9E29B595221BD21;
// Windows.Foundation.AsyncOperationProgressHandler`2<System.Object,System.UInt32>
struct AsyncOperationProgressHandler_2_t8C7A82F8933E16668CD676A0BF993CF251C28D87;
// Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>
struct AsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7;
// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130;
// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.Object,System.Object>
struct AsyncOperationWithProgressCompletedHandler_2_tA4F57F1EBB7F0FE72729C419BC4E8E74147DF40A;
// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.Object,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_t5411FC7EEA228F52AC0FB3FC3F8ED36BCC56348A;
// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410;
// Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<System.ValueTuple`2<System.Single[],System.Int32>>
struct AsyncTriggerBase_1_tE45ABB0D5AB61654A8C48F9679E5DADA445E11F5;
// Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<System.ValueTuple`2<UnityEngine.RenderTexture,UnityEngine.RenderTexture>>
struct AsyncTriggerBase_1_t920AA4BC92E519E788E26FA273EA6CC5FF32C70E;
// Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<Cysharp.Threading.Tasks.AsyncUnit>
struct AsyncTriggerBase_1_tEB023CF674941B32F22E0B5E7BFB961CF634FFA4;
// Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<UnityEngine.EventSystems.AxisEventData>
struct AsyncTriggerBase_1_t6C670A05E7DB0DC2F0091D5E2B7F330B8E32158F;
// Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<UnityEngine.EventSystems.BaseEventData>
struct AsyncTriggerBase_1_t898ABC8E66F0B8699981B9F0E2A31E2F746AF4A1;
// Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<System.Boolean>
struct AsyncTriggerBase_1_t15C0ABEBD94C17BC1DB8A5E0494D2E8560714D20;
// Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<UnityEngine.Collider>
struct AsyncTriggerBase_1_tA247A3C9622EA7CCEC006CCC1ABC7E60AD4A1515;
// Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<UnityEngine.Collider2D>
struct AsyncTriggerBase_1_t3CB0C4E7AA1B186B4FF94C6C4E7ED64A11600D34;
// Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<UnityEngine.Collision>
struct AsyncTriggerBase_1_t04E0A8F33B20E0A506E0D86822AD9B0B1F4D81BD;
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93;
// Windows.Foundation.IAsyncOperationWithProgress`2<System.Object,System.Object>
struct IAsyncOperationWithProgress_2_t81E4506C3B7B5DAA7884356C0994B02BCCC12746;
// Windows.Foundation.IAsyncOperationWithProgress`2<System.Object,System.UInt32>
struct IAsyncOperationWithProgress_2_t4C79F04EFEC306B80E0827A65F07CA57B22D2937;
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>
struct IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB;
// Windows.Foundation.IAsyncOperation`1<System.Boolean>
struct IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF;
// Windows.Foundation.IAsyncOperation`1<Windows.Perception.People.HandMeshObserver>
struct IAsyncOperation_1_t0874BF21C52B1A21763C1277695B2A724D9E4F56;
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IBuffer>
struct IAsyncOperation_1_t7BC0C2EC9F472CCFAA748C4A0487D3F7BE568542;
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType>
struct IAsyncOperation_1_tF4C439C2CDF5077E54DFEA6B03E7B4D3785DFB69;
// Windows.Foundation.IAsyncOperation`1<System.Object>
struct IAsyncOperation_1_tE95B7CD98CE930F006BBD07D7BB5109224B1BFFC;
// Windows.Foundation.IAsyncOperation`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>
struct IAsyncOperation_1_t3E5E0E44D9FA75713CF0BF6622C9059660699044;
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.StorageFile>
struct IAsyncOperation_1_t4DF8D93870801CBDF1404B858B231D7BD74E042E;
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.StorageFolder>
struct IAsyncOperation_1_tD12D8ED3FD09605FD1A7BC101A5E87C803BFF117;
// Windows.Foundation.IAsyncOperation`1<System.UInt32>
struct IAsyncOperation_1_tDF3123F2E9343D6DBBFE6A5D008A395E62CE246A;
// System.IObserver`1<System.Net.HttpWebResponse>
struct IObserver_1_t5726780C1BD20319E330C4A5F56E4B4B6852F71B;
// System.IObserver`1<System.IO.Stream>
struct IObserver_1_tA9694BD4A1339AB6742AE59E2CCD5440D0282603;
// System.IObserver`1<UniRx.Unit>
struct IObserver_1_t0E86DEA721938487772381107CECD7CFF07ACF01;
// System.IObserver`1<System.Net.WebResponse>
struct IObserver_1_t875BB9EF65716CF70D9633BD771C6C70B2E51D3E;
// Cysharp.Threading.Tasks.ITriggerHandler`1<System.ValueTuple`2<System.Single[],System.Int32>>
struct ITriggerHandler_1_t3BC488C12CC22FC9B62318C28912259B36712331;
// Cysharp.Threading.Tasks.ITriggerHandler`1<System.ValueTuple`2<UnityEngine.RenderTexture,UnityEngine.RenderTexture>>
struct ITriggerHandler_1_t8EFD4626FE29CAF6674E3AEEAB4A387A949A547D;
// Cysharp.Threading.Tasks.ITriggerHandler`1<Cysharp.Threading.Tasks.AsyncUnit>
struct ITriggerHandler_1_t2683952E2166A2C160B9BE4D2B642AE3ABE6C07F;
// Cysharp.Threading.Tasks.ITriggerHandler`1<UnityEngine.EventSystems.AxisEventData>
struct ITriggerHandler_1_tB3EFB9F0F51D0DB40B95F4CB770CDE13FF43ED3F;
// Cysharp.Threading.Tasks.ITriggerHandler`1<UnityEngine.EventSystems.BaseEventData>
struct ITriggerHandler_1_t2B8CF9C76F999146A843FE8EB8961AE82DB48B7D;
// Cysharp.Threading.Tasks.ITriggerHandler`1<System.Boolean>
struct ITriggerHandler_1_t1997DFD33510889D493FE90177796EB175B71D60;
// Cysharp.Threading.Tasks.ITriggerHandler`1<UnityEngine.Collider>
struct ITriggerHandler_1_tBBE5056B226B93CA5A2196D3B7BD0641291C40FB;
// Cysharp.Threading.Tasks.ITriggerHandler`1<UnityEngine.Collider2D>
struct ITriggerHandler_1_t067D1734F47BD40560D4E8861B8499ACFD29F2FD;
// Cysharp.Threading.Tasks.ITriggerHandler`1<UnityEngine.Collision>
struct ITriggerHandler_1_tC8885EAEAD0782C0ECAF118F4FAF23D2335EF2D0;
// System.Threading.SparselyPopulatedArrayFragment`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E;
// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Exception
struct Exception_t;
// System.Net.HttpWebResponse
struct HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB;
// System.IDisposable
struct IDisposable_t099785737FC6A1E3699919A94109383715A8D807;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Net.WebResponse
struct WebResponse_t4EB79E9B7A899FD18A4AE51B7FE4FBE9A2D636B0;

IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationCompletedHandler_1_Invoke_m123B07E27A7EA48E9543A5673F4525B6CE9FAD21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationCompletedHandler_1_Invoke_m563FAAA70D97A1BED9C43795F25149F67FB5A88A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationCompletedHandler_1_Invoke_m594BBE478487BEB1B0FBD8DF96D3202AB85F1836_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationCompletedHandler_1_Invoke_m5A7D02F556AA673CC6285691DBDB66636C0048E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationCompletedHandler_1_Invoke_m6E5E207CF8B2D8B4C8E07778F76258F8BBBA8242_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationCompletedHandler_1_Invoke_m7ADFDF924B9ED1DEE270E030BB6FF916F47C2245_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationCompletedHandler_1_Invoke_m83B24403F3DD218240FAB1AFBA30634F2468AFEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationCompletedHandler_1_Invoke_mC2114CC7B5182D7B0B9A2A16EAA911A83A7F8486_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationCompletedHandler_1_Invoke_mFB615A68AAD78CA2C31C3A6A57E9850C82DD8FF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationProgressHandler_2_Invoke_m55AD755F673EA70C2078764866BE082E79701E25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationProgressHandler_2_Invoke_m660CF6C4E9759B3DA04ED33048691F8054A4275E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationProgressHandler_2_Invoke_m8B624F24DDE86BE50970E21DB168AB80DB2CCE8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationProgressHandler_2_Invoke_mC8624B6E1DC32D428B716E844083F343748F27C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationWithProgressCompletedHandler_2_Invoke_m03FF97CD09DC8A3C138D2274D3D76EF374B81518_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationWithProgressCompletedHandler_2_Invoke_m0E94253487FD5F06393748F4BC6936D117E824C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationWithProgressCompletedHandler_2_Invoke_mEFFDDDBC86C0B7BC52D2F76F3E4C1D6C728D96EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationWithProgressCompletedHandler_2_Invoke_mFC9E8BD1E218854024569CCCA5973B3221EA8F85_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct IAsyncOperationCompletedHandler_1_t2196E1E2BD9AF393427332E9C9F22A7D85B1D6B4_ComCallableWrapper;
struct IAsyncOperationCompletedHandler_1_t328808A8D9489316F5F1EF92341677DA0C501125_ComCallableWrapper;
struct IAsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_ComCallableWrapper;
struct IAsyncOperationCompletedHandler_1_t5827CD05C17566D3B54709AE10684C908E69902A_ComCallableWrapper;
struct IAsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061_ComCallableWrapper;
struct IAsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D_ComCallableWrapper;
struct IAsyncOperationCompletedHandler_1_t9941802FAFCAEA5AFAF80CD47D7361C7AF9973FB_ComCallableWrapper;
struct IAsyncOperationCompletedHandler_1_tF454F1E4B28A15E6AC9801C8A1708668213E16BE_ComCallableWrapper;
struct IAsyncOperationCompletedHandler_1_tFFC79BA1F00AF8AF192CB11D7A8381654658E1B4_ComCallableWrapper;
struct IAsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83_ComCallableWrapper;
struct IAsyncOperationProgressHandler_2_t8C7A82F8933E16668CD676A0BF993CF251C28D87_ComCallableWrapper;
struct IAsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7_ComCallableWrapper;
struct IAsyncOperationProgressHandler_2_tDABCAA894A199A003194DB49B9E29B595221BD21_ComCallableWrapper;
struct IAsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_ComCallableWrapper;
struct IAsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_ComCallableWrapper;
struct IAsyncOperationWithProgressCompletedHandler_2_t5411FC7EEA228F52AC0FB3FC3F8ED36BCC56348A_ComCallableWrapper;
struct IAsyncOperationWithProgressCompletedHandler_2_tA4F57F1EBB7F0FE72729C419BC4E8E74147DF40A_ComCallableWrapper;
struct IAsyncOperationWithProgress_2_t4C79F04EFEC306B80E0827A65F07CA57B22D2937;
struct IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB;
struct IAsyncOperationWithProgress_2_t81E4506C3B7B5DAA7884356C0994B02BCCC12746;
struct IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93;
struct IAsyncOperation_1_t0874BF21C52B1A21763C1277695B2A724D9E4F56;
struct IAsyncOperation_1_t3E5E0E44D9FA75713CF0BF6622C9059660699044;
struct IAsyncOperation_1_t4DF8D93870801CBDF1404B858B231D7BD74E042E;
struct IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF;
struct IAsyncOperation_1_t7BC0C2EC9F472CCFAA748C4A0487D3F7BE568542;
struct IAsyncOperation_1_tD12D8ED3FD09605FD1A7BC101A5E87C803BFF117;
struct IAsyncOperation_1_tDF3123F2E9343D6DBBFE6A5D008A395E62CE246A;
struct IAsyncOperation_1_tE95B7CD98CE930F006BBD07D7BB5109224B1BFFC;
struct IAsyncOperation_1_tF4C439C2CDF5077E54DFEA6B03E7B4D3785DFB69;
struct IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC;
struct IHandMeshObserver_tA497D8D462D45DC786DB2F94B0417A99F847F9BC;
struct IRandomAccessStreamWithContentType_t1A0E3C6A5101EFCA76339E14C24FE9832E43324E;
struct ISpeechSynthesisStream_tFA8C7E1F51E829B22F715363FDDD74892B9DFF40;
struct IStorageFile_t826BC1B02A924A68B9C973131C3B1A8C02B1C6B8;
struct IStorageFolder_t582A78BB94B49B6AD89A1B8CE57B5B1B9832F9F1;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct NOVTABLE IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Progress_mBC6183A763190D7A90AC3695ABA5695BA36C856A(IAsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Progress_mE2D4B228CE53F99221609445BE370DDFCE36E6B1(IAsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Completed_m175060E2E21B33EF1970DD606F09B7DF584D798D(IAsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Completed_mC86F0CF355BA73A8EDDBDAE24D74C5879DA6FBBA(IAsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_GetResults_m0F646662AC31DEE0CE961AFADC7973E48F97C5B9(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC** comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperationWithProgress`2<System.Object,System.Object>
struct NOVTABLE IAsyncOperationWithProgress_2_t81E4506C3B7B5DAA7884356C0994B02BCCC12746 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Progress_mB32E83C66C5DBDEDC17E7A057A4004BDC1F90C91(IAsyncOperationProgressHandler_2_tDABCAA894A199A003194DB49B9E29B595221BD21_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Progress_m775ED829B3FB28B2FA25CEFD0F4B395BBD196678(IAsyncOperationProgressHandler_2_tDABCAA894A199A003194DB49B9E29B595221BD21_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Completed_m1349D9B3CF95D433F8D671F404DEBD9BB68CD1E2(IAsyncOperationWithProgressCompletedHandler_2_tA4F57F1EBB7F0FE72729C419BC4E8E74147DF40A_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Completed_m1C7C0962A03E3BD861A3833BEA53883790DEA686(IAsyncOperationWithProgressCompletedHandler_2_tA4F57F1EBB7F0FE72729C419BC4E8E74147DF40A_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_GetResults_m654D44241177E7FF39C8E038F121677524A610BC(Il2CppIInspectable** comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperationWithProgress`2<System.Object,System.UInt32>
struct NOVTABLE IAsyncOperationWithProgress_2_t4C79F04EFEC306B80E0827A65F07CA57B22D2937 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Progress_m67E3ADB2BBEC1A7806B8110B36C06F3428706EB5(IAsyncOperationProgressHandler_2_t8C7A82F8933E16668CD676A0BF993CF251C28D87_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Progress_m4F85EA289C733278C509A50AEFE2A63C6C17E0B0(IAsyncOperationProgressHandler_2_t8C7A82F8933E16668CD676A0BF993CF251C28D87_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Completed_m1B7C1AC484033EE6F71AD4F6F77454A364D79D96(IAsyncOperationWithProgressCompletedHandler_2_t5411FC7EEA228F52AC0FB3FC3F8ED36BCC56348A_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Completed_m9BAE73EE17B337F5F98AF3C50B740A7BE89D019B(IAsyncOperationWithProgressCompletedHandler_2_t5411FC7EEA228F52AC0FB3FC3F8ED36BCC56348A_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_GetResults_m7EC09EB26C2E3731D35998D863F68C0D9F04A420(Il2CppIInspectable** comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>
struct NOVTABLE IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Progress_m0377F4567A96FDBBDB5965FBC39543CB067FBC44(IAsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Progress_m56432550918918419AD9E3C4C6628C1761816138(IAsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Completed_m543BD227353BA50F701DDE984A8B401788B0B43C(IAsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Completed_mEDC3E8F6D24BF8D62A67B5CCF13C77258C3D7FB8(IAsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_GetResults_mA5979B888030B4A4C8E751DBEEF4305A3CE37292(uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperation`1<System.Boolean>
struct NOVTABLE IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m7656E1FBD07F1A33A8BABCA2DFC7FB61231A0958(IAsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_mF8AED96C1879988554BA949E0718A6174C3117F5(IAsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m33CB8132B6D0D81238F6BE90A9D3F1F13AB422AD(bool* comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperation`1<Windows.Perception.People.HandMeshObserver>
struct NOVTABLE IAsyncOperation_1_t0874BF21C52B1A21763C1277695B2A724D9E4F56 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_mDA59D6F156299EB4DEAE15EF336162510C2C66D2(IAsyncOperationCompletedHandler_1_t9941802FAFCAEA5AFAF80CD47D7361C7AF9973FB_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_m87D10B3592C176980FB3334BA160D0A8F0D497AF(IAsyncOperationCompletedHandler_1_t9941802FAFCAEA5AFAF80CD47D7361C7AF9973FB_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m9F8155B9E4016EE9EDA3702AC225E58827E50954(IHandMeshObserver_tA497D8D462D45DC786DB2F94B0417A99F847F9BC** comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IBuffer>
struct NOVTABLE IAsyncOperation_1_t7BC0C2EC9F472CCFAA748C4A0487D3F7BE568542 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m636C0ED780C29F9308810FE929CA212D97320EEC(IAsyncOperationCompletedHandler_1_t5827CD05C17566D3B54709AE10684C908E69902A_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_mC26D339653FCAF503A9CDE46865002AF5F59E43B(IAsyncOperationCompletedHandler_1_t5827CD05C17566D3B54709AE10684C908E69902A_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m76919B4691E63BD26224C1E0CA35EFC12D402B86(IBuffer_t33ECA22EB7DDA1EF333215FF8109DC736AF11FBC** comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType>
struct NOVTABLE IAsyncOperation_1_tF4C439C2CDF5077E54DFEA6B03E7B4D3785DFB69 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m7373A22163C85062B4E7CB4799145DA42CDB58C8(IAsyncOperationCompletedHandler_1_tFFC79BA1F00AF8AF192CB11D7A8381654658E1B4_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_mE284B394E3CF92BFA421B0C4F259545E384E89AB(IAsyncOperationCompletedHandler_1_tFFC79BA1F00AF8AF192CB11D7A8381654658E1B4_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_mE9148F0A4AE311A33EFF7F958FC377E0AB7ADFCA(IRandomAccessStreamWithContentType_t1A0E3C6A5101EFCA76339E14C24FE9832E43324E** comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperation`1<System.Object>
struct NOVTABLE IAsyncOperation_1_tE95B7CD98CE930F006BBD07D7BB5109224B1BFFC : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_mD5886CE3E4920A01936A06BA1915CF30037129CB(IAsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_m9DF4E847B615A86C716939BC2C5FE61C8E517348(IAsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_mD27969D80A6AA31B8C41D824318BA5044197404F(Il2CppIInspectable** comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperation`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>
struct NOVTABLE IAsyncOperation_1_t3E5E0E44D9FA75713CF0BF6622C9059660699044 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m6EEDEF55FBB339809F0A37C221B14CD560466329(IAsyncOperationCompletedHandler_1_t328808A8D9489316F5F1EF92341677DA0C501125_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_m8F318F58A249E654F7C48BB70641962B43B51BE7(IAsyncOperationCompletedHandler_1_t328808A8D9489316F5F1EF92341677DA0C501125_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m26719A728F871544E5A81D675AC0C3745DCD7053(ISpeechSynthesisStream_tFA8C7E1F51E829B22F715363FDDD74892B9DFF40** comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.StorageFile>
struct NOVTABLE IAsyncOperation_1_t4DF8D93870801CBDF1404B858B231D7BD74E042E : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m108CBA2BE6D19F6A961970FF1AC3DE4761942818(IAsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_m9773816D15B923B84BCE4CB70D52BBB55D61421B(IAsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m8071D5CC72DC722A092D03B8725B40398F216758(IStorageFile_t826BC1B02A924A68B9C973131C3B1A8C02B1C6B8** comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.StorageFolder>
struct NOVTABLE IAsyncOperation_1_tD12D8ED3FD09605FD1A7BC101A5E87C803BFF117 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m93433A71B4570B4B49FF69F26777C9AB6CDE35A4(IAsyncOperationCompletedHandler_1_t2196E1E2BD9AF393427332E9C9F22A7D85B1D6B4_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_mD93A9F8BB02A67C932CA3A54A52ED321F50879EA(IAsyncOperationCompletedHandler_1_t2196E1E2BD9AF393427332E9C9F22A7D85B1D6B4_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m2B763B7FC44E078032142B92A9A07898FE5DDB66(IStorageFolder_t582A78BB94B49B6AD89A1B8CE57B5B1B9832F9F1** comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperation`1<System.UInt32>
struct NOVTABLE IAsyncOperation_1_tDF3123F2E9343D6DBBFE6A5D008A395E62CE246A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_mC7C94BF5E03D8C5AA20FF9BE77223E1ECE3B0BD4(IAsyncOperationCompletedHandler_1_tF454F1E4B28A15E6AC9801C8A1708668213E16BE_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_m27E355E8C0523DE3F33321676087FB75E057B44A(IAsyncOperationCompletedHandler_1_tF454F1E4B28A15E6AC9801C8A1708668213E16BE_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m28613513B6F3DE14AC503BC914AFF74AEC8E4CEC(uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() = 0;
};

// System.Object


// UniRx.AsyncSubject`1<System.Net.HttpWebResponse>
struct AsyncSubject_1_t1160CE62266C97EC66D63E892ED5F147F14C1F48  : public RuntimeObject
{
public:
	// System.Object UniRx.AsyncSubject`1::observerLock
	RuntimeObject * ___observerLock_0;
	// T UniRx.AsyncSubject`1::lastValue
	HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB * ___lastValue_1;
	// System.Boolean UniRx.AsyncSubject`1::hasValue
	bool ___hasValue_2;
	// System.Boolean UniRx.AsyncSubject`1::isStopped
	bool ___isStopped_3;
	// System.Boolean UniRx.AsyncSubject`1::isDisposed
	bool ___isDisposed_4;
	// System.Exception UniRx.AsyncSubject`1::lastError
	Exception_t * ___lastError_5;
	// System.IObserver`1<T> UniRx.AsyncSubject`1::outObserver
	RuntimeObject* ___outObserver_6;

public:
	inline static int32_t get_offset_of_observerLock_0() { return static_cast<int32_t>(offsetof(AsyncSubject_1_t1160CE62266C97EC66D63E892ED5F147F14C1F48, ___observerLock_0)); }
	inline RuntimeObject * get_observerLock_0() const { return ___observerLock_0; }
	inline RuntimeObject ** get_address_of_observerLock_0() { return &___observerLock_0; }
	inline void set_observerLock_0(RuntimeObject * value)
	{
		___observerLock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observerLock_0), (void*)value);
	}

	inline static int32_t get_offset_of_lastValue_1() { return static_cast<int32_t>(offsetof(AsyncSubject_1_t1160CE62266C97EC66D63E892ED5F147F14C1F48, ___lastValue_1)); }
	inline HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB * get_lastValue_1() const { return ___lastValue_1; }
	inline HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB ** get_address_of_lastValue_1() { return &___lastValue_1; }
	inline void set_lastValue_1(HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB * value)
	{
		___lastValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_hasValue_2() { return static_cast<int32_t>(offsetof(AsyncSubject_1_t1160CE62266C97EC66D63E892ED5F147F14C1F48, ___hasValue_2)); }
	inline bool get_hasValue_2() const { return ___hasValue_2; }
	inline bool* get_address_of_hasValue_2() { return &___hasValue_2; }
	inline void set_hasValue_2(bool value)
	{
		___hasValue_2 = value;
	}

	inline static int32_t get_offset_of_isStopped_3() { return static_cast<int32_t>(offsetof(AsyncSubject_1_t1160CE62266C97EC66D63E892ED5F147F14C1F48, ___isStopped_3)); }
	inline bool get_isStopped_3() const { return ___isStopped_3; }
	inline bool* get_address_of_isStopped_3() { return &___isStopped_3; }
	inline void set_isStopped_3(bool value)
	{
		___isStopped_3 = value;
	}

	inline static int32_t get_offset_of_isDisposed_4() { return static_cast<int32_t>(offsetof(AsyncSubject_1_t1160CE62266C97EC66D63E892ED5F147F14C1F48, ___isDisposed_4)); }
	inline bool get_isDisposed_4() const { return ___isDisposed_4; }
	inline bool* get_address_of_isDisposed_4() { return &___isDisposed_4; }
	inline void set_isDisposed_4(bool value)
	{
		___isDisposed_4 = value;
	}

	inline static int32_t get_offset_of_lastError_5() { return static_cast<int32_t>(offsetof(AsyncSubject_1_t1160CE62266C97EC66D63E892ED5F147F14C1F48, ___lastError_5)); }
	inline Exception_t * get_lastError_5() const { return ___lastError_5; }
	inline Exception_t ** get_address_of_lastError_5() { return &___lastError_5; }
	inline void set_lastError_5(Exception_t * value)
	{
		___lastError_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastError_5), (void*)value);
	}

	inline static int32_t get_offset_of_outObserver_6() { return static_cast<int32_t>(offsetof(AsyncSubject_1_t1160CE62266C97EC66D63E892ED5F147F14C1F48, ___outObserver_6)); }
	inline RuntimeObject* get_outObserver_6() const { return ___outObserver_6; }
	inline RuntimeObject** get_address_of_outObserver_6() { return &___outObserver_6; }
	inline void set_outObserver_6(RuntimeObject* value)
	{
		___outObserver_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outObserver_6), (void*)value);
	}
};


// UniRx.AsyncSubject`1<System.IO.Stream>
struct AsyncSubject_1_t6D947F4E800DB0320AC342645B7662F3A80CC1DA  : public RuntimeObject
{
public:
	// System.Object UniRx.AsyncSubject`1::observerLock
	RuntimeObject * ___observerLock_0;
	// T UniRx.AsyncSubject`1::lastValue
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___lastValue_1;
	// System.Boolean UniRx.AsyncSubject`1::hasValue
	bool ___hasValue_2;
	// System.Boolean UniRx.AsyncSubject`1::isStopped
	bool ___isStopped_3;
	// System.Boolean UniRx.AsyncSubject`1::isDisposed
	bool ___isDisposed_4;
	// System.Exception UniRx.AsyncSubject`1::lastError
	Exception_t * ___lastError_5;
	// System.IObserver`1<T> UniRx.AsyncSubject`1::outObserver
	RuntimeObject* ___outObserver_6;

public:
	inline static int32_t get_offset_of_observerLock_0() { return static_cast<int32_t>(offsetof(AsyncSubject_1_t6D947F4E800DB0320AC342645B7662F3A80CC1DA, ___observerLock_0)); }
	inline RuntimeObject * get_observerLock_0() const { return ___observerLock_0; }
	inline RuntimeObject ** get_address_of_observerLock_0() { return &___observerLock_0; }
	inline void set_observerLock_0(RuntimeObject * value)
	{
		___observerLock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observerLock_0), (void*)value);
	}

	inline static int32_t get_offset_of_lastValue_1() { return static_cast<int32_t>(offsetof(AsyncSubject_1_t6D947F4E800DB0320AC342645B7662F3A80CC1DA, ___lastValue_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_lastValue_1() const { return ___lastValue_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_lastValue_1() { return &___lastValue_1; }
	inline void set_lastValue_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___lastValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_hasValue_2() { return static_cast<int32_t>(offsetof(AsyncSubject_1_t6D947F4E800DB0320AC342645B7662F3A80CC1DA, ___hasValue_2)); }
	inline bool get_hasValue_2() const { return ___hasValue_2; }
	inline bool* get_address_of_hasValue_2() { return &___hasValue_2; }
	inline void set_hasValue_2(bool value)
	{
		___hasValue_2 = value;
	}

	inline static int32_t get_offset_of_isStopped_3() { return static_cast<int32_t>(offsetof(AsyncSubject_1_t6D947F4E800DB0320AC342645B7662F3A80CC1DA, ___isStopped_3)); }
	inline bool get_isStopped_3() const { return ___isStopped_3; }
	inline bool* get_address_of_isStopped_3() { return &___isStopped_3; }
	inline void set_isStopped_3(bool value)
	{
		___isStopped_3 = value;
	}

	inline static int32_t get_offset_of_isDisposed_4() { return static_cast<int32_t>(offsetof(AsyncSubject_1_t6D947F4E800DB0320AC342645B7662F3A80CC1DA, ___isDisposed_4)); }
	inline bool get_isDisposed_4() const { return ___isDisposed_4; }
	inline bool* get_address_of_isDisposed_4() { return &___isDisposed_4; }
	inline void set_isDisposed_4(bool value)
	{
		___isDisposed_4 = value;
	}

	inline static int32_t get_offset_of_lastError_5() { return static_cast<int32_t>(offsetof(AsyncSubject_1_t6D947F4E800DB0320AC342645B7662F3A80CC1DA, ___lastError_5)); }
	inline Exception_t * get_lastError_5() const { return ___lastError_5; }
	inline Exception_t ** get_address_of_lastError_5() { return &___lastError_5; }
	inline void set_lastError_5(Exception_t * value)
	{
		___lastError_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastError_5), (void*)value);
	}

	inline static int32_t get_offset_of_outObserver_6() { return static_cast<int32_t>(offsetof(AsyncSubject_1_t6D947F4E800DB0320AC342645B7662F3A80CC1DA, ___outObserver_6)); }
	inline RuntimeObject* get_outObserver_6() const { return ___outObserver_6; }
	inline RuntimeObject** get_address_of_outObserver_6() { return &___outObserver_6; }
	inline void set_outObserver_6(RuntimeObject* value)
	{
		___outObserver_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outObserver_6), (void*)value);
	}
};


// UniRx.AsyncSubject`1<System.Net.WebResponse>
struct AsyncSubject_1_t62213BFFD0709CF6E1FEC868F6708F4EEAEF6A6F  : public RuntimeObject
{
public:
	// System.Object UniRx.AsyncSubject`1::observerLock
	RuntimeObject * ___observerLock_0;
	// T UniRx.AsyncSubject`1::lastValue
	WebResponse_t4EB79E9B7A899FD18A4AE51B7FE4FBE9A2D636B0 * ___lastValue_1;
	// System.Boolean UniRx.AsyncSubject`1::hasValue
	bool ___hasValue_2;
	// System.Boolean UniRx.AsyncSubject`1::isStopped
	bool ___isStopped_3;
	// System.Boolean UniRx.AsyncSubject`1::isDisposed
	bool ___isDisposed_4;
	// System.Exception UniRx.AsyncSubject`1::lastError
	Exception_t * ___lastError_5;
	// System.IObserver`1<T> UniRx.AsyncSubject`1::outObserver
	RuntimeObject* ___outObserver_6;

public:
	inline static int32_t get_offset_of_observerLock_0() { return static_cast<int32_t>(offsetof(AsyncSubject_1_t62213BFFD0709CF6E1FEC868F6708F4EEAEF6A6F, ___observerLock_0)); }
	inline RuntimeObject * get_observerLock_0() const { return ___observerLock_0; }
	inline RuntimeObject ** get_address_of_observerLock_0() { return &___observerLock_0; }
	inline void set_observerLock_0(RuntimeObject * value)
	{
		___observerLock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observerLock_0), (void*)value);
	}

	inline static int32_t get_offset_of_lastValue_1() { return static_cast<int32_t>(offsetof(AsyncSubject_1_t62213BFFD0709CF6E1FEC868F6708F4EEAEF6A6F, ___lastValue_1)); }
	inline WebResponse_t4EB79E9B7A899FD18A4AE51B7FE4FBE9A2D636B0 * get_lastValue_1() const { return ___lastValue_1; }
	inline WebResponse_t4EB79E9B7A899FD18A4AE51B7FE4FBE9A2D636B0 ** get_address_of_lastValue_1() { return &___lastValue_1; }
	inline void set_lastValue_1(WebResponse_t4EB79E9B7A899FD18A4AE51B7FE4FBE9A2D636B0 * value)
	{
		___lastValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_hasValue_2() { return static_cast<int32_t>(offsetof(AsyncSubject_1_t62213BFFD0709CF6E1FEC868F6708F4EEAEF6A6F, ___hasValue_2)); }
	inline bool get_hasValue_2() const { return ___hasValue_2; }
	inline bool* get_address_of_hasValue_2() { return &___hasValue_2; }
	inline void set_hasValue_2(bool value)
	{
		___hasValue_2 = value;
	}

	inline static int32_t get_offset_of_isStopped_3() { return static_cast<int32_t>(offsetof(AsyncSubject_1_t62213BFFD0709CF6E1FEC868F6708F4EEAEF6A6F, ___isStopped_3)); }
	inline bool get_isStopped_3() const { return ___isStopped_3; }
	inline bool* get_address_of_isStopped_3() { return &___isStopped_3; }
	inline void set_isStopped_3(bool value)
	{
		___isStopped_3 = value;
	}

	inline static int32_t get_offset_of_isDisposed_4() { return static_cast<int32_t>(offsetof(AsyncSubject_1_t62213BFFD0709CF6E1FEC868F6708F4EEAEF6A6F, ___isDisposed_4)); }
	inline bool get_isDisposed_4() const { return ___isDisposed_4; }
	inline bool* get_address_of_isDisposed_4() { return &___isDisposed_4; }
	inline void set_isDisposed_4(bool value)
	{
		___isDisposed_4 = value;
	}

	inline static int32_t get_offset_of_lastError_5() { return static_cast<int32_t>(offsetof(AsyncSubject_1_t62213BFFD0709CF6E1FEC868F6708F4EEAEF6A6F, ___lastError_5)); }
	inline Exception_t * get_lastError_5() const { return ___lastError_5; }
	inline Exception_t ** get_address_of_lastError_5() { return &___lastError_5; }
	inline void set_lastError_5(Exception_t * value)
	{
		___lastError_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastError_5), (void*)value);
	}

	inline static int32_t get_offset_of_outObserver_6() { return static_cast<int32_t>(offsetof(AsyncSubject_1_t62213BFFD0709CF6E1FEC868F6708F4EEAEF6A6F, ___outObserver_6)); }
	inline RuntimeObject* get_outObserver_6() const { return ___outObserver_6; }
	inline RuntimeObject** get_address_of_outObserver_6() { return &___outObserver_6; }
	inline void set_outObserver_6(RuntimeObject* value)
	{
		___outObserver_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outObserver_6), (void*)value);
	}
};


// UniRx.Operators.OperatorObserverBase`2<UniRx.Unit,UniRx.Unit>
struct OperatorObserverBase_2_tF243B5106EEEF4A6D04AD83F65BC8940D21D38C3  : public RuntimeObject
{
public:
	// System.IObserver`1<TResult> modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.Operators.OperatorObserverBase`2::observer
	RuntimeObject* ___observer_0;
	// System.IDisposable UniRx.Operators.OperatorObserverBase`2::cancel
	RuntimeObject* ___cancel_1;

public:
	inline static int32_t get_offset_of_observer_0() { return static_cast<int32_t>(offsetof(OperatorObserverBase_2_tF243B5106EEEF4A6D04AD83F65BC8940D21D38C3, ___observer_0)); }
	inline RuntimeObject* get_observer_0() const { return ___observer_0; }
	inline RuntimeObject** get_address_of_observer_0() { return &___observer_0; }
	inline void set_observer_0(RuntimeObject* value)
	{
		___observer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observer_0), (void*)value);
	}

	inline static int32_t get_offset_of_cancel_1() { return static_cast<int32_t>(offsetof(OperatorObserverBase_2_tF243B5106EEEF4A6D04AD83F65BC8940D21D38C3, ___cancel_1)); }
	inline RuntimeObject* get_cancel_1() const { return ___cancel_1; }
	inline RuntimeObject** get_address_of_cancel_1() { return &___cancel_1; }
	inline void set_cancel_1(RuntimeObject* value)
	{
		___cancel_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancel_1), (void*)value);
	}
};


// UniRx.Operators.OperatorObserverBase`2<System.Net.WebResponse,System.Net.WebResponse>
struct OperatorObserverBase_2_t9B9613DB0F776F15F501E3C26D6B54D479C98C8C  : public RuntimeObject
{
public:
	// System.IObserver`1<TResult> modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.Operators.OperatorObserverBase`2::observer
	RuntimeObject* ___observer_0;
	// System.IDisposable UniRx.Operators.OperatorObserverBase`2::cancel
	RuntimeObject* ___cancel_1;

public:
	inline static int32_t get_offset_of_observer_0() { return static_cast<int32_t>(offsetof(OperatorObserverBase_2_t9B9613DB0F776F15F501E3C26D6B54D479C98C8C, ___observer_0)); }
	inline RuntimeObject* get_observer_0() const { return ___observer_0; }
	inline RuntimeObject** get_address_of_observer_0() { return &___observer_0; }
	inline void set_observer_0(RuntimeObject* value)
	{
		___observer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observer_0), (void*)value);
	}

	inline static int32_t get_offset_of_cancel_1() { return static_cast<int32_t>(offsetof(OperatorObserverBase_2_t9B9613DB0F776F15F501E3C26D6B54D479C98C8C, ___cancel_1)); }
	inline RuntimeObject* get_cancel_1() const { return ___cancel_1; }
	inline RuntimeObject** get_address_of_cancel_1() { return &___cancel_1; }
	inline void set_cancel_1(RuntimeObject* value)
	{
		___cancel_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancel_1), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UniRx.Operators.AsObservableObservable`1/AsObservable<UniRx.Unit>
struct AsObservable_t27AAC66A9216FDCE9EC2F496E7183178558DEA18  : public OperatorObserverBase_2_tF243B5106EEEF4A6D04AD83F65BC8940D21D38C3
{
public:

public:
};


// UniRx.Operators.AsObservableObservable`1/AsObservable<System.Net.WebResponse>
struct AsObservable_t87718F333411F8907862C928155FA974537E19C7  : public OperatorObserverBase_2_t9B9613DB0F776F15F501E3C26D6B54D479C98C8C
{
public:

public:
};


// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0 
{
public:
	// System.Threading.SparselyPopulatedArrayFragment`1<T> System.Threading.SparselyPopulatedArrayAddInfo`1::m_source
	SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 * ___m_source_0;
	// System.Int32 System.Threading.SparselyPopulatedArrayAddInfo`1::m_index
	int32_t ___m_index_1;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0, ___m_source_0)); }
	inline SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 * get_m_source_0() const { return ___m_source_0; }
	inline SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_index_1() { return static_cast<int32_t>(offsetof(SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0, ___m_index_1)); }
	inline int32_t get_m_index_1() const { return ___m_index_1; }
	inline int32_t* get_address_of_m_index_1() { return &___m_index_1; }
	inline void set_m_index_1(int32_t value)
	{
		___m_index_1 = value;
	}
};


// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<UnityEngine.EventSystems.AxisEventData>
struct UniTaskCompletionSourceCore_1_t22273306B34D02A51C5DD5A13CAAE5B0EAD57DB9 
{
public:
	// TResult Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::result
	AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E * ___result_0;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::error
	RuntimeObject * ___error_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::version
	int16_t ___version_2;
	// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::hasUnhandledError
	bool ___hasUnhandledError_3;
	// System.Int32 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::completedCount
	int32_t ___completedCount_4;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuation
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___continuation_5;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuationState
	RuntimeObject * ___continuationState_6;

public:
	inline static int32_t get_offset_of_result_0() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t22273306B34D02A51C5DD5A13CAAE5B0EAD57DB9, ___result_0)); }
	inline AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E * get_result_0() const { return ___result_0; }
	inline AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E ** get_address_of_result_0() { return &___result_0; }
	inline void set_result_0(AxisEventData_t5F2EE83206BFD1BC59087D1C9CE31A4389A17E1E * value)
	{
		___result_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_0), (void*)value);
	}

	inline static int32_t get_offset_of_error_1() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t22273306B34D02A51C5DD5A13CAAE5B0EAD57DB9, ___error_1)); }
	inline RuntimeObject * get_error_1() const { return ___error_1; }
	inline RuntimeObject ** get_address_of_error_1() { return &___error_1; }
	inline void set_error_1(RuntimeObject * value)
	{
		___error_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___error_1), (void*)value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t22273306B34D02A51C5DD5A13CAAE5B0EAD57DB9, ___version_2)); }
	inline int16_t get_version_2() const { return ___version_2; }
	inline int16_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int16_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_hasUnhandledError_3() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t22273306B34D02A51C5DD5A13CAAE5B0EAD57DB9, ___hasUnhandledError_3)); }
	inline bool get_hasUnhandledError_3() const { return ___hasUnhandledError_3; }
	inline bool* get_address_of_hasUnhandledError_3() { return &___hasUnhandledError_3; }
	inline void set_hasUnhandledError_3(bool value)
	{
		___hasUnhandledError_3 = value;
	}

	inline static int32_t get_offset_of_completedCount_4() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t22273306B34D02A51C5DD5A13CAAE5B0EAD57DB9, ___completedCount_4)); }
	inline int32_t get_completedCount_4() const { return ___completedCount_4; }
	inline int32_t* get_address_of_completedCount_4() { return &___completedCount_4; }
	inline void set_completedCount_4(int32_t value)
	{
		___completedCount_4 = value;
	}

	inline static int32_t get_offset_of_continuation_5() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t22273306B34D02A51C5DD5A13CAAE5B0EAD57DB9, ___continuation_5)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_continuation_5() const { return ___continuation_5; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_continuation_5() { return &___continuation_5; }
	inline void set_continuation_5(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___continuation_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuation_5), (void*)value);
	}

	inline static int32_t get_offset_of_continuationState_6() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t22273306B34D02A51C5DD5A13CAAE5B0EAD57DB9, ___continuationState_6)); }
	inline RuntimeObject * get_continuationState_6() const { return ___continuationState_6; }
	inline RuntimeObject ** get_address_of_continuationState_6() { return &___continuationState_6; }
	inline void set_continuationState_6(RuntimeObject * value)
	{
		___continuationState_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuationState_6), (void*)value);
	}
};


// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<UnityEngine.EventSystems.BaseEventData>
struct UniTaskCompletionSourceCore_1_tBE89A2DC048F7809A3CC311191FF18E0282E4D7B 
{
public:
	// TResult Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::result
	BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * ___result_0;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::error
	RuntimeObject * ___error_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::version
	int16_t ___version_2;
	// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::hasUnhandledError
	bool ___hasUnhandledError_3;
	// System.Int32 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::completedCount
	int32_t ___completedCount_4;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuation
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___continuation_5;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuationState
	RuntimeObject * ___continuationState_6;

public:
	inline static int32_t get_offset_of_result_0() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_tBE89A2DC048F7809A3CC311191FF18E0282E4D7B, ___result_0)); }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * get_result_0() const { return ___result_0; }
	inline BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E ** get_address_of_result_0() { return &___result_0; }
	inline void set_result_0(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E * value)
	{
		___result_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_0), (void*)value);
	}

	inline static int32_t get_offset_of_error_1() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_tBE89A2DC048F7809A3CC311191FF18E0282E4D7B, ___error_1)); }
	inline RuntimeObject * get_error_1() const { return ___error_1; }
	inline RuntimeObject ** get_address_of_error_1() { return &___error_1; }
	inline void set_error_1(RuntimeObject * value)
	{
		___error_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___error_1), (void*)value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_tBE89A2DC048F7809A3CC311191FF18E0282E4D7B, ___version_2)); }
	inline int16_t get_version_2() const { return ___version_2; }
	inline int16_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int16_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_hasUnhandledError_3() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_tBE89A2DC048F7809A3CC311191FF18E0282E4D7B, ___hasUnhandledError_3)); }
	inline bool get_hasUnhandledError_3() const { return ___hasUnhandledError_3; }
	inline bool* get_address_of_hasUnhandledError_3() { return &___hasUnhandledError_3; }
	inline void set_hasUnhandledError_3(bool value)
	{
		___hasUnhandledError_3 = value;
	}

	inline static int32_t get_offset_of_completedCount_4() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_tBE89A2DC048F7809A3CC311191FF18E0282E4D7B, ___completedCount_4)); }
	inline int32_t get_completedCount_4() const { return ___completedCount_4; }
	inline int32_t* get_address_of_completedCount_4() { return &___completedCount_4; }
	inline void set_completedCount_4(int32_t value)
	{
		___completedCount_4 = value;
	}

	inline static int32_t get_offset_of_continuation_5() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_tBE89A2DC048F7809A3CC311191FF18E0282E4D7B, ___continuation_5)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_continuation_5() const { return ___continuation_5; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_continuation_5() { return &___continuation_5; }
	inline void set_continuation_5(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___continuation_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuation_5), (void*)value);
	}

	inline static int32_t get_offset_of_continuationState_6() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_tBE89A2DC048F7809A3CC311191FF18E0282E4D7B, ___continuationState_6)); }
	inline RuntimeObject * get_continuationState_6() const { return ___continuationState_6; }
	inline RuntimeObject ** get_address_of_continuationState_6() { return &___continuationState_6; }
	inline void set_continuationState_6(RuntimeObject * value)
	{
		___continuationState_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuationState_6), (void*)value);
	}
};


// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>
struct UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F 
{
public:
	// TResult Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::result
	bool ___result_0;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::error
	RuntimeObject * ___error_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::version
	int16_t ___version_2;
	// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::hasUnhandledError
	bool ___hasUnhandledError_3;
	// System.Int32 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::completedCount
	int32_t ___completedCount_4;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuation
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___continuation_5;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuationState
	RuntimeObject * ___continuationState_6;

public:
	inline static int32_t get_offset_of_result_0() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F, ___result_0)); }
	inline bool get_result_0() const { return ___result_0; }
	inline bool* get_address_of_result_0() { return &___result_0; }
	inline void set_result_0(bool value)
	{
		___result_0 = value;
	}

	inline static int32_t get_offset_of_error_1() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F, ___error_1)); }
	inline RuntimeObject * get_error_1() const { return ___error_1; }
	inline RuntimeObject ** get_address_of_error_1() { return &___error_1; }
	inline void set_error_1(RuntimeObject * value)
	{
		___error_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___error_1), (void*)value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F, ___version_2)); }
	inline int16_t get_version_2() const { return ___version_2; }
	inline int16_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int16_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_hasUnhandledError_3() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F, ___hasUnhandledError_3)); }
	inline bool get_hasUnhandledError_3() const { return ___hasUnhandledError_3; }
	inline bool* get_address_of_hasUnhandledError_3() { return &___hasUnhandledError_3; }
	inline void set_hasUnhandledError_3(bool value)
	{
		___hasUnhandledError_3 = value;
	}

	inline static int32_t get_offset_of_completedCount_4() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F, ___completedCount_4)); }
	inline int32_t get_completedCount_4() const { return ___completedCount_4; }
	inline int32_t* get_address_of_completedCount_4() { return &___completedCount_4; }
	inline void set_completedCount_4(int32_t value)
	{
		___completedCount_4 = value;
	}

	inline static int32_t get_offset_of_continuation_5() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F, ___continuation_5)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_continuation_5() const { return ___continuation_5; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_continuation_5() { return &___continuation_5; }
	inline void set_continuation_5(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___continuation_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuation_5), (void*)value);
	}

	inline static int32_t get_offset_of_continuationState_6() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F, ___continuationState_6)); }
	inline RuntimeObject * get_continuationState_6() const { return ___continuationState_6; }
	inline RuntimeObject ** get_address_of_continuationState_6() { return &___continuationState_6; }
	inline void set_continuationState_6(RuntimeObject * value)
	{
		___continuationState_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuationState_6), (void*)value);
	}
};


// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<UnityEngine.Collider>
struct UniTaskCompletionSourceCore_1_t204E7257EC1027832A4D91AAF898CB1289406864 
{
public:
	// TResult Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::result
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___result_0;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::error
	RuntimeObject * ___error_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::version
	int16_t ___version_2;
	// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::hasUnhandledError
	bool ___hasUnhandledError_3;
	// System.Int32 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::completedCount
	int32_t ___completedCount_4;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuation
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___continuation_5;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuationState
	RuntimeObject * ___continuationState_6;

public:
	inline static int32_t get_offset_of_result_0() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t204E7257EC1027832A4D91AAF898CB1289406864, ___result_0)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_result_0() const { return ___result_0; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_result_0() { return &___result_0; }
	inline void set_result_0(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___result_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_0), (void*)value);
	}

	inline static int32_t get_offset_of_error_1() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t204E7257EC1027832A4D91AAF898CB1289406864, ___error_1)); }
	inline RuntimeObject * get_error_1() const { return ___error_1; }
	inline RuntimeObject ** get_address_of_error_1() { return &___error_1; }
	inline void set_error_1(RuntimeObject * value)
	{
		___error_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___error_1), (void*)value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t204E7257EC1027832A4D91AAF898CB1289406864, ___version_2)); }
	inline int16_t get_version_2() const { return ___version_2; }
	inline int16_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int16_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_hasUnhandledError_3() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t204E7257EC1027832A4D91AAF898CB1289406864, ___hasUnhandledError_3)); }
	inline bool get_hasUnhandledError_3() const { return ___hasUnhandledError_3; }
	inline bool* get_address_of_hasUnhandledError_3() { return &___hasUnhandledError_3; }
	inline void set_hasUnhandledError_3(bool value)
	{
		___hasUnhandledError_3 = value;
	}

	inline static int32_t get_offset_of_completedCount_4() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t204E7257EC1027832A4D91AAF898CB1289406864, ___completedCount_4)); }
	inline int32_t get_completedCount_4() const { return ___completedCount_4; }
	inline int32_t* get_address_of_completedCount_4() { return &___completedCount_4; }
	inline void set_completedCount_4(int32_t value)
	{
		___completedCount_4 = value;
	}

	inline static int32_t get_offset_of_continuation_5() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t204E7257EC1027832A4D91AAF898CB1289406864, ___continuation_5)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_continuation_5() const { return ___continuation_5; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_continuation_5() { return &___continuation_5; }
	inline void set_continuation_5(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___continuation_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuation_5), (void*)value);
	}

	inline static int32_t get_offset_of_continuationState_6() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t204E7257EC1027832A4D91AAF898CB1289406864, ___continuationState_6)); }
	inline RuntimeObject * get_continuationState_6() const { return ___continuationState_6; }
	inline RuntimeObject ** get_address_of_continuationState_6() { return &___continuationState_6; }
	inline void set_continuationState_6(RuntimeObject * value)
	{
		___continuationState_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuationState_6), (void*)value);
	}
};


// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<UnityEngine.Collider2D>
struct UniTaskCompletionSourceCore_1_t1C582D0FA5C54C46FCEB382A81AE5A436188E5A1 
{
public:
	// TResult Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::result
	Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___result_0;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::error
	RuntimeObject * ___error_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::version
	int16_t ___version_2;
	// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::hasUnhandledError
	bool ___hasUnhandledError_3;
	// System.Int32 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::completedCount
	int32_t ___completedCount_4;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuation
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___continuation_5;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuationState
	RuntimeObject * ___continuationState_6;

public:
	inline static int32_t get_offset_of_result_0() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t1C582D0FA5C54C46FCEB382A81AE5A436188E5A1, ___result_0)); }
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * get_result_0() const { return ___result_0; }
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 ** get_address_of_result_0() { return &___result_0; }
	inline void set_result_0(Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * value)
	{
		___result_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_0), (void*)value);
	}

	inline static int32_t get_offset_of_error_1() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t1C582D0FA5C54C46FCEB382A81AE5A436188E5A1, ___error_1)); }
	inline RuntimeObject * get_error_1() const { return ___error_1; }
	inline RuntimeObject ** get_address_of_error_1() { return &___error_1; }
	inline void set_error_1(RuntimeObject * value)
	{
		___error_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___error_1), (void*)value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t1C582D0FA5C54C46FCEB382A81AE5A436188E5A1, ___version_2)); }
	inline int16_t get_version_2() const { return ___version_2; }
	inline int16_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int16_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_hasUnhandledError_3() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t1C582D0FA5C54C46FCEB382A81AE5A436188E5A1, ___hasUnhandledError_3)); }
	inline bool get_hasUnhandledError_3() const { return ___hasUnhandledError_3; }
	inline bool* get_address_of_hasUnhandledError_3() { return &___hasUnhandledError_3; }
	inline void set_hasUnhandledError_3(bool value)
	{
		___hasUnhandledError_3 = value;
	}

	inline static int32_t get_offset_of_completedCount_4() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t1C582D0FA5C54C46FCEB382A81AE5A436188E5A1, ___completedCount_4)); }
	inline int32_t get_completedCount_4() const { return ___completedCount_4; }
	inline int32_t* get_address_of_completedCount_4() { return &___completedCount_4; }
	inline void set_completedCount_4(int32_t value)
	{
		___completedCount_4 = value;
	}

	inline static int32_t get_offset_of_continuation_5() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t1C582D0FA5C54C46FCEB382A81AE5A436188E5A1, ___continuation_5)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_continuation_5() const { return ___continuation_5; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_continuation_5() { return &___continuation_5; }
	inline void set_continuation_5(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___continuation_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuation_5), (void*)value);
	}

	inline static int32_t get_offset_of_continuationState_6() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t1C582D0FA5C54C46FCEB382A81AE5A436188E5A1, ___continuationState_6)); }
	inline RuntimeObject * get_continuationState_6() const { return ___continuationState_6; }
	inline RuntimeObject ** get_address_of_continuationState_6() { return &___continuationState_6; }
	inline void set_continuationState_6(RuntimeObject * value)
	{
		___continuationState_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuationState_6), (void*)value);
	}
};


// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<UnityEngine.Collision>
struct UniTaskCompletionSourceCore_1_tD1160DAFA91D9BE9527942694CE2A648B5BA3F84 
{
public:
	// TResult Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::result
	Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___result_0;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::error
	RuntimeObject * ___error_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::version
	int16_t ___version_2;
	// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::hasUnhandledError
	bool ___hasUnhandledError_3;
	// System.Int32 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::completedCount
	int32_t ___completedCount_4;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuation
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___continuation_5;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuationState
	RuntimeObject * ___continuationState_6;

public:
	inline static int32_t get_offset_of_result_0() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_tD1160DAFA91D9BE9527942694CE2A648B5BA3F84, ___result_0)); }
	inline Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * get_result_0() const { return ___result_0; }
	inline Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 ** get_address_of_result_0() { return &___result_0; }
	inline void set_result_0(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * value)
	{
		___result_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_0), (void*)value);
	}

	inline static int32_t get_offset_of_error_1() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_tD1160DAFA91D9BE9527942694CE2A648B5BA3F84, ___error_1)); }
	inline RuntimeObject * get_error_1() const { return ___error_1; }
	inline RuntimeObject ** get_address_of_error_1() { return &___error_1; }
	inline void set_error_1(RuntimeObject * value)
	{
		___error_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___error_1), (void*)value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_tD1160DAFA91D9BE9527942694CE2A648B5BA3F84, ___version_2)); }
	inline int16_t get_version_2() const { return ___version_2; }
	inline int16_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int16_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_hasUnhandledError_3() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_tD1160DAFA91D9BE9527942694CE2A648B5BA3F84, ___hasUnhandledError_3)); }
	inline bool get_hasUnhandledError_3() const { return ___hasUnhandledError_3; }
	inline bool* get_address_of_hasUnhandledError_3() { return &___hasUnhandledError_3; }
	inline void set_hasUnhandledError_3(bool value)
	{
		___hasUnhandledError_3 = value;
	}

	inline static int32_t get_offset_of_completedCount_4() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_tD1160DAFA91D9BE9527942694CE2A648B5BA3F84, ___completedCount_4)); }
	inline int32_t get_completedCount_4() const { return ___completedCount_4; }
	inline int32_t* get_address_of_completedCount_4() { return &___completedCount_4; }
	inline void set_completedCount_4(int32_t value)
	{
		___completedCount_4 = value;
	}

	inline static int32_t get_offset_of_continuation_5() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_tD1160DAFA91D9BE9527942694CE2A648B5BA3F84, ___continuation_5)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_continuation_5() const { return ___continuation_5; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_continuation_5() { return &___continuation_5; }
	inline void set_continuation_5(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___continuation_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuation_5), (void*)value);
	}

	inline static int32_t get_offset_of_continuationState_6() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_tD1160DAFA91D9BE9527942694CE2A648B5BA3F84, ___continuationState_6)); }
	inline RuntimeObject * get_continuationState_6() const { return ___continuationState_6; }
	inline RuntimeObject ** get_address_of_continuationState_6() { return &___continuationState_6; }
	inline void set_continuationState_6(RuntimeObject * value)
	{
		___continuationState_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuationState_6), (void*)value);
	}
};


// System.ValueTuple`2<System.Single[],System.Int32>
struct ValueTuple_2_tB0BD1FDCE186E6257207F60D3FFD50620D67ADE7 
{
public:
	// T1 System.ValueTuple`2::Item1
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	int32_t ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_tB0BD1FDCE186E6257207F60D3FFD50620D67ADE7, ___Item1_0)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_Item1_0() const { return ___Item1_0; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_tB0BD1FDCE186E6257207F60D3FFD50620D67ADE7, ___Item2_1)); }
	inline int32_t get_Item2_1() const { return ___Item2_1; }
	inline int32_t* get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(int32_t value)
	{
		___Item2_1 = value;
	}
};


// System.ValueTuple`2<UnityEngine.RenderTexture,UnityEngine.RenderTexture>
struct ValueTuple_2_t85B5776378C89A0AABF6A80D0A0C7B62902D84D6 
{
public:
	// T1 System.ValueTuple`2::Item1
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_t85B5776378C89A0AABF6A80D0A0C7B62902D84D6, ___Item1_0)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_Item1_0() const { return ___Item1_0; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_t85B5776378C89A0AABF6A80D0A0C7B62902D84D6, ___Item2_1)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_Item2_1() const { return ___Item2_1; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item2_1), (void*)value);
	}
};


// Cysharp.Threading.Tasks.AsyncUnit
struct AsyncUnit_tF4D610196BF6CB9CB5032138DD11D52A01D3C210 
{
public:
	union
	{
		struct
		{
		};
		uint8_t AsyncUnit_tF4D610196BF6CB9CB5032138DD11D52A01D3C210__padding[1];
	};

public:
};

struct AsyncUnit_tF4D610196BF6CB9CB5032138DD11D52A01D3C210_StaticFields
{
public:
	// Cysharp.Threading.Tasks.AsyncUnit Cysharp.Threading.Tasks.AsyncUnit::Default
	AsyncUnit_tF4D610196BF6CB9CB5032138DD11D52A01D3C210  ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(AsyncUnit_tF4D610196BF6CB9CB5032138DD11D52A01D3C210_StaticFields, ___Default_0)); }
	inline AsyncUnit_tF4D610196BF6CB9CB5032138DD11D52A01D3C210  get_Default_0() const { return ___Default_0; }
	inline AsyncUnit_tF4D610196BF6CB9CB5032138DD11D52A01D3C210 * get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(AsyncUnit_tF4D610196BF6CB9CB5032138DD11D52A01D3C210  value)
	{
		___Default_0 = value;
	}
};


// System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD, ___m_source_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}
};

struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ActionToActionObjShunt_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_pinvoke
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_com
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};

// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// UniRx.Unit
struct Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C__padding[1];
	};

public:
};

struct Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C_StaticFields
{
public:
	// UniRx.Unit UniRx.Unit::default
	Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  ___default_0;

public:
	inline static int32_t get_offset_of_default_0() { return static_cast<int32_t>(offsetof(Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C_StaticFields, ___default_0)); }
	inline Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  get_default_0() const { return ___default_0; }
	inline Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C * get_address_of_default_0() { return &___default_0; }
	inline void set_default_0(Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  value)
	{
		___default_0 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UniRx.AsyncSubject`1<UniRx.Unit>
struct AsyncSubject_1_t63AB93BC60FF60B400CF9CAF505B293AF6B7C073  : public RuntimeObject
{
public:
	// System.Object UniRx.AsyncSubject`1::observerLock
	RuntimeObject * ___observerLock_0;
	// T UniRx.AsyncSubject`1::lastValue
	Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  ___lastValue_1;
	// System.Boolean UniRx.AsyncSubject`1::hasValue
	bool ___hasValue_2;
	// System.Boolean UniRx.AsyncSubject`1::isStopped
	bool ___isStopped_3;
	// System.Boolean UniRx.AsyncSubject`1::isDisposed
	bool ___isDisposed_4;
	// System.Exception UniRx.AsyncSubject`1::lastError
	Exception_t * ___lastError_5;
	// System.IObserver`1<T> UniRx.AsyncSubject`1::outObserver
	RuntimeObject* ___outObserver_6;

public:
	inline static int32_t get_offset_of_observerLock_0() { return static_cast<int32_t>(offsetof(AsyncSubject_1_t63AB93BC60FF60B400CF9CAF505B293AF6B7C073, ___observerLock_0)); }
	inline RuntimeObject * get_observerLock_0() const { return ___observerLock_0; }
	inline RuntimeObject ** get_address_of_observerLock_0() { return &___observerLock_0; }
	inline void set_observerLock_0(RuntimeObject * value)
	{
		___observerLock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___observerLock_0), (void*)value);
	}

	inline static int32_t get_offset_of_lastValue_1() { return static_cast<int32_t>(offsetof(AsyncSubject_1_t63AB93BC60FF60B400CF9CAF505B293AF6B7C073, ___lastValue_1)); }
	inline Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  get_lastValue_1() const { return ___lastValue_1; }
	inline Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C * get_address_of_lastValue_1() { return &___lastValue_1; }
	inline void set_lastValue_1(Unit_t11840C1173CB65892C6CF18A1D7403CA52DC358C  value)
	{
		___lastValue_1 = value;
	}

	inline static int32_t get_offset_of_hasValue_2() { return static_cast<int32_t>(offsetof(AsyncSubject_1_t63AB93BC60FF60B400CF9CAF505B293AF6B7C073, ___hasValue_2)); }
	inline bool get_hasValue_2() const { return ___hasValue_2; }
	inline bool* get_address_of_hasValue_2() { return &___hasValue_2; }
	inline void set_hasValue_2(bool value)
	{
		___hasValue_2 = value;
	}

	inline static int32_t get_offset_of_isStopped_3() { return static_cast<int32_t>(offsetof(AsyncSubject_1_t63AB93BC60FF60B400CF9CAF505B293AF6B7C073, ___isStopped_3)); }
	inline bool get_isStopped_3() const { return ___isStopped_3; }
	inline bool* get_address_of_isStopped_3() { return &___isStopped_3; }
	inline void set_isStopped_3(bool value)
	{
		___isStopped_3 = value;
	}

	inline static int32_t get_offset_of_isDisposed_4() { return static_cast<int32_t>(offsetof(AsyncSubject_1_t63AB93BC60FF60B400CF9CAF505B293AF6B7C073, ___isDisposed_4)); }
	inline bool get_isDisposed_4() const { return ___isDisposed_4; }
	inline bool* get_address_of_isDisposed_4() { return &___isDisposed_4; }
	inline void set_isDisposed_4(bool value)
	{
		___isDisposed_4 = value;
	}

	inline static int32_t get_offset_of_lastError_5() { return static_cast<int32_t>(offsetof(AsyncSubject_1_t63AB93BC60FF60B400CF9CAF505B293AF6B7C073, ___lastError_5)); }
	inline Exception_t * get_lastError_5() const { return ___lastError_5; }
	inline Exception_t ** get_address_of_lastError_5() { return &___lastError_5; }
	inline void set_lastError_5(Exception_t * value)
	{
		___lastError_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastError_5), (void*)value);
	}

	inline static int32_t get_offset_of_outObserver_6() { return static_cast<int32_t>(offsetof(AsyncSubject_1_t63AB93BC60FF60B400CF9CAF505B293AF6B7C073, ___outObserver_6)); }
	inline RuntimeObject* get_outObserver_6() const { return ___outObserver_6; }
	inline RuntimeObject** get_address_of_outObserver_6() { return &___outObserver_6; }
	inline void set_outObserver_6(RuntimeObject* value)
	{
		___outObserver_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outObserver_6), (void*)value);
	}
};


// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`2<System.Single[],System.Int32>>
struct UniTaskCompletionSourceCore_1_t0DF2F745857A70D850C3D0E6DC34A2ACF047DC60 
{
public:
	// TResult Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::result
	ValueTuple_2_tB0BD1FDCE186E6257207F60D3FFD50620D67ADE7  ___result_0;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::error
	RuntimeObject * ___error_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::version
	int16_t ___version_2;
	// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::hasUnhandledError
	bool ___hasUnhandledError_3;
	// System.Int32 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::completedCount
	int32_t ___completedCount_4;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuation
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___continuation_5;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuationState
	RuntimeObject * ___continuationState_6;

public:
	inline static int32_t get_offset_of_result_0() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t0DF2F745857A70D850C3D0E6DC34A2ACF047DC60, ___result_0)); }
	inline ValueTuple_2_tB0BD1FDCE186E6257207F60D3FFD50620D67ADE7  get_result_0() const { return ___result_0; }
	inline ValueTuple_2_tB0BD1FDCE186E6257207F60D3FFD50620D67ADE7 * get_address_of_result_0() { return &___result_0; }
	inline void set_result_0(ValueTuple_2_tB0BD1FDCE186E6257207F60D3FFD50620D67ADE7  value)
	{
		___result_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___result_0))->___Item1_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_error_1() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t0DF2F745857A70D850C3D0E6DC34A2ACF047DC60, ___error_1)); }
	inline RuntimeObject * get_error_1() const { return ___error_1; }
	inline RuntimeObject ** get_address_of_error_1() { return &___error_1; }
	inline void set_error_1(RuntimeObject * value)
	{
		___error_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___error_1), (void*)value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t0DF2F745857A70D850C3D0E6DC34A2ACF047DC60, ___version_2)); }
	inline int16_t get_version_2() const { return ___version_2; }
	inline int16_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int16_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_hasUnhandledError_3() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t0DF2F745857A70D850C3D0E6DC34A2ACF047DC60, ___hasUnhandledError_3)); }
	inline bool get_hasUnhandledError_3() const { return ___hasUnhandledError_3; }
	inline bool* get_address_of_hasUnhandledError_3() { return &___hasUnhandledError_3; }
	inline void set_hasUnhandledError_3(bool value)
	{
		___hasUnhandledError_3 = value;
	}

	inline static int32_t get_offset_of_completedCount_4() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t0DF2F745857A70D850C3D0E6DC34A2ACF047DC60, ___completedCount_4)); }
	inline int32_t get_completedCount_4() const { return ___completedCount_4; }
	inline int32_t* get_address_of_completedCount_4() { return &___completedCount_4; }
	inline void set_completedCount_4(int32_t value)
	{
		___completedCount_4 = value;
	}

	inline static int32_t get_offset_of_continuation_5() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t0DF2F745857A70D850C3D0E6DC34A2ACF047DC60, ___continuation_5)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_continuation_5() const { return ___continuation_5; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_continuation_5() { return &___continuation_5; }
	inline void set_continuation_5(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___continuation_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuation_5), (void*)value);
	}

	inline static int32_t get_offset_of_continuationState_6() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t0DF2F745857A70D850C3D0E6DC34A2ACF047DC60, ___continuationState_6)); }
	inline RuntimeObject * get_continuationState_6() const { return ___continuationState_6; }
	inline RuntimeObject ** get_address_of_continuationState_6() { return &___continuationState_6; }
	inline void set_continuationState_6(RuntimeObject * value)
	{
		___continuationState_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuationState_6), (void*)value);
	}
};


// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.ValueTuple`2<UnityEngine.RenderTexture,UnityEngine.RenderTexture>>
struct UniTaskCompletionSourceCore_1_t6DA346A9ED1ACD9FE512B52C2B6DE6D4D83FDD28 
{
public:
	// TResult Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::result
	ValueTuple_2_t85B5776378C89A0AABF6A80D0A0C7B62902D84D6  ___result_0;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::error
	RuntimeObject * ___error_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::version
	int16_t ___version_2;
	// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::hasUnhandledError
	bool ___hasUnhandledError_3;
	// System.Int32 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::completedCount
	int32_t ___completedCount_4;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuation
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___continuation_5;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuationState
	RuntimeObject * ___continuationState_6;

public:
	inline static int32_t get_offset_of_result_0() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t6DA346A9ED1ACD9FE512B52C2B6DE6D4D83FDD28, ___result_0)); }
	inline ValueTuple_2_t85B5776378C89A0AABF6A80D0A0C7B62902D84D6  get_result_0() const { return ___result_0; }
	inline ValueTuple_2_t85B5776378C89A0AABF6A80D0A0C7B62902D84D6 * get_address_of_result_0() { return &___result_0; }
	inline void set_result_0(ValueTuple_2_t85B5776378C89A0AABF6A80D0A0C7B62902D84D6  value)
	{
		___result_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___result_0))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___result_0))->___Item2_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_error_1() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t6DA346A9ED1ACD9FE512B52C2B6DE6D4D83FDD28, ___error_1)); }
	inline RuntimeObject * get_error_1() const { return ___error_1; }
	inline RuntimeObject ** get_address_of_error_1() { return &___error_1; }
	inline void set_error_1(RuntimeObject * value)
	{
		___error_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___error_1), (void*)value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t6DA346A9ED1ACD9FE512B52C2B6DE6D4D83FDD28, ___version_2)); }
	inline int16_t get_version_2() const { return ___version_2; }
	inline int16_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int16_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_hasUnhandledError_3() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t6DA346A9ED1ACD9FE512B52C2B6DE6D4D83FDD28, ___hasUnhandledError_3)); }
	inline bool get_hasUnhandledError_3() const { return ___hasUnhandledError_3; }
	inline bool* get_address_of_hasUnhandledError_3() { return &___hasUnhandledError_3; }
	inline void set_hasUnhandledError_3(bool value)
	{
		___hasUnhandledError_3 = value;
	}

	inline static int32_t get_offset_of_completedCount_4() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t6DA346A9ED1ACD9FE512B52C2B6DE6D4D83FDD28, ___completedCount_4)); }
	inline int32_t get_completedCount_4() const { return ___completedCount_4; }
	inline int32_t* get_address_of_completedCount_4() { return &___completedCount_4; }
	inline void set_completedCount_4(int32_t value)
	{
		___completedCount_4 = value;
	}

	inline static int32_t get_offset_of_continuation_5() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t6DA346A9ED1ACD9FE512B52C2B6DE6D4D83FDD28, ___continuation_5)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_continuation_5() const { return ___continuation_5; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_continuation_5() { return &___continuation_5; }
	inline void set_continuation_5(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___continuation_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuation_5), (void*)value);
	}

	inline static int32_t get_offset_of_continuationState_6() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t6DA346A9ED1ACD9FE512B52C2B6DE6D4D83FDD28, ___continuationState_6)); }
	inline RuntimeObject * get_continuationState_6() const { return ___continuationState_6; }
	inline RuntimeObject ** get_address_of_continuationState_6() { return &___continuationState_6; }
	inline void set_continuationState_6(RuntimeObject * value)
	{
		___continuationState_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuationState_6), (void*)value);
	}
};


// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<Cysharp.Threading.Tasks.AsyncUnit>
struct UniTaskCompletionSourceCore_1_t886A008AACA28A8827B01051DAB74D378D04AECB 
{
public:
	// TResult Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::result
	AsyncUnit_tF4D610196BF6CB9CB5032138DD11D52A01D3C210  ___result_0;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::error
	RuntimeObject * ___error_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::version
	int16_t ___version_2;
	// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::hasUnhandledError
	bool ___hasUnhandledError_3;
	// System.Int32 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::completedCount
	int32_t ___completedCount_4;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuation
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___continuation_5;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuationState
	RuntimeObject * ___continuationState_6;

public:
	inline static int32_t get_offset_of_result_0() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t886A008AACA28A8827B01051DAB74D378D04AECB, ___result_0)); }
	inline AsyncUnit_tF4D610196BF6CB9CB5032138DD11D52A01D3C210  get_result_0() const { return ___result_0; }
	inline AsyncUnit_tF4D610196BF6CB9CB5032138DD11D52A01D3C210 * get_address_of_result_0() { return &___result_0; }
	inline void set_result_0(AsyncUnit_tF4D610196BF6CB9CB5032138DD11D52A01D3C210  value)
	{
		___result_0 = value;
	}

	inline static int32_t get_offset_of_error_1() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t886A008AACA28A8827B01051DAB74D378D04AECB, ___error_1)); }
	inline RuntimeObject * get_error_1() const { return ___error_1; }
	inline RuntimeObject ** get_address_of_error_1() { return &___error_1; }
	inline void set_error_1(RuntimeObject * value)
	{
		___error_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___error_1), (void*)value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t886A008AACA28A8827B01051DAB74D378D04AECB, ___version_2)); }
	inline int16_t get_version_2() const { return ___version_2; }
	inline int16_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int16_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_hasUnhandledError_3() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t886A008AACA28A8827B01051DAB74D378D04AECB, ___hasUnhandledError_3)); }
	inline bool get_hasUnhandledError_3() const { return ___hasUnhandledError_3; }
	inline bool* get_address_of_hasUnhandledError_3() { return &___hasUnhandledError_3; }
	inline void set_hasUnhandledError_3(bool value)
	{
		___hasUnhandledError_3 = value;
	}

	inline static int32_t get_offset_of_completedCount_4() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t886A008AACA28A8827B01051DAB74D378D04AECB, ___completedCount_4)); }
	inline int32_t get_completedCount_4() const { return ___completedCount_4; }
	inline int32_t* get_address_of_completedCount_4() { return &___completedCount_4; }
	inline void set_completedCount_4(int32_t value)
	{
		___completedCount_4 = value;
	}

	inline static int32_t get_offset_of_continuation_5() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t886A008AACA28A8827B01051DAB74D378D04AECB, ___continuation_5)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_continuation_5() const { return ___continuation_5; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_continuation_5() { return &___continuation_5; }
	inline void set_continuation_5(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___continuation_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuation_5), (void*)value);
	}

	inline static int32_t get_offset_of_continuationState_6() { return static_cast<int32_t>(offsetof(UniTaskCompletionSourceCore_1_t886A008AACA28A8827B01051DAB74D378D04AECB, ___continuationState_6)); }
	inline RuntimeObject * get_continuationState_6() const { return ___continuationState_6; }
	inline RuntimeObject ** get_address_of_continuationState_6() { return &___continuationState_6; }
	inline void set_continuationState_6(RuntimeObject * value)
	{
		___continuationState_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continuationState_6), (void*)value);
	}
};


// Windows.Foundation.AsyncStatus
struct AsyncStatus_t44B315E6BDEB08B67F7FC4D7963A1C6EFA1CDB27 
{
public:
	// System.Int32 Windows.Foundation.AsyncStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AsyncStatus_t44B315E6BDEB08B67F7FC4D7963A1C6EFA1CDB27, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A 
{
public:
	// System.Threading.CancellationCallbackInfo System.Threading.CancellationTokenRegistration::m_callbackInfo
	CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * ___m_callbackInfo_0;
	// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo> System.Threading.CancellationTokenRegistration::m_registrationInfo
	SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  ___m_registrationInfo_1;

public:
	inline static int32_t get_offset_of_m_callbackInfo_0() { return static_cast<int32_t>(offsetof(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A, ___m_callbackInfo_0)); }
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * get_m_callbackInfo_0() const { return ___m_callbackInfo_0; }
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B ** get_address_of_m_callbackInfo_0() { return &___m_callbackInfo_0; }
	inline void set_m_callbackInfo_0(CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * value)
	{
		___m_callbackInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_callbackInfo_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_registrationInfo_1() { return static_cast<int32_t>(offsetof(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A, ___m_registrationInfo_1)); }
	inline SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  get_m_registrationInfo_1() const { return ___m_registrationInfo_1; }
	inline SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0 * get_address_of_m_registrationInfo_1() { return &___m_registrationInfo_1; }
	inline void set_m_registrationInfo_1(SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  value)
	{
		___m_registrationInfo_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_registrationInfo_1))->___m_source_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_marshaled_pinvoke
{
	CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  ___m_registrationInfo_1;
};
// Native definition for COM marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_marshaled_com
{
	CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  ___m_registrationInfo_1;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1<System.ValueTuple`2<System.Single[],System.Int32>>
struct AsyncTriggerHandler_1_t9DEEBC5B99D702127FE885BCF86B761B82C7BC52  : public RuntimeObject
{
public:
	// Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T> Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::trigger
	AsyncTriggerBase_1_tE45ABB0D5AB61654A8C48F9679E5DADA445E11F5 * ___trigger_1;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_2;
	// System.Threading.CancellationTokenRegistration Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::registration
	CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  ___registration_3;
	// System.Boolean Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::isDisposed
	bool ___isDisposed_4;
	// System.Boolean Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::callOnce
	bool ___callOnce_5;
	// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<T> Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::core
	UniTaskCompletionSourceCore_1_t0DF2F745857A70D850C3D0E6DC34A2ACF047DC60  ___core_6;
	// Cysharp.Threading.Tasks.ITriggerHandler`1<T> Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::<Cysharp.Threading.Tasks.ITriggerHandler<T>.Prev>k__BackingField
	RuntimeObject* ___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7;
	// Cysharp.Threading.Tasks.ITriggerHandler`1<T> Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::<Cysharp.Threading.Tasks.ITriggerHandler<T>.Next>k__BackingField
	RuntimeObject* ___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_trigger_1() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_t9DEEBC5B99D702127FE885BCF86B761B82C7BC52, ___trigger_1)); }
	inline AsyncTriggerBase_1_tE45ABB0D5AB61654A8C48F9679E5DADA445E11F5 * get_trigger_1() const { return ___trigger_1; }
	inline AsyncTriggerBase_1_tE45ABB0D5AB61654A8C48F9679E5DADA445E11F5 ** get_address_of_trigger_1() { return &___trigger_1; }
	inline void set_trigger_1(AsyncTriggerBase_1_tE45ABB0D5AB61654A8C48F9679E5DADA445E11F5 * value)
	{
		___trigger_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trigger_1), (void*)value);
	}

	inline static int32_t get_offset_of_cancellationToken_2() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_t9DEEBC5B99D702127FE885BCF86B761B82C7BC52, ___cancellationToken_2)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_2() const { return ___cancellationToken_2; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_2() { return &___cancellationToken_2; }
	inline void set_cancellationToken_2(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_2))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_registration_3() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_t9DEEBC5B99D702127FE885BCF86B761B82C7BC52, ___registration_3)); }
	inline CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  get_registration_3() const { return ___registration_3; }
	inline CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A * get_address_of_registration_3() { return &___registration_3; }
	inline void set_registration_3(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  value)
	{
		___registration_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___registration_3))->___m_callbackInfo_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___registration_3))->___m_registrationInfo_1))->___m_source_0), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_isDisposed_4() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_t9DEEBC5B99D702127FE885BCF86B761B82C7BC52, ___isDisposed_4)); }
	inline bool get_isDisposed_4() const { return ___isDisposed_4; }
	inline bool* get_address_of_isDisposed_4() { return &___isDisposed_4; }
	inline void set_isDisposed_4(bool value)
	{
		___isDisposed_4 = value;
	}

	inline static int32_t get_offset_of_callOnce_5() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_t9DEEBC5B99D702127FE885BCF86B761B82C7BC52, ___callOnce_5)); }
	inline bool get_callOnce_5() const { return ___callOnce_5; }
	inline bool* get_address_of_callOnce_5() { return &___callOnce_5; }
	inline void set_callOnce_5(bool value)
	{
		___callOnce_5 = value;
	}

	inline static int32_t get_offset_of_core_6() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_t9DEEBC5B99D702127FE885BCF86B761B82C7BC52, ___core_6)); }
	inline UniTaskCompletionSourceCore_1_t0DF2F745857A70D850C3D0E6DC34A2ACF047DC60  get_core_6() const { return ___core_6; }
	inline UniTaskCompletionSourceCore_1_t0DF2F745857A70D850C3D0E6DC34A2ACF047DC60 * get_address_of_core_6() { return &___core_6; }
	inline void set_core_6(UniTaskCompletionSourceCore_1_t0DF2F745857A70D850C3D0E6DC34A2ACF047DC60  value)
	{
		___core_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___core_6))->___result_0))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_6))->___error_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_6))->___continuation_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_6))->___continuationState_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_t9DEEBC5B99D702127FE885BCF86B761B82C7BC52, ___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7() const { return ___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7() { return &___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7; }
	inline void set_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_t9DEEBC5B99D702127FE885BCF86B761B82C7BC52, ___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8() const { return ___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8() { return &___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8; }
	inline void set_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8), (void*)value);
	}
};

struct AsyncTriggerHandler_1_t9DEEBC5B99D702127FE885BCF86B761B82C7BC52_StaticFields
{
public:
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::cancellationCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___cancellationCallback_0;

public:
	inline static int32_t get_offset_of_cancellationCallback_0() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_t9DEEBC5B99D702127FE885BCF86B761B82C7BC52_StaticFields, ___cancellationCallback_0)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_cancellationCallback_0() const { return ___cancellationCallback_0; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_cancellationCallback_0() { return &___cancellationCallback_0; }
	inline void set_cancellationCallback_0(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___cancellationCallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancellationCallback_0), (void*)value);
	}
};


// Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1<System.ValueTuple`2<UnityEngine.RenderTexture,UnityEngine.RenderTexture>>
struct AsyncTriggerHandler_1_t24D2DB92428F2F35807D267970FA878EBFB1F5A7  : public RuntimeObject
{
public:
	// Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T> Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::trigger
	AsyncTriggerBase_1_t920AA4BC92E519E788E26FA273EA6CC5FF32C70E * ___trigger_1;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_2;
	// System.Threading.CancellationTokenRegistration Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::registration
	CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  ___registration_3;
	// System.Boolean Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::isDisposed
	bool ___isDisposed_4;
	// System.Boolean Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::callOnce
	bool ___callOnce_5;
	// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<T> Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::core
	UniTaskCompletionSourceCore_1_t6DA346A9ED1ACD9FE512B52C2B6DE6D4D83FDD28  ___core_6;
	// Cysharp.Threading.Tasks.ITriggerHandler`1<T> Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::<Cysharp.Threading.Tasks.ITriggerHandler<T>.Prev>k__BackingField
	RuntimeObject* ___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7;
	// Cysharp.Threading.Tasks.ITriggerHandler`1<T> Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::<Cysharp.Threading.Tasks.ITriggerHandler<T>.Next>k__BackingField
	RuntimeObject* ___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_trigger_1() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_t24D2DB92428F2F35807D267970FA878EBFB1F5A7, ___trigger_1)); }
	inline AsyncTriggerBase_1_t920AA4BC92E519E788E26FA273EA6CC5FF32C70E * get_trigger_1() const { return ___trigger_1; }
	inline AsyncTriggerBase_1_t920AA4BC92E519E788E26FA273EA6CC5FF32C70E ** get_address_of_trigger_1() { return &___trigger_1; }
	inline void set_trigger_1(AsyncTriggerBase_1_t920AA4BC92E519E788E26FA273EA6CC5FF32C70E * value)
	{
		___trigger_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trigger_1), (void*)value);
	}

	inline static int32_t get_offset_of_cancellationToken_2() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_t24D2DB92428F2F35807D267970FA878EBFB1F5A7, ___cancellationToken_2)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_2() const { return ___cancellationToken_2; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_2() { return &___cancellationToken_2; }
	inline void set_cancellationToken_2(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_2))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_registration_3() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_t24D2DB92428F2F35807D267970FA878EBFB1F5A7, ___registration_3)); }
	inline CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  get_registration_3() const { return ___registration_3; }
	inline CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A * get_address_of_registration_3() { return &___registration_3; }
	inline void set_registration_3(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  value)
	{
		___registration_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___registration_3))->___m_callbackInfo_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___registration_3))->___m_registrationInfo_1))->___m_source_0), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_isDisposed_4() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_t24D2DB92428F2F35807D267970FA878EBFB1F5A7, ___isDisposed_4)); }
	inline bool get_isDisposed_4() const { return ___isDisposed_4; }
	inline bool* get_address_of_isDisposed_4() { return &___isDisposed_4; }
	inline void set_isDisposed_4(bool value)
	{
		___isDisposed_4 = value;
	}

	inline static int32_t get_offset_of_callOnce_5() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_t24D2DB92428F2F35807D267970FA878EBFB1F5A7, ___callOnce_5)); }
	inline bool get_callOnce_5() const { return ___callOnce_5; }
	inline bool* get_address_of_callOnce_5() { return &___callOnce_5; }
	inline void set_callOnce_5(bool value)
	{
		___callOnce_5 = value;
	}

	inline static int32_t get_offset_of_core_6() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_t24D2DB92428F2F35807D267970FA878EBFB1F5A7, ___core_6)); }
	inline UniTaskCompletionSourceCore_1_t6DA346A9ED1ACD9FE512B52C2B6DE6D4D83FDD28  get_core_6() const { return ___core_6; }
	inline UniTaskCompletionSourceCore_1_t6DA346A9ED1ACD9FE512B52C2B6DE6D4D83FDD28 * get_address_of_core_6() { return &___core_6; }
	inline void set_core_6(UniTaskCompletionSourceCore_1_t6DA346A9ED1ACD9FE512B52C2B6DE6D4D83FDD28  value)
	{
		___core_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___core_6))->___result_0))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___core_6))->___result_0))->___Item2_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_6))->___error_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_6))->___continuation_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_6))->___continuationState_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_t24D2DB92428F2F35807D267970FA878EBFB1F5A7, ___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7() const { return ___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7() { return &___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7; }
	inline void set_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_t24D2DB92428F2F35807D267970FA878EBFB1F5A7, ___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8() const { return ___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8() { return &___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8; }
	inline void set_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8), (void*)value);
	}
};

struct AsyncTriggerHandler_1_t24D2DB92428F2F35807D267970FA878EBFB1F5A7_StaticFields
{
public:
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::cancellationCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___cancellationCallback_0;

public:
	inline static int32_t get_offset_of_cancellationCallback_0() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_t24D2DB92428F2F35807D267970FA878EBFB1F5A7_StaticFields, ___cancellationCallback_0)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_cancellationCallback_0() const { return ___cancellationCallback_0; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_cancellationCallback_0() { return &___cancellationCallback_0; }
	inline void set_cancellationCallback_0(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___cancellationCallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancellationCallback_0), (void*)value);
	}
};


// Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1<Cysharp.Threading.Tasks.AsyncUnit>
struct AsyncTriggerHandler_1_t27230572530D23E12A55643B169CF5D17B45E9FB  : public RuntimeObject
{
public:
	// Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T> Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::trigger
	AsyncTriggerBase_1_tEB023CF674941B32F22E0B5E7BFB961CF634FFA4 * ___trigger_1;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_2;
	// System.Threading.CancellationTokenRegistration Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::registration
	CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  ___registration_3;
	// System.Boolean Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::isDisposed
	bool ___isDisposed_4;
	// System.Boolean Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::callOnce
	bool ___callOnce_5;
	// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<T> Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::core
	UniTaskCompletionSourceCore_1_t886A008AACA28A8827B01051DAB74D378D04AECB  ___core_6;
	// Cysharp.Threading.Tasks.ITriggerHandler`1<T> Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::<Cysharp.Threading.Tasks.ITriggerHandler<T>.Prev>k__BackingField
	RuntimeObject* ___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7;
	// Cysharp.Threading.Tasks.ITriggerHandler`1<T> Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::<Cysharp.Threading.Tasks.ITriggerHandler<T>.Next>k__BackingField
	RuntimeObject* ___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_trigger_1() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_t27230572530D23E12A55643B169CF5D17B45E9FB, ___trigger_1)); }
	inline AsyncTriggerBase_1_tEB023CF674941B32F22E0B5E7BFB961CF634FFA4 * get_trigger_1() const { return ___trigger_1; }
	inline AsyncTriggerBase_1_tEB023CF674941B32F22E0B5E7BFB961CF634FFA4 ** get_address_of_trigger_1() { return &___trigger_1; }
	inline void set_trigger_1(AsyncTriggerBase_1_tEB023CF674941B32F22E0B5E7BFB961CF634FFA4 * value)
	{
		___trigger_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trigger_1), (void*)value);
	}

	inline static int32_t get_offset_of_cancellationToken_2() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_t27230572530D23E12A55643B169CF5D17B45E9FB, ___cancellationToken_2)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_2() const { return ___cancellationToken_2; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_2() { return &___cancellationToken_2; }
	inline void set_cancellationToken_2(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_2))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_registration_3() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_t27230572530D23E12A55643B169CF5D17B45E9FB, ___registration_3)); }
	inline CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  get_registration_3() const { return ___registration_3; }
	inline CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A * get_address_of_registration_3() { return &___registration_3; }
	inline void set_registration_3(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  value)
	{
		___registration_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___registration_3))->___m_callbackInfo_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___registration_3))->___m_registrationInfo_1))->___m_source_0), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_isDisposed_4() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_t27230572530D23E12A55643B169CF5D17B45E9FB, ___isDisposed_4)); }
	inline bool get_isDisposed_4() const { return ___isDisposed_4; }
	inline bool* get_address_of_isDisposed_4() { return &___isDisposed_4; }
	inline void set_isDisposed_4(bool value)
	{
		___isDisposed_4 = value;
	}

	inline static int32_t get_offset_of_callOnce_5() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_t27230572530D23E12A55643B169CF5D17B45E9FB, ___callOnce_5)); }
	inline bool get_callOnce_5() const { return ___callOnce_5; }
	inline bool* get_address_of_callOnce_5() { return &___callOnce_5; }
	inline void set_callOnce_5(bool value)
	{
		___callOnce_5 = value;
	}

	inline static int32_t get_offset_of_core_6() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_t27230572530D23E12A55643B169CF5D17B45E9FB, ___core_6)); }
	inline UniTaskCompletionSourceCore_1_t886A008AACA28A8827B01051DAB74D378D04AECB  get_core_6() const { return ___core_6; }
	inline UniTaskCompletionSourceCore_1_t886A008AACA28A8827B01051DAB74D378D04AECB * get_address_of_core_6() { return &___core_6; }
	inline void set_core_6(UniTaskCompletionSourceCore_1_t886A008AACA28A8827B01051DAB74D378D04AECB  value)
	{
		___core_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_6))->___error_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_6))->___continuation_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_6))->___continuationState_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_t27230572530D23E12A55643B169CF5D17B45E9FB, ___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7() const { return ___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7() { return &___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7; }
	inline void set_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_t27230572530D23E12A55643B169CF5D17B45E9FB, ___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8() const { return ___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8() { return &___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8; }
	inline void set_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8), (void*)value);
	}
};

struct AsyncTriggerHandler_1_t27230572530D23E12A55643B169CF5D17B45E9FB_StaticFields
{
public:
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::cancellationCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___cancellationCallback_0;

public:
	inline static int32_t get_offset_of_cancellationCallback_0() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_t27230572530D23E12A55643B169CF5D17B45E9FB_StaticFields, ___cancellationCallback_0)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_cancellationCallback_0() const { return ___cancellationCallback_0; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_cancellationCallback_0() { return &___cancellationCallback_0; }
	inline void set_cancellationCallback_0(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___cancellationCallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancellationCallback_0), (void*)value);
	}
};


// Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1<UnityEngine.EventSystems.AxisEventData>
struct AsyncTriggerHandler_1_tDB4A37FE339B6E378B6E2A3CE999287694102281  : public RuntimeObject
{
public:
	// Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T> Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::trigger
	AsyncTriggerBase_1_t6C670A05E7DB0DC2F0091D5E2B7F330B8E32158F * ___trigger_1;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_2;
	// System.Threading.CancellationTokenRegistration Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::registration
	CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  ___registration_3;
	// System.Boolean Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::isDisposed
	bool ___isDisposed_4;
	// System.Boolean Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::callOnce
	bool ___callOnce_5;
	// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<T> Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::core
	UniTaskCompletionSourceCore_1_t22273306B34D02A51C5DD5A13CAAE5B0EAD57DB9  ___core_6;
	// Cysharp.Threading.Tasks.ITriggerHandler`1<T> Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::<Cysharp.Threading.Tasks.ITriggerHandler<T>.Prev>k__BackingField
	RuntimeObject* ___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7;
	// Cysharp.Threading.Tasks.ITriggerHandler`1<T> Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::<Cysharp.Threading.Tasks.ITriggerHandler<T>.Next>k__BackingField
	RuntimeObject* ___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_trigger_1() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_tDB4A37FE339B6E378B6E2A3CE999287694102281, ___trigger_1)); }
	inline AsyncTriggerBase_1_t6C670A05E7DB0DC2F0091D5E2B7F330B8E32158F * get_trigger_1() const { return ___trigger_1; }
	inline AsyncTriggerBase_1_t6C670A05E7DB0DC2F0091D5E2B7F330B8E32158F ** get_address_of_trigger_1() { return &___trigger_1; }
	inline void set_trigger_1(AsyncTriggerBase_1_t6C670A05E7DB0DC2F0091D5E2B7F330B8E32158F * value)
	{
		___trigger_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trigger_1), (void*)value);
	}

	inline static int32_t get_offset_of_cancellationToken_2() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_tDB4A37FE339B6E378B6E2A3CE999287694102281, ___cancellationToken_2)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_2() const { return ___cancellationToken_2; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_2() { return &___cancellationToken_2; }
	inline void set_cancellationToken_2(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_2))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_registration_3() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_tDB4A37FE339B6E378B6E2A3CE999287694102281, ___registration_3)); }
	inline CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  get_registration_3() const { return ___registration_3; }
	inline CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A * get_address_of_registration_3() { return &___registration_3; }
	inline void set_registration_3(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  value)
	{
		___registration_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___registration_3))->___m_callbackInfo_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___registration_3))->___m_registrationInfo_1))->___m_source_0), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_isDisposed_4() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_tDB4A37FE339B6E378B6E2A3CE999287694102281, ___isDisposed_4)); }
	inline bool get_isDisposed_4() const { return ___isDisposed_4; }
	inline bool* get_address_of_isDisposed_4() { return &___isDisposed_4; }
	inline void set_isDisposed_4(bool value)
	{
		___isDisposed_4 = value;
	}

	inline static int32_t get_offset_of_callOnce_5() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_tDB4A37FE339B6E378B6E2A3CE999287694102281, ___callOnce_5)); }
	inline bool get_callOnce_5() const { return ___callOnce_5; }
	inline bool* get_address_of_callOnce_5() { return &___callOnce_5; }
	inline void set_callOnce_5(bool value)
	{
		___callOnce_5 = value;
	}

	inline static int32_t get_offset_of_core_6() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_tDB4A37FE339B6E378B6E2A3CE999287694102281, ___core_6)); }
	inline UniTaskCompletionSourceCore_1_t22273306B34D02A51C5DD5A13CAAE5B0EAD57DB9  get_core_6() const { return ___core_6; }
	inline UniTaskCompletionSourceCore_1_t22273306B34D02A51C5DD5A13CAAE5B0EAD57DB9 * get_address_of_core_6() { return &___core_6; }
	inline void set_core_6(UniTaskCompletionSourceCore_1_t22273306B34D02A51C5DD5A13CAAE5B0EAD57DB9  value)
	{
		___core_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_6))->___result_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_6))->___error_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_6))->___continuation_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_6))->___continuationState_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_tDB4A37FE339B6E378B6E2A3CE999287694102281, ___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7() const { return ___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7() { return &___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7; }
	inline void set_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_tDB4A37FE339B6E378B6E2A3CE999287694102281, ___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8() const { return ___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8() { return &___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8; }
	inline void set_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8), (void*)value);
	}
};

struct AsyncTriggerHandler_1_tDB4A37FE339B6E378B6E2A3CE999287694102281_StaticFields
{
public:
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::cancellationCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___cancellationCallback_0;

public:
	inline static int32_t get_offset_of_cancellationCallback_0() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_tDB4A37FE339B6E378B6E2A3CE999287694102281_StaticFields, ___cancellationCallback_0)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_cancellationCallback_0() const { return ___cancellationCallback_0; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_cancellationCallback_0() { return &___cancellationCallback_0; }
	inline void set_cancellationCallback_0(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___cancellationCallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancellationCallback_0), (void*)value);
	}
};


// Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1<UnityEngine.EventSystems.BaseEventData>
struct AsyncTriggerHandler_1_t894E46CB44AF40F0D361B3FE534FB1ABAD7059DF  : public RuntimeObject
{
public:
	// Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T> Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::trigger
	AsyncTriggerBase_1_t898ABC8E66F0B8699981B9F0E2A31E2F746AF4A1 * ___trigger_1;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_2;
	// System.Threading.CancellationTokenRegistration Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::registration
	CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  ___registration_3;
	// System.Boolean Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::isDisposed
	bool ___isDisposed_4;
	// System.Boolean Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::callOnce
	bool ___callOnce_5;
	// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<T> Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::core
	UniTaskCompletionSourceCore_1_tBE89A2DC048F7809A3CC311191FF18E0282E4D7B  ___core_6;
	// Cysharp.Threading.Tasks.ITriggerHandler`1<T> Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::<Cysharp.Threading.Tasks.ITriggerHandler<T>.Prev>k__BackingField
	RuntimeObject* ___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7;
	// Cysharp.Threading.Tasks.ITriggerHandler`1<T> Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::<Cysharp.Threading.Tasks.ITriggerHandler<T>.Next>k__BackingField
	RuntimeObject* ___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_trigger_1() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_t894E46CB44AF40F0D361B3FE534FB1ABAD7059DF, ___trigger_1)); }
	inline AsyncTriggerBase_1_t898ABC8E66F0B8699981B9F0E2A31E2F746AF4A1 * get_trigger_1() const { return ___trigger_1; }
	inline AsyncTriggerBase_1_t898ABC8E66F0B8699981B9F0E2A31E2F746AF4A1 ** get_address_of_trigger_1() { return &___trigger_1; }
	inline void set_trigger_1(AsyncTriggerBase_1_t898ABC8E66F0B8699981B9F0E2A31E2F746AF4A1 * value)
	{
		___trigger_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trigger_1), (void*)value);
	}

	inline static int32_t get_offset_of_cancellationToken_2() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_t894E46CB44AF40F0D361B3FE534FB1ABAD7059DF, ___cancellationToken_2)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_2() const { return ___cancellationToken_2; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_2() { return &___cancellationToken_2; }
	inline void set_cancellationToken_2(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_2))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_registration_3() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_t894E46CB44AF40F0D361B3FE534FB1ABAD7059DF, ___registration_3)); }
	inline CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  get_registration_3() const { return ___registration_3; }
	inline CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A * get_address_of_registration_3() { return &___registration_3; }
	inline void set_registration_3(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  value)
	{
		___registration_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___registration_3))->___m_callbackInfo_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___registration_3))->___m_registrationInfo_1))->___m_source_0), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_isDisposed_4() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_t894E46CB44AF40F0D361B3FE534FB1ABAD7059DF, ___isDisposed_4)); }
	inline bool get_isDisposed_4() const { return ___isDisposed_4; }
	inline bool* get_address_of_isDisposed_4() { return &___isDisposed_4; }
	inline void set_isDisposed_4(bool value)
	{
		___isDisposed_4 = value;
	}

	inline static int32_t get_offset_of_callOnce_5() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_t894E46CB44AF40F0D361B3FE534FB1ABAD7059DF, ___callOnce_5)); }
	inline bool get_callOnce_5() const { return ___callOnce_5; }
	inline bool* get_address_of_callOnce_5() { return &___callOnce_5; }
	inline void set_callOnce_5(bool value)
	{
		___callOnce_5 = value;
	}

	inline static int32_t get_offset_of_core_6() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_t894E46CB44AF40F0D361B3FE534FB1ABAD7059DF, ___core_6)); }
	inline UniTaskCompletionSourceCore_1_tBE89A2DC048F7809A3CC311191FF18E0282E4D7B  get_core_6() const { return ___core_6; }
	inline UniTaskCompletionSourceCore_1_tBE89A2DC048F7809A3CC311191FF18E0282E4D7B * get_address_of_core_6() { return &___core_6; }
	inline void set_core_6(UniTaskCompletionSourceCore_1_tBE89A2DC048F7809A3CC311191FF18E0282E4D7B  value)
	{
		___core_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_6))->___result_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_6))->___error_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_6))->___continuation_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_6))->___continuationState_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_t894E46CB44AF40F0D361B3FE534FB1ABAD7059DF, ___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7() const { return ___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7() { return &___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7; }
	inline void set_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_t894E46CB44AF40F0D361B3FE534FB1ABAD7059DF, ___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8() const { return ___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8() { return &___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8; }
	inline void set_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8), (void*)value);
	}
};

struct AsyncTriggerHandler_1_t894E46CB44AF40F0D361B3FE534FB1ABAD7059DF_StaticFields
{
public:
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::cancellationCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___cancellationCallback_0;

public:
	inline static int32_t get_offset_of_cancellationCallback_0() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_t894E46CB44AF40F0D361B3FE534FB1ABAD7059DF_StaticFields, ___cancellationCallback_0)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_cancellationCallback_0() const { return ___cancellationCallback_0; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_cancellationCallback_0() { return &___cancellationCallback_0; }
	inline void set_cancellationCallback_0(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___cancellationCallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancellationCallback_0), (void*)value);
	}
};


// Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1<System.Boolean>
struct AsyncTriggerHandler_1_tB37914B107E75432708DF537F397D0D5CE147092  : public RuntimeObject
{
public:
	// Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T> Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::trigger
	AsyncTriggerBase_1_t15C0ABEBD94C17BC1DB8A5E0494D2E8560714D20 * ___trigger_1;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_2;
	// System.Threading.CancellationTokenRegistration Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::registration
	CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  ___registration_3;
	// System.Boolean Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::isDisposed
	bool ___isDisposed_4;
	// System.Boolean Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::callOnce
	bool ___callOnce_5;
	// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<T> Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::core
	UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F  ___core_6;
	// Cysharp.Threading.Tasks.ITriggerHandler`1<T> Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::<Cysharp.Threading.Tasks.ITriggerHandler<T>.Prev>k__BackingField
	RuntimeObject* ___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7;
	// Cysharp.Threading.Tasks.ITriggerHandler`1<T> Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::<Cysharp.Threading.Tasks.ITriggerHandler<T>.Next>k__BackingField
	RuntimeObject* ___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_trigger_1() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_tB37914B107E75432708DF537F397D0D5CE147092, ___trigger_1)); }
	inline AsyncTriggerBase_1_t15C0ABEBD94C17BC1DB8A5E0494D2E8560714D20 * get_trigger_1() const { return ___trigger_1; }
	inline AsyncTriggerBase_1_t15C0ABEBD94C17BC1DB8A5E0494D2E8560714D20 ** get_address_of_trigger_1() { return &___trigger_1; }
	inline void set_trigger_1(AsyncTriggerBase_1_t15C0ABEBD94C17BC1DB8A5E0494D2E8560714D20 * value)
	{
		___trigger_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trigger_1), (void*)value);
	}

	inline static int32_t get_offset_of_cancellationToken_2() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_tB37914B107E75432708DF537F397D0D5CE147092, ___cancellationToken_2)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_2() const { return ___cancellationToken_2; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_2() { return &___cancellationToken_2; }
	inline void set_cancellationToken_2(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_2))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_registration_3() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_tB37914B107E75432708DF537F397D0D5CE147092, ___registration_3)); }
	inline CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  get_registration_3() const { return ___registration_3; }
	inline CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A * get_address_of_registration_3() { return &___registration_3; }
	inline void set_registration_3(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  value)
	{
		___registration_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___registration_3))->___m_callbackInfo_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___registration_3))->___m_registrationInfo_1))->___m_source_0), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_isDisposed_4() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_tB37914B107E75432708DF537F397D0D5CE147092, ___isDisposed_4)); }
	inline bool get_isDisposed_4() const { return ___isDisposed_4; }
	inline bool* get_address_of_isDisposed_4() { return &___isDisposed_4; }
	inline void set_isDisposed_4(bool value)
	{
		___isDisposed_4 = value;
	}

	inline static int32_t get_offset_of_callOnce_5() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_tB37914B107E75432708DF537F397D0D5CE147092, ___callOnce_5)); }
	inline bool get_callOnce_5() const { return ___callOnce_5; }
	inline bool* get_address_of_callOnce_5() { return &___callOnce_5; }
	inline void set_callOnce_5(bool value)
	{
		___callOnce_5 = value;
	}

	inline static int32_t get_offset_of_core_6() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_tB37914B107E75432708DF537F397D0D5CE147092, ___core_6)); }
	inline UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F  get_core_6() const { return ___core_6; }
	inline UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F * get_address_of_core_6() { return &___core_6; }
	inline void set_core_6(UniTaskCompletionSourceCore_1_tBFAC3C3F931A0E414ECE418C36921CC88D815A1F  value)
	{
		___core_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_6))->___error_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_6))->___continuation_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_6))->___continuationState_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_tB37914B107E75432708DF537F397D0D5CE147092, ___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7() const { return ___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7() { return &___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7; }
	inline void set_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_tB37914B107E75432708DF537F397D0D5CE147092, ___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8() const { return ___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8() { return &___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8; }
	inline void set_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8), (void*)value);
	}
};

struct AsyncTriggerHandler_1_tB37914B107E75432708DF537F397D0D5CE147092_StaticFields
{
public:
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::cancellationCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___cancellationCallback_0;

public:
	inline static int32_t get_offset_of_cancellationCallback_0() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_tB37914B107E75432708DF537F397D0D5CE147092_StaticFields, ___cancellationCallback_0)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_cancellationCallback_0() const { return ___cancellationCallback_0; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_cancellationCallback_0() { return &___cancellationCallback_0; }
	inline void set_cancellationCallback_0(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___cancellationCallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancellationCallback_0), (void*)value);
	}
};


// Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1<UnityEngine.Collider>
struct AsyncTriggerHandler_1_tA2A6464AB20986041ADC1D41F378EB0895664F58  : public RuntimeObject
{
public:
	// Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T> Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::trigger
	AsyncTriggerBase_1_tA247A3C9622EA7CCEC006CCC1ABC7E60AD4A1515 * ___trigger_1;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_2;
	// System.Threading.CancellationTokenRegistration Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::registration
	CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  ___registration_3;
	// System.Boolean Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::isDisposed
	bool ___isDisposed_4;
	// System.Boolean Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::callOnce
	bool ___callOnce_5;
	// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<T> Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::core
	UniTaskCompletionSourceCore_1_t204E7257EC1027832A4D91AAF898CB1289406864  ___core_6;
	// Cysharp.Threading.Tasks.ITriggerHandler`1<T> Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::<Cysharp.Threading.Tasks.ITriggerHandler<T>.Prev>k__BackingField
	RuntimeObject* ___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7;
	// Cysharp.Threading.Tasks.ITriggerHandler`1<T> Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::<Cysharp.Threading.Tasks.ITriggerHandler<T>.Next>k__BackingField
	RuntimeObject* ___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_trigger_1() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_tA2A6464AB20986041ADC1D41F378EB0895664F58, ___trigger_1)); }
	inline AsyncTriggerBase_1_tA247A3C9622EA7CCEC006CCC1ABC7E60AD4A1515 * get_trigger_1() const { return ___trigger_1; }
	inline AsyncTriggerBase_1_tA247A3C9622EA7CCEC006CCC1ABC7E60AD4A1515 ** get_address_of_trigger_1() { return &___trigger_1; }
	inline void set_trigger_1(AsyncTriggerBase_1_tA247A3C9622EA7CCEC006CCC1ABC7E60AD4A1515 * value)
	{
		___trigger_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trigger_1), (void*)value);
	}

	inline static int32_t get_offset_of_cancellationToken_2() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_tA2A6464AB20986041ADC1D41F378EB0895664F58, ___cancellationToken_2)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_2() const { return ___cancellationToken_2; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_2() { return &___cancellationToken_2; }
	inline void set_cancellationToken_2(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_2))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_registration_3() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_tA2A6464AB20986041ADC1D41F378EB0895664F58, ___registration_3)); }
	inline CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  get_registration_3() const { return ___registration_3; }
	inline CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A * get_address_of_registration_3() { return &___registration_3; }
	inline void set_registration_3(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  value)
	{
		___registration_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___registration_3))->___m_callbackInfo_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___registration_3))->___m_registrationInfo_1))->___m_source_0), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_isDisposed_4() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_tA2A6464AB20986041ADC1D41F378EB0895664F58, ___isDisposed_4)); }
	inline bool get_isDisposed_4() const { return ___isDisposed_4; }
	inline bool* get_address_of_isDisposed_4() { return &___isDisposed_4; }
	inline void set_isDisposed_4(bool value)
	{
		___isDisposed_4 = value;
	}

	inline static int32_t get_offset_of_callOnce_5() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_tA2A6464AB20986041ADC1D41F378EB0895664F58, ___callOnce_5)); }
	inline bool get_callOnce_5() const { return ___callOnce_5; }
	inline bool* get_address_of_callOnce_5() { return &___callOnce_5; }
	inline void set_callOnce_5(bool value)
	{
		___callOnce_5 = value;
	}

	inline static int32_t get_offset_of_core_6() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_tA2A6464AB20986041ADC1D41F378EB0895664F58, ___core_6)); }
	inline UniTaskCompletionSourceCore_1_t204E7257EC1027832A4D91AAF898CB1289406864  get_core_6() const { return ___core_6; }
	inline UniTaskCompletionSourceCore_1_t204E7257EC1027832A4D91AAF898CB1289406864 * get_address_of_core_6() { return &___core_6; }
	inline void set_core_6(UniTaskCompletionSourceCore_1_t204E7257EC1027832A4D91AAF898CB1289406864  value)
	{
		___core_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_6))->___result_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_6))->___error_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_6))->___continuation_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_6))->___continuationState_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_tA2A6464AB20986041ADC1D41F378EB0895664F58, ___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7() const { return ___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7() { return &___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7; }
	inline void set_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_tA2A6464AB20986041ADC1D41F378EB0895664F58, ___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8() const { return ___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8() { return &___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8; }
	inline void set_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8), (void*)value);
	}
};

struct AsyncTriggerHandler_1_tA2A6464AB20986041ADC1D41F378EB0895664F58_StaticFields
{
public:
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::cancellationCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___cancellationCallback_0;

public:
	inline static int32_t get_offset_of_cancellationCallback_0() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_tA2A6464AB20986041ADC1D41F378EB0895664F58_StaticFields, ___cancellationCallback_0)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_cancellationCallback_0() const { return ___cancellationCallback_0; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_cancellationCallback_0() { return &___cancellationCallback_0; }
	inline void set_cancellationCallback_0(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___cancellationCallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancellationCallback_0), (void*)value);
	}
};


// Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1<UnityEngine.Collider2D>
struct AsyncTriggerHandler_1_tBD8684AE103A5D9E6B9D6BA35951D4E1F27D0E56  : public RuntimeObject
{
public:
	// Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T> Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::trigger
	AsyncTriggerBase_1_t3CB0C4E7AA1B186B4FF94C6C4E7ED64A11600D34 * ___trigger_1;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_2;
	// System.Threading.CancellationTokenRegistration Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::registration
	CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  ___registration_3;
	// System.Boolean Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::isDisposed
	bool ___isDisposed_4;
	// System.Boolean Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::callOnce
	bool ___callOnce_5;
	// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<T> Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::core
	UniTaskCompletionSourceCore_1_t1C582D0FA5C54C46FCEB382A81AE5A436188E5A1  ___core_6;
	// Cysharp.Threading.Tasks.ITriggerHandler`1<T> Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::<Cysharp.Threading.Tasks.ITriggerHandler<T>.Prev>k__BackingField
	RuntimeObject* ___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7;
	// Cysharp.Threading.Tasks.ITriggerHandler`1<T> Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::<Cysharp.Threading.Tasks.ITriggerHandler<T>.Next>k__BackingField
	RuntimeObject* ___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_trigger_1() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_tBD8684AE103A5D9E6B9D6BA35951D4E1F27D0E56, ___trigger_1)); }
	inline AsyncTriggerBase_1_t3CB0C4E7AA1B186B4FF94C6C4E7ED64A11600D34 * get_trigger_1() const { return ___trigger_1; }
	inline AsyncTriggerBase_1_t3CB0C4E7AA1B186B4FF94C6C4E7ED64A11600D34 ** get_address_of_trigger_1() { return &___trigger_1; }
	inline void set_trigger_1(AsyncTriggerBase_1_t3CB0C4E7AA1B186B4FF94C6C4E7ED64A11600D34 * value)
	{
		___trigger_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trigger_1), (void*)value);
	}

	inline static int32_t get_offset_of_cancellationToken_2() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_tBD8684AE103A5D9E6B9D6BA35951D4E1F27D0E56, ___cancellationToken_2)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_2() const { return ___cancellationToken_2; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_2() { return &___cancellationToken_2; }
	inline void set_cancellationToken_2(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_2))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_registration_3() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_tBD8684AE103A5D9E6B9D6BA35951D4E1F27D0E56, ___registration_3)); }
	inline CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  get_registration_3() const { return ___registration_3; }
	inline CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A * get_address_of_registration_3() { return &___registration_3; }
	inline void set_registration_3(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  value)
	{
		___registration_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___registration_3))->___m_callbackInfo_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___registration_3))->___m_registrationInfo_1))->___m_source_0), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_isDisposed_4() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_tBD8684AE103A5D9E6B9D6BA35951D4E1F27D0E56, ___isDisposed_4)); }
	inline bool get_isDisposed_4() const { return ___isDisposed_4; }
	inline bool* get_address_of_isDisposed_4() { return &___isDisposed_4; }
	inline void set_isDisposed_4(bool value)
	{
		___isDisposed_4 = value;
	}

	inline static int32_t get_offset_of_callOnce_5() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_tBD8684AE103A5D9E6B9D6BA35951D4E1F27D0E56, ___callOnce_5)); }
	inline bool get_callOnce_5() const { return ___callOnce_5; }
	inline bool* get_address_of_callOnce_5() { return &___callOnce_5; }
	inline void set_callOnce_5(bool value)
	{
		___callOnce_5 = value;
	}

	inline static int32_t get_offset_of_core_6() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_tBD8684AE103A5D9E6B9D6BA35951D4E1F27D0E56, ___core_6)); }
	inline UniTaskCompletionSourceCore_1_t1C582D0FA5C54C46FCEB382A81AE5A436188E5A1  get_core_6() const { return ___core_6; }
	inline UniTaskCompletionSourceCore_1_t1C582D0FA5C54C46FCEB382A81AE5A436188E5A1 * get_address_of_core_6() { return &___core_6; }
	inline void set_core_6(UniTaskCompletionSourceCore_1_t1C582D0FA5C54C46FCEB382A81AE5A436188E5A1  value)
	{
		___core_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_6))->___result_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_6))->___error_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_6))->___continuation_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_6))->___continuationState_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_tBD8684AE103A5D9E6B9D6BA35951D4E1F27D0E56, ___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7() const { return ___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7() { return &___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7; }
	inline void set_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_tBD8684AE103A5D9E6B9D6BA35951D4E1F27D0E56, ___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8() const { return ___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8() { return &___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8; }
	inline void set_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8), (void*)value);
	}
};

struct AsyncTriggerHandler_1_tBD8684AE103A5D9E6B9D6BA35951D4E1F27D0E56_StaticFields
{
public:
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::cancellationCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___cancellationCallback_0;

public:
	inline static int32_t get_offset_of_cancellationCallback_0() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_tBD8684AE103A5D9E6B9D6BA35951D4E1F27D0E56_StaticFields, ___cancellationCallback_0)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_cancellationCallback_0() const { return ___cancellationCallback_0; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_cancellationCallback_0() { return &___cancellationCallback_0; }
	inline void set_cancellationCallback_0(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___cancellationCallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancellationCallback_0), (void*)value);
	}
};


// Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1<UnityEngine.Collision>
struct AsyncTriggerHandler_1_t0A9472DA849E6D1F93D0C0974C4A697AF549460B  : public RuntimeObject
{
public:
	// Cysharp.Threading.Tasks.Triggers.AsyncTriggerBase`1<T> Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::trigger
	AsyncTriggerBase_1_t04E0A8F33B20E0A506E0D86822AD9B0B1F4D81BD * ___trigger_1;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken_2;
	// System.Threading.CancellationTokenRegistration Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::registration
	CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  ___registration_3;
	// System.Boolean Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::isDisposed
	bool ___isDisposed_4;
	// System.Boolean Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::callOnce
	bool ___callOnce_5;
	// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<T> Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::core
	UniTaskCompletionSourceCore_1_tD1160DAFA91D9BE9527942694CE2A648B5BA3F84  ___core_6;
	// Cysharp.Threading.Tasks.ITriggerHandler`1<T> Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::<Cysharp.Threading.Tasks.ITriggerHandler<T>.Prev>k__BackingField
	RuntimeObject* ___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7;
	// Cysharp.Threading.Tasks.ITriggerHandler`1<T> Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::<Cysharp.Threading.Tasks.ITriggerHandler<T>.Next>k__BackingField
	RuntimeObject* ___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_trigger_1() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_t0A9472DA849E6D1F93D0C0974C4A697AF549460B, ___trigger_1)); }
	inline AsyncTriggerBase_1_t04E0A8F33B20E0A506E0D86822AD9B0B1F4D81BD * get_trigger_1() const { return ___trigger_1; }
	inline AsyncTriggerBase_1_t04E0A8F33B20E0A506E0D86822AD9B0B1F4D81BD ** get_address_of_trigger_1() { return &___trigger_1; }
	inline void set_trigger_1(AsyncTriggerBase_1_t04E0A8F33B20E0A506E0D86822AD9B0B1F4D81BD * value)
	{
		___trigger_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trigger_1), (void*)value);
	}

	inline static int32_t get_offset_of_cancellationToken_2() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_t0A9472DA849E6D1F93D0C0974C4A697AF549460B, ___cancellationToken_2)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_cancellationToken_2() const { return ___cancellationToken_2; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_cancellationToken_2() { return &___cancellationToken_2; }
	inline void set_cancellationToken_2(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___cancellationToken_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___cancellationToken_2))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_registration_3() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_t0A9472DA849E6D1F93D0C0974C4A697AF549460B, ___registration_3)); }
	inline CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  get_registration_3() const { return ___registration_3; }
	inline CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A * get_address_of_registration_3() { return &___registration_3; }
	inline void set_registration_3(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  value)
	{
		___registration_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___registration_3))->___m_callbackInfo_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___registration_3))->___m_registrationInfo_1))->___m_source_0), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_isDisposed_4() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_t0A9472DA849E6D1F93D0C0974C4A697AF549460B, ___isDisposed_4)); }
	inline bool get_isDisposed_4() const { return ___isDisposed_4; }
	inline bool* get_address_of_isDisposed_4() { return &___isDisposed_4; }
	inline void set_isDisposed_4(bool value)
	{
		___isDisposed_4 = value;
	}

	inline static int32_t get_offset_of_callOnce_5() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_t0A9472DA849E6D1F93D0C0974C4A697AF549460B, ___callOnce_5)); }
	inline bool get_callOnce_5() const { return ___callOnce_5; }
	inline bool* get_address_of_callOnce_5() { return &___callOnce_5; }
	inline void set_callOnce_5(bool value)
	{
		___callOnce_5 = value;
	}

	inline static int32_t get_offset_of_core_6() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_t0A9472DA849E6D1F93D0C0974C4A697AF549460B, ___core_6)); }
	inline UniTaskCompletionSourceCore_1_tD1160DAFA91D9BE9527942694CE2A648B5BA3F84  get_core_6() const { return ___core_6; }
	inline UniTaskCompletionSourceCore_1_tD1160DAFA91D9BE9527942694CE2A648B5BA3F84 * get_address_of_core_6() { return &___core_6; }
	inline void set_core_6(UniTaskCompletionSourceCore_1_tD1160DAFA91D9BE9527942694CE2A648B5BA3F84  value)
	{
		___core_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_6))->___result_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_6))->___error_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_6))->___continuation_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___core_6))->___continuationState_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_t0A9472DA849E6D1F93D0C0974C4A697AF549460B, ___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7() const { return ___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7() { return &___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7; }
	inline void set_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_PrevU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_t0A9472DA849E6D1F93D0C0974C4A697AF549460B, ___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8() const { return ___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8() { return &___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8; }
	inline void set_U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCysharp_Threading_Tasks_ITriggerHandlerU3CTU3E_NextU3Ek__BackingField_8), (void*)value);
	}
};

struct AsyncTriggerHandler_1_t0A9472DA849E6D1F93D0C0974C4A697AF549460B_StaticFields
{
public:
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1::cancellationCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___cancellationCallback_0;

public:
	inline static int32_t get_offset_of_cancellationCallback_0() { return static_cast<int32_t>(offsetof(AsyncTriggerHandler_1_t0A9472DA849E6D1F93D0C0974C4A697AF549460B_StaticFields, ___cancellationCallback_0)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_cancellationCallback_0() const { return ___cancellationCallback_0; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_cancellationCallback_0() { return &___cancellationCallback_0; }
	inline void set_cancellationCallback_0(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___cancellationCallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancellationCallback_0), (void*)value);
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>
struct AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>
struct IAsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};


// Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Perception.People.HandMeshObserver>
struct AsyncOperationCompletedHandler_1_t9941802FAFCAEA5AFAF80CD47D7361C7AF9973FB  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Perception.People.HandMeshObserver>
struct IAsyncOperationCompletedHandler_1_t9941802FAFCAEA5AFAF80CD47D7361C7AF9973FB_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_t0874BF21C52B1A21763C1277695B2A724D9E4F56* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};


// Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IBuffer>
struct AsyncOperationCompletedHandler_1_t5827CD05C17566D3B54709AE10684C908E69902A  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IBuffer>
struct IAsyncOperationCompletedHandler_1_t5827CD05C17566D3B54709AE10684C908E69902A_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_t7BC0C2EC9F472CCFAA748C4A0487D3F7BE568542* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};


// Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType>
struct AsyncOperationCompletedHandler_1_tFFC79BA1F00AF8AF192CB11D7A8381654658E1B4  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType>
struct IAsyncOperationCompletedHandler_1_tFFC79BA1F00AF8AF192CB11D7A8381654658E1B4_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_tF4C439C2CDF5077E54DFEA6B03E7B4D3785DFB69* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};


// Windows.Foundation.AsyncOperationCompletedHandler`1<System.Object>
struct AsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationCompletedHandler`1<System.Object>
struct IAsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_tE95B7CD98CE930F006BBD07D7BB5109224B1BFFC* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};


// Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>
struct AsyncOperationCompletedHandler_1_t328808A8D9489316F5F1EF92341677DA0C501125  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>
struct IAsyncOperationCompletedHandler_1_t328808A8D9489316F5F1EF92341677DA0C501125_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_t3E5E0E44D9FA75713CF0BF6622C9059660699044* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};


// Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.StorageFile>
struct AsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.StorageFile>
struct IAsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_t4DF8D93870801CBDF1404B858B231D7BD74E042E* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};


// Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.StorageFolder>
struct AsyncOperationCompletedHandler_1_t2196E1E2BD9AF393427332E9C9F22A7D85B1D6B4  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.StorageFolder>
struct IAsyncOperationCompletedHandler_1_t2196E1E2BD9AF393427332E9C9F22A7D85B1D6B4_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_tD12D8ED3FD09605FD1A7BC101A5E87C803BFF117* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};


// Windows.Foundation.AsyncOperationCompletedHandler`1<System.UInt32>
struct AsyncOperationCompletedHandler_1_tF454F1E4B28A15E6AC9801C8A1708668213E16BE  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationCompletedHandler`1<System.UInt32>
struct IAsyncOperationCompletedHandler_1_tF454F1E4B28A15E6AC9801C8A1708668213E16BE_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_tDF3123F2E9343D6DBBFE6A5D008A395E62CE246A* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};


// Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct AsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct IAsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93* ___asyncInfo0, uint32_t ___progressInfo1) = 0;
};


// Windows.Foundation.AsyncOperationProgressHandler`2<System.Object,System.Object>
struct AsyncOperationProgressHandler_2_tDABCAA894A199A003194DB49B9E29B595221BD21  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationProgressHandler`2<System.Object,System.Object>
struct IAsyncOperationProgressHandler_2_tDABCAA894A199A003194DB49B9E29B595221BD21_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_t81E4506C3B7B5DAA7884356C0994B02BCCC12746* ___asyncInfo0, Il2CppIInspectable* ___progressInfo1) = 0;
};


// Windows.Foundation.AsyncOperationProgressHandler`2<System.Object,System.UInt32>
struct AsyncOperationProgressHandler_2_t8C7A82F8933E16668CD676A0BF993CF251C28D87  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationProgressHandler`2<System.Object,System.UInt32>
struct IAsyncOperationProgressHandler_2_t8C7A82F8933E16668CD676A0BF993CF251C28D87_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_t4C79F04EFEC306B80E0827A65F07CA57B22D2937* ___asyncInfo0, uint32_t ___progressInfo1) = 0;
};


// Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>
struct AsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>
struct IAsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB* ___asyncInfo0, uint32_t ___progressInfo1) = 0;
};


// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct IAsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};


// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.Object,System.Object>
struct AsyncOperationWithProgressCompletedHandler_2_tA4F57F1EBB7F0FE72729C419BC4E8E74147DF40A  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.Object,System.Object>
struct IAsyncOperationWithProgressCompletedHandler_2_tA4F57F1EBB7F0FE72729C419BC4E8E74147DF40A_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_t81E4506C3B7B5DAA7884356C0994B02BCCC12746* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};


// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.Object,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_t5411FC7EEA228F52AC0FB3FC3F8ED36BCC56348A  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.Object,System.UInt32>
struct IAsyncOperationWithProgressCompletedHandler_2_t5411FC7EEA228F52AC0FB3FC3F8ED36BCC56348A_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_t4C79F04EFEC306B80E0827A65F07CA57B22D2937* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};


// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>
struct IAsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(RuntimeObject* __this);

// System.Void Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>::Invoke(Windows.Foundation.IAsyncOperation`1<TResult>,Windows.Foundation.AsyncStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationCompletedHandler_1_Invoke_mFB615A68AAD78CA2C31C3A6A57E9850C82DD8FF5_gshared (AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833 * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method);
// System.Void Windows.Foundation.AsyncOperationCompletedHandler`1<System.Object>::Invoke(Windows.Foundation.IAsyncOperation`1<TResult>,Windows.Foundation.AsyncStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationCompletedHandler_1_Invoke_m6E5E207CF8B2D8B4C8E07778F76258F8BBBA8242_gshared (AsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method);
// System.Void Windows.Foundation.AsyncOperationCompletedHandler`1<System.UInt32>::Invoke(Windows.Foundation.IAsyncOperation`1<TResult>,Windows.Foundation.AsyncStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationCompletedHandler_1_Invoke_m7ADFDF924B9ED1DEE270E030BB6FF916F47C2245_gshared (AsyncOperationCompletedHandler_1_tF454F1E4B28A15E6AC9801C8A1708668213E16BE * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method);
// System.Void Windows.Foundation.AsyncOperationProgressHandler`2<System.Object,System.UInt32>::Invoke(Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress>,TProgress)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationProgressHandler_2_Invoke_mC8624B6E1DC32D428B716E844083F343748F27C9_gshared (AsyncOperationProgressHandler_2_t8C7A82F8933E16668CD676A0BF993CF251C28D87 * __this, RuntimeObject* ___asyncInfo0, uint32_t ___progressInfo1, const RuntimeMethod* method);
// System.Void Windows.Foundation.AsyncOperationProgressHandler`2<System.Object,System.Object>::Invoke(Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress>,TProgress)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationProgressHandler_2_Invoke_m8B624F24DDE86BE50970E21DB168AB80DB2CCE8B_gshared (AsyncOperationProgressHandler_2_tDABCAA894A199A003194DB49B9E29B595221BD21 * __this, RuntimeObject* ___asyncInfo0, RuntimeObject * ___progressInfo1, const RuntimeMethod* method);
// System.Void Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>::Invoke(Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress>,TProgress)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationProgressHandler_2_Invoke_m55AD755F673EA70C2078764866BE082E79701E25_gshared (AsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7 * __this, RuntimeObject* ___asyncInfo0, uint32_t ___progressInfo1, const RuntimeMethod* method);
// System.Void Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.Object,System.UInt32>::Invoke(Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress>,Windows.Foundation.AsyncStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationWithProgressCompletedHandler_2_Invoke_mFC9E8BD1E218854024569CCCA5973B3221EA8F85_gshared (AsyncOperationWithProgressCompletedHandler_2_t5411FC7EEA228F52AC0FB3FC3F8ED36BCC56348A * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method);
// System.Void Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.Object,System.Object>::Invoke(Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress>,Windows.Foundation.AsyncStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationWithProgressCompletedHandler_2_Invoke_m03FF97CD09DC8A3C138D2274D3D76EF374B81518_gshared (AsyncOperationWithProgressCompletedHandler_2_tA4F57F1EBB7F0FE72729C419BC4E8E74147DF40A * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method);
// System.Void Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>::Invoke(Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress>,Windows.Foundation.AsyncStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationWithProgressCompletedHandler_2_Invoke_m0E94253487FD5F06393748F4BC6936D117E824C9_gshared (AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410 * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method);

// System.Void Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>::Invoke(Windows.Foundation.IAsyncOperation`1<TResult>,Windows.Foundation.AsyncStatus)
inline void AsyncOperationCompletedHandler_1_Invoke_mFB615A68AAD78CA2C31C3A6A57E9850C82DD8FF5 (AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833 * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833 *, RuntimeObject*, int32_t, const RuntimeMethod*))AsyncOperationCompletedHandler_1_Invoke_mFB615A68AAD78CA2C31C3A6A57E9850C82DD8FF5_gshared)(__this, ___asyncInfo0, ___asyncStatus1, method);
}
// System.Void Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Perception.People.HandMeshObserver>::Invoke(Windows.Foundation.IAsyncOperation`1<TResult>,Windows.Foundation.AsyncStatus)
inline void AsyncOperationCompletedHandler_1_Invoke_m123B07E27A7EA48E9543A5673F4525B6CE9FAD21 (AsyncOperationCompletedHandler_1_t9941802FAFCAEA5AFAF80CD47D7361C7AF9973FB * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationCompletedHandler_1_t9941802FAFCAEA5AFAF80CD47D7361C7AF9973FB *, RuntimeObject*, int32_t, const RuntimeMethod*))AsyncOperationCompletedHandler_1_Invoke_m6E5E207CF8B2D8B4C8E07778F76258F8BBBA8242_gshared)(__this, ___asyncInfo0, ___asyncStatus1, method);
}
// System.Void Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IBuffer>::Invoke(Windows.Foundation.IAsyncOperation`1<TResult>,Windows.Foundation.AsyncStatus)
inline void AsyncOperationCompletedHandler_1_Invoke_m563FAAA70D97A1BED9C43795F25149F67FB5A88A (AsyncOperationCompletedHandler_1_t5827CD05C17566D3B54709AE10684C908E69902A * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationCompletedHandler_1_t5827CD05C17566D3B54709AE10684C908E69902A *, RuntimeObject*, int32_t, const RuntimeMethod*))AsyncOperationCompletedHandler_1_Invoke_m6E5E207CF8B2D8B4C8E07778F76258F8BBBA8242_gshared)(__this, ___asyncInfo0, ___asyncStatus1, method);
}
// System.Void Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType>::Invoke(Windows.Foundation.IAsyncOperation`1<TResult>,Windows.Foundation.AsyncStatus)
inline void AsyncOperationCompletedHandler_1_Invoke_m5A7D02F556AA673CC6285691DBDB66636C0048E1 (AsyncOperationCompletedHandler_1_tFFC79BA1F00AF8AF192CB11D7A8381654658E1B4 * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationCompletedHandler_1_tFFC79BA1F00AF8AF192CB11D7A8381654658E1B4 *, RuntimeObject*, int32_t, const RuntimeMethod*))AsyncOperationCompletedHandler_1_Invoke_m6E5E207CF8B2D8B4C8E07778F76258F8BBBA8242_gshared)(__this, ___asyncInfo0, ___asyncStatus1, method);
}
// System.Void Windows.Foundation.AsyncOperationCompletedHandler`1<System.Object>::Invoke(Windows.Foundation.IAsyncOperation`1<TResult>,Windows.Foundation.AsyncStatus)
inline void AsyncOperationCompletedHandler_1_Invoke_m6E5E207CF8B2D8B4C8E07778F76258F8BBBA8242 (AsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D *, RuntimeObject*, int32_t, const RuntimeMethod*))AsyncOperationCompletedHandler_1_Invoke_m6E5E207CF8B2D8B4C8E07778F76258F8BBBA8242_gshared)(__this, ___asyncInfo0, ___asyncStatus1, method);
}
// System.Void Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>::Invoke(Windows.Foundation.IAsyncOperation`1<TResult>,Windows.Foundation.AsyncStatus)
inline void AsyncOperationCompletedHandler_1_Invoke_m594BBE478487BEB1B0FBD8DF96D3202AB85F1836 (AsyncOperationCompletedHandler_1_t328808A8D9489316F5F1EF92341677DA0C501125 * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationCompletedHandler_1_t328808A8D9489316F5F1EF92341677DA0C501125 *, RuntimeObject*, int32_t, const RuntimeMethod*))AsyncOperationCompletedHandler_1_Invoke_m6E5E207CF8B2D8B4C8E07778F76258F8BBBA8242_gshared)(__this, ___asyncInfo0, ___asyncStatus1, method);
}
// System.Void Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.StorageFile>::Invoke(Windows.Foundation.IAsyncOperation`1<TResult>,Windows.Foundation.AsyncStatus)
inline void AsyncOperationCompletedHandler_1_Invoke_m83B24403F3DD218240FAB1AFBA30634F2468AFEE (AsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061 * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061 *, RuntimeObject*, int32_t, const RuntimeMethod*))AsyncOperationCompletedHandler_1_Invoke_m6E5E207CF8B2D8B4C8E07778F76258F8BBBA8242_gshared)(__this, ___asyncInfo0, ___asyncStatus1, method);
}
// System.Void Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.StorageFolder>::Invoke(Windows.Foundation.IAsyncOperation`1<TResult>,Windows.Foundation.AsyncStatus)
inline void AsyncOperationCompletedHandler_1_Invoke_mC2114CC7B5182D7B0B9A2A16EAA911A83A7F8486 (AsyncOperationCompletedHandler_1_t2196E1E2BD9AF393427332E9C9F22A7D85B1D6B4 * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationCompletedHandler_1_t2196E1E2BD9AF393427332E9C9F22A7D85B1D6B4 *, RuntimeObject*, int32_t, const RuntimeMethod*))AsyncOperationCompletedHandler_1_Invoke_m6E5E207CF8B2D8B4C8E07778F76258F8BBBA8242_gshared)(__this, ___asyncInfo0, ___asyncStatus1, method);
}
// System.Void Windows.Foundation.AsyncOperationCompletedHandler`1<System.UInt32>::Invoke(Windows.Foundation.IAsyncOperation`1<TResult>,Windows.Foundation.AsyncStatus)
inline void AsyncOperationCompletedHandler_1_Invoke_m7ADFDF924B9ED1DEE270E030BB6FF916F47C2245 (AsyncOperationCompletedHandler_1_tF454F1E4B28A15E6AC9801C8A1708668213E16BE * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationCompletedHandler_1_tF454F1E4B28A15E6AC9801C8A1708668213E16BE *, RuntimeObject*, int32_t, const RuntimeMethod*))AsyncOperationCompletedHandler_1_Invoke_m7ADFDF924B9ED1DEE270E030BB6FF916F47C2245_gshared)(__this, ___asyncInfo0, ___asyncStatus1, method);
}
// System.Void Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>::Invoke(Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress>,TProgress)
inline void AsyncOperationProgressHandler_2_Invoke_m660CF6C4E9759B3DA04ED33048691F8054A4275E (AsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83 * __this, RuntimeObject* ___asyncInfo0, uint32_t ___progressInfo1, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83 *, RuntimeObject*, uint32_t, const RuntimeMethod*))AsyncOperationProgressHandler_2_Invoke_mC8624B6E1DC32D428B716E844083F343748F27C9_gshared)(__this, ___asyncInfo0, ___progressInfo1, method);
}
// System.Void Windows.Foundation.AsyncOperationProgressHandler`2<System.Object,System.Object>::Invoke(Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress>,TProgress)
inline void AsyncOperationProgressHandler_2_Invoke_m8B624F24DDE86BE50970E21DB168AB80DB2CCE8B (AsyncOperationProgressHandler_2_tDABCAA894A199A003194DB49B9E29B595221BD21 * __this, RuntimeObject* ___asyncInfo0, RuntimeObject * ___progressInfo1, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationProgressHandler_2_tDABCAA894A199A003194DB49B9E29B595221BD21 *, RuntimeObject*, RuntimeObject *, const RuntimeMethod*))AsyncOperationProgressHandler_2_Invoke_m8B624F24DDE86BE50970E21DB168AB80DB2CCE8B_gshared)(__this, ___asyncInfo0, ___progressInfo1, method);
}
// System.Void Windows.Foundation.AsyncOperationProgressHandler`2<System.Object,System.UInt32>::Invoke(Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress>,TProgress)
inline void AsyncOperationProgressHandler_2_Invoke_mC8624B6E1DC32D428B716E844083F343748F27C9 (AsyncOperationProgressHandler_2_t8C7A82F8933E16668CD676A0BF993CF251C28D87 * __this, RuntimeObject* ___asyncInfo0, uint32_t ___progressInfo1, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationProgressHandler_2_t8C7A82F8933E16668CD676A0BF993CF251C28D87 *, RuntimeObject*, uint32_t, const RuntimeMethod*))AsyncOperationProgressHandler_2_Invoke_mC8624B6E1DC32D428B716E844083F343748F27C9_gshared)(__this, ___asyncInfo0, ___progressInfo1, method);
}
// System.Void Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>::Invoke(Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress>,TProgress)
inline void AsyncOperationProgressHandler_2_Invoke_m55AD755F673EA70C2078764866BE082E79701E25 (AsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7 * __this, RuntimeObject* ___asyncInfo0, uint32_t ___progressInfo1, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7 *, RuntimeObject*, uint32_t, const RuntimeMethod*))AsyncOperationProgressHandler_2_Invoke_m55AD755F673EA70C2078764866BE082E79701E25_gshared)(__this, ___asyncInfo0, ___progressInfo1, method);
}
// System.Void Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>::Invoke(Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress>,Windows.Foundation.AsyncStatus)
inline void AsyncOperationWithProgressCompletedHandler_2_Invoke_mEFFDDDBC86C0B7BC52D2F76F3E4C1D6C728D96EF (AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130 * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130 *, RuntimeObject*, int32_t, const RuntimeMethod*))AsyncOperationWithProgressCompletedHandler_2_Invoke_mFC9E8BD1E218854024569CCCA5973B3221EA8F85_gshared)(__this, ___asyncInfo0, ___asyncStatus1, method);
}
// System.Void Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.Object,System.Object>::Invoke(Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress>,Windows.Foundation.AsyncStatus)
inline void AsyncOperationWithProgressCompletedHandler_2_Invoke_m03FF97CD09DC8A3C138D2274D3D76EF374B81518 (AsyncOperationWithProgressCompletedHandler_2_tA4F57F1EBB7F0FE72729C419BC4E8E74147DF40A * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationWithProgressCompletedHandler_2_tA4F57F1EBB7F0FE72729C419BC4E8E74147DF40A *, RuntimeObject*, int32_t, const RuntimeMethod*))AsyncOperationWithProgressCompletedHandler_2_Invoke_m03FF97CD09DC8A3C138D2274D3D76EF374B81518_gshared)(__this, ___asyncInfo0, ___asyncStatus1, method);
}
// System.Void Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.Object,System.UInt32>::Invoke(Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress>,Windows.Foundation.AsyncStatus)
inline void AsyncOperationWithProgressCompletedHandler_2_Invoke_mFC9E8BD1E218854024569CCCA5973B3221EA8F85 (AsyncOperationWithProgressCompletedHandler_2_t5411FC7EEA228F52AC0FB3FC3F8ED36BCC56348A * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationWithProgressCompletedHandler_2_t5411FC7EEA228F52AC0FB3FC3F8ED36BCC56348A *, RuntimeObject*, int32_t, const RuntimeMethod*))AsyncOperationWithProgressCompletedHandler_2_Invoke_mFC9E8BD1E218854024569CCCA5973B3221EA8F85_gshared)(__this, ___asyncInfo0, ___asyncStatus1, method);
}
// System.Void Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>::Invoke(Windows.Foundation.IAsyncOperationWithProgress`2<TResult,TProgress>,Windows.Foundation.AsyncStatus)
inline void AsyncOperationWithProgressCompletedHandler_2_Invoke_m0E94253487FD5F06393748F4BC6936D117E824C9 (AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410 * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410 *, RuntimeObject*, int32_t, const RuntimeMethod*))AsyncOperationWithProgressCompletedHandler_2_Invoke_m0E94253487FD5F06393748F4BC6936D117E824C9_gshared)(__this, ___asyncInfo0, ___asyncStatus1, method);
}

// COM Callable Wrapper for UniRx.Operators.AsObservableObservable`1/AsObservable<UniRx.Unit>
struct AsObservable_t27AAC66A9216FDCE9EC2F496E7183178558DEA18_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsObservable_t27AAC66A9216FDCE9EC2F496E7183178558DEA18_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline AsObservable_t27AAC66A9216FDCE9EC2F496E7183178558DEA18_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<AsObservable_t27AAC66A9216FDCE9EC2F496E7183178558DEA18_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsObservable_t27AAC66A9216FDCE9EC2F496E7183178558DEA18(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsObservable_t27AAC66A9216FDCE9EC2F496E7183178558DEA18_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsObservable_t27AAC66A9216FDCE9EC2F496E7183178558DEA18_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Operators.AsObservableObservable`1/AsObservable<System.Net.WebResponse>
struct AsObservable_t87718F333411F8907862C928155FA974537E19C7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsObservable_t87718F333411F8907862C928155FA974537E19C7_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline AsObservable_t87718F333411F8907862C928155FA974537E19C7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<AsObservable_t87718F333411F8907862C928155FA974537E19C7_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsObservable_t87718F333411F8907862C928155FA974537E19C7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsObservable_t87718F333411F8907862C928155FA974537E19C7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsObservable_t87718F333411F8907862C928155FA974537E19C7_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>
struct AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_ComCallableWrapper>, IAsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_ComCallableWrapper
{
	inline AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_ComCallableWrapper(RuntimeObject * obj) : 
		il2cpp::vm::CachedCCWBase<AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_ComCallableWrapper>(obj)
	{
	}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IAsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_ComCallableWrapper*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	// COM Callable invoker for Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF* ___asyncInfo0, int32_t ___asyncStatus1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationCompletedHandler_1_Invoke_mFB615A68AAD78CA2C31C3A6A57E9850C82DD8FF5_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___asyncInfo0' to managed representation
		RuntimeObject* ____asyncInfo0_unmarshaled = NULL;
		if (___asyncInfo0 != NULL)
		{
			____asyncInfo0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___asyncInfo0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____asyncInfo0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____asyncInfo0_unmarshaled), IAsyncOperation_1_t66F3C4F57603563FFD675931BD9E543F3F78FDDF::IID, ___asyncInfo0);
			}
		}
		else
		{
			____asyncInfo0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833 * __thisValue = (AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833 *)GetManagedObjectInline();
			AsyncOperationCompletedHandler_1_Invoke_mFB615A68AAD78CA2C31C3A6A57E9850C82DD8FF5(__thisValue, ____asyncInfo0_unmarshaled, ___asyncStatus1, AsyncOperationCompletedHandler_1_Invoke_mFB615A68AAD78CA2C31C3A6A57E9850C82DD8FF5_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncOperationCompletedHandler_1_t395D917A7902ED707B8E3F7CD1F44B71FC7E9833_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Perception.People.HandMeshObserver>
struct AsyncOperationCompletedHandler_1_t9941802FAFCAEA5AFAF80CD47D7361C7AF9973FB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncOperationCompletedHandler_1_t9941802FAFCAEA5AFAF80CD47D7361C7AF9973FB_ComCallableWrapper>, IAsyncOperationCompletedHandler_1_t9941802FAFCAEA5AFAF80CD47D7361C7AF9973FB_ComCallableWrapper
{
	inline AsyncOperationCompletedHandler_1_t9941802FAFCAEA5AFAF80CD47D7361C7AF9973FB_ComCallableWrapper(RuntimeObject * obj) : 
		il2cpp::vm::CachedCCWBase<AsyncOperationCompletedHandler_1_t9941802FAFCAEA5AFAF80CD47D7361C7AF9973FB_ComCallableWrapper>(obj)
	{
	}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IAsyncOperationCompletedHandler_1_t9941802FAFCAEA5AFAF80CD47D7361C7AF9973FB_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperationCompletedHandler_1_t9941802FAFCAEA5AFAF80CD47D7361C7AF9973FB_ComCallableWrapper*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	// COM Callable invoker for Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Perception.People.HandMeshObserver>
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_t0874BF21C52B1A21763C1277695B2A724D9E4F56* ___asyncInfo0, int32_t ___asyncStatus1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationCompletedHandler_1_Invoke_m123B07E27A7EA48E9543A5673F4525B6CE9FAD21_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___asyncInfo0' to managed representation
		RuntimeObject* ____asyncInfo0_unmarshaled = NULL;
		if (___asyncInfo0 != NULL)
		{
			____asyncInfo0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___asyncInfo0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____asyncInfo0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____asyncInfo0_unmarshaled), IAsyncOperation_1_t0874BF21C52B1A21763C1277695B2A724D9E4F56::IID, ___asyncInfo0);
			}
		}
		else
		{
			____asyncInfo0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			AsyncOperationCompletedHandler_1_t9941802FAFCAEA5AFAF80CD47D7361C7AF9973FB * __thisValue = (AsyncOperationCompletedHandler_1_t9941802FAFCAEA5AFAF80CD47D7361C7AF9973FB *)GetManagedObjectInline();
			AsyncOperationCompletedHandler_1_Invoke_m123B07E27A7EA48E9543A5673F4525B6CE9FAD21(__thisValue, ____asyncInfo0_unmarshaled, ___asyncStatus1, AsyncOperationCompletedHandler_1_Invoke_m123B07E27A7EA48E9543A5673F4525B6CE9FAD21_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncOperationCompletedHandler_1_t9941802FAFCAEA5AFAF80CD47D7361C7AF9973FB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncOperationCompletedHandler_1_t9941802FAFCAEA5AFAF80CD47D7361C7AF9973FB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncOperationCompletedHandler_1_t9941802FAFCAEA5AFAF80CD47D7361C7AF9973FB_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IBuffer>
struct AsyncOperationCompletedHandler_1_t5827CD05C17566D3B54709AE10684C908E69902A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncOperationCompletedHandler_1_t5827CD05C17566D3B54709AE10684C908E69902A_ComCallableWrapper>, IAsyncOperationCompletedHandler_1_t5827CD05C17566D3B54709AE10684C908E69902A_ComCallableWrapper
{
	inline AsyncOperationCompletedHandler_1_t5827CD05C17566D3B54709AE10684C908E69902A_ComCallableWrapper(RuntimeObject * obj) : 
		il2cpp::vm::CachedCCWBase<AsyncOperationCompletedHandler_1_t5827CD05C17566D3B54709AE10684C908E69902A_ComCallableWrapper>(obj)
	{
	}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IAsyncOperationCompletedHandler_1_t5827CD05C17566D3B54709AE10684C908E69902A_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperationCompletedHandler_1_t5827CD05C17566D3B54709AE10684C908E69902A_ComCallableWrapper*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	// COM Callable invoker for Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IBuffer>
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_t7BC0C2EC9F472CCFAA748C4A0487D3F7BE568542* ___asyncInfo0, int32_t ___asyncStatus1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationCompletedHandler_1_Invoke_m563FAAA70D97A1BED9C43795F25149F67FB5A88A_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___asyncInfo0' to managed representation
		RuntimeObject* ____asyncInfo0_unmarshaled = NULL;
		if (___asyncInfo0 != NULL)
		{
			____asyncInfo0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___asyncInfo0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____asyncInfo0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____asyncInfo0_unmarshaled), IAsyncOperation_1_t7BC0C2EC9F472CCFAA748C4A0487D3F7BE568542::IID, ___asyncInfo0);
			}
		}
		else
		{
			____asyncInfo0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			AsyncOperationCompletedHandler_1_t5827CD05C17566D3B54709AE10684C908E69902A * __thisValue = (AsyncOperationCompletedHandler_1_t5827CD05C17566D3B54709AE10684C908E69902A *)GetManagedObjectInline();
			AsyncOperationCompletedHandler_1_Invoke_m563FAAA70D97A1BED9C43795F25149F67FB5A88A(__thisValue, ____asyncInfo0_unmarshaled, ___asyncStatus1, AsyncOperationCompletedHandler_1_Invoke_m563FAAA70D97A1BED9C43795F25149F67FB5A88A_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncOperationCompletedHandler_1_t5827CD05C17566D3B54709AE10684C908E69902A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncOperationCompletedHandler_1_t5827CD05C17566D3B54709AE10684C908E69902A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncOperationCompletedHandler_1_t5827CD05C17566D3B54709AE10684C908E69902A_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType>
struct AsyncOperationCompletedHandler_1_tFFC79BA1F00AF8AF192CB11D7A8381654658E1B4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncOperationCompletedHandler_1_tFFC79BA1F00AF8AF192CB11D7A8381654658E1B4_ComCallableWrapper>, IAsyncOperationCompletedHandler_1_tFFC79BA1F00AF8AF192CB11D7A8381654658E1B4_ComCallableWrapper
{
	inline AsyncOperationCompletedHandler_1_tFFC79BA1F00AF8AF192CB11D7A8381654658E1B4_ComCallableWrapper(RuntimeObject * obj) : 
		il2cpp::vm::CachedCCWBase<AsyncOperationCompletedHandler_1_tFFC79BA1F00AF8AF192CB11D7A8381654658E1B4_ComCallableWrapper>(obj)
	{
	}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IAsyncOperationCompletedHandler_1_tFFC79BA1F00AF8AF192CB11D7A8381654658E1B4_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperationCompletedHandler_1_tFFC79BA1F00AF8AF192CB11D7A8381654658E1B4_ComCallableWrapper*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	// COM Callable invoker for Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType>
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_tF4C439C2CDF5077E54DFEA6B03E7B4D3785DFB69* ___asyncInfo0, int32_t ___asyncStatus1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationCompletedHandler_1_Invoke_m5A7D02F556AA673CC6285691DBDB66636C0048E1_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___asyncInfo0' to managed representation
		RuntimeObject* ____asyncInfo0_unmarshaled = NULL;
		if (___asyncInfo0 != NULL)
		{
			____asyncInfo0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___asyncInfo0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____asyncInfo0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____asyncInfo0_unmarshaled), IAsyncOperation_1_tF4C439C2CDF5077E54DFEA6B03E7B4D3785DFB69::IID, ___asyncInfo0);
			}
		}
		else
		{
			____asyncInfo0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			AsyncOperationCompletedHandler_1_tFFC79BA1F00AF8AF192CB11D7A8381654658E1B4 * __thisValue = (AsyncOperationCompletedHandler_1_tFFC79BA1F00AF8AF192CB11D7A8381654658E1B4 *)GetManagedObjectInline();
			AsyncOperationCompletedHandler_1_Invoke_m5A7D02F556AA673CC6285691DBDB66636C0048E1(__thisValue, ____asyncInfo0_unmarshaled, ___asyncStatus1, AsyncOperationCompletedHandler_1_Invoke_m5A7D02F556AA673CC6285691DBDB66636C0048E1_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncOperationCompletedHandler_1_tFFC79BA1F00AF8AF192CB11D7A8381654658E1B4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncOperationCompletedHandler_1_tFFC79BA1F00AF8AF192CB11D7A8381654658E1B4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncOperationCompletedHandler_1_tFFC79BA1F00AF8AF192CB11D7A8381654658E1B4_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.Foundation.AsyncOperationCompletedHandler`1<System.Object>
struct AsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D_ComCallableWrapper>, IAsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D_ComCallableWrapper
{
	inline AsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D_ComCallableWrapper(RuntimeObject * obj) : 
		il2cpp::vm::CachedCCWBase<AsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D_ComCallableWrapper>(obj)
	{
	}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IAsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D_ComCallableWrapper*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	// COM Callable invoker for Windows.Foundation.AsyncOperationCompletedHandler`1<System.Object>
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_tE95B7CD98CE930F006BBD07D7BB5109224B1BFFC* ___asyncInfo0, int32_t ___asyncStatus1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationCompletedHandler_1_Invoke_m6E5E207CF8B2D8B4C8E07778F76258F8BBBA8242_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___asyncInfo0' to managed representation
		RuntimeObject* ____asyncInfo0_unmarshaled = NULL;
		if (___asyncInfo0 != NULL)
		{
			____asyncInfo0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___asyncInfo0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____asyncInfo0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____asyncInfo0_unmarshaled), IAsyncOperation_1_tE95B7CD98CE930F006BBD07D7BB5109224B1BFFC::IID, ___asyncInfo0);
			}
		}
		else
		{
			____asyncInfo0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			AsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D * __thisValue = (AsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D *)GetManagedObjectInline();
			AsyncOperationCompletedHandler_1_Invoke_m6E5E207CF8B2D8B4C8E07778F76258F8BBBA8242(__thisValue, ____asyncInfo0_unmarshaled, ___asyncStatus1, AsyncOperationCompletedHandler_1_Invoke_m6E5E207CF8B2D8B4C8E07778F76258F8BBBA8242_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncOperationCompletedHandler_1_t724E59A84CDD5D96D15EAFD97BEFEBDB721F190D_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>
struct AsyncOperationCompletedHandler_1_t328808A8D9489316F5F1EF92341677DA0C501125_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncOperationCompletedHandler_1_t328808A8D9489316F5F1EF92341677DA0C501125_ComCallableWrapper>, IAsyncOperationCompletedHandler_1_t328808A8D9489316F5F1EF92341677DA0C501125_ComCallableWrapper
{
	inline AsyncOperationCompletedHandler_1_t328808A8D9489316F5F1EF92341677DA0C501125_ComCallableWrapper(RuntimeObject * obj) : 
		il2cpp::vm::CachedCCWBase<AsyncOperationCompletedHandler_1_t328808A8D9489316F5F1EF92341677DA0C501125_ComCallableWrapper>(obj)
	{
	}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IAsyncOperationCompletedHandler_1_t328808A8D9489316F5F1EF92341677DA0C501125_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperationCompletedHandler_1_t328808A8D9489316F5F1EF92341677DA0C501125_ComCallableWrapper*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	// COM Callable invoker for Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_t3E5E0E44D9FA75713CF0BF6622C9059660699044* ___asyncInfo0, int32_t ___asyncStatus1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationCompletedHandler_1_Invoke_m594BBE478487BEB1B0FBD8DF96D3202AB85F1836_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___asyncInfo0' to managed representation
		RuntimeObject* ____asyncInfo0_unmarshaled = NULL;
		if (___asyncInfo0 != NULL)
		{
			____asyncInfo0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___asyncInfo0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____asyncInfo0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____asyncInfo0_unmarshaled), IAsyncOperation_1_t3E5E0E44D9FA75713CF0BF6622C9059660699044::IID, ___asyncInfo0);
			}
		}
		else
		{
			____asyncInfo0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			AsyncOperationCompletedHandler_1_t328808A8D9489316F5F1EF92341677DA0C501125 * __thisValue = (AsyncOperationCompletedHandler_1_t328808A8D9489316F5F1EF92341677DA0C501125 *)GetManagedObjectInline();
			AsyncOperationCompletedHandler_1_Invoke_m594BBE478487BEB1B0FBD8DF96D3202AB85F1836(__thisValue, ____asyncInfo0_unmarshaled, ___asyncStatus1, AsyncOperationCompletedHandler_1_Invoke_m594BBE478487BEB1B0FBD8DF96D3202AB85F1836_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncOperationCompletedHandler_1_t328808A8D9489316F5F1EF92341677DA0C501125(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncOperationCompletedHandler_1_t328808A8D9489316F5F1EF92341677DA0C501125_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncOperationCompletedHandler_1_t328808A8D9489316F5F1EF92341677DA0C501125_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.StorageFile>
struct AsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061_ComCallableWrapper>, IAsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061_ComCallableWrapper
{
	inline AsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061_ComCallableWrapper(RuntimeObject * obj) : 
		il2cpp::vm::CachedCCWBase<AsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061_ComCallableWrapper>(obj)
	{
	}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IAsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061_ComCallableWrapper*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	// COM Callable invoker for Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.StorageFile>
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_t4DF8D93870801CBDF1404B858B231D7BD74E042E* ___asyncInfo0, int32_t ___asyncStatus1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationCompletedHandler_1_Invoke_m83B24403F3DD218240FAB1AFBA30634F2468AFEE_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___asyncInfo0' to managed representation
		RuntimeObject* ____asyncInfo0_unmarshaled = NULL;
		if (___asyncInfo0 != NULL)
		{
			____asyncInfo0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___asyncInfo0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____asyncInfo0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____asyncInfo0_unmarshaled), IAsyncOperation_1_t4DF8D93870801CBDF1404B858B231D7BD74E042E::IID, ___asyncInfo0);
			}
		}
		else
		{
			____asyncInfo0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			AsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061 * __thisValue = (AsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061 *)GetManagedObjectInline();
			AsyncOperationCompletedHandler_1_Invoke_m83B24403F3DD218240FAB1AFBA30634F2468AFEE(__thisValue, ____asyncInfo0_unmarshaled, ___asyncStatus1, AsyncOperationCompletedHandler_1_Invoke_m83B24403F3DD218240FAB1AFBA30634F2468AFEE_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncOperationCompletedHandler_1_t64C3960950122A6E6F672D32D1A0CB7E6BAFA061_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.StorageFolder>
struct AsyncOperationCompletedHandler_1_t2196E1E2BD9AF393427332E9C9F22A7D85B1D6B4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncOperationCompletedHandler_1_t2196E1E2BD9AF393427332E9C9F22A7D85B1D6B4_ComCallableWrapper>, IAsyncOperationCompletedHandler_1_t2196E1E2BD9AF393427332E9C9F22A7D85B1D6B4_ComCallableWrapper
{
	inline AsyncOperationCompletedHandler_1_t2196E1E2BD9AF393427332E9C9F22A7D85B1D6B4_ComCallableWrapper(RuntimeObject * obj) : 
		il2cpp::vm::CachedCCWBase<AsyncOperationCompletedHandler_1_t2196E1E2BD9AF393427332E9C9F22A7D85B1D6B4_ComCallableWrapper>(obj)
	{
	}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IAsyncOperationCompletedHandler_1_t2196E1E2BD9AF393427332E9C9F22A7D85B1D6B4_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperationCompletedHandler_1_t2196E1E2BD9AF393427332E9C9F22A7D85B1D6B4_ComCallableWrapper*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	// COM Callable invoker for Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.StorageFolder>
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_tD12D8ED3FD09605FD1A7BC101A5E87C803BFF117* ___asyncInfo0, int32_t ___asyncStatus1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationCompletedHandler_1_Invoke_mC2114CC7B5182D7B0B9A2A16EAA911A83A7F8486_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___asyncInfo0' to managed representation
		RuntimeObject* ____asyncInfo0_unmarshaled = NULL;
		if (___asyncInfo0 != NULL)
		{
			____asyncInfo0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___asyncInfo0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____asyncInfo0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____asyncInfo0_unmarshaled), IAsyncOperation_1_tD12D8ED3FD09605FD1A7BC101A5E87C803BFF117::IID, ___asyncInfo0);
			}
		}
		else
		{
			____asyncInfo0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			AsyncOperationCompletedHandler_1_t2196E1E2BD9AF393427332E9C9F22A7D85B1D6B4 * __thisValue = (AsyncOperationCompletedHandler_1_t2196E1E2BD9AF393427332E9C9F22A7D85B1D6B4 *)GetManagedObjectInline();
			AsyncOperationCompletedHandler_1_Invoke_mC2114CC7B5182D7B0B9A2A16EAA911A83A7F8486(__thisValue, ____asyncInfo0_unmarshaled, ___asyncStatus1, AsyncOperationCompletedHandler_1_Invoke_mC2114CC7B5182D7B0B9A2A16EAA911A83A7F8486_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncOperationCompletedHandler_1_t2196E1E2BD9AF393427332E9C9F22A7D85B1D6B4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncOperationCompletedHandler_1_t2196E1E2BD9AF393427332E9C9F22A7D85B1D6B4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncOperationCompletedHandler_1_t2196E1E2BD9AF393427332E9C9F22A7D85B1D6B4_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.Foundation.AsyncOperationCompletedHandler`1<System.UInt32>
struct AsyncOperationCompletedHandler_1_tF454F1E4B28A15E6AC9801C8A1708668213E16BE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncOperationCompletedHandler_1_tF454F1E4B28A15E6AC9801C8A1708668213E16BE_ComCallableWrapper>, IAsyncOperationCompletedHandler_1_tF454F1E4B28A15E6AC9801C8A1708668213E16BE_ComCallableWrapper
{
	inline AsyncOperationCompletedHandler_1_tF454F1E4B28A15E6AC9801C8A1708668213E16BE_ComCallableWrapper(RuntimeObject * obj) : 
		il2cpp::vm::CachedCCWBase<AsyncOperationCompletedHandler_1_tF454F1E4B28A15E6AC9801C8A1708668213E16BE_ComCallableWrapper>(obj)
	{
	}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IAsyncOperationCompletedHandler_1_tF454F1E4B28A15E6AC9801C8A1708668213E16BE_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperationCompletedHandler_1_tF454F1E4B28A15E6AC9801C8A1708668213E16BE_ComCallableWrapper*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	// COM Callable invoker for Windows.Foundation.AsyncOperationCompletedHandler`1<System.UInt32>
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_tDF3123F2E9343D6DBBFE6A5D008A395E62CE246A* ___asyncInfo0, int32_t ___asyncStatus1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationCompletedHandler_1_Invoke_m7ADFDF924B9ED1DEE270E030BB6FF916F47C2245_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___asyncInfo0' to managed representation
		RuntimeObject* ____asyncInfo0_unmarshaled = NULL;
		if (___asyncInfo0 != NULL)
		{
			____asyncInfo0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___asyncInfo0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____asyncInfo0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____asyncInfo0_unmarshaled), IAsyncOperation_1_tDF3123F2E9343D6DBBFE6A5D008A395E62CE246A::IID, ___asyncInfo0);
			}
		}
		else
		{
			____asyncInfo0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			AsyncOperationCompletedHandler_1_tF454F1E4B28A15E6AC9801C8A1708668213E16BE * __thisValue = (AsyncOperationCompletedHandler_1_tF454F1E4B28A15E6AC9801C8A1708668213E16BE *)GetManagedObjectInline();
			AsyncOperationCompletedHandler_1_Invoke_m7ADFDF924B9ED1DEE270E030BB6FF916F47C2245(__thisValue, ____asyncInfo0_unmarshaled, ___asyncStatus1, AsyncOperationCompletedHandler_1_Invoke_m7ADFDF924B9ED1DEE270E030BB6FF916F47C2245_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncOperationCompletedHandler_1_tF454F1E4B28A15E6AC9801C8A1708668213E16BE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncOperationCompletedHandler_1_tF454F1E4B28A15E6AC9801C8A1708668213E16BE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncOperationCompletedHandler_1_tF454F1E4B28A15E6AC9801C8A1708668213E16BE_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct AsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83_ComCallableWrapper>, IAsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83_ComCallableWrapper
{
	inline AsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83_ComCallableWrapper(RuntimeObject * obj) : 
		il2cpp::vm::CachedCCWBase<AsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83_ComCallableWrapper>(obj)
	{
	}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IAsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83_ComCallableWrapper*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	// COM Callable invoker for Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93* ___asyncInfo0, uint32_t ___progressInfo1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationProgressHandler_2_Invoke_m660CF6C4E9759B3DA04ED33048691F8054A4275E_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___asyncInfo0' to managed representation
		RuntimeObject* ____asyncInfo0_unmarshaled = NULL;
		if (___asyncInfo0 != NULL)
		{
			____asyncInfo0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___asyncInfo0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____asyncInfo0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____asyncInfo0_unmarshaled), IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93::IID, ___asyncInfo0);
			}
		}
		else
		{
			____asyncInfo0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			AsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83 * __thisValue = (AsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83 *)GetManagedObjectInline();
			AsyncOperationProgressHandler_2_Invoke_m660CF6C4E9759B3DA04ED33048691F8054A4275E(__thisValue, ____asyncInfo0_unmarshaled, ___progressInfo1, AsyncOperationProgressHandler_2_Invoke_m660CF6C4E9759B3DA04ED33048691F8054A4275E_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncOperationProgressHandler_2_t89DB8E452D21A5CFA51527D293E1DF2C5497BD83_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.Foundation.AsyncOperationProgressHandler`2<System.Object,System.Object>
struct AsyncOperationProgressHandler_2_tDABCAA894A199A003194DB49B9E29B595221BD21_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncOperationProgressHandler_2_tDABCAA894A199A003194DB49B9E29B595221BD21_ComCallableWrapper>, IAsyncOperationProgressHandler_2_tDABCAA894A199A003194DB49B9E29B595221BD21_ComCallableWrapper
{
	inline AsyncOperationProgressHandler_2_tDABCAA894A199A003194DB49B9E29B595221BD21_ComCallableWrapper(RuntimeObject * obj) : 
		il2cpp::vm::CachedCCWBase<AsyncOperationProgressHandler_2_tDABCAA894A199A003194DB49B9E29B595221BD21_ComCallableWrapper>(obj)
	{
	}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IAsyncOperationProgressHandler_2_tDABCAA894A199A003194DB49B9E29B595221BD21_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperationProgressHandler_2_tDABCAA894A199A003194DB49B9E29B595221BD21_ComCallableWrapper*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	// COM Callable invoker for Windows.Foundation.AsyncOperationProgressHandler`2<System.Object,System.Object>
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_t81E4506C3B7B5DAA7884356C0994B02BCCC12746* ___asyncInfo0, Il2CppIInspectable* ___progressInfo1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationProgressHandler_2_Invoke_m8B624F24DDE86BE50970E21DB168AB80DB2CCE8B_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___asyncInfo0' to managed representation
		RuntimeObject* ____asyncInfo0_unmarshaled = NULL;
		if (___asyncInfo0 != NULL)
		{
			____asyncInfo0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___asyncInfo0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____asyncInfo0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____asyncInfo0_unmarshaled), IAsyncOperationWithProgress_2_t81E4506C3B7B5DAA7884356C0994B02BCCC12746::IID, ___asyncInfo0);
			}
		}
		else
		{
			____asyncInfo0_unmarshaled = NULL;
		}

		// Marshaling of parameter '___progressInfo1' to managed representation
		RuntimeObject * ____progressInfo1_unmarshaled = NULL;
		if (___progressInfo1 != NULL)
		{
			____progressInfo1_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___progressInfo1, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____progressInfo1_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____progressInfo1_unmarshaled), Il2CppIInspectable::IID, ___progressInfo1);
			}
		}
		else
		{
			____progressInfo1_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			AsyncOperationProgressHandler_2_tDABCAA894A199A003194DB49B9E29B595221BD21 * __thisValue = (AsyncOperationProgressHandler_2_tDABCAA894A199A003194DB49B9E29B595221BD21 *)GetManagedObjectInline();
			AsyncOperationProgressHandler_2_Invoke_m8B624F24DDE86BE50970E21DB168AB80DB2CCE8B(__thisValue, ____asyncInfo0_unmarshaled, ____progressInfo1_unmarshaled, AsyncOperationProgressHandler_2_Invoke_m8B624F24DDE86BE50970E21DB168AB80DB2CCE8B_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncOperationProgressHandler_2_tDABCAA894A199A003194DB49B9E29B595221BD21(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncOperationProgressHandler_2_tDABCAA894A199A003194DB49B9E29B595221BD21_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncOperationProgressHandler_2_tDABCAA894A199A003194DB49B9E29B595221BD21_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.Foundation.AsyncOperationProgressHandler`2<System.Object,System.UInt32>
struct AsyncOperationProgressHandler_2_t8C7A82F8933E16668CD676A0BF993CF251C28D87_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncOperationProgressHandler_2_t8C7A82F8933E16668CD676A0BF993CF251C28D87_ComCallableWrapper>, IAsyncOperationProgressHandler_2_t8C7A82F8933E16668CD676A0BF993CF251C28D87_ComCallableWrapper
{
	inline AsyncOperationProgressHandler_2_t8C7A82F8933E16668CD676A0BF993CF251C28D87_ComCallableWrapper(RuntimeObject * obj) : 
		il2cpp::vm::CachedCCWBase<AsyncOperationProgressHandler_2_t8C7A82F8933E16668CD676A0BF993CF251C28D87_ComCallableWrapper>(obj)
	{
	}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IAsyncOperationProgressHandler_2_t8C7A82F8933E16668CD676A0BF993CF251C28D87_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperationProgressHandler_2_t8C7A82F8933E16668CD676A0BF993CF251C28D87_ComCallableWrapper*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	// COM Callable invoker for Windows.Foundation.AsyncOperationProgressHandler`2<System.Object,System.UInt32>
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_t4C79F04EFEC306B80E0827A65F07CA57B22D2937* ___asyncInfo0, uint32_t ___progressInfo1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationProgressHandler_2_Invoke_mC8624B6E1DC32D428B716E844083F343748F27C9_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___asyncInfo0' to managed representation
		RuntimeObject* ____asyncInfo0_unmarshaled = NULL;
		if (___asyncInfo0 != NULL)
		{
			____asyncInfo0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___asyncInfo0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____asyncInfo0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____asyncInfo0_unmarshaled), IAsyncOperationWithProgress_2_t4C79F04EFEC306B80E0827A65F07CA57B22D2937::IID, ___asyncInfo0);
			}
		}
		else
		{
			____asyncInfo0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			AsyncOperationProgressHandler_2_t8C7A82F8933E16668CD676A0BF993CF251C28D87 * __thisValue = (AsyncOperationProgressHandler_2_t8C7A82F8933E16668CD676A0BF993CF251C28D87 *)GetManagedObjectInline();
			AsyncOperationProgressHandler_2_Invoke_mC8624B6E1DC32D428B716E844083F343748F27C9(__thisValue, ____asyncInfo0_unmarshaled, ___progressInfo1, AsyncOperationProgressHandler_2_Invoke_mC8624B6E1DC32D428B716E844083F343748F27C9_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncOperationProgressHandler_2_t8C7A82F8933E16668CD676A0BF993CF251C28D87(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncOperationProgressHandler_2_t8C7A82F8933E16668CD676A0BF993CF251C28D87_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncOperationProgressHandler_2_t8C7A82F8933E16668CD676A0BF993CF251C28D87_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>
struct AsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7_ComCallableWrapper>, IAsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7_ComCallableWrapper
{
	inline AsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7_ComCallableWrapper(RuntimeObject * obj) : 
		il2cpp::vm::CachedCCWBase<AsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7_ComCallableWrapper>(obj)
	{
	}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IAsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7_ComCallableWrapper*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	// COM Callable invoker for Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB* ___asyncInfo0, uint32_t ___progressInfo1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationProgressHandler_2_Invoke_m55AD755F673EA70C2078764866BE082E79701E25_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___asyncInfo0' to managed representation
		RuntimeObject* ____asyncInfo0_unmarshaled = NULL;
		if (___asyncInfo0 != NULL)
		{
			____asyncInfo0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___asyncInfo0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____asyncInfo0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____asyncInfo0_unmarshaled), IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB::IID, ___asyncInfo0);
			}
		}
		else
		{
			____asyncInfo0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			AsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7 * __thisValue = (AsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7 *)GetManagedObjectInline();
			AsyncOperationProgressHandler_2_Invoke_m55AD755F673EA70C2078764866BE082E79701E25(__thisValue, ____asyncInfo0_unmarshaled, ___progressInfo1, AsyncOperationProgressHandler_2_Invoke_m55AD755F673EA70C2078764866BE082E79701E25_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncOperationProgressHandler_2_t984663664F6FDEA7C5E457E36EDAA8751D352FC7_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_ComCallableWrapper>, IAsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_ComCallableWrapper
{
	inline AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_ComCallableWrapper(RuntimeObject * obj) : 
		il2cpp::vm::CachedCCWBase<AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_ComCallableWrapper>(obj)
	{
	}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IAsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_ComCallableWrapper*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	// COM Callable invoker for Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93* ___asyncInfo0, int32_t ___asyncStatus1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationWithProgressCompletedHandler_2_Invoke_mEFFDDDBC86C0B7BC52D2F76F3E4C1D6C728D96EF_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___asyncInfo0' to managed representation
		RuntimeObject* ____asyncInfo0_unmarshaled = NULL;
		if (___asyncInfo0 != NULL)
		{
			____asyncInfo0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___asyncInfo0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____asyncInfo0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____asyncInfo0_unmarshaled), IAsyncOperationWithProgress_2_tB72FC848D7866662845F94C01350F153153F6A93::IID, ___asyncInfo0);
			}
		}
		else
		{
			____asyncInfo0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130 * __thisValue = (AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130 *)GetManagedObjectInline();
			AsyncOperationWithProgressCompletedHandler_2_Invoke_mEFFDDDBC86C0B7BC52D2F76F3E4C1D6C728D96EF(__thisValue, ____asyncInfo0_unmarshaled, ___asyncStatus1, AsyncOperationWithProgressCompletedHandler_2_Invoke_mEFFDDDBC86C0B7BC52D2F76F3E4C1D6C728D96EF_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncOperationWithProgressCompletedHandler_2_t3523C5CD377B9713DDF20CBA51E15B7830F14130_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.Object,System.Object>
struct AsyncOperationWithProgressCompletedHandler_2_tA4F57F1EBB7F0FE72729C419BC4E8E74147DF40A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncOperationWithProgressCompletedHandler_2_tA4F57F1EBB7F0FE72729C419BC4E8E74147DF40A_ComCallableWrapper>, IAsyncOperationWithProgressCompletedHandler_2_tA4F57F1EBB7F0FE72729C419BC4E8E74147DF40A_ComCallableWrapper
{
	inline AsyncOperationWithProgressCompletedHandler_2_tA4F57F1EBB7F0FE72729C419BC4E8E74147DF40A_ComCallableWrapper(RuntimeObject * obj) : 
		il2cpp::vm::CachedCCWBase<AsyncOperationWithProgressCompletedHandler_2_tA4F57F1EBB7F0FE72729C419BC4E8E74147DF40A_ComCallableWrapper>(obj)
	{
	}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IAsyncOperationWithProgressCompletedHandler_2_tA4F57F1EBB7F0FE72729C419BC4E8E74147DF40A_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperationWithProgressCompletedHandler_2_tA4F57F1EBB7F0FE72729C419BC4E8E74147DF40A_ComCallableWrapper*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	// COM Callable invoker for Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.Object,System.Object>
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_t81E4506C3B7B5DAA7884356C0994B02BCCC12746* ___asyncInfo0, int32_t ___asyncStatus1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationWithProgressCompletedHandler_2_Invoke_m03FF97CD09DC8A3C138D2274D3D76EF374B81518_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___asyncInfo0' to managed representation
		RuntimeObject* ____asyncInfo0_unmarshaled = NULL;
		if (___asyncInfo0 != NULL)
		{
			____asyncInfo0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___asyncInfo0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____asyncInfo0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____asyncInfo0_unmarshaled), IAsyncOperationWithProgress_2_t81E4506C3B7B5DAA7884356C0994B02BCCC12746::IID, ___asyncInfo0);
			}
		}
		else
		{
			____asyncInfo0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			AsyncOperationWithProgressCompletedHandler_2_tA4F57F1EBB7F0FE72729C419BC4E8E74147DF40A * __thisValue = (AsyncOperationWithProgressCompletedHandler_2_tA4F57F1EBB7F0FE72729C419BC4E8E74147DF40A *)GetManagedObjectInline();
			AsyncOperationWithProgressCompletedHandler_2_Invoke_m03FF97CD09DC8A3C138D2274D3D76EF374B81518(__thisValue, ____asyncInfo0_unmarshaled, ___asyncStatus1, AsyncOperationWithProgressCompletedHandler_2_Invoke_m03FF97CD09DC8A3C138D2274D3D76EF374B81518_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncOperationWithProgressCompletedHandler_2_tA4F57F1EBB7F0FE72729C419BC4E8E74147DF40A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncOperationWithProgressCompletedHandler_2_tA4F57F1EBB7F0FE72729C419BC4E8E74147DF40A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncOperationWithProgressCompletedHandler_2_tA4F57F1EBB7F0FE72729C419BC4E8E74147DF40A_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.Object,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_t5411FC7EEA228F52AC0FB3FC3F8ED36BCC56348A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncOperationWithProgressCompletedHandler_2_t5411FC7EEA228F52AC0FB3FC3F8ED36BCC56348A_ComCallableWrapper>, IAsyncOperationWithProgressCompletedHandler_2_t5411FC7EEA228F52AC0FB3FC3F8ED36BCC56348A_ComCallableWrapper
{
	inline AsyncOperationWithProgressCompletedHandler_2_t5411FC7EEA228F52AC0FB3FC3F8ED36BCC56348A_ComCallableWrapper(RuntimeObject * obj) : 
		il2cpp::vm::CachedCCWBase<AsyncOperationWithProgressCompletedHandler_2_t5411FC7EEA228F52AC0FB3FC3F8ED36BCC56348A_ComCallableWrapper>(obj)
	{
	}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IAsyncOperationWithProgressCompletedHandler_2_t5411FC7EEA228F52AC0FB3FC3F8ED36BCC56348A_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperationWithProgressCompletedHandler_2_t5411FC7EEA228F52AC0FB3FC3F8ED36BCC56348A_ComCallableWrapper*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	// COM Callable invoker for Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.Object,System.UInt32>
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_t4C79F04EFEC306B80E0827A65F07CA57B22D2937* ___asyncInfo0, int32_t ___asyncStatus1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationWithProgressCompletedHandler_2_Invoke_mFC9E8BD1E218854024569CCCA5973B3221EA8F85_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___asyncInfo0' to managed representation
		RuntimeObject* ____asyncInfo0_unmarshaled = NULL;
		if (___asyncInfo0 != NULL)
		{
			____asyncInfo0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___asyncInfo0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____asyncInfo0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____asyncInfo0_unmarshaled), IAsyncOperationWithProgress_2_t4C79F04EFEC306B80E0827A65F07CA57B22D2937::IID, ___asyncInfo0);
			}
		}
		else
		{
			____asyncInfo0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			AsyncOperationWithProgressCompletedHandler_2_t5411FC7EEA228F52AC0FB3FC3F8ED36BCC56348A * __thisValue = (AsyncOperationWithProgressCompletedHandler_2_t5411FC7EEA228F52AC0FB3FC3F8ED36BCC56348A *)GetManagedObjectInline();
			AsyncOperationWithProgressCompletedHandler_2_Invoke_mFC9E8BD1E218854024569CCCA5973B3221EA8F85(__thisValue, ____asyncInfo0_unmarshaled, ___asyncStatus1, AsyncOperationWithProgressCompletedHandler_2_Invoke_mFC9E8BD1E218854024569CCCA5973B3221EA8F85_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncOperationWithProgressCompletedHandler_2_t5411FC7EEA228F52AC0FB3FC3F8ED36BCC56348A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncOperationWithProgressCompletedHandler_2_t5411FC7EEA228F52AC0FB3FC3F8ED36BCC56348A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncOperationWithProgressCompletedHandler_2_t5411FC7EEA228F52AC0FB3FC3F8ED36BCC56348A_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_ComCallableWrapper>, IAsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_ComCallableWrapper
{
	inline AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_ComCallableWrapper(RuntimeObject * obj) : 
		il2cpp::vm::CachedCCWBase<AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_ComCallableWrapper>(obj)
	{
	}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IAsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IAsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_ComCallableWrapper*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	// COM Callable invoker for Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB* ___asyncInfo0, int32_t ___asyncStatus1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperationWithProgressCompletedHandler_2_Invoke_m0E94253487FD5F06393748F4BC6936D117E824C9_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___asyncInfo0' to managed representation
		RuntimeObject* ____asyncInfo0_unmarshaled = NULL;
		if (___asyncInfo0 != NULL)
		{
			____asyncInfo0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___asyncInfo0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____asyncInfo0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____asyncInfo0_unmarshaled), IAsyncOperationWithProgress_2_t5DD955619784B07389ACA082C9A1EA6E1C9570CB::IID, ___asyncInfo0);
			}
		}
		else
		{
			____asyncInfo0_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410 * __thisValue = (AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410 *)GetManagedObjectInline();
			AsyncOperationWithProgressCompletedHandler_2_Invoke_m0E94253487FD5F06393748F4BC6936D117E824C9(__thisValue, ____asyncInfo0_unmarshaled, ___asyncStatus1, AsyncOperationWithProgressCompletedHandler_2_Invoke_m0E94253487FD5F06393748F4BC6936D117E824C9_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncOperationWithProgressCompletedHandler_2_t2E6C3400D8FB0371F80B5E69E7CE6A26BB8E4410_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.AsyncSubject`1<System.Net.HttpWebResponse>
struct AsyncSubject_1_t1160CE62266C97EC66D63E892ED5F147F14C1F48_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncSubject_1_t1160CE62266C97EC66D63E892ED5F147F14C1F48_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline AsyncSubject_1_t1160CE62266C97EC66D63E892ED5F147F14C1F48_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<AsyncSubject_1_t1160CE62266C97EC66D63E892ED5F147F14C1F48_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncSubject_1_t1160CE62266C97EC66D63E892ED5F147F14C1F48(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncSubject_1_t1160CE62266C97EC66D63E892ED5F147F14C1F48_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncSubject_1_t1160CE62266C97EC66D63E892ED5F147F14C1F48_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.AsyncSubject`1<System.IO.Stream>
struct AsyncSubject_1_t6D947F4E800DB0320AC342645B7662F3A80CC1DA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncSubject_1_t6D947F4E800DB0320AC342645B7662F3A80CC1DA_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline AsyncSubject_1_t6D947F4E800DB0320AC342645B7662F3A80CC1DA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<AsyncSubject_1_t6D947F4E800DB0320AC342645B7662F3A80CC1DA_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncSubject_1_t6D947F4E800DB0320AC342645B7662F3A80CC1DA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncSubject_1_t6D947F4E800DB0320AC342645B7662F3A80CC1DA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncSubject_1_t6D947F4E800DB0320AC342645B7662F3A80CC1DA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.AsyncSubject`1<UniRx.Unit>
struct AsyncSubject_1_t63AB93BC60FF60B400CF9CAF505B293AF6B7C073_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncSubject_1_t63AB93BC60FF60B400CF9CAF505B293AF6B7C073_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline AsyncSubject_1_t63AB93BC60FF60B400CF9CAF505B293AF6B7C073_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<AsyncSubject_1_t63AB93BC60FF60B400CF9CAF505B293AF6B7C073_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncSubject_1_t63AB93BC60FF60B400CF9CAF505B293AF6B7C073(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncSubject_1_t63AB93BC60FF60B400CF9CAF505B293AF6B7C073_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncSubject_1_t63AB93BC60FF60B400CF9CAF505B293AF6B7C073_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.AsyncSubject`1<System.Net.WebResponse>
struct AsyncSubject_1_t62213BFFD0709CF6E1FEC868F6708F4EEAEF6A6F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncSubject_1_t62213BFFD0709CF6E1FEC868F6708F4EEAEF6A6F_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline AsyncSubject_1_t62213BFFD0709CF6E1FEC868F6708F4EEAEF6A6F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<AsyncSubject_1_t62213BFFD0709CF6E1FEC868F6708F4EEAEF6A6F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncSubject_1_t62213BFFD0709CF6E1FEC868F6708F4EEAEF6A6F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncSubject_1_t62213BFFD0709CF6E1FEC868F6708F4EEAEF6A6F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncSubject_1_t62213BFFD0709CF6E1FEC868F6708F4EEAEF6A6F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1<System.ValueTuple`2<System.Single[],System.Int32>>
struct AsyncTriggerHandler_1_t9DEEBC5B99D702127FE885BCF86B761B82C7BC52_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncTriggerHandler_1_t9DEEBC5B99D702127FE885BCF86B761B82C7BC52_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline AsyncTriggerHandler_1_t9DEEBC5B99D702127FE885BCF86B761B82C7BC52_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<AsyncTriggerHandler_1_t9DEEBC5B99D702127FE885BCF86B761B82C7BC52_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncTriggerHandler_1_t9DEEBC5B99D702127FE885BCF86B761B82C7BC52(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncTriggerHandler_1_t9DEEBC5B99D702127FE885BCF86B761B82C7BC52_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncTriggerHandler_1_t9DEEBC5B99D702127FE885BCF86B761B82C7BC52_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1<System.ValueTuple`2<UnityEngine.RenderTexture,UnityEngine.RenderTexture>>
struct AsyncTriggerHandler_1_t24D2DB92428F2F35807D267970FA878EBFB1F5A7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncTriggerHandler_1_t24D2DB92428F2F35807D267970FA878EBFB1F5A7_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline AsyncTriggerHandler_1_t24D2DB92428F2F35807D267970FA878EBFB1F5A7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<AsyncTriggerHandler_1_t24D2DB92428F2F35807D267970FA878EBFB1F5A7_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncTriggerHandler_1_t24D2DB92428F2F35807D267970FA878EBFB1F5A7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncTriggerHandler_1_t24D2DB92428F2F35807D267970FA878EBFB1F5A7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncTriggerHandler_1_t24D2DB92428F2F35807D267970FA878EBFB1F5A7_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1<Cysharp.Threading.Tasks.AsyncUnit>
struct AsyncTriggerHandler_1_t27230572530D23E12A55643B169CF5D17B45E9FB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncTriggerHandler_1_t27230572530D23E12A55643B169CF5D17B45E9FB_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline AsyncTriggerHandler_1_t27230572530D23E12A55643B169CF5D17B45E9FB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<AsyncTriggerHandler_1_t27230572530D23E12A55643B169CF5D17B45E9FB_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncTriggerHandler_1_t27230572530D23E12A55643B169CF5D17B45E9FB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncTriggerHandler_1_t27230572530D23E12A55643B169CF5D17B45E9FB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncTriggerHandler_1_t27230572530D23E12A55643B169CF5D17B45E9FB_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1<UnityEngine.EventSystems.AxisEventData>
struct AsyncTriggerHandler_1_tDB4A37FE339B6E378B6E2A3CE999287694102281_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncTriggerHandler_1_tDB4A37FE339B6E378B6E2A3CE999287694102281_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline AsyncTriggerHandler_1_tDB4A37FE339B6E378B6E2A3CE999287694102281_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<AsyncTriggerHandler_1_tDB4A37FE339B6E378B6E2A3CE999287694102281_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncTriggerHandler_1_tDB4A37FE339B6E378B6E2A3CE999287694102281(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncTriggerHandler_1_tDB4A37FE339B6E378B6E2A3CE999287694102281_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncTriggerHandler_1_tDB4A37FE339B6E378B6E2A3CE999287694102281_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1<UnityEngine.EventSystems.BaseEventData>
struct AsyncTriggerHandler_1_t894E46CB44AF40F0D361B3FE534FB1ABAD7059DF_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncTriggerHandler_1_t894E46CB44AF40F0D361B3FE534FB1ABAD7059DF_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline AsyncTriggerHandler_1_t894E46CB44AF40F0D361B3FE534FB1ABAD7059DF_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<AsyncTriggerHandler_1_t894E46CB44AF40F0D361B3FE534FB1ABAD7059DF_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncTriggerHandler_1_t894E46CB44AF40F0D361B3FE534FB1ABAD7059DF(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncTriggerHandler_1_t894E46CB44AF40F0D361B3FE534FB1ABAD7059DF_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncTriggerHandler_1_t894E46CB44AF40F0D361B3FE534FB1ABAD7059DF_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1<System.Boolean>
struct AsyncTriggerHandler_1_tB37914B107E75432708DF537F397D0D5CE147092_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncTriggerHandler_1_tB37914B107E75432708DF537F397D0D5CE147092_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline AsyncTriggerHandler_1_tB37914B107E75432708DF537F397D0D5CE147092_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<AsyncTriggerHandler_1_tB37914B107E75432708DF537F397D0D5CE147092_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncTriggerHandler_1_tB37914B107E75432708DF537F397D0D5CE147092(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncTriggerHandler_1_tB37914B107E75432708DF537F397D0D5CE147092_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncTriggerHandler_1_tB37914B107E75432708DF537F397D0D5CE147092_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1<UnityEngine.Collider>
struct AsyncTriggerHandler_1_tA2A6464AB20986041ADC1D41F378EB0895664F58_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncTriggerHandler_1_tA2A6464AB20986041ADC1D41F378EB0895664F58_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline AsyncTriggerHandler_1_tA2A6464AB20986041ADC1D41F378EB0895664F58_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<AsyncTriggerHandler_1_tA2A6464AB20986041ADC1D41F378EB0895664F58_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncTriggerHandler_1_tA2A6464AB20986041ADC1D41F378EB0895664F58(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncTriggerHandler_1_tA2A6464AB20986041ADC1D41F378EB0895664F58_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncTriggerHandler_1_tA2A6464AB20986041ADC1D41F378EB0895664F58_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1<UnityEngine.Collider2D>
struct AsyncTriggerHandler_1_tBD8684AE103A5D9E6B9D6BA35951D4E1F27D0E56_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncTriggerHandler_1_tBD8684AE103A5D9E6B9D6BA35951D4E1F27D0E56_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline AsyncTriggerHandler_1_tBD8684AE103A5D9E6B9D6BA35951D4E1F27D0E56_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<AsyncTriggerHandler_1_tBD8684AE103A5D9E6B9D6BA35951D4E1F27D0E56_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncTriggerHandler_1_tBD8684AE103A5D9E6B9D6BA35951D4E1F27D0E56(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncTriggerHandler_1_tBD8684AE103A5D9E6B9D6BA35951D4E1F27D0E56_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncTriggerHandler_1_tBD8684AE103A5D9E6B9D6BA35951D4E1F27D0E56_ComCallableWrapper(obj));
}

// COM Callable Wrapper for Cysharp.Threading.Tasks.Triggers.AsyncTriggerHandler`1<UnityEngine.Collision>
struct AsyncTriggerHandler_1_t0A9472DA849E6D1F93D0C0974C4A697AF549460B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<AsyncTriggerHandler_1_t0A9472DA849E6D1F93D0C0974C4A697AF549460B_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline AsyncTriggerHandler_1_t0A9472DA849E6D1F93D0C0974C4A697AF549460B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<AsyncTriggerHandler_1_t0A9472DA849E6D1F93D0C0974C4A697AF549460B_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_AsyncTriggerHandler_1_t0A9472DA849E6D1F93D0C0974C4A697AF549460B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(AsyncTriggerHandler_1_t0A9472DA849E6D1F93D0C0974C4A697AF549460B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) AsyncTriggerHandler_1_t0A9472DA849E6D1F93D0C0974C4A697AF549460B_ComCallableWrapper(obj));
}
