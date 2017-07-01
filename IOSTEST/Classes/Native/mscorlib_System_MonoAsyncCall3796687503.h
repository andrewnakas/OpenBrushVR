#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"

// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoAsyncCall
struct  MonoAsyncCall_t3796687503  : public Il2CppObject
{
public:
	// System.Object System.MonoAsyncCall::msg
	Il2CppObject * ___msg_0;
	// System.IntPtr System.MonoAsyncCall::cb_method
	IntPtr_t ___cb_method_1;
	// System.Object System.MonoAsyncCall::cb_target
	Il2CppObject * ___cb_target_2;
	// System.Object System.MonoAsyncCall::state
	Il2CppObject * ___state_3;
	// System.Object System.MonoAsyncCall::res
	Il2CppObject * ___res_4;
	// System.Object System.MonoAsyncCall::out_args
	Il2CppObject * ___out_args_5;
	// System.Int64 System.MonoAsyncCall::wait_event
	int64_t ___wait_event_6;

public:
	inline static int32_t get_offset_of_msg_0() { return static_cast<int32_t>(offsetof(MonoAsyncCall_t3796687503, ___msg_0)); }
	inline Il2CppObject * get_msg_0() const { return ___msg_0; }
	inline Il2CppObject ** get_address_of_msg_0() { return &___msg_0; }
	inline void set_msg_0(Il2CppObject * value)
	{
		___msg_0 = value;
		Il2CppCodeGenWriteBarrier(&___msg_0, value);
	}

	inline static int32_t get_offset_of_cb_method_1() { return static_cast<int32_t>(offsetof(MonoAsyncCall_t3796687503, ___cb_method_1)); }
	inline IntPtr_t get_cb_method_1() const { return ___cb_method_1; }
	inline IntPtr_t* get_address_of_cb_method_1() { return &___cb_method_1; }
	inline void set_cb_method_1(IntPtr_t value)
	{
		___cb_method_1 = value;
	}

	inline static int32_t get_offset_of_cb_target_2() { return static_cast<int32_t>(offsetof(MonoAsyncCall_t3796687503, ___cb_target_2)); }
	inline Il2CppObject * get_cb_target_2() const { return ___cb_target_2; }
	inline Il2CppObject ** get_address_of_cb_target_2() { return &___cb_target_2; }
	inline void set_cb_target_2(Il2CppObject * value)
	{
		___cb_target_2 = value;
		Il2CppCodeGenWriteBarrier(&___cb_target_2, value);
	}

	inline static int32_t get_offset_of_state_3() { return static_cast<int32_t>(offsetof(MonoAsyncCall_t3796687503, ___state_3)); }
	inline Il2CppObject * get_state_3() const { return ___state_3; }
	inline Il2CppObject ** get_address_of_state_3() { return &___state_3; }
	inline void set_state_3(Il2CppObject * value)
	{
		___state_3 = value;
		Il2CppCodeGenWriteBarrier(&___state_3, value);
	}

	inline static int32_t get_offset_of_res_4() { return static_cast<int32_t>(offsetof(MonoAsyncCall_t3796687503, ___res_4)); }
	inline Il2CppObject * get_res_4() const { return ___res_4; }
	inline Il2CppObject ** get_address_of_res_4() { return &___res_4; }
	inline void set_res_4(Il2CppObject * value)
	{
		___res_4 = value;
		Il2CppCodeGenWriteBarrier(&___res_4, value);
	}

	inline static int32_t get_offset_of_out_args_5() { return static_cast<int32_t>(offsetof(MonoAsyncCall_t3796687503, ___out_args_5)); }
	inline Il2CppObject * get_out_args_5() const { return ___out_args_5; }
	inline Il2CppObject ** get_address_of_out_args_5() { return &___out_args_5; }
	inline void set_out_args_5(Il2CppObject * value)
	{
		___out_args_5 = value;
		Il2CppCodeGenWriteBarrier(&___out_args_5, value);
	}

	inline static int32_t get_offset_of_wait_event_6() { return static_cast<int32_t>(offsetof(MonoAsyncCall_t3796687503, ___wait_event_6)); }
	inline int64_t get_wait_event_6() const { return ___wait_event_6; }
	inline int64_t* get_address_of_wait_event_6() { return &___wait_event_6; }
	inline void set_wait_event_6(int64_t value)
	{
		___wait_event_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
