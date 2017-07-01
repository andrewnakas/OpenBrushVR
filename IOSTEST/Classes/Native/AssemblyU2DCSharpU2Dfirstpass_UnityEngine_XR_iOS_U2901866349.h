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
#include "AssemblyU2DCSharpU2Dfirstpass_UnityEngine_XR_iOS_Un100931615.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityEngine_XR_iOS_A2379298071.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARAnchorData
struct  UnityARAnchorData_t2901866349 
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARAnchorData::ptrIdentifier
	IntPtr_t ___ptrIdentifier_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARAnchorData::transform
	UnityARMatrix4x4_t100931615  ___transform_1;
	// UnityEngine.XR.iOS.ARPlaneAnchorAlignment UnityEngine.XR.iOS.UnityARAnchorData::alignment
	int64_t ___alignment_2;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARAnchorData::center
	Vector4_t2243707581  ___center_3;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARAnchorData::extent
	Vector4_t2243707581  ___extent_4;

public:
	inline static int32_t get_offset_of_ptrIdentifier_0() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t2901866349, ___ptrIdentifier_0)); }
	inline IntPtr_t get_ptrIdentifier_0() const { return ___ptrIdentifier_0; }
	inline IntPtr_t* get_address_of_ptrIdentifier_0() { return &___ptrIdentifier_0; }
	inline void set_ptrIdentifier_0(IntPtr_t value)
	{
		___ptrIdentifier_0 = value;
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t2901866349, ___transform_1)); }
	inline UnityARMatrix4x4_t100931615  get_transform_1() const { return ___transform_1; }
	inline UnityARMatrix4x4_t100931615 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(UnityARMatrix4x4_t100931615  value)
	{
		___transform_1 = value;
	}

	inline static int32_t get_offset_of_alignment_2() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t2901866349, ___alignment_2)); }
	inline int64_t get_alignment_2() const { return ___alignment_2; }
	inline int64_t* get_address_of_alignment_2() { return &___alignment_2; }
	inline void set_alignment_2(int64_t value)
	{
		___alignment_2 = value;
	}

	inline static int32_t get_offset_of_center_3() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t2901866349, ___center_3)); }
	inline Vector4_t2243707581  get_center_3() const { return ___center_3; }
	inline Vector4_t2243707581 * get_address_of_center_3() { return &___center_3; }
	inline void set_center_3(Vector4_t2243707581  value)
	{
		___center_3 = value;
	}

	inline static int32_t get_offset_of_extent_4() { return static_cast<int32_t>(offsetof(UnityARAnchorData_t2901866349, ___extent_4)); }
	inline Vector4_t2243707581  get_extent_4() const { return ___extent_4; }
	inline Vector4_t2243707581 * get_address_of_extent_4() { return &___extent_4; }
	inline void set_extent_4(Vector4_t2243707581  value)
	{
		___extent_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
