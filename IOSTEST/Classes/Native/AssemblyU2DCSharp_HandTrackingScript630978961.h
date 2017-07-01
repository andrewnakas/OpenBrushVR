#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Singleton_1_gen1806863348.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// HandTrackingScript/IndexStack`1<System.Int32>
struct IndexStack_1_t4123276028;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HandTrackingScript
struct  HandTrackingScript_t630978961  : public Singleton_1_t1806863348
{
public:
	// HandTrackingScript/IndexStack`1<System.Int32> HandTrackingScript::frontRenderer
	IndexStack_1_t4123276028 * ___frontRenderer_5;
	// System.Int32[] HandTrackingScript::pointArr
	Int32U5BU5D_t3030399641* ___pointArr_6;
	// HandTrackingScript/IndexStack`1<System.Int32> HandTrackingScript::handPoints
	IndexStack_1_t4123276028 * ___handPoints_8;
	// System.Int32[] HandTrackingScript::handPointArr
	Int32U5BU5D_t3030399641* ___handPointArr_9;
	// System.Int32 HandTrackingScript::debug_iter
	int32_t ___debug_iter_11;
	// UnityEngine.Camera HandTrackingScript::camera
	Camera_t189460977 * ___camera_12;
	// UnityEngine.GameObject HandTrackingScript::pointer
	GameObject_t1756533147 * ___pointer_13;
	// UnityEngine.Vector3 HandTrackingScript::prevpointer
	Vector3_t2243707580  ___prevpointer_14;
	// UnityEngine.Vector3 HandTrackingScript::smoothPointer
	Vector3_t2243707580  ___smoothPointer_15;

public:
	inline static int32_t get_offset_of_frontRenderer_5() { return static_cast<int32_t>(offsetof(HandTrackingScript_t630978961, ___frontRenderer_5)); }
	inline IndexStack_1_t4123276028 * get_frontRenderer_5() const { return ___frontRenderer_5; }
	inline IndexStack_1_t4123276028 ** get_address_of_frontRenderer_5() { return &___frontRenderer_5; }
	inline void set_frontRenderer_5(IndexStack_1_t4123276028 * value)
	{
		___frontRenderer_5 = value;
		Il2CppCodeGenWriteBarrier(&___frontRenderer_5, value);
	}

	inline static int32_t get_offset_of_pointArr_6() { return static_cast<int32_t>(offsetof(HandTrackingScript_t630978961, ___pointArr_6)); }
	inline Int32U5BU5D_t3030399641* get_pointArr_6() const { return ___pointArr_6; }
	inline Int32U5BU5D_t3030399641** get_address_of_pointArr_6() { return &___pointArr_6; }
	inline void set_pointArr_6(Int32U5BU5D_t3030399641* value)
	{
		___pointArr_6 = value;
		Il2CppCodeGenWriteBarrier(&___pointArr_6, value);
	}

	inline static int32_t get_offset_of_handPoints_8() { return static_cast<int32_t>(offsetof(HandTrackingScript_t630978961, ___handPoints_8)); }
	inline IndexStack_1_t4123276028 * get_handPoints_8() const { return ___handPoints_8; }
	inline IndexStack_1_t4123276028 ** get_address_of_handPoints_8() { return &___handPoints_8; }
	inline void set_handPoints_8(IndexStack_1_t4123276028 * value)
	{
		___handPoints_8 = value;
		Il2CppCodeGenWriteBarrier(&___handPoints_8, value);
	}

	inline static int32_t get_offset_of_handPointArr_9() { return static_cast<int32_t>(offsetof(HandTrackingScript_t630978961, ___handPointArr_9)); }
	inline Int32U5BU5D_t3030399641* get_handPointArr_9() const { return ___handPointArr_9; }
	inline Int32U5BU5D_t3030399641** get_address_of_handPointArr_9() { return &___handPointArr_9; }
	inline void set_handPointArr_9(Int32U5BU5D_t3030399641* value)
	{
		___handPointArr_9 = value;
		Il2CppCodeGenWriteBarrier(&___handPointArr_9, value);
	}

	inline static int32_t get_offset_of_debug_iter_11() { return static_cast<int32_t>(offsetof(HandTrackingScript_t630978961, ___debug_iter_11)); }
	inline int32_t get_debug_iter_11() const { return ___debug_iter_11; }
	inline int32_t* get_address_of_debug_iter_11() { return &___debug_iter_11; }
	inline void set_debug_iter_11(int32_t value)
	{
		___debug_iter_11 = value;
	}

	inline static int32_t get_offset_of_camera_12() { return static_cast<int32_t>(offsetof(HandTrackingScript_t630978961, ___camera_12)); }
	inline Camera_t189460977 * get_camera_12() const { return ___camera_12; }
	inline Camera_t189460977 ** get_address_of_camera_12() { return &___camera_12; }
	inline void set_camera_12(Camera_t189460977 * value)
	{
		___camera_12 = value;
		Il2CppCodeGenWriteBarrier(&___camera_12, value);
	}

	inline static int32_t get_offset_of_pointer_13() { return static_cast<int32_t>(offsetof(HandTrackingScript_t630978961, ___pointer_13)); }
	inline GameObject_t1756533147 * get_pointer_13() const { return ___pointer_13; }
	inline GameObject_t1756533147 ** get_address_of_pointer_13() { return &___pointer_13; }
	inline void set_pointer_13(GameObject_t1756533147 * value)
	{
		___pointer_13 = value;
		Il2CppCodeGenWriteBarrier(&___pointer_13, value);
	}

	inline static int32_t get_offset_of_prevpointer_14() { return static_cast<int32_t>(offsetof(HandTrackingScript_t630978961, ___prevpointer_14)); }
	inline Vector3_t2243707580  get_prevpointer_14() const { return ___prevpointer_14; }
	inline Vector3_t2243707580 * get_address_of_prevpointer_14() { return &___prevpointer_14; }
	inline void set_prevpointer_14(Vector3_t2243707580  value)
	{
		___prevpointer_14 = value;
	}

	inline static int32_t get_offset_of_smoothPointer_15() { return static_cast<int32_t>(offsetof(HandTrackingScript_t630978961, ___smoothPointer_15)); }
	inline Vector3_t2243707580  get_smoothPointer_15() const { return ___smoothPointer_15; }
	inline Vector3_t2243707580 * get_address_of_smoothPointer_15() { return &___smoothPointer_15; }
	inline void set_smoothPointer_15(Vector3_t2243707580  value)
	{
		___smoothPointer_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
