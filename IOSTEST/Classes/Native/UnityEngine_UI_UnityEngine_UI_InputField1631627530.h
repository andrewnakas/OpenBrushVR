#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UI_UnityEngine_UI_Selectable1490392188.h"
#include "UnityEngine_UI_UnityEngine_UI_InputField_ContentTy1028629049.h"
#include "UnityEngine_UI_UnityEngine_UI_InputField_InputType1274231802.h"
#include "UnityEngine_UnityEngine_TouchScreenKeyboardType875112366.h"
#include "UnityEngine_UI_UnityEngine_UI_InputField_LineType2931319356.h"
#include "UnityEngine_UI_UnityEngine_UI_InputField_Character3437478890.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t601950206;
// System.Char[]
struct CharU5BU5D_t1328083999;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Graphic
struct Graphic_t2426225576;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t907918422;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_t2863344003;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t1946318473;
// System.String
struct String_t;
// UnityEngine.RectTransform
struct RectTransform_t3349966182;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t3048644023;
// UnityEngine.TextGenerator
struct TextGenerator_t647235000;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t261436805;
// UnityEngine.Mesh
struct Mesh_t1356156583;
// UnityEngine.Coroutine
struct Coroutine_t2299508840;
// UnityEngine.Event
struct Event_t3028476042;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.InputField
struct  InputField_t1631627530  : public Selectable_t1490392188
{
public:
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_t601950206 * ___m_Keyboard_16;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_t356221433 * ___m_TextComponent_18;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_t2426225576 * ___m_Placeholder_19;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_20;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_21;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_22;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_23;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_24;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_25;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_26;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_27;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnEndEdit
	SubmitEvent_t907918422 * ___m_OnEndEdit_28;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_t2863344003 * ___m_OnValueChanged_29;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t1946318473 * ___m_OnValidateInput_30;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_t2020392075  ___m_CaretColor_31;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_32;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_t2020392075  ___m_SelectionColor_33;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_34;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_35;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_36;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_37;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_38;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_39;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t3349966182 * ___caretRectTrans_40;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_t3048644023* ___m_CursorVerts_41;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t647235000 * ___m_InputTextCache_42;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_t261436805 * ___m_CachedInputRenderer_43;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_44;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t1356156583 * ___m_Mesh_45;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_46;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_47;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_48;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_49;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_52;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t2299508840 * ___m_BlinkCoroutine_53;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_54;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_55;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_56;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t2299508840 * ___m_DragCoroutine_57;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_58;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_59;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_60;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_t3028476042 * ___m_ProcessingEvent_62;

public:
	inline static int32_t get_offset_of_m_Keyboard_16() { return static_cast<int32_t>(offsetof(InputField_t1631627530, ___m_Keyboard_16)); }
	inline TouchScreenKeyboard_t601950206 * get_m_Keyboard_16() const { return ___m_Keyboard_16; }
	inline TouchScreenKeyboard_t601950206 ** get_address_of_m_Keyboard_16() { return &___m_Keyboard_16; }
	inline void set_m_Keyboard_16(TouchScreenKeyboard_t601950206 * value)
	{
		___m_Keyboard_16 = value;
		Il2CppCodeGenWriteBarrier(&___m_Keyboard_16, value);
	}

	inline static int32_t get_offset_of_m_TextComponent_18() { return static_cast<int32_t>(offsetof(InputField_t1631627530, ___m_TextComponent_18)); }
	inline Text_t356221433 * get_m_TextComponent_18() const { return ___m_TextComponent_18; }
	inline Text_t356221433 ** get_address_of_m_TextComponent_18() { return &___m_TextComponent_18; }
	inline void set_m_TextComponent_18(Text_t356221433 * value)
	{
		___m_TextComponent_18 = value;
		Il2CppCodeGenWriteBarrier(&___m_TextComponent_18, value);
	}

	inline static int32_t get_offset_of_m_Placeholder_19() { return static_cast<int32_t>(offsetof(InputField_t1631627530, ___m_Placeholder_19)); }
	inline Graphic_t2426225576 * get_m_Placeholder_19() const { return ___m_Placeholder_19; }
	inline Graphic_t2426225576 ** get_address_of_m_Placeholder_19() { return &___m_Placeholder_19; }
	inline void set_m_Placeholder_19(Graphic_t2426225576 * value)
	{
		___m_Placeholder_19 = value;
		Il2CppCodeGenWriteBarrier(&___m_Placeholder_19, value);
	}

	inline static int32_t get_offset_of_m_ContentType_20() { return static_cast<int32_t>(offsetof(InputField_t1631627530, ___m_ContentType_20)); }
	inline int32_t get_m_ContentType_20() const { return ___m_ContentType_20; }
	inline int32_t* get_address_of_m_ContentType_20() { return &___m_ContentType_20; }
	inline void set_m_ContentType_20(int32_t value)
	{
		___m_ContentType_20 = value;
	}

	inline static int32_t get_offset_of_m_InputType_21() { return static_cast<int32_t>(offsetof(InputField_t1631627530, ___m_InputType_21)); }
	inline int32_t get_m_InputType_21() const { return ___m_InputType_21; }
	inline int32_t* get_address_of_m_InputType_21() { return &___m_InputType_21; }
	inline void set_m_InputType_21(int32_t value)
	{
		___m_InputType_21 = value;
	}

	inline static int32_t get_offset_of_m_AsteriskChar_22() { return static_cast<int32_t>(offsetof(InputField_t1631627530, ___m_AsteriskChar_22)); }
	inline Il2CppChar get_m_AsteriskChar_22() const { return ___m_AsteriskChar_22; }
	inline Il2CppChar* get_address_of_m_AsteriskChar_22() { return &___m_AsteriskChar_22; }
	inline void set_m_AsteriskChar_22(Il2CppChar value)
	{
		___m_AsteriskChar_22 = value;
	}

	inline static int32_t get_offset_of_m_KeyboardType_23() { return static_cast<int32_t>(offsetof(InputField_t1631627530, ___m_KeyboardType_23)); }
	inline int32_t get_m_KeyboardType_23() const { return ___m_KeyboardType_23; }
	inline int32_t* get_address_of_m_KeyboardType_23() { return &___m_KeyboardType_23; }
	inline void set_m_KeyboardType_23(int32_t value)
	{
		___m_KeyboardType_23 = value;
	}

	inline static int32_t get_offset_of_m_LineType_24() { return static_cast<int32_t>(offsetof(InputField_t1631627530, ___m_LineType_24)); }
	inline int32_t get_m_LineType_24() const { return ___m_LineType_24; }
	inline int32_t* get_address_of_m_LineType_24() { return &___m_LineType_24; }
	inline void set_m_LineType_24(int32_t value)
	{
		___m_LineType_24 = value;
	}

	inline static int32_t get_offset_of_m_HideMobileInput_25() { return static_cast<int32_t>(offsetof(InputField_t1631627530, ___m_HideMobileInput_25)); }
	inline bool get_m_HideMobileInput_25() const { return ___m_HideMobileInput_25; }
	inline bool* get_address_of_m_HideMobileInput_25() { return &___m_HideMobileInput_25; }
	inline void set_m_HideMobileInput_25(bool value)
	{
		___m_HideMobileInput_25 = value;
	}

	inline static int32_t get_offset_of_m_CharacterValidation_26() { return static_cast<int32_t>(offsetof(InputField_t1631627530, ___m_CharacterValidation_26)); }
	inline int32_t get_m_CharacterValidation_26() const { return ___m_CharacterValidation_26; }
	inline int32_t* get_address_of_m_CharacterValidation_26() { return &___m_CharacterValidation_26; }
	inline void set_m_CharacterValidation_26(int32_t value)
	{
		___m_CharacterValidation_26 = value;
	}

	inline static int32_t get_offset_of_m_CharacterLimit_27() { return static_cast<int32_t>(offsetof(InputField_t1631627530, ___m_CharacterLimit_27)); }
	inline int32_t get_m_CharacterLimit_27() const { return ___m_CharacterLimit_27; }
	inline int32_t* get_address_of_m_CharacterLimit_27() { return &___m_CharacterLimit_27; }
	inline void set_m_CharacterLimit_27(int32_t value)
	{
		___m_CharacterLimit_27 = value;
	}

	inline static int32_t get_offset_of_m_OnEndEdit_28() { return static_cast<int32_t>(offsetof(InputField_t1631627530, ___m_OnEndEdit_28)); }
	inline SubmitEvent_t907918422 * get_m_OnEndEdit_28() const { return ___m_OnEndEdit_28; }
	inline SubmitEvent_t907918422 ** get_address_of_m_OnEndEdit_28() { return &___m_OnEndEdit_28; }
	inline void set_m_OnEndEdit_28(SubmitEvent_t907918422 * value)
	{
		___m_OnEndEdit_28 = value;
		Il2CppCodeGenWriteBarrier(&___m_OnEndEdit_28, value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_29() { return static_cast<int32_t>(offsetof(InputField_t1631627530, ___m_OnValueChanged_29)); }
	inline OnChangeEvent_t2863344003 * get_m_OnValueChanged_29() const { return ___m_OnValueChanged_29; }
	inline OnChangeEvent_t2863344003 ** get_address_of_m_OnValueChanged_29() { return &___m_OnValueChanged_29; }
	inline void set_m_OnValueChanged_29(OnChangeEvent_t2863344003 * value)
	{
		___m_OnValueChanged_29 = value;
		Il2CppCodeGenWriteBarrier(&___m_OnValueChanged_29, value);
	}

	inline static int32_t get_offset_of_m_OnValidateInput_30() { return static_cast<int32_t>(offsetof(InputField_t1631627530, ___m_OnValidateInput_30)); }
	inline OnValidateInput_t1946318473 * get_m_OnValidateInput_30() const { return ___m_OnValidateInput_30; }
	inline OnValidateInput_t1946318473 ** get_address_of_m_OnValidateInput_30() { return &___m_OnValidateInput_30; }
	inline void set_m_OnValidateInput_30(OnValidateInput_t1946318473 * value)
	{
		___m_OnValidateInput_30 = value;
		Il2CppCodeGenWriteBarrier(&___m_OnValidateInput_30, value);
	}

	inline static int32_t get_offset_of_m_CaretColor_31() { return static_cast<int32_t>(offsetof(InputField_t1631627530, ___m_CaretColor_31)); }
	inline Color_t2020392075  get_m_CaretColor_31() const { return ___m_CaretColor_31; }
	inline Color_t2020392075 * get_address_of_m_CaretColor_31() { return &___m_CaretColor_31; }
	inline void set_m_CaretColor_31(Color_t2020392075  value)
	{
		___m_CaretColor_31 = value;
	}

	inline static int32_t get_offset_of_m_CustomCaretColor_32() { return static_cast<int32_t>(offsetof(InputField_t1631627530, ___m_CustomCaretColor_32)); }
	inline bool get_m_CustomCaretColor_32() const { return ___m_CustomCaretColor_32; }
	inline bool* get_address_of_m_CustomCaretColor_32() { return &___m_CustomCaretColor_32; }
	inline void set_m_CustomCaretColor_32(bool value)
	{
		___m_CustomCaretColor_32 = value;
	}

	inline static int32_t get_offset_of_m_SelectionColor_33() { return static_cast<int32_t>(offsetof(InputField_t1631627530, ___m_SelectionColor_33)); }
	inline Color_t2020392075  get_m_SelectionColor_33() const { return ___m_SelectionColor_33; }
	inline Color_t2020392075 * get_address_of_m_SelectionColor_33() { return &___m_SelectionColor_33; }
	inline void set_m_SelectionColor_33(Color_t2020392075  value)
	{
		___m_SelectionColor_33 = value;
	}

	inline static int32_t get_offset_of_m_Text_34() { return static_cast<int32_t>(offsetof(InputField_t1631627530, ___m_Text_34)); }
	inline String_t* get_m_Text_34() const { return ___m_Text_34; }
	inline String_t** get_address_of_m_Text_34() { return &___m_Text_34; }
	inline void set_m_Text_34(String_t* value)
	{
		___m_Text_34 = value;
		Il2CppCodeGenWriteBarrier(&___m_Text_34, value);
	}

	inline static int32_t get_offset_of_m_CaretBlinkRate_35() { return static_cast<int32_t>(offsetof(InputField_t1631627530, ___m_CaretBlinkRate_35)); }
	inline float get_m_CaretBlinkRate_35() const { return ___m_CaretBlinkRate_35; }
	inline float* get_address_of_m_CaretBlinkRate_35() { return &___m_CaretBlinkRate_35; }
	inline void set_m_CaretBlinkRate_35(float value)
	{
		___m_CaretBlinkRate_35 = value;
	}

	inline static int32_t get_offset_of_m_CaretWidth_36() { return static_cast<int32_t>(offsetof(InputField_t1631627530, ___m_CaretWidth_36)); }
	inline int32_t get_m_CaretWidth_36() const { return ___m_CaretWidth_36; }
	inline int32_t* get_address_of_m_CaretWidth_36() { return &___m_CaretWidth_36; }
	inline void set_m_CaretWidth_36(int32_t value)
	{
		___m_CaretWidth_36 = value;
	}

	inline static int32_t get_offset_of_m_ReadOnly_37() { return static_cast<int32_t>(offsetof(InputField_t1631627530, ___m_ReadOnly_37)); }
	inline bool get_m_ReadOnly_37() const { return ___m_ReadOnly_37; }
	inline bool* get_address_of_m_ReadOnly_37() { return &___m_ReadOnly_37; }
	inline void set_m_ReadOnly_37(bool value)
	{
		___m_ReadOnly_37 = value;
	}

	inline static int32_t get_offset_of_m_CaretPosition_38() { return static_cast<int32_t>(offsetof(InputField_t1631627530, ___m_CaretPosition_38)); }
	inline int32_t get_m_CaretPosition_38() const { return ___m_CaretPosition_38; }
	inline int32_t* get_address_of_m_CaretPosition_38() { return &___m_CaretPosition_38; }
	inline void set_m_CaretPosition_38(int32_t value)
	{
		___m_CaretPosition_38 = value;
	}

	inline static int32_t get_offset_of_m_CaretSelectPosition_39() { return static_cast<int32_t>(offsetof(InputField_t1631627530, ___m_CaretSelectPosition_39)); }
	inline int32_t get_m_CaretSelectPosition_39() const { return ___m_CaretSelectPosition_39; }
	inline int32_t* get_address_of_m_CaretSelectPosition_39() { return &___m_CaretSelectPosition_39; }
	inline void set_m_CaretSelectPosition_39(int32_t value)
	{
		___m_CaretSelectPosition_39 = value;
	}

	inline static int32_t get_offset_of_caretRectTrans_40() { return static_cast<int32_t>(offsetof(InputField_t1631627530, ___caretRectTrans_40)); }
	inline RectTransform_t3349966182 * get_caretRectTrans_40() const { return ___caretRectTrans_40; }
	inline RectTransform_t3349966182 ** get_address_of_caretRectTrans_40() { return &___caretRectTrans_40; }
	inline void set_caretRectTrans_40(RectTransform_t3349966182 * value)
	{
		___caretRectTrans_40 = value;
		Il2CppCodeGenWriteBarrier(&___caretRectTrans_40, value);
	}

	inline static int32_t get_offset_of_m_CursorVerts_41() { return static_cast<int32_t>(offsetof(InputField_t1631627530, ___m_CursorVerts_41)); }
	inline UIVertexU5BU5D_t3048644023* get_m_CursorVerts_41() const { return ___m_CursorVerts_41; }
	inline UIVertexU5BU5D_t3048644023** get_address_of_m_CursorVerts_41() { return &___m_CursorVerts_41; }
	inline void set_m_CursorVerts_41(UIVertexU5BU5D_t3048644023* value)
	{
		___m_CursorVerts_41 = value;
		Il2CppCodeGenWriteBarrier(&___m_CursorVerts_41, value);
	}

	inline static int32_t get_offset_of_m_InputTextCache_42() { return static_cast<int32_t>(offsetof(InputField_t1631627530, ___m_InputTextCache_42)); }
	inline TextGenerator_t647235000 * get_m_InputTextCache_42() const { return ___m_InputTextCache_42; }
	inline TextGenerator_t647235000 ** get_address_of_m_InputTextCache_42() { return &___m_InputTextCache_42; }
	inline void set_m_InputTextCache_42(TextGenerator_t647235000 * value)
	{
		___m_InputTextCache_42 = value;
		Il2CppCodeGenWriteBarrier(&___m_InputTextCache_42, value);
	}

	inline static int32_t get_offset_of_m_CachedInputRenderer_43() { return static_cast<int32_t>(offsetof(InputField_t1631627530, ___m_CachedInputRenderer_43)); }
	inline CanvasRenderer_t261436805 * get_m_CachedInputRenderer_43() const { return ___m_CachedInputRenderer_43; }
	inline CanvasRenderer_t261436805 ** get_address_of_m_CachedInputRenderer_43() { return &___m_CachedInputRenderer_43; }
	inline void set_m_CachedInputRenderer_43(CanvasRenderer_t261436805 * value)
	{
		___m_CachedInputRenderer_43 = value;
		Il2CppCodeGenWriteBarrier(&___m_CachedInputRenderer_43, value);
	}

	inline static int32_t get_offset_of_m_PreventFontCallback_44() { return static_cast<int32_t>(offsetof(InputField_t1631627530, ___m_PreventFontCallback_44)); }
	inline bool get_m_PreventFontCallback_44() const { return ___m_PreventFontCallback_44; }
	inline bool* get_address_of_m_PreventFontCallback_44() { return &___m_PreventFontCallback_44; }
	inline void set_m_PreventFontCallback_44(bool value)
	{
		___m_PreventFontCallback_44 = value;
	}

	inline static int32_t get_offset_of_m_Mesh_45() { return static_cast<int32_t>(offsetof(InputField_t1631627530, ___m_Mesh_45)); }
	inline Mesh_t1356156583 * get_m_Mesh_45() const { return ___m_Mesh_45; }
	inline Mesh_t1356156583 ** get_address_of_m_Mesh_45() { return &___m_Mesh_45; }
	inline void set_m_Mesh_45(Mesh_t1356156583 * value)
	{
		___m_Mesh_45 = value;
		Il2CppCodeGenWriteBarrier(&___m_Mesh_45, value);
	}

	inline static int32_t get_offset_of_m_AllowInput_46() { return static_cast<int32_t>(offsetof(InputField_t1631627530, ___m_AllowInput_46)); }
	inline bool get_m_AllowInput_46() const { return ___m_AllowInput_46; }
	inline bool* get_address_of_m_AllowInput_46() { return &___m_AllowInput_46; }
	inline void set_m_AllowInput_46(bool value)
	{
		___m_AllowInput_46 = value;
	}

	inline static int32_t get_offset_of_m_ShouldActivateNextUpdate_47() { return static_cast<int32_t>(offsetof(InputField_t1631627530, ___m_ShouldActivateNextUpdate_47)); }
	inline bool get_m_ShouldActivateNextUpdate_47() const { return ___m_ShouldActivateNextUpdate_47; }
	inline bool* get_address_of_m_ShouldActivateNextUpdate_47() { return &___m_ShouldActivateNextUpdate_47; }
	inline void set_m_ShouldActivateNextUpdate_47(bool value)
	{
		___m_ShouldActivateNextUpdate_47 = value;
	}

	inline static int32_t get_offset_of_m_UpdateDrag_48() { return static_cast<int32_t>(offsetof(InputField_t1631627530, ___m_UpdateDrag_48)); }
	inline bool get_m_UpdateDrag_48() const { return ___m_UpdateDrag_48; }
	inline bool* get_address_of_m_UpdateDrag_48() { return &___m_UpdateDrag_48; }
	inline void set_m_UpdateDrag_48(bool value)
	{
		___m_UpdateDrag_48 = value;
	}

	inline static int32_t get_offset_of_m_DragPositionOutOfBounds_49() { return static_cast<int32_t>(offsetof(InputField_t1631627530, ___m_DragPositionOutOfBounds_49)); }
	inline bool get_m_DragPositionOutOfBounds_49() const { return ___m_DragPositionOutOfBounds_49; }
	inline bool* get_address_of_m_DragPositionOutOfBounds_49() { return &___m_DragPositionOutOfBounds_49; }
	inline void set_m_DragPositionOutOfBounds_49(bool value)
	{
		___m_DragPositionOutOfBounds_49 = value;
	}

	inline static int32_t get_offset_of_m_CaretVisible_52() { return static_cast<int32_t>(offsetof(InputField_t1631627530, ___m_CaretVisible_52)); }
	inline bool get_m_CaretVisible_52() const { return ___m_CaretVisible_52; }
	inline bool* get_address_of_m_CaretVisible_52() { return &___m_CaretVisible_52; }
	inline void set_m_CaretVisible_52(bool value)
	{
		___m_CaretVisible_52 = value;
	}

	inline static int32_t get_offset_of_m_BlinkCoroutine_53() { return static_cast<int32_t>(offsetof(InputField_t1631627530, ___m_BlinkCoroutine_53)); }
	inline Coroutine_t2299508840 * get_m_BlinkCoroutine_53() const { return ___m_BlinkCoroutine_53; }
	inline Coroutine_t2299508840 ** get_address_of_m_BlinkCoroutine_53() { return &___m_BlinkCoroutine_53; }
	inline void set_m_BlinkCoroutine_53(Coroutine_t2299508840 * value)
	{
		___m_BlinkCoroutine_53 = value;
		Il2CppCodeGenWriteBarrier(&___m_BlinkCoroutine_53, value);
	}

	inline static int32_t get_offset_of_m_BlinkStartTime_54() { return static_cast<int32_t>(offsetof(InputField_t1631627530, ___m_BlinkStartTime_54)); }
	inline float get_m_BlinkStartTime_54() const { return ___m_BlinkStartTime_54; }
	inline float* get_address_of_m_BlinkStartTime_54() { return &___m_BlinkStartTime_54; }
	inline void set_m_BlinkStartTime_54(float value)
	{
		___m_BlinkStartTime_54 = value;
	}

	inline static int32_t get_offset_of_m_DrawStart_55() { return static_cast<int32_t>(offsetof(InputField_t1631627530, ___m_DrawStart_55)); }
	inline int32_t get_m_DrawStart_55() const { return ___m_DrawStart_55; }
	inline int32_t* get_address_of_m_DrawStart_55() { return &___m_DrawStart_55; }
	inline void set_m_DrawStart_55(int32_t value)
	{
		___m_DrawStart_55 = value;
	}

	inline static int32_t get_offset_of_m_DrawEnd_56() { return static_cast<int32_t>(offsetof(InputField_t1631627530, ___m_DrawEnd_56)); }
	inline int32_t get_m_DrawEnd_56() const { return ___m_DrawEnd_56; }
	inline int32_t* get_address_of_m_DrawEnd_56() { return &___m_DrawEnd_56; }
	inline void set_m_DrawEnd_56(int32_t value)
	{
		___m_DrawEnd_56 = value;
	}

	inline static int32_t get_offset_of_m_DragCoroutine_57() { return static_cast<int32_t>(offsetof(InputField_t1631627530, ___m_DragCoroutine_57)); }
	inline Coroutine_t2299508840 * get_m_DragCoroutine_57() const { return ___m_DragCoroutine_57; }
	inline Coroutine_t2299508840 ** get_address_of_m_DragCoroutine_57() { return &___m_DragCoroutine_57; }
	inline void set_m_DragCoroutine_57(Coroutine_t2299508840 * value)
	{
		___m_DragCoroutine_57 = value;
		Il2CppCodeGenWriteBarrier(&___m_DragCoroutine_57, value);
	}

	inline static int32_t get_offset_of_m_OriginalText_58() { return static_cast<int32_t>(offsetof(InputField_t1631627530, ___m_OriginalText_58)); }
	inline String_t* get_m_OriginalText_58() const { return ___m_OriginalText_58; }
	inline String_t** get_address_of_m_OriginalText_58() { return &___m_OriginalText_58; }
	inline void set_m_OriginalText_58(String_t* value)
	{
		___m_OriginalText_58 = value;
		Il2CppCodeGenWriteBarrier(&___m_OriginalText_58, value);
	}

	inline static int32_t get_offset_of_m_WasCanceled_59() { return static_cast<int32_t>(offsetof(InputField_t1631627530, ___m_WasCanceled_59)); }
	inline bool get_m_WasCanceled_59() const { return ___m_WasCanceled_59; }
	inline bool* get_address_of_m_WasCanceled_59() { return &___m_WasCanceled_59; }
	inline void set_m_WasCanceled_59(bool value)
	{
		___m_WasCanceled_59 = value;
	}

	inline static int32_t get_offset_of_m_HasDoneFocusTransition_60() { return static_cast<int32_t>(offsetof(InputField_t1631627530, ___m_HasDoneFocusTransition_60)); }
	inline bool get_m_HasDoneFocusTransition_60() const { return ___m_HasDoneFocusTransition_60; }
	inline bool* get_address_of_m_HasDoneFocusTransition_60() { return &___m_HasDoneFocusTransition_60; }
	inline void set_m_HasDoneFocusTransition_60(bool value)
	{
		___m_HasDoneFocusTransition_60 = value;
	}

	inline static int32_t get_offset_of_m_ProcessingEvent_62() { return static_cast<int32_t>(offsetof(InputField_t1631627530, ___m_ProcessingEvent_62)); }
	inline Event_t3028476042 * get_m_ProcessingEvent_62() const { return ___m_ProcessingEvent_62; }
	inline Event_t3028476042 ** get_address_of_m_ProcessingEvent_62() { return &___m_ProcessingEvent_62; }
	inline void set_m_ProcessingEvent_62(Event_t3028476042 * value)
	{
		___m_ProcessingEvent_62 = value;
		Il2CppCodeGenWriteBarrier(&___m_ProcessingEvent_62, value);
	}
};

struct InputField_t1631627530_StaticFields
{
public:
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t1328083999* ___kSeparators_17;

public:
	inline static int32_t get_offset_of_kSeparators_17() { return static_cast<int32_t>(offsetof(InputField_t1631627530_StaticFields, ___kSeparators_17)); }
	inline CharU5BU5D_t1328083999* get_kSeparators_17() const { return ___kSeparators_17; }
	inline CharU5BU5D_t1328083999** get_address_of_kSeparators_17() { return &___kSeparators_17; }
	inline void set_kSeparators_17(CharU5BU5D_t1328083999* value)
	{
		___kSeparators_17 = value;
		Il2CppCodeGenWriteBarrier(&___kSeparators_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
