#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_Object1021602117.h"

// System.Action`1<UnityEngine.Font>
struct Action_1_t4041298073;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t1272078033;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Font
struct  Font_t4239498691  : public Object_t1021602117
{
public:
	// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::m_FontTextureRebuildCallback
	FontTextureRebuildCallback_t1272078033 * ___m_FontTextureRebuildCallback_3;

public:
	inline static int32_t get_offset_of_m_FontTextureRebuildCallback_3() { return static_cast<int32_t>(offsetof(Font_t4239498691, ___m_FontTextureRebuildCallback_3)); }
	inline FontTextureRebuildCallback_t1272078033 * get_m_FontTextureRebuildCallback_3() const { return ___m_FontTextureRebuildCallback_3; }
	inline FontTextureRebuildCallback_t1272078033 ** get_address_of_m_FontTextureRebuildCallback_3() { return &___m_FontTextureRebuildCallback_3; }
	inline void set_m_FontTextureRebuildCallback_3(FontTextureRebuildCallback_t1272078033 * value)
	{
		___m_FontTextureRebuildCallback_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_FontTextureRebuildCallback_3, value);
	}
};

struct Font_t4239498691_StaticFields
{
public:
	// System.Action`1<UnityEngine.Font> UnityEngine.Font::textureRebuilt
	Action_1_t4041298073 * ___textureRebuilt_2;

public:
	inline static int32_t get_offset_of_textureRebuilt_2() { return static_cast<int32_t>(offsetof(Font_t4239498691_StaticFields, ___textureRebuilt_2)); }
	inline Action_1_t4041298073 * get_textureRebuilt_2() const { return ___textureRebuilt_2; }
	inline Action_1_t4041298073 ** get_address_of_textureRebuilt_2() { return &___textureRebuilt_2; }
	inline void set_textureRebuilt_2(Action_1_t4041298073 * value)
	{
		___textureRebuilt_2 = value;
		Il2CppCodeGenWriteBarrier(&___textureRebuilt_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
