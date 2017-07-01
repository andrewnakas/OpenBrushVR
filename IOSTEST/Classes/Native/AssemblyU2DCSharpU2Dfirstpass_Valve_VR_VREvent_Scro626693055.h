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

// Valve.VR.VREvent_Scroll_t
struct  VREvent_Scroll_t_t626693055 
{
public:
	// System.Single Valve.VR.VREvent_Scroll_t::xdelta
	float ___xdelta_0;
	// System.Single Valve.VR.VREvent_Scroll_t::ydelta
	float ___ydelta_1;
	// System.UInt32 Valve.VR.VREvent_Scroll_t::repeatCount
	uint32_t ___repeatCount_2;

public:
	inline static int32_t get_offset_of_xdelta_0() { return static_cast<int32_t>(offsetof(VREvent_Scroll_t_t626693055, ___xdelta_0)); }
	inline float get_xdelta_0() const { return ___xdelta_0; }
	inline float* get_address_of_xdelta_0() { return &___xdelta_0; }
	inline void set_xdelta_0(float value)
	{
		___xdelta_0 = value;
	}

	inline static int32_t get_offset_of_ydelta_1() { return static_cast<int32_t>(offsetof(VREvent_Scroll_t_t626693055, ___ydelta_1)); }
	inline float get_ydelta_1() const { return ___ydelta_1; }
	inline float* get_address_of_ydelta_1() { return &___ydelta_1; }
	inline void set_ydelta_1(float value)
	{
		___ydelta_1 = value;
	}

	inline static int32_t get_offset_of_repeatCount_2() { return static_cast<int32_t>(offsetof(VREvent_Scroll_t_t626693055, ___repeatCount_2)); }
	inline uint32_t get_repeatCount_2() const { return ___repeatCount_2; }
	inline uint32_t* get_address_of_repeatCount_2() { return &___repeatCount_2; }
	inline void set_repeatCount_2(uint32_t value)
	{
		___repeatCount_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
