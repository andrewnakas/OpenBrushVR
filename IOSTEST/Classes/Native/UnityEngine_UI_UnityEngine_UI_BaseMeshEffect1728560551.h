#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviou3960014691.h"

// UnityEngine.UI.Graphic
struct Graphic_t2426225576;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.BaseMeshEffect
struct  BaseMeshEffect_t1728560551  : public UIBehaviour_t3960014691
{
public:
	// UnityEngine.UI.Graphic UnityEngine.UI.BaseMeshEffect::m_Graphic
	Graphic_t2426225576 * ___m_Graphic_2;

public:
	inline static int32_t get_offset_of_m_Graphic_2() { return static_cast<int32_t>(offsetof(BaseMeshEffect_t1728560551, ___m_Graphic_2)); }
	inline Graphic_t2426225576 * get_m_Graphic_2() const { return ___m_Graphic_2; }
	inline Graphic_t2426225576 ** get_address_of_m_Graphic_2() { return &___m_Graphic_2; }
	inline void set_m_Graphic_2(Graphic_t2426225576 * value)
	{
		___m_Graphic_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Graphic_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
