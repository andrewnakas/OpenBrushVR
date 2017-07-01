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
// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SteamVR_Camera
struct  SteamVR_Camera_t3632348390  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform SteamVR_Camera::_head
	Transform_t3275118058 * ____head_2;
	// UnityEngine.Transform SteamVR_Camera::_ears
	Transform_t3275118058 * ____ears_3;
	// System.Boolean SteamVR_Camera::wireframe
	bool ___wireframe_4;

public:
	inline static int32_t get_offset_of__head_2() { return static_cast<int32_t>(offsetof(SteamVR_Camera_t3632348390, ____head_2)); }
	inline Transform_t3275118058 * get__head_2() const { return ____head_2; }
	inline Transform_t3275118058 ** get_address_of__head_2() { return &____head_2; }
	inline void set__head_2(Transform_t3275118058 * value)
	{
		____head_2 = value;
		Il2CppCodeGenWriteBarrier(&____head_2, value);
	}

	inline static int32_t get_offset_of__ears_3() { return static_cast<int32_t>(offsetof(SteamVR_Camera_t3632348390, ____ears_3)); }
	inline Transform_t3275118058 * get__ears_3() const { return ____ears_3; }
	inline Transform_t3275118058 ** get_address_of__ears_3() { return &____ears_3; }
	inline void set__ears_3(Transform_t3275118058 * value)
	{
		____ears_3 = value;
		Il2CppCodeGenWriteBarrier(&____ears_3, value);
	}

	inline static int32_t get_offset_of_wireframe_4() { return static_cast<int32_t>(offsetof(SteamVR_Camera_t3632348390, ___wireframe_4)); }
	inline bool get_wireframe_4() const { return ___wireframe_4; }
	inline bool* get_address_of_wireframe_4() { return &___wireframe_4; }
	inline void set_wireframe_4(bool value)
	{
		___wireframe_4 = value;
	}
};

struct SteamVR_Camera_t3632348390_StaticFields
{
public:
	// System.Collections.Hashtable SteamVR_Camera::values
	Hashtable_t909839986 * ___values_5;

public:
	inline static int32_t get_offset_of_values_5() { return static_cast<int32_t>(offsetof(SteamVR_Camera_t3632348390_StaticFields, ___values_5)); }
	inline Hashtable_t909839986 * get_values_5() const { return ___values_5; }
	inline Hashtable_t909839986 ** get_address_of_values_5() { return &___values_5; }
	inline void set_values_5(Hashtable_t909839986 * value)
	{
		___values_5 = value;
		Il2CppCodeGenWriteBarrier(&___values_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
