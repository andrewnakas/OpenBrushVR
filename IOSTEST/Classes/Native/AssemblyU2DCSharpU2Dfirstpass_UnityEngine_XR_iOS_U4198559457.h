#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityEngine_XR_iOS_Un100931615.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityEngine_XR_iOS_A2048880995.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityEngine_XR_iOS_A4227173799.h"

// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;
struct Vector3_t2243707580 ;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARCamera
struct  UnityARCamera_t4198559457 
{
public:
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARCamera::worldTransform
	UnityARMatrix4x4_t100931615  ___worldTransform_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARCamera::projectionMatrix
	UnityARMatrix4x4_t100931615  ___projectionMatrix_1;
	// UnityEngine.XR.iOS.ARTrackingState UnityEngine.XR.iOS.UnityARCamera::trackingState
	int32_t ___trackingState_2;
	// UnityEngine.XR.iOS.ARTrackingStateReason UnityEngine.XR.iOS.UnityARCamera::trackingReason
	int32_t ___trackingReason_3;
	// UnityEngine.Vector3[] UnityEngine.XR.iOS.UnityARCamera::pointCloudData
	Vector3U5BU5D_t1172311765* ___pointCloudData_4;

public:
	inline static int32_t get_offset_of_worldTransform_0() { return static_cast<int32_t>(offsetof(UnityARCamera_t4198559457, ___worldTransform_0)); }
	inline UnityARMatrix4x4_t100931615  get_worldTransform_0() const { return ___worldTransform_0; }
	inline UnityARMatrix4x4_t100931615 * get_address_of_worldTransform_0() { return &___worldTransform_0; }
	inline void set_worldTransform_0(UnityARMatrix4x4_t100931615  value)
	{
		___worldTransform_0 = value;
	}

	inline static int32_t get_offset_of_projectionMatrix_1() { return static_cast<int32_t>(offsetof(UnityARCamera_t4198559457, ___projectionMatrix_1)); }
	inline UnityARMatrix4x4_t100931615  get_projectionMatrix_1() const { return ___projectionMatrix_1; }
	inline UnityARMatrix4x4_t100931615 * get_address_of_projectionMatrix_1() { return &___projectionMatrix_1; }
	inline void set_projectionMatrix_1(UnityARMatrix4x4_t100931615  value)
	{
		___projectionMatrix_1 = value;
	}

	inline static int32_t get_offset_of_trackingState_2() { return static_cast<int32_t>(offsetof(UnityARCamera_t4198559457, ___trackingState_2)); }
	inline int32_t get_trackingState_2() const { return ___trackingState_2; }
	inline int32_t* get_address_of_trackingState_2() { return &___trackingState_2; }
	inline void set_trackingState_2(int32_t value)
	{
		___trackingState_2 = value;
	}

	inline static int32_t get_offset_of_trackingReason_3() { return static_cast<int32_t>(offsetof(UnityARCamera_t4198559457, ___trackingReason_3)); }
	inline int32_t get_trackingReason_3() const { return ___trackingReason_3; }
	inline int32_t* get_address_of_trackingReason_3() { return &___trackingReason_3; }
	inline void set_trackingReason_3(int32_t value)
	{
		___trackingReason_3 = value;
	}

	inline static int32_t get_offset_of_pointCloudData_4() { return static_cast<int32_t>(offsetof(UnityARCamera_t4198559457, ___pointCloudData_4)); }
	inline Vector3U5BU5D_t1172311765* get_pointCloudData_4() const { return ___pointCloudData_4; }
	inline Vector3U5BU5D_t1172311765** get_address_of_pointCloudData_4() { return &___pointCloudData_4; }
	inline void set_pointCloudData_4(Vector3U5BU5D_t1172311765* value)
	{
		___pointCloudData_4 = value;
		Il2CppCodeGenWriteBarrier(&___pointCloudData_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.UnityARCamera
struct UnityARCamera_t4198559457_marshaled_pinvoke
{
	UnityARMatrix4x4_t100931615  ___worldTransform_0;
	UnityARMatrix4x4_t100931615  ___projectionMatrix_1;
	int32_t ___trackingState_2;
	int32_t ___trackingReason_3;
	Vector3_t2243707580 * ___pointCloudData_4;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.UnityARCamera
struct UnityARCamera_t4198559457_marshaled_com
{
	UnityARMatrix4x4_t100931615  ___worldTransform_0;
	UnityARMatrix4x4_t100931615  ___projectionMatrix_1;
	int32_t ___trackingState_2;
	int32_t ___trackingReason_3;
	Vector3_t2243707580 * ___pointCloudData_4;
};
