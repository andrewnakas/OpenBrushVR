#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Light
struct Light_t494725636;
// UnityEngine.XR.iOS.UnityARSessionNativeInterface
struct UnityARSessionNativeInterface_t1130867170;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARAmbient
struct  UnityARAmbient_t680084560  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Light UnityEngine.XR.iOS.UnityARAmbient::l
	Light_t494725636 * ___l_2;
	// UnityEngine.XR.iOS.UnityARSessionNativeInterface UnityEngine.XR.iOS.UnityARAmbient::m_Session
	UnityARSessionNativeInterface_t1130867170 * ___m_Session_3;

public:
	inline static int32_t get_offset_of_l_2() { return static_cast<int32_t>(offsetof(UnityARAmbient_t680084560, ___l_2)); }
	inline Light_t494725636 * get_l_2() const { return ___l_2; }
	inline Light_t494725636 ** get_address_of_l_2() { return &___l_2; }
	inline void set_l_2(Light_t494725636 * value)
	{
		___l_2 = value;
		Il2CppCodeGenWriteBarrier(&___l_2, value);
	}

	inline static int32_t get_offset_of_m_Session_3() { return static_cast<int32_t>(offsetof(UnityARAmbient_t680084560, ___m_Session_3)); }
	inline UnityARSessionNativeInterface_t1130867170 * get_m_Session_3() const { return ___m_Session_3; }
	inline UnityARSessionNativeInterface_t1130867170 ** get_address_of_m_Session_3() { return &___m_Session_3; }
	inline void set_m_Session_3(UnityARSessionNativeInterface_t1130867170 * value)
	{
		___m_Session_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_Session_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
