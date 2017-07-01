#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// Valve.VR.IVRNotifications/_CreateNotification
struct _CreateNotification_t1905156422;
// Valve.VR.IVRNotifications/_RemoveNotification
struct _RemoveNotification_t3701790586;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Valve.VR.IVRNotifications
struct  IVRNotifications_t3935579733 
{
public:
	// Valve.VR.IVRNotifications/_CreateNotification Valve.VR.IVRNotifications::CreateNotification
	_CreateNotification_t1905156422 * ___CreateNotification_0;
	// Valve.VR.IVRNotifications/_RemoveNotification Valve.VR.IVRNotifications::RemoveNotification
	_RemoveNotification_t3701790586 * ___RemoveNotification_1;

public:
	inline static int32_t get_offset_of_CreateNotification_0() { return static_cast<int32_t>(offsetof(IVRNotifications_t3935579733, ___CreateNotification_0)); }
	inline _CreateNotification_t1905156422 * get_CreateNotification_0() const { return ___CreateNotification_0; }
	inline _CreateNotification_t1905156422 ** get_address_of_CreateNotification_0() { return &___CreateNotification_0; }
	inline void set_CreateNotification_0(_CreateNotification_t1905156422 * value)
	{
		___CreateNotification_0 = value;
		Il2CppCodeGenWriteBarrier(&___CreateNotification_0, value);
	}

	inline static int32_t get_offset_of_RemoveNotification_1() { return static_cast<int32_t>(offsetof(IVRNotifications_t3935579733, ___RemoveNotification_1)); }
	inline _RemoveNotification_t3701790586 * get_RemoveNotification_1() const { return ___RemoveNotification_1; }
	inline _RemoveNotification_t3701790586 ** get_address_of_RemoveNotification_1() { return &___RemoveNotification_1; }
	inline void set_RemoveNotification_1(_RemoveNotification_t3701790586 * value)
	{
		___RemoveNotification_1 = value;
		Il2CppCodeGenWriteBarrier(&___RemoveNotification_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Valve.VR.IVRNotifications
struct IVRNotifications_t3935579733_marshaled_pinvoke
{
	Il2CppMethodPointer ___CreateNotification_0;
	Il2CppMethodPointer ___RemoveNotification_1;
};
// Native definition for COM marshalling of Valve.VR.IVRNotifications
struct IVRNotifications_t3935579733_marshaled_com
{
	Il2CppMethodPointer ___CreateNotification_0;
	Il2CppMethodPointer ___RemoveNotification_1;
};
