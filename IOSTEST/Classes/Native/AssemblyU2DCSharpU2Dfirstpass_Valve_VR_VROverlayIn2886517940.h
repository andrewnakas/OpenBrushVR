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
#include "AssemblyU2DCSharpU2Dfirstpass_Valve_VR_HmdVector2_2255225135.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Valve.VR.VROverlayIntersectionResults_t
struct  VROverlayIntersectionResults_t_t2886517940 
{
public:
	// Valve.VR.HmdVector3_t Valve.VR.VROverlayIntersectionResults_t::vPoint
	HmdVector3_t_t2255224910  ___vPoint_0;
	// Valve.VR.HmdVector3_t Valve.VR.VROverlayIntersectionResults_t::vNormal
	HmdVector3_t_t2255224910  ___vNormal_1;
	// Valve.VR.HmdVector2_t Valve.VR.VROverlayIntersectionResults_t::vUVs
	HmdVector2_t_t2255225135  ___vUVs_2;
	// System.Single Valve.VR.VROverlayIntersectionResults_t::fDistance
	float ___fDistance_3;

public:
	inline static int32_t get_offset_of_vPoint_0() { return static_cast<int32_t>(offsetof(VROverlayIntersectionResults_t_t2886517940, ___vPoint_0)); }
	inline HmdVector3_t_t2255224910  get_vPoint_0() const { return ___vPoint_0; }
	inline HmdVector3_t_t2255224910 * get_address_of_vPoint_0() { return &___vPoint_0; }
	inline void set_vPoint_0(HmdVector3_t_t2255224910  value)
	{
		___vPoint_0 = value;
	}

	inline static int32_t get_offset_of_vNormal_1() { return static_cast<int32_t>(offsetof(VROverlayIntersectionResults_t_t2886517940, ___vNormal_1)); }
	inline HmdVector3_t_t2255224910  get_vNormal_1() const { return ___vNormal_1; }
	inline HmdVector3_t_t2255224910 * get_address_of_vNormal_1() { return &___vNormal_1; }
	inline void set_vNormal_1(HmdVector3_t_t2255224910  value)
	{
		___vNormal_1 = value;
	}

	inline static int32_t get_offset_of_vUVs_2() { return static_cast<int32_t>(offsetof(VROverlayIntersectionResults_t_t2886517940, ___vUVs_2)); }
	inline HmdVector2_t_t2255225135  get_vUVs_2() const { return ___vUVs_2; }
	inline HmdVector2_t_t2255225135 * get_address_of_vUVs_2() { return &___vUVs_2; }
	inline void set_vUVs_2(HmdVector2_t_t2255225135  value)
	{
		___vUVs_2 = value;
	}

	inline static int32_t get_offset_of_fDistance_3() { return static_cast<int32_t>(offsetof(VROverlayIntersectionResults_t_t2886517940, ___fDistance_3)); }
	inline float get_fDistance_3() const { return ___fDistance_3; }
	inline float* get_address_of_fDistance_3() { return &___fDistance_3; }
	inline void set_fDistance_3(float value)
	{
		___fDistance_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
