#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityEngine_XR_iOS_ART55960597.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityEngine_XR_iOS_A3911821096.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARCamera
struct  ARCamera_t4158705974 
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.ARCamera::worldTransform
	Matrix4x4_t2933234003  ___worldTransform_0;
	// UnityEngine.Vector3 UnityEngine.XR.iOS.ARCamera::eulerAngles
	Vector3_t2243707580  ___eulerAngles_1;
	// UnityEngine.XR.iOS.ARTrackingQuality UnityEngine.XR.iOS.ARCamera::trackingQuality
	int64_t ___trackingQuality_2;
	// UnityEngine.Vector3 UnityEngine.XR.iOS.ARCamera::intrinsics_row1
	Vector3_t2243707580  ___intrinsics_row1_3;
	// UnityEngine.Vector3 UnityEngine.XR.iOS.ARCamera::intrinsics_row2
	Vector3_t2243707580  ___intrinsics_row2_4;
	// UnityEngine.Vector3 UnityEngine.XR.iOS.ARCamera::intrinsics_row3
	Vector3_t2243707580  ___intrinsics_row3_5;
	// UnityEngine.XR.iOS.ARSize UnityEngine.XR.iOS.ARCamera::imageResolution
	ARSize_t3911821096  ___imageResolution_6;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(ARCamera_t4158705974, ___worldTransform_0)); }
	inline Matrix4x4_t2933234003  get_worldTransform_0() const { return ___worldTransform_0; }
	inline Matrix4x4_t2933234003 * get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(Matrix4x4_t2933234003  value)
	{
		___worldTransform_0 = value;
	}

	inline static int32_t get_offset_of_eulerAngles_1() { return static_cast<int32_t>(offsetof(ARCamera_t4158705974, ___eulerAngles_1)); }
	inline Vector3_t2243707580  get_eulerAngles_1() const { return ___eulerAngles_1; }
	inline Vector3_t2243707580 * get_address_of_eulerAngles_1() { return &___eulerAngles_1; }
	inline void set_eulerAngles_1(Vector3_t2243707580  value)
	{
		___eulerAngles_1 = value;
	}

	inline static int32_t get_offset_of_trackingQuality_2() { return static_cast<int32_t>(offsetof(ARCamera_t4158705974, ___trackingQuality_2)); }
	inline int64_t get_trackingQuality_2() const { return ___trackingQuality_2; }
	inline int64_t* get_address_of_trackingQuality_2() { return &___trackingQuality_2; }
	inline void set_trackingQuality_2(int64_t value)
	{
		___trackingQuality_2 = value;
	}

	inline static int32_t get_offset_of_intrinsics_row1_3() { return static_cast<int32_t>(offsetof(ARCamera_t4158705974, ___intrinsics_row1_3)); }
	inline Vector3_t2243707580  get_intrinsics_row1_3() const { return ___intrinsics_row1_3; }
	inline Vector3_t2243707580 * get_address_of_intrinsics_row1_3() { return &___intrinsics_row1_3; }
	inline void set_intrinsics_row1_3(Vector3_t2243707580  value)
	{
		___intrinsics_row1_3 = value;
	}

	inline static int32_t get_offset_of_intrinsics_row2_4() { return static_cast<int32_t>(offsetof(ARCamera_t4158705974, ___intrinsics_row2_4)); }
	inline Vector3_t2243707580  get_intrinsics_row2_4() const { return ___intrinsics_row2_4; }
	inline Vector3_t2243707580 * get_address_of_intrinsics_row2_4() { return &___intrinsics_row2_4; }
	inline void set_intrinsics_row2_4(Vector3_t2243707580  value)
	{
		___intrinsics_row2_4 = value;
	}

	inline static int32_t get_offset_of_intrinsics_row3_5() { return static_cast<int32_t>(offsetof(ARCamera_t4158705974, ___intrinsics_row3_5)); }
	inline Vector3_t2243707580  get_intrinsics_row3_5() const { return ___intrinsics_row3_5; }
	inline Vector3_t2243707580 * get_address_of_intrinsics_row3_5() { return &___intrinsics_row3_5; }
	inline void set_intrinsics_row3_5(Vector3_t2243707580  value)
	{
		___intrinsics_row3_5 = value;
	}

	inline static int32_t get_offset_of_imageResolution_6() { return static_cast<int32_t>(offsetof(ARCamera_t4158705974, ___imageResolution_6)); }
	inline ARSize_t3911821096  get_imageResolution_6() const { return ___imageResolution_6; }
	inline ARSize_t3911821096 * get_address_of_imageResolution_6() { return &___imageResolution_6; }
	inline void set_imageResolution_6(ARSize_t3911821096  value)
	{
		___imageResolution_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
