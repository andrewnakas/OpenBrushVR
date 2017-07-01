#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;
// Valve.VR.EVRButtonId[]
struct EVRButtonIdU5BU5D_t985660653;
// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SteamVR_TestController
struct  SteamVR_TestController_t1860367601  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<System.Int32> SteamVR_TestController::controllerIndices
	List_1_t1440998580 * ___controllerIndices_2;
	// Valve.VR.EVRButtonId[] SteamVR_TestController::buttonIds
	EVRButtonIdU5BU5D_t985660653* ___buttonIds_3;
	// Valve.VR.EVRButtonId[] SteamVR_TestController::axisIds
	EVRButtonIdU5BU5D_t985660653* ___axisIds_4;
	// UnityEngine.Transform SteamVR_TestController::point
	Transform_t3275118058 * ___point_5;
	// UnityEngine.Transform SteamVR_TestController::pointer
	Transform_t3275118058 * ___pointer_6;

public:
	inline static int32_t get_offset_of_controllerIndices_2() { return static_cast<int32_t>(offsetof(SteamVR_TestController_t1860367601, ___controllerIndices_2)); }
	inline List_1_t1440998580 * get_controllerIndices_2() const { return ___controllerIndices_2; }
	inline List_1_t1440998580 ** get_address_of_controllerIndices_2() { return &___controllerIndices_2; }
	inline void set_controllerIndices_2(List_1_t1440998580 * value)
	{
		___controllerIndices_2 = value;
		Il2CppCodeGenWriteBarrier(&___controllerIndices_2, value);
	}

	inline static int32_t get_offset_of_buttonIds_3() { return static_cast<int32_t>(offsetof(SteamVR_TestController_t1860367601, ___buttonIds_3)); }
	inline EVRButtonIdU5BU5D_t985660653* get_buttonIds_3() const { return ___buttonIds_3; }
	inline EVRButtonIdU5BU5D_t985660653** get_address_of_buttonIds_3() { return &___buttonIds_3; }
	inline void set_buttonIds_3(EVRButtonIdU5BU5D_t985660653* value)
	{
		___buttonIds_3 = value;
		Il2CppCodeGenWriteBarrier(&___buttonIds_3, value);
	}

	inline static int32_t get_offset_of_axisIds_4() { return static_cast<int32_t>(offsetof(SteamVR_TestController_t1860367601, ___axisIds_4)); }
	inline EVRButtonIdU5BU5D_t985660653* get_axisIds_4() const { return ___axisIds_4; }
	inline EVRButtonIdU5BU5D_t985660653** get_address_of_axisIds_4() { return &___axisIds_4; }
	inline void set_axisIds_4(EVRButtonIdU5BU5D_t985660653* value)
	{
		___axisIds_4 = value;
		Il2CppCodeGenWriteBarrier(&___axisIds_4, value);
	}

	inline static int32_t get_offset_of_point_5() { return static_cast<int32_t>(offsetof(SteamVR_TestController_t1860367601, ___point_5)); }
	inline Transform_t3275118058 * get_point_5() const { return ___point_5; }
	inline Transform_t3275118058 ** get_address_of_point_5() { return &___point_5; }
	inline void set_point_5(Transform_t3275118058 * value)
	{
		___point_5 = value;
		Il2CppCodeGenWriteBarrier(&___point_5, value);
	}

	inline static int32_t get_offset_of_pointer_6() { return static_cast<int32_t>(offsetof(SteamVR_TestController_t1860367601, ___pointer_6)); }
	inline Transform_t3275118058 * get_pointer_6() const { return ___pointer_6; }
	inline Transform_t3275118058 ** get_address_of_pointer_6() { return &___pointer_6; }
	inline void set_pointer_6(Transform_t3275118058 * value)
	{
		___pointer_6 = value;
		Il2CppCodeGenWriteBarrier(&___pointer_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
