#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UI_UnityEngine_EventSystems_BaseEventD2681005625.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_MoveDirect1406276862.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.AxisEventData
struct  AxisEventData_t1524870173  : public BaseEventData_t2681005625
{
public:
	// UnityEngine.Vector2 UnityEngine.EventSystems.AxisEventData::<moveVector>k__BackingField
	Vector2_t2243707579  ___U3CmoveVectorU3Ek__BackingField_2;
	// UnityEngine.EventSystems.MoveDirection UnityEngine.EventSystems.AxisEventData::<moveDir>k__BackingField
	int32_t ___U3CmoveDirU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CmoveVectorU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AxisEventData_t1524870173, ___U3CmoveVectorU3Ek__BackingField_2)); }
	inline Vector2_t2243707579  get_U3CmoveVectorU3Ek__BackingField_2() const { return ___U3CmoveVectorU3Ek__BackingField_2; }
	inline Vector2_t2243707579 * get_address_of_U3CmoveVectorU3Ek__BackingField_2() { return &___U3CmoveVectorU3Ek__BackingField_2; }
	inline void set_U3CmoveVectorU3Ek__BackingField_2(Vector2_t2243707579  value)
	{
		___U3CmoveVectorU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CmoveDirU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AxisEventData_t1524870173, ___U3CmoveDirU3Ek__BackingField_3)); }
	inline int32_t get_U3CmoveDirU3Ek__BackingField_3() const { return ___U3CmoveDirU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CmoveDirU3Ek__BackingField_3() { return &___U3CmoveDirU3Ek__BackingField_3; }
	inline void set_U3CmoveDirU3Ek__BackingField_3(int32_t value)
	{
		___U3CmoveDirU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
