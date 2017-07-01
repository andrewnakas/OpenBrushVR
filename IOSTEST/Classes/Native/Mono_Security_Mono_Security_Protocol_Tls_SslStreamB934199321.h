#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_IO_Stream3255436806.h"
#include "mscorlib_System_Boolean3825574718.h"

// System.Threading.ManualResetEvent
struct ManualResetEvent_t926074657;
// System.IO.Stream
struct Stream_t3255436806;
// System.IO.MemoryStream
struct MemoryStream_t743994179;
// Mono.Security.Protocol.Tls.Context
struct Context_t4285182719;
// Mono.Security.Protocol.Tls.RecordProtocol
struct RecordProtocol_t3166895267;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.SslStreamBase
struct  SslStreamBase_t934199321  : public Stream_t3255436806
{
public:
	// System.IO.Stream Mono.Security.Protocol.Tls.SslStreamBase::innerStream
	Stream_t3255436806 * ___innerStream_3;
	// System.IO.MemoryStream Mono.Security.Protocol.Tls.SslStreamBase::inputBuffer
	MemoryStream_t743994179 * ___inputBuffer_4;
	// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.SslStreamBase::context
	Context_t4285182719 * ___context_5;
	// Mono.Security.Protocol.Tls.RecordProtocol Mono.Security.Protocol.Tls.SslStreamBase::protocol
	RecordProtocol_t3166895267 * ___protocol_6;
	// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::ownsStream
	bool ___ownsStream_7;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Mono.Security.Protocol.Tls.SslStreamBase::disposed
	bool ___disposed_8;
	// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::checkCertRevocationStatus
	bool ___checkCertRevocationStatus_9;
	// System.Object Mono.Security.Protocol.Tls.SslStreamBase::negotiate
	Il2CppObject * ___negotiate_10;
	// System.Object Mono.Security.Protocol.Tls.SslStreamBase::read
	Il2CppObject * ___read_11;
	// System.Object Mono.Security.Protocol.Tls.SslStreamBase::write
	Il2CppObject * ___write_12;
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.SslStreamBase::negotiationComplete
	ManualResetEvent_t926074657 * ___negotiationComplete_13;
	// System.Byte[] Mono.Security.Protocol.Tls.SslStreamBase::recbuf
	ByteU5BU5D_t3397334013* ___recbuf_14;
	// System.IO.MemoryStream Mono.Security.Protocol.Tls.SslStreamBase::recordStream
	MemoryStream_t743994179 * ___recordStream_15;

public:
	inline static int32_t get_offset_of_innerStream_3() { return static_cast<int32_t>(offsetof(SslStreamBase_t934199321, ___innerStream_3)); }
	inline Stream_t3255436806 * get_innerStream_3() const { return ___innerStream_3; }
	inline Stream_t3255436806 ** get_address_of_innerStream_3() { return &___innerStream_3; }
	inline void set_innerStream_3(Stream_t3255436806 * value)
	{
		___innerStream_3 = value;
		Il2CppCodeGenWriteBarrier(&___innerStream_3, value);
	}

	inline static int32_t get_offset_of_inputBuffer_4() { return static_cast<int32_t>(offsetof(SslStreamBase_t934199321, ___inputBuffer_4)); }
	inline MemoryStream_t743994179 * get_inputBuffer_4() const { return ___inputBuffer_4; }
	inline MemoryStream_t743994179 ** get_address_of_inputBuffer_4() { return &___inputBuffer_4; }
	inline void set_inputBuffer_4(MemoryStream_t743994179 * value)
	{
		___inputBuffer_4 = value;
		Il2CppCodeGenWriteBarrier(&___inputBuffer_4, value);
	}

	inline static int32_t get_offset_of_context_5() { return static_cast<int32_t>(offsetof(SslStreamBase_t934199321, ___context_5)); }
	inline Context_t4285182719 * get_context_5() const { return ___context_5; }
	inline Context_t4285182719 ** get_address_of_context_5() { return &___context_5; }
	inline void set_context_5(Context_t4285182719 * value)
	{
		___context_5 = value;
		Il2CppCodeGenWriteBarrier(&___context_5, value);
	}

	inline static int32_t get_offset_of_protocol_6() { return static_cast<int32_t>(offsetof(SslStreamBase_t934199321, ___protocol_6)); }
	inline RecordProtocol_t3166895267 * get_protocol_6() const { return ___protocol_6; }
	inline RecordProtocol_t3166895267 ** get_address_of_protocol_6() { return &___protocol_6; }
	inline void set_protocol_6(RecordProtocol_t3166895267 * value)
	{
		___protocol_6 = value;
		Il2CppCodeGenWriteBarrier(&___protocol_6, value);
	}

	inline static int32_t get_offset_of_ownsStream_7() { return static_cast<int32_t>(offsetof(SslStreamBase_t934199321, ___ownsStream_7)); }
	inline bool get_ownsStream_7() const { return ___ownsStream_7; }
	inline bool* get_address_of_ownsStream_7() { return &___ownsStream_7; }
	inline void set_ownsStream_7(bool value)
	{
		___ownsStream_7 = value;
	}

	inline static int32_t get_offset_of_disposed_8() { return static_cast<int32_t>(offsetof(SslStreamBase_t934199321, ___disposed_8)); }
	inline bool get_disposed_8() const { return ___disposed_8; }
	inline bool* get_address_of_disposed_8() { return &___disposed_8; }
	inline void set_disposed_8(bool value)
	{
		___disposed_8 = value;
	}

	inline static int32_t get_offset_of_checkCertRevocationStatus_9() { return static_cast<int32_t>(offsetof(SslStreamBase_t934199321, ___checkCertRevocationStatus_9)); }
	inline bool get_checkCertRevocationStatus_9() const { return ___checkCertRevocationStatus_9; }
	inline bool* get_address_of_checkCertRevocationStatus_9() { return &___checkCertRevocationStatus_9; }
	inline void set_checkCertRevocationStatus_9(bool value)
	{
		___checkCertRevocationStatus_9 = value;
	}

	inline static int32_t get_offset_of_negotiate_10() { return static_cast<int32_t>(offsetof(SslStreamBase_t934199321, ___negotiate_10)); }
	inline Il2CppObject * get_negotiate_10() const { return ___negotiate_10; }
	inline Il2CppObject ** get_address_of_negotiate_10() { return &___negotiate_10; }
	inline void set_negotiate_10(Il2CppObject * value)
	{
		___negotiate_10 = value;
		Il2CppCodeGenWriteBarrier(&___negotiate_10, value);
	}

	inline static int32_t get_offset_of_read_11() { return static_cast<int32_t>(offsetof(SslStreamBase_t934199321, ___read_11)); }
	inline Il2CppObject * get_read_11() const { return ___read_11; }
	inline Il2CppObject ** get_address_of_read_11() { return &___read_11; }
	inline void set_read_11(Il2CppObject * value)
	{
		___read_11 = value;
		Il2CppCodeGenWriteBarrier(&___read_11, value);
	}

	inline static int32_t get_offset_of_write_12() { return static_cast<int32_t>(offsetof(SslStreamBase_t934199321, ___write_12)); }
	inline Il2CppObject * get_write_12() const { return ___write_12; }
	inline Il2CppObject ** get_address_of_write_12() { return &___write_12; }
	inline void set_write_12(Il2CppObject * value)
	{
		___write_12 = value;
		Il2CppCodeGenWriteBarrier(&___write_12, value);
	}

	inline static int32_t get_offset_of_negotiationComplete_13() { return static_cast<int32_t>(offsetof(SslStreamBase_t934199321, ___negotiationComplete_13)); }
	inline ManualResetEvent_t926074657 * get_negotiationComplete_13() const { return ___negotiationComplete_13; }
	inline ManualResetEvent_t926074657 ** get_address_of_negotiationComplete_13() { return &___negotiationComplete_13; }
	inline void set_negotiationComplete_13(ManualResetEvent_t926074657 * value)
	{
		___negotiationComplete_13 = value;
		Il2CppCodeGenWriteBarrier(&___negotiationComplete_13, value);
	}

	inline static int32_t get_offset_of_recbuf_14() { return static_cast<int32_t>(offsetof(SslStreamBase_t934199321, ___recbuf_14)); }
	inline ByteU5BU5D_t3397334013* get_recbuf_14() const { return ___recbuf_14; }
	inline ByteU5BU5D_t3397334013** get_address_of_recbuf_14() { return &___recbuf_14; }
	inline void set_recbuf_14(ByteU5BU5D_t3397334013* value)
	{
		___recbuf_14 = value;
		Il2CppCodeGenWriteBarrier(&___recbuf_14, value);
	}

	inline static int32_t get_offset_of_recordStream_15() { return static_cast<int32_t>(offsetof(SslStreamBase_t934199321, ___recordStream_15)); }
	inline MemoryStream_t743994179 * get_recordStream_15() const { return ___recordStream_15; }
	inline MemoryStream_t743994179 ** get_address_of_recordStream_15() { return &___recordStream_15; }
	inline void set_recordStream_15(MemoryStream_t743994179 * value)
	{
		___recordStream_15 = value;
		Il2CppCodeGenWriteBarrier(&___recordStream_15, value);
	}
};

struct SslStreamBase_t934199321_StaticFields
{
public:
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.SslStreamBase::record_processing
	ManualResetEvent_t926074657 * ___record_processing_2;

public:
	inline static int32_t get_offset_of_record_processing_2() { return static_cast<int32_t>(offsetof(SslStreamBase_t934199321_StaticFields, ___record_processing_2)); }
	inline ManualResetEvent_t926074657 * get_record_processing_2() const { return ___record_processing_2; }
	inline ManualResetEvent_t926074657 ** get_address_of_record_processing_2() { return &___record_processing_2; }
	inline void set_record_processing_2(ManualResetEvent_t926074657 * value)
	{
		___record_processing_2 = value;
		Il2CppCodeGenWriteBarrier(&___record_processing_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
