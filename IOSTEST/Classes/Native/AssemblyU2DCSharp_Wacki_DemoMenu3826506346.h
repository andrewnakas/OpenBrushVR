#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wacki.DemoMenu
struct  DemoMenu_t3826506346  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform Wacki.DemoMenu::dirLight
	Transform_t3275118058 * ___dirLight_2;
	// UnityEngine.Transform Wacki.DemoMenu::cubeSpawn
	Transform_t3275118058 * ___cubeSpawn_3;

public:
	inline static int32_t get_offset_of_dirLight_2() { return static_cast<int32_t>(offsetof(DemoMenu_t3826506346, ___dirLight_2)); }
	inline Transform_t3275118058 * get_dirLight_2() const { return ___dirLight_2; }
	inline Transform_t3275118058 ** get_address_of_dirLight_2() { return &___dirLight_2; }
	inline void set_dirLight_2(Transform_t3275118058 * value)
	{
		___dirLight_2 = value;
		Il2CppCodeGenWriteBarrier(&___dirLight_2, value);
	}

	inline static int32_t get_offset_of_cubeSpawn_3() { return static_cast<int32_t>(offsetof(DemoMenu_t3826506346, ___cubeSpawn_3)); }
	inline Transform_t3275118058 * get_cubeSpawn_3() const { return ___cubeSpawn_3; }
	inline Transform_t3275118058 ** get_address_of_cubeSpawn_3() { return &___cubeSpawn_3; }
	inline void set_cubeSpawn_3(Transform_t3275118058 * value)
	{
		___cubeSpawn_3 = value;
		Il2CppCodeGenWriteBarrier(&___cubeSpawn_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
