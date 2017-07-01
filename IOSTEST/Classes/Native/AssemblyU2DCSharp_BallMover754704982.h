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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BallMover
struct  BallMover_t754704982  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject BallMover::collBallPrefab
	GameObject_t1756533147 * ___collBallPrefab_2;
	// UnityEngine.GameObject BallMover::collBallGO
	GameObject_t1756533147 * ___collBallGO_3;

public:
	inline static int32_t get_offset_of_collBallPrefab_2() { return static_cast<int32_t>(offsetof(BallMover_t754704982, ___collBallPrefab_2)); }
	inline GameObject_t1756533147 * get_collBallPrefab_2() const { return ___collBallPrefab_2; }
	inline GameObject_t1756533147 ** get_address_of_collBallPrefab_2() { return &___collBallPrefab_2; }
	inline void set_collBallPrefab_2(GameObject_t1756533147 * value)
	{
		___collBallPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___collBallPrefab_2, value);
	}

	inline static int32_t get_offset_of_collBallGO_3() { return static_cast<int32_t>(offsetof(BallMover_t754704982, ___collBallGO_3)); }
	inline GameObject_t1756533147 * get_collBallGO_3() const { return ___collBallGO_3; }
	inline GameObject_t1756533147 ** get_address_of_collBallGO_3() { return &___collBallGO_3; }
	inline void set_collBallGO_3(GameObject_t1756533147 * value)
	{
		___collBallGO_3 = value;
		Il2CppCodeGenWriteBarrier(&___collBallGO_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
