#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Valve_VR_EGraphicsAP1794133197.h"

// SteamVR
struct SteamVR_t3920918452;
// Valve.VR.CVRSystem
struct CVRSystem_t1953699154;
// Valve.VR.CVRCompositor
struct CVRCompositor_t197946050;
// Valve.VR.CVROverlay
struct CVROverlay_t3377499315;
// System.Boolean[]
struct BooleanU5BU5D_t3568034315;
// Valve.VR.VRTextureBounds_t[]
struct VRTextureBounds_tU5BU5D_t650810582;
// SteamVR_Utils/RigidTransform[]
struct RigidTransformU5BU5D_t1649806291;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SteamVR
struct  SteamVR_t3920918452  : public Il2CppObject
{
public:
	// Valve.VR.CVRSystem SteamVR::<hmd>k__BackingField
	CVRSystem_t1953699154 * ___U3ChmdU3Ek__BackingField_2;
	// Valve.VR.CVRCompositor SteamVR::<compositor>k__BackingField
	CVRCompositor_t197946050 * ___U3CcompositorU3Ek__BackingField_3;
	// Valve.VR.CVROverlay SteamVR::<overlay>k__BackingField
	CVROverlay_t3377499315 * ___U3CoverlayU3Ek__BackingField_4;
	// System.Single SteamVR::<sceneWidth>k__BackingField
	float ___U3CsceneWidthU3Ek__BackingField_9;
	// System.Single SteamVR::<sceneHeight>k__BackingField
	float ___U3CsceneHeightU3Ek__BackingField_10;
	// System.Single SteamVR::<aspect>k__BackingField
	float ___U3CaspectU3Ek__BackingField_11;
	// System.Single SteamVR::<fieldOfView>k__BackingField
	float ___U3CfieldOfViewU3Ek__BackingField_12;
	// UnityEngine.Vector2 SteamVR::<tanHalfFov>k__BackingField
	Vector2_t2243707579  ___U3CtanHalfFovU3Ek__BackingField_13;
	// Valve.VR.VRTextureBounds_t[] SteamVR::<textureBounds>k__BackingField
	VRTextureBounds_tU5BU5D_t650810582* ___U3CtextureBoundsU3Ek__BackingField_14;
	// SteamVR_Utils/RigidTransform[] SteamVR::<eyes>k__BackingField
	RigidTransformU5BU5D_t1649806291* ___U3CeyesU3Ek__BackingField_15;
	// Valve.VR.EGraphicsAPIConvention SteamVR::graphicsAPI
	int32_t ___graphicsAPI_16;

public:
	inline static int32_t get_offset_of_U3ChmdU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(SteamVR_t3920918452, ___U3ChmdU3Ek__BackingField_2)); }
	inline CVRSystem_t1953699154 * get_U3ChmdU3Ek__BackingField_2() const { return ___U3ChmdU3Ek__BackingField_2; }
	inline CVRSystem_t1953699154 ** get_address_of_U3ChmdU3Ek__BackingField_2() { return &___U3ChmdU3Ek__BackingField_2; }
	inline void set_U3ChmdU3Ek__BackingField_2(CVRSystem_t1953699154 * value)
	{
		___U3ChmdU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3ChmdU3Ek__BackingField_2, value);
	}

	inline static int32_t get_offset_of_U3CcompositorU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(SteamVR_t3920918452, ___U3CcompositorU3Ek__BackingField_3)); }
	inline CVRCompositor_t197946050 * get_U3CcompositorU3Ek__BackingField_3() const { return ___U3CcompositorU3Ek__BackingField_3; }
	inline CVRCompositor_t197946050 ** get_address_of_U3CcompositorU3Ek__BackingField_3() { return &___U3CcompositorU3Ek__BackingField_3; }
	inline void set_U3CcompositorU3Ek__BackingField_3(CVRCompositor_t197946050 * value)
	{
		___U3CcompositorU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CcompositorU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_U3CoverlayU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(SteamVR_t3920918452, ___U3CoverlayU3Ek__BackingField_4)); }
	inline CVROverlay_t3377499315 * get_U3CoverlayU3Ek__BackingField_4() const { return ___U3CoverlayU3Ek__BackingField_4; }
	inline CVROverlay_t3377499315 ** get_address_of_U3CoverlayU3Ek__BackingField_4() { return &___U3CoverlayU3Ek__BackingField_4; }
	inline void set_U3CoverlayU3Ek__BackingField_4(CVROverlay_t3377499315 * value)
	{
		___U3CoverlayU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CoverlayU3Ek__BackingField_4, value);
	}

	inline static int32_t get_offset_of_U3CsceneWidthU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(SteamVR_t3920918452, ___U3CsceneWidthU3Ek__BackingField_9)); }
	inline float get_U3CsceneWidthU3Ek__BackingField_9() const { return ___U3CsceneWidthU3Ek__BackingField_9; }
	inline float* get_address_of_U3CsceneWidthU3Ek__BackingField_9() { return &___U3CsceneWidthU3Ek__BackingField_9; }
	inline void set_U3CsceneWidthU3Ek__BackingField_9(float value)
	{
		___U3CsceneWidthU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CsceneHeightU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(SteamVR_t3920918452, ___U3CsceneHeightU3Ek__BackingField_10)); }
	inline float get_U3CsceneHeightU3Ek__BackingField_10() const { return ___U3CsceneHeightU3Ek__BackingField_10; }
	inline float* get_address_of_U3CsceneHeightU3Ek__BackingField_10() { return &___U3CsceneHeightU3Ek__BackingField_10; }
	inline void set_U3CsceneHeightU3Ek__BackingField_10(float value)
	{
		___U3CsceneHeightU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CaspectU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(SteamVR_t3920918452, ___U3CaspectU3Ek__BackingField_11)); }
	inline float get_U3CaspectU3Ek__BackingField_11() const { return ___U3CaspectU3Ek__BackingField_11; }
	inline float* get_address_of_U3CaspectU3Ek__BackingField_11() { return &___U3CaspectU3Ek__BackingField_11; }
	inline void set_U3CaspectU3Ek__BackingField_11(float value)
	{
		___U3CaspectU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CfieldOfViewU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(SteamVR_t3920918452, ___U3CfieldOfViewU3Ek__BackingField_12)); }
	inline float get_U3CfieldOfViewU3Ek__BackingField_12() const { return ___U3CfieldOfViewU3Ek__BackingField_12; }
	inline float* get_address_of_U3CfieldOfViewU3Ek__BackingField_12() { return &___U3CfieldOfViewU3Ek__BackingField_12; }
	inline void set_U3CfieldOfViewU3Ek__BackingField_12(float value)
	{
		___U3CfieldOfViewU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CtanHalfFovU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(SteamVR_t3920918452, ___U3CtanHalfFovU3Ek__BackingField_13)); }
	inline Vector2_t2243707579  get_U3CtanHalfFovU3Ek__BackingField_13() const { return ___U3CtanHalfFovU3Ek__BackingField_13; }
	inline Vector2_t2243707579 * get_address_of_U3CtanHalfFovU3Ek__BackingField_13() { return &___U3CtanHalfFovU3Ek__BackingField_13; }
	inline void set_U3CtanHalfFovU3Ek__BackingField_13(Vector2_t2243707579  value)
	{
		___U3CtanHalfFovU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CtextureBoundsU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(SteamVR_t3920918452, ___U3CtextureBoundsU3Ek__BackingField_14)); }
	inline VRTextureBounds_tU5BU5D_t650810582* get_U3CtextureBoundsU3Ek__BackingField_14() const { return ___U3CtextureBoundsU3Ek__BackingField_14; }
	inline VRTextureBounds_tU5BU5D_t650810582** get_address_of_U3CtextureBoundsU3Ek__BackingField_14() { return &___U3CtextureBoundsU3Ek__BackingField_14; }
	inline void set_U3CtextureBoundsU3Ek__BackingField_14(VRTextureBounds_tU5BU5D_t650810582* value)
	{
		___U3CtextureBoundsU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CtextureBoundsU3Ek__BackingField_14, value);
	}

	inline static int32_t get_offset_of_U3CeyesU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(SteamVR_t3920918452, ___U3CeyesU3Ek__BackingField_15)); }
	inline RigidTransformU5BU5D_t1649806291* get_U3CeyesU3Ek__BackingField_15() const { return ___U3CeyesU3Ek__BackingField_15; }
	inline RigidTransformU5BU5D_t1649806291** get_address_of_U3CeyesU3Ek__BackingField_15() { return &___U3CeyesU3Ek__BackingField_15; }
	inline void set_U3CeyesU3Ek__BackingField_15(RigidTransformU5BU5D_t1649806291* value)
	{
		___U3CeyesU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier(&___U3CeyesU3Ek__BackingField_15, value);
	}

	inline static int32_t get_offset_of_graphicsAPI_16() { return static_cast<int32_t>(offsetof(SteamVR_t3920918452, ___graphicsAPI_16)); }
	inline int32_t get_graphicsAPI_16() const { return ___graphicsAPI_16; }
	inline int32_t* get_address_of_graphicsAPI_16() { return &___graphicsAPI_16; }
	inline void set_graphicsAPI_16(int32_t value)
	{
		___graphicsAPI_16 = value;
	}
};

struct SteamVR_t3920918452_StaticFields
{
public:
	// System.Boolean SteamVR::_enabled
	bool ____enabled_0;
	// SteamVR SteamVR::_instance
	SteamVR_t3920918452 * ____instance_1;
	// System.Boolean SteamVR::<initializing>k__BackingField
	bool ___U3CinitializingU3Ek__BackingField_5;
	// System.Boolean SteamVR::<calibrating>k__BackingField
	bool ___U3CcalibratingU3Ek__BackingField_6;
	// System.Boolean SteamVR::<outOfRange>k__BackingField
	bool ___U3CoutOfRangeU3Ek__BackingField_7;
	// System.Boolean[] SteamVR::connected
	BooleanU5BU5D_t3568034315* ___connected_8;

public:
	inline static int32_t get_offset_of__enabled_0() { return static_cast<int32_t>(offsetof(SteamVR_t3920918452_StaticFields, ____enabled_0)); }
	inline bool get__enabled_0() const { return ____enabled_0; }
	inline bool* get_address_of__enabled_0() { return &____enabled_0; }
	inline void set__enabled_0(bool value)
	{
		____enabled_0 = value;
	}

	inline static int32_t get_offset_of__instance_1() { return static_cast<int32_t>(offsetof(SteamVR_t3920918452_StaticFields, ____instance_1)); }
	inline SteamVR_t3920918452 * get__instance_1() const { return ____instance_1; }
	inline SteamVR_t3920918452 ** get_address_of__instance_1() { return &____instance_1; }
	inline void set__instance_1(SteamVR_t3920918452 * value)
	{
		____instance_1 = value;
		Il2CppCodeGenWriteBarrier(&____instance_1, value);
	}

	inline static int32_t get_offset_of_U3CinitializingU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(SteamVR_t3920918452_StaticFields, ___U3CinitializingU3Ek__BackingField_5)); }
	inline bool get_U3CinitializingU3Ek__BackingField_5() const { return ___U3CinitializingU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CinitializingU3Ek__BackingField_5() { return &___U3CinitializingU3Ek__BackingField_5; }
	inline void set_U3CinitializingU3Ek__BackingField_5(bool value)
	{
		___U3CinitializingU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CcalibratingU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(SteamVR_t3920918452_StaticFields, ___U3CcalibratingU3Ek__BackingField_6)); }
	inline bool get_U3CcalibratingU3Ek__BackingField_6() const { return ___U3CcalibratingU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CcalibratingU3Ek__BackingField_6() { return &___U3CcalibratingU3Ek__BackingField_6; }
	inline void set_U3CcalibratingU3Ek__BackingField_6(bool value)
	{
		___U3CcalibratingU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CoutOfRangeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(SteamVR_t3920918452_StaticFields, ___U3CoutOfRangeU3Ek__BackingField_7)); }
	inline bool get_U3CoutOfRangeU3Ek__BackingField_7() const { return ___U3CoutOfRangeU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CoutOfRangeU3Ek__BackingField_7() { return &___U3CoutOfRangeU3Ek__BackingField_7; }
	inline void set_U3CoutOfRangeU3Ek__BackingField_7(bool value)
	{
		___U3CoutOfRangeU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_connected_8() { return static_cast<int32_t>(offsetof(SteamVR_t3920918452_StaticFields, ___connected_8)); }
	inline BooleanU5BU5D_t3568034315* get_connected_8() const { return ___connected_8; }
	inline BooleanU5BU5D_t3568034315** get_address_of_connected_8() { return &___connected_8; }
	inline void set_connected_8(BooleanU5BU5D_t3568034315* value)
	{
		___connected_8 = value;
		Il2CppCodeGenWriteBarrier(&___connected_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
