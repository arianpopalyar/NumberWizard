#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3549286319.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_g71524366.h"
#include "mscorlib_System_Object3080106164.h"
#include "mscorlib_System_Void1185182177.h"
#include "mscorlib_System_Int322950945753.h"
#include "mscorlib_System_String1847450689.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_23842366416.h"
#include "mscorlib_System_Boolean97287965.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22401056908.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22530217319.h"

// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
extern Il2CppClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3452614645;
extern Il2CppCodeGenString* _stringLiteral3450517380;
extern Il2CppCodeGenString* _stringLiteral3452614643;
extern const uint32_t KeyValuePair_2_ToString_m1238786018_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m2480962023_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m4231614106_MetadataUsageId;
extern const uint32_t KeyValuePair_2_ToString_m510648957_MetadataUsageId;

// System.String[]
struct StringU5BU5D_t1281789340  : public Il2CppArray
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2121548577_gshared (KeyValuePair_2_t71524366 * __this, int32_t p0, const MethodInfo* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m3358607572_gshared (KeyValuePair_2_t71524366 * __this, Il2CppObject * p0, const MethodInfo* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2118224448_gshared (KeyValuePair_2_t71524366 * __this, int32_t ___key0, Il2CppObject * ___value1, const MethodInfo* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m1839753989_gshared (KeyValuePair_2_t71524366 * __this, const MethodInfo* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
extern "C"  Il2CppObject * KeyValuePair_2_get_Value_m3495598764_gshared (KeyValuePair_2_t71524366 * __this, const MethodInfo* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1238786018_gshared (KeyValuePair_2_t71524366 * __this, const MethodInfo* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2116817417_gshared (KeyValuePair_2_t3842366416 * __this, Il2CppObject * p0, const MethodInfo* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m3305319569_gshared (KeyValuePair_2_t3842366416 * __this, bool p0, const MethodInfo* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m23191374_gshared (KeyValuePair_2_t3842366416 * __this, Il2CppObject * ___key0, bool ___value1, const MethodInfo* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Key()
extern "C"  Il2CppObject * KeyValuePair_2_get_Key_m2106922848_gshared (KeyValuePair_2_t3842366416 * __this, const MethodInfo* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Value()
extern "C"  bool KeyValuePair_2_get_Value_m1669764045_gshared (KeyValuePair_2_t3842366416 * __this, const MethodInfo* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m2480962023_gshared (KeyValuePair_2_t3842366416 * __this, const MethodInfo* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m4256290317_gshared (KeyValuePair_2_t2401056908 * __this, Il2CppObject * p0, const MethodInfo* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m460969740_gshared (KeyValuePair_2_t2401056908 * __this, int32_t p0, const MethodInfo* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m880186442_gshared (KeyValuePair_2_t2401056908 * __this, Il2CppObject * ___key0, int32_t ___value1, const MethodInfo* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Key()
extern "C"  Il2CppObject * KeyValuePair_2_get_Key_m1218836954_gshared (KeyValuePair_2_t2401056908 * __this, const MethodInfo* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m755756747_gshared (KeyValuePair_2_t2401056908 * __this, const MethodInfo* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m4231614106_gshared (KeyValuePair_2_t2401056908 * __this, const MethodInfo* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m3170517671_gshared (KeyValuePair_2_t2530217319 * __this, Il2CppObject * p0, const MethodInfo* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1153752644_gshared (KeyValuePair_2_t2530217319 * __this, Il2CppObject * p0, const MethodInfo* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m1794021352_gshared (KeyValuePair_2_t2530217319 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
extern "C"  Il2CppObject * KeyValuePair_2_get_Key_m4184817181_gshared (KeyValuePair_2_t2530217319 * __this, const MethodInfo* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C"  Il2CppObject * KeyValuePair_2_get_Value_m1132502692_gshared (KeyValuePair_2_t2530217319 * __this, const MethodInfo* method);
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m510648957_gshared (KeyValuePair_2_t2530217319 * __this, const MethodInfo* method);

// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m2121548577(__this, p0, method) ((  void (*) (KeyValuePair_2_t71524366 *, int32_t, const MethodInfo*))KeyValuePair_2_set_Key_m2121548577_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m3358607572(__this, p0, method) ((  void (*) (KeyValuePair_2_t71524366 *, Il2CppObject *, const MethodInfo*))KeyValuePair_2_set_Value_m3358607572_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m2118224448(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t71524366 *, int32_t, Il2CppObject *, const MethodInfo*))KeyValuePair_2__ctor_m2118224448_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m1839753989(__this, method) ((  int32_t (*) (KeyValuePair_2_t71524366 *, const MethodInfo*))KeyValuePair_2_get_Key_m1839753989_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m3495598764(__this, method) ((  Il2CppObject * (*) (KeyValuePair_2_t71524366 *, const MethodInfo*))KeyValuePair_2_get_Value_m3495598764_gshared)(__this, method)
// System.String System.Int32::ToString()
extern "C"  String_t* Int32_ToString_m141394615 (int32_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String[])
extern "C"  String_t* String_Concat_m1809518182 (Il2CppObject * __this /* static, unused */, StringU5BU5D_t1281789340* ___values0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
#define KeyValuePair_2_ToString_m1238786018(__this, method) ((  String_t* (*) (KeyValuePair_2_t71524366 *, const MethodInfo*))KeyValuePair_2_ToString_m1238786018_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m2116817417(__this, p0, method) ((  void (*) (KeyValuePair_2_t3842366416 *, Il2CppObject *, const MethodInfo*))KeyValuePair_2_set_Key_m2116817417_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m3305319569(__this, p0, method) ((  void (*) (KeyValuePair_2_t3842366416 *, bool, const MethodInfo*))KeyValuePair_2_set_Value_m3305319569_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m23191374(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t3842366416 *, Il2CppObject *, bool, const MethodInfo*))KeyValuePair_2__ctor_m23191374_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Key()
#define KeyValuePair_2_get_Key_m2106922848(__this, method) ((  Il2CppObject * (*) (KeyValuePair_2_t3842366416 *, const MethodInfo*))KeyValuePair_2_get_Key_m2106922848_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Value()
#define KeyValuePair_2_get_Value_m1669764045(__this, method) ((  bool (*) (KeyValuePair_2_t3842366416 *, const MethodInfo*))KeyValuePair_2_get_Value_m1669764045_gshared)(__this, method)
// System.String System.Boolean::ToString()
extern "C"  String_t* Boolean_ToString_m2664721875 (bool* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::ToString()
#define KeyValuePair_2_ToString_m2480962023(__this, method) ((  String_t* (*) (KeyValuePair_2_t3842366416 *, const MethodInfo*))KeyValuePair_2_ToString_m2480962023_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m4256290317(__this, p0, method) ((  void (*) (KeyValuePair_2_t2401056908 *, Il2CppObject *, const MethodInfo*))KeyValuePair_2_set_Key_m4256290317_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m460969740(__this, p0, method) ((  void (*) (KeyValuePair_2_t2401056908 *, int32_t, const MethodInfo*))KeyValuePair_2_set_Value_m460969740_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m880186442(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t2401056908 *, Il2CppObject *, int32_t, const MethodInfo*))KeyValuePair_2__ctor_m880186442_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Key()
#define KeyValuePair_2_get_Key_m1218836954(__this, method) ((  Il2CppObject * (*) (KeyValuePair_2_t2401056908 *, const MethodInfo*))KeyValuePair_2_get_Key_m1218836954_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Value()
#define KeyValuePair_2_get_Value_m755756747(__this, method) ((  int32_t (*) (KeyValuePair_2_t2401056908 *, const MethodInfo*))KeyValuePair_2_get_Value_m755756747_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::ToString()
#define KeyValuePair_2_ToString_m4231614106(__this, method) ((  String_t* (*) (KeyValuePair_2_t2401056908 *, const MethodInfo*))KeyValuePair_2_ToString_m4231614106_gshared)(__this, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Key(TKey)
#define KeyValuePair_2_set_Key_m3170517671(__this, p0, method) ((  void (*) (KeyValuePair_2_t2530217319 *, Il2CppObject *, const MethodInfo*))KeyValuePair_2_set_Key_m3170517671_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Value(TValue)
#define KeyValuePair_2_set_Value_m1153752644(__this, p0, method) ((  void (*) (KeyValuePair_2_t2530217319 *, Il2CppObject *, const MethodInfo*))KeyValuePair_2_set_Value_m1153752644_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
#define KeyValuePair_2__ctor_m1794021352(__this, ___key0, ___value1, method) ((  void (*) (KeyValuePair_2_t2530217319 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))KeyValuePair_2__ctor_m1794021352_gshared)(__this, ___key0, ___value1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m4184817181(__this, method) ((  Il2CppObject * (*) (KeyValuePair_2_t2530217319 *, const MethodInfo*))KeyValuePair_2_get_Key_m4184817181_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m1132502692(__this, method) ((  Il2CppObject * (*) (KeyValuePair_2_t2530217319 *, const MethodInfo*))KeyValuePair_2_get_Value_m1132502692_gshared)(__this, method)
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::ToString()
#define KeyValuePair_2_ToString_m510648957(__this, method) ((  String_t* (*) (KeyValuePair_2_t2530217319 *, const MethodInfo*))KeyValuePair_2_ToString_m510648957_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m2118224448_gshared (KeyValuePair_2_t71524366 * __this, int32_t ___key0, Il2CppObject * ___value1, const MethodInfo* method)
{
	{
		int32_t L_0 = ___key0;
		KeyValuePair_2_set_Key_m2121548577((KeyValuePair_2_t71524366 *)__this, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Il2CppObject * L_1 = ___value1;
		KeyValuePair_2_set_Value_m3358607572((KeyValuePair_2_t71524366 *)__this, (Il2CppObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m2118224448_AdjustorThunk (Il2CppObject * __this, int32_t ___key0, Il2CppObject * ___value1, const MethodInfo* method)
{
	KeyValuePair_2_t71524366 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t71524366 *>(__this + 1);
	KeyValuePair_2__ctor_m2118224448(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m1839753989_gshared (KeyValuePair_2_t71524366 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_key_0();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Key_m1839753989_AdjustorThunk (Il2CppObject * __this, const MethodInfo* method)
{
	KeyValuePair_2_t71524366 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t71524366 *>(__this + 1);
	return KeyValuePair_2_get_Key_m1839753989(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2121548577_gshared (KeyValuePair_2_t71524366 * __this, int32_t ___value0, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m2121548577_AdjustorThunk (Il2CppObject * __this, int32_t ___value0, const MethodInfo* method)
{
	KeyValuePair_2_t71524366 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t71524366 *>(__this + 1);
	KeyValuePair_2_set_Key_m2121548577(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
extern "C"  Il2CppObject * KeyValuePair_2_get_Value_m3495598764_gshared (KeyValuePair_2_t71524366 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = (Il2CppObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  Il2CppObject * KeyValuePair_2_get_Value_m3495598764_AdjustorThunk (Il2CppObject * __this, const MethodInfo* method)
{
	KeyValuePair_2_t71524366 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t71524366 *>(__this + 1);
	return KeyValuePair_2_get_Value_m3495598764(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m3358607572_gshared (KeyValuePair_2_t71524366 * __this, Il2CppObject * ___value0, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m3358607572_AdjustorThunk (Il2CppObject * __this, Il2CppObject * ___value0, const MethodInfo* method)
{
	KeyValuePair_2_t71524366 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t71524366 *>(__this + 1);
	KeyValuePair_2_set_Value_m3358607572(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m1238786018_gshared (KeyValuePair_2_t71524366 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m1238786018_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Il2CppObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t1281789340* G_B2_1 = NULL;
	StringU5BU5D_t1281789340* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t1281789340* G_B1_1 = NULL;
	StringU5BU5D_t1281789340* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t1281789340* G_B3_2 = NULL;
	StringU5BU5D_t1281789340* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t1281789340* G_B5_1 = NULL;
	StringU5BU5D_t1281789340* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t1281789340* G_B4_1 = NULL;
	StringU5BU5D_t1281789340* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t1281789340* G_B6_2 = NULL;
	StringU5BU5D_t1281789340* G_B6_3 = NULL;
	{
		StringU5BU5D_t1281789340* L_0 = (StringU5BU5D_t1281789340*)((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)5));
		ArrayElementTypeCheck (L_0, _stringLiteral3452614645);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3452614645);
		StringU5BU5D_t1281789340* L_1 = (StringU5BU5D_t1281789340*)L_0;
		int32_t L_2 = KeyValuePair_2_get_Key_m1839753989((KeyValuePair_2_t71524366 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
	}
	{
		int32_t L_3 = KeyValuePair_2_get_Key_m1839753989((KeyValuePair_2_t71524366 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (int32_t)L_3;
		String_t* L_4 = Int32_ToString_m141394615((int32_t*)(&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t1281789340* L_6 = (StringU5BU5D_t1281789340*)G_B3_3;
		ArrayElementTypeCheck (L_6, _stringLiteral3450517380);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3450517380);
		StringU5BU5D_t1281789340* L_7 = (StringU5BU5D_t1281789340*)L_6;
		Il2CppObject * L_8 = KeyValuePair_2_get_Value_m3495598764((KeyValuePair_2_t71524366 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
		if (!L_8)
		{
			G_B5_0 = 3;
			G_B5_1 = L_7;
			G_B5_2 = L_7;
			goto IL_0072;
		}
	}
	{
		Il2CppObject * L_9 = KeyValuePair_2_get_Value_m3495598764((KeyValuePair_2_t71524366 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (Il2CppObject *)L_9;
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Il2CppObject *)(*(&V_1)));
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t1281789340* L_12 = (StringU5BU5D_t1281789340*)G_B6_3;
		ArrayElementTypeCheck (L_12, _stringLiteral3452614643);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3452614643);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m1809518182(NULL /*static, unused*/, (StringU5BU5D_t1281789340*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m1238786018_AdjustorThunk (Il2CppObject * __this, const MethodInfo* method)
{
	KeyValuePair_2_t71524366 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t71524366 *>(__this + 1);
	return KeyValuePair_2_ToString_m1238786018(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m23191374_gshared (KeyValuePair_2_t3842366416 * __this, Il2CppObject * ___key0, bool ___value1, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = ___key0;
		KeyValuePair_2_set_Key_m2116817417((KeyValuePair_2_t3842366416 *)__this, (Il2CppObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		bool L_1 = ___value1;
		KeyValuePair_2_set_Value_m3305319569((KeyValuePair_2_t3842366416 *)__this, (bool)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m23191374_AdjustorThunk (Il2CppObject * __this, Il2CppObject * ___key0, bool ___value1, const MethodInfo* method)
{
	KeyValuePair_2_t3842366416 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3842366416 *>(__this + 1);
	KeyValuePair_2__ctor_m23191374(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Key()
extern "C"  Il2CppObject * KeyValuePair_2_get_Key_m2106922848_gshared (KeyValuePair_2_t3842366416 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = (Il2CppObject *)__this->get_key_0();
		return L_0;
	}
}
extern "C"  Il2CppObject * KeyValuePair_2_get_Key_m2106922848_AdjustorThunk (Il2CppObject * __this, const MethodInfo* method)
{
	KeyValuePair_2_t3842366416 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3842366416 *>(__this + 1);
	return KeyValuePair_2_get_Key_m2106922848(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m2116817417_gshared (KeyValuePair_2_t3842366416 * __this, Il2CppObject * ___value0, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m2116817417_AdjustorThunk (Il2CppObject * __this, Il2CppObject * ___value0, const MethodInfo* method)
{
	KeyValuePair_2_t3842366416 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3842366416 *>(__this + 1);
	KeyValuePair_2_set_Key_m2116817417(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Value()
extern "C"  bool KeyValuePair_2_get_Value_m1669764045_gshared (KeyValuePair_2_t3842366416 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (bool)__this->get_value_1();
		return L_0;
	}
}
extern "C"  bool KeyValuePair_2_get_Value_m1669764045_AdjustorThunk (Il2CppObject * __this, const MethodInfo* method)
{
	KeyValuePair_2_t3842366416 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3842366416 *>(__this + 1);
	return KeyValuePair_2_get_Value_m1669764045(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m3305319569_gshared (KeyValuePair_2_t3842366416 * __this, bool ___value0, const MethodInfo* method)
{
	{
		bool L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m3305319569_AdjustorThunk (Il2CppObject * __this, bool ___value0, const MethodInfo* method)
{
	KeyValuePair_2_t3842366416 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3842366416 *>(__this + 1);
	KeyValuePair_2_set_Value_m3305319569(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m2480962023_gshared (KeyValuePair_2_t3842366416 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m2480962023_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppObject * V_0 = NULL;
	bool V_1 = false;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t1281789340* G_B2_1 = NULL;
	StringU5BU5D_t1281789340* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t1281789340* G_B1_1 = NULL;
	StringU5BU5D_t1281789340* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t1281789340* G_B3_2 = NULL;
	StringU5BU5D_t1281789340* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t1281789340* G_B5_1 = NULL;
	StringU5BU5D_t1281789340* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t1281789340* G_B4_1 = NULL;
	StringU5BU5D_t1281789340* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t1281789340* G_B6_2 = NULL;
	StringU5BU5D_t1281789340* G_B6_3 = NULL;
	{
		StringU5BU5D_t1281789340* L_0 = (StringU5BU5D_t1281789340*)((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)5));
		ArrayElementTypeCheck (L_0, _stringLiteral3452614645);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3452614645);
		StringU5BU5D_t1281789340* L_1 = (StringU5BU5D_t1281789340*)L_0;
		Il2CppObject * L_2 = KeyValuePair_2_get_Key_m2106922848((KeyValuePair_2_t3842366416 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_2)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0039;
		}
	}
	{
		Il2CppObject * L_3 = KeyValuePair_2_get_Key_m2106922848((KeyValuePair_2_t3842366416 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (Il2CppObject *)L_3;
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Il2CppObject *)(*(&V_0)));
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t1281789340* L_6 = (StringU5BU5D_t1281789340*)G_B3_3;
		ArrayElementTypeCheck (L_6, _stringLiteral3450517380);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3450517380);
		StringU5BU5D_t1281789340* L_7 = (StringU5BU5D_t1281789340*)L_6;
		bool L_8 = KeyValuePair_2_get_Value_m1669764045((KeyValuePair_2_t3842366416 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		bool L_9 = KeyValuePair_2_get_Value_m1669764045((KeyValuePair_2_t3842366416 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (bool)L_9;
		String_t* L_10 = Boolean_ToString_m2664721875((bool*)(&V_1), /*hidden argument*/NULL);
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t1281789340* L_12 = (StringU5BU5D_t1281789340*)G_B6_3;
		ArrayElementTypeCheck (L_12, _stringLiteral3452614643);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3452614643);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m1809518182(NULL /*static, unused*/, (StringU5BU5D_t1281789340*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m2480962023_AdjustorThunk (Il2CppObject * __this, const MethodInfo* method)
{
	KeyValuePair_2_t3842366416 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t3842366416 *>(__this + 1);
	return KeyValuePair_2_ToString_m2480962023(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m880186442_gshared (KeyValuePair_2_t2401056908 * __this, Il2CppObject * ___key0, int32_t ___value1, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = ___key0;
		KeyValuePair_2_set_Key_m4256290317((KeyValuePair_2_t2401056908 *)__this, (Il2CppObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		int32_t L_1 = ___value1;
		KeyValuePair_2_set_Value_m460969740((KeyValuePair_2_t2401056908 *)__this, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m880186442_AdjustorThunk (Il2CppObject * __this, Il2CppObject * ___key0, int32_t ___value1, const MethodInfo* method)
{
	KeyValuePair_2_t2401056908 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2401056908 *>(__this + 1);
	KeyValuePair_2__ctor_m880186442(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Key()
extern "C"  Il2CppObject * KeyValuePair_2_get_Key_m1218836954_gshared (KeyValuePair_2_t2401056908 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = (Il2CppObject *)__this->get_key_0();
		return L_0;
	}
}
extern "C"  Il2CppObject * KeyValuePair_2_get_Key_m1218836954_AdjustorThunk (Il2CppObject * __this, const MethodInfo* method)
{
	KeyValuePair_2_t2401056908 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2401056908 *>(__this + 1);
	return KeyValuePair_2_get_Key_m1218836954(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m4256290317_gshared (KeyValuePair_2_t2401056908 * __this, Il2CppObject * ___value0, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m4256290317_AdjustorThunk (Il2CppObject * __this, Il2CppObject * ___value0, const MethodInfo* method)
{
	KeyValuePair_2_t2401056908 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2401056908 *>(__this + 1);
	KeyValuePair_2_set_Key_m4256290317(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m755756747_gshared (KeyValuePair_2_t2401056908 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_1();
		return L_0;
	}
}
extern "C"  int32_t KeyValuePair_2_get_Value_m755756747_AdjustorThunk (Il2CppObject * __this, const MethodInfo* method)
{
	KeyValuePair_2_t2401056908 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2401056908 *>(__this + 1);
	return KeyValuePair_2_get_Value_m755756747(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m460969740_gshared (KeyValuePair_2_t2401056908 * __this, int32_t ___value0, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m460969740_AdjustorThunk (Il2CppObject * __this, int32_t ___value0, const MethodInfo* method)
{
	KeyValuePair_2_t2401056908 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2401056908 *>(__this + 1);
	KeyValuePair_2_set_Value_m460969740(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m4231614106_gshared (KeyValuePair_2_t2401056908 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m4231614106_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppObject * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t1281789340* G_B2_1 = NULL;
	StringU5BU5D_t1281789340* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t1281789340* G_B1_1 = NULL;
	StringU5BU5D_t1281789340* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t1281789340* G_B3_2 = NULL;
	StringU5BU5D_t1281789340* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t1281789340* G_B5_1 = NULL;
	StringU5BU5D_t1281789340* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t1281789340* G_B4_1 = NULL;
	StringU5BU5D_t1281789340* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t1281789340* G_B6_2 = NULL;
	StringU5BU5D_t1281789340* G_B6_3 = NULL;
	{
		StringU5BU5D_t1281789340* L_0 = (StringU5BU5D_t1281789340*)((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)5));
		ArrayElementTypeCheck (L_0, _stringLiteral3452614645);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3452614645);
		StringU5BU5D_t1281789340* L_1 = (StringU5BU5D_t1281789340*)L_0;
		Il2CppObject * L_2 = KeyValuePair_2_get_Key_m1218836954((KeyValuePair_2_t2401056908 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_2)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0039;
		}
	}
	{
		Il2CppObject * L_3 = KeyValuePair_2_get_Key_m1218836954((KeyValuePair_2_t2401056908 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (Il2CppObject *)L_3;
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Il2CppObject *)(*(&V_0)));
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t1281789340* L_6 = (StringU5BU5D_t1281789340*)G_B3_3;
		ArrayElementTypeCheck (L_6, _stringLiteral3450517380);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3450517380);
		StringU5BU5D_t1281789340* L_7 = (StringU5BU5D_t1281789340*)L_6;
		int32_t L_8 = KeyValuePair_2_get_Value_m755756747((KeyValuePair_2_t2401056908 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
	}
	{
		int32_t L_9 = KeyValuePair_2_get_Value_m755756747((KeyValuePair_2_t2401056908 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (int32_t)L_9;
		String_t* L_10 = Int32_ToString_m141394615((int32_t*)(&V_1), /*hidden argument*/NULL);
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t1281789340* L_12 = (StringU5BU5D_t1281789340*)G_B6_3;
		ArrayElementTypeCheck (L_12, _stringLiteral3452614643);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3452614643);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m1809518182(NULL /*static, unused*/, (StringU5BU5D_t1281789340*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m4231614106_AdjustorThunk (Il2CppObject * __this, const MethodInfo* method)
{
	KeyValuePair_2_t2401056908 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2401056908 *>(__this + 1);
	return KeyValuePair_2_ToString_m4231614106(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(TKey,TValue)
extern "C"  void KeyValuePair_2__ctor_m1794021352_gshared (KeyValuePair_2_t2530217319 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = ___key0;
		KeyValuePair_2_set_Key_m3170517671((KeyValuePair_2_t2530217319 *)__this, (Il2CppObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		Il2CppObject * L_1 = ___value1;
		KeyValuePair_2_set_Value_m1153752644((KeyValuePair_2_t2530217319 *)__this, (Il2CppObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		return;
	}
}
extern "C"  void KeyValuePair_2__ctor_m1794021352_AdjustorThunk (Il2CppObject * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method)
{
	KeyValuePair_2_t2530217319 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2530217319 *>(__this + 1);
	KeyValuePair_2__ctor_m1794021352(_thisAdjusted, ___key0, ___value1, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
extern "C"  Il2CppObject * KeyValuePair_2_get_Key_m4184817181_gshared (KeyValuePair_2_t2530217319 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = (Il2CppObject *)__this->get_key_0();
		return L_0;
	}
}
extern "C"  Il2CppObject * KeyValuePair_2_get_Key_m4184817181_AdjustorThunk (Il2CppObject * __this, const MethodInfo* method)
{
	KeyValuePair_2_t2530217319 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2530217319 *>(__this + 1);
	return KeyValuePair_2_get_Key_m4184817181(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Key(TKey)
extern "C"  void KeyValuePair_2_set_Key_m3170517671_gshared (KeyValuePair_2_t2530217319 * __this, Il2CppObject * ___value0, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = ___value0;
		__this->set_key_0(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Key_m3170517671_AdjustorThunk (Il2CppObject * __this, Il2CppObject * ___value0, const MethodInfo* method)
{
	KeyValuePair_2_t2530217319 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2530217319 *>(__this + 1);
	KeyValuePair_2_set_Key_m3170517671(_thisAdjusted, ___value0, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C"  Il2CppObject * KeyValuePair_2_get_Value_m1132502692_gshared (KeyValuePair_2_t2530217319 * __this, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = (Il2CppObject *)__this->get_value_1();
		return L_0;
	}
}
extern "C"  Il2CppObject * KeyValuePair_2_get_Value_m1132502692_AdjustorThunk (Il2CppObject * __this, const MethodInfo* method)
{
	KeyValuePair_2_t2530217319 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2530217319 *>(__this + 1);
	return KeyValuePair_2_get_Value_m1132502692(_thisAdjusted, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::set_Value(TValue)
extern "C"  void KeyValuePair_2_set_Value_m1153752644_gshared (KeyValuePair_2_t2530217319 * __this, Il2CppObject * ___value0, const MethodInfo* method)
{
	{
		Il2CppObject * L_0 = ___value0;
		__this->set_value_1(L_0);
		return;
	}
}
extern "C"  void KeyValuePair_2_set_Value_m1153752644_AdjustorThunk (Il2CppObject * __this, Il2CppObject * ___value0, const MethodInfo* method)
{
	KeyValuePair_2_t2530217319 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2530217319 *>(__this + 1);
	KeyValuePair_2_set_Value_m1153752644(_thisAdjusted, ___value0, method);
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::ToString()
extern "C"  String_t* KeyValuePair_2_ToString_m510648957_gshared (KeyValuePair_2_t2530217319 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (KeyValuePair_2_ToString_m510648957_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppObject * V_0 = NULL;
	Il2CppObject * V_1 = NULL;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t1281789340* G_B2_1 = NULL;
	StringU5BU5D_t1281789340* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t1281789340* G_B1_1 = NULL;
	StringU5BU5D_t1281789340* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t1281789340* G_B3_2 = NULL;
	StringU5BU5D_t1281789340* G_B3_3 = NULL;
	int32_t G_B5_0 = 0;
	StringU5BU5D_t1281789340* G_B5_1 = NULL;
	StringU5BU5D_t1281789340* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	StringU5BU5D_t1281789340* G_B4_1 = NULL;
	StringU5BU5D_t1281789340* G_B4_2 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t1281789340* G_B6_2 = NULL;
	StringU5BU5D_t1281789340* G_B6_3 = NULL;
	{
		StringU5BU5D_t1281789340* L_0 = (StringU5BU5D_t1281789340*)((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)5));
		ArrayElementTypeCheck (L_0, _stringLiteral3452614645);
		(L_0)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3452614645);
		StringU5BU5D_t1281789340* L_1 = (StringU5BU5D_t1281789340*)L_0;
		Il2CppObject * L_2 = KeyValuePair_2_get_Key_m4184817181((KeyValuePair_2_t2530217319 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_2)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0039;
		}
	}
	{
		Il2CppObject * L_3 = KeyValuePair_2_get_Key_m4184817181((KeyValuePair_2_t2530217319 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		V_0 = (Il2CppObject *)L_3;
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Il2CppObject *)(*(&V_0)));
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_003e;
	}

IL_0039:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_003e:
	{
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t1281789340* L_6 = (StringU5BU5D_t1281789340*)G_B3_3;
		ArrayElementTypeCheck (L_6, _stringLiteral3450517380);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral3450517380);
		StringU5BU5D_t1281789340* L_7 = (StringU5BU5D_t1281789340*)L_6;
		Il2CppObject * L_8 = KeyValuePair_2_get_Value_m1132502692((KeyValuePair_2_t2530217319 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		G_B4_0 = 3;
		G_B4_1 = L_7;
		G_B4_2 = L_7;
		if (!L_8)
		{
			G_B5_0 = 3;
			G_B5_1 = L_7;
			G_B5_2 = L_7;
			goto IL_0072;
		}
	}
	{
		Il2CppObject * L_9 = KeyValuePair_2_get_Value_m1132502692((KeyValuePair_2_t2530217319 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_1 = (Il2CppObject *)L_9;
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (Il2CppObject *)(*(&V_1)));
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0077;
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0077:
	{
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t1281789340* L_12 = (StringU5BU5D_t1281789340*)G_B6_3;
		ArrayElementTypeCheck (L_12, _stringLiteral3452614643);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3452614643);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m1809518182(NULL /*static, unused*/, (StringU5BU5D_t1281789340*)L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
extern "C"  String_t* KeyValuePair_2_ToString_m510648957_AdjustorThunk (Il2CppObject * __this, const MethodInfo* method)
{
	KeyValuePair_2_t2530217319 * _thisAdjusted = reinterpret_cast<KeyValuePair_2_t2530217319 *>(__this + 1);
	return KeyValuePair_2_ToString_m510648957(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
