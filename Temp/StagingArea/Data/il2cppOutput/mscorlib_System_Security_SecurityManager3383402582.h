﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.Object
struct Il2CppObject;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Security.Permissions.SecurityPermission
struct SecurityPermission_t2954997752;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.SecurityManager
struct  SecurityManager_t3383402582  : public Il2CppObject
{
public:

public:
};

struct SecurityManager_t3383402582_StaticFields
{
public:
	// System.Object System.Security.SecurityManager::_lockObject
	Il2CppObject * ____lockObject_0;
	// System.Collections.Hashtable System.Security.SecurityManager::_declsecCache
	Hashtable_t1853889766 * ____declsecCache_1;
	// System.Security.Permissions.SecurityPermission System.Security.SecurityManager::_execution
	SecurityPermission_t2954997752 * ____execution_2;

public:
	inline static int32_t get_offset_of__lockObject_0() { return static_cast<int32_t>(offsetof(SecurityManager_t3383402582_StaticFields, ____lockObject_0)); }
	inline Il2CppObject * get__lockObject_0() const { return ____lockObject_0; }
	inline Il2CppObject ** get_address_of__lockObject_0() { return &____lockObject_0; }
	inline void set__lockObject_0(Il2CppObject * value)
	{
		____lockObject_0 = value;
		Il2CppCodeGenWriteBarrier(&____lockObject_0, value);
	}

	inline static int32_t get_offset_of__declsecCache_1() { return static_cast<int32_t>(offsetof(SecurityManager_t3383402582_StaticFields, ____declsecCache_1)); }
	inline Hashtable_t1853889766 * get__declsecCache_1() const { return ____declsecCache_1; }
	inline Hashtable_t1853889766 ** get_address_of__declsecCache_1() { return &____declsecCache_1; }
	inline void set__declsecCache_1(Hashtable_t1853889766 * value)
	{
		____declsecCache_1 = value;
		Il2CppCodeGenWriteBarrier(&____declsecCache_1, value);
	}

	inline static int32_t get_offset_of__execution_2() { return static_cast<int32_t>(offsetof(SecurityManager_t3383402582_StaticFields, ____execution_2)); }
	inline SecurityPermission_t2954997752 * get__execution_2() const { return ____execution_2; }
	inline SecurityPermission_t2954997752 ** get_address_of__execution_2() { return &____execution_2; }
	inline void set__execution_2(SecurityPermission_t2954997752 * value)
	{
		____execution_2 = value;
		Il2CppCodeGenWriteBarrier(&____execution_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif