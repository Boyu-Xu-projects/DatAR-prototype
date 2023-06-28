#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`2<System.Object,System.Object>
struct Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D;
// System.Collections.ObjectModel.Collection`1<Newtonsoft.Json.Linq.JToken>
struct Collection_1_t43D925574A6394ADD9A2F69C9BE205B620E3A63D;
// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_tC70665E043EEEEE0CE76CFA285D8ACDB39D36EB0;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC;
// System.Collections.Generic.Dictionary`2<System.String,Newtonsoft.Json.Linq.JToken>
struct Dictionary_2_tA73650BDA615C59B1D7DC6B436DF2E1ED70D48CD;
// Newtonsoft.Json.Utilities.DynamicProxy`1<Newtonsoft.Json.Linq.JObject>
struct DynamicProxy_1_t5E4033CA972DA5E68D6030419A259D2D98635B21;
// Newtonsoft.Json.Utilities.DynamicProxy`1<Newtonsoft.Json.Linq.JValue>
struct DynamicProxy_1_t1BABB854FFC43EED36459900606F23D89F1D0B22;
// Newtonsoft.Json.Utilities.DynamicProxy`1<System.Object>
struct DynamicProxy_1_t9A17A184D7B630555FC93939070A729E87DD8949;
// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49;
// System.Func`2<System.Reflection.ConstructorInfo,System.Boolean>
struct Func_2_t6D7DD0FE4DA742E557BDCA2D3A8E6D7638B5673C;
// System.Func`2<System.Reflection.FieldInfo,System.Boolean>
struct Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE;
// System.Func`2<Newtonsoft.Json.Linq.JProperty,System.String>
struct Func_2_tB41EA24BD613F187BD2933B97574D86858806F39;
// System.Func`2<Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonProperty>
struct Func_2_t66F7103B3C9B58D54B445F1873DBABA1BB126E58;
// System.Func`2<Newtonsoft.Json.Serialization.JsonProperty,System.String>
struct Func_2_t0C2AA0F7F4FAE0E2441CC1CCC4E902EBEFA9FD06;
// System.Func`2<Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>
struct Func_2_tEDF7FFDA9C04DD0B5F6F2F7600B3B8BD526D27A8;
// System.Func`2<System.Reflection.MemberInfo,System.String>
struct Func_2_t82BDCCD3F9984E63AFAFFE2E311FD4AA25753329;
// System.Func`2<System.Reflection.MethodInfo,System.Boolean>
struct Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Func`2<System.Object,System.Type>
struct Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF;
// System.Func`2<System.Reflection.ParameterInfo,System.Type>
struct Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF;
// System.Func`2<System.String,System.String>
struct Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JProperty>
struct IEnumerable_1_t38AA7F3A5D66B962949E63E93790C6B937CB092F;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>
struct IEnumerable_1_t7A54AEED0B537A132EE02BA2A10621CDA1900932;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<System.Reflection.ParameterInfo>
struct IEnumerable_1_t7893F3E646CA021CE48865708B04C4CDA68D7388;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_tA2CFC624CD7D291A0E486D1A5FC78BF6425F9428;
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken>
struct IEnumerator_1_t8AEDD013FF9124B1315F51E8F23014339F14BCFB;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Linq.JToken>
struct IList_1_t767D92BF14183E1653D6500CE8FE17518A7A61E3;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>
struct MethodCall_2_tC314E59E92B5F5B706088F6BF3A46D3946819F58;
// Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>
struct ObjectConstructor_1_t7930D8596973688461599EADA76C46746D4A2774;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// Newtonsoft.Json.Linq.JToken[]
struct JTokenU5BU5D_tFCD80C12B530C8AAF0295FAC25A1615983BE0FD6;
// Newtonsoft.Json.Linq.JTokenType[]
struct JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.ComponentModel.AddingNewEventHandler
struct AddingNewEventHandler_tF21F6F9D1D0611177846250B5CF81B55B5F6B785;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Globalization.Calendar
struct Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A;
// System.Globalization.CompareInfo
struct CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B;
// System.Globalization.CultureData
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Newtonsoft.Json.Serialization.ErrorContext
struct ErrorContext_t1151C3AA92A4CDF11654BD6CFC4F4D173CEC44EF;
// System.Exception
struct Exception_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter
struct FieldMultipleFilter_t754130B1A502B7441BA5F1BB191687E4162B31C6;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Newtonsoft.Json.Serialization.IAttributeProvider
struct IAttributeProvider_t76842A5459C964214F3008C8A4F13E13CEF162C9;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// Newtonsoft.Json.Serialization.IValueProvider
struct IValueProvider_tBEFF2E095FDB126CCDAA9019126B65CD3FA00EAC;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527;
// Newtonsoft.Json.Linq.JObject
struct JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8;
// Newtonsoft.Json.Linq.JProperty
struct JProperty_t6B592BFC6895980207CC8356187EB1D0328A328E;
// Newtonsoft.Json.Linq.JPropertyKeyedCollection
struct JPropertyKeyedCollection_t8408B618F7F19300CF323A96090009E71EBEF0D3;
// Newtonsoft.Json.Linq.JToken
struct JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5;
// Newtonsoft.Json.Linq.JTokenEqualityComparer
struct JTokenEqualityComparer_tCAAE5A9033CE9B939D19DDC1A8748BADE19944BF;
// Newtonsoft.Json.Serialization.JsonContract
struct JsonContract_t88E658B782D6361B59D9236A21F4BCD842FE5B76;
// Newtonsoft.Json.JsonConverter
struct JsonConverter_t260CE65C2123A11522CAEFA058859D3E97145B0C;
// Newtonsoft.Json.JsonException
struct JsonException_tD4970C15EFCD45318B603FD05766B927594DBEE5;
// Newtonsoft.Json.Serialization.JsonProperty
struct JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153;
// System.ComponentModel.ListChangedEventHandler
struct ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C;
// System.Runtime.InteropServices.MarshalAsAttribute
struct MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// System.Collections.Specialized.NotifyCollectionChangedEventHandler
struct NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99;
// System.ComponentModel.PropertyChangingEventHandler
struct PropertyChangingEventHandler_t5EA6F6EAA933D35C0AAD9D347A3BD53D343E4C22;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// Newtonsoft.Json.Linq.JsonPath.QueryExpression
struct QueryExpression_t8D8090F4AFDEC9493D2C8ECB42B8BEE65AC701FE;
// Newtonsoft.Json.Linq.JsonPath.QueryFilter
struct QueryFilter_t4FBB8A3F67039895506A0BBBDB54213614FE5EA3;
// Newtonsoft.Json.Linq.JsonPath.QueryScanFilter
struct QueryScanFilter_tC1CDEA5414361B4CE75446B0D53BA2B77287BCF1;
// Newtonsoft.Json.Utilities.ReflectionDelegateFactory
struct ReflectionDelegateFactory_t22E2F13135925F2E24B37244B5747D3A250D7E27;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Newtonsoft.Json.Linq.JsonPath.ScanFilter
struct ScanFilter_tA54485E0456337F3C138D40F71B8E116062B3E3C;
// Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter
struct ScanMultipleFilter_tFC75BE31C1B63D7444192C2044CDD142E8C69BD6;
// System.String
struct String_t;
// System.Globalization.TextInfo
struct TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter/<>c
struct U3CU3Ec_t5D66199D1B00DA9DB968F2DAE6DFA11B81CAC220;
// Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter/<ExecuteFilter>d__2
struct U3CExecuteFilterU3Ed__2_t403E1232303C76A794700DDB836080BA303EDF91;
// Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c
struct U3CU3Ec_t3FD81A3E346F8B5DB91861FB397D9113C7A245AE;
// Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c__DisplayClass24_0
struct U3CU3Ec__DisplayClass24_0_t5C23184FA2B4EAE33C8F00AEC9A4A4E02AEB9A31;
// Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c__DisplayClass25_0
struct U3CU3Ec__DisplayClass25_0_t01B04C18C6D1B506FAA7A18CA629F396A64804C3;
// Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo
struct ImmutableCollectionTypeInfo_tAB8E5C2873442E1F12E93D4CD19CC69E5FBEBAB4;
// Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36
struct U3CGetDescendantsU3Ed__36_t10B0A6A787C36583D3326E547212B76D05CBBF89;
// Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__63
struct U3CGetEnumeratorU3Ed__63_t412E336C65F7FA64E688926F38AEA48E9F5709E0;
// Newtonsoft.Json.Linq.JObject/JObjectDynamicProxy
struct JObjectDynamicProxy_t29543C0963395FEE6D96B245C630031CEB704662;
// Newtonsoft.Json.Linq.JProperty/JPropertyList
struct JPropertyList_t40544FA83585374547FB7FFD7472CB16A930B95B;
// Newtonsoft.Json.Linq.JToken/LineInfoAnnotation
struct LineInfoAnnotation_t53C84C57D1B668B4C979C2BC20DA68E096CAD0B8;
// Newtonsoft.Json.Linq.JValue/JValueDynamicProxy
struct JValueDynamicProxy_tBC8F949989A0829E1E45FC021E4D9779F0E37047;
// Newtonsoft.Json.Serialization.JsonContract/<>c__DisplayClass57_0
struct U3CU3Ec__DisplayClass57_0_t7E19B412A3521B61B4BD96C7021357A13354A983;
// Newtonsoft.Json.Serialization.JsonContract/<>c__DisplayClass58_0
struct U3CU3Ec__DisplayClass58_0_tFBE338617841B8290F8168234A0D28E542C9678D;
// Newtonsoft.Json.Serialization.JsonSerializerInternalBase/ReferenceEqualsEqualityComparer
struct ReferenceEqualsEqualityComparer_tD789E33DF14461C13594DA126C4617B43A7AE7C1;
// Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c
struct U3CU3Ec_tB8728C7EEAE5E87C536027C1B1F3092AC1FC7AE4;
// Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c__DisplayClass38_0
struct U3CU3Ec__DisplayClass38_0_t915D02CF4611DECF574288087148225A01E8858F;
// Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext
struct CreatorPropertyContext_tC1B18FE410FA5FBB198E733C7913623B74EE5082;
// Newtonsoft.Json.Serialization.JsonTypeReflector/<>c
struct U3CU3Ec_t432D27D46D79D966CF0380A55300D9CB205C4280;
// Newtonsoft.Json.Serialization.JsonTypeReflector/<>c__DisplayClass22_0
struct U3CU3Ec__DisplayClass22_0_t7FE4D2598B5E18A275AB1869838AD49DC6B715D6;
// Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tD666091175CFD25BD7677EFDD53D702F7FB4462F;
// Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2
struct U3CExecuteFilterU3Ed__2_t907335DF609CA7FBD618781EFF46DEC81992AE8D;
// Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2
struct U3CExecuteFilterU3Ed__2_t03BD833AD36FDB8FE0ECFB31585FDBD468904E80;
// Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_tE1DA9EFFD3ED2A3ACCDC003763EB1D737863E2F3;
// Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass11_1
struct U3CU3Ec__DisplayClass11_1_t1B3025B8455083F56ADBE94EBEEBB6B319881954;
// Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass11_2
struct U3CU3Ec__DisplayClass11_2_t44A5B1FBAAC9A27E6E16071A0EFFC5B039E90522;
// Newtonsoft.Json.Utilities.ReflectionUtils/<>c
struct U3CU3Ec_tE335300CBEC7EEE18397C46C3EF34C37AAA33A56;
// Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass31_0
struct U3CU3Ec__DisplayClass31_0_t917E27AC7B6B28AB3663E6D5D42528B453E4C301;
// Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass44_0
struct U3CU3Ec__DisplayClass44_0_t1A0F7B02E3FEEF47F379E39A853F0DD506891FF6;
// Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass44_1
struct U3CU3Ec__DisplayClass44_1_t5DB0EDE6C3C5B3168914EF51DE38C39F24A1D940;
// Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass45_0
struct U3CU3Ec__DisplayClass45_0_tA5E18035C93F80F9C615001C77B5E95702A4AB5D;
// Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__2
struct U3CExecuteFilterU3Ed__2_tC2F023DC65A1ED62FB71C74885871250B3D59507;
// Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2
struct U3CExecuteFilterU3Ed__2_t1076E6004461A437C119CCE96763DBE824D16241;
// Newtonsoft.Json.Linq.JObject/JObjectDynamicProxy/<>c
struct U3CU3Ec_t079339D53FDBCBD92F5779F7F22AB10461970CA5;
// Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1
struct U3CGetEnumeratorU3Ed__1_t707CB3D09C2C5F8296E6BCCA37C54250187B0587;

IL2CPP_EXTERN_C RuntimeClass* ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tB41EA24BD613F187BD2933B97574D86858806F39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t7A54AEED0B537A132EE02BA2A10621CDA1900932_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t8AEDD013FF9124B1315F51E8F23014339F14BCFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JProperty_t6B592BFC6895980207CC8356187EB1D0328A328E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonException_tD4970C15EFCD45318B603FD05766B927594DBEE5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonTypeReflector_t84285D25A1552678FA2061401352508764C7D5AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyValuePair_2_t2D21ACE03FBDFCC8BD8D4EFA6275F975E2D03FEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReflectionUtils_tD8B96CE8EA833A80BD7906C67C34C0CD7089CFB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CExecuteFilterU3Ed__2_t03BD833AD36FDB8FE0ECFB31585FDBD468904E80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CExecuteFilterU3Ed__2_t1076E6004461A437C119CCE96763DBE824D16241_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CExecuteFilterU3Ed__2_t403E1232303C76A794700DDB836080BA303EDF91_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CExecuteFilterU3Ed__2_t907335DF609CA7FBD618781EFF46DEC81992AE8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CExecuteFilterU3Ed__2_tC2F023DC65A1ED62FB71C74885871250B3D59507_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetDescendantsU3Ed__36_t10B0A6A787C36583D3326E547212B76D05CBBF89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetEnumeratorU3Ed__1_t707CB3D09C2C5F8296E6BCCA37C54250187B0587_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t079339D53FDBCBD92F5779F7F22AB10461970CA5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t3FD81A3E346F8B5DB91861FB397D9113C7A245AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t432D27D46D79D966CF0380A55300D9CB205C4280_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t5D66199D1B00DA9DB968F2DAE6DFA11B81CAC220_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tB8728C7EEAE5E87C536027C1B1F3092AC1FC7AE4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tE335300CBEC7EEE18397C46C3EF34C37AAA33A56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1071603CBA2BD3C11874C92C7C0DB97BF5899046;
IL2CPP_EXTERN_C String_t* _stringLiteral23B435163284C2F25AE5E84212B0650024F0760B;
IL2CPP_EXTERN_C String_t* _stringLiteral3B58677A7189FC22B99E1EA83A895B69BDF1D257;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral6699410DAF356A90DFDDE06D8F3571412FFE4442;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral92A38C953A6126D97ED1B04B582F3B4519E7D184;
IL2CPP_EXTERN_C String_t* _stringLiteralB969B3171749B465931FAFC79BF975A5CDECBABF;
IL2CPP_EXTERN_C String_t* _stringLiteralD7438454F3EF140B6B22CB3ED354178FA3A495D5;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Collection_1_GetEnumerator_m2AEC56F8C16D493D95D378D8EF829311CE9EE259_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicProxy_1__ctor_m5A251B5BD51182209E71F26BF52ED7D40A46CA94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicProxy_1__ctor_mAA46618323CEDF30460389F84988E73A39D53252_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_mC34A3CF45962BF5A4FDF04D029B51F4B0CFD938F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisJProperty_t6B592BFC6895980207CC8356187EB1D0328A328E_TisString_t_m953DB4668EA59942F4B369B69F3616624C94612E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisRuntimeObject_TisType_t_m9172D480F276E4D46B7848B73E3042F3A9771258_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisString_t_TisString_t_m5E54BE921E960B9AB33FE013CF7ECB8D1CF24A1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisType_t_mDB744C25D97BD49BD70979DC17395D271EA84945_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m22403E6E9EC24A3D8103D29D9D66B5EEEA0AC69E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m4456A690D2B96699A625B738212EB7EFAAE3830C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m84B84849EC5A4CBDFA2EAC12D68E99B17D87EAFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JPropertyList_get_Item_m32218FB8E8036F04E5AF8AD035BEFC37D89320D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JPropertyList_set_Item_mA5DA7011DD8D9B83D21716856B8E7FA2A8BADA06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_mBC9F11B2A7A04FE1701EBEB9EC82C1CCEB077FEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MethodCall_2_Invoke_m9C81ECB8456EB29485C29A0C466D8C358990D126_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectConstructor_1_Invoke_mB7BEBABEB6EA87AB49623F789F93ACBF54BFB003_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CExecuteFilterU3Ed__2_MoveNext_m0D87120EA7F0A11C004A19374061191D3A297F40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CExecuteFilterU3Ed__2_System_Collections_IEnumerator_Reset_m0E858B8117F7CA6785EE79A013BC5EE7126C8DA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CExecuteFilterU3Ed__2_System_Collections_IEnumerator_Reset_m9782DDB4BFAB7805EDFF7EF4E44B74E4ABA7CC56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CExecuteFilterU3Ed__2_System_Collections_IEnumerator_Reset_mD7F0DF5F2B3F78A78FAF5572CBF672745F1EE9FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CExecuteFilterU3Ed__2_System_Collections_IEnumerator_Reset_mDB57252266359667E1F0433A9A1966AECAF8F7DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CExecuteFilterU3Ed__2_System_Collections_IEnumerator_Reset_mDDAC03CE0AFCA5F60ED84FF9F0CE5E71E60C5FB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetDescendantsU3Ed__36_System_Collections_IEnumerator_Reset_m69E48DE7DEC9CD596B089B0DD2CB60DD11C6081E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_Reset_mEA3E383C13EC83D4FC54E793200BFFE1E089191B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__63_System_Collections_IEnumerator_Reset_mC728782A360111913E2ED9DEF8A1EE5F2A905568_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CExecuteFilterU3Eb__2_0_m9FB0ED40AC22676FB8AAB1050D9612D07584AC0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetCreatorU3Eb__22_1_m988EDA027D29AB50AF97011BBDD93BCB0F406C31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetDynamicMemberNamesU3Eb__2_0_mE2FD561E21CCA87E3A8F0210D0CB89E6950699CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass22_0_U3CGetCreatorU3Eb__0_m5B979E0CE9F3D8AB2F80067EE3A199FE5EF5CC78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* IEnumerable_1_t2DA210D3B033E1BEBFC81C153FA1C67749C6D264_0_0_0_var;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct JTokenU5BU5D_tFCD80C12B530C8AAF0295FAC25A1615983BE0FD6;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B;
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.ObjectModel.Collection`1<Newtonsoft.Json.Linq.JToken>
struct Collection_1_t43D925574A6394ADD9A2F69C9BE205B620E3A63D  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.Collection`1::items
	RuntimeObject* ___items_0;
	// System.Object System.Collections.ObjectModel.Collection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_items_0() { return static_cast<int32_t>(offsetof(Collection_1_t43D925574A6394ADD9A2F69C9BE205B620E3A63D, ___items_0)); }
	inline RuntimeObject* get_items_0() const { return ___items_0; }
	inline RuntimeObject** get_address_of_items_0() { return &___items_0; }
	inline void set_items_0(RuntimeObject* value)
	{
		___items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_0), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(Collection_1_t43D925574A6394ADD9A2F69C9BE205B620E3A63D, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_1), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.DynamicProxy`1<Newtonsoft.Json.Linq.JObject>
struct DynamicProxy_1_t5E4033CA972DA5E68D6030419A259D2D98635B21  : public RuntimeObject
{
public:

public:
};


// Newtonsoft.Json.Utilities.DynamicProxy`1<Newtonsoft.Json.Linq.JValue>
struct DynamicProxy_1_t1BABB854FFC43EED36459900606F23D89F1D0B22  : public RuntimeObject
{
public:

public:
};


// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___numInfo_10)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textInfo_12)); }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___native_calendar_names_20)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___compareInfo_21)); }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___calendar_24)); }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_culture_25)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_cultureData_28)); }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// Newtonsoft.Json.Serialization.ErrorContext
struct ErrorContext_t1151C3AA92A4CDF11654BD6CFC4F4D173CEC44EF  : public RuntimeObject
{
public:
	// System.Boolean Newtonsoft.Json.Serialization.ErrorContext::<Traced>k__BackingField
	bool ___U3CTracedU3Ek__BackingField_0;
	// System.Exception Newtonsoft.Json.Serialization.ErrorContext::<Error>k__BackingField
	Exception_t * ___U3CErrorU3Ek__BackingField_1;
	// System.Object Newtonsoft.Json.Serialization.ErrorContext::<OriginalObject>k__BackingField
	RuntimeObject * ___U3COriginalObjectU3Ek__BackingField_2;
	// System.Object Newtonsoft.Json.Serialization.ErrorContext::<Member>k__BackingField
	RuntimeObject * ___U3CMemberU3Ek__BackingField_3;
	// System.String Newtonsoft.Json.Serialization.ErrorContext::<Path>k__BackingField
	String_t* ___U3CPathU3Ek__BackingField_4;
	// System.Boolean Newtonsoft.Json.Serialization.ErrorContext::<Handled>k__BackingField
	bool ___U3CHandledU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CTracedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ErrorContext_t1151C3AA92A4CDF11654BD6CFC4F4D173CEC44EF, ___U3CTracedU3Ek__BackingField_0)); }
	inline bool get_U3CTracedU3Ek__BackingField_0() const { return ___U3CTracedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CTracedU3Ek__BackingField_0() { return &___U3CTracedU3Ek__BackingField_0; }
	inline void set_U3CTracedU3Ek__BackingField_0(bool value)
	{
		___U3CTracedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CErrorU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ErrorContext_t1151C3AA92A4CDF11654BD6CFC4F4D173CEC44EF, ___U3CErrorU3Ek__BackingField_1)); }
	inline Exception_t * get_U3CErrorU3Ek__BackingField_1() const { return ___U3CErrorU3Ek__BackingField_1; }
	inline Exception_t ** get_address_of_U3CErrorU3Ek__BackingField_1() { return &___U3CErrorU3Ek__BackingField_1; }
	inline void set_U3CErrorU3Ek__BackingField_1(Exception_t * value)
	{
		___U3CErrorU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CErrorU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3COriginalObjectU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ErrorContext_t1151C3AA92A4CDF11654BD6CFC4F4D173CEC44EF, ___U3COriginalObjectU3Ek__BackingField_2)); }
	inline RuntimeObject * get_U3COriginalObjectU3Ek__BackingField_2() const { return ___U3COriginalObjectU3Ek__BackingField_2; }
	inline RuntimeObject ** get_address_of_U3COriginalObjectU3Ek__BackingField_2() { return &___U3COriginalObjectU3Ek__BackingField_2; }
	inline void set_U3COriginalObjectU3Ek__BackingField_2(RuntimeObject * value)
	{
		___U3COriginalObjectU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COriginalObjectU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMemberU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ErrorContext_t1151C3AA92A4CDF11654BD6CFC4F4D173CEC44EF, ___U3CMemberU3Ek__BackingField_3)); }
	inline RuntimeObject * get_U3CMemberU3Ek__BackingField_3() const { return ___U3CMemberU3Ek__BackingField_3; }
	inline RuntimeObject ** get_address_of_U3CMemberU3Ek__BackingField_3() { return &___U3CMemberU3Ek__BackingField_3; }
	inline void set_U3CMemberU3Ek__BackingField_3(RuntimeObject * value)
	{
		___U3CMemberU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMemberU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPathU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ErrorContext_t1151C3AA92A4CDF11654BD6CFC4F4D173CEC44EF, ___U3CPathU3Ek__BackingField_4)); }
	inline String_t* get_U3CPathU3Ek__BackingField_4() const { return ___U3CPathU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CPathU3Ek__BackingField_4() { return &___U3CPathU3Ek__BackingField_4; }
	inline void set_U3CPathU3Ek__BackingField_4(String_t* value)
	{
		___U3CPathU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPathU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHandledU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ErrorContext_t1151C3AA92A4CDF11654BD6CFC4F4D173CEC44EF, ___U3CHandledU3Ek__BackingField_5)); }
	inline bool get_U3CHandledU3Ek__BackingField_5() const { return ___U3CHandledU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CHandledU3Ek__BackingField_5() { return &___U3CHandledU3Ek__BackingField_5; }
	inline void set_U3CHandledU3Ek__BackingField_5(bool value)
	{
		___U3CHandledU3Ek__BackingField_5 = value;
	}
};


// Newtonsoft.Json.Linq.JToken
struct JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Linq.JContainer Newtonsoft.Json.Linq.JToken::_parent
	JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527 * ____parent_1;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_previous
	JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * ____previous_2;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_next
	JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * ____next_3;
	// System.Object Newtonsoft.Json.Linq.JToken::_annotations
	RuntimeObject * ____annotations_4;

public:
	inline static int32_t get_offset_of__parent_1() { return static_cast<int32_t>(offsetof(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5, ____parent_1)); }
	inline JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527 * get__parent_1() const { return ____parent_1; }
	inline JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527 ** get_address_of__parent_1() { return &____parent_1; }
	inline void set__parent_1(JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527 * value)
	{
		____parent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parent_1), (void*)value);
	}

	inline static int32_t get_offset_of__previous_2() { return static_cast<int32_t>(offsetof(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5, ____previous_2)); }
	inline JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * get__previous_2() const { return ____previous_2; }
	inline JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 ** get_address_of__previous_2() { return &____previous_2; }
	inline void set__previous_2(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * value)
	{
		____previous_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____previous_2), (void*)value);
	}

	inline static int32_t get_offset_of__next_3() { return static_cast<int32_t>(offsetof(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5, ____next_3)); }
	inline JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * get__next_3() const { return ____next_3; }
	inline JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 ** get_address_of__next_3() { return &____next_3; }
	inline void set__next_3(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * value)
	{
		____next_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____next_3), (void*)value);
	}

	inline static int32_t get_offset_of__annotations_4() { return static_cast<int32_t>(offsetof(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5, ____annotations_4)); }
	inline RuntimeObject * get__annotations_4() const { return ____annotations_4; }
	inline RuntimeObject ** get_address_of__annotations_4() { return &____annotations_4; }
	inline void set__annotations_4(RuntimeObject * value)
	{
		____annotations_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____annotations_4), (void*)value);
	}
};

struct JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5_StaticFields
{
public:
	// Newtonsoft.Json.Linq.JTokenEqualityComparer Newtonsoft.Json.Linq.JToken::_equalityComparer
	JTokenEqualityComparer_tCAAE5A9033CE9B939D19DDC1A8748BADE19944BF * ____equalityComparer_0;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BooleanTypes
	JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* ___BooleanTypes_5;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::NumberTypes
	JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* ___NumberTypes_6;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BigIntegerTypes
	JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* ___BigIntegerTypes_7;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::StringTypes
	JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* ___StringTypes_8;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::GuidTypes
	JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* ___GuidTypes_9;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::TimeSpanTypes
	JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* ___TimeSpanTypes_10;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::UriTypes
	JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* ___UriTypes_11;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::CharTypes
	JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* ___CharTypes_12;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::DateTimeTypes
	JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* ___DateTimeTypes_13;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BytesTypes
	JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* ___BytesTypes_14;

public:
	inline static int32_t get_offset_of__equalityComparer_0() { return static_cast<int32_t>(offsetof(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5_StaticFields, ____equalityComparer_0)); }
	inline JTokenEqualityComparer_tCAAE5A9033CE9B939D19DDC1A8748BADE19944BF * get__equalityComparer_0() const { return ____equalityComparer_0; }
	inline JTokenEqualityComparer_tCAAE5A9033CE9B939D19DDC1A8748BADE19944BF ** get_address_of__equalityComparer_0() { return &____equalityComparer_0; }
	inline void set__equalityComparer_0(JTokenEqualityComparer_tCAAE5A9033CE9B939D19DDC1A8748BADE19944BF * value)
	{
		____equalityComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____equalityComparer_0), (void*)value);
	}

	inline static int32_t get_offset_of_BooleanTypes_5() { return static_cast<int32_t>(offsetof(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5_StaticFields, ___BooleanTypes_5)); }
	inline JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* get_BooleanTypes_5() const { return ___BooleanTypes_5; }
	inline JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0** get_address_of_BooleanTypes_5() { return &___BooleanTypes_5; }
	inline void set_BooleanTypes_5(JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* value)
	{
		___BooleanTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BooleanTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_NumberTypes_6() { return static_cast<int32_t>(offsetof(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5_StaticFields, ___NumberTypes_6)); }
	inline JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* get_NumberTypes_6() const { return ___NumberTypes_6; }
	inline JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0** get_address_of_NumberTypes_6() { return &___NumberTypes_6; }
	inline void set_NumberTypes_6(JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* value)
	{
		___NumberTypes_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NumberTypes_6), (void*)value);
	}

	inline static int32_t get_offset_of_BigIntegerTypes_7() { return static_cast<int32_t>(offsetof(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5_StaticFields, ___BigIntegerTypes_7)); }
	inline JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* get_BigIntegerTypes_7() const { return ___BigIntegerTypes_7; }
	inline JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0** get_address_of_BigIntegerTypes_7() { return &___BigIntegerTypes_7; }
	inline void set_BigIntegerTypes_7(JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* value)
	{
		___BigIntegerTypes_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BigIntegerTypes_7), (void*)value);
	}

	inline static int32_t get_offset_of_StringTypes_8() { return static_cast<int32_t>(offsetof(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5_StaticFields, ___StringTypes_8)); }
	inline JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* get_StringTypes_8() const { return ___StringTypes_8; }
	inline JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0** get_address_of_StringTypes_8() { return &___StringTypes_8; }
	inline void set_StringTypes_8(JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* value)
	{
		___StringTypes_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StringTypes_8), (void*)value);
	}

	inline static int32_t get_offset_of_GuidTypes_9() { return static_cast<int32_t>(offsetof(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5_StaticFields, ___GuidTypes_9)); }
	inline JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* get_GuidTypes_9() const { return ___GuidTypes_9; }
	inline JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0** get_address_of_GuidTypes_9() { return &___GuidTypes_9; }
	inline void set_GuidTypes_9(JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* value)
	{
		___GuidTypes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GuidTypes_9), (void*)value);
	}

	inline static int32_t get_offset_of_TimeSpanTypes_10() { return static_cast<int32_t>(offsetof(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5_StaticFields, ___TimeSpanTypes_10)); }
	inline JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* get_TimeSpanTypes_10() const { return ___TimeSpanTypes_10; }
	inline JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0** get_address_of_TimeSpanTypes_10() { return &___TimeSpanTypes_10; }
	inline void set_TimeSpanTypes_10(JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* value)
	{
		___TimeSpanTypes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TimeSpanTypes_10), (void*)value);
	}

	inline static int32_t get_offset_of_UriTypes_11() { return static_cast<int32_t>(offsetof(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5_StaticFields, ___UriTypes_11)); }
	inline JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* get_UriTypes_11() const { return ___UriTypes_11; }
	inline JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0** get_address_of_UriTypes_11() { return &___UriTypes_11; }
	inline void set_UriTypes_11(JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* value)
	{
		___UriTypes_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriTypes_11), (void*)value);
	}

	inline static int32_t get_offset_of_CharTypes_12() { return static_cast<int32_t>(offsetof(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5_StaticFields, ___CharTypes_12)); }
	inline JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* get_CharTypes_12() const { return ___CharTypes_12; }
	inline JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0** get_address_of_CharTypes_12() { return &___CharTypes_12; }
	inline void set_CharTypes_12(JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* value)
	{
		___CharTypes_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CharTypes_12), (void*)value);
	}

	inline static int32_t get_offset_of_DateTimeTypes_13() { return static_cast<int32_t>(offsetof(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5_StaticFields, ___DateTimeTypes_13)); }
	inline JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* get_DateTimeTypes_13() const { return ___DateTimeTypes_13; }
	inline JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0** get_address_of_DateTimeTypes_13() { return &___DateTimeTypes_13; }
	inline void set_DateTimeTypes_13(JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* value)
	{
		___DateTimeTypes_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DateTimeTypes_13), (void*)value);
	}

	inline static int32_t get_offset_of_BytesTypes_14() { return static_cast<int32_t>(offsetof(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5_StaticFields, ___BytesTypes_14)); }
	inline JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* get_BytesTypes_14() const { return ___BytesTypes_14; }
	inline JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0** get_address_of_BytesTypes_14() { return &___BytesTypes_14; }
	inline void set_BytesTypes_14(JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0* value)
	{
		___BytesTypes_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BytesTypes_14), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// Newtonsoft.Json.Linq.JsonPath.PathFilter
struct PathFilter_t0D185940B506CC37399A67EED25738F24A94846D  : public RuntimeObject
{
public:

public:
};


// Newtonsoft.Json.Utilities.ReflectionDelegateFactory
struct ReflectionDelegateFactory_t22E2F13135925F2E24B37244B5747D3A250D7E27  : public RuntimeObject
{
public:

public:
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

// Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter/<>c
struct U3CU3Ec_t5D66199D1B00DA9DB968F2DAE6DFA11B81CAC220  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t5D66199D1B00DA9DB968F2DAE6DFA11B81CAC220_StaticFields
{
public:
	// Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter/<>c Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter/<>c::<>9
	U3CU3Ec_t5D66199D1B00DA9DB968F2DAE6DFA11B81CAC220 * ___U3CU3E9_0;
	// System.Func`2<System.String,System.String> Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter/<>c::<>9__2_0
	Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * ___U3CU3E9__2_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5D66199D1B00DA9DB968F2DAE6DFA11B81CAC220_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t5D66199D1B00DA9DB968F2DAE6DFA11B81CAC220 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t5D66199D1B00DA9DB968F2DAE6DFA11B81CAC220 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t5D66199D1B00DA9DB968F2DAE6DFA11B81CAC220 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t5D66199D1B00DA9DB968F2DAE6DFA11B81CAC220_StaticFields, ___U3CU3E9__2_0_1)); }
	inline Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * get_U3CU3E9__2_0_1() const { return ___U3CU3E9__2_0_1; }
	inline Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A ** get_address_of_U3CU3E9__2_0_1() { return &___U3CU3E9__2_0_1; }
	inline void set_U3CU3E9__2_0_1(Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * value)
	{
		___U3CU3E9__2_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_0_1), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c
struct U3CU3Ec_t3FD81A3E346F8B5DB91861FB397D9113C7A245AE  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t3FD81A3E346F8B5DB91861FB397D9113C7A245AE_StaticFields
{
public:
	// Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c::<>9
	U3CU3Ec_t3FD81A3E346F8B5DB91861FB397D9113C7A245AE * ___U3CU3E9_0;
	// System.Func`2<System.Reflection.MethodInfo,System.Boolean> Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c::<>9__24_1
	Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D * ___U3CU3E9__24_1_1;
	// System.Func`2<System.Reflection.MethodInfo,System.Boolean> Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c::<>9__25_1
	Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D * ___U3CU3E9__25_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3FD81A3E346F8B5DB91861FB397D9113C7A245AE_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t3FD81A3E346F8B5DB91861FB397D9113C7A245AE * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t3FD81A3E346F8B5DB91861FB397D9113C7A245AE ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t3FD81A3E346F8B5DB91861FB397D9113C7A245AE * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3FD81A3E346F8B5DB91861FB397D9113C7A245AE_StaticFields, ___U3CU3E9__24_1_1)); }
	inline Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D * get_U3CU3E9__24_1_1() const { return ___U3CU3E9__24_1_1; }
	inline Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D ** get_address_of_U3CU3E9__24_1_1() { return &___U3CU3E9__24_1_1; }
	inline void set_U3CU3E9__24_1_1(Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D * value)
	{
		___U3CU3E9__24_1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_1_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3FD81A3E346F8B5DB91861FB397D9113C7A245AE_StaticFields, ___U3CU3E9__25_1_2)); }
	inline Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D * get_U3CU3E9__25_1_2() const { return ___U3CU3E9__25_1_2; }
	inline Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D ** get_address_of_U3CU3E9__25_1_2() { return &___U3CU3E9__25_1_2; }
	inline void set_U3CU3E9__25_1_2(Func_2_t736D5CB9E1D48C8363AF140355202C24D6CAE85D * value)
	{
		___U3CU3E9__25_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_1_2), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c__DisplayClass24_0
struct U3CU3Ec__DisplayClass24_0_t5C23184FA2B4EAE33C8F00AEC9A4A4E02AEB9A31  : public RuntimeObject
{
public:
	// System.String Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c__DisplayClass24_0::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass24_0_t5C23184FA2B4EAE33C8F00AEC9A4A4E02AEB9A31, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c__DisplayClass25_0
struct U3CU3Ec__DisplayClass25_0_t01B04C18C6D1B506FAA7A18CA629F396A64804C3  : public RuntimeObject
{
public:
	// System.String Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c__DisplayClass25_0::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass25_0_t01B04C18C6D1B506FAA7A18CA629F396A64804C3, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo
struct ImmutableCollectionTypeInfo_tAB8E5C2873442E1F12E93D4CD19CC69E5FBEBAB4  : public RuntimeObject
{
public:
	// System.String Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo::<ContractTypeName>k__BackingField
	String_t* ___U3CContractTypeNameU3Ek__BackingField_0;
	// System.String Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo::<CreatedTypeName>k__BackingField
	String_t* ___U3CCreatedTypeNameU3Ek__BackingField_1;
	// System.String Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo::<BuilderTypeName>k__BackingField
	String_t* ___U3CBuilderTypeNameU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CContractTypeNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ImmutableCollectionTypeInfo_tAB8E5C2873442E1F12E93D4CD19CC69E5FBEBAB4, ___U3CContractTypeNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CContractTypeNameU3Ek__BackingField_0() const { return ___U3CContractTypeNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CContractTypeNameU3Ek__BackingField_0() { return &___U3CContractTypeNameU3Ek__BackingField_0; }
	inline void set_U3CContractTypeNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CContractTypeNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CContractTypeNameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCreatedTypeNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ImmutableCollectionTypeInfo_tAB8E5C2873442E1F12E93D4CD19CC69E5FBEBAB4, ___U3CCreatedTypeNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CCreatedTypeNameU3Ek__BackingField_1() const { return ___U3CCreatedTypeNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CCreatedTypeNameU3Ek__BackingField_1() { return &___U3CCreatedTypeNameU3Ek__BackingField_1; }
	inline void set_U3CCreatedTypeNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CCreatedTypeNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCreatedTypeNameU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CBuilderTypeNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ImmutableCollectionTypeInfo_tAB8E5C2873442E1F12E93D4CD19CC69E5FBEBAB4, ___U3CBuilderTypeNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CBuilderTypeNameU3Ek__BackingField_2() const { return ___U3CBuilderTypeNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CBuilderTypeNameU3Ek__BackingField_2() { return &___U3CBuilderTypeNameU3Ek__BackingField_2; }
	inline void set_U3CBuilderTypeNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CBuilderTypeNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CBuilderTypeNameU3Ek__BackingField_2), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36
struct U3CGetDescendantsU3Ed__36_t10B0A6A787C36583D3326E547212B76D05CBBF89  : public RuntimeObject
{
public:
	// System.Int32 Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::<>2__current
	JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * ___U3CU3E2__current_1;
	// System.Int32 Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Boolean Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::self
	bool ___self_3;
	// System.Boolean Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::<>3__self
	bool ___U3CU3E3__self_4;
	// Newtonsoft.Json.Linq.JContainer Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::<>4__this
	JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527 * ___U3CU3E4__this_5;
	// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_6;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::<o>5__3
	JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * ___U3CoU3E5__3_7;
	// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::<>7__wrap3
	RuntimeObject* ___U3CU3E7__wrap3_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetDescendantsU3Ed__36_t10B0A6A787C36583D3326E547212B76D05CBBF89, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetDescendantsU3Ed__36_t10B0A6A787C36583D3326E547212B76D05CBBF89, ___U3CU3E2__current_1)); }
	inline JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CGetDescendantsU3Ed__36_t10B0A6A787C36583D3326E547212B76D05CBBF89, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_self_3() { return static_cast<int32_t>(offsetof(U3CGetDescendantsU3Ed__36_t10B0A6A787C36583D3326E547212B76D05CBBF89, ___self_3)); }
	inline bool get_self_3() const { return ___self_3; }
	inline bool* get_address_of_self_3() { return &___self_3; }
	inline void set_self_3(bool value)
	{
		___self_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3E3__self_4() { return static_cast<int32_t>(offsetof(U3CGetDescendantsU3Ed__36_t10B0A6A787C36583D3326E547212B76D05CBBF89, ___U3CU3E3__self_4)); }
	inline bool get_U3CU3E3__self_4() const { return ___U3CU3E3__self_4; }
	inline bool* get_address_of_U3CU3E3__self_4() { return &___U3CU3E3__self_4; }
	inline void set_U3CU3E3__self_4(bool value)
	{
		___U3CU3E3__self_4 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CGetDescendantsU3Ed__36_t10B0A6A787C36583D3326E547212B76D05CBBF89, ___U3CU3E4__this_5)); }
	inline JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527 * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527 ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527 * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_6() { return static_cast<int32_t>(offsetof(U3CGetDescendantsU3Ed__36_t10B0A6A787C36583D3326E547212B76D05CBBF89, ___U3CU3E7__wrap1_6)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_6() const { return ___U3CU3E7__wrap1_6; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_6() { return &___U3CU3E7__wrap1_6; }
	inline void set_U3CU3E7__wrap1_6(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CoU3E5__3_7() { return static_cast<int32_t>(offsetof(U3CGetDescendantsU3Ed__36_t10B0A6A787C36583D3326E547212B76D05CBBF89, ___U3CoU3E5__3_7)); }
	inline JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * get_U3CoU3E5__3_7() const { return ___U3CoU3E5__3_7; }
	inline JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 ** get_address_of_U3CoU3E5__3_7() { return &___U3CoU3E5__3_7; }
	inline void set_U3CoU3E5__3_7(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * value)
	{
		___U3CoU3E5__3_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CoU3E5__3_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap3_8() { return static_cast<int32_t>(offsetof(U3CGetDescendantsU3Ed__36_t10B0A6A787C36583D3326E547212B76D05CBBF89, ___U3CU3E7__wrap3_8)); }
	inline RuntimeObject* get_U3CU3E7__wrap3_8() const { return ___U3CU3E7__wrap3_8; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap3_8() { return &___U3CU3E7__wrap3_8; }
	inline void set_U3CU3E7__wrap3_8(RuntimeObject* value)
	{
		___U3CU3E7__wrap3_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap3_8), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JProperty/JPropertyList
struct JPropertyList_t40544FA83585374547FB7FFD7472CB16A930B95B  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JProperty/JPropertyList::_token
	JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * ____token_0;

public:
	inline static int32_t get_offset_of__token_0() { return static_cast<int32_t>(offsetof(JPropertyList_t40544FA83585374547FB7FFD7472CB16A930B95B, ____token_0)); }
	inline JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * get__token_0() const { return ____token_0; }
	inline JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 ** get_address_of__token_0() { return &____token_0; }
	inline void set__token_0(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * value)
	{
		____token_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____token_0), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JToken/LineInfoAnnotation
struct LineInfoAnnotation_t53C84C57D1B668B4C979C2BC20DA68E096CAD0B8  : public RuntimeObject
{
public:
	// System.Int32 Newtonsoft.Json.Linq.JToken/LineInfoAnnotation::LineNumber
	int32_t ___LineNumber_0;
	// System.Int32 Newtonsoft.Json.Linq.JToken/LineInfoAnnotation::LinePosition
	int32_t ___LinePosition_1;

public:
	inline static int32_t get_offset_of_LineNumber_0() { return static_cast<int32_t>(offsetof(LineInfoAnnotation_t53C84C57D1B668B4C979C2BC20DA68E096CAD0B8, ___LineNumber_0)); }
	inline int32_t get_LineNumber_0() const { return ___LineNumber_0; }
	inline int32_t* get_address_of_LineNumber_0() { return &___LineNumber_0; }
	inline void set_LineNumber_0(int32_t value)
	{
		___LineNumber_0 = value;
	}

	inline static int32_t get_offset_of_LinePosition_1() { return static_cast<int32_t>(offsetof(LineInfoAnnotation_t53C84C57D1B668B4C979C2BC20DA68E096CAD0B8, ___LinePosition_1)); }
	inline int32_t get_LinePosition_1() const { return ___LinePosition_1; }
	inline int32_t* get_address_of_LinePosition_1() { return &___LinePosition_1; }
	inline void set_LinePosition_1(int32_t value)
	{
		___LinePosition_1 = value;
	}
};


// Newtonsoft.Json.Serialization.JsonContract/<>c__DisplayClass57_0
struct U3CU3Ec__DisplayClass57_0_t7E19B412A3521B61B4BD96C7021357A13354A983  : public RuntimeObject
{
public:
	// System.Reflection.MethodInfo Newtonsoft.Json.Serialization.JsonContract/<>c__DisplayClass57_0::callbackMethodInfo
	MethodInfo_t * ___callbackMethodInfo_0;

public:
	inline static int32_t get_offset_of_callbackMethodInfo_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass57_0_t7E19B412A3521B61B4BD96C7021357A13354A983, ___callbackMethodInfo_0)); }
	inline MethodInfo_t * get_callbackMethodInfo_0() const { return ___callbackMethodInfo_0; }
	inline MethodInfo_t ** get_address_of_callbackMethodInfo_0() { return &___callbackMethodInfo_0; }
	inline void set_callbackMethodInfo_0(MethodInfo_t * value)
	{
		___callbackMethodInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callbackMethodInfo_0), (void*)value);
	}
};


// Newtonsoft.Json.Serialization.JsonContract/<>c__DisplayClass58_0
struct U3CU3Ec__DisplayClass58_0_tFBE338617841B8290F8168234A0D28E542C9678D  : public RuntimeObject
{
public:
	// System.Reflection.MethodInfo Newtonsoft.Json.Serialization.JsonContract/<>c__DisplayClass58_0::callbackMethodInfo
	MethodInfo_t * ___callbackMethodInfo_0;

public:
	inline static int32_t get_offset_of_callbackMethodInfo_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass58_0_tFBE338617841B8290F8168234A0D28E542C9678D, ___callbackMethodInfo_0)); }
	inline MethodInfo_t * get_callbackMethodInfo_0() const { return ___callbackMethodInfo_0; }
	inline MethodInfo_t ** get_address_of_callbackMethodInfo_0() { return &___callbackMethodInfo_0; }
	inline void set_callbackMethodInfo_0(MethodInfo_t * value)
	{
		___callbackMethodInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callbackMethodInfo_0), (void*)value);
	}
};


// Newtonsoft.Json.Serialization.JsonSerializerInternalBase/ReferenceEqualsEqualityComparer
struct ReferenceEqualsEqualityComparer_tD789E33DF14461C13594DA126C4617B43A7AE7C1  : public RuntimeObject
{
public:

public:
};


// Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c
struct U3CU3Ec_tB8728C7EEAE5E87C536027C1B1F3092AC1FC7AE4  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tB8728C7EEAE5E87C536027C1B1F3092AC1FC7AE4_StaticFields
{
public:
	// Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c::<>9
	U3CU3Ec_tB8728C7EEAE5E87C536027C1B1F3092AC1FC7AE4 * ___U3CU3E9_0;
	// System.Func`2<Newtonsoft.Json.Serialization.JsonProperty,System.String> Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c::<>9__38_0
	Func_2_t0C2AA0F7F4FAE0E2441CC1CCC4E902EBEFA9FD06 * ___U3CU3E9__38_0_1;
	// System.Func`2<Newtonsoft.Json.Serialization.JsonProperty,System.String> Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c::<>9__38_2
	Func_2_t0C2AA0F7F4FAE0E2441CC1CCC4E902EBEFA9FD06 * ___U3CU3E9__38_2_2;
	// System.Func`2<Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonProperty> Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c::<>9__42_0
	Func_2_t66F7103B3C9B58D54B445F1873DBABA1BB126E58 * ___U3CU3E9__42_0_3;
	// System.Func`2<Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence> Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c::<>9__42_1
	Func_2_tEDF7FFDA9C04DD0B5F6F2F7600B3B8BD526D27A8 * ___U3CU3E9__42_1_4;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB8728C7EEAE5E87C536027C1B1F3092AC1FC7AE4_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tB8728C7EEAE5E87C536027C1B1F3092AC1FC7AE4 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tB8728C7EEAE5E87C536027C1B1F3092AC1FC7AE4 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tB8728C7EEAE5E87C536027C1B1F3092AC1FC7AE4 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__38_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB8728C7EEAE5E87C536027C1B1F3092AC1FC7AE4_StaticFields, ___U3CU3E9__38_0_1)); }
	inline Func_2_t0C2AA0F7F4FAE0E2441CC1CCC4E902EBEFA9FD06 * get_U3CU3E9__38_0_1() const { return ___U3CU3E9__38_0_1; }
	inline Func_2_t0C2AA0F7F4FAE0E2441CC1CCC4E902EBEFA9FD06 ** get_address_of_U3CU3E9__38_0_1() { return &___U3CU3E9__38_0_1; }
	inline void set_U3CU3E9__38_0_1(Func_2_t0C2AA0F7F4FAE0E2441CC1CCC4E902EBEFA9FD06 * value)
	{
		___U3CU3E9__38_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__38_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__38_2_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB8728C7EEAE5E87C536027C1B1F3092AC1FC7AE4_StaticFields, ___U3CU3E9__38_2_2)); }
	inline Func_2_t0C2AA0F7F4FAE0E2441CC1CCC4E902EBEFA9FD06 * get_U3CU3E9__38_2_2() const { return ___U3CU3E9__38_2_2; }
	inline Func_2_t0C2AA0F7F4FAE0E2441CC1CCC4E902EBEFA9FD06 ** get_address_of_U3CU3E9__38_2_2() { return &___U3CU3E9__38_2_2; }
	inline void set_U3CU3E9__38_2_2(Func_2_t0C2AA0F7F4FAE0E2441CC1CCC4E902EBEFA9FD06 * value)
	{
		___U3CU3E9__38_2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__38_2_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__42_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB8728C7EEAE5E87C536027C1B1F3092AC1FC7AE4_StaticFields, ___U3CU3E9__42_0_3)); }
	inline Func_2_t66F7103B3C9B58D54B445F1873DBABA1BB126E58 * get_U3CU3E9__42_0_3() const { return ___U3CU3E9__42_0_3; }
	inline Func_2_t66F7103B3C9B58D54B445F1873DBABA1BB126E58 ** get_address_of_U3CU3E9__42_0_3() { return &___U3CU3E9__42_0_3; }
	inline void set_U3CU3E9__42_0_3(Func_2_t66F7103B3C9B58D54B445F1873DBABA1BB126E58 * value)
	{
		___U3CU3E9__42_0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__42_0_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__42_1_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB8728C7EEAE5E87C536027C1B1F3092AC1FC7AE4_StaticFields, ___U3CU3E9__42_1_4)); }
	inline Func_2_tEDF7FFDA9C04DD0B5F6F2F7600B3B8BD526D27A8 * get_U3CU3E9__42_1_4() const { return ___U3CU3E9__42_1_4; }
	inline Func_2_tEDF7FFDA9C04DD0B5F6F2F7600B3B8BD526D27A8 ** get_address_of_U3CU3E9__42_1_4() { return &___U3CU3E9__42_1_4; }
	inline void set_U3CU3E9__42_1_4(Func_2_tEDF7FFDA9C04DD0B5F6F2F7600B3B8BD526D27A8 * value)
	{
		___U3CU3E9__42_1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__42_1_4), (void*)value);
	}
};


// Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c__DisplayClass38_0
struct U3CU3Ec__DisplayClass38_0_t915D02CF4611DECF574288087148225A01E8858F  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Serialization.JsonProperty Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c__DisplayClass38_0::property
	JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153 * ___property_0;

public:
	inline static int32_t get_offset_of_property_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass38_0_t915D02CF4611DECF574288087148225A01E8858F, ___property_0)); }
	inline JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153 * get_property_0() const { return ___property_0; }
	inline JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153 ** get_address_of_property_0() { return &___property_0; }
	inline void set_property_0(JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153 * value)
	{
		___property_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___property_0), (void*)value);
	}
};


// Newtonsoft.Json.Serialization.JsonTypeReflector/<>c
struct U3CU3Ec_t432D27D46D79D966CF0380A55300D9CB205C4280  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t432D27D46D79D966CF0380A55300D9CB205C4280_StaticFields
{
public:
	// Newtonsoft.Json.Serialization.JsonTypeReflector/<>c Newtonsoft.Json.Serialization.JsonTypeReflector/<>c::<>9
	U3CU3Ec_t432D27D46D79D966CF0380A55300D9CB205C4280 * ___U3CU3E9_0;
	// System.Func`2<System.Object,System.Type> Newtonsoft.Json.Serialization.JsonTypeReflector/<>c::<>9__22_1
	Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF * ___U3CU3E9__22_1_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t432D27D46D79D966CF0380A55300D9CB205C4280_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t432D27D46D79D966CF0380A55300D9CB205C4280 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t432D27D46D79D966CF0380A55300D9CB205C4280 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t432D27D46D79D966CF0380A55300D9CB205C4280 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__22_1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t432D27D46D79D966CF0380A55300D9CB205C4280_StaticFields, ___U3CU3E9__22_1_1)); }
	inline Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF * get_U3CU3E9__22_1_1() const { return ___U3CU3E9__22_1_1; }
	inline Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF ** get_address_of_U3CU3E9__22_1_1() { return &___U3CU3E9__22_1_1; }
	inline void set_U3CU3E9__22_1_1(Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF * value)
	{
		___U3CU3E9__22_1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__22_1_1), (void*)value);
	}
};


// Newtonsoft.Json.Serialization.JsonTypeReflector/<>c__DisplayClass22_0
struct U3CU3Ec__DisplayClass22_0_t7FE4D2598B5E18A275AB1869838AD49DC6B715D6  : public RuntimeObject
{
public:
	// System.Type Newtonsoft.Json.Serialization.JsonTypeReflector/<>c__DisplayClass22_0::type
	Type_t * ___type_0;
	// System.Func`1<System.Object> Newtonsoft.Json.Serialization.JsonTypeReflector/<>c__DisplayClass22_0::defaultConstructor
	Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * ___defaultConstructor_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_t7FE4D2598B5E18A275AB1869838AD49DC6B715D6, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_0), (void*)value);
	}

	inline static int32_t get_offset_of_defaultConstructor_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass22_0_t7FE4D2598B5E18A275AB1869838AD49DC6B715D6, ___defaultConstructor_1)); }
	inline Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * get_defaultConstructor_1() const { return ___defaultConstructor_1; }
	inline Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 ** get_address_of_defaultConstructor_1() { return &___defaultConstructor_1; }
	inline void set_defaultConstructor_1(Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * value)
	{
		___defaultConstructor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultConstructor_1), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tD666091175CFD25BD7677EFDD53D702F7FB4462F  : public RuntimeObject
{
public:
	// System.Reflection.ConstructorInfo Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass3_0::c
	ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * ___c_0;
	// System.Reflection.MethodBase Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass3_0::method
	MethodBase_t * ___method_1;

public:
	inline static int32_t get_offset_of_c_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_tD666091175CFD25BD7677EFDD53D702F7FB4462F, ___c_0)); }
	inline ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * get_c_0() const { return ___c_0; }
	inline ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B ** get_address_of_c_0() { return &___c_0; }
	inline void set_c_0(ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * value)
	{
		___c_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_0), (void*)value);
	}

	inline static int32_t get_offset_of_method_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_tD666091175CFD25BD7677EFDD53D702F7FB4462F, ___method_1)); }
	inline MethodBase_t * get_method_1() const { return ___method_1; }
	inline MethodBase_t ** get_address_of_method_1() { return &___method_1; }
	inline void set_method_1(MethodBase_t * value)
	{
		___method_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_1), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2
struct U3CExecuteFilterU3Ed__2_t907335DF609CA7FBD618781EFF46DEC81992AE8D  : public RuntimeObject
{
public:
	// System.Int32 Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2::<>2__current
	JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * ___U3CU3E2__current_1;
	// System.Int32 Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2::current
	RuntimeObject* ___current_3;
	// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2::<>3__current
	RuntimeObject* ___U3CU3E3__current_4;
	// Newtonsoft.Json.Linq.JsonPath.QueryFilter Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2::<>4__this
	QueryFilter_t4FBB8A3F67039895506A0BBBDB54213614FE5EA3 * ___U3CU3E4__this_5;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2::root
	JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * ___root_6;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2::<>3__root
	JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * ___U3CU3E3__root_7;
	// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_8;
	// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2::<>7__wrap2
	RuntimeObject* ___U3CU3E7__wrap2_9;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t907335DF609CA7FBD618781EFF46DEC81992AE8D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t907335DF609CA7FBD618781EFF46DEC81992AE8D, ___U3CU3E2__current_1)); }
	inline JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t907335DF609CA7FBD618781EFF46DEC81992AE8D, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t907335DF609CA7FBD618781EFF46DEC81992AE8D, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__current_4() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t907335DF609CA7FBD618781EFF46DEC81992AE8D, ___U3CU3E3__current_4)); }
	inline RuntimeObject* get_U3CU3E3__current_4() const { return ___U3CU3E3__current_4; }
	inline RuntimeObject** get_address_of_U3CU3E3__current_4() { return &___U3CU3E3__current_4; }
	inline void set_U3CU3E3__current_4(RuntimeObject* value)
	{
		___U3CU3E3__current_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__current_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t907335DF609CA7FBD618781EFF46DEC81992AE8D, ___U3CU3E4__this_5)); }
	inline QueryFilter_t4FBB8A3F67039895506A0BBBDB54213614FE5EA3 * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline QueryFilter_t4FBB8A3F67039895506A0BBBDB54213614FE5EA3 ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(QueryFilter_t4FBB8A3F67039895506A0BBBDB54213614FE5EA3 * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}

	inline static int32_t get_offset_of_root_6() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t907335DF609CA7FBD618781EFF46DEC81992AE8D, ___root_6)); }
	inline JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * get_root_6() const { return ___root_6; }
	inline JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 ** get_address_of_root_6() { return &___root_6; }
	inline void set_root_6(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * value)
	{
		___root_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___root_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__root_7() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t907335DF609CA7FBD618781EFF46DEC81992AE8D, ___U3CU3E3__root_7)); }
	inline JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * get_U3CU3E3__root_7() const { return ___U3CU3E3__root_7; }
	inline JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 ** get_address_of_U3CU3E3__root_7() { return &___U3CU3E3__root_7; }
	inline void set_U3CU3E3__root_7(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * value)
	{
		___U3CU3E3__root_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__root_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_8() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t907335DF609CA7FBD618781EFF46DEC81992AE8D, ___U3CU3E7__wrap1_8)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_8() const { return ___U3CU3E7__wrap1_8; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_8() { return &___U3CU3E7__wrap1_8; }
	inline void set_U3CU3E7__wrap1_8(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_9() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t907335DF609CA7FBD618781EFF46DEC81992AE8D, ___U3CU3E7__wrap2_9)); }
	inline RuntimeObject* get_U3CU3E7__wrap2_9() const { return ___U3CU3E7__wrap2_9; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap2_9() { return &___U3CU3E7__wrap2_9; }
	inline void set_U3CU3E7__wrap2_9(RuntimeObject* value)
	{
		___U3CU3E7__wrap2_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap2_9), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2
struct U3CExecuteFilterU3Ed__2_t03BD833AD36FDB8FE0ECFB31585FDBD468904E80  : public RuntimeObject
{
public:
	// System.Int32 Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2::<>2__current
	JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * ___U3CU3E2__current_1;
	// System.Int32 Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2::current
	RuntimeObject* ___current_3;
	// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2::<>3__current
	RuntimeObject* ___U3CU3E3__current_4;
	// Newtonsoft.Json.Linq.JsonPath.QueryScanFilter Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2::<>4__this
	QueryScanFilter_tC1CDEA5414361B4CE75446B0D53BA2B77287BCF1 * ___U3CU3E4__this_5;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2::root
	JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * ___root_6;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2::<>3__root
	JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * ___U3CU3E3__root_7;
	// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_8;
	// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2::<>7__wrap2
	RuntimeObject* ___U3CU3E7__wrap2_9;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t03BD833AD36FDB8FE0ECFB31585FDBD468904E80, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t03BD833AD36FDB8FE0ECFB31585FDBD468904E80, ___U3CU3E2__current_1)); }
	inline JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t03BD833AD36FDB8FE0ECFB31585FDBD468904E80, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t03BD833AD36FDB8FE0ECFB31585FDBD468904E80, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__current_4() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t03BD833AD36FDB8FE0ECFB31585FDBD468904E80, ___U3CU3E3__current_4)); }
	inline RuntimeObject* get_U3CU3E3__current_4() const { return ___U3CU3E3__current_4; }
	inline RuntimeObject** get_address_of_U3CU3E3__current_4() { return &___U3CU3E3__current_4; }
	inline void set_U3CU3E3__current_4(RuntimeObject* value)
	{
		___U3CU3E3__current_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__current_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t03BD833AD36FDB8FE0ECFB31585FDBD468904E80, ___U3CU3E4__this_5)); }
	inline QueryScanFilter_tC1CDEA5414361B4CE75446B0D53BA2B77287BCF1 * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline QueryScanFilter_tC1CDEA5414361B4CE75446B0D53BA2B77287BCF1 ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(QueryScanFilter_tC1CDEA5414361B4CE75446B0D53BA2B77287BCF1 * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}

	inline static int32_t get_offset_of_root_6() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t03BD833AD36FDB8FE0ECFB31585FDBD468904E80, ___root_6)); }
	inline JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * get_root_6() const { return ___root_6; }
	inline JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 ** get_address_of_root_6() { return &___root_6; }
	inline void set_root_6(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * value)
	{
		___root_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___root_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__root_7() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t03BD833AD36FDB8FE0ECFB31585FDBD468904E80, ___U3CU3E3__root_7)); }
	inline JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * get_U3CU3E3__root_7() const { return ___U3CU3E3__root_7; }
	inline JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 ** get_address_of_U3CU3E3__root_7() { return &___U3CU3E3__root_7; }
	inline void set_U3CU3E3__root_7(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * value)
	{
		___U3CU3E3__root_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__root_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_8() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t03BD833AD36FDB8FE0ECFB31585FDBD468904E80, ___U3CU3E7__wrap1_8)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_8() const { return ___U3CU3E7__wrap1_8; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_8() { return &___U3CU3E7__wrap1_8; }
	inline void set_U3CU3E7__wrap1_8(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap2_9() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t03BD833AD36FDB8FE0ECFB31585FDBD468904E80, ___U3CU3E7__wrap2_9)); }
	inline RuntimeObject* get_U3CU3E7__wrap2_9() const { return ___U3CU3E7__wrap2_9; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap2_9() { return &___U3CU3E7__wrap2_9; }
	inline void set_U3CU3E7__wrap2_9(RuntimeObject* value)
	{
		___U3CU3E7__wrap2_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap2_9), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_tE1DA9EFFD3ED2A3ACCDC003763EB1D737863E2F3  : public RuntimeObject
{
public:
	// System.Func`1<System.Object> Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass11_0::ctor
	Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * ___ctor_0;

public:
	inline static int32_t get_offset_of_ctor_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_0_tE1DA9EFFD3ED2A3ACCDC003763EB1D737863E2F3, ___ctor_0)); }
	inline Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * get_ctor_0() const { return ___ctor_0; }
	inline Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 ** get_address_of_ctor_0() { return &___ctor_0; }
	inline void set_ctor_0(Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * value)
	{
		___ctor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ctor_0), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass11_1
struct U3CU3Ec__DisplayClass11_1_t1B3025B8455083F56ADBE94EBEEBB6B319881954  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass11_1::call
	MethodCall_2_tC314E59E92B5F5B706088F6BF3A46D3946819F58 * ___call_0;

public:
	inline static int32_t get_offset_of_call_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_1_t1B3025B8455083F56ADBE94EBEEBB6B319881954, ___call_0)); }
	inline MethodCall_2_tC314E59E92B5F5B706088F6BF3A46D3946819F58 * get_call_0() const { return ___call_0; }
	inline MethodCall_2_tC314E59E92B5F5B706088F6BF3A46D3946819F58 ** get_address_of_call_0() { return &___call_0; }
	inline void set_call_0(MethodCall_2_tC314E59E92B5F5B706088F6BF3A46D3946819F58 * value)
	{
		___call_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___call_0), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass11_2
struct U3CU3Ec__DisplayClass11_2_t44A5B1FBAAC9A27E6E16071A0EFFC5B039E90522  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass11_2::call
	MethodCall_2_tC314E59E92B5F5B706088F6BF3A46D3946819F58 * ___call_0;

public:
	inline static int32_t get_offset_of_call_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass11_2_t44A5B1FBAAC9A27E6E16071A0EFFC5B039E90522, ___call_0)); }
	inline MethodCall_2_tC314E59E92B5F5B706088F6BF3A46D3946819F58 * get_call_0() const { return ___call_0; }
	inline MethodCall_2_tC314E59E92B5F5B706088F6BF3A46D3946819F58 ** get_address_of_call_0() { return &___call_0; }
	inline void set_call_0(MethodCall_2_tC314E59E92B5F5B706088F6BF3A46D3946819F58 * value)
	{
		___call_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___call_0), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.ReflectionUtils/<>c
struct U3CU3Ec_tE335300CBEC7EEE18397C46C3EF34C37AAA33A56  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tE335300CBEC7EEE18397C46C3EF34C37AAA33A56_StaticFields
{
public:
	// Newtonsoft.Json.Utilities.ReflectionUtils/<>c Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<>9
	U3CU3Ec_tE335300CBEC7EEE18397C46C3EF34C37AAA33A56 * ___U3CU3E9_0;
	// System.Func`2<System.Reflection.ConstructorInfo,System.Boolean> Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<>9__11_0
	Func_2_t6D7DD0FE4DA742E557BDCA2D3A8E6D7638B5673C * ___U3CU3E9__11_0_1;
	// System.Func`2<System.Reflection.MemberInfo,System.String> Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<>9__31_0
	Func_2_t82BDCCD3F9984E63AFAFFE2E311FD4AA25753329 * ___U3CU3E9__31_0_2;
	// System.Func`2<System.Reflection.ParameterInfo,System.Type> Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<>9__39_0
	Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF * ___U3CU3E9__39_0_3;
	// System.Func`2<System.Reflection.FieldInfo,System.Boolean> Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<>9__41_0
	Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE * ___U3CU3E9__41_0_4;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE335300CBEC7EEE18397C46C3EF34C37AAA33A56_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tE335300CBEC7EEE18397C46C3EF34C37AAA33A56 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tE335300CBEC7EEE18397C46C3EF34C37AAA33A56 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tE335300CBEC7EEE18397C46C3EF34C37AAA33A56 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__11_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE335300CBEC7EEE18397C46C3EF34C37AAA33A56_StaticFields, ___U3CU3E9__11_0_1)); }
	inline Func_2_t6D7DD0FE4DA742E557BDCA2D3A8E6D7638B5673C * get_U3CU3E9__11_0_1() const { return ___U3CU3E9__11_0_1; }
	inline Func_2_t6D7DD0FE4DA742E557BDCA2D3A8E6D7638B5673C ** get_address_of_U3CU3E9__11_0_1() { return &___U3CU3E9__11_0_1; }
	inline void set_U3CU3E9__11_0_1(Func_2_t6D7DD0FE4DA742E557BDCA2D3A8E6D7638B5673C * value)
	{
		___U3CU3E9__11_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__11_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__31_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE335300CBEC7EEE18397C46C3EF34C37AAA33A56_StaticFields, ___U3CU3E9__31_0_2)); }
	inline Func_2_t82BDCCD3F9984E63AFAFFE2E311FD4AA25753329 * get_U3CU3E9__31_0_2() const { return ___U3CU3E9__31_0_2; }
	inline Func_2_t82BDCCD3F9984E63AFAFFE2E311FD4AA25753329 ** get_address_of_U3CU3E9__31_0_2() { return &___U3CU3E9__31_0_2; }
	inline void set_U3CU3E9__31_0_2(Func_2_t82BDCCD3F9984E63AFAFFE2E311FD4AA25753329 * value)
	{
		___U3CU3E9__31_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__31_0_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__39_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE335300CBEC7EEE18397C46C3EF34C37AAA33A56_StaticFields, ___U3CU3E9__39_0_3)); }
	inline Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF * get_U3CU3E9__39_0_3() const { return ___U3CU3E9__39_0_3; }
	inline Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF ** get_address_of_U3CU3E9__39_0_3() { return &___U3CU3E9__39_0_3; }
	inline void set_U3CU3E9__39_0_3(Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF * value)
	{
		___U3CU3E9__39_0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__39_0_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__41_0_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_tE335300CBEC7EEE18397C46C3EF34C37AAA33A56_StaticFields, ___U3CU3E9__41_0_4)); }
	inline Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE * get_U3CU3E9__41_0_4() const { return ___U3CU3E9__41_0_4; }
	inline Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE ** get_address_of_U3CU3E9__41_0_4() { return &___U3CU3E9__41_0_4; }
	inline void set_U3CU3E9__41_0_4(Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE * value)
	{
		___U3CU3E9__41_0_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__41_0_4), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass31_0
struct U3CU3Ec__DisplayClass31_0_t917E27AC7B6B28AB3663E6D5D42528B453E4C301  : public RuntimeObject
{
public:
	// System.Reflection.MemberInfo Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass31_0::memberInfo
	MemberInfo_t * ___memberInfo_0;

public:
	inline static int32_t get_offset_of_memberInfo_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass31_0_t917E27AC7B6B28AB3663E6D5D42528B453E4C301, ___memberInfo_0)); }
	inline MemberInfo_t * get_memberInfo_0() const { return ___memberInfo_0; }
	inline MemberInfo_t ** get_address_of_memberInfo_0() { return &___memberInfo_0; }
	inline void set_memberInfo_0(MemberInfo_t * value)
	{
		___memberInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___memberInfo_0), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass44_0
struct U3CU3Ec__DisplayClass44_0_t1A0F7B02E3FEEF47F379E39A853F0DD506891FF6  : public RuntimeObject
{
public:
	// System.Reflection.PropertyInfo Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass44_0::subTypeProperty
	PropertyInfo_t * ___subTypeProperty_0;

public:
	inline static int32_t get_offset_of_subTypeProperty_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass44_0_t1A0F7B02E3FEEF47F379E39A853F0DD506891FF6, ___subTypeProperty_0)); }
	inline PropertyInfo_t * get_subTypeProperty_0() const { return ___subTypeProperty_0; }
	inline PropertyInfo_t ** get_address_of_subTypeProperty_0() { return &___subTypeProperty_0; }
	inline void set_subTypeProperty_0(PropertyInfo_t * value)
	{
		___subTypeProperty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subTypeProperty_0), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass44_1
struct U3CU3Ec__DisplayClass44_1_t5DB0EDE6C3C5B3168914EF51DE38C39F24A1D940  : public RuntimeObject
{
public:
	// System.Type Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass44_1::subTypePropertyDeclaringType
	Type_t * ___subTypePropertyDeclaringType_0;
	// Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass44_0 Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass44_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass44_0_t1A0F7B02E3FEEF47F379E39A853F0DD506891FF6 * ___CSU24U3CU3E8__locals1_1;

public:
	inline static int32_t get_offset_of_subTypePropertyDeclaringType_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass44_1_t5DB0EDE6C3C5B3168914EF51DE38C39F24A1D940, ___subTypePropertyDeclaringType_0)); }
	inline Type_t * get_subTypePropertyDeclaringType_0() const { return ___subTypePropertyDeclaringType_0; }
	inline Type_t ** get_address_of_subTypePropertyDeclaringType_0() { return &___subTypePropertyDeclaringType_0; }
	inline void set_subTypePropertyDeclaringType_0(Type_t * value)
	{
		___subTypePropertyDeclaringType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subTypePropertyDeclaringType_0), (void*)value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass44_1_t5DB0EDE6C3C5B3168914EF51DE38C39F24A1D940, ___CSU24U3CU3E8__locals1_1)); }
	inline U3CU3Ec__DisplayClass44_0_t1A0F7B02E3FEEF47F379E39A853F0DD506891FF6 * get_CSU24U3CU3E8__locals1_1() const { return ___CSU24U3CU3E8__locals1_1; }
	inline U3CU3Ec__DisplayClass44_0_t1A0F7B02E3FEEF47F379E39A853F0DD506891FF6 ** get_address_of_CSU24U3CU3E8__locals1_1() { return &___CSU24U3CU3E8__locals1_1; }
	inline void set_CSU24U3CU3E8__locals1_1(U3CU3Ec__DisplayClass44_0_t1A0F7B02E3FEEF47F379E39A853F0DD506891FF6 * value)
	{
		___CSU24U3CU3E8__locals1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_1), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass45_0
struct U3CU3Ec__DisplayClass45_0_tA5E18035C93F80F9C615001C77B5E95702A4AB5D  : public RuntimeObject
{
public:
	// System.String Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass45_0::method
	String_t* ___method_0;
	// System.Type Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass45_0::methodDeclaringType
	Type_t * ___methodDeclaringType_1;

public:
	inline static int32_t get_offset_of_method_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass45_0_tA5E18035C93F80F9C615001C77B5E95702A4AB5D, ___method_0)); }
	inline String_t* get_method_0() const { return ___method_0; }
	inline String_t** get_address_of_method_0() { return &___method_0; }
	inline void set_method_0(String_t* value)
	{
		___method_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_0), (void*)value);
	}

	inline static int32_t get_offset_of_methodDeclaringType_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass45_0_tA5E18035C93F80F9C615001C77B5E95702A4AB5D, ___methodDeclaringType_1)); }
	inline Type_t * get_methodDeclaringType_1() const { return ___methodDeclaringType_1; }
	inline Type_t ** get_address_of_methodDeclaringType_1() { return &___methodDeclaringType_1; }
	inline void set_methodDeclaringType_1(Type_t * value)
	{
		___methodDeclaringType_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___methodDeclaringType_1), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__2
struct U3CExecuteFilterU3Ed__2_tC2F023DC65A1ED62FB71C74885871250B3D59507  : public RuntimeObject
{
public:
	// System.Int32 Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__2::<>2__current
	JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * ___U3CU3E2__current_1;
	// System.Int32 Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__2::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__2::current
	RuntimeObject* ___current_3;
	// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__2::<>3__current
	RuntimeObject* ___U3CU3E3__current_4;
	// Newtonsoft.Json.Linq.JsonPath.ScanFilter Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__2::<>4__this
	ScanFilter_tA54485E0456337F3C138D40F71B8E116062B3E3C * ___U3CU3E4__this_5;
	// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__2::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_6;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__2::<c>5__3
	JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * ___U3CcU3E5__3_7;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__2::<value>5__4
	JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * ___U3CvalueU3E5__4_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_tC2F023DC65A1ED62FB71C74885871250B3D59507, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_tC2F023DC65A1ED62FB71C74885871250B3D59507, ___U3CU3E2__current_1)); }
	inline JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_tC2F023DC65A1ED62FB71C74885871250B3D59507, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_tC2F023DC65A1ED62FB71C74885871250B3D59507, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__current_4() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_tC2F023DC65A1ED62FB71C74885871250B3D59507, ___U3CU3E3__current_4)); }
	inline RuntimeObject* get_U3CU3E3__current_4() const { return ___U3CU3E3__current_4; }
	inline RuntimeObject** get_address_of_U3CU3E3__current_4() { return &___U3CU3E3__current_4; }
	inline void set_U3CU3E3__current_4(RuntimeObject* value)
	{
		___U3CU3E3__current_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__current_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_tC2F023DC65A1ED62FB71C74885871250B3D59507, ___U3CU3E4__this_5)); }
	inline ScanFilter_tA54485E0456337F3C138D40F71B8E116062B3E3C * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline ScanFilter_tA54485E0456337F3C138D40F71B8E116062B3E3C ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(ScanFilter_tA54485E0456337F3C138D40F71B8E116062B3E3C * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_6() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_tC2F023DC65A1ED62FB71C74885871250B3D59507, ___U3CU3E7__wrap1_6)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_6() const { return ___U3CU3E7__wrap1_6; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_6() { return &___U3CU3E7__wrap1_6; }
	inline void set_U3CU3E7__wrap1_6(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcU3E5__3_7() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_tC2F023DC65A1ED62FB71C74885871250B3D59507, ___U3CcU3E5__3_7)); }
	inline JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * get_U3CcU3E5__3_7() const { return ___U3CcU3E5__3_7; }
	inline JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 ** get_address_of_U3CcU3E5__3_7() { return &___U3CcU3E5__3_7; }
	inline void set_U3CcU3E5__3_7(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * value)
	{
		___U3CcU3E5__3_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcU3E5__3_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CvalueU3E5__4_8() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_tC2F023DC65A1ED62FB71C74885871250B3D59507, ___U3CvalueU3E5__4_8)); }
	inline JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * get_U3CvalueU3E5__4_8() const { return ___U3CvalueU3E5__4_8; }
	inline JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 ** get_address_of_U3CvalueU3E5__4_8() { return &___U3CvalueU3E5__4_8; }
	inline void set_U3CvalueU3E5__4_8(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * value)
	{
		___U3CvalueU3E5__4_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CvalueU3E5__4_8), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JObject/JObjectDynamicProxy/<>c
struct U3CU3Ec_t079339D53FDBCBD92F5779F7F22AB10461970CA5  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t079339D53FDBCBD92F5779F7F22AB10461970CA5_StaticFields
{
public:
	// Newtonsoft.Json.Linq.JObject/JObjectDynamicProxy/<>c Newtonsoft.Json.Linq.JObject/JObjectDynamicProxy/<>c::<>9
	U3CU3Ec_t079339D53FDBCBD92F5779F7F22AB10461970CA5 * ___U3CU3E9_0;
	// System.Func`2<Newtonsoft.Json.Linq.JProperty,System.String> Newtonsoft.Json.Linq.JObject/JObjectDynamicProxy/<>c::<>9__2_0
	Func_2_tB41EA24BD613F187BD2933B97574D86858806F39 * ___U3CU3E9__2_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t079339D53FDBCBD92F5779F7F22AB10461970CA5_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t079339D53FDBCBD92F5779F7F22AB10461970CA5 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t079339D53FDBCBD92F5779F7F22AB10461970CA5 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t079339D53FDBCBD92F5779F7F22AB10461970CA5 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__2_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t079339D53FDBCBD92F5779F7F22AB10461970CA5_StaticFields, ___U3CU3E9__2_0_1)); }
	inline Func_2_tB41EA24BD613F187BD2933B97574D86858806F39 * get_U3CU3E9__2_0_1() const { return ___U3CU3E9__2_0_1; }
	inline Func_2_tB41EA24BD613F187BD2933B97574D86858806F39 ** get_address_of_U3CU3E9__2_0_1() { return &___U3CU3E9__2_0_1; }
	inline void set_U3CU3E9__2_0_1(Func_2_tB41EA24BD613F187BD2933B97574D86858806F39 * value)
	{
		___U3CU3E9__2_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__2_0_1), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1
struct U3CGetEnumeratorU3Ed__1_t707CB3D09C2C5F8296E6BCCA37C54250187B0587  : public RuntimeObject
{
public:
	// System.Int32 Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::<>2__current
	JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * ___U3CU3E2__current_1;
	// Newtonsoft.Json.Linq.JProperty/JPropertyList Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::<>4__this
	JPropertyList_t40544FA83585374547FB7FFD7472CB16A930B95B * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_t707CB3D09C2C5F8296E6BCCA37C54250187B0587, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_t707CB3D09C2C5F8296E6BCCA37C54250187B0587, ___U3CU3E2__current_1)); }
	inline JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_t707CB3D09C2C5F8296E6BCCA37C54250187B0587, ___U3CU3E4__this_2)); }
	inline JPropertyList_t40544FA83585374547FB7FFD7472CB16A930B95B * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline JPropertyList_t40544FA83585374547FB7FFD7472CB16A930B95B ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(JPropertyList_t40544FA83585374547FB7FFD7472CB16A930B95B * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.String>
struct Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	String_t* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___list_0)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_list_0() const { return ___list_0; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___current_3)); }
	inline String_t* get_current_3() const { return ___current_3; }
	inline String_t** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(String_t* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Linq.JToken>
struct KeyValuePair_2_t2D21ACE03FBDFCC8BD8D4EFA6275F975E2D03FEB 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2D21ACE03FBDFCC8BD8D4EFA6275F975E2D03FEB, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2D21ACE03FBDFCC8BD8D4EFA6275F975E2D03FEB, ___value_1)); }
	inline JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * get_value_1() const { return ___value_1; }
	inline JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Nullable`1<System.Boolean>
struct Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Int32>
struct Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
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

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
public:

public:
};


// Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter
struct FieldMultipleFilter_t754130B1A502B7441BA5F1BB191687E4162B31C6  : public PathFilter_t0D185940B506CC37399A67EED25738F24A94846D
{
public:
	// System.Collections.Generic.List`1<System.String> Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter::Names
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___Names_0;

public:
	inline static int32_t get_offset_of_Names_0() { return static_cast<int32_t>(offsetof(FieldMultipleFilter_t754130B1A502B7441BA5F1BB191687E4162B31C6, ___Names_0)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_Names_0() const { return ___Names_0; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_Names_0() { return &___Names_0; }
	inline void set_Names_0(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___Names_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Names_0), (void*)value);
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
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


// Newtonsoft.Json.Linq.JContainer
struct JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527  : public JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5
{
public:
	// System.ComponentModel.ListChangedEventHandler Newtonsoft.Json.Linq.JContainer::_listChanged
	ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C * ____listChanged_15;
	// System.ComponentModel.AddingNewEventHandler Newtonsoft.Json.Linq.JContainer::_addingNew
	AddingNewEventHandler_tF21F6F9D1D0611177846250B5CF81B55B5F6B785 * ____addingNew_16;
	// System.Collections.Specialized.NotifyCollectionChangedEventHandler Newtonsoft.Json.Linq.JContainer::_collectionChanged
	NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621 * ____collectionChanged_17;
	// System.Object Newtonsoft.Json.Linq.JContainer::_syncRoot
	RuntimeObject * ____syncRoot_18;
	// System.Boolean Newtonsoft.Json.Linq.JContainer::_busy
	bool ____busy_19;

public:
	inline static int32_t get_offset_of__listChanged_15() { return static_cast<int32_t>(offsetof(JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527, ____listChanged_15)); }
	inline ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C * get__listChanged_15() const { return ____listChanged_15; }
	inline ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C ** get_address_of__listChanged_15() { return &____listChanged_15; }
	inline void set__listChanged_15(ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C * value)
	{
		____listChanged_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____listChanged_15), (void*)value);
	}

	inline static int32_t get_offset_of__addingNew_16() { return static_cast<int32_t>(offsetof(JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527, ____addingNew_16)); }
	inline AddingNewEventHandler_tF21F6F9D1D0611177846250B5CF81B55B5F6B785 * get__addingNew_16() const { return ____addingNew_16; }
	inline AddingNewEventHandler_tF21F6F9D1D0611177846250B5CF81B55B5F6B785 ** get_address_of__addingNew_16() { return &____addingNew_16; }
	inline void set__addingNew_16(AddingNewEventHandler_tF21F6F9D1D0611177846250B5CF81B55B5F6B785 * value)
	{
		____addingNew_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____addingNew_16), (void*)value);
	}

	inline static int32_t get_offset_of__collectionChanged_17() { return static_cast<int32_t>(offsetof(JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527, ____collectionChanged_17)); }
	inline NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621 * get__collectionChanged_17() const { return ____collectionChanged_17; }
	inline NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621 ** get_address_of__collectionChanged_17() { return &____collectionChanged_17; }
	inline void set__collectionChanged_17(NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621 * value)
	{
		____collectionChanged_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____collectionChanged_17), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_18() { return static_cast<int32_t>(offsetof(JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527, ____syncRoot_18)); }
	inline RuntimeObject * get__syncRoot_18() const { return ____syncRoot_18; }
	inline RuntimeObject ** get_address_of__syncRoot_18() { return &____syncRoot_18; }
	inline void set__syncRoot_18(RuntimeObject * value)
	{
		____syncRoot_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_18), (void*)value);
	}

	inline static int32_t get_offset_of__busy_19() { return static_cast<int32_t>(offsetof(JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527, ____busy_19)); }
	inline bool get__busy_19() const { return ____busy_19; }
	inline bool* get_address_of__busy_19() { return &____busy_19; }
	inline void set__busy_19(bool value)
	{
		____busy_19 = value;
	}
};


// Newtonsoft.Json.Linq.JPropertyKeyedCollection
struct JPropertyKeyedCollection_t8408B618F7F19300CF323A96090009E71EBEF0D3  : public Collection_1_t43D925574A6394ADD9A2F69C9BE205B620E3A63D
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JPropertyKeyedCollection::_dictionary
	Dictionary_2_tA73650BDA615C59B1D7DC6B436DF2E1ED70D48CD * ____dictionary_3;

public:
	inline static int32_t get_offset_of__dictionary_3() { return static_cast<int32_t>(offsetof(JPropertyKeyedCollection_t8408B618F7F19300CF323A96090009E71EBEF0D3, ____dictionary_3)); }
	inline Dictionary_2_tA73650BDA615C59B1D7DC6B436DF2E1ED70D48CD * get__dictionary_3() const { return ____dictionary_3; }
	inline Dictionary_2_tA73650BDA615C59B1D7DC6B436DF2E1ED70D48CD ** get_address_of__dictionary_3() { return &____dictionary_3; }
	inline void set__dictionary_3(Dictionary_2_tA73650BDA615C59B1D7DC6B436DF2E1ED70D48CD * value)
	{
		____dictionary_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dictionary_3), (void*)value);
	}
};

struct JPropertyKeyedCollection_t8408B618F7F19300CF323A96090009E71EBEF0D3_StaticFields
{
public:
	// System.Collections.Generic.IEqualityComparer`1<System.String> Newtonsoft.Json.Linq.JPropertyKeyedCollection::Comparer
	RuntimeObject* ___Comparer_2;

public:
	inline static int32_t get_offset_of_Comparer_2() { return static_cast<int32_t>(offsetof(JPropertyKeyedCollection_t8408B618F7F19300CF323A96090009E71EBEF0D3_StaticFields, ___Comparer_2)); }
	inline RuntimeObject* get_Comparer_2() const { return ___Comparer_2; }
	inline RuntimeObject** get_address_of_Comparer_2() { return &___Comparer_2; }
	inline void set_Comparer_2(RuntimeObject* value)
	{
		___Comparer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Comparer_2), (void*)value);
	}
};


// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
public:

public:
};


// Newtonsoft.Json.Linq.JsonPath.QueryFilter
struct QueryFilter_t4FBB8A3F67039895506A0BBBDB54213614FE5EA3  : public PathFilter_t0D185940B506CC37399A67EED25738F24A94846D
{
public:
	// Newtonsoft.Json.Linq.JsonPath.QueryExpression Newtonsoft.Json.Linq.JsonPath.QueryFilter::Expression
	QueryExpression_t8D8090F4AFDEC9493D2C8ECB42B8BEE65AC701FE * ___Expression_0;

public:
	inline static int32_t get_offset_of_Expression_0() { return static_cast<int32_t>(offsetof(QueryFilter_t4FBB8A3F67039895506A0BBBDB54213614FE5EA3, ___Expression_0)); }
	inline QueryExpression_t8D8090F4AFDEC9493D2C8ECB42B8BEE65AC701FE * get_Expression_0() const { return ___Expression_0; }
	inline QueryExpression_t8D8090F4AFDEC9493D2C8ECB42B8BEE65AC701FE ** get_address_of_Expression_0() { return &___Expression_0; }
	inline void set_Expression_0(QueryExpression_t8D8090F4AFDEC9493D2C8ECB42B8BEE65AC701FE * value)
	{
		___Expression_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Expression_0), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JsonPath.QueryScanFilter
struct QueryScanFilter_tC1CDEA5414361B4CE75446B0D53BA2B77287BCF1  : public PathFilter_t0D185940B506CC37399A67EED25738F24A94846D
{
public:
	// Newtonsoft.Json.Linq.JsonPath.QueryExpression Newtonsoft.Json.Linq.JsonPath.QueryScanFilter::Expression
	QueryExpression_t8D8090F4AFDEC9493D2C8ECB42B8BEE65AC701FE * ___Expression_0;

public:
	inline static int32_t get_offset_of_Expression_0() { return static_cast<int32_t>(offsetof(QueryScanFilter_tC1CDEA5414361B4CE75446B0D53BA2B77287BCF1, ___Expression_0)); }
	inline QueryExpression_t8D8090F4AFDEC9493D2C8ECB42B8BEE65AC701FE * get_Expression_0() const { return ___Expression_0; }
	inline QueryExpression_t8D8090F4AFDEC9493D2C8ECB42B8BEE65AC701FE ** get_address_of_Expression_0() { return &___Expression_0; }
	inline void set_Expression_0(QueryExpression_t8D8090F4AFDEC9493D2C8ECB42B8BEE65AC701FE * value)
	{
		___Expression_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Expression_0), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JsonPath.ScanFilter
struct ScanFilter_tA54485E0456337F3C138D40F71B8E116062B3E3C  : public PathFilter_t0D185940B506CC37399A67EED25738F24A94846D
{
public:
	// System.String Newtonsoft.Json.Linq.JsonPath.ScanFilter::Name
	String_t* ___Name_0;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(ScanFilter_tA54485E0456337F3C138D40F71B8E116062B3E3C, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter
struct ScanMultipleFilter_tFC75BE31C1B63D7444192C2044CDD142E8C69BD6  : public PathFilter_t0D185940B506CC37399A67EED25738F24A94846D
{
public:
	// System.Collections.Generic.List`1<System.String> Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter::_names
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ____names_0;

public:
	inline static int32_t get_offset_of__names_0() { return static_cast<int32_t>(offsetof(ScanMultipleFilter_tFC75BE31C1B63D7444192C2044CDD142E8C69BD6, ____names_0)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get__names_0() const { return ____names_0; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of__names_0() { return &____names_0; }
	inline void set__names_0(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		____names_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____names_0), (void*)value);
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


// Newtonsoft.Json.Linq.JObject/JObjectDynamicProxy
struct JObjectDynamicProxy_t29543C0963395FEE6D96B245C630031CEB704662  : public DynamicProxy_1_t5E4033CA972DA5E68D6030419A259D2D98635B21
{
public:

public:
};


// Newtonsoft.Json.Linq.JValue/JValueDynamicProxy
struct JValueDynamicProxy_tBC8F949989A0829E1E45FC021E4D9779F0E37047  : public DynamicProxy_1_t1BABB854FFC43EED36459900606F23D89F1D0B22
{
public:

public:
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.ConstructorInfo
struct ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B  : public MethodBase_t
{
public:

public:
};

struct ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B_StaticFields
{
public:
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;

public:
	inline static int32_t get_offset_of_ConstructorName_0() { return static_cast<int32_t>(offsetof(ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B_StaticFields, ___ConstructorName_0)); }
	inline String_t* get_ConstructorName_0() const { return ___ConstructorName_0; }
	inline String_t** get_address_of_ConstructorName_0() { return &___ConstructorName_0; }
	inline void set_ConstructorName_0(String_t* value)
	{
		___ConstructorName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConstructorName_0), (void*)value);
	}

	inline static int32_t get_offset_of_TypeConstructorName_1() { return static_cast<int32_t>(offsetof(ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B_StaticFields, ___TypeConstructorName_1)); }
	inline String_t* get_TypeConstructorName_1() const { return ___TypeConstructorName_1; }
	inline String_t** get_address_of_TypeConstructorName_1() { return &___TypeConstructorName_1; }
	inline void set_TypeConstructorName_1(String_t* value)
	{
		___TypeConstructorName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypeConstructorName_1), (void*)value);
	}
};


// Newtonsoft.Json.DefaultValueHandling
struct DefaultValueHandling_t6D892FE0D1C58D92A23D43DE785B6393800BF814 
{
public:
	// System.Int32 Newtonsoft.Json.DefaultValueHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DefaultValueHandling_t6D892FE0D1C58D92A23D43DE785B6393800BF814, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// Newtonsoft.Json.Linq.JObject
struct JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8  : public JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527
{
public:
	// Newtonsoft.Json.Linq.JPropertyKeyedCollection Newtonsoft.Json.Linq.JObject::_properties
	JPropertyKeyedCollection_t8408B618F7F19300CF323A96090009E71EBEF0D3 * ____properties_20;
	// System.ComponentModel.PropertyChangedEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanged
	PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * ___PropertyChanged_21;
	// System.ComponentModel.PropertyChangingEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanging
	PropertyChangingEventHandler_t5EA6F6EAA933D35C0AAD9D347A3BD53D343E4C22 * ___PropertyChanging_22;

public:
	inline static int32_t get_offset_of__properties_20() { return static_cast<int32_t>(offsetof(JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8, ____properties_20)); }
	inline JPropertyKeyedCollection_t8408B618F7F19300CF323A96090009E71EBEF0D3 * get__properties_20() const { return ____properties_20; }
	inline JPropertyKeyedCollection_t8408B618F7F19300CF323A96090009E71EBEF0D3 ** get_address_of__properties_20() { return &____properties_20; }
	inline void set__properties_20(JPropertyKeyedCollection_t8408B618F7F19300CF323A96090009E71EBEF0D3 * value)
	{
		____properties_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____properties_20), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyChanged_21() { return static_cast<int32_t>(offsetof(JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8, ___PropertyChanged_21)); }
	inline PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * get_PropertyChanged_21() const { return ___PropertyChanged_21; }
	inline PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 ** get_address_of_PropertyChanged_21() { return &___PropertyChanged_21; }
	inline void set_PropertyChanged_21(PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * value)
	{
		___PropertyChanged_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyChanged_21), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyChanging_22() { return static_cast<int32_t>(offsetof(JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8, ___PropertyChanging_22)); }
	inline PropertyChangingEventHandler_t5EA6F6EAA933D35C0AAD9D347A3BD53D343E4C22 * get_PropertyChanging_22() const { return ___PropertyChanging_22; }
	inline PropertyChangingEventHandler_t5EA6F6EAA933D35C0AAD9D347A3BD53D343E4C22 ** get_address_of_PropertyChanging_22() { return &___PropertyChanging_22; }
	inline void set_PropertyChanging_22(PropertyChangingEventHandler_t5EA6F6EAA933D35C0AAD9D347A3BD53D343E4C22 * value)
	{
		___PropertyChanging_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyChanging_22), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JProperty
struct JProperty_t6B592BFC6895980207CC8356187EB1D0328A328E  : public JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527
{
public:
	// Newtonsoft.Json.Linq.JProperty/JPropertyList Newtonsoft.Json.Linq.JProperty::_content
	JPropertyList_t40544FA83585374547FB7FFD7472CB16A930B95B * ____content_20;
	// System.String Newtonsoft.Json.Linq.JProperty::_name
	String_t* ____name_21;

public:
	inline static int32_t get_offset_of__content_20() { return static_cast<int32_t>(offsetof(JProperty_t6B592BFC6895980207CC8356187EB1D0328A328E, ____content_20)); }
	inline JPropertyList_t40544FA83585374547FB7FFD7472CB16A930B95B * get__content_20() const { return ____content_20; }
	inline JPropertyList_t40544FA83585374547FB7FFD7472CB16A930B95B ** get_address_of__content_20() { return &____content_20; }
	inline void set__content_20(JPropertyList_t40544FA83585374547FB7FFD7472CB16A930B95B * value)
	{
		____content_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____content_20), (void*)value);
	}

	inline static int32_t get_offset_of__name_21() { return static_cast<int32_t>(offsetof(JProperty_t6B592BFC6895980207CC8356187EB1D0328A328E, ____name_21)); }
	inline String_t* get__name_21() const { return ____name_21; }
	inline String_t** get_address_of__name_21() { return &____name_21; }
	inline void set__name_21(String_t* value)
	{
		____name_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____name_21), (void*)value);
	}
};


// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
public:

public:
};


// Newtonsoft.Json.NullValueHandling
struct NullValueHandling_tAD3CDC4A429050D2488DCF8545973A7AFB09CEEE 
{
public:
	// System.Int32 Newtonsoft.Json.NullValueHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NullValueHandling_tAD3CDC4A429050D2488DCF8545973A7AFB09CEEE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.ObjectCreationHandling
struct ObjectCreationHandling_t6D16F9CD0CCCBF731E19ADE28DB8A9F326918A88 
{
public:
	// System.Int32 Newtonsoft.Json.ObjectCreationHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ObjectCreationHandling_t6D16F9CD0CCCBF731E19ADE28DB8A9F326918A88, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.ParameterAttributes
struct ParameterAttributes_t79BD378DEC3F187D9773B9A4EDE573866E930218 
{
public:
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParameterAttributes_t79BD378DEC3F187D9773B9A4EDE573866E930218, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.Linq.JsonPath.QueryOperator
struct QueryOperator_tDE3AC1FD78B0E9BA2512BD3FA0775B562DA79A6B 
{
public:
	// System.Int32 Newtonsoft.Json.Linq.JsonPath.QueryOperator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(QueryOperator_tDE3AC1FD78B0E9BA2512BD3FA0775B562DA79A6B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.ReferenceLoopHandling
struct ReferenceLoopHandling_t6C0D8F69ED0C2400268D9EA87CC816657D8C226A 
{
public:
	// System.Int32 Newtonsoft.Json.ReferenceLoopHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ReferenceLoopHandling_t6C0D8F69ED0C2400268D9EA87CC816657D8C226A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.Required
struct Required_t7ABD0ABE055637CFBBA898B18654710D2AA28F5C 
{
public:
	// System.Int32 Newtonsoft.Json.Required::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Required_t7ABD0ABE055637CFBBA898B18654710D2AA28F5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.Runtime.Serialization.StreamingContextStates
struct StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.TypeNameHandling
struct TypeNameHandling_t5FEBFAAD01E7E1F50AD59F8C778592B23E6F8C1A 
{
public:
	// System.Int32 Newtonsoft.Json.TypeNameHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeNameHandling_t5FEBFAAD01E7E1F50AD59F8C778592B23E6F8C1A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter/<ExecuteFilter>d__2
struct U3CExecuteFilterU3Ed__2_t403E1232303C76A794700DDB836080BA303EDF91  : public RuntimeObject
{
public:
	// System.Int32 Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter/<ExecuteFilter>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter/<ExecuteFilter>d__2::<>2__current
	JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * ___U3CU3E2__current_1;
	// System.Int32 Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter/<ExecuteFilter>d__2::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter/<ExecuteFilter>d__2::current
	RuntimeObject* ___current_3;
	// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter/<ExecuteFilter>d__2::<>3__current
	RuntimeObject* ___U3CU3E3__current_4;
	// Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter/<ExecuteFilter>d__2::<>4__this
	FieldMultipleFilter_t754130B1A502B7441BA5F1BB191687E4162B31C6 * ___U3CU3E4__this_5;
	// System.Boolean Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter/<ExecuteFilter>d__2::errorWhenNoMatch
	bool ___errorWhenNoMatch_6;
	// System.Boolean Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter/<ExecuteFilter>d__2::<>3__errorWhenNoMatch
	bool ___U3CU3E3__errorWhenNoMatch_7;
	// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter/<ExecuteFilter>d__2::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_8;
	// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter/<ExecuteFilter>d__2::<o>5__3
	JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8 * ___U3CoU3E5__3_9;
	// System.Collections.Generic.List`1/Enumerator<System.String> Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter/<ExecuteFilter>d__2::<>7__wrap3
	Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  ___U3CU3E7__wrap3_10;
	// System.String Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter/<ExecuteFilter>d__2::<name>5__5
	String_t* ___U3CnameU3E5__5_11;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t403E1232303C76A794700DDB836080BA303EDF91, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t403E1232303C76A794700DDB836080BA303EDF91, ___U3CU3E2__current_1)); }
	inline JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t403E1232303C76A794700DDB836080BA303EDF91, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t403E1232303C76A794700DDB836080BA303EDF91, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__current_4() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t403E1232303C76A794700DDB836080BA303EDF91, ___U3CU3E3__current_4)); }
	inline RuntimeObject* get_U3CU3E3__current_4() const { return ___U3CU3E3__current_4; }
	inline RuntimeObject** get_address_of_U3CU3E3__current_4() { return &___U3CU3E3__current_4; }
	inline void set_U3CU3E3__current_4(RuntimeObject* value)
	{
		___U3CU3E3__current_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__current_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t403E1232303C76A794700DDB836080BA303EDF91, ___U3CU3E4__this_5)); }
	inline FieldMultipleFilter_t754130B1A502B7441BA5F1BB191687E4162B31C6 * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline FieldMultipleFilter_t754130B1A502B7441BA5F1BB191687E4162B31C6 ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(FieldMultipleFilter_t754130B1A502B7441BA5F1BB191687E4162B31C6 * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}

	inline static int32_t get_offset_of_errorWhenNoMatch_6() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t403E1232303C76A794700DDB836080BA303EDF91, ___errorWhenNoMatch_6)); }
	inline bool get_errorWhenNoMatch_6() const { return ___errorWhenNoMatch_6; }
	inline bool* get_address_of_errorWhenNoMatch_6() { return &___errorWhenNoMatch_6; }
	inline void set_errorWhenNoMatch_6(bool value)
	{
		___errorWhenNoMatch_6 = value;
	}

	inline static int32_t get_offset_of_U3CU3E3__errorWhenNoMatch_7() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t403E1232303C76A794700DDB836080BA303EDF91, ___U3CU3E3__errorWhenNoMatch_7)); }
	inline bool get_U3CU3E3__errorWhenNoMatch_7() const { return ___U3CU3E3__errorWhenNoMatch_7; }
	inline bool* get_address_of_U3CU3E3__errorWhenNoMatch_7() { return &___U3CU3E3__errorWhenNoMatch_7; }
	inline void set_U3CU3E3__errorWhenNoMatch_7(bool value)
	{
		___U3CU3E3__errorWhenNoMatch_7 = value;
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_8() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t403E1232303C76A794700DDB836080BA303EDF91, ___U3CU3E7__wrap1_8)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_8() const { return ___U3CU3E7__wrap1_8; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_8() { return &___U3CU3E7__wrap1_8; }
	inline void set_U3CU3E7__wrap1_8(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CoU3E5__3_9() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t403E1232303C76A794700DDB836080BA303EDF91, ___U3CoU3E5__3_9)); }
	inline JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8 * get_U3CoU3E5__3_9() const { return ___U3CoU3E5__3_9; }
	inline JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8 ** get_address_of_U3CoU3E5__3_9() { return &___U3CoU3E5__3_9; }
	inline void set_U3CoU3E5__3_9(JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8 * value)
	{
		___U3CoU3E5__3_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CoU3E5__3_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap3_10() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t403E1232303C76A794700DDB836080BA303EDF91, ___U3CU3E7__wrap3_10)); }
	inline Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  get_U3CU3E7__wrap3_10() const { return ___U3CU3E7__wrap3_10; }
	inline Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * get_address_of_U3CU3E7__wrap3_10() { return &___U3CU3E7__wrap3_10; }
	inline void set_U3CU3E7__wrap3_10(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  value)
	{
		___U3CU3E7__wrap3_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap3_10))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap3_10))->___current_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CnameU3E5__5_11() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t403E1232303C76A794700DDB836080BA303EDF91, ___U3CnameU3E5__5_11)); }
	inline String_t* get_U3CnameU3E5__5_11() const { return ___U3CnameU3E5__5_11; }
	inline String_t** get_address_of_U3CnameU3E5__5_11() { return &___U3CnameU3E5__5_11; }
	inline void set_U3CnameU3E5__5_11(String_t* value)
	{
		___U3CnameU3E5__5_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3E5__5_11), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__63
struct U3CGetEnumeratorU3Ed__63_t412E336C65F7FA64E688926F38AEA48E9F5709E0  : public RuntimeObject
{
public:
	// System.Int32 Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__63::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__63::<>2__current
	KeyValuePair_2_t2D21ACE03FBDFCC8BD8D4EFA6275F975E2D03FEB  ___U3CU3E2__current_1;
	// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__63::<>4__this
	JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8 * ___U3CU3E4__this_2;
	// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__63::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__63_t412E336C65F7FA64E688926F38AEA48E9F5709E0, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__63_t412E336C65F7FA64E688926F38AEA48E9F5709E0, ___U3CU3E2__current_1)); }
	inline KeyValuePair_2_t2D21ACE03FBDFCC8BD8D4EFA6275F975E2D03FEB  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline KeyValuePair_2_t2D21ACE03FBDFCC8BD8D4EFA6275F975E2D03FEB * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(KeyValuePair_2_t2D21ACE03FBDFCC8BD8D4EFA6275F975E2D03FEB  value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__63_t412E336C65F7FA64E688926F38AEA48E9F5709E0, ___U3CU3E4__this_2)); }
	inline JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__63_t412E336C65F7FA64E688926F38AEA48E9F5709E0, ___U3CU3E7__wrap1_3)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_3() const { return ___U3CU3E7__wrap1_3; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_3() { return &___U3CU3E7__wrap1_3; }
	inline void set_U3CU3E7__wrap1_3(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_3), (void*)value);
	}
};


// Newtonsoft.Json.JsonReader/State
struct State_t1465C7F4C454D13A5E15B524FC6A84A88A19FCE0 
{
public:
	// System.Int32 Newtonsoft.Json.JsonReader/State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_t1465C7F4C454D13A5E15B524FC6A84A88A19FCE0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence
struct PropertyPresence_tDFAB3298B450E1910F4B076A5080FEC4C6F7C7E4 
{
public:
	// System.Int32 Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropertyPresence_tDFAB3298B450E1910F4B076A5080FEC4C6F7C7E4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.JsonWriter/State
struct State_tCF094629522A5FD69F108494074FAAEB9C66C091 
{
public:
	// System.Int32 Newtonsoft.Json.JsonWriter/State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_tCF094629522A5FD69F108494074FAAEB9C66C091, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2
struct U3CExecuteFilterU3Ed__2_t1076E6004461A437C119CCE96763DBE824D16241  : public RuntimeObject
{
public:
	// System.Int32 Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2::<>2__current
	JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * ___U3CU3E2__current_1;
	// System.Int32 Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2::current
	RuntimeObject* ___current_3;
	// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2::<>3__current
	RuntimeObject* ___U3CU3E3__current_4;
	// Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2::<>4__this
	ScanMultipleFilter_tFC75BE31C1B63D7444192C2044CDD142E8C69BD6 * ___U3CU3E4__this_5;
	// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_6;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2::<c>5__3
	JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * ___U3CcU3E5__3_7;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2::<value>5__4
	JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * ___U3CvalueU3E5__4_8;
	// Newtonsoft.Json.Linq.JProperty Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2::<property>5__5
	JProperty_t6B592BFC6895980207CC8356187EB1D0328A328E * ___U3CpropertyU3E5__5_9;
	// System.Collections.Generic.List`1/Enumerator<System.String> Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2::<>7__wrap5
	Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  ___U3CU3E7__wrap5_10;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t1076E6004461A437C119CCE96763DBE824D16241, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t1076E6004461A437C119CCE96763DBE824D16241, ___U3CU3E2__current_1)); }
	inline JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t1076E6004461A437C119CCE96763DBE824D16241, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t1076E6004461A437C119CCE96763DBE824D16241, ___current_3)); }
	inline RuntimeObject* get_current_3() const { return ___current_3; }
	inline RuntimeObject** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__current_4() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t1076E6004461A437C119CCE96763DBE824D16241, ___U3CU3E3__current_4)); }
	inline RuntimeObject* get_U3CU3E3__current_4() const { return ___U3CU3E3__current_4; }
	inline RuntimeObject** get_address_of_U3CU3E3__current_4() { return &___U3CU3E3__current_4; }
	inline void set_U3CU3E3__current_4(RuntimeObject* value)
	{
		___U3CU3E3__current_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__current_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_5() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t1076E6004461A437C119CCE96763DBE824D16241, ___U3CU3E4__this_5)); }
	inline ScanMultipleFilter_tFC75BE31C1B63D7444192C2044CDD142E8C69BD6 * get_U3CU3E4__this_5() const { return ___U3CU3E4__this_5; }
	inline ScanMultipleFilter_tFC75BE31C1B63D7444192C2044CDD142E8C69BD6 ** get_address_of_U3CU3E4__this_5() { return &___U3CU3E4__this_5; }
	inline void set_U3CU3E4__this_5(ScanMultipleFilter_tFC75BE31C1B63D7444192C2044CDD142E8C69BD6 * value)
	{
		___U3CU3E4__this_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_6() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t1076E6004461A437C119CCE96763DBE824D16241, ___U3CU3E7__wrap1_6)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_6() const { return ___U3CU3E7__wrap1_6; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_6() { return &___U3CU3E7__wrap1_6; }
	inline void set_U3CU3E7__wrap1_6(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcU3E5__3_7() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t1076E6004461A437C119CCE96763DBE824D16241, ___U3CcU3E5__3_7)); }
	inline JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * get_U3CcU3E5__3_7() const { return ___U3CcU3E5__3_7; }
	inline JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 ** get_address_of_U3CcU3E5__3_7() { return &___U3CcU3E5__3_7; }
	inline void set_U3CcU3E5__3_7(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * value)
	{
		___U3CcU3E5__3_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CcU3E5__3_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CvalueU3E5__4_8() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t1076E6004461A437C119CCE96763DBE824D16241, ___U3CvalueU3E5__4_8)); }
	inline JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * get_U3CvalueU3E5__4_8() const { return ___U3CvalueU3E5__4_8; }
	inline JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 ** get_address_of_U3CvalueU3E5__4_8() { return &___U3CvalueU3E5__4_8; }
	inline void set_U3CvalueU3E5__4_8(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * value)
	{
		___U3CvalueU3E5__4_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CvalueU3E5__4_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpropertyU3E5__5_9() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t1076E6004461A437C119CCE96763DBE824D16241, ___U3CpropertyU3E5__5_9)); }
	inline JProperty_t6B592BFC6895980207CC8356187EB1D0328A328E * get_U3CpropertyU3E5__5_9() const { return ___U3CpropertyU3E5__5_9; }
	inline JProperty_t6B592BFC6895980207CC8356187EB1D0328A328E ** get_address_of_U3CpropertyU3E5__5_9() { return &___U3CpropertyU3E5__5_9; }
	inline void set_U3CpropertyU3E5__5_9(JProperty_t6B592BFC6895980207CC8356187EB1D0328A328E * value)
	{
		___U3CpropertyU3E5__5_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpropertyU3E5__5_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap5_10() { return static_cast<int32_t>(offsetof(U3CExecuteFilterU3Ed__2_t1076E6004461A437C119CCE96763DBE824D16241, ___U3CU3E7__wrap5_10)); }
	inline Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  get_U3CU3E7__wrap5_10() const { return ___U3CU3E7__wrap5_10; }
	inline Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * get_address_of_U3CU3E7__wrap5_10() { return &___U3CU3E7__wrap5_10; }
	inline void set_U3CU3E7__wrap5_10(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  value)
	{
		___U3CU3E7__wrap5_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap5_10))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E7__wrap5_10))->___current_3), (void*)NULL);
		#endif
	}
};


// System.Nullable`1<Newtonsoft.Json.DefaultValueHandling>
struct Nullable_1_tCABD9D241DA88007C674CDE20E054DA5C1B8616A 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tCABD9D241DA88007C674CDE20E054DA5C1B8616A, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tCABD9D241DA88007C674CDE20E054DA5C1B8616A, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.NullValueHandling>
struct Nullable_1_tAFB70447D986206A481BA64AACBA05BBB3FC6FD3 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tAFB70447D986206A481BA64AACBA05BBB3FC6FD3, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tAFB70447D986206A481BA64AACBA05BBB3FC6FD3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.ObjectCreationHandling>
struct Nullable_1_tF7D98AC236C756C1B9BCB8FA9F36442F3727B8C0 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tF7D98AC236C756C1B9BCB8FA9F36442F3727B8C0, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tF7D98AC236C756C1B9BCB8FA9F36442F3727B8C0, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling>
struct Nullable_1_t5588FB03718A0EDC42478F750A65136B0044C9D5 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t5588FB03718A0EDC42478F750A65136B0044C9D5, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t5588FB03718A0EDC42478F750A65136B0044C9D5, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.Required>
struct Nullable_1_t71E406DA336F0EB7FEF7EA1BD2ADEA1F1D87AE04 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t71E406DA336F0EB7FEF7EA1BD2ADEA1F1D87AE04, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t71E406DA336F0EB7FEF7EA1BD2ADEA1F1D87AE04, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.TypeNameHandling>
struct Nullable_1_t7AE43E9585ABD3F8778F718FA3D1487AC682D959 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t7AE43E9585ABD3F8778F718FA3D1487AC682D959, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t7AE43E9585ABD3F8778F718FA3D1487AC682D959, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>
struct Nullable_1_tD1DE14BE70E8895B15FA54F52EE65BB2D090141D 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tD1DE14BE70E8895B15FA54F52EE65BB2D090141D, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tD1DE14BE70E8895B15FA54F52EE65BB2D090141D, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// Newtonsoft.Json.JsonException
struct JsonException_tD4970C15EFCD45318B603FD05766B927594DBEE5  : public Exception_t
{
public:

public:
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

// System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7  : public RuntimeObject
{
public:
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t * ___ClassImpl_0;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject * ___DefaultValueImpl_1;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t * ___MemberImpl_2;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_3;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_4;
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_5;
	// System.Runtime.InteropServices.MarshalAsAttribute System.Reflection.ParameterInfo::marshalAs
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;

public:
	inline static int32_t get_offset_of_ClassImpl_0() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___ClassImpl_0)); }
	inline Type_t * get_ClassImpl_0() const { return ___ClassImpl_0; }
	inline Type_t ** get_address_of_ClassImpl_0() { return &___ClassImpl_0; }
	inline void set_ClassImpl_0(Type_t * value)
	{
		___ClassImpl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClassImpl_0), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultValueImpl_1() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___DefaultValueImpl_1)); }
	inline RuntimeObject * get_DefaultValueImpl_1() const { return ___DefaultValueImpl_1; }
	inline RuntimeObject ** get_address_of_DefaultValueImpl_1() { return &___DefaultValueImpl_1; }
	inline void set_DefaultValueImpl_1(RuntimeObject * value)
	{
		___DefaultValueImpl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultValueImpl_1), (void*)value);
	}

	inline static int32_t get_offset_of_MemberImpl_2() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___MemberImpl_2)); }
	inline MemberInfo_t * get_MemberImpl_2() const { return ___MemberImpl_2; }
	inline MemberInfo_t ** get_address_of_MemberImpl_2() { return &___MemberImpl_2; }
	inline void set_MemberImpl_2(MemberInfo_t * value)
	{
		___MemberImpl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MemberImpl_2), (void*)value);
	}

	inline static int32_t get_offset_of_NameImpl_3() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___NameImpl_3)); }
	inline String_t* get_NameImpl_3() const { return ___NameImpl_3; }
	inline String_t** get_address_of_NameImpl_3() { return &___NameImpl_3; }
	inline void set_NameImpl_3(String_t* value)
	{
		___NameImpl_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NameImpl_3), (void*)value);
	}

	inline static int32_t get_offset_of_PositionImpl_4() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___PositionImpl_4)); }
	inline int32_t get_PositionImpl_4() const { return ___PositionImpl_4; }
	inline int32_t* get_address_of_PositionImpl_4() { return &___PositionImpl_4; }
	inline void set_PositionImpl_4(int32_t value)
	{
		___PositionImpl_4 = value;
	}

	inline static int32_t get_offset_of_AttrsImpl_5() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___AttrsImpl_5)); }
	inline int32_t get_AttrsImpl_5() const { return ___AttrsImpl_5; }
	inline int32_t* get_address_of_AttrsImpl_5() { return &___AttrsImpl_5; }
	inline void set_AttrsImpl_5(int32_t value)
	{
		___AttrsImpl_5 = value;
	}

	inline static int32_t get_offset_of_marshalAs_6() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___marshalAs_6)); }
	inline MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * get_marshalAs_6() const { return ___marshalAs_6; }
	inline MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 ** get_address_of_marshalAs_6() { return &___marshalAs_6; }
	inline void set_marshalAs_6(MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * value)
	{
		___marshalAs_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___marshalAs_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshaled_pinvoke
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	char* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshaled_com
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	Il2CppChar* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;
};

// Newtonsoft.Json.Linq.JsonPath.QueryExpression
struct QueryExpression_t8D8090F4AFDEC9493D2C8ECB42B8BEE65AC701FE  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Linq.JsonPath.QueryOperator Newtonsoft.Json.Linq.JsonPath.QueryExpression::Operator
	int32_t ___Operator_0;

public:
	inline static int32_t get_offset_of_Operator_0() { return static_cast<int32_t>(offsetof(QueryExpression_t8D8090F4AFDEC9493D2C8ECB42B8BEE65AC701FE, ___Operator_0)); }
	inline int32_t get_Operator_0() const { return ___Operator_0; }
	inline int32_t* get_address_of_Operator_0() { return &___Operator_0; }
	inline void set_Operator_0(int32_t value)
	{
		___Operator_0 = value;
	}
};


// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 
{
public:
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject * ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;

public:
	inline static int32_t get_offset_of_m_additionalContext_0() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_additionalContext_0)); }
	inline RuntimeObject * get_m_additionalContext_0() const { return ___m_additionalContext_0; }
	inline RuntimeObject ** get_address_of_m_additionalContext_0() { return &___m_additionalContext_0; }
	inline void set_m_additionalContext_0(RuntimeObject * value)
	{
		___m_additionalContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_additionalContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_state_1)); }
	inline int32_t get_m_state_1() const { return ___m_state_1; }
	inline int32_t* get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(int32_t value)
	{
		___m_state_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<Newtonsoft.Json.Linq.JProperty,System.String>
struct Func_2_tB41EA24BD613F187BD2933B97574D86858806F39  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Type>
struct Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.String,System.String>
struct Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A  : public MulticastDelegate_t
{
public:

public:
};


// Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>
struct MethodCall_2_tC314E59E92B5F5B706088F6BF3A46D3946819F58  : public MulticastDelegate_t
{
public:

public:
};


// Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>
struct ObjectConstructor_1_t7930D8596973688461599EADA76C46746D4A2774  : public MulticastDelegate_t
{
public:

public:
};


// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Newtonsoft.Json.Serialization.JsonProperty
struct JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153  : public RuntimeObject
{
public:
	// System.Nullable`1<Newtonsoft.Json.Required> Newtonsoft.Json.Serialization.JsonProperty::_required
	Nullable_1_t71E406DA336F0EB7FEF7EA1BD2ADEA1F1D87AE04  ____required_0;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::_hasExplicitDefaultValue
	bool ____hasExplicitDefaultValue_1;
	// System.Object Newtonsoft.Json.Serialization.JsonProperty::_defaultValue
	RuntimeObject * ____defaultValue_2;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::_hasGeneratedDefaultValue
	bool ____hasGeneratedDefaultValue_3;
	// System.String Newtonsoft.Json.Serialization.JsonProperty::_propertyName
	String_t* ____propertyName_4;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::_skipPropertyNameEscape
	bool ____skipPropertyNameEscape_5;
	// System.Type Newtonsoft.Json.Serialization.JsonProperty::_propertyType
	Type_t * ____propertyType_6;
	// Newtonsoft.Json.Serialization.JsonContract Newtonsoft.Json.Serialization.JsonProperty::<PropertyContract>k__BackingField
	JsonContract_t88E658B782D6361B59D9236A21F4BCD842FE5B76 * ___U3CPropertyContractU3Ek__BackingField_7;
	// System.Type Newtonsoft.Json.Serialization.JsonProperty::<DeclaringType>k__BackingField
	Type_t * ___U3CDeclaringTypeU3Ek__BackingField_8;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.Serialization.JsonProperty::<Order>k__BackingField
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3COrderU3Ek__BackingField_9;
	// System.String Newtonsoft.Json.Serialization.JsonProperty::<UnderlyingName>k__BackingField
	String_t* ___U3CUnderlyingNameU3Ek__BackingField_10;
	// Newtonsoft.Json.Serialization.IValueProvider Newtonsoft.Json.Serialization.JsonProperty::<ValueProvider>k__BackingField
	RuntimeObject* ___U3CValueProviderU3Ek__BackingField_11;
	// Newtonsoft.Json.Serialization.IAttributeProvider Newtonsoft.Json.Serialization.JsonProperty::<AttributeProvider>k__BackingField
	RuntimeObject* ___U3CAttributeProviderU3Ek__BackingField_12;
	// Newtonsoft.Json.JsonConverter Newtonsoft.Json.Serialization.JsonProperty::<Converter>k__BackingField
	JsonConverter_t260CE65C2123A11522CAEFA058859D3E97145B0C * ___U3CConverterU3Ek__BackingField_13;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::<Ignored>k__BackingField
	bool ___U3CIgnoredU3Ek__BackingField_14;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::<Readable>k__BackingField
	bool ___U3CReadableU3Ek__BackingField_15;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::<Writable>k__BackingField
	bool ___U3CWritableU3Ek__BackingField_16;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::<HasMemberAttribute>k__BackingField
	bool ___U3CHasMemberAttributeU3Ek__BackingField_17;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.Serialization.JsonProperty::<IsReference>k__BackingField
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___U3CIsReferenceU3Ek__BackingField_18;
	// System.Nullable`1<Newtonsoft.Json.NullValueHandling> Newtonsoft.Json.Serialization.JsonProperty::<NullValueHandling>k__BackingField
	Nullable_1_tAFB70447D986206A481BA64AACBA05BBB3FC6FD3  ___U3CNullValueHandlingU3Ek__BackingField_19;
	// System.Nullable`1<Newtonsoft.Json.DefaultValueHandling> Newtonsoft.Json.Serialization.JsonProperty::<DefaultValueHandling>k__BackingField
	Nullable_1_tCABD9D241DA88007C674CDE20E054DA5C1B8616A  ___U3CDefaultValueHandlingU3Ek__BackingField_20;
	// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling> Newtonsoft.Json.Serialization.JsonProperty::<ReferenceLoopHandling>k__BackingField
	Nullable_1_t5588FB03718A0EDC42478F750A65136B0044C9D5  ___U3CReferenceLoopHandlingU3Ek__BackingField_21;
	// System.Nullable`1<Newtonsoft.Json.ObjectCreationHandling> Newtonsoft.Json.Serialization.JsonProperty::<ObjectCreationHandling>k__BackingField
	Nullable_1_tF7D98AC236C756C1B9BCB8FA9F36442F3727B8C0  ___U3CObjectCreationHandlingU3Ek__BackingField_22;
	// System.Nullable`1<Newtonsoft.Json.TypeNameHandling> Newtonsoft.Json.Serialization.JsonProperty::<TypeNameHandling>k__BackingField
	Nullable_1_t7AE43E9585ABD3F8778F718FA3D1487AC682D959  ___U3CTypeNameHandlingU3Ek__BackingField_23;
	// System.Predicate`1<System.Object> Newtonsoft.Json.Serialization.JsonProperty::<ShouldSerialize>k__BackingField
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___U3CShouldSerializeU3Ek__BackingField_24;
	// System.Predicate`1<System.Object> Newtonsoft.Json.Serialization.JsonProperty::<ShouldDeserialize>k__BackingField
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___U3CShouldDeserializeU3Ek__BackingField_25;
	// System.Predicate`1<System.Object> Newtonsoft.Json.Serialization.JsonProperty::<GetIsSpecified>k__BackingField
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___U3CGetIsSpecifiedU3Ek__BackingField_26;
	// System.Action`2<System.Object,System.Object> Newtonsoft.Json.Serialization.JsonProperty::<SetIsSpecified>k__BackingField
	Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * ___U3CSetIsSpecifiedU3Ek__BackingField_27;
	// Newtonsoft.Json.JsonConverter Newtonsoft.Json.Serialization.JsonProperty::<ItemConverter>k__BackingField
	JsonConverter_t260CE65C2123A11522CAEFA058859D3E97145B0C * ___U3CItemConverterU3Ek__BackingField_28;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.Serialization.JsonProperty::<ItemIsReference>k__BackingField
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___U3CItemIsReferenceU3Ek__BackingField_29;
	// System.Nullable`1<Newtonsoft.Json.TypeNameHandling> Newtonsoft.Json.Serialization.JsonProperty::<ItemTypeNameHandling>k__BackingField
	Nullable_1_t7AE43E9585ABD3F8778F718FA3D1487AC682D959  ___U3CItemTypeNameHandlingU3Ek__BackingField_30;
	// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling> Newtonsoft.Json.Serialization.JsonProperty::<ItemReferenceLoopHandling>k__BackingField
	Nullable_1_t5588FB03718A0EDC42478F750A65136B0044C9D5  ___U3CItemReferenceLoopHandlingU3Ek__BackingField_31;

public:
	inline static int32_t get_offset_of__required_0() { return static_cast<int32_t>(offsetof(JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153, ____required_0)); }
	inline Nullable_1_t71E406DA336F0EB7FEF7EA1BD2ADEA1F1D87AE04  get__required_0() const { return ____required_0; }
	inline Nullable_1_t71E406DA336F0EB7FEF7EA1BD2ADEA1F1D87AE04 * get_address_of__required_0() { return &____required_0; }
	inline void set__required_0(Nullable_1_t71E406DA336F0EB7FEF7EA1BD2ADEA1F1D87AE04  value)
	{
		____required_0 = value;
	}

	inline static int32_t get_offset_of__hasExplicitDefaultValue_1() { return static_cast<int32_t>(offsetof(JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153, ____hasExplicitDefaultValue_1)); }
	inline bool get__hasExplicitDefaultValue_1() const { return ____hasExplicitDefaultValue_1; }
	inline bool* get_address_of__hasExplicitDefaultValue_1() { return &____hasExplicitDefaultValue_1; }
	inline void set__hasExplicitDefaultValue_1(bool value)
	{
		____hasExplicitDefaultValue_1 = value;
	}

	inline static int32_t get_offset_of__defaultValue_2() { return static_cast<int32_t>(offsetof(JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153, ____defaultValue_2)); }
	inline RuntimeObject * get__defaultValue_2() const { return ____defaultValue_2; }
	inline RuntimeObject ** get_address_of__defaultValue_2() { return &____defaultValue_2; }
	inline void set__defaultValue_2(RuntimeObject * value)
	{
		____defaultValue_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____defaultValue_2), (void*)value);
	}

	inline static int32_t get_offset_of__hasGeneratedDefaultValue_3() { return static_cast<int32_t>(offsetof(JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153, ____hasGeneratedDefaultValue_3)); }
	inline bool get__hasGeneratedDefaultValue_3() const { return ____hasGeneratedDefaultValue_3; }
	inline bool* get_address_of__hasGeneratedDefaultValue_3() { return &____hasGeneratedDefaultValue_3; }
	inline void set__hasGeneratedDefaultValue_3(bool value)
	{
		____hasGeneratedDefaultValue_3 = value;
	}

	inline static int32_t get_offset_of__propertyName_4() { return static_cast<int32_t>(offsetof(JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153, ____propertyName_4)); }
	inline String_t* get__propertyName_4() const { return ____propertyName_4; }
	inline String_t** get_address_of__propertyName_4() { return &____propertyName_4; }
	inline void set__propertyName_4(String_t* value)
	{
		____propertyName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____propertyName_4), (void*)value);
	}

	inline static int32_t get_offset_of__skipPropertyNameEscape_5() { return static_cast<int32_t>(offsetof(JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153, ____skipPropertyNameEscape_5)); }
	inline bool get__skipPropertyNameEscape_5() const { return ____skipPropertyNameEscape_5; }
	inline bool* get_address_of__skipPropertyNameEscape_5() { return &____skipPropertyNameEscape_5; }
	inline void set__skipPropertyNameEscape_5(bool value)
	{
		____skipPropertyNameEscape_5 = value;
	}

	inline static int32_t get_offset_of__propertyType_6() { return static_cast<int32_t>(offsetof(JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153, ____propertyType_6)); }
	inline Type_t * get__propertyType_6() const { return ____propertyType_6; }
	inline Type_t ** get_address_of__propertyType_6() { return &____propertyType_6; }
	inline void set__propertyType_6(Type_t * value)
	{
		____propertyType_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____propertyType_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPropertyContractU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153, ___U3CPropertyContractU3Ek__BackingField_7)); }
	inline JsonContract_t88E658B782D6361B59D9236A21F4BCD842FE5B76 * get_U3CPropertyContractU3Ek__BackingField_7() const { return ___U3CPropertyContractU3Ek__BackingField_7; }
	inline JsonContract_t88E658B782D6361B59D9236A21F4BCD842FE5B76 ** get_address_of_U3CPropertyContractU3Ek__BackingField_7() { return &___U3CPropertyContractU3Ek__BackingField_7; }
	inline void set_U3CPropertyContractU3Ek__BackingField_7(JsonContract_t88E658B782D6361B59D9236A21F4BCD842FE5B76 * value)
	{
		___U3CPropertyContractU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPropertyContractU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDeclaringTypeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153, ___U3CDeclaringTypeU3Ek__BackingField_8)); }
	inline Type_t * get_U3CDeclaringTypeU3Ek__BackingField_8() const { return ___U3CDeclaringTypeU3Ek__BackingField_8; }
	inline Type_t ** get_address_of_U3CDeclaringTypeU3Ek__BackingField_8() { return &___U3CDeclaringTypeU3Ek__BackingField_8; }
	inline void set_U3CDeclaringTypeU3Ek__BackingField_8(Type_t * value)
	{
		___U3CDeclaringTypeU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDeclaringTypeU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3COrderU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153, ___U3COrderU3Ek__BackingField_9)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_U3COrderU3Ek__BackingField_9() const { return ___U3COrderU3Ek__BackingField_9; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_U3COrderU3Ek__BackingField_9() { return &___U3COrderU3Ek__BackingField_9; }
	inline void set_U3COrderU3Ek__BackingField_9(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___U3COrderU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CUnderlyingNameU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153, ___U3CUnderlyingNameU3Ek__BackingField_10)); }
	inline String_t* get_U3CUnderlyingNameU3Ek__BackingField_10() const { return ___U3CUnderlyingNameU3Ek__BackingField_10; }
	inline String_t** get_address_of_U3CUnderlyingNameU3Ek__BackingField_10() { return &___U3CUnderlyingNameU3Ek__BackingField_10; }
	inline void set_U3CUnderlyingNameU3Ek__BackingField_10(String_t* value)
	{
		___U3CUnderlyingNameU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUnderlyingNameU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CValueProviderU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153, ___U3CValueProviderU3Ek__BackingField_11)); }
	inline RuntimeObject* get_U3CValueProviderU3Ek__BackingField_11() const { return ___U3CValueProviderU3Ek__BackingField_11; }
	inline RuntimeObject** get_address_of_U3CValueProviderU3Ek__BackingField_11() { return &___U3CValueProviderU3Ek__BackingField_11; }
	inline void set_U3CValueProviderU3Ek__BackingField_11(RuntimeObject* value)
	{
		___U3CValueProviderU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueProviderU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAttributeProviderU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153, ___U3CAttributeProviderU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CAttributeProviderU3Ek__BackingField_12() const { return ___U3CAttributeProviderU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CAttributeProviderU3Ek__BackingField_12() { return &___U3CAttributeProviderU3Ek__BackingField_12; }
	inline void set_U3CAttributeProviderU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CAttributeProviderU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAttributeProviderU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CConverterU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153, ___U3CConverterU3Ek__BackingField_13)); }
	inline JsonConverter_t260CE65C2123A11522CAEFA058859D3E97145B0C * get_U3CConverterU3Ek__BackingField_13() const { return ___U3CConverterU3Ek__BackingField_13; }
	inline JsonConverter_t260CE65C2123A11522CAEFA058859D3E97145B0C ** get_address_of_U3CConverterU3Ek__BackingField_13() { return &___U3CConverterU3Ek__BackingField_13; }
	inline void set_U3CConverterU3Ek__BackingField_13(JsonConverter_t260CE65C2123A11522CAEFA058859D3E97145B0C * value)
	{
		___U3CConverterU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConverterU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIgnoredU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153, ___U3CIgnoredU3Ek__BackingField_14)); }
	inline bool get_U3CIgnoredU3Ek__BackingField_14() const { return ___U3CIgnoredU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CIgnoredU3Ek__BackingField_14() { return &___U3CIgnoredU3Ek__BackingField_14; }
	inline void set_U3CIgnoredU3Ek__BackingField_14(bool value)
	{
		___U3CIgnoredU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CReadableU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153, ___U3CReadableU3Ek__BackingField_15)); }
	inline bool get_U3CReadableU3Ek__BackingField_15() const { return ___U3CReadableU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CReadableU3Ek__BackingField_15() { return &___U3CReadableU3Ek__BackingField_15; }
	inline void set_U3CReadableU3Ek__BackingField_15(bool value)
	{
		___U3CReadableU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CWritableU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153, ___U3CWritableU3Ek__BackingField_16)); }
	inline bool get_U3CWritableU3Ek__BackingField_16() const { return ___U3CWritableU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CWritableU3Ek__BackingField_16() { return &___U3CWritableU3Ek__BackingField_16; }
	inline void set_U3CWritableU3Ek__BackingField_16(bool value)
	{
		___U3CWritableU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CHasMemberAttributeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153, ___U3CHasMemberAttributeU3Ek__BackingField_17)); }
	inline bool get_U3CHasMemberAttributeU3Ek__BackingField_17() const { return ___U3CHasMemberAttributeU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CHasMemberAttributeU3Ek__BackingField_17() { return &___U3CHasMemberAttributeU3Ek__BackingField_17; }
	inline void set_U3CHasMemberAttributeU3Ek__BackingField_17(bool value)
	{
		___U3CHasMemberAttributeU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CIsReferenceU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153, ___U3CIsReferenceU3Ek__BackingField_18)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_U3CIsReferenceU3Ek__BackingField_18() const { return ___U3CIsReferenceU3Ek__BackingField_18; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_U3CIsReferenceU3Ek__BackingField_18() { return &___U3CIsReferenceU3Ek__BackingField_18; }
	inline void set_U3CIsReferenceU3Ek__BackingField_18(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___U3CIsReferenceU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CNullValueHandlingU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153, ___U3CNullValueHandlingU3Ek__BackingField_19)); }
	inline Nullable_1_tAFB70447D986206A481BA64AACBA05BBB3FC6FD3  get_U3CNullValueHandlingU3Ek__BackingField_19() const { return ___U3CNullValueHandlingU3Ek__BackingField_19; }
	inline Nullable_1_tAFB70447D986206A481BA64AACBA05BBB3FC6FD3 * get_address_of_U3CNullValueHandlingU3Ek__BackingField_19() { return &___U3CNullValueHandlingU3Ek__BackingField_19; }
	inline void set_U3CNullValueHandlingU3Ek__BackingField_19(Nullable_1_tAFB70447D986206A481BA64AACBA05BBB3FC6FD3  value)
	{
		___U3CNullValueHandlingU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CDefaultValueHandlingU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153, ___U3CDefaultValueHandlingU3Ek__BackingField_20)); }
	inline Nullable_1_tCABD9D241DA88007C674CDE20E054DA5C1B8616A  get_U3CDefaultValueHandlingU3Ek__BackingField_20() const { return ___U3CDefaultValueHandlingU3Ek__BackingField_20; }
	inline Nullable_1_tCABD9D241DA88007C674CDE20E054DA5C1B8616A * get_address_of_U3CDefaultValueHandlingU3Ek__BackingField_20() { return &___U3CDefaultValueHandlingU3Ek__BackingField_20; }
	inline void set_U3CDefaultValueHandlingU3Ek__BackingField_20(Nullable_1_tCABD9D241DA88007C674CDE20E054DA5C1B8616A  value)
	{
		___U3CDefaultValueHandlingU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CReferenceLoopHandlingU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153, ___U3CReferenceLoopHandlingU3Ek__BackingField_21)); }
	inline Nullable_1_t5588FB03718A0EDC42478F750A65136B0044C9D5  get_U3CReferenceLoopHandlingU3Ek__BackingField_21() const { return ___U3CReferenceLoopHandlingU3Ek__BackingField_21; }
	inline Nullable_1_t5588FB03718A0EDC42478F750A65136B0044C9D5 * get_address_of_U3CReferenceLoopHandlingU3Ek__BackingField_21() { return &___U3CReferenceLoopHandlingU3Ek__BackingField_21; }
	inline void set_U3CReferenceLoopHandlingU3Ek__BackingField_21(Nullable_1_t5588FB03718A0EDC42478F750A65136B0044C9D5  value)
	{
		___U3CReferenceLoopHandlingU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CObjectCreationHandlingU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153, ___U3CObjectCreationHandlingU3Ek__BackingField_22)); }
	inline Nullable_1_tF7D98AC236C756C1B9BCB8FA9F36442F3727B8C0  get_U3CObjectCreationHandlingU3Ek__BackingField_22() const { return ___U3CObjectCreationHandlingU3Ek__BackingField_22; }
	inline Nullable_1_tF7D98AC236C756C1B9BCB8FA9F36442F3727B8C0 * get_address_of_U3CObjectCreationHandlingU3Ek__BackingField_22() { return &___U3CObjectCreationHandlingU3Ek__BackingField_22; }
	inline void set_U3CObjectCreationHandlingU3Ek__BackingField_22(Nullable_1_tF7D98AC236C756C1B9BCB8FA9F36442F3727B8C0  value)
	{
		___U3CObjectCreationHandlingU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CTypeNameHandlingU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153, ___U3CTypeNameHandlingU3Ek__BackingField_23)); }
	inline Nullable_1_t7AE43E9585ABD3F8778F718FA3D1487AC682D959  get_U3CTypeNameHandlingU3Ek__BackingField_23() const { return ___U3CTypeNameHandlingU3Ek__BackingField_23; }
	inline Nullable_1_t7AE43E9585ABD3F8778F718FA3D1487AC682D959 * get_address_of_U3CTypeNameHandlingU3Ek__BackingField_23() { return &___U3CTypeNameHandlingU3Ek__BackingField_23; }
	inline void set_U3CTypeNameHandlingU3Ek__BackingField_23(Nullable_1_t7AE43E9585ABD3F8778F718FA3D1487AC682D959  value)
	{
		___U3CTypeNameHandlingU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3CShouldSerializeU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153, ___U3CShouldSerializeU3Ek__BackingField_24)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_U3CShouldSerializeU3Ek__BackingField_24() const { return ___U3CShouldSerializeU3Ek__BackingField_24; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_U3CShouldSerializeU3Ek__BackingField_24() { return &___U3CShouldSerializeU3Ek__BackingField_24; }
	inline void set_U3CShouldSerializeU3Ek__BackingField_24(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___U3CShouldSerializeU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CShouldSerializeU3Ek__BackingField_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CShouldDeserializeU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153, ___U3CShouldDeserializeU3Ek__BackingField_25)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_U3CShouldDeserializeU3Ek__BackingField_25() const { return ___U3CShouldDeserializeU3Ek__BackingField_25; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_U3CShouldDeserializeU3Ek__BackingField_25() { return &___U3CShouldDeserializeU3Ek__BackingField_25; }
	inline void set_U3CShouldDeserializeU3Ek__BackingField_25(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___U3CShouldDeserializeU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CShouldDeserializeU3Ek__BackingField_25), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGetIsSpecifiedU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153, ___U3CGetIsSpecifiedU3Ek__BackingField_26)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_U3CGetIsSpecifiedU3Ek__BackingField_26() const { return ___U3CGetIsSpecifiedU3Ek__BackingField_26; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_U3CGetIsSpecifiedU3Ek__BackingField_26() { return &___U3CGetIsSpecifiedU3Ek__BackingField_26; }
	inline void set_U3CGetIsSpecifiedU3Ek__BackingField_26(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___U3CGetIsSpecifiedU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGetIsSpecifiedU3Ek__BackingField_26), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSetIsSpecifiedU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153, ___U3CSetIsSpecifiedU3Ek__BackingField_27)); }
	inline Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * get_U3CSetIsSpecifiedU3Ek__BackingField_27() const { return ___U3CSetIsSpecifiedU3Ek__BackingField_27; }
	inline Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D ** get_address_of_U3CSetIsSpecifiedU3Ek__BackingField_27() { return &___U3CSetIsSpecifiedU3Ek__BackingField_27; }
	inline void set_U3CSetIsSpecifiedU3Ek__BackingField_27(Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * value)
	{
		___U3CSetIsSpecifiedU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSetIsSpecifiedU3Ek__BackingField_27), (void*)value);
	}

	inline static int32_t get_offset_of_U3CItemConverterU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153, ___U3CItemConverterU3Ek__BackingField_28)); }
	inline JsonConverter_t260CE65C2123A11522CAEFA058859D3E97145B0C * get_U3CItemConverterU3Ek__BackingField_28() const { return ___U3CItemConverterU3Ek__BackingField_28; }
	inline JsonConverter_t260CE65C2123A11522CAEFA058859D3E97145B0C ** get_address_of_U3CItemConverterU3Ek__BackingField_28() { return &___U3CItemConverterU3Ek__BackingField_28; }
	inline void set_U3CItemConverterU3Ek__BackingField_28(JsonConverter_t260CE65C2123A11522CAEFA058859D3E97145B0C * value)
	{
		___U3CItemConverterU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CItemConverterU3Ek__BackingField_28), (void*)value);
	}

	inline static int32_t get_offset_of_U3CItemIsReferenceU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153, ___U3CItemIsReferenceU3Ek__BackingField_29)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_U3CItemIsReferenceU3Ek__BackingField_29() const { return ___U3CItemIsReferenceU3Ek__BackingField_29; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_U3CItemIsReferenceU3Ek__BackingField_29() { return &___U3CItemIsReferenceU3Ek__BackingField_29; }
	inline void set_U3CItemIsReferenceU3Ek__BackingField_29(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___U3CItemIsReferenceU3Ek__BackingField_29 = value;
	}

	inline static int32_t get_offset_of_U3CItemTypeNameHandlingU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153, ___U3CItemTypeNameHandlingU3Ek__BackingField_30)); }
	inline Nullable_1_t7AE43E9585ABD3F8778F718FA3D1487AC682D959  get_U3CItemTypeNameHandlingU3Ek__BackingField_30() const { return ___U3CItemTypeNameHandlingU3Ek__BackingField_30; }
	inline Nullable_1_t7AE43E9585ABD3F8778F718FA3D1487AC682D959 * get_address_of_U3CItemTypeNameHandlingU3Ek__BackingField_30() { return &___U3CItemTypeNameHandlingU3Ek__BackingField_30; }
	inline void set_U3CItemTypeNameHandlingU3Ek__BackingField_30(Nullable_1_t7AE43E9585ABD3F8778F718FA3D1487AC682D959  value)
	{
		___U3CItemTypeNameHandlingU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_U3CItemReferenceLoopHandlingU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153, ___U3CItemReferenceLoopHandlingU3Ek__BackingField_31)); }
	inline Nullable_1_t5588FB03718A0EDC42478F750A65136B0044C9D5  get_U3CItemReferenceLoopHandlingU3Ek__BackingField_31() const { return ___U3CItemReferenceLoopHandlingU3Ek__BackingField_31; }
	inline Nullable_1_t5588FB03718A0EDC42478F750A65136B0044C9D5 * get_address_of_U3CItemReferenceLoopHandlingU3Ek__BackingField_31() { return &___U3CItemReferenceLoopHandlingU3Ek__BackingField_31; }
	inline void set_U3CItemReferenceLoopHandlingU3Ek__BackingField_31(Nullable_1_t5588FB03718A0EDC42478F750A65136B0044C9D5  value)
	{
		___U3CItemReferenceLoopHandlingU3Ek__BackingField_31 = value;
	}
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext
struct CreatorPropertyContext_tC1B18FE410FA5FBB198E733C7913623B74EE5082  : public RuntimeObject
{
public:
	// System.String Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext::Name
	String_t* ___Name_0;
	// Newtonsoft.Json.Serialization.JsonProperty Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext::Property
	JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153 * ___Property_1;
	// Newtonsoft.Json.Serialization.JsonProperty Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext::ConstructorProperty
	JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153 * ___ConstructorProperty_2;
	// System.Nullable`1<Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence> Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext::Presence
	Nullable_1_tD1DE14BE70E8895B15FA54F52EE65BB2D090141D  ___Presence_3;
	// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext::Value
	RuntimeObject * ___Value_4;
	// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext::Used
	bool ___Used_5;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(CreatorPropertyContext_tC1B18FE410FA5FBB198E733C7913623B74EE5082, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_Property_1() { return static_cast<int32_t>(offsetof(CreatorPropertyContext_tC1B18FE410FA5FBB198E733C7913623B74EE5082, ___Property_1)); }
	inline JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153 * get_Property_1() const { return ___Property_1; }
	inline JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153 ** get_address_of_Property_1() { return &___Property_1; }
	inline void set_Property_1(JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153 * value)
	{
		___Property_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Property_1), (void*)value);
	}

	inline static int32_t get_offset_of_ConstructorProperty_2() { return static_cast<int32_t>(offsetof(CreatorPropertyContext_tC1B18FE410FA5FBB198E733C7913623B74EE5082, ___ConstructorProperty_2)); }
	inline JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153 * get_ConstructorProperty_2() const { return ___ConstructorProperty_2; }
	inline JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153 ** get_address_of_ConstructorProperty_2() { return &___ConstructorProperty_2; }
	inline void set_ConstructorProperty_2(JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153 * value)
	{
		___ConstructorProperty_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConstructorProperty_2), (void*)value);
	}

	inline static int32_t get_offset_of_Presence_3() { return static_cast<int32_t>(offsetof(CreatorPropertyContext_tC1B18FE410FA5FBB198E733C7913623B74EE5082, ___Presence_3)); }
	inline Nullable_1_tD1DE14BE70E8895B15FA54F52EE65BB2D090141D  get_Presence_3() const { return ___Presence_3; }
	inline Nullable_1_tD1DE14BE70E8895B15FA54F52EE65BB2D090141D * get_address_of_Presence_3() { return &___Presence_3; }
	inline void set_Presence_3(Nullable_1_tD1DE14BE70E8895B15FA54F52EE65BB2D090141D  value)
	{
		___Presence_3 = value;
	}

	inline static int32_t get_offset_of_Value_4() { return static_cast<int32_t>(offsetof(CreatorPropertyContext_tC1B18FE410FA5FBB198E733C7913623B74EE5082, ___Value_4)); }
	inline RuntimeObject * get_Value_4() const { return ___Value_4; }
	inline RuntimeObject ** get_address_of_Value_4() { return &___Value_4; }
	inline void set_Value_4(RuntimeObject * value)
	{
		___Value_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_4), (void*)value);
	}

	inline static int32_t get_offset_of_Used_5() { return static_cast<int32_t>(offsetof(CreatorPropertyContext_tC1B18FE410FA5FBB198E733C7913623B74EE5082, ___Used_5)); }
	inline bool get_Used_5() const { return ___Used_5; }
	inline bool* get_address_of_Used_5() { return &___Used_5; }
	inline void set_Used_5(bool value)
	{
		___Used_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * m_Items[1];

public:
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Newtonsoft.Json.Linq.JToken[]
struct JTokenU5BU5D_tFCD80C12B530C8AAF0295FAC25A1615983BE0FD6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * m_Items[1];

public:
	inline JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0_gshared (RuntimeObject* ___source0, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<!0> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Collection_1_GetEnumerator_mBA3E12623E936348728135E0108ED24DE0E53FAB_gshared (Collection_1_tC70665E043EEEEE0CE76CFA285D8ACDB39D36EB0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m74B9EB9E16A0CC0F80B0AB74B8E1E91C16E6998E_gshared (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Utilities.DynamicProxy`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicProxy_1__ctor_m20F796D10DCF25AE75680CC2217A170CF69204C0_gshared (DynamicProxy_1_t9A17A184D7B630555FC93939070A729E87DD8949 * __this, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Enumerable_ToArray_TisRuntimeObject_m21E15191FE8BDBAE753CC592A1DB55EA3BCE7B5B_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Object Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ObjectConstructor_1_Invoke_mB7BEBABEB6EA87AB49623F789F93ACBF54BFB003_gshared (ObjectConstructor_1_t7930D8596973688461599EADA76C46746D4A2774 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method);
// !0 System.Func`1<System.Object>::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// TResult Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>::Invoke(T,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MethodCall_2_Invoke_m9C81ECB8456EB29485C29A0C466D8C358990D126_gshared (MethodCall_2_tC314E59E92B5F5B706088F6BF3A46D3946819F58 * __this, RuntimeObject * ___target0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisRuntimeObject_m4EC05D3E15710E112A6399BED7BC82A128B5DED4_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);

// System.Void Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0BC73107F4B23034C165D9AC6297E868160844F8 (U3CU3Ec_t5D66199D1B00DA9DB968F2DAE6DFA11B81CAC220 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D (const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter/<ExecuteFilter>d__2::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_U3CU3Em__Finally2_mB94142CEE7DED2C962B6A7882C8CA277F1A4231F (U3CExecuteFilterU3Ed__2_t403E1232303C76A794700DDB836080BA303EDF91 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter/<ExecuteFilter>d__2::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_U3CU3Em__Finally1_m7272F0DE19F3E2D8BBBED965C91557218A055C10 (U3CExecuteFilterU3Ed__2_t403E1232303C76A794700DDB836080BA303EDF91 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.String>::GetEnumerator()
inline Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_inline (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JObject::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * JObject_get_Item_m33DAFA4E2085D2311F0881D9C702B3C4355B10D5 (JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8 * __this, String_t* ___propertyName0, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164 (const RuntimeMethod* method);
// System.String Newtonsoft.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtils_FormatWith_m936F7DFEA6059B46E0063436AA15666DD85ACB07 (String_t* ___format0, RuntimeObject* ___provider1, RuntimeObject * ___arg02, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_m79E97925189BF5031852BE59CA0A8FB3C4852FAD (JsonException_tD4970C15EFCD45318B603FD05766B927594DBEE5 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54 (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Func`2<System.String,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m22403E6E9EC24A3D8103D29D9D66B5EEEA0AC69E (Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.String,System.String>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisString_t_TisString_t_m5E54BE921E960B9AB33FE013CF7ECB8D1CF24A1A (RuntimeObject* ___source0, Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A *, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0_gshared)(___source0, ___selector1, method);
}
// System.String System.String::Join(System.String,System.Collections.Generic.IEnumerable`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m7E55204B5C94F9EB939D144E7EE684D016F90509 (String_t* ___separator0, RuntimeObject* ___values1, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.String Newtonsoft.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtils_FormatWith_m027FB8B7F5B2EDAE70035BC6F216F4FB0960375D (String_t* ___format0, RuntimeObject* ___provider1, RuntimeObject * ___arg02, RuntimeObject * ___arg13, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter/<ExecuteFilter>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_System_IDisposable_Dispose_mF512823D3ECFD18EB49353C3B75403063BB2DE09 (U3CExecuteFilterU3Ed__2_t403E1232303C76A794700DDB836080BA303EDF91 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7 (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter/<ExecuteFilter>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2__ctor_mCA0DF659D0095A0E33B7E88E60CD7E4D133BC3AA (U3CExecuteFilterU3Ed__2_t403E1232303C76A794700DDB836080BA303EDF91 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter/<ExecuteFilter>d__2::System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExecuteFilterU3Ed__2_System_Collections_Generic_IEnumerableU3CNewtonsoft_Json_Linq_JTokenU3E_GetEnumerator_m266A2DFD21EEF6858372E00E079C365A1FEB829C (U3CExecuteFilterU3Ed__2_t403E1232303C76A794700DDB836080BA303EDF91 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2D7E2C6C917DC4781D1DBB01987EEAF7839BB03A (U3CU3Ec_t3FD81A3E346F8B5DB91861FB397D9113C7A245AE * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsGenericType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_IsGenericType_mF6339A55809CD76D869DD7E331D8F70CFFB4CD97 (Type_t * ___type0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.String Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo::get_ContractTypeName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ImmutableCollectionTypeInfo_get_ContractTypeName_m46FA9FB69F11B3D9F1E46C76DD2D90F6C7F9E429_inline (ImmutableCollectionTypeInfo_tAB8E5C2873442E1F12E93D4CD19CC69E5FBEBAB4 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo::set_ContractTypeName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImmutableCollectionTypeInfo_set_ContractTypeName_m2DE0B41DA93F4767C59C962CFFD543B9926B462D_inline (ImmutableCollectionTypeInfo_tAB8E5C2873442E1F12E93D4CD19CC69E5FBEBAB4 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo::set_CreatedTypeName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImmutableCollectionTypeInfo_set_CreatedTypeName_m36CF21057B87DE14B93986BA2C5B1A67E19690B6_inline (ImmutableCollectionTypeInfo_tAB8E5C2873442E1F12E93D4CD19CC69E5FBEBAB4 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo::set_BuilderTypeName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImmutableCollectionTypeInfo_set_BuilderTypeName_m0CF526403AABF9641E4EAA02CAB067FAD66D0DB1_inline (ImmutableCollectionTypeInfo_tAB8E5C2873442E1F12E93D4CD19CC69E5FBEBAB4 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDescendantsU3Ed__36_U3CU3Em__Finally2_mDFA832D55231B66064C2B13EF6A8FD4A4E15B465 (U3CGetDescendantsU3Ed__36_t10B0A6A787C36583D3326E547212B76D05CBBF89 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDescendantsU3Ed__36_U3CU3Em__Finally1_m3D00106CC8CBBE9094896DC5CA07D4A317B7EFB1 (U3CGetDescendantsU3Ed__36_t10B0A6A787C36583D3326E547212B76D05CBBF89 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JContainer::Descendants()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JContainer_Descendants_m9EA99DA3990A0F5F895D88523E85E263BE30351C (JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDescendantsU3Ed__36_System_IDisposable_Dispose_m16063B8D979579596510D3CCA669930261C25C9A (U3CGetDescendantsU3Ed__36_t10B0A6A787C36583D3326E547212B76D05CBBF89 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDescendantsU3Ed__36__ctor_m6F686AFD98522D8ACF0E6607B6D2A9FD8B34CCD9 (U3CGetDescendantsU3Ed__36_t10B0A6A787C36583D3326E547212B76D05CBBF89 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetDescendantsU3Ed__36_System_Collections_Generic_IEnumerableU3CNewtonsoft_Json_Linq_JTokenU3E_GetEnumerator_m4C531E8AB3876DFB7A5FBB863FB6DFBE75B5E432 (U3CGetDescendantsU3Ed__36_t10B0A6A787C36583D3326E547212B76D05CBBF89 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__63::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__63_U3CU3Em__Finally1_mFA82A09BCFC31DCF69985F7A5E941C70A62E04E2 (U3CGetEnumeratorU3Ed__63_t412E336C65F7FA64E688926F38AEA48E9F5709E0 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<!0> System.Collections.ObjectModel.Collection`1<Newtonsoft.Json.Linq.JToken>::GetEnumerator()
inline RuntimeObject* Collection_1_GetEnumerator_m2AEC56F8C16D493D95D378D8EF829311CE9EE259 (Collection_1_t43D925574A6394ADD9A2F69C9BE205B620E3A63D * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Collection_1_t43D925574A6394ADD9A2F69C9BE205B620E3A63D *, const RuntimeMethod*))Collection_1_GetEnumerator_mBA3E12623E936348728135E0108ED24DE0E53FAB_gshared)(__this, method);
}
// System.String Newtonsoft.Json.Linq.JProperty::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* JProperty_get_Name_mDEF17388577064192224A03308BE8CE285E8227D_inline (JProperty_t6B592BFC6895980207CC8356187EB1D0328A328E * __this, const RuntimeMethod* method);
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JProperty::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * JProperty_get_Value_mDF54FDCE172670DDB0DBF41ABE51ECEF733842D9 (JProperty_t6B592BFC6895980207CC8356187EB1D0328A328E * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Linq.JToken>::.ctor(!0,!1)
inline void KeyValuePair_2__ctor_mBC9F11B2A7A04FE1701EBEB9EC82C1CCEB077FEB (KeyValuePair_2_t2D21ACE03FBDFCC8BD8D4EFA6275F975E2D03FEB * __this, String_t* ___key0, JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t2D21ACE03FBDFCC8BD8D4EFA6275F975E2D03FEB *, String_t*, JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 *, const RuntimeMethod*))KeyValuePair_2__ctor_m74B9EB9E16A0CC0F80B0AB74B8E1E91C16E6998E_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__63::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__63_System_IDisposable_Dispose_m5A49B85993656AEE462CFA0E140FFD657250E721 (U3CGetEnumeratorU3Ed__63_t412E336C65F7FA64E688926F38AEA48E9F5709E0 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JProperty> Newtonsoft.Json.Linq.JObject::Properties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JObject_Properties_mE6A3C04F33181FC446E9D957363EE2F61DC2AF63 (JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<Newtonsoft.Json.Linq.JProperty,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m4456A690D2B96699A625B738212EB7EFAAE3830C (Func_2_tB41EA24BD613F187BD2933B97574D86858806F39 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tB41EA24BD613F187BD2933B97574D86858806F39 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<Newtonsoft.Json.Linq.JProperty,System.String>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisJProperty_t6B592BFC6895980207CC8356187EB1D0328A328E_TisString_t_m953DB4668EA59942F4B369B69F3616624C94612E (RuntimeObject* ___source0, Func_2_tB41EA24BD613F187BD2933B97574D86858806F39 * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tB41EA24BD613F187BD2933B97574D86858806F39 *, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0_gshared)(___source0, ___selector1, method);
}
// System.Void Newtonsoft.Json.Utilities.DynamicProxy`1<Newtonsoft.Json.Linq.JObject>::.ctor()
inline void DynamicProxy_1__ctor_m5A251B5BD51182209E71F26BF52ED7D40A46CA94 (DynamicProxy_1_t5E4033CA972DA5E68D6030419A259D2D98635B21 * __this, const RuntimeMethod* method)
{
	((  void (*) (DynamicProxy_1_t5E4033CA972DA5E68D6030419A259D2D98635B21 *, const RuntimeMethod*))DynamicProxy_1__ctor_m20F796D10DCF25AE75680CC2217A170CF69204C0_gshared)(__this, method);
}
// System.Void Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1__ctor_mD367031322091682F76381B43EE0B12ED2390C4A (U3CGetEnumeratorU3Ed__1_t707CB3D09C2C5F8296E6BCCA37C54250187B0587 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JProperty/JPropertyList::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JPropertyList_GetEnumerator_mEACADDDE8D0733E9F73034F3FA9797E67C0B8D8C (JPropertyList_t40544FA83585374547FB7FFD7472CB16A930B95B * __this, const RuntimeMethod* method);
// System.Void System.IndexOutOfRangeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_m84F1D8D46E48427F4DFAC350A5F1E0D345C68523 (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Utilities.DynamicProxy`1<Newtonsoft.Json.Linq.JValue>::.ctor()
inline void DynamicProxy_1__ctor_mAA46618323CEDF30460389F84988E73A39D53252 (DynamicProxy_1_t1BABB854FFC43EED36459900606F23D89F1D0B22 * __this, const RuntimeMethod* method)
{
	((  void (*) (DynamicProxy_1_t1BABB854FFC43EED36459900606F23D89F1D0B22 *, const RuntimeMethod*))DynamicProxy_1__ctor_m20F796D10DCF25AE75680CC2217A170CF69204C0_gshared)(__this, method);
}
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3 (MethodBase_t * __this, RuntimeObject * ___obj0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters1, const RuntimeMethod* method);
// System.Int32 System.Runtime.CompilerServices.RuntimeHelpers::GetHashCode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeHelpers_GetHashCode_mDA6691034E245B5F619B108F3597725FF7862DA1 (RuntimeObject * ___o0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8BF93306BBC87D527748FCC0E30A786D1317C8DE (U3CU3Ec_tB8728C7EEAE5E87C536027C1B1F3092AC1FC7AE4 * __this, const RuntimeMethod* method);
// System.String Newtonsoft.Json.Serialization.JsonProperty::get_PropertyName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* JsonProperty_get_PropertyName_m4020136CA5389A6AE7879C81BBDEF9526916E967_inline (JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Serialization.JsonTypeReflector/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0292EC7082FC45D7C7A1744D23E63209D54F12F5 (U3CU3Ec_t432D27D46D79D966CF0380A55300D9CB205C4280 * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Type>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m84B84849EC5A4CBDFA2EAC12D68E99B17D87EAFD (Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Type>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisRuntimeObject_TisType_t_m9172D480F276E4D46B7848B73E3042F3A9771258 (RuntimeObject* ___source0, Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF *, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0_gshared)(___source0, ___selector1, method);
}
// !!0[] System.Linq.Enumerable::ToArray<System.Type>(System.Collections.Generic.IEnumerable`1<!!0>)
inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* Enumerable_ToArray_TisType_t_mDB744C25D97BD49BD70979DC17395D271EA84945 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m21E15191FE8BDBAE753CC592A1DB55EA3BCE7B5B_gshared)(___source0, method);
}
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * Type_GetConstructor_m98D609FCFA8EB6E54A9FF705D77EEE16603B278C (Type_t * __this, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___types0, const RuntimeMethod* method);
// System.Boolean System.Reflection.ConstructorInfo::op_Inequality(System.Reflection.ConstructorInfo,System.Reflection.ConstructorInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConstructorInfo_op_Inequality_m14EF5800ABCDCE484FEC9C73ED6D84E8343442CC (ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * ___left0, ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * ___right1, const RuntimeMethod* method);
// Newtonsoft.Json.Utilities.ReflectionDelegateFactory Newtonsoft.Json.Serialization.JsonTypeReflector::get_ReflectionDelegateFactory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReflectionDelegateFactory_t22E2F13135925F2E24B37244B5747D3A250D7E27 * JsonTypeReflector_get_ReflectionDelegateFactory_mA47753ACF65AAD4E9A42E4861CE06DA3C030B7A4 (const RuntimeMethod* method);
// System.Object Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>::Invoke(System.Object[])
inline RuntimeObject * ObjectConstructor_1_Invoke_mB7BEBABEB6EA87AB49623F789F93ACBF54BFB003 (ObjectConstructor_1_t7930D8596973688461599EADA76C46746D4A2774 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (ObjectConstructor_1_t7930D8596973688461599EADA76C46746D4A2774 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))ObjectConstructor_1_Invoke_mB7BEBABEB6EA87AB49623F789F93ACBF54BFB003_gshared)(__this, ___args0, method);
}
// !0 System.Func`1<System.Object>::Invoke()
inline RuntimeObject * Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726 (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 *, const RuntimeMethod*))Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_gshared)(__this, method);
}
// System.Void Newtonsoft.Json.JsonException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_mE5B74E698B3163A940937CC18CCFAF9F3C102D43 (JsonException_tD4970C15EFCD45318B603FD05766B927594DBEE5 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Object System.Reflection.ConstructorInfo::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ConstructorInfo_Invoke_m8DF5D6F53038C7B6443EEA82D922724F39CD2906 (ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_U3CU3Em__Finally2_mA082782BC915471487A4591179C5503075B8DCBD (U3CExecuteFilterU3Ed__2_t907335DF609CA7FBD618781EFF46DEC81992AE8D * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_U3CU3Em__Finally1_m0CE5F3471224020C65ACFD3EF8DEDDF5264A243A (U3CExecuteFilterU3Ed__2_t907335DF609CA7FBD618781EFF46DEC81992AE8D * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_System_IDisposable_Dispose_m2BE771E147904AE0BE1E3F7B7D72657E3A9C8050 (U3CExecuteFilterU3Ed__2_t907335DF609CA7FBD618781EFF46DEC81992AE8D * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2__ctor_mC3F422D0D586B89EA98437579CED77EEE6128417 (U3CExecuteFilterU3Ed__2_t907335DF609CA7FBD618781EFF46DEC81992AE8D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2::System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExecuteFilterU3Ed__2_System_Collections_Generic_IEnumerableU3CNewtonsoft_Json_Linq_JTokenU3E_GetEnumerator_mAA8871D42186AE786169F5034F938698A06E8326 (U3CExecuteFilterU3Ed__2_t907335DF609CA7FBD618781EFF46DEC81992AE8D * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_U3CU3Em__Finally2_mB7B56252E1D949F9B93F71DE4F8D03C08D9D7933 (U3CExecuteFilterU3Ed__2_t03BD833AD36FDB8FE0ECFB31585FDBD468904E80 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_U3CU3Em__Finally1_m7FAC3D88846949E76A592980AE8BFEA5881252DA (U3CExecuteFilterU3Ed__2_t03BD833AD36FDB8FE0ECFB31585FDBD468904E80 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JContainer::DescendantsAndSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JContainer_DescendantsAndSelf_m5500A4C4D46DD912A01607C36170F7F15CE9130C (JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_System_IDisposable_Dispose_mE1B63A7E42D7D5B0666F0C7D32D367356339CC00 (U3CExecuteFilterU3Ed__2_t03BD833AD36FDB8FE0ECFB31585FDBD468904E80 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2__ctor_m0A24C948C0E9264B7D1F42E47D07EE72CD66F3F8 (U3CExecuteFilterU3Ed__2_t03BD833AD36FDB8FE0ECFB31585FDBD468904E80 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2::System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExecuteFilterU3Ed__2_System_Collections_Generic_IEnumerableU3CNewtonsoft_Json_Linq_JTokenU3E_GetEnumerator_m2F4DFE7F0A96DA2C1E3742DAA0BFA5C70DCC0A25 (U3CExecuteFilterU3Ed__2_t03BD833AD36FDB8FE0ECFB31585FDBD468904E80 * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// TResult Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>::Invoke(T,System.Object[])
inline RuntimeObject * MethodCall_2_Invoke_m9C81ECB8456EB29485C29A0C466D8C358990D126 (MethodCall_2_tC314E59E92B5F5B706088F6BF3A46D3946819F58 * __this, RuntimeObject * ___target0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (MethodCall_2_tC314E59E92B5F5B706088F6BF3A46D3946819F58 *, RuntimeObject *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))MethodCall_2_Invoke_m9C81ECB8456EB29485C29A0C466D8C358990D126_gshared)(__this, ___target0, ___args1, method);
}
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE21B84D8EC87E7D72714DEC1E5C3789CDE26567E (U3CU3Ec_tE335300CBEC7EEE18397C46C3EF34C37AAA33A56 * __this, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Any<System.Reflection.ParameterInfo>(System.Collections.Generic.IEnumerable`1<!!0>)
inline bool Enumerable_Any_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_mC34A3CF45962BF5A4FDF04D029B51F4B0CFD938F (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_m4EC05D3E15710E112A6399BED7BC82A128B5DED4_gshared)(___source0, method);
}
// System.Boolean System.Reflection.FieldInfo::get_IsPrivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_get_IsPrivate_m33AC8E111CE7497070E6F65F11E68CD536D42072 (FieldInfo_t * __this, const RuntimeMethod* method);
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsVirtual(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionUtils_IsVirtual_mA6CA39072FE9A7228CF38A063981E0355C300456 (PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method);
// System.Reflection.MethodInfo Newtonsoft.Json.Utilities.ReflectionUtils::GetBaseDefinition(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * ReflectionUtils_GetBaseDefinition_m7CF8AAD4B516046E7B8428A7A5C5A7CFC7F4EE2B (PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__2::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_U3CU3Em__Finally1_mC5320DD19987F6AB5FABF54D05F16F2BA02A7400 (U3CExecuteFilterU3Ed__2_tC2F023DC65A1ED62FB71C74885871250B3D59507 * __this, const RuntimeMethod* method);
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JsonPath.PathFilter::GetNextScanValue(Newtonsoft.Json.Linq.JToken,Newtonsoft.Json.Linq.JToken,Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * PathFilter_GetNextScanValue_m62D065EE59DDA14A604D790984919D568180BDDB (JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * ___originalParent0, JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * ___container1, JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * ___value2, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_System_IDisposable_Dispose_m7D9B1C2DDC17DBE3F9C48D64A6B3A05D217FAC64 (U3CExecuteFilterU3Ed__2_tC2F023DC65A1ED62FB71C74885871250B3D59507 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2__ctor_m9C87D66B515F164D0800D09B6DD1B2D1733C4C4F (U3CExecuteFilterU3Ed__2_tC2F023DC65A1ED62FB71C74885871250B3D59507 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__2::System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExecuteFilterU3Ed__2_System_Collections_Generic_IEnumerableU3CNewtonsoft_Json_Linq_JTokenU3E_GetEnumerator_m816477A9BF02F708E8793C52B679C98733A2AD93 (U3CExecuteFilterU3Ed__2_tC2F023DC65A1ED62FB71C74885871250B3D59507 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_U3CU3Em__Finally2_m1AD0EC97391CB5D7A95D3DCEBB3939A7BD106916 (U3CExecuteFilterU3Ed__2_t1076E6004461A437C119CCE96763DBE824D16241 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_U3CU3Em__Finally1_mA253A23BB0E8EBB5AEF092EA096FEF2382C3C95A (U3CExecuteFilterU3Ed__2_t1076E6004461A437C119CCE96763DBE824D16241 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_System_IDisposable_Dispose_mBE4CBFB5D291C2CB4933C6AC16BE52F71CECC1CE (U3CExecuteFilterU3Ed__2_t1076E6004461A437C119CCE96763DBE824D16241 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2__ctor_mA5D3C85349B2531D811591BABE707FE92880B9B3 (U3CExecuteFilterU3Ed__2_t1076E6004461A437C119CCE96763DBE824D16241 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2::System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExecuteFilterU3Ed__2_System_Collections_Generic_IEnumerableU3CNewtonsoft_Json_Linq_JTokenU3E_GetEnumerator_m3A064777B2FF0038D2BC367CA31FCD6FF709141B (U3CExecuteFilterU3Ed__2_t1076E6004461A437C119CCE96763DBE824D16241 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JObject/JObjectDynamicProxy/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m47A5913D73676899FDA7E261D8BD77E96A14DAAD (U3CU3Ec_t079339D53FDBCBD92F5779F7F22AB10461970CA5 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m8B9754D1C5216B15C5F89C01E8C4095917E0F9B3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t5D66199D1B00DA9DB968F2DAE6DFA11B81CAC220_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t5D66199D1B00DA9DB968F2DAE6DFA11B81CAC220 * L_0 = (U3CU3Ec_t5D66199D1B00DA9DB968F2DAE6DFA11B81CAC220 *)il2cpp_codegen_object_new(U3CU3Ec_t5D66199D1B00DA9DB968F2DAE6DFA11B81CAC220_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m0BC73107F4B23034C165D9AC6297E868160844F8(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t5D66199D1B00DA9DB968F2DAE6DFA11B81CAC220_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t5D66199D1B00DA9DB968F2DAE6DFA11B81CAC220_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0BC73107F4B23034C165D9AC6297E868160844F8 (U3CU3Ec_t5D66199D1B00DA9DB968F2DAE6DFA11B81CAC220 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter/<>c::<ExecuteFilter>b__2_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CExecuteFilterU3Eb__2_0_m9FB0ED40AC22676FB8AAB1050D9612D07584AC0B (U3CU3Ec_t5D66199D1B00DA9DB968F2DAE6DFA11B81CAC220 * __this, String_t* ___n0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___n0;
		String_t* L_1;
		L_1 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D, L_0, _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D, /*hidden argument*/NULL);
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
// System.Void Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter/<ExecuteFilter>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2__ctor_mCA0DF659D0095A0E33B7E88E60CD7E4D133BC3AA (U3CExecuteFilterU3Ed__2_t403E1232303C76A794700DDB836080BA303EDF91 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter/<ExecuteFilter>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_System_IDisposable_Dispose_mF512823D3ECFD18EB49353C3B75403063BB2DE09 (U3CExecuteFilterU3Ed__2_t403E1232303C76A794700DDB836080BA303EDF91 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)-4)))) > ((uint32_t)1))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_002f;
		}
	}

IL_0012:
	{
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)((int32_t)-4))))
			{
				goto IL_001e;
			}
		}

IL_0018:
		{
			int32_t L_4 = V_0;
			if ((((int32_t)L_4) == ((int32_t)1)))
			{
				goto IL_001e;
			}
		}

IL_001c:
		{
			IL2CPP_LEAVE(0x2F, FINALLY_0028);
		}

IL_001e:
		{
		}

IL_001f:
		try
		{ // begin try (depth: 2)
			IL2CPP_LEAVE(0x2F, FINALLY_0021);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0021;
		}

FINALLY_0021:
		{ // begin finally (depth: 2)
			U3CExecuteFilterU3Ed__2_U3CU3Em__Finally2_mB94142CEE7DED2C962B6A7882C8CA277F1A4231F(__this, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(33)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(33)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x2F, FINALLY_0028);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0028;
	}

FINALLY_0028:
	{ // begin finally (depth: 1)
		U3CExecuteFilterU3Ed__2_U3CU3Em__Finally1_m7272F0DE19F3E2D8BBBED965C91557218A055C10(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(40)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(40)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2F, IL_002f)
	}

IL_002f:
	{
		return;
	}
}
// System.Boolean Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter/<ExecuteFilter>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CExecuteFilterU3Ed__2_MoveNext_m0D87120EA7F0A11C004A19374061191D3A297F40 (U3CExecuteFilterU3Ed__2_t403E1232303C76A794700DDB836080BA303EDF91 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t7A54AEED0B537A132EE02BA2A10621CDA1900932_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t8AEDD013FF9124B1315F51E8F23014339F14BCFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	FieldMultipleFilter_t754130B1A502B7441BA5F1BB191687E4162B31C6 * V_2 = NULL;
	JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * V_3 = NULL;
	JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * G_B17_0 = NULL;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * G_B17_1 = NULL;
	String_t* G_B17_2 = NULL;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * G_B17_3 = NULL;
	String_t* G_B17_4 = NULL;
	Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * G_B16_0 = NULL;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * G_B16_1 = NULL;
	String_t* G_B16_2 = NULL;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * G_B16_3 = NULL;
	String_t* G_B16_4 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			FieldMultipleFilter_t754130B1A502B7441BA5F1BB191687E4162B31C6 * L_1 = __this->get_U3CU3E4__this_5();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_001f;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_00c0;
			}
		}

IL_0018:
		{
			V_0 = (bool)0;
			goto IL_019e;
		}

IL_001f:
		{
			__this->set_U3CU3E1__state_0((-1));
			RuntimeObject* L_4 = __this->get_current_3();
			NullCheck(L_4);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>::GetEnumerator() */, IEnumerable_1_t7A54AEED0B537A132EE02BA2A10621CDA1900932_il2cpp_TypeInfo_var, L_4);
			__this->set_U3CU3E7__wrap1_8(L_5);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_0176;
		}

IL_0044:
		{
			RuntimeObject* L_6 = __this->get_U3CU3E7__wrap1_8();
			NullCheck(L_6);
			JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_7;
			L_7 = InterfaceFuncInvoker0< JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken>::get_Current() */, IEnumerator_1_t8AEDD013FF9124B1315F51E8F23014339F14BCFB_il2cpp_TypeInfo_var, L_6);
			V_3 = L_7;
			JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_8 = V_3;
			__this->set_U3CoU3E5__3_9(((JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8 *)IsInstClass((RuntimeObject*)L_8, JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8_il2cpp_TypeInfo_var)));
			JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8 * L_9 = __this->get_U3CoU3E5__3_9();
			if (!L_9)
			{
				goto IL_0113;
			}
		}

IL_0067:
		{
			FieldMultipleFilter_t754130B1A502B7441BA5F1BB191687E4162B31C6 * L_10 = V_2;
			NullCheck(L_10);
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_11 = L_10->get_Names_0();
			NullCheck(L_11);
			Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  L_12;
			L_12 = List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF(L_11, /*hidden argument*/List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap3_10(L_12);
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			goto IL_00f2;
		}

IL_0082:
		{
			Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * L_13 = __this->get_address_of_U3CU3E7__wrap3_10();
			String_t* L_14;
			L_14 = Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_inline((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)L_13, /*hidden argument*/Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var);
			__this->set_U3CnameU3E5__5_11(L_14);
			JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8 * L_15 = __this->get_U3CoU3E5__3_9();
			String_t* L_16 = __this->get_U3CnameU3E5__5_11();
			NullCheck(L_15);
			JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_17;
			L_17 = JObject_get_Item_m33DAFA4E2085D2311F0881D9C702B3C4355B10D5(L_15, L_16, /*hidden argument*/NULL);
			V_4 = L_17;
			JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_18 = V_4;
			if (!L_18)
			{
				goto IL_00c8;
			}
		}

IL_00aa:
		{
			JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_19 = V_4;
			__this->set_U3CU3E2__current_1(L_19);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_019e;
		}

IL_00c0:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-4));
		}

IL_00c8:
		{
			bool L_20 = __this->get_errorWhenNoMatch_6();
			if (!L_20)
			{
				goto IL_00eb;
			}
		}

IL_00d0:
		{
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var)));
			CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_21;
			L_21 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
			String_t* L_22 = __this->get_U3CnameU3E5__5_11();
			String_t* L_23;
			L_23 = StringUtils_FormatWith_m936F7DFEA6059B46E0063436AA15666DD85ACB07(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB969B3171749B465931FAFC79BF975A5CDECBABF)), L_21, L_22, /*hidden argument*/NULL);
			JsonException_tD4970C15EFCD45318B603FD05766B927594DBEE5 * L_24 = (JsonException_tD4970C15EFCD45318B603FD05766B927594DBEE5 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_tD4970C15EFCD45318B603FD05766B927594DBEE5_il2cpp_TypeInfo_var)));
			JsonException__ctor_m79E97925189BF5031852BE59CA0A8FB3C4852FAD(L_24, L_23, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CExecuteFilterU3Ed__2_MoveNext_m0D87120EA7F0A11C004A19374061191D3A297F40_RuntimeMethod_var)));
		}

IL_00eb:
		{
			__this->set_U3CnameU3E5__5_11((String_t*)NULL);
		}

IL_00f2:
		{
			Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * L_25 = __this->get_address_of_U3CU3E7__wrap3_10();
			bool L_26;
			L_26 = Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)L_25, /*hidden argument*/Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
			if (L_26)
			{
				goto IL_0082;
			}
		}

IL_00ff:
		{
			U3CExecuteFilterU3Ed__2_U3CU3Em__Finally2_mB94142CEE7DED2C962B6A7882C8CA277F1A4231F(__this, /*hidden argument*/NULL);
			Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * L_27 = __this->get_address_of_U3CU3E7__wrap3_10();
			il2cpp_codegen_initobj(L_27, sizeof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B ));
			goto IL_016f;
		}

IL_0113:
		{
			bool L_28 = __this->get_errorWhenNoMatch_6();
			if (!L_28)
			{
				goto IL_016f;
			}
		}

IL_011b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var)));
			CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_29;
			L_29 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
			FieldMultipleFilter_t754130B1A502B7441BA5F1BB191687E4162B31C6 * L_30 = V_2;
			NullCheck(L_30);
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_31 = L_30->get_Names_0();
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_t5D66199D1B00DA9DB968F2DAE6DFA11B81CAC220_il2cpp_TypeInfo_var)));
			Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * L_32 = ((U3CU3Ec_t5D66199D1B00DA9DB968F2DAE6DFA11B81CAC220_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_t5D66199D1B00DA9DB968F2DAE6DFA11B81CAC220_il2cpp_TypeInfo_var))))->get_U3CU3E9__2_0_1();
			Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * L_33 = L_32;
			G_B16_0 = L_33;
			G_B16_1 = L_31;
			G_B16_2 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D));
			G_B16_3 = L_29;
			G_B16_4 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3B58677A7189FC22B99E1EA83A895B69BDF1D257));
			if (L_33)
			{
				G_B17_0 = L_33;
				G_B17_1 = L_31;
				G_B17_2 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D));
				G_B17_3 = L_29;
				G_B17_4 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3B58677A7189FC22B99E1EA83A895B69BDF1D257));
				goto IL_014f;
			}
		}

IL_0138:
		{
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_t5D66199D1B00DA9DB968F2DAE6DFA11B81CAC220_il2cpp_TypeInfo_var)));
			U3CU3Ec_t5D66199D1B00DA9DB968F2DAE6DFA11B81CAC220 * L_34 = ((U3CU3Ec_t5D66199D1B00DA9DB968F2DAE6DFA11B81CAC220_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_t5D66199D1B00DA9DB968F2DAE6DFA11B81CAC220_il2cpp_TypeInfo_var))))->get_U3CU3E9_0();
			Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * L_35 = (Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A_il2cpp_TypeInfo_var)));
			Func_2__ctor_m22403E6E9EC24A3D8103D29D9D66B5EEEA0AC69E(L_35, L_34, (intptr_t)((intptr_t)((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_U3CExecuteFilterU3Eb__2_0_m9FB0ED40AC22676FB8AAB1050D9612D07584AC0B_RuntimeMethod_var))), /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Func_2__ctor_m22403E6E9EC24A3D8103D29D9D66B5EEEA0AC69E_RuntimeMethod_var)));
			Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * L_36 = L_35;
			((U3CU3Ec_t5D66199D1B00DA9DB968F2DAE6DFA11B81CAC220_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_t5D66199D1B00DA9DB968F2DAE6DFA11B81CAC220_il2cpp_TypeInfo_var))))->set_U3CU3E9__2_0_1(L_36);
			G_B17_0 = L_36;
			G_B17_1 = G_B16_1;
			G_B17_2 = G_B16_2;
			G_B17_3 = G_B16_3;
			G_B17_4 = G_B16_4;
		}

IL_014f:
		{
			RuntimeObject* L_37;
			L_37 = Enumerable_Select_TisString_t_TisString_t_m5E54BE921E960B9AB33FE013CF7ECB8D1CF24A1A(G_B17_1, G_B17_0, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Enumerable_Select_TisString_t_TisString_t_m5E54BE921E960B9AB33FE013CF7ECB8D1CF24A1A_RuntimeMethod_var)));
			String_t* L_38;
			L_38 = String_Join_m7E55204B5C94F9EB939D144E7EE684D016F90509(G_B17_2, L_37, /*hidden argument*/NULL);
			JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_39 = V_3;
			NullCheck(L_39);
			Type_t * L_40;
			L_40 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_39, /*hidden argument*/NULL);
			NullCheck(L_40);
			String_t* L_41;
			L_41 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_40);
			String_t* L_42;
			L_42 = StringUtils_FormatWith_m027FB8B7F5B2EDAE70035BC6F216F4FB0960375D(G_B17_4, G_B17_3, L_38, L_41, /*hidden argument*/NULL);
			JsonException_tD4970C15EFCD45318B603FD05766B927594DBEE5 * L_43 = (JsonException_tD4970C15EFCD45318B603FD05766B927594DBEE5 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_tD4970C15EFCD45318B603FD05766B927594DBEE5_il2cpp_TypeInfo_var)));
			JsonException__ctor_m79E97925189BF5031852BE59CA0A8FB3C4852FAD(L_43, L_42, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_43, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CExecuteFilterU3Ed__2_MoveNext_m0D87120EA7F0A11C004A19374061191D3A297F40_RuntimeMethod_var)));
		}

IL_016f:
		{
			__this->set_U3CoU3E5__3_9((JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8 *)NULL);
		}

IL_0176:
		{
			RuntimeObject* L_44 = __this->get_U3CU3E7__wrap1_8();
			NullCheck(L_44);
			bool L_45;
			L_45 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_44);
			if (L_45)
			{
				goto IL_0044;
			}
		}

IL_0186:
		{
			U3CExecuteFilterU3Ed__2_U3CU3Em__Finally1_m7272F0DE19F3E2D8BBBED965C91557218A055C10(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_8((RuntimeObject*)NULL);
			V_0 = (bool)0;
			goto IL_019e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0197;
	}

FAULT_0197:
	{ // begin fault (depth: 1)
		U3CExecuteFilterU3Ed__2_System_IDisposable_Dispose_mF512823D3ECFD18EB49353C3B75403063BB2DE09(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(407)
	} // end fault
	IL2CPP_CLEANUP(407)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_019e:
	{
		bool L_46 = V_0;
		return L_46;
	}
}
// System.Void Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter/<ExecuteFilter>d__2::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_U3CU3Em__Finally1_m7272F0DE19F3E2D8BBBED965C91557218A055C10 (U3CExecuteFilterU3Ed__2_t403E1232303C76A794700DDB836080BA303EDF91 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap1_8();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_U3CU3E7__wrap1_8();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter/<ExecuteFilter>d__2::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_U3CU3Em__Finally2_mB94142CEE7DED2C962B6A7882C8CA277F1A4231F (U3CExecuteFilterU3Ed__2_t403E1232303C76A794700DDB836080BA303EDF91 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0(((int32_t)-3));
		Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * L_0 = __this->get_address_of_U3CU3E7__wrap3_10();
		Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)L_0, /*hidden argument*/Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
		return;
	}
}
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter/<ExecuteFilter>d__2::System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * U3CExecuteFilterU3Ed__2_System_Collections_Generic_IEnumeratorU3CNewtonsoft_Json_Linq_JTokenU3E_get_Current_mA1CD4E214B2E19B252C23A95D621EF5A2D145639 (U3CExecuteFilterU3Ed__2_t403E1232303C76A794700DDB836080BA303EDF91 * __this, const RuntimeMethod* method)
{
	{
		JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter/<ExecuteFilter>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_System_Collections_IEnumerator_Reset_m9782DDB4BFAB7805EDFF7EF4E44B74E4ABA7CC56 (U3CExecuteFilterU3Ed__2_t403E1232303C76A794700DDB836080BA303EDF91 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CExecuteFilterU3Ed__2_System_Collections_IEnumerator_Reset_m9782DDB4BFAB7805EDFF7EF4E44B74E4ABA7CC56_RuntimeMethod_var)));
	}
}
// System.Object Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter/<ExecuteFilter>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CExecuteFilterU3Ed__2_System_Collections_IEnumerator_get_Current_m811AFC3E1F34346835B78668053B49B2F61305F5 (U3CExecuteFilterU3Ed__2_t403E1232303C76A794700DDB836080BA303EDF91 * __this, const RuntimeMethod* method)
{
	{
		JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter/<ExecuteFilter>d__2::System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExecuteFilterU3Ed__2_System_Collections_Generic_IEnumerableU3CNewtonsoft_Json_Linq_JTokenU3E_GetEnumerator_m266A2DFD21EEF6858372E00E079C365A1FEB829C (U3CExecuteFilterU3Ed__2_t403E1232303C76A794700DDB836080BA303EDF91 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CExecuteFilterU3Ed__2_t403E1232303C76A794700DDB836080BA303EDF91_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CExecuteFilterU3Ed__2_t403E1232303C76A794700DDB836080BA303EDF91 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CExecuteFilterU3Ed__2_t403E1232303C76A794700DDB836080BA303EDF91 * L_3 = (U3CExecuteFilterU3Ed__2_t403E1232303C76A794700DDB836080BA303EDF91 *)il2cpp_codegen_object_new(U3CExecuteFilterU3Ed__2_t403E1232303C76A794700DDB836080BA303EDF91_il2cpp_TypeInfo_var);
		U3CExecuteFilterU3Ed__2__ctor_mCA0DF659D0095A0E33B7E88E60CD7E4D133BC3AA(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3CExecuteFilterU3Ed__2_t403E1232303C76A794700DDB836080BA303EDF91 * L_4 = V_0;
		FieldMultipleFilter_t754130B1A502B7441BA5F1BB191687E4162B31C6 * L_5 = __this->get_U3CU3E4__this_5();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_5(L_5);
	}

IL_0035:
	{
		U3CExecuteFilterU3Ed__2_t403E1232303C76A794700DDB836080BA303EDF91 * L_6 = V_0;
		RuntimeObject* L_7 = __this->get_U3CU3E3__current_4();
		NullCheck(L_6);
		L_6->set_current_3(L_7);
		U3CExecuteFilterU3Ed__2_t403E1232303C76A794700DDB836080BA303EDF91 * L_8 = V_0;
		bool L_9 = __this->get_U3CU3E3__errorWhenNoMatch_7();
		NullCheck(L_8);
		L_8->set_errorWhenNoMatch_6(L_9);
		U3CExecuteFilterU3Ed__2_t403E1232303C76A794700DDB836080BA303EDF91 * L_10 = V_0;
		return L_10;
	}
}
// System.Collections.IEnumerator Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter/<ExecuteFilter>d__2::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExecuteFilterU3Ed__2_System_Collections_IEnumerable_GetEnumerator_m3D499B4C08C47B7C9A1306CB3B6CBCCCD529AC25 (U3CExecuteFilterU3Ed__2_t403E1232303C76A794700DDB836080BA303EDF91 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CExecuteFilterU3Ed__2_System_Collections_Generic_IEnumerableU3CNewtonsoft_Json_Linq_JTokenU3E_GetEnumerator_m266A2DFD21EEF6858372E00E079C365A1FEB829C(__this, /*hidden argument*/NULL);
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
// System.Void Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mC6C22075B3CDE3933059064EC97D7E3E903D0665 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3FD81A3E346F8B5DB91861FB397D9113C7A245AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t3FD81A3E346F8B5DB91861FB397D9113C7A245AE * L_0 = (U3CU3Ec_t3FD81A3E346F8B5DB91861FB397D9113C7A245AE *)il2cpp_codegen_object_new(U3CU3Ec_t3FD81A3E346F8B5DB91861FB397D9113C7A245AE_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m2D7E2C6C917DC4781D1DBB01987EEAF7839BB03A(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t3FD81A3E346F8B5DB91861FB397D9113C7A245AE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3FD81A3E346F8B5DB91861FB397D9113C7A245AE_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2D7E2C6C917DC4781D1DBB01987EEAF7839BB03A (U3CU3Ec_t3FD81A3E346F8B5DB91861FB397D9113C7A245AE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c::<TryBuildImmutableForArrayContract>b__24_1(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CTryBuildImmutableForArrayContractU3Eb__24_1_mE4E5238A48767791A0D75ECFD1E562713BED1A56 (U3CU3Ec_t3FD81A3E346F8B5DB91861FB397D9113C7A245AE * __this, MethodInfo_t * ___m0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1071603CBA2BD3C11874C92C7C0DB97BF5899046);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t * L_0 = ___m0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteral1071603CBA2BD3C11874C92C7C0DB97BF5899046, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		MethodInfo_t * L_3 = ___m0;
		NullCheck(L_3);
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_4;
		L_4 = VirtFuncInvoker0< ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* >::Invoke(18 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_3);
		NullCheck(L_4);
		return (bool)((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)))) == ((int32_t)1))? 1 : 0);
	}

IL_001e:
	{
		return (bool)0;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c::<TryBuildImmutableForDictionaryContract>b__25_1(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CTryBuildImmutableForDictionaryContractU3Eb__25_1_m42AC5F8A3CC3839B321F5AA50AD0EE2EC10E9270 (U3CU3Ec_t3FD81A3E346F8B5DB91861FB397D9113C7A245AE * __this, MethodInfo_t * ___m0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t2DA210D3B033E1BEBFC81C153FA1C67749C6D264_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1071603CBA2BD3C11874C92C7C0DB97BF5899046);
		s_Il2CppMethodInitialized = true;
	}
	ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* V_0 = NULL;
	{
		MethodInfo_t * L_0 = ___m0;
		NullCheck(L_0);
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_1;
		L_1 = VirtFuncInvoker0< ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* >::Invoke(18 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_0);
		V_0 = L_1;
		MethodInfo_t * L_2 = ___m0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_3, _stringLiteral1071603CBA2BD3C11874C92C7C0DB97BF5899046, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_5 = V_0;
		NullCheck(L_5);
		if ((!(((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))) == ((uint32_t)1))))
		{
			goto IL_004b;
		}
	}
	{
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = 0;
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		Type_t * L_9;
		L_9 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_8);
		bool L_10;
		L_10 = TypeExtensions_IsGenericType_mF6339A55809CD76D869DD7E331D8F70CFFB4CD97(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_004b;
		}
	}
	{
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = 0;
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		Type_t * L_14;
		L_14 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_13);
		NullCheck(L_14);
		Type_t * L_15;
		L_15 = VirtFuncInvoker0< Type_t * >::Invoke(107 /* System.Type System.Type::GetGenericTypeDefinition() */, L_14);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_16 = { reinterpret_cast<intptr_t> (IEnumerable_1_t2DA210D3B033E1BEBFC81C153FA1C67749C6D264_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_17;
		L_17 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_16, /*hidden argument*/NULL);
		bool L_18;
		L_18 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_15, L_17, /*hidden argument*/NULL);
		return L_18;
	}

IL_004b:
	{
		return (bool)0;
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
// System.Void Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c__DisplayClass24_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0__ctor_m16432C604AD88D8128A1298A8216FB90ACB1B01B (U3CU3Ec__DisplayClass24_0_t5C23184FA2B4EAE33C8F00AEC9A4A4E02AEB9A31 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c__DisplayClass24_0::<TryBuildImmutableForArrayContract>b__0(Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass24_0_U3CTryBuildImmutableForArrayContractU3Eb__0_m8E5CA48CA4DC6F5033706D2CC98F81BE6C528590 (U3CU3Ec__DisplayClass24_0_t5C23184FA2B4EAE33C8F00AEC9A4A4E02AEB9A31 * __this, ImmutableCollectionTypeInfo_tAB8E5C2873442E1F12E93D4CD19CC69E5FBEBAB4 * ___d0, const RuntimeMethod* method)
{
	{
		ImmutableCollectionTypeInfo_tAB8E5C2873442E1F12E93D4CD19CC69E5FBEBAB4 * L_0 = ___d0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = ImmutableCollectionTypeInfo_get_ContractTypeName_m46FA9FB69F11B3D9F1E46C76DD2D90F6C7F9E429_inline(L_0, /*hidden argument*/NULL);
		String_t* L_2 = __this->get_name_0();
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c__DisplayClass25_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_0__ctor_m9AAE91E9E4E1C84CDAEA4D9C6558F39A28C2E3E6 (U3CU3Ec__DisplayClass25_0_t01B04C18C6D1B506FAA7A18CA629F396A64804C3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/<>c__DisplayClass25_0::<TryBuildImmutableForDictionaryContract>b__0(Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass25_0_U3CTryBuildImmutableForDictionaryContractU3Eb__0_m4526B57A075E7463CA048A5923BC9AD2A69CE754 (U3CU3Ec__DisplayClass25_0_t01B04C18C6D1B506FAA7A18CA629F396A64804C3 * __this, ImmutableCollectionTypeInfo_tAB8E5C2873442E1F12E93D4CD19CC69E5FBEBAB4 * ___d0, const RuntimeMethod* method)
{
	{
		ImmutableCollectionTypeInfo_tAB8E5C2873442E1F12E93D4CD19CC69E5FBEBAB4 * L_0 = ___d0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = ImmutableCollectionTypeInfo_get_ContractTypeName_m46FA9FB69F11B3D9F1E46C76DD2D90F6C7F9E429_inline(L_0, /*hidden argument*/NULL);
		String_t* L_2 = __this->get_name_0();
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo::.ctor(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableCollectionTypeInfo__ctor_mF0CA1758B938762CD4FE7E5CCB9EB3E5572205E2 (ImmutableCollectionTypeInfo_tAB8E5C2873442E1F12E93D4CD19CC69E5FBEBAB4 * __this, String_t* ___contractTypeName0, String_t* ___createdTypeName1, String_t* ___builderTypeName2, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___contractTypeName0;
		ImmutableCollectionTypeInfo_set_ContractTypeName_m2DE0B41DA93F4767C59C962CFFD543B9926B462D_inline(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___createdTypeName1;
		ImmutableCollectionTypeInfo_set_CreatedTypeName_m36CF21057B87DE14B93986BA2C5B1A67E19690B6_inline(__this, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___builderTypeName2;
		ImmutableCollectionTypeInfo_set_BuilderTypeName_m0CF526403AABF9641E4EAA02CAB067FAD66D0DB1_inline(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.String Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo::get_ContractTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ImmutableCollectionTypeInfo_get_ContractTypeName_m46FA9FB69F11B3D9F1E46C76DD2D90F6C7F9E429 (ImmutableCollectionTypeInfo_tAB8E5C2873442E1F12E93D4CD19CC69E5FBEBAB4 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CContractTypeNameU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo::set_ContractTypeName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableCollectionTypeInfo_set_ContractTypeName_m2DE0B41DA93F4767C59C962CFFD543B9926B462D (ImmutableCollectionTypeInfo_tAB8E5C2873442E1F12E93D4CD19CC69E5FBEBAB4 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CContractTypeNameU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo::get_CreatedTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ImmutableCollectionTypeInfo_get_CreatedTypeName_mCDC12776913832A4AB7E1B8B009634315557180D (ImmutableCollectionTypeInfo_tAB8E5C2873442E1F12E93D4CD19CC69E5FBEBAB4 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CCreatedTypeNameU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo::set_CreatedTypeName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableCollectionTypeInfo_set_CreatedTypeName_m36CF21057B87DE14B93986BA2C5B1A67E19690B6 (ImmutableCollectionTypeInfo_tAB8E5C2873442E1F12E93D4CD19CC69E5FBEBAB4 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CCreatedTypeNameU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo::get_BuilderTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ImmutableCollectionTypeInfo_get_BuilderTypeName_m947986850DBCDC97925E73F58639B843B5352EEF (ImmutableCollectionTypeInfo_tAB8E5C2873442E1F12E93D4CD19CC69E5FBEBAB4 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CBuilderTypeNameU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Utilities.ImmutableCollectionsUtils/ImmutableCollectionTypeInfo::set_BuilderTypeName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableCollectionTypeInfo_set_BuilderTypeName_m0CF526403AABF9641E4EAA02CAB067FAD66D0DB1 (ImmutableCollectionTypeInfo_tAB8E5C2873442E1F12E93D4CD19CC69E5FBEBAB4 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CBuilderTypeNameU3Ek__BackingField_2(L_0);
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
// System.Void Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDescendantsU3Ed__36__ctor_m6F686AFD98522D8ACF0E6607B6D2A9FD8B34CCD9 (U3CGetDescendantsU3Ed__36_t10B0A6A787C36583D3326E547212B76D05CBBF89 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDescendantsU3Ed__36_System_IDisposable_Dispose_m16063B8D979579596510D3CCA669930261C25C9A (U3CGetDescendantsU3Ed__36_t10B0A6A787C36583D3326E547212B76D05CBBF89 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)-4)))) > ((uint32_t)1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)2))) <= ((uint32_t)1))))
		{
			goto IL_0031;
		}
	}

IL_0014:
	{
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)((int32_t)-4))))
			{
				goto IL_0020;
			}
		}

IL_001a:
		{
			int32_t L_4 = V_0;
			if ((((int32_t)L_4) == ((int32_t)3)))
			{
				goto IL_0020;
			}
		}

IL_001e:
		{
			IL2CPP_LEAVE(0x31, FINALLY_002a);
		}

IL_0020:
		{
		}

IL_0021:
		try
		{ // begin try (depth: 2)
			IL2CPP_LEAVE(0x31, FINALLY_0023);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0023;
		}

FINALLY_0023:
		{ // begin finally (depth: 2)
			U3CGetDescendantsU3Ed__36_U3CU3Em__Finally2_mDFA832D55231B66064C2B13EF6A8FD4A4E15B465(__this, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(35)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(35)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x31, FINALLY_002a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		U3CGetDescendantsU3Ed__36_U3CU3Em__Finally1_m3D00106CC8CBBE9094896DC5CA07D4A317B7EFB1(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(42)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x31, IL_0031)
	}

IL_0031:
	{
		return;
	}
}
// System.Boolean Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetDescendantsU3Ed__36_MoveNext_mA2BBD491BDF9C2FE5CC7EF089D94E6F806962100 (U3CGetDescendantsU3Ed__36_t10B0A6A787C36583D3326E547212B76D05CBBF89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t7A54AEED0B537A132EE02BA2A10621CDA1900932_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t8AEDD013FF9124B1315F51E8F23014339F14BCFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527 * V_2 = NULL;
	JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527 * V_3 = NULL;
	JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527 * L_1 = __this->get_U3CU3E4__this_5();
			V_2 = L_1;
			int32_t L_2 = V_1;
			switch (L_2)
			{
				case 0:
				{
					goto IL_002b;
				}
				case 1:
				{
					goto IL_004f;
				}
				case 2:
				{
					goto IL_009f;
				}
				case 3:
				{
					goto IL_00f1;
				}
			}
		}

IL_0024:
		{
			V_0 = (bool)0;
			goto IL_0142;
		}

IL_002b:
		{
			__this->set_U3CU3E1__state_0((-1));
			bool L_3 = __this->get_self_3();
			if (!L_3)
			{
				goto IL_0056;
			}
		}

IL_003a:
		{
			JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527 * L_4 = V_2;
			__this->set_U3CU3E2__current_1(L_4);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_0142;
		}

IL_004f:
		{
			__this->set_U3CU3E1__state_0((-1));
		}

IL_0056:
		{
			JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527 * L_5 = V_2;
			NullCheck(L_5);
			RuntimeObject* L_6;
			L_6 = VirtFuncInvoker0< RuntimeObject* >::Invoke(50 /* System.Collections.Generic.IList`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JContainer::get_ChildrenTokens() */, L_5);
			NullCheck(L_6);
			RuntimeObject* L_7;
			L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>::GetEnumerator() */, IEnumerable_1_t7A54AEED0B537A132EE02BA2A10621CDA1900932_il2cpp_TypeInfo_var, L_6);
			__this->set_U3CU3E7__wrap1_6(L_7);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_011a;
		}

IL_0074:
		{
			RuntimeObject* L_8 = __this->get_U3CU3E7__wrap1_6();
			NullCheck(L_8);
			JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_9;
			L_9 = InterfaceFuncInvoker0< JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken>::get_Current() */, IEnumerator_1_t8AEDD013FF9124B1315F51E8F23014339F14BCFB_il2cpp_TypeInfo_var, L_8);
			__this->set_U3CoU3E5__3_7(L_9);
			JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_10 = __this->get_U3CoU3E5__3_7();
			__this->set_U3CU3E2__current_1(L_10);
			__this->set_U3CU3E1__state_0(2);
			V_0 = (bool)1;
			goto IL_0142;
		}

IL_009f:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_11 = __this->get_U3CoU3E5__3_7();
			V_3 = ((JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527 *)IsInstClass((RuntimeObject*)L_11, JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527_il2cpp_TypeInfo_var));
			JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527 * L_12 = V_3;
			if (!L_12)
			{
				goto IL_0113;
			}
		}

IL_00b6:
		{
			JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527 * L_13 = V_3;
			NullCheck(L_13);
			RuntimeObject* L_14;
			L_14 = JContainer_Descendants_m9EA99DA3990A0F5F895D88523E85E263BE30351C(L_13, /*hidden argument*/NULL);
			NullCheck(L_14);
			RuntimeObject* L_15;
			L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>::GetEnumerator() */, IEnumerable_1_t7A54AEED0B537A132EE02BA2A10621CDA1900932_il2cpp_TypeInfo_var, L_14);
			__this->set_U3CU3E7__wrap3_8(L_15);
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			goto IL_00f9;
		}

IL_00d1:
		{
			RuntimeObject* L_16 = __this->get_U3CU3E7__wrap3_8();
			NullCheck(L_16);
			JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_17;
			L_17 = InterfaceFuncInvoker0< JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken>::get_Current() */, IEnumerator_1_t8AEDD013FF9124B1315F51E8F23014339F14BCFB_il2cpp_TypeInfo_var, L_16);
			V_4 = L_17;
			JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_18 = V_4;
			__this->set_U3CU3E2__current_1(L_18);
			__this->set_U3CU3E1__state_0(3);
			V_0 = (bool)1;
			goto IL_0142;
		}

IL_00f1:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-4));
		}

IL_00f9:
		{
			RuntimeObject* L_19 = __this->get_U3CU3E7__wrap3_8();
			NullCheck(L_19);
			bool L_20;
			L_20 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_19);
			if (L_20)
			{
				goto IL_00d1;
			}
		}

IL_0106:
		{
			U3CGetDescendantsU3Ed__36_U3CU3Em__Finally2_mDFA832D55231B66064C2B13EF6A8FD4A4E15B465(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap3_8((RuntimeObject*)NULL);
		}

IL_0113:
		{
			__this->set_U3CoU3E5__3_7((JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 *)NULL);
		}

IL_011a:
		{
			RuntimeObject* L_21 = __this->get_U3CU3E7__wrap1_6();
			NullCheck(L_21);
			bool L_22;
			L_22 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_21);
			if (L_22)
			{
				goto IL_0074;
			}
		}

IL_012a:
		{
			U3CGetDescendantsU3Ed__36_U3CU3Em__Finally1_m3D00106CC8CBBE9094896DC5CA07D4A317B7EFB1(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_6((RuntimeObject*)NULL);
			V_0 = (bool)0;
			goto IL_0142;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_013b;
	}

FAULT_013b:
	{ // begin fault (depth: 1)
		U3CGetDescendantsU3Ed__36_System_IDisposable_Dispose_m16063B8D979579596510D3CCA669930261C25C9A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(315)
	} // end fault
	IL2CPP_CLEANUP(315)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0142:
	{
		bool L_23 = V_0;
		return L_23;
	}
}
// System.Void Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDescendantsU3Ed__36_U3CU3Em__Finally1_m3D00106CC8CBBE9094896DC5CA07D4A317B7EFB1 (U3CGetDescendantsU3Ed__36_t10B0A6A787C36583D3326E547212B76D05CBBF89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap1_6();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_U3CU3E7__wrap1_6();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDescendantsU3Ed__36_U3CU3Em__Finally2_mDFA832D55231B66064C2B13EF6A8FD4A4E15B465 (U3CGetDescendantsU3Ed__36_t10B0A6A787C36583D3326E547212B76D05CBBF89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0(((int32_t)-3));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap3_8();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_U3CU3E7__wrap3_8();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001b:
	{
		return;
	}
}
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * U3CGetDescendantsU3Ed__36_System_Collections_Generic_IEnumeratorU3CNewtonsoft_Json_Linq_JTokenU3E_get_Current_m6B31DDD7ED2BB462DFD3CE9B537E8760A1CDD562 (U3CGetDescendantsU3Ed__36_t10B0A6A787C36583D3326E547212B76D05CBBF89 * __this, const RuntimeMethod* method)
{
	{
		JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDescendantsU3Ed__36_System_Collections_IEnumerator_Reset_m69E48DE7DEC9CD596B089B0DD2CB60DD11C6081E (U3CGetDescendantsU3Ed__36_t10B0A6A787C36583D3326E547212B76D05CBBF89 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetDescendantsU3Ed__36_System_Collections_IEnumerator_Reset_m69E48DE7DEC9CD596B089B0DD2CB60DD11C6081E_RuntimeMethod_var)));
	}
}
// System.Object Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetDescendantsU3Ed__36_System_Collections_IEnumerator_get_Current_m6DE3B74FDCD99782D7EF1C0AA3CF657C1904609D (U3CGetDescendantsU3Ed__36_t10B0A6A787C36583D3326E547212B76D05CBBF89 * __this, const RuntimeMethod* method)
{
	{
		JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetDescendantsU3Ed__36_System_Collections_Generic_IEnumerableU3CNewtonsoft_Json_Linq_JTokenU3E_GetEnumerator_m4C531E8AB3876DFB7A5FBB863FB6DFBE75B5E432 (U3CGetDescendantsU3Ed__36_t10B0A6A787C36583D3326E547212B76D05CBBF89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetDescendantsU3Ed__36_t10B0A6A787C36583D3326E547212B76D05CBBF89_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetDescendantsU3Ed__36_t10B0A6A787C36583D3326E547212B76D05CBBF89 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CGetDescendantsU3Ed__36_t10B0A6A787C36583D3326E547212B76D05CBBF89 * L_3 = (U3CGetDescendantsU3Ed__36_t10B0A6A787C36583D3326E547212B76D05CBBF89 *)il2cpp_codegen_object_new(U3CGetDescendantsU3Ed__36_t10B0A6A787C36583D3326E547212B76D05CBBF89_il2cpp_TypeInfo_var);
		U3CGetDescendantsU3Ed__36__ctor_m6F686AFD98522D8ACF0E6607B6D2A9FD8B34CCD9(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3CGetDescendantsU3Ed__36_t10B0A6A787C36583D3326E547212B76D05CBBF89 * L_4 = V_0;
		JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527 * L_5 = __this->get_U3CU3E4__this_5();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_5(L_5);
	}

IL_0035:
	{
		U3CGetDescendantsU3Ed__36_t10B0A6A787C36583D3326E547212B76D05CBBF89 * L_6 = V_0;
		bool L_7 = __this->get_U3CU3E3__self_4();
		NullCheck(L_6);
		L_6->set_self_3(L_7);
		U3CGetDescendantsU3Ed__36_t10B0A6A787C36583D3326E547212B76D05CBBF89 * L_8 = V_0;
		return L_8;
	}
}
// System.Collections.IEnumerator Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__36::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetDescendantsU3Ed__36_System_Collections_IEnumerable_GetEnumerator_m87C94B49724037C98DBB86B502A7962CA948A883 (U3CGetDescendantsU3Ed__36_t10B0A6A787C36583D3326E547212B76D05CBBF89 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CGetDescendantsU3Ed__36_System_Collections_Generic_IEnumerableU3CNewtonsoft_Json_Linq_JTokenU3E_GetEnumerator_m4C531E8AB3876DFB7A5FBB863FB6DFBE75B5E432(__this, /*hidden argument*/NULL);
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
// System.Void Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__63::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__63__ctor_m964CFB335C5834FDDB57BC4479E2B8442D66941B (U3CGetEnumeratorU3Ed__63_t412E336C65F7FA64E688926F38AEA48E9F5709E0 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__63::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__63_System_IDisposable_Dispose_m5A49B85993656AEE462CFA0E140FFD657250E721 (U3CGetEnumeratorU3Ed__63_t412E336C65F7FA64E688926F38AEA48E9F5709E0 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3CGetEnumeratorU3Ed__63_U3CU3Em__Finally1_mFA82A09BCFC31DCF69985F7A5E941C70A62E04E2(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__63::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__63_MoveNext_mD143E4498F6A28AFF82199A0885B4E89685BC3F3 (U3CGetEnumeratorU3Ed__63_t412E336C65F7FA64E688926F38AEA48E9F5709E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1_GetEnumerator_m2AEC56F8C16D493D95D378D8EF829311CE9EE259_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t8AEDD013FF9124B1315F51E8F23014339F14BCFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JProperty_t6B592BFC6895980207CC8356187EB1D0328A328E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mBC9F11B2A7A04FE1701EBEB9EC82C1CCEB077FEB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8 * V_2 = NULL;
	JProperty_t6B592BFC6895980207CC8356187EB1D0328A328E * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8 * L_1 = __this->get_U3CU3E4__this_2();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_001c;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0071;
			}
		}

IL_0015:
		{
			V_0 = (bool)0;
			goto IL_009e;
		}

IL_001c:
		{
			__this->set_U3CU3E1__state_0((-1));
			JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8 * L_4 = V_2;
			NullCheck(L_4);
			JPropertyKeyedCollection_t8408B618F7F19300CF323A96090009E71EBEF0D3 * L_5 = L_4->get__properties_20();
			NullCheck(L_5);
			RuntimeObject* L_6;
			L_6 = Collection_1_GetEnumerator_m2AEC56F8C16D493D95D378D8EF829311CE9EE259(L_5, /*hidden argument*/Collection_1_GetEnumerator_m2AEC56F8C16D493D95D378D8EF829311CE9EE259_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap1_3(L_6);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_0079;
		}

IL_003e:
		{
			RuntimeObject* L_7 = __this->get_U3CU3E7__wrap1_3();
			NullCheck(L_7);
			JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_8;
			L_8 = InterfaceFuncInvoker0< JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken>::get_Current() */, IEnumerator_1_t8AEDD013FF9124B1315F51E8F23014339F14BCFB_il2cpp_TypeInfo_var, L_7);
			V_3 = ((JProperty_t6B592BFC6895980207CC8356187EB1D0328A328E *)CastclassClass((RuntimeObject*)L_8, JProperty_t6B592BFC6895980207CC8356187EB1D0328A328E_il2cpp_TypeInfo_var));
			JProperty_t6B592BFC6895980207CC8356187EB1D0328A328E * L_9 = V_3;
			NullCheck(L_9);
			String_t* L_10;
			L_10 = JProperty_get_Name_mDEF17388577064192224A03308BE8CE285E8227D_inline(L_9, /*hidden argument*/NULL);
			JProperty_t6B592BFC6895980207CC8356187EB1D0328A328E * L_11 = V_3;
			NullCheck(L_11);
			JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_12;
			L_12 = JProperty_get_Value_mDF54FDCE172670DDB0DBF41ABE51ECEF733842D9(L_11, /*hidden argument*/NULL);
			KeyValuePair_2_t2D21ACE03FBDFCC8BD8D4EFA6275F975E2D03FEB  L_13;
			memset((&L_13), 0, sizeof(L_13));
			KeyValuePair_2__ctor_mBC9F11B2A7A04FE1701EBEB9EC82C1CCEB077FEB((&L_13), L_10, L_12, /*hidden argument*/KeyValuePair_2__ctor_mBC9F11B2A7A04FE1701EBEB9EC82C1CCEB077FEB_RuntimeMethod_var);
			__this->set_U3CU3E2__current_1(L_13);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_009e;
		}

IL_0071:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_0079:
		{
			RuntimeObject* L_14 = __this->get_U3CU3E7__wrap1_3();
			NullCheck(L_14);
			bool L_15;
			L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_14);
			if (L_15)
			{
				goto IL_003e;
			}
		}

IL_0086:
		{
			U3CGetEnumeratorU3Ed__63_U3CU3Em__Finally1_mFA82A09BCFC31DCF69985F7A5E941C70A62E04E2(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_3((RuntimeObject*)NULL);
			V_0 = (bool)0;
			goto IL_009e;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0097;
	}

FAULT_0097:
	{ // begin fault (depth: 1)
		U3CGetEnumeratorU3Ed__63_System_IDisposable_Dispose_m5A49B85993656AEE462CFA0E140FFD657250E721(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(151)
	} // end fault
	IL2CPP_CLEANUP(151)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_009e:
	{
		bool L_16 = V_0;
		return L_16;
	}
}
// System.Void Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__63::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__63_U3CU3Em__Finally1_mFA82A09BCFC31DCF69985F7A5E941C70A62E04E2 (U3CGetEnumeratorU3Ed__63_t412E336C65F7FA64E688926F38AEA48E9F5709E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap1_3();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_U3CU3E7__wrap1_3();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__63::System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t2D21ACE03FBDFCC8BD8D4EFA6275F975E2D03FEB  U3CGetEnumeratorU3Ed__63_System_Collections_Generic_IEnumeratorU3CSystem_Collections_Generic_KeyValuePairU3CSystem_StringU2CNewtonsoft_Json_Linq_JTokenU3EU3E_get_Current_m31E3006892878FEEC80961A67F42DCF0372FDA44 (U3CGetEnumeratorU3Ed__63_t412E336C65F7FA64E688926F38AEA48E9F5709E0 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_t2D21ACE03FBDFCC8BD8D4EFA6275F975E2D03FEB  L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__63::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__63_System_Collections_IEnumerator_Reset_mC728782A360111913E2ED9DEF8A1EE5F2A905568 (U3CGetEnumeratorU3Ed__63_t412E336C65F7FA64E688926F38AEA48E9F5709E0 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetEnumeratorU3Ed__63_System_Collections_IEnumerator_Reset_mC728782A360111913E2ED9DEF8A1EE5F2A905568_RuntimeMethod_var)));
	}
}
// System.Object Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__63::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetEnumeratorU3Ed__63_System_Collections_IEnumerator_get_Current_m740CDF795FA2860D264A399C8FBF40B89A8D4DAC (U3CGetEnumeratorU3Ed__63_t412E336C65F7FA64E688926F38AEA48E9F5709E0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_t2D21ACE03FBDFCC8BD8D4EFA6275F975E2D03FEB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyValuePair_2_t2D21ACE03FBDFCC8BD8D4EFA6275F975E2D03FEB  L_0 = __this->get_U3CU3E2__current_1();
		KeyValuePair_2_t2D21ACE03FBDFCC8BD8D4EFA6275F975E2D03FEB  L_1 = L_0;
		RuntimeObject * L_2 = Box(KeyValuePair_2_t2D21ACE03FBDFCC8BD8D4EFA6275F975E2D03FEB_il2cpp_TypeInfo_var, &L_1);
		return L_2;
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
// System.Collections.Generic.IEnumerable`1<System.String> Newtonsoft.Json.Linq.JObject/JObjectDynamicProxy::GetDynamicMemberNames(Newtonsoft.Json.Linq.JObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JObjectDynamicProxy_GetDynamicMemberNames_m03F02CBC10227F3A5DF8AE1FE0E8A0F427F2EF97 (JObjectDynamicProxy_t29543C0963395FEE6D96B245C630031CEB704662 * __this, JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8 * ___instance0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisJProperty_t6B592BFC6895980207CC8356187EB1D0328A328E_TisString_t_m953DB4668EA59942F4B369B69F3616624C94612E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m4456A690D2B96699A625B738212EB7EFAAE3830C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tB41EA24BD613F187BD2933B97574D86858806F39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetDynamicMemberNamesU3Eb__2_0_mE2FD561E21CCA87E3A8F0210D0CB89E6950699CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t079339D53FDBCBD92F5779F7F22AB10461970CA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tB41EA24BD613F187BD2933B97574D86858806F39 * G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_tB41EA24BD613F187BD2933B97574D86858806F39 * G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	{
		JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8 * L_0 = ___instance0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = JObject_Properties_mE6A3C04F33181FC446E9D957363EE2F61DC2AF63(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t079339D53FDBCBD92F5779F7F22AB10461970CA5_il2cpp_TypeInfo_var);
		Func_2_tB41EA24BD613F187BD2933B97574D86858806F39 * L_2 = ((U3CU3Ec_t079339D53FDBCBD92F5779F7F22AB10461970CA5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t079339D53FDBCBD92F5779F7F22AB10461970CA5_il2cpp_TypeInfo_var))->get_U3CU3E9__2_0_1();
		Func_2_tB41EA24BD613F187BD2933B97574D86858806F39 * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t079339D53FDBCBD92F5779F7F22AB10461970CA5_il2cpp_TypeInfo_var);
		U3CU3Ec_t079339D53FDBCBD92F5779F7F22AB10461970CA5 * L_4 = ((U3CU3Ec_t079339D53FDBCBD92F5779F7F22AB10461970CA5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t079339D53FDBCBD92F5779F7F22AB10461970CA5_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_tB41EA24BD613F187BD2933B97574D86858806F39 * L_5 = (Func_2_tB41EA24BD613F187BD2933B97574D86858806F39 *)il2cpp_codegen_object_new(Func_2_tB41EA24BD613F187BD2933B97574D86858806F39_il2cpp_TypeInfo_var);
		Func_2__ctor_m4456A690D2B96699A625B738212EB7EFAAE3830C(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3CGetDynamicMemberNamesU3Eb__2_0_mE2FD561E21CCA87E3A8F0210D0CB89E6950699CA_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m4456A690D2B96699A625B738212EB7EFAAE3830C_RuntimeMethod_var);
		Func_2_tB41EA24BD613F187BD2933B97574D86858806F39 * L_6 = L_5;
		((U3CU3Ec_t079339D53FDBCBD92F5779F7F22AB10461970CA5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t079339D53FDBCBD92F5779F7F22AB10461970CA5_il2cpp_TypeInfo_var))->set_U3CU3E9__2_0_1(L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		RuntimeObject* L_7;
		L_7 = Enumerable_Select_TisJProperty_t6B592BFC6895980207CC8356187EB1D0328A328E_TisString_t_m953DB4668EA59942F4B369B69F3616624C94612E(G_B2_1, G_B2_0, /*hidden argument*/Enumerable_Select_TisJProperty_t6B592BFC6895980207CC8356187EB1D0328A328E_TisString_t_m953DB4668EA59942F4B369B69F3616624C94612E_RuntimeMethod_var);
		return L_7;
	}
}
// System.Void Newtonsoft.Json.Linq.JObject/JObjectDynamicProxy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JObjectDynamicProxy__ctor_mB0FABF65F0D0D42FF09B688DA9CF53005FAB563D (JObjectDynamicProxy_t29543C0963395FEE6D96B245C630031CEB704662 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicProxy_1__ctor_m5A251B5BD51182209E71F26BF52ED7D40A46CA94_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DynamicProxy_1__ctor_m5A251B5BD51182209E71F26BF52ED7D40A46CA94(__this, /*hidden argument*/DynamicProxy_1__ctor_m5A251B5BD51182209E71F26BF52ED7D40A46CA94_RuntimeMethod_var);
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
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JProperty/JPropertyList::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JPropertyList_GetEnumerator_mEACADDDE8D0733E9F73034F3FA9797E67C0B8D8C (JPropertyList_t40544FA83585374547FB7FFD7472CB16A930B95B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetEnumeratorU3Ed__1_t707CB3D09C2C5F8296E6BCCA37C54250187B0587_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetEnumeratorU3Ed__1_t707CB3D09C2C5F8296E6BCCA37C54250187B0587 * L_0 = (U3CGetEnumeratorU3Ed__1_t707CB3D09C2C5F8296E6BCCA37C54250187B0587 *)il2cpp_codegen_object_new(U3CGetEnumeratorU3Ed__1_t707CB3D09C2C5F8296E6BCCA37C54250187B0587_il2cpp_TypeInfo_var);
		U3CGetEnumeratorU3Ed__1__ctor_mD367031322091682F76381B43EE0B12ED2390C4A(L_0, 0, /*hidden argument*/NULL);
		U3CGetEnumeratorU3Ed__1_t707CB3D09C2C5F8296E6BCCA37C54250187B0587 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Newtonsoft.Json.Linq.JProperty/JPropertyList::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JPropertyList_System_Collections_IEnumerable_GetEnumerator_mE8F8A4ED677807290298BA42DAD27076C7469A8C (JPropertyList_t40544FA83585374547FB7FFD7472CB16A930B95B * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = JPropertyList_GetEnumerator_mEACADDDE8D0733E9F73034F3FA9797E67C0B8D8C(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Linq.JProperty/JPropertyList::Add(Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JPropertyList_Add_m0E13C5793CA6D215AF9E1852AAFEA7786D73F5DE (JPropertyList_t40544FA83585374547FB7FFD7472CB16A930B95B * __this, JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * ___item0, const RuntimeMethod* method)
{
	{
		JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_0 = ___item0;
		__this->set__token_0(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Linq.JProperty/JPropertyList::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JPropertyList_Clear_m01FAA2EF25AE1DF9DC43311AD4249811F34AA937 (JPropertyList_t40544FA83585374547FB7FFD7472CB16A930B95B * __this, const RuntimeMethod* method)
{
	{
		__this->set__token_0((JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 *)NULL);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Linq.JProperty/JPropertyList::Contains(Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JPropertyList_Contains_mBBE18E413496EB567269BA92EF67754366ECA429 (JPropertyList_t40544FA83585374547FB7FFD7472CB16A930B95B * __this, JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * ___item0, const RuntimeMethod* method)
{
	{
		JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_0 = __this->get__token_0();
		JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_1 = ___item0;
		return (bool)((((RuntimeObject*)(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 *)L_0) == ((RuntimeObject*)(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 *)L_1))? 1 : 0);
	}
}
// System.Void Newtonsoft.Json.Linq.JProperty/JPropertyList::CopyTo(Newtonsoft.Json.Linq.JToken[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JPropertyList_CopyTo_mB470C82ADC329AF596E6AE5DFD29B6EDC2218DF7 (JPropertyList_t40544FA83585374547FB7FFD7472CB16A930B95B * __this, JTokenU5BU5D_tFCD80C12B530C8AAF0295FAC25A1615983BE0FD6* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	{
		JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_0 = __this->get__token_0();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		JTokenU5BU5D_tFCD80C12B530C8AAF0295FAC25A1615983BE0FD6* L_1 = ___array0;
		int32_t L_2 = ___arrayIndex1;
		JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_3 = __this->get__token_0();
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 *)L_3);
	}

IL_0011:
	{
		return;
	}
}
// System.Boolean Newtonsoft.Json.Linq.JProperty/JPropertyList::Remove(Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JPropertyList_Remove_mDF4184FC34D88812C01CA96018203A62E7D93A8C (JPropertyList_t40544FA83585374547FB7FFD7472CB16A930B95B * __this, JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * ___item0, const RuntimeMethod* method)
{
	{
		JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_0 = __this->get__token_0();
		JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_1 = ___item0;
		if ((!(((RuntimeObject*)(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 *)L_0) == ((RuntimeObject*)(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 *)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		__this->set__token_0((JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 *)NULL);
		return (bool)1;
	}

IL_0012:
	{
		return (bool)0;
	}
}
// System.Int32 Newtonsoft.Json.Linq.JProperty/JPropertyList::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JPropertyList_get_Count_mF38C55FF5D97740B89E1078E58A089A20B2B09C9 (JPropertyList_t40544FA83585374547FB7FFD7472CB16A930B95B * __this, const RuntimeMethod* method)
{
	{
		JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_0 = __this->get__token_0();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		return 1;
	}
}
// System.Boolean Newtonsoft.Json.Linq.JProperty/JPropertyList::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JPropertyList_get_IsReadOnly_m7F6A677B6D354EAD1E8541765A492A75BD12323B (JPropertyList_t40544FA83585374547FB7FFD7472CB16A930B95B * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Int32 Newtonsoft.Json.Linq.JProperty/JPropertyList::IndexOf(Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JPropertyList_IndexOf_mC7FE2D72DF53CD16E8DB114390DBB6CE28FF56AF (JPropertyList_t40544FA83585374547FB7FFD7472CB16A930B95B * __this, JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * ___item0, const RuntimeMethod* method)
{
	{
		JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_0 = __this->get__token_0();
		JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_1 = ___item0;
		if ((((RuntimeObject*)(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 *)L_0) == ((RuntimeObject*)(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 *)L_1)))
		{
			goto IL_000b;
		}
	}
	{
		return (-1);
	}

IL_000b:
	{
		return 0;
	}
}
// System.Void Newtonsoft.Json.Linq.JProperty/JPropertyList::Insert(System.Int32,Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JPropertyList_Insert_m31DC02B0720BC0974F89D89D91233CD106D55434 (JPropertyList_t40544FA83585374547FB7FFD7472CB16A930B95B * __this, int32_t ___index0, JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * ___item1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_1 = ___item1;
		__this->set__token_0(L_1);
	}

IL_000a:
	{
		return;
	}
}
// System.Void Newtonsoft.Json.Linq.JProperty/JPropertyList::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JPropertyList_RemoveAt_mC62DE2EAE7F84F2CD34853BD557FD8EEF3D8B15F (JPropertyList_t40544FA83585374547FB7FFD7472CB16A930B95B * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		__this->set__token_0((JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 *)NULL);
	}

IL_000a:
	{
		return;
	}
}
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JProperty/JPropertyList::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * JPropertyList_get_Item_m32218FB8E8036F04E5AF8AD035BEFC37D89320D6 (JPropertyList_t40544FA83585374547FB7FFD7472CB16A930B95B * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * L_1 = (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_m84F1D8D46E48427F4DFAC350A5F1E0D345C68523(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JPropertyList_get_Item_m32218FB8E8036F04E5AF8AD035BEFC37D89320D6_RuntimeMethod_var)));
	}

IL_0009:
	{
		JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_2 = __this->get__token_0();
		return L_2;
	}
}
// System.Void Newtonsoft.Json.Linq.JProperty/JPropertyList::set_Item(System.Int32,Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JPropertyList_set_Item_mA5DA7011DD8D9B83D21716856B8E7FA2A8BADA06 (JPropertyList_t40544FA83585374547FB7FFD7472CB16A930B95B * __this, int32_t ___index0, JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * L_1 = (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_m84F1D8D46E48427F4DFAC350A5F1E0D345C68523(L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JPropertyList_set_Item_mA5DA7011DD8D9B83D21716856B8E7FA2A8BADA06_RuntimeMethod_var)));
	}

IL_0009:
	{
		JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_2 = ___value1;
		__this->set__token_0(L_2);
		return;
	}
}
// System.Void Newtonsoft.Json.Linq.JProperty/JPropertyList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JPropertyList__ctor_m3469464F8F400B956A155A49C3F63E1C4766CDAD (JPropertyList_t40544FA83585374547FB7FFD7472CB16A930B95B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Newtonsoft.Json.Linq.JToken/LineInfoAnnotation::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineInfoAnnotation__ctor_mF1C1E9BAF9B51A1BF775BECF32A480A3EE697481 (LineInfoAnnotation_t53C84C57D1B668B4C979C2BC20DA68E096CAD0B8 * __this, int32_t ___lineNumber0, int32_t ___linePosition1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___lineNumber0;
		__this->set_LineNumber_0(L_0);
		int32_t L_1 = ___linePosition1;
		__this->set_LinePosition_1(L_1);
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
// System.Void Newtonsoft.Json.Linq.JValue/JValueDynamicProxy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JValueDynamicProxy__ctor_mA8AEB25A36EE425B4AF7479378A78DABFA227698 (JValueDynamicProxy_tBC8F949989A0829E1E45FC021E4D9779F0E37047 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicProxy_1__ctor_mAA46618323CEDF30460389F84988E73A39D53252_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DynamicProxy_1__ctor_mAA46618323CEDF30460389F84988E73A39D53252(__this, /*hidden argument*/DynamicProxy_1__ctor_mAA46618323CEDF30460389F84988E73A39D53252_RuntimeMethod_var);
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
// System.Void Newtonsoft.Json.Serialization.JsonContract/<>c__DisplayClass57_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass57_0__ctor_mF522BC161CF046824B74C6F60BECBD263371F3E6 (U3CU3Ec__DisplayClass57_0_t7E19B412A3521B61B4BD96C7021357A13354A983 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.JsonContract/<>c__DisplayClass57_0::<CreateSerializationCallback>b__0(System.Object,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass57_0_U3CCreateSerializationCallbackU3Eb__0_mBECF3D6DDAA2D2B4BEAAE5DC184C9F6804E9D995 (U3CU3Ec__DisplayClass57_0_t7E19B412A3521B61B4BD96C7021357A13354A983 * __this, RuntimeObject * ___o0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t * L_0 = __this->get_callbackMethodInfo_0();
		RuntimeObject * L_1 = ___o0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2;
		StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  L_4 = ___context1;
		StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  L_5 = L_4;
		RuntimeObject * L_6 = Box(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		NullCheck(L_0);
		RuntimeObject * L_7;
		L_7 = MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_0, L_1, L_3, /*hidden argument*/NULL);
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
// System.Void Newtonsoft.Json.Serialization.JsonContract/<>c__DisplayClass58_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass58_0__ctor_m734F492B784D1341EDD75A7E6E5AAE2B3BE66EFA (U3CU3Ec__DisplayClass58_0_tFBE338617841B8290F8168234A0D28E542C9678D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.JsonContract/<>c__DisplayClass58_0::<CreateSerializationErrorCallback>b__0(System.Object,System.Runtime.Serialization.StreamingContext,Newtonsoft.Json.Serialization.ErrorContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass58_0_U3CCreateSerializationErrorCallbackU3Eb__0_mB768BA32DB8A7AF8048873738D532AB9FEC8B919 (U3CU3Ec__DisplayClass58_0_tFBE338617841B8290F8168234A0D28E542C9678D * __this, RuntimeObject * ___o0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, ErrorContext_t1151C3AA92A4CDF11654BD6CFC4F4D173CEC44EF * ___econtext2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t * L_0 = __this->get_callbackMethodInfo_0();
		RuntimeObject * L_1 = ___o0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2;
		StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  L_4 = ___context1;
		StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  L_5 = L_4;
		RuntimeObject * L_6 = Box(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_3;
		ErrorContext_t1151C3AA92A4CDF11654BD6CFC4F4D173CEC44EF * L_8 = ___econtext2;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		NullCheck(L_0);
		RuntimeObject * L_9;
		L_9 = MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_0, L_1, L_7, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalBase/ReferenceEqualsEqualityComparer::System.Collections.Generic.IEqualityComparer<System.Object>.Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReferenceEqualsEqualityComparer_System_Collections_Generic_IEqualityComparerU3CSystem_ObjectU3E_Equals_m527F455556EF23960611EF721593633417DF535B (ReferenceEqualsEqualityComparer_tD789E33DF14461C13594DA126C4617B43A7AE7C1 * __this, RuntimeObject * ___x0, RuntimeObject * ___y1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___x0;
		RuntimeObject * L_1 = ___y1;
		return (bool)((((RuntimeObject*)(RuntimeObject *)L_0) == ((RuntimeObject*)(RuntimeObject *)L_1))? 1 : 0);
	}
}
// System.Int32 Newtonsoft.Json.Serialization.JsonSerializerInternalBase/ReferenceEqualsEqualityComparer::System.Collections.Generic.IEqualityComparer<System.Object>.GetHashCode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReferenceEqualsEqualityComparer_System_Collections_Generic_IEqualityComparerU3CSystem_ObjectU3E_GetHashCode_m6362588AA172DAC6D4E56FD874923DDC91199A7F (ReferenceEqualsEqualityComparer_tD789E33DF14461C13594DA126C4617B43A7AE7C1 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___obj0;
		int32_t L_1;
		L_1 = RuntimeHelpers_GetHashCode_mDA6691034E245B5F619B108F3597725FF7862DA1(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalBase/ReferenceEqualsEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReferenceEqualsEqualityComparer__ctor_m49CBC89EA95CF8A1C7A03CF8B634F02E065AAE50 (ReferenceEqualsEqualityComparer_tD789E33DF14461C13594DA126C4617B43A7AE7C1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mD90FBA4531BB3EEB7478A3BB4F10AF35213CDA74 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB8728C7EEAE5E87C536027C1B1F3092AC1FC7AE4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tB8728C7EEAE5E87C536027C1B1F3092AC1FC7AE4 * L_0 = (U3CU3Ec_tB8728C7EEAE5E87C536027C1B1F3092AC1FC7AE4 *)il2cpp_codegen_object_new(U3CU3Ec_tB8728C7EEAE5E87C536027C1B1F3092AC1FC7AE4_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m8BF93306BBC87D527748FCC0E30A786D1317C8DE(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tB8728C7EEAE5E87C536027C1B1F3092AC1FC7AE4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB8728C7EEAE5E87C536027C1B1F3092AC1FC7AE4_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8BF93306BBC87D527748FCC0E30A786D1317C8DE (U3CU3Ec_tB8728C7EEAE5E87C536027C1B1F3092AC1FC7AE4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c::<CreateObjectUsingCreatorWithParameters>b__38_0(Newtonsoft.Json.Serialization.JsonProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CCreateObjectUsingCreatorWithParametersU3Eb__38_0_m06AF588D4470EC4890B088D8229B4BF2C8E0AE10 (U3CU3Ec_tB8728C7EEAE5E87C536027C1B1F3092AC1FC7AE4 * __this, JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153 * ___p0, const RuntimeMethod* method)
{
	{
		JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153 * L_0 = ___p0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = JsonProperty_get_PropertyName_m4020136CA5389A6AE7879C81BBDEF9526916E967_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c::<CreateObjectUsingCreatorWithParameters>b__38_2(Newtonsoft.Json.Serialization.JsonProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CCreateObjectUsingCreatorWithParametersU3Eb__38_2_mBAAFDB6419723D27F3D02589AE48D02F743698E5 (U3CU3Ec_tB8728C7EEAE5E87C536027C1B1F3092AC1FC7AE4 * __this, JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153 * ___p0, const RuntimeMethod* method)
{
	{
		JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153 * L_0 = ___p0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = JsonProperty_get_PropertyName_m4020136CA5389A6AE7879C81BBDEF9526916E967_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Newtonsoft.Json.Serialization.JsonProperty Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c::<PopulateObject>b__42_0(Newtonsoft.Json.Serialization.JsonProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153 * U3CU3Ec_U3CPopulateObjectU3Eb__42_0_m394A57B46292709A2ED10A0244BD3A0A898E48AE (U3CU3Ec_tB8728C7EEAE5E87C536027C1B1F3092AC1FC7AE4 * __this, JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153 * ___m0, const RuntimeMethod* method)
{
	{
		JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153 * L_0 = ___m0;
		return L_0;
	}
}
// Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c::<PopulateObject>b__42_1(Newtonsoft.Json.Serialization.JsonProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CPopulateObjectU3Eb__42_1_m9350D3396EE666D0CA6FAEA4EE67B8DD30DA726F (U3CU3Ec_tB8728C7EEAE5E87C536027C1B1F3092AC1FC7AE4 * __this, JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153 * ___m0, const RuntimeMethod* method)
{
	{
		return (int32_t)(0);
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
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c__DisplayClass38_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass38_0__ctor_m5F5160FD68DB916A876C7204B013A39836E749E7 (U3CU3Ec__DisplayClass38_0_t915D02CF4611DECF574288087148225A01E8858F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c__DisplayClass38_0::<CreateObjectUsingCreatorWithParameters>b__1(Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass38_0_U3CCreateObjectUsingCreatorWithParametersU3Eb__1_mEC054EC8B9FD70AF6494BB227F6FB09006129E53 (U3CU3Ec__DisplayClass38_0_t915D02CF4611DECF574288087148225A01E8858F * __this, CreatorPropertyContext_tC1B18FE410FA5FBB198E733C7913623B74EE5082 * ___p0, const RuntimeMethod* method)
{
	{
		CreatorPropertyContext_tC1B18FE410FA5FBB198E733C7913623B74EE5082 * L_0 = ___p0;
		NullCheck(L_0);
		JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153 * L_1 = L_0->get_Property_1();
		JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153 * L_2 = __this->get_property_0();
		return (bool)((((int32_t)((((RuntimeObject*)(JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153 *)L_1) == ((RuntimeObject*)(JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153 *)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
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
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatorPropertyContext__ctor_m38C363ABFEA2A741BCA53845127F6E161D5BFCB2 (CreatorPropertyContext_tC1B18FE410FA5FBB198E733C7913623B74EE5082 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		__this->set_Name_0(L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Serialization.JsonTypeReflector/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mC409C8EC090A5B96453675405D966CFD49C2A57C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t432D27D46D79D966CF0380A55300D9CB205C4280_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t432D27D46D79D966CF0380A55300D9CB205C4280 * L_0 = (U3CU3Ec_t432D27D46D79D966CF0380A55300D9CB205C4280 *)il2cpp_codegen_object_new(U3CU3Ec_t432D27D46D79D966CF0380A55300D9CB205C4280_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m0292EC7082FC45D7C7A1744D23E63209D54F12F5(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t432D27D46D79D966CF0380A55300D9CB205C4280_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t432D27D46D79D966CF0380A55300D9CB205C4280_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.JsonTypeReflector/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m0292EC7082FC45D7C7A1744D23E63209D54F12F5 (U3CU3Ec_t432D27D46D79D966CF0380A55300D9CB205C4280 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Type Newtonsoft.Json.Serialization.JsonTypeReflector/<>c::<GetCreator>b__22_1(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * U3CU3Ec_U3CGetCreatorU3Eb__22_1_m988EDA027D29AB50AF97011BBDD93BCB0F406C31 (U3CU3Ec_t432D27D46D79D966CF0380A55300D9CB205C4280 * __this, RuntimeObject * ___param0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___param0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD7438454F3EF140B6B22CB3ED354178FA3A495D5)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_U3CGetCreatorU3Eb__22_1_m988EDA027D29AB50AF97011BBDD93BCB0F406C31_RuntimeMethod_var)));
	}

IL_000e:
	{
		RuntimeObject * L_2 = ___param0;
		NullCheck(L_2);
		Type_t * L_3;
		L_3 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Void Newtonsoft.Json.Serialization.JsonTypeReflector/<>c__DisplayClass22_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0__ctor_m2F139A7985168AAA8FE9192D6867FF153810AF1E (U3CU3Ec__DisplayClass22_0_t7FE4D2598B5E18A275AB1869838AD49DC6B715D6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Newtonsoft.Json.Serialization.JsonTypeReflector/<>c__DisplayClass22_0::<GetCreator>b__0(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass22_0_U3CGetCreatorU3Eb__0_m5B979E0CE9F3D8AB2F80067EE3A199FE5EF5CC78 (U3CU3Ec__DisplayClass22_0_t7FE4D2598B5E18A275AB1869838AD49DC6B715D6 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisRuntimeObject_TisType_t_m9172D480F276E4D46B7848B73E3042F3A9771258_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisType_t_mDB744C25D97BD49BD70979DC17395D271EA84945_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m84B84849EC5A4CBDFA2EAC12D68E99B17D87EAFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonTypeReflector_t84285D25A1552678FA2061401352508764C7D5AB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectConstructor_1_Invoke_mB7BEBABEB6EA87AB49623F789F93ACBF54BFB003_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetCreatorU3Eb__22_1_m988EDA027D29AB50AF97011BBDD93BCB0F406C31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t432D27D46D79D966CF0380A55300D9CB205C4280_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* V_0 = NULL;
	ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF * G_B3_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF * G_B2_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___parameters0;
			if (!L_0)
			{
				goto IL_0073;
			}
		}

IL_0003:
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = ___parameters0;
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t432D27D46D79D966CF0380A55300D9CB205C4280_il2cpp_TypeInfo_var);
			Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF * L_2 = ((U3CU3Ec_t432D27D46D79D966CF0380A55300D9CB205C4280_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t432D27D46D79D966CF0380A55300D9CB205C4280_il2cpp_TypeInfo_var))->get_U3CU3E9__22_1_1();
			Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF * L_3 = L_2;
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			if (L_3)
			{
				G_B3_0 = L_3;
				G_B3_1 = L_1;
				goto IL_0023;
			}
		}

IL_000c:
		{
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t432D27D46D79D966CF0380A55300D9CB205C4280_il2cpp_TypeInfo_var);
			U3CU3Ec_t432D27D46D79D966CF0380A55300D9CB205C4280 * L_4 = ((U3CU3Ec_t432D27D46D79D966CF0380A55300D9CB205C4280_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t432D27D46D79D966CF0380A55300D9CB205C4280_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
			Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF * L_5 = (Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF *)il2cpp_codegen_object_new(Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF_il2cpp_TypeInfo_var);
			Func_2__ctor_m84B84849EC5A4CBDFA2EAC12D68E99B17D87EAFD(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3CGetCreatorU3Eb__22_1_m988EDA027D29AB50AF97011BBDD93BCB0F406C31_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m84B84849EC5A4CBDFA2EAC12D68E99B17D87EAFD_RuntimeMethod_var);
			Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF * L_6 = L_5;
			((U3CU3Ec_t432D27D46D79D966CF0380A55300D9CB205C4280_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t432D27D46D79D966CF0380A55300D9CB205C4280_il2cpp_TypeInfo_var))->set_U3CU3E9__22_1_1(L_6);
			G_B3_0 = L_6;
			G_B3_1 = G_B2_1;
		}

IL_0023:
		{
			RuntimeObject* L_7;
			L_7 = Enumerable_Select_TisRuntimeObject_TisType_t_m9172D480F276E4D46B7848B73E3042F3A9771258((RuntimeObject*)(RuntimeObject*)G_B3_1, G_B3_0, /*hidden argument*/Enumerable_Select_TisRuntimeObject_TisType_t_m9172D480F276E4D46B7848B73E3042F3A9771258_RuntimeMethod_var);
			TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_8;
			L_8 = Enumerable_ToArray_TisType_t_mDB744C25D97BD49BD70979DC17395D271EA84945(L_7, /*hidden argument*/Enumerable_ToArray_TisType_t_mDB744C25D97BD49BD70979DC17395D271EA84945_RuntimeMethod_var);
			V_0 = L_8;
			Type_t * L_9 = __this->get_type_0();
			TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_10 = V_0;
			NullCheck(L_9);
			ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_11;
			L_11 = Type_GetConstructor_m98D609FCFA8EB6E54A9FF705D77EEE16603B278C(L_9, L_10, /*hidden argument*/NULL);
			V_1 = L_11;
			ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_12 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B_il2cpp_TypeInfo_var);
			bool L_13;
			L_13 = ConstructorInfo_op_Inequality_m14EF5800ABCDCE484FEC9C73ED6D84E8343442CC(L_12, (ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B *)NULL, /*hidden argument*/NULL);
			if (!L_13)
			{
				goto IL_0058;
			}
		}

IL_0044:
		{
			IL2CPP_RUNTIME_CLASS_INIT(JsonTypeReflector_t84285D25A1552678FA2061401352508764C7D5AB_il2cpp_TypeInfo_var);
			ReflectionDelegateFactory_t22E2F13135925F2E24B37244B5747D3A250D7E27 * L_14;
			L_14 = JsonTypeReflector_get_ReflectionDelegateFactory_mA47753ACF65AAD4E9A42E4861CE06DA3C030B7A4(/*hidden argument*/NULL);
			ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_15 = V_1;
			NullCheck(L_14);
			ObjectConstructor_1_t7930D8596973688461599EADA76C46746D4A2774 * L_16;
			L_16 = VirtFuncInvoker1< ObjectConstructor_1_t7930D8596973688461599EADA76C46746D4A2774 *, MethodBase_t * >::Invoke(5 /* Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> Newtonsoft.Json.Utilities.ReflectionDelegateFactory::CreateParameterizedConstructor(System.Reflection.MethodBase) */, L_14, L_15);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = ___parameters0;
			NullCheck(L_16);
			RuntimeObject * L_18;
			L_18 = ObjectConstructor_1_Invoke_mB7BEBABEB6EA87AB49623F789F93ACBF54BFB003(L_16, L_17, /*hidden argument*/ObjectConstructor_1_Invoke_mB7BEBABEB6EA87AB49623F789F93ACBF54BFB003_RuntimeMethod_var);
			V_2 = L_18;
			goto IL_00c1;
		}

IL_0058:
		{
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var)));
			CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_19;
			L_19 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
			Type_t * L_20 = __this->get_type_0();
			String_t* L_21;
			L_21 = StringUtils_FormatWith_m936F7DFEA6059B46E0063436AA15666DD85ACB07(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral23B435163284C2F25AE5E84212B0650024F0760B)), L_19, L_20, /*hidden argument*/NULL);
			JsonException_tD4970C15EFCD45318B603FD05766B927594DBEE5 * L_22 = (JsonException_tD4970C15EFCD45318B603FD05766B927594DBEE5 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_tD4970C15EFCD45318B603FD05766B927594DBEE5_il2cpp_TypeInfo_var)));
			JsonException__ctor_m79E97925189BF5031852BE59CA0A8FB3C4852FAD(L_22, L_21, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec__DisplayClass22_0_U3CGetCreatorU3Eb__0_m5B979E0CE9F3D8AB2F80067EE3A199FE5EF5CC78_RuntimeMethod_var)));
		}

IL_0073:
		{
			Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * L_23 = __this->get_defaultConstructor_1();
			if (L_23)
			{
				goto IL_0096;
			}
		}

IL_007b:
		{
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var)));
			CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_24;
			L_24 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
			Type_t * L_25 = __this->get_type_0();
			String_t* L_26;
			L_26 = StringUtils_FormatWith_m936F7DFEA6059B46E0063436AA15666DD85ACB07(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral92A38C953A6126D97ED1B04B582F3B4519E7D184)), L_24, L_25, /*hidden argument*/NULL);
			JsonException_tD4970C15EFCD45318B603FD05766B927594DBEE5 * L_27 = (JsonException_tD4970C15EFCD45318B603FD05766B927594DBEE5 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_tD4970C15EFCD45318B603FD05766B927594DBEE5_il2cpp_TypeInfo_var)));
			JsonException__ctor_m79E97925189BF5031852BE59CA0A8FB3C4852FAD(L_27, L_26, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec__DisplayClass22_0_U3CGetCreatorU3Eb__0_m5B979E0CE9F3D8AB2F80067EE3A199FE5EF5CC78_RuntimeMethod_var)));
		}

IL_0096:
		{
			Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * L_28 = __this->get_defaultConstructor_1();
			NullCheck(L_28);
			RuntimeObject * L_29;
			L_29 = Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726(L_28, /*hidden argument*/Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_RuntimeMethod_var);
			V_2 = L_29;
			goto IL_00c1;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a4;
		}
		throw e;
	}

CATCH_00a4:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var)));
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_30;
		L_30 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		Type_t * L_31 = __this->get_type_0();
		String_t* L_32;
		L_32 = StringUtils_FormatWith_m936F7DFEA6059B46E0063436AA15666DD85ACB07(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6699410DAF356A90DFDDE06D8F3571412FFE4442)), L_30, L_31, /*hidden argument*/NULL);
		Exception_t * L_33 = V_3;
		JsonException_tD4970C15EFCD45318B603FD05766B927594DBEE5 * L_34 = (JsonException_tD4970C15EFCD45318B603FD05766B927594DBEE5 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_tD4970C15EFCD45318B603FD05766B927594DBEE5_il2cpp_TypeInfo_var)));
		JsonException__ctor_mE5B74E698B3163A940937CC18CCFAF9F3C102D43(L_34, L_32, L_33, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec__DisplayClass22_0_U3CGetCreatorU3Eb__0_m5B979E0CE9F3D8AB2F80067EE3A199FE5EF5CC78_RuntimeMethod_var)));
	} // end catch (depth: 1)

IL_00c1:
	{
		RuntimeObject * L_35 = V_2;
		return L_35;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m40CCDCD3A18A2D1CBDCEA4EA258CCA501D2797D2 (U3CU3Ec__DisplayClass3_0_tD666091175CFD25BD7677EFDD53D702F7FB4462F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass3_0::<CreateParameterizedConstructor>b__0(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass3_0_U3CCreateParameterizedConstructorU3Eb__0_m3CFF76AD944997F7C1BBBFDEA3492ECEB838BE90 (U3CU3Ec__DisplayClass3_0_tD666091175CFD25BD7677EFDD53D702F7FB4462F * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___a0, const RuntimeMethod* method)
{
	{
		ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_0 = __this->get_c_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = ___a0;
		NullCheck(L_0);
		RuntimeObject * L_2;
		L_2 = ConstructorInfo_Invoke_m8DF5D6F53038C7B6443EEA82D922724F39CD2906(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass3_0::<CreateParameterizedConstructor>b__1(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass3_0_U3CCreateParameterizedConstructorU3Eb__1_mFEAD4C272F4F1A00E46197F7D21B8736ADBE15AF (U3CU3Ec__DisplayClass3_0_tD666091175CFD25BD7677EFDD53D702F7FB4462F * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___a0, const RuntimeMethod* method)
{
	{
		MethodBase_t * L_0 = __this->get_method_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = ___a0;
		NullCheck(L_0);
		RuntimeObject * L_2;
		L_2 = MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_0, NULL, L_1, /*hidden argument*/NULL);
		return L_2;
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
// System.Void Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2__ctor_mC3F422D0D586B89EA98437579CED77EEE6128417 (U3CExecuteFilterU3Ed__2_t907335DF609CA7FBD618781EFF46DEC81992AE8D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_System_IDisposable_Dispose_m2BE771E147904AE0BE1E3F7B7D72657E3A9C8050 (U3CExecuteFilterU3Ed__2_t907335DF609CA7FBD618781EFF46DEC81992AE8D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)-4)))) > ((uint32_t)1))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_002f;
		}
	}

IL_0012:
	{
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)((int32_t)-4))))
			{
				goto IL_001e;
			}
		}

IL_0018:
		{
			int32_t L_4 = V_0;
			if ((((int32_t)L_4) == ((int32_t)1)))
			{
				goto IL_001e;
			}
		}

IL_001c:
		{
			IL2CPP_LEAVE(0x2F, FINALLY_0028);
		}

IL_001e:
		{
		}

IL_001f:
		try
		{ // begin try (depth: 2)
			IL2CPP_LEAVE(0x2F, FINALLY_0021);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0021;
		}

FINALLY_0021:
		{ // begin finally (depth: 2)
			U3CExecuteFilterU3Ed__2_U3CU3Em__Finally2_mA082782BC915471487A4591179C5503075B8DCBD(__this, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(33)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(33)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x2F, FINALLY_0028);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0028;
	}

FINALLY_0028:
	{ // begin finally (depth: 1)
		U3CExecuteFilterU3Ed__2_U3CU3Em__Finally1_m0CE5F3471224020C65ACFD3EF8DEDDF5264A243A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(40)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(40)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2F, IL_002f)
	}

IL_002f:
	{
		return;
	}
}
// System.Boolean Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CExecuteFilterU3Ed__2_MoveNext_mE4122497A2BB97D166211D32FFBD77C839706848 (U3CExecuteFilterU3Ed__2_t907335DF609CA7FBD618781EFF46DEC81992AE8D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t7A54AEED0B537A132EE02BA2A10621CDA1900932_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t8AEDD013FF9124B1315F51E8F23014339F14BCFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	QueryFilter_t4FBB8A3F67039895506A0BBBDB54213614FE5EA3 * V_2 = NULL;
	JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * V_3 = NULL;
	JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			QueryFilter_t4FBB8A3F67039895506A0BBBDB54213614FE5EA3 * L_1 = __this->get_U3CU3E4__this_5();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_001f;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0098;
			}
		}

IL_0018:
		{
			V_0 = (bool)0;
			goto IL_00e2;
		}

IL_001f:
		{
			__this->set_U3CU3E1__state_0((-1));
			RuntimeObject* L_4 = __this->get_current_3();
			NullCheck(L_4);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>::GetEnumerator() */, IEnumerable_1_t7A54AEED0B537A132EE02BA2A10621CDA1900932_il2cpp_TypeInfo_var, L_4);
			__this->set_U3CU3E7__wrap1_8(L_5);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_00ba;
		}

IL_0041:
		{
			RuntimeObject* L_6 = __this->get_U3CU3E7__wrap1_8();
			NullCheck(L_6);
			JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_7;
			L_7 = InterfaceFuncInvoker0< JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken>::get_Current() */, IEnumerator_1_t8AEDD013FF9124B1315F51E8F23014339F14BCFB_il2cpp_TypeInfo_var, L_6);
			V_3 = L_7;
			JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_8 = V_3;
			NullCheck(L_8);
			RuntimeObject* L_9;
			L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>::GetEnumerator() */, IEnumerable_1_t7A54AEED0B537A132EE02BA2A10621CDA1900932_il2cpp_TypeInfo_var, L_8);
			__this->set_U3CU3E7__wrap2_9(L_9);
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			goto IL_00a0;
		}

IL_0063:
		{
			RuntimeObject* L_10 = __this->get_U3CU3E7__wrap2_9();
			NullCheck(L_10);
			JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_11;
			L_11 = InterfaceFuncInvoker0< JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken>::get_Current() */, IEnumerator_1_t8AEDD013FF9124B1315F51E8F23014339F14BCFB_il2cpp_TypeInfo_var, L_10);
			V_4 = L_11;
			QueryFilter_t4FBB8A3F67039895506A0BBBDB54213614FE5EA3 * L_12 = V_2;
			NullCheck(L_12);
			QueryExpression_t8D8090F4AFDEC9493D2C8ECB42B8BEE65AC701FE * L_13 = L_12->get_Expression_0();
			JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_14 = __this->get_root_6();
			JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_15 = V_4;
			NullCheck(L_13);
			bool L_16;
			L_16 = VirtFuncInvoker2< bool, JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 *, JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * >::Invoke(4 /* System.Boolean Newtonsoft.Json.Linq.JsonPath.QueryExpression::IsMatch(Newtonsoft.Json.Linq.JToken,Newtonsoft.Json.Linq.JToken) */, L_13, L_14, L_15);
			if (!L_16)
			{
				goto IL_00a0;
			}
		}

IL_0085:
		{
			JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_17 = V_4;
			__this->set_U3CU3E2__current_1(L_17);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_00e2;
		}

IL_0098:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-4));
		}

IL_00a0:
		{
			RuntimeObject* L_18 = __this->get_U3CU3E7__wrap2_9();
			NullCheck(L_18);
			bool L_19;
			L_19 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_18);
			if (L_19)
			{
				goto IL_0063;
			}
		}

IL_00ad:
		{
			U3CExecuteFilterU3Ed__2_U3CU3Em__Finally2_mA082782BC915471487A4591179C5503075B8DCBD(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap2_9((RuntimeObject*)NULL);
		}

IL_00ba:
		{
			RuntimeObject* L_20 = __this->get_U3CU3E7__wrap1_8();
			NullCheck(L_20);
			bool L_21;
			L_21 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_20);
			if (L_21)
			{
				goto IL_0041;
			}
		}

IL_00ca:
		{
			U3CExecuteFilterU3Ed__2_U3CU3Em__Finally1_m0CE5F3471224020C65ACFD3EF8DEDDF5264A243A(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_8((RuntimeObject*)NULL);
			V_0 = (bool)0;
			goto IL_00e2;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_00db;
	}

FAULT_00db:
	{ // begin fault (depth: 1)
		U3CExecuteFilterU3Ed__2_System_IDisposable_Dispose_m2BE771E147904AE0BE1E3F7B7D72657E3A9C8050(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(219)
	} // end fault
	IL2CPP_CLEANUP(219)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00e2:
	{
		bool L_22 = V_0;
		return L_22;
	}
}
// System.Void Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_U3CU3Em__Finally1_m0CE5F3471224020C65ACFD3EF8DEDDF5264A243A (U3CExecuteFilterU3Ed__2_t907335DF609CA7FBD618781EFF46DEC81992AE8D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap1_8();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_U3CU3E7__wrap1_8();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_U3CU3Em__Finally2_mA082782BC915471487A4591179C5503075B8DCBD (U3CExecuteFilterU3Ed__2_t907335DF609CA7FBD618781EFF46DEC81992AE8D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0(((int32_t)-3));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap2_9();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_U3CU3E7__wrap2_9();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001b:
	{
		return;
	}
}
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2::System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * U3CExecuteFilterU3Ed__2_System_Collections_Generic_IEnumeratorU3CNewtonsoft_Json_Linq_JTokenU3E_get_Current_m3469B01976C680A58989904DFC481023AF792B61 (U3CExecuteFilterU3Ed__2_t907335DF609CA7FBD618781EFF46DEC81992AE8D * __this, const RuntimeMethod* method)
{
	{
		JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_System_Collections_IEnumerator_Reset_mDB57252266359667E1F0433A9A1966AECAF8F7DC (U3CExecuteFilterU3Ed__2_t907335DF609CA7FBD618781EFF46DEC81992AE8D * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CExecuteFilterU3Ed__2_System_Collections_IEnumerator_Reset_mDB57252266359667E1F0433A9A1966AECAF8F7DC_RuntimeMethod_var)));
	}
}
// System.Object Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CExecuteFilterU3Ed__2_System_Collections_IEnumerator_get_Current_mE4EC4C9887688D163F6A44E1EA7F327B39CAF985 (U3CExecuteFilterU3Ed__2_t907335DF609CA7FBD618781EFF46DEC81992AE8D * __this, const RuntimeMethod* method)
{
	{
		JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2::System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExecuteFilterU3Ed__2_System_Collections_Generic_IEnumerableU3CNewtonsoft_Json_Linq_JTokenU3E_GetEnumerator_mAA8871D42186AE786169F5034F938698A06E8326 (U3CExecuteFilterU3Ed__2_t907335DF609CA7FBD618781EFF46DEC81992AE8D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CExecuteFilterU3Ed__2_t907335DF609CA7FBD618781EFF46DEC81992AE8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CExecuteFilterU3Ed__2_t907335DF609CA7FBD618781EFF46DEC81992AE8D * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CExecuteFilterU3Ed__2_t907335DF609CA7FBD618781EFF46DEC81992AE8D * L_3 = (U3CExecuteFilterU3Ed__2_t907335DF609CA7FBD618781EFF46DEC81992AE8D *)il2cpp_codegen_object_new(U3CExecuteFilterU3Ed__2_t907335DF609CA7FBD618781EFF46DEC81992AE8D_il2cpp_TypeInfo_var);
		U3CExecuteFilterU3Ed__2__ctor_mC3F422D0D586B89EA98437579CED77EEE6128417(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3CExecuteFilterU3Ed__2_t907335DF609CA7FBD618781EFF46DEC81992AE8D * L_4 = V_0;
		QueryFilter_t4FBB8A3F67039895506A0BBBDB54213614FE5EA3 * L_5 = __this->get_U3CU3E4__this_5();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_5(L_5);
	}

IL_0035:
	{
		U3CExecuteFilterU3Ed__2_t907335DF609CA7FBD618781EFF46DEC81992AE8D * L_6 = V_0;
		JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_7 = __this->get_U3CU3E3__root_7();
		NullCheck(L_6);
		L_6->set_root_6(L_7);
		U3CExecuteFilterU3Ed__2_t907335DF609CA7FBD618781EFF46DEC81992AE8D * L_8 = V_0;
		RuntimeObject* L_9 = __this->get_U3CU3E3__current_4();
		NullCheck(L_8);
		L_8->set_current_3(L_9);
		U3CExecuteFilterU3Ed__2_t907335DF609CA7FBD618781EFF46DEC81992AE8D * L_10 = V_0;
		return L_10;
	}
}
// System.Collections.IEnumerator Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__2::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExecuteFilterU3Ed__2_System_Collections_IEnumerable_GetEnumerator_m775A5A6E9BC0FB3A16E5C3FE402A3AC5E4B04DE5 (U3CExecuteFilterU3Ed__2_t907335DF609CA7FBD618781EFF46DEC81992AE8D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CExecuteFilterU3Ed__2_System_Collections_Generic_IEnumerableU3CNewtonsoft_Json_Linq_JTokenU3E_GetEnumerator_mAA8871D42186AE786169F5034F938698A06E8326(__this, /*hidden argument*/NULL);
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
// System.Void Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2__ctor_m0A24C948C0E9264B7D1F42E47D07EE72CD66F3F8 (U3CExecuteFilterU3Ed__2_t03BD833AD36FDB8FE0ECFB31585FDBD468904E80 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_System_IDisposable_Dispose_mE1B63A7E42D7D5B0666F0C7D32D367356339CC00 (U3CExecuteFilterU3Ed__2_t03BD833AD36FDB8FE0ECFB31585FDBD468904E80 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)-4)))) > ((uint32_t)1))))
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1))) <= ((uint32_t)1))))
		{
			goto IL_0031;
		}
	}

IL_0014:
	{
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)((int32_t)-4))))
			{
				goto IL_0020;
			}
		}

IL_001a:
		{
			int32_t L_4 = V_0;
			if ((((int32_t)L_4) == ((int32_t)1)))
			{
				goto IL_0020;
			}
		}

IL_001e:
		{
			IL2CPP_LEAVE(0x31, FINALLY_002a);
		}

IL_0020:
		{
		}

IL_0021:
		try
		{ // begin try (depth: 2)
			IL2CPP_LEAVE(0x31, FINALLY_0023);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0023;
		}

FINALLY_0023:
		{ // begin finally (depth: 2)
			U3CExecuteFilterU3Ed__2_U3CU3Em__Finally2_mB7B56252E1D949F9B93F71DE4F8D03C08D9D7933(__this, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(35)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(35)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x31, FINALLY_002a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002a;
	}

FINALLY_002a:
	{ // begin finally (depth: 1)
		U3CExecuteFilterU3Ed__2_U3CU3Em__Finally1_m7FAC3D88846949E76A592980AE8BFEA5881252DA(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(42)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(42)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x31, IL_0031)
	}

IL_0031:
	{
		return;
	}
}
// System.Boolean Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CExecuteFilterU3Ed__2_MoveNext_mE754B40CB4AE2D8AB1CE8F936BA4CA41AAAF1107 (U3CExecuteFilterU3Ed__2_t03BD833AD36FDB8FE0ECFB31585FDBD468904E80 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t7A54AEED0B537A132EE02BA2A10621CDA1900932_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t8AEDD013FF9124B1315F51E8F23014339F14BCFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	QueryScanFilter_tC1CDEA5414361B4CE75446B0D53BA2B77287BCF1 * V_2 = NULL;
	JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * V_3 = NULL;
	JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527 * V_4 = NULL;
	JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 4> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			QueryScanFilter_tC1CDEA5414361B4CE75446B0D53BA2B77287BCF1 * L_1 = __this->get_U3CU3E4__this_5();
			V_2 = L_1;
			int32_t L_2 = V_1;
			switch (L_2)
			{
				case 0:
				{
					goto IL_0027;
				}
				case 1:
				{
					goto IL_00b5;
				}
				case 2:
				{
					goto IL_00ff;
				}
			}
		}

IL_0020:
		{
			V_0 = (bool)0;
			goto IL_012f;
		}

IL_0027:
		{
			__this->set_U3CU3E1__state_0((-1));
			RuntimeObject* L_3 = __this->get_current_3();
			NullCheck(L_3);
			RuntimeObject* L_4;
			L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>::GetEnumerator() */, IEnumerable_1_t7A54AEED0B537A132EE02BA2A10621CDA1900932_il2cpp_TypeInfo_var, L_3);
			__this->set_U3CU3E7__wrap1_8(L_4);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_0107;
		}

IL_004c:
		{
			RuntimeObject* L_5 = __this->get_U3CU3E7__wrap1_8();
			NullCheck(L_5);
			JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_6;
			L_6 = InterfaceFuncInvoker0< JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken>::get_Current() */, IEnumerator_1_t8AEDD013FF9124B1315F51E8F23014339F14BCFB_il2cpp_TypeInfo_var, L_5);
			V_3 = L_6;
			JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_7 = V_3;
			V_4 = ((JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527 *)IsInstClass((RuntimeObject*)L_7, JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527_il2cpp_TypeInfo_var));
			JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527 * L_8 = V_4;
			if (!L_8)
			{
				goto IL_00d9;
			}
		}

IL_0064:
		{
			JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527 * L_9 = V_4;
			NullCheck(L_9);
			RuntimeObject* L_10;
			L_10 = JContainer_DescendantsAndSelf_m5500A4C4D46DD912A01607C36170F7F15CE9130C(L_9, /*hidden argument*/NULL);
			NullCheck(L_10);
			RuntimeObject* L_11;
			L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>::GetEnumerator() */, IEnumerable_1_t7A54AEED0B537A132EE02BA2A10621CDA1900932_il2cpp_TypeInfo_var, L_10);
			__this->set_U3CU3E7__wrap2_9(L_11);
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			goto IL_00bd;
		}

IL_0080:
		{
			RuntimeObject* L_12 = __this->get_U3CU3E7__wrap2_9();
			NullCheck(L_12);
			JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_13;
			L_13 = InterfaceFuncInvoker0< JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken>::get_Current() */, IEnumerator_1_t8AEDD013FF9124B1315F51E8F23014339F14BCFB_il2cpp_TypeInfo_var, L_12);
			V_5 = L_13;
			QueryScanFilter_tC1CDEA5414361B4CE75446B0D53BA2B77287BCF1 * L_14 = V_2;
			NullCheck(L_14);
			QueryExpression_t8D8090F4AFDEC9493D2C8ECB42B8BEE65AC701FE * L_15 = L_14->get_Expression_0();
			JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_16 = __this->get_root_6();
			JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_17 = V_5;
			NullCheck(L_15);
			bool L_18;
			L_18 = VirtFuncInvoker2< bool, JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 *, JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * >::Invoke(4 /* System.Boolean Newtonsoft.Json.Linq.JsonPath.QueryExpression::IsMatch(Newtonsoft.Json.Linq.JToken,Newtonsoft.Json.Linq.JToken) */, L_15, L_16, L_17);
			if (!L_18)
			{
				goto IL_00bd;
			}
		}

IL_00a2:
		{
			JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_19 = V_5;
			__this->set_U3CU3E2__current_1(L_19);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_012f;
		}

IL_00b5:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-4));
		}

IL_00bd:
		{
			RuntimeObject* L_20 = __this->get_U3CU3E7__wrap2_9();
			NullCheck(L_20);
			bool L_21;
			L_21 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_20);
			if (L_21)
			{
				goto IL_0080;
			}
		}

IL_00ca:
		{
			U3CExecuteFilterU3Ed__2_U3CU3Em__Finally2_mB7B56252E1D949F9B93F71DE4F8D03C08D9D7933(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap2_9((RuntimeObject*)NULL);
			goto IL_0107;
		}

IL_00d9:
		{
			QueryScanFilter_tC1CDEA5414361B4CE75446B0D53BA2B77287BCF1 * L_22 = V_2;
			NullCheck(L_22);
			QueryExpression_t8D8090F4AFDEC9493D2C8ECB42B8BEE65AC701FE * L_23 = L_22->get_Expression_0();
			JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_24 = __this->get_root_6();
			JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_25 = V_3;
			NullCheck(L_23);
			bool L_26;
			L_26 = VirtFuncInvoker2< bool, JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 *, JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * >::Invoke(4 /* System.Boolean Newtonsoft.Json.Linq.JsonPath.QueryExpression::IsMatch(Newtonsoft.Json.Linq.JToken,Newtonsoft.Json.Linq.JToken) */, L_23, L_24, L_25);
			if (!L_26)
			{
				goto IL_0107;
			}
		}

IL_00ed:
		{
			JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_27 = V_3;
			__this->set_U3CU3E2__current_1(L_27);
			__this->set_U3CU3E1__state_0(2);
			V_0 = (bool)1;
			goto IL_012f;
		}

IL_00ff:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_0107:
		{
			RuntimeObject* L_28 = __this->get_U3CU3E7__wrap1_8();
			NullCheck(L_28);
			bool L_29;
			L_29 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_28);
			if (L_29)
			{
				goto IL_004c;
			}
		}

IL_0117:
		{
			U3CExecuteFilterU3Ed__2_U3CU3Em__Finally1_m7FAC3D88846949E76A592980AE8BFEA5881252DA(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_8((RuntimeObject*)NULL);
			V_0 = (bool)0;
			goto IL_012f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0128;
	}

FAULT_0128:
	{ // begin fault (depth: 1)
		U3CExecuteFilterU3Ed__2_System_IDisposable_Dispose_mE1B63A7E42D7D5B0666F0C7D32D367356339CC00(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(296)
	} // end fault
	IL2CPP_CLEANUP(296)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_012f:
	{
		bool L_30 = V_0;
		return L_30;
	}
}
// System.Void Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_U3CU3Em__Finally1_m7FAC3D88846949E76A592980AE8BFEA5881252DA (U3CExecuteFilterU3Ed__2_t03BD833AD36FDB8FE0ECFB31585FDBD468904E80 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap1_8();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_U3CU3E7__wrap1_8();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_U3CU3Em__Finally2_mB7B56252E1D949F9B93F71DE4F8D03C08D9D7933 (U3CExecuteFilterU3Ed__2_t03BD833AD36FDB8FE0ECFB31585FDBD468904E80 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0(((int32_t)-3));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap2_9();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_U3CU3E7__wrap2_9();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001b:
	{
		return;
	}
}
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2::System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * U3CExecuteFilterU3Ed__2_System_Collections_Generic_IEnumeratorU3CNewtonsoft_Json_Linq_JTokenU3E_get_Current_m62085175A57E6E313FD08A2F7631CE43F6C7A4FB (U3CExecuteFilterU3Ed__2_t03BD833AD36FDB8FE0ECFB31585FDBD468904E80 * __this, const RuntimeMethod* method)
{
	{
		JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_System_Collections_IEnumerator_Reset_mDDAC03CE0AFCA5F60ED84FF9F0CE5E71E60C5FB2 (U3CExecuteFilterU3Ed__2_t03BD833AD36FDB8FE0ECFB31585FDBD468904E80 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CExecuteFilterU3Ed__2_System_Collections_IEnumerator_Reset_mDDAC03CE0AFCA5F60ED84FF9F0CE5E71E60C5FB2_RuntimeMethod_var)));
	}
}
// System.Object Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CExecuteFilterU3Ed__2_System_Collections_IEnumerator_get_Current_mA02DD8BD35672113A97760CBA190293AC24494F6 (U3CExecuteFilterU3Ed__2_t03BD833AD36FDB8FE0ECFB31585FDBD468904E80 * __this, const RuntimeMethod* method)
{
	{
		JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2::System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExecuteFilterU3Ed__2_System_Collections_Generic_IEnumerableU3CNewtonsoft_Json_Linq_JTokenU3E_GetEnumerator_m2F4DFE7F0A96DA2C1E3742DAA0BFA5C70DCC0A25 (U3CExecuteFilterU3Ed__2_t03BD833AD36FDB8FE0ECFB31585FDBD468904E80 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CExecuteFilterU3Ed__2_t03BD833AD36FDB8FE0ECFB31585FDBD468904E80_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CExecuteFilterU3Ed__2_t03BD833AD36FDB8FE0ECFB31585FDBD468904E80 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CExecuteFilterU3Ed__2_t03BD833AD36FDB8FE0ECFB31585FDBD468904E80 * L_3 = (U3CExecuteFilterU3Ed__2_t03BD833AD36FDB8FE0ECFB31585FDBD468904E80 *)il2cpp_codegen_object_new(U3CExecuteFilterU3Ed__2_t03BD833AD36FDB8FE0ECFB31585FDBD468904E80_il2cpp_TypeInfo_var);
		U3CExecuteFilterU3Ed__2__ctor_m0A24C948C0E9264B7D1F42E47D07EE72CD66F3F8(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3CExecuteFilterU3Ed__2_t03BD833AD36FDB8FE0ECFB31585FDBD468904E80 * L_4 = V_0;
		QueryScanFilter_tC1CDEA5414361B4CE75446B0D53BA2B77287BCF1 * L_5 = __this->get_U3CU3E4__this_5();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_5(L_5);
	}

IL_0035:
	{
		U3CExecuteFilterU3Ed__2_t03BD833AD36FDB8FE0ECFB31585FDBD468904E80 * L_6 = V_0;
		JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_7 = __this->get_U3CU3E3__root_7();
		NullCheck(L_6);
		L_6->set_root_6(L_7);
		U3CExecuteFilterU3Ed__2_t03BD833AD36FDB8FE0ECFB31585FDBD468904E80 * L_8 = V_0;
		RuntimeObject* L_9 = __this->get_U3CU3E3__current_4();
		NullCheck(L_8);
		L_8->set_current_3(L_9);
		U3CExecuteFilterU3Ed__2_t03BD833AD36FDB8FE0ECFB31585FDBD468904E80 * L_10 = V_0;
		return L_10;
	}
}
// System.Collections.IEnumerator Newtonsoft.Json.Linq.JsonPath.QueryScanFilter/<ExecuteFilter>d__2::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExecuteFilterU3Ed__2_System_Collections_IEnumerable_GetEnumerator_m6C0206F9930AB5362E5D3BB60905CEA28E284935 (U3CExecuteFilterU3Ed__2_t03BD833AD36FDB8FE0ECFB31585FDBD468904E80 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CExecuteFilterU3Ed__2_System_Collections_Generic_IEnumerableU3CNewtonsoft_Json_Linq_JTokenU3E_GetEnumerator_m2F4DFE7F0A96DA2C1E3742DAA0BFA5C70DCC0A25(__this, /*hidden argument*/NULL);
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
// System.Void Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_mE9FC4AC33922A213FB6ED5F6550485249580E714 (U3CU3Ec__DisplayClass11_0_tE1DA9EFFD3ED2A3ACCDC003763EB1D737863E2F3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass11_0::<Create>b__0(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass11_0_U3CCreateU3Eb__0_mF8DFD280B10D699CC7743AB1D04FD1219A761B23 (U3CU3Ec__DisplayClass11_0_tE1DA9EFFD3ED2A3ACCDC003763EB1D737863E2F3 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * L_0 = __this->get_ctor_0();
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726(L_0, /*hidden argument*/Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_RuntimeMethod_var);
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
// System.Void Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass11_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_1__ctor_m0A2180897D699C119AE26591C671DB1BB342EB40 (U3CU3Ec__DisplayClass11_1_t1B3025B8455083F56ADBE94EBEEBB6B319881954 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass11_1::<Create>b__1(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass11_1_U3CCreateU3Eb__1_m8C591D2F4EE9BB8ECB8E17B45451AE2FEE1DA880 (U3CU3Ec__DisplayClass11_1_t1B3025B8455083F56ADBE94EBEEBB6B319881954 * __this, RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MethodCall_2_Invoke_m9C81ECB8456EB29485C29A0C466D8C358990D126_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodCall_2_tC314E59E92B5F5B706088F6BF3A46D3946819F58 * L_0 = __this->get_call_0();
		RuntimeObject * L_1 = ___target0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2;
		L_2 = Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_inline(/*hidden argument*/Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_RuntimeMethod_var);
		NullCheck(L_0);
		RuntimeObject * L_3;
		L_3 = MethodCall_2_Invoke_m9C81ECB8456EB29485C29A0C466D8C358990D126(L_0, L_1, L_2, /*hidden argument*/MethodCall_2_Invoke_m9C81ECB8456EB29485C29A0C466D8C358990D126_RuntimeMethod_var);
		return L_3;
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
// System.Void Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass11_2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_2__ctor_m8D14FEEC363B8BF9970E6F5F090FFEA099182A23 (U3CU3Ec__DisplayClass11_2_t44A5B1FBAAC9A27E6E16071A0EFFC5B039E90522 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass11_2::<Create>b__2(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_2_U3CCreateU3Eb__2_mF3F58F7E1460B82F3672910C809E855F9E2AE13D (U3CU3Ec__DisplayClass11_2_t44A5B1FBAAC9A27E6E16071A0EFFC5B039E90522 * __this, RuntimeObject * ___target0, RuntimeObject * ___arg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MethodCall_2_Invoke_m9C81ECB8456EB29485C29A0C466D8C358990D126_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodCall_2_tC314E59E92B5F5B706088F6BF3A46D3946819F58 * L_0 = __this->get_call_0();
		RuntimeObject * L_1 = ___target0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2;
		RuntimeObject * L_4 = ___arg1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		NullCheck(L_0);
		RuntimeObject * L_5;
		L_5 = MethodCall_2_Invoke_m9C81ECB8456EB29485C29A0C466D8C358990D126(L_0, L_1, L_3, /*hidden argument*/MethodCall_2_Invoke_m9C81ECB8456EB29485C29A0C466D8C358990D126_RuntimeMethod_var);
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
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA8F3B7419676F74694E28D86156FE04A3278F1AD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tE335300CBEC7EEE18397C46C3EF34C37AAA33A56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tE335300CBEC7EEE18397C46C3EF34C37AAA33A56 * L_0 = (U3CU3Ec_tE335300CBEC7EEE18397C46C3EF34C37AAA33A56 *)il2cpp_codegen_object_new(U3CU3Ec_tE335300CBEC7EEE18397C46C3EF34C37AAA33A56_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mE21B84D8EC87E7D72714DEC1E5C3789CDE26567E(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tE335300CBEC7EEE18397C46C3EF34C37AAA33A56_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE335300CBEC7EEE18397C46C3EF34C37AAA33A56_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE21B84D8EC87E7D72714DEC1E5C3789CDE26567E (U3CU3Ec_tE335300CBEC7EEE18397C46C3EF34C37AAA33A56 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<GetDefaultConstructor>b__11_0(System.Reflection.ConstructorInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetDefaultConstructorU3Eb__11_0_m30F50A83D99DC991CFD6956F5631700F9A3543A6 (U3CU3Ec_tE335300CBEC7EEE18397C46C3EF34C37AAA33A56 * __this, ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_mC34A3CF45962BF5A4FDF04D029B51F4B0CFD938F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_0 = ___c0;
		NullCheck(L_0);
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_1;
		L_1 = VirtFuncInvoker0< ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* >::Invoke(18 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_0);
		bool L_2;
		L_2 = Enumerable_Any_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_mC34A3CF45962BF5A4FDF04D029B51F4B0CFD938F((RuntimeObject*)(RuntimeObject*)L_1, /*hidden argument*/Enumerable_Any_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_mC34A3CF45962BF5A4FDF04D029B51F4B0CFD938F_RuntimeMethod_var);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.String Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<GetFieldsAndProperties>b__31_0(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CGetFieldsAndPropertiesU3Eb__31_0_m04E0C99BBCA1BE55F84360216DE4442D9B2ADDD1 (U3CU3Ec_tE335300CBEC7EEE18397C46C3EF34C37AAA33A56 * __this, MemberInfo_t * ___m0, const RuntimeMethod* method)
{
	{
		MemberInfo_t * L_0 = ___m0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		return L_1;
	}
}
// System.Type Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<GetMemberInfoFromType>b__39_0(System.Reflection.ParameterInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * U3CU3Ec_U3CGetMemberInfoFromTypeU3Eb__39_0_mD8E5EA4386DFF7A8E31E99B4B88EE16E5D89F32B (U3CU3Ec_tE335300CBEC7EEE18397C46C3EF34C37AAA33A56 * __this, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * ___p0, const RuntimeMethod* method)
{
	{
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_0 = ___p0;
		NullCheck(L_0);
		Type_t * L_1;
		L_1 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_0);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<GetChildPrivateFields>b__41_0(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetChildPrivateFieldsU3Eb__41_0_mFCC8379087A4197E42AAAE8C587603910B1BFBDD (U3CU3Ec_tE335300CBEC7EEE18397C46C3EF34C37AAA33A56 * __this, FieldInfo_t * ___f0, const RuntimeMethod* method)
{
	{
		FieldInfo_t * L_0 = ___f0;
		NullCheck(L_0);
		bool L_1;
		L_1 = FieldInfo_get_IsPrivate_m33AC8E111CE7497070E6F65F11E68CD536D42072(L_0, /*hidden argument*/NULL);
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
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass31_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0__ctor_m1B370C841CDBF92F79E3AF562CD27751EC6456ED (U3CU3Ec__DisplayClass31_0_t917E27AC7B6B28AB3663E6D5D42528B453E4C301 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass31_0::<GetFieldsAndProperties>b__1(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass31_0_U3CGetFieldsAndPropertiesU3Eb__1_m3F309C1DA172AD69B6C68DC43538BE26EFBEE8AD (U3CU3Ec__DisplayClass31_0_t917E27AC7B6B28AB3663E6D5D42528B453E4C301 * __this, MemberInfo_t * ___m0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberInfo_t * L_0 = ___m0;
		NullCheck(L_0);
		Type_t * L_1;
		L_1 = VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_0);
		MemberInfo_t * L_2 = __this->get_memberInfo_0();
		NullCheck(L_2);
		Type_t * L_3;
		L_3 = VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_1, L_3, /*hidden argument*/NULL);
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
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass44_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass44_0__ctor_m20D27B7C553E0A4DD03BB071BBCA337608C63BA2 (U3CU3Ec__DisplayClass44_0_t1A0F7B02E3FEEF47F379E39A853F0DD506891FF6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass44_0::<GetChildPrivateProperties>b__0(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass44_0_U3CGetChildPrivatePropertiesU3Eb__0_mA83C2F167020EA5BFC692C919A292081D2D2F05B (U3CU3Ec__DisplayClass44_0_t1A0F7B02E3FEEF47F379E39A853F0DD506891FF6 * __this, PropertyInfo_t * ___p0, const RuntimeMethod* method)
{
	{
		PropertyInfo_t * L_0 = ___p0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		PropertyInfo_t * L_2 = __this->get_subTypeProperty_0();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass44_0::<GetChildPrivateProperties>b__1(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass44_0_U3CGetChildPrivatePropertiesU3Eb__1_m2B191B465692BB56F5C9EF5274850B3E66E987C5 (U3CU3Ec__DisplayClass44_0_t1A0F7B02E3FEEF47F379E39A853F0DD506891FF6 * __this, PropertyInfo_t * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PropertyInfo_t * L_0 = ___p0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		PropertyInfo_t * L_2 = __this->get_subTypeProperty_0();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		PropertyInfo_t * L_5 = ___p0;
		NullCheck(L_5);
		Type_t * L_6;
		L_6 = VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_5);
		PropertyInfo_t * L_7 = __this->get_subTypeProperty_0();
		NullCheck(L_7);
		Type_t * L_8;
		L_8 = VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_7);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_6, L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_002f:
	{
		return (bool)0;
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
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass44_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass44_1__ctor_m10505F0BD7EF3DCB8FDDE0296A1FE4A971873D3A (U3CU3Ec__DisplayClass44_1_t5DB0EDE6C3C5B3168914EF51DE38C39F24A1D940 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass44_1::<GetChildPrivateProperties>b__2(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass44_1_U3CGetChildPrivatePropertiesU3Eb__2_mC71EBDDE6DF17378EFEEF078599FECBAF8608844 (U3CU3Ec__DisplayClass44_1_t5DB0EDE6C3C5B3168914EF51DE38C39F24A1D940 * __this, PropertyInfo_t * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtils_tD8B96CE8EA833A80BD7906C67C34C0CD7089CFB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * G_B4_0 = NULL;
	MethodInfo_t * G_B3_0 = NULL;
	Type_t * G_B5_0 = NULL;
	Type_t * G_B7_0 = NULL;
	Type_t * G_B6_0 = NULL;
	{
		PropertyInfo_t * L_0 = ___p0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		U3CU3Ec__DisplayClass44_0_t1A0F7B02E3FEEF47F379E39A853F0DD506891FF6 * L_2 = __this->get_CSU24U3CU3E8__locals1_1();
		NullCheck(L_2);
		PropertyInfo_t * L_3 = L_2->get_subTypeProperty_0();
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_3);
		bool L_5;
		L_5 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004d;
		}
	}
	{
		PropertyInfo_t * L_6 = ___p0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_tD8B96CE8EA833A80BD7906C67C34C0CD7089CFB7_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = ReflectionUtils_IsVirtual_mA6CA39072FE9A7228CF38A063981E0355C300456(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		PropertyInfo_t * L_8 = ___p0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_tD8B96CE8EA833A80BD7906C67C34C0CD7089CFB7_il2cpp_TypeInfo_var);
		MethodInfo_t * L_9;
		L_9 = ReflectionUtils_GetBaseDefinition_m7CF8AAD4B516046E7B8428A7A5C5A7CFC7F4EE2B(L_8, /*hidden argument*/NULL);
		MethodInfo_t * L_10 = L_9;
		G_B3_0 = L_10;
		if (L_10)
		{
			G_B4_0 = L_10;
			goto IL_0032;
		}
	}
	{
		G_B5_0 = ((Type_t *)(NULL));
		goto IL_0037;
	}

IL_0032:
	{
		NullCheck(G_B4_0);
		Type_t * L_11;
		L_11 = VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, G_B4_0);
		G_B5_0 = L_11;
	}

IL_0037:
	{
		Type_t * L_12 = G_B5_0;
		G_B6_0 = L_12;
		if (L_12)
		{
			G_B7_0 = L_12;
			goto IL_0041;
		}
	}
	{
		PropertyInfo_t * L_13 = ___p0;
		NullCheck(L_13);
		Type_t * L_14;
		L_14 = VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_13);
		G_B7_0 = L_14;
	}

IL_0041:
	{
		Type_t * L_15 = __this->get_subTypePropertyDeclaringType_0();
		NullCheck(G_B7_0);
		bool L_16;
		L_16 = VirtFuncInvoker1< bool, Type_t * >::Invoke(117 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, G_B7_0, L_15);
		return L_16;
	}

IL_004d:
	{
		return (bool)0;
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
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass45_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass45_0__ctor_m60B3F670167D656290C5C8983A39518227325033 (U3CU3Ec__DisplayClass45_0_tA5E18035C93F80F9C615001C77B5E95702A4AB5D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass45_0::<IsMethodOverridden>b__0(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass45_0_U3CIsMethodOverriddenU3Eb__0_m63894FE4115265A9364DAFEB3F79B4ABBFCD474B (U3CU3Ec__DisplayClass45_0_tA5E18035C93F80F9C615001C77B5E95702A4AB5D * __this, MethodInfo_t * ___info0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t * L_0 = ___info0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		String_t* L_2 = __this->get_method_0();
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		MethodInfo_t * L_4 = ___info0;
		NullCheck(L_4);
		Type_t * L_5;
		L_5 = VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_4);
		Type_t * L_6 = __this->get_methodDeclaringType_1();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0(L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		MethodInfo_t * L_8 = ___info0;
		NullCheck(L_8);
		MethodInfo_t * L_9;
		L_9 = VirtFuncInvoker0< MethodInfo_t * >::Invoke(42 /* System.Reflection.MethodInfo System.Reflection.MethodInfo::GetBaseDefinition() */, L_8);
		NullCheck(L_9);
		Type_t * L_10;
		L_10 = VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_9);
		Type_t * L_11 = __this->get_methodDeclaringType_1();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_10, L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_003d:
	{
		return (bool)0;
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
// System.Void Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2__ctor_m9C87D66B515F164D0800D09B6DD1B2D1733C4C4F (U3CExecuteFilterU3Ed__2_tC2F023DC65A1ED62FB71C74885871250B3D59507 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_System_IDisposable_Dispose_m7D9B1C2DDC17DBE3F9C48D64A6B3A05D217FAC64 (U3CExecuteFilterU3Ed__2_tC2F023DC65A1ED62FB71C74885871250B3D59507 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1))) <= ((uint32_t)2))))
		{
			goto IL_001c;
		}
	}

IL_0012:
	{
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1C, FINALLY_0015);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0015;
	}

FINALLY_0015:
	{ // begin finally (depth: 1)
		U3CExecuteFilterU3Ed__2_U3CU3Em__Finally1_mC5320DD19987F6AB5FABF54D05F16F2BA02A7400(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(21)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(21)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1C, IL_001c)
	}

IL_001c:
	{
		return;
	}
}
// System.Boolean Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CExecuteFilterU3Ed__2_MoveNext_m7480C01332F490FEF32FBF068F620F66527E3863 (U3CExecuteFilterU3Ed__2_tC2F023DC65A1ED62FB71C74885871250B3D59507 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t7A54AEED0B537A132EE02BA2A10621CDA1900932_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t8AEDD013FF9124B1315F51E8F23014339F14BCFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JProperty_t6B592BFC6895980207CC8356187EB1D0328A328E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	ScanFilter_tA54485E0456337F3C138D40F71B8E116062B3E3C * V_2 = NULL;
	JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527 * V_3 = NULL;
	JProperty_t6B592BFC6895980207CC8356187EB1D0328A328E * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 5> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			ScanFilter_tA54485E0456337F3C138D40F71B8E116062B3E3C * L_1 = __this->get_U3CU3E4__this_5();
			V_2 = L_1;
			int32_t L_2 = V_1;
			switch (L_2)
			{
				case 0:
				{
					goto IL_002b;
				}
				case 1:
				{
					goto IL_0083;
				}
				case 2:
				{
					goto IL_0100;
				}
				case 3:
				{
					goto IL_0129;
				}
			}
		}

IL_0024:
		{
			V_0 = (bool)0;
			goto IL_016c;
		}

IL_002b:
		{
			__this->set_U3CU3E1__state_0((-1));
			RuntimeObject* L_3 = __this->get_current_3();
			NullCheck(L_3);
			RuntimeObject* L_4;
			L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>::GetEnumerator() */, IEnumerable_1_t7A54AEED0B537A132EE02BA2A10621CDA1900932_il2cpp_TypeInfo_var, L_3);
			__this->set_U3CU3E7__wrap1_6(L_4);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_0144;
		}

IL_0050:
		{
			RuntimeObject* L_5 = __this->get_U3CU3E7__wrap1_6();
			NullCheck(L_5);
			JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_6;
			L_6 = InterfaceFuncInvoker0< JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken>::get_Current() */, IEnumerator_1_t8AEDD013FF9124B1315F51E8F23014339F14BCFB_il2cpp_TypeInfo_var, L_5);
			__this->set_U3CcU3E5__3_7(L_6);
			ScanFilter_tA54485E0456337F3C138D40F71B8E116062B3E3C * L_7 = V_2;
			NullCheck(L_7);
			String_t* L_8 = L_7->get_Name_0();
			if (L_8)
			{
				goto IL_008b;
			}
		}

IL_0069:
		{
			JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_9 = __this->get_U3CcU3E5__3_7();
			__this->set_U3CU3E2__current_1(L_9);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_016c;
		}

IL_0083:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_008b:
		{
			JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_10 = __this->get_U3CcU3E5__3_7();
			__this->set_U3CvalueU3E5__4_8(L_10);
		}

IL_0097:
		{
			JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_11 = __this->get_U3CvalueU3E5__4_8();
			V_3 = ((JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527 *)IsInstClass((RuntimeObject*)L_11, JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527_il2cpp_TypeInfo_var));
			JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_12 = __this->get_U3CcU3E5__3_7();
			JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527 * L_13 = V_3;
			JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_14 = __this->get_U3CvalueU3E5__4_8();
			JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_15;
			L_15 = PathFilter_GetNextScanValue_m62D065EE59DDA14A604D790984919D568180BDDB(L_12, L_13, L_14, /*hidden argument*/NULL);
			__this->set_U3CvalueU3E5__4_8(L_15);
			JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_16 = __this->get_U3CvalueU3E5__4_8();
			if (!L_16)
			{
				goto IL_0136;
			}
		}

IL_00c3:
		{
			JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_17 = __this->get_U3CvalueU3E5__4_8();
			V_4 = ((JProperty_t6B592BFC6895980207CC8356187EB1D0328A328E *)IsInstClass((RuntimeObject*)L_17, JProperty_t6B592BFC6895980207CC8356187EB1D0328A328E_il2cpp_TypeInfo_var));
			JProperty_t6B592BFC6895980207CC8356187EB1D0328A328E * L_18 = V_4;
			if (!L_18)
			{
				goto IL_010a;
			}
		}

IL_00d4:
		{
			JProperty_t6B592BFC6895980207CC8356187EB1D0328A328E * L_19 = V_4;
			NullCheck(L_19);
			String_t* L_20;
			L_20 = JProperty_get_Name_mDEF17388577064192224A03308BE8CE285E8227D_inline(L_19, /*hidden argument*/NULL);
			ScanFilter_tA54485E0456337F3C138D40F71B8E116062B3E3C * L_21 = V_2;
			NullCheck(L_21);
			String_t* L_22 = L_21->get_Name_0();
			bool L_23;
			L_23 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_20, L_22, /*hidden argument*/NULL);
			if (!L_23)
			{
				goto IL_0097;
			}
		}

IL_00e8:
		{
			JProperty_t6B592BFC6895980207CC8356187EB1D0328A328E * L_24 = V_4;
			NullCheck(L_24);
			JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_25;
			L_25 = JProperty_get_Value_mDF54FDCE172670DDB0DBF41ABE51ECEF733842D9(L_24, /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_25);
			__this->set_U3CU3E1__state_0(2);
			V_0 = (bool)1;
			goto IL_016c;
		}

IL_0100:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_0097;
		}

IL_010a:
		{
			ScanFilter_tA54485E0456337F3C138D40F71B8E116062B3E3C * L_26 = V_2;
			NullCheck(L_26);
			String_t* L_27 = L_26->get_Name_0();
			if (L_27)
			{
				goto IL_0097;
			}
		}

IL_0112:
		{
			JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_28 = __this->get_U3CvalueU3E5__4_8();
			__this->set_U3CU3E2__current_1(L_28);
			__this->set_U3CU3E1__state_0(3);
			V_0 = (bool)1;
			goto IL_016c;
		}

IL_0129:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_0097;
		}

IL_0136:
		{
			__this->set_U3CvalueU3E5__4_8((JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 *)NULL);
			__this->set_U3CcU3E5__3_7((JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 *)NULL);
		}

IL_0144:
		{
			RuntimeObject* L_29 = __this->get_U3CU3E7__wrap1_6();
			NullCheck(L_29);
			bool L_30;
			L_30 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_29);
			if (L_30)
			{
				goto IL_0050;
			}
		}

IL_0154:
		{
			U3CExecuteFilterU3Ed__2_U3CU3Em__Finally1_mC5320DD19987F6AB5FABF54D05F16F2BA02A7400(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_6((RuntimeObject*)NULL);
			V_0 = (bool)0;
			goto IL_016c;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0165;
	}

FAULT_0165:
	{ // begin fault (depth: 1)
		U3CExecuteFilterU3Ed__2_System_IDisposable_Dispose_m7D9B1C2DDC17DBE3F9C48D64A6B3A05D217FAC64(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(357)
	} // end fault
	IL2CPP_CLEANUP(357)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_016c:
	{
		bool L_31 = V_0;
		return L_31;
	}
}
// System.Void Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__2::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_U3CU3Em__Finally1_mC5320DD19987F6AB5FABF54D05F16F2BA02A7400 (U3CExecuteFilterU3Ed__2_tC2F023DC65A1ED62FB71C74885871250B3D59507 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap1_6();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_U3CU3E7__wrap1_6();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__2::System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * U3CExecuteFilterU3Ed__2_System_Collections_Generic_IEnumeratorU3CNewtonsoft_Json_Linq_JTokenU3E_get_Current_m0E5753304C4308D28A807C963F301376562A371D (U3CExecuteFilterU3Ed__2_tC2F023DC65A1ED62FB71C74885871250B3D59507 * __this, const RuntimeMethod* method)
{
	{
		JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_System_Collections_IEnumerator_Reset_m0E858B8117F7CA6785EE79A013BC5EE7126C8DA6 (U3CExecuteFilterU3Ed__2_tC2F023DC65A1ED62FB71C74885871250B3D59507 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CExecuteFilterU3Ed__2_System_Collections_IEnumerator_Reset_m0E858B8117F7CA6785EE79A013BC5EE7126C8DA6_RuntimeMethod_var)));
	}
}
// System.Object Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CExecuteFilterU3Ed__2_System_Collections_IEnumerator_get_Current_mB102A71468F5C7A4BFC155E7A697FF7F2F5651DB (U3CExecuteFilterU3Ed__2_tC2F023DC65A1ED62FB71C74885871250B3D59507 * __this, const RuntimeMethod* method)
{
	{
		JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__2::System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExecuteFilterU3Ed__2_System_Collections_Generic_IEnumerableU3CNewtonsoft_Json_Linq_JTokenU3E_GetEnumerator_m816477A9BF02F708E8793C52B679C98733A2AD93 (U3CExecuteFilterU3Ed__2_tC2F023DC65A1ED62FB71C74885871250B3D59507 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CExecuteFilterU3Ed__2_tC2F023DC65A1ED62FB71C74885871250B3D59507_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CExecuteFilterU3Ed__2_tC2F023DC65A1ED62FB71C74885871250B3D59507 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CExecuteFilterU3Ed__2_tC2F023DC65A1ED62FB71C74885871250B3D59507 * L_3 = (U3CExecuteFilterU3Ed__2_tC2F023DC65A1ED62FB71C74885871250B3D59507 *)il2cpp_codegen_object_new(U3CExecuteFilterU3Ed__2_tC2F023DC65A1ED62FB71C74885871250B3D59507_il2cpp_TypeInfo_var);
		U3CExecuteFilterU3Ed__2__ctor_m9C87D66B515F164D0800D09B6DD1B2D1733C4C4F(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3CExecuteFilterU3Ed__2_tC2F023DC65A1ED62FB71C74885871250B3D59507 * L_4 = V_0;
		ScanFilter_tA54485E0456337F3C138D40F71B8E116062B3E3C * L_5 = __this->get_U3CU3E4__this_5();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_5(L_5);
	}

IL_0035:
	{
		U3CExecuteFilterU3Ed__2_tC2F023DC65A1ED62FB71C74885871250B3D59507 * L_6 = V_0;
		RuntimeObject* L_7 = __this->get_U3CU3E3__current_4();
		NullCheck(L_6);
		L_6->set_current_3(L_7);
		U3CExecuteFilterU3Ed__2_tC2F023DC65A1ED62FB71C74885871250B3D59507 * L_8 = V_0;
		return L_8;
	}
}
// System.Collections.IEnumerator Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__2::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExecuteFilterU3Ed__2_System_Collections_IEnumerable_GetEnumerator_mED3724EA57B6E87E6D214F516A9D4B6A486F1C63 (U3CExecuteFilterU3Ed__2_tC2F023DC65A1ED62FB71C74885871250B3D59507 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CExecuteFilterU3Ed__2_System_Collections_Generic_IEnumerableU3CNewtonsoft_Json_Linq_JTokenU3E_GetEnumerator_m816477A9BF02F708E8793C52B679C98733A2AD93(__this, /*hidden argument*/NULL);
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
// System.Void Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2__ctor_mA5D3C85349B2531D811591BABE707FE92880B9B3 (U3CExecuteFilterU3Ed__2_t1076E6004461A437C119CCE96763DBE824D16241 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_System_IDisposable_Dispose_mBE4CBFB5D291C2CB4933C6AC16BE52F71CECC1CE (U3CExecuteFilterU3Ed__2_t1076E6004461A437C119CCE96763DBE824D16241 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)-4)))) > ((uint32_t)1))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_002f;
		}
	}

IL_0012:
	{
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_3 = V_0;
			if ((((int32_t)L_3) == ((int32_t)((int32_t)-4))))
			{
				goto IL_001e;
			}
		}

IL_0018:
		{
			int32_t L_4 = V_0;
			if ((((int32_t)L_4) == ((int32_t)1)))
			{
				goto IL_001e;
			}
		}

IL_001c:
		{
			IL2CPP_LEAVE(0x2F, FINALLY_0028);
		}

IL_001e:
		{
		}

IL_001f:
		try
		{ // begin try (depth: 2)
			IL2CPP_LEAVE(0x2F, FINALLY_0021);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0021;
		}

FINALLY_0021:
		{ // begin finally (depth: 2)
			U3CExecuteFilterU3Ed__2_U3CU3Em__Finally2_m1AD0EC97391CB5D7A95D3DCEBB3939A7BD106916(__this, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(33)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(33)
		{
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			IL2CPP_END_CLEANUP(0x2F, FINALLY_0028);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0028;
	}

FINALLY_0028:
	{ // begin finally (depth: 1)
		U3CExecuteFilterU3Ed__2_U3CU3Em__Finally1_mA253A23BB0E8EBB5AEF092EA096FEF2382C3C95A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(40)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(40)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x2F, IL_002f)
	}

IL_002f:
	{
		return;
	}
}
// System.Boolean Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CExecuteFilterU3Ed__2_MoveNext_m7FE33D07AA23BA86C44C0441A7FA150E93482E8D (U3CExecuteFilterU3Ed__2_t1076E6004461A437C119CCE96763DBE824D16241 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t7A54AEED0B537A132EE02BA2A10621CDA1900932_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t8AEDD013FF9124B1315F51E8F23014339F14BCFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JProperty_t6B592BFC6895980207CC8356187EB1D0328A328E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	ScanMultipleFilter_tFC75BE31C1B63D7444192C2044CDD142E8C69BD6 * V_2 = NULL;
	JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527 * V_3 = NULL;
	String_t* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			ScanMultipleFilter_tFC75BE31C1B63D7444192C2044CDD142E8C69BD6 * L_1 = __this->get_U3CU3E4__this_5();
			V_2 = L_1;
			int32_t L_2 = V_1;
			if (!L_2)
			{
				goto IL_001f;
			}
		}

IL_0011:
		{
			int32_t L_3 = V_1;
			if ((((int32_t)L_3) == ((int32_t)1)))
			{
				goto IL_0101;
			}
		}

IL_0018:
		{
			V_0 = (bool)0;
			goto IL_016a;
		}

IL_001f:
		{
			__this->set_U3CU3E1__state_0((-1));
			RuntimeObject* L_4 = __this->get_current_3();
			NullCheck(L_4);
			RuntimeObject* L_5;
			L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>::GetEnumerator() */, IEnumerable_1_t7A54AEED0B537A132EE02BA2A10621CDA1900932_il2cpp_TypeInfo_var, L_4);
			__this->set_U3CU3E7__wrap1_6(L_5);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_0142;
		}

IL_0044:
		{
			RuntimeObject* L_6 = __this->get_U3CU3E7__wrap1_6();
			NullCheck(L_6);
			JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_7;
			L_7 = InterfaceFuncInvoker0< JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken>::get_Current() */, IEnumerator_1_t8AEDD013FF9124B1315F51E8F23014339F14BCFB_il2cpp_TypeInfo_var, L_6);
			__this->set_U3CcU3E5__3_7(L_7);
			JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_8 = __this->get_U3CcU3E5__3_7();
			__this->set_U3CvalueU3E5__4_8(L_8);
		}

IL_0061:
		{
			JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_9 = __this->get_U3CvalueU3E5__4_8();
			V_3 = ((JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527 *)IsInstClass((RuntimeObject*)L_9, JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527_il2cpp_TypeInfo_var));
			JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_10 = __this->get_U3CcU3E5__3_7();
			JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527 * L_11 = V_3;
			JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_12 = __this->get_U3CvalueU3E5__4_8();
			JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_13;
			L_13 = PathFilter_GetNextScanValue_m62D065EE59DDA14A604D790984919D568180BDDB(L_10, L_11, L_12, /*hidden argument*/NULL);
			__this->set_U3CvalueU3E5__4_8(L_13);
			JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_14 = __this->get_U3CvalueU3E5__4_8();
			if (!L_14)
			{
				goto IL_0134;
			}
		}

IL_0090:
		{
			JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_15 = __this->get_U3CvalueU3E5__4_8();
			__this->set_U3CpropertyU3E5__5_9(((JProperty_t6B592BFC6895980207CC8356187EB1D0328A328E *)IsInstClass((RuntimeObject*)L_15, JProperty_t6B592BFC6895980207CC8356187EB1D0328A328E_il2cpp_TypeInfo_var)));
			JProperty_t6B592BFC6895980207CC8356187EB1D0328A328E * L_16 = __this->get_U3CpropertyU3E5__5_9();
			if (!L_16)
			{
				goto IL_0128;
			}
		}

IL_00a9:
		{
			ScanMultipleFilter_tFC75BE31C1B63D7444192C2044CDD142E8C69BD6 * L_17 = V_2;
			NullCheck(L_17);
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_18 = L_17->get__names_0();
			NullCheck(L_18);
			Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  L_19;
			L_19 = List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF(L_18, /*hidden argument*/List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap5_10(L_19);
			__this->set_U3CU3E1__state_0(((int32_t)-4));
			goto IL_0109;
		}

IL_00c4:
		{
			Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * L_20 = __this->get_address_of_U3CU3E7__wrap5_10();
			String_t* L_21;
			L_21 = Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_inline((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)L_20, /*hidden argument*/Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var);
			V_4 = L_21;
			JProperty_t6B592BFC6895980207CC8356187EB1D0328A328E * L_22 = __this->get_U3CpropertyU3E5__5_9();
			NullCheck(L_22);
			String_t* L_23;
			L_23 = JProperty_get_Name_mDEF17388577064192224A03308BE8CE285E8227D_inline(L_22, /*hidden argument*/NULL);
			String_t* L_24 = V_4;
			bool L_25;
			L_25 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_23, L_24, /*hidden argument*/NULL);
			if (!L_25)
			{
				goto IL_0109;
			}
		}

IL_00e5:
		{
			JProperty_t6B592BFC6895980207CC8356187EB1D0328A328E * L_26 = __this->get_U3CpropertyU3E5__5_9();
			NullCheck(L_26);
			JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_27;
			L_27 = JProperty_get_Value_mDF54FDCE172670DDB0DBF41ABE51ECEF733842D9(L_26, /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_27);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_016a;
		}

IL_0101:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-4));
		}

IL_0109:
		{
			Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * L_28 = __this->get_address_of_U3CU3E7__wrap5_10();
			bool L_29;
			L_29 = Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)L_28, /*hidden argument*/Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
			if (L_29)
			{
				goto IL_00c4;
			}
		}

IL_0116:
		{
			U3CExecuteFilterU3Ed__2_U3CU3Em__Finally2_m1AD0EC97391CB5D7A95D3DCEBB3939A7BD106916(__this, /*hidden argument*/NULL);
			Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * L_30 = __this->get_address_of_U3CU3E7__wrap5_10();
			il2cpp_codegen_initobj(L_30, sizeof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B ));
		}

IL_0128:
		{
			__this->set_U3CpropertyU3E5__5_9((JProperty_t6B592BFC6895980207CC8356187EB1D0328A328E *)NULL);
			goto IL_0061;
		}

IL_0134:
		{
			__this->set_U3CvalueU3E5__4_8((JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 *)NULL);
			__this->set_U3CcU3E5__3_7((JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 *)NULL);
		}

IL_0142:
		{
			RuntimeObject* L_31 = __this->get_U3CU3E7__wrap1_6();
			NullCheck(L_31);
			bool L_32;
			L_32 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_31);
			if (L_32)
			{
				goto IL_0044;
			}
		}

IL_0152:
		{
			U3CExecuteFilterU3Ed__2_U3CU3Em__Finally1_mA253A23BB0E8EBB5AEF092EA096FEF2382C3C95A(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_6((RuntimeObject*)NULL);
			V_0 = (bool)0;
			goto IL_016a;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0163;
	}

FAULT_0163:
	{ // begin fault (depth: 1)
		U3CExecuteFilterU3Ed__2_System_IDisposable_Dispose_mBE4CBFB5D291C2CB4933C6AC16BE52F71CECC1CE(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(355)
	} // end fault
	IL2CPP_CLEANUP(355)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_016a:
	{
		bool L_33 = V_0;
		return L_33;
	}
}
// System.Void Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_U3CU3Em__Finally1_mA253A23BB0E8EBB5AEF092EA096FEF2382C3C95A (U3CExecuteFilterU3Ed__2_t1076E6004461A437C119CCE96763DBE824D16241 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap1_6();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_U3CU3E7__wrap1_6();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2::<>m__Finally2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_U3CU3Em__Finally2_m1AD0EC97391CB5D7A95D3DCEBB3939A7BD106916 (U3CExecuteFilterU3Ed__2_t1076E6004461A437C119CCE96763DBE824D16241 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0(((int32_t)-3));
		Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * L_0 = __this->get_address_of_U3CU3E7__wrap5_10();
		Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)L_0, /*hidden argument*/Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
		return;
	}
}
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2::System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * U3CExecuteFilterU3Ed__2_System_Collections_Generic_IEnumeratorU3CNewtonsoft_Json_Linq_JTokenU3E_get_Current_m70506DB85A6D1C961014C7FAFD70BAA5910E6CE2 (U3CExecuteFilterU3Ed__2_t1076E6004461A437C119CCE96763DBE824D16241 * __this, const RuntimeMethod* method)
{
	{
		JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExecuteFilterU3Ed__2_System_Collections_IEnumerator_Reset_mD7F0DF5F2B3F78A78FAF5572CBF672745F1EE9FC (U3CExecuteFilterU3Ed__2_t1076E6004461A437C119CCE96763DBE824D16241 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CExecuteFilterU3Ed__2_System_Collections_IEnumerator_Reset_mD7F0DF5F2B3F78A78FAF5572CBF672745F1EE9FC_RuntimeMethod_var)));
	}
}
// System.Object Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CExecuteFilterU3Ed__2_System_Collections_IEnumerator_get_Current_m8F76BC13507ABA919BD19BF0BEC458328D4D3FA4 (U3CExecuteFilterU3Ed__2_t1076E6004461A437C119CCE96763DBE824D16241 * __this, const RuntimeMethod* method)
{
	{
		JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2::System.Collections.Generic.IEnumerable<Newtonsoft.Json.Linq.JToken>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExecuteFilterU3Ed__2_System_Collections_Generic_IEnumerableU3CNewtonsoft_Json_Linq_JTokenU3E_GetEnumerator_m3A064777B2FF0038D2BC367CA31FCD6FF709141B (U3CExecuteFilterU3Ed__2_t1076E6004461A437C119CCE96763DBE824D16241 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CExecuteFilterU3Ed__2_t1076E6004461A437C119CCE96763DBE824D16241_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CExecuteFilterU3Ed__2_t1076E6004461A437C119CCE96763DBE824D16241 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CExecuteFilterU3Ed__2_t1076E6004461A437C119CCE96763DBE824D16241 * L_3 = (U3CExecuteFilterU3Ed__2_t1076E6004461A437C119CCE96763DBE824D16241 *)il2cpp_codegen_object_new(U3CExecuteFilterU3Ed__2_t1076E6004461A437C119CCE96763DBE824D16241_il2cpp_TypeInfo_var);
		U3CExecuteFilterU3Ed__2__ctor_mA5D3C85349B2531D811591BABE707FE92880B9B3(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3CExecuteFilterU3Ed__2_t1076E6004461A437C119CCE96763DBE824D16241 * L_4 = V_0;
		ScanMultipleFilter_tFC75BE31C1B63D7444192C2044CDD142E8C69BD6 * L_5 = __this->get_U3CU3E4__this_5();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_5(L_5);
	}

IL_0035:
	{
		U3CExecuteFilterU3Ed__2_t1076E6004461A437C119CCE96763DBE824D16241 * L_6 = V_0;
		RuntimeObject* L_7 = __this->get_U3CU3E3__current_4();
		NullCheck(L_6);
		L_6->set_current_3(L_7);
		U3CExecuteFilterU3Ed__2_t1076E6004461A437C119CCE96763DBE824D16241 * L_8 = V_0;
		return L_8;
	}
}
// System.Collections.IEnumerator Newtonsoft.Json.Linq.JsonPath.ScanMultipleFilter/<ExecuteFilter>d__2::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CExecuteFilterU3Ed__2_System_Collections_IEnumerable_GetEnumerator_mB490CF08464037FFAE61C3966A5E8841E8D54ED7 (U3CExecuteFilterU3Ed__2_t1076E6004461A437C119CCE96763DBE824D16241 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CExecuteFilterU3Ed__2_System_Collections_Generic_IEnumerableU3CNewtonsoft_Json_Linq_JTokenU3E_GetEnumerator_m3A064777B2FF0038D2BC367CA31FCD6FF709141B(__this, /*hidden argument*/NULL);
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
// System.Void Newtonsoft.Json.Linq.JObject/JObjectDynamicProxy/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mDD07A2F122C3A2CAE78831B0D9B01B21C0328D95 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t079339D53FDBCBD92F5779F7F22AB10461970CA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t079339D53FDBCBD92F5779F7F22AB10461970CA5 * L_0 = (U3CU3Ec_t079339D53FDBCBD92F5779F7F22AB10461970CA5 *)il2cpp_codegen_object_new(U3CU3Ec_t079339D53FDBCBD92F5779F7F22AB10461970CA5_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m47A5913D73676899FDA7E261D8BD77E96A14DAAD(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t079339D53FDBCBD92F5779F7F22AB10461970CA5_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t079339D53FDBCBD92F5779F7F22AB10461970CA5_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Linq.JObject/JObjectDynamicProxy/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m47A5913D73676899FDA7E261D8BD77E96A14DAAD (U3CU3Ec_t079339D53FDBCBD92F5779F7F22AB10461970CA5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Newtonsoft.Json.Linq.JObject/JObjectDynamicProxy/<>c::<GetDynamicMemberNames>b__2_0(Newtonsoft.Json.Linq.JProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CGetDynamicMemberNamesU3Eb__2_0_mE2FD561E21CCA87E3A8F0210D0CB89E6950699CA (U3CU3Ec_t079339D53FDBCBD92F5779F7F22AB10461970CA5 * __this, JProperty_t6B592BFC6895980207CC8356187EB1D0328A328E * ___p0, const RuntimeMethod* method)
{
	{
		JProperty_t6B592BFC6895980207CC8356187EB1D0328A328E * L_0 = ___p0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = JProperty_get_Name_mDEF17388577064192224A03308BE8CE285E8227D_inline(L_0, /*hidden argument*/NULL);
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
// System.Void Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1__ctor_mD367031322091682F76381B43EE0B12ED2390C4A (U3CGetEnumeratorU3Ed__1_t707CB3D09C2C5F8296E6BCCA37C54250187B0587 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1_System_IDisposable_Dispose_m99F660F33C5C70C89DDECD53EAB392EFA338C82A (U3CGetEnumeratorU3Ed__1_t707CB3D09C2C5F8296E6BCCA37C54250187B0587 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__1_MoveNext_mFB686026D24EC05446DF9C421C84ECB6F69271BE (U3CGetEnumeratorU3Ed__1_t707CB3D09C2C5F8296E6BCCA37C54250187B0587 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	JPropertyList_t40544FA83585374547FB7FFD7472CB16A930B95B * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		JPropertyList_t40544FA83585374547FB7FFD7472CB16A930B95B * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003b;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		JPropertyList_t40544FA83585374547FB7FFD7472CB16A930B95B * L_4 = V_1;
		NullCheck(L_4);
		JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_5 = L_4->get__token_0();
		if (!L_5)
		{
			goto IL_0042;
		}
	}
	{
		JPropertyList_t40544FA83585374547FB7FFD7472CB16A930B95B * L_6 = V_1;
		NullCheck(L_6);
		JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_7 = L_6->get__token_0();
		__this->set_U3CU3E2__current_1(L_7);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003b:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0042:
	{
		return (bool)0;
	}
}
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * U3CGetEnumeratorU3Ed__1_System_Collections_Generic_IEnumeratorU3CNewtonsoft_Json_Linq_JTokenU3E_get_Current_mCB2AF957B3F5F6D4F0FB41F4D7B0DBDC9FC1A6C9 (U3CGetEnumeratorU3Ed__1_t707CB3D09C2C5F8296E6BCCA37C54250187B0587 * __this, const RuntimeMethod* method)
{
	{
		JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_Reset_mEA3E383C13EC83D4FC54E793200BFFE1E089191B (U3CGetEnumeratorU3Ed__1_t707CB3D09C2C5F8296E6BCCA37C54250187B0587 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_Reset_mEA3E383C13EC83D4FC54E793200BFFE1E089191B_RuntimeMethod_var)));
	}
}
// System.Object Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_get_Current_m244E5AA0552B8EDA3F629CD4854D7B178D9DE67F (U3CGetEnumeratorU3Ed__1_t707CB3D09C2C5F8296E6BCCA37C54250187B0587 * __this, const RuntimeMethod* method)
{
	{
		JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ImmutableCollectionTypeInfo_get_ContractTypeName_m46FA9FB69F11B3D9F1E46C76DD2D90F6C7F9E429_inline (ImmutableCollectionTypeInfo_tAB8E5C2873442E1F12E93D4CD19CC69E5FBEBAB4 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CContractTypeNameU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImmutableCollectionTypeInfo_set_ContractTypeName_m2DE0B41DA93F4767C59C962CFFD543B9926B462D_inline (ImmutableCollectionTypeInfo_tAB8E5C2873442E1F12E93D4CD19CC69E5FBEBAB4 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CContractTypeNameU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImmutableCollectionTypeInfo_set_CreatedTypeName_m36CF21057B87DE14B93986BA2C5B1A67E19690B6_inline (ImmutableCollectionTypeInfo_tAB8E5C2873442E1F12E93D4CD19CC69E5FBEBAB4 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CCreatedTypeNameU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ImmutableCollectionTypeInfo_set_BuilderTypeName_m0CF526403AABF9641E4EAA02CAB067FAD66D0DB1_inline (ImmutableCollectionTypeInfo_tAB8E5C2873442E1F12E93D4CD19CC69E5FBEBAB4 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CBuilderTypeNameU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* JProperty_get_Name_mDEF17388577064192224A03308BE8CE285E8227D_inline (JProperty_t6B592BFC6895980207CC8356187EB1D0328A328E * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__name_21();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* JsonProperty_get_PropertyName_m4020136CA5389A6AE7879C81BBDEF9526916E967_inline (JsonProperty_t251EC5D4E2E308E0CAE6A5F24E76A4D87FD82153 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__propertyName_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
