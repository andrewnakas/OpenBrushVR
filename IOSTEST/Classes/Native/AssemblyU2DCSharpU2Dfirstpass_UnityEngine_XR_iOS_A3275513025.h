#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityEngine_XR_iOS_A3616749745.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARHitTestResult
struct  ARHitTestResult_t3275513025 
{
public:
	// UnityEngine.XR.iOS.ARHitTestResultType UnityEngine.XR.iOS.ARHitTestResult::type
	int64_t ___type_0;
	// System.Double UnityEngine.XR.iOS.ARHitTestResult::distance
	double ___distance_1;
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.ARHitTestResult::localTransform
	Matrix4x4_t2933234003  ___localTransform_2;
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.ARHitTestResult::worldTransform
	Matrix4x4_t2933234003  ___worldTransform_3;
	// System.String UnityEngine.XR.iOS.ARHitTestResult::anchorIdentifier
	String_t* ___anchorIdentifier_4;
	// System.Boolean UnityEngine.XR.iOS.ARHitTestResult::isValid
	bool ___isValid_5;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(ARHitTestResult_t3275513025, ___type_0)); }
	inline int64_t get_type_0() const { return ___type_0; }
	inline int64_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int64_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_distance_1() { return static_cast<int32_t>(offsetof(ARHitTestResult_t3275513025, ___distance_1)); }
	inline double get_distance_1() const { return ___distance_1; }
	inline double* get_address_of_distance_1() { return &___distance_1; }
	inline void set_distance_1(double value)
	{
		___distance_1 = value;
	}

	inline static int32_t get_offset_of_localTransform_2() { return static_cast<int32_t>(offsetof(ARHitTestResult_t3275513025, ___localTransform_2)); }
	inline Matrix4x4_t2933234003  get_localTransform_2() const { return ___localTransform_2; }
	inline Matrix4x4_t2933234003 * get_address_of_localTransform_2() { return &___localTransform_2; }
	inline void set_localTransform_2(Matrix4x4_t2933234003  value)
	{
		___localTransform_2 = value;
	}

	inline static int32_t get_offset_of_worldTransform_3() { return static_cast<int32_t>(offsetof(ARHitTestResult_t3275513025, ___worldTransform_3)); }
	inline Matrix4x4_t2933234003  get_worldTransform_3() const { return ___worldTransform_3; }
	inline Matrix4x4_t2933234003 * get_address_of_worldTransform_3() { return &___worldTransform_3; }
	inline void set_worldTransform_3(Matrix4x4_t2933234003  value)
	{
		___worldTransform_3 = value;
	}

	inline static int32_t get_offset_of_anchorIdentifier_4() { return static_cast<int32_t>(offsetof(ARHitTestResult_t3275513025, ___anchorIdentifier_4)); }
	inline String_t* get_anchorIdentifier_4() const { return ___anchorIdentifier_4; }
	inline String_t** get_address_of_anchorIdentifier_4() { return &___anchorIdentifier_4; }
	inline void set_anchorIdentifier_4(String_t* value)
	{
		___anchorIdentifier_4 = value;
		Il2CppCodeGenWriteBarrier(&___anchorIdentifier_4, value);
	}

	inline static int32_t get_offset_of_isValid_5() { return static_cast<int32_t>(offsetof(ARHitTestResult_t3275513025, ___isValid_5)); }
	inline bool get_isValid_5() const { return ___isValid_5; }
	inline bool* get_address_of_isValid_5() { return &___isValid_5; }
	inline void set_isValid_5(bool value)
	{
		___isValid_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.ARHitTestResult
struct ARHitTestResult_t3275513025_marshaled_pinvoke
{
	int64_t ___type_0;
	double ___distance_1;
	Matrix4x4_t2933234003  ___localTransform_2;
	Matrix4x4_t2933234003  ___worldTransform_3;
	char* ___anchorIdentifier_4;
	int32_t ___isValid_5;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.ARHitTestResult
struct ARHitTestResult_t3275513025_marshaled_com
{
	int64_t ___type_0;
	double ___distance_1;
	Matrix4x4_t2933234003  ___localTransform_2;
	Matrix4x4_t2933234003  ___worldTransform_3;
	Il2CppChar* ___anchorIdentifier_4;
	int32_t ___isValid_5;
};
