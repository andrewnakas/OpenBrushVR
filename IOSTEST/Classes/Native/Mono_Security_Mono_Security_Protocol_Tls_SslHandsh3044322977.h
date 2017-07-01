#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Security_Cryptography_HashAlgorith2624936259.h"

// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t2624936259;
// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.SslHandshakeHash
struct  SslHandshakeHash_t3044322977  : public HashAlgorithm_t2624936259
{
public:
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Protocol.Tls.SslHandshakeHash::md5
	HashAlgorithm_t2624936259 * ___md5_4;
	// System.Security.Cryptography.HashAlgorithm Mono.Security.Protocol.Tls.SslHandshakeHash::sha
	HashAlgorithm_t2624936259 * ___sha_5;
	// System.Boolean Mono.Security.Protocol.Tls.SslHandshakeHash::hashing
	bool ___hashing_6;
	// System.Byte[] Mono.Security.Protocol.Tls.SslHandshakeHash::secret
	ByteU5BU5D_t3397334013* ___secret_7;
	// System.Byte[] Mono.Security.Protocol.Tls.SslHandshakeHash::innerPadMD5
	ByteU5BU5D_t3397334013* ___innerPadMD5_8;
	// System.Byte[] Mono.Security.Protocol.Tls.SslHandshakeHash::outerPadMD5
	ByteU5BU5D_t3397334013* ___outerPadMD5_9;
	// System.Byte[] Mono.Security.Protocol.Tls.SslHandshakeHash::innerPadSHA
	ByteU5BU5D_t3397334013* ___innerPadSHA_10;
	// System.Byte[] Mono.Security.Protocol.Tls.SslHandshakeHash::outerPadSHA
	ByteU5BU5D_t3397334013* ___outerPadSHA_11;

public:
	inline static int32_t get_offset_of_md5_4() { return static_cast<int32_t>(offsetof(SslHandshakeHash_t3044322977, ___md5_4)); }
	inline HashAlgorithm_t2624936259 * get_md5_4() const { return ___md5_4; }
	inline HashAlgorithm_t2624936259 ** get_address_of_md5_4() { return &___md5_4; }
	inline void set_md5_4(HashAlgorithm_t2624936259 * value)
	{
		___md5_4 = value;
		Il2CppCodeGenWriteBarrier(&___md5_4, value);
	}

	inline static int32_t get_offset_of_sha_5() { return static_cast<int32_t>(offsetof(SslHandshakeHash_t3044322977, ___sha_5)); }
	inline HashAlgorithm_t2624936259 * get_sha_5() const { return ___sha_5; }
	inline HashAlgorithm_t2624936259 ** get_address_of_sha_5() { return &___sha_5; }
	inline void set_sha_5(HashAlgorithm_t2624936259 * value)
	{
		___sha_5 = value;
		Il2CppCodeGenWriteBarrier(&___sha_5, value);
	}

	inline static int32_t get_offset_of_hashing_6() { return static_cast<int32_t>(offsetof(SslHandshakeHash_t3044322977, ___hashing_6)); }
	inline bool get_hashing_6() const { return ___hashing_6; }
	inline bool* get_address_of_hashing_6() { return &___hashing_6; }
	inline void set_hashing_6(bool value)
	{
		___hashing_6 = value;
	}

	inline static int32_t get_offset_of_secret_7() { return static_cast<int32_t>(offsetof(SslHandshakeHash_t3044322977, ___secret_7)); }
	inline ByteU5BU5D_t3397334013* get_secret_7() const { return ___secret_7; }
	inline ByteU5BU5D_t3397334013** get_address_of_secret_7() { return &___secret_7; }
	inline void set_secret_7(ByteU5BU5D_t3397334013* value)
	{
		___secret_7 = value;
		Il2CppCodeGenWriteBarrier(&___secret_7, value);
	}

	inline static int32_t get_offset_of_innerPadMD5_8() { return static_cast<int32_t>(offsetof(SslHandshakeHash_t3044322977, ___innerPadMD5_8)); }
	inline ByteU5BU5D_t3397334013* get_innerPadMD5_8() const { return ___innerPadMD5_8; }
	inline ByteU5BU5D_t3397334013** get_address_of_innerPadMD5_8() { return &___innerPadMD5_8; }
	inline void set_innerPadMD5_8(ByteU5BU5D_t3397334013* value)
	{
		___innerPadMD5_8 = value;
		Il2CppCodeGenWriteBarrier(&___innerPadMD5_8, value);
	}

	inline static int32_t get_offset_of_outerPadMD5_9() { return static_cast<int32_t>(offsetof(SslHandshakeHash_t3044322977, ___outerPadMD5_9)); }
	inline ByteU5BU5D_t3397334013* get_outerPadMD5_9() const { return ___outerPadMD5_9; }
	inline ByteU5BU5D_t3397334013** get_address_of_outerPadMD5_9() { return &___outerPadMD5_9; }
	inline void set_outerPadMD5_9(ByteU5BU5D_t3397334013* value)
	{
		___outerPadMD5_9 = value;
		Il2CppCodeGenWriteBarrier(&___outerPadMD5_9, value);
	}

	inline static int32_t get_offset_of_innerPadSHA_10() { return static_cast<int32_t>(offsetof(SslHandshakeHash_t3044322977, ___innerPadSHA_10)); }
	inline ByteU5BU5D_t3397334013* get_innerPadSHA_10() const { return ___innerPadSHA_10; }
	inline ByteU5BU5D_t3397334013** get_address_of_innerPadSHA_10() { return &___innerPadSHA_10; }
	inline void set_innerPadSHA_10(ByteU5BU5D_t3397334013* value)
	{
		___innerPadSHA_10 = value;
		Il2CppCodeGenWriteBarrier(&___innerPadSHA_10, value);
	}

	inline static int32_t get_offset_of_outerPadSHA_11() { return static_cast<int32_t>(offsetof(SslHandshakeHash_t3044322977, ___outerPadSHA_11)); }
	inline ByteU5BU5D_t3397334013* get_outerPadSHA_11() const { return ___outerPadSHA_11; }
	inline ByteU5BU5D_t3397334013** get_address_of_outerPadSHA_11() { return &___outerPadSHA_11; }
	inline void set_outerPadSHA_11(ByteU5BU5D_t3397334013* value)
	{
		___outerPadSHA_11 = value;
		Il2CppCodeGenWriteBarrier(&___outerPadSHA_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
