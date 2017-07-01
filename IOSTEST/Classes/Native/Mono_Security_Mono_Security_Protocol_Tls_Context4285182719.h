#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityPr155967584.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityC3722381418.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake2540099417.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake1820731088.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Mono.Security.Protocol.Tls.TlsServerSettings
struct TlsServerSettings_t403340211;
// Mono.Security.Protocol.Tls.TlsClientSettings
struct TlsClientSettings_t2311449551;
// Mono.Security.Protocol.Tls.SecurityParameters
struct SecurityParameters_t2290372928;
// Mono.Security.Protocol.Tls.CipherSuiteCollection
struct CipherSuiteCollection_t2431504453;
// Mono.Security.Protocol.Tls.TlsStream
struct TlsStream_t4089752859;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2510243513;
// Mono.Security.Protocol.Tls.RecordProtocol
struct RecordProtocol_t3166895267;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.Context
struct  Context_t4285182719  : public Il2CppObject
{
public:
	// Mono.Security.Protocol.Tls.SecurityProtocolType Mono.Security.Protocol.Tls.Context::securityProtocol
	int32_t ___securityProtocol_0;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::sessionId
	ByteU5BU5D_t3397334013* ___sessionId_1;
	// Mono.Security.Protocol.Tls.SecurityCompressionType Mono.Security.Protocol.Tls.Context::compressionMethod
	int32_t ___compressionMethod_2;
	// Mono.Security.Protocol.Tls.TlsServerSettings Mono.Security.Protocol.Tls.Context::serverSettings
	TlsServerSettings_t403340211 * ___serverSettings_3;
	// Mono.Security.Protocol.Tls.TlsClientSettings Mono.Security.Protocol.Tls.Context::clientSettings
	TlsClientSettings_t2311449551 * ___clientSettings_4;
	// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::current
	SecurityParameters_t2290372928 * ___current_5;
	// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::negotiating
	SecurityParameters_t2290372928 * ___negotiating_6;
	// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::read
	SecurityParameters_t2290372928 * ___read_7;
	// Mono.Security.Protocol.Tls.SecurityParameters Mono.Security.Protocol.Tls.Context::write
	SecurityParameters_t2290372928 * ___write_8;
	// Mono.Security.Protocol.Tls.CipherSuiteCollection Mono.Security.Protocol.Tls.Context::supportedCiphers
	CipherSuiteCollection_t2431504453 * ___supportedCiphers_9;
	// Mono.Security.Protocol.Tls.Handshake.HandshakeType Mono.Security.Protocol.Tls.Context::lastHandshakeMsg
	uint8_t ___lastHandshakeMsg_10;
	// Mono.Security.Protocol.Tls.HandshakeState Mono.Security.Protocol.Tls.Context::handshakeState
	int32_t ___handshakeState_11;
	// System.Boolean Mono.Security.Protocol.Tls.Context::abbreviatedHandshake
	bool ___abbreviatedHandshake_12;
	// System.Boolean Mono.Security.Protocol.Tls.Context::receivedConnectionEnd
	bool ___receivedConnectionEnd_13;
	// System.Boolean Mono.Security.Protocol.Tls.Context::sentConnectionEnd
	bool ___sentConnectionEnd_14;
	// System.Boolean Mono.Security.Protocol.Tls.Context::protocolNegotiated
	bool ___protocolNegotiated_15;
	// System.UInt64 Mono.Security.Protocol.Tls.Context::writeSequenceNumber
	uint64_t ___writeSequenceNumber_16;
	// System.UInt64 Mono.Security.Protocol.Tls.Context::readSequenceNumber
	uint64_t ___readSequenceNumber_17;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::clientRandom
	ByteU5BU5D_t3397334013* ___clientRandom_18;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::serverRandom
	ByteU5BU5D_t3397334013* ___serverRandom_19;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::randomCS
	ByteU5BU5D_t3397334013* ___randomCS_20;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::randomSC
	ByteU5BU5D_t3397334013* ___randomSC_21;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::masterSecret
	ByteU5BU5D_t3397334013* ___masterSecret_22;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::clientWriteKey
	ByteU5BU5D_t3397334013* ___clientWriteKey_23;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::serverWriteKey
	ByteU5BU5D_t3397334013* ___serverWriteKey_24;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::clientWriteIV
	ByteU5BU5D_t3397334013* ___clientWriteIV_25;
	// System.Byte[] Mono.Security.Protocol.Tls.Context::serverWriteIV
	ByteU5BU5D_t3397334013* ___serverWriteIV_26;
	// Mono.Security.Protocol.Tls.TlsStream Mono.Security.Protocol.Tls.Context::handshakeMessages
	TlsStream_t4089752859 * ___handshakeMessages_27;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Protocol.Tls.Context::random
	RandomNumberGenerator_t2510243513 * ___random_28;
	// Mono.Security.Protocol.Tls.RecordProtocol Mono.Security.Protocol.Tls.Context::recordProtocol
	RecordProtocol_t3166895267 * ___recordProtocol_29;

public:
	inline static int32_t get_offset_of_securityProtocol_0() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___securityProtocol_0)); }
	inline int32_t get_securityProtocol_0() const { return ___securityProtocol_0; }
	inline int32_t* get_address_of_securityProtocol_0() { return &___securityProtocol_0; }
	inline void set_securityProtocol_0(int32_t value)
	{
		___securityProtocol_0 = value;
	}

	inline static int32_t get_offset_of_sessionId_1() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___sessionId_1)); }
	inline ByteU5BU5D_t3397334013* get_sessionId_1() const { return ___sessionId_1; }
	inline ByteU5BU5D_t3397334013** get_address_of_sessionId_1() { return &___sessionId_1; }
	inline void set_sessionId_1(ByteU5BU5D_t3397334013* value)
	{
		___sessionId_1 = value;
		Il2CppCodeGenWriteBarrier(&___sessionId_1, value);
	}

	inline static int32_t get_offset_of_compressionMethod_2() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___compressionMethod_2)); }
	inline int32_t get_compressionMethod_2() const { return ___compressionMethod_2; }
	inline int32_t* get_address_of_compressionMethod_2() { return &___compressionMethod_2; }
	inline void set_compressionMethod_2(int32_t value)
	{
		___compressionMethod_2 = value;
	}

	inline static int32_t get_offset_of_serverSettings_3() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___serverSettings_3)); }
	inline TlsServerSettings_t403340211 * get_serverSettings_3() const { return ___serverSettings_3; }
	inline TlsServerSettings_t403340211 ** get_address_of_serverSettings_3() { return &___serverSettings_3; }
	inline void set_serverSettings_3(TlsServerSettings_t403340211 * value)
	{
		___serverSettings_3 = value;
		Il2CppCodeGenWriteBarrier(&___serverSettings_3, value);
	}

	inline static int32_t get_offset_of_clientSettings_4() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___clientSettings_4)); }
	inline TlsClientSettings_t2311449551 * get_clientSettings_4() const { return ___clientSettings_4; }
	inline TlsClientSettings_t2311449551 ** get_address_of_clientSettings_4() { return &___clientSettings_4; }
	inline void set_clientSettings_4(TlsClientSettings_t2311449551 * value)
	{
		___clientSettings_4 = value;
		Il2CppCodeGenWriteBarrier(&___clientSettings_4, value);
	}

	inline static int32_t get_offset_of_current_5() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___current_5)); }
	inline SecurityParameters_t2290372928 * get_current_5() const { return ___current_5; }
	inline SecurityParameters_t2290372928 ** get_address_of_current_5() { return &___current_5; }
	inline void set_current_5(SecurityParameters_t2290372928 * value)
	{
		___current_5 = value;
		Il2CppCodeGenWriteBarrier(&___current_5, value);
	}

	inline static int32_t get_offset_of_negotiating_6() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___negotiating_6)); }
	inline SecurityParameters_t2290372928 * get_negotiating_6() const { return ___negotiating_6; }
	inline SecurityParameters_t2290372928 ** get_address_of_negotiating_6() { return &___negotiating_6; }
	inline void set_negotiating_6(SecurityParameters_t2290372928 * value)
	{
		___negotiating_6 = value;
		Il2CppCodeGenWriteBarrier(&___negotiating_6, value);
	}

	inline static int32_t get_offset_of_read_7() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___read_7)); }
	inline SecurityParameters_t2290372928 * get_read_7() const { return ___read_7; }
	inline SecurityParameters_t2290372928 ** get_address_of_read_7() { return &___read_7; }
	inline void set_read_7(SecurityParameters_t2290372928 * value)
	{
		___read_7 = value;
		Il2CppCodeGenWriteBarrier(&___read_7, value);
	}

	inline static int32_t get_offset_of_write_8() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___write_8)); }
	inline SecurityParameters_t2290372928 * get_write_8() const { return ___write_8; }
	inline SecurityParameters_t2290372928 ** get_address_of_write_8() { return &___write_8; }
	inline void set_write_8(SecurityParameters_t2290372928 * value)
	{
		___write_8 = value;
		Il2CppCodeGenWriteBarrier(&___write_8, value);
	}

	inline static int32_t get_offset_of_supportedCiphers_9() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___supportedCiphers_9)); }
	inline CipherSuiteCollection_t2431504453 * get_supportedCiphers_9() const { return ___supportedCiphers_9; }
	inline CipherSuiteCollection_t2431504453 ** get_address_of_supportedCiphers_9() { return &___supportedCiphers_9; }
	inline void set_supportedCiphers_9(CipherSuiteCollection_t2431504453 * value)
	{
		___supportedCiphers_9 = value;
		Il2CppCodeGenWriteBarrier(&___supportedCiphers_9, value);
	}

	inline static int32_t get_offset_of_lastHandshakeMsg_10() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___lastHandshakeMsg_10)); }
	inline uint8_t get_lastHandshakeMsg_10() const { return ___lastHandshakeMsg_10; }
	inline uint8_t* get_address_of_lastHandshakeMsg_10() { return &___lastHandshakeMsg_10; }
	inline void set_lastHandshakeMsg_10(uint8_t value)
	{
		___lastHandshakeMsg_10 = value;
	}

	inline static int32_t get_offset_of_handshakeState_11() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___handshakeState_11)); }
	inline int32_t get_handshakeState_11() const { return ___handshakeState_11; }
	inline int32_t* get_address_of_handshakeState_11() { return &___handshakeState_11; }
	inline void set_handshakeState_11(int32_t value)
	{
		___handshakeState_11 = value;
	}

	inline static int32_t get_offset_of_abbreviatedHandshake_12() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___abbreviatedHandshake_12)); }
	inline bool get_abbreviatedHandshake_12() const { return ___abbreviatedHandshake_12; }
	inline bool* get_address_of_abbreviatedHandshake_12() { return &___abbreviatedHandshake_12; }
	inline void set_abbreviatedHandshake_12(bool value)
	{
		___abbreviatedHandshake_12 = value;
	}

	inline static int32_t get_offset_of_receivedConnectionEnd_13() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___receivedConnectionEnd_13)); }
	inline bool get_receivedConnectionEnd_13() const { return ___receivedConnectionEnd_13; }
	inline bool* get_address_of_receivedConnectionEnd_13() { return &___receivedConnectionEnd_13; }
	inline void set_receivedConnectionEnd_13(bool value)
	{
		___receivedConnectionEnd_13 = value;
	}

	inline static int32_t get_offset_of_sentConnectionEnd_14() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___sentConnectionEnd_14)); }
	inline bool get_sentConnectionEnd_14() const { return ___sentConnectionEnd_14; }
	inline bool* get_address_of_sentConnectionEnd_14() { return &___sentConnectionEnd_14; }
	inline void set_sentConnectionEnd_14(bool value)
	{
		___sentConnectionEnd_14 = value;
	}

	inline static int32_t get_offset_of_protocolNegotiated_15() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___protocolNegotiated_15)); }
	inline bool get_protocolNegotiated_15() const { return ___protocolNegotiated_15; }
	inline bool* get_address_of_protocolNegotiated_15() { return &___protocolNegotiated_15; }
	inline void set_protocolNegotiated_15(bool value)
	{
		___protocolNegotiated_15 = value;
	}

	inline static int32_t get_offset_of_writeSequenceNumber_16() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___writeSequenceNumber_16)); }
	inline uint64_t get_writeSequenceNumber_16() const { return ___writeSequenceNumber_16; }
	inline uint64_t* get_address_of_writeSequenceNumber_16() { return &___writeSequenceNumber_16; }
	inline void set_writeSequenceNumber_16(uint64_t value)
	{
		___writeSequenceNumber_16 = value;
	}

	inline static int32_t get_offset_of_readSequenceNumber_17() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___readSequenceNumber_17)); }
	inline uint64_t get_readSequenceNumber_17() const { return ___readSequenceNumber_17; }
	inline uint64_t* get_address_of_readSequenceNumber_17() { return &___readSequenceNumber_17; }
	inline void set_readSequenceNumber_17(uint64_t value)
	{
		___readSequenceNumber_17 = value;
	}

	inline static int32_t get_offset_of_clientRandom_18() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___clientRandom_18)); }
	inline ByteU5BU5D_t3397334013* get_clientRandom_18() const { return ___clientRandom_18; }
	inline ByteU5BU5D_t3397334013** get_address_of_clientRandom_18() { return &___clientRandom_18; }
	inline void set_clientRandom_18(ByteU5BU5D_t3397334013* value)
	{
		___clientRandom_18 = value;
		Il2CppCodeGenWriteBarrier(&___clientRandom_18, value);
	}

	inline static int32_t get_offset_of_serverRandom_19() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___serverRandom_19)); }
	inline ByteU5BU5D_t3397334013* get_serverRandom_19() const { return ___serverRandom_19; }
	inline ByteU5BU5D_t3397334013** get_address_of_serverRandom_19() { return &___serverRandom_19; }
	inline void set_serverRandom_19(ByteU5BU5D_t3397334013* value)
	{
		___serverRandom_19 = value;
		Il2CppCodeGenWriteBarrier(&___serverRandom_19, value);
	}

	inline static int32_t get_offset_of_randomCS_20() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___randomCS_20)); }
	inline ByteU5BU5D_t3397334013* get_randomCS_20() const { return ___randomCS_20; }
	inline ByteU5BU5D_t3397334013** get_address_of_randomCS_20() { return &___randomCS_20; }
	inline void set_randomCS_20(ByteU5BU5D_t3397334013* value)
	{
		___randomCS_20 = value;
		Il2CppCodeGenWriteBarrier(&___randomCS_20, value);
	}

	inline static int32_t get_offset_of_randomSC_21() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___randomSC_21)); }
	inline ByteU5BU5D_t3397334013* get_randomSC_21() const { return ___randomSC_21; }
	inline ByteU5BU5D_t3397334013** get_address_of_randomSC_21() { return &___randomSC_21; }
	inline void set_randomSC_21(ByteU5BU5D_t3397334013* value)
	{
		___randomSC_21 = value;
		Il2CppCodeGenWriteBarrier(&___randomSC_21, value);
	}

	inline static int32_t get_offset_of_masterSecret_22() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___masterSecret_22)); }
	inline ByteU5BU5D_t3397334013* get_masterSecret_22() const { return ___masterSecret_22; }
	inline ByteU5BU5D_t3397334013** get_address_of_masterSecret_22() { return &___masterSecret_22; }
	inline void set_masterSecret_22(ByteU5BU5D_t3397334013* value)
	{
		___masterSecret_22 = value;
		Il2CppCodeGenWriteBarrier(&___masterSecret_22, value);
	}

	inline static int32_t get_offset_of_clientWriteKey_23() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___clientWriteKey_23)); }
	inline ByteU5BU5D_t3397334013* get_clientWriteKey_23() const { return ___clientWriteKey_23; }
	inline ByteU5BU5D_t3397334013** get_address_of_clientWriteKey_23() { return &___clientWriteKey_23; }
	inline void set_clientWriteKey_23(ByteU5BU5D_t3397334013* value)
	{
		___clientWriteKey_23 = value;
		Il2CppCodeGenWriteBarrier(&___clientWriteKey_23, value);
	}

	inline static int32_t get_offset_of_serverWriteKey_24() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___serverWriteKey_24)); }
	inline ByteU5BU5D_t3397334013* get_serverWriteKey_24() const { return ___serverWriteKey_24; }
	inline ByteU5BU5D_t3397334013** get_address_of_serverWriteKey_24() { return &___serverWriteKey_24; }
	inline void set_serverWriteKey_24(ByteU5BU5D_t3397334013* value)
	{
		___serverWriteKey_24 = value;
		Il2CppCodeGenWriteBarrier(&___serverWriteKey_24, value);
	}

	inline static int32_t get_offset_of_clientWriteIV_25() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___clientWriteIV_25)); }
	inline ByteU5BU5D_t3397334013* get_clientWriteIV_25() const { return ___clientWriteIV_25; }
	inline ByteU5BU5D_t3397334013** get_address_of_clientWriteIV_25() { return &___clientWriteIV_25; }
	inline void set_clientWriteIV_25(ByteU5BU5D_t3397334013* value)
	{
		___clientWriteIV_25 = value;
		Il2CppCodeGenWriteBarrier(&___clientWriteIV_25, value);
	}

	inline static int32_t get_offset_of_serverWriteIV_26() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___serverWriteIV_26)); }
	inline ByteU5BU5D_t3397334013* get_serverWriteIV_26() const { return ___serverWriteIV_26; }
	inline ByteU5BU5D_t3397334013** get_address_of_serverWriteIV_26() { return &___serverWriteIV_26; }
	inline void set_serverWriteIV_26(ByteU5BU5D_t3397334013* value)
	{
		___serverWriteIV_26 = value;
		Il2CppCodeGenWriteBarrier(&___serverWriteIV_26, value);
	}

	inline static int32_t get_offset_of_handshakeMessages_27() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___handshakeMessages_27)); }
	inline TlsStream_t4089752859 * get_handshakeMessages_27() const { return ___handshakeMessages_27; }
	inline TlsStream_t4089752859 ** get_address_of_handshakeMessages_27() { return &___handshakeMessages_27; }
	inline void set_handshakeMessages_27(TlsStream_t4089752859 * value)
	{
		___handshakeMessages_27 = value;
		Il2CppCodeGenWriteBarrier(&___handshakeMessages_27, value);
	}

	inline static int32_t get_offset_of_random_28() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___random_28)); }
	inline RandomNumberGenerator_t2510243513 * get_random_28() const { return ___random_28; }
	inline RandomNumberGenerator_t2510243513 ** get_address_of_random_28() { return &___random_28; }
	inline void set_random_28(RandomNumberGenerator_t2510243513 * value)
	{
		___random_28 = value;
		Il2CppCodeGenWriteBarrier(&___random_28, value);
	}

	inline static int32_t get_offset_of_recordProtocol_29() { return static_cast<int32_t>(offsetof(Context_t4285182719, ___recordProtocol_29)); }
	inline RecordProtocol_t3166895267 * get_recordProtocol_29() const { return ___recordProtocol_29; }
	inline RecordProtocol_t3166895267 ** get_address_of_recordProtocol_29() { return &___recordProtocol_29; }
	inline void set_recordProtocol_29(RecordProtocol_t3166895267 * value)
	{
		___recordProtocol_29 = value;
		Il2CppCodeGenWriteBarrier(&___recordProtocol_29, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
