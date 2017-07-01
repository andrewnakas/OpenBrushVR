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
#include "AssemblyU2DCSharpU2Dfirstpass_UnityEngine_XR_iOS_A2379298071.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARPlaneAnchor
struct  ARPlaneAnchor_t1439520888 
{
public:
	// System.String UnityEngine.XR.iOS.ARPlaneAnchor::identifier
	String_t* ___identifier_0;
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.ARPlaneAnchor::transform
	Matrix4x4_t2933234003  ___transform_1;
	// UnityEngine.XR.iOS.ARPlaneAnchorAlignment UnityEngine.XR.iOS.ARPlaneAnchor::alignment
	int64_t ___alignment_2;
	// UnityEngine.Vector3 UnityEngine.XR.iOS.ARPlaneAnchor::center
	Vector3_t2243707580  ___center_3;
	// UnityEngine.Vector3 UnityEngine.XR.iOS.ARPlaneAnchor::extent
	Vector3_t2243707580  ___extent_4;

public:
	inline static int32_t get_offset_of_identifier_0() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t1439520888, ___identifier_0)); }
	inline String_t* get_identifier_0() const { return ___identifier_0; }
	inline String_t** get_address_of_identifier_0() { return &___identifier_0; }
	inline void set_identifier_0(String_t* value)
	{
		___identifier_0 = value;
		Il2CppCodeGenWriteBarrier(&___identifier_0, value);
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t1439520888, ___transform_1)); }
	inline Matrix4x4_t2933234003  get_transform_1() const { return ___transform_1; }
	inline Matrix4x4_t2933234003 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(Matrix4x4_t2933234003  value)
	{
		___transform_1 = value;
	}

	inline static int32_t get_offset_of_alignment_2() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t1439520888, ___alignment_2)); }
	inline int64_t get_alignment_2() const { return ___alignment_2; }
	inline int64_t* get_address_of_alignment_2() { return &___alignment_2; }
	inline void set_alignment_2(int64_t value)
	{
		___alignment_2 = value;
	}

	inline static int32_t get_offset_of_center_3() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t1439520888, ___center_3)); }
	inline Vector3_t2243707580  get_center_3() const { return ___center_3; }
	inline Vector3_t2243707580 * get_address_of_center_3() { return &___center_3; }
	inline void set_center_3(Vector3_t2243707580  value)
	{
		___center_3 = value;
	}

	inline static int32_t get_offset_of_extent_4() { return static_cast<int32_t>(offsetof(ARPlaneAnchor_t1439520888, ___extent_4)); }
	inline Vector3_t2243707580  get_extent_4() const { return ___extent_4; }
	inline Vector3_t2243707580 * get_address_of_extent_4() { return &___extent_4; }
	inline void set_extent_4(Vector3_t2243707580  value)
	{
		___extent_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.ARPlaneAnchor
struct ARPlaneAnchor_t1439520888_marshaled_pinvoke
{
	char* ___identifier_0;
	Matrix4x4_t2933234003  ___transform_1;
	int64_t ___alignment_2;
	Vector3_t2243707580  ___center_3;
	Vector3_t2243707580  ___extent_4;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.ARPlaneAnchor
struct ARPlaneAnchor_t1439520888_marshaled_com
{
	Il2CppChar* ___identifier_0;
	Matrix4x4_t2933234003  ___transform_1;
	int64_t ___alignment_2;
	Vector3_t2243707580  ___center_3;
	Vector3_t2243707580  ___extent_4;
};
