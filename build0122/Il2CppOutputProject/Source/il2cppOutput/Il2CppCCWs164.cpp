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


// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UniRx.ICancelable
struct ICancelable_t17CBA667BF856A6EA2591122CE89C2105AE8B871;
// System.String
struct String_t;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// JsonLD.Impl.TurtleRDFParser/State
struct State_t10A44F0BFA95904F955DDB26DCB2F1F304F7AAA6;

struct IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB;
struct IIterator_1_t8740C181128AED3F3D250FB1DD4DEAB681678231;
struct IMapView_2_tBDDEEB0B238F75C35FBD82A51B5D5724A2B31552;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.Collections.IIterable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct NOVTABLE IIterable_1_tEAB82D72E93310B7B99AE0982238491929BEDFD6 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m633A6619394B3D5F3C491E07218865F0DF049B13(IIterator_1_t8740C181128AED3F3D250FB1DD4DEAB681678231** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.String,System.String>
struct NOVTABLE IMapView_2_tBDDEEB0B238F75C35FBD82A51B5D5724A2B31552 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_mDDFD3B511DC5A1315111BBB2D167CD6DA659F003(Il2CppHString ___key0, Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_mF88C55ADE5F9E21707BCF965C6176C539E8B89A4(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_mBB3034B38C5FB07D7C60CEEAF7B4BE8FADC17A98(Il2CppHString ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_mBDF9EBD188F592C13F527224361C12F5E8E0F20E(IMapView_2_tBDDEEB0B238F75C35FBD82A51B5D5724A2B31552** ___first0, IMapView_2_tBDDEEB0B238F75C35FBD82A51B5D5724A2B31552** ___second1) = 0;
};
// Windows.Foundation.Collections.IMap`2<System.String,System.String>
struct NOVTABLE IMap_2_tE7DEC207AA23247E58FECD596D61F841757B7598 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m6B3A448E8F1781D93E9BD7D95C4ADD4B8391B1B0(Il2CppHString ___key0, Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m22E2139325D0DEFF8C6D2AA9FD58E95338954A8E(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m19CE4F64741D42392F522342BE4760B78E247D64(Il2CppHString ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_mCB0BC1EA24B3BC7AB5382C4918CBC1292676785C(IMapView_2_tBDDEEB0B238F75C35FBD82A51B5D5724A2B31552** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m273C5DEE47057BE68C15AB6CC8251CAB103E1AE9(Il2CppHString ___key0, Il2CppHString ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_mB4CEE798BA9CEB4DD0F79C46BBAFD24E4984838A(Il2CppHString ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_mF7F76A4DDB007C126F0CBD4D807271EB142B1EB5() = 0;
};
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) = 0;
};
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871() = 0;
};

// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* ___entries_1;
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
	KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___entries_1)); }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t52A654EA9927D1B5F56CA05CF209F2E4393C4510* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___keys_7)); }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t52C81163A051BCD87A36FEF95F736DD600E2305D * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ___values_8)); }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9161A5C97376D261665798FA27DAFD5177305C81 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
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


// JsonLD.Impl.TurtleRDFParser/State/_Dictionary_126
struct _Dictionary_126_t51797EBD0EA8518015F15CA2D2A0EDD56C191633  : public Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5
{
public:
	// JsonLD.Impl.TurtleRDFParser/State JsonLD.Impl.TurtleRDFParser/State/_Dictionary_126::_enclosing
	State_t10A44F0BFA95904F955DDB26DCB2F1F304F7AAA6 * ____enclosing_14;

public:
	inline static int32_t get_offset_of__enclosing_14() { return static_cast<int32_t>(offsetof(_Dictionary_126_t51797EBD0EA8518015F15CA2D2A0EDD56C191633, ____enclosing_14)); }
	inline State_t10A44F0BFA95904F955DDB26DCB2F1F304F7AAA6 * get__enclosing_14() const { return ____enclosing_14; }
	inline State_t10A44F0BFA95904F955DDB26DCB2F1F304F7AAA6 ** get_address_of__enclosing_14() { return &____enclosing_14; }
	inline void set__enclosing_14(State_t10A44F0BFA95904F955DDB26DCB2F1F304F7AAA6 * value)
	{
		____enclosing_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____enclosing_14), (void*)value);
	}
};


// System.TimeSpan
struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_19)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};


// UniRx.Scheduler/FixedUpdateMainThreadScheduler/<PeriodicAction>d__3
struct U3CPeriodicActionU3Ed__3_t0AB097192C92DFAAA017A1B1428FD02890D6B229  : public RuntimeObject
{
public:
	// System.Int32 UniRx.Scheduler/FixedUpdateMainThreadScheduler/<PeriodicAction>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UniRx.Scheduler/FixedUpdateMainThreadScheduler/<PeriodicAction>d__3::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.TimeSpan UniRx.Scheduler/FixedUpdateMainThreadScheduler/<PeriodicAction>d__3::period
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___period_2;
	// UniRx.ICancelable UniRx.Scheduler/FixedUpdateMainThreadScheduler/<PeriodicAction>d__3::cancellation
	RuntimeObject* ___cancellation_3;
	// System.Action UniRx.Scheduler/FixedUpdateMainThreadScheduler/<PeriodicAction>d__3::action
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action_4;
	// System.Single UniRx.Scheduler/FixedUpdateMainThreadScheduler/<PeriodicAction>d__3::<startTime>5__2
	float ___U3CstartTimeU3E5__2_5;
	// System.Single UniRx.Scheduler/FixedUpdateMainThreadScheduler/<PeriodicAction>d__3::<dt>5__3
	float ___U3CdtU3E5__3_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ed__3_t0AB097192C92DFAAA017A1B1428FD02890D6B229, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ed__3_t0AB097192C92DFAAA017A1B1428FD02890D6B229, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_period_2() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ed__3_t0AB097192C92DFAAA017A1B1428FD02890D6B229, ___period_2)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_period_2() const { return ___period_2; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_period_2() { return &___period_2; }
	inline void set_period_2(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___period_2 = value;
	}

	inline static int32_t get_offset_of_cancellation_3() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ed__3_t0AB097192C92DFAAA017A1B1428FD02890D6B229, ___cancellation_3)); }
	inline RuntimeObject* get_cancellation_3() const { return ___cancellation_3; }
	inline RuntimeObject** get_address_of_cancellation_3() { return &___cancellation_3; }
	inline void set_cancellation_3(RuntimeObject* value)
	{
		___cancellation_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancellation_3), (void*)value);
	}

	inline static int32_t get_offset_of_action_4() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ed__3_t0AB097192C92DFAAA017A1B1428FD02890D6B229, ___action_4)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_action_4() const { return ___action_4; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_action_4() { return &___action_4; }
	inline void set_action_4(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___action_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CstartTimeU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ed__3_t0AB097192C92DFAAA017A1B1428FD02890D6B229, ___U3CstartTimeU3E5__2_5)); }
	inline float get_U3CstartTimeU3E5__2_5() const { return ___U3CstartTimeU3E5__2_5; }
	inline float* get_address_of_U3CstartTimeU3E5__2_5() { return &___U3CstartTimeU3E5__2_5; }
	inline void set_U3CstartTimeU3E5__2_5(float value)
	{
		___U3CstartTimeU3E5__2_5 = value;
	}

	inline static int32_t get_offset_of_U3CdtU3E5__3_6() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ed__3_t0AB097192C92DFAAA017A1B1428FD02890D6B229, ___U3CdtU3E5__3_6)); }
	inline float get_U3CdtU3E5__3_6() const { return ___U3CdtU3E5__3_6; }
	inline float* get_address_of_U3CdtU3E5__3_6() { return &___U3CdtU3E5__3_6; }
	inline void set_U3CdtU3E5__3_6(float value)
	{
		___U3CdtU3E5__3_6 = value;
	}
};


// UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<DelayAction>d__2
struct U3CDelayActionU3Ed__2_tB4AB6DDE46CF76AD12FA17F78671EE48630B77B5  : public RuntimeObject
{
public:
	// System.Int32 UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<DelayAction>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<DelayAction>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.TimeSpan UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<DelayAction>d__2::dueTime
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___dueTime_2;
	// UniRx.ICancelable UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<DelayAction>d__2::cancellation
	RuntimeObject* ___cancellation_3;
	// System.Action UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<DelayAction>d__2::action
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action_4;
	// System.Single UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<DelayAction>d__2::<elapsed>5__2
	float ___U3CelapsedU3E5__2_5;
	// System.Single UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<DelayAction>d__2::<dt>5__3
	float ___U3CdtU3E5__3_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ed__2_tB4AB6DDE46CF76AD12FA17F78671EE48630B77B5, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ed__2_tB4AB6DDE46CF76AD12FA17F78671EE48630B77B5, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_dueTime_2() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ed__2_tB4AB6DDE46CF76AD12FA17F78671EE48630B77B5, ___dueTime_2)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_dueTime_2() const { return ___dueTime_2; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_dueTime_2() { return &___dueTime_2; }
	inline void set_dueTime_2(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___dueTime_2 = value;
	}

	inline static int32_t get_offset_of_cancellation_3() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ed__2_tB4AB6DDE46CF76AD12FA17F78671EE48630B77B5, ___cancellation_3)); }
	inline RuntimeObject* get_cancellation_3() const { return ___cancellation_3; }
	inline RuntimeObject** get_address_of_cancellation_3() { return &___cancellation_3; }
	inline void set_cancellation_3(RuntimeObject* value)
	{
		___cancellation_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancellation_3), (void*)value);
	}

	inline static int32_t get_offset_of_action_4() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ed__2_tB4AB6DDE46CF76AD12FA17F78671EE48630B77B5, ___action_4)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_action_4() const { return ___action_4; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_action_4() { return &___action_4; }
	inline void set_action_4(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___action_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CelapsedU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ed__2_tB4AB6DDE46CF76AD12FA17F78671EE48630B77B5, ___U3CelapsedU3E5__2_5)); }
	inline float get_U3CelapsedU3E5__2_5() const { return ___U3CelapsedU3E5__2_5; }
	inline float* get_address_of_U3CelapsedU3E5__2_5() { return &___U3CelapsedU3E5__2_5; }
	inline void set_U3CelapsedU3E5__2_5(float value)
	{
		___U3CelapsedU3E5__2_5 = value;
	}

	inline static int32_t get_offset_of_U3CdtU3E5__3_6() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ed__2_tB4AB6DDE46CF76AD12FA17F78671EE48630B77B5, ___U3CdtU3E5__3_6)); }
	inline float get_U3CdtU3E5__3_6() const { return ___U3CdtU3E5__3_6; }
	inline float* get_address_of_U3CdtU3E5__3_6() { return &___U3CdtU3E5__3_6; }
	inline void set_U3CdtU3E5__3_6(float value)
	{
		___U3CdtU3E5__3_6 = value;
	}
};


// UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<PeriodicAction>d__3
struct U3CPeriodicActionU3Ed__3_t71CE59A01E21D352CF4345E5C2966F8FFA93E24B  : public RuntimeObject
{
public:
	// System.Int32 UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<PeriodicAction>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<PeriodicAction>d__3::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.TimeSpan UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<PeriodicAction>d__3::period
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___period_2;
	// UniRx.ICancelable UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<PeriodicAction>d__3::cancellation
	RuntimeObject* ___cancellation_3;
	// System.Action UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<PeriodicAction>d__3::action
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action_4;
	// System.Single UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<PeriodicAction>d__3::<elapsed>5__2
	float ___U3CelapsedU3E5__2_5;
	// System.Single UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<PeriodicAction>d__3::<dt>5__3
	float ___U3CdtU3E5__3_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ed__3_t71CE59A01E21D352CF4345E5C2966F8FFA93E24B, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ed__3_t71CE59A01E21D352CF4345E5C2966F8FFA93E24B, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_period_2() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ed__3_t71CE59A01E21D352CF4345E5C2966F8FFA93E24B, ___period_2)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_period_2() const { return ___period_2; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_period_2() { return &___period_2; }
	inline void set_period_2(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___period_2 = value;
	}

	inline static int32_t get_offset_of_cancellation_3() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ed__3_t71CE59A01E21D352CF4345E5C2966F8FFA93E24B, ___cancellation_3)); }
	inline RuntimeObject* get_cancellation_3() const { return ___cancellation_3; }
	inline RuntimeObject** get_address_of_cancellation_3() { return &___cancellation_3; }
	inline void set_cancellation_3(RuntimeObject* value)
	{
		___cancellation_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancellation_3), (void*)value);
	}

	inline static int32_t get_offset_of_action_4() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ed__3_t71CE59A01E21D352CF4345E5C2966F8FFA93E24B, ___action_4)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_action_4() const { return ___action_4; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_action_4() { return &___action_4; }
	inline void set_action_4(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___action_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CelapsedU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ed__3_t71CE59A01E21D352CF4345E5C2966F8FFA93E24B, ___U3CelapsedU3E5__2_5)); }
	inline float get_U3CelapsedU3E5__2_5() const { return ___U3CelapsedU3E5__2_5; }
	inline float* get_address_of_U3CelapsedU3E5__2_5() { return &___U3CelapsedU3E5__2_5; }
	inline void set_U3CelapsedU3E5__2_5(float value)
	{
		___U3CelapsedU3E5__2_5 = value;
	}

	inline static int32_t get_offset_of_U3CdtU3E5__3_6() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ed__3_t71CE59A01E21D352CF4345E5C2966F8FFA93E24B, ___U3CdtU3E5__3_6)); }
	inline float get_U3CdtU3E5__3_6() const { return ___U3CdtU3E5__3_6; }
	inline float* get_address_of_U3CdtU3E5__3_6() { return &___U3CdtU3E5__3_6; }
	inline void set_U3CdtU3E5__3_6(float value)
	{
		___U3CdtU3E5__3_6 = value;
	}
};


// UniRx.Scheduler/MainThreadScheduler/<DelayAction>d__2
struct U3CDelayActionU3Ed__2_tEF353B140AF9D12C1A047EF61FC7EE32F2F226A9  : public RuntimeObject
{
public:
	// System.Int32 UniRx.Scheduler/MainThreadScheduler/<DelayAction>d__2::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UniRx.Scheduler/MainThreadScheduler/<DelayAction>d__2::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.TimeSpan UniRx.Scheduler/MainThreadScheduler/<DelayAction>d__2::dueTime
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___dueTime_2;
	// UniRx.ICancelable UniRx.Scheduler/MainThreadScheduler/<DelayAction>d__2::cancellation
	RuntimeObject* ___cancellation_3;
	// System.Action UniRx.Scheduler/MainThreadScheduler/<DelayAction>d__2::action
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ed__2_tEF353B140AF9D12C1A047EF61FC7EE32F2F226A9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ed__2_tEF353B140AF9D12C1A047EF61FC7EE32F2F226A9, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_dueTime_2() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ed__2_tEF353B140AF9D12C1A047EF61FC7EE32F2F226A9, ___dueTime_2)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_dueTime_2() const { return ___dueTime_2; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_dueTime_2() { return &___dueTime_2; }
	inline void set_dueTime_2(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___dueTime_2 = value;
	}

	inline static int32_t get_offset_of_cancellation_3() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ed__2_tEF353B140AF9D12C1A047EF61FC7EE32F2F226A9, ___cancellation_3)); }
	inline RuntimeObject* get_cancellation_3() const { return ___cancellation_3; }
	inline RuntimeObject** get_address_of_cancellation_3() { return &___cancellation_3; }
	inline void set_cancellation_3(RuntimeObject* value)
	{
		___cancellation_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancellation_3), (void*)value);
	}

	inline static int32_t get_offset_of_action_4() { return static_cast<int32_t>(offsetof(U3CDelayActionU3Ed__2_tEF353B140AF9D12C1A047EF61FC7EE32F2F226A9, ___action_4)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_action_4() const { return ___action_4; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_action_4() { return &___action_4; }
	inline void set_action_4(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___action_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_4), (void*)value);
	}
};


// UniRx.Scheduler/MainThreadScheduler/<PeriodicAction>d__3
struct U3CPeriodicActionU3Ed__3_t5FDEA5BD7244B7FECAD391713DEED9B8D3877937  : public RuntimeObject
{
public:
	// System.Int32 UniRx.Scheduler/MainThreadScheduler/<PeriodicAction>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UniRx.Scheduler/MainThreadScheduler/<PeriodicAction>d__3::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.TimeSpan UniRx.Scheduler/MainThreadScheduler/<PeriodicAction>d__3::period
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___period_2;
	// UniRx.ICancelable UniRx.Scheduler/MainThreadScheduler/<PeriodicAction>d__3::cancellation
	RuntimeObject* ___cancellation_3;
	// System.Action UniRx.Scheduler/MainThreadScheduler/<PeriodicAction>d__3::action
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action_4;
	// UnityEngine.WaitForSeconds UniRx.Scheduler/MainThreadScheduler/<PeriodicAction>d__3::<yieldInstruction>5__2
	WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * ___U3CyieldInstructionU3E5__2_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ed__3_t5FDEA5BD7244B7FECAD391713DEED9B8D3877937, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ed__3_t5FDEA5BD7244B7FECAD391713DEED9B8D3877937, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_period_2() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ed__3_t5FDEA5BD7244B7FECAD391713DEED9B8D3877937, ___period_2)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_period_2() const { return ___period_2; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_period_2() { return &___period_2; }
	inline void set_period_2(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___period_2 = value;
	}

	inline static int32_t get_offset_of_cancellation_3() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ed__3_t5FDEA5BD7244B7FECAD391713DEED9B8D3877937, ___cancellation_3)); }
	inline RuntimeObject* get_cancellation_3() const { return ___cancellation_3; }
	inline RuntimeObject** get_address_of_cancellation_3() { return &___cancellation_3; }
	inline void set_cancellation_3(RuntimeObject* value)
	{
		___cancellation_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cancellation_3), (void*)value);
	}

	inline static int32_t get_offset_of_action_4() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ed__3_t5FDEA5BD7244B7FECAD391713DEED9B8D3877937, ___action_4)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_action_4() const { return ___action_4; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_action_4() { return &___action_4; }
	inline void set_action_4(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___action_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___action_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CyieldInstructionU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CPeriodicActionU3Ed__3_t5FDEA5BD7244B7FECAD391713DEED9B8D3877937, ___U3CyieldInstructionU3E5__2_5)); }
	inline WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * get_U3CyieldInstructionU3E5__2_5() const { return ___U3CyieldInstructionU3E5__2_5; }
	inline WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 ** get_address_of_U3CyieldInstructionU3E5__2_5() { return &___U3CyieldInstructionU3E5__2_5; }
	inline void set_U3CyieldInstructionU3E5__2_5(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * value)
	{
		___U3CyieldInstructionU3E5__2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CyieldInstructionU3E5__2_5), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IClosable_Close_m39D5256F4888029EB959CFA74DD76EB47B570871_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IMap_2_Lookup_m6B3A448E8F1781D93E9BD7D95C4ADD4B8391B1B0_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, Il2CppHString* comReturnValue);
il2cpp_hresult_t IMap_2_get_Size_m22E2139325D0DEFF8C6D2AA9FD58E95338954A8E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMap_2_HasKey_m19CE4F64741D42392F522342BE4760B78E247D64_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, bool* comReturnValue);
il2cpp_hresult_t IMap_2_GetView_mCB0BC1EA24B3BC7AB5382C4918CBC1292676785C_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tBDDEEB0B238F75C35FBD82A51B5D5724A2B31552** comReturnValue);
il2cpp_hresult_t IMap_2_Insert_m273C5DEE47057BE68C15AB6CC8251CAB103E1AE9_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, Il2CppHString ___value1, bool* comReturnValue);
il2cpp_hresult_t IMap_2_Remove_mB4CEE798BA9CEB4DD0F79C46BBAFD24E4984838A_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0);
il2cpp_hresult_t IMap_2_Clear_mF7F76A4DDB007C126F0CBD4D807271EB142B1EB5_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_m633A6619394B3D5F3C491E07218865F0DF049B13_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t8740C181128AED3F3D250FB1DD4DEAB681678231** comReturnValue);
il2cpp_hresult_t IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue);
il2cpp_hresult_t IMapView_2_Lookup_mDDFD3B511DC5A1315111BBB2D167CD6DA659F003_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, Il2CppHString* comReturnValue);
il2cpp_hresult_t IMapView_2_get_Size_mF88C55ADE5F9E21707BCF965C6176C539E8B89A4_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IMapView_2_HasKey_mBB3034B38C5FB07D7C60CEEAF7B4BE8FADC17A98_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, bool* comReturnValue);
il2cpp_hresult_t IMapView_2_Split_mBDF9EBD188F592C13F527224361C12F5E8E0F20E_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_tBDDEEB0B238F75C35FBD82A51B5D5724A2B31552** ___first0, IMapView_2_tBDDEEB0B238F75C35FBD82A51B5D5724A2B31552** ___second1);



// COM Callable Wrapper for UniRx.Scheduler/FixedUpdateMainThreadScheduler/<PeriodicAction>d__3
struct U3CPeriodicActionU3Ed__3_t0AB097192C92DFAAA017A1B1428FD02890D6B229_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CPeriodicActionU3Ed__3_t0AB097192C92DFAAA017A1B1428FD02890D6B229_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CPeriodicActionU3Ed__3_t0AB097192C92DFAAA017A1B1428FD02890D6B229_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CPeriodicActionU3Ed__3_t0AB097192C92DFAAA017A1B1428FD02890D6B229_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CPeriodicActionU3Ed__3_t0AB097192C92DFAAA017A1B1428FD02890D6B229(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CPeriodicActionU3Ed__3_t0AB097192C92DFAAA017A1B1428FD02890D6B229_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CPeriodicActionU3Ed__3_t0AB097192C92DFAAA017A1B1428FD02890D6B229_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<DelayAction>d__2
struct U3CDelayActionU3Ed__2_tB4AB6DDE46CF76AD12FA17F78671EE48630B77B5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CDelayActionU3Ed__2_tB4AB6DDE46CF76AD12FA17F78671EE48630B77B5_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CDelayActionU3Ed__2_tB4AB6DDE46CF76AD12FA17F78671EE48630B77B5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CDelayActionU3Ed__2_tB4AB6DDE46CF76AD12FA17F78671EE48630B77B5_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CDelayActionU3Ed__2_tB4AB6DDE46CF76AD12FA17F78671EE48630B77B5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CDelayActionU3Ed__2_tB4AB6DDE46CF76AD12FA17F78671EE48630B77B5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CDelayActionU3Ed__2_tB4AB6DDE46CF76AD12FA17F78671EE48630B77B5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Scheduler/IgnoreTimeScaleMainThreadScheduler/<PeriodicAction>d__3
struct U3CPeriodicActionU3Ed__3_t71CE59A01E21D352CF4345E5C2966F8FFA93E24B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CPeriodicActionU3Ed__3_t71CE59A01E21D352CF4345E5C2966F8FFA93E24B_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CPeriodicActionU3Ed__3_t71CE59A01E21D352CF4345E5C2966F8FFA93E24B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CPeriodicActionU3Ed__3_t71CE59A01E21D352CF4345E5C2966F8FFA93E24B_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CPeriodicActionU3Ed__3_t71CE59A01E21D352CF4345E5C2966F8FFA93E24B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CPeriodicActionU3Ed__3_t71CE59A01E21D352CF4345E5C2966F8FFA93E24B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CPeriodicActionU3Ed__3_t71CE59A01E21D352CF4345E5C2966F8FFA93E24B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Scheduler/MainThreadScheduler/<DelayAction>d__2
struct U3CDelayActionU3Ed__2_tEF353B140AF9D12C1A047EF61FC7EE32F2F226A9_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CDelayActionU3Ed__2_tEF353B140AF9D12C1A047EF61FC7EE32F2F226A9_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CDelayActionU3Ed__2_tEF353B140AF9D12C1A047EF61FC7EE32F2F226A9_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CDelayActionU3Ed__2_tEF353B140AF9D12C1A047EF61FC7EE32F2F226A9_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CDelayActionU3Ed__2_tEF353B140AF9D12C1A047EF61FC7EE32F2F226A9(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CDelayActionU3Ed__2_tEF353B140AF9D12C1A047EF61FC7EE32F2F226A9_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CDelayActionU3Ed__2_tEF353B140AF9D12C1A047EF61FC7EE32F2F226A9_ComCallableWrapper(obj));
}

// COM Callable Wrapper for UniRx.Scheduler/MainThreadScheduler/<PeriodicAction>d__3
struct U3CPeriodicActionU3Ed__3_t5FDEA5BD7244B7FECAD391713DEED9B8D3877937_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<U3CPeriodicActionU3Ed__3_t5FDEA5BD7244B7FECAD391713DEED9B8D3877937_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline U3CPeriodicActionU3Ed__3_t5FDEA5BD7244B7FECAD391713DEED9B8D3877937_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<U3CPeriodicActionU3Ed__3_t5FDEA5BD7244B7FECAD391713DEED9B8D3877937_ComCallableWrapper>(obj) {}

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

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_U3CPeriodicActionU3Ed__3_t5FDEA5BD7244B7FECAD391713DEED9B8D3877937(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(U3CPeriodicActionU3Ed__3_t5FDEA5BD7244B7FECAD391713DEED9B8D3877937_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) U3CPeriodicActionU3Ed__3_t5FDEA5BD7244B7FECAD391713DEED9B8D3877937_ComCallableWrapper(obj));
}

// COM Callable Wrapper for JsonLD.Impl.TurtleRDFParser/State/_Dictionary_126
struct _Dictionary_126_t51797EBD0EA8518015F15CA2D2A0EDD56C191633_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<_Dictionary_126_t51797EBD0EA8518015F15CA2D2A0EDD56C191633_ComCallableWrapper>, IMap_2_tE7DEC207AA23247E58FECD596D61F841757B7598, IIterable_1_tEAB82D72E93310B7B99AE0982238491929BEDFD6, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IMapView_2_tBDDEEB0B238F75C35FBD82A51B5D5724A2B31552
{
	inline _Dictionary_126_t51797EBD0EA8518015F15CA2D2A0EDD56C191633_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<_Dictionary_126_t51797EBD0EA8518015F15CA2D2A0EDD56C191633_ComCallableWrapper>(obj) {}

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

		if (::memcmp(&iid, &IMap_2_tE7DEC207AA23247E58FECD596D61F841757B7598::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMap_2_tE7DEC207AA23247E58FECD596D61F841757B7598*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tEAB82D72E93310B7B99AE0982238491929BEDFD6::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tEAB82D72E93310B7B99AE0982238491929BEDFD6*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IMapView_2_tBDDEEB0B238F75C35FBD82A51B5D5724A2B31552::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IMapView_2_tBDDEEB0B238F75C35FBD82A51B5D5724A2B31552*>(this);
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
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IMap_2_tE7DEC207AA23247E58FECD596D61F841757B7598::IID;
		interfaceIds[1] = IIterable_1_tEAB82D72E93310B7B99AE0982238491929BEDFD6::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[3] = IMapView_2_tBDDEEB0B238F75C35FBD82A51B5D5724A2B31552::IID;

		*iidCount = 4;
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

	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m6B3A448E8F1781D93E9BD7D95C4ADD4B8391B1B0(Il2CppHString ___key0, Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Lookup_m6B3A448E8F1781D93E9BD7D95C4ADD4B8391B1B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m22E2139325D0DEFF8C6D2AA9FD58E95338954A8E(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_get_Size_m22E2139325D0DEFF8C6D2AA9FD58E95338954A8E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m19CE4F64741D42392F522342BE4760B78E247D64(Il2CppHString ___key0, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_HasKey_m19CE4F64741D42392F522342BE4760B78E247D64_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_mCB0BC1EA24B3BC7AB5382C4918CBC1292676785C(IMapView_2_tBDDEEB0B238F75C35FBD82A51B5D5724A2B31552** comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_GetView_mCB0BC1EA24B3BC7AB5382C4918CBC1292676785C_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m273C5DEE47057BE68C15AB6CC8251CAB103E1AE9(Il2CppHString ___key0, Il2CppHString ___value1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMap_2_Insert_m273C5DEE47057BE68C15AB6CC8251CAB103E1AE9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, ___value1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_mB4CEE798BA9CEB4DD0F79C46BBAFD24E4984838A(Il2CppHString ___key0) IL2CPP_OVERRIDE
	{
		return IMap_2_Remove_mB4CEE798BA9CEB4DD0F79C46BBAFD24E4984838A_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0);
	}

	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_mF7F76A4DDB007C126F0CBD4D807271EB142B1EB5() IL2CPP_OVERRIDE
	{
		return IMap_2_Clear_mF7F76A4DDB007C126F0CBD4D807271EB142B1EB5_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m633A6619394B3D5F3C491E07218865F0DF049B13(IIterator_1_t8740C181128AED3F3D250FB1DD4DEAB681678231** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m633A6619394B3D5F3C491E07218865F0DF049B13_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_mDDFD3B511DC5A1315111BBB2D167CD6DA659F003(Il2CppHString ___key0, Il2CppHString* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_Lookup_mDDFD3B511DC5A1315111BBB2D167CD6DA659F003_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_mF88C55ADE5F9E21707BCF965C6176C539E8B89A4(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_get_Size_mF88C55ADE5F9E21707BCF965C6176C539E8B89A4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_mBB3034B38C5FB07D7C60CEEAF7B4BE8FADC17A98(Il2CppHString ___key0, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IMapView_2_HasKey_mBB3034B38C5FB07D7C60CEEAF7B4BE8FADC17A98_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___key0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_mBDF9EBD188F592C13F527224361C12F5E8E0F20E(IMapView_2_tBDDEEB0B238F75C35FBD82A51B5D5724A2B31552** ___first0, IMapView_2_tBDDEEB0B238F75C35FBD82A51B5D5724A2B31552** ___second1) IL2CPP_OVERRIDE
	{
		return IMapView_2_Split_mBDF9EBD188F592C13F527224361C12F5E8E0F20E_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___first0, ___second1);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor__Dictionary_126_t51797EBD0EA8518015F15CA2D2A0EDD56C191633(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(_Dictionary_126_t51797EBD0EA8518015F15CA2D2A0EDD56C191633_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) _Dictionary_126_t51797EBD0EA8518015F15CA2D2A0EDD56C191633_ComCallableWrapper(obj));
}
