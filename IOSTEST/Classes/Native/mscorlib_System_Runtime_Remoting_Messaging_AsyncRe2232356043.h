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
// System.Threading.WaitHandle
struct WaitHandle_t677569169;
// System.Threading.ExecutionContext
struct ExecutionContext_t1392266323;
// System.Runtime.Remoting.Messaging.MonoMethodMessage
struct MonoMethodMessage_t771543475;
// System.Runtime.Remoting.Messaging.IMessageCtrl
struct IMessageCtrl_t2081697019;
// System.Runtime.Remoting.Messaging.IMessage
struct IMessage_t3044378324;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.AsyncResult
struct  AsyncResult_t2232356043  : public Il2CppObject
{
public:
	// System.Object System.Runtime.Remoting.Messaging.AsyncResult::async_state
	Il2CppObject * ___async_state_0;
	// System.Threading.WaitHandle System.Runtime.Remoting.Messaging.AsyncResult::handle
	WaitHandle_t677569169 * ___handle_1;
	// System.Object System.Runtime.Remoting.Messaging.AsyncResult::async_delegate
	Il2CppObject * ___async_delegate_2;
	// System.IntPtr System.Runtime.Remoting.Messaging.AsyncResult::data
	IntPtr_t ___data_3;
	// System.Object System.Runtime.Remoting.Messaging.AsyncResult::object_data
	Il2CppObject * ___object_data_4;
	// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::sync_completed
	bool ___sync_completed_5;
	// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::completed
	bool ___completed_6;
	// System.Boolean System.Runtime.Remoting.Messaging.AsyncResult::endinvoke_called
	bool ___endinvoke_called_7;
	// System.Object System.Runtime.Remoting.Messaging.AsyncResult::async_callback
	Il2CppObject * ___async_callback_8;
	// System.Threading.ExecutionContext System.Runtime.Remoting.Messaging.AsyncResult::current
	ExecutionContext_t1392266323 * ___current_9;
	// System.Threading.ExecutionContext System.Runtime.Remoting.Messaging.AsyncResult::original
	ExecutionContext_t1392266323 * ___original_10;
	// System.Int32 System.Runtime.Remoting.Messaging.AsyncResult::gchandle
	int32_t ___gchandle_11;
	// System.Runtime.Remoting.Messaging.MonoMethodMessage System.Runtime.Remoting.Messaging.AsyncResult::call_message
	MonoMethodMessage_t771543475 * ___call_message_12;
	// System.Runtime.Remoting.Messaging.IMessageCtrl System.Runtime.Remoting.Messaging.AsyncResult::message_ctrl
	Il2CppObject * ___message_ctrl_13;
	// System.Runtime.Remoting.Messaging.IMessage System.Runtime.Remoting.Messaging.AsyncResult::reply_message
	Il2CppObject * ___reply_message_14;

public:
	inline static int32_t get_offset_of_async_state_0() { return static_cast<int32_t>(offsetof(AsyncResult_t2232356043, ___async_state_0)); }
	inline Il2CppObject * get_async_state_0() const { return ___async_state_0; }
	inline Il2CppObject ** get_address_of_async_state_0() { return &___async_state_0; }
	inline void set_async_state_0(Il2CppObject * value)
	{
		___async_state_0 = value;
		Il2CppCodeGenWriteBarrier(&___async_state_0, value);
	}

	inline static int32_t get_offset_of_handle_1() { return static_cast<int32_t>(offsetof(AsyncResult_t2232356043, ___handle_1)); }
	inline WaitHandle_t677569169 * get_handle_1() const { return ___handle_1; }
	inline WaitHandle_t677569169 ** get_address_of_handle_1() { return &___handle_1; }
	inline void set_handle_1(WaitHandle_t677569169 * value)
	{
		___handle_1 = value;
		Il2CppCodeGenWriteBarrier(&___handle_1, value);
	}

	inline static int32_t get_offset_of_async_delegate_2() { return static_cast<int32_t>(offsetof(AsyncResult_t2232356043, ___async_delegate_2)); }
	inline Il2CppObject * get_async_delegate_2() const { return ___async_delegate_2; }
	inline Il2CppObject ** get_address_of_async_delegate_2() { return &___async_delegate_2; }
	inline void set_async_delegate_2(Il2CppObject * value)
	{
		___async_delegate_2 = value;
		Il2CppCodeGenWriteBarrier(&___async_delegate_2, value);
	}

	inline static int32_t get_offset_of_data_3() { return static_cast<int32_t>(offsetof(AsyncResult_t2232356043, ___data_3)); }
	inline IntPtr_t get_data_3() const { return ___data_3; }
	inline IntPtr_t* get_address_of_data_3() { return &___data_3; }
	inline void set_data_3(IntPtr_t value)
	{
		___data_3 = value;
	}

	inline static int32_t get_offset_of_object_data_4() { return static_cast<int32_t>(offsetof(AsyncResult_t2232356043, ___object_data_4)); }
	inline Il2CppObject * get_object_data_4() const { return ___object_data_4; }
	inline Il2CppObject ** get_address_of_object_data_4() { return &___object_data_4; }
	inline void set_object_data_4(Il2CppObject * value)
	{
		___object_data_4 = value;
		Il2CppCodeGenWriteBarrier(&___object_data_4, value);
	}

	inline static int32_t get_offset_of_sync_completed_5() { return static_cast<int32_t>(offsetof(AsyncResult_t2232356043, ___sync_completed_5)); }
	inline bool get_sync_completed_5() const { return ___sync_completed_5; }
	inline bool* get_address_of_sync_completed_5() { return &___sync_completed_5; }
	inline void set_sync_completed_5(bool value)
	{
		___sync_completed_5 = value;
	}

	inline static int32_t get_offset_of_completed_6() { return static_cast<int32_t>(offsetof(AsyncResult_t2232356043, ___completed_6)); }
	inline bool get_completed_6() const { return ___completed_6; }
	inline bool* get_address_of_completed_6() { return &___completed_6; }
	inline void set_completed_6(bool value)
	{
		___completed_6 = value;
	}

	inline static int32_t get_offset_of_endinvoke_called_7() { return static_cast<int32_t>(offsetof(AsyncResult_t2232356043, ___endinvoke_called_7)); }
	inline bool get_endinvoke_called_7() const { return ___endinvoke_called_7; }
	inline bool* get_address_of_endinvoke_called_7() { return &___endinvoke_called_7; }
	inline void set_endinvoke_called_7(bool value)
	{
		___endinvoke_called_7 = value;
	}

	inline static int32_t get_offset_of_async_callback_8() { return static_cast<int32_t>(offsetof(AsyncResult_t2232356043, ___async_callback_8)); }
	inline Il2CppObject * get_async_callback_8() const { return ___async_callback_8; }
	inline Il2CppObject ** get_address_of_async_callback_8() { return &___async_callback_8; }
	inline void set_async_callback_8(Il2CppObject * value)
	{
		___async_callback_8 = value;
		Il2CppCodeGenWriteBarrier(&___async_callback_8, value);
	}

	inline static int32_t get_offset_of_current_9() { return static_cast<int32_t>(offsetof(AsyncResult_t2232356043, ___current_9)); }
	inline ExecutionContext_t1392266323 * get_current_9() const { return ___current_9; }
	inline ExecutionContext_t1392266323 ** get_address_of_current_9() { return &___current_9; }
	inline void set_current_9(ExecutionContext_t1392266323 * value)
	{
		___current_9 = value;
		Il2CppCodeGenWriteBarrier(&___current_9, value);
	}

	inline static int32_t get_offset_of_original_10() { return static_cast<int32_t>(offsetof(AsyncResult_t2232356043, ___original_10)); }
	inline ExecutionContext_t1392266323 * get_original_10() const { return ___original_10; }
	inline ExecutionContext_t1392266323 ** get_address_of_original_10() { return &___original_10; }
	inline void set_original_10(ExecutionContext_t1392266323 * value)
	{
		___original_10 = value;
		Il2CppCodeGenWriteBarrier(&___original_10, value);
	}

	inline static int32_t get_offset_of_gchandle_11() { return static_cast<int32_t>(offsetof(AsyncResult_t2232356043, ___gchandle_11)); }
	inline int32_t get_gchandle_11() const { return ___gchandle_11; }
	inline int32_t* get_address_of_gchandle_11() { return &___gchandle_11; }
	inline void set_gchandle_11(int32_t value)
	{
		___gchandle_11 = value;
	}

	inline static int32_t get_offset_of_call_message_12() { return static_cast<int32_t>(offsetof(AsyncResult_t2232356043, ___call_message_12)); }
	inline MonoMethodMessage_t771543475 * get_call_message_12() const { return ___call_message_12; }
	inline MonoMethodMessage_t771543475 ** get_address_of_call_message_12() { return &___call_message_12; }
	inline void set_call_message_12(MonoMethodMessage_t771543475 * value)
	{
		___call_message_12 = value;
		Il2CppCodeGenWriteBarrier(&___call_message_12, value);
	}

	inline static int32_t get_offset_of_message_ctrl_13() { return static_cast<int32_t>(offsetof(AsyncResult_t2232356043, ___message_ctrl_13)); }
	inline Il2CppObject * get_message_ctrl_13() const { return ___message_ctrl_13; }
	inline Il2CppObject ** get_address_of_message_ctrl_13() { return &___message_ctrl_13; }
	inline void set_message_ctrl_13(Il2CppObject * value)
	{
		___message_ctrl_13 = value;
		Il2CppCodeGenWriteBarrier(&___message_ctrl_13, value);
	}

	inline static int32_t get_offset_of_reply_message_14() { return static_cast<int32_t>(offsetof(AsyncResult_t2232356043, ___reply_message_14)); }
	inline Il2CppObject * get_reply_message_14() const { return ___reply_message_14; }
	inline Il2CppObject ** get_address_of_reply_message_14() { return &___reply_message_14; }
	inline void set_reply_message_14(Il2CppObject * value)
	{
		___reply_message_14 = value;
		Il2CppCodeGenWriteBarrier(&___reply_message_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
