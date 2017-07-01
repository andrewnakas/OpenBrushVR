#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve2981963041.h"

// UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData
struct MouseButtonEventData_t3709210170;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.PointerInputModule/ButtonState
struct  ButtonState_t2688375492  : public Il2CppObject
{
public:
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerInputModule/ButtonState::m_Button
	int32_t ___m_Button_0;
	// UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData UnityEngine.EventSystems.PointerInputModule/ButtonState::m_EventData
	MouseButtonEventData_t3709210170 * ___m_EventData_1;

public:
	inline static int32_t get_offset_of_m_Button_0() { return static_cast<int32_t>(offsetof(ButtonState_t2688375492, ___m_Button_0)); }
	inline int32_t get_m_Button_0() const { return ___m_Button_0; }
	inline int32_t* get_address_of_m_Button_0() { return &___m_Button_0; }
	inline void set_m_Button_0(int32_t value)
	{
		___m_Button_0 = value;
	}

	inline static int32_t get_offset_of_m_EventData_1() { return static_cast<int32_t>(offsetof(ButtonState_t2688375492, ___m_EventData_1)); }
	inline MouseButtonEventData_t3709210170 * get_m_EventData_1() const { return ___m_EventData_1; }
	inline MouseButtonEventData_t3709210170 ** get_address_of_m_EventData_1() { return &___m_EventData_1; }
	inline void set_m_EventData_1(MouseButtonEventData_t3709210170 * value)
	{
		___m_EventData_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_EventData_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
