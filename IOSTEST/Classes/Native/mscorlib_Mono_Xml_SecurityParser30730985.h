#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_Mono_Xml_SmallXmlParser3549787957.h"

// System.Security.SecurityElement
struct SecurityElement_t2325568386;
// System.Collections.Stack
struct Stack_t1043988394;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Xml.SecurityParser
struct  SecurityParser_t30730985  : public SmallXmlParser_t3549787957
{
public:
	// System.Security.SecurityElement Mono.Xml.SecurityParser::root
	SecurityElement_t2325568386 * ___root_13;
	// System.Security.SecurityElement Mono.Xml.SecurityParser::current
	SecurityElement_t2325568386 * ___current_14;
	// System.Collections.Stack Mono.Xml.SecurityParser::stack
	Stack_t1043988394 * ___stack_15;

public:
	inline static int32_t get_offset_of_root_13() { return static_cast<int32_t>(offsetof(SecurityParser_t30730985, ___root_13)); }
	inline SecurityElement_t2325568386 * get_root_13() const { return ___root_13; }
	inline SecurityElement_t2325568386 ** get_address_of_root_13() { return &___root_13; }
	inline void set_root_13(SecurityElement_t2325568386 * value)
	{
		___root_13 = value;
		Il2CppCodeGenWriteBarrier(&___root_13, value);
	}

	inline static int32_t get_offset_of_current_14() { return static_cast<int32_t>(offsetof(SecurityParser_t30730985, ___current_14)); }
	inline SecurityElement_t2325568386 * get_current_14() const { return ___current_14; }
	inline SecurityElement_t2325568386 ** get_address_of_current_14() { return &___current_14; }
	inline void set_current_14(SecurityElement_t2325568386 * value)
	{
		___current_14 = value;
		Il2CppCodeGenWriteBarrier(&___current_14, value);
	}

	inline static int32_t get_offset_of_stack_15() { return static_cast<int32_t>(offsetof(SecurityParser_t30730985, ___stack_15)); }
	inline Stack_t1043988394 * get_stack_15() const { return ___stack_15; }
	inline Stack_t1043988394 ** get_address_of_stack_15() { return &___stack_15; }
	inline void set_stack_15(Stack_t1043988394 * value)
	{
		___stack_15 = value;
		Il2CppCodeGenWriteBarrier(&___stack_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
