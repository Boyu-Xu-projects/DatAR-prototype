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
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<JsonSubTypes.JsonSubtypes/KnownSubTypeAttribute>
struct Action_1_t16E63DAA551CE22F4B70EED70C9A0278938A91A1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.Object,System.Type>
struct Dictionary_2_t2CD3B17049E6FD408FCA97F153125127F9C350A8;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC;
// System.Collections.Generic.Dictionary`2<System.String,System.Type>
struct Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85;
// System.Collections.Generic.Dictionary`2<System.Type,System.Object>
struct Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE;
// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs>
struct EventHandler_1_tE3860EE7EA00D2627F0864DFF7F17AE485E5A375;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>
struct Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Type>,System.Type>
struct Func_2_t1C35530CDCF3ACBB02D9C76B9BB986AED1FC59E6;
// System.Func`2<JsonSubTypes.JsonSubtypesByDiscriminatorValueConverter,System.Boolean>
struct Func_2_t730F7242228FC0DF9F03C53B2BFA811A34990645;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Func`2<System.String,System.Boolean>
struct Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D;
// System.Func`2<System.Type,System.Boolean>
struct Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5;
// System.Func`2<System.Type,System.String>
struct Func_2_tDF003B4E413360CAD0A9CA579A84B2BF683EA1B0;
// System.Func`2<JsonSubTypes.JsonSubtypes/KnownSubTypeWithPropertyAttribute,System.String>
struct Func_2_tC377CCFD1AED4841503E2E5EF83D750C62EF9178;
// System.Func`2<JsonSubTypes.JsonSubtypes/KnownSubTypeWithPropertyAttribute,System.Type>
struct Func_2_t1D63FDB698C10A9D955F8E78C2AD44F3A8B89F8E;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B;
// System.Collections.Generic.HashSet`1<System.Type>
struct HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9;
// System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Linq.JToken>
struct IDictionary_2_tCA82A2DDB7320F5635AE664C97AABF14960F095B;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t22A35158F9E40077A7147A082319C0D1DFFBE2FD;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Type>>
struct IEnumerable_1_t58BDA9E5B458C8AF2ECE79AC09FEF0241ED55135;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Type>>
struct IEnumerable_1_t19804B65729C02DC8B5AAF9C3E52777183423699;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>
struct IEnumerable_1_t7A54AEED0B537A132EE02BA2A10621CDA1900932;
// System.Collections.Generic.IEnumerable`1<JsonSubTypes.JsonSubtypesByDiscriminatorValueConverter>
struct IEnumerable_1_t117B46D1FA16044F1B4E9826388FCFB84B216D96;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_tA2CFC624CD7D291A0E486D1A5FC78BF6425F9428;
// System.Collections.Generic.IEnumerable`1<JsonSubTypes.JsonSubtypes/KnownSubTypeAttribute>
struct IEnumerable_1_t6CD774EA723E89E6DEED78EE82412C72093DD680;
// System.Collections.Generic.IEnumerable`1<JsonSubTypes.JsonSubtypes/KnownSubTypeWithPropertyAttribute>
struct IEnumerable_1_t6F13E336338D714404A16160FBE5D4B3E41E59A6;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t7EEC9B4006D6D425748908D52AA799197F29A165;
// System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter>
struct IList_1_tC2FE0CCB1735C5C816DA50BFA741D6CC100BA869;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Type>
struct KeyCollection_t6397E1BA96E179AE535A53A9C3EE6CBF5FBF3E63;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Object>
struct KeyCollection_tE7218C18BBB5C996F866464A80505FAF48FAECC4;
// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition>
struct List_1_t6DACBE605004C53E8318856EB2DE9594F643737D;
// System.Collections.Generic.List`1<JsonSubTypes.JsonSubtypesByDiscriminatorValueConverter>
struct List_1_t3381511022A933569C3B6A79D93B1A10A00A913B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<JsonSubTypes.JsonSubtypes/KnownSubTypeAttribute>
struct List_1_t54E8B43F818D5A55F0F00B5979B13581ADB54A69;
// JsonSubTypes.NullableDictionary`2<System.Object,System.Object>
struct NullableDictionary_2_t48DD4E457156C828152F770126E832F5E64B0806;
// JsonSubTypes.NullableDictionary`2<System.Object,System.Type>
struct NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Type>
struct ValueCollection_tA5053A670C1CE9C44F369C8F5505B785269C503A;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Object>
struct ValueCollection_tB0872867137DF58EAF9CB888F524DC3A12F41060;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Type>[]
struct EntryU5BU5D_tB0F36AD163FAA1A69B2868E108CBEC489F485A15;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Object>[]
struct EntryU5BU5D_t0052DFFE6551A07F7AB42BAD132ACFB95291707A;
// System.Collections.Generic.HashSet`1/Slot<System.Type>[]
struct SlotU5BU5D_t2EBE02159BAB090586C455BDD5784DDAF6EBBF69;
// Newtonsoft.Json.JsonWriter/State[][]
struct StateU5BU5DU5BU5D_tEB227CC230CCBA80854F02C5C7D6B4F430C1FE6B;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// Newtonsoft.Json.Linq.JTokenType[]
struct JTokenTypeU5BU5D_t80DD48F829383713BD84513F8557544CBD32D9F0;
// Newtonsoft.Json.JsonConverter[]
struct JsonConverterU5BU5D_t24875E5AE31553BA6031CA161A1E6AF7135FAE29;
// JsonSubTypes.JsonSubtypesByDiscriminatorValueConverter[]
struct JsonSubtypesByDiscriminatorValueConverterU5BU5D_t03E63FDD97EF7EF750ABCF43050B39D2600E5F1A;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// JsonSubTypes.JsonSubtypes/KnownSubTypeAttribute[]
struct KnownSubTypeAttributeU5BU5D_tD458CAF4EA64F4BACB4FA2089EC7CD0F1FC6AEA5;
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
// System.Globalization.CultureData
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Newtonsoft.Json.Serialization.IContractResolver
struct IContractResolver_t284E36A113FB356A926E94E76C114AD529879C8E;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerable
struct IEnumerable_t47A618747A1BB2A868710316F7372094849163A2;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68;
// System.Collections.IList
struct IList_tB15A9D6625D09661D6E47976BB626C703EC81910;
// Newtonsoft.Json.Serialization.IReferenceResolver
struct IReferenceResolver_t045F705CDCE03C1BED0C1C02080C37E18EAC17CA;
// Newtonsoft.Json.Serialization.ISerializationBinder
struct ISerializationBinder_t6021BA0633EFEFBB0678170823632E4249D3D7EC;
// Newtonsoft.Json.Serialization.ITraceWriter
struct ITraceWriter_t98467E31FC8DDED4668EFB4258A4E3B6C89057E7;
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
// Newtonsoft.Json.JsonConverter
struct JsonConverter_t260CE65C2123A11522CAEFA058859D3E97145B0C;
// Newtonsoft.Json.JsonConverterAttribute
struct JsonConverterAttribute_t76C9BFA5F1F70135FB27B3509C9B077A8F4719FC;
// Newtonsoft.Json.JsonConverterCollection
struct JsonConverterCollection_tBC657EE757E9DCB303371710D65BAE9B58BF84EC;
// Newtonsoft.Json.JsonReader
struct JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE;
// Newtonsoft.Json.JsonReaderException
struct JsonReaderException_tD145419BFB4715FDFEAF3FA5619AAB84900BCEE9;
// Newtonsoft.Json.JsonSerializationException
struct JsonSerializationException_tCD1256C587B4859A1B7964BD0578C27A6D58580F;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC;
// JsonSubTypes.JsonSubtypes
struct JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4;
// JsonSubTypes.JsonSubtypesByDiscriminatorValueConverter
struct JsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853;
// JsonSubTypes.JsonSubtypesConverter
struct JsonSubtypesConverter_t302C3D0C47335B3E29817D6E1E015D8738DD85D5;
// JsonSubTypes.JsonSubtypesConverterBuilder
struct JsonSubtypesConverterBuilder_tF39D5EDB289B7C600A98959FBC9A68E01DB3C46F;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837;
// System.ComponentModel.ListChangedEventHandler
struct ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6;
// System.Collections.Specialized.NotifyCollectionChangedEventHandler
struct NotifyCollectionChangedEventHandler_t737D98299AF810020BC5FC077CC664F46B6D0621;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99;
// System.ComponentModel.PropertyChangingEventHandler
struct PropertyChangingEventHandler_t5EA6F6EAA933D35C0AAD9D347A3BD53D343E4C22;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// System.String
struct String_t;
// System.Globalization.TextInfo
struct TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C;
// System.Type
struct Type_t;
// System.Reflection.TypeInfo
struct TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Reflection.Assembly/ResolveEventHolder
struct ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C;
// Newtonsoft.Json.Linq.JProperty/JPropertyList
struct JPropertyList_t40544FA83585374547FB7FFD7472CB16A930B95B;
// JsonSubTypes.JsonSubtypes/<>c
struct U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824;
// JsonSubTypes.JsonSubtypes/<>c__DisplayClass23_0
struct U3CU3Ec__DisplayClass23_0_tA905FBA00BBA22CE5D672BEACB7C7ED33BE3F2A3;
// JsonSubTypes.JsonSubtypes/<>c__DisplayClass24_0
struct U3CU3Ec__DisplayClass24_0_tA1025D3D9F5804E66668EE0EF431E16B1287165F;
// JsonSubTypes.JsonSubtypes/<>c__DisplayClass25_0
struct U3CU3Ec__DisplayClass25_0_tDB74EF4E3450B203DF6EC1454F1B849A0330B7CF;
// JsonSubTypes.JsonSubtypes/<>c__DisplayClass28_0
struct U3CU3Ec__DisplayClass28_0_tE397A4ADABB2E0976C05631A9386321280C595E0;
// JsonSubTypes.JsonSubtypes/<>c__DisplayClass31_0
struct U3CU3Ec__DisplayClass31_0_tFB5FD3375CFA525D6A3C082C48885B21B357269D;
// JsonSubTypes.JsonSubtypes/FallBackSubTypeAttribute
struct FallBackSubTypeAttribute_t1E7D5E7E674A152BD622622E7C81DB8AE432DE29;
// JsonSubTypes.JsonSubtypes/KnownSubTypeAttribute
struct KnownSubTypeAttribute_t9F1D658B2418F6AC43CE9F59F0B40A033A2F24B2;
// JsonSubTypes.JsonSubtypes/KnownSubTypeWithPropertyAttribute
struct KnownSubTypeWithPropertyAttribute_tA28E5B138A0E2B81AF25B9E22AC022F06C0B66E6;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t16E63DAA551CE22F4B70EED70C9A0278938A91A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t1C35530CDCF3ACBB02D9C76B9BB986AED1FC59E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t1D63FDB698C10A9D955F8E78C2AD44F3A8B89F8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t730F7242228FC0DF9F03C53B2BFA811A34990645_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tC377CCFD1AED4841503E2E5EF83D750C62EF9178_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tDF003B4E413360CAD0A9CA579A84B2BF683EA1B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tCA82A2DDB7320F5635AE664C97AABF14960F095B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t58BDA9E5B458C8AF2ECE79AC09FEF0241ED55135_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tAF736B5E349591D5E2EB0C332837D2DAD51656EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IJsonLineInfo_tE29DD9EAEAD0B1D1A0C257EA7120AFD371567322_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JProperty_t6B592BFC6895980207CC8356187EB1D0328A328E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonReaderException_tD145419BFB4715FDFEAF3FA5619AAB84900BCEE9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonSerializationException_tCD1256C587B4859A1B7964BD0578C27A6D58580F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonSubtypesConverterBuilder_tF39D5EDB289B7C600A98959FBC9A68E01DB3C46F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonToken_t3F2E74D2189D826EDCC84DEB75C1968CB8673D72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass23_0_tA905FBA00BBA22CE5D672BEACB7C7ED33BE3F2A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass24_0_tA1025D3D9F5804E66668EE0EF431E16B1287165F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass25_0_tDB74EF4E3450B203DF6EC1454F1B849A0330B7CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass28_0_tE397A4ADABB2E0976C05631A9386321280C595E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass31_0_tFB5FD3375CFA525D6A3C082C48885B21B357269D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral068EAB2D3B409D7734D04DF79A3BD26EC6B74C56;
IL2CPP_EXTERN_C String_t* _stringLiteral3A6995567753765C7CB277FEAC68032A2F027D93;
IL2CPP_EXTERN_C String_t* _stringLiteral6B98B0D835E532E9DB2011026A0DE4D14ECD5376;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteralAE7EC7FB5A3E44DA34365DF6059327B45EC6B93E;
IL2CPP_EXTERN_C String_t* _stringLiteralCDFF1526977E22184FF90392294FE6610445E3E2;
IL2CPP_EXTERN_C String_t* _stringLiteralD9D0EC3F2CA8C9D654F6F72C264F1A5E6090C1BC;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m9C7E36700B647739E5A876CDAE9BFF37F1B9E2FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisJsonConverter_t260CE65C2123A11522CAEFA058859D3E97145B0C_m7CD7096E4885614B731E41F9185DE7AB393238D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m99062862FEE98206F053E41E6C6882126164CDC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_mF7D1ADCFEC50BD3A57750E4C3097E3859C5758A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m9983D0130915B8182215B7C9B3D3A7D84FABB77F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mEA9AEC3D1E0DD8B5AC3FA4CBAB6B18FE81AD1C62_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisKeyValuePair_2_t09B898DA045563F8551DEEE3ECB9C13FE8A3B848_m147F25510D29A7C51050904CD1F82FD54A8EFA37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisJsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853_m092BD88F892987A985C778FC166535873C9DDFFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisRuntimeObject_mEA30C68B8D8C7D44DF6690A8FC79E4A48A09C6F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisString_t_m7B8EA6803D4985135A95AE73079A935FCAAAEF5A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_FirstOrDefault_TisType_t_mB2DD58F1158C4877353C4DF1F486FC9D97794727_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_OfType_TisJsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853_mE30F9B6BF5A2AE5CDE989382A1BF3D309658BA81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisKeyValuePair_2_t822BECCD5A164069D108533DCA1726AD40B884C0_TisType_t_m8C26F17C0C13904B212974AEFBA5D20D1EEDE3CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisType_t_TisString_t_m97718737E55EA7B887B064378F8AC1F4004288C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisType_t_mDB744C25D97BD49BD70979DC17395D271EA84945_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToDictionary_TisKnownSubTypeWithPropertyAttribute_tA28E5B138A0E2B81AF25B9E22AC022F06C0B66E6_TisString_t_TisType_t_m3EB08A14C459906E4D2434CB748921964429E66C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisJsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853_mADDC3921AC4FBFF36A94E48033CD7A2EE761F7E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisKnownSubTypeAttribute_t9F1D658B2418F6AC43CE9F59F0B40A033A2F24B2_mB28DAD81A8A151DB730A385B27644BBF269F42CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisJsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853_mA5F05E5C17834E83645D0D677E4B4BB31954346C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisType_t_m2A0B85DA7F086A9F38AE3CBF6F6DB181B2A86753_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Extensions_Value_TisString_t_mF276B63B3362CB4D0E573470017E6BA9C4A340EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m3304F42F8D57CFFAC96E4F1928E96F4447DC092A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m6397C103AFDCE68F75EDF44FB493A9B6651F7AFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mB243E00437C804A3495C0CC3630B9CD4C126B05D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mB89D1CB7F8A8352C0535D7F33D51230F6126B8CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mCF05B1445990167FFD40667A8EB11E4E92AC29A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mF99B731B7FE71291198AC579A27977DAFAEE528D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_mFA4D07ACD59A136F95C11D733F49418F83C412E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mBBBBEE148ED492271216D211619EBA1D2756289D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonSubtypesByDiscriminatorValueConverter_WriteJson_m8AA32B1D7EA5DA9D115C3D6AF2C04DD3EBE89082_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonSubtypesByDiscriminatorValueConverter__ctor_m8E85B3E82B05ECF4708967FC28F63BA0749F65AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonSubtypes_GetAttribute_TisFallBackSubTypeAttribute_t1E7D5E7E674A152BD622622E7C81DB8AE432DE29_mCEB970FD2FED1BE4051B54418EDBA9EC837EE532_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonSubtypes_GetAttribute_TisJsonConverterAttribute_t76C9BFA5F1F70135FB27B3509C9B077A8F4719FC_mDEC49C0C7AAF5EF82F9A0ED2976643800142B2BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonSubtypes_GetAttributes_TisKnownSubTypeAttribute_t9F1D658B2418F6AC43CE9F59F0B40A033A2F24B2_m77AD5CCF01E3B4B56626A47AB49433953A18E827_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonSubtypes_GetAttributes_TisKnownSubTypeWithPropertyAttribute_tA28E5B138A0E2B81AF25B9E22AC022F06C0B66E6_mE498F3775184DDA3BCB3B9009D71F3AC0B94B69A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonSubtypes_GetTypeByPropertyPresence_m79015646E09B9E54900891C78BF7192860910EFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonSubtypes_ReadJson_m28EA849C241312DECB7B9A21AB3494A83F5D79A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonSubtypes_WriteJson_m5D6CC28BD32175CDF66D0544709AB83C00DFCBE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m32599DB005AB1591D95A403F59D9ADB78AB08E2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m371533B30F2A214A38A5F97C0C77A32950948F1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m09696F43305A4C5A4AB97511A7C41E1F33D7AFA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m1749BC57BAC3169021504BFD403CB3F3286AD554_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ForEach_m826A41C00AEE484880924ADD95D67A51D8014DAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NullableDictionary_2_Add_m86E340469A6AE4D9A177687FB3A337F88BF90D6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NullableDictionary_2_Entries_m1373B6035D2560449A03D9567482ADC45CA3D5F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NullableDictionary_2_NotNullKeys_m9EB12FC9BC4B0D446303D917A31AD1DC15EC9C98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NullableDictionary_2_TryGetValue_mB550CABEB309B59624BBE09D6232C14262AE58F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NullableDictionary_2__ctor_m911DC45EF73D28298A2CCDBD776EA97593031A16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetTypeByPropertyPresenceU3Eb__25_1_m31FFB5437C657DF01C5BFD72CEA2E9580382D874_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetTypeByPropertyPresenceU3Eb__25_2_mC0ECD997D07DBCC902377E57B1CEC8CBB6E3D1C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetTypesByPropertyPresenceU3Eb__26_0_m877041A14AFBC2285381D37CEC3972F126F1C7FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetTypesByPropertyPresenceU3Eb__26_1_m2BF42C7EDC67412F7D00B1DD1DDC2717DACEF679_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass23_0_U3CGetTypeU3Eb__0_m69D4FFC4CE298B2E6213FB0C9A069631902FADE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass24_0_U3CGetTypeResolverU3Eb__0_m2E857A9647C7E01122F6C389922BDDBF0454E79E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass25_0_U3CGetTypeByPropertyPresenceU3Eb__0_mBA6F7557586A61D0F135463BD0BF531FB15191B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass28_0_U3CTryGetValueInJsonU3Eb__0_m315BE8B2CF6169B893606CAAC450B7E9B800FE57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass31_0_U3CGetSubTypeMappingU3Eb__0_mC58CAD61463E8D1DC6CAE6B109661F4E9C2C2A08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* List_1_t2F377D93C74B8090B226DCC307AB5BB600181453_0_0_0_var;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct JsonConverterU5BU5D_t24875E5AE31553BA6031CA161A1E6AF7135FAE29;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tE743C7772E92E9E5F343326180A4B4C96A78E549 
{
public:

public:
};


// System.Object


// System.Collections.ObjectModel.Collection`1<Newtonsoft.Json.JsonConverter>
struct Collection_1_t33F1E86CDC8360DB31BCEF0BE130AF6A73E16FA0  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.Collection`1::items
	RuntimeObject* ___items_0;
	// System.Object System.Collections.ObjectModel.Collection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_items_0() { return static_cast<int32_t>(offsetof(Collection_1_t33F1E86CDC8360DB31BCEF0BE130AF6A73E16FA0, ___items_0)); }
	inline RuntimeObject* get_items_0() const { return ___items_0; }
	inline RuntimeObject** get_address_of_items_0() { return &___items_0; }
	inline void set_items_0(RuntimeObject* value)
	{
		___items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_0), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(Collection_1_t33F1E86CDC8360DB31BCEF0BE130AF6A73E16FA0, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_1), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,System.Type>
struct Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tB0F36AD163FAA1A69B2868E108CBEC489F485A15* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t6397E1BA96E179AE535A53A9C3EE6CBF5FBF3E63 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tA5053A670C1CE9C44F369C8F5505B785269C503A * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85, ___entries_1)); }
	inline EntryU5BU5D_tB0F36AD163FAA1A69B2868E108CBEC489F485A15* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tB0F36AD163FAA1A69B2868E108CBEC489F485A15** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tB0F36AD163FAA1A69B2868E108CBEC489F485A15* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85, ___keys_7)); }
	inline KeyCollection_t6397E1BA96E179AE535A53A9C3EE6CBF5FBF3E63 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t6397E1BA96E179AE535A53A9C3EE6CBF5FBF3E63 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t6397E1BA96E179AE535A53A9C3EE6CBF5FBF3E63 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85, ___values_8)); }
	inline ValueCollection_tA5053A670C1CE9C44F369C8F5505B785269C503A * get_values_8() const { return ___values_8; }
	inline ValueCollection_tA5053A670C1CE9C44F369C8F5505B785269C503A ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tA5053A670C1CE9C44F369C8F5505B785269C503A * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,System.Object>
struct Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t0052DFFE6551A07F7AB42BAD132ACFB95291707A* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tE7218C18BBB5C996F866464A80505FAF48FAECC4 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tB0872867137DF58EAF9CB888F524DC3A12F41060 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ___entries_1)); }
	inline EntryU5BU5D_t0052DFFE6551A07F7AB42BAD132ACFB95291707A* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t0052DFFE6551A07F7AB42BAD132ACFB95291707A** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t0052DFFE6551A07F7AB42BAD132ACFB95291707A* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ___keys_7)); }
	inline KeyCollection_tE7218C18BBB5C996F866464A80505FAF48FAECC4 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tE7218C18BBB5C996F866464A80505FAF48FAECC4 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tE7218C18BBB5C996F866464A80505FAF48FAECC4 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ___values_8)); }
	inline ValueCollection_tB0872867137DF58EAF9CB888F524DC3A12F41060 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tB0872867137DF58EAF9CB888F524DC3A12F41060 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tB0872867137DF58EAF9CB888F524DC3A12F41060 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
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


// System.Collections.Generic.HashSet`1<System.Type>
struct HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t2EBE02159BAB090586C455BDD5784DDAF6EBBF69* ____slots_8;
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
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9, ____slots_8)); }
	inline SlotU5BU5D_t2EBE02159BAB090586C455BDD5784DDAF6EBBF69* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t2EBE02159BAB090586C455BDD5784DDAF6EBBF69** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t2EBE02159BAB090586C455BDD5784DDAF6EBBF69* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.List`1<JsonSubTypes.JsonSubtypesByDiscriminatorValueConverter>
struct List_1_t3381511022A933569C3B6A79D93B1A10A00A913B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	JsonSubtypesByDiscriminatorValueConverterU5BU5D_t03E63FDD97EF7EF750ABCF43050B39D2600E5F1A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3381511022A933569C3B6A79D93B1A10A00A913B, ____items_1)); }
	inline JsonSubtypesByDiscriminatorValueConverterU5BU5D_t03E63FDD97EF7EF750ABCF43050B39D2600E5F1A* get__items_1() const { return ____items_1; }
	inline JsonSubtypesByDiscriminatorValueConverterU5BU5D_t03E63FDD97EF7EF750ABCF43050B39D2600E5F1A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(JsonSubtypesByDiscriminatorValueConverterU5BU5D_t03E63FDD97EF7EF750ABCF43050B39D2600E5F1A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3381511022A933569C3B6A79D93B1A10A00A913B, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3381511022A933569C3B6A79D93B1A10A00A913B, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3381511022A933569C3B6A79D93B1A10A00A913B, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3381511022A933569C3B6A79D93B1A10A00A913B_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	JsonSubtypesByDiscriminatorValueConverterU5BU5D_t03E63FDD97EF7EF750ABCF43050B39D2600E5F1A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3381511022A933569C3B6A79D93B1A10A00A913B_StaticFields, ____emptyArray_5)); }
	inline JsonSubtypesByDiscriminatorValueConverterU5BU5D_t03E63FDD97EF7EF750ABCF43050B39D2600E5F1A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline JsonSubtypesByDiscriminatorValueConverterU5BU5D_t03E63FDD97EF7EF750ABCF43050B39D2600E5F1A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(JsonSubtypesByDiscriminatorValueConverterU5BU5D_t03E63FDD97EF7EF750ABCF43050B39D2600E5F1A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<JsonSubTypes.JsonSubtypes/KnownSubTypeAttribute>
struct List_1_t54E8B43F818D5A55F0F00B5979B13581ADB54A69  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	KnownSubTypeAttributeU5BU5D_tD458CAF4EA64F4BACB4FA2089EC7CD0F1FC6AEA5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t54E8B43F818D5A55F0F00B5979B13581ADB54A69, ____items_1)); }
	inline KnownSubTypeAttributeU5BU5D_tD458CAF4EA64F4BACB4FA2089EC7CD0F1FC6AEA5* get__items_1() const { return ____items_1; }
	inline KnownSubTypeAttributeU5BU5D_tD458CAF4EA64F4BACB4FA2089EC7CD0F1FC6AEA5** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(KnownSubTypeAttributeU5BU5D_tD458CAF4EA64F4BACB4FA2089EC7CD0F1FC6AEA5* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t54E8B43F818D5A55F0F00B5979B13581ADB54A69, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t54E8B43F818D5A55F0F00B5979B13581ADB54A69, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t54E8B43F818D5A55F0F00B5979B13581ADB54A69, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t54E8B43F818D5A55F0F00B5979B13581ADB54A69_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	KnownSubTypeAttributeU5BU5D_tD458CAF4EA64F4BACB4FA2089EC7CD0F1FC6AEA5* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t54E8B43F818D5A55F0F00B5979B13581ADB54A69_StaticFields, ____emptyArray_5)); }
	inline KnownSubTypeAttributeU5BU5D_tD458CAF4EA64F4BACB4FA2089EC7CD0F1FC6AEA5* get__emptyArray_5() const { return ____emptyArray_5; }
	inline KnownSubTypeAttributeU5BU5D_tD458CAF4EA64F4BACB4FA2089EC7CD0F1FC6AEA5** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(KnownSubTypeAttributeU5BU5D_tD458CAF4EA64F4BACB4FA2089EC7CD0F1FC6AEA5* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// JsonSubTypes.NullableDictionary`2<System.Object,System.Type>
struct NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8  : public RuntimeObject
{
public:
	// System.Boolean JsonSubTypes.NullableDictionary`2::_hasNullKey
	bool ____hasNullKey_0;
	// TValue JsonSubTypes.NullableDictionary`2::_nullKeyValue
	Type_t * ____nullKeyValue_1;
	// System.Collections.Generic.Dictionary`2<TKey,TValue> JsonSubTypes.NullableDictionary`2::_dictionary
	Dictionary_2_t2CD3B17049E6FD408FCA97F153125127F9C350A8 * ____dictionary_2;

public:
	inline static int32_t get_offset_of__hasNullKey_0() { return static_cast<int32_t>(offsetof(NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8, ____hasNullKey_0)); }
	inline bool get__hasNullKey_0() const { return ____hasNullKey_0; }
	inline bool* get_address_of__hasNullKey_0() { return &____hasNullKey_0; }
	inline void set__hasNullKey_0(bool value)
	{
		____hasNullKey_0 = value;
	}

	inline static int32_t get_offset_of__nullKeyValue_1() { return static_cast<int32_t>(offsetof(NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8, ____nullKeyValue_1)); }
	inline Type_t * get__nullKeyValue_1() const { return ____nullKeyValue_1; }
	inline Type_t ** get_address_of__nullKeyValue_1() { return &____nullKeyValue_1; }
	inline void set__nullKeyValue_1(Type_t * value)
	{
		____nullKeyValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nullKeyValue_1), (void*)value);
	}

	inline static int32_t get_offset_of__dictionary_2() { return static_cast<int32_t>(offsetof(NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8, ____dictionary_2)); }
	inline Dictionary_2_t2CD3B17049E6FD408FCA97F153125127F9C350A8 * get__dictionary_2() const { return ____dictionary_2; }
	inline Dictionary_2_t2CD3B17049E6FD408FCA97F153125127F9C350A8 ** get_address_of__dictionary_2() { return &____dictionary_2; }
	inline void set__dictionary_2(Dictionary_2_t2CD3B17049E6FD408FCA97F153125127F9C350A8 * value)
	{
		____dictionary_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dictionary_2), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


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


// Newtonsoft.Json.JsonConverter
struct JsonConverter_t260CE65C2123A11522CAEFA058859D3E97145B0C  : public RuntimeObject
{
public:

public:
};


// JsonSubTypes.JsonSubtypesConverterBuilder
struct JsonSubtypesConverterBuilder_tF39D5EDB289B7C600A98959FBC9A68E01DB3C46F  : public RuntimeObject
{
public:
	// System.Type JsonSubTypes.JsonSubtypesConverterBuilder::_baseType
	Type_t * ____baseType_0;
	// System.String JsonSubTypes.JsonSubtypesConverterBuilder::_discriminatorProperty
	String_t* ____discriminatorProperty_1;
	// JsonSubTypes.NullableDictionary`2<System.Object,System.Type> JsonSubTypes.JsonSubtypesConverterBuilder::_subTypeMapping
	NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8 * ____subTypeMapping_2;
	// System.Boolean JsonSubTypes.JsonSubtypesConverterBuilder::_serializeDiscriminatorProperty
	bool ____serializeDiscriminatorProperty_3;
	// System.Boolean JsonSubTypes.JsonSubtypesConverterBuilder::_addDiscriminatorFirst
	bool ____addDiscriminatorFirst_4;
	// System.Type JsonSubTypes.JsonSubtypesConverterBuilder::_fallbackSubtype
	Type_t * ____fallbackSubtype_5;

public:
	inline static int32_t get_offset_of__baseType_0() { return static_cast<int32_t>(offsetof(JsonSubtypesConverterBuilder_tF39D5EDB289B7C600A98959FBC9A68E01DB3C46F, ____baseType_0)); }
	inline Type_t * get__baseType_0() const { return ____baseType_0; }
	inline Type_t ** get_address_of__baseType_0() { return &____baseType_0; }
	inline void set__baseType_0(Type_t * value)
	{
		____baseType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____baseType_0), (void*)value);
	}

	inline static int32_t get_offset_of__discriminatorProperty_1() { return static_cast<int32_t>(offsetof(JsonSubtypesConverterBuilder_tF39D5EDB289B7C600A98959FBC9A68E01DB3C46F, ____discriminatorProperty_1)); }
	inline String_t* get__discriminatorProperty_1() const { return ____discriminatorProperty_1; }
	inline String_t** get_address_of__discriminatorProperty_1() { return &____discriminatorProperty_1; }
	inline void set__discriminatorProperty_1(String_t* value)
	{
		____discriminatorProperty_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____discriminatorProperty_1), (void*)value);
	}

	inline static int32_t get_offset_of__subTypeMapping_2() { return static_cast<int32_t>(offsetof(JsonSubtypesConverterBuilder_tF39D5EDB289B7C600A98959FBC9A68E01DB3C46F, ____subTypeMapping_2)); }
	inline NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8 * get__subTypeMapping_2() const { return ____subTypeMapping_2; }
	inline NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8 ** get_address_of__subTypeMapping_2() { return &____subTypeMapping_2; }
	inline void set__subTypeMapping_2(NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8 * value)
	{
		____subTypeMapping_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____subTypeMapping_2), (void*)value);
	}

	inline static int32_t get_offset_of__serializeDiscriminatorProperty_3() { return static_cast<int32_t>(offsetof(JsonSubtypesConverterBuilder_tF39D5EDB289B7C600A98959FBC9A68E01DB3C46F, ____serializeDiscriminatorProperty_3)); }
	inline bool get__serializeDiscriminatorProperty_3() const { return ____serializeDiscriminatorProperty_3; }
	inline bool* get_address_of__serializeDiscriminatorProperty_3() { return &____serializeDiscriminatorProperty_3; }
	inline void set__serializeDiscriminatorProperty_3(bool value)
	{
		____serializeDiscriminatorProperty_3 = value;
	}

	inline static int32_t get_offset_of__addDiscriminatorFirst_4() { return static_cast<int32_t>(offsetof(JsonSubtypesConverterBuilder_tF39D5EDB289B7C600A98959FBC9A68E01DB3C46F, ____addDiscriminatorFirst_4)); }
	inline bool get__addDiscriminatorFirst_4() const { return ____addDiscriminatorFirst_4; }
	inline bool* get_address_of__addDiscriminatorFirst_4() { return &____addDiscriminatorFirst_4; }
	inline void set__addDiscriminatorFirst_4(bool value)
	{
		____addDiscriminatorFirst_4 = value;
	}

	inline static int32_t get_offset_of__fallbackSubtype_5() { return static_cast<int32_t>(offsetof(JsonSubtypesConverterBuilder_tF39D5EDB289B7C600A98959FBC9A68E01DB3C46F, ____fallbackSubtype_5)); }
	inline Type_t * get__fallbackSubtype_5() const { return ____fallbackSubtype_5; }
	inline Type_t ** get_address_of__fallbackSubtype_5() { return &____fallbackSubtype_5; }
	inline void set__fallbackSubtype_5(Type_t * value)
	{
		____fallbackSubtype_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fallbackSubtype_5), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

// JsonSubTypes.JsonSubtypes/<>c
struct U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824_StaticFields
{
public:
	// JsonSubTypes.JsonSubtypes/<>c JsonSubTypes.JsonSubtypes/<>c::<>9
	U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824 * ___U3CU3E9_0;
	// System.Func`2<System.Type,System.Boolean> JsonSubTypes.JsonSubtypes/<>c::<>9__25_1
	Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * ___U3CU3E9__25_1_1;
	// System.Func`2<System.Type,System.String> JsonSubTypes.JsonSubtypes/<>c::<>9__25_2
	Func_2_tDF003B4E413360CAD0A9CA579A84B2BF683EA1B0 * ___U3CU3E9__25_2_2;
	// System.Func`2<JsonSubTypes.JsonSubtypes/KnownSubTypeWithPropertyAttribute,System.String> JsonSubTypes.JsonSubtypes/<>c::<>9__26_0
	Func_2_tC377CCFD1AED4841503E2E5EF83D750C62EF9178 * ___U3CU3E9__26_0_3;
	// System.Func`2<JsonSubTypes.JsonSubtypes/KnownSubTypeWithPropertyAttribute,System.Type> JsonSubTypes.JsonSubtypes/<>c::<>9__26_1
	Func_2_t1D63FDB698C10A9D955F8E78C2AD44F3A8B89F8E * ___U3CU3E9__26_1_4;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824_StaticFields, ___U3CU3E9__25_1_1)); }
	inline Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * get_U3CU3E9__25_1_1() const { return ___U3CU3E9__25_1_1; }
	inline Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 ** get_address_of_U3CU3E9__25_1_1() { return &___U3CU3E9__25_1_1; }
	inline void set_U3CU3E9__25_1_1(Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * value)
	{
		___U3CU3E9__25_1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_1_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_2_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824_StaticFields, ___U3CU3E9__25_2_2)); }
	inline Func_2_tDF003B4E413360CAD0A9CA579A84B2BF683EA1B0 * get_U3CU3E9__25_2_2() const { return ___U3CU3E9__25_2_2; }
	inline Func_2_tDF003B4E413360CAD0A9CA579A84B2BF683EA1B0 ** get_address_of_U3CU3E9__25_2_2() { return &___U3CU3E9__25_2_2; }
	inline void set_U3CU3E9__25_2_2(Func_2_tDF003B4E413360CAD0A9CA579A84B2BF683EA1B0 * value)
	{
		___U3CU3E9__25_2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_2_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__26_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824_StaticFields, ___U3CU3E9__26_0_3)); }
	inline Func_2_tC377CCFD1AED4841503E2E5EF83D750C62EF9178 * get_U3CU3E9__26_0_3() const { return ___U3CU3E9__26_0_3; }
	inline Func_2_tC377CCFD1AED4841503E2E5EF83D750C62EF9178 ** get_address_of_U3CU3E9__26_0_3() { return &___U3CU3E9__26_0_3; }
	inline void set_U3CU3E9__26_0_3(Func_2_tC377CCFD1AED4841503E2E5EF83D750C62EF9178 * value)
	{
		___U3CU3E9__26_0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__26_0_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__26_1_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824_StaticFields, ___U3CU3E9__26_1_4)); }
	inline Func_2_t1D63FDB698C10A9D955F8E78C2AD44F3A8B89F8E * get_U3CU3E9__26_1_4() const { return ___U3CU3E9__26_1_4; }
	inline Func_2_t1D63FDB698C10A9D955F8E78C2AD44F3A8B89F8E ** get_address_of_U3CU3E9__26_1_4() { return &___U3CU3E9__26_1_4; }
	inline void set_U3CU3E9__26_1_4(Func_2_t1D63FDB698C10A9D955F8E78C2AD44F3A8B89F8E * value)
	{
		___U3CU3E9__26_1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__26_1_4), (void*)value);
	}
};


// JsonSubTypes.JsonSubtypes/<>c__DisplayClass23_0
struct U3CU3Ec__DisplayClass23_0_tA905FBA00BBA22CE5D672BEACB7C7ED33BE3F2A3  : public RuntimeObject
{
public:
	// JsonSubTypes.JsonSubtypes JsonSubTypes.JsonSubtypes/<>c__DisplayClass23_0::currentTypeResolver
	JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4 * ___currentTypeResolver_0;

public:
	inline static int32_t get_offset_of_currentTypeResolver_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass23_0_tA905FBA00BBA22CE5D672BEACB7C7ED33BE3F2A3, ___currentTypeResolver_0)); }
	inline JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4 * get_currentTypeResolver_0() const { return ___currentTypeResolver_0; }
	inline JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4 ** get_address_of_currentTypeResolver_0() { return &___currentTypeResolver_0; }
	inline void set_currentTypeResolver_0(JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4 * value)
	{
		___currentTypeResolver_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentTypeResolver_0), (void*)value);
	}
};


// JsonSubTypes.JsonSubtypes/<>c__DisplayClass24_0
struct U3CU3Ec__DisplayClass24_0_tA1025D3D9F5804E66668EE0EF431E16B1287165F  : public RuntimeObject
{
public:
	// System.Reflection.TypeInfo JsonSubTypes.JsonSubtypes/<>c__DisplayClass24_0::targetType
	TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * ___targetType_0;

public:
	inline static int32_t get_offset_of_targetType_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass24_0_tA1025D3D9F5804E66668EE0EF431E16B1287165F, ___targetType_0)); }
	inline TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * get_targetType_0() const { return ___targetType_0; }
	inline TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F ** get_address_of_targetType_0() { return &___targetType_0; }
	inline void set_targetType_0(TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * value)
	{
		___targetType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targetType_0), (void*)value);
	}
};


// JsonSubTypes.JsonSubtypes/<>c__DisplayClass25_0
struct U3CU3Ec__DisplayClass25_0_tDB74EF4E3450B203DF6EC1454F1B849A0330B7CF  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Linq.JObject JsonSubTypes.JsonSubtypes/<>c__DisplayClass25_0::jObject
	JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8 * ___jObject_0;

public:
	inline static int32_t get_offset_of_jObject_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass25_0_tDB74EF4E3450B203DF6EC1454F1B849A0330B7CF, ___jObject_0)); }
	inline JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8 * get_jObject_0() const { return ___jObject_0; }
	inline JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8 ** get_address_of_jObject_0() { return &___jObject_0; }
	inline void set_jObject_0(JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8 * value)
	{
		___jObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___jObject_0), (void*)value);
	}
};


// JsonSubTypes.JsonSubtypes/<>c__DisplayClass28_0
struct U3CU3Ec__DisplayClass28_0_tE397A4ADABB2E0976C05631A9386321280C595E0  : public RuntimeObject
{
public:
	// System.String JsonSubTypes.JsonSubtypes/<>c__DisplayClass28_0::propertyName
	String_t* ___propertyName_0;

public:
	inline static int32_t get_offset_of_propertyName_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass28_0_tE397A4ADABB2E0976C05631A9386321280C595E0, ___propertyName_0)); }
	inline String_t* get_propertyName_0() const { return ___propertyName_0; }
	inline String_t** get_address_of_propertyName_0() { return &___propertyName_0; }
	inline void set_propertyName_0(String_t* value)
	{
		___propertyName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___propertyName_0), (void*)value);
	}
};


// JsonSubTypes.JsonSubtypes/<>c__DisplayClass31_0
struct U3CU3Ec__DisplayClass31_0_tFB5FD3375CFA525D6A3C082C48885B21B357269D  : public RuntimeObject
{
public:
	// JsonSubTypes.NullableDictionary`2<System.Object,System.Type> JsonSubTypes.JsonSubtypes/<>c__DisplayClass31_0::dictionary
	NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass31_0_tFB5FD3375CFA525D6A3C082C48885B21B357269D, ___dictionary_0)); }
	inline NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8 * get_dictionary_0() const { return ___dictionary_0; }
	inline NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
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


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Type>
struct KeyValuePair_2_t09B898DA045563F8551DEEE3ECB9C13FE8A3B848 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Type_t * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t09B898DA045563F8551DEEE3ECB9C13FE8A3B848, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t09B898DA045563F8551DEEE3ECB9C13FE8A3B848, ___value_1)); }
	inline Type_t * get_value_1() const { return ___value_1; }
	inline Type_t ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Type_t * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,System.Type>
struct KeyValuePair_2_t822BECCD5A164069D108533DCA1726AD40B884C0 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Type_t * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t822BECCD5A164069D108533DCA1726AD40B884C0, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t822BECCD5A164069D108533DCA1726AD40B884C0, ___value_1)); }
	inline Type_t * get_value_1() const { return ___value_1; }
	inline Type_t ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Type_t * value)
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


// Newtonsoft.Json.JsonConverterAttribute
struct JsonConverterAttribute_t76C9BFA5F1F70135FB27B3509C9B077A8F4719FC  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Type Newtonsoft.Json.JsonConverterAttribute::_converterType
	Type_t * ____converterType_0;
	// System.Object[] Newtonsoft.Json.JsonConverterAttribute::<ConverterParameters>k__BackingField
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___U3CConverterParametersU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of__converterType_0() { return static_cast<int32_t>(offsetof(JsonConverterAttribute_t76C9BFA5F1F70135FB27B3509C9B077A8F4719FC, ____converterType_0)); }
	inline Type_t * get__converterType_0() const { return ____converterType_0; }
	inline Type_t ** get_address_of__converterType_0() { return &____converterType_0; }
	inline void set__converterType_0(Type_t * value)
	{
		____converterType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____converterType_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CConverterParametersU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(JsonConverterAttribute_t76C9BFA5F1F70135FB27B3509C9B077A8F4719FC, ___U3CConverterParametersU3Ek__BackingField_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_U3CConverterParametersU3Ek__BackingField_1() const { return ___U3CConverterParametersU3Ek__BackingField_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_U3CConverterParametersU3Ek__BackingField_1() { return &___U3CConverterParametersU3Ek__BackingField_1; }
	inline void set_U3CConverterParametersU3Ek__BackingField_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___U3CConverterParametersU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConverterParametersU3Ek__BackingField_1), (void*)value);
	}
};


// Newtonsoft.Json.JsonConverterCollection
struct JsonConverterCollection_tBC657EE757E9DCB303371710D65BAE9B58BF84EC  : public Collection_1_t33F1E86CDC8360DB31BCEF0BE130AF6A73E16FA0
{
public:

public:
};


// JsonSubTypes.JsonSubtypes
struct JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4  : public JsonConverter_t260CE65C2123A11522CAEFA058859D3E97145B0C
{
public:
	// System.String JsonSubTypes.JsonSubtypes::JsonDiscriminatorPropertyName
	String_t* ___JsonDiscriminatorPropertyName_0;

public:
	inline static int32_t get_offset_of_JsonDiscriminatorPropertyName_0() { return static_cast<int32_t>(offsetof(JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4, ___JsonDiscriminatorPropertyName_0)); }
	inline String_t* get_JsonDiscriminatorPropertyName_0() const { return ___JsonDiscriminatorPropertyName_0; }
	inline String_t** get_address_of_JsonDiscriminatorPropertyName_0() { return &___JsonDiscriminatorPropertyName_0; }
	inline void set_JsonDiscriminatorPropertyName_0(String_t* value)
	{
		___JsonDiscriminatorPropertyName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___JsonDiscriminatorPropertyName_0), (void*)value);
	}
};

struct JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4_ThreadStaticFields
{
public:
	// System.Boolean JsonSubTypes.JsonSubtypes::_isInsideRead
	bool ____isInsideRead_1;
	// Newtonsoft.Json.JsonReader JsonSubTypes.JsonSubtypes::_reader
	JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * ____reader_2;

public:
	inline static int32_t get_offset_of__isInsideRead_1() { return static_cast<int32_t>(offsetof(JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4_ThreadStaticFields, ____isInsideRead_1)); }
	inline bool get__isInsideRead_1() const { return ____isInsideRead_1; }
	inline bool* get_address_of__isInsideRead_1() { return &____isInsideRead_1; }
	inline void set__isInsideRead_1(bool value)
	{
		____isInsideRead_1 = value;
	}

	inline static int32_t get_offset_of__reader_2() { return static_cast<int32_t>(offsetof(JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4_ThreadStaticFields, ____reader_2)); }
	inline JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * get__reader_2() const { return ____reader_2; }
	inline JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE ** get_address_of__reader_2() { return &____reader_2; }
	inline void set__reader_2(JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * value)
	{
		____reader_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____reader_2), (void*)value);
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


// JsonSubTypes.JsonSubtypes/FallBackSubTypeAttribute
struct FallBackSubTypeAttribute_t1E7D5E7E674A152BD622622E7C81DB8AE432DE29  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Type JsonSubTypes.JsonSubtypes/FallBackSubTypeAttribute::<SubType>k__BackingField
	Type_t * ___U3CSubTypeU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CSubTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(FallBackSubTypeAttribute_t1E7D5E7E674A152BD622622E7C81DB8AE432DE29, ___U3CSubTypeU3Ek__BackingField_0)); }
	inline Type_t * get_U3CSubTypeU3Ek__BackingField_0() const { return ___U3CSubTypeU3Ek__BackingField_0; }
	inline Type_t ** get_address_of_U3CSubTypeU3Ek__BackingField_0() { return &___U3CSubTypeU3Ek__BackingField_0; }
	inline void set_U3CSubTypeU3Ek__BackingField_0(Type_t * value)
	{
		___U3CSubTypeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSubTypeU3Ek__BackingField_0), (void*)value);
	}
};


// JsonSubTypes.JsonSubtypes/KnownSubTypeAttribute
struct KnownSubTypeAttribute_t9F1D658B2418F6AC43CE9F59F0B40A033A2F24B2  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Type JsonSubTypes.JsonSubtypes/KnownSubTypeAttribute::<SubType>k__BackingField
	Type_t * ___U3CSubTypeU3Ek__BackingField_0;
	// System.Object JsonSubTypes.JsonSubtypes/KnownSubTypeAttribute::<AssociatedValue>k__BackingField
	RuntimeObject * ___U3CAssociatedValueU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CSubTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(KnownSubTypeAttribute_t9F1D658B2418F6AC43CE9F59F0B40A033A2F24B2, ___U3CSubTypeU3Ek__BackingField_0)); }
	inline Type_t * get_U3CSubTypeU3Ek__BackingField_0() const { return ___U3CSubTypeU3Ek__BackingField_0; }
	inline Type_t ** get_address_of_U3CSubTypeU3Ek__BackingField_0() { return &___U3CSubTypeU3Ek__BackingField_0; }
	inline void set_U3CSubTypeU3Ek__BackingField_0(Type_t * value)
	{
		___U3CSubTypeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSubTypeU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAssociatedValueU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(KnownSubTypeAttribute_t9F1D658B2418F6AC43CE9F59F0B40A033A2F24B2, ___U3CAssociatedValueU3Ek__BackingField_1)); }
	inline RuntimeObject * get_U3CAssociatedValueU3Ek__BackingField_1() const { return ___U3CAssociatedValueU3Ek__BackingField_1; }
	inline RuntimeObject ** get_address_of_U3CAssociatedValueU3Ek__BackingField_1() { return &___U3CAssociatedValueU3Ek__BackingField_1; }
	inline void set_U3CAssociatedValueU3Ek__BackingField_1(RuntimeObject * value)
	{
		___U3CAssociatedValueU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAssociatedValueU3Ek__BackingField_1), (void*)value);
	}
};


// JsonSubTypes.JsonSubtypes/KnownSubTypeWithPropertyAttribute
struct KnownSubTypeWithPropertyAttribute_tA28E5B138A0E2B81AF25B9E22AC022F06C0B66E6  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Type JsonSubTypes.JsonSubtypes/KnownSubTypeWithPropertyAttribute::<SubType>k__BackingField
	Type_t * ___U3CSubTypeU3Ek__BackingField_0;
	// System.String JsonSubTypes.JsonSubtypes/KnownSubTypeWithPropertyAttribute::<PropertyName>k__BackingField
	String_t* ___U3CPropertyNameU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CSubTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(KnownSubTypeWithPropertyAttribute_tA28E5B138A0E2B81AF25B9E22AC022F06C0B66E6, ___U3CSubTypeU3Ek__BackingField_0)); }
	inline Type_t * get_U3CSubTypeU3Ek__BackingField_0() const { return ___U3CSubTypeU3Ek__BackingField_0; }
	inline Type_t ** get_address_of_U3CSubTypeU3Ek__BackingField_0() { return &___U3CSubTypeU3Ek__BackingField_0; }
	inline void set_U3CSubTypeU3Ek__BackingField_0(Type_t * value)
	{
		___U3CSubTypeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSubTypeU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPropertyNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(KnownSubTypeWithPropertyAttribute_tA28E5B138A0E2B81AF25B9E22AC022F06C0B66E6, ___U3CPropertyNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CPropertyNameU3Ek__BackingField_1() const { return ___U3CPropertyNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CPropertyNameU3Ek__BackingField_1() { return &___U3CPropertyNameU3Ek__BackingField_1; }
	inline void set_U3CPropertyNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CPropertyNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPropertyNameU3Ek__BackingField_1), (void*)value);
	}
};


// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Reflection.Assembly::_mono_assembly
	intptr_t ____mono_assembly_0;
	// System.Reflection.Assembly/ResolveEventHolder System.Reflection.Assembly::resolve_event_holder
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	// System.Object System.Reflection.Assembly::_evidence
	RuntimeObject * ____evidence_2;
	// System.Object System.Reflection.Assembly::_minimum
	RuntimeObject * ____minimum_3;
	// System.Object System.Reflection.Assembly::_optional
	RuntimeObject * ____optional_4;
	// System.Object System.Reflection.Assembly::_refuse
	RuntimeObject * ____refuse_5;
	// System.Object System.Reflection.Assembly::_granted
	RuntimeObject * ____granted_6;
	// System.Object System.Reflection.Assembly::_denied
	RuntimeObject * ____denied_7;
	// System.Boolean System.Reflection.Assembly::fromByteArray
	bool ___fromByteArray_8;
	// System.String System.Reflection.Assembly::assemblyName
	String_t* ___assemblyName_9;

public:
	inline static int32_t get_offset_of__mono_assembly_0() { return static_cast<int32_t>(offsetof(Assembly_t, ____mono_assembly_0)); }
	inline intptr_t get__mono_assembly_0() const { return ____mono_assembly_0; }
	inline intptr_t* get_address_of__mono_assembly_0() { return &____mono_assembly_0; }
	inline void set__mono_assembly_0(intptr_t value)
	{
		____mono_assembly_0 = value;
	}

	inline static int32_t get_offset_of_resolve_event_holder_1() { return static_cast<int32_t>(offsetof(Assembly_t, ___resolve_event_holder_1)); }
	inline ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * get_resolve_event_holder_1() const { return ___resolve_event_holder_1; }
	inline ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C ** get_address_of_resolve_event_holder_1() { return &___resolve_event_holder_1; }
	inline void set_resolve_event_holder_1(ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * value)
	{
		___resolve_event_holder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___resolve_event_holder_1), (void*)value);
	}

	inline static int32_t get_offset_of__evidence_2() { return static_cast<int32_t>(offsetof(Assembly_t, ____evidence_2)); }
	inline RuntimeObject * get__evidence_2() const { return ____evidence_2; }
	inline RuntimeObject ** get_address_of__evidence_2() { return &____evidence_2; }
	inline void set__evidence_2(RuntimeObject * value)
	{
		____evidence_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____evidence_2), (void*)value);
	}

	inline static int32_t get_offset_of__minimum_3() { return static_cast<int32_t>(offsetof(Assembly_t, ____minimum_3)); }
	inline RuntimeObject * get__minimum_3() const { return ____minimum_3; }
	inline RuntimeObject ** get_address_of__minimum_3() { return &____minimum_3; }
	inline void set__minimum_3(RuntimeObject * value)
	{
		____minimum_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____minimum_3), (void*)value);
	}

	inline static int32_t get_offset_of__optional_4() { return static_cast<int32_t>(offsetof(Assembly_t, ____optional_4)); }
	inline RuntimeObject * get__optional_4() const { return ____optional_4; }
	inline RuntimeObject ** get_address_of__optional_4() { return &____optional_4; }
	inline void set__optional_4(RuntimeObject * value)
	{
		____optional_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____optional_4), (void*)value);
	}

	inline static int32_t get_offset_of__refuse_5() { return static_cast<int32_t>(offsetof(Assembly_t, ____refuse_5)); }
	inline RuntimeObject * get__refuse_5() const { return ____refuse_5; }
	inline RuntimeObject ** get_address_of__refuse_5() { return &____refuse_5; }
	inline void set__refuse_5(RuntimeObject * value)
	{
		____refuse_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____refuse_5), (void*)value);
	}

	inline static int32_t get_offset_of__granted_6() { return static_cast<int32_t>(offsetof(Assembly_t, ____granted_6)); }
	inline RuntimeObject * get__granted_6() const { return ____granted_6; }
	inline RuntimeObject ** get_address_of__granted_6() { return &____granted_6; }
	inline void set__granted_6(RuntimeObject * value)
	{
		____granted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____granted_6), (void*)value);
	}

	inline static int32_t get_offset_of__denied_7() { return static_cast<int32_t>(offsetof(Assembly_t, ____denied_7)); }
	inline RuntimeObject * get__denied_7() const { return ____denied_7; }
	inline RuntimeObject ** get_address_of__denied_7() { return &____denied_7; }
	inline void set__denied_7(RuntimeObject * value)
	{
		____denied_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____denied_7), (void*)value);
	}

	inline static int32_t get_offset_of_fromByteArray_8() { return static_cast<int32_t>(offsetof(Assembly_t, ___fromByteArray_8)); }
	inline bool get_fromByteArray_8() const { return ___fromByteArray_8; }
	inline bool* get_address_of_fromByteArray_8() { return &___fromByteArray_8; }
	inline void set_fromByteArray_8(bool value)
	{
		___fromByteArray_8 = value;
	}

	inline static int32_t get_offset_of_assemblyName_9() { return static_cast<int32_t>(offsetof(Assembly_t, ___assemblyName_9)); }
	inline String_t* get_assemblyName_9() const { return ___assemblyName_9; }
	inline String_t** get_address_of_assemblyName_9() { return &___assemblyName_9; }
	inline void set_assemblyName_9(String_t* value)
	{
		___assemblyName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assemblyName_9), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	char* ___assemblyName_9;
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
	intptr_t ____mono_assembly_0;
	ResolveEventHolder_tA37081FAEBE21D83D216225B4489BA8A37B4E13C * ___resolve_event_holder_1;
	Il2CppIUnknown* ____evidence_2;
	Il2CppIUnknown* ____minimum_3;
	Il2CppIUnknown* ____optional_4;
	Il2CppIUnknown* ____refuse_5;
	Il2CppIUnknown* ____granted_6;
	Il2CppIUnknown* ____denied_7;
	int32_t ___fromByteArray_8;
	Il2CppChar* ___assemblyName_9;
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


// Newtonsoft.Json.ConstructorHandling
struct ConstructorHandling_tF11B5FB5880CDB17DA65E0B178D016AF9283FA66 
{
public:
	// System.Int32 Newtonsoft.Json.ConstructorHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConstructorHandling_tF11B5FB5880CDB17DA65E0B178D016AF9283FA66, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.DateFormatHandling
struct DateFormatHandling_t0BE6490BB962DA6F33291FCAF8D761BEC311FC0D 
{
public:
	// System.Int32 Newtonsoft.Json.DateFormatHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateFormatHandling_t0BE6490BB962DA6F33291FCAF8D761BEC311FC0D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.DateParseHandling
struct DateParseHandling_t3B6347A36EBE6EE30C3E70CD2C7DD2DC60F1A1C8 
{
public:
	// System.Int32 Newtonsoft.Json.DateParseHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateParseHandling_t3B6347A36EBE6EE30C3E70CD2C7DD2DC60F1A1C8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.DateTimeZoneHandling
struct DateTimeZoneHandling_t378EC3338071932E6E28BFA91B87DAC26A982800 
{
public:
	// System.Int32 Newtonsoft.Json.DateTimeZoneHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeZoneHandling_t378EC3338071932E6E28BFA91B87DAC26A982800, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// Newtonsoft.Json.FloatFormatHandling
struct FloatFormatHandling_t06A9A06B4CCA8445A22004BED764457FB598D952 
{
public:
	// System.Int32 Newtonsoft.Json.FloatFormatHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FloatFormatHandling_t06A9A06B4CCA8445A22004BED764457FB598D952, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.FloatParseHandling
struct FloatParseHandling_t79D8CC938444E41BF7E3C782E4D608A70E7B6D71 
{
public:
	// System.Int32 Newtonsoft.Json.FloatParseHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FloatParseHandling_t79D8CC938444E41BF7E3C782E4D608A70E7B6D71, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.Formatting
struct Formatting_tA7EA33F352E3220F87DA20E2EA034496787BA45C 
{
public:
	// System.Int32 Newtonsoft.Json.Formatting::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Formatting_tA7EA33F352E3220F87DA20E2EA034496787BA45C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// Newtonsoft.Json.Linq.JTokenType
struct JTokenType_t15451C2A5A68B5DBA25E61D38A5BDCA8BF150AB6 
{
public:
	// System.Int32 Newtonsoft.Json.Linq.JTokenType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JTokenType_t15451C2A5A68B5DBA25E61D38A5BDCA8BF150AB6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.JsonContainerType
struct JsonContainerType_tAF8EFC2035025B382174101866B3D0AB96F2C550 
{
public:
	// System.Int32 Newtonsoft.Json.JsonContainerType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JsonContainerType_tAF8EFC2035025B382174101866B3D0AB96F2C550, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// JsonSubTypes.JsonSubtypesConverter
struct JsonSubtypesConverter_t302C3D0C47335B3E29817D6E1E015D8738DD85D5  : public JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4
{
public:
	// System.Type JsonSubTypes.JsonSubtypesConverter::_baseType
	Type_t * ____baseType_3;
	// System.Type JsonSubTypes.JsonSubtypesConverter::_fallbackType
	Type_t * ____fallbackType_4;

public:
	inline static int32_t get_offset_of__baseType_3() { return static_cast<int32_t>(offsetof(JsonSubtypesConverter_t302C3D0C47335B3E29817D6E1E015D8738DD85D5, ____baseType_3)); }
	inline Type_t * get__baseType_3() const { return ____baseType_3; }
	inline Type_t ** get_address_of__baseType_3() { return &____baseType_3; }
	inline void set__baseType_3(Type_t * value)
	{
		____baseType_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____baseType_3), (void*)value);
	}

	inline static int32_t get_offset_of__fallbackType_4() { return static_cast<int32_t>(offsetof(JsonSubtypesConverter_t302C3D0C47335B3E29817D6E1E015D8738DD85D5, ____fallbackType_4)); }
	inline Type_t * get__fallbackType_4() const { return ____fallbackType_4; }
	inline Type_t ** get_address_of__fallbackType_4() { return &____fallbackType_4; }
	inline void set__fallbackType_4(Type_t * value)
	{
		____fallbackType_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fallbackType_4), (void*)value);
	}
};


// Newtonsoft.Json.JsonToken
struct JsonToken_t3F2E74D2189D826EDCC84DEB75C1968CB8673D72 
{
public:
	// System.Int32 Newtonsoft.Json.JsonToken::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JsonToken_t3F2E74D2189D826EDCC84DEB75C1968CB8673D72, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.MetadataPropertyHandling
struct MetadataPropertyHandling_tBB8CE1EDD3995932BE5CE344824BA6ED8B3FC489 
{
public:
	// System.Int32 Newtonsoft.Json.MetadataPropertyHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MetadataPropertyHandling_tBB8CE1EDD3995932BE5CE344824BA6ED8B3FC489, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.MissingMemberHandling
struct MissingMemberHandling_t947F2D532E6382F6049E1E560ED646584A2A80FB 
{
public:
	// System.Int32 Newtonsoft.Json.MissingMemberHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MissingMemberHandling_t947F2D532E6382F6049E1E560ED646584A2A80FB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// Newtonsoft.Json.PreserveReferencesHandling
struct PreserveReferencesHandling_t19E4158FE410B5B127A255883DBBDDD185219F6F 
{
public:
	// System.Int32 Newtonsoft.Json.PreserveReferencesHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PreserveReferencesHandling_t19E4158FE410B5B127A255883DBBDDD185219F6F, ___value___2)); }
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


// System.StringComparison
struct StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.StringEscapeHandling
struct StringEscapeHandling_t66E490FCCDB73A8D9A892CC3E20BAAFE14D0B383 
{
public:
	// System.Int32 Newtonsoft.Json.StringEscapeHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringEscapeHandling_t66E490FCCDB73A8D9A892CC3E20BAAFE14D0B383, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.TypeNameAssemblyFormatHandling
struct TypeNameAssemblyFormatHandling_tAD21776CDD22DCFC1BF73475F79D690DE2EF1CC0 
{
public:
	// System.Int32 Newtonsoft.Json.TypeNameAssemblyFormatHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeNameAssemblyFormatHandling_tAD21776CDD22DCFC1BF73475F79D690DE2EF1CC0, ___value___2)); }
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


// System.Nullable`1<Newtonsoft.Json.DateFormatHandling>
struct Nullable_1_t774D1D7A8D552AB0F3FDB86BD2DE60976FC2163D 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t774D1D7A8D552AB0F3FDB86BD2DE60976FC2163D, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t774D1D7A8D552AB0F3FDB86BD2DE60976FC2163D, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.DateParseHandling>
struct Nullable_1_tD6D190DDD0562CF2CED2849F4CE886A0C41C6FCE 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tD6D190DDD0562CF2CED2849F4CE886A0C41C6FCE, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tD6D190DDD0562CF2CED2849F4CE886A0C41C6FCE, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling>
struct Nullable_1_t08333FBBDBDF12ADBDDBBB643A074390934AE524 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t08333FBBDBDF12ADBDDBBB643A074390934AE524, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t08333FBBDBDF12ADBDDBBB643A074390934AE524, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling>
struct Nullable_1_tA59BB69EE03EF62305C2B3BAC9FF92C80A5D1635 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tA59BB69EE03EF62305C2B3BAC9FF92C80A5D1635, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tA59BB69EE03EF62305C2B3BAC9FF92C80A5D1635, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.FloatParseHandling>
struct Nullable_1_t77EB23B754DFC50E88184790F49F7C0E87E11BA8 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t77EB23B754DFC50E88184790F49F7C0E87E11BA8, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t77EB23B754DFC50E88184790F49F7C0E87E11BA8, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.Formatting>
struct Nullable_1_t8AFC528E4C7F3BC83DFC3434B29161D991068629 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t8AFC528E4C7F3BC83DFC3434B29161D991068629, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t8AFC528E4C7F3BC83DFC3434B29161D991068629, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling>
struct Nullable_1_tB857EB28F35C3FAAE70288E0455C0E1C579BD513 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tB857EB28F35C3FAAE70288E0455C0E1C579BD513, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tB857EB28F35C3FAAE70288E0455C0E1C579BD513, ___has_value_1)); }
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


// Newtonsoft.Json.JsonPosition
struct JsonPosition_t09A563F9BD11F4E5C290F993945B9381A3C0ADCE 
{
public:
	// Newtonsoft.Json.JsonContainerType Newtonsoft.Json.JsonPosition::Type
	int32_t ___Type_1;
	// System.Int32 Newtonsoft.Json.JsonPosition::Position
	int32_t ___Position_2;
	// System.String Newtonsoft.Json.JsonPosition::PropertyName
	String_t* ___PropertyName_3;
	// System.Boolean Newtonsoft.Json.JsonPosition::HasIndex
	bool ___HasIndex_4;

public:
	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(JsonPosition_t09A563F9BD11F4E5C290F993945B9381A3C0ADCE, ___Type_1)); }
	inline int32_t get_Type_1() const { return ___Type_1; }
	inline int32_t* get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(int32_t value)
	{
		___Type_1 = value;
	}

	inline static int32_t get_offset_of_Position_2() { return static_cast<int32_t>(offsetof(JsonPosition_t09A563F9BD11F4E5C290F993945B9381A3C0ADCE, ___Position_2)); }
	inline int32_t get_Position_2() const { return ___Position_2; }
	inline int32_t* get_address_of_Position_2() { return &___Position_2; }
	inline void set_Position_2(int32_t value)
	{
		___Position_2 = value;
	}

	inline static int32_t get_offset_of_PropertyName_3() { return static_cast<int32_t>(offsetof(JsonPosition_t09A563F9BD11F4E5C290F993945B9381A3C0ADCE, ___PropertyName_3)); }
	inline String_t* get_PropertyName_3() const { return ___PropertyName_3; }
	inline String_t** get_address_of_PropertyName_3() { return &___PropertyName_3; }
	inline void set_PropertyName_3(String_t* value)
	{
		___PropertyName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyName_3), (void*)value);
	}

	inline static int32_t get_offset_of_HasIndex_4() { return static_cast<int32_t>(offsetof(JsonPosition_t09A563F9BD11F4E5C290F993945B9381A3C0ADCE, ___HasIndex_4)); }
	inline bool get_HasIndex_4() const { return ___HasIndex_4; }
	inline bool* get_address_of_HasIndex_4() { return &___HasIndex_4; }
	inline void set_HasIndex_4(bool value)
	{
		___HasIndex_4 = value;
	}
};

struct JsonPosition_t09A563F9BD11F4E5C290F993945B9381A3C0ADCE_StaticFields
{
public:
	// System.Char[] Newtonsoft.Json.JsonPosition::SpecialCharacters
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___SpecialCharacters_0;

public:
	inline static int32_t get_offset_of_SpecialCharacters_0() { return static_cast<int32_t>(offsetof(JsonPosition_t09A563F9BD11F4E5C290F993945B9381A3C0ADCE_StaticFields, ___SpecialCharacters_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_SpecialCharacters_0() const { return ___SpecialCharacters_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_SpecialCharacters_0() { return &___SpecialCharacters_0; }
	inline void set_SpecialCharacters_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___SpecialCharacters_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SpecialCharacters_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Newtonsoft.Json.JsonPosition
struct JsonPosition_t09A563F9BD11F4E5C290F993945B9381A3C0ADCE_marshaled_pinvoke
{
	int32_t ___Type_1;
	int32_t ___Position_2;
	char* ___PropertyName_3;
	int32_t ___HasIndex_4;
};
// Native definition for COM marshalling of Newtonsoft.Json.JsonPosition
struct JsonPosition_t09A563F9BD11F4E5C290F993945B9381A3C0ADCE_marshaled_com
{
	int32_t ___Type_1;
	int32_t ___Position_2;
	Il2CppChar* ___PropertyName_3;
	int32_t ___HasIndex_4;
};

// JsonSubTypes.JsonSubtypesByDiscriminatorValueConverter
struct JsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853  : public JsonSubtypesConverter_t302C3D0C47335B3E29817D6E1E015D8738DD85D5
{
public:
	// System.Boolean JsonSubTypes.JsonSubtypesByDiscriminatorValueConverter::_addDiscriminatorFirst
	bool ____addDiscriminatorFirst_7;
	// System.Boolean JsonSubTypes.JsonSubtypesByDiscriminatorValueConverter::_serializeDiscriminatorProperty
	bool ____serializeDiscriminatorProperty_8;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Object> JsonSubTypes.JsonSubtypesByDiscriminatorValueConverter::_supportedTypes
	Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * ____supportedTypes_9;
	// JsonSubTypes.NullableDictionary`2<System.Object,System.Type> JsonSubTypes.JsonSubtypesByDiscriminatorValueConverter::_subTypeMapping
	NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8 * ____subTypeMapping_10;

public:
	inline static int32_t get_offset_of__addDiscriminatorFirst_7() { return static_cast<int32_t>(offsetof(JsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853, ____addDiscriminatorFirst_7)); }
	inline bool get__addDiscriminatorFirst_7() const { return ____addDiscriminatorFirst_7; }
	inline bool* get_address_of__addDiscriminatorFirst_7() { return &____addDiscriminatorFirst_7; }
	inline void set__addDiscriminatorFirst_7(bool value)
	{
		____addDiscriminatorFirst_7 = value;
	}

	inline static int32_t get_offset_of__serializeDiscriminatorProperty_8() { return static_cast<int32_t>(offsetof(JsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853, ____serializeDiscriminatorProperty_8)); }
	inline bool get__serializeDiscriminatorProperty_8() const { return ____serializeDiscriminatorProperty_8; }
	inline bool* get_address_of__serializeDiscriminatorProperty_8() { return &____serializeDiscriminatorProperty_8; }
	inline void set__serializeDiscriminatorProperty_8(bool value)
	{
		____serializeDiscriminatorProperty_8 = value;
	}

	inline static int32_t get_offset_of__supportedTypes_9() { return static_cast<int32_t>(offsetof(JsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853, ____supportedTypes_9)); }
	inline Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * get__supportedTypes_9() const { return ____supportedTypes_9; }
	inline Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE ** get_address_of__supportedTypes_9() { return &____supportedTypes_9; }
	inline void set__supportedTypes_9(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * value)
	{
		____supportedTypes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____supportedTypes_9), (void*)value);
	}

	inline static int32_t get_offset_of__subTypeMapping_10() { return static_cast<int32_t>(offsetof(JsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853, ____subTypeMapping_10)); }
	inline NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8 * get__subTypeMapping_10() const { return ____subTypeMapping_10; }
	inline NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8 ** get_address_of__subTypeMapping_10() { return &____subTypeMapping_10; }
	inline void set__subTypeMapping_10(NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8 * value)
	{
		____subTypeMapping_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____subTypeMapping_10), (void*)value);
	}
};

struct JsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853_ThreadStaticFields
{
public:
	// System.Boolean JsonSubTypes.JsonSubtypesByDiscriminatorValueConverter::_isInsideWrite
	bool ____isInsideWrite_5;
	// System.Boolean JsonSubTypes.JsonSubtypesByDiscriminatorValueConverter::_allowNextWrite
	bool ____allowNextWrite_6;

public:
	inline static int32_t get_offset_of__isInsideWrite_5() { return static_cast<int32_t>(offsetof(JsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853_ThreadStaticFields, ____isInsideWrite_5)); }
	inline bool get__isInsideWrite_5() const { return ____isInsideWrite_5; }
	inline bool* get_address_of__isInsideWrite_5() { return &____isInsideWrite_5; }
	inline void set__isInsideWrite_5(bool value)
	{
		____isInsideWrite_5 = value;
	}

	inline static int32_t get_offset_of__allowNextWrite_6() { return static_cast<int32_t>(offsetof(JsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853_ThreadStaticFields, ____allowNextWrite_6)); }
	inline bool get__allowNextWrite_6() const { return ____allowNextWrite_6; }
	inline bool* get_address_of__allowNextWrite_6() { return &____allowNextWrite_6; }
	inline void set__allowNextWrite_6(bool value)
	{
		____allowNextWrite_6 = value;
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


// System.Action`1<JsonSubTypes.JsonSubtypes/KnownSubTypeAttribute>
struct Action_1_t16E63DAA551CE22F4B70EED70C9A0278938A91A1  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Type>,System.Type>
struct Func_2_t1C35530CDCF3ACBB02D9C76B9BB986AED1FC59E6  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<JsonSubTypes.JsonSubtypesByDiscriminatorValueConverter,System.Boolean>
struct Func_2_t730F7242228FC0DF9F03C53B2BFA811A34990645  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.String,System.Boolean>
struct Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Type,System.Boolean>
struct Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Type,System.String>
struct Func_2_tDF003B4E413360CAD0A9CA579A84B2BF683EA1B0  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<JsonSubTypes.JsonSubtypes/KnownSubTypeWithPropertyAttribute,System.String>
struct Func_2_tC377CCFD1AED4841503E2E5EF83D750C62EF9178  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<JsonSubTypes.JsonSubtypes/KnownSubTypeWithPropertyAttribute,System.Type>
struct Func_2_t1D63FDB698C10A9D955F8E78C2AD44F3A8B89F8E  : public MulticastDelegate_t
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


// Newtonsoft.Json.JsonReader
struct JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE  : public RuntimeObject
{
public:
	// Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::_tokenType
	int32_t ____tokenType_0;
	// System.Object Newtonsoft.Json.JsonReader::_value
	RuntimeObject * ____value_1;
	// System.Char Newtonsoft.Json.JsonReader::_quoteChar
	Il2CppChar ____quoteChar_2;
	// Newtonsoft.Json.JsonReader/State Newtonsoft.Json.JsonReader::_currentState
	int32_t ____currentState_3;
	// Newtonsoft.Json.JsonPosition Newtonsoft.Json.JsonReader::_currentPosition
	JsonPosition_t09A563F9BD11F4E5C290F993945B9381A3C0ADCE  ____currentPosition_4;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonReader::_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ____culture_5;
	// Newtonsoft.Json.DateTimeZoneHandling Newtonsoft.Json.JsonReader::_dateTimeZoneHandling
	int32_t ____dateTimeZoneHandling_6;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonReader::_maxDepth
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ____maxDepth_7;
	// System.Boolean Newtonsoft.Json.JsonReader::_hasExceededMaxDepth
	bool ____hasExceededMaxDepth_8;
	// Newtonsoft.Json.DateParseHandling Newtonsoft.Json.JsonReader::_dateParseHandling
	int32_t ____dateParseHandling_9;
	// Newtonsoft.Json.FloatParseHandling Newtonsoft.Json.JsonReader::_floatParseHandling
	int32_t ____floatParseHandling_10;
	// System.String Newtonsoft.Json.JsonReader::_dateFormatString
	String_t* ____dateFormatString_11;
	// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition> Newtonsoft.Json.JsonReader::_stack
	List_1_t6DACBE605004C53E8318856EB2DE9594F643737D * ____stack_12;
	// System.Boolean Newtonsoft.Json.JsonReader::<CloseInput>k__BackingField
	bool ___U3CCloseInputU3Ek__BackingField_13;
	// System.Boolean Newtonsoft.Json.JsonReader::<SupportMultipleContent>k__BackingField
	bool ___U3CSupportMultipleContentU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of__tokenType_0() { return static_cast<int32_t>(offsetof(JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE, ____tokenType_0)); }
	inline int32_t get__tokenType_0() const { return ____tokenType_0; }
	inline int32_t* get_address_of__tokenType_0() { return &____tokenType_0; }
	inline void set__tokenType_0(int32_t value)
	{
		____tokenType_0 = value;
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE, ____value_1)); }
	inline RuntimeObject * get__value_1() const { return ____value_1; }
	inline RuntimeObject ** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(RuntimeObject * value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____value_1), (void*)value);
	}

	inline static int32_t get_offset_of__quoteChar_2() { return static_cast<int32_t>(offsetof(JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE, ____quoteChar_2)); }
	inline Il2CppChar get__quoteChar_2() const { return ____quoteChar_2; }
	inline Il2CppChar* get_address_of__quoteChar_2() { return &____quoteChar_2; }
	inline void set__quoteChar_2(Il2CppChar value)
	{
		____quoteChar_2 = value;
	}

	inline static int32_t get_offset_of__currentState_3() { return static_cast<int32_t>(offsetof(JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE, ____currentState_3)); }
	inline int32_t get__currentState_3() const { return ____currentState_3; }
	inline int32_t* get_address_of__currentState_3() { return &____currentState_3; }
	inline void set__currentState_3(int32_t value)
	{
		____currentState_3 = value;
	}

	inline static int32_t get_offset_of__currentPosition_4() { return static_cast<int32_t>(offsetof(JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE, ____currentPosition_4)); }
	inline JsonPosition_t09A563F9BD11F4E5C290F993945B9381A3C0ADCE  get__currentPosition_4() const { return ____currentPosition_4; }
	inline JsonPosition_t09A563F9BD11F4E5C290F993945B9381A3C0ADCE * get_address_of__currentPosition_4() { return &____currentPosition_4; }
	inline void set__currentPosition_4(JsonPosition_t09A563F9BD11F4E5C290F993945B9381A3C0ADCE  value)
	{
		____currentPosition_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____currentPosition_4))->___PropertyName_3), (void*)NULL);
	}

	inline static int32_t get_offset_of__culture_5() { return static_cast<int32_t>(offsetof(JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE, ____culture_5)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get__culture_5() const { return ____culture_5; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of__culture_5() { return &____culture_5; }
	inline void set__culture_5(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		____culture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____culture_5), (void*)value);
	}

	inline static int32_t get_offset_of__dateTimeZoneHandling_6() { return static_cast<int32_t>(offsetof(JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE, ____dateTimeZoneHandling_6)); }
	inline int32_t get__dateTimeZoneHandling_6() const { return ____dateTimeZoneHandling_6; }
	inline int32_t* get_address_of__dateTimeZoneHandling_6() { return &____dateTimeZoneHandling_6; }
	inline void set__dateTimeZoneHandling_6(int32_t value)
	{
		____dateTimeZoneHandling_6 = value;
	}

	inline static int32_t get_offset_of__maxDepth_7() { return static_cast<int32_t>(offsetof(JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE, ____maxDepth_7)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get__maxDepth_7() const { return ____maxDepth_7; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of__maxDepth_7() { return &____maxDepth_7; }
	inline void set__maxDepth_7(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		____maxDepth_7 = value;
	}

	inline static int32_t get_offset_of__hasExceededMaxDepth_8() { return static_cast<int32_t>(offsetof(JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE, ____hasExceededMaxDepth_8)); }
	inline bool get__hasExceededMaxDepth_8() const { return ____hasExceededMaxDepth_8; }
	inline bool* get_address_of__hasExceededMaxDepth_8() { return &____hasExceededMaxDepth_8; }
	inline void set__hasExceededMaxDepth_8(bool value)
	{
		____hasExceededMaxDepth_8 = value;
	}

	inline static int32_t get_offset_of__dateParseHandling_9() { return static_cast<int32_t>(offsetof(JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE, ____dateParseHandling_9)); }
	inline int32_t get__dateParseHandling_9() const { return ____dateParseHandling_9; }
	inline int32_t* get_address_of__dateParseHandling_9() { return &____dateParseHandling_9; }
	inline void set__dateParseHandling_9(int32_t value)
	{
		____dateParseHandling_9 = value;
	}

	inline static int32_t get_offset_of__floatParseHandling_10() { return static_cast<int32_t>(offsetof(JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE, ____floatParseHandling_10)); }
	inline int32_t get__floatParseHandling_10() const { return ____floatParseHandling_10; }
	inline int32_t* get_address_of__floatParseHandling_10() { return &____floatParseHandling_10; }
	inline void set__floatParseHandling_10(int32_t value)
	{
		____floatParseHandling_10 = value;
	}

	inline static int32_t get_offset_of__dateFormatString_11() { return static_cast<int32_t>(offsetof(JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE, ____dateFormatString_11)); }
	inline String_t* get__dateFormatString_11() const { return ____dateFormatString_11; }
	inline String_t** get_address_of__dateFormatString_11() { return &____dateFormatString_11; }
	inline void set__dateFormatString_11(String_t* value)
	{
		____dateFormatString_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dateFormatString_11), (void*)value);
	}

	inline static int32_t get_offset_of__stack_12() { return static_cast<int32_t>(offsetof(JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE, ____stack_12)); }
	inline List_1_t6DACBE605004C53E8318856EB2DE9594F643737D * get__stack_12() const { return ____stack_12; }
	inline List_1_t6DACBE605004C53E8318856EB2DE9594F643737D ** get_address_of__stack_12() { return &____stack_12; }
	inline void set__stack_12(List_1_t6DACBE605004C53E8318856EB2DE9594F643737D * value)
	{
		____stack_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stack_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCloseInputU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE, ___U3CCloseInputU3Ek__BackingField_13)); }
	inline bool get_U3CCloseInputU3Ek__BackingField_13() const { return ___U3CCloseInputU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CCloseInputU3Ek__BackingField_13() { return &___U3CCloseInputU3Ek__BackingField_13; }
	inline void set_U3CCloseInputU3Ek__BackingField_13(bool value)
	{
		___U3CCloseInputU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CSupportMultipleContentU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE, ___U3CSupportMultipleContentU3Ek__BackingField_14)); }
	inline bool get_U3CSupportMultipleContentU3Ek__BackingField_14() const { return ___U3CSupportMultipleContentU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CSupportMultipleContentU3Ek__BackingField_14() { return &___U3CSupportMultipleContentU3Ek__BackingField_14; }
	inline void set_U3CSupportMultipleContentU3Ek__BackingField_14(bool value)
	{
		___U3CSupportMultipleContentU3Ek__BackingField_14 = value;
	}
};


// Newtonsoft.Json.JsonReaderException
struct JsonReaderException_tD145419BFB4715FDFEAF3FA5619AAB84900BCEE9  : public JsonException_tD4970C15EFCD45318B603FD05766B927594DBEE5
{
public:
	// System.Int32 Newtonsoft.Json.JsonReaderException::<LineNumber>k__BackingField
	int32_t ___U3CLineNumberU3Ek__BackingField_17;
	// System.Int32 Newtonsoft.Json.JsonReaderException::<LinePosition>k__BackingField
	int32_t ___U3CLinePositionU3Ek__BackingField_18;
	// System.String Newtonsoft.Json.JsonReaderException::<Path>k__BackingField
	String_t* ___U3CPathU3Ek__BackingField_19;

public:
	inline static int32_t get_offset_of_U3CLineNumberU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(JsonReaderException_tD145419BFB4715FDFEAF3FA5619AAB84900BCEE9, ___U3CLineNumberU3Ek__BackingField_17)); }
	inline int32_t get_U3CLineNumberU3Ek__BackingField_17() const { return ___U3CLineNumberU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CLineNumberU3Ek__BackingField_17() { return &___U3CLineNumberU3Ek__BackingField_17; }
	inline void set_U3CLineNumberU3Ek__BackingField_17(int32_t value)
	{
		___U3CLineNumberU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CLinePositionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(JsonReaderException_tD145419BFB4715FDFEAF3FA5619AAB84900BCEE9, ___U3CLinePositionU3Ek__BackingField_18)); }
	inline int32_t get_U3CLinePositionU3Ek__BackingField_18() const { return ___U3CLinePositionU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CLinePositionU3Ek__BackingField_18() { return &___U3CLinePositionU3Ek__BackingField_18; }
	inline void set_U3CLinePositionU3Ek__BackingField_18(int32_t value)
	{
		___U3CLinePositionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CPathU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(JsonReaderException_tD145419BFB4715FDFEAF3FA5619AAB84900BCEE9, ___U3CPathU3Ek__BackingField_19)); }
	inline String_t* get_U3CPathU3Ek__BackingField_19() const { return ___U3CPathU3Ek__BackingField_19; }
	inline String_t** get_address_of_U3CPathU3Ek__BackingField_19() { return &___U3CPathU3Ek__BackingField_19; }
	inline void set_U3CPathU3Ek__BackingField_19(String_t* value)
	{
		___U3CPathU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPathU3Ek__BackingField_19), (void*)value);
	}
};


// Newtonsoft.Json.JsonSerializationException
struct JsonSerializationException_tCD1256C587B4859A1B7964BD0578C27A6D58580F  : public JsonException_tD4970C15EFCD45318B603FD05766B927594DBEE5
{
public:
	// System.Int32 Newtonsoft.Json.JsonSerializationException::<LineNumber>k__BackingField
	int32_t ___U3CLineNumberU3Ek__BackingField_17;
	// System.Int32 Newtonsoft.Json.JsonSerializationException::<LinePosition>k__BackingField
	int32_t ___U3CLinePositionU3Ek__BackingField_18;
	// System.String Newtonsoft.Json.JsonSerializationException::<Path>k__BackingField
	String_t* ___U3CPathU3Ek__BackingField_19;

public:
	inline static int32_t get_offset_of_U3CLineNumberU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(JsonSerializationException_tCD1256C587B4859A1B7964BD0578C27A6D58580F, ___U3CLineNumberU3Ek__BackingField_17)); }
	inline int32_t get_U3CLineNumberU3Ek__BackingField_17() const { return ___U3CLineNumberU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CLineNumberU3Ek__BackingField_17() { return &___U3CLineNumberU3Ek__BackingField_17; }
	inline void set_U3CLineNumberU3Ek__BackingField_17(int32_t value)
	{
		___U3CLineNumberU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CLinePositionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(JsonSerializationException_tCD1256C587B4859A1B7964BD0578C27A6D58580F, ___U3CLinePositionU3Ek__BackingField_18)); }
	inline int32_t get_U3CLinePositionU3Ek__BackingField_18() const { return ___U3CLinePositionU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CLinePositionU3Ek__BackingField_18() { return &___U3CLinePositionU3Ek__BackingField_18; }
	inline void set_U3CLinePositionU3Ek__BackingField_18(int32_t value)
	{
		___U3CLinePositionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CPathU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(JsonSerializationException_tCD1256C587B4859A1B7964BD0578C27A6D58580F, ___U3CPathU3Ek__BackingField_19)); }
	inline String_t* get_U3CPathU3Ek__BackingField_19() const { return ___U3CPathU3Ek__BackingField_19; }
	inline String_t** get_address_of_U3CPathU3Ek__BackingField_19() { return &___U3CPathU3Ek__BackingField_19; }
	inline void set_U3CPathU3Ek__BackingField_19(String_t* value)
	{
		___U3CPathU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPathU3Ek__BackingField_19), (void*)value);
	}
};


// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC  : public RuntimeObject
{
public:
	// Newtonsoft.Json.TypeNameHandling Newtonsoft.Json.JsonSerializer::_typeNameHandling
	int32_t ____typeNameHandling_0;
	// Newtonsoft.Json.TypeNameAssemblyFormatHandling Newtonsoft.Json.JsonSerializer::_typeNameAssemblyFormatHandling
	int32_t ____typeNameAssemblyFormatHandling_1;
	// Newtonsoft.Json.PreserveReferencesHandling Newtonsoft.Json.JsonSerializer::_preserveReferencesHandling
	int32_t ____preserveReferencesHandling_2;
	// Newtonsoft.Json.ReferenceLoopHandling Newtonsoft.Json.JsonSerializer::_referenceLoopHandling
	int32_t ____referenceLoopHandling_3;
	// Newtonsoft.Json.MissingMemberHandling Newtonsoft.Json.JsonSerializer::_missingMemberHandling
	int32_t ____missingMemberHandling_4;
	// Newtonsoft.Json.ObjectCreationHandling Newtonsoft.Json.JsonSerializer::_objectCreationHandling
	int32_t ____objectCreationHandling_5;
	// Newtonsoft.Json.NullValueHandling Newtonsoft.Json.JsonSerializer::_nullValueHandling
	int32_t ____nullValueHandling_6;
	// Newtonsoft.Json.DefaultValueHandling Newtonsoft.Json.JsonSerializer::_defaultValueHandling
	int32_t ____defaultValueHandling_7;
	// Newtonsoft.Json.ConstructorHandling Newtonsoft.Json.JsonSerializer::_constructorHandling
	int32_t ____constructorHandling_8;
	// Newtonsoft.Json.MetadataPropertyHandling Newtonsoft.Json.JsonSerializer::_metadataPropertyHandling
	int32_t ____metadataPropertyHandling_9;
	// Newtonsoft.Json.JsonConverterCollection Newtonsoft.Json.JsonSerializer::_converters
	JsonConverterCollection_tBC657EE757E9DCB303371710D65BAE9B58BF84EC * ____converters_10;
	// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.JsonSerializer::_contractResolver
	RuntimeObject* ____contractResolver_11;
	// Newtonsoft.Json.Serialization.ITraceWriter Newtonsoft.Json.JsonSerializer::_traceWriter
	RuntimeObject* ____traceWriter_12;
	// System.Collections.IEqualityComparer Newtonsoft.Json.JsonSerializer::_equalityComparer
	RuntimeObject* ____equalityComparer_13;
	// Newtonsoft.Json.Serialization.ISerializationBinder Newtonsoft.Json.JsonSerializer::_serializationBinder
	RuntimeObject* ____serializationBinder_14;
	// System.Runtime.Serialization.StreamingContext Newtonsoft.Json.JsonSerializer::_context
	StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ____context_15;
	// Newtonsoft.Json.Serialization.IReferenceResolver Newtonsoft.Json.JsonSerializer::_referenceResolver
	RuntimeObject* ____referenceResolver_16;
	// System.Nullable`1<Newtonsoft.Json.Formatting> Newtonsoft.Json.JsonSerializer::_formatting
	Nullable_1_t8AFC528E4C7F3BC83DFC3434B29161D991068629  ____formatting_17;
	// System.Nullable`1<Newtonsoft.Json.DateFormatHandling> Newtonsoft.Json.JsonSerializer::_dateFormatHandling
	Nullable_1_t774D1D7A8D552AB0F3FDB86BD2DE60976FC2163D  ____dateFormatHandling_18;
	// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling> Newtonsoft.Json.JsonSerializer::_dateTimeZoneHandling
	Nullable_1_t08333FBBDBDF12ADBDDBBB643A074390934AE524  ____dateTimeZoneHandling_19;
	// System.Nullable`1<Newtonsoft.Json.DateParseHandling> Newtonsoft.Json.JsonSerializer::_dateParseHandling
	Nullable_1_tD6D190DDD0562CF2CED2849F4CE886A0C41C6FCE  ____dateParseHandling_20;
	// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling> Newtonsoft.Json.JsonSerializer::_floatFormatHandling
	Nullable_1_tA59BB69EE03EF62305C2B3BAC9FF92C80A5D1635  ____floatFormatHandling_21;
	// System.Nullable`1<Newtonsoft.Json.FloatParseHandling> Newtonsoft.Json.JsonSerializer::_floatParseHandling
	Nullable_1_t77EB23B754DFC50E88184790F49F7C0E87E11BA8  ____floatParseHandling_22;
	// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling> Newtonsoft.Json.JsonSerializer::_stringEscapeHandling
	Nullable_1_tB857EB28F35C3FAAE70288E0455C0E1C579BD513  ____stringEscapeHandling_23;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonSerializer::_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ____culture_24;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonSerializer::_maxDepth
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ____maxDepth_25;
	// System.Boolean Newtonsoft.Json.JsonSerializer::_maxDepthSet
	bool ____maxDepthSet_26;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.JsonSerializer::_checkAdditionalContent
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ____checkAdditionalContent_27;
	// System.String Newtonsoft.Json.JsonSerializer::_dateFormatString
	String_t* ____dateFormatString_28;
	// System.Boolean Newtonsoft.Json.JsonSerializer::_dateFormatStringSet
	bool ____dateFormatStringSet_29;
	// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs> Newtonsoft.Json.JsonSerializer::Error
	EventHandler_1_tE3860EE7EA00D2627F0864DFF7F17AE485E5A375 * ___Error_30;

public:
	inline static int32_t get_offset_of__typeNameHandling_0() { return static_cast<int32_t>(offsetof(JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC, ____typeNameHandling_0)); }
	inline int32_t get__typeNameHandling_0() const { return ____typeNameHandling_0; }
	inline int32_t* get_address_of__typeNameHandling_0() { return &____typeNameHandling_0; }
	inline void set__typeNameHandling_0(int32_t value)
	{
		____typeNameHandling_0 = value;
	}

	inline static int32_t get_offset_of__typeNameAssemblyFormatHandling_1() { return static_cast<int32_t>(offsetof(JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC, ____typeNameAssemblyFormatHandling_1)); }
	inline int32_t get__typeNameAssemblyFormatHandling_1() const { return ____typeNameAssemblyFormatHandling_1; }
	inline int32_t* get_address_of__typeNameAssemblyFormatHandling_1() { return &____typeNameAssemblyFormatHandling_1; }
	inline void set__typeNameAssemblyFormatHandling_1(int32_t value)
	{
		____typeNameAssemblyFormatHandling_1 = value;
	}

	inline static int32_t get_offset_of__preserveReferencesHandling_2() { return static_cast<int32_t>(offsetof(JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC, ____preserveReferencesHandling_2)); }
	inline int32_t get__preserveReferencesHandling_2() const { return ____preserveReferencesHandling_2; }
	inline int32_t* get_address_of__preserveReferencesHandling_2() { return &____preserveReferencesHandling_2; }
	inline void set__preserveReferencesHandling_2(int32_t value)
	{
		____preserveReferencesHandling_2 = value;
	}

	inline static int32_t get_offset_of__referenceLoopHandling_3() { return static_cast<int32_t>(offsetof(JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC, ____referenceLoopHandling_3)); }
	inline int32_t get__referenceLoopHandling_3() const { return ____referenceLoopHandling_3; }
	inline int32_t* get_address_of__referenceLoopHandling_3() { return &____referenceLoopHandling_3; }
	inline void set__referenceLoopHandling_3(int32_t value)
	{
		____referenceLoopHandling_3 = value;
	}

	inline static int32_t get_offset_of__missingMemberHandling_4() { return static_cast<int32_t>(offsetof(JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC, ____missingMemberHandling_4)); }
	inline int32_t get__missingMemberHandling_4() const { return ____missingMemberHandling_4; }
	inline int32_t* get_address_of__missingMemberHandling_4() { return &____missingMemberHandling_4; }
	inline void set__missingMemberHandling_4(int32_t value)
	{
		____missingMemberHandling_4 = value;
	}

	inline static int32_t get_offset_of__objectCreationHandling_5() { return static_cast<int32_t>(offsetof(JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC, ____objectCreationHandling_5)); }
	inline int32_t get__objectCreationHandling_5() const { return ____objectCreationHandling_5; }
	inline int32_t* get_address_of__objectCreationHandling_5() { return &____objectCreationHandling_5; }
	inline void set__objectCreationHandling_5(int32_t value)
	{
		____objectCreationHandling_5 = value;
	}

	inline static int32_t get_offset_of__nullValueHandling_6() { return static_cast<int32_t>(offsetof(JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC, ____nullValueHandling_6)); }
	inline int32_t get__nullValueHandling_6() const { return ____nullValueHandling_6; }
	inline int32_t* get_address_of__nullValueHandling_6() { return &____nullValueHandling_6; }
	inline void set__nullValueHandling_6(int32_t value)
	{
		____nullValueHandling_6 = value;
	}

	inline static int32_t get_offset_of__defaultValueHandling_7() { return static_cast<int32_t>(offsetof(JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC, ____defaultValueHandling_7)); }
	inline int32_t get__defaultValueHandling_7() const { return ____defaultValueHandling_7; }
	inline int32_t* get_address_of__defaultValueHandling_7() { return &____defaultValueHandling_7; }
	inline void set__defaultValueHandling_7(int32_t value)
	{
		____defaultValueHandling_7 = value;
	}

	inline static int32_t get_offset_of__constructorHandling_8() { return static_cast<int32_t>(offsetof(JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC, ____constructorHandling_8)); }
	inline int32_t get__constructorHandling_8() const { return ____constructorHandling_8; }
	inline int32_t* get_address_of__constructorHandling_8() { return &____constructorHandling_8; }
	inline void set__constructorHandling_8(int32_t value)
	{
		____constructorHandling_8 = value;
	}

	inline static int32_t get_offset_of__metadataPropertyHandling_9() { return static_cast<int32_t>(offsetof(JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC, ____metadataPropertyHandling_9)); }
	inline int32_t get__metadataPropertyHandling_9() const { return ____metadataPropertyHandling_9; }
	inline int32_t* get_address_of__metadataPropertyHandling_9() { return &____metadataPropertyHandling_9; }
	inline void set__metadataPropertyHandling_9(int32_t value)
	{
		____metadataPropertyHandling_9 = value;
	}

	inline static int32_t get_offset_of__converters_10() { return static_cast<int32_t>(offsetof(JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC, ____converters_10)); }
	inline JsonConverterCollection_tBC657EE757E9DCB303371710D65BAE9B58BF84EC * get__converters_10() const { return ____converters_10; }
	inline JsonConverterCollection_tBC657EE757E9DCB303371710D65BAE9B58BF84EC ** get_address_of__converters_10() { return &____converters_10; }
	inline void set__converters_10(JsonConverterCollection_tBC657EE757E9DCB303371710D65BAE9B58BF84EC * value)
	{
		____converters_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____converters_10), (void*)value);
	}

	inline static int32_t get_offset_of__contractResolver_11() { return static_cast<int32_t>(offsetof(JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC, ____contractResolver_11)); }
	inline RuntimeObject* get__contractResolver_11() const { return ____contractResolver_11; }
	inline RuntimeObject** get_address_of__contractResolver_11() { return &____contractResolver_11; }
	inline void set__contractResolver_11(RuntimeObject* value)
	{
		____contractResolver_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____contractResolver_11), (void*)value);
	}

	inline static int32_t get_offset_of__traceWriter_12() { return static_cast<int32_t>(offsetof(JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC, ____traceWriter_12)); }
	inline RuntimeObject* get__traceWriter_12() const { return ____traceWriter_12; }
	inline RuntimeObject** get_address_of__traceWriter_12() { return &____traceWriter_12; }
	inline void set__traceWriter_12(RuntimeObject* value)
	{
		____traceWriter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____traceWriter_12), (void*)value);
	}

	inline static int32_t get_offset_of__equalityComparer_13() { return static_cast<int32_t>(offsetof(JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC, ____equalityComparer_13)); }
	inline RuntimeObject* get__equalityComparer_13() const { return ____equalityComparer_13; }
	inline RuntimeObject** get_address_of__equalityComparer_13() { return &____equalityComparer_13; }
	inline void set__equalityComparer_13(RuntimeObject* value)
	{
		____equalityComparer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____equalityComparer_13), (void*)value);
	}

	inline static int32_t get_offset_of__serializationBinder_14() { return static_cast<int32_t>(offsetof(JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC, ____serializationBinder_14)); }
	inline RuntimeObject* get__serializationBinder_14() const { return ____serializationBinder_14; }
	inline RuntimeObject** get_address_of__serializationBinder_14() { return &____serializationBinder_14; }
	inline void set__serializationBinder_14(RuntimeObject* value)
	{
		____serializationBinder_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____serializationBinder_14), (void*)value);
	}

	inline static int32_t get_offset_of__context_15() { return static_cast<int32_t>(offsetof(JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC, ____context_15)); }
	inline StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  get__context_15() const { return ____context_15; }
	inline StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 * get_address_of__context_15() { return &____context_15; }
	inline void set__context_15(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  value)
	{
		____context_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____context_15))->___m_additionalContext_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__referenceResolver_16() { return static_cast<int32_t>(offsetof(JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC, ____referenceResolver_16)); }
	inline RuntimeObject* get__referenceResolver_16() const { return ____referenceResolver_16; }
	inline RuntimeObject** get_address_of__referenceResolver_16() { return &____referenceResolver_16; }
	inline void set__referenceResolver_16(RuntimeObject* value)
	{
		____referenceResolver_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____referenceResolver_16), (void*)value);
	}

	inline static int32_t get_offset_of__formatting_17() { return static_cast<int32_t>(offsetof(JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC, ____formatting_17)); }
	inline Nullable_1_t8AFC528E4C7F3BC83DFC3434B29161D991068629  get__formatting_17() const { return ____formatting_17; }
	inline Nullable_1_t8AFC528E4C7F3BC83DFC3434B29161D991068629 * get_address_of__formatting_17() { return &____formatting_17; }
	inline void set__formatting_17(Nullable_1_t8AFC528E4C7F3BC83DFC3434B29161D991068629  value)
	{
		____formatting_17 = value;
	}

	inline static int32_t get_offset_of__dateFormatHandling_18() { return static_cast<int32_t>(offsetof(JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC, ____dateFormatHandling_18)); }
	inline Nullable_1_t774D1D7A8D552AB0F3FDB86BD2DE60976FC2163D  get__dateFormatHandling_18() const { return ____dateFormatHandling_18; }
	inline Nullable_1_t774D1D7A8D552AB0F3FDB86BD2DE60976FC2163D * get_address_of__dateFormatHandling_18() { return &____dateFormatHandling_18; }
	inline void set__dateFormatHandling_18(Nullable_1_t774D1D7A8D552AB0F3FDB86BD2DE60976FC2163D  value)
	{
		____dateFormatHandling_18 = value;
	}

	inline static int32_t get_offset_of__dateTimeZoneHandling_19() { return static_cast<int32_t>(offsetof(JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC, ____dateTimeZoneHandling_19)); }
	inline Nullable_1_t08333FBBDBDF12ADBDDBBB643A074390934AE524  get__dateTimeZoneHandling_19() const { return ____dateTimeZoneHandling_19; }
	inline Nullable_1_t08333FBBDBDF12ADBDDBBB643A074390934AE524 * get_address_of__dateTimeZoneHandling_19() { return &____dateTimeZoneHandling_19; }
	inline void set__dateTimeZoneHandling_19(Nullable_1_t08333FBBDBDF12ADBDDBBB643A074390934AE524  value)
	{
		____dateTimeZoneHandling_19 = value;
	}

	inline static int32_t get_offset_of__dateParseHandling_20() { return static_cast<int32_t>(offsetof(JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC, ____dateParseHandling_20)); }
	inline Nullable_1_tD6D190DDD0562CF2CED2849F4CE886A0C41C6FCE  get__dateParseHandling_20() const { return ____dateParseHandling_20; }
	inline Nullable_1_tD6D190DDD0562CF2CED2849F4CE886A0C41C6FCE * get_address_of__dateParseHandling_20() { return &____dateParseHandling_20; }
	inline void set__dateParseHandling_20(Nullable_1_tD6D190DDD0562CF2CED2849F4CE886A0C41C6FCE  value)
	{
		____dateParseHandling_20 = value;
	}

	inline static int32_t get_offset_of__floatFormatHandling_21() { return static_cast<int32_t>(offsetof(JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC, ____floatFormatHandling_21)); }
	inline Nullable_1_tA59BB69EE03EF62305C2B3BAC9FF92C80A5D1635  get__floatFormatHandling_21() const { return ____floatFormatHandling_21; }
	inline Nullable_1_tA59BB69EE03EF62305C2B3BAC9FF92C80A5D1635 * get_address_of__floatFormatHandling_21() { return &____floatFormatHandling_21; }
	inline void set__floatFormatHandling_21(Nullable_1_tA59BB69EE03EF62305C2B3BAC9FF92C80A5D1635  value)
	{
		____floatFormatHandling_21 = value;
	}

	inline static int32_t get_offset_of__floatParseHandling_22() { return static_cast<int32_t>(offsetof(JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC, ____floatParseHandling_22)); }
	inline Nullable_1_t77EB23B754DFC50E88184790F49F7C0E87E11BA8  get__floatParseHandling_22() const { return ____floatParseHandling_22; }
	inline Nullable_1_t77EB23B754DFC50E88184790F49F7C0E87E11BA8 * get_address_of__floatParseHandling_22() { return &____floatParseHandling_22; }
	inline void set__floatParseHandling_22(Nullable_1_t77EB23B754DFC50E88184790F49F7C0E87E11BA8  value)
	{
		____floatParseHandling_22 = value;
	}

	inline static int32_t get_offset_of__stringEscapeHandling_23() { return static_cast<int32_t>(offsetof(JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC, ____stringEscapeHandling_23)); }
	inline Nullable_1_tB857EB28F35C3FAAE70288E0455C0E1C579BD513  get__stringEscapeHandling_23() const { return ____stringEscapeHandling_23; }
	inline Nullable_1_tB857EB28F35C3FAAE70288E0455C0E1C579BD513 * get_address_of__stringEscapeHandling_23() { return &____stringEscapeHandling_23; }
	inline void set__stringEscapeHandling_23(Nullable_1_tB857EB28F35C3FAAE70288E0455C0E1C579BD513  value)
	{
		____stringEscapeHandling_23 = value;
	}

	inline static int32_t get_offset_of__culture_24() { return static_cast<int32_t>(offsetof(JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC, ____culture_24)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get__culture_24() const { return ____culture_24; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of__culture_24() { return &____culture_24; }
	inline void set__culture_24(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		____culture_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____culture_24), (void*)value);
	}

	inline static int32_t get_offset_of__maxDepth_25() { return static_cast<int32_t>(offsetof(JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC, ____maxDepth_25)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get__maxDepth_25() const { return ____maxDepth_25; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of__maxDepth_25() { return &____maxDepth_25; }
	inline void set__maxDepth_25(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		____maxDepth_25 = value;
	}

	inline static int32_t get_offset_of__maxDepthSet_26() { return static_cast<int32_t>(offsetof(JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC, ____maxDepthSet_26)); }
	inline bool get__maxDepthSet_26() const { return ____maxDepthSet_26; }
	inline bool* get_address_of__maxDepthSet_26() { return &____maxDepthSet_26; }
	inline void set__maxDepthSet_26(bool value)
	{
		____maxDepthSet_26 = value;
	}

	inline static int32_t get_offset_of__checkAdditionalContent_27() { return static_cast<int32_t>(offsetof(JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC, ____checkAdditionalContent_27)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get__checkAdditionalContent_27() const { return ____checkAdditionalContent_27; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of__checkAdditionalContent_27() { return &____checkAdditionalContent_27; }
	inline void set__checkAdditionalContent_27(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		____checkAdditionalContent_27 = value;
	}

	inline static int32_t get_offset_of__dateFormatString_28() { return static_cast<int32_t>(offsetof(JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC, ____dateFormatString_28)); }
	inline String_t* get__dateFormatString_28() const { return ____dateFormatString_28; }
	inline String_t** get_address_of__dateFormatString_28() { return &____dateFormatString_28; }
	inline void set__dateFormatString_28(String_t* value)
	{
		____dateFormatString_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dateFormatString_28), (void*)value);
	}

	inline static int32_t get_offset_of__dateFormatStringSet_29() { return static_cast<int32_t>(offsetof(JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC, ____dateFormatStringSet_29)); }
	inline bool get__dateFormatStringSet_29() const { return ____dateFormatStringSet_29; }
	inline bool* get_address_of__dateFormatStringSet_29() { return &____dateFormatStringSet_29; }
	inline void set__dateFormatStringSet_29(bool value)
	{
		____dateFormatStringSet_29 = value;
	}

	inline static int32_t get_offset_of_Error_30() { return static_cast<int32_t>(offsetof(JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC, ___Error_30)); }
	inline EventHandler_1_tE3860EE7EA00D2627F0864DFF7F17AE485E5A375 * get_Error_30() const { return ___Error_30; }
	inline EventHandler_1_tE3860EE7EA00D2627F0864DFF7F17AE485E5A375 ** get_address_of_Error_30() { return &___Error_30; }
	inline void set_Error_30(EventHandler_1_tE3860EE7EA00D2627F0864DFF7F17AE485E5A375 * value)
	{
		___Error_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Error_30), (void*)value);
	}
};


// Newtonsoft.Json.JsonWriter
struct JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition> Newtonsoft.Json.JsonWriter::_stack
	List_1_t6DACBE605004C53E8318856EB2DE9594F643737D * ____stack_2;
	// Newtonsoft.Json.JsonPosition Newtonsoft.Json.JsonWriter::_currentPosition
	JsonPosition_t09A563F9BD11F4E5C290F993945B9381A3C0ADCE  ____currentPosition_3;
	// Newtonsoft.Json.JsonWriter/State Newtonsoft.Json.JsonWriter::_currentState
	int32_t ____currentState_4;
	// Newtonsoft.Json.Formatting Newtonsoft.Json.JsonWriter::_formatting
	int32_t ____formatting_5;
	// System.Boolean Newtonsoft.Json.JsonWriter::<CloseOutput>k__BackingField
	bool ___U3CCloseOutputU3Ek__BackingField_6;
	// System.Boolean Newtonsoft.Json.JsonWriter::<AutoCompleteOnClose>k__BackingField
	bool ___U3CAutoCompleteOnCloseU3Ek__BackingField_7;
	// Newtonsoft.Json.DateFormatHandling Newtonsoft.Json.JsonWriter::_dateFormatHandling
	int32_t ____dateFormatHandling_8;
	// Newtonsoft.Json.DateTimeZoneHandling Newtonsoft.Json.JsonWriter::_dateTimeZoneHandling
	int32_t ____dateTimeZoneHandling_9;
	// Newtonsoft.Json.StringEscapeHandling Newtonsoft.Json.JsonWriter::_stringEscapeHandling
	int32_t ____stringEscapeHandling_10;
	// Newtonsoft.Json.FloatFormatHandling Newtonsoft.Json.JsonWriter::_floatFormatHandling
	int32_t ____floatFormatHandling_11;
	// System.String Newtonsoft.Json.JsonWriter::_dateFormatString
	String_t* ____dateFormatString_12;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonWriter::_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ____culture_13;

public:
	inline static int32_t get_offset_of__stack_2() { return static_cast<int32_t>(offsetof(JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837, ____stack_2)); }
	inline List_1_t6DACBE605004C53E8318856EB2DE9594F643737D * get__stack_2() const { return ____stack_2; }
	inline List_1_t6DACBE605004C53E8318856EB2DE9594F643737D ** get_address_of__stack_2() { return &____stack_2; }
	inline void set__stack_2(List_1_t6DACBE605004C53E8318856EB2DE9594F643737D * value)
	{
		____stack_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stack_2), (void*)value);
	}

	inline static int32_t get_offset_of__currentPosition_3() { return static_cast<int32_t>(offsetof(JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837, ____currentPosition_3)); }
	inline JsonPosition_t09A563F9BD11F4E5C290F993945B9381A3C0ADCE  get__currentPosition_3() const { return ____currentPosition_3; }
	inline JsonPosition_t09A563F9BD11F4E5C290F993945B9381A3C0ADCE * get_address_of__currentPosition_3() { return &____currentPosition_3; }
	inline void set__currentPosition_3(JsonPosition_t09A563F9BD11F4E5C290F993945B9381A3C0ADCE  value)
	{
		____currentPosition_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____currentPosition_3))->___PropertyName_3), (void*)NULL);
	}

	inline static int32_t get_offset_of__currentState_4() { return static_cast<int32_t>(offsetof(JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837, ____currentState_4)); }
	inline int32_t get__currentState_4() const { return ____currentState_4; }
	inline int32_t* get_address_of__currentState_4() { return &____currentState_4; }
	inline void set__currentState_4(int32_t value)
	{
		____currentState_4 = value;
	}

	inline static int32_t get_offset_of__formatting_5() { return static_cast<int32_t>(offsetof(JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837, ____formatting_5)); }
	inline int32_t get__formatting_5() const { return ____formatting_5; }
	inline int32_t* get_address_of__formatting_5() { return &____formatting_5; }
	inline void set__formatting_5(int32_t value)
	{
		____formatting_5 = value;
	}

	inline static int32_t get_offset_of_U3CCloseOutputU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837, ___U3CCloseOutputU3Ek__BackingField_6)); }
	inline bool get_U3CCloseOutputU3Ek__BackingField_6() const { return ___U3CCloseOutputU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CCloseOutputU3Ek__BackingField_6() { return &___U3CCloseOutputU3Ek__BackingField_6; }
	inline void set_U3CCloseOutputU3Ek__BackingField_6(bool value)
	{
		___U3CCloseOutputU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CAutoCompleteOnCloseU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837, ___U3CAutoCompleteOnCloseU3Ek__BackingField_7)); }
	inline bool get_U3CAutoCompleteOnCloseU3Ek__BackingField_7() const { return ___U3CAutoCompleteOnCloseU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CAutoCompleteOnCloseU3Ek__BackingField_7() { return &___U3CAutoCompleteOnCloseU3Ek__BackingField_7; }
	inline void set_U3CAutoCompleteOnCloseU3Ek__BackingField_7(bool value)
	{
		___U3CAutoCompleteOnCloseU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of__dateFormatHandling_8() { return static_cast<int32_t>(offsetof(JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837, ____dateFormatHandling_8)); }
	inline int32_t get__dateFormatHandling_8() const { return ____dateFormatHandling_8; }
	inline int32_t* get_address_of__dateFormatHandling_8() { return &____dateFormatHandling_8; }
	inline void set__dateFormatHandling_8(int32_t value)
	{
		____dateFormatHandling_8 = value;
	}

	inline static int32_t get_offset_of__dateTimeZoneHandling_9() { return static_cast<int32_t>(offsetof(JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837, ____dateTimeZoneHandling_9)); }
	inline int32_t get__dateTimeZoneHandling_9() const { return ____dateTimeZoneHandling_9; }
	inline int32_t* get_address_of__dateTimeZoneHandling_9() { return &____dateTimeZoneHandling_9; }
	inline void set__dateTimeZoneHandling_9(int32_t value)
	{
		____dateTimeZoneHandling_9 = value;
	}

	inline static int32_t get_offset_of__stringEscapeHandling_10() { return static_cast<int32_t>(offsetof(JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837, ____stringEscapeHandling_10)); }
	inline int32_t get__stringEscapeHandling_10() const { return ____stringEscapeHandling_10; }
	inline int32_t* get_address_of__stringEscapeHandling_10() { return &____stringEscapeHandling_10; }
	inline void set__stringEscapeHandling_10(int32_t value)
	{
		____stringEscapeHandling_10 = value;
	}

	inline static int32_t get_offset_of__floatFormatHandling_11() { return static_cast<int32_t>(offsetof(JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837, ____floatFormatHandling_11)); }
	inline int32_t get__floatFormatHandling_11() const { return ____floatFormatHandling_11; }
	inline int32_t* get_address_of__floatFormatHandling_11() { return &____floatFormatHandling_11; }
	inline void set__floatFormatHandling_11(int32_t value)
	{
		____floatFormatHandling_11 = value;
	}

	inline static int32_t get_offset_of__dateFormatString_12() { return static_cast<int32_t>(offsetof(JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837, ____dateFormatString_12)); }
	inline String_t* get__dateFormatString_12() const { return ____dateFormatString_12; }
	inline String_t** get_address_of__dateFormatString_12() { return &____dateFormatString_12; }
	inline void set__dateFormatString_12(String_t* value)
	{
		____dateFormatString_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dateFormatString_12), (void*)value);
	}

	inline static int32_t get_offset_of__culture_13() { return static_cast<int32_t>(offsetof(JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837, ____culture_13)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get__culture_13() const { return ____culture_13; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of__culture_13() { return &____culture_13; }
	inline void set__culture_13(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		____culture_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____culture_13), (void*)value);
	}
};

struct JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837_StaticFields
{
public:
	// Newtonsoft.Json.JsonWriter/State[][] Newtonsoft.Json.JsonWriter::StateArray
	StateU5BU5DU5BU5D_tEB227CC230CCBA80854F02C5C7D6B4F430C1FE6B* ___StateArray_0;
	// Newtonsoft.Json.JsonWriter/State[][] Newtonsoft.Json.JsonWriter::StateArrayTempate
	StateU5BU5DU5BU5D_tEB227CC230CCBA80854F02C5C7D6B4F430C1FE6B* ___StateArrayTempate_1;

public:
	inline static int32_t get_offset_of_StateArray_0() { return static_cast<int32_t>(offsetof(JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837_StaticFields, ___StateArray_0)); }
	inline StateU5BU5DU5BU5D_tEB227CC230CCBA80854F02C5C7D6B4F430C1FE6B* get_StateArray_0() const { return ___StateArray_0; }
	inline StateU5BU5DU5BU5D_tEB227CC230CCBA80854F02C5C7D6B4F430C1FE6B** get_address_of_StateArray_0() { return &___StateArray_0; }
	inline void set_StateArray_0(StateU5BU5DU5BU5D_tEB227CC230CCBA80854F02C5C7D6B4F430C1FE6B* value)
	{
		___StateArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StateArray_0), (void*)value);
	}

	inline static int32_t get_offset_of_StateArrayTempate_1() { return static_cast<int32_t>(offsetof(JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837_StaticFields, ___StateArrayTempate_1)); }
	inline StateU5BU5DU5BU5D_tEB227CC230CCBA80854F02C5C7D6B4F430C1FE6B* get_StateArrayTempate_1() const { return ___StateArrayTempate_1; }
	inline StateU5BU5DU5BU5D_tEB227CC230CCBA80854F02C5C7D6B4F430C1FE6B** get_address_of_StateArrayTempate_1() { return &___StateArrayTempate_1; }
	inline void set_StateArrayTempate_1(StateU5BU5DU5BU5D_tEB227CC230CCBA80854F02C5C7D6B4F430C1FE6B* value)
	{
		___StateArrayTempate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StateArrayTempate_1), (void*)value);
	}
};


// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Reflection.TypeInfo
struct TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F  : public Type_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
// Newtonsoft.Json.JsonConverter[]
struct JsonConverterU5BU5D_t24875E5AE31553BA6031CA161A1E6AF7135FAE29  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) JsonConverter_t260CE65C2123A11522CAEFA058859D3E97145B0C * m_Items[1];

public:
	inline JsonConverter_t260CE65C2123A11522CAEFA058859D3E97145B0C * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline JsonConverter_t260CE65C2123A11522CAEFA058859D3E97145B0C ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, JsonConverter_t260CE65C2123A11522CAEFA058859D3E97145B0C * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline JsonConverter_t260CE65C2123A11522CAEFA058859D3E97145B0C * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline JsonConverter_t260CE65C2123A11522CAEFA058859D3E97145B0C ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, JsonConverter_t260CE65C2123A11522CAEFA058859D3E97145B0C * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_FirstOrDefault_TisRuntimeObject_mEA30C68B8D8C7D44DF6690A8FC79E4A48A09C6F9_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_mF670AD4C3F2685F0797E05C5491BC1841CEA9DBA_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::OfType<System.Object>(System.Collections.IEnumerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_OfType_TisRuntimeObject_m0D3DAECE3EDD779470DC0976C2C8D1F0CA799975_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * Enumerable_ToList_TisRuntimeObject_mA4E485F973C6DF746B8DB54CA6F54192D4231CA2_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m51DA29A5CB10D532C42135ADA3270F6E695B9364_gshared (RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method);
// T JsonSubTypes.JsonSubtypes::GetAttribute<System.Object>(System.Reflection.TypeInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonSubtypes_GetAttribute_TisRuntimeObject_m7DE434CD752F02276903A391C99669F55FCE0D41_gshared (TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * ___typeInfo0, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerable_FirstOrDefault_TisRuntimeObject_mEA8E5753D70A4AA5ABF983D5FE3BACC1537B3ECE_gshared (RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m63767C2AD1295D9C38EBAD72A237C0A5A3D18A71_gshared (Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisKeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625_TisRuntimeObject_mB1F02DF0E3FA4D927A1367A5E46D9B696BB5B208_gshared (RuntimeObject* ___source0, Func_2_t10CDF2C6D18EB51CBA3E607199613B198E2CFDFD * ___selector1, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Enumerable_ToArray_TisRuntimeObject_m21E15191FE8BDBAE753CC592A1DB55EA3BCE7B5B_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0_gshared (RuntimeObject* ___source0, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<T> JsonSubTypes.JsonSubtypes::GetAttributes<System.Object>(System.Reflection.TypeInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonSubtypes_GetAttributes_TisRuntimeObject_m04AE16C8131852ABF88D0F509DBC8C9228DCC4CF_gshared (TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * ___typeInfo0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<!!1,!!2> System.Linq.Enumerable::ToDictionary<System.Object,System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>,System.Func`2<!!0,!!2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * Enumerable_ToDictionary_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m895C30F2B572F5C68D7CDDF034D7D6511985CF7B_gshared (RuntimeObject* ___source0, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___keySelector1, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___elementSelector2, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> JsonSubTypes.NullableDictionary`2<System.Object,System.Object>::Entries()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NullableDictionary_2_Entries_m5AC2E2215419D9452A0E3DE6C34F95EEC33CA46A_gshared (NullableDictionary_2_t48DD4E457156C828152F770126E832F5E64B0806 * __this, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Any<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisKeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625_mF97C61ACA3233071C39AA4195A5603718AD18CF0_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// !!0 Newtonsoft.Json.Linq.Extensions::Value<System.Object>(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Extensions_Value_TisRuntimeObject_m5F641F820700791F4D2D4F596CA387D0CA3DEFE8_gshared (RuntimeObject* ___value0, const RuntimeMethod* method);
// System.Boolean JsonSubTypes.NullableDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NullableDictionary_2_TryGetValue_mB1AAC47768E994E6212C80361CDDE3D13957642D_gshared (NullableDictionary_2_t48DD4E457156C828152F770126E832F5E64B0806 * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<TKey> JsonSubTypes.NullableDictionary`2<System.Object,System.Object>::NotNullKeys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NullableDictionary_2_NotNullKeys_m4FDBF9CBA7DD9AF667749D68F3D260B701DBD146_gshared (NullableDictionary_2_t48DD4E457156C828152F770126E832F5E64B0806 * __this, const RuntimeMethod* method);
// System.Void JsonSubTypes.NullableDictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableDictionary_2__ctor_m1B8657E3D00D068558E3DE076173776073A2B5E6_gshared (NullableDictionary_2_t48DD4E457156C828152F770126E832F5E64B0806 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::ForEach(System.Action`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_m1C08725A39127C32D56B9E8A36D813F08D3BFF4D_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___action0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// System.Void JsonSubTypes.NullableDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullableDictionary_2_Add_m4FCB48F1ED8936038409C5DB9ACA4AA659E48CAE_gshared (NullableDictionary_2_t48DD4E457156C828152F770126E832F5E64B0806 * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);

// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverter__ctor_m0F891CB57D7A02A2A642A1716E55353364E372A1 (JsonConverter_t260CE65C2123A11522CAEFA058859D3E97145B0C * __this, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83 (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * __this, const RuntimeMethod* method);
// System.Object JsonSubTypes.JsonSubtypes::ReadJson(Newtonsoft.Json.JsonReader,System.Type,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonSubtypes_ReadJson_m28EA849C241312DECB7B9A21AB3494A83F5D79A3 (JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4 * __this, JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * ___reader0, Type_t * ___objectType1, JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC * ___serializer2, const RuntimeMethod* method);
// System.Object JsonSubTypes.JsonSubtypes::ReadObject(Newtonsoft.Json.JsonReader,System.Type,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonSubtypes_ReadObject_mC967E32CAB49F66704C43C16F68CDD9BF61BF5C9 (JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4 * __this, JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * ___reader0, Type_t * ___objectType1, JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC * ___serializer2, const RuntimeMethod* method);
// System.Type JsonSubTypes.JsonSubtypes::GetElementType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * JsonSubtypes_GetElementType_m71F5DDD5937238795DDAF695FE9DD488F381132F (Type_t * ___arrayOrGenericContainer0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// Newtonsoft.Json.JsonReaderException JsonSubTypes.JsonSubtypes::CreateJsonReaderException(Newtonsoft.Json.JsonReader,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonReaderException_tD145419BFB4715FDFEAF3FA5619AAB84900BCEE9 * JsonSubtypes_CreateJsonReaderException_m50E975A2CF049C98B55F0F9303E5BE58968402C5 (JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * ___reader0, String_t* ___message1, const RuntimeMethod* method);
// System.Collections.IList JsonSubTypes.JsonSubtypes::ReadArray(Newtonsoft.Json.JsonReader,System.Type,System.Type,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonSubtypes_ReadArray_mC9767057A29A9ED1370002E1C6D2CC694404AD1F (JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4 * __this, JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * ___reader0, Type_t * ___targetType1, Type_t * ___elementType2, JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC * ___serializer3, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonReaderException::.ctor(System.String,System.String,System.Int32,System.Int32,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReaderException__ctor_m5C5982BC2E2A6C559F9B99DC3A91B888CDC81D1A (JsonReaderException_tD145419BFB4715FDFEAF3FA5619AAB84900BCEE9 * __this, String_t* ___message0, String_t* ___path1, int32_t ___lineNumber2, int32_t ___linePosition3, Exception_t * ___innerException4, const RuntimeMethod* method);
// System.Collections.IList JsonSubTypes.JsonSubtypes::CreateCompatibleList(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonSubtypes_CreateCompatibleList_m2E57901E216AD1D89F09E3E96D154C8CC63DB00D (Type_t * ___targetContainerType0, Type_t * ___elementType1, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsArray_m15FE83DD8FAF090F9BDA924753C7750AAEA7CFD1 (Type_t * __this, const RuntimeMethod* method);
// System.Array System.Array::CreateInstance(System.Type,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray * Array_CreateInstance_m57AC02F4475AF70CA317B48F09B3C29E3BA9C046 (Type_t * ___elementType0, int32_t ___length1, const RuntimeMethod* method);
// System.Reflection.TypeInfo JsonSubTypes.JsonSubtypes::ToTypeInfo(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * JsonSubtypes_ToTypeInfo_mE898F929B019AED4916DE6D528B98E31DB45EE87 (Type_t * ___type0, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsAbstract()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsAbstract_mB16DB56FCABF55740019D32C5286F38E30CAA19F (Type_t * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Activator_CreateInstance_m1BACAB5F4FBF138CCCB537DDCB0683A2AC064295 (Type_t * ___type0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Type> JsonSubTypes.JsonSubtypes::GetGenericTypeArguments(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonSubtypes_GetGenericTypeArguments_m310DC9E08EB641E50FCCE1C3A7D1D03D5B1734AE (Type_t * ___type0, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::FirstOrDefault<System.Type>(System.Collections.Generic.IEnumerable`1<!!0>)
inline Type_t * Enumerable_FirstOrDefault_TisType_t_mB2DD58F1158C4877353C4DF1F486FC9D97794727 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  Type_t * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_mEA30C68B8D8C7D44DF6690A8FC79E4A48A09C6F9_gshared)(___source0, method);
}
// Newtonsoft.Json.DateParseHandling Newtonsoft.Json.JsonReader::get_DateParseHandling()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JsonReader_get_DateParseHandling_mF422D438E94AC6ECBDA3B003C5405CCBE57528E2_inline (JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonReader::set_DateParseHandling(Newtonsoft.Json.DateParseHandling)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_set_DateParseHandling_m48E46FBFC050DD90F2C17021D991B0F1BC08F4D2 (JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * __this, int32_t ___value0, const RuntimeMethod* method);
// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject::Load(Newtonsoft.Json.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8 * JObject_Load_mC4E62B1BE14751785091102661D30E9A5D57ACBF (JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * ___reader0, const RuntimeMethod* method);
// System.Type JsonSubTypes.JsonSubtypes::GetType(Newtonsoft.Json.Linq.JObject,System.Type,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * JsonSubtypes_GetType_m05C280EB6A1FCD06701601B09677AC26C81847C9 (JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4 * __this, JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8 * ___jObject0, Type_t * ___parentType1, JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC * ___serializer2, const RuntimeMethod* method);
// System.Object JsonSubTypes.JsonSubtypes::ThreadStaticReadObject(Newtonsoft.Json.JsonReader,Newtonsoft.Json.JsonSerializer,Newtonsoft.Json.Linq.JToken,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonSubtypes_ThreadStaticReadObject_mFE3B1521B5F9C242DF013D451B8D75DB3AE32317 (JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * ___reader0, JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC * ___serializer1, JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * ___jToken2, Type_t * ___targetType3, const RuntimeMethod* method);
// Newtonsoft.Json.JsonReader Newtonsoft.Json.Linq.JToken::CreateReader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * JToken_CreateReader_mCB39AC119C8F51739A452FC1EBD5033859126C8D (JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * __this, const RuntimeMethod* method);
// System.Globalization.CultureInfo Newtonsoft.Json.JsonReader::get_Culture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * JsonReader_get_Culture_m0D8D60F9555820CBDD0EA6DB79A19832B768C0A7 (JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonReader::set_Culture(System.Globalization.CultureInfo)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonReader_set_Culture_m72501B521C798BF8471597849D8A71EDB4233D40_inline (JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * __this, CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___value0, const RuntimeMethod* method);
// System.Boolean Newtonsoft.Json.JsonReader::get_CloseInput()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool JsonReader_get_CloseInput_m4E97DD4479BA1637A5CAE6A8412E486467E12E4F_inline (JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonReader::set_CloseInput(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonReader_set_CloseInput_m59E6A4B54731C471D0AD20D08ACDE1C5C1A15842_inline (JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Newtonsoft.Json.JsonReader::get_SupportMultipleContent()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool JsonReader_get_SupportMultipleContent_m4311AF519DDFE110E151E676E6800931ABA26330_inline (JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonReader::set_SupportMultipleContent(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonReader_set_SupportMultipleContent_mD31D798CB17EB9A111C9BC1D641686B3551FEFE9_inline (JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * __this, bool ___value0, const RuntimeMethod* method);
// Newtonsoft.Json.DateTimeZoneHandling Newtonsoft.Json.JsonReader::get_DateTimeZoneHandling()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JsonReader_get_DateTimeZoneHandling_mD6578854A0145CE2B98135A52C7AE9944CB0D939_inline (JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonReader::set_DateTimeZoneHandling(Newtonsoft.Json.DateTimeZoneHandling)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_set_DateTimeZoneHandling_m27D11C9ECDA3331E0B2D8B52D4084865B0E65F7D (JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * __this, int32_t ___value0, const RuntimeMethod* method);
// Newtonsoft.Json.FloatParseHandling Newtonsoft.Json.JsonReader::get_FloatParseHandling()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JsonReader_get_FloatParseHandling_mED93805A7BD69A092506D6097872BD41BD0C7924_inline (JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonReader::set_FloatParseHandling(Newtonsoft.Json.FloatParseHandling)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_set_FloatParseHandling_mD4F61F9EB6E8C14E8D2E9ADC7D511A04C136B443 (JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * __this, int32_t ___value0, const RuntimeMethod* method);
// System.String Newtonsoft.Json.JsonReader::get_DateFormatString()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* JsonReader_get_DateFormatString_mAA0F7630A255C54855B5424CDFD0B92A4325441B_inline (JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonReader::set_DateFormatString(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonReader_set_DateFormatString_m3DCCBB52BB532AE46C787B835D31AB17DCE61506_inline (JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Type JsonSubTypes.JsonSubtypes::GetTypeByPropertyPresence(Newtonsoft.Json.Linq.JObject,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * JsonSubtypes_GetTypeByPropertyPresence_m79015646E09B9E54900891C78BF7192860910EFE (JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4 * __this, JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8 * ___jObject0, Type_t * ___parentType1, const RuntimeMethod* method);
// System.Type JsonSubTypes.JsonSubtypes::GetTypeFromDiscriminatorValue(Newtonsoft.Json.Linq.JObject,System.Type,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * JsonSubtypes_GetTypeFromDiscriminatorValue_m07849A070D7C7EDB93A62A9D68B9535F2315C15C (JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4 * __this, JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8 * ___jObject0, Type_t * ___parentType1, JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC * ___serializer2, const RuntimeMethod* method);
// System.Void JsonSubTypes.JsonSubtypes/<>c__DisplayClass23_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass23_0__ctor_m1F889D65807EE7F738093FFBA5B2277AE619A802 (U3CU3Ec__DisplayClass23_0_tA905FBA00BBA22CE5D672BEACB7C7ED33BE3F2A3 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Type>::.ctor()
inline void HashSet_1__ctor_mBBBBEE148ED492271216D211619EBA1D2756289D (HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 *, const RuntimeMethod*))HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Type>::Add(!0)
inline bool HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6 (HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * __this, Type_t * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 *, Type_t *, const RuntimeMethod*))HashSet_1_Add_mF670AD4C3F2685F0797E05C5491BC1841CEA9DBA_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::OfType<JsonSubTypes.JsonSubtypesByDiscriminatorValueConverter>(System.Collections.IEnumerable)
inline RuntimeObject* Enumerable_OfType_TisJsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853_mE30F9B6BF5A2AE5CDE989382A1BF3D309658BA81 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_OfType_TisRuntimeObject_m0D3DAECE3EDD779470DC0976C2C8D1F0CA799975_gshared)(___source0, method);
}
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<JsonSubTypes.JsonSubtypesByDiscriminatorValueConverter>(System.Collections.Generic.IEnumerable`1<!!0>)
inline List_1_t3381511022A933569C3B6A79D93B1A10A00A913B * Enumerable_ToList_TisJsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853_mADDC3921AC4FBFF36A94E48033CD7A2EE761F7E9 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t3381511022A933569C3B6A79D93B1A10A00A913B * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_mA4E485F973C6DF746B8DB54CA6F54192D4231CA2_gshared)(___source0, method);
}
// System.Type JsonSubTypes.JsonSubtypes::ResolveType(Newtonsoft.Json.Linq.JObject,System.Type,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * JsonSubtypes_ResolveType_mE7151FA3FF9B72FDD910A4E66E5187421E01350A (JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4 * __this, JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8 * ___jObject0, Type_t * ___parentType1, JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC * ___serializer2, const RuntimeMethod* method);
// System.Void System.Func`2<JsonSubTypes.JsonSubtypesByDiscriminatorValueConverter,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m3304F42F8D57CFFAC96E4F1928E96F4447DC092A (Func_2_t730F7242228FC0DF9F03C53B2BFA811A34990645 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t730F7242228FC0DF9F03C53B2BFA811A34990645 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<JsonSubTypes.JsonSubtypesByDiscriminatorValueConverter>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisJsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853_mA5F05E5C17834E83645D0D677E4B4BB31954346C (RuntimeObject* ___source0, Func_2_t730F7242228FC0DF9F03C53B2BFA811A34990645 * ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t730F7242228FC0DF9F03C53B2BFA811A34990645 *, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m51DA29A5CB10D532C42135ADA3270F6E695B9364_gshared)(___source0, ___predicate1, method);
}
// JsonSubTypes.JsonSubtypes JsonSubTypes.JsonSubtypes::GetTypeResolver(System.Reflection.TypeInfo,System.Collections.Generic.IEnumerable`1<JsonSubTypes.JsonSubtypesByDiscriminatorValueConverter>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4 * JsonSubtypes_GetTypeResolver_m71E06EB2923B24821DD996C21285D390CF95384C (JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4 * __this, TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * ___targetType0, RuntimeObject* ___jsonConverterCollection1, const RuntimeMethod* method);
// System.Void JsonSubTypes.JsonSubtypes/<>c__DisplayClass24_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0__ctor_m29283974DAC84AE4149FF9399A38EA06F45D8610 (U3CU3Ec__DisplayClass24_0_tA1025D3D9F5804E66668EE0EF431E16B1287165F * __this, const RuntimeMethod* method);
// T JsonSubTypes.JsonSubtypes::GetAttribute<Newtonsoft.Json.JsonConverterAttribute>(System.Reflection.TypeInfo)
inline JsonConverterAttribute_t76C9BFA5F1F70135FB27B3509C9B077A8F4719FC * JsonSubtypes_GetAttribute_TisJsonConverterAttribute_t76C9BFA5F1F70135FB27B3509C9B077A8F4719FC_mDEC49C0C7AAF5EF82F9A0ED2976643800142B2BD (TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * ___typeInfo0, const RuntimeMethod* method)
{
	return ((  JsonConverterAttribute_t76C9BFA5F1F70135FB27B3509C9B077A8F4719FC * (*) (TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F *, const RuntimeMethod*))JsonSubtypes_GetAttribute_TisRuntimeObject_m7DE434CD752F02276903A391C99669F55FCE0D41_gshared)(___typeInfo0, method);
}
// System.Type Newtonsoft.Json.JsonConverterAttribute::get_ConverterType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * JsonConverterAttribute_get_ConverterType_m4675E9898C076AAD602C5B4BCE5F16709E757D06_inline (JsonConverterAttribute_t76C9BFA5F1F70135FB27B3509C9B077A8F4719FC * __this, const RuntimeMethod* method);
// System.Object[] Newtonsoft.Json.JsonConverterAttribute::get_ConverterParameters()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* JsonConverterAttribute_get_ConverterParameters_m83432CF6F070523D66CEE0941AB4945DE855EDD2_inline (JsonConverterAttribute_t76C9BFA5F1F70135FB27B3509C9B077A8F4719FC * __this, const RuntimeMethod* method);
// System.Object System.Activator::CreateInstance(System.Type,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Activator_CreateInstance_mF3E09E8AC19EE563314B326117091D4B9CC918C1 (Type_t * ___type0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !!0 System.Linq.Enumerable::FirstOrDefault<JsonSubTypes.JsonSubtypesByDiscriminatorValueConverter>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline JsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853 * Enumerable_FirstOrDefault_TisJsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853_m092BD88F892987A985C778FC166535873C9DDFFA (RuntimeObject* ___source0, Func_2_t730F7242228FC0DF9F03C53B2BFA811A34990645 * ___predicate1, const RuntimeMethod* method)
{
	return ((  JsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853 * (*) (RuntimeObject*, Func_2_t730F7242228FC0DF9F03C53B2BFA811A34990645 *, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_mEA8E5753D70A4AA5ABF983D5FE3BACC1537B3ECE_gshared)(___source0, ___predicate1, method);
}
// System.Void JsonSubTypes.JsonSubtypes/<>c__DisplayClass25_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_0__ctor_mA699481CF1250FA52CA5E1812C7061357AF16ED4 (U3CU3Ec__DisplayClass25_0_tDB74EF4E3450B203DF6EC1454F1B849A0330B7CF * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Type>,System.Type>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mCF05B1445990167FFD40667A8EB11E4E92AC29A0 (Func_2_t1C35530CDCF3ACBB02D9C76B9BB986AED1FC59E6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t1C35530CDCF3ACBB02D9C76B9BB986AED1FC59E6 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_m63767C2AD1295D9C38EBAD72A237C0A5A3D18A71_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Collections.Generic.KeyValuePair`2<System.String,System.Type>,System.Type>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisKeyValuePair_2_t822BECCD5A164069D108533DCA1726AD40B884C0_TisType_t_m8C26F17C0C13904B212974AEFBA5D20D1EEDE3CB (RuntimeObject* ___source0, Func_2_t1C35530CDCF3ACBB02D9C76B9BB986AED1FC59E6 * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t1C35530CDCF3ACBB02D9C76B9BB986AED1FC59E6 *, const RuntimeMethod*))Enumerable_Select_TisKeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625_TisRuntimeObject_mB1F02DF0E3FA4D927A1367A5E46D9B696BB5B208_gshared)(___source0, ___selector1, method);
}
// System.Void System.Func`2<System.Type,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mF99B731B7FE71291198AC579A27977DAFAEE528D (Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Where<System.Type>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisType_t_m2A0B85DA7F086A9F38AE3CBF6F6DB181B2A86753 (RuntimeObject* ___source0, Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 *, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m51DA29A5CB10D532C42135ADA3270F6E695B9364_gshared)(___source0, ___predicate1, method);
}
// !!0[] System.Linq.Enumerable::ToArray<System.Type>(System.Collections.Generic.IEnumerable`1<!!0>)
inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* Enumerable_ToArray_TisType_t_mDB744C25D97BD49BD70979DC17395D271EA84945 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m21E15191FE8BDBAE753CC592A1DB55EA3BCE7B5B_gshared)(___source0, method);
}
// System.Void System.Func`2<System.Type,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mFA4D07ACD59A136F95C11D733F49418F83C412E1 (Func_2_tDF003B4E413360CAD0A9CA579A84B2BF683EA1B0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tDF003B4E413360CAD0A9CA579A84B2BF683EA1B0 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Type,System.String>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisType_t_TisString_t_m97718737E55EA7B887B064378F8AC1F4004288C0 (RuntimeObject* ___source0, Func_2_tDF003B4E413360CAD0A9CA579A84B2BF683EA1B0 * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tDF003B4E413360CAD0A9CA579A84B2BF683EA1B0 *, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0_gshared)(___source0, ___selector1, method);
}
// !!0[] System.Linq.Enumerable::ToArray<System.String>(System.Collections.Generic.IEnumerable`1<!!0>)
inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m21E15191FE8BDBAE753CC592A1DB55EA3BCE7B5B_gshared)(___source0, method);
}
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m8846EB11F0A221BDE237DE041D17764B36065404 (String_t* ___separator0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value1, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonSerializationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializationException__ctor_m6D353251D7B8D14EE23FFB76959E77EDC7B5244C (JsonSerializationException_tCD1256C587B4859A1B7964BD0578C27A6D58580F * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<T> JsonSubTypes.JsonSubtypes::GetAttributes<JsonSubTypes.JsonSubtypes/KnownSubTypeWithPropertyAttribute>(System.Reflection.TypeInfo)
inline RuntimeObject* JsonSubtypes_GetAttributes_TisKnownSubTypeWithPropertyAttribute_tA28E5B138A0E2B81AF25B9E22AC022F06C0B66E6_mE498F3775184DDA3BCB3B9009D71F3AC0B94B69A (TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * ___typeInfo0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F *, const RuntimeMethod*))JsonSubtypes_GetAttributes_TisRuntimeObject_m04AE16C8131852ABF88D0F509DBC8C9228DCC4CF_gshared)(___typeInfo0, method);
}
// System.Void System.Func`2<JsonSubTypes.JsonSubtypes/KnownSubTypeWithPropertyAttribute,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mB89D1CB7F8A8352C0535D7F33D51230F6126B8CE (Func_2_tC377CCFD1AED4841503E2E5EF83D750C62EF9178 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tC377CCFD1AED4841503E2E5EF83D750C62EF9178 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Func`2<JsonSubTypes.JsonSubtypes/KnownSubTypeWithPropertyAttribute,System.Type>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mB243E00437C804A3495C0CC3630B9CD4C126B05D (Func_2_t1D63FDB698C10A9D955F8E78C2AD44F3A8B89F8E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t1D63FDB698C10A9D955F8E78C2AD44F3A8B89F8E *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.Dictionary`2<!!1,!!2> System.Linq.Enumerable::ToDictionary<JsonSubTypes.JsonSubtypes/KnownSubTypeWithPropertyAttribute,System.String,System.Type>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>,System.Func`2<!!0,!!2>)
inline Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * Enumerable_ToDictionary_TisKnownSubTypeWithPropertyAttribute_tA28E5B138A0E2B81AF25B9E22AC022F06C0B66E6_TisString_t_TisType_t_m3EB08A14C459906E4D2434CB748921964429E66C (RuntimeObject* ___source0, Func_2_tC377CCFD1AED4841503E2E5EF83D750C62EF9178 * ___keySelector1, Func_2_t1D63FDB698C10A9D955F8E78C2AD44F3A8B89F8E * ___elementSelector2, const RuntimeMethod* method)
{
	return ((  Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * (*) (RuntimeObject*, Func_2_tC377CCFD1AED4841503E2E5EF83D750C62EF9178 *, Func_2_t1D63FDB698C10A9D955F8E78C2AD44F3A8B89F8E *, const RuntimeMethod*))Enumerable_ToDictionary_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_m895C30F2B572F5C68D7CDDF034D7D6511985CF7B_gshared)(___source0, ___keySelector1, ___elementSelector2, method);
}
// System.Boolean JsonSubTypes.JsonSubtypes::TryGetValueInJson(System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Linq.JToken>,System.String,Newtonsoft.Json.Linq.JToken&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonSubtypes_TryGetValueInJson_m62712164F1CBA2FB76B2EE98BC2746C6334B2CA6 (RuntimeObject* ___jObject0, String_t* ___propertyName1, JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 ** ___value2, const RuntimeMethod* method);
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::SelectToken(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * JToken_SelectToken_mD5A623B4FE39A4DF7DF88CB8231AD9C2796BFC55 (JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * __this, String_t* ___path0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> JsonSubTypes.NullableDictionary`2<System.Object,System.Type>::Entries()
inline RuntimeObject* NullableDictionary_2_Entries_m1373B6035D2560449A03D9567482ADC45CA3D5F8 (NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8 *, const RuntimeMethod*))NullableDictionary_2_Entries_m5AC2E2215419D9452A0E3DE6C34F95EEC33CA46A_gshared)(__this, method);
}
// System.Boolean System.Linq.Enumerable::Any<System.Collections.Generic.KeyValuePair`2<System.Object,System.Type>>(System.Collections.Generic.IEnumerable`1<!!0>)
inline bool Enumerable_Any_TisKeyValuePair_2_t09B898DA045563F8551DEEE3ECB9C13FE8A3B848_m147F25510D29A7C51050904CD1F82FD54A8EFA37 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Any_TisKeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625_mF97C61ACA3233071C39AA4195A5603718AD18CF0_gshared)(___source0, method);
}
// System.Type JsonSubTypes.JsonSubtypes::GetTypeFromMapping(JsonSubTypes.NullableDictionary`2<System.Object,System.Type>,Newtonsoft.Json.Linq.JToken,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * JsonSubtypes_GetTypeFromMapping_mD1186BB788F61DBA424BC028CCD1568B2E15F605 (NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8 * ___typeMapping0, JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * ___discriminatorToken1, JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC * ___serializer2, const RuntimeMethod* method);
// !!0 Newtonsoft.Json.Linq.Extensions::Value<System.String>(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>)
inline String_t* Extensions_Value_TisString_t_mF276B63B3362CB4D0E573470017E6BA9C4A340EC (RuntimeObject* ___value0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (RuntimeObject*, const RuntimeMethod*))Extensions_Value_TisRuntimeObject_m5F641F820700791F4D2D4F596CA387D0CA3DEFE8_gshared)(___value0, method);
}
// System.Type JsonSubTypes.JsonSubtypes::GetTypeByName(System.String,System.Reflection.TypeInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * JsonSubtypes_GetTypeByName_m6CEDE0469033160C6D3DDB9BC9099ABE95ACE4CF (String_t* ___typeName0, TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * ___parentType1, const RuntimeMethod* method);
// System.Void JsonSubTypes.JsonSubtypes/<>c__DisplayClass28_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass28_0__ctor_mB318F80F71A5BBD0196012688B362796BA0EB001 (U3CU3Ec__DisplayClass28_0_tE397A4ADABB2E0976C05631A9386321280C595E0 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.String,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m6397C103AFDCE68F75EDF44FB493A9B6651F7AFE (Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared)(__this, ___object0, ___method1, method);
}
// !!0 System.Linq.Enumerable::FirstOrDefault<System.String>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline String_t* Enumerable_FirstOrDefault_TisString_t_m7B8EA6803D4985135A95AE73079A935FCAAAEF5A (RuntimeObject* ___source0, Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * ___predicate1, const RuntimeMethod* method)
{
	return ((  String_t* (*) (RuntimeObject*, Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D *, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_mEA8E5753D70A4AA5ABF983D5FE3BACC1537B3ECE_gshared)(___source0, ___predicate1, method);
}
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Boolean JsonSubTypes.NullableDictionary`2<System.Object,System.Type>::TryGetValue(TKey,TValue&)
inline bool NullableDictionary_2_TryGetValue_mB550CABEB309B59624BBE09D6232C14262AE58F2 (NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8 * __this, RuntimeObject * ___key0, Type_t ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8 *, RuntimeObject *, Type_t **, const RuntimeMethod*))NullableDictionary_2_TryGetValue_mB1AAC47768E994E6212C80361CDDE3D13957642D_gshared)(__this, ___key0, ___value1, method);
}
// System.Collections.Generic.IEnumerable`1<TKey> JsonSubTypes.NullableDictionary`2<System.Object,System.Type>::NotNullKeys()
inline RuntimeObject* NullableDictionary_2_NotNullKeys_m9EB12FC9BC4B0D446303D917A31AD1DC15EC9C98 (NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8 *, const RuntimeMethod*))NullableDictionary_2_NotNullKeys_m4FDBF9CBA7DD9AF667749D68F3D260B701DBD146_gshared)(__this, method);
}
// !!0 System.Linq.Enumerable::FirstOrDefault<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
inline RuntimeObject * Enumerable_FirstOrDefault_TisRuntimeObject_mEA30C68B8D8C7D44DF6690A8FC79E4A48A09C6F9 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_mEA30C68B8D8C7D44DF6690A8FC79E4A48A09C6F9_gshared)(___source0, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Object Newtonsoft.Json.Linq.JToken::ToObject(System.Type,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JToken_ToObject_m7745504A80062CEC04C90EBD88AD858A32034E4E (JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * __this, Type_t * ___objectType0, JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC * ___jsonSerializer1, const RuntimeMethod* method);
// System.Void JsonSubTypes.JsonSubtypes/<>c__DisplayClass31_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0__ctor_m47CFC45F64B38A227C05B56DA7831675037E07C0 (U3CU3Ec__DisplayClass31_0_tFB5FD3375CFA525D6A3C082C48885B21B357269D * __this, const RuntimeMethod* method);
// System.Void JsonSubTypes.NullableDictionary`2<System.Object,System.Type>::.ctor()
inline void NullableDictionary_2__ctor_m911DC45EF73D28298A2CCDBD776EA97593031A16 (NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8 * __this, const RuntimeMethod* method)
{
	((  void (*) (NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8 *, const RuntimeMethod*))NullableDictionary_2__ctor_m1B8657E3D00D068558E3DE076173776073A2B5E6_gshared)(__this, method);
}
// System.Collections.Generic.IEnumerable`1<T> JsonSubTypes.JsonSubtypes::GetAttributes<JsonSubTypes.JsonSubtypes/KnownSubTypeAttribute>(System.Reflection.TypeInfo)
inline RuntimeObject* JsonSubtypes_GetAttributes_TisKnownSubTypeAttribute_t9F1D658B2418F6AC43CE9F59F0B40A033A2F24B2_m77AD5CCF01E3B4B56626A47AB49433953A18E827 (TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * ___typeInfo0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F *, const RuntimeMethod*))JsonSubtypes_GetAttributes_TisRuntimeObject_m04AE16C8131852ABF88D0F509DBC8C9228DCC4CF_gshared)(___typeInfo0, method);
}
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<JsonSubTypes.JsonSubtypes/KnownSubTypeAttribute>(System.Collections.Generic.IEnumerable`1<!!0>)
inline List_1_t54E8B43F818D5A55F0F00B5979B13581ADB54A69 * Enumerable_ToList_TisKnownSubTypeAttribute_t9F1D658B2418F6AC43CE9F59F0B40A033A2F24B2_mB28DAD81A8A151DB730A385B27644BBF269F42CA (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t54E8B43F818D5A55F0F00B5979B13581ADB54A69 * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_mA4E485F973C6DF746B8DB54CA6F54192D4231CA2_gshared)(___source0, method);
}
// System.Void System.Action`1<JsonSubTypes.JsonSubtypes/KnownSubTypeAttribute>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m9C7E36700B647739E5A876CDAE9BFF37F1B9E2FF (Action_1_t16E63DAA551CE22F4B70EED70C9A0278938A91A1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t16E63DAA551CE22F4B70EED70C9A0278938A91A1 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Collections.Generic.List`1<JsonSubTypes.JsonSubtypes/KnownSubTypeAttribute>::ForEach(System.Action`1<!0>)
inline void List_1_ForEach_m826A41C00AEE484880924ADD95D67A51D8014DAB (List_1_t54E8B43F818D5A55F0F00B5979B13581ADB54A69 * __this, Action_1_t16E63DAA551CE22F4B70EED70C9A0278938A91A1 * ___action0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t54E8B43F818D5A55F0F00B5979B13581ADB54A69 *, Action_1_t16E63DAA551CE22F4B70EED70C9A0278938A91A1 *, const RuntimeMethod*))List_1_ForEach_m1C08725A39127C32D56B9E8A36D813F08D3BFF4D_gshared)(__this, ___action0, method);
}
// T JsonSubTypes.JsonSubtypes::GetAttribute<JsonSubTypes.JsonSubtypes/FallBackSubTypeAttribute>(System.Reflection.TypeInfo)
inline FallBackSubTypeAttribute_t1E7D5E7E674A152BD622622E7C81DB8AE432DE29 * JsonSubtypes_GetAttribute_TisFallBackSubTypeAttribute_t1E7D5E7E674A152BD622622E7C81DB8AE432DE29_mCEB970FD2FED1BE4051B54418EDBA9EC837EE532 (TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * ___typeInfo0, const RuntimeMethod* method)
{
	return ((  FallBackSubTypeAttribute_t1E7D5E7E674A152BD622622E7C81DB8AE432DE29 * (*) (TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F *, const RuntimeMethod*))JsonSubtypes_GetAttribute_TisRuntimeObject_m7DE434CD752F02276903A391C99669F55FCE0D41_gshared)(___typeInfo0, method);
}
// System.Type JsonSubTypes.JsonSubtypes/FallBackSubTypeAttribute::get_SubType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * FallBackSubTypeAttribute_get_SubType_mA05E90E196E5CE4A0FD5EE01D0817A4BB0727FE0_inline (FallBackSubTypeAttribute_t1E7D5E7E674A152BD622622E7C81DB8AE432DE29 * __this, const RuntimeMethod* method);
// Newtonsoft.Json.JsonReader JsonSubTypes.JsonSubtypes::CreateAnotherReader(Newtonsoft.Json.Linq.JToken,Newtonsoft.Json.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * JsonSubtypes_CreateAnotherReader_m0E15E0ED15081F285C54C4B669380CD2BD6C56BB (JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * ___jToken0, JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * ___reader1, const RuntimeMethod* method);
// System.Object Newtonsoft.Json.JsonSerializer::Deserialize(Newtonsoft.Json.JsonReader,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonSerializer_Deserialize_m691C77B3EAEFB80FE728CEF0630C872A642A11B9 (JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC * __this, JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * ___reader0, Type_t * ___objectType1, const RuntimeMethod* method);
// System.Reflection.TypeInfo System.Reflection.IntrospectionExtensions::GetTypeInfo(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * IntrospectionExtensions_GetTypeInfo_m77034F8576BE695819427C13103C591277C1B636 (Type_t * ___type0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Object>::.ctor()
inline void Dictionary_2__ctor_mEA9AEC3D1E0DD8B5AC3FA4CBAB6B18FE81AD1C62 (Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void JsonSubTypes.JsonSubtypesConverter::.ctor(System.Type,System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSubtypesConverter__ctor_mDE2C494F61AF0CAB10E2C944F7376B67FE615E40 (JsonSubtypesConverter_t302C3D0C47335B3E29817D6E1E015D8738DD85D5 * __this, Type_t * ___baseType0, String_t* ___jsonDiscriminatorPropertyName1, Type_t * ___fallbackType2, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Type>::get_Value()
inline Type_t * KeyValuePair_2_get_Value_m09696F43305A4C5A4AB97511A7C41E1F33D7AFA8_inline (KeyValuePair_2_t09B898DA045563F8551DEEE3ECB9C13FE8A3B848 * __this, const RuntimeMethod* method)
{
	return ((  Type_t * (*) (KeyValuePair_2_t09B898DA045563F8551DEEE3ECB9C13FE8A3B848 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Object>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_mF7D1ADCFEC50BD3A57750E4C3097E3859C5758A2 (Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * __this, Type_t * ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE *, Type_t *, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Type>::get_Key()
inline RuntimeObject * KeyValuePair_2_get_Key_m371533B30F2A214A38A5F97C0C77A32950948F1B_inline (KeyValuePair_2_t09B898DA045563F8551DEEE3ECB9C13FE8A3B848 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (KeyValuePair_2_t09B898DA045563F8551DEEE3ECB9C13FE8A3B848 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Object>::Add(!0,!1)
inline void Dictionary_2_Add_m99062862FEE98206F053E41E6C6882126164CDC9 (Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * __this, Type_t * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE *, Type_t *, RuntimeObject *, const RuntimeMethod*))Dictionary_2_Add_m830DC29CD6F7128D4990D460CCCDE032E3B693D9_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean JsonSubTypes.JsonSubtypesConverter::CanConvert(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonSubtypesConverter_CanConvert_m0ADC5B32B9B0E7AA8D9172569B9B1D9C0B4F0472 (JsonSubtypesConverter_t302C3D0C47335B3E29817D6E1E015D8738DD85D5 * __this, Type_t * ___objectType0, const RuntimeMethod* method);
// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject::FromObject(System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8 * JObject_FromObject_m6CA6D17390A41FDA6B3D3F1422408D777A2C303C (RuntimeObject * ___o0, JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC * ___jsonSerializer1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,System.Object>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m9983D0130915B8182215B7C9B3D3A7D84FABB77F (Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * __this, Type_t * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE *, Type_t *, RuntimeObject **, const RuntimeMethod*))Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared)(__this, ___key0, ___value1, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::FromObject(System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * JToken_FromObject_m9BE8E255610F8712671AABA5A1A212B74FE3BE76 (RuntimeObject * ___o0, JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC * ___jsonSerializer1, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JProperty::.ctor(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JProperty__ctor_m96D6E425930B25EDA7C4CDFBA359579D07F85601 (JProperty_t6B592BFC6895980207CC8356187EB1D0328A328E * __this, String_t* ___name0, RuntimeObject * ___content1, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JContainer::AddFirst(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JContainer_AddFirst_mAAE9E08AF5B74A49AC9A2E7439B92DF58E41DF88 (JContainer_t2C3C8C45F5133A6C8C6AF3C1ED0AA30201627527 * __this, RuntimeObject * ___content0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JObject::Add(System.String,Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JObject_Add_m8882BAAB7D02945BB16A30F46911277191FE3136 (JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8 * __this, String_t* ___propertyName0, JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * ___value1, const RuntimeMethod* method);
// !!0[] System.Array::Empty<Newtonsoft.Json.JsonConverter>()
inline JsonConverterU5BU5D_t24875E5AE31553BA6031CA161A1E6AF7135FAE29* Array_Empty_TisJsonConverter_t260CE65C2123A11522CAEFA058859D3E97145B0C_m7CD7096E4885614B731E41F9185DE7AB393238D6_inline (const RuntimeMethod* method)
{
	return ((  JsonConverterU5BU5D_t24875E5AE31553BA6031CA161A1E6AF7135FAE29* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// System.Void JsonSubTypes.JsonSubtypes::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSubtypes__ctor_mD9543DD4D5BD0562AFC51A61A7F0C4012B2A472D (JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4 * __this, String_t* ___jsonDiscriminatorPropertyName0, const RuntimeMethod* method);
// System.Void JsonSubTypes.JsonSubtypesConverterBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSubtypesConverterBuilder__ctor_m4AA848C73D7484EDE860BBCD6C7967FCFD5AFE17 (JsonSubtypesConverterBuilder_tF39D5EDB289B7C600A98959FBC9A68E01DB3C46F * __this, const RuntimeMethod* method);
// JsonSubTypes.JsonSubtypesConverterBuilder JsonSubTypes.JsonSubtypesConverterBuilder::SerializeDiscriminatorProperty(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonSubtypesConverterBuilder_tF39D5EDB289B7C600A98959FBC9A68E01DB3C46F * JsonSubtypesConverterBuilder_SerializeDiscriminatorProperty_mCE0F86A3E5B78B0F82E9DA2473C6C3EB26A8F5D2 (JsonSubtypesConverterBuilder_tF39D5EDB289B7C600A98959FBC9A68E01DB3C46F * __this, bool ___addDiscriminatorFirst0, const RuntimeMethod* method);
// System.Void JsonSubTypes.NullableDictionary`2<System.Object,System.Type>::Add(TKey,TValue)
inline void NullableDictionary_2_Add_m86E340469A6AE4D9A177687FB3A337F88BF90D6E (NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8 * __this, RuntimeObject * ___key0, Type_t * ___value1, const RuntimeMethod* method)
{
	((  void (*) (NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8 *, RuntimeObject *, Type_t *, const RuntimeMethod*))NullableDictionary_2_Add_m4FCB48F1ED8936038409C5DB9ACA4AA659E48CAE_gshared)(__this, ___key0, ___value1, method);
}
// System.Void JsonSubTypes.JsonSubtypesByDiscriminatorValueConverter::.ctor(System.Type,System.String,JsonSubTypes.NullableDictionary`2<System.Object,System.Type>,System.Boolean,System.Boolean,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSubtypesByDiscriminatorValueConverter__ctor_m8E85B3E82B05ECF4708967FC28F63BA0749F65AA (JsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853 * __this, Type_t * ___baseType0, String_t* ___discriminatorProperty1, NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8 * ___subTypeMapping2, bool ___serializeDiscriminatorProperty3, bool ___addDiscriminatorFirst4, Type_t * ___fallbackType5, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void JsonSubTypes.JsonSubtypes/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5617E10B85FCF40512930C05EDD0E3983BC248F0 (U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824 * __this, const RuntimeMethod* method);
// System.String JsonSubTypes.JsonSubtypes/KnownSubTypeWithPropertyAttribute::get_PropertyName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* KnownSubTypeWithPropertyAttribute_get_PropertyName_mC62CFBE5624081711F1B1C0B8B10C4DFCE9E61F2_inline (KnownSubTypeWithPropertyAttribute_tA28E5B138A0E2B81AF25B9E22AC022F06C0B66E6 * __this, const RuntimeMethod* method);
// System.Type JsonSubTypes.JsonSubtypes/KnownSubTypeWithPropertyAttribute::get_SubType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * KnownSubTypeWithPropertyAttribute_get_SubType_mB07ED0D2427D4F1FAADD317709C08AA705DA5FE3_inline (KnownSubTypeWithPropertyAttribute_tA28E5B138A0E2B81AF25B9E22AC022F06C0B66E6 * __this, const RuntimeMethod* method);
// System.Type JsonSubTypes.JsonSubtypes::ToType(System.Reflection.TypeInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * JsonSubtypes_ToType_mF4578FA04CD1990653BDAA6C1B4ED9FC8DCEF3C0 (TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * ___typeInfo0, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.String,System.Type>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m32599DB005AB1591D95A403F59D9ADB78AB08E2D_inline (KeyValuePair_2_t822BECCD5A164069D108533DCA1726AD40B884C0 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t822BECCD5A164069D108533DCA1726AD40B884C0 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,System.Type>::get_Value()
inline Type_t * KeyValuePair_2_get_Value_m1749BC57BAC3169021504BFD403CB3F3286AD554_inline (KeyValuePair_2_t822BECCD5A164069D108533DCA1726AD40B884C0 * __this, const RuntimeMethod* method)
{
	return ((  Type_t * (*) (KeyValuePair_2_t822BECCD5A164069D108533DCA1726AD40B884C0 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.Boolean System.String::Equals(System.String,System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mD65682B0BB7933CC7A8561AE34DED02E4F3BBBE5 (String_t* ___a0, String_t* ___b1, int32_t ___comparisonType2, const RuntimeMethod* method);
// System.Object JsonSubTypes.JsonSubtypes/KnownSubTypeAttribute::get_AssociatedValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KnownSubTypeAttribute_get_AssociatedValue_m0BFEDBCC156093773E7C1B1D0ACB0F317EEC3BDA_inline (KnownSubTypeAttribute_t9F1D658B2418F6AC43CE9F59F0B40A033A2F24B2 * __this, const RuntimeMethod* method);
// System.Type JsonSubTypes.JsonSubtypes/KnownSubTypeAttribute::get_SubType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * KnownSubTypeAttribute_get_SubType_mFB7CAD6ED05A42EDCDCA4AED5AEAC46D372AE672_inline (KnownSubTypeAttribute_t9F1D658B2418F6AC43CE9F59F0B40A033A2F24B2 * __this, const RuntimeMethod* method);
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
// System.Boolean JsonSubTypes.JsonSubtypes::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonSubtypes_get_CanRead_m1BBFF482D8CC15AEF67900686C5EFEA41A236098 (JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4_il2cpp_TypeInfo_var))->get__isInsideRead_1();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		return (bool)1;
	}

IL_0009:
	{
		JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * L_1 = ((JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4_il2cpp_TypeInfo_var))->get__reader_2();
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String Newtonsoft.Json.JsonReader::get_Path() */, L_1);
		bool L_3;
		L_3 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_2, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean JsonSubTypes.JsonSubtypes::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonSubtypes_get_CanWrite_m4F30CEC94C1BB163026C02A0F4E57EA76DC1BAC5 (JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Void JsonSubTypes.JsonSubtypes::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSubtypes__ctor_mD9543DD4D5BD0562AFC51A61A7F0C4012B2A472D (JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4 * __this, String_t* ___jsonDiscriminatorPropertyName0, const RuntimeMethod* method)
{
	{
		JsonConverter__ctor_m0F891CB57D7A02A2A642A1716E55353364E372A1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___jsonDiscriminatorPropertyName0;
		__this->set_JsonDiscriminatorPropertyName_0(L_0);
		return;
	}
}
// System.Boolean JsonSubTypes.JsonSubtypes::CanConvert(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonSubtypes_CanConvert_m8CC84569F3E3CE71340D0748ABAFD6BACAB11F41 (JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4 * __this, Type_t * ___objectType0, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Void JsonSubTypes.JsonSubtypes::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSubtypes_WriteJson_m5D6CC28BD32175CDF66D0544709AB83C00DFCBE6 (JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4 * __this, JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837 * ___writer0, RuntimeObject * ___value1, JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC * ___serializer2, const RuntimeMethod* method)
{
	{
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_0 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonSubtypes_WriteJson_m5D6CC28BD32175CDF66D0544709AB83C00DFCBE6_RuntimeMethod_var)));
	}
}
// System.Object JsonSubTypes.JsonSubtypes::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonSubtypes_ReadJson_mF78DB08CF1DCEF75A369645AC44D2277D829C109 (JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4 * __this, JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * ___reader0, Type_t * ___objectType1, RuntimeObject * ___existingValue2, JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC * ___serializer3, const RuntimeMethod* method)
{
	{
		JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * L_0 = ___reader0;
		Type_t * L_1 = ___objectType1;
		JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC * L_2 = ___serializer3;
		RuntimeObject * L_3;
		L_3 = JsonSubtypes_ReadJson_m28EA849C241312DECB7B9A21AB3494A83F5D79A3(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Object JsonSubTypes.JsonSubtypes::ReadJson(Newtonsoft.Json.JsonReader,System.Type,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonSubtypes_ReadJson_m28EA849C241312DECB7B9A21AB3494A83F5D79A3 (JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4 * __this, JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * ___reader0, Type_t * ___objectType1, JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC * ___serializer2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	int32_t V_1 = 0;
	Type_t * V_2 = NULL;
	{
		goto IL_0009;
	}

IL_0002:
	{
		JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * L_0 = ___reader0;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean Newtonsoft.Json.JsonReader::Read() */, L_0);
	}

IL_0009:
	{
		JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * L_2 = ___reader0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(5 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_2);
		if ((((int32_t)L_3) == ((int32_t)5)))
		{
			goto IL_0002;
		}
	}
	{
		JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * L_4 = ___reader0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(5 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_4);
		V_1 = L_5;
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) == ((int32_t)1)))
		{
			goto IL_002a;
		}
	}
	{
		int32_t L_7 = V_1;
		if ((((int32_t)L_7) == ((int32_t)2)))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_8 = V_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_006a;
		}
	}
	{
		V_0 = NULL;
		goto IL_0086;
	}

IL_002a:
	{
		JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * L_9 = ___reader0;
		Type_t * L_10 = ___objectType1;
		JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC * L_11 = ___serializer2;
		RuntimeObject * L_12;
		L_12 = JsonSubtypes_ReadObject_mC967E32CAB49F66704C43C16F68CDD9BF61BF5C9(__this, L_9, L_10, L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0086;
	}

IL_0036:
	{
		Type_t * L_13 = ___objectType1;
		Type_t * L_14;
		L_14 = JsonSubtypes_GetElementType_m71F5DDD5937238795DDAF695FE9DD488F381132F(L_13, /*hidden argument*/NULL);
		V_2 = L_14;
		Type_t * L_15 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_15, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_005d;
		}
	}
	{
		JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * L_17 = ___reader0;
		Type_t * L_18 = ___objectType1;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_18);
		String_t* L_20;
		L_20 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD9D0EC3F2CA8C9D654F6F72C264F1A5E6090C1BC)), L_19, /*hidden argument*/NULL);
		JsonReaderException_tD145419BFB4715FDFEAF3FA5619AAB84900BCEE9 * L_21;
		L_21 = JsonSubtypes_CreateJsonReaderException_m50E975A2CF049C98B55F0F9303E5BE58968402C5(L_17, L_20, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonSubtypes_ReadJson_m28EA849C241312DECB7B9A21AB3494A83F5D79A3_RuntimeMethod_var)));
	}

IL_005d:
	{
		JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * L_22 = ___reader0;
		Type_t * L_23 = ___objectType1;
		Type_t * L_24 = V_2;
		JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC * L_25 = ___serializer2;
		RuntimeObject* L_26;
		L_26 = JsonSubtypes_ReadArray_mC9767057A29A9ED1370002E1C6D2CC694404AD1F(__this, L_22, L_23, L_24, L_25, /*hidden argument*/NULL);
		V_0 = L_26;
		goto IL_0086;
	}

IL_006a:
	{
		JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * L_27 = ___reader0;
		JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * L_28 = ___reader0;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = VirtFuncInvoker0< int32_t >::Invoke(5 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_28);
		int32_t L_30 = L_29;
		RuntimeObject * L_31 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonToken_t3F2E74D2189D826EDCC84DEB75C1968CB8673D72_il2cpp_TypeInfo_var)), &L_30);
		String_t* L_32;
		L_32 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCDFF1526977E22184FF90392294FE6610445E3E2)), L_31, /*hidden argument*/NULL);
		JsonReaderException_tD145419BFB4715FDFEAF3FA5619AAB84900BCEE9 * L_33;
		L_33 = JsonSubtypes_CreateJsonReaderException_m50E975A2CF049C98B55F0F9303E5BE58968402C5(L_27, L_32, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonSubtypes_ReadJson_m28EA849C241312DECB7B9A21AB3494A83F5D79A3_RuntimeMethod_var)));
	}

IL_0086:
	{
		RuntimeObject * L_34 = V_0;
		return L_34;
	}
}
// Newtonsoft.Json.JsonReaderException JsonSubTypes.JsonSubtypes::CreateJsonReaderException(Newtonsoft.Json.JsonReader,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonReaderException_tD145419BFB4715FDFEAF3FA5619AAB84900BCEE9 * JsonSubtypes_CreateJsonReaderException_m50E975A2CF049C98B55F0F9303E5BE58968402C5 (JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * ___reader0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJsonLineInfo_tE29DD9EAEAD0B1D1A0C257EA7120AFD371567322_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonReaderException_tD145419BFB4715FDFEAF3FA5619AAB84900BCEE9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		V_0 = 0;
		V_1 = 0;
		JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * L_0 = ___reader0;
		RuntimeObject* L_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IJsonLineInfo_tE29DD9EAEAD0B1D1A0C257EA7120AFD371567322_il2cpp_TypeInfo_var));
		V_2 = L_1;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		RuntimeObject* L_2 = V_2;
		NullCheck(L_2);
		bool L_3;
		L_3 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Newtonsoft.Json.IJsonLineInfo::HasLineInfo() */, IJsonLineInfo_tE29DD9EAEAD0B1D1A0C257EA7120AFD371567322_il2cpp_TypeInfo_var, L_2);
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		RuntimeObject* L_4 = V_2;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Newtonsoft.Json.IJsonLineInfo::get_LineNumber() */, IJsonLineInfo_tE29DD9EAEAD0B1D1A0C257EA7120AFD371567322_il2cpp_TypeInfo_var, L_4);
		V_0 = L_5;
		RuntimeObject* L_6 = V_2;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Newtonsoft.Json.IJsonLineInfo::get_LinePosition() */, IJsonLineInfo_tE29DD9EAEAD0B1D1A0C257EA7120AFD371567322_il2cpp_TypeInfo_var, L_6);
		V_1 = L_7;
	}

IL_0024:
	{
		String_t* L_8 = ___message1;
		JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * L_9 = ___reader0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String Newtonsoft.Json.JsonReader::get_Path() */, L_9);
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		JsonReaderException_tD145419BFB4715FDFEAF3FA5619AAB84900BCEE9 * L_13 = (JsonReaderException_tD145419BFB4715FDFEAF3FA5619AAB84900BCEE9 *)il2cpp_codegen_object_new(JsonReaderException_tD145419BFB4715FDFEAF3FA5619AAB84900BCEE9_il2cpp_TypeInfo_var);
		JsonReaderException__ctor_m5C5982BC2E2A6C559F9B99DC3A91B888CDC81D1A(L_13, L_8, L_10, L_11, L_12, (Exception_t *)NULL, /*hidden argument*/NULL);
		return L_13;
	}
}
// System.Collections.IList JsonSubTypes.JsonSubtypes::ReadArray(Newtonsoft.Json.JsonReader,System.Type,System.Type,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonSubtypes_ReadArray_mC9767057A29A9ED1370002E1C6D2CC694404AD1F (JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4 * __this, JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * ___reader0, Type_t * ___targetType1, Type_t * ___elementType2, JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC * ___serializer3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeArray * V_1 = NULL;
	{
		Type_t * L_0 = ___targetType1;
		Type_t * L_1 = ___elementType2;
		RuntimeObject* L_2;
		L_2 = JsonSubtypes_CreateCompatibleList_m2E57901E216AD1D89F09E3E96D154C8CC63DB00D(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_001b;
	}

IL_000a:
	{
		RuntimeObject* L_3 = V_0;
		JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * L_4 = ___reader0;
		Type_t * L_5 = ___elementType2;
		JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC * L_6 = ___serializer3;
		RuntimeObject * L_7;
		L_7 = JsonSubtypes_ReadJson_m28EA849C241312DECB7B9A21AB3494A83F5D79A3(__this, L_4, L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_3, L_7);
	}

IL_001b:
	{
		JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * L_9 = ___reader0;
		NullCheck(L_9);
		bool L_10;
		L_10 = VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean Newtonsoft.Json.JsonReader::Read() */, L_9);
		if (!L_10)
		{
			goto IL_002d;
		}
	}
	{
		JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * L_11 = ___reader0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtFuncInvoker0< int32_t >::Invoke(5 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_11);
		if ((!(((uint32_t)L_12) == ((uint32_t)((int32_t)14)))))
		{
			goto IL_000a;
		}
	}

IL_002d:
	{
		Type_t * L_13 = ___targetType1;
		NullCheck(L_13);
		bool L_14;
		L_14 = Type_get_IsArray_m15FE83DD8FAF090F9BDA924753C7750AAEA7CFD1(L_13, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_0037;
		}
	}
	{
		RuntimeObject* L_15 = V_0;
		return L_15;
	}

IL_0037:
	{
		Type_t * L_16 = ___elementType2;
		RuntimeObject* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, L_17);
		RuntimeArray * L_19;
		L_19 = Array_CreateInstance_m57AC02F4475AF70CA317B48F09B3C29E3BA9C046(L_16, L_18, /*hidden argument*/NULL);
		V_1 = L_19;
		RuntimeObject* L_20 = V_0;
		RuntimeArray * L_21 = V_1;
		NullCheck(L_20);
		InterfaceActionInvoker2< RuntimeArray *, int32_t >::Invoke(0 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, L_20, L_21, 0);
		RuntimeArray * L_22 = V_1;
		return L_22;
	}
}
// System.Collections.IList JsonSubTypes.JsonSubtypes::CreateCompatibleList(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonSubtypes_CreateCompatibleList_m2E57901E216AD1D89F09E3E96D154C8CC63DB00D (Type_t * ___targetContainerType0, Type_t * ___elementType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t2F377D93C74B8090B226DCC307AB5BB600181453_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * V_0 = NULL;
	{
		Type_t * L_0 = ___targetContainerType0;
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_1;
		L_1 = JsonSubtypes_ToTypeInfo_mE898F929B019AED4916DE6D528B98E31DB45EE87(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_2 = V_0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Type_get_IsArray_m15FE83DD8FAF090F9BDA924753C7750AAEA7CFD1(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0017;
		}
	}
	{
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_4 = V_0;
		NullCheck(L_4);
		bool L_5;
		L_5 = Type_get_IsAbstract_mB16DB56FCABF55740019D32C5286F38E30CAA19F(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003b;
		}
	}

IL_0017:
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (List_1_t2F377D93C74B8090B226DCC307AB5BB600181453_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7;
		L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_6, /*hidden argument*/NULL);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_8 = (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)SZArrayNew(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_9 = L_8;
		Type_t * L_10 = ___elementType1;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t *)L_10);
		NullCheck(L_7);
		Type_t * L_11;
		L_11 = VirtFuncInvoker1< Type_t *, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(101 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_7, L_9);
		RuntimeObject * L_12;
		L_12 = Activator_CreateInstance_m1BACAB5F4FBF138CCCB537DDCB0683A2AC064295(L_11, /*hidden argument*/NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_12, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var));
	}

IL_003b:
	{
		Type_t * L_13 = ___targetContainerType0;
		RuntimeObject * L_14;
		L_14 = Activator_CreateInstance_m1BACAB5F4FBF138CCCB537DDCB0683A2AC064295(L_13, /*hidden argument*/NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_14, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var));
	}
}
// System.Type JsonSubTypes.JsonSubtypes::GetElementType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * JsonSubtypes_GetElementType_m71F5DDD5937238795DDAF695FE9DD488F381132F (Type_t * ___arrayOrGenericContainer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisType_t_mB2DD58F1158C4877353C4DF1F486FC9D97794727_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		Type_t * L_0 = ___arrayOrGenericContainer0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Type_get_IsArray_m15FE83DD8FAF090F9BDA924753C7750AAEA7CFD1(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		Type_t * L_2 = ___arrayOrGenericContainer0;
		NullCheck(L_2);
		Type_t * L_3;
		L_3 = VirtFuncInvoker0< Type_t * >::Invoke(104 /* System.Type System.Type::GetElementType() */, L_2);
		return L_3;
	}

IL_000f:
	{
		Type_t * L_4 = ___arrayOrGenericContainer0;
		RuntimeObject* L_5;
		L_5 = JsonSubtypes_GetGenericTypeArguments_m310DC9E08EB641E50FCCE1C3A7D1D03D5B1734AE(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		RuntimeObject* L_6 = V_0;
		Type_t * L_7;
		L_7 = Enumerable_FirstOrDefault_TisType_t_mB2DD58F1158C4877353C4DF1F486FC9D97794727(L_6, /*hidden argument*/Enumerable_FirstOrDefault_TisType_t_mB2DD58F1158C4877353C4DF1F486FC9D97794727_RuntimeMethod_var);
		return L_7;
	}
}
// System.Object JsonSubTypes.JsonSubtypes::ReadObject(Newtonsoft.Json.JsonReader,System.Type,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonSubtypes_ReadObject_mC967E32CAB49F66704C43C16F68CDD9BF61BF5C9 (JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4 * __this, JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * ___reader0, Type_t * ___objectType1, JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC * ___serializer2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8 * V_1 = NULL;
	Type_t * V_2 = NULL;
	Type_t * G_B2_0 = NULL;
	Type_t * G_B1_0 = NULL;
	{
		JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * L_0 = ___reader0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = JsonReader_get_DateParseHandling_mF422D438E94AC6ECBDA3B003C5405CCBE57528E2_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * L_2 = ___reader0;
		NullCheck(L_2);
		JsonReader_set_DateParseHandling_m48E46FBFC050DD90F2C17021D991B0F1BC08F4D2(L_2, 0, /*hidden argument*/NULL);
		JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * L_3 = ___reader0;
		JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8 * L_4;
		L_4 = JObject_Load_mC4E62B1BE14751785091102661D30E9A5D57ACBF(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * L_5 = ___reader0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		JsonReader_set_DateParseHandling_m48E46FBFC050DD90F2C17021D991B0F1BC08F4D2(L_5, L_6, /*hidden argument*/NULL);
		JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8 * L_7 = V_1;
		Type_t * L_8 = ___objectType1;
		JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC * L_9 = ___serializer2;
		Type_t * L_10;
		L_10 = JsonSubtypes_GetType_m05C280EB6A1FCD06701601B09677AC26C81847C9(__this, L_7, L_8, L_9, /*hidden argument*/NULL);
		Type_t * L_11 = L_10;
		G_B1_0 = L_11;
		if (L_11)
		{
			G_B2_0 = L_11;
			goto IL_002a;
		}
	}
	{
		Type_t * L_12 = ___objectType1;
		G_B2_0 = L_12;
	}

IL_002a:
	{
		V_2 = G_B2_0;
		JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * L_13 = ___reader0;
		JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC * L_14 = ___serializer2;
		JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8 * L_15 = V_1;
		Type_t * L_16 = V_2;
		RuntimeObject * L_17;
		L_17 = JsonSubtypes_ThreadStaticReadObject_mFE3B1521B5F9C242DF013D451B8D75DB3AE32317(L_13, L_14, L_15, L_16, /*hidden argument*/NULL);
		return L_17;
	}
}
// Newtonsoft.Json.JsonReader JsonSubTypes.JsonSubtypes::CreateAnotherReader(Newtonsoft.Json.Linq.JToken,Newtonsoft.Json.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * JsonSubtypes_CreateAnotherReader_m0E15E0ED15081F285C54C4B669380CD2BD6C56BB (JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * ___jToken0, JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * ___reader1, const RuntimeMethod* method)
{
	JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * V_0 = NULL;
	{
		JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_0 = ___jToken0;
		NullCheck(L_0);
		JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * L_1;
		L_1 = JToken_CreateReader_mCB39AC119C8F51739A452FC1EBD5033859126C8D(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * L_2 = V_0;
		JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * L_3 = ___reader1;
		NullCheck(L_3);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_4;
		L_4 = JsonReader_get_Culture_m0D8D60F9555820CBDD0EA6DB79A19832B768C0A7(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		JsonReader_set_Culture_m72501B521C798BF8471597849D8A71EDB4233D40_inline(L_2, L_4, /*hidden argument*/NULL);
		JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * L_5 = V_0;
		JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * L_6 = ___reader1;
		NullCheck(L_6);
		bool L_7;
		L_7 = JsonReader_get_CloseInput_m4E97DD4479BA1637A5CAE6A8412E486467E12E4F_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		JsonReader_set_CloseInput_m59E6A4B54731C471D0AD20D08ACDE1C5C1A15842_inline(L_5, L_7, /*hidden argument*/NULL);
		JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * L_8 = V_0;
		JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * L_9 = ___reader1;
		NullCheck(L_9);
		bool L_10;
		L_10 = JsonReader_get_SupportMultipleContent_m4311AF519DDFE110E151E676E6800931ABA26330_inline(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		JsonReader_set_SupportMultipleContent_mD31D798CB17EB9A111C9BC1D641686B3551FEFE9_inline(L_8, L_10, /*hidden argument*/NULL);
		JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * L_11 = V_0;
		JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * L_12 = ___reader1;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = JsonReader_get_DateTimeZoneHandling_mD6578854A0145CE2B98135A52C7AE9944CB0D939_inline(L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		JsonReader_set_DateTimeZoneHandling_m27D11C9ECDA3331E0B2D8B52D4084865B0E65F7D(L_11, L_13, /*hidden argument*/NULL);
		JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * L_14 = V_0;
		JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * L_15 = ___reader1;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = JsonReader_get_FloatParseHandling_mED93805A7BD69A092506D6097872BD41BD0C7924_inline(L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		JsonReader_set_FloatParseHandling_mD4F61F9EB6E8C14E8D2E9ADC7D511A04C136B443(L_14, L_16, /*hidden argument*/NULL);
		JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * L_17 = V_0;
		JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * L_18 = ___reader1;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = JsonReader_get_DateFormatString_mAA0F7630A255C54855B5424CDFD0B92A4325441B_inline(L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		JsonReader_set_DateFormatString_m3DCCBB52BB532AE46C787B835D31AB17DCE61506_inline(L_17, L_19, /*hidden argument*/NULL);
		JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * L_20 = V_0;
		JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * L_21 = ___reader1;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = JsonReader_get_DateParseHandling_mF422D438E94AC6ECBDA3B003C5405CCBE57528E2_inline(L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		JsonReader_set_DateParseHandling_m48E46FBFC050DD90F2C17021D991B0F1BC08F4D2(L_20, L_22, /*hidden argument*/NULL);
		JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * L_23 = V_0;
		return L_23;
	}
}
// System.Type JsonSubTypes.JsonSubtypes::ResolveType(Newtonsoft.Json.Linq.JObject,System.Type,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * JsonSubtypes_ResolveType_mE7151FA3FF9B72FDD910A4E66E5187421E01350A (JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4 * __this, JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8 * ___jObject0, Type_t * ___parentType1, JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC * ___serializer2, const RuntimeMethod* method)
{
	Type_t * V_0 = NULL;
	Type_t * G_B5_0 = NULL;
	Type_t * G_B4_0 = NULL;
	{
		String_t* L_0 = __this->get_JsonDiscriminatorPropertyName_0();
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8 * L_1 = ___jObject0;
		Type_t * L_2 = ___parentType1;
		Type_t * L_3;
		L_3 = JsonSubtypes_GetTypeByPropertyPresence_m79015646E09B9E54900891C78BF7192860910EFE(__this, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_001d;
	}

IL_0013:
	{
		JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8 * L_4 = ___jObject0;
		Type_t * L_5 = ___parentType1;
		JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC * L_6 = ___serializer2;
		Type_t * L_7;
		L_7 = JsonSubtypes_GetTypeFromDiscriminatorValue_m07849A070D7C7EDB93A62A9D68B9535F2315C15C(__this, L_4, L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
	}

IL_001d:
	{
		Type_t * L_8 = V_0;
		Type_t * L_9 = L_8;
		G_B4_0 = L_9;
		if (L_9)
		{
			G_B5_0 = L_9;
			goto IL_0029;
		}
	}
	{
		Type_t * L_10 = ___parentType1;
		Type_t * L_11;
		L_11 = VirtFuncInvoker1< Type_t *, Type_t * >::Invoke(11 /* System.Type JsonSubTypes.JsonSubtypes::GetFallbackSubType(System.Type) */, __this, L_10);
		G_B5_0 = L_11;
	}

IL_0029:
	{
		return G_B5_0;
	}
}
// System.Type JsonSubTypes.JsonSubtypes::GetType(Newtonsoft.Json.Linq.JObject,System.Type,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * JsonSubtypes_GetType_m05C280EB6A1FCD06701601B09677AC26C81847C9 (JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4 * __this, JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8 * ___jObject0, Type_t * ___parentType1, JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC * ___serializer2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OfType_TisJsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853_mE30F9B6BF5A2AE5CDE989382A1BF3D309658BA81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisJsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853_mADDC3921AC4FBFF36A94E48033CD7A2EE761F7E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisJsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853_mA5F05E5C17834E83645D0D677E4B4BB31954346C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m3304F42F8D57CFFAC96E4F1928E96F4447DC092A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t730F7242228FC0DF9F03C53B2BFA811A34990645_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mBBBBEE148ED492271216D211619EBA1D2756289D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass23_0_U3CGetTypeU3Eb__0_m69D4FFC4CE298B2E6213FB0C9A069631902FADE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass23_0_tA905FBA00BBA22CE5D672BEACB7C7ED33BE3F2A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass23_0_tA905FBA00BBA22CE5D672BEACB7C7ED33BE3F2A3 * V_0 = NULL;
	Type_t * V_1 = NULL;
	JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4 * V_2 = NULL;
	HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * V_3 = NULL;
	List_1_t3381511022A933569C3B6A79D93B1A10A00A913B * V_4 = NULL;
	{
		U3CU3Ec__DisplayClass23_0_tA905FBA00BBA22CE5D672BEACB7C7ED33BE3F2A3 * L_0 = (U3CU3Ec__DisplayClass23_0_tA905FBA00BBA22CE5D672BEACB7C7ED33BE3F2A3 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass23_0_tA905FBA00BBA22CE5D672BEACB7C7ED33BE3F2A3_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass23_0__ctor_m1F889D65807EE7F738093FFBA5B2277AE619A802(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Type_t * L_1 = ___parentType1;
		V_1 = L_1;
		V_2 = (JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4 *)NULL;
		U3CU3Ec__DisplayClass23_0_tA905FBA00BBA22CE5D672BEACB7C7ED33BE3F2A3 * L_2 = V_0;
		NullCheck(L_2);
		L_2->set_currentTypeResolver_0(__this);
		HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * L_3 = (HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 *)il2cpp_codegen_object_new(HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9_il2cpp_TypeInfo_var);
		HashSet_1__ctor_mBBBBEE148ED492271216D211619EBA1D2756289D(L_3, /*hidden argument*/HashSet_1__ctor_mBBBBEE148ED492271216D211619EBA1D2756289D_RuntimeMethod_var);
		HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * L_4 = L_3;
		Type_t * L_5 = V_1;
		NullCheck(L_4);
		bool L_6;
		L_6 = HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6(L_4, L_5, /*hidden argument*/HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6_RuntimeMethod_var);
		V_3 = L_4;
		JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC * L_7 = ___serializer2;
		NullCheck(L_7);
		JsonConverterCollection_tBC657EE757E9DCB303371710D65BAE9B58BF84EC * L_8;
		L_8 = VirtFuncInvoker0< JsonConverterCollection_tBC657EE757E9DCB303371710D65BAE9B58BF84EC * >::Invoke(23 /* Newtonsoft.Json.JsonConverterCollection Newtonsoft.Json.JsonSerializer::get_Converters() */, L_7);
		RuntimeObject* L_9;
		L_9 = Enumerable_OfType_TisJsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853_mE30F9B6BF5A2AE5CDE989382A1BF3D309658BA81(L_8, /*hidden argument*/Enumerable_OfType_TisJsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853_mE30F9B6BF5A2AE5CDE989382A1BF3D309658BA81_RuntimeMethod_var);
		List_1_t3381511022A933569C3B6A79D93B1A10A00A913B * L_10;
		L_10 = Enumerable_ToList_TisJsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853_mADDC3921AC4FBFF36A94E48033CD7A2EE761F7E9(L_9, /*hidden argument*/Enumerable_ToList_TisJsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853_mADDC3921AC4FBFF36A94E48033CD7A2EE761F7E9_RuntimeMethod_var);
		V_4 = L_10;
		goto IL_0080;
	}

IL_0033:
	{
		U3CU3Ec__DisplayClass23_0_tA905FBA00BBA22CE5D672BEACB7C7ED33BE3F2A3 * L_11 = V_0;
		NullCheck(L_11);
		JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4 * L_12 = L_11->get_currentTypeResolver_0();
		JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8 * L_13 = ___jObject0;
		Type_t * L_14 = V_1;
		JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC * L_15 = ___serializer2;
		NullCheck(L_12);
		Type_t * L_16;
		L_16 = JsonSubtypes_ResolveType_mE7151FA3FF9B72FDD910A4E66E5187421E01350A(L_12, L_13, L_14, L_15, /*hidden argument*/NULL);
		V_1 = L_16;
		HashSet_1_t6DF4EF51925F07D2DF32F6A9A96C6B4624263BB9 * L_17 = V_3;
		Type_t * L_18 = V_1;
		NullCheck(L_17);
		bool L_19;
		L_19 = HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6(L_17, L_18, /*hidden argument*/HashSet_1_Add_m611E3FEB9B843487AEE76DFA1CAEC6C1566D8CE6_RuntimeMethod_var);
		if (!L_19)
		{
			goto IL_0091;
		}
	}
	{
		U3CU3Ec__DisplayClass23_0_tA905FBA00BBA22CE5D672BEACB7C7ED33BE3F2A3 * L_20 = V_0;
		NullCheck(L_20);
		JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4 * L_21 = L_20->get_currentTypeResolver_0();
		V_2 = L_21;
		List_1_t3381511022A933569C3B6A79D93B1A10A00A913B * L_22 = V_4;
		U3CU3Ec__DisplayClass23_0_tA905FBA00BBA22CE5D672BEACB7C7ED33BE3F2A3 * L_23 = V_0;
		Func_2_t730F7242228FC0DF9F03C53B2BFA811A34990645 * L_24 = (Func_2_t730F7242228FC0DF9F03C53B2BFA811A34990645 *)il2cpp_codegen_object_new(Func_2_t730F7242228FC0DF9F03C53B2BFA811A34990645_il2cpp_TypeInfo_var);
		Func_2__ctor_m3304F42F8D57CFFAC96E4F1928E96F4447DC092A(L_24, L_23, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass23_0_U3CGetTypeU3Eb__0_m69D4FFC4CE298B2E6213FB0C9A069631902FADE2_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m3304F42F8D57CFFAC96E4F1928E96F4447DC092A_RuntimeMethod_var);
		RuntimeObject* L_25;
		L_25 = Enumerable_Where_TisJsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853_mA5F05E5C17834E83645D0D677E4B4BB31954346C(L_22, L_24, /*hidden argument*/Enumerable_Where_TisJsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853_mA5F05E5C17834E83645D0D677E4B4BB31954346C_RuntimeMethod_var);
		List_1_t3381511022A933569C3B6A79D93B1A10A00A913B * L_26;
		L_26 = Enumerable_ToList_TisJsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853_mADDC3921AC4FBFF36A94E48033CD7A2EE761F7E9(L_25, /*hidden argument*/Enumerable_ToList_TisJsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853_mADDC3921AC4FBFF36A94E48033CD7A2EE761F7E9_RuntimeMethod_var);
		V_4 = L_26;
		U3CU3Ec__DisplayClass23_0_tA905FBA00BBA22CE5D672BEACB7C7ED33BE3F2A3 * L_27 = V_0;
		Type_t * L_28 = V_1;
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_29;
		L_29 = JsonSubtypes_ToTypeInfo_mE898F929B019AED4916DE6D528B98E31DB45EE87(L_28, /*hidden argument*/NULL);
		List_1_t3381511022A933569C3B6A79D93B1A10A00A913B * L_30 = V_4;
		JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4 * L_31;
		L_31 = JsonSubtypes_GetTypeResolver_m71E06EB2923B24821DD996C21285D390CF95384C(__this, L_29, L_30, /*hidden argument*/NULL);
		NullCheck(L_27);
		L_27->set_currentTypeResolver_0(L_31);
	}

IL_0080:
	{
		U3CU3Ec__DisplayClass23_0_tA905FBA00BBA22CE5D672BEACB7C7ED33BE3F2A3 * L_32 = V_0;
		NullCheck(L_32);
		JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4 * L_33 = L_32->get_currentTypeResolver_0();
		if (!L_33)
		{
			goto IL_0091;
		}
	}
	{
		U3CU3Ec__DisplayClass23_0_tA905FBA00BBA22CE5D672BEACB7C7ED33BE3F2A3 * L_34 = V_0;
		NullCheck(L_34);
		JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4 * L_35 = L_34->get_currentTypeResolver_0();
		JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4 * L_36 = V_2;
		if ((!(((RuntimeObject*)(JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4 *)L_35) == ((RuntimeObject*)(JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4 *)L_36))))
		{
			goto IL_0033;
		}
	}

IL_0091:
	{
		Type_t * L_37 = V_1;
		return L_37;
	}
}
// JsonSubTypes.JsonSubtypes JsonSubTypes.JsonSubtypes::GetTypeResolver(System.Reflection.TypeInfo,System.Collections.Generic.IEnumerable`1<JsonSubTypes.JsonSubtypesByDiscriminatorValueConverter>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4 * JsonSubtypes_GetTypeResolver_m71E06EB2923B24821DD996C21285D390CF95384C (JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4 * __this, TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * ___targetType0, RuntimeObject* ___jsonConverterCollection1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisJsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853_m092BD88F892987A985C778FC166535873C9DDFFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m3304F42F8D57CFFAC96E4F1928E96F4447DC092A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t730F7242228FC0DF9F03C53B2BFA811A34990645_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSubtypes_GetAttribute_TisJsonConverterAttribute_t76C9BFA5F1F70135FB27B3509C9B077A8F4719FC_mDEC49C0C7AAF5EF82F9A0ED2976643800142B2BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass24_0_U3CGetTypeResolverU3Eb__0_m2E857A9647C7E01122F6C389922BDDBF0454E79E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass24_0_tA1025D3D9F5804E66668EE0EF431E16B1287165F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass24_0_tA1025D3D9F5804E66668EE0EF431E16B1287165F * V_0 = NULL;
	JsonConverterAttribute_t76C9BFA5F1F70135FB27B3509C9B077A8F4719FC * V_1 = NULL;
	{
		U3CU3Ec__DisplayClass24_0_tA1025D3D9F5804E66668EE0EF431E16B1287165F * L_0 = (U3CU3Ec__DisplayClass24_0_tA1025D3D9F5804E66668EE0EF431E16B1287165F *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass24_0_tA1025D3D9F5804E66668EE0EF431E16B1287165F_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass24_0__ctor_m29283974DAC84AE4149FF9399A38EA06F45D8610(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass24_0_tA1025D3D9F5804E66668EE0EF431E16B1287165F * L_1 = V_0;
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_2 = ___targetType0;
		NullCheck(L_1);
		L_1->set_targetType_0(L_2);
		U3CU3Ec__DisplayClass24_0_tA1025D3D9F5804E66668EE0EF431E16B1287165F * L_3 = V_0;
		NullCheck(L_3);
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_4 = L_3->get_targetType_0();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_4, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_001d;
		}
	}
	{
		return (JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4 *)NULL;
	}

IL_001d:
	{
		U3CU3Ec__DisplayClass24_0_tA1025D3D9F5804E66668EE0EF431E16B1287165F * L_6 = V_0;
		NullCheck(L_6);
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_7 = L_6->get_targetType_0();
		JsonConverterAttribute_t76C9BFA5F1F70135FB27B3509C9B077A8F4719FC * L_8;
		L_8 = JsonSubtypes_GetAttribute_TisJsonConverterAttribute_t76C9BFA5F1F70135FB27B3509C9B077A8F4719FC_mDEC49C0C7AAF5EF82F9A0ED2976643800142B2BD(L_7, /*hidden argument*/JsonSubtypes_GetAttribute_TisJsonConverterAttribute_t76C9BFA5F1F70135FB27B3509C9B077A8F4719FC_mDEC49C0C7AAF5EF82F9A0ED2976643800142B2BD_RuntimeMethod_var);
		V_1 = L_8;
		JsonConverterAttribute_t76C9BFA5F1F70135FB27B3509C9B077A8F4719FC * L_9 = V_1;
		if (!L_9)
		{
			goto IL_0064;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_10 = { reinterpret_cast<intptr_t> (JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11;
		L_11 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_10, /*hidden argument*/NULL);
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_12;
		L_12 = JsonSubtypes_ToTypeInfo_mE898F929B019AED4916DE6D528B98E31DB45EE87(L_11, /*hidden argument*/NULL);
		JsonConverterAttribute_t76C9BFA5F1F70135FB27B3509C9B077A8F4719FC * L_13 = V_1;
		NullCheck(L_13);
		Type_t * L_14;
		L_14 = JsonConverterAttribute_get_ConverterType_m4675E9898C076AAD602C5B4BCE5F16709E757D06_inline(L_13, /*hidden argument*/NULL);
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_15;
		L_15 = JsonSubtypes_ToTypeInfo_mE898F929B019AED4916DE6D528B98E31DB45EE87(L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		bool L_16;
		L_16 = VirtFuncInvoker1< bool, TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * >::Invoke(125 /* System.Boolean System.Reflection.TypeInfo::IsAssignableFrom(System.Reflection.TypeInfo) */, L_12, L_15);
		if (!L_16)
		{
			goto IL_0064;
		}
	}
	{
		JsonConverterAttribute_t76C9BFA5F1F70135FB27B3509C9B077A8F4719FC * L_17 = V_1;
		NullCheck(L_17);
		Type_t * L_18;
		L_18 = JsonConverterAttribute_get_ConverterType_m4675E9898C076AAD602C5B4BCE5F16709E757D06_inline(L_17, /*hidden argument*/NULL);
		JsonConverterAttribute_t76C9BFA5F1F70135FB27B3509C9B077A8F4719FC * L_19 = V_1;
		NullCheck(L_19);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20;
		L_20 = JsonConverterAttribute_get_ConverterParameters_m83432CF6F070523D66CEE0941AB4945DE855EDD2_inline(L_19, /*hidden argument*/NULL);
		RuntimeObject * L_21;
		L_21 = Activator_CreateInstance_mF3E09E8AC19EE563314B326117091D4B9CC918C1(L_18, L_20, /*hidden argument*/NULL);
		return ((JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4 *)CastclassClass((RuntimeObject*)L_21, JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4_il2cpp_TypeInfo_var));
	}

IL_0064:
	{
		RuntimeObject* L_22 = ___jsonConverterCollection1;
		U3CU3Ec__DisplayClass24_0_tA1025D3D9F5804E66668EE0EF431E16B1287165F * L_23 = V_0;
		Func_2_t730F7242228FC0DF9F03C53B2BFA811A34990645 * L_24 = (Func_2_t730F7242228FC0DF9F03C53B2BFA811A34990645 *)il2cpp_codegen_object_new(Func_2_t730F7242228FC0DF9F03C53B2BFA811A34990645_il2cpp_TypeInfo_var);
		Func_2__ctor_m3304F42F8D57CFFAC96E4F1928E96F4447DC092A(L_24, L_23, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass24_0_U3CGetTypeResolverU3Eb__0_m2E857A9647C7E01122F6C389922BDDBF0454E79E_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m3304F42F8D57CFFAC96E4F1928E96F4447DC092A_RuntimeMethod_var);
		JsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853 * L_25;
		L_25 = Enumerable_FirstOrDefault_TisJsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853_m092BD88F892987A985C778FC166535873C9DDFFA(L_22, L_24, /*hidden argument*/Enumerable_FirstOrDefault_TisJsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853_m092BD88F892987A985C778FC166535873C9DDFFA_RuntimeMethod_var);
		return L_25;
	}
}
// System.Type JsonSubTypes.JsonSubtypes::GetTypeByPropertyPresence(Newtonsoft.Json.Linq.JObject,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * JsonSubtypes_GetTypeByPropertyPresence_m79015646E09B9E54900891C78BF7192860910EFE (JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4 * __this, JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8 * ___jObject0, Type_t * ___parentType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisKeyValuePair_2_t822BECCD5A164069D108533DCA1726AD40B884C0_TisType_t_m8C26F17C0C13904B212974AEFBA5D20D1EEDE3CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisType_t_mDB744C25D97BD49BD70979DC17395D271EA84945_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisType_t_m2A0B85DA7F086A9F38AE3CBF6F6DB181B2A86753_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mCF05B1445990167FFD40667A8EB11E4E92AC29A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mF99B731B7FE71291198AC579A27977DAFAEE528D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t1C35530CDCF3ACBB02D9C76B9BB986AED1FC59E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetTypeByPropertyPresenceU3Eb__25_1_m31FFB5437C657DF01C5BFD72CEA2E9580382D874_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass25_0_U3CGetTypeByPropertyPresenceU3Eb__0_mBA6F7557586A61D0F135463BD0BF531FB15191B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass25_0_tDB74EF4E3450B203DF6EC1454F1B849A0330B7CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass25_0_tDB74EF4E3450B203DF6EC1454F1B849A0330B7CF * V_0 = NULL;
	Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * V_1 = NULL;
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* V_2 = NULL;
	Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	Func_2_tDF003B4E413360CAD0A9CA579A84B2BF683EA1B0 * G_B7_0 = NULL;
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* G_B7_1 = NULL;
	String_t* G_B7_2 = NULL;
	String_t* G_B7_3 = NULL;
	Func_2_tDF003B4E413360CAD0A9CA579A84B2BF683EA1B0 * G_B6_0 = NULL;
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* G_B6_1 = NULL;
	String_t* G_B6_2 = NULL;
	String_t* G_B6_3 = NULL;
	{
		U3CU3Ec__DisplayClass25_0_tDB74EF4E3450B203DF6EC1454F1B849A0330B7CF * L_0 = (U3CU3Ec__DisplayClass25_0_tDB74EF4E3450B203DF6EC1454F1B849A0330B7CF *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass25_0_tDB74EF4E3450B203DF6EC1454F1B849A0330B7CF_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass25_0__ctor_mA699481CF1250FA52CA5E1812C7061357AF16ED4(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass25_0_tDB74EF4E3450B203DF6EC1454F1B849A0330B7CF * L_1 = V_0;
		JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8 * L_2 = ___jObject0;
		NullCheck(L_1);
		L_1->set_jObject_0(L_2);
		Type_t * L_3 = ___parentType1;
		Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * L_4;
		L_4 = VirtFuncInvoker1< Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 *, Type_t * >::Invoke(9 /* System.Collections.Generic.Dictionary`2<System.String,System.Type> JsonSubTypes.JsonSubtypes::GetTypesByPropertyPresence(System.Type) */, __this, L_3);
		V_1 = L_4;
		Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * L_5 = V_1;
		U3CU3Ec__DisplayClass25_0_tDB74EF4E3450B203DF6EC1454F1B849A0330B7CF * L_6 = V_0;
		Func_2_t1C35530CDCF3ACBB02D9C76B9BB986AED1FC59E6 * L_7 = (Func_2_t1C35530CDCF3ACBB02D9C76B9BB986AED1FC59E6 *)il2cpp_codegen_object_new(Func_2_t1C35530CDCF3ACBB02D9C76B9BB986AED1FC59E6_il2cpp_TypeInfo_var);
		Func_2__ctor_mCF05B1445990167FFD40667A8EB11E4E92AC29A0(L_7, L_6, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass25_0_U3CGetTypeByPropertyPresenceU3Eb__0_mBA6F7557586A61D0F135463BD0BF531FB15191B4_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mCF05B1445990167FFD40667A8EB11E4E92AC29A0_RuntimeMethod_var);
		RuntimeObject* L_8;
		L_8 = Enumerable_Select_TisKeyValuePair_2_t822BECCD5A164069D108533DCA1726AD40B884C0_TisType_t_m8C26F17C0C13904B212974AEFBA5D20D1EEDE3CB(L_5, L_7, /*hidden argument*/Enumerable_Select_TisKeyValuePair_2_t822BECCD5A164069D108533DCA1726AD40B884C0_TisType_t_m8C26F17C0C13904B212974AEFBA5D20D1EEDE3CB_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824_il2cpp_TypeInfo_var);
		Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * L_9 = ((U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824_il2cpp_TypeInfo_var))->get_U3CU3E9__25_1_1();
		Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * L_10 = L_9;
		G_B1_0 = L_10;
		G_B1_1 = L_8;
		if (L_10)
		{
			G_B2_0 = L_10;
			G_B2_1 = L_8;
			goto IL_0046;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824_il2cpp_TypeInfo_var);
		U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824 * L_11 = ((U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * L_12 = (Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 *)il2cpp_codegen_object_new(Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5_il2cpp_TypeInfo_var);
		Func_2__ctor_mF99B731B7FE71291198AC579A27977DAFAEE528D(L_12, L_11, (intptr_t)((intptr_t)U3CU3Ec_U3CGetTypeByPropertyPresenceU3Eb__25_1_m31FFB5437C657DF01C5BFD72CEA2E9580382D874_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mF99B731B7FE71291198AC579A27977DAFAEE528D_RuntimeMethod_var);
		Func_2_tDA1CD28AB1DD1EC817F9902B752EB3751BE154B5 * L_13 = L_12;
		((U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824_il2cpp_TypeInfo_var))->set_U3CU3E9__25_1_1(L_13);
		G_B2_0 = L_13;
		G_B2_1 = G_B1_1;
	}

IL_0046:
	{
		RuntimeObject* L_14;
		L_14 = Enumerable_Where_TisType_t_m2A0B85DA7F086A9F38AE3CBF6F6DB181B2A86753(G_B2_1, G_B2_0, /*hidden argument*/Enumerable_Where_TisType_t_m2A0B85DA7F086A9F38AE3CBF6F6DB181B2A86753_RuntimeMethod_var);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_15;
		L_15 = Enumerable_ToArray_TisType_t_mDB744C25D97BD49BD70979DC17395D271EA84945(L_14, /*hidden argument*/Enumerable_ToArray_TisType_t_mDB744C25D97BD49BD70979DC17395D271EA84945_RuntimeMethod_var);
		V_2 = L_15;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_16 = V_2;
		NullCheck(L_16);
		if ((!(((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))) == ((uint32_t)1))))
		{
			goto IL_005b;
		}
	}
	{
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_17 = V_2;
		NullCheck(L_17);
		int32_t L_18 = 0;
		Type_t * L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		return L_19;
	}

IL_005b:
	{
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_20 = V_2;
		NullCheck(L_20);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))) <= ((int32_t)1)))
		{
			goto IL_00a5;
		}
	}
	{
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_21 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824_il2cpp_TypeInfo_var)));
		Func_2_tDF003B4E413360CAD0A9CA579A84B2BF683EA1B0 * L_22 = ((U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824_il2cpp_TypeInfo_var))))->get_U3CU3E9__25_2_2();
		Func_2_tDF003B4E413360CAD0A9CA579A84B2BF683EA1B0 * L_23 = L_22;
		G_B6_0 = L_23;
		G_B6_1 = L_21;
		G_B6_2 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D));
		G_B6_3 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral068EAB2D3B409D7734D04DF79A3BD26EC6B74C56));
		if (L_23)
		{
			G_B7_0 = L_23;
			G_B7_1 = L_21;
			G_B7_2 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D));
			G_B7_3 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral068EAB2D3B409D7734D04DF79A3BD26EC6B74C56));
			goto IL_008b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824_il2cpp_TypeInfo_var)));
		U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824 * L_24 = ((U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824_il2cpp_TypeInfo_var))))->get_U3CU3E9_0();
		Func_2_tDF003B4E413360CAD0A9CA579A84B2BF683EA1B0 * L_25 = (Func_2_tDF003B4E413360CAD0A9CA579A84B2BF683EA1B0 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Func_2_tDF003B4E413360CAD0A9CA579A84B2BF683EA1B0_il2cpp_TypeInfo_var)));
		Func_2__ctor_mFA4D07ACD59A136F95C11D733F49418F83C412E1(L_25, L_24, (intptr_t)((intptr_t)((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_U3CGetTypeByPropertyPresenceU3Eb__25_2_mC0ECD997D07DBCC902377E57B1CEC8CBB6E3D1C5_RuntimeMethod_var))), /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Func_2__ctor_mFA4D07ACD59A136F95C11D733F49418F83C412E1_RuntimeMethod_var)));
		Func_2_tDF003B4E413360CAD0A9CA579A84B2BF683EA1B0 * L_26 = L_25;
		((U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824_il2cpp_TypeInfo_var))))->set_U3CU3E9__25_2_2(L_26);
		G_B7_0 = L_26;
		G_B7_1 = G_B6_1;
		G_B7_2 = G_B6_2;
		G_B7_3 = G_B6_3;
	}

IL_008b:
	{
		RuntimeObject* L_27;
		L_27 = Enumerable_Select_TisType_t_TisString_t_m97718737E55EA7B887B064378F8AC1F4004288C0((RuntimeObject*)(RuntimeObject*)G_B7_1, G_B7_0, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Enumerable_Select_TisType_t_TisString_t_m97718737E55EA7B887B064378F8AC1F4004288C0_RuntimeMethod_var)));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_28;
		L_28 = Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582(L_27, /*hidden argument*/((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582_RuntimeMethod_var)));
		String_t* L_29;
		L_29 = String_Join_m8846EB11F0A221BDE237DE041D17764B36065404(G_B7_2, L_28, /*hidden argument*/NULL);
		String_t* L_30;
		L_30 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(G_B7_3, L_29, /*hidden argument*/NULL);
		JsonSerializationException_tCD1256C587B4859A1B7964BD0578C27A6D58580F * L_31 = (JsonSerializationException_tCD1256C587B4859A1B7964BD0578C27A6D58580F *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonSerializationException_tCD1256C587B4859A1B7964BD0578C27A6D58580F_il2cpp_TypeInfo_var)));
		JsonSerializationException__ctor_m6D353251D7B8D14EE23FFB76959E77EDC7B5244C(L_31, L_30, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonSubtypes_GetTypeByPropertyPresence_m79015646E09B9E54900891C78BF7192860910EFE_RuntimeMethod_var)));
	}

IL_00a5:
	{
		return (Type_t *)NULL;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,System.Type> JsonSubTypes.JsonSubtypes::GetTypesByPropertyPresence(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * JsonSubtypes_GetTypesByPropertyPresence_m328ED52CD5C8966D9BD4F6A97686A791B28EC169 (JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4 * __this, Type_t * ___parentType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToDictionary_TisKnownSubTypeWithPropertyAttribute_tA28E5B138A0E2B81AF25B9E22AC022F06C0B66E6_TisString_t_TisType_t_m3EB08A14C459906E4D2434CB748921964429E66C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mB243E00437C804A3495C0CC3630B9CD4C126B05D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_mB89D1CB7F8A8352C0535D7F33D51230F6126B8CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t1D63FDB698C10A9D955F8E78C2AD44F3A8B89F8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tC377CCFD1AED4841503E2E5EF83D750C62EF9178_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSubtypes_GetAttributes_TisKnownSubTypeWithPropertyAttribute_tA28E5B138A0E2B81AF25B9E22AC022F06C0B66E6_mE498F3775184DDA3BCB3B9009D71F3AC0B94B69A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetTypesByPropertyPresenceU3Eb__26_0_m877041A14AFBC2285381D37CEC3972F126F1C7FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetTypesByPropertyPresenceU3Eb__26_1_m2BF42C7EDC67412F7D00B1DD1DDC2717DACEF679_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tC377CCFD1AED4841503E2E5EF83D750C62EF9178 * G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_tC377CCFD1AED4841503E2E5EF83D750C62EF9178 * G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	Func_2_t1D63FDB698C10A9D955F8E78C2AD44F3A8B89F8E * G_B4_0 = NULL;
	Func_2_tC377CCFD1AED4841503E2E5EF83D750C62EF9178 * G_B4_1 = NULL;
	RuntimeObject* G_B4_2 = NULL;
	Func_2_t1D63FDB698C10A9D955F8E78C2AD44F3A8B89F8E * G_B3_0 = NULL;
	Func_2_tC377CCFD1AED4841503E2E5EF83D750C62EF9178 * G_B3_1 = NULL;
	RuntimeObject* G_B3_2 = NULL;
	{
		Type_t * L_0 = ___parentType0;
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_1;
		L_1 = JsonSubtypes_ToTypeInfo_mE898F929B019AED4916DE6D528B98E31DB45EE87(L_0, /*hidden argument*/NULL);
		RuntimeObject* L_2;
		L_2 = JsonSubtypes_GetAttributes_TisKnownSubTypeWithPropertyAttribute_tA28E5B138A0E2B81AF25B9E22AC022F06C0B66E6_mE498F3775184DDA3BCB3B9009D71F3AC0B94B69A(L_1, /*hidden argument*/JsonSubtypes_GetAttributes_TisKnownSubTypeWithPropertyAttribute_tA28E5B138A0E2B81AF25B9E22AC022F06C0B66E6_mE498F3775184DDA3BCB3B9009D71F3AC0B94B69A_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824_il2cpp_TypeInfo_var);
		Func_2_tC377CCFD1AED4841503E2E5EF83D750C62EF9178 * L_3 = ((U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824_il2cpp_TypeInfo_var))->get_U3CU3E9__26_0_3();
		Func_2_tC377CCFD1AED4841503E2E5EF83D750C62EF9178 * L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			goto IL_002a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824_il2cpp_TypeInfo_var);
		U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824 * L_5 = ((U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_tC377CCFD1AED4841503E2E5EF83D750C62EF9178 * L_6 = (Func_2_tC377CCFD1AED4841503E2E5EF83D750C62EF9178 *)il2cpp_codegen_object_new(Func_2_tC377CCFD1AED4841503E2E5EF83D750C62EF9178_il2cpp_TypeInfo_var);
		Func_2__ctor_mB89D1CB7F8A8352C0535D7F33D51230F6126B8CE(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec_U3CGetTypesByPropertyPresenceU3Eb__26_0_m877041A14AFBC2285381D37CEC3972F126F1C7FA_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mB89D1CB7F8A8352C0535D7F33D51230F6126B8CE_RuntimeMethod_var);
		Func_2_tC377CCFD1AED4841503E2E5EF83D750C62EF9178 * L_7 = L_6;
		((U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824_il2cpp_TypeInfo_var))->set_U3CU3E9__26_0_3(L_7);
		G_B2_0 = L_7;
		G_B2_1 = G_B1_1;
	}

IL_002a:
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824_il2cpp_TypeInfo_var);
		Func_2_t1D63FDB698C10A9D955F8E78C2AD44F3A8B89F8E * L_8 = ((U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824_il2cpp_TypeInfo_var))->get_U3CU3E9__26_1_4();
		Func_2_t1D63FDB698C10A9D955F8E78C2AD44F3A8B89F8E * L_9 = L_8;
		G_B3_0 = L_9;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		if (L_9)
		{
			G_B4_0 = L_9;
			G_B4_1 = G_B2_0;
			G_B4_2 = G_B2_1;
			goto IL_0049;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824_il2cpp_TypeInfo_var);
		U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824 * L_10 = ((U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t1D63FDB698C10A9D955F8E78C2AD44F3A8B89F8E * L_11 = (Func_2_t1D63FDB698C10A9D955F8E78C2AD44F3A8B89F8E *)il2cpp_codegen_object_new(Func_2_t1D63FDB698C10A9D955F8E78C2AD44F3A8B89F8E_il2cpp_TypeInfo_var);
		Func_2__ctor_mB243E00437C804A3495C0CC3630B9CD4C126B05D(L_11, L_10, (intptr_t)((intptr_t)U3CU3Ec_U3CGetTypesByPropertyPresenceU3Eb__26_1_m2BF42C7EDC67412F7D00B1DD1DDC2717DACEF679_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_mB243E00437C804A3495C0CC3630B9CD4C126B05D_RuntimeMethod_var);
		Func_2_t1D63FDB698C10A9D955F8E78C2AD44F3A8B89F8E * L_12 = L_11;
		((U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824_il2cpp_TypeInfo_var))->set_U3CU3E9__26_1_4(L_12);
		G_B4_0 = L_12;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_0049:
	{
		Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * L_13;
		L_13 = Enumerable_ToDictionary_TisKnownSubTypeWithPropertyAttribute_tA28E5B138A0E2B81AF25B9E22AC022F06C0B66E6_TisString_t_TisType_t_m3EB08A14C459906E4D2434CB748921964429E66C(G_B4_2, G_B4_1, G_B4_0, /*hidden argument*/Enumerable_ToDictionary_TisKnownSubTypeWithPropertyAttribute_tA28E5B138A0E2B81AF25B9E22AC022F06C0B66E6_TisString_t_TisType_t_m3EB08A14C459906E4D2434CB748921964429E66C_RuntimeMethod_var);
		return L_13;
	}
}
// System.Type JsonSubTypes.JsonSubtypes::GetTypeFromDiscriminatorValue(Newtonsoft.Json.Linq.JObject,System.Type,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * JsonSubtypes_GetTypeFromDiscriminatorValue_m07849A070D7C7EDB93A62A9D68B9535F2315C15C (JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4 * __this, JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8 * ___jObject0, Type_t * ___parentType1, JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC * ___serializer2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisKeyValuePair_2_t09B898DA045563F8551DEEE3ECB9C13FE8A3B848_m147F25510D29A7C51050904CD1F82FD54A8EFA37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Extensions_Value_TisString_t_mF276B63B3362CB4D0E573470017E6BA9C4A340EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullableDictionary_2_Entries_m1373B6035D2560449A03D9567482ADC45CA3D5F8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * V_0 = NULL;
	NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8 * V_1 = NULL;
	{
		JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8 * L_0 = ___jObject0;
		String_t* L_1 = __this->get_JsonDiscriminatorPropertyName_0();
		bool L_2;
		L_2 = JsonSubtypes_TryGetValueInJson_m62712164F1CBA2FB76B2EE98BC2746C6334B2CA6(L_0, L_1, (JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 **)(&V_0), /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001d;
		}
	}
	{
		JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8 * L_3 = ___jObject0;
		String_t* L_4 = __this->get_JsonDiscriminatorPropertyName_0();
		NullCheck(L_3);
		JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_5;
		L_5 = JToken_SelectToken_mD5A623B4FE39A4DF7DF88CB8231AD9C2796BFC55(L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_001d:
	{
		JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_6 = V_0;
		if (L_6)
		{
			goto IL_0022;
		}
	}
	{
		return (Type_t *)NULL;
	}

IL_0022:
	{
		Type_t * L_7 = ___parentType1;
		NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8 * L_8;
		L_8 = VirtFuncInvoker1< NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8 *, Type_t * >::Invoke(10 /* JsonSubTypes.NullableDictionary`2<System.Object,System.Type> JsonSubTypes.JsonSubtypes::GetSubTypeMapping(System.Type) */, __this, L_7);
		V_1 = L_8;
		NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8 * L_9 = V_1;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = NullableDictionary_2_Entries_m1373B6035D2560449A03D9567482ADC45CA3D5F8(L_9, /*hidden argument*/NullableDictionary_2_Entries_m1373B6035D2560449A03D9567482ADC45CA3D5F8_RuntimeMethod_var);
		bool L_11;
		L_11 = Enumerable_Any_TisKeyValuePair_2_t09B898DA045563F8551DEEE3ECB9C13FE8A3B848_m147F25510D29A7C51050904CD1F82FD54A8EFA37(L_10, /*hidden argument*/Enumerable_Any_TisKeyValuePair_2_t09B898DA045563F8551DEEE3ECB9C13FE8A3B848_m147F25510D29A7C51050904CD1F82FD54A8EFA37_RuntimeMethod_var);
		if (!L_11)
		{
			goto IL_0040;
		}
	}
	{
		NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8 * L_12 = V_1;
		JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_13 = V_0;
		JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC * L_14 = ___serializer2;
		Type_t * L_15;
		L_15 = JsonSubtypes_GetTypeFromMapping_mD1186BB788F61DBA424BC028CCD1568B2E15F605(L_12, L_13, L_14, /*hidden argument*/NULL);
		return L_15;
	}

IL_0040:
	{
		JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_16 = V_0;
		String_t* L_17;
		L_17 = Extensions_Value_TisString_t_mF276B63B3362CB4D0E573470017E6BA9C4A340EC(L_16, /*hidden argument*/Extensions_Value_TisString_t_mF276B63B3362CB4D0E573470017E6BA9C4A340EC_RuntimeMethod_var);
		Type_t * L_18 = ___parentType1;
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_19;
		L_19 = JsonSubtypes_ToTypeInfo_mE898F929B019AED4916DE6D528B98E31DB45EE87(L_18, /*hidden argument*/NULL);
		Type_t * L_20;
		L_20 = JsonSubtypes_GetTypeByName_m6CEDE0469033160C6D3DDB9BC9099ABE95ACE4CF(L_17, L_19, /*hidden argument*/NULL);
		return L_20;
	}
}
// System.Boolean JsonSubTypes.JsonSubtypes::TryGetValueInJson(System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Linq.JToken>,System.String,Newtonsoft.Json.Linq.JToken&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonSubtypes_TryGetValueInJson_m62712164F1CBA2FB76B2EE98BC2746C6334B2CA6 (RuntimeObject* ___jObject0, String_t* ___propertyName1, JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 ** ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisString_t_m7B8EA6803D4985135A95AE73079A935FCAAAEF5A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m6397C103AFDCE68F75EDF44FB493A9B6651F7AFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tCA82A2DDB7320F5635AE664C97AABF14960F095B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass28_0_U3CTryGetValueInJsonU3Eb__0_m315BE8B2CF6169B893606CAAC450B7E9B800FE57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass28_0_tE397A4ADABB2E0976C05631A9386321280C595E0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass28_0_tE397A4ADABB2E0976C05631A9386321280C595E0 * V_0 = NULL;
	String_t* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass28_0_tE397A4ADABB2E0976C05631A9386321280C595E0 * L_0 = (U3CU3Ec__DisplayClass28_0_tE397A4ADABB2E0976C05631A9386321280C595E0 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass28_0_tE397A4ADABB2E0976C05631A9386321280C595E0_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass28_0__ctor_mB318F80F71A5BBD0196012688B362796BA0EB001(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass28_0_tE397A4ADABB2E0976C05631A9386321280C595E0 * L_1 = V_0;
		String_t* L_2 = ___propertyName1;
		NullCheck(L_1);
		L_1->set_propertyName_0(L_2);
		RuntimeObject* L_3 = ___jObject0;
		U3CU3Ec__DisplayClass28_0_tE397A4ADABB2E0976C05631A9386321280C595E0 * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = L_4->get_propertyName_0();
		JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 ** L_6 = ___value2;
		NullCheck(L_3);
		bool L_7;
		L_7 = InterfaceFuncInvoker2< bool, String_t*, JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 ** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Linq.JToken>::TryGetValue(!0,!1&) */, IDictionary_2_tCA82A2DDB7320F5635AE664C97AABF14960F095B_il2cpp_TypeInfo_var, L_3, L_5, (JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 **)L_6);
		if (!L_7)
		{
			goto IL_001e;
		}
	}
	{
		return (bool)1;
	}

IL_001e:
	{
		RuntimeObject* L_8 = ___jObject0;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.Generic.ICollection`1<!0> System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Linq.JToken>::get_Keys() */, IDictionary_2_tCA82A2DDB7320F5635AE664C97AABF14960F095B_il2cpp_TypeInfo_var, L_8);
		U3CU3Ec__DisplayClass28_0_tE397A4ADABB2E0976C05631A9386321280C595E0 * L_10 = V_0;
		Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D * L_11 = (Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D *)il2cpp_codegen_object_new(Func_2_t8B45BBA625F1F9197CEB4999F9B2A963FCE4B92D_il2cpp_TypeInfo_var);
		Func_2__ctor_m6397C103AFDCE68F75EDF44FB493A9B6651F7AFE(L_11, L_10, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass28_0_U3CTryGetValueInJsonU3Eb__0_m315BE8B2CF6169B893606CAAC450B7E9B800FE57_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m6397C103AFDCE68F75EDF44FB493A9B6651F7AFE_RuntimeMethod_var);
		String_t* L_12;
		L_12 = Enumerable_FirstOrDefault_TisString_t_m7B8EA6803D4985135A95AE73079A935FCAAAEF5A(L_9, L_11, /*hidden argument*/Enumerable_FirstOrDefault_TisString_t_m7B8EA6803D4985135A95AE73079A935FCAAAEF5A_RuntimeMethod_var);
		V_1 = L_12;
		String_t* L_13 = V_1;
		if (L_13)
		{
			goto IL_003b;
		}
	}
	{
		return (bool)0;
	}

IL_003b:
	{
		JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 ** L_14 = ___value2;
		RuntimeObject* L_15 = ___jObject0;
		String_t* L_16 = V_1;
		NullCheck(L_15);
		JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_17;
		L_17 = InterfaceFuncInvoker1< JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 *, String_t* >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Linq.JToken>::get_Item(!0) */, IDictionary_2_tCA82A2DDB7320F5635AE664C97AABF14960F095B_il2cpp_TypeInfo_var, L_15, L_16);
		*((RuntimeObject **)L_14) = (RuntimeObject *)L_17;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_14, (void*)(RuntimeObject *)L_17);
		return (bool)1;
	}
}
// System.Type JsonSubTypes.JsonSubtypes::GetTypeByName(System.String,System.Reflection.TypeInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * JsonSubtypes_GetTypeByName_m6CEDE0469033160C6D3DDB9BC9099ABE95ACE4CF (String_t* ___typeName0, TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * ___parentType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Assembly_t * V_0 = NULL;
	String_t* V_1 = NULL;
	Type_t * V_2 = NULL;
	TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * V_3 = NULL;
	String_t* V_4 = NULL;
	{
		String_t* L_0 = ___typeName0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (Type_t *)NULL;
	}

IL_0005:
	{
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_1 = ___parentType1;
		NullCheck(L_1);
		Assembly_t * L_2;
		L_2 = VirtFuncInvoker0< Assembly_t * >::Invoke(24 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_1);
		V_0 = L_2;
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_3 = ___parentType1;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_FullName() */, L_3);
		V_1 = L_4;
		Assembly_t * L_5 = V_0;
		String_t* L_6 = ___typeName0;
		NullCheck(L_5);
		Type_t * L_7;
		L_7 = VirtFuncInvoker1< Type_t *, String_t* >::Invoke(20 /* System.Type System.Reflection.Assembly::GetType(System.String) */, L_5, L_6);
		V_2 = L_7;
		String_t* L_8 = V_1;
		if (!L_8)
		{
			goto IL_0053;
		}
	}
	{
		Type_t * L_9 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_9, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0053;
		}
	}
	{
		String_t* L_11 = V_1;
		String_t* L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_12, /*hidden argument*/NULL);
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_14 = ___parentType1;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_14);
		NullCheck(L_15);
		int32_t L_16;
		L_16 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_15, /*hidden argument*/NULL);
		NullCheck(L_11);
		String_t* L_17;
		L_17 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_11, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)L_16)), /*hidden argument*/NULL);
		V_4 = L_17;
		Assembly_t * L_18 = V_0;
		String_t* L_19 = V_4;
		String_t* L_20 = ___typeName0;
		String_t* L_21;
		L_21 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_19, L_20, /*hidden argument*/NULL);
		NullCheck(L_18);
		Type_t * L_22;
		L_22 = VirtFuncInvoker3< Type_t *, String_t*, bool, bool >::Invoke(27 /* System.Type System.Reflection.Assembly::GetType(System.String,System.Boolean,System.Boolean) */, L_18, L_21, (bool)0, (bool)1);
		V_2 = L_22;
	}

IL_0053:
	{
		Type_t * L_23 = V_2;
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_24;
		L_24 = JsonSubtypes_ToTypeInfo_mE898F929B019AED4916DE6D528B98E31DB45EE87(L_23, /*hidden argument*/NULL);
		V_3 = L_24;
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_25 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0(L_25, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_006e;
		}
	}
	{
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_27 = ___parentType1;
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_28 = V_3;
		NullCheck(L_27);
		bool L_29;
		L_29 = VirtFuncInvoker1< bool, TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * >::Invoke(125 /* System.Boolean System.Reflection.TypeInfo::IsAssignableFrom(System.Reflection.TypeInfo) */, L_27, L_28);
		if (!L_29)
		{
			goto IL_006e;
		}
	}
	{
		Type_t * L_30 = V_2;
		return L_30;
	}

IL_006e:
	{
		return (Type_t *)NULL;
	}
}
// System.Type JsonSubTypes.JsonSubtypes::GetTypeFromMapping(JsonSubTypes.NullableDictionary`2<System.Object,System.Type>,Newtonsoft.Json.Linq.JToken,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * JsonSubtypes_GetTypeFromMapping_mD1186BB788F61DBA424BC028CCD1568B2E15F605 (NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8 * ___typeMapping0, JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * ___discriminatorToken1, JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC * ___serializer2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_FirstOrDefault_TisRuntimeObject_mEA30C68B8D8C7D44DF6690A8FC79E4A48A09C6F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullableDictionary_2_NotNullKeys_m9EB12FC9BC4B0D446303D917A31AD1DC15EC9C98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullableDictionary_2_TryGetValue_mB550CABEB309B59624BBE09D6232C14262AE58F2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Type_t * V_1 = NULL;
	Type_t * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	Type_t * V_4 = NULL;
	{
		JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_0 = ___discriminatorToken1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(12 /* Newtonsoft.Json.Linq.JTokenType Newtonsoft.Json.Linq.JToken::get_Type() */, L_0);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0016;
		}
	}
	{
		NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8 * L_2 = ___typeMapping0;
		NullCheck(L_2);
		bool L_3;
		L_3 = NullableDictionary_2_TryGetValue_mB550CABEB309B59624BBE09D6232C14262AE58F2(L_2, NULL, (Type_t **)(&V_1), /*hidden argument*/NullableDictionary_2_TryGetValue_mB550CABEB309B59624BBE09D6232C14262AE58F2_RuntimeMethod_var);
		Type_t * L_4 = V_1;
		return L_4;
	}

IL_0016:
	{
		NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8 * L_5 = ___typeMapping0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = NullableDictionary_2_NotNullKeys_m9EB12FC9BC4B0D446303D917A31AD1DC15EC9C98(L_5, /*hidden argument*/NullableDictionary_2_NotNullKeys_m9EB12FC9BC4B0D446303D917A31AD1DC15EC9C98_RuntimeMethod_var);
		RuntimeObject * L_7;
		L_7 = Enumerable_FirstOrDefault_TisRuntimeObject_mEA30C68B8D8C7D44DF6690A8FC79E4A48A09C6F9(L_6, /*hidden argument*/Enumerable_FirstOrDefault_TisRuntimeObject_mEA30C68B8D8C7D44DF6690A8FC79E4A48A09C6F9_RuntimeMethod_var);
		V_0 = L_7;
		RuntimeObject * L_8 = V_0;
		if (!L_8)
		{
			goto IL_0043;
		}
	}
	{
		RuntimeObject * L_9 = V_0;
		NullCheck(L_9);
		Type_t * L_10;
		L_10 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_11 = ___discriminatorToken1;
		Type_t * L_12 = V_2;
		JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC * L_13 = ___serializer2;
		NullCheck(L_11);
		RuntimeObject * L_14;
		L_14 = JToken_ToObject_m7745504A80062CEC04C90EBD88AD858A32034E4E(L_11, L_12, L_13, /*hidden argument*/NULL);
		V_3 = L_14;
		NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8 * L_15 = ___typeMapping0;
		RuntimeObject * L_16 = V_3;
		NullCheck(L_15);
		bool L_17;
		L_17 = NullableDictionary_2_TryGetValue_mB550CABEB309B59624BBE09D6232C14262AE58F2(L_15, L_16, (Type_t **)(&V_4), /*hidden argument*/NullableDictionary_2_TryGetValue_mB550CABEB309B59624BBE09D6232C14262AE58F2_RuntimeMethod_var);
		if (!L_17)
		{
			goto IL_0043;
		}
	}
	{
		Type_t * L_18 = V_4;
		return L_18;
	}

IL_0043:
	{
		return (Type_t *)NULL;
	}
}
// JsonSubTypes.NullableDictionary`2<System.Object,System.Type> JsonSubTypes.JsonSubtypes::GetSubTypeMapping(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8 * JsonSubtypes_GetSubTypeMapping_m427452111DE9DE4F20CFEC15E3092F8D505DCACA (JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m9C7E36700B647739E5A876CDAE9BFF37F1B9E2FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t16E63DAA551CE22F4B70EED70C9A0278938A91A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisKnownSubTypeAttribute_t9F1D658B2418F6AC43CE9F59F0B40A033A2F24B2_mB28DAD81A8A151DB730A385B27644BBF269F42CA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSubtypes_GetAttributes_TisKnownSubTypeAttribute_t9F1D658B2418F6AC43CE9F59F0B40A033A2F24B2_m77AD5CCF01E3B4B56626A47AB49433953A18E827_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ForEach_m826A41C00AEE484880924ADD95D67A51D8014DAB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullableDictionary_2__ctor_m911DC45EF73D28298A2CCDBD776EA97593031A16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass31_0_U3CGetSubTypeMappingU3Eb__0_mC58CAD61463E8D1DC6CAE6B109661F4E9C2C2A08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass31_0_tFB5FD3375CFA525D6A3C082C48885B21B357269D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass31_0_tFB5FD3375CFA525D6A3C082C48885B21B357269D * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass31_0_tFB5FD3375CFA525D6A3C082C48885B21B357269D * L_0 = (U3CU3Ec__DisplayClass31_0_tFB5FD3375CFA525D6A3C082C48885B21B357269D *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass31_0_tFB5FD3375CFA525D6A3C082C48885B21B357269D_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass31_0__ctor_m47CFC45F64B38A227C05B56DA7831675037E07C0(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass31_0_tFB5FD3375CFA525D6A3C082C48885B21B357269D * L_1 = V_0;
		NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8 * L_2 = (NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8 *)il2cpp_codegen_object_new(NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8_il2cpp_TypeInfo_var);
		NullableDictionary_2__ctor_m911DC45EF73D28298A2CCDBD776EA97593031A16(L_2, /*hidden argument*/NullableDictionary_2__ctor_m911DC45EF73D28298A2CCDBD776EA97593031A16_RuntimeMethod_var);
		NullCheck(L_1);
		L_1->set_dictionary_0(L_2);
		Type_t * L_3 = ___type0;
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_4;
		L_4 = JsonSubtypes_ToTypeInfo_mE898F929B019AED4916DE6D528B98E31DB45EE87(L_3, /*hidden argument*/NULL);
		RuntimeObject* L_5;
		L_5 = JsonSubtypes_GetAttributes_TisKnownSubTypeAttribute_t9F1D658B2418F6AC43CE9F59F0B40A033A2F24B2_m77AD5CCF01E3B4B56626A47AB49433953A18E827(L_4, /*hidden argument*/JsonSubtypes_GetAttributes_TisKnownSubTypeAttribute_t9F1D658B2418F6AC43CE9F59F0B40A033A2F24B2_m77AD5CCF01E3B4B56626A47AB49433953A18E827_RuntimeMethod_var);
		List_1_t54E8B43F818D5A55F0F00B5979B13581ADB54A69 * L_6;
		L_6 = Enumerable_ToList_TisKnownSubTypeAttribute_t9F1D658B2418F6AC43CE9F59F0B40A033A2F24B2_mB28DAD81A8A151DB730A385B27644BBF269F42CA(L_5, /*hidden argument*/Enumerable_ToList_TisKnownSubTypeAttribute_t9F1D658B2418F6AC43CE9F59F0B40A033A2F24B2_mB28DAD81A8A151DB730A385B27644BBF269F42CA_RuntimeMethod_var);
		U3CU3Ec__DisplayClass31_0_tFB5FD3375CFA525D6A3C082C48885B21B357269D * L_7 = V_0;
		Action_1_t16E63DAA551CE22F4B70EED70C9A0278938A91A1 * L_8 = (Action_1_t16E63DAA551CE22F4B70EED70C9A0278938A91A1 *)il2cpp_codegen_object_new(Action_1_t16E63DAA551CE22F4B70EED70C9A0278938A91A1_il2cpp_TypeInfo_var);
		Action_1__ctor_m9C7E36700B647739E5A876CDAE9BFF37F1B9E2FF(L_8, L_7, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass31_0_U3CGetSubTypeMappingU3Eb__0_mC58CAD61463E8D1DC6CAE6B109661F4E9C2C2A08_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m9C7E36700B647739E5A876CDAE9BFF37F1B9E2FF_RuntimeMethod_var);
		NullCheck(L_6);
		List_1_ForEach_m826A41C00AEE484880924ADD95D67A51D8014DAB(L_6, L_8, /*hidden argument*/List_1_ForEach_m826A41C00AEE484880924ADD95D67A51D8014DAB_RuntimeMethod_var);
		U3CU3Ec__DisplayClass31_0_tFB5FD3375CFA525D6A3C082C48885B21B357269D * L_9 = V_0;
		NullCheck(L_9);
		NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8 * L_10 = L_9->get_dictionary_0();
		return L_10;
	}
}
// System.Type JsonSubTypes.JsonSubtypes::GetFallbackSubType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * JsonSubtypes_GetFallbackSubType_m11C389C8281B0FF5E494EC01ED3BECCF79DD068F (JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSubtypes_GetAttribute_TisFallBackSubTypeAttribute_t1E7D5E7E674A152BD622622E7C81DB8AE432DE29_mCEB970FD2FED1BE4051B54418EDBA9EC837EE532_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	FallBackSubTypeAttribute_t1E7D5E7E674A152BD622622E7C81DB8AE432DE29 * G_B2_0 = NULL;
	FallBackSubTypeAttribute_t1E7D5E7E674A152BD622622E7C81DB8AE432DE29 * G_B1_0 = NULL;
	{
		Type_t * L_0 = ___type0;
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_1;
		L_1 = JsonSubtypes_ToTypeInfo_mE898F929B019AED4916DE6D528B98E31DB45EE87(L_0, /*hidden argument*/NULL);
		FallBackSubTypeAttribute_t1E7D5E7E674A152BD622622E7C81DB8AE432DE29 * L_2;
		L_2 = JsonSubtypes_GetAttribute_TisFallBackSubTypeAttribute_t1E7D5E7E674A152BD622622E7C81DB8AE432DE29_mCEB970FD2FED1BE4051B54418EDBA9EC837EE532(L_1, /*hidden argument*/JsonSubtypes_GetAttribute_TisFallBackSubTypeAttribute_t1E7D5E7E674A152BD622622E7C81DB8AE432DE29_mCEB970FD2FED1BE4051B54418EDBA9EC837EE532_RuntimeMethod_var);
		FallBackSubTypeAttribute_t1E7D5E7E674A152BD622622E7C81DB8AE432DE29 * L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0011;
		}
	}
	{
		return (Type_t *)NULL;
	}

IL_0011:
	{
		NullCheck(G_B2_0);
		Type_t * L_4;
		L_4 = FallBackSubTypeAttribute_get_SubType_mA05E90E196E5CE4A0FD5EE01D0817A4BB0727FE0_inline(G_B2_0, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Object JsonSubTypes.JsonSubtypes::ThreadStaticReadObject(Newtonsoft.Json.JsonReader,Newtonsoft.Json.JsonSerializer,Newtonsoft.Json.Linq.JToken,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonSubtypes_ThreadStaticReadObject_mFE3B1521B5F9C242DF013D451B8D75DB3AE32317 (JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * ___reader0, JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC * ___serializer1, JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * ___jToken2, Type_t * ___targetType3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_0 = ___jToken2;
		JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * L_1 = ___reader0;
		JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * L_2;
		L_2 = JsonSubtypes_CreateAnotherReader_m0E15E0ED15081F285C54C4B669380CD2BD6C56BB(L_0, L_1, /*hidden argument*/NULL);
		((JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4_il2cpp_TypeInfo_var))->set__reader_2(L_2);
		((JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4_il2cpp_TypeInfo_var))->set__isInsideRead_1((bool)1);
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC * L_3 = ___serializer1;
		JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * L_4 = ((JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4_il2cpp_TypeInfo_var))->get__reader_2();
		Type_t * L_5 = ___targetType3;
		NullCheck(L_3);
		RuntimeObject * L_6;
		L_6 = JsonSerializer_Deserialize_m691C77B3EAEFB80FE728CEF0630C872A642A11B9(L_3, L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		IL2CPP_LEAVE(0x28, FINALLY_0021);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0021;
	}

FINALLY_0021:
	{ // begin finally (depth: 1)
		((JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4_il2cpp_TypeInfo_var))->set__isInsideRead_1((bool)0);
		IL2CPP_END_FINALLY(33)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(33)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x28, IL_0028)
	}

IL_0028:
	{
		RuntimeObject * L_7 = V_0;
		return L_7;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Type> JsonSubTypes.JsonSubtypes::GetGenericTypeArguments(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonSubtypes_GetGenericTypeArguments_m310DC9E08EB641E50FCCE1C3A7D1D03D5B1734AE (Type_t * ___type0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_1;
		L_1 = VirtFuncInvoker0< TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(106 /* System.Type[] System.Type::get_GenericTypeArguments() */, L_0);
		return (RuntimeObject*)L_1;
	}
}
// System.Reflection.TypeInfo JsonSubTypes.JsonSubtypes::ToTypeInfo(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * JsonSubtypes_ToTypeInfo_mE898F929B019AED4916DE6D528B98E31DB45EE87 (Type_t * ___type0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___type0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F *)NULL;
	}

IL_0005:
	{
		Type_t * L_1 = ___type0;
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_2;
		L_2 = IntrospectionExtensions_GetTypeInfo_m77034F8576BE695819427C13103C591277C1B636(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Type JsonSubTypes.JsonSubtypes::ToType(System.Reflection.TypeInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * JsonSubtypes_ToType_mF4578FA04CD1990653BDAA6C1B4ED9FC8DCEF3C0 (TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * ___typeInfo0, const RuntimeMethod* method)
{
	{
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_0 = ___typeInfo0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (Type_t *)NULL;
	}

IL_0005:
	{
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_1 = ___typeInfo0;
		NullCheck(L_1);
		Type_t * L_2;
		L_2 = VirtFuncInvoker0< Type_t * >::Invoke(124 /* System.Type System.Reflection.TypeInfo::AsType() */, L_1);
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
// System.Void JsonSubTypes.JsonSubtypesByDiscriminatorValueConverter::.ctor(System.Type,System.String,JsonSubTypes.NullableDictionary`2<System.Object,System.Type>,System.Boolean,System.Boolean,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSubtypesByDiscriminatorValueConverter__ctor_m8E85B3E82B05ECF4708967FC28F63BA0749F65AA (JsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853 * __this, Type_t * ___baseType0, String_t* ___discriminatorProperty1, NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8 * ___subTypeMapping2, bool ___serializeDiscriminatorProperty3, bool ___addDiscriminatorFirst4, Type_t * ___fallbackType5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m99062862FEE98206F053E41E6C6882126164CDC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mF7D1ADCFEC50BD3A57750E4C3097E3859C5758A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mEA9AEC3D1E0DD8B5AC3FA4CBAB6B18FE81AD1C62_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t58BDA9E5B458C8AF2ECE79AC09FEF0241ED55135_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tAF736B5E349591D5E2EB0C332837D2DAD51656EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m371533B30F2A214A38A5F97C0C77A32950948F1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m09696F43305A4C5A4AB97511A7C41E1F33D7AFA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullableDictionary_2_Entries_m1373B6035D2560449A03D9567482ADC45CA3D5F8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_t09B898DA045563F8551DEEE3ECB9C13FE8A3B848  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * L_0 = (Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE *)il2cpp_codegen_object_new(Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mEA9AEC3D1E0DD8B5AC3FA4CBAB6B18FE81AD1C62(L_0, /*hidden argument*/Dictionary_2__ctor_mEA9AEC3D1E0DD8B5AC3FA4CBAB6B18FE81AD1C62_RuntimeMethod_var);
		__this->set__supportedTypes_9(L_0);
		Type_t * L_1 = ___baseType0;
		String_t* L_2 = ___discriminatorProperty1;
		Type_t * L_3 = ___fallbackType5;
		JsonSubtypesConverter__ctor_mDE2C494F61AF0CAB10E2C944F7376B67FE615E40(__this, L_1, L_2, L_3, /*hidden argument*/NULL);
		bool L_4 = ___serializeDiscriminatorProperty3;
		__this->set__serializeDiscriminatorProperty_8(L_4);
		NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8 * L_5 = ___subTypeMapping2;
		__this->set__subTypeMapping_10(L_5);
		bool L_6 = ___addDiscriminatorFirst4;
		__this->set__addDiscriminatorFirst_7(L_6);
		NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8 * L_7 = __this->get__subTypeMapping_10();
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = NullableDictionary_2_Entries_m1373B6035D2560449A03D9567482ADC45CA3D5F8(L_7, /*hidden argument*/NullableDictionary_2_Entries_m1373B6035D2560449A03D9567482ADC45CA3D5F8_RuntimeMethod_var);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Type>>::GetEnumerator() */, IEnumerable_1_t58BDA9E5B458C8AF2ECE79AC09FEF0241ED55135_il2cpp_TypeInfo_var, L_8);
		V_0 = L_9;
	}

IL_003d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0086;
		}

IL_003f:
		{
			RuntimeObject* L_10 = V_0;
			NullCheck(L_10);
			KeyValuePair_2_t09B898DA045563F8551DEEE3ECB9C13FE8A3B848  L_11;
			L_11 = InterfaceFuncInvoker0< KeyValuePair_2_t09B898DA045563F8551DEEE3ECB9C13FE8A3B848  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Type>>::get_Current() */, IEnumerator_1_tAF736B5E349591D5E2EB0C332837D2DAD51656EE_il2cpp_TypeInfo_var, L_10);
			V_1 = L_11;
			Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * L_12 = __this->get__supportedTypes_9();
			Type_t * L_13;
			L_13 = KeyValuePair_2_get_Value_m09696F43305A4C5A4AB97511A7C41E1F33D7AFA8_inline((KeyValuePair_2_t09B898DA045563F8551DEEE3ECB9C13FE8A3B848 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m09696F43305A4C5A4AB97511A7C41E1F33D7AFA8_RuntimeMethod_var);
			NullCheck(L_12);
			bool L_14;
			L_14 = Dictionary_2_ContainsKey_mF7D1ADCFEC50BD3A57750E4C3097E3859C5758A2(L_12, L_13, /*hidden argument*/Dictionary_2_ContainsKey_mF7D1ADCFEC50BD3A57750E4C3097E3859C5758A2_RuntimeMethod_var);
			if (!L_14)
			{
				goto IL_006d;
			}
		}

IL_005a:
		{
			bool L_15 = __this->get__serializeDiscriminatorProperty_8();
			if (!L_15)
			{
				goto IL_0086;
			}
		}

IL_0062:
		{
			InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_16 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
			InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3A6995567753765C7CB277FEAC68032A2F027D93)), /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonSubtypesByDiscriminatorValueConverter__ctor_m8E85B3E82B05ECF4708967FC28F63BA0749F65AA_RuntimeMethod_var)));
		}

IL_006d:
		{
			Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * L_17 = __this->get__supportedTypes_9();
			Type_t * L_18;
			L_18 = KeyValuePair_2_get_Value_m09696F43305A4C5A4AB97511A7C41E1F33D7AFA8_inline((KeyValuePair_2_t09B898DA045563F8551DEEE3ECB9C13FE8A3B848 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m09696F43305A4C5A4AB97511A7C41E1F33D7AFA8_RuntimeMethod_var);
			RuntimeObject * L_19;
			L_19 = KeyValuePair_2_get_Key_m371533B30F2A214A38A5F97C0C77A32950948F1B_inline((KeyValuePair_2_t09B898DA045563F8551DEEE3ECB9C13FE8A3B848 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m371533B30F2A214A38A5F97C0C77A32950948F1B_RuntimeMethod_var);
			NullCheck(L_17);
			Dictionary_2_Add_m99062862FEE98206F053E41E6C6882126164CDC9(L_17, L_18, L_19, /*hidden argument*/Dictionary_2_Add_m99062862FEE98206F053E41E6C6882126164CDC9_RuntimeMethod_var);
		}

IL_0086:
		{
			RuntimeObject* L_20 = V_0;
			NullCheck(L_20);
			bool L_21;
			L_21 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_20);
			if (L_21)
			{
				goto IL_003f;
			}
		}

IL_008e:
		{
			IL2CPP_LEAVE(0x9A, FINALLY_0090);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0090;
	}

FINALLY_0090:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_22 = V_0;
			if (!L_22)
			{
				goto IL_0099;
			}
		}

IL_0093:
		{
			RuntimeObject* L_23 = V_0;
			NullCheck(L_23);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_23);
		}

IL_0099:
		{
			IL2CPP_END_FINALLY(144)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(144)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x9A, IL_009a)
	}

IL_009a:
	{
		return;
	}
}
// JsonSubTypes.NullableDictionary`2<System.Object,System.Type> JsonSubTypes.JsonSubtypesByDiscriminatorValueConverter::GetSubTypeMapping(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8 * JsonSubtypesByDiscriminatorValueConverter_GetSubTypeMapping_m5BB7F6C45EE2D4C3DFD845DD9F345634B9A1B518 (JsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	{
		NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8 * L_0 = __this->get__subTypeMapping_10();
		return L_0;
	}
}
// System.Boolean JsonSubTypes.JsonSubtypesByDiscriminatorValueConverter::CanConvert(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonSubtypesByDiscriminatorValueConverter_CanConvert_m6B71ED294E7EBBBAFB920B96AAEABF516FCEF28B (JsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853 * __this, Type_t * ___objectType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_mF7D1ADCFEC50BD3A57750E4C3097E3859C5758A2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___objectType0;
		bool L_1;
		L_1 = JsonSubtypesConverter_CanConvert_m0ADC5B32B9B0E7AA8D9172569B9B1D9C0B4F0472(__this, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * L_2 = __this->get__supportedTypes_9();
		Type_t * L_3 = ___objectType0;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_ContainsKey_mF7D1ADCFEC50BD3A57750E4C3097E3859C5758A2(L_2, L_3, /*hidden argument*/Dictionary_2_ContainsKey_mF7D1ADCFEC50BD3A57750E4C3097E3859C5758A2_RuntimeMethod_var);
		return L_4;
	}

IL_0016:
	{
		return (bool)1;
	}
}
// System.Boolean JsonSubTypes.JsonSubtypesByDiscriminatorValueConverter::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonSubtypesByDiscriminatorValueConverter_get_CanWrite_mD1BD4F1A460DD8E93FD9676A4ED2DBF2F5F234DF (JsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get__serializeDiscriminatorProperty_8();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		bool L_1 = ((JsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(JsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853_il2cpp_TypeInfo_var))->get__isInsideWrite_5();
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		return (bool)1;
	}

IL_0013:
	{
		bool L_2 = ((JsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(JsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853_il2cpp_TypeInfo_var))->get__allowNextWrite_6();
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		((JsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(JsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853_il2cpp_TypeInfo_var))->set__allowNextWrite_6((bool)0);
		return (bool)1;
	}

IL_0022:
	{
		((JsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(JsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853_il2cpp_TypeInfo_var))->set__allowNextWrite_6((bool)1);
		return (bool)0;
	}
}
// System.Void JsonSubTypes.JsonSubtypesByDiscriminatorValueConverter::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSubtypesByDiscriminatorValueConverter_WriteJson_m8AA32B1D7EA5DA9D115C3D6AF2C04DD3EBE89082 (JsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853 * __this, JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837 * ___writer0, RuntimeObject * ___value1, JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC * ___serializer2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisJsonConverter_t260CE65C2123A11522CAEFA058859D3E97145B0C_m7CD7096E4885614B731E41F9185DE7AB393238D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m9983D0130915B8182215B7C9B3D3A7D84FABB77F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JProperty_t6B592BFC6895980207CC8356187EB1D0328A328E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		((JsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(JsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853_il2cpp_TypeInfo_var))->set__isInsideWrite_5((bool)1);
		((JsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(JsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853_il2cpp_TypeInfo_var))->set__allowNextWrite_6((bool)0);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_0 = ___value1;
		JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC * L_1 = ___serializer2;
		JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8 * L_2;
		L_2 = JObject_FromObject_m6CA6D17390A41FDA6B3D3F1422408D777A2C303C(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		IL2CPP_LEAVE(0x1D, FINALLY_0016);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0016;
	}

FINALLY_0016:
	{ // begin finally (depth: 1)
		((JsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(JsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853_il2cpp_TypeInfo_var))->set__isInsideWrite_5((bool)0);
		IL2CPP_END_FINALLY(22)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(22)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1D, IL_001d)
	}

IL_001d:
	{
		Dictionary_2_t1BCBBB8B077DB2EE009E3E0992AEAA34875A70FE * L_3 = __this->get__supportedTypes_9();
		RuntimeObject * L_4 = ___value1;
		NullCheck(L_4);
		Type_t * L_5;
		L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_6;
		L_6 = Dictionary_2_TryGetValue_m9983D0130915B8182215B7C9B3D3A7D84FABB77F(L_3, L_5, (RuntimeObject **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m9983D0130915B8182215B7C9B3D3A7D84FABB77F_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject * L_7 = ___value1;
		NullCheck(L_7);
		Type_t * L_8;
		L_8 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_FullName() */, L_8);
		String_t* L_10;
		L_10 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAE7EC7FB5A3E44DA34365DF6059327B45EC6B93E)), L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6B98B0D835E532E9DB2011026A0DE4D14ECD5376)), /*hidden argument*/NULL);
		JsonSerializationException_tCD1256C587B4859A1B7964BD0578C27A6D58580F * L_11 = (JsonSerializationException_tCD1256C587B4859A1B7964BD0578C27A6D58580F *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonSerializationException_tCD1256C587B4859A1B7964BD0578C27A6D58580F_il2cpp_TypeInfo_var)));
		JsonSerializationException__ctor_m6D353251D7B8D14EE23FFB76959E77EDC7B5244C(L_11, L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonSubtypesByDiscriminatorValueConverter_WriteJson_m8AA32B1D7EA5DA9D115C3D6AF2C04DD3EBE89082_RuntimeMethod_var)));
	}

IL_0052:
	{
		RuntimeObject * L_12 = V_1;
		JsonSerializer_t061190559676505AFDF8D3BB4E804941781A3EEC * L_13 = ___serializer2;
		IL2CPP_RUNTIME_CLASS_INIT(JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5_il2cpp_TypeInfo_var);
		JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_14;
		L_14 = JToken_FromObject_m9BE8E255610F8712671AABA5A1A212B74FE3BE76(L_12, L_13, /*hidden argument*/NULL);
		V_2 = L_14;
		bool L_15 = __this->get__addDiscriminatorFirst_7();
		if (!L_15)
		{
			goto IL_0076;
		}
	}
	{
		JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8 * L_16 = V_0;
		String_t* L_17 = ((JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4 *)__this)->get_JsonDiscriminatorPropertyName_0();
		JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_18 = V_2;
		JProperty_t6B592BFC6895980207CC8356187EB1D0328A328E * L_19 = (JProperty_t6B592BFC6895980207CC8356187EB1D0328A328E *)il2cpp_codegen_object_new(JProperty_t6B592BFC6895980207CC8356187EB1D0328A328E_il2cpp_TypeInfo_var);
		JProperty__ctor_m96D6E425930B25EDA7C4CDFBA359579D07F85601(L_19, L_17, L_18, /*hidden argument*/NULL);
		NullCheck(L_16);
		JContainer_AddFirst_mAAE9E08AF5B74A49AC9A2E7439B92DF58E41DF88(L_16, L_19, /*hidden argument*/NULL);
		goto IL_0083;
	}

IL_0076:
	{
		JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8 * L_20 = V_0;
		String_t* L_21 = ((JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4 *)__this)->get_JsonDiscriminatorPropertyName_0();
		JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_22 = V_2;
		NullCheck(L_20);
		JObject_Add_m8882BAAB7D02945BB16A30F46911277191FE3136(L_20, L_21, L_22, /*hidden argument*/NULL);
	}

IL_0083:
	{
		JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8 * L_23 = V_0;
		JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837 * L_24 = ___writer0;
		JsonConverterU5BU5D_t24875E5AE31553BA6031CA161A1E6AF7135FAE29* L_25;
		L_25 = Array_Empty_TisJsonConverter_t260CE65C2123A11522CAEFA058859D3E97145B0C_m7CD7096E4885614B731E41F9185DE7AB393238D6_inline(/*hidden argument*/Array_Empty_TisJsonConverter_t260CE65C2123A11522CAEFA058859D3E97145B0C_m7CD7096E4885614B731E41F9185DE7AB393238D6_RuntimeMethod_var);
		NullCheck(L_23);
		VirtActionInvoker2< JsonWriter_t03D76EB22C4176FE8C8C47EC6AB992546EFD1837 *, JsonConverterU5BU5D_t24875E5AE31553BA6031CA161A1E6AF7135FAE29* >::Invoke(19 /* System.Void Newtonsoft.Json.Linq.JToken::WriteTo(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.JsonConverter[]) */, L_23, L_24, L_25);
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
// System.Void JsonSubTypes.JsonSubtypesConverter::.ctor(System.Type,System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSubtypesConverter__ctor_mDE2C494F61AF0CAB10E2C944F7376B67FE615E40 (JsonSubtypesConverter_t302C3D0C47335B3E29817D6E1E015D8738DD85D5 * __this, Type_t * ___baseType0, String_t* ___jsonDiscriminatorPropertyName1, Type_t * ___fallbackType2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___jsonDiscriminatorPropertyName1;
		JsonSubtypes__ctor_mD9543DD4D5BD0562AFC51A61A7F0C4012B2A472D(__this, L_0, /*hidden argument*/NULL);
		Type_t * L_1 = ___baseType0;
		__this->set__baseType_3(L_1);
		Type_t * L_2 = ___fallbackType2;
		__this->set__fallbackType_4(L_2);
		return;
	}
}
// System.Type JsonSubTypes.JsonSubtypesConverter::GetFallbackSubType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * JsonSubtypesConverter_GetFallbackSubType_m44F93BEADDB605C74ADA4703B06B30F53F02E56A (JsonSubtypesConverter_t302C3D0C47335B3E29817D6E1E015D8738DD85D5 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get__fallbackType_4();
		return L_0;
	}
}
// System.Boolean JsonSubTypes.JsonSubtypesConverter::CanConvert(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonSubtypesConverter_CanConvert_m0ADC5B32B9B0E7AA8D9172569B9B1D9C0B4F0472 (JsonSubtypesConverter_t302C3D0C47335B3E29817D6E1E015D8738DD85D5 * __this, Type_t * ___objectType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___objectType0;
		Type_t * L_1 = __this->get__baseType_3();
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_0, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		Type_t * L_3 = __this->get__baseType_3();
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_4;
		L_4 = JsonSubtypes_ToTypeInfo_mE898F929B019AED4916DE6D528B98E31DB45EE87(L_3, /*hidden argument*/NULL);
		Type_t * L_5 = ___objectType0;
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_6;
		L_6 = JsonSubtypes_ToTypeInfo_mE898F929B019AED4916DE6D528B98E31DB45EE87(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_7;
		L_7 = VirtFuncInvoker1< bool, TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * >::Invoke(125 /* System.Boolean System.Reflection.TypeInfo::IsAssignableFrom(System.Reflection.TypeInfo) */, L_4, L_6);
		return L_7;
	}

IL_0025:
	{
		return (bool)1;
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
// JsonSubTypes.JsonSubtypesConverterBuilder JsonSubTypes.JsonSubtypesConverterBuilder::Of(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonSubtypesConverterBuilder_tF39D5EDB289B7C600A98959FBC9A68E01DB3C46F * JsonSubtypesConverterBuilder_Of_m6A725181DDF2362482F5B5B01A7DF84D99311D84 (Type_t * ___baseType0, String_t* ___discriminatorProperty1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSubtypesConverterBuilder_tF39D5EDB289B7C600A98959FBC9A68E01DB3C46F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JsonSubtypesConverterBuilder_tF39D5EDB289B7C600A98959FBC9A68E01DB3C46F * V_0 = NULL;
	{
		JsonSubtypesConverterBuilder_tF39D5EDB289B7C600A98959FBC9A68E01DB3C46F * L_0 = (JsonSubtypesConverterBuilder_tF39D5EDB289B7C600A98959FBC9A68E01DB3C46F *)il2cpp_codegen_object_new(JsonSubtypesConverterBuilder_tF39D5EDB289B7C600A98959FBC9A68E01DB3C46F_il2cpp_TypeInfo_var);
		JsonSubtypesConverterBuilder__ctor_m4AA848C73D7484EDE860BBCD6C7967FCFD5AFE17(L_0, /*hidden argument*/NULL);
		JsonSubtypesConverterBuilder_tF39D5EDB289B7C600A98959FBC9A68E01DB3C46F * L_1 = L_0;
		Type_t * L_2 = ___baseType0;
		NullCheck(L_1);
		L_1->set__baseType_0(L_2);
		JsonSubtypesConverterBuilder_tF39D5EDB289B7C600A98959FBC9A68E01DB3C46F * L_3 = L_1;
		String_t* L_4 = ___discriminatorProperty1;
		NullCheck(L_3);
		L_3->set__discriminatorProperty_1(L_4);
		V_0 = L_3;
		JsonSubtypesConverterBuilder_tF39D5EDB289B7C600A98959FBC9A68E01DB3C46F * L_5 = V_0;
		return L_5;
	}
}
// JsonSubTypes.JsonSubtypesConverterBuilder JsonSubTypes.JsonSubtypesConverterBuilder::SerializeDiscriminatorProperty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonSubtypesConverterBuilder_tF39D5EDB289B7C600A98959FBC9A68E01DB3C46F * JsonSubtypesConverterBuilder_SerializeDiscriminatorProperty_mC7125C206871F20BBC2AF87AB9B61C5759046929 (JsonSubtypesConverterBuilder_tF39D5EDB289B7C600A98959FBC9A68E01DB3C46F * __this, const RuntimeMethod* method)
{
	{
		JsonSubtypesConverterBuilder_tF39D5EDB289B7C600A98959FBC9A68E01DB3C46F * L_0;
		L_0 = JsonSubtypesConverterBuilder_SerializeDiscriminatorProperty_mCE0F86A3E5B78B0F82E9DA2473C6C3EB26A8F5D2(__this, (bool)0, /*hidden argument*/NULL);
		return L_0;
	}
}
// JsonSubTypes.JsonSubtypesConverterBuilder JsonSubTypes.JsonSubtypesConverterBuilder::SerializeDiscriminatorProperty(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonSubtypesConverterBuilder_tF39D5EDB289B7C600A98959FBC9A68E01DB3C46F * JsonSubtypesConverterBuilder_SerializeDiscriminatorProperty_mCE0F86A3E5B78B0F82E9DA2473C6C3EB26A8F5D2 (JsonSubtypesConverterBuilder_tF39D5EDB289B7C600A98959FBC9A68E01DB3C46F * __this, bool ___addDiscriminatorFirst0, const RuntimeMethod* method)
{
	{
		__this->set__serializeDiscriminatorProperty_3((bool)1);
		bool L_0 = ___addDiscriminatorFirst0;
		__this->set__addDiscriminatorFirst_4(L_0);
		return __this;
	}
}
// JsonSubTypes.JsonSubtypesConverterBuilder JsonSubTypes.JsonSubtypesConverterBuilder::RegisterSubtype(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonSubtypesConverterBuilder_tF39D5EDB289B7C600A98959FBC9A68E01DB3C46F * JsonSubtypesConverterBuilder_RegisterSubtype_mC6D22905041923191AC8FBE7C993BC225FBF5324 (JsonSubtypesConverterBuilder_tF39D5EDB289B7C600A98959FBC9A68E01DB3C46F * __this, Type_t * ___subtype0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullableDictionary_2_Add_m86E340469A6AE4D9A177687FB3A337F88BF90D6E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8 * L_0 = __this->get__subTypeMapping_2();
		RuntimeObject * L_1 = ___value1;
		Type_t * L_2 = ___subtype0;
		NullCheck(L_0);
		NullableDictionary_2_Add_m86E340469A6AE4D9A177687FB3A337F88BF90D6E(L_0, L_1, L_2, /*hidden argument*/NullableDictionary_2_Add_m86E340469A6AE4D9A177687FB3A337F88BF90D6E_RuntimeMethod_var);
		return __this;
	}
}
// Newtonsoft.Json.JsonConverter JsonSubTypes.JsonSubtypesConverterBuilder::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonConverter_t260CE65C2123A11522CAEFA058859D3E97145B0C * JsonSubtypesConverterBuilder_Build_m22F592BA18CA616661520DFD9D733BFF06802E84 (JsonSubtypesConverterBuilder_tF39D5EDB289B7C600A98959FBC9A68E01DB3C46F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = __this->get__baseType_0();
		String_t* L_1 = __this->get__discriminatorProperty_1();
		NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8 * L_2 = __this->get__subTypeMapping_2();
		bool L_3 = __this->get__serializeDiscriminatorProperty_3();
		bool L_4 = __this->get__addDiscriminatorFirst_4();
		Type_t * L_5 = __this->get__fallbackSubtype_5();
		JsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853 * L_6 = (JsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853 *)il2cpp_codegen_object_new(JsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853_il2cpp_TypeInfo_var);
		JsonSubtypesByDiscriminatorValueConverter__ctor_m8E85B3E82B05ECF4708967FC28F63BA0749F65AA(L_6, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Void JsonSubTypes.JsonSubtypesConverterBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSubtypesConverterBuilder__ctor_m4AA848C73D7484EDE860BBCD6C7967FCFD5AFE17 (JsonSubtypesConverterBuilder_tF39D5EDB289B7C600A98959FBC9A68E01DB3C46F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullableDictionary_2__ctor_m911DC45EF73D28298A2CCDBD776EA97593031A16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8 * L_0 = (NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8 *)il2cpp_codegen_object_new(NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8_il2cpp_TypeInfo_var);
		NullableDictionary_2__ctor_m911DC45EF73D28298A2CCDBD776EA97593031A16(L_0, /*hidden argument*/NullableDictionary_2__ctor_m911DC45EF73D28298A2CCDBD776EA97593031A16_RuntimeMethod_var);
		__this->set__subTypeMapping_2(L_0);
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
// System.Void JsonSubTypes.JsonSubtypes/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m830D974B5DD306D55FDE39BCC6E26CC49C311C90 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824 * L_0 = (U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824 *)il2cpp_codegen_object_new(U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m5617E10B85FCF40512930C05EDD0E3983BC248F0(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void JsonSubTypes.JsonSubtypes/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5617E10B85FCF40512930C05EDD0E3983BC248F0 (U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean JsonSubTypes.JsonSubtypes/<>c::<GetTypeByPropertyPresence>b__25_1(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetTypeByPropertyPresenceU3Eb__25_1_m31FFB5437C657DF01C5BFD72CEA2E9580382D874 (U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___type0;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0(L_0, (Type_t *)NULL, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String JsonSubTypes.JsonSubtypes/<>c::<GetTypeByPropertyPresence>b__25_2(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CGetTypeByPropertyPresenceU3Eb__25_2_mC0ECD997D07DBCC902377E57B1CEC8CBB6E3D1C5 (U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824 * __this, Type_t * ___t0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___t0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_FullName() */, L_0);
		return L_1;
	}
}
// System.String JsonSubTypes.JsonSubtypes/<>c::<GetTypesByPropertyPresence>b__26_0(JsonSubTypes.JsonSubtypes/KnownSubTypeWithPropertyAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CGetTypesByPropertyPresenceU3Eb__26_0_m877041A14AFBC2285381D37CEC3972F126F1C7FA (U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824 * __this, KnownSubTypeWithPropertyAttribute_tA28E5B138A0E2B81AF25B9E22AC022F06C0B66E6 * ___a0, const RuntimeMethod* method)
{
	{
		KnownSubTypeWithPropertyAttribute_tA28E5B138A0E2B81AF25B9E22AC022F06C0B66E6 * L_0 = ___a0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = KnownSubTypeWithPropertyAttribute_get_PropertyName_mC62CFBE5624081711F1B1C0B8B10C4DFCE9E61F2_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Type JsonSubTypes.JsonSubtypes/<>c::<GetTypesByPropertyPresence>b__26_1(JsonSubTypes.JsonSubtypes/KnownSubTypeWithPropertyAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * U3CU3Ec_U3CGetTypesByPropertyPresenceU3Eb__26_1_m2BF42C7EDC67412F7D00B1DD1DDC2717DACEF679 (U3CU3Ec_tB2DBA068DBAD857521D05CCB332656DF77E2E824 * __this, KnownSubTypeWithPropertyAttribute_tA28E5B138A0E2B81AF25B9E22AC022F06C0B66E6 * ___a0, const RuntimeMethod* method)
{
	{
		KnownSubTypeWithPropertyAttribute_tA28E5B138A0E2B81AF25B9E22AC022F06C0B66E6 * L_0 = ___a0;
		NullCheck(L_0);
		Type_t * L_1;
		L_1 = KnownSubTypeWithPropertyAttribute_get_SubType_mB07ED0D2427D4F1FAADD317709C08AA705DA5FE3_inline(L_0, /*hidden argument*/NULL);
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
// System.Void JsonSubTypes.JsonSubtypes/<>c__DisplayClass23_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass23_0__ctor_m1F889D65807EE7F738093FFBA5B2277AE619A802 (U3CU3Ec__DisplayClass23_0_tA905FBA00BBA22CE5D672BEACB7C7ED33BE3F2A3 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean JsonSubTypes.JsonSubtypes/<>c__DisplayClass23_0::<GetType>b__0(JsonSubTypes.JsonSubtypesByDiscriminatorValueConverter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass23_0_U3CGetTypeU3Eb__0_m69D4FFC4CE298B2E6213FB0C9A069631902FADE2 (U3CU3Ec__DisplayClass23_0_tA905FBA00BBA22CE5D672BEACB7C7ED33BE3F2A3 * __this, JsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853 * ___c0, const RuntimeMethod* method)
{
	{
		JsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853 * L_0 = ___c0;
		JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4 * L_1 = __this->get_currentTypeResolver_0();
		return (bool)((((int32_t)((((RuntimeObject*)(JsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853 *)L_0) == ((RuntimeObject*)(JsonSubtypes_t6A123643D664CC35FCE9306740CE70543A76A3D4 *)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
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
// System.Void JsonSubTypes.JsonSubtypes/<>c__DisplayClass24_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass24_0__ctor_m29283974DAC84AE4149FF9399A38EA06F45D8610 (U3CU3Ec__DisplayClass24_0_tA1025D3D9F5804E66668EE0EF431E16B1287165F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean JsonSubTypes.JsonSubtypes/<>c__DisplayClass24_0::<GetTypeResolver>b__0(JsonSubTypes.JsonSubtypesByDiscriminatorValueConverter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass24_0_U3CGetTypeResolverU3Eb__0_m2E857A9647C7E01122F6C389922BDDBF0454E79E (U3CU3Ec__DisplayClass24_0_tA1025D3D9F5804E66668EE0EF431E16B1287165F * __this, JsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853 * ___c0, const RuntimeMethod* method)
{
	{
		JsonSubtypesByDiscriminatorValueConverter_t3CB44A65E3B10AC373CA1C2992F5F96620136853 * L_0 = ___c0;
		TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F * L_1 = __this->get_targetType_0();
		Type_t * L_2;
		L_2 = JsonSubtypes_ToType_mF4578FA04CD1990653BDAA6C1B4ED9FC8DCEF3C0(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = VirtFuncInvoker1< bool, Type_t * >::Invoke(6 /* System.Boolean Newtonsoft.Json.JsonConverter::CanConvert(System.Type) */, L_0, L_2);
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
// System.Void JsonSubTypes.JsonSubtypes/<>c__DisplayClass25_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass25_0__ctor_mA699481CF1250FA52CA5E1812C7061357AF16ED4 (U3CU3Ec__DisplayClass25_0_tDB74EF4E3450B203DF6EC1454F1B849A0330B7CF * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Type JsonSubTypes.JsonSubtypes/<>c__DisplayClass25_0::<GetTypeByPropertyPresence>b__0(System.Collections.Generic.KeyValuePair`2<System.String,System.Type>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * U3CU3Ec__DisplayClass25_0_U3CGetTypeByPropertyPresenceU3Eb__0_mBA6F7557586A61D0F135463BD0BF531FB15191B4 (U3CU3Ec__DisplayClass25_0_tDB74EF4E3450B203DF6EC1454F1B849A0330B7CF * __this, KeyValuePair_2_t822BECCD5A164069D108533DCA1726AD40B884C0  ___knownType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m32599DB005AB1591D95A403F59D9ADB78AB08E2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m1749BC57BAC3169021504BFD403CB3F3286AD554_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * V_0 = NULL;
	JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * V_1 = NULL;
	{
		JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8 * L_0 = __this->get_jObject_0();
		String_t* L_1;
		L_1 = KeyValuePair_2_get_Key_m32599DB005AB1591D95A403F59D9ADB78AB08E2D_inline((KeyValuePair_2_t822BECCD5A164069D108533DCA1726AD40B884C0 *)(&___knownType0), /*hidden argument*/KeyValuePair_2_get_Key_m32599DB005AB1591D95A403F59D9ADB78AB08E2D_RuntimeMethod_var);
		bool L_2;
		L_2 = JsonSubtypes_TryGetValueInJson_m62712164F1CBA2FB76B2EE98BC2746C6334B2CA6(L_0, L_1, (JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 **)(&V_1), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		Type_t * L_3;
		L_3 = KeyValuePair_2_get_Value_m1749BC57BAC3169021504BFD403CB3F3286AD554_inline((KeyValuePair_2_t822BECCD5A164069D108533DCA1726AD40B884C0 *)(&___knownType0), /*hidden argument*/KeyValuePair_2_get_Value_m1749BC57BAC3169021504BFD403CB3F3286AD554_RuntimeMethod_var);
		return L_3;
	}

IL_001e:
	{
		JObject_t04256A0178CBA5F28F8947EC8EAB93F0585B6BD8 * L_4 = __this->get_jObject_0();
		String_t* L_5;
		L_5 = KeyValuePair_2_get_Key_m32599DB005AB1591D95A403F59D9ADB78AB08E2D_inline((KeyValuePair_2_t822BECCD5A164069D108533DCA1726AD40B884C0 *)(&___knownType0), /*hidden argument*/KeyValuePair_2_get_Key_m32599DB005AB1591D95A403F59D9ADB78AB08E2D_RuntimeMethod_var);
		NullCheck(L_4);
		JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_6;
		L_6 = JToken_SelectToken_mD5A623B4FE39A4DF7DF88CB8231AD9C2796BFC55(L_4, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		JToken_tDEA7ED07CCB6C02379418D016CB218D8F6C204E5 * L_7 = V_0;
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		Type_t * L_8;
		L_8 = KeyValuePair_2_get_Value_m1749BC57BAC3169021504BFD403CB3F3286AD554_inline((KeyValuePair_2_t822BECCD5A164069D108533DCA1726AD40B884C0 *)(&___knownType0), /*hidden argument*/KeyValuePair_2_get_Value_m1749BC57BAC3169021504BFD403CB3F3286AD554_RuntimeMethod_var);
		return L_8;
	}

IL_003c:
	{
		return (Type_t *)NULL;
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
// System.Void JsonSubTypes.JsonSubtypes/<>c__DisplayClass28_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass28_0__ctor_mB318F80F71A5BBD0196012688B362796BA0EB001 (U3CU3Ec__DisplayClass28_0_tE397A4ADABB2E0976C05631A9386321280C595E0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean JsonSubTypes.JsonSubtypes/<>c__DisplayClass28_0::<TryGetValueInJson>b__0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass28_0_U3CTryGetValueInJsonU3Eb__0_m315BE8B2CF6169B893606CAAC450B7E9B800FE57 (U3CU3Ec__DisplayClass28_0_tE397A4ADABB2E0976C05631A9386321280C595E0 * __this, String_t* ___jsonProperty0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___jsonProperty0;
		String_t* L_1 = __this->get_propertyName_0();
		bool L_2;
		L_2 = String_Equals_mD65682B0BB7933CC7A8561AE34DED02E4F3BBBE5(L_0, L_1, 5, /*hidden argument*/NULL);
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
// System.Void JsonSubTypes.JsonSubtypes/<>c__DisplayClass31_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0__ctor_m47CFC45F64B38A227C05B56DA7831675037E07C0 (U3CU3Ec__DisplayClass31_0_tFB5FD3375CFA525D6A3C082C48885B21B357269D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void JsonSubTypes.JsonSubtypes/<>c__DisplayClass31_0::<GetSubTypeMapping>b__0(JsonSubTypes.JsonSubtypes/KnownSubTypeAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0_U3CGetSubTypeMappingU3Eb__0_mC58CAD61463E8D1DC6CAE6B109661F4E9C2C2A08 (U3CU3Ec__DisplayClass31_0_tFB5FD3375CFA525D6A3C082C48885B21B357269D * __this, KnownSubTypeAttribute_t9F1D658B2418F6AC43CE9F59F0B40A033A2F24B2 * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullableDictionary_2_Add_m86E340469A6AE4D9A177687FB3A337F88BF90D6E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullableDictionary_2_t61786AEABE12F281BAED6792761795DE70419EF8 * L_0 = __this->get_dictionary_0();
		KnownSubTypeAttribute_t9F1D658B2418F6AC43CE9F59F0B40A033A2F24B2 * L_1 = ___x0;
		NullCheck(L_1);
		RuntimeObject * L_2;
		L_2 = KnownSubTypeAttribute_get_AssociatedValue_m0BFEDBCC156093773E7C1B1D0ACB0F317EEC3BDA_inline(L_1, /*hidden argument*/NULL);
		KnownSubTypeAttribute_t9F1D658B2418F6AC43CE9F59F0B40A033A2F24B2 * L_3 = ___x0;
		NullCheck(L_3);
		Type_t * L_4;
		L_4 = KnownSubTypeAttribute_get_SubType_mFB7CAD6ED05A42EDCDCA4AED5AEAC46D372AE672_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		NullableDictionary_2_Add_m86E340469A6AE4D9A177687FB3A337F88BF90D6E(L_0, L_2, L_4, /*hidden argument*/NullableDictionary_2_Add_m86E340469A6AE4D9A177687FB3A337F88BF90D6E_RuntimeMethod_var);
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
// System.Type JsonSubTypes.JsonSubtypes/FallBackSubTypeAttribute::get_SubType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * FallBackSubTypeAttribute_get_SubType_mA05E90E196E5CE4A0FD5EE01D0817A4BB0727FE0 (FallBackSubTypeAttribute_t1E7D5E7E674A152BD622622E7C81DB8AE432DE29 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_U3CSubTypeU3Ek__BackingField_0();
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
// System.Type JsonSubTypes.JsonSubtypes/KnownSubTypeAttribute::get_SubType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * KnownSubTypeAttribute_get_SubType_mFB7CAD6ED05A42EDCDCA4AED5AEAC46D372AE672 (KnownSubTypeAttribute_t9F1D658B2418F6AC43CE9F59F0B40A033A2F24B2 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_U3CSubTypeU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Object JsonSubTypes.JsonSubtypes/KnownSubTypeAttribute::get_AssociatedValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * KnownSubTypeAttribute_get_AssociatedValue_m0BFEDBCC156093773E7C1B1D0ACB0F317EEC3BDA (KnownSubTypeAttribute_t9F1D658B2418F6AC43CE9F59F0B40A033A2F24B2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CAssociatedValueU3Ek__BackingField_1();
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
// System.Type JsonSubTypes.JsonSubtypes/KnownSubTypeWithPropertyAttribute::get_SubType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * KnownSubTypeWithPropertyAttribute_get_SubType_mB07ED0D2427D4F1FAADD317709C08AA705DA5FE3 (KnownSubTypeWithPropertyAttribute_tA28E5B138A0E2B81AF25B9E22AC022F06C0B66E6 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_U3CSubTypeU3Ek__BackingField_0();
		return L_0;
	}
}
// System.String JsonSubTypes.JsonSubtypes/KnownSubTypeWithPropertyAttribute::get_PropertyName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KnownSubTypeWithPropertyAttribute_get_PropertyName_mC62CFBE5624081711F1B1C0B8B10C4DFCE9E61F2 (KnownSubTypeWithPropertyAttribute_tA28E5B138A0E2B81AF25B9E22AC022F06C0B66E6 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CPropertyNameU3Ek__BackingField_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JsonReader_get_DateParseHandling_mF422D438E94AC6ECBDA3B003C5405CCBE57528E2_inline (JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__dateParseHandling_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonReader_set_Culture_m72501B521C798BF8471597849D8A71EDB4233D40_inline (JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * __this, CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___value0, const RuntimeMethod* method)
{
	{
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_0 = ___value0;
		__this->set__culture_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool JsonReader_get_CloseInput_m4E97DD4479BA1637A5CAE6A8412E486467E12E4F_inline (JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CCloseInputU3Ek__BackingField_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonReader_set_CloseInput_m59E6A4B54731C471D0AD20D08ACDE1C5C1A15842_inline (JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CCloseInputU3Ek__BackingField_13(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool JsonReader_get_SupportMultipleContent_m4311AF519DDFE110E151E676E6800931ABA26330_inline (JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CSupportMultipleContentU3Ek__BackingField_14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonReader_set_SupportMultipleContent_mD31D798CB17EB9A111C9BC1D641686B3551FEFE9_inline (JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CSupportMultipleContentU3Ek__BackingField_14(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JsonReader_get_DateTimeZoneHandling_mD6578854A0145CE2B98135A52C7AE9944CB0D939_inline (JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__dateTimeZoneHandling_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JsonReader_get_FloatParseHandling_mED93805A7BD69A092506D6097872BD41BD0C7924_inline (JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__floatParseHandling_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* JsonReader_get_DateFormatString_mAA0F7630A255C54855B5424CDFD0B92A4325441B_inline (JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__dateFormatString_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonReader_set_DateFormatString_m3DCCBB52BB532AE46C787B835D31AB17DCE61506_inline (JsonReader_t07015DD03AB2211B84EDA87B0FE1274672FAF0CE * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set__dateFormatString_11(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * JsonConverterAttribute_get_ConverterType_m4675E9898C076AAD602C5B4BCE5F16709E757D06_inline (JsonConverterAttribute_t76C9BFA5F1F70135FB27B3509C9B077A8F4719FC * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get__converterType_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* JsonConverterAttribute_get_ConverterParameters_m83432CF6F070523D66CEE0941AB4945DE855EDD2_inline (JsonConverterAttribute_t76C9BFA5F1F70135FB27B3509C9B077A8F4719FC * __this, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = __this->get_U3CConverterParametersU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * FallBackSubTypeAttribute_get_SubType_mA05E90E196E5CE4A0FD5EE01D0817A4BB0727FE0_inline (FallBackSubTypeAttribute_t1E7D5E7E674A152BD622622E7C81DB8AE432DE29 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_U3CSubTypeU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* KnownSubTypeWithPropertyAttribute_get_PropertyName_mC62CFBE5624081711F1B1C0B8B10C4DFCE9E61F2_inline (KnownSubTypeWithPropertyAttribute_tA28E5B138A0E2B81AF25B9E22AC022F06C0B66E6 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CPropertyNameU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * KnownSubTypeWithPropertyAttribute_get_SubType_mB07ED0D2427D4F1FAADD317709C08AA705DA5FE3_inline (KnownSubTypeWithPropertyAttribute_tA28E5B138A0E2B81AF25B9E22AC022F06C0B66E6 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_U3CSubTypeU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KnownSubTypeAttribute_get_AssociatedValue_m0BFEDBCC156093773E7C1B1D0ACB0F317EEC3BDA_inline (KnownSubTypeAttribute_t9F1D658B2418F6AC43CE9F59F0B40A033A2F24B2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CAssociatedValueU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * KnownSubTypeAttribute_get_SubType_mFB7CAD6ED05A42EDCDCA4AED5AEAC46D372AE672_inline (KnownSubTypeAttribute_t9F1D658B2418F6AC43CE9F59F0B40A033A2F24B2 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_U3CSubTypeU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
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
