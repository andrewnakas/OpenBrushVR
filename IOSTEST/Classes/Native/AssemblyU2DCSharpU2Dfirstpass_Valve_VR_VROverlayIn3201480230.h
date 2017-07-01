#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Valve_VR_HmdVector3_2255224910.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Valve_VR_ETrackingUn1464400093.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Valve.VR.VROverlayIntersectionParams_t
struct  VROverlayIntersectionParams_t_t3201480230 
{
public:
	// Valve.VR.HmdVector3_t Valve.VR.VROverlayIntersectionParams_t::vSource
	HmdVector3_t_t2255224910  ___vSource_0;
	// Valve.VR.HmdVector3_t Valve.VR.VROverlayIntersectionParams_t::vDirection
	HmdVector3_t_t2255224910  ___vDirection_1;
	// Valve.VR.ETrackingUniverseOrigin Valve.VR.VROverlayIntersectionParams_t::eOrigin
	int32_t ___eOrigin_2;

public:
	inline static int32_t get_offset_of_vSource_0() { return static_cast<int32_t>(offsetof(VROverlayIntersectionParams_t_t3201480230, ___vSource_0)); }
	inline HmdVector3_t_t2255224910  get_vSource_0() const { return ___vSource_0; }
	inline HmdVector3_t_t2255224910 * get_address_of_vSource_0() { return &___vSource_0; }
	inline void set_vSource_0(HmdVector3_t_t2255224910  value)
	{
		___vSource_0 = value;
	}

	inline static int32_t get_offset_of_vDirection_1() { return static_cast<int32_t>(offsetof(VROverlayIntersectionParams_t_t3201480230, ___vDirection_1)); }
	inline HmdVector3_t_t2255224910  get_vDirection_1() const { return ___vDirection_1; }
	inline HmdVector3_t_t2255224910 * get_address_of_vDirection_1() { return &___vDirection_1; }
	inline void set_vDirection_1(HmdVector3_t_t2255224910  value)
	{
		___vDirection_1 = value;
	}

	inline static int32_t get_offset_of_eOrigin_2() { return static_cast<int32_t>(offsetof(VROverlayIntersectionParams_t_t3201480230, ___eOrigin_2)); }
	inline int32_t get_eOrigin_2() const { return ___eOrigin_2; }
	inline int32_t* get_address_of_eOrigin_2() { return &___eOrigin_2; }
	inline void set_eOrigin_2(int32_t value)
	{
		___eOrigin_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
