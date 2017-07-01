#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UnityEngine.RemoteSettings/UpdatedEventHandler
struct UpdatedEventHandler_t3033456180;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RemoteSettings
struct  RemoteSettings_t392466225  : public Il2CppObject
{
public:

public:
};

struct RemoteSettings_t392466225_StaticFields
{
public:
	// UnityEngine.RemoteSettings/UpdatedEventHandler UnityEngine.RemoteSettings::Updated
	UpdatedEventHandler_t3033456180 * ___Updated_0;

public:
	inline static int32_t get_offset_of_Updated_0() { return static_cast<int32_t>(offsetof(RemoteSettings_t392466225_StaticFields, ___Updated_0)); }
	inline UpdatedEventHandler_t3033456180 * get_Updated_0() const { return ___Updated_0; }
	inline UpdatedEventHandler_t3033456180 ** get_address_of_Updated_0() { return &___Updated_0; }
	inline void set_Updated_0(UpdatedEventHandler_t3033456180 * value)
	{
		___Updated_0 = value;
		Il2CppCodeGenWriteBarrier(&___Updated_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
