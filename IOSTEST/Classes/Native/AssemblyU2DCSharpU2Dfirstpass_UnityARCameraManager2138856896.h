#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface
struct UnityARSessionNativeInterface_t1130867170;
// UnityEngine.Material
struct Material_t193706927;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityARCameraManager
struct  UnityARCameraManager_t2138856896  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Camera UnityARCameraManager::m_camera
	Camera_t189460977 * ___m_camera_2;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface UnityARCameraManager::m_session
	UnityARSessionNativeInterface_t1130867170 * ___m_session_3;
	// UnityEngine.Material UnityARCameraManager::savedClearMaterial
	Material_t193706927 * ___savedClearMaterial_4;

public:
	inline static int32_t get_offset_of_m_camera_2() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t2138856896, ___m_camera_2)); }
	inline Camera_t189460977 * get_m_camera_2() const { return ___m_camera_2; }
	inline Camera_t189460977 ** get_address_of_m_camera_2() { return &___m_camera_2; }
	inline void set_m_camera_2(Camera_t189460977 * value)
	{
		___m_camera_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_camera_2, value);
	}

	inline static int32_t get_offset_of_m_session_3() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t2138856896, ___m_session_3)); }
	inline UnityARSessionNativeInterface_t1130867170 * get_m_session_3() const { return ___m_session_3; }
	inline UnityARSessionNativeInterface_t1130867170 ** get_address_of_m_session_3() { return &___m_session_3; }
	inline void set_m_session_3(UnityARSessionNativeInterface_t1130867170 * value)
	{
		___m_session_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_session_3, value);
	}

	inline static int32_t get_offset_of_savedClearMaterial_4() { return static_cast<int32_t>(offsetof(UnityARCameraManager_t2138856896, ___savedClearMaterial_4)); }
	inline Material_t193706927 * get_savedClearMaterial_4() const { return ___savedClearMaterial_4; }
	inline Material_t193706927 ** get_address_of_savedClearMaterial_4() { return &___savedClearMaterial_4; }
	inline void set_savedClearMaterial_4(Material_t193706927 * value)
	{
		___savedClearMaterial_4 = value;
		Il2CppCodeGenWriteBarrier(&___savedClearMaterial_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
