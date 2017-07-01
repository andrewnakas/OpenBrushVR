#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Threading.Timer
struct Timer_t791717973;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Lifetime.LeaseManager
struct  LeaseManager_t1025868639  : public Il2CppObject
{
public:
	// System.Collections.ArrayList System.Runtime.Remoting.Lifetime.LeaseManager::_objects
	ArrayList_t4252133567 * ____objects_0;
	// System.Threading.Timer System.Runtime.Remoting.Lifetime.LeaseManager::_timer
	Timer_t791717973 * ____timer_1;

public:
	inline static int32_t get_offset_of__objects_0() { return static_cast<int32_t>(offsetof(LeaseManager_t1025868639, ____objects_0)); }
	inline ArrayList_t4252133567 * get__objects_0() const { return ____objects_0; }
	inline ArrayList_t4252133567 ** get_address_of__objects_0() { return &____objects_0; }
	inline void set__objects_0(ArrayList_t4252133567 * value)
	{
		____objects_0 = value;
		Il2CppCodeGenWriteBarrier(&____objects_0, value);
	}

	inline static int32_t get_offset_of__timer_1() { return static_cast<int32_t>(offsetof(LeaseManager_t1025868639, ____timer_1)); }
	inline Timer_t791717973 * get__timer_1() const { return ____timer_1; }
	inline Timer_t791717973 ** get_address_of__timer_1() { return &____timer_1; }
	inline void set__timer_1(Timer_t791717973 * value)
	{
		____timer_1 = value;
		Il2CppCodeGenWriteBarrier(&____timer_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
