#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UI_UnityEngine_EventSystems_BaseInputM1295781545.h"

// Wacki.LaserPointerInputModule
struct LaserPointerInputModule_t250963784;
// UnityEngine.Camera
struct Camera_t189460977;
// System.Collections.Generic.HashSet`1<Wacki.IUILaserPointer>
struct HashSet_1_t1497435675;
// System.Collections.Generic.Dictionary`2<Wacki.IUILaserPointer,Wacki.LaserPointerInputModule/ControllerData>
struct Dictionary_2_t1578080486;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wacki.LaserPointerInputModule
struct  LaserPointerInputModule_t250963784  : public BaseInputModule_t1295781545
{
public:
	// UnityEngine.Camera Wacki.LaserPointerInputModule::UICamera
	Camera_t189460977 * ___UICamera_9;
	// System.Collections.Generic.HashSet`1<Wacki.IUILaserPointer> Wacki.LaserPointerInputModule::_controllers
	HashSet_1_t1497435675 * ____controllers_10;
	// System.Collections.Generic.Dictionary`2<Wacki.IUILaserPointer,Wacki.LaserPointerInputModule/ControllerData> Wacki.LaserPointerInputModule::_controllerData
	Dictionary_2_t1578080486 * ____controllerData_11;

public:
	inline static int32_t get_offset_of_UICamera_9() { return static_cast<int32_t>(offsetof(LaserPointerInputModule_t250963784, ___UICamera_9)); }
	inline Camera_t189460977 * get_UICamera_9() const { return ___UICamera_9; }
	inline Camera_t189460977 ** get_address_of_UICamera_9() { return &___UICamera_9; }
	inline void set_UICamera_9(Camera_t189460977 * value)
	{
		___UICamera_9 = value;
		Il2CppCodeGenWriteBarrier(&___UICamera_9, value);
	}

	inline static int32_t get_offset_of__controllers_10() { return static_cast<int32_t>(offsetof(LaserPointerInputModule_t250963784, ____controllers_10)); }
	inline HashSet_1_t1497435675 * get__controllers_10() const { return ____controllers_10; }
	inline HashSet_1_t1497435675 ** get_address_of__controllers_10() { return &____controllers_10; }
	inline void set__controllers_10(HashSet_1_t1497435675 * value)
	{
		____controllers_10 = value;
		Il2CppCodeGenWriteBarrier(&____controllers_10, value);
	}

	inline static int32_t get_offset_of__controllerData_11() { return static_cast<int32_t>(offsetof(LaserPointerInputModule_t250963784, ____controllerData_11)); }
	inline Dictionary_2_t1578080486 * get__controllerData_11() const { return ____controllerData_11; }
	inline Dictionary_2_t1578080486 ** get_address_of__controllerData_11() { return &____controllerData_11; }
	inline void set__controllerData_11(Dictionary_2_t1578080486 * value)
	{
		____controllerData_11 = value;
		Il2CppCodeGenWriteBarrier(&____controllerData_11, value);
	}
};

struct LaserPointerInputModule_t250963784_StaticFields
{
public:
	// Wacki.LaserPointerInputModule Wacki.LaserPointerInputModule::_instance
	LaserPointerInputModule_t250963784 * ____instance_8;

public:
	inline static int32_t get_offset_of__instance_8() { return static_cast<int32_t>(offsetof(LaserPointerInputModule_t250963784_StaticFields, ____instance_8)); }
	inline LaserPointerInputModule_t250963784 * get__instance_8() const { return ____instance_8; }
	inline LaserPointerInputModule_t250963784 ** get_address_of__instance_8() { return &____instance_8; }
	inline void set__instance_8(LaserPointerInputModule_t250963784 * value)
	{
		____instance_8 = value;
		Il2CppCodeGenWriteBarrier(&____instance_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
