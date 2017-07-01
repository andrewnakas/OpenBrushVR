#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Mono_Security_Mono_Security_Protocol_Tls_Context4285182719.h"

// Mono.Security.Protocol.Tls.SslClientStream
struct SslClientStream_t3918817353;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.ClientContext
struct  ClientContext_t3002158488  : public Context_t4285182719
{
public:
	// Mono.Security.Protocol.Tls.SslClientStream Mono.Security.Protocol.Tls.ClientContext::sslStream
	SslClientStream_t3918817353 * ___sslStream_30;
	// System.Int16 Mono.Security.Protocol.Tls.ClientContext::clientHelloProtocol
	int16_t ___clientHelloProtocol_31;

public:
	inline static int32_t get_offset_of_sslStream_30() { return static_cast<int32_t>(offsetof(ClientContext_t3002158488, ___sslStream_30)); }
	inline SslClientStream_t3918817353 * get_sslStream_30() const { return ___sslStream_30; }
	inline SslClientStream_t3918817353 ** get_address_of_sslStream_30() { return &___sslStream_30; }
	inline void set_sslStream_30(SslClientStream_t3918817353 * value)
	{
		___sslStream_30 = value;
		Il2CppCodeGenWriteBarrier(&___sslStream_30, value);
	}

	inline static int32_t get_offset_of_clientHelloProtocol_31() { return static_cast<int32_t>(offsetof(ClientContext_t3002158488, ___clientHelloProtocol_31)); }
	inline int16_t get_clientHelloProtocol_31() const { return ___clientHelloProtocol_31; }
	inline int16_t* get_address_of_clientHelloProtocol_31() { return &___clientHelloProtocol_31; }
	inline void set_clientHelloProtocol_31(int16_t value)
	{
		___clientHelloProtocol_31 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
