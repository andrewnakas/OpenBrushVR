#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UnityEngine.Mesh
struct Mesh_t1356156583;
// UnityEngine.Material
struct Material_t193706927;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SteamVR_RenderModel/RenderModel
struct  RenderModel_t582033572  : public Il2CppObject
{
public:
	// UnityEngine.Mesh SteamVR_RenderModel/RenderModel::<mesh>k__BackingField
	Mesh_t1356156583 * ___U3CmeshU3Ek__BackingField_0;
	// UnityEngine.Material SteamVR_RenderModel/RenderModel::<material>k__BackingField
	Material_t193706927 * ___U3CmaterialU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CmeshU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(RenderModel_t582033572, ___U3CmeshU3Ek__BackingField_0)); }
	inline Mesh_t1356156583 * get_U3CmeshU3Ek__BackingField_0() const { return ___U3CmeshU3Ek__BackingField_0; }
	inline Mesh_t1356156583 ** get_address_of_U3CmeshU3Ek__BackingField_0() { return &___U3CmeshU3Ek__BackingField_0; }
	inline void set_U3CmeshU3Ek__BackingField_0(Mesh_t1356156583 * value)
	{
		___U3CmeshU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CmeshU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CmaterialU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(RenderModel_t582033572, ___U3CmaterialU3Ek__BackingField_1)); }
	inline Material_t193706927 * get_U3CmaterialU3Ek__BackingField_1() const { return ___U3CmaterialU3Ek__BackingField_1; }
	inline Material_t193706927 ** get_address_of_U3CmaterialU3Ek__BackingField_1() { return &___U3CmaterialU3Ek__BackingField_1; }
	inline void set_U3CmaterialU3Ek__BackingField_1(Material_t193706927 * value)
	{
		___U3CmaterialU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CmaterialU3Ek__BackingField_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
