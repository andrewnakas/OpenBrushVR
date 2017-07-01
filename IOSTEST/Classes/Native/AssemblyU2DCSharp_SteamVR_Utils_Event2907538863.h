#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Hashtable
struct Hashtable_t909839986;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SteamVR_Utils/Event
struct  Event_t2907538863  : public Il2CppObject
{
public:

public:
};

struct Event_t2907538863_StaticFields
{
public:
	// System.Collections.Hashtable SteamVR_Utils/Event::listeners
	Hashtable_t909839986 * ___listeners_0;

public:
	inline static int32_t get_offset_of_listeners_0() { return static_cast<int32_t>(offsetof(Event_t2907538863_StaticFields, ___listeners_0)); }
	inline Hashtable_t909839986 * get_listeners_0() const { return ___listeners_0; }
	inline Hashtable_t909839986 ** get_address_of_listeners_0() { return &___listeners_0; }
	inline void set_listeners_0(Hashtable_t909839986 * value)
	{
		___listeners_0 = value;
		Il2CppCodeGenWriteBarrier(&___listeners_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
