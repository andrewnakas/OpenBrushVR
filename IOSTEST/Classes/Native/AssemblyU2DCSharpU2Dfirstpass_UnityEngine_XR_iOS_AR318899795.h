#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityEngine_XR_iOS_U2379988631.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARKitSessionConfiguration
struct  ARKitSessionConfiguration_t318899795 
{
public:
	// UnityEngine.XR.iOS.UnityARAlignment UnityEngine.XR.iOS.ARKitSessionConfiguration::alignment
	int32_t ___alignment_0;
	// System.Boolean UnityEngine.XR.iOS.ARKitSessionConfiguration::getPointCloudData
	bool ___getPointCloudData_1;
	// System.Boolean UnityEngine.XR.iOS.ARKitSessionConfiguration::enableLightEstimation
	bool ___enableLightEstimation_2;

public:
	inline static int32_t get_offset_of_alignment_0() { return static_cast<int32_t>(offsetof(ARKitSessionConfiguration_t318899795, ___alignment_0)); }
	inline int32_t get_alignment_0() const { return ___alignment_0; }
	inline int32_t* get_address_of_alignment_0() { return &___alignment_0; }
	inline void set_alignment_0(int32_t value)
	{
		___alignment_0 = value;
	}

	inline static int32_t get_offset_of_getPointCloudData_1() { return static_cast<int32_t>(offsetof(ARKitSessionConfiguration_t318899795, ___getPointCloudData_1)); }
	inline bool get_getPointCloudData_1() const { return ___getPointCloudData_1; }
	inline bool* get_address_of_getPointCloudData_1() { return &___getPointCloudData_1; }
	inline void set_getPointCloudData_1(bool value)
	{
		___getPointCloudData_1 = value;
	}

	inline static int32_t get_offset_of_enableLightEstimation_2() { return static_cast<int32_t>(offsetof(ARKitSessionConfiguration_t318899795, ___enableLightEstimation_2)); }
	inline bool get_enableLightEstimation_2() const { return ___enableLightEstimation_2; }
	inline bool* get_address_of_enableLightEstimation_2() { return &___enableLightEstimation_2; }
	inline void set_enableLightEstimation_2(bool value)
	{
		___enableLightEstimation_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.ARKitSessionConfiguration
struct ARKitSessionConfiguration_t318899795_marshaled_pinvoke
{
	int32_t ___alignment_0;
	int32_t ___getPointCloudData_1;
	int32_t ___enableLightEstimation_2;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.ARKitSessionConfiguration
struct ARKitSessionConfiguration_t318899795_marshaled_com
{
	int32_t ___alignment_0;
	int32_t ___getPointCloudData_1;
	int32_t ___enableLightEstimation_2;
};
