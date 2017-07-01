#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.UI.Slider
struct Slider_t297367283;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// depthFinder
struct  depthFinder_t1421279693  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject depthFinder::sphere
	GameObject_t1756533147 * ___sphere_2;
	// UnityEngine.Camera depthFinder::cam
	Camera_t189460977 * ___cam_3;
	// UnityEngine.UI.Text depthFinder::nearestPoint
	Text_t356221433 * ___nearestPoint_4;
	// System.Single depthFinder::pcReturn
	float ___pcReturn_5;
	// System.Boolean depthFinder::depthOff
	bool ___depthOff_6;
	// UnityEngine.Material depthFinder::currentMat
	Material_t193706927 * ___currentMat_7;
	// UnityEngine.UI.Text depthFinder::depthButton
	Text_t356221433 * ___depthButton_8;
	// UnityEngine.UI.Slider depthFinder::controllerPos
	Slider_t297367283 * ___controllerPos_9;
	// UnityEngine.GameObject depthFinder::sliderPos
	GameObject_t1756533147 * ___sliderPos_10;

public:
	inline static int32_t get_offset_of_sphere_2() { return static_cast<int32_t>(offsetof(depthFinder_t1421279693, ___sphere_2)); }
	inline GameObject_t1756533147 * get_sphere_2() const { return ___sphere_2; }
	inline GameObject_t1756533147 ** get_address_of_sphere_2() { return &___sphere_2; }
	inline void set_sphere_2(GameObject_t1756533147 * value)
	{
		___sphere_2 = value;
		Il2CppCodeGenWriteBarrier(&___sphere_2, value);
	}

	inline static int32_t get_offset_of_cam_3() { return static_cast<int32_t>(offsetof(depthFinder_t1421279693, ___cam_3)); }
	inline Camera_t189460977 * get_cam_3() const { return ___cam_3; }
	inline Camera_t189460977 ** get_address_of_cam_3() { return &___cam_3; }
	inline void set_cam_3(Camera_t189460977 * value)
	{
		___cam_3 = value;
		Il2CppCodeGenWriteBarrier(&___cam_3, value);
	}

	inline static int32_t get_offset_of_nearestPoint_4() { return static_cast<int32_t>(offsetof(depthFinder_t1421279693, ___nearestPoint_4)); }
	inline Text_t356221433 * get_nearestPoint_4() const { return ___nearestPoint_4; }
	inline Text_t356221433 ** get_address_of_nearestPoint_4() { return &___nearestPoint_4; }
	inline void set_nearestPoint_4(Text_t356221433 * value)
	{
		___nearestPoint_4 = value;
		Il2CppCodeGenWriteBarrier(&___nearestPoint_4, value);
	}

	inline static int32_t get_offset_of_pcReturn_5() { return static_cast<int32_t>(offsetof(depthFinder_t1421279693, ___pcReturn_5)); }
	inline float get_pcReturn_5() const { return ___pcReturn_5; }
	inline float* get_address_of_pcReturn_5() { return &___pcReturn_5; }
	inline void set_pcReturn_5(float value)
	{
		___pcReturn_5 = value;
	}

	inline static int32_t get_offset_of_depthOff_6() { return static_cast<int32_t>(offsetof(depthFinder_t1421279693, ___depthOff_6)); }
	inline bool get_depthOff_6() const { return ___depthOff_6; }
	inline bool* get_address_of_depthOff_6() { return &___depthOff_6; }
	inline void set_depthOff_6(bool value)
	{
		___depthOff_6 = value;
	}

	inline static int32_t get_offset_of_currentMat_7() { return static_cast<int32_t>(offsetof(depthFinder_t1421279693, ___currentMat_7)); }
	inline Material_t193706927 * get_currentMat_7() const { return ___currentMat_7; }
	inline Material_t193706927 ** get_address_of_currentMat_7() { return &___currentMat_7; }
	inline void set_currentMat_7(Material_t193706927 * value)
	{
		___currentMat_7 = value;
		Il2CppCodeGenWriteBarrier(&___currentMat_7, value);
	}

	inline static int32_t get_offset_of_depthButton_8() { return static_cast<int32_t>(offsetof(depthFinder_t1421279693, ___depthButton_8)); }
	inline Text_t356221433 * get_depthButton_8() const { return ___depthButton_8; }
	inline Text_t356221433 ** get_address_of_depthButton_8() { return &___depthButton_8; }
	inline void set_depthButton_8(Text_t356221433 * value)
	{
		___depthButton_8 = value;
		Il2CppCodeGenWriteBarrier(&___depthButton_8, value);
	}

	inline static int32_t get_offset_of_controllerPos_9() { return static_cast<int32_t>(offsetof(depthFinder_t1421279693, ___controllerPos_9)); }
	inline Slider_t297367283 * get_controllerPos_9() const { return ___controllerPos_9; }
	inline Slider_t297367283 ** get_address_of_controllerPos_9() { return &___controllerPos_9; }
	inline void set_controllerPos_9(Slider_t297367283 * value)
	{
		___controllerPos_9 = value;
		Il2CppCodeGenWriteBarrier(&___controllerPos_9, value);
	}

	inline static int32_t get_offset_of_sliderPos_10() { return static_cast<int32_t>(offsetof(depthFinder_t1421279693, ___sliderPos_10)); }
	inline GameObject_t1756533147 * get_sliderPos_10() const { return ___sliderPos_10; }
	inline GameObject_t1756533147 ** get_address_of_sliderPos_10() { return &___sliderPos_10; }
	inline void set_sliderPos_10(GameObject_t1756533147 * value)
	{
		___sliderPos_10 = value;
		Il2CppCodeGenWriteBarrier(&___sliderPos_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
