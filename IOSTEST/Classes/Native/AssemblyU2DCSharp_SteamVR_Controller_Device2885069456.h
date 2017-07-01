#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Valve_VR_VRControlle2504874220.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Valve_VR_TrackedDevi1668551120.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SteamVR_Controller/Device
struct  Device_t2885069456  : public Il2CppObject
{
public:
	// System.UInt32 SteamVR_Controller/Device::<index>k__BackingField
	uint32_t ___U3CindexU3Ek__BackingField_0;
	// System.Boolean SteamVR_Controller/Device::<valid>k__BackingField
	bool ___U3CvalidU3Ek__BackingField_1;
	// Valve.VR.VRControllerState_t SteamVR_Controller/Device::state
	VRControllerState_t_t2504874220  ___state_2;
	// Valve.VR.VRControllerState_t SteamVR_Controller/Device::prevState
	VRControllerState_t_t2504874220  ___prevState_3;
	// Valve.VR.TrackedDevicePose_t SteamVR_Controller/Device::pose
	TrackedDevicePose_t_t1668551120  ___pose_4;
	// System.Int32 SteamVR_Controller/Device::prevFrameCount
	int32_t ___prevFrameCount_5;
	// System.Single SteamVR_Controller/Device::hairTriggerDelta
	float ___hairTriggerDelta_6;
	// System.Single SteamVR_Controller/Device::hairTriggerLimit
	float ___hairTriggerLimit_7;
	// System.Boolean SteamVR_Controller/Device::hairTriggerState
	bool ___hairTriggerState_8;
	// System.Boolean SteamVR_Controller/Device::hairTriggerPrevState
	bool ___hairTriggerPrevState_9;

public:
	inline static int32_t get_offset_of_U3CindexU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Device_t2885069456, ___U3CindexU3Ek__BackingField_0)); }
	inline uint32_t get_U3CindexU3Ek__BackingField_0() const { return ___U3CindexU3Ek__BackingField_0; }
	inline uint32_t* get_address_of_U3CindexU3Ek__BackingField_0() { return &___U3CindexU3Ek__BackingField_0; }
	inline void set_U3CindexU3Ek__BackingField_0(uint32_t value)
	{
		___U3CindexU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CvalidU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Device_t2885069456, ___U3CvalidU3Ek__BackingField_1)); }
	inline bool get_U3CvalidU3Ek__BackingField_1() const { return ___U3CvalidU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CvalidU3Ek__BackingField_1() { return &___U3CvalidU3Ek__BackingField_1; }
	inline void set_U3CvalidU3Ek__BackingField_1(bool value)
	{
		___U3CvalidU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_state_2() { return static_cast<int32_t>(offsetof(Device_t2885069456, ___state_2)); }
	inline VRControllerState_t_t2504874220  get_state_2() const { return ___state_2; }
	inline VRControllerState_t_t2504874220 * get_address_of_state_2() { return &___state_2; }
	inline void set_state_2(VRControllerState_t_t2504874220  value)
	{
		___state_2 = value;
	}

	inline static int32_t get_offset_of_prevState_3() { return static_cast<int32_t>(offsetof(Device_t2885069456, ___prevState_3)); }
	inline VRControllerState_t_t2504874220  get_prevState_3() const { return ___prevState_3; }
	inline VRControllerState_t_t2504874220 * get_address_of_prevState_3() { return &___prevState_3; }
	inline void set_prevState_3(VRControllerState_t_t2504874220  value)
	{
		___prevState_3 = value;
	}

	inline static int32_t get_offset_of_pose_4() { return static_cast<int32_t>(offsetof(Device_t2885069456, ___pose_4)); }
	inline TrackedDevicePose_t_t1668551120  get_pose_4() const { return ___pose_4; }
	inline TrackedDevicePose_t_t1668551120 * get_address_of_pose_4() { return &___pose_4; }
	inline void set_pose_4(TrackedDevicePose_t_t1668551120  value)
	{
		___pose_4 = value;
	}

	inline static int32_t get_offset_of_prevFrameCount_5() { return static_cast<int32_t>(offsetof(Device_t2885069456, ___prevFrameCount_5)); }
	inline int32_t get_prevFrameCount_5() const { return ___prevFrameCount_5; }
	inline int32_t* get_address_of_prevFrameCount_5() { return &___prevFrameCount_5; }
	inline void set_prevFrameCount_5(int32_t value)
	{
		___prevFrameCount_5 = value;
	}

	inline static int32_t get_offset_of_hairTriggerDelta_6() { return static_cast<int32_t>(offsetof(Device_t2885069456, ___hairTriggerDelta_6)); }
	inline float get_hairTriggerDelta_6() const { return ___hairTriggerDelta_6; }
	inline float* get_address_of_hairTriggerDelta_6() { return &___hairTriggerDelta_6; }
	inline void set_hairTriggerDelta_6(float value)
	{
		___hairTriggerDelta_6 = value;
	}

	inline static int32_t get_offset_of_hairTriggerLimit_7() { return static_cast<int32_t>(offsetof(Device_t2885069456, ___hairTriggerLimit_7)); }
	inline float get_hairTriggerLimit_7() const { return ___hairTriggerLimit_7; }
	inline float* get_address_of_hairTriggerLimit_7() { return &___hairTriggerLimit_7; }
	inline void set_hairTriggerLimit_7(float value)
	{
		___hairTriggerLimit_7 = value;
	}

	inline static int32_t get_offset_of_hairTriggerState_8() { return static_cast<int32_t>(offsetof(Device_t2885069456, ___hairTriggerState_8)); }
	inline bool get_hairTriggerState_8() const { return ___hairTriggerState_8; }
	inline bool* get_address_of_hairTriggerState_8() { return &___hairTriggerState_8; }
	inline void set_hairTriggerState_8(bool value)
	{
		___hairTriggerState_8 = value;
	}

	inline static int32_t get_offset_of_hairTriggerPrevState_9() { return static_cast<int32_t>(offsetof(Device_t2885069456, ___hairTriggerPrevState_9)); }
	inline bool get_hairTriggerPrevState_9() const { return ___hairTriggerPrevState_9; }
	inline bool* get_address_of_hairTriggerPrevState_9() { return &___hairTriggerPrevState_9; }
	inline void set_hairTriggerPrevState_9(bool value)
	{
		___hairTriggerPrevState_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
