#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UndoManager/PrevTrans
struct  PrevTrans_t3762428233  : public Il2CppObject
{
public:
	// UnityEngine.Vector3 UndoManager/PrevTrans::Prevpos
	Vector3_t2243707580  ___Prevpos_0;
	// UnityEngine.Quaternion UndoManager/PrevTrans::Prevrot
	Quaternion_t4030073918  ___Prevrot_1;
	// UnityEngine.Vector3 UndoManager/PrevTrans::Prevscale
	Vector3_t2243707580  ___Prevscale_2;
	// UnityEngine.GameObject UndoManager/PrevTrans::SelectedG
	GameObject_t1756533147 * ___SelectedG_3;

public:
	inline static int32_t get_offset_of_Prevpos_0() { return static_cast<int32_t>(offsetof(PrevTrans_t3762428233, ___Prevpos_0)); }
	inline Vector3_t2243707580  get_Prevpos_0() const { return ___Prevpos_0; }
	inline Vector3_t2243707580 * get_address_of_Prevpos_0() { return &___Prevpos_0; }
	inline void set_Prevpos_0(Vector3_t2243707580  value)
	{
		___Prevpos_0 = value;
	}

	inline static int32_t get_offset_of_Prevrot_1() { return static_cast<int32_t>(offsetof(PrevTrans_t3762428233, ___Prevrot_1)); }
	inline Quaternion_t4030073918  get_Prevrot_1() const { return ___Prevrot_1; }
	inline Quaternion_t4030073918 * get_address_of_Prevrot_1() { return &___Prevrot_1; }
	inline void set_Prevrot_1(Quaternion_t4030073918  value)
	{
		___Prevrot_1 = value;
	}

	inline static int32_t get_offset_of_Prevscale_2() { return static_cast<int32_t>(offsetof(PrevTrans_t3762428233, ___Prevscale_2)); }
	inline Vector3_t2243707580  get_Prevscale_2() const { return ___Prevscale_2; }
	inline Vector3_t2243707580 * get_address_of_Prevscale_2() { return &___Prevscale_2; }
	inline void set_Prevscale_2(Vector3_t2243707580  value)
	{
		___Prevscale_2 = value;
	}

	inline static int32_t get_offset_of_SelectedG_3() { return static_cast<int32_t>(offsetof(PrevTrans_t3762428233, ___SelectedG_3)); }
	inline GameObject_t1756533147 * get_SelectedG_3() const { return ___SelectedG_3; }
	inline GameObject_t1756533147 ** get_address_of_SelectedG_3() { return &___SelectedG_3; }
	inline void set_SelectedG_3(GameObject_t1756533147 * value)
	{
		___SelectedG_3 = value;
		Il2CppCodeGenWriteBarrier(&___SelectedG_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
