#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Threading.ManualResetEvent
struct ManualResetEvent_t926074657;
// System.IO.Stream
struct Stream_t3255436806;
// Mono.Security.Protocol.Tls.Context
struct Context_t4285182719;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.RecordProtocol
struct  RecordProtocol_t3166895267  : public Il2CppObject
{
public:
	// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol::innerStream
	Stream_t3255436806 * ___innerStream_1;
	// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.RecordProtocol::context
	Context_t4285182719 * ___context_2;

public:
	inline static int32_t get_offset_of_innerStream_1() { return static_cast<int32_t>(offsetof(RecordProtocol_t3166895267, ___innerStream_1)); }
	inline Stream_t3255436806 * get_innerStream_1() const { return ___innerStream_1; }
	inline Stream_t3255436806 ** get_address_of_innerStream_1() { return &___innerStream_1; }
	inline void set_innerStream_1(Stream_t3255436806 * value)
	{
		___innerStream_1 = value;
		Il2CppCodeGenWriteBarrier(&___innerStream_1, value);
	}

	inline static int32_t get_offset_of_context_2() { return static_cast<int32_t>(offsetof(RecordProtocol_t3166895267, ___context_2)); }
	inline Context_t4285182719 * get_context_2() const { return ___context_2; }
	inline Context_t4285182719 ** get_address_of_context_2() { return &___context_2; }
	inline void set_context_2(Context_t4285182719 * value)
	{
		___context_2 = value;
		Il2CppCodeGenWriteBarrier(&___context_2, value);
	}
};

struct RecordProtocol_t3166895267_StaticFields
{
public:
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.RecordProtocol::record_processing
	ManualResetEvent_t926074657 * ___record_processing_0;

public:
	inline static int32_t get_offset_of_record_processing_0() { return static_cast<int32_t>(offsetof(RecordProtocol_t3166895267_StaticFields, ___record_processing_0)); }
	inline ManualResetEvent_t926074657 * get_record_processing_0() const { return ___record_processing_0; }
	inline ManualResetEvent_t926074657 ** get_address_of_record_processing_0() { return &___record_processing_0; }
	inline void set_record_processing_0(ManualResetEvent_t926074657 * value)
	{
		___record_processing_0 = value;
		Il2CppCodeGenWriteBarrier(&___record_processing_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
