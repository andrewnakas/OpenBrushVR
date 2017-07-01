#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityEngine_XR_iOS_A4158705974.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityEngine_XR_iOS_A3477821059.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARFrame
struct  ARFrame_t1001293426 
{
public:
	// System.Double UnityEngine.XR.iOS.ARFrame::timestamp
	double ___timestamp_0;
	// System.IntPtr UnityEngine.XR.iOS.ARFrame::capturedImage
	IntPtr_t ___capturedImage_1;
	// UnityEngine.XR.iOS.ARCamera UnityEngine.XR.iOS.ARFrame::camera
	ARCamera_t4158705974  ___camera_2;
	// UnityEngine.XR.iOS.ARLightEstimate UnityEngine.XR.iOS.ARFrame::lightEstimate
	ARLightEstimate_t3477821059  ___lightEstimate_3;

public:
	inline static int32_t get_offset_of_timestamp_0() { return static_cast<int32_t>(offsetof(ARFrame_t1001293426, ___timestamp_0)); }
	inline double get_timestamp_0() const { return ___timestamp_0; }
	inline double* get_address_of_timestamp_0() { return &___timestamp_0; }
	inline void set_timestamp_0(double value)
	{
		___timestamp_0 = value;
	}

	inline static int32_t get_offset_of_capturedImage_1() { return static_cast<int32_t>(offsetof(ARFrame_t1001293426, ___capturedImage_1)); }
	inline IntPtr_t get_capturedImage_1() const { return ___capturedImage_1; }
	inline IntPtr_t* get_address_of_capturedImage_1() { return &___capturedImage_1; }
	inline void set_capturedImage_1(IntPtr_t value)
	{
		___capturedImage_1 = value;
	}

	inline static int32_t get_offset_of_camera_2() { return static_cast<int32_t>(offsetof(ARFrame_t1001293426, ___camera_2)); }
	inline ARCamera_t4158705974  get_camera_2() const { return ___camera_2; }
	inline ARCamera_t4158705974 * get_address_of_camera_2() { return &___camera_2; }
	inline void set_camera_2(ARCamera_t4158705974  value)
	{
		___camera_2 = value;
	}

	inline static int32_t get_offset_of_lightEstimate_3() { return static_cast<int32_t>(offsetof(ARFrame_t1001293426, ___lightEstimate_3)); }
	inline ARLightEstimate_t3477821059  get_lightEstimate_3() const { return ___lightEstimate_3; }
	inline ARLightEstimate_t3477821059 * get_address_of_lightEstimate_3() { return &___lightEstimate_3; }
	inline void set_lightEstimate_3(ARLightEstimate_t3477821059  value)
	{
		___lightEstimate_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
