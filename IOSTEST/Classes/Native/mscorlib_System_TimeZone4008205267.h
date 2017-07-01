#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.TimeZone
struct TimeZone_t4008205267;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeZone
struct  TimeZone_t4008205267  : public Il2CppObject
{
public:

public:
};

struct TimeZone_t4008205267_StaticFields
{
public:
	// System.TimeZone System.TimeZone::currentTimeZone
	TimeZone_t4008205267 * ___currentTimeZone_0;
	// System.Object System.TimeZone::tz_lock
	Il2CppObject * ___tz_lock_1;
	// System.Int64 System.TimeZone::timezone_check
	int64_t ___timezone_check_2;

public:
	inline static int32_t get_offset_of_currentTimeZone_0() { return static_cast<int32_t>(offsetof(TimeZone_t4008205267_StaticFields, ___currentTimeZone_0)); }
	inline TimeZone_t4008205267 * get_currentTimeZone_0() const { return ___currentTimeZone_0; }
	inline TimeZone_t4008205267 ** get_address_of_currentTimeZone_0() { return &___currentTimeZone_0; }
	inline void set_currentTimeZone_0(TimeZone_t4008205267 * value)
	{
		___currentTimeZone_0 = value;
		Il2CppCodeGenWriteBarrier(&___currentTimeZone_0, value);
	}

	inline static int32_t get_offset_of_tz_lock_1() { return static_cast<int32_t>(offsetof(TimeZone_t4008205267_StaticFields, ___tz_lock_1)); }
	inline Il2CppObject * get_tz_lock_1() const { return ___tz_lock_1; }
	inline Il2CppObject ** get_address_of_tz_lock_1() { return &___tz_lock_1; }
	inline void set_tz_lock_1(Il2CppObject * value)
	{
		___tz_lock_1 = value;
		Il2CppCodeGenWriteBarrier(&___tz_lock_1, value);
	}

	inline static int32_t get_offset_of_timezone_check_2() { return static_cast<int32_t>(offsetof(TimeZone_t4008205267_StaticFields, ___timezone_check_2)); }
	inline int64_t get_timezone_check_2() const { return ___timezone_check_2; }
	inline int64_t* get_address_of_timezone_check_2() { return &___timezone_check_2; }
	inline void set_timezone_check_2(int64_t value)
	{
		___timezone_check_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
