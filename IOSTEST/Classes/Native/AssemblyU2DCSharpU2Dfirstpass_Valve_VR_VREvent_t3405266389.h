#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Valve_VR_VREvent_Dat3621557720.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Valve.VR.VREvent_t
struct  VREvent_t_t3405266389 
{
public:
	// System.UInt32 Valve.VR.VREvent_t::eventType
	uint32_t ___eventType_0;
	// System.UInt32 Valve.VR.VREvent_t::trackedDeviceIndex
	uint32_t ___trackedDeviceIndex_1;
	// System.Single Valve.VR.VREvent_t::eventAgeSeconds
	float ___eventAgeSeconds_2;
	// Valve.VR.VREvent_Data_t Valve.VR.VREvent_t::data
	VREvent_Data_t_t3621557720  ___data_3;

public:
	inline static int32_t get_offset_of_eventType_0() { return static_cast<int32_t>(offsetof(VREvent_t_t3405266389, ___eventType_0)); }
	inline uint32_t get_eventType_0() const { return ___eventType_0; }
	inline uint32_t* get_address_of_eventType_0() { return &___eventType_0; }
	inline void set_eventType_0(uint32_t value)
	{
		___eventType_0 = value;
	}

	inline static int32_t get_offset_of_trackedDeviceIndex_1() { return static_cast<int32_t>(offsetof(VREvent_t_t3405266389, ___trackedDeviceIndex_1)); }
	inline uint32_t get_trackedDeviceIndex_1() const { return ___trackedDeviceIndex_1; }
	inline uint32_t* get_address_of_trackedDeviceIndex_1() { return &___trackedDeviceIndex_1; }
	inline void set_trackedDeviceIndex_1(uint32_t value)
	{
		___trackedDeviceIndex_1 = value;
	}

	inline static int32_t get_offset_of_eventAgeSeconds_2() { return static_cast<int32_t>(offsetof(VREvent_t_t3405266389, ___eventAgeSeconds_2)); }
	inline float get_eventAgeSeconds_2() const { return ___eventAgeSeconds_2; }
	inline float* get_address_of_eventAgeSeconds_2() { return &___eventAgeSeconds_2; }
	inline void set_eventAgeSeconds_2(float value)
	{
		___eventAgeSeconds_2 = value;
	}

	inline static int32_t get_offset_of_data_3() { return static_cast<int32_t>(offsetof(VREvent_t_t3405266389, ___data_3)); }
	inline VREvent_Data_t_t3621557720  get_data_3() const { return ___data_3; }
	inline VREvent_Data_t_t3621557720 * get_address_of_data_3() { return &___data_3; }
	inline void set_data_3(VREvent_Data_t_t3621557720  value)
	{
		___data_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
