#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t2243626319;
// UnityEngine.GUIContent
struct GUIContent_t4210063000;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIContent
struct  GUIContent_t4210063000  : public Il2CppObject
{
public:
	// System.String UnityEngine.GUIContent::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Texture UnityEngine.GUIContent::m_Image
	Texture_t2243626319 * ___m_Image_1;
	// System.String UnityEngine.GUIContent::m_Tooltip
	String_t* ___m_Tooltip_2;

public:
	inline static int32_t get_offset_of_m_Text_0() { return static_cast<int32_t>(offsetof(GUIContent_t4210063000, ___m_Text_0)); }
	inline String_t* get_m_Text_0() const { return ___m_Text_0; }
	inline String_t** get_address_of_m_Text_0() { return &___m_Text_0; }
	inline void set_m_Text_0(String_t* value)
	{
		___m_Text_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_Text_0, value);
	}

	inline static int32_t get_offset_of_m_Image_1() { return static_cast<int32_t>(offsetof(GUIContent_t4210063000, ___m_Image_1)); }
	inline Texture_t2243626319 * get_m_Image_1() const { return ___m_Image_1; }
	inline Texture_t2243626319 ** get_address_of_m_Image_1() { return &___m_Image_1; }
	inline void set_m_Image_1(Texture_t2243626319 * value)
	{
		___m_Image_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_Image_1, value);
	}

	inline static int32_t get_offset_of_m_Tooltip_2() { return static_cast<int32_t>(offsetof(GUIContent_t4210063000, ___m_Tooltip_2)); }
	inline String_t* get_m_Tooltip_2() const { return ___m_Tooltip_2; }
	inline String_t** get_address_of_m_Tooltip_2() { return &___m_Tooltip_2; }
	inline void set_m_Tooltip_2(String_t* value)
	{
		___m_Tooltip_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Tooltip_2, value);
	}
};

struct GUIContent_t4210063000_StaticFields
{
public:
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Text
	GUIContent_t4210063000 * ___s_Text_3;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_Image
	GUIContent_t4210063000 * ___s_Image_4;
	// UnityEngine.GUIContent UnityEngine.GUIContent::s_TextImage
	GUIContent_t4210063000 * ___s_TextImage_5;
	// UnityEngine.GUIContent UnityEngine.GUIContent::none
	GUIContent_t4210063000 * ___none_6;

public:
	inline static int32_t get_offset_of_s_Text_3() { return static_cast<int32_t>(offsetof(GUIContent_t4210063000_StaticFields, ___s_Text_3)); }
	inline GUIContent_t4210063000 * get_s_Text_3() const { return ___s_Text_3; }
	inline GUIContent_t4210063000 ** get_address_of_s_Text_3() { return &___s_Text_3; }
	inline void set_s_Text_3(GUIContent_t4210063000 * value)
	{
		___s_Text_3 = value;
		Il2CppCodeGenWriteBarrier(&___s_Text_3, value);
	}

	inline static int32_t get_offset_of_s_Image_4() { return static_cast<int32_t>(offsetof(GUIContent_t4210063000_StaticFields, ___s_Image_4)); }
	inline GUIContent_t4210063000 * get_s_Image_4() const { return ___s_Image_4; }
	inline GUIContent_t4210063000 ** get_address_of_s_Image_4() { return &___s_Image_4; }
	inline void set_s_Image_4(GUIContent_t4210063000 * value)
	{
		___s_Image_4 = value;
		Il2CppCodeGenWriteBarrier(&___s_Image_4, value);
	}

	inline static int32_t get_offset_of_s_TextImage_5() { return static_cast<int32_t>(offsetof(GUIContent_t4210063000_StaticFields, ___s_TextImage_5)); }
	inline GUIContent_t4210063000 * get_s_TextImage_5() const { return ___s_TextImage_5; }
	inline GUIContent_t4210063000 ** get_address_of_s_TextImage_5() { return &___s_TextImage_5; }
	inline void set_s_TextImage_5(GUIContent_t4210063000 * value)
	{
		___s_TextImage_5 = value;
		Il2CppCodeGenWriteBarrier(&___s_TextImage_5, value);
	}

	inline static int32_t get_offset_of_none_6() { return static_cast<int32_t>(offsetof(GUIContent_t4210063000_StaticFields, ___none_6)); }
	inline GUIContent_t4210063000 * get_none_6() const { return ___none_6; }
	inline GUIContent_t4210063000 ** get_address_of_none_6() { return &___none_6; }
	inline void set_none_6(GUIContent_t4210063000 * value)
	{
		___none_6 = value;
		Il2CppCodeGenWriteBarrier(&___none_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.GUIContent
struct GUIContent_t4210063000_marshaled_pinvoke
{
	char* ___m_Text_0;
	Texture_t2243626319 * ___m_Image_1;
	char* ___m_Tooltip_2;
};
// Native definition for COM marshalling of UnityEngine.GUIContent
struct GUIContent_t4210063000_marshaled_com
{
	Il2CppChar* ___m_Text_0;
	Texture_t2243626319 * ___m_Image_1;
	Il2CppChar* ___m_Tooltip_2;
};
