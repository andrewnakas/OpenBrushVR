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
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t3303648957;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BallMaker
struct  BallMaker_t2085518213  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject BallMaker::ballPrefab
	GameObject_t1756533147 * ___ballPrefab_2;
	// System.Single BallMaker::createHeight
	float ___createHeight_3;
	// UnityEngine.MaterialPropertyBlock BallMaker::props
	MaterialPropertyBlock_t3303648957 * ___props_4;

public:
	inline static int32_t get_offset_of_ballPrefab_2() { return static_cast<int32_t>(offsetof(BallMaker_t2085518213, ___ballPrefab_2)); }
	inline GameObject_t1756533147 * get_ballPrefab_2() const { return ___ballPrefab_2; }
	inline GameObject_t1756533147 ** get_address_of_ballPrefab_2() { return &___ballPrefab_2; }
	inline void set_ballPrefab_2(GameObject_t1756533147 * value)
	{
		___ballPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___ballPrefab_2, value);
	}

	inline static int32_t get_offset_of_createHeight_3() { return static_cast<int32_t>(offsetof(BallMaker_t2085518213, ___createHeight_3)); }
	inline float get_createHeight_3() const { return ___createHeight_3; }
	inline float* get_address_of_createHeight_3() { return &___createHeight_3; }
	inline void set_createHeight_3(float value)
	{
		___createHeight_3 = value;
	}

	inline static int32_t get_offset_of_props_4() { return static_cast<int32_t>(offsetof(BallMaker_t2085518213, ___props_4)); }
	inline MaterialPropertyBlock_t3303648957 * get_props_4() const { return ___props_4; }
	inline MaterialPropertyBlock_t3303648957 ** get_address_of_props_4() { return &___props_4; }
	inline void set_props_4(MaterialPropertyBlock_t3303648957 * value)
	{
		___props_4 = value;
		Il2CppCodeGenWriteBarrier(&___props_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
