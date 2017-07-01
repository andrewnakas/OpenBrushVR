#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"

// UnityEngine.GUIStyle
struct GUIStyle_t1799908754;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUILayoutEntry
struct  GUILayoutEntry_t3828586629  : public Il2CppObject
{
public:
	// System.Single UnityEngine.GUILayoutEntry::minWidth
	float ___minWidth_0;
	// System.Single UnityEngine.GUILayoutEntry::maxWidth
	float ___maxWidth_1;
	// System.Single UnityEngine.GUILayoutEntry::minHeight
	float ___minHeight_2;
	// System.Single UnityEngine.GUILayoutEntry::maxHeight
	float ___maxHeight_3;
	// UnityEngine.Rect UnityEngine.GUILayoutEntry::rect
	Rect_t3681755626  ___rect_4;
	// System.Int32 UnityEngine.GUILayoutEntry::stretchWidth
	int32_t ___stretchWidth_5;
	// System.Int32 UnityEngine.GUILayoutEntry::stretchHeight
	int32_t ___stretchHeight_6;
	// UnityEngine.GUIStyle UnityEngine.GUILayoutEntry::m_Style
	GUIStyle_t1799908754 * ___m_Style_7;

public:
	inline static int32_t get_offset_of_minWidth_0() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t3828586629, ___minWidth_0)); }
	inline float get_minWidth_0() const { return ___minWidth_0; }
	inline float* get_address_of_minWidth_0() { return &___minWidth_0; }
	inline void set_minWidth_0(float value)
	{
		___minWidth_0 = value;
	}

	inline static int32_t get_offset_of_maxWidth_1() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t3828586629, ___maxWidth_1)); }
	inline float get_maxWidth_1() const { return ___maxWidth_1; }
	inline float* get_address_of_maxWidth_1() { return &___maxWidth_1; }
	inline void set_maxWidth_1(float value)
	{
		___maxWidth_1 = value;
	}

	inline static int32_t get_offset_of_minHeight_2() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t3828586629, ___minHeight_2)); }
	inline float get_minHeight_2() const { return ___minHeight_2; }
	inline float* get_address_of_minHeight_2() { return &___minHeight_2; }
	inline void set_minHeight_2(float value)
	{
		___minHeight_2 = value;
	}

	inline static int32_t get_offset_of_maxHeight_3() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t3828586629, ___maxHeight_3)); }
	inline float get_maxHeight_3() const { return ___maxHeight_3; }
	inline float* get_address_of_maxHeight_3() { return &___maxHeight_3; }
	inline void set_maxHeight_3(float value)
	{
		___maxHeight_3 = value;
	}

	inline static int32_t get_offset_of_rect_4() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t3828586629, ___rect_4)); }
	inline Rect_t3681755626  get_rect_4() const { return ___rect_4; }
	inline Rect_t3681755626 * get_address_of_rect_4() { return &___rect_4; }
	inline void set_rect_4(Rect_t3681755626  value)
	{
		___rect_4 = value;
	}

	inline static int32_t get_offset_of_stretchWidth_5() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t3828586629, ___stretchWidth_5)); }
	inline int32_t get_stretchWidth_5() const { return ___stretchWidth_5; }
	inline int32_t* get_address_of_stretchWidth_5() { return &___stretchWidth_5; }
	inline void set_stretchWidth_5(int32_t value)
	{
		___stretchWidth_5 = value;
	}

	inline static int32_t get_offset_of_stretchHeight_6() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t3828586629, ___stretchHeight_6)); }
	inline int32_t get_stretchHeight_6() const { return ___stretchHeight_6; }
	inline int32_t* get_address_of_stretchHeight_6() { return &___stretchHeight_6; }
	inline void set_stretchHeight_6(int32_t value)
	{
		___stretchHeight_6 = value;
	}

	inline static int32_t get_offset_of_m_Style_7() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t3828586629, ___m_Style_7)); }
	inline GUIStyle_t1799908754 * get_m_Style_7() const { return ___m_Style_7; }
	inline GUIStyle_t1799908754 ** get_address_of_m_Style_7() { return &___m_Style_7; }
	inline void set_m_Style_7(GUIStyle_t1799908754 * value)
	{
		___m_Style_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_Style_7, value);
	}
};

struct GUILayoutEntry_t3828586629_StaticFields
{
public:
	// UnityEngine.Rect UnityEngine.GUILayoutEntry::kDummyRect
	Rect_t3681755626  ___kDummyRect_8;
	// System.Int32 UnityEngine.GUILayoutEntry::indent
	int32_t ___indent_9;

public:
	inline static int32_t get_offset_of_kDummyRect_8() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t3828586629_StaticFields, ___kDummyRect_8)); }
	inline Rect_t3681755626  get_kDummyRect_8() const { return ___kDummyRect_8; }
	inline Rect_t3681755626 * get_address_of_kDummyRect_8() { return &___kDummyRect_8; }
	inline void set_kDummyRect_8(Rect_t3681755626  value)
	{
		___kDummyRect_8 = value;
	}

	inline static int32_t get_offset_of_indent_9() { return static_cast<int32_t>(offsetof(GUILayoutEntry_t3828586629_StaticFields, ___indent_9)); }
	inline int32_t get_indent_9() const { return ___indent_9; }
	inline int32_t* get_address_of_indent_9() { return &___indent_9; }
	inline void set_indent_9(int32_t value)
	{
		___indent_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
