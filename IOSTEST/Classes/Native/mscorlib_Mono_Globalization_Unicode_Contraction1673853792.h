#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Char[]
struct CharU5BU5D_t1328083999;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.Contraction
struct  Contraction_t1673853792  : public Il2CppObject
{
public:
	// System.Char[] Mono.Globalization.Unicode.Contraction::Source
	CharU5BU5D_t1328083999* ___Source_0;
	// System.String Mono.Globalization.Unicode.Contraction::Replacement
	String_t* ___Replacement_1;
	// System.Byte[] Mono.Globalization.Unicode.Contraction::SortKey
	ByteU5BU5D_t3397334013* ___SortKey_2;

public:
	inline static int32_t get_offset_of_Source_0() { return static_cast<int32_t>(offsetof(Contraction_t1673853792, ___Source_0)); }
	inline CharU5BU5D_t1328083999* get_Source_0() const { return ___Source_0; }
	inline CharU5BU5D_t1328083999** get_address_of_Source_0() { return &___Source_0; }
	inline void set_Source_0(CharU5BU5D_t1328083999* value)
	{
		___Source_0 = value;
		Il2CppCodeGenWriteBarrier(&___Source_0, value);
	}

	inline static int32_t get_offset_of_Replacement_1() { return static_cast<int32_t>(offsetof(Contraction_t1673853792, ___Replacement_1)); }
	inline String_t* get_Replacement_1() const { return ___Replacement_1; }
	inline String_t** get_address_of_Replacement_1() { return &___Replacement_1; }
	inline void set_Replacement_1(String_t* value)
	{
		___Replacement_1 = value;
		Il2CppCodeGenWriteBarrier(&___Replacement_1, value);
	}

	inline static int32_t get_offset_of_SortKey_2() { return static_cast<int32_t>(offsetof(Contraction_t1673853792, ___SortKey_2)); }
	inline ByteU5BU5D_t3397334013* get_SortKey_2() const { return ___SortKey_2; }
	inline ByteU5BU5D_t3397334013** get_address_of_SortKey_2() { return &___SortKey_2; }
	inline void set_SortKey_2(ByteU5BU5D_t3397334013* value)
	{
		___SortKey_2 = value;
		Il2CppCodeGenWriteBarrier(&___SortKey_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
