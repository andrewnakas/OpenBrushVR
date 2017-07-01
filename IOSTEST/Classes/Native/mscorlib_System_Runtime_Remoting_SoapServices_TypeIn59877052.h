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

// System.Runtime.Remoting.SoapServices/TypeInfo
struct  TypeInfo_t59877052  : public Il2CppObject
{
public:
	// System.Collections.Hashtable System.Runtime.Remoting.SoapServices/TypeInfo::Attributes
	Hashtable_t909839986 * ___Attributes_0;
	// System.Collections.Hashtable System.Runtime.Remoting.SoapServices/TypeInfo::Elements
	Hashtable_t909839986 * ___Elements_1;

public:
	inline static int32_t get_offset_of_Attributes_0() { return static_cast<int32_t>(offsetof(TypeInfo_t59877052, ___Attributes_0)); }
	inline Hashtable_t909839986 * get_Attributes_0() const { return ___Attributes_0; }
	inline Hashtable_t909839986 ** get_address_of_Attributes_0() { return &___Attributes_0; }
	inline void set_Attributes_0(Hashtable_t909839986 * value)
	{
		___Attributes_0 = value;
		Il2CppCodeGenWriteBarrier(&___Attributes_0, value);
	}

	inline static int32_t get_offset_of_Elements_1() { return static_cast<int32_t>(offsetof(TypeInfo_t59877052, ___Elements_1)); }
	inline Hashtable_t909839986 * get_Elements_1() const { return ___Elements_1; }
	inline Hashtable_t909839986 ** get_address_of_Elements_1() { return &___Elements_1; }
	inline void set_Elements_1(Hashtable_t909839986 * value)
	{
		___Elements_1 = value;
		Il2CppCodeGenWriteBarrier(&___Elements_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
