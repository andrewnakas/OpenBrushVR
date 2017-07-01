#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_EventTrigg2524067914.h"

// UnityEngine.EventSystems.EventTrigger/TriggerEvent
struct TriggerEvent_t3959312622;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.EventTrigger/Entry
struct  Entry_t3365010046  : public Il2CppObject
{
public:
	// UnityEngine.EventSystems.EventTriggerType UnityEngine.EventSystems.EventTrigger/Entry::eventID
	int32_t ___eventID_0;
	// UnityEngine.EventSystems.EventTrigger/TriggerEvent UnityEngine.EventSystems.EventTrigger/Entry::callback
	TriggerEvent_t3959312622 * ___callback_1;

public:
	inline static int32_t get_offset_of_eventID_0() { return static_cast<int32_t>(offsetof(Entry_t3365010046, ___eventID_0)); }
	inline int32_t get_eventID_0() const { return ___eventID_0; }
	inline int32_t* get_address_of_eventID_0() { return &___eventID_0; }
	inline void set_eventID_0(int32_t value)
	{
		___eventID_0 = value;
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(Entry_t3365010046, ___callback_1)); }
	inline TriggerEvent_t3959312622 * get_callback_1() const { return ___callback_1; }
	inline TriggerEvent_t3959312622 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(TriggerEvent_t3959312622 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier(&___callback_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
