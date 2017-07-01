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

// UnityEngine.CharacterController
struct CharacterController_t4094781467;
// UnityEngine.Collider
struct Collider_t3497673348;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ControllerColliderHit
struct  ControllerColliderHit_t4070855101  : public Il2CppObject
{
public:
	// UnityEngine.CharacterController UnityEngine.ControllerColliderHit::m_Controller
	CharacterController_t4094781467 * ___m_Controller_0;
	// UnityEngine.Collider UnityEngine.ControllerColliderHit::m_Collider
	Collider_t3497673348 * ___m_Collider_1;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_Point
	Vector3_t2243707580  ___m_Point_2;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_Normal
	Vector3_t2243707580  ___m_Normal_3;
	// UnityEngine.Vector3 UnityEngine.ControllerColliderHit::m_MoveDirection
	Vector3_t2243707580  ___m_MoveDirection_4;
	// System.Single UnityEngine.ControllerColliderHit::m_MoveLength
	float ___m_MoveLength_5;
	// System.Int32 UnityEngine.ControllerColliderHit::m_Push
	int32_t ___m_Push_6;

public:
	inline static int32_t get_offset_of_m_Controller_0() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t4070855101, ___m_Controller_0)); }
	inline CharacterController_t4094781467 * get_m_Controller_0() const { return ___m_Controller_0; }
	inline CharacterController_t4094781467 ** get_address_of_m_Controller_0() { return &___m_Controller_0; }
	inline void set_m_Controller_0(CharacterController_t4094781467 * value)
	{
		___m_Controller_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_Controller_0, value);
	}

	inline static int32_t get_offset_of_m_Collider_1() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t4070855101, ___m_Collider_1)); }
	inline Collider_t3497673348 * get_m_Collider_1() const { return ___m_Collider_1; }
	inline Collider_t3497673348 ** get_address_of_m_Collider_1() { return &___m_Collider_1; }
	inline void set_m_Collider_1(Collider_t3497673348 * value)
	{
		___m_Collider_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_Collider_1, value);
	}

	inline static int32_t get_offset_of_m_Point_2() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t4070855101, ___m_Point_2)); }
	inline Vector3_t2243707580  get_m_Point_2() const { return ___m_Point_2; }
	inline Vector3_t2243707580 * get_address_of_m_Point_2() { return &___m_Point_2; }
	inline void set_m_Point_2(Vector3_t2243707580  value)
	{
		___m_Point_2 = value;
	}

	inline static int32_t get_offset_of_m_Normal_3() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t4070855101, ___m_Normal_3)); }
	inline Vector3_t2243707580  get_m_Normal_3() const { return ___m_Normal_3; }
	inline Vector3_t2243707580 * get_address_of_m_Normal_3() { return &___m_Normal_3; }
	inline void set_m_Normal_3(Vector3_t2243707580  value)
	{
		___m_Normal_3 = value;
	}

	inline static int32_t get_offset_of_m_MoveDirection_4() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t4070855101, ___m_MoveDirection_4)); }
	inline Vector3_t2243707580  get_m_MoveDirection_4() const { return ___m_MoveDirection_4; }
	inline Vector3_t2243707580 * get_address_of_m_MoveDirection_4() { return &___m_MoveDirection_4; }
	inline void set_m_MoveDirection_4(Vector3_t2243707580  value)
	{
		___m_MoveDirection_4 = value;
	}

	inline static int32_t get_offset_of_m_MoveLength_5() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t4070855101, ___m_MoveLength_5)); }
	inline float get_m_MoveLength_5() const { return ___m_MoveLength_5; }
	inline float* get_address_of_m_MoveLength_5() { return &___m_MoveLength_5; }
	inline void set_m_MoveLength_5(float value)
	{
		___m_MoveLength_5 = value;
	}

	inline static int32_t get_offset_of_m_Push_6() { return static_cast<int32_t>(offsetof(ControllerColliderHit_t4070855101, ___m_Push_6)); }
	inline int32_t get_m_Push_6() const { return ___m_Push_6; }
	inline int32_t* get_address_of_m_Push_6() { return &___m_Push_6; }
	inline void set_m_Push_6(int32_t value)
	{
		___m_Push_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ControllerColliderHit
struct ControllerColliderHit_t4070855101_marshaled_pinvoke
{
	CharacterController_t4094781467 * ___m_Controller_0;
	Collider_t3497673348 * ___m_Collider_1;
	Vector3_t2243707580  ___m_Point_2;
	Vector3_t2243707580  ___m_Normal_3;
	Vector3_t2243707580  ___m_MoveDirection_4;
	float ___m_MoveLength_5;
	int32_t ___m_Push_6;
};
// Native definition for COM marshalling of UnityEngine.ControllerColliderHit
struct ControllerColliderHit_t4070855101_marshaled_com
{
	CharacterController_t4094781467 * ___m_Controller_0;
	Collider_t3497673348 * ___m_Collider_1;
	Vector3_t2243707580  ___m_Point_2;
	Vector3_t2243707580  ___m_Normal_3;
	Vector3_t2243707580  ___m_MoveDirection_4;
	float ___m_MoveLength_5;
	int32_t ___m_Push_6;
};
