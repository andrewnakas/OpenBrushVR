#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.XR.iOS.UnityARAnchorManager
struct UnityARAnchorManager_t1086564192;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARGeneratePlane
struct  UnityARGeneratePlane_t3368998101  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject UnityEngine.XR.iOS.UnityARGeneratePlane::planePrefab
	GameObject_t1756533147 * ___planePrefab_2;
	// UnityEngine.XR.iOS.UnityARAnchorManager UnityEngine.XR.iOS.UnityARGeneratePlane::unityARAnchorManager
	UnityARAnchorManager_t1086564192 * ___unityARAnchorManager_3;

public:
	inline static int32_t get_offset_of_planePrefab_2() { return static_cast<int32_t>(offsetof(UnityARGeneratePlane_t3368998101, ___planePrefab_2)); }
	inline GameObject_t1756533147 * get_planePrefab_2() const { return ___planePrefab_2; }
	inline GameObject_t1756533147 ** get_address_of_planePrefab_2() { return &___planePrefab_2; }
	inline void set_planePrefab_2(GameObject_t1756533147 * value)
	{
		___planePrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___planePrefab_2, value);
	}

	inline static int32_t get_offset_of_unityARAnchorManager_3() { return static_cast<int32_t>(offsetof(UnityARGeneratePlane_t3368998101, ___unityARAnchorManager_3)); }
	inline UnityARAnchorManager_t1086564192 * get_unityARAnchorManager_3() const { return ___unityARAnchorManager_3; }
	inline UnityARAnchorManager_t1086564192 ** get_address_of_unityARAnchorManager_3() { return &___unityARAnchorManager_3; }
	inline void set_unityARAnchorManager_3(UnityARAnchorManager_t1086564192 * value)
	{
		___unityARAnchorManager_3 = value;
		Il2CppCodeGenWriteBarrier(&___unityARAnchorManager_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
