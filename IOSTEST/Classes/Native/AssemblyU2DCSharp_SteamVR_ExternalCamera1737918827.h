#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_SteamVR_ExternalCamera_Config1802482304.h"

// System.String
struct String_t;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Camera[]
struct CameraU5BU5D_t3079764780;
// UnityEngine.Rect[]
struct RectU5BU5D_t1299715887;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SteamVR_ExternalCamera
struct  SteamVR_ExternalCamera_t1737918827  : public MonoBehaviour_t1158329972
{
public:
	// SteamVR_ExternalCamera/Config SteamVR_ExternalCamera::config
	Config_t1802482304  ___config_2;
	// System.String SteamVR_ExternalCamera::configPath
	String_t* ___configPath_3;
	// UnityEngine.Camera SteamVR_ExternalCamera::cam
	Camera_t189460977 * ___cam_4;
	// UnityEngine.Transform SteamVR_ExternalCamera::target
	Transform_t3275118058 * ___target_5;
	// UnityEngine.GameObject SteamVR_ExternalCamera::clipQuad
	GameObject_t1756533147 * ___clipQuad_6;
	// UnityEngine.Material SteamVR_ExternalCamera::clipMaterial
	Material_t193706927 * ___clipMaterial_7;
	// UnityEngine.Material SteamVR_ExternalCamera::colorMat
	Material_t193706927 * ___colorMat_8;
	// UnityEngine.Material SteamVR_ExternalCamera::alphaMat
	Material_t193706927 * ___alphaMat_9;
	// UnityEngine.Camera[] SteamVR_ExternalCamera::cameras
	CameraU5BU5D_t3079764780* ___cameras_10;
	// UnityEngine.Rect[] SteamVR_ExternalCamera::cameraRects
	RectU5BU5D_t1299715887* ___cameraRects_11;
	// System.Single SteamVR_ExternalCamera::sceneResolutionScale
	float ___sceneResolutionScale_12;

public:
	inline static int32_t get_offset_of_config_2() { return static_cast<int32_t>(offsetof(SteamVR_ExternalCamera_t1737918827, ___config_2)); }
	inline Config_t1802482304  get_config_2() const { return ___config_2; }
	inline Config_t1802482304 * get_address_of_config_2() { return &___config_2; }
	inline void set_config_2(Config_t1802482304  value)
	{
		___config_2 = value;
	}

	inline static int32_t get_offset_of_configPath_3() { return static_cast<int32_t>(offsetof(SteamVR_ExternalCamera_t1737918827, ___configPath_3)); }
	inline String_t* get_configPath_3() const { return ___configPath_3; }
	inline String_t** get_address_of_configPath_3() { return &___configPath_3; }
	inline void set_configPath_3(String_t* value)
	{
		___configPath_3 = value;
		Il2CppCodeGenWriteBarrier(&___configPath_3, value);
	}

	inline static int32_t get_offset_of_cam_4() { return static_cast<int32_t>(offsetof(SteamVR_ExternalCamera_t1737918827, ___cam_4)); }
	inline Camera_t189460977 * get_cam_4() const { return ___cam_4; }
	inline Camera_t189460977 ** get_address_of_cam_4() { return &___cam_4; }
	inline void set_cam_4(Camera_t189460977 * value)
	{
		___cam_4 = value;
		Il2CppCodeGenWriteBarrier(&___cam_4, value);
	}

	inline static int32_t get_offset_of_target_5() { return static_cast<int32_t>(offsetof(SteamVR_ExternalCamera_t1737918827, ___target_5)); }
	inline Transform_t3275118058 * get_target_5() const { return ___target_5; }
	inline Transform_t3275118058 ** get_address_of_target_5() { return &___target_5; }
	inline void set_target_5(Transform_t3275118058 * value)
	{
		___target_5 = value;
		Il2CppCodeGenWriteBarrier(&___target_5, value);
	}

	inline static int32_t get_offset_of_clipQuad_6() { return static_cast<int32_t>(offsetof(SteamVR_ExternalCamera_t1737918827, ___clipQuad_6)); }
	inline GameObject_t1756533147 * get_clipQuad_6() const { return ___clipQuad_6; }
	inline GameObject_t1756533147 ** get_address_of_clipQuad_6() { return &___clipQuad_6; }
	inline void set_clipQuad_6(GameObject_t1756533147 * value)
	{
		___clipQuad_6 = value;
		Il2CppCodeGenWriteBarrier(&___clipQuad_6, value);
	}

	inline static int32_t get_offset_of_clipMaterial_7() { return static_cast<int32_t>(offsetof(SteamVR_ExternalCamera_t1737918827, ___clipMaterial_7)); }
	inline Material_t193706927 * get_clipMaterial_7() const { return ___clipMaterial_7; }
	inline Material_t193706927 ** get_address_of_clipMaterial_7() { return &___clipMaterial_7; }
	inline void set_clipMaterial_7(Material_t193706927 * value)
	{
		___clipMaterial_7 = value;
		Il2CppCodeGenWriteBarrier(&___clipMaterial_7, value);
	}

	inline static int32_t get_offset_of_colorMat_8() { return static_cast<int32_t>(offsetof(SteamVR_ExternalCamera_t1737918827, ___colorMat_8)); }
	inline Material_t193706927 * get_colorMat_8() const { return ___colorMat_8; }
	inline Material_t193706927 ** get_address_of_colorMat_8() { return &___colorMat_8; }
	inline void set_colorMat_8(Material_t193706927 * value)
	{
		___colorMat_8 = value;
		Il2CppCodeGenWriteBarrier(&___colorMat_8, value);
	}

	inline static int32_t get_offset_of_alphaMat_9() { return static_cast<int32_t>(offsetof(SteamVR_ExternalCamera_t1737918827, ___alphaMat_9)); }
	inline Material_t193706927 * get_alphaMat_9() const { return ___alphaMat_9; }
	inline Material_t193706927 ** get_address_of_alphaMat_9() { return &___alphaMat_9; }
	inline void set_alphaMat_9(Material_t193706927 * value)
	{
		___alphaMat_9 = value;
		Il2CppCodeGenWriteBarrier(&___alphaMat_9, value);
	}

	inline static int32_t get_offset_of_cameras_10() { return static_cast<int32_t>(offsetof(SteamVR_ExternalCamera_t1737918827, ___cameras_10)); }
	inline CameraU5BU5D_t3079764780* get_cameras_10() const { return ___cameras_10; }
	inline CameraU5BU5D_t3079764780** get_address_of_cameras_10() { return &___cameras_10; }
	inline void set_cameras_10(CameraU5BU5D_t3079764780* value)
	{
		___cameras_10 = value;
		Il2CppCodeGenWriteBarrier(&___cameras_10, value);
	}

	inline static int32_t get_offset_of_cameraRects_11() { return static_cast<int32_t>(offsetof(SteamVR_ExternalCamera_t1737918827, ___cameraRects_11)); }
	inline RectU5BU5D_t1299715887* get_cameraRects_11() const { return ___cameraRects_11; }
	inline RectU5BU5D_t1299715887** get_address_of_cameraRects_11() { return &___cameraRects_11; }
	inline void set_cameraRects_11(RectU5BU5D_t1299715887* value)
	{
		___cameraRects_11 = value;
		Il2CppCodeGenWriteBarrier(&___cameraRects_11, value);
	}

	inline static int32_t get_offset_of_sceneResolutionScale_12() { return static_cast<int32_t>(offsetof(SteamVR_ExternalCamera_t1737918827, ___sceneResolutionScale_12)); }
	inline float get_sceneResolutionScale_12() const { return ___sceneResolutionScale_12; }
	inline float* get_address_of_sceneResolutionScale_12() { return &___sceneResolutionScale_12; }
	inline void set_sceneResolutionScale_12(float value)
	{
		___sceneResolutionScale_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
