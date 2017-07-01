#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// UnityEngine.ILogger
struct ILogger_t1425954571;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Debug
struct  Debug_t1368543263  : public Il2CppObject
{
public:

public:
};

struct Debug_t1368543263_StaticFields
{
public:
	// UnityEngine.ILogger UnityEngine.Debug::s_Logger
	Il2CppObject * ___s_Logger_0;

public:
	inline static int32_t get_offset_of_s_Logger_0() { return static_cast<int32_t>(offsetof(Debug_t1368543263_StaticFields, ___s_Logger_0)); }
	inline Il2CppObject * get_s_Logger_0() const { return ___s_Logger_0; }
	inline Il2CppObject ** get_address_of_s_Logger_0() { return &___s_Logger_0; }
	inline void set_s_Logger_0(Il2CppObject * value)
	{
		___s_Logger_0 = value;
		Il2CppCodeGenWriteBarrier(&___s_Logger_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
