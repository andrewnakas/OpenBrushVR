#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Valve_VR_ETrackingUn1464400093.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Valve_VR_EVREye3088716538.h"

// SteamVR_ExternalCamera
struct SteamVR_ExternalCamera_t1737918827;
// System.String
struct String_t;
// SteamVR_Render
struct SteamVR_Render_t595857297;
// SteamVR_Camera[]
struct SteamVR_CameraU5BU5D_t2679416003;
// Valve.VR.TrackedDevicePose_t[]
struct TrackedDevicePose_tU5BU5D_t2897272049;
// SteamVR_UpdatePoses
struct SteamVR_UpdatePoses_t3489297766;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SteamVR_Render
struct  SteamVR_Render_t595857297  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean SteamVR_Render::pauseGameWhenDashboardIsVisible
	bool ___pauseGameWhenDashboardIsVisible_2;
	// System.Boolean SteamVR_Render::lockPhysicsUpdateRateToRenderFrequency
	bool ___lockPhysicsUpdateRateToRenderFrequency_3;
	// SteamVR_ExternalCamera SteamVR_Render::externalCamera
	SteamVR_ExternalCamera_t1737918827 * ___externalCamera_4;
	// System.String SteamVR_Render::externalCameraConfigPath
	String_t* ___externalCameraConfigPath_5;
	// Valve.VR.ETrackingUniverseOrigin SteamVR_Render::trackingSpace
	int32_t ___trackingSpace_6;
	// SteamVR_Camera[] SteamVR_Render::cameras
	SteamVR_CameraU5BU5D_t2679416003* ___cameras_10;
	// Valve.VR.TrackedDevicePose_t[] SteamVR_Render::poses
	TrackedDevicePose_tU5BU5D_t2897272049* ___poses_11;
	// Valve.VR.TrackedDevicePose_t[] SteamVR_Render::gamePoses
	TrackedDevicePose_tU5BU5D_t2897272049* ___gamePoses_12;
	// System.Single SteamVR_Render::sceneResolutionScale
	float ___sceneResolutionScale_14;
	// System.Single SteamVR_Render::timeScale
	float ___timeScale_15;
	// SteamVR_UpdatePoses SteamVR_Render::poseUpdater
	SteamVR_UpdatePoses_t3489297766 * ___poseUpdater_16;

public:
	inline static int32_t get_offset_of_pauseGameWhenDashboardIsVisible_2() { return static_cast<int32_t>(offsetof(SteamVR_Render_t595857297, ___pauseGameWhenDashboardIsVisible_2)); }
	inline bool get_pauseGameWhenDashboardIsVisible_2() const { return ___pauseGameWhenDashboardIsVisible_2; }
	inline bool* get_address_of_pauseGameWhenDashboardIsVisible_2() { return &___pauseGameWhenDashboardIsVisible_2; }
	inline void set_pauseGameWhenDashboardIsVisible_2(bool value)
	{
		___pauseGameWhenDashboardIsVisible_2 = value;
	}

	inline static int32_t get_offset_of_lockPhysicsUpdateRateToRenderFrequency_3() { return static_cast<int32_t>(offsetof(SteamVR_Render_t595857297, ___lockPhysicsUpdateRateToRenderFrequency_3)); }
	inline bool get_lockPhysicsUpdateRateToRenderFrequency_3() const { return ___lockPhysicsUpdateRateToRenderFrequency_3; }
	inline bool* get_address_of_lockPhysicsUpdateRateToRenderFrequency_3() { return &___lockPhysicsUpdateRateToRenderFrequency_3; }
	inline void set_lockPhysicsUpdateRateToRenderFrequency_3(bool value)
	{
		___lockPhysicsUpdateRateToRenderFrequency_3 = value;
	}

	inline static int32_t get_offset_of_externalCamera_4() { return static_cast<int32_t>(offsetof(SteamVR_Render_t595857297, ___externalCamera_4)); }
	inline SteamVR_ExternalCamera_t1737918827 * get_externalCamera_4() const { return ___externalCamera_4; }
	inline SteamVR_ExternalCamera_t1737918827 ** get_address_of_externalCamera_4() { return &___externalCamera_4; }
	inline void set_externalCamera_4(SteamVR_ExternalCamera_t1737918827 * value)
	{
		___externalCamera_4 = value;
		Il2CppCodeGenWriteBarrier(&___externalCamera_4, value);
	}

	inline static int32_t get_offset_of_externalCameraConfigPath_5() { return static_cast<int32_t>(offsetof(SteamVR_Render_t595857297, ___externalCameraConfigPath_5)); }
	inline String_t* get_externalCameraConfigPath_5() const { return ___externalCameraConfigPath_5; }
	inline String_t** get_address_of_externalCameraConfigPath_5() { return &___externalCameraConfigPath_5; }
	inline void set_externalCameraConfigPath_5(String_t* value)
	{
		___externalCameraConfigPath_5 = value;
		Il2CppCodeGenWriteBarrier(&___externalCameraConfigPath_5, value);
	}

	inline static int32_t get_offset_of_trackingSpace_6() { return static_cast<int32_t>(offsetof(SteamVR_Render_t595857297, ___trackingSpace_6)); }
	inline int32_t get_trackingSpace_6() const { return ___trackingSpace_6; }
	inline int32_t* get_address_of_trackingSpace_6() { return &___trackingSpace_6; }
	inline void set_trackingSpace_6(int32_t value)
	{
		___trackingSpace_6 = value;
	}

	inline static int32_t get_offset_of_cameras_10() { return static_cast<int32_t>(offsetof(SteamVR_Render_t595857297, ___cameras_10)); }
	inline SteamVR_CameraU5BU5D_t2679416003* get_cameras_10() const { return ___cameras_10; }
	inline SteamVR_CameraU5BU5D_t2679416003** get_address_of_cameras_10() { return &___cameras_10; }
	inline void set_cameras_10(SteamVR_CameraU5BU5D_t2679416003* value)
	{
		___cameras_10 = value;
		Il2CppCodeGenWriteBarrier(&___cameras_10, value);
	}

	inline static int32_t get_offset_of_poses_11() { return static_cast<int32_t>(offsetof(SteamVR_Render_t595857297, ___poses_11)); }
	inline TrackedDevicePose_tU5BU5D_t2897272049* get_poses_11() const { return ___poses_11; }
	inline TrackedDevicePose_tU5BU5D_t2897272049** get_address_of_poses_11() { return &___poses_11; }
	inline void set_poses_11(TrackedDevicePose_tU5BU5D_t2897272049* value)
	{
		___poses_11 = value;
		Il2CppCodeGenWriteBarrier(&___poses_11, value);
	}

	inline static int32_t get_offset_of_gamePoses_12() { return static_cast<int32_t>(offsetof(SteamVR_Render_t595857297, ___gamePoses_12)); }
	inline TrackedDevicePose_tU5BU5D_t2897272049* get_gamePoses_12() const { return ___gamePoses_12; }
	inline TrackedDevicePose_tU5BU5D_t2897272049** get_address_of_gamePoses_12() { return &___gamePoses_12; }
	inline void set_gamePoses_12(TrackedDevicePose_tU5BU5D_t2897272049* value)
	{
		___gamePoses_12 = value;
		Il2CppCodeGenWriteBarrier(&___gamePoses_12, value);
	}

	inline static int32_t get_offset_of_sceneResolutionScale_14() { return static_cast<int32_t>(offsetof(SteamVR_Render_t595857297, ___sceneResolutionScale_14)); }
	inline float get_sceneResolutionScale_14() const { return ___sceneResolutionScale_14; }
	inline float* get_address_of_sceneResolutionScale_14() { return &___sceneResolutionScale_14; }
	inline void set_sceneResolutionScale_14(float value)
	{
		___sceneResolutionScale_14 = value;
	}

	inline static int32_t get_offset_of_timeScale_15() { return static_cast<int32_t>(offsetof(SteamVR_Render_t595857297, ___timeScale_15)); }
	inline float get_timeScale_15() const { return ___timeScale_15; }
	inline float* get_address_of_timeScale_15() { return &___timeScale_15; }
	inline void set_timeScale_15(float value)
	{
		___timeScale_15 = value;
	}

	inline static int32_t get_offset_of_poseUpdater_16() { return static_cast<int32_t>(offsetof(SteamVR_Render_t595857297, ___poseUpdater_16)); }
	inline SteamVR_UpdatePoses_t3489297766 * get_poseUpdater_16() const { return ___poseUpdater_16; }
	inline SteamVR_UpdatePoses_t3489297766 ** get_address_of_poseUpdater_16() { return &___poseUpdater_16; }
	inline void set_poseUpdater_16(SteamVR_UpdatePoses_t3489297766 * value)
	{
		___poseUpdater_16 = value;
		Il2CppCodeGenWriteBarrier(&___poseUpdater_16, value);
	}
};

struct SteamVR_Render_t595857297_StaticFields
{
public:
	// Valve.VR.EVREye SteamVR_Render::<eye>k__BackingField
	int32_t ___U3CeyeU3Ek__BackingField_7;
	// SteamVR_Render SteamVR_Render::_instance
	SteamVR_Render_t595857297 * ____instance_8;
	// System.Boolean SteamVR_Render::isQuitting
	bool ___isQuitting_9;
	// System.Boolean SteamVR_Render::_pauseRendering
	bool ____pauseRendering_13;

public:
	inline static int32_t get_offset_of_U3CeyeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(SteamVR_Render_t595857297_StaticFields, ___U3CeyeU3Ek__BackingField_7)); }
	inline int32_t get_U3CeyeU3Ek__BackingField_7() const { return ___U3CeyeU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CeyeU3Ek__BackingField_7() { return &___U3CeyeU3Ek__BackingField_7; }
	inline void set_U3CeyeU3Ek__BackingField_7(int32_t value)
	{
		___U3CeyeU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of__instance_8() { return static_cast<int32_t>(offsetof(SteamVR_Render_t595857297_StaticFields, ____instance_8)); }
	inline SteamVR_Render_t595857297 * get__instance_8() const { return ____instance_8; }
	inline SteamVR_Render_t595857297 ** get_address_of__instance_8() { return &____instance_8; }
	inline void set__instance_8(SteamVR_Render_t595857297 * value)
	{
		____instance_8 = value;
		Il2CppCodeGenWriteBarrier(&____instance_8, value);
	}

	inline static int32_t get_offset_of_isQuitting_9() { return static_cast<int32_t>(offsetof(SteamVR_Render_t595857297_StaticFields, ___isQuitting_9)); }
	inline bool get_isQuitting_9() const { return ___isQuitting_9; }
	inline bool* get_address_of_isQuitting_9() { return &___isQuitting_9; }
	inline void set_isQuitting_9(bool value)
	{
		___isQuitting_9 = value;
	}

	inline static int32_t get_offset_of__pauseRendering_13() { return static_cast<int32_t>(offsetof(SteamVR_Render_t595857297_StaticFields, ____pauseRendering_13)); }
	inline bool get__pauseRendering_13() const { return ____pauseRendering_13; }
	inline bool* get_address_of__pauseRendering_13() { return &____pauseRendering_13; }
	inline void set__pauseRendering_13(bool value)
	{
		____pauseRendering_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
