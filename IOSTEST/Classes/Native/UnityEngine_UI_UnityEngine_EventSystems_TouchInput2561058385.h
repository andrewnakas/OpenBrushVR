#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UI_UnityEngine_EventSystems_PointerInp1441575871.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.TouchInputModule
struct  TouchInputModule_t2561058385  : public PointerInputModule_t1441575871
{
public:
	// UnityEngine.Vector2 UnityEngine.EventSystems.TouchInputModule::m_LastMousePosition
	Vector2_t2243707579  ___m_LastMousePosition_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.TouchInputModule::m_MousePosition
	Vector2_t2243707579  ___m_MousePosition_15;
	// System.Boolean UnityEngine.EventSystems.TouchInputModule::m_ForceModuleActive
	bool ___m_ForceModuleActive_16;

public:
	inline static int32_t get_offset_of_m_LastMousePosition_14() { return static_cast<int32_t>(offsetof(TouchInputModule_t2561058385, ___m_LastMousePosition_14)); }
	inline Vector2_t2243707579  get_m_LastMousePosition_14() const { return ___m_LastMousePosition_14; }
	inline Vector2_t2243707579 * get_address_of_m_LastMousePosition_14() { return &___m_LastMousePosition_14; }
	inline void set_m_LastMousePosition_14(Vector2_t2243707579  value)
	{
		___m_LastMousePosition_14 = value;
	}

	inline static int32_t get_offset_of_m_MousePosition_15() { return static_cast<int32_t>(offsetof(TouchInputModule_t2561058385, ___m_MousePosition_15)); }
	inline Vector2_t2243707579  get_m_MousePosition_15() const { return ___m_MousePosition_15; }
	inline Vector2_t2243707579 * get_address_of_m_MousePosition_15() { return &___m_MousePosition_15; }
	inline void set_m_MousePosition_15(Vector2_t2243707579  value)
	{
		___m_MousePosition_15 = value;
	}

	inline static int32_t get_offset_of_m_ForceModuleActive_16() { return static_cast<int32_t>(offsetof(TouchInputModule_t2561058385, ___m_ForceModuleActive_16)); }
	inline bool get_m_ForceModuleActive_16() const { return ___m_ForceModuleActive_16; }
	inline bool* get_address_of_m_ForceModuleActive_16() { return &___m_ForceModuleActive_16; }
	inline void set_m_ForceModuleActive_16(bool value)
	{
		___m_ForceModuleActive_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
