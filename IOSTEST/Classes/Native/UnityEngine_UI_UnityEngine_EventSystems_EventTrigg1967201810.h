#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct List_1_t2734131178;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.EventTrigger
struct  EventTrigger_t1967201810  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry> UnityEngine.EventSystems.EventTrigger::m_Delegates
	List_1_t2734131178 * ___m_Delegates_2;
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry> UnityEngine.EventSystems.EventTrigger::delegates
	List_1_t2734131178 * ___delegates_3;

public:
	inline static int32_t get_offset_of_m_Delegates_2() { return static_cast<int32_t>(offsetof(EventTrigger_t1967201810, ___m_Delegates_2)); }
	inline List_1_t2734131178 * get_m_Delegates_2() const { return ___m_Delegates_2; }
	inline List_1_t2734131178 ** get_address_of_m_Delegates_2() { return &___m_Delegates_2; }
	inline void set_m_Delegates_2(List_1_t2734131178 * value)
	{
		___m_Delegates_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Delegates_2, value);
	}

	inline static int32_t get_offset_of_delegates_3() { return static_cast<int32_t>(offsetof(EventTrigger_t1967201810, ___delegates_3)); }
	inline List_1_t2734131178 * get_delegates_3() const { return ___delegates_3; }
	inline List_1_t2734131178 ** get_address_of_delegates_3() { return &___delegates_3; }
	inline void set_delegates_3(List_1_t2734131178 * value)
	{
		___delegates_3 = value;
		Il2CppCodeGenWriteBarrier(&___delegates_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
