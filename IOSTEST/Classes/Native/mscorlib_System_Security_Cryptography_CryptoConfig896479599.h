#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Object
struct Il2CppObject;
// System.Collections.Hashtable
struct Hashtable_t909839986;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptoConfig
struct  CryptoConfig_t896479599  : public Il2CppObject
{
public:

public:
};

struct CryptoConfig_t896479599_StaticFields
{
public:
	// System.Object System.Security.Cryptography.CryptoConfig::lockObject
	Il2CppObject * ___lockObject_0;
	// System.Collections.Hashtable System.Security.Cryptography.CryptoConfig::algorithms
	Hashtable_t909839986 * ___algorithms_1;
	// System.Collections.Hashtable System.Security.Cryptography.CryptoConfig::oid
	Hashtable_t909839986 * ___oid_2;

public:
	inline static int32_t get_offset_of_lockObject_0() { return static_cast<int32_t>(offsetof(CryptoConfig_t896479599_StaticFields, ___lockObject_0)); }
	inline Il2CppObject * get_lockObject_0() const { return ___lockObject_0; }
	inline Il2CppObject ** get_address_of_lockObject_0() { return &___lockObject_0; }
	inline void set_lockObject_0(Il2CppObject * value)
	{
		___lockObject_0 = value;
		Il2CppCodeGenWriteBarrier(&___lockObject_0, value);
	}

	inline static int32_t get_offset_of_algorithms_1() { return static_cast<int32_t>(offsetof(CryptoConfig_t896479599_StaticFields, ___algorithms_1)); }
	inline Hashtable_t909839986 * get_algorithms_1() const { return ___algorithms_1; }
	inline Hashtable_t909839986 ** get_address_of_algorithms_1() { return &___algorithms_1; }
	inline void set_algorithms_1(Hashtable_t909839986 * value)
	{
		___algorithms_1 = value;
		Il2CppCodeGenWriteBarrier(&___algorithms_1, value);
	}

	inline static int32_t get_offset_of_oid_2() { return static_cast<int32_t>(offsetof(CryptoConfig_t896479599_StaticFields, ___oid_2)); }
	inline Hashtable_t909839986 * get_oid_2() const { return ___oid_2; }
	inline Hashtable_t909839986 ** get_address_of_oid_2() { return &___oid_2; }
	inline void set_oid_2(Hashtable_t909839986 * value)
	{
		___oid_2 = value;
		Il2CppCodeGenWriteBarrier(&___oid_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
