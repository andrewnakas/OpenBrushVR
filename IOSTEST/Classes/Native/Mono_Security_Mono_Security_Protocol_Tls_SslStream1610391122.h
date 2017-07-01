#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Object
struct Il2CppObject;
// System.AsyncCallback
struct AsyncCallback_t163412349;
// System.Exception
struct Exception_t1927440687;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t926074657;
// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult
struct  InternalAsyncResult_t1610391122  : public Il2CppObject
{
public:
	// System.Object Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::locker
	Il2CppObject * ___locker_0;
	// System.AsyncCallback Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::_userCallback
	AsyncCallback_t163412349 * ____userCallback_1;
	// System.Object Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::_userState
	Il2CppObject * ____userState_2;
	// System.Exception Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::_asyncException
	Exception_t1927440687 * ____asyncException_3;
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::handle
	ManualResetEvent_t926074657 * ___handle_4;
	// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::completed
	bool ___completed_5;
	// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::_bytesRead
	int32_t ____bytesRead_6;
	// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::_fromWrite
	bool ____fromWrite_7;
	// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::_proceedAfterHandshake
	bool ____proceedAfterHandshake_8;
	// System.Byte[] Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::_buffer
	ByteU5BU5D_t3397334013* ____buffer_9;
	// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::_offset
	int32_t ____offset_10;
	// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::_count
	int32_t ____count_11;

public:
	inline static int32_t get_offset_of_locker_0() { return static_cast<int32_t>(offsetof(InternalAsyncResult_t1610391122, ___locker_0)); }
	inline Il2CppObject * get_locker_0() const { return ___locker_0; }
	inline Il2CppObject ** get_address_of_locker_0() { return &___locker_0; }
	inline void set_locker_0(Il2CppObject * value)
	{
		___locker_0 = value;
		Il2CppCodeGenWriteBarrier(&___locker_0, value);
	}

	inline static int32_t get_offset_of__userCallback_1() { return static_cast<int32_t>(offsetof(InternalAsyncResult_t1610391122, ____userCallback_1)); }
	inline AsyncCallback_t163412349 * get__userCallback_1() const { return ____userCallback_1; }
	inline AsyncCallback_t163412349 ** get_address_of__userCallback_1() { return &____userCallback_1; }
	inline void set__userCallback_1(AsyncCallback_t163412349 * value)
	{
		____userCallback_1 = value;
		Il2CppCodeGenWriteBarrier(&____userCallback_1, value);
	}

	inline static int32_t get_offset_of__userState_2() { return static_cast<int32_t>(offsetof(InternalAsyncResult_t1610391122, ____userState_2)); }
	inline Il2CppObject * get__userState_2() const { return ____userState_2; }
	inline Il2CppObject ** get_address_of__userState_2() { return &____userState_2; }
	inline void set__userState_2(Il2CppObject * value)
	{
		____userState_2 = value;
		Il2CppCodeGenWriteBarrier(&____userState_2, value);
	}

	inline static int32_t get_offset_of__asyncException_3() { return static_cast<int32_t>(offsetof(InternalAsyncResult_t1610391122, ____asyncException_3)); }
	inline Exception_t1927440687 * get__asyncException_3() const { return ____asyncException_3; }
	inline Exception_t1927440687 ** get_address_of__asyncException_3() { return &____asyncException_3; }
	inline void set__asyncException_3(Exception_t1927440687 * value)
	{
		____asyncException_3 = value;
		Il2CppCodeGenWriteBarrier(&____asyncException_3, value);
	}

	inline static int32_t get_offset_of_handle_4() { return static_cast<int32_t>(offsetof(InternalAsyncResult_t1610391122, ___handle_4)); }
	inline ManualResetEvent_t926074657 * get_handle_4() const { return ___handle_4; }
	inline ManualResetEvent_t926074657 ** get_address_of_handle_4() { return &___handle_4; }
	inline void set_handle_4(ManualResetEvent_t926074657 * value)
	{
		___handle_4 = value;
		Il2CppCodeGenWriteBarrier(&___handle_4, value);
	}

	inline static int32_t get_offset_of_completed_5() { return static_cast<int32_t>(offsetof(InternalAsyncResult_t1610391122, ___completed_5)); }
	inline bool get_completed_5() const { return ___completed_5; }
	inline bool* get_address_of_completed_5() { return &___completed_5; }
	inline void set_completed_5(bool value)
	{
		___completed_5 = value;
	}

	inline static int32_t get_offset_of__bytesRead_6() { return static_cast<int32_t>(offsetof(InternalAsyncResult_t1610391122, ____bytesRead_6)); }
	inline int32_t get__bytesRead_6() const { return ____bytesRead_6; }
	inline int32_t* get_address_of__bytesRead_6() { return &____bytesRead_6; }
	inline void set__bytesRead_6(int32_t value)
	{
		____bytesRead_6 = value;
	}

	inline static int32_t get_offset_of__fromWrite_7() { return static_cast<int32_t>(offsetof(InternalAsyncResult_t1610391122, ____fromWrite_7)); }
	inline bool get__fromWrite_7() const { return ____fromWrite_7; }
	inline bool* get_address_of__fromWrite_7() { return &____fromWrite_7; }
	inline void set__fromWrite_7(bool value)
	{
		____fromWrite_7 = value;
	}

	inline static int32_t get_offset_of__proceedAfterHandshake_8() { return static_cast<int32_t>(offsetof(InternalAsyncResult_t1610391122, ____proceedAfterHandshake_8)); }
	inline bool get__proceedAfterHandshake_8() const { return ____proceedAfterHandshake_8; }
	inline bool* get_address_of__proceedAfterHandshake_8() { return &____proceedAfterHandshake_8; }
	inline void set__proceedAfterHandshake_8(bool value)
	{
		____proceedAfterHandshake_8 = value;
	}

	inline static int32_t get_offset_of__buffer_9() { return static_cast<int32_t>(offsetof(InternalAsyncResult_t1610391122, ____buffer_9)); }
	inline ByteU5BU5D_t3397334013* get__buffer_9() const { return ____buffer_9; }
	inline ByteU5BU5D_t3397334013** get_address_of__buffer_9() { return &____buffer_9; }
	inline void set__buffer_9(ByteU5BU5D_t3397334013* value)
	{
		____buffer_9 = value;
		Il2CppCodeGenWriteBarrier(&____buffer_9, value);
	}

	inline static int32_t get_offset_of__offset_10() { return static_cast<int32_t>(offsetof(InternalAsyncResult_t1610391122, ____offset_10)); }
	inline int32_t get__offset_10() const { return ____offset_10; }
	inline int32_t* get_address_of__offset_10() { return &____offset_10; }
	inline void set__offset_10(int32_t value)
	{
		____offset_10 = value;
	}

	inline static int32_t get_offset_of__count_11() { return static_cast<int32_t>(offsetof(InternalAsyncResult_t1610391122, ____count_11)); }
	inline int32_t get__count_11() const { return ____count_11; }
	inline int32_t* get_address_of__count_11() { return &____count_11; }
	inline void set__count_11(int32_t value)
	{
		____count_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
