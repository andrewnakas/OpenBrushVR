#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.Emit.ILGenerator/LabelData
struct  LabelData_t3712112744 
{
public:
	// System.Int32 System.Reflection.Emit.ILGenerator/LabelData::addr
	int32_t ___addr_0;
	// System.Int32 System.Reflection.Emit.ILGenerator/LabelData::maxStack
	int32_t ___maxStack_1;

public:
	inline static int32_t get_offset_of_addr_0() { return static_cast<int32_t>(offsetof(LabelData_t3712112744, ___addr_0)); }
	inline int32_t get_addr_0() const { return ___addr_0; }
	inline int32_t* get_address_of_addr_0() { return &___addr_0; }
	inline void set_addr_0(int32_t value)
	{
		___addr_0 = value;
	}

	inline static int32_t get_offset_of_maxStack_1() { return static_cast<int32_t>(offsetof(LabelData_t3712112744, ___maxStack_1)); }
	inline int32_t get_maxStack_1() const { return ___maxStack_1; }
	inline int32_t* get_address_of_maxStack_1() { return &___maxStack_1; }
	inline void set_maxStack_1(int32_t value)
	{
		___maxStack_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
