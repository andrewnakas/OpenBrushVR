#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SteamVR_Overlay/IntersectionResults
struct  IntersectionResults_t676309149 
{
public:
	// UnityEngine.Vector3 SteamVR_Overlay/IntersectionResults::point
	Vector3_t2243707580  ___point_0;
	// UnityEngine.Vector3 SteamVR_Overlay/IntersectionResults::normal
	Vector3_t2243707580  ___normal_1;
	// UnityEngine.Vector2 SteamVR_Overlay/IntersectionResults::UVs
	Vector2_t2243707579  ___UVs_2;
	// System.Single SteamVR_Overlay/IntersectionResults::distance
	float ___distance_3;

public:
	inline static int32_t get_offset_of_point_0() { return static_cast<int32_t>(offsetof(IntersectionResults_t676309149, ___point_0)); }
	inline Vector3_t2243707580  get_point_0() const { return ___point_0; }
	inline Vector3_t2243707580 * get_address_of_point_0() { return &___point_0; }
	inline void set_point_0(Vector3_t2243707580  value)
	{
		___point_0 = value;
	}

	inline static int32_t get_offset_of_normal_1() { return static_cast<int32_t>(offsetof(IntersectionResults_t676309149, ___normal_1)); }
	inline Vector3_t2243707580  get_normal_1() const { return ___normal_1; }
	inline Vector3_t2243707580 * get_address_of_normal_1() { return &___normal_1; }
	inline void set_normal_1(Vector3_t2243707580  value)
	{
		___normal_1 = value;
	}

	inline static int32_t get_offset_of_UVs_2() { return static_cast<int32_t>(offsetof(IntersectionResults_t676309149, ___UVs_2)); }
	inline Vector2_t2243707579  get_UVs_2() const { return ___UVs_2; }
	inline Vector2_t2243707579 * get_address_of_UVs_2() { return &___UVs_2; }
	inline void set_UVs_2(Vector2_t2243707579  value)
	{
		___UVs_2 = value;
	}

	inline static int32_t get_offset_of_distance_3() { return static_cast<int32_t>(offsetof(IntersectionResults_t676309149, ___distance_3)); }
	inline float get_distance_3() const { return ___distance_3; }
	inline float* get_address_of_distance_3() { return &___distance_3; }
	inline void set_distance_3(float value)
	{
		___distance_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
