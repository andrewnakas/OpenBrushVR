#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviou3960014691.h"

// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t3685274804;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t1524870173;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t3466835263;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t2681005625;
// UnityEngine.EventSystems.BaseInput
struct BaseInput_t621514313;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.BaseInputModule
struct  BaseInputModule_t1295781545  : public UIBehaviour_t3960014691
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.BaseInputModule::m_RaycastResultCache
	List_1_t3685274804 * ___m_RaycastResultCache_2;
	// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::m_AxisEventData
	AxisEventData_t1524870173 * ___m_AxisEventData_3;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::m_EventSystem
	EventSystem_t3466835263 * ___m_EventSystem_4;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::m_BaseEventData
	BaseEventData_t2681005625 * ___m_BaseEventData_5;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_InputOverride
	BaseInput_t621514313 * ___m_InputOverride_6;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_DefaultInput
	BaseInput_t621514313 * ___m_DefaultInput_7;

public:
	inline static int32_t get_offset_of_m_RaycastResultCache_2() { return static_cast<int32_t>(offsetof(BaseInputModule_t1295781545, ___m_RaycastResultCache_2)); }
	inline List_1_t3685274804 * get_m_RaycastResultCache_2() const { return ___m_RaycastResultCache_2; }
	inline List_1_t3685274804 ** get_address_of_m_RaycastResultCache_2() { return &___m_RaycastResultCache_2; }
	inline void set_m_RaycastResultCache_2(List_1_t3685274804 * value)
	{
		___m_RaycastResultCache_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_RaycastResultCache_2, value);
	}

	inline static int32_t get_offset_of_m_AxisEventData_3() { return static_cast<int32_t>(offsetof(BaseInputModule_t1295781545, ___m_AxisEventData_3)); }
	inline AxisEventData_t1524870173 * get_m_AxisEventData_3() const { return ___m_AxisEventData_3; }
	inline AxisEventData_t1524870173 ** get_address_of_m_AxisEventData_3() { return &___m_AxisEventData_3; }
	inline void set_m_AxisEventData_3(AxisEventData_t1524870173 * value)
	{
		___m_AxisEventData_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_AxisEventData_3, value);
	}

	inline static int32_t get_offset_of_m_EventSystem_4() { return static_cast<int32_t>(offsetof(BaseInputModule_t1295781545, ___m_EventSystem_4)); }
	inline EventSystem_t3466835263 * get_m_EventSystem_4() const { return ___m_EventSystem_4; }
	inline EventSystem_t3466835263 ** get_address_of_m_EventSystem_4() { return &___m_EventSystem_4; }
	inline void set_m_EventSystem_4(EventSystem_t3466835263 * value)
	{
		___m_EventSystem_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_EventSystem_4, value);
	}

	inline static int32_t get_offset_of_m_BaseEventData_5() { return static_cast<int32_t>(offsetof(BaseInputModule_t1295781545, ___m_BaseEventData_5)); }
	inline BaseEventData_t2681005625 * get_m_BaseEventData_5() const { return ___m_BaseEventData_5; }
	inline BaseEventData_t2681005625 ** get_address_of_m_BaseEventData_5() { return &___m_BaseEventData_5; }
	inline void set_m_BaseEventData_5(BaseEventData_t2681005625 * value)
	{
		___m_BaseEventData_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_BaseEventData_5, value);
	}

	inline static int32_t get_offset_of_m_InputOverride_6() { return static_cast<int32_t>(offsetof(BaseInputModule_t1295781545, ___m_InputOverride_6)); }
	inline BaseInput_t621514313 * get_m_InputOverride_6() const { return ___m_InputOverride_6; }
	inline BaseInput_t621514313 ** get_address_of_m_InputOverride_6() { return &___m_InputOverride_6; }
	inline void set_m_InputOverride_6(BaseInput_t621514313 * value)
	{
		___m_InputOverride_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_InputOverride_6, value);
	}

	inline static int32_t get_offset_of_m_DefaultInput_7() { return static_cast<int32_t>(offsetof(BaseInputModule_t1295781545, ___m_DefaultInput_7)); }
	inline BaseInput_t621514313 * get_m_DefaultInput_7() const { return ___m_DefaultInput_7; }
	inline BaseInput_t621514313 ** get_address_of_m_DefaultInput_7() { return &___m_DefaultInput_7; }
	inline void set_m_DefaultInput_7(BaseInput_t621514313 * value)
	{
		___m_DefaultInput_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_DefaultInput_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
