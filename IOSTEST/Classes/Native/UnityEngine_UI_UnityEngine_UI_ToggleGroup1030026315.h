#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviou3960014691.h"

// System.Collections.Generic.List`1<UnityEngine.UI.Toggle>
struct List_1_t3345875600;
// System.Predicate`1<UnityEngine.UI.Toggle>
struct Predicate_1_t2419724583;
// System.Func`2<UnityEngine.UI.Toggle,System.Boolean>
struct Func_2_t2318645467;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ToggleGroup
struct  ToggleGroup_t1030026315  : public UIBehaviour_t3960014691
{
public:
	// System.Boolean UnityEngine.UI.ToggleGroup::m_AllowSwitchOff
	bool ___m_AllowSwitchOff_2;
	// System.Collections.Generic.List`1<UnityEngine.UI.Toggle> UnityEngine.UI.ToggleGroup::m_Toggles
	List_1_t3345875600 * ___m_Toggles_3;

public:
	inline static int32_t get_offset_of_m_AllowSwitchOff_2() { return static_cast<int32_t>(offsetof(ToggleGroup_t1030026315, ___m_AllowSwitchOff_2)); }
	inline bool get_m_AllowSwitchOff_2() const { return ___m_AllowSwitchOff_2; }
	inline bool* get_address_of_m_AllowSwitchOff_2() { return &___m_AllowSwitchOff_2; }
	inline void set_m_AllowSwitchOff_2(bool value)
	{
		___m_AllowSwitchOff_2 = value;
	}

	inline static int32_t get_offset_of_m_Toggles_3() { return static_cast<int32_t>(offsetof(ToggleGroup_t1030026315, ___m_Toggles_3)); }
	inline List_1_t3345875600 * get_m_Toggles_3() const { return ___m_Toggles_3; }
	inline List_1_t3345875600 ** get_address_of_m_Toggles_3() { return &___m_Toggles_3; }
	inline void set_m_Toggles_3(List_1_t3345875600 * value)
	{
		___m_Toggles_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_Toggles_3, value);
	}
};

struct ToggleGroup_t1030026315_StaticFields
{
public:
	// System.Predicate`1<UnityEngine.UI.Toggle> UnityEngine.UI.ToggleGroup::<>f__am$cache0
	Predicate_1_t2419724583 * ___U3CU3Ef__amU24cache0_4;
	// System.Func`2<UnityEngine.UI.Toggle,System.Boolean> UnityEngine.UI.ToggleGroup::<>f__am$cache1
	Func_2_t2318645467 * ___U3CU3Ef__amU24cache1_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_4() { return static_cast<int32_t>(offsetof(ToggleGroup_t1030026315_StaticFields, ___U3CU3Ef__amU24cache0_4)); }
	inline Predicate_1_t2419724583 * get_U3CU3Ef__amU24cache0_4() const { return ___U3CU3Ef__amU24cache0_4; }
	inline Predicate_1_t2419724583 ** get_address_of_U3CU3Ef__amU24cache0_4() { return &___U3CU3Ef__amU24cache0_4; }
	inline void set_U3CU3Ef__amU24cache0_4(Predicate_1_t2419724583 * value)
	{
		___U3CU3Ef__amU24cache0_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_4, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_5() { return static_cast<int32_t>(offsetof(ToggleGroup_t1030026315_StaticFields, ___U3CU3Ef__amU24cache1_5)); }
	inline Func_2_t2318645467 * get_U3CU3Ef__amU24cache1_5() const { return ___U3CU3Ef__amU24cache1_5; }
	inline Func_2_t2318645467 ** get_address_of_U3CU3Ef__amU24cache1_5() { return &___U3CU3Ef__amU24cache1_5; }
	inline void set_U3CU3Ef__amU24cache1_5(Func_2_t2318645467 * value)
	{
		___U3CU3Ef__amU24cache1_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache1_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
