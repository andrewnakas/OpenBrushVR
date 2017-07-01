#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PointerEventArgs
struct  PointerEventArgs_t4020535570 
{
public:
	// System.UInt32 PointerEventArgs::controllerIndex
	uint32_t ___controllerIndex_0;
	// System.UInt32 PointerEventArgs::flags
	uint32_t ___flags_1;
	// System.Single PointerEventArgs::distance
	float ___distance_2;
	// UnityEngine.Transform PointerEventArgs::target
	Transform_t3275118058 * ___target_3;

public:
	inline static int32_t get_offset_of_controllerIndex_0() { return static_cast<int32_t>(offsetof(PointerEventArgs_t4020535570, ___controllerIndex_0)); }
	inline uint32_t get_controllerIndex_0() const { return ___controllerIndex_0; }
	inline uint32_t* get_address_of_controllerIndex_0() { return &___controllerIndex_0; }
	inline void set_controllerIndex_0(uint32_t value)
	{
		___controllerIndex_0 = value;
	}

	inline static int32_t get_offset_of_flags_1() { return static_cast<int32_t>(offsetof(PointerEventArgs_t4020535570, ___flags_1)); }
	inline uint32_t get_flags_1() const { return ___flags_1; }
	inline uint32_t* get_address_of_flags_1() { return &___flags_1; }
	inline void set_flags_1(uint32_t value)
	{
		___flags_1 = value;
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(PointerEventArgs_t4020535570, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_target_3() { return static_cast<int32_t>(offsetof(PointerEventArgs_t4020535570, ___target_3)); }
	inline Transform_t3275118058 * get_target_3() const { return ___target_3; }
	inline Transform_t3275118058 ** get_address_of_target_3() { return &___target_3; }
	inline void set_target_3(Transform_t3275118058 * value)
	{
		___target_3 = value;
		Il2CppCodeGenWriteBarrier(&___target_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of PointerEventArgs
struct PointerEventArgs_t4020535570_marshaled_pinvoke
{
	uint32_t ___controllerIndex_0;
	uint32_t ___flags_1;
	float ___distance_2;
	Transform_t3275118058 * ___target_3;
};
// Native definition for COM marshalling of PointerEventArgs
struct PointerEventArgs_t4020535570_marshaled_com
{
	uint32_t ___controllerIndex_0;
	uint32_t ___flags_1;
	float ___distance_2;
	Transform_t3275118058 * ___target_3;
};
