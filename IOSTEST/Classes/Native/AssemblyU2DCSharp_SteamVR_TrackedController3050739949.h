#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Valve_VR_VRControlle2504874220.h"

// ClickedEventHandler
struct ClickedEventHandler_t1112331409;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SteamVR_TrackedController
struct  SteamVR_TrackedController_t3050739949  : public MonoBehaviour_t1158329972
{
public:
	// System.UInt32 SteamVR_TrackedController::controllerIndex
	uint32_t ___controllerIndex_2;
	// Valve.VR.VRControllerState_t SteamVR_TrackedController::controllerState
	VRControllerState_t_t2504874220  ___controllerState_3;
	// System.Boolean SteamVR_TrackedController::triggerPressed
	bool ___triggerPressed_4;
	// System.Boolean SteamVR_TrackedController::steamPressed
	bool ___steamPressed_5;
	// System.Boolean SteamVR_TrackedController::menuPressed
	bool ___menuPressed_6;
	// System.Boolean SteamVR_TrackedController::padPressed
	bool ___padPressed_7;
	// System.Boolean SteamVR_TrackedController::padTouched
	bool ___padTouched_8;
	// System.Boolean SteamVR_TrackedController::gripped
	bool ___gripped_9;
	// ClickedEventHandler SteamVR_TrackedController::MenuButtonClicked
	ClickedEventHandler_t1112331409 * ___MenuButtonClicked_10;
	// ClickedEventHandler SteamVR_TrackedController::MenuButtonUnclicked
	ClickedEventHandler_t1112331409 * ___MenuButtonUnclicked_11;
	// ClickedEventHandler SteamVR_TrackedController::TriggerClicked
	ClickedEventHandler_t1112331409 * ___TriggerClicked_12;
	// ClickedEventHandler SteamVR_TrackedController::TriggerUnclicked
	ClickedEventHandler_t1112331409 * ___TriggerUnclicked_13;
	// ClickedEventHandler SteamVR_TrackedController::SteamClicked
	ClickedEventHandler_t1112331409 * ___SteamClicked_14;
	// ClickedEventHandler SteamVR_TrackedController::PadClicked
	ClickedEventHandler_t1112331409 * ___PadClicked_15;
	// ClickedEventHandler SteamVR_TrackedController::PadUnclicked
	ClickedEventHandler_t1112331409 * ___PadUnclicked_16;
	// ClickedEventHandler SteamVR_TrackedController::PadTouched
	ClickedEventHandler_t1112331409 * ___PadTouched_17;
	// ClickedEventHandler SteamVR_TrackedController::PadUntouched
	ClickedEventHandler_t1112331409 * ___PadUntouched_18;
	// ClickedEventHandler SteamVR_TrackedController::Gripped
	ClickedEventHandler_t1112331409 * ___Gripped_19;
	// ClickedEventHandler SteamVR_TrackedController::Ungripped
	ClickedEventHandler_t1112331409 * ___Ungripped_20;

public:
	inline static int32_t get_offset_of_controllerIndex_2() { return static_cast<int32_t>(offsetof(SteamVR_TrackedController_t3050739949, ___controllerIndex_2)); }
	inline uint32_t get_controllerIndex_2() const { return ___controllerIndex_2; }
	inline uint32_t* get_address_of_controllerIndex_2() { return &___controllerIndex_2; }
	inline void set_controllerIndex_2(uint32_t value)
	{
		___controllerIndex_2 = value;
	}

	inline static int32_t get_offset_of_controllerState_3() { return static_cast<int32_t>(offsetof(SteamVR_TrackedController_t3050739949, ___controllerState_3)); }
	inline VRControllerState_t_t2504874220  get_controllerState_3() const { return ___controllerState_3; }
	inline VRControllerState_t_t2504874220 * get_address_of_controllerState_3() { return &___controllerState_3; }
	inline void set_controllerState_3(VRControllerState_t_t2504874220  value)
	{
		___controllerState_3 = value;
	}

	inline static int32_t get_offset_of_triggerPressed_4() { return static_cast<int32_t>(offsetof(SteamVR_TrackedController_t3050739949, ___triggerPressed_4)); }
	inline bool get_triggerPressed_4() const { return ___triggerPressed_4; }
	inline bool* get_address_of_triggerPressed_4() { return &___triggerPressed_4; }
	inline void set_triggerPressed_4(bool value)
	{
		___triggerPressed_4 = value;
	}

	inline static int32_t get_offset_of_steamPressed_5() { return static_cast<int32_t>(offsetof(SteamVR_TrackedController_t3050739949, ___steamPressed_5)); }
	inline bool get_steamPressed_5() const { return ___steamPressed_5; }
	inline bool* get_address_of_steamPressed_5() { return &___steamPressed_5; }
	inline void set_steamPressed_5(bool value)
	{
		___steamPressed_5 = value;
	}

	inline static int32_t get_offset_of_menuPressed_6() { return static_cast<int32_t>(offsetof(SteamVR_TrackedController_t3050739949, ___menuPressed_6)); }
	inline bool get_menuPressed_6() const { return ___menuPressed_6; }
	inline bool* get_address_of_menuPressed_6() { return &___menuPressed_6; }
	inline void set_menuPressed_6(bool value)
	{
		___menuPressed_6 = value;
	}

	inline static int32_t get_offset_of_padPressed_7() { return static_cast<int32_t>(offsetof(SteamVR_TrackedController_t3050739949, ___padPressed_7)); }
	inline bool get_padPressed_7() const { return ___padPressed_7; }
	inline bool* get_address_of_padPressed_7() { return &___padPressed_7; }
	inline void set_padPressed_7(bool value)
	{
		___padPressed_7 = value;
	}

	inline static int32_t get_offset_of_padTouched_8() { return static_cast<int32_t>(offsetof(SteamVR_TrackedController_t3050739949, ___padTouched_8)); }
	inline bool get_padTouched_8() const { return ___padTouched_8; }
	inline bool* get_address_of_padTouched_8() { return &___padTouched_8; }
	inline void set_padTouched_8(bool value)
	{
		___padTouched_8 = value;
	}

	inline static int32_t get_offset_of_gripped_9() { return static_cast<int32_t>(offsetof(SteamVR_TrackedController_t3050739949, ___gripped_9)); }
	inline bool get_gripped_9() const { return ___gripped_9; }
	inline bool* get_address_of_gripped_9() { return &___gripped_9; }
	inline void set_gripped_9(bool value)
	{
		___gripped_9 = value;
	}

	inline static int32_t get_offset_of_MenuButtonClicked_10() { return static_cast<int32_t>(offsetof(SteamVR_TrackedController_t3050739949, ___MenuButtonClicked_10)); }
	inline ClickedEventHandler_t1112331409 * get_MenuButtonClicked_10() const { return ___MenuButtonClicked_10; }
	inline ClickedEventHandler_t1112331409 ** get_address_of_MenuButtonClicked_10() { return &___MenuButtonClicked_10; }
	inline void set_MenuButtonClicked_10(ClickedEventHandler_t1112331409 * value)
	{
		___MenuButtonClicked_10 = value;
		Il2CppCodeGenWriteBarrier(&___MenuButtonClicked_10, value);
	}

	inline static int32_t get_offset_of_MenuButtonUnclicked_11() { return static_cast<int32_t>(offsetof(SteamVR_TrackedController_t3050739949, ___MenuButtonUnclicked_11)); }
	inline ClickedEventHandler_t1112331409 * get_MenuButtonUnclicked_11() const { return ___MenuButtonUnclicked_11; }
	inline ClickedEventHandler_t1112331409 ** get_address_of_MenuButtonUnclicked_11() { return &___MenuButtonUnclicked_11; }
	inline void set_MenuButtonUnclicked_11(ClickedEventHandler_t1112331409 * value)
	{
		___MenuButtonUnclicked_11 = value;
		Il2CppCodeGenWriteBarrier(&___MenuButtonUnclicked_11, value);
	}

	inline static int32_t get_offset_of_TriggerClicked_12() { return static_cast<int32_t>(offsetof(SteamVR_TrackedController_t3050739949, ___TriggerClicked_12)); }
	inline ClickedEventHandler_t1112331409 * get_TriggerClicked_12() const { return ___TriggerClicked_12; }
	inline ClickedEventHandler_t1112331409 ** get_address_of_TriggerClicked_12() { return &___TriggerClicked_12; }
	inline void set_TriggerClicked_12(ClickedEventHandler_t1112331409 * value)
	{
		___TriggerClicked_12 = value;
		Il2CppCodeGenWriteBarrier(&___TriggerClicked_12, value);
	}

	inline static int32_t get_offset_of_TriggerUnclicked_13() { return static_cast<int32_t>(offsetof(SteamVR_TrackedController_t3050739949, ___TriggerUnclicked_13)); }
	inline ClickedEventHandler_t1112331409 * get_TriggerUnclicked_13() const { return ___TriggerUnclicked_13; }
	inline ClickedEventHandler_t1112331409 ** get_address_of_TriggerUnclicked_13() { return &___TriggerUnclicked_13; }
	inline void set_TriggerUnclicked_13(ClickedEventHandler_t1112331409 * value)
	{
		___TriggerUnclicked_13 = value;
		Il2CppCodeGenWriteBarrier(&___TriggerUnclicked_13, value);
	}

	inline static int32_t get_offset_of_SteamClicked_14() { return static_cast<int32_t>(offsetof(SteamVR_TrackedController_t3050739949, ___SteamClicked_14)); }
	inline ClickedEventHandler_t1112331409 * get_SteamClicked_14() const { return ___SteamClicked_14; }
	inline ClickedEventHandler_t1112331409 ** get_address_of_SteamClicked_14() { return &___SteamClicked_14; }
	inline void set_SteamClicked_14(ClickedEventHandler_t1112331409 * value)
	{
		___SteamClicked_14 = value;
		Il2CppCodeGenWriteBarrier(&___SteamClicked_14, value);
	}

	inline static int32_t get_offset_of_PadClicked_15() { return static_cast<int32_t>(offsetof(SteamVR_TrackedController_t3050739949, ___PadClicked_15)); }
	inline ClickedEventHandler_t1112331409 * get_PadClicked_15() const { return ___PadClicked_15; }
	inline ClickedEventHandler_t1112331409 ** get_address_of_PadClicked_15() { return &___PadClicked_15; }
	inline void set_PadClicked_15(ClickedEventHandler_t1112331409 * value)
	{
		___PadClicked_15 = value;
		Il2CppCodeGenWriteBarrier(&___PadClicked_15, value);
	}

	inline static int32_t get_offset_of_PadUnclicked_16() { return static_cast<int32_t>(offsetof(SteamVR_TrackedController_t3050739949, ___PadUnclicked_16)); }
	inline ClickedEventHandler_t1112331409 * get_PadUnclicked_16() const { return ___PadUnclicked_16; }
	inline ClickedEventHandler_t1112331409 ** get_address_of_PadUnclicked_16() { return &___PadUnclicked_16; }
	inline void set_PadUnclicked_16(ClickedEventHandler_t1112331409 * value)
	{
		___PadUnclicked_16 = value;
		Il2CppCodeGenWriteBarrier(&___PadUnclicked_16, value);
	}

	inline static int32_t get_offset_of_PadTouched_17() { return static_cast<int32_t>(offsetof(SteamVR_TrackedController_t3050739949, ___PadTouched_17)); }
	inline ClickedEventHandler_t1112331409 * get_PadTouched_17() const { return ___PadTouched_17; }
	inline ClickedEventHandler_t1112331409 ** get_address_of_PadTouched_17() { return &___PadTouched_17; }
	inline void set_PadTouched_17(ClickedEventHandler_t1112331409 * value)
	{
		___PadTouched_17 = value;
		Il2CppCodeGenWriteBarrier(&___PadTouched_17, value);
	}

	inline static int32_t get_offset_of_PadUntouched_18() { return static_cast<int32_t>(offsetof(SteamVR_TrackedController_t3050739949, ___PadUntouched_18)); }
	inline ClickedEventHandler_t1112331409 * get_PadUntouched_18() const { return ___PadUntouched_18; }
	inline ClickedEventHandler_t1112331409 ** get_address_of_PadUntouched_18() { return &___PadUntouched_18; }
	inline void set_PadUntouched_18(ClickedEventHandler_t1112331409 * value)
	{
		___PadUntouched_18 = value;
		Il2CppCodeGenWriteBarrier(&___PadUntouched_18, value);
	}

	inline static int32_t get_offset_of_Gripped_19() { return static_cast<int32_t>(offsetof(SteamVR_TrackedController_t3050739949, ___Gripped_19)); }
	inline ClickedEventHandler_t1112331409 * get_Gripped_19() const { return ___Gripped_19; }
	inline ClickedEventHandler_t1112331409 ** get_address_of_Gripped_19() { return &___Gripped_19; }
	inline void set_Gripped_19(ClickedEventHandler_t1112331409 * value)
	{
		___Gripped_19 = value;
		Il2CppCodeGenWriteBarrier(&___Gripped_19, value);
	}

	inline static int32_t get_offset_of_Ungripped_20() { return static_cast<int32_t>(offsetof(SteamVR_TrackedController_t3050739949, ___Ungripped_20)); }
	inline ClickedEventHandler_t1112331409 * get_Ungripped_20() const { return ___Ungripped_20; }
	inline ClickedEventHandler_t1112331409 ** get_address_of_Ungripped_20() { return &___Ungripped_20; }
	inline void set_Ungripped_20(ClickedEventHandler_t1112331409 * value)
	{
		___Ungripped_20 = value;
		Il2CppCodeGenWriteBarrier(&___Ungripped_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
