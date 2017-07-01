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
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Collections.Hashtable
struct Hashtable_t909839986;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Channels.SinkProviderData
struct  SinkProviderData_t2645445792  : public Il2CppObject
{
public:
	// System.String System.Runtime.Remoting.Channels.SinkProviderData::sinkName
	String_t* ___sinkName_0;
	// System.Collections.ArrayList System.Runtime.Remoting.Channels.SinkProviderData::children
	ArrayList_t4252133567 * ___children_1;
	// System.Collections.Hashtable System.Runtime.Remoting.Channels.SinkProviderData::properties
	Hashtable_t909839986 * ___properties_2;

public:
	inline static int32_t get_offset_of_sinkName_0() { return static_cast<int32_t>(offsetof(SinkProviderData_t2645445792, ___sinkName_0)); }
	inline String_t* get_sinkName_0() const { return ___sinkName_0; }
	inline String_t** get_address_of_sinkName_0() { return &___sinkName_0; }
	inline void set_sinkName_0(String_t* value)
	{
		___sinkName_0 = value;
		Il2CppCodeGenWriteBarrier(&___sinkName_0, value);
	}

	inline static int32_t get_offset_of_children_1() { return static_cast<int32_t>(offsetof(SinkProviderData_t2645445792, ___children_1)); }
	inline ArrayList_t4252133567 * get_children_1() const { return ___children_1; }
	inline ArrayList_t4252133567 ** get_address_of_children_1() { return &___children_1; }
	inline void set_children_1(ArrayList_t4252133567 * value)
	{
		___children_1 = value;
		Il2CppCodeGenWriteBarrier(&___children_1, value);
	}

	inline static int32_t get_offset_of_properties_2() { return static_cast<int32_t>(offsetof(SinkProviderData_t2645445792, ___properties_2)); }
	inline Hashtable_t909839986 * get_properties_2() const { return ___properties_2; }
	inline Hashtable_t909839986 ** get_address_of_properties_2() { return &___properties_2; }
	inline void set_properties_2(Hashtable_t909839986 * value)
	{
		___properties_2 = value;
		Il2CppCodeGenWriteBarrier(&___properties_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
