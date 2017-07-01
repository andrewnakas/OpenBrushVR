#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_MarshalByRefObject1285298191.h"

// System.Threading.Timer/Scheduler
struct Scheduler_t697594;
// System.Threading.TimerCallback
struct TimerCallback_t1684927372;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.Timer
struct  Timer_t791717973  : public MarshalByRefObject_t1285298191
{
public:
	// System.Threading.TimerCallback System.Threading.Timer::callback
	TimerCallback_t1684927372 * ___callback_2;
	// System.Object System.Threading.Timer::state
	Il2CppObject * ___state_3;
	// System.Int64 System.Threading.Timer::due_time_ms
	int64_t ___due_time_ms_4;
	// System.Int64 System.Threading.Timer::period_ms
	int64_t ___period_ms_5;
	// System.Int64 System.Threading.Timer::next_run
	int64_t ___next_run_6;
	// System.Boolean System.Threading.Timer::disposed
	bool ___disposed_7;

public:
	inline static int32_t get_offset_of_callback_2() { return static_cast<int32_t>(offsetof(Timer_t791717973, ___callback_2)); }
	inline TimerCallback_t1684927372 * get_callback_2() const { return ___callback_2; }
	inline TimerCallback_t1684927372 ** get_address_of_callback_2() { return &___callback_2; }
	inline void set_callback_2(TimerCallback_t1684927372 * value)
	{
		___callback_2 = value;
		Il2CppCodeGenWriteBarrier(&___callback_2, value);
	}

	inline static int32_t get_offset_of_state_3() { return static_cast<int32_t>(offsetof(Timer_t791717973, ___state_3)); }
	inline Il2CppObject * get_state_3() const { return ___state_3; }
	inline Il2CppObject ** get_address_of_state_3() { return &___state_3; }
	inline void set_state_3(Il2CppObject * value)
	{
		___state_3 = value;
		Il2CppCodeGenWriteBarrier(&___state_3, value);
	}

	inline static int32_t get_offset_of_due_time_ms_4() { return static_cast<int32_t>(offsetof(Timer_t791717973, ___due_time_ms_4)); }
	inline int64_t get_due_time_ms_4() const { return ___due_time_ms_4; }
	inline int64_t* get_address_of_due_time_ms_4() { return &___due_time_ms_4; }
	inline void set_due_time_ms_4(int64_t value)
	{
		___due_time_ms_4 = value;
	}

	inline static int32_t get_offset_of_period_ms_5() { return static_cast<int32_t>(offsetof(Timer_t791717973, ___period_ms_5)); }
	inline int64_t get_period_ms_5() const { return ___period_ms_5; }
	inline int64_t* get_address_of_period_ms_5() { return &___period_ms_5; }
	inline void set_period_ms_5(int64_t value)
	{
		___period_ms_5 = value;
	}

	inline static int32_t get_offset_of_next_run_6() { return static_cast<int32_t>(offsetof(Timer_t791717973, ___next_run_6)); }
	inline int64_t get_next_run_6() const { return ___next_run_6; }
	inline int64_t* get_address_of_next_run_6() { return &___next_run_6; }
	inline void set_next_run_6(int64_t value)
	{
		___next_run_6 = value;
	}

	inline static int32_t get_offset_of_disposed_7() { return static_cast<int32_t>(offsetof(Timer_t791717973, ___disposed_7)); }
	inline bool get_disposed_7() const { return ___disposed_7; }
	inline bool* get_address_of_disposed_7() { return &___disposed_7; }
	inline void set_disposed_7(bool value)
	{
		___disposed_7 = value;
	}
};

struct Timer_t791717973_StaticFields
{
public:
	// System.Threading.Timer/Scheduler System.Threading.Timer::scheduler
	Scheduler_t697594 * ___scheduler_1;

public:
	inline static int32_t get_offset_of_scheduler_1() { return static_cast<int32_t>(offsetof(Timer_t791717973_StaticFields, ___scheduler_1)); }
	inline Scheduler_t697594 * get_scheduler_1() const { return ___scheduler_1; }
	inline Scheduler_t697594 ** get_address_of_scheduler_1() { return &___scheduler_1; }
	inline void set_scheduler_1(Scheduler_t697594 * value)
	{
		___scheduler_1 = value;
		Il2CppCodeGenWriteBarrier(&___scheduler_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
