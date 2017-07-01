#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UnityEngine.MeshCollider
struct MeshCollider_t2718867283;
// UnityEngine.MeshFilter
struct MeshFilter_t3026937449;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARUtility
struct  UnityARUtility_t3608388148  : public Il2CppObject
{
public:
	// UnityEngine.MeshCollider UnityEngine.XR.iOS.UnityARUtility::meshCollider
	MeshCollider_t2718867283 * ___meshCollider_0;
	// UnityEngine.MeshFilter UnityEngine.XR.iOS.UnityARUtility::meshFilter
	MeshFilter_t3026937449 * ___meshFilter_1;

public:
	inline static int32_t get_offset_of_meshCollider_0() { return static_cast<int32_t>(offsetof(UnityARUtility_t3608388148, ___meshCollider_0)); }
	inline MeshCollider_t2718867283 * get_meshCollider_0() const { return ___meshCollider_0; }
	inline MeshCollider_t2718867283 ** get_address_of_meshCollider_0() { return &___meshCollider_0; }
	inline void set_meshCollider_0(MeshCollider_t2718867283 * value)
	{
		___meshCollider_0 = value;
		Il2CppCodeGenWriteBarrier(&___meshCollider_0, value);
	}

	inline static int32_t get_offset_of_meshFilter_1() { return static_cast<int32_t>(offsetof(UnityARUtility_t3608388148, ___meshFilter_1)); }
	inline MeshFilter_t3026937449 * get_meshFilter_1() const { return ___meshFilter_1; }
	inline MeshFilter_t3026937449 ** get_address_of_meshFilter_1() { return &___meshFilter_1; }
	inline void set_meshFilter_1(MeshFilter_t3026937449 * value)
	{
		___meshFilter_1 = value;
		Il2CppCodeGenWriteBarrier(&___meshFilter_1, value);
	}
};

struct UnityARUtility_t3608388148_StaticFields
{
public:
	// UnityEngine.GameObject UnityEngine.XR.iOS.UnityARUtility::planePrefab
	GameObject_t1756533147 * ___planePrefab_2;

public:
	inline static int32_t get_offset_of_planePrefab_2() { return static_cast<int32_t>(offsetof(UnityARUtility_t3608388148_StaticFields, ___planePrefab_2)); }
	inline GameObject_t1756533147 * get_planePrefab_2() const { return ___planePrefab_2; }
	inline GameObject_t1756533147 ** get_address_of_planePrefab_2() { return &___planePrefab_2; }
	inline void set_planePrefab_2(GameObject_t1756533147 * value)
	{
		___planePrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___planePrefab_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
