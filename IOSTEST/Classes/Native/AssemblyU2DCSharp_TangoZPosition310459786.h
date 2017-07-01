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
// UnityEngine.UI.Slider
struct Slider_t297367283;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TangoZPosition
struct  TangoZPosition_t310459786  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject TangoZPosition::controller
	GameObject_t1756533147 * ___controller_2;
	// UnityEngine.UI.Slider TangoZPosition::controllerPosition
	Slider_t297367283 * ___controllerPosition_3;

public:
	inline static int32_t get_offset_of_controller_2() { return static_cast<int32_t>(offsetof(TangoZPosition_t310459786, ___controller_2)); }
	inline GameObject_t1756533147 * get_controller_2() const { return ___controller_2; }
	inline GameObject_t1756533147 ** get_address_of_controller_2() { return &___controller_2; }
	inline void set_controller_2(GameObject_t1756533147 * value)
	{
		___controller_2 = value;
		Il2CppCodeGenWriteBarrier(&___controller_2, value);
	}

	inline static int32_t get_offset_of_controllerPosition_3() { return static_cast<int32_t>(offsetof(TangoZPosition_t310459786, ___controllerPosition_3)); }
	inline Slider_t297367283 * get_controllerPosition_3() const { return ___controllerPosition_3; }
	inline Slider_t297367283 ** get_address_of_controllerPosition_3() { return &___controllerPosition_3; }
	inline void set_controllerPosition_3(Slider_t297367283 * value)
	{
		___controllerPosition_3 = value;
		Il2CppCodeGenWriteBarrier(&___controllerPosition_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
