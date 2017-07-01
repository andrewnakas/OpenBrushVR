#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UI_UnityEngine_UI_Selectable1490392188.h"
#include "UnityEngine_UI_UnityEngine_UI_Toggle_ToggleTransit1114673831.h"

// UnityEngine.UI.Graphic
struct Graphic_t2426225576;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t1030026315;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t1896830814;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Toggle
struct  Toggle_t3976754468  : public Selectable_t1490392188
{
public:
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_16;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_t2426225576 * ___graphic_17;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_t1030026315 * ___m_Group_18;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t1896830814 * ___onValueChanged_19;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_20;

public:
	inline static int32_t get_offset_of_toggleTransition_16() { return static_cast<int32_t>(offsetof(Toggle_t3976754468, ___toggleTransition_16)); }
	inline int32_t get_toggleTransition_16() const { return ___toggleTransition_16; }
	inline int32_t* get_address_of_toggleTransition_16() { return &___toggleTransition_16; }
	inline void set_toggleTransition_16(int32_t value)
	{
		___toggleTransition_16 = value;
	}

	inline static int32_t get_offset_of_graphic_17() { return static_cast<int32_t>(offsetof(Toggle_t3976754468, ___graphic_17)); }
	inline Graphic_t2426225576 * get_graphic_17() const { return ___graphic_17; }
	inline Graphic_t2426225576 ** get_address_of_graphic_17() { return &___graphic_17; }
	inline void set_graphic_17(Graphic_t2426225576 * value)
	{
		___graphic_17 = value;
		Il2CppCodeGenWriteBarrier(&___graphic_17, value);
	}

	inline static int32_t get_offset_of_m_Group_18() { return static_cast<int32_t>(offsetof(Toggle_t3976754468, ___m_Group_18)); }
	inline ToggleGroup_t1030026315 * get_m_Group_18() const { return ___m_Group_18; }
	inline ToggleGroup_t1030026315 ** get_address_of_m_Group_18() { return &___m_Group_18; }
	inline void set_m_Group_18(ToggleGroup_t1030026315 * value)
	{
		___m_Group_18 = value;
		Il2CppCodeGenWriteBarrier(&___m_Group_18, value);
	}

	inline static int32_t get_offset_of_onValueChanged_19() { return static_cast<int32_t>(offsetof(Toggle_t3976754468, ___onValueChanged_19)); }
	inline ToggleEvent_t1896830814 * get_onValueChanged_19() const { return ___onValueChanged_19; }
	inline ToggleEvent_t1896830814 ** get_address_of_onValueChanged_19() { return &___onValueChanged_19; }
	inline void set_onValueChanged_19(ToggleEvent_t1896830814 * value)
	{
		___onValueChanged_19 = value;
		Il2CppCodeGenWriteBarrier(&___onValueChanged_19, value);
	}

	inline static int32_t get_offset_of_m_IsOn_20() { return static_cast<int32_t>(offsetof(Toggle_t3976754468, ___m_IsOn_20)); }
	inline bool get_m_IsOn_20() const { return ___m_IsOn_20; }
	inline bool* get_address_of_m_IsOn_20() { return &___m_IsOn_20; }
	inline void set_m_IsOn_20(bool value)
	{
		___m_IsOn_20 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
