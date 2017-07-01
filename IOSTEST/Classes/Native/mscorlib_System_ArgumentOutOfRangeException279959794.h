#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ArgumentException3259014390.h"

// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t279959794  : public ArgumentException_t3259014390
{
public:
	// System.Object System.ArgumentOutOfRangeException::actual_value
	Il2CppObject * ___actual_value_13;

public:
	inline static int32_t get_offset_of_actual_value_13() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t279959794, ___actual_value_13)); }
	inline Il2CppObject * get_actual_value_13() const { return ___actual_value_13; }
	inline Il2CppObject ** get_address_of_actual_value_13() { return &___actual_value_13; }
	inline void set_actual_value_13(Il2CppObject * value)
	{
		___actual_value_13 = value;
		Il2CppCodeGenWriteBarrier(&___actual_value_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
