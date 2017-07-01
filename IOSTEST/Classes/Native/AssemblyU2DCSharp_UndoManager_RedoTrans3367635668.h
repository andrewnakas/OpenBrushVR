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

// UndoManager/RedoTrans
struct  RedoTrans_t3367635668  : public Il2CppObject
{
public:
	// UnityEngine.Vector3 UndoManager/RedoTrans::Redopos
	Vector3_t2243707580  ___Redopos_0;
	// UnityEngine.Quaternion UndoManager/RedoTrans::Redorot
	Quaternion_t4030073918  ___Redorot_1;
	// UnityEngine.Vector3 UndoManager/RedoTrans::Redoscale
	Vector3_t2243707580  ___Redoscale_2;
	// UnityEngine.GameObject UndoManager/RedoTrans::RSelectedG
	GameObject_t1756533147 * ___RSelectedG_3;

public:
	inline static int32_t get_offset_of_Redopos_0() { return static_cast<int32_t>(offsetof(RedoTrans_t3367635668, ___Redopos_0)); }
	inline Vector3_t2243707580  get_Redopos_0() const { return ___Redopos_0; }
	inline Vector3_t2243707580 * get_address_of_Redopos_0() { return &___Redopos_0; }
	inline void set_Redopos_0(Vector3_t2243707580  value)
	{
		___Redopos_0 = value;
	}

	inline static int32_t get_offset_of_Redorot_1() { return static_cast<int32_t>(offsetof(RedoTrans_t3367635668, ___Redorot_1)); }
	inline Quaternion_t4030073918  get_Redorot_1() const { return ___Redorot_1; }
	inline Quaternion_t4030073918 * get_address_of_Redorot_1() { return &___Redorot_1; }
	inline void set_Redorot_1(Quaternion_t4030073918  value)
	{
		___Redorot_1 = value;
	}

	inline static int32_t get_offset_of_Redoscale_2() { return static_cast<int32_t>(offsetof(RedoTrans_t3367635668, ___Redoscale_2)); }
	inline Vector3_t2243707580  get_Redoscale_2() const { return ___Redoscale_2; }
	inline Vector3_t2243707580 * get_address_of_Redoscale_2() { return &___Redoscale_2; }
	inline void set_Redoscale_2(Vector3_t2243707580  value)
	{
		___Redoscale_2 = value;
	}

	inline static int32_t get_offset_of_RSelectedG_3() { return static_cast<int32_t>(offsetof(RedoTrans_t3367635668, ___RSelectedG_3)); }
	inline GameObject_t1756533147 * get_RSelectedG_3() const { return ___RSelectedG_3; }
	inline GameObject_t1756533147 ** get_address_of_RSelectedG_3() { return &___RSelectedG_3; }
	inline void set_RSelectedG_3(GameObject_t1756533147 * value)
	{
		___RSelectedG_3 = value;
		Il2CppCodeGenWriteBarrier(&___RSelectedG_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
