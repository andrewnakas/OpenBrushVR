#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UI_UnityEngine_EventSystems_AbstractEv1333959294.h"

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t3466835263;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t2681005625  : public AbstractEventData_t1333959294
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t3466835263 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t2681005625, ___m_EventSystem_1)); }
	inline EventSystem_t3466835263 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t3466835263 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t3466835263 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_EventSystem_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
