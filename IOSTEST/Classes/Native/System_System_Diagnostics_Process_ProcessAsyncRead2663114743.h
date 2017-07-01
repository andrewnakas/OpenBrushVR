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
// System.AsyncCallback
struct AsyncCallback_t163412349;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t926074657;
// System.Exception
struct Exception_t1927440687;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Diagnostics.Process
struct Process_t1448008787;
// System.IO.Stream
struct Stream_t3255436806;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// System.Diagnostics.Process/AsyncReadHandler
struct AsyncReadHandler_t1533281179;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Process/ProcessAsyncReader
struct  ProcessAsyncReader_t2663114743  : public Il2CppObject
{
public:
	// System.Object System.Diagnostics.Process/ProcessAsyncReader::Sock
	Il2CppObject * ___Sock_0;
	// System.IntPtr System.Diagnostics.Process/ProcessAsyncReader::handle
	IntPtr_t ___handle_1;
	// System.Object System.Diagnostics.Process/ProcessAsyncReader::state
	Il2CppObject * ___state_2;
	// System.AsyncCallback System.Diagnostics.Process/ProcessAsyncReader::callback
	AsyncCallback_t163412349 * ___callback_3;
	// System.Threading.ManualResetEvent System.Diagnostics.Process/ProcessAsyncReader::wait_handle
	ManualResetEvent_t926074657 * ___wait_handle_4;
	// System.Exception System.Diagnostics.Process/ProcessAsyncReader::delayedException
	Exception_t1927440687 * ___delayedException_5;
	// System.Object System.Diagnostics.Process/ProcessAsyncReader::EndPoint
	Il2CppObject * ___EndPoint_6;
	// System.Byte[] System.Diagnostics.Process/ProcessAsyncReader::buffer
	ByteU5BU5D_t3397334013* ___buffer_7;
	// System.Int32 System.Diagnostics.Process/ProcessAsyncReader::Offset
	int32_t ___Offset_8;
	// System.Int32 System.Diagnostics.Process/ProcessAsyncReader::Size
	int32_t ___Size_9;
	// System.Int32 System.Diagnostics.Process/ProcessAsyncReader::SockFlags
	int32_t ___SockFlags_10;
	// System.Object System.Diagnostics.Process/ProcessAsyncReader::AcceptSocket
	Il2CppObject * ___AcceptSocket_11;
	// System.Object[] System.Diagnostics.Process/ProcessAsyncReader::Addresses
	ObjectU5BU5D_t3614634134* ___Addresses_12;
	// System.Int32 System.Diagnostics.Process/ProcessAsyncReader::port
	int32_t ___port_13;
	// System.Object System.Diagnostics.Process/ProcessAsyncReader::Buffers
	Il2CppObject * ___Buffers_14;
	// System.Boolean System.Diagnostics.Process/ProcessAsyncReader::ReuseSocket
	bool ___ReuseSocket_15;
	// System.Object System.Diagnostics.Process/ProcessAsyncReader::acc_socket
	Il2CppObject * ___acc_socket_16;
	// System.Int32 System.Diagnostics.Process/ProcessAsyncReader::total
	int32_t ___total_17;
	// System.Boolean System.Diagnostics.Process/ProcessAsyncReader::completed_sync
	bool ___completed_sync_18;
	// System.Boolean System.Diagnostics.Process/ProcessAsyncReader::completed
	bool ___completed_19;
	// System.Boolean System.Diagnostics.Process/ProcessAsyncReader::err_out
	bool ___err_out_20;
	// System.Int32 System.Diagnostics.Process/ProcessAsyncReader::error
	int32_t ___error_21;
	// System.Int32 System.Diagnostics.Process/ProcessAsyncReader::operation
	int32_t ___operation_22;
	// System.Object System.Diagnostics.Process/ProcessAsyncReader::ares
	Il2CppObject * ___ares_23;
	// System.Int32 System.Diagnostics.Process/ProcessAsyncReader::EndCalled
	int32_t ___EndCalled_24;
	// System.Diagnostics.Process System.Diagnostics.Process/ProcessAsyncReader::process
	Process_t1448008787 * ___process_25;
	// System.IO.Stream System.Diagnostics.Process/ProcessAsyncReader::stream
	Stream_t3255436806 * ___stream_26;
	// System.Text.StringBuilder System.Diagnostics.Process/ProcessAsyncReader::sb
	StringBuilder_t1221177846 * ___sb_27;
	// System.Diagnostics.Process/AsyncReadHandler System.Diagnostics.Process/ProcessAsyncReader::ReadHandler
	AsyncReadHandler_t1533281179 * ___ReadHandler_28;

public:
	inline static int32_t get_offset_of_Sock_0() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2663114743, ___Sock_0)); }
	inline Il2CppObject * get_Sock_0() const { return ___Sock_0; }
	inline Il2CppObject ** get_address_of_Sock_0() { return &___Sock_0; }
	inline void set_Sock_0(Il2CppObject * value)
	{
		___Sock_0 = value;
		Il2CppCodeGenWriteBarrier(&___Sock_0, value);
	}

	inline static int32_t get_offset_of_handle_1() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2663114743, ___handle_1)); }
	inline IntPtr_t get_handle_1() const { return ___handle_1; }
	inline IntPtr_t* get_address_of_handle_1() { return &___handle_1; }
	inline void set_handle_1(IntPtr_t value)
	{
		___handle_1 = value;
	}

	inline static int32_t get_offset_of_state_2() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2663114743, ___state_2)); }
	inline Il2CppObject * get_state_2() const { return ___state_2; }
	inline Il2CppObject ** get_address_of_state_2() { return &___state_2; }
	inline void set_state_2(Il2CppObject * value)
	{
		___state_2 = value;
		Il2CppCodeGenWriteBarrier(&___state_2, value);
	}

	inline static int32_t get_offset_of_callback_3() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2663114743, ___callback_3)); }
	inline AsyncCallback_t163412349 * get_callback_3() const { return ___callback_3; }
	inline AsyncCallback_t163412349 ** get_address_of_callback_3() { return &___callback_3; }
	inline void set_callback_3(AsyncCallback_t163412349 * value)
	{
		___callback_3 = value;
		Il2CppCodeGenWriteBarrier(&___callback_3, value);
	}

	inline static int32_t get_offset_of_wait_handle_4() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2663114743, ___wait_handle_4)); }
	inline ManualResetEvent_t926074657 * get_wait_handle_4() const { return ___wait_handle_4; }
	inline ManualResetEvent_t926074657 ** get_address_of_wait_handle_4() { return &___wait_handle_4; }
	inline void set_wait_handle_4(ManualResetEvent_t926074657 * value)
	{
		___wait_handle_4 = value;
		Il2CppCodeGenWriteBarrier(&___wait_handle_4, value);
	}

	inline static int32_t get_offset_of_delayedException_5() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2663114743, ___delayedException_5)); }
	inline Exception_t1927440687 * get_delayedException_5() const { return ___delayedException_5; }
	inline Exception_t1927440687 ** get_address_of_delayedException_5() { return &___delayedException_5; }
	inline void set_delayedException_5(Exception_t1927440687 * value)
	{
		___delayedException_5 = value;
		Il2CppCodeGenWriteBarrier(&___delayedException_5, value);
	}

	inline static int32_t get_offset_of_EndPoint_6() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2663114743, ___EndPoint_6)); }
	inline Il2CppObject * get_EndPoint_6() const { return ___EndPoint_6; }
	inline Il2CppObject ** get_address_of_EndPoint_6() { return &___EndPoint_6; }
	inline void set_EndPoint_6(Il2CppObject * value)
	{
		___EndPoint_6 = value;
		Il2CppCodeGenWriteBarrier(&___EndPoint_6, value);
	}

	inline static int32_t get_offset_of_buffer_7() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2663114743, ___buffer_7)); }
	inline ByteU5BU5D_t3397334013* get_buffer_7() const { return ___buffer_7; }
	inline ByteU5BU5D_t3397334013** get_address_of_buffer_7() { return &___buffer_7; }
	inline void set_buffer_7(ByteU5BU5D_t3397334013* value)
	{
		___buffer_7 = value;
		Il2CppCodeGenWriteBarrier(&___buffer_7, value);
	}

	inline static int32_t get_offset_of_Offset_8() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2663114743, ___Offset_8)); }
	inline int32_t get_Offset_8() const { return ___Offset_8; }
	inline int32_t* get_address_of_Offset_8() { return &___Offset_8; }
	inline void set_Offset_8(int32_t value)
	{
		___Offset_8 = value;
	}

	inline static int32_t get_offset_of_Size_9() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2663114743, ___Size_9)); }
	inline int32_t get_Size_9() const { return ___Size_9; }
	inline int32_t* get_address_of_Size_9() { return &___Size_9; }
	inline void set_Size_9(int32_t value)
	{
		___Size_9 = value;
	}

	inline static int32_t get_offset_of_SockFlags_10() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2663114743, ___SockFlags_10)); }
	inline int32_t get_SockFlags_10() const { return ___SockFlags_10; }
	inline int32_t* get_address_of_SockFlags_10() { return &___SockFlags_10; }
	inline void set_SockFlags_10(int32_t value)
	{
		___SockFlags_10 = value;
	}

	inline static int32_t get_offset_of_AcceptSocket_11() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2663114743, ___AcceptSocket_11)); }
	inline Il2CppObject * get_AcceptSocket_11() const { return ___AcceptSocket_11; }
	inline Il2CppObject ** get_address_of_AcceptSocket_11() { return &___AcceptSocket_11; }
	inline void set_AcceptSocket_11(Il2CppObject * value)
	{
		___AcceptSocket_11 = value;
		Il2CppCodeGenWriteBarrier(&___AcceptSocket_11, value);
	}

	inline static int32_t get_offset_of_Addresses_12() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2663114743, ___Addresses_12)); }
	inline ObjectU5BU5D_t3614634134* get_Addresses_12() const { return ___Addresses_12; }
	inline ObjectU5BU5D_t3614634134** get_address_of_Addresses_12() { return &___Addresses_12; }
	inline void set_Addresses_12(ObjectU5BU5D_t3614634134* value)
	{
		___Addresses_12 = value;
		Il2CppCodeGenWriteBarrier(&___Addresses_12, value);
	}

	inline static int32_t get_offset_of_port_13() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2663114743, ___port_13)); }
	inline int32_t get_port_13() const { return ___port_13; }
	inline int32_t* get_address_of_port_13() { return &___port_13; }
	inline void set_port_13(int32_t value)
	{
		___port_13 = value;
	}

	inline static int32_t get_offset_of_Buffers_14() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2663114743, ___Buffers_14)); }
	inline Il2CppObject * get_Buffers_14() const { return ___Buffers_14; }
	inline Il2CppObject ** get_address_of_Buffers_14() { return &___Buffers_14; }
	inline void set_Buffers_14(Il2CppObject * value)
	{
		___Buffers_14 = value;
		Il2CppCodeGenWriteBarrier(&___Buffers_14, value);
	}

	inline static int32_t get_offset_of_ReuseSocket_15() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2663114743, ___ReuseSocket_15)); }
	inline bool get_ReuseSocket_15() const { return ___ReuseSocket_15; }
	inline bool* get_address_of_ReuseSocket_15() { return &___ReuseSocket_15; }
	inline void set_ReuseSocket_15(bool value)
	{
		___ReuseSocket_15 = value;
	}

	inline static int32_t get_offset_of_acc_socket_16() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2663114743, ___acc_socket_16)); }
	inline Il2CppObject * get_acc_socket_16() const { return ___acc_socket_16; }
	inline Il2CppObject ** get_address_of_acc_socket_16() { return &___acc_socket_16; }
	inline void set_acc_socket_16(Il2CppObject * value)
	{
		___acc_socket_16 = value;
		Il2CppCodeGenWriteBarrier(&___acc_socket_16, value);
	}

	inline static int32_t get_offset_of_total_17() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2663114743, ___total_17)); }
	inline int32_t get_total_17() const { return ___total_17; }
	inline int32_t* get_address_of_total_17() { return &___total_17; }
	inline void set_total_17(int32_t value)
	{
		___total_17 = value;
	}

	inline static int32_t get_offset_of_completed_sync_18() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2663114743, ___completed_sync_18)); }
	inline bool get_completed_sync_18() const { return ___completed_sync_18; }
	inline bool* get_address_of_completed_sync_18() { return &___completed_sync_18; }
	inline void set_completed_sync_18(bool value)
	{
		___completed_sync_18 = value;
	}

	inline static int32_t get_offset_of_completed_19() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2663114743, ___completed_19)); }
	inline bool get_completed_19() const { return ___completed_19; }
	inline bool* get_address_of_completed_19() { return &___completed_19; }
	inline void set_completed_19(bool value)
	{
		___completed_19 = value;
	}

	inline static int32_t get_offset_of_err_out_20() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2663114743, ___err_out_20)); }
	inline bool get_err_out_20() const { return ___err_out_20; }
	inline bool* get_address_of_err_out_20() { return &___err_out_20; }
	inline void set_err_out_20(bool value)
	{
		___err_out_20 = value;
	}

	inline static int32_t get_offset_of_error_21() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2663114743, ___error_21)); }
	inline int32_t get_error_21() const { return ___error_21; }
	inline int32_t* get_address_of_error_21() { return &___error_21; }
	inline void set_error_21(int32_t value)
	{
		___error_21 = value;
	}

	inline static int32_t get_offset_of_operation_22() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2663114743, ___operation_22)); }
	inline int32_t get_operation_22() const { return ___operation_22; }
	inline int32_t* get_address_of_operation_22() { return &___operation_22; }
	inline void set_operation_22(int32_t value)
	{
		___operation_22 = value;
	}

	inline static int32_t get_offset_of_ares_23() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2663114743, ___ares_23)); }
	inline Il2CppObject * get_ares_23() const { return ___ares_23; }
	inline Il2CppObject ** get_address_of_ares_23() { return &___ares_23; }
	inline void set_ares_23(Il2CppObject * value)
	{
		___ares_23 = value;
		Il2CppCodeGenWriteBarrier(&___ares_23, value);
	}

	inline static int32_t get_offset_of_EndCalled_24() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2663114743, ___EndCalled_24)); }
	inline int32_t get_EndCalled_24() const { return ___EndCalled_24; }
	inline int32_t* get_address_of_EndCalled_24() { return &___EndCalled_24; }
	inline void set_EndCalled_24(int32_t value)
	{
		___EndCalled_24 = value;
	}

	inline static int32_t get_offset_of_process_25() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2663114743, ___process_25)); }
	inline Process_t1448008787 * get_process_25() const { return ___process_25; }
	inline Process_t1448008787 ** get_address_of_process_25() { return &___process_25; }
	inline void set_process_25(Process_t1448008787 * value)
	{
		___process_25 = value;
		Il2CppCodeGenWriteBarrier(&___process_25, value);
	}

	inline static int32_t get_offset_of_stream_26() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2663114743, ___stream_26)); }
	inline Stream_t3255436806 * get_stream_26() const { return ___stream_26; }
	inline Stream_t3255436806 ** get_address_of_stream_26() { return &___stream_26; }
	inline void set_stream_26(Stream_t3255436806 * value)
	{
		___stream_26 = value;
		Il2CppCodeGenWriteBarrier(&___stream_26, value);
	}

	inline static int32_t get_offset_of_sb_27() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2663114743, ___sb_27)); }
	inline StringBuilder_t1221177846 * get_sb_27() const { return ___sb_27; }
	inline StringBuilder_t1221177846 ** get_address_of_sb_27() { return &___sb_27; }
	inline void set_sb_27(StringBuilder_t1221177846 * value)
	{
		___sb_27 = value;
		Il2CppCodeGenWriteBarrier(&___sb_27, value);
	}

	inline static int32_t get_offset_of_ReadHandler_28() { return static_cast<int32_t>(offsetof(ProcessAsyncReader_t2663114743, ___ReadHandler_28)); }
	inline AsyncReadHandler_t1533281179 * get_ReadHandler_28() const { return ___ReadHandler_28; }
	inline AsyncReadHandler_t1533281179 ** get_address_of_ReadHandler_28() { return &___ReadHandler_28; }
	inline void set_ReadHandler_28(AsyncReadHandler_t1533281179 * value)
	{
		___ReadHandler_28 = value;
		Il2CppCodeGenWriteBarrier(&___ReadHandler_28, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Diagnostics.Process/ProcessAsyncReader
struct ProcessAsyncReader_t2663114743_marshaled_pinvoke
{
	Il2CppIUnknown* ___Sock_0;
	intptr_t ___handle_1;
	Il2CppIUnknown* ___state_2;
	Il2CppMethodPointer ___callback_3;
	ManualResetEvent_t926074657 * ___wait_handle_4;
	Exception_t1927440687 * ___delayedException_5;
	Il2CppIUnknown* ___EndPoint_6;
	uint8_t* ___buffer_7;
	int32_t ___Offset_8;
	int32_t ___Size_9;
	int32_t ___SockFlags_10;
	Il2CppIUnknown* ___AcceptSocket_11;
	ObjectU5BU5D_t3614634134* ___Addresses_12;
	int32_t ___port_13;
	Il2CppIUnknown* ___Buffers_14;
	int32_t ___ReuseSocket_15;
	Il2CppIUnknown* ___acc_socket_16;
	int32_t ___total_17;
	int32_t ___completed_sync_18;
	int32_t ___completed_19;
	int32_t ___err_out_20;
	int32_t ___error_21;
	int32_t ___operation_22;
	Il2CppIUnknown* ___ares_23;
	int32_t ___EndCalled_24;
	Process_t1448008787 * ___process_25;
	Stream_t3255436806 * ___stream_26;
	char* ___sb_27;
	Il2CppMethodPointer ___ReadHandler_28;
};
// Native definition for COM marshalling of System.Diagnostics.Process/ProcessAsyncReader
struct ProcessAsyncReader_t2663114743_marshaled_com
{
	Il2CppIUnknown* ___Sock_0;
	intptr_t ___handle_1;
	Il2CppIUnknown* ___state_2;
	Il2CppMethodPointer ___callback_3;
	ManualResetEvent_t926074657 * ___wait_handle_4;
	Exception_t1927440687 * ___delayedException_5;
	Il2CppIUnknown* ___EndPoint_6;
	uint8_t* ___buffer_7;
	int32_t ___Offset_8;
	int32_t ___Size_9;
	int32_t ___SockFlags_10;
	Il2CppIUnknown* ___AcceptSocket_11;
	ObjectU5BU5D_t3614634134* ___Addresses_12;
	int32_t ___port_13;
	Il2CppIUnknown* ___Buffers_14;
	int32_t ___ReuseSocket_15;
	Il2CppIUnknown* ___acc_socket_16;
	int32_t ___total_17;
	int32_t ___completed_sync_18;
	int32_t ___completed_19;
	int32_t ___err_out_20;
	int32_t ___error_21;
	int32_t ___operation_22;
	Il2CppIUnknown* ___ares_23;
	int32_t ___EndCalled_24;
	Process_t1448008787 * ___process_25;
	Stream_t3255436806 * ___stream_26;
	Il2CppChar* ___sb_27;
	Il2CppMethodPointer ___ReadHandler_28;
};
