#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1599784723;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Wacki.LaserPointerInputModule/ControllerData
struct  ControllerData_t2739001716  : public Il2CppObject
{
public:
	// UnityEngine.EventSystems.PointerEventData Wacki.LaserPointerInputModule/ControllerData::pointerEvent
	PointerEventData_t1599784723 * ___pointerEvent_0;
	// UnityEngine.GameObject Wacki.LaserPointerInputModule/ControllerData::currentPoint
	GameObject_t1756533147 * ___currentPoint_1;
	// UnityEngine.GameObject Wacki.LaserPointerInputModule/ControllerData::currentPressed
	GameObject_t1756533147 * ___currentPressed_2;
	// UnityEngine.GameObject Wacki.LaserPointerInputModule/ControllerData::currentDragging
	GameObject_t1756533147 * ___currentDragging_3;

public:
	inline static int32_t get_offset_of_pointerEvent_0() { return static_cast<int32_t>(offsetof(ControllerData_t2739001716, ___pointerEvent_0)); }
	inline PointerEventData_t1599784723 * get_pointerEvent_0() const { return ___pointerEvent_0; }
	inline PointerEventData_t1599784723 ** get_address_of_pointerEvent_0() { return &___pointerEvent_0; }
	inline void set_pointerEvent_0(PointerEventData_t1599784723 * value)
	{
		___pointerEvent_0 = value;
		Il2CppCodeGenWriteBarrier(&___pointerEvent_0, value);
	}

	inline static int32_t get_offset_of_currentPoint_1() { return static_cast<int32_t>(offsetof(ControllerData_t2739001716, ___currentPoint_1)); }
	inline GameObject_t1756533147 * get_currentPoint_1() const { return ___currentPoint_1; }
	inline GameObject_t1756533147 ** get_address_of_currentPoint_1() { return &___currentPoint_1; }
	inline void set_currentPoint_1(GameObject_t1756533147 * value)
	{
		___currentPoint_1 = value;
		Il2CppCodeGenWriteBarrier(&___currentPoint_1, value);
	}

	inline static int32_t get_offset_of_currentPressed_2() { return static_cast<int32_t>(offsetof(ControllerData_t2739001716, ___currentPressed_2)); }
	inline GameObject_t1756533147 * get_currentPressed_2() const { return ___currentPressed_2; }
	inline GameObject_t1756533147 ** get_address_of_currentPressed_2() { return &___currentPressed_2; }
	inline void set_currentPressed_2(GameObject_t1756533147 * value)
	{
		___currentPressed_2 = value;
		Il2CppCodeGenWriteBarrier(&___currentPressed_2, value);
	}

	inline static int32_t get_offset_of_currentDragging_3() { return static_cast<int32_t>(offsetof(ControllerData_t2739001716, ___currentDragging_3)); }
	inline GameObject_t1756533147 * get_currentDragging_3() const { return ___currentDragging_3; }
	inline GameObject_t1756533147 ** get_address_of_currentDragging_3() { return &___currentDragging_3; }
	inline void set_currentDragging_3(GameObject_t1756533147 * value)
	{
		___currentDragging_3 = value;
		Il2CppCodeGenWriteBarrier(&___currentDragging_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
