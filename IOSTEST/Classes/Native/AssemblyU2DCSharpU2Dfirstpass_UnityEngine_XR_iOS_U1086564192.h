#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.iOS.ARPlaneAnchorGameObject>
struct Dictionary_2_t4220005149;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARAnchorManager
struct  UnityARAnchorManager_t1086564192  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.XR.iOS.ARPlaneAnchorGameObject> UnityEngine.XR.iOS.UnityARAnchorManager::planeAnchorMap
	Dictionary_2_t4220005149 * ___planeAnchorMap_0;

public:
	inline static int32_t get_offset_of_planeAnchorMap_0() { return static_cast<int32_t>(offsetof(UnityARAnchorManager_t1086564192, ___planeAnchorMap_0)); }
	inline Dictionary_2_t4220005149 * get_planeAnchorMap_0() const { return ___planeAnchorMap_0; }
	inline Dictionary_2_t4220005149 ** get_address_of_planeAnchorMap_0() { return &___planeAnchorMap_0; }
	inline void set_planeAnchorMap_0(Dictionary_2_t4220005149 * value)
	{
		___planeAnchorMap_0 = value;
		Il2CppCodeGenWriteBarrier(&___planeAnchorMap_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
