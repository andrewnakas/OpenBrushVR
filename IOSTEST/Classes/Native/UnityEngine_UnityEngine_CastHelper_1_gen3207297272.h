#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "mscorlib_System_IntPtr2504060609.h"

// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CastHelper`1<System.Object>
struct  CastHelper_1_t3207297272 
{
public:
	// T UnityEngine.CastHelper`1::t
	Il2CppObject * ___t_0;
	// System.IntPtr UnityEngine.CastHelper`1::onePointerFurtherThanT
	IntPtr_t ___onePointerFurtherThanT_1;

public:
	inline static int32_t get_offset_of_t_0() { return static_cast<int32_t>(offsetof(CastHelper_1_t3207297272, ___t_0)); }
	inline Il2CppObject * get_t_0() const { return ___t_0; }
	inline Il2CppObject ** get_address_of_t_0() { return &___t_0; }
	inline void set_t_0(Il2CppObject * value)
	{
		___t_0 = value;
		Il2CppCodeGenWriteBarrier(&___t_0, value);
	}

	inline static int32_t get_offset_of_onePointerFurtherThanT_1() { return static_cast<int32_t>(offsetof(CastHelper_1_t3207297272, ___onePointerFurtherThanT_1)); }
	inline IntPtr_t get_onePointerFurtherThanT_1() const { return ___onePointerFurtherThanT_1; }
	inline IntPtr_t* get_address_of_onePointerFurtherThanT_1() { return &___onePointerFurtherThanT_1; }
	inline void set_onePointerFurtherThanT_1(IntPtr_t value)
	{
		___onePointerFurtherThanT_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
