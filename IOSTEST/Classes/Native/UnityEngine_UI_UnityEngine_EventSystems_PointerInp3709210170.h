#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve1414739712.h"

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t1599784723;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData
struct  MouseButtonEventData_t3709210170  : public Il2CppObject
{
public:
	// UnityEngine.EventSystems.PointerEventData/FramePressState UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData::buttonState
	int32_t ___buttonState_0;
	// UnityEngine.EventSystems.PointerEventData UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData::buttonData
	PointerEventData_t1599784723 * ___buttonData_1;

public:
	inline static int32_t get_offset_of_buttonState_0() { return static_cast<int32_t>(offsetof(MouseButtonEventData_t3709210170, ___buttonState_0)); }
	inline int32_t get_buttonState_0() const { return ___buttonState_0; }
	inline int32_t* get_address_of_buttonState_0() { return &___buttonState_0; }
	inline void set_buttonState_0(int32_t value)
	{
		___buttonState_0 = value;
	}

	inline static int32_t get_offset_of_buttonData_1() { return static_cast<int32_t>(offsetof(MouseButtonEventData_t3709210170, ___buttonData_1)); }
	inline PointerEventData_t1599784723 * get_buttonData_1() const { return ___buttonData_1; }
	inline PointerEventData_t1599784723 ** get_address_of_buttonData_1() { return &___buttonData_1; }
	inline void set_buttonData_1(PointerEventData_t1599784723 * value)
	{
		___buttonData_1 = value;
		Il2CppCodeGenWriteBarrier(&___buttonData_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
