#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Valve_VR_HmdMatrix34_664273062.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Valve_VR_HmdVector3_2255224910.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Valve_VR_ETrackingRe3328467893.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Valve.VR.TrackedDevicePose_t
struct  TrackedDevicePose_t_t1668551120 
{
public:
	// Valve.VR.HmdMatrix34_t Valve.VR.TrackedDevicePose_t::mDeviceToAbsoluteTracking
	HmdMatrix34_t_t664273062  ___mDeviceToAbsoluteTracking_0;
	// Valve.VR.HmdVector3_t Valve.VR.TrackedDevicePose_t::vVelocity
	HmdVector3_t_t2255224910  ___vVelocity_1;
	// Valve.VR.HmdVector3_t Valve.VR.TrackedDevicePose_t::vAngularVelocity
	HmdVector3_t_t2255224910  ___vAngularVelocity_2;
	// Valve.VR.ETrackingResult Valve.VR.TrackedDevicePose_t::eTrackingResult
	int32_t ___eTrackingResult_3;
	// System.Boolean Valve.VR.TrackedDevicePose_t::bPoseIsValid
	bool ___bPoseIsValid_4;
	// System.Boolean Valve.VR.TrackedDevicePose_t::bDeviceIsConnected
	bool ___bDeviceIsConnected_5;

public:
	inline static int32_t get_offset_of_mDeviceToAbsoluteTracking_0() { return static_cast<int32_t>(offsetof(TrackedDevicePose_t_t1668551120, ___mDeviceToAbsoluteTracking_0)); }
	inline HmdMatrix34_t_t664273062  get_mDeviceToAbsoluteTracking_0() const { return ___mDeviceToAbsoluteTracking_0; }
	inline HmdMatrix34_t_t664273062 * get_address_of_mDeviceToAbsoluteTracking_0() { return &___mDeviceToAbsoluteTracking_0; }
	inline void set_mDeviceToAbsoluteTracking_0(HmdMatrix34_t_t664273062  value)
	{
		___mDeviceToAbsoluteTracking_0 = value;
	}

	inline static int32_t get_offset_of_vVelocity_1() { return static_cast<int32_t>(offsetof(TrackedDevicePose_t_t1668551120, ___vVelocity_1)); }
	inline HmdVector3_t_t2255224910  get_vVelocity_1() const { return ___vVelocity_1; }
	inline HmdVector3_t_t2255224910 * get_address_of_vVelocity_1() { return &___vVelocity_1; }
	inline void set_vVelocity_1(HmdVector3_t_t2255224910  value)
	{
		___vVelocity_1 = value;
	}

	inline static int32_t get_offset_of_vAngularVelocity_2() { return static_cast<int32_t>(offsetof(TrackedDevicePose_t_t1668551120, ___vAngularVelocity_2)); }
	inline HmdVector3_t_t2255224910  get_vAngularVelocity_2() const { return ___vAngularVelocity_2; }
	inline HmdVector3_t_t2255224910 * get_address_of_vAngularVelocity_2() { return &___vAngularVelocity_2; }
	inline void set_vAngularVelocity_2(HmdVector3_t_t2255224910  value)
	{
		___vAngularVelocity_2 = value;
	}

	inline static int32_t get_offset_of_eTrackingResult_3() { return static_cast<int32_t>(offsetof(TrackedDevicePose_t_t1668551120, ___eTrackingResult_3)); }
	inline int32_t get_eTrackingResult_3() const { return ___eTrackingResult_3; }
	inline int32_t* get_address_of_eTrackingResult_3() { return &___eTrackingResult_3; }
	inline void set_eTrackingResult_3(int32_t value)
	{
		___eTrackingResult_3 = value;
	}

	inline static int32_t get_offset_of_bPoseIsValid_4() { return static_cast<int32_t>(offsetof(TrackedDevicePose_t_t1668551120, ___bPoseIsValid_4)); }
	inline bool get_bPoseIsValid_4() const { return ___bPoseIsValid_4; }
	inline bool* get_address_of_bPoseIsValid_4() { return &___bPoseIsValid_4; }
	inline void set_bPoseIsValid_4(bool value)
	{
		___bPoseIsValid_4 = value;
	}

	inline static int32_t get_offset_of_bDeviceIsConnected_5() { return static_cast<int32_t>(offsetof(TrackedDevicePose_t_t1668551120, ___bDeviceIsConnected_5)); }
	inline bool get_bDeviceIsConnected_5() const { return ___bDeviceIsConnected_5; }
	inline bool* get_address_of_bDeviceIsConnected_5() { return &___bDeviceIsConnected_5; }
	inline void set_bDeviceIsConnected_5(bool value)
	{
		___bDeviceIsConnected_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
