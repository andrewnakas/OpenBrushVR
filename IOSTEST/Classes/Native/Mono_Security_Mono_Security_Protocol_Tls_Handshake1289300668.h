#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake3938752374.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityC3722381418.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Mono.Security.Protocol.Tls.CipherSuite
struct CipherSuite_t491456551;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello
struct  TlsServerHello_t1289300668  : public HandshakeMessage_t3938752374
{
public:
	// Mono.Security.Protocol.Tls.SecurityCompressionType Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::compressionMethod
	int32_t ___compressionMethod_9;
	// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::random
	ByteU5BU5D_t3397334013* ___random_10;
	// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::sessionId
	ByteU5BU5D_t3397334013* ___sessionId_11;
	// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::cipherSuite
	CipherSuite_t491456551 * ___cipherSuite_12;

public:
	inline static int32_t get_offset_of_compressionMethod_9() { return static_cast<int32_t>(offsetof(TlsServerHello_t1289300668, ___compressionMethod_9)); }
	inline int32_t get_compressionMethod_9() const { return ___compressionMethod_9; }
	inline int32_t* get_address_of_compressionMethod_9() { return &___compressionMethod_9; }
	inline void set_compressionMethod_9(int32_t value)
	{
		___compressionMethod_9 = value;
	}

	inline static int32_t get_offset_of_random_10() { return static_cast<int32_t>(offsetof(TlsServerHello_t1289300668, ___random_10)); }
	inline ByteU5BU5D_t3397334013* get_random_10() const { return ___random_10; }
	inline ByteU5BU5D_t3397334013** get_address_of_random_10() { return &___random_10; }
	inline void set_random_10(ByteU5BU5D_t3397334013* value)
	{
		___random_10 = value;
		Il2CppCodeGenWriteBarrier(&___random_10, value);
	}

	inline static int32_t get_offset_of_sessionId_11() { return static_cast<int32_t>(offsetof(TlsServerHello_t1289300668, ___sessionId_11)); }
	inline ByteU5BU5D_t3397334013* get_sessionId_11() const { return ___sessionId_11; }
	inline ByteU5BU5D_t3397334013** get_address_of_sessionId_11() { return &___sessionId_11; }
	inline void set_sessionId_11(ByteU5BU5D_t3397334013* value)
	{
		___sessionId_11 = value;
		Il2CppCodeGenWriteBarrier(&___sessionId_11, value);
	}

	inline static int32_t get_offset_of_cipherSuite_12() { return static_cast<int32_t>(offsetof(TlsServerHello_t1289300668, ___cipherSuite_12)); }
	inline CipherSuite_t491456551 * get_cipherSuite_12() const { return ___cipherSuite_12; }
	inline CipherSuite_t491456551 ** get_address_of_cipherSuite_12() { return &___cipherSuite_12; }
	inline void set_cipherSuite_12(CipherSuite_t491456551 * value)
	{
		___cipherSuite_12 = value;
		Il2CppCodeGenWriteBarrier(&___cipherSuite_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
