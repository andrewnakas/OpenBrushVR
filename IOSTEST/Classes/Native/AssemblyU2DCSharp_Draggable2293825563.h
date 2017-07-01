#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Draggable
struct  Draggable_t2293825563  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean Draggable::fixX
	bool ___fixX_2;
	// System.Boolean Draggable::fixY
	bool ___fixY_3;
	// UnityEngine.Transform Draggable::thumb
	Transform_t3275118058 * ___thumb_4;
	// System.Boolean Draggable::dragging
	bool ___dragging_5;

public:
	inline static int32_t get_offset_of_fixX_2() { return static_cast<int32_t>(offsetof(Draggable_t2293825563, ___fixX_2)); }
	inline bool get_fixX_2() const { return ___fixX_2; }
	inline bool* get_address_of_fixX_2() { return &___fixX_2; }
	inline void set_fixX_2(bool value)
	{
		___fixX_2 = value;
	}

	inline static int32_t get_offset_of_fixY_3() { return static_cast<int32_t>(offsetof(Draggable_t2293825563, ___fixY_3)); }
	inline bool get_fixY_3() const { return ___fixY_3; }
	inline bool* get_address_of_fixY_3() { return &___fixY_3; }
	inline void set_fixY_3(bool value)
	{
		___fixY_3 = value;
	}

	inline static int32_t get_offset_of_thumb_4() { return static_cast<int32_t>(offsetof(Draggable_t2293825563, ___thumb_4)); }
	inline Transform_t3275118058 * get_thumb_4() const { return ___thumb_4; }
	inline Transform_t3275118058 ** get_address_of_thumb_4() { return &___thumb_4; }
	inline void set_thumb_4(Transform_t3275118058 * value)
	{
		___thumb_4 = value;
		Il2CppCodeGenWriteBarrier(&___thumb_4, value);
	}

	inline static int32_t get_offset_of_dragging_5() { return static_cast<int32_t>(offsetof(Draggable_t2293825563, ___dragging_5)); }
	inline bool get_dragging_5() const { return ___dragging_5; }
	inline bool* get_address_of_dragging_5() { return &___dragging_5; }
	inline void set_dragging_5(bool value)
	{
		___dragging_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
