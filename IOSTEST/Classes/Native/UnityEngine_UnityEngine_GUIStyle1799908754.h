#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "UnityEngine_UnityEngine_RectOffset3387826427.h"

// UnityEngine.GUIStyleState
struct GUIStyleState_t3801000545;
// UnityEngine.RectOffset
struct RectOffset_t3387826427;
// UnityEngine.Font
struct Font_t4239498691;
// UnityEngine.GUIStyle
struct GUIStyle_t1799908754;
struct GUIStyleState_t3801000545_marshaled_pinvoke;
struct GUIStyleState_t3801000545_marshaled_com;
struct RectOffset_t3387826427_marshaled_com;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIStyle
struct  GUIStyle_t1799908754  : public Il2CppObject
{
public:
	// System.IntPtr UnityEngine.GUIStyle::m_Ptr
	IntPtr_t ___m_Ptr_0;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Normal
	GUIStyleState_t3801000545 * ___m_Normal_1;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Hover
	GUIStyleState_t3801000545 * ___m_Hover_2;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Active
	GUIStyleState_t3801000545 * ___m_Active_3;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_Focused
	GUIStyleState_t3801000545 * ___m_Focused_4;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnNormal
	GUIStyleState_t3801000545 * ___m_OnNormal_5;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnHover
	GUIStyleState_t3801000545 * ___m_OnHover_6;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnActive
	GUIStyleState_t3801000545 * ___m_OnActive_7;
	// UnityEngine.GUIStyleState UnityEngine.GUIStyle::m_OnFocused
	GUIStyleState_t3801000545 * ___m_OnFocused_8;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Border
	RectOffset_t3387826427 * ___m_Border_9;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Padding
	RectOffset_t3387826427 * ___m_Padding_10;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Margin
	RectOffset_t3387826427 * ___m_Margin_11;
	// UnityEngine.RectOffset UnityEngine.GUIStyle::m_Overflow
	RectOffset_t3387826427 * ___m_Overflow_12;
	// UnityEngine.Font UnityEngine.GUIStyle::m_FontInternal
	Font_t4239498691 * ___m_FontInternal_13;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyle_t1799908754, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(GUIStyle_t1799908754, ___m_Normal_1)); }
	inline GUIStyleState_t3801000545 * get_m_Normal_1() const { return ___m_Normal_1; }
	inline GUIStyleState_t3801000545 ** get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(GUIStyleState_t3801000545 * value)
	{
		___m_Normal_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_Normal_1, value);
	}

	inline static int32_t get_offset_of_m_Hover_2() { return static_cast<int32_t>(offsetof(GUIStyle_t1799908754, ___m_Hover_2)); }
	inline GUIStyleState_t3801000545 * get_m_Hover_2() const { return ___m_Hover_2; }
	inline GUIStyleState_t3801000545 ** get_address_of_m_Hover_2() { return &___m_Hover_2; }
	inline void set_m_Hover_2(GUIStyleState_t3801000545 * value)
	{
		___m_Hover_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Hover_2, value);
	}

	inline static int32_t get_offset_of_m_Active_3() { return static_cast<int32_t>(offsetof(GUIStyle_t1799908754, ___m_Active_3)); }
	inline GUIStyleState_t3801000545 * get_m_Active_3() const { return ___m_Active_3; }
	inline GUIStyleState_t3801000545 ** get_address_of_m_Active_3() { return &___m_Active_3; }
	inline void set_m_Active_3(GUIStyleState_t3801000545 * value)
	{
		___m_Active_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_Active_3, value);
	}

	inline static int32_t get_offset_of_m_Focused_4() { return static_cast<int32_t>(offsetof(GUIStyle_t1799908754, ___m_Focused_4)); }
	inline GUIStyleState_t3801000545 * get_m_Focused_4() const { return ___m_Focused_4; }
	inline GUIStyleState_t3801000545 ** get_address_of_m_Focused_4() { return &___m_Focused_4; }
	inline void set_m_Focused_4(GUIStyleState_t3801000545 * value)
	{
		___m_Focused_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_Focused_4, value);
	}

	inline static int32_t get_offset_of_m_OnNormal_5() { return static_cast<int32_t>(offsetof(GUIStyle_t1799908754, ___m_OnNormal_5)); }
	inline GUIStyleState_t3801000545 * get_m_OnNormal_5() const { return ___m_OnNormal_5; }
	inline GUIStyleState_t3801000545 ** get_address_of_m_OnNormal_5() { return &___m_OnNormal_5; }
	inline void set_m_OnNormal_5(GUIStyleState_t3801000545 * value)
	{
		___m_OnNormal_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_OnNormal_5, value);
	}

	inline static int32_t get_offset_of_m_OnHover_6() { return static_cast<int32_t>(offsetof(GUIStyle_t1799908754, ___m_OnHover_6)); }
	inline GUIStyleState_t3801000545 * get_m_OnHover_6() const { return ___m_OnHover_6; }
	inline GUIStyleState_t3801000545 ** get_address_of_m_OnHover_6() { return &___m_OnHover_6; }
	inline void set_m_OnHover_6(GUIStyleState_t3801000545 * value)
	{
		___m_OnHover_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_OnHover_6, value);
	}

	inline static int32_t get_offset_of_m_OnActive_7() { return static_cast<int32_t>(offsetof(GUIStyle_t1799908754, ___m_OnActive_7)); }
	inline GUIStyleState_t3801000545 * get_m_OnActive_7() const { return ___m_OnActive_7; }
	inline GUIStyleState_t3801000545 ** get_address_of_m_OnActive_7() { return &___m_OnActive_7; }
	inline void set_m_OnActive_7(GUIStyleState_t3801000545 * value)
	{
		___m_OnActive_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_OnActive_7, value);
	}

	inline static int32_t get_offset_of_m_OnFocused_8() { return static_cast<int32_t>(offsetof(GUIStyle_t1799908754, ___m_OnFocused_8)); }
	inline GUIStyleState_t3801000545 * get_m_OnFocused_8() const { return ___m_OnFocused_8; }
	inline GUIStyleState_t3801000545 ** get_address_of_m_OnFocused_8() { return &___m_OnFocused_8; }
	inline void set_m_OnFocused_8(GUIStyleState_t3801000545 * value)
	{
		___m_OnFocused_8 = value;
		Il2CppCodeGenWriteBarrier(&___m_OnFocused_8, value);
	}

	inline static int32_t get_offset_of_m_Border_9() { return static_cast<int32_t>(offsetof(GUIStyle_t1799908754, ___m_Border_9)); }
	inline RectOffset_t3387826427 * get_m_Border_9() const { return ___m_Border_9; }
	inline RectOffset_t3387826427 ** get_address_of_m_Border_9() { return &___m_Border_9; }
	inline void set_m_Border_9(RectOffset_t3387826427 * value)
	{
		___m_Border_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_Border_9, value);
	}

	inline static int32_t get_offset_of_m_Padding_10() { return static_cast<int32_t>(offsetof(GUIStyle_t1799908754, ___m_Padding_10)); }
	inline RectOffset_t3387826427 * get_m_Padding_10() const { return ___m_Padding_10; }
	inline RectOffset_t3387826427 ** get_address_of_m_Padding_10() { return &___m_Padding_10; }
	inline void set_m_Padding_10(RectOffset_t3387826427 * value)
	{
		___m_Padding_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_Padding_10, value);
	}

	inline static int32_t get_offset_of_m_Margin_11() { return static_cast<int32_t>(offsetof(GUIStyle_t1799908754, ___m_Margin_11)); }
	inline RectOffset_t3387826427 * get_m_Margin_11() const { return ___m_Margin_11; }
	inline RectOffset_t3387826427 ** get_address_of_m_Margin_11() { return &___m_Margin_11; }
	inline void set_m_Margin_11(RectOffset_t3387826427 * value)
	{
		___m_Margin_11 = value;
		Il2CppCodeGenWriteBarrier(&___m_Margin_11, value);
	}

	inline static int32_t get_offset_of_m_Overflow_12() { return static_cast<int32_t>(offsetof(GUIStyle_t1799908754, ___m_Overflow_12)); }
	inline RectOffset_t3387826427 * get_m_Overflow_12() const { return ___m_Overflow_12; }
	inline RectOffset_t3387826427 ** get_address_of_m_Overflow_12() { return &___m_Overflow_12; }
	inline void set_m_Overflow_12(RectOffset_t3387826427 * value)
	{
		___m_Overflow_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_Overflow_12, value);
	}

	inline static int32_t get_offset_of_m_FontInternal_13() { return static_cast<int32_t>(offsetof(GUIStyle_t1799908754, ___m_FontInternal_13)); }
	inline Font_t4239498691 * get_m_FontInternal_13() const { return ___m_FontInternal_13; }
	inline Font_t4239498691 ** get_address_of_m_FontInternal_13() { return &___m_FontInternal_13; }
	inline void set_m_FontInternal_13(Font_t4239498691 * value)
	{
		___m_FontInternal_13 = value;
		Il2CppCodeGenWriteBarrier(&___m_FontInternal_13, value);
	}
};

struct GUIStyle_t1799908754_StaticFields
{
public:
	// System.Boolean UnityEngine.GUIStyle::showKeyboardFocus
	bool ___showKeyboardFocus_14;
	// UnityEngine.GUIStyle UnityEngine.GUIStyle::s_None
	GUIStyle_t1799908754 * ___s_None_15;

public:
	inline static int32_t get_offset_of_showKeyboardFocus_14() { return static_cast<int32_t>(offsetof(GUIStyle_t1799908754_StaticFields, ___showKeyboardFocus_14)); }
	inline bool get_showKeyboardFocus_14() const { return ___showKeyboardFocus_14; }
	inline bool* get_address_of_showKeyboardFocus_14() { return &___showKeyboardFocus_14; }
	inline void set_showKeyboardFocus_14(bool value)
	{
		___showKeyboardFocus_14 = value;
	}

	inline static int32_t get_offset_of_s_None_15() { return static_cast<int32_t>(offsetof(GUIStyle_t1799908754_StaticFields, ___s_None_15)); }
	inline GUIStyle_t1799908754 * get_s_None_15() const { return ___s_None_15; }
	inline GUIStyle_t1799908754 ** get_address_of_s_None_15() { return &___s_None_15; }
	inline void set_s_None_15(GUIStyle_t1799908754 * value)
	{
		___s_None_15 = value;
		Il2CppCodeGenWriteBarrier(&___s_None_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyle
struct GUIStyle_t1799908754_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t3801000545_marshaled_pinvoke* ___m_Normal_1;
	GUIStyleState_t3801000545_marshaled_pinvoke* ___m_Hover_2;
	GUIStyleState_t3801000545_marshaled_pinvoke* ___m_Active_3;
	GUIStyleState_t3801000545_marshaled_pinvoke* ___m_Focused_4;
	GUIStyleState_t3801000545_marshaled_pinvoke* ___m_OnNormal_5;
	GUIStyleState_t3801000545_marshaled_pinvoke* ___m_OnHover_6;
	GUIStyleState_t3801000545_marshaled_pinvoke* ___m_OnActive_7;
	GUIStyleState_t3801000545_marshaled_pinvoke* ___m_OnFocused_8;
	RectOffset_t3387826427_marshaled_pinvoke ___m_Border_9;
	RectOffset_t3387826427_marshaled_pinvoke ___m_Padding_10;
	RectOffset_t3387826427_marshaled_pinvoke ___m_Margin_11;
	RectOffset_t3387826427_marshaled_pinvoke ___m_Overflow_12;
	Font_t4239498691 * ___m_FontInternal_13;
};
// Native definition for COM marshalling of UnityEngine.GUIStyle
struct GUIStyle_t1799908754_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyleState_t3801000545_marshaled_com* ___m_Normal_1;
	GUIStyleState_t3801000545_marshaled_com* ___m_Hover_2;
	GUIStyleState_t3801000545_marshaled_com* ___m_Active_3;
	GUIStyleState_t3801000545_marshaled_com* ___m_Focused_4;
	GUIStyleState_t3801000545_marshaled_com* ___m_OnNormal_5;
	GUIStyleState_t3801000545_marshaled_com* ___m_OnHover_6;
	GUIStyleState_t3801000545_marshaled_com* ___m_OnActive_7;
	GUIStyleState_t3801000545_marshaled_com* ___m_OnFocused_8;
	RectOffset_t3387826427_marshaled_com* ___m_Border_9;
	RectOffset_t3387826427_marshaled_com* ___m_Padding_10;
	RectOffset_t3387826427_marshaled_com* ___m_Margin_11;
	RectOffset_t3387826427_marshaled_com* ___m_Overflow_12;
	Font_t4239498691 * ___m_FontInternal_13;
};
