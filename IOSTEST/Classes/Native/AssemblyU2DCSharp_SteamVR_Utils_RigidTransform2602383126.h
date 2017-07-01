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
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SteamVR_Utils/RigidTransform
struct  RigidTransform_t2602383126 
{
public:
	// UnityEngine.Vector3 SteamVR_Utils/RigidTransform::pos
	Vector3_t2243707580  ___pos_0;
	// UnityEngine.Quaternion SteamVR_Utils/RigidTransform::rot
	Quaternion_t4030073918  ___rot_1;

public:
	inline static int32_t get_offset_of_pos_0() { return static_cast<int32_t>(offsetof(RigidTransform_t2602383126, ___pos_0)); }
	inline Vector3_t2243707580  get_pos_0() const { return ___pos_0; }
	inline Vector3_t2243707580 * get_address_of_pos_0() { return &___pos_0; }
	inline void set_pos_0(Vector3_t2243707580  value)
	{
		___pos_0 = value;
	}

	inline static int32_t get_offset_of_rot_1() { return static_cast<int32_t>(offsetof(RigidTransform_t2602383126, ___rot_1)); }
	inline Quaternion_t4030073918  get_rot_1() const { return ___rot_1; }
	inline Quaternion_t4030073918 * get_address_of_rot_1() { return &___rot_1; }
	inline void set_rot_1(Quaternion_t4030073918  value)
	{
		___rot_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
