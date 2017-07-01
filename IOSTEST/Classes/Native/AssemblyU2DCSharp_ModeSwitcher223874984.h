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

// ModeSwitcher
struct  ModeSwitcher_t223874984  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject ModeSwitcher::ballMake
	GameObject_t1756533147 * ___ballMake_2;
	// UnityEngine.GameObject ModeSwitcher::ballMove
	GameObject_t1756533147 * ___ballMove_3;
	// System.Int32 ModeSwitcher::appMode
	int32_t ___appMode_4;

public:
	inline static int32_t get_offset_of_ballMake_2() { return static_cast<int32_t>(offsetof(ModeSwitcher_t223874984, ___ballMake_2)); }
	inline GameObject_t1756533147 * get_ballMake_2() const { return ___ballMake_2; }
	inline GameObject_t1756533147 ** get_address_of_ballMake_2() { return &___ballMake_2; }
	inline void set_ballMake_2(GameObject_t1756533147 * value)
	{
		___ballMake_2 = value;
		Il2CppCodeGenWriteBarrier(&___ballMake_2, value);
	}

	inline static int32_t get_offset_of_ballMove_3() { return static_cast<int32_t>(offsetof(ModeSwitcher_t223874984, ___ballMove_3)); }
	inline GameObject_t1756533147 * get_ballMove_3() const { return ___ballMove_3; }
	inline GameObject_t1756533147 ** get_address_of_ballMove_3() { return &___ballMove_3; }
	inline void set_ballMove_3(GameObject_t1756533147 * value)
	{
		___ballMove_3 = value;
		Il2CppCodeGenWriteBarrier(&___ballMove_3, value);
	}

	inline static int32_t get_offset_of_appMode_4() { return static_cast<int32_t>(offsetof(ModeSwitcher_t223874984, ___appMode_4)); }
	inline int32_t get_appMode_4() const { return ___appMode_4; }
	inline int32_t* get_address_of_appMode_4() { return &___appMode_4; }
	inline void set_appMode_4(int32_t value)
	{
		___appMode_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
