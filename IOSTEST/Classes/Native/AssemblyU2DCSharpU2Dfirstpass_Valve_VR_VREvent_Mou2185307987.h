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

// Valve.VR.VREvent_Mouse_t
struct  VREvent_Mouse_t_t2185307987 
{
public:
	// System.Single Valve.VR.VREvent_Mouse_t::x
	float ___x_0;
	// System.Single Valve.VR.VREvent_Mouse_t::y
	float ___y_1;
	// System.UInt32 Valve.VR.VREvent_Mouse_t::button
	uint32_t ___button_2;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(VREvent_Mouse_t_t2185307987, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(VREvent_Mouse_t_t2185307987, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_button_2() { return static_cast<int32_t>(offsetof(VREvent_Mouse_t_t2185307987, ___button_2)); }
	inline uint32_t get_button_2() const { return ___button_2; }
	inline uint32_t* get_address_of_button_2() { return &___button_2; }
	inline void set_button_2(uint32_t value)
	{
		___button_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
