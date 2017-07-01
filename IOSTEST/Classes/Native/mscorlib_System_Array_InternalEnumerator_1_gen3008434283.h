#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// System.Array
struct Il2CppArray;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array/InternalEnumerator`1<System.UInt32>
struct  InternalEnumerator_1_t3008434283 
{
public:
	// System.Array System.Array/InternalEnumerator`1::array
	Il2CppArray * ___array_0;
	// System.Int32 System.Array/InternalEnumerator`1::idx
	int32_t ___idx_1;

public:
	inline static int32_t get_offset_of_array_0() { return static_cast<int32_t>(offsetof(InternalEnumerator_1_t3008434283, ___array_0)); }
	inline Il2CppArray * get_array_0() const { return ___array_0; }
	inline Il2CppArray ** get_address_of_array_0() { return &___array_0; }
	inline void set_array_0(Il2CppArray * value)
	{
		___array_0 = value;
		Il2CppCodeGenWriteBarrier(&___array_0, value);
	}

	inline static int32_t get_offset_of_idx_1() { return static_cast<int32_t>(offsetof(InternalEnumerator_1_t3008434283, ___idx_1)); }
	inline int32_t get_idx_1() const { return ___idx_1; }
	inline int32_t* get_address_of_idx_1() { return &___idx_1; }
	inline void set_idx_1(int32_t value)
	{
		___idx_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
