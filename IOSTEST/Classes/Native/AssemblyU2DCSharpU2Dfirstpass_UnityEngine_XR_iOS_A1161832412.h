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

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARAnchor
struct  ARAnchor_t1161832412 
{
public:
	// System.String UnityEngine.XR.iOS.ARAnchor::identifier
	String_t* ___identifier_0;
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.ARAnchor::transform
	Matrix4x4_t2933234003  ___transform_1;

public:
	inline static int32_t get_offset_of_identifier_0() { return static_cast<int32_t>(offsetof(ARAnchor_t1161832412, ___identifier_0)); }
	inline String_t* get_identifier_0() const { return ___identifier_0; }
	inline String_t** get_address_of_identifier_0() { return &___identifier_0; }
	inline void set_identifier_0(String_t* value)
	{
		___identifier_0 = value;
		Il2CppCodeGenWriteBarrier(&___identifier_0, value);
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(ARAnchor_t1161832412, ___transform_1)); }
	inline Matrix4x4_t2933234003  get_transform_1() const { return ___transform_1; }
	inline Matrix4x4_t2933234003 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(Matrix4x4_t2933234003  value)
	{
		___transform_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.ARAnchor
struct ARAnchor_t1161832412_marshaled_pinvoke
{
	char* ___identifier_0;
	Matrix4x4_t2933234003  ___transform_1;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.ARAnchor
struct ARAnchor_t1161832412_marshaled_com
{
	Il2CppChar* ___identifier_0;
	Matrix4x4_t2933234003  ___transform_1;
};
