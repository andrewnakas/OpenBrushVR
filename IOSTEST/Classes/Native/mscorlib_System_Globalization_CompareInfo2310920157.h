#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
// Mono.Globalization.Unicode.SimpleCollator
struct SimpleCollator_t4081201584;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Globalization.CompareInfo
struct  CompareInfo_t2310920157  : public Il2CppObject
{
public:
	// System.Int32 System.Globalization.CompareInfo::culture
	int32_t ___culture_1;
	// System.String System.Globalization.CompareInfo::icu_name
	String_t* ___icu_name_2;
	// Mono.Globalization.Unicode.SimpleCollator System.Globalization.CompareInfo::collator
	SimpleCollator_t4081201584 * ___collator_3;

public:
	inline static int32_t get_offset_of_culture_1() { return static_cast<int32_t>(offsetof(CompareInfo_t2310920157, ___culture_1)); }
	inline int32_t get_culture_1() const { return ___culture_1; }
	inline int32_t* get_address_of_culture_1() { return &___culture_1; }
	inline void set_culture_1(int32_t value)
	{
		___culture_1 = value;
	}

	inline static int32_t get_offset_of_icu_name_2() { return static_cast<int32_t>(offsetof(CompareInfo_t2310920157, ___icu_name_2)); }
	inline String_t* get_icu_name_2() const { return ___icu_name_2; }
	inline String_t** get_address_of_icu_name_2() { return &___icu_name_2; }
	inline void set_icu_name_2(String_t* value)
	{
		___icu_name_2 = value;
		Il2CppCodeGenWriteBarrier(&___icu_name_2, value);
	}

	inline static int32_t get_offset_of_collator_3() { return static_cast<int32_t>(offsetof(CompareInfo_t2310920157, ___collator_3)); }
	inline SimpleCollator_t4081201584 * get_collator_3() const { return ___collator_3; }
	inline SimpleCollator_t4081201584 ** get_address_of_collator_3() { return &___collator_3; }
	inline void set_collator_3(SimpleCollator_t4081201584 * value)
	{
		___collator_3 = value;
		Il2CppCodeGenWriteBarrier(&___collator_3, value);
	}
};

struct CompareInfo_t2310920157_StaticFields
{
public:
	// System.Boolean System.Globalization.CompareInfo::useManagedCollation
	bool ___useManagedCollation_0;
	// System.Collections.Hashtable System.Globalization.CompareInfo::collators
	Hashtable_t909839986 * ___collators_4;
	// System.Object System.Globalization.CompareInfo::monitor
	Il2CppObject * ___monitor_5;

public:
	inline static int32_t get_offset_of_useManagedCollation_0() { return static_cast<int32_t>(offsetof(CompareInfo_t2310920157_StaticFields, ___useManagedCollation_0)); }
	inline bool get_useManagedCollation_0() const { return ___useManagedCollation_0; }
	inline bool* get_address_of_useManagedCollation_0() { return &___useManagedCollation_0; }
	inline void set_useManagedCollation_0(bool value)
	{
		___useManagedCollation_0 = value;
	}

	inline static int32_t get_offset_of_collators_4() { return static_cast<int32_t>(offsetof(CompareInfo_t2310920157_StaticFields, ___collators_4)); }
	inline Hashtable_t909839986 * get_collators_4() const { return ___collators_4; }
	inline Hashtable_t909839986 ** get_address_of_collators_4() { return &___collators_4; }
	inline void set_collators_4(Hashtable_t909839986 * value)
	{
		___collators_4 = value;
		Il2CppCodeGenWriteBarrier(&___collators_4, value);
	}

	inline static int32_t get_offset_of_monitor_5() { return static_cast<int32_t>(offsetof(CompareInfo_t2310920157_StaticFields, ___monitor_5)); }
	inline Il2CppObject * get_monitor_5() const { return ___monitor_5; }
	inline Il2CppObject ** get_address_of_monitor_5() { return &___monitor_5; }
	inline void set_monitor_5(Il2CppObject * value)
	{
		___monitor_5 = value;
		Il2CppCodeGenWriteBarrier(&___monitor_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
