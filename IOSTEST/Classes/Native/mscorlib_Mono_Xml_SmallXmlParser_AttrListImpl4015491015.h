#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.ArrayList
struct ArrayList_t4252133567;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.SmallXmlParser/AttrListImpl
struct  AttrListImpl_t4015491015  : public Il2CppObject
{
public:
	// System.Collections.ArrayList Mono.Xml.SmallXmlParser/AttrListImpl::attrNames
	ArrayList_t4252133567 * ___attrNames_0;
	// System.Collections.ArrayList Mono.Xml.SmallXmlParser/AttrListImpl::attrValues
	ArrayList_t4252133567 * ___attrValues_1;

public:
	inline static int32_t get_offset_of_attrNames_0() { return static_cast<int32_t>(offsetof(AttrListImpl_t4015491015, ___attrNames_0)); }
	inline ArrayList_t4252133567 * get_attrNames_0() const { return ___attrNames_0; }
	inline ArrayList_t4252133567 ** get_address_of_attrNames_0() { return &___attrNames_0; }
	inline void set_attrNames_0(ArrayList_t4252133567 * value)
	{
		___attrNames_0 = value;
		Il2CppCodeGenWriteBarrier(&___attrNames_0, value);
	}

	inline static int32_t get_offset_of_attrValues_1() { return static_cast<int32_t>(offsetof(AttrListImpl_t4015491015, ___attrValues_1)); }
	inline ArrayList_t4252133567 * get_attrValues_1() const { return ___attrValues_1; }
	inline ArrayList_t4252133567 ** get_address_of_attrValues_1() { return &___attrValues_1; }
	inline void set_attrValues_1(ArrayList_t4252133567 * value)
	{
		___attrValues_1 = value;
		Il2CppCodeGenWriteBarrier(&___attrValues_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
