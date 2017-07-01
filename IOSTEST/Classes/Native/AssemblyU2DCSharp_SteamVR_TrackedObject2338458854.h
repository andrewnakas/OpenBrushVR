#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_SteamVR_TrackedObject_EIndex129448938.h"

// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SteamVR_TrackedObject
struct  SteamVR_TrackedObject_t2338458854  : public MonoBehaviour_t1158329972
{
public:
	// SteamVR_TrackedObject/EIndex SteamVR_TrackedObject::index
	int32_t ___index_2;
	// UnityEngine.Transform SteamVR_TrackedObject::origin
	Transform_t3275118058 * ___origin_3;
	// System.Boolean SteamVR_TrackedObject::isValid
	bool ___isValid_4;

public:
	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(SteamVR_TrackedObject_t2338458854, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_origin_3() { return static_cast<int32_t>(offsetof(SteamVR_TrackedObject_t2338458854, ___origin_3)); }
	inline Transform_t3275118058 * get_origin_3() const { return ___origin_3; }
	inline Transform_t3275118058 ** get_address_of_origin_3() { return &___origin_3; }
	inline void set_origin_3(Transform_t3275118058 * value)
	{
		___origin_3 = value;
		Il2CppCodeGenWriteBarrier(&___origin_3, value);
	}

	inline static int32_t get_offset_of_isValid_4() { return static_cast<int32_t>(offsetof(SteamVR_TrackedObject_t2338458854, ___isValid_4)); }
	inline bool get_isValid_4() const { return ___isValid_4; }
	inline bool* get_address_of_isValid_4() { return &___isValid_4; }
	inline void set_isValid_4(bool value)
	{
		___isValid_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
