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

// UnityEngine.GUIStyle
struct GUIStyle_t1799908754;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
struct GUIStyle_t1799908754_marshaled_pinvoke;
struct GUIStyle_t1799908754_marshaled_com;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GUIStyleState
struct  GUIStyleState_t3801000545  : public Il2CppObject
{
public:
	// System.IntPtr UnityEngine.GUIStyleState::m_Ptr
	IntPtr_t ___m_Ptr_0;
	// UnityEngine.GUIStyle UnityEngine.GUIStyleState::m_SourceStyle
	GUIStyle_t1799908754 * ___m_SourceStyle_1;
	// UnityEngine.Texture2D UnityEngine.GUIStyleState::m_Background
	Texture2D_t3542995729 * ___m_Background_2;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(GUIStyleState_t3801000545, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceStyle_1() { return static_cast<int32_t>(offsetof(GUIStyleState_t3801000545, ___m_SourceStyle_1)); }
	inline GUIStyle_t1799908754 * get_m_SourceStyle_1() const { return ___m_SourceStyle_1; }
	inline GUIStyle_t1799908754 ** get_address_of_m_SourceStyle_1() { return &___m_SourceStyle_1; }
	inline void set_m_SourceStyle_1(GUIStyle_t1799908754 * value)
	{
		___m_SourceStyle_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_SourceStyle_1, value);
	}

	inline static int32_t get_offset_of_m_Background_2() { return static_cast<int32_t>(offsetof(GUIStyleState_t3801000545, ___m_Background_2)); }
	inline Texture2D_t3542995729 * get_m_Background_2() const { return ___m_Background_2; }
	inline Texture2D_t3542995729 ** get_address_of_m_Background_2() { return &___m_Background_2; }
	inline void set_m_Background_2(Texture2D_t3542995729 * value)
	{
		___m_Background_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Background_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t3801000545_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t1799908754_marshaled_pinvoke* ___m_SourceStyle_1;
	Texture2D_t3542995729 * ___m_Background_2;
};
// Native definition for COM marshalling of UnityEngine.GUIStyleState
struct GUIStyleState_t3801000545_marshaled_com
{
	intptr_t ___m_Ptr_0;
	GUIStyle_t1799908754_marshaled_com* ___m_SourceStyle_1;
	Texture2D_t3542995729 * ___m_Background_2;
};
