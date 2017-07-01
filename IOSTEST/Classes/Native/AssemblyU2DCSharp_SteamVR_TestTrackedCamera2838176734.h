#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SteamVR_TestTrackedCamera
struct  SteamVR_TestTrackedCamera_t2838176734  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Material SteamVR_TestTrackedCamera::material
	Material_t193706927 * ___material_2;
	// UnityEngine.Transform SteamVR_TestTrackedCamera::target
	Transform_t3275118058 * ___target_3;
	// System.Boolean SteamVR_TestTrackedCamera::undistorted
	bool ___undistorted_4;
	// System.Boolean SteamVR_TestTrackedCamera::cropped
	bool ___cropped_5;

public:
	inline static int32_t get_offset_of_material_2() { return static_cast<int32_t>(offsetof(SteamVR_TestTrackedCamera_t2838176734, ___material_2)); }
	inline Material_t193706927 * get_material_2() const { return ___material_2; }
	inline Material_t193706927 ** get_address_of_material_2() { return &___material_2; }
	inline void set_material_2(Material_t193706927 * value)
	{
		___material_2 = value;
		Il2CppCodeGenWriteBarrier(&___material_2, value);
	}

	inline static int32_t get_offset_of_target_3() { return static_cast<int32_t>(offsetof(SteamVR_TestTrackedCamera_t2838176734, ___target_3)); }
	inline Transform_t3275118058 * get_target_3() const { return ___target_3; }
	inline Transform_t3275118058 ** get_address_of_target_3() { return &___target_3; }
	inline void set_target_3(Transform_t3275118058 * value)
	{
		___target_3 = value;
		Il2CppCodeGenWriteBarrier(&___target_3, value);
	}

	inline static int32_t get_offset_of_undistorted_4() { return static_cast<int32_t>(offsetof(SteamVR_TestTrackedCamera_t2838176734, ___undistorted_4)); }
	inline bool get_undistorted_4() const { return ___undistorted_4; }
	inline bool* get_address_of_undistorted_4() { return &___undistorted_4; }
	inline void set_undistorted_4(bool value)
	{
		___undistorted_4 = value;
	}

	inline static int32_t get_offset_of_cropped_5() { return static_cast<int32_t>(offsetof(SteamVR_TestTrackedCamera_t2838176734, ___cropped_5)); }
	inline bool get_cropped_5() const { return ___cropped_5; }
	inline bool* get_address_of_cropped_5() { return &___cropped_5; }
	inline void set_cropped_5(bool value)
	{
		___cropped_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
