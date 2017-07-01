#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TiltWindow
struct  TiltWindow_t1839185375  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector2 TiltWindow::range
	Vector2_t2243707579  ___range_2;
	// UnityEngine.Transform TiltWindow::mTrans
	Transform_t3275118058 * ___mTrans_3;
	// UnityEngine.Quaternion TiltWindow::mStart
	Quaternion_t4030073918  ___mStart_4;
	// UnityEngine.Vector2 TiltWindow::mRot
	Vector2_t2243707579  ___mRot_5;

public:
	inline static int32_t get_offset_of_range_2() { return static_cast<int32_t>(offsetof(TiltWindow_t1839185375, ___range_2)); }
	inline Vector2_t2243707579  get_range_2() const { return ___range_2; }
	inline Vector2_t2243707579 * get_address_of_range_2() { return &___range_2; }
	inline void set_range_2(Vector2_t2243707579  value)
	{
		___range_2 = value;
	}

	inline static int32_t get_offset_of_mTrans_3() { return static_cast<int32_t>(offsetof(TiltWindow_t1839185375, ___mTrans_3)); }
	inline Transform_t3275118058 * get_mTrans_3() const { return ___mTrans_3; }
	inline Transform_t3275118058 ** get_address_of_mTrans_3() { return &___mTrans_3; }
	inline void set_mTrans_3(Transform_t3275118058 * value)
	{
		___mTrans_3 = value;
		Il2CppCodeGenWriteBarrier(&___mTrans_3, value);
	}

	inline static int32_t get_offset_of_mStart_4() { return static_cast<int32_t>(offsetof(TiltWindow_t1839185375, ___mStart_4)); }
	inline Quaternion_t4030073918  get_mStart_4() const { return ___mStart_4; }
	inline Quaternion_t4030073918 * get_address_of_mStart_4() { return &___mStart_4; }
	inline void set_mStart_4(Quaternion_t4030073918  value)
	{
		___mStart_4 = value;
	}

	inline static int32_t get_offset_of_mRot_5() { return static_cast<int32_t>(offsetof(TiltWindow_t1839185375, ___mRot_5)); }
	inline Vector2_t2243707579  get_mRot_5() const { return ___mRot_5; }
	inline Vector2_t2243707579 * get_address_of_mRot_5() { return &___mRot_5; }
	inline void set_mRot_5(Vector2_t2243707579  value)
	{
		___mRot_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
