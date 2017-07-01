#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UI_UnityEngine_EventSystems_BaseInputM1295781545.h"

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct Dictionary_2_t607610358;
// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_t3572864619;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.PointerInputModule
struct  PointerInputModule_t1441575871  : public BaseInputModule_t1295781545
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData> UnityEngine.EventSystems.PointerInputModule::m_PointerData
	Dictionary_2_t607610358 * ___m_PointerData_12;
	// UnityEngine.EventSystems.PointerInputModule/MouseState UnityEngine.EventSystems.PointerInputModule::m_MouseState
	MouseState_t3572864619 * ___m_MouseState_13;

public:
	inline static int32_t get_offset_of_m_PointerData_12() { return static_cast<int32_t>(offsetof(PointerInputModule_t1441575871, ___m_PointerData_12)); }
	inline Dictionary_2_t607610358 * get_m_PointerData_12() const { return ___m_PointerData_12; }
	inline Dictionary_2_t607610358 ** get_address_of_m_PointerData_12() { return &___m_PointerData_12; }
	inline void set_m_PointerData_12(Dictionary_2_t607610358 * value)
	{
		___m_PointerData_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_PointerData_12, value);
	}

	inline static int32_t get_offset_of_m_MouseState_13() { return static_cast<int32_t>(offsetof(PointerInputModule_t1441575871, ___m_MouseState_13)); }
	inline MouseState_t3572864619 * get_m_MouseState_13() const { return ___m_MouseState_13; }
	inline MouseState_t3572864619 ** get_address_of_m_MouseState_13() { return &___m_MouseState_13; }
	inline void set_m_MouseState_13(MouseState_t3572864619 * value)
	{
		___m_MouseState_13 = value;
		Il2CppCodeGenWriteBarrier(&___m_MouseState_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
