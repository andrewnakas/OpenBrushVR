#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.OperatingSystem
struct OperatingSystem_t290860502;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Environment
struct  Environment_t3662374671  : public Il2CppObject
{
public:

public:
};

struct Environment_t3662374671_StaticFields
{
public:
	// System.OperatingSystem System.Environment::os
	OperatingSystem_t290860502 * ___os_1;

public:
	inline static int32_t get_offset_of_os_1() { return static_cast<int32_t>(offsetof(Environment_t3662374671_StaticFields, ___os_1)); }
	inline OperatingSystem_t290860502 * get_os_1() const { return ___os_1; }
	inline OperatingSystem_t290860502 ** get_address_of_os_1() { return &___os_1; }
	inline void set_os_1(OperatingSystem_t290860502 * value)
	{
		___os_1 = value;
		Il2CppCodeGenWriteBarrier(&___os_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
