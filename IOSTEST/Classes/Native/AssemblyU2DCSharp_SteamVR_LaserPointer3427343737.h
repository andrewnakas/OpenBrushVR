#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;
// PointerEventHandler
struct PointerEventHandler_t583817773;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SteamVR_LaserPointer
struct  SteamVR_LaserPointer_t3427343737  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean SteamVR_LaserPointer::active
	bool ___active_2;
	// UnityEngine.Color SteamVR_LaserPointer::color
	Color_t2020392075  ___color_3;
	// System.Single SteamVR_LaserPointer::thickness
	float ___thickness_4;
	// UnityEngine.GameObject SteamVR_LaserPointer::holder
	GameObject_t1756533147 * ___holder_5;
	// UnityEngine.GameObject SteamVR_LaserPointer::pointer
	GameObject_t1756533147 * ___pointer_6;
	// System.Boolean SteamVR_LaserPointer::isActive
	bool ___isActive_7;
	// System.Boolean SteamVR_LaserPointer::addRigidBody
	bool ___addRigidBody_8;
	// UnityEngine.Transform SteamVR_LaserPointer::reference
	Transform_t3275118058 * ___reference_9;
	// PointerEventHandler SteamVR_LaserPointer::PointerIn
	PointerEventHandler_t583817773 * ___PointerIn_10;
	// PointerEventHandler SteamVR_LaserPointer::PointerOut
	PointerEventHandler_t583817773 * ___PointerOut_11;
	// UnityEngine.Transform SteamVR_LaserPointer::previousContact
	Transform_t3275118058 * ___previousContact_12;

public:
	inline static int32_t get_offset_of_active_2() { return static_cast<int32_t>(offsetof(SteamVR_LaserPointer_t3427343737, ___active_2)); }
	inline bool get_active_2() const { return ___active_2; }
	inline bool* get_address_of_active_2() { return &___active_2; }
	inline void set_active_2(bool value)
	{
		___active_2 = value;
	}

	inline static int32_t get_offset_of_color_3() { return static_cast<int32_t>(offsetof(SteamVR_LaserPointer_t3427343737, ___color_3)); }
	inline Color_t2020392075  get_color_3() const { return ___color_3; }
	inline Color_t2020392075 * get_address_of_color_3() { return &___color_3; }
	inline void set_color_3(Color_t2020392075  value)
	{
		___color_3 = value;
	}

	inline static int32_t get_offset_of_thickness_4() { return static_cast<int32_t>(offsetof(SteamVR_LaserPointer_t3427343737, ___thickness_4)); }
	inline float get_thickness_4() const { return ___thickness_4; }
	inline float* get_address_of_thickness_4() { return &___thickness_4; }
	inline void set_thickness_4(float value)
	{
		___thickness_4 = value;
	}

	inline static int32_t get_offset_of_holder_5() { return static_cast<int32_t>(offsetof(SteamVR_LaserPointer_t3427343737, ___holder_5)); }
	inline GameObject_t1756533147 * get_holder_5() const { return ___holder_5; }
	inline GameObject_t1756533147 ** get_address_of_holder_5() { return &___holder_5; }
	inline void set_holder_5(GameObject_t1756533147 * value)
	{
		___holder_5 = value;
		Il2CppCodeGenWriteBarrier(&___holder_5, value);
	}

	inline static int32_t get_offset_of_pointer_6() { return static_cast<int32_t>(offsetof(SteamVR_LaserPointer_t3427343737, ___pointer_6)); }
	inline GameObject_t1756533147 * get_pointer_6() const { return ___pointer_6; }
	inline GameObject_t1756533147 ** get_address_of_pointer_6() { return &___pointer_6; }
	inline void set_pointer_6(GameObject_t1756533147 * value)
	{
		___pointer_6 = value;
		Il2CppCodeGenWriteBarrier(&___pointer_6, value);
	}

	inline static int32_t get_offset_of_isActive_7() { return static_cast<int32_t>(offsetof(SteamVR_LaserPointer_t3427343737, ___isActive_7)); }
	inline bool get_isActive_7() const { return ___isActive_7; }
	inline bool* get_address_of_isActive_7() { return &___isActive_7; }
	inline void set_isActive_7(bool value)
	{
		___isActive_7 = value;
	}

	inline static int32_t get_offset_of_addRigidBody_8() { return static_cast<int32_t>(offsetof(SteamVR_LaserPointer_t3427343737, ___addRigidBody_8)); }
	inline bool get_addRigidBody_8() const { return ___addRigidBody_8; }
	inline bool* get_address_of_addRigidBody_8() { return &___addRigidBody_8; }
	inline void set_addRigidBody_8(bool value)
	{
		___addRigidBody_8 = value;
	}

	inline static int32_t get_offset_of_reference_9() { return static_cast<int32_t>(offsetof(SteamVR_LaserPointer_t3427343737, ___reference_9)); }
	inline Transform_t3275118058 * get_reference_9() const { return ___reference_9; }
	inline Transform_t3275118058 ** get_address_of_reference_9() { return &___reference_9; }
	inline void set_reference_9(Transform_t3275118058 * value)
	{
		___reference_9 = value;
		Il2CppCodeGenWriteBarrier(&___reference_9, value);
	}

	inline static int32_t get_offset_of_PointerIn_10() { return static_cast<int32_t>(offsetof(SteamVR_LaserPointer_t3427343737, ___PointerIn_10)); }
	inline PointerEventHandler_t583817773 * get_PointerIn_10() const { return ___PointerIn_10; }
	inline PointerEventHandler_t583817773 ** get_address_of_PointerIn_10() { return &___PointerIn_10; }
	inline void set_PointerIn_10(PointerEventHandler_t583817773 * value)
	{
		___PointerIn_10 = value;
		Il2CppCodeGenWriteBarrier(&___PointerIn_10, value);
	}

	inline static int32_t get_offset_of_PointerOut_11() { return static_cast<int32_t>(offsetof(SteamVR_LaserPointer_t3427343737, ___PointerOut_11)); }
	inline PointerEventHandler_t583817773 * get_PointerOut_11() const { return ___PointerOut_11; }
	inline PointerEventHandler_t583817773 ** get_address_of_PointerOut_11() { return &___PointerOut_11; }
	inline void set_PointerOut_11(PointerEventHandler_t583817773 * value)
	{
		___PointerOut_11 = value;
		Il2CppCodeGenWriteBarrier(&___PointerOut_11, value);
	}

	inline static int32_t get_offset_of_previousContact_12() { return static_cast<int32_t>(offsetof(SteamVR_LaserPointer_t3427343737, ___previousContact_12)); }
	inline Transform_t3275118058 * get_previousContact_12() const { return ___previousContact_12; }
	inline Transform_t3275118058 ** get_address_of_previousContact_12() { return &___previousContact_12; }
	inline void set_previousContact_12(Transform_t3275118058 * value)
	{
		___previousContact_12 = value;
		Il2CppCodeGenWriteBarrier(&___previousContact_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
