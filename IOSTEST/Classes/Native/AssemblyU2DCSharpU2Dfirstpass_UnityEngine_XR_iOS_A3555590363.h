#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityEngine_XR_iOS_A3436811567.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityEngine_XR_iOS_A3911821096.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARRect
struct  ARRect_t3555590363 
{
public:
	// UnityEngine.XR.iOS.ARPoint UnityEngine.XR.iOS.ARRect::origin
	ARPoint_t3436811567  ___origin_0;
	// UnityEngine.XR.iOS.ARSize UnityEngine.XR.iOS.ARRect::size
	ARSize_t3911821096  ___size_1;

public:
	inline static int32_t get_offset_of_origin_0() { return static_cast<int32_t>(offsetof(ARRect_t3555590363, ___origin_0)); }
	inline ARPoint_t3436811567  get_origin_0() const { return ___origin_0; }
	inline ARPoint_t3436811567 * get_address_of_origin_0() { return &___origin_0; }
	inline void set_origin_0(ARPoint_t3436811567  value)
	{
		___origin_0 = value;
	}

	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(ARRect_t3555590363, ___size_1)); }
	inline ARSize_t3911821096  get_size_1() const { return ___size_1; }
	inline ARSize_t3911821096 * get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(ARSize_t3911821096  value)
	{
		___size_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
