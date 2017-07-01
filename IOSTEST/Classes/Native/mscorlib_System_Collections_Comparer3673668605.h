#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Comparer
struct Comparer_t3673668605;
// System.Globalization.CompareInfo
struct CompareInfo_t2310920157;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Comparer
struct  Comparer_t3673668605  : public Il2CppObject
{
public:
	// System.Globalization.CompareInfo System.Collections.Comparer::m_compareInfo
	CompareInfo_t2310920157 * ___m_compareInfo_2;

public:
	inline static int32_t get_offset_of_m_compareInfo_2() { return static_cast<int32_t>(offsetof(Comparer_t3673668605, ___m_compareInfo_2)); }
	inline CompareInfo_t2310920157 * get_m_compareInfo_2() const { return ___m_compareInfo_2; }
	inline CompareInfo_t2310920157 ** get_address_of_m_compareInfo_2() { return &___m_compareInfo_2; }
	inline void set_m_compareInfo_2(CompareInfo_t2310920157 * value)
	{
		___m_compareInfo_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_compareInfo_2, value);
	}
};

struct Comparer_t3673668605_StaticFields
{
public:
	// System.Collections.Comparer System.Collections.Comparer::Default
	Comparer_t3673668605 * ___Default_0;
	// System.Collections.Comparer System.Collections.Comparer::DefaultInvariant
	Comparer_t3673668605 * ___DefaultInvariant_1;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(Comparer_t3673668605_StaticFields, ___Default_0)); }
	inline Comparer_t3673668605 * get_Default_0() const { return ___Default_0; }
	inline Comparer_t3673668605 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(Comparer_t3673668605 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier(&___Default_0, value);
	}

	inline static int32_t get_offset_of_DefaultInvariant_1() { return static_cast<int32_t>(offsetof(Comparer_t3673668605_StaticFields, ___DefaultInvariant_1)); }
	inline Comparer_t3673668605 * get_DefaultInvariant_1() const { return ___DefaultInvariant_1; }
	inline Comparer_t3673668605 ** get_address_of_DefaultInvariant_1() { return &___DefaultInvariant_1; }
	inline void set_DefaultInvariant_1(Comparer_t3673668605 * value)
	{
		___DefaultInvariant_1 = value;
		Il2CppCodeGenWriteBarrier(&___DefaultInvariant_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
