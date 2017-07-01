#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuit491456551.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.SslCipherSuite
struct  SslCipherSuite_t1404755603  : public CipherSuite_t491456551
{
public:
	// System.Byte[] Mono.Security.Protocol.Tls.SslCipherSuite::pad1
	ByteU5BU5D_t3397334013* ___pad1_21;
	// System.Byte[] Mono.Security.Protocol.Tls.SslCipherSuite::pad2
	ByteU5BU5D_t3397334013* ___pad2_22;
	// System.Byte[] Mono.Security.Protocol.Tls.SslCipherSuite::header
	ByteU5BU5D_t3397334013* ___header_23;

public:
	inline static int32_t get_offset_of_pad1_21() { return static_cast<int32_t>(offsetof(SslCipherSuite_t1404755603, ___pad1_21)); }
	inline ByteU5BU5D_t3397334013* get_pad1_21() const { return ___pad1_21; }
	inline ByteU5BU5D_t3397334013** get_address_of_pad1_21() { return &___pad1_21; }
	inline void set_pad1_21(ByteU5BU5D_t3397334013* value)
	{
		___pad1_21 = value;
		Il2CppCodeGenWriteBarrier(&___pad1_21, value);
	}

	inline static int32_t get_offset_of_pad2_22() { return static_cast<int32_t>(offsetof(SslCipherSuite_t1404755603, ___pad2_22)); }
	inline ByteU5BU5D_t3397334013* get_pad2_22() const { return ___pad2_22; }
	inline ByteU5BU5D_t3397334013** get_address_of_pad2_22() { return &___pad2_22; }
	inline void set_pad2_22(ByteU5BU5D_t3397334013* value)
	{
		___pad2_22 = value;
		Il2CppCodeGenWriteBarrier(&___pad2_22, value);
	}

	inline static int32_t get_offset_of_header_23() { return static_cast<int32_t>(offsetof(SslCipherSuite_t1404755603, ___header_23)); }
	inline ByteU5BU5D_t3397334013* get_header_23() const { return ___header_23; }
	inline ByteU5BU5D_t3397334013** get_address_of_header_23() { return &___header_23; }
	inline void set_header_23(ByteU5BU5D_t3397334013* value)
	{
		___header_23 = value;
		Il2CppCodeGenWriteBarrier(&___header_23, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
