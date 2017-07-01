#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SmoothedVector3
struct  SmoothedVector3_t1397904915  : public Il2CppObject
{
public:
	// UnityEngine.Vector3 SmoothedVector3::value
	Vector3_t2243707580  ___value_0;
	// System.Single SmoothedVector3::delay
	float ___delay_1;
	// System.Boolean SmoothedVector3::reset
	bool ___reset_2;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(SmoothedVector3_t1397904915, ___value_0)); }
	inline Vector3_t2243707580  get_value_0() const { return ___value_0; }
	inline Vector3_t2243707580 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Vector3_t2243707580  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_delay_1() { return static_cast<int32_t>(offsetof(SmoothedVector3_t1397904915, ___delay_1)); }
	inline float get_delay_1() const { return ___delay_1; }
	inline float* get_address_of_delay_1() { return &___delay_1; }
	inline void set_delay_1(float value)
	{
		___delay_1 = value;
	}

	inline static int32_t get_offset_of_reset_2() { return static_cast<int32_t>(offsetof(SmoothedVector3_t1397904915, ___reset_2)); }
	inline bool get_reset_2() const { return ___reset_2; }
	inline bool* get_address_of_reset_2() { return &___reset_2; }
	inline void set_reset_2(bool value)
	{
		___reset_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
