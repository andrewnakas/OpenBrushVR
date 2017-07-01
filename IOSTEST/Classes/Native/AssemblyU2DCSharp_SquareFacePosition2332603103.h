#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SquareFacePosition
struct  SquareFacePosition_t2332603103  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector3 SquareFacePosition::prevPos
	Vector3_t2243707580  ___prevPos_2;
	// System.Int32 SquareFacePosition::count
	int32_t ___count_3;

public:
	inline static int32_t get_offset_of_prevPos_2() { return static_cast<int32_t>(offsetof(SquareFacePosition_t2332603103, ___prevPos_2)); }
	inline Vector3_t2243707580  get_prevPos_2() const { return ___prevPos_2; }
	inline Vector3_t2243707580 * get_address_of_prevPos_2() { return &___prevPos_2; }
	inline void set_prevPos_2(Vector3_t2243707580  value)
	{
		___prevPos_2 = value;
	}

	inline static int32_t get_offset_of_count_3() { return static_cast<int32_t>(offsetof(SquareFacePosition_t2332603103, ___count_3)); }
	inline int32_t get_count_3() const { return ___count_3; }
	inline int32_t* get_address_of_count_3() { return &___count_3; }
	inline void set_count_3(int32_t value)
	{
		___count_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
