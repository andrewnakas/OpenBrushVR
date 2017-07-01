#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_TextEditor_DblClickSnappin1119726228.h"

// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_t601950206;
// UnityEngine.GUIStyle
struct GUIStyle_t1799908754;
// UnityEngine.GUIContent
struct GUIContent_t4210063000;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t1747193563;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextEditor
struct  TextEditor_t3975561390  : public Il2CppObject
{
public:
	// UnityEngine.TouchScreenKeyboard UnityEngine.TextEditor::keyboardOnScreen
	TouchScreenKeyboard_t601950206 * ___keyboardOnScreen_0;
	// System.Int32 UnityEngine.TextEditor::controlID
	int32_t ___controlID_1;
	// UnityEngine.GUIStyle UnityEngine.TextEditor::style
	GUIStyle_t1799908754 * ___style_2;
	// System.Boolean UnityEngine.TextEditor::multiline
	bool ___multiline_3;
	// System.Boolean UnityEngine.TextEditor::hasHorizontalCursorPos
	bool ___hasHorizontalCursorPos_4;
	// System.Boolean UnityEngine.TextEditor::isPasswordField
	bool ___isPasswordField_5;
	// System.Boolean UnityEngine.TextEditor::m_HasFocus
	bool ___m_HasFocus_6;
	// UnityEngine.Vector2 UnityEngine.TextEditor::scrollOffset
	Vector2_t2243707579  ___scrollOffset_7;
	// UnityEngine.GUIContent UnityEngine.TextEditor::m_Content
	GUIContent_t4210063000 * ___m_Content_8;
	// UnityEngine.Rect UnityEngine.TextEditor::m_Position
	Rect_t3681755626  ___m_Position_9;
	// System.Int32 UnityEngine.TextEditor::m_CursorIndex
	int32_t ___m_CursorIndex_10;
	// System.Int32 UnityEngine.TextEditor::m_SelectIndex
	int32_t ___m_SelectIndex_11;
	// System.Boolean UnityEngine.TextEditor::m_RevealCursor
	bool ___m_RevealCursor_12;
	// UnityEngine.Vector2 UnityEngine.TextEditor::graphicalCursorPos
	Vector2_t2243707579  ___graphicalCursorPos_13;
	// UnityEngine.Vector2 UnityEngine.TextEditor::graphicalSelectCursorPos
	Vector2_t2243707579  ___graphicalSelectCursorPos_14;
	// System.Boolean UnityEngine.TextEditor::m_MouseDragSelectsWholeWords
	bool ___m_MouseDragSelectsWholeWords_15;
	// System.Int32 UnityEngine.TextEditor::m_DblClickInitPos
	int32_t ___m_DblClickInitPos_16;
	// UnityEngine.TextEditor/DblClickSnapping UnityEngine.TextEditor::m_DblClickSnap
	uint8_t ___m_DblClickSnap_17;
	// System.Boolean UnityEngine.TextEditor::m_bJustSelected
	bool ___m_bJustSelected_18;
	// System.Int32 UnityEngine.TextEditor::m_iAltCursorPos
	int32_t ___m_iAltCursorPos_19;
	// System.String UnityEngine.TextEditor::oldText
	String_t* ___oldText_20;
	// System.Int32 UnityEngine.TextEditor::oldPos
	int32_t ___oldPos_21;
	// System.Int32 UnityEngine.TextEditor::oldSelectPos
	int32_t ___oldSelectPos_22;

public:
	inline static int32_t get_offset_of_keyboardOnScreen_0() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___keyboardOnScreen_0)); }
	inline TouchScreenKeyboard_t601950206 * get_keyboardOnScreen_0() const { return ___keyboardOnScreen_0; }
	inline TouchScreenKeyboard_t601950206 ** get_address_of_keyboardOnScreen_0() { return &___keyboardOnScreen_0; }
	inline void set_keyboardOnScreen_0(TouchScreenKeyboard_t601950206 * value)
	{
		___keyboardOnScreen_0 = value;
		Il2CppCodeGenWriteBarrier(&___keyboardOnScreen_0, value);
	}

	inline static int32_t get_offset_of_controlID_1() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___controlID_1)); }
	inline int32_t get_controlID_1() const { return ___controlID_1; }
	inline int32_t* get_address_of_controlID_1() { return &___controlID_1; }
	inline void set_controlID_1(int32_t value)
	{
		___controlID_1 = value;
	}

	inline static int32_t get_offset_of_style_2() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___style_2)); }
	inline GUIStyle_t1799908754 * get_style_2() const { return ___style_2; }
	inline GUIStyle_t1799908754 ** get_address_of_style_2() { return &___style_2; }
	inline void set_style_2(GUIStyle_t1799908754 * value)
	{
		___style_2 = value;
		Il2CppCodeGenWriteBarrier(&___style_2, value);
	}

	inline static int32_t get_offset_of_multiline_3() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___multiline_3)); }
	inline bool get_multiline_3() const { return ___multiline_3; }
	inline bool* get_address_of_multiline_3() { return &___multiline_3; }
	inline void set_multiline_3(bool value)
	{
		___multiline_3 = value;
	}

	inline static int32_t get_offset_of_hasHorizontalCursorPos_4() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___hasHorizontalCursorPos_4)); }
	inline bool get_hasHorizontalCursorPos_4() const { return ___hasHorizontalCursorPos_4; }
	inline bool* get_address_of_hasHorizontalCursorPos_4() { return &___hasHorizontalCursorPos_4; }
	inline void set_hasHorizontalCursorPos_4(bool value)
	{
		___hasHorizontalCursorPos_4 = value;
	}

	inline static int32_t get_offset_of_isPasswordField_5() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___isPasswordField_5)); }
	inline bool get_isPasswordField_5() const { return ___isPasswordField_5; }
	inline bool* get_address_of_isPasswordField_5() { return &___isPasswordField_5; }
	inline void set_isPasswordField_5(bool value)
	{
		___isPasswordField_5 = value;
	}

	inline static int32_t get_offset_of_m_HasFocus_6() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___m_HasFocus_6)); }
	inline bool get_m_HasFocus_6() const { return ___m_HasFocus_6; }
	inline bool* get_address_of_m_HasFocus_6() { return &___m_HasFocus_6; }
	inline void set_m_HasFocus_6(bool value)
	{
		___m_HasFocus_6 = value;
	}

	inline static int32_t get_offset_of_scrollOffset_7() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___scrollOffset_7)); }
	inline Vector2_t2243707579  get_scrollOffset_7() const { return ___scrollOffset_7; }
	inline Vector2_t2243707579 * get_address_of_scrollOffset_7() { return &___scrollOffset_7; }
	inline void set_scrollOffset_7(Vector2_t2243707579  value)
	{
		___scrollOffset_7 = value;
	}

	inline static int32_t get_offset_of_m_Content_8() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___m_Content_8)); }
	inline GUIContent_t4210063000 * get_m_Content_8() const { return ___m_Content_8; }
	inline GUIContent_t4210063000 ** get_address_of_m_Content_8() { return &___m_Content_8; }
	inline void set_m_Content_8(GUIContent_t4210063000 * value)
	{
		___m_Content_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_Content_8, value);
	}

	inline static int32_t get_offset_of_m_Position_9() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___m_Position_9)); }
	inline Rect_t3681755626  get_m_Position_9() const { return ___m_Position_9; }
	inline Rect_t3681755626 * get_address_of_m_Position_9() { return &___m_Position_9; }
	inline void set_m_Position_9(Rect_t3681755626  value)
	{
		___m_Position_9 = value;
	}

	inline static int32_t get_offset_of_m_CursorIndex_10() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___m_CursorIndex_10)); }
	inline int32_t get_m_CursorIndex_10() const { return ___m_CursorIndex_10; }
	inline int32_t* get_address_of_m_CursorIndex_10() { return &___m_CursorIndex_10; }
	inline void set_m_CursorIndex_10(int32_t value)
	{
		___m_CursorIndex_10 = value;
	}

	inline static int32_t get_offset_of_m_SelectIndex_11() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___m_SelectIndex_11)); }
	inline int32_t get_m_SelectIndex_11() const { return ___m_SelectIndex_11; }
	inline int32_t* get_address_of_m_SelectIndex_11() { return &___m_SelectIndex_11; }
	inline void set_m_SelectIndex_11(int32_t value)
	{
		___m_SelectIndex_11 = value;
	}

	inline static int32_t get_offset_of_m_RevealCursor_12() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___m_RevealCursor_12)); }
	inline bool get_m_RevealCursor_12() const { return ___m_RevealCursor_12; }
	inline bool* get_address_of_m_RevealCursor_12() { return &___m_RevealCursor_12; }
	inline void set_m_RevealCursor_12(bool value)
	{
		___m_RevealCursor_12 = value;
	}

	inline static int32_t get_offset_of_graphicalCursorPos_13() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___graphicalCursorPos_13)); }
	inline Vector2_t2243707579  get_graphicalCursorPos_13() const { return ___graphicalCursorPos_13; }
	inline Vector2_t2243707579 * get_address_of_graphicalCursorPos_13() { return &___graphicalCursorPos_13; }
	inline void set_graphicalCursorPos_13(Vector2_t2243707579  value)
	{
		___graphicalCursorPos_13 = value;
	}

	inline static int32_t get_offset_of_graphicalSelectCursorPos_14() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___graphicalSelectCursorPos_14)); }
	inline Vector2_t2243707579  get_graphicalSelectCursorPos_14() const { return ___graphicalSelectCursorPos_14; }
	inline Vector2_t2243707579 * get_address_of_graphicalSelectCursorPos_14() { return &___graphicalSelectCursorPos_14; }
	inline void set_graphicalSelectCursorPos_14(Vector2_t2243707579  value)
	{
		___graphicalSelectCursorPos_14 = value;
	}

	inline static int32_t get_offset_of_m_MouseDragSelectsWholeWords_15() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___m_MouseDragSelectsWholeWords_15)); }
	inline bool get_m_MouseDragSelectsWholeWords_15() const { return ___m_MouseDragSelectsWholeWords_15; }
	inline bool* get_address_of_m_MouseDragSelectsWholeWords_15() { return &___m_MouseDragSelectsWholeWords_15; }
	inline void set_m_MouseDragSelectsWholeWords_15(bool value)
	{
		___m_MouseDragSelectsWholeWords_15 = value;
	}

	inline static int32_t get_offset_of_m_DblClickInitPos_16() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___m_DblClickInitPos_16)); }
	inline int32_t get_m_DblClickInitPos_16() const { return ___m_DblClickInitPos_16; }
	inline int32_t* get_address_of_m_DblClickInitPos_16() { return &___m_DblClickInitPos_16; }
	inline void set_m_DblClickInitPos_16(int32_t value)
	{
		___m_DblClickInitPos_16 = value;
	}

	inline static int32_t get_offset_of_m_DblClickSnap_17() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___m_DblClickSnap_17)); }
	inline uint8_t get_m_DblClickSnap_17() const { return ___m_DblClickSnap_17; }
	inline uint8_t* get_address_of_m_DblClickSnap_17() { return &___m_DblClickSnap_17; }
	inline void set_m_DblClickSnap_17(uint8_t value)
	{
		___m_DblClickSnap_17 = value;
	}

	inline static int32_t get_offset_of_m_bJustSelected_18() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___m_bJustSelected_18)); }
	inline bool get_m_bJustSelected_18() const { return ___m_bJustSelected_18; }
	inline bool* get_address_of_m_bJustSelected_18() { return &___m_bJustSelected_18; }
	inline void set_m_bJustSelected_18(bool value)
	{
		___m_bJustSelected_18 = value;
	}

	inline static int32_t get_offset_of_m_iAltCursorPos_19() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___m_iAltCursorPos_19)); }
	inline int32_t get_m_iAltCursorPos_19() const { return ___m_iAltCursorPos_19; }
	inline int32_t* get_address_of_m_iAltCursorPos_19() { return &___m_iAltCursorPos_19; }
	inline void set_m_iAltCursorPos_19(int32_t value)
	{
		___m_iAltCursorPos_19 = value;
	}

	inline static int32_t get_offset_of_oldText_20() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___oldText_20)); }
	inline String_t* get_oldText_20() const { return ___oldText_20; }
	inline String_t** get_address_of_oldText_20() { return &___oldText_20; }
	inline void set_oldText_20(String_t* value)
	{
		___oldText_20 = value;
		Il2CppCodeGenWriteBarrier(&___oldText_20, value);
	}

	inline static int32_t get_offset_of_oldPos_21() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___oldPos_21)); }
	inline int32_t get_oldPos_21() const { return ___oldPos_21; }
	inline int32_t* get_address_of_oldPos_21() { return &___oldPos_21; }
	inline void set_oldPos_21(int32_t value)
	{
		___oldPos_21 = value;
	}

	inline static int32_t get_offset_of_oldSelectPos_22() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390, ___oldSelectPos_22)); }
	inline int32_t get_oldSelectPos_22() const { return ___oldSelectPos_22; }
	inline int32_t* get_address_of_oldSelectPos_22() { return &___oldSelectPos_22; }
	inline void set_oldSelectPos_22(int32_t value)
	{
		___oldSelectPos_22 = value;
	}
};

struct TextEditor_t3975561390_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.Event,UnityEngine.TextEditor/TextEditOp> UnityEngine.TextEditor::s_Keyactions
	Dictionary_2_t1747193563 * ___s_Keyactions_23;

public:
	inline static int32_t get_offset_of_s_Keyactions_23() { return static_cast<int32_t>(offsetof(TextEditor_t3975561390_StaticFields, ___s_Keyactions_23)); }
	inline Dictionary_2_t1747193563 * get_s_Keyactions_23() const { return ___s_Keyactions_23; }
	inline Dictionary_2_t1747193563 ** get_address_of_s_Keyactions_23() { return &___s_Keyactions_23; }
	inline void set_s_Keyactions_23(Dictionary_2_t1747193563 * value)
	{
		___s_Keyactions_23 = value;
		Il2CppCodeGenWriteBarrier(&___s_Keyactions_23, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
