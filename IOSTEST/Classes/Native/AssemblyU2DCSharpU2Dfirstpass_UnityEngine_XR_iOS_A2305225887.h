#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityEngine_XR_iOS_A1439520888.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARPlaneAnchorGameObject
struct  ARPlaneAnchorGameObject_t2305225887  : public Il2CppObject
{
public:
	// UnityEngine.GameObject UnityEngine.XR.iOS.ARPlaneAnchorGameObject::gameObject
	GameObject_t1756533147 * ___gameObject_0;
	// UnityEngine.XR.iOS.ARPlaneAnchor UnityEngine.XR.iOS.ARPlaneAnchorGameObject::planeAnchor
	ARPlaneAnchor_t1439520888  ___planeAnchor_1;

public:
	inline static int32_t get_offset_of_gameObject_0() { return static_cast<int32_t>(offsetof(ARPlaneAnchorGameObject_t2305225887, ___gameObject_0)); }
	inline GameObject_t1756533147 * get_gameObject_0() const { return ___gameObject_0; }
	inline GameObject_t1756533147 ** get_address_of_gameObject_0() { return &___gameObject_0; }
	inline void set_gameObject_0(GameObject_t1756533147 * value)
	{
		___gameObject_0 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_0, value);
	}

	inline static int32_t get_offset_of_planeAnchor_1() { return static_cast<int32_t>(offsetof(ARPlaneAnchorGameObject_t2305225887, ___planeAnchor_1)); }
	inline ARPlaneAnchor_t1439520888  get_planeAnchor_1() const { return ___planeAnchor_1; }
	inline ARPlaneAnchor_t1439520888 * get_address_of_planeAnchor_1() { return &___planeAnchor_1; }
	inline void set_planeAnchor_1(ARPlaneAnchor_t1439520888  value)
	{
		___planeAnchor_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
