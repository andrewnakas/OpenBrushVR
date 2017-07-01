#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Camera
struct Camera_t189460977;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMouseEvents/HitInfo
struct  HitInfo_t1761367055 
{
public:
	// UnityEngine.GameObject UnityEngine.SendMouseEvents/HitInfo::target
	GameObject_t1756533147 * ___target_0;
	// UnityEngine.Camera UnityEngine.SendMouseEvents/HitInfo::camera
	Camera_t189460977 * ___camera_1;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(HitInfo_t1761367055, ___target_0)); }
	inline GameObject_t1756533147 * get_target_0() const { return ___target_0; }
	inline GameObject_t1756533147 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(GameObject_t1756533147 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier(&___target_0, value);
	}

	inline static int32_t get_offset_of_camera_1() { return static_cast<int32_t>(offsetof(HitInfo_t1761367055, ___camera_1)); }
	inline Camera_t189460977 * get_camera_1() const { return ___camera_1; }
	inline Camera_t189460977 ** get_address_of_camera_1() { return &___camera_1; }
	inline void set_camera_1(Camera_t189460977 * value)
	{
		___camera_1 = value;
		Il2CppCodeGenWriteBarrier(&___camera_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SendMouseEvents/HitInfo
struct HitInfo_t1761367055_marshaled_pinvoke
{
	GameObject_t1756533147 * ___target_0;
	Camera_t189460977 * ___camera_1;
};
// Native definition for COM marshalling of UnityEngine.SendMouseEvents/HitInfo
struct HitInfo_t1761367055_marshaled_com
{
	GameObject_t1756533147 * ___target_0;
	Camera_t189460977 * ___camera_1;
};
