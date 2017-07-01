#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Valve.VR.VREvent_Notification_t
struct  VREvent_Notification_t_t2249359203 
{
public:
	// System.UInt64 Valve.VR.VREvent_Notification_t::ulUserValue
	uint64_t ___ulUserValue_0;
	// System.UInt32 Valve.VR.VREvent_Notification_t::notificationId
	uint32_t ___notificationId_1;

public:
	inline static int32_t get_offset_of_ulUserValue_0() { return static_cast<int32_t>(offsetof(VREvent_Notification_t_t2249359203, ___ulUserValue_0)); }
	inline uint64_t get_ulUserValue_0() const { return ___ulUserValue_0; }
	inline uint64_t* get_address_of_ulUserValue_0() { return &___ulUserValue_0; }
	inline void set_ulUserValue_0(uint64_t value)
	{
		___ulUserValue_0 = value;
	}

	inline static int32_t get_offset_of_notificationId_1() { return static_cast<int32_t>(offsetof(VREvent_Notification_t_t2249359203, ___notificationId_1)); }
	inline uint32_t get_notificationId_1() const { return ___notificationId_1; }
	inline uint32_t* get_address_of_notificationId_1() { return &___notificationId_1; }
	inline void set_notificationId_1(uint32_t value)
	{
		___notificationId_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
