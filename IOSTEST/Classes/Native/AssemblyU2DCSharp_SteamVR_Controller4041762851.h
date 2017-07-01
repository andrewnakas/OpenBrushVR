#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// SteamVR_Controller/Device[]
struct DeviceU5BU5D_t2224228657;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SteamVR_Controller
struct  SteamVR_Controller_t4041762851  : public Il2CppObject
{
public:

public:
};

struct SteamVR_Controller_t4041762851_StaticFields
{
public:
	// SteamVR_Controller/Device[] SteamVR_Controller::devices
	DeviceU5BU5D_t2224228657* ___devices_0;

public:
	inline static int32_t get_offset_of_devices_0() { return static_cast<int32_t>(offsetof(SteamVR_Controller_t4041762851_StaticFields, ___devices_0)); }
	inline DeviceU5BU5D_t2224228657* get_devices_0() const { return ___devices_0; }
	inline DeviceU5BU5D_t2224228657** get_address_of_devices_0() { return &___devices_0; }
	inline void set_devices_0(DeviceU5BU5D_t2224228657* value)
	{
		___devices_0 = value;
		Il2CppCodeGenWriteBarrier(&___devices_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
