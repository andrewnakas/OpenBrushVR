#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// UnityEngine.Sprite
struct Sprite_t309593783;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.SpriteState
struct  SpriteState_t1353336012 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t309593783 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t309593783 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t309593783 * ___m_DisabledSprite_2;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t1353336012, ___m_HighlightedSprite_0)); }
	inline Sprite_t309593783 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t309593783 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t309593783 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_HighlightedSprite_0, value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t1353336012, ___m_PressedSprite_1)); }
	inline Sprite_t309593783 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t309593783 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t309593783 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_PressedSprite_1, value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t1353336012, ___m_DisabledSprite_2)); }
	inline Sprite_t309593783 * get_m_DisabledSprite_2() const { return ___m_DisabledSprite_2; }
	inline Sprite_t309593783 ** get_address_of_m_DisabledSprite_2() { return &___m_DisabledSprite_2; }
	inline void set_m_DisabledSprite_2(Sprite_t309593783 * value)
	{
		___m_DisabledSprite_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_DisabledSprite_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1353336012_marshaled_pinvoke
{
	Sprite_t309593783 * ___m_HighlightedSprite_0;
	Sprite_t309593783 * ___m_PressedSprite_1;
	Sprite_t309593783 * ___m_DisabledSprite_2;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t1353336012_marshaled_com
{
	Sprite_t309593783 * ___m_HighlightedSprite_0;
	Sprite_t309593783 * ___m_PressedSprite_1;
	Sprite_t309593783 * ___m_DisabledSprite_2;
};
