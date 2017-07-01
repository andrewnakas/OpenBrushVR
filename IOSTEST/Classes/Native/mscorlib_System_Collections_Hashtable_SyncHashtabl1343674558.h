#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Collections_Hashtable909839986.h"

// System.Collections.Hashtable
struct Hashtable_t909839986;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable/SyncHashtable
struct  SyncHashtable_t1343674558  : public Hashtable_t909839986
{
public:
	// System.Collections.Hashtable System.Collections.Hashtable/SyncHashtable::host
	Hashtable_t909839986 * ___host_14;

public:
	inline static int32_t get_offset_of_host_14() { return static_cast<int32_t>(offsetof(SyncHashtable_t1343674558, ___host_14)); }
	inline Hashtable_t909839986 * get_host_14() const { return ___host_14; }
	inline Hashtable_t909839986 ** get_address_of_host_14() { return &___host_14; }
	inline void set_host_14(Hashtable_t909839986 * value)
	{
		___host_14 = value;
		Il2CppCodeGenWriteBarrier(&___host_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
