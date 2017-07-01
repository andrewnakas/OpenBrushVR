#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Valve_VR_HmdVector2_2255225135.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Valve.VR.HmdRect2_t
struct  HmdRect2_t_t1656020282 
{
public:
	// Valve.VR.HmdVector2_t Valve.VR.HmdRect2_t::vTopLeft
	HmdVector2_t_t2255225135  ___vTopLeft_0;
	// Valve.VR.HmdVector2_t Valve.VR.HmdRect2_t::vBottomRight
	HmdVector2_t_t2255225135  ___vBottomRight_1;

public:
	inline static int32_t get_offset_of_vTopLeft_0() { return static_cast<int32_t>(offsetof(HmdRect2_t_t1656020282, ___vTopLeft_0)); }
	inline HmdVector2_t_t2255225135  get_vTopLeft_0() const { return ___vTopLeft_0; }
	inline HmdVector2_t_t2255225135 * get_address_of_vTopLeft_0() { return &___vTopLeft_0; }
	inline void set_vTopLeft_0(HmdVector2_t_t2255225135  value)
	{
		___vTopLeft_0 = value;
	}

	inline static int32_t get_offset_of_vBottomRight_1() { return static_cast<int32_t>(offsetof(HmdRect2_t_t1656020282, ___vBottomRight_1)); }
	inline HmdVector2_t_t2255225135  get_vBottomRight_1() const { return ___vBottomRight_1; }
	inline HmdVector2_t_t2255225135 * get_address_of_vBottomRight_1() { return &___vBottomRight_1; }
	inline void set_vBottomRight_1(HmdVector2_t_t2255225135  value)
	{
		___vBottomRight_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
