#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// System.Byte
struct Byte_t3683104436;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Globalization.Unicode.SimpleCollator/PreviousInfo
struct  PreviousInfo_t581002487 
{
public:
	// System.Int32 Mono.Globalization.Unicode.SimpleCollator/PreviousInfo::Code
	int32_t ___Code_0;
	// System.Byte* Mono.Globalization.Unicode.SimpleCollator/PreviousInfo::SortKey
	uint8_t* ___SortKey_1;

public:
	inline static int32_t get_offset_of_Code_0() { return static_cast<int32_t>(offsetof(PreviousInfo_t581002487, ___Code_0)); }
	inline int32_t get_Code_0() const { return ___Code_0; }
	inline int32_t* get_address_of_Code_0() { return &___Code_0; }
	inline void set_Code_0(int32_t value)
	{
		___Code_0 = value;
	}

	inline static int32_t get_offset_of_SortKey_1() { return static_cast<int32_t>(offsetof(PreviousInfo_t581002487, ___SortKey_1)); }
	inline uint8_t* get_SortKey_1() const { return ___SortKey_1; }
	inline uint8_t** get_address_of_SortKey_1() { return &___SortKey_1; }
	inline void set_SortKey_1(uint8_t* value)
	{
		___SortKey_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Mono.Globalization.Unicode.SimpleCollator/PreviousInfo
struct PreviousInfo_t581002487_marshaled_pinvoke
{
	int32_t ___Code_0;
	uint8_t* ___SortKey_1;
};
// Native definition for COM marshalling of Mono.Globalization.Unicode.SimpleCollator/PreviousInfo
struct PreviousInfo_t581002487_marshaled_com
{
	int32_t ___Code_0;
	uint8_t* ___SortKey_1;
};
