#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherAlg4212518094.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_HashAlgor1654661965.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ExchangeAl954949548.h"
#include "mscorlib_System_Security_Cryptography_CipherMode162592484.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;
// Mono.Security.Protocol.Tls.Context
struct Context_t4285182719;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t1108166522;
// System.Security.Cryptography.ICryptoTransform
struct ICryptoTransform_t281704372;
// System.Security.Cryptography.KeyedHashAlgorithm
struct KeyedHashAlgorithm_t1374150027;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.CipherSuite
struct  CipherSuite_t491456551  : public Il2CppObject
{
public:
	// System.Int16 Mono.Security.Protocol.Tls.CipherSuite::code
	int16_t ___code_1;
	// System.String Mono.Security.Protocol.Tls.CipherSuite::name
	String_t* ___name_2;
	// Mono.Security.Protocol.Tls.CipherAlgorithmType Mono.Security.Protocol.Tls.CipherSuite::cipherAlgorithmType
	int32_t ___cipherAlgorithmType_3;
	// Mono.Security.Protocol.Tls.HashAlgorithmType Mono.Security.Protocol.Tls.CipherSuite::hashAlgorithmType
	int32_t ___hashAlgorithmType_4;
	// Mono.Security.Protocol.Tls.ExchangeAlgorithmType Mono.Security.Protocol.Tls.CipherSuite::exchangeAlgorithmType
	int32_t ___exchangeAlgorithmType_5;
	// System.Boolean Mono.Security.Protocol.Tls.CipherSuite::isExportable
	bool ___isExportable_6;
	// System.Security.Cryptography.CipherMode Mono.Security.Protocol.Tls.CipherSuite::cipherMode
	int32_t ___cipherMode_7;
	// System.Byte Mono.Security.Protocol.Tls.CipherSuite::keyMaterialSize
	uint8_t ___keyMaterialSize_8;
	// System.Int32 Mono.Security.Protocol.Tls.CipherSuite::keyBlockSize
	int32_t ___keyBlockSize_9;
	// System.Byte Mono.Security.Protocol.Tls.CipherSuite::expandedKeyMaterialSize
	uint8_t ___expandedKeyMaterialSize_10;
	// System.Int16 Mono.Security.Protocol.Tls.CipherSuite::effectiveKeyBits
	int16_t ___effectiveKeyBits_11;
	// System.Byte Mono.Security.Protocol.Tls.CipherSuite::ivSize
	uint8_t ___ivSize_12;
	// System.Byte Mono.Security.Protocol.Tls.CipherSuite::blockSize
	uint8_t ___blockSize_13;
	// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.CipherSuite::context
	Context_t4285182719 * ___context_14;
	// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.Protocol.Tls.CipherSuite::encryptionAlgorithm
	SymmetricAlgorithm_t1108166522 * ___encryptionAlgorithm_15;
	// System.Security.Cryptography.ICryptoTransform Mono.Security.Protocol.Tls.CipherSuite::encryptionCipher
	Il2CppObject * ___encryptionCipher_16;
	// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.Protocol.Tls.CipherSuite::decryptionAlgorithm
	SymmetricAlgorithm_t1108166522 * ___decryptionAlgorithm_17;
	// System.Security.Cryptography.ICryptoTransform Mono.Security.Protocol.Tls.CipherSuite::decryptionCipher
	Il2CppObject * ___decryptionCipher_18;
	// System.Security.Cryptography.KeyedHashAlgorithm Mono.Security.Protocol.Tls.CipherSuite::clientHMAC
	KeyedHashAlgorithm_t1374150027 * ___clientHMAC_19;
	// System.Security.Cryptography.KeyedHashAlgorithm Mono.Security.Protocol.Tls.CipherSuite::serverHMAC
	KeyedHashAlgorithm_t1374150027 * ___serverHMAC_20;

public:
	inline static int32_t get_offset_of_code_1() { return static_cast<int32_t>(offsetof(CipherSuite_t491456551, ___code_1)); }
	inline int16_t get_code_1() const { return ___code_1; }
	inline int16_t* get_address_of_code_1() { return &___code_1; }
	inline void set_code_1(int16_t value)
	{
		___code_1 = value;
	}

	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(CipherSuite_t491456551, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier(&___name_2, value);
	}

	inline static int32_t get_offset_of_cipherAlgorithmType_3() { return static_cast<int32_t>(offsetof(CipherSuite_t491456551, ___cipherAlgorithmType_3)); }
	inline int32_t get_cipherAlgorithmType_3() const { return ___cipherAlgorithmType_3; }
	inline int32_t* get_address_of_cipherAlgorithmType_3() { return &___cipherAlgorithmType_3; }
	inline void set_cipherAlgorithmType_3(int32_t value)
	{
		___cipherAlgorithmType_3 = value;
	}

	inline static int32_t get_offset_of_hashAlgorithmType_4() { return static_cast<int32_t>(offsetof(CipherSuite_t491456551, ___hashAlgorithmType_4)); }
	inline int32_t get_hashAlgorithmType_4() const { return ___hashAlgorithmType_4; }
	inline int32_t* get_address_of_hashAlgorithmType_4() { return &___hashAlgorithmType_4; }
	inline void set_hashAlgorithmType_4(int32_t value)
	{
		___hashAlgorithmType_4 = value;
	}

	inline static int32_t get_offset_of_exchangeAlgorithmType_5() { return static_cast<int32_t>(offsetof(CipherSuite_t491456551, ___exchangeAlgorithmType_5)); }
	inline int32_t get_exchangeAlgorithmType_5() const { return ___exchangeAlgorithmType_5; }
	inline int32_t* get_address_of_exchangeAlgorithmType_5() { return &___exchangeAlgorithmType_5; }
	inline void set_exchangeAlgorithmType_5(int32_t value)
	{
		___exchangeAlgorithmType_5 = value;
	}

	inline static int32_t get_offset_of_isExportable_6() { return static_cast<int32_t>(offsetof(CipherSuite_t491456551, ___isExportable_6)); }
	inline bool get_isExportable_6() const { return ___isExportable_6; }
	inline bool* get_address_of_isExportable_6() { return &___isExportable_6; }
	inline void set_isExportable_6(bool value)
	{
		___isExportable_6 = value;
	}

	inline static int32_t get_offset_of_cipherMode_7() { return static_cast<int32_t>(offsetof(CipherSuite_t491456551, ___cipherMode_7)); }
	inline int32_t get_cipherMode_7() const { return ___cipherMode_7; }
	inline int32_t* get_address_of_cipherMode_7() { return &___cipherMode_7; }
	inline void set_cipherMode_7(int32_t value)
	{
		___cipherMode_7 = value;
	}

	inline static int32_t get_offset_of_keyMaterialSize_8() { return static_cast<int32_t>(offsetof(CipherSuite_t491456551, ___keyMaterialSize_8)); }
	inline uint8_t get_keyMaterialSize_8() const { return ___keyMaterialSize_8; }
	inline uint8_t* get_address_of_keyMaterialSize_8() { return &___keyMaterialSize_8; }
	inline void set_keyMaterialSize_8(uint8_t value)
	{
		___keyMaterialSize_8 = value;
	}

	inline static int32_t get_offset_of_keyBlockSize_9() { return static_cast<int32_t>(offsetof(CipherSuite_t491456551, ___keyBlockSize_9)); }
	inline int32_t get_keyBlockSize_9() const { return ___keyBlockSize_9; }
	inline int32_t* get_address_of_keyBlockSize_9() { return &___keyBlockSize_9; }
	inline void set_keyBlockSize_9(int32_t value)
	{
		___keyBlockSize_9 = value;
	}

	inline static int32_t get_offset_of_expandedKeyMaterialSize_10() { return static_cast<int32_t>(offsetof(CipherSuite_t491456551, ___expandedKeyMaterialSize_10)); }
	inline uint8_t get_expandedKeyMaterialSize_10() const { return ___expandedKeyMaterialSize_10; }
	inline uint8_t* get_address_of_expandedKeyMaterialSize_10() { return &___expandedKeyMaterialSize_10; }
	inline void set_expandedKeyMaterialSize_10(uint8_t value)
	{
		___expandedKeyMaterialSize_10 = value;
	}

	inline static int32_t get_offset_of_effectiveKeyBits_11() { return static_cast<int32_t>(offsetof(CipherSuite_t491456551, ___effectiveKeyBits_11)); }
	inline int16_t get_effectiveKeyBits_11() const { return ___effectiveKeyBits_11; }
	inline int16_t* get_address_of_effectiveKeyBits_11() { return &___effectiveKeyBits_11; }
	inline void set_effectiveKeyBits_11(int16_t value)
	{
		___effectiveKeyBits_11 = value;
	}

	inline static int32_t get_offset_of_ivSize_12() { return static_cast<int32_t>(offsetof(CipherSuite_t491456551, ___ivSize_12)); }
	inline uint8_t get_ivSize_12() const { return ___ivSize_12; }
	inline uint8_t* get_address_of_ivSize_12() { return &___ivSize_12; }
	inline void set_ivSize_12(uint8_t value)
	{
		___ivSize_12 = value;
	}

	inline static int32_t get_offset_of_blockSize_13() { return static_cast<int32_t>(offsetof(CipherSuite_t491456551, ___blockSize_13)); }
	inline uint8_t get_blockSize_13() const { return ___blockSize_13; }
	inline uint8_t* get_address_of_blockSize_13() { return &___blockSize_13; }
	inline void set_blockSize_13(uint8_t value)
	{
		___blockSize_13 = value;
	}

	inline static int32_t get_offset_of_context_14() { return static_cast<int32_t>(offsetof(CipherSuite_t491456551, ___context_14)); }
	inline Context_t4285182719 * get_context_14() const { return ___context_14; }
	inline Context_t4285182719 ** get_address_of_context_14() { return &___context_14; }
	inline void set_context_14(Context_t4285182719 * value)
	{
		___context_14 = value;
		Il2CppCodeGenWriteBarrier(&___context_14, value);
	}

	inline static int32_t get_offset_of_encryptionAlgorithm_15() { return static_cast<int32_t>(offsetof(CipherSuite_t491456551, ___encryptionAlgorithm_15)); }
	inline SymmetricAlgorithm_t1108166522 * get_encryptionAlgorithm_15() const { return ___encryptionAlgorithm_15; }
	inline SymmetricAlgorithm_t1108166522 ** get_address_of_encryptionAlgorithm_15() { return &___encryptionAlgorithm_15; }
	inline void set_encryptionAlgorithm_15(SymmetricAlgorithm_t1108166522 * value)
	{
		___encryptionAlgorithm_15 = value;
		Il2CppCodeGenWriteBarrier(&___encryptionAlgorithm_15, value);
	}

	inline static int32_t get_offset_of_encryptionCipher_16() { return static_cast<int32_t>(offsetof(CipherSuite_t491456551, ___encryptionCipher_16)); }
	inline Il2CppObject * get_encryptionCipher_16() const { return ___encryptionCipher_16; }
	inline Il2CppObject ** get_address_of_encryptionCipher_16() { return &___encryptionCipher_16; }
	inline void set_encryptionCipher_16(Il2CppObject * value)
	{
		___encryptionCipher_16 = value;
		Il2CppCodeGenWriteBarrier(&___encryptionCipher_16, value);
	}

	inline static int32_t get_offset_of_decryptionAlgorithm_17() { return static_cast<int32_t>(offsetof(CipherSuite_t491456551, ___decryptionAlgorithm_17)); }
	inline SymmetricAlgorithm_t1108166522 * get_decryptionAlgorithm_17() const { return ___decryptionAlgorithm_17; }
	inline SymmetricAlgorithm_t1108166522 ** get_address_of_decryptionAlgorithm_17() { return &___decryptionAlgorithm_17; }
	inline void set_decryptionAlgorithm_17(SymmetricAlgorithm_t1108166522 * value)
	{
		___decryptionAlgorithm_17 = value;
		Il2CppCodeGenWriteBarrier(&___decryptionAlgorithm_17, value);
	}

	inline static int32_t get_offset_of_decryptionCipher_18() { return static_cast<int32_t>(offsetof(CipherSuite_t491456551, ___decryptionCipher_18)); }
	inline Il2CppObject * get_decryptionCipher_18() const { return ___decryptionCipher_18; }
	inline Il2CppObject ** get_address_of_decryptionCipher_18() { return &___decryptionCipher_18; }
	inline void set_decryptionCipher_18(Il2CppObject * value)
	{
		___decryptionCipher_18 = value;
		Il2CppCodeGenWriteBarrier(&___decryptionCipher_18, value);
	}

	inline static int32_t get_offset_of_clientHMAC_19() { return static_cast<int32_t>(offsetof(CipherSuite_t491456551, ___clientHMAC_19)); }
	inline KeyedHashAlgorithm_t1374150027 * get_clientHMAC_19() const { return ___clientHMAC_19; }
	inline KeyedHashAlgorithm_t1374150027 ** get_address_of_clientHMAC_19() { return &___clientHMAC_19; }
	inline void set_clientHMAC_19(KeyedHashAlgorithm_t1374150027 * value)
	{
		___clientHMAC_19 = value;
		Il2CppCodeGenWriteBarrier(&___clientHMAC_19, value);
	}

	inline static int32_t get_offset_of_serverHMAC_20() { return static_cast<int32_t>(offsetof(CipherSuite_t491456551, ___serverHMAC_20)); }
	inline KeyedHashAlgorithm_t1374150027 * get_serverHMAC_20() const { return ___serverHMAC_20; }
	inline KeyedHashAlgorithm_t1374150027 ** get_address_of_serverHMAC_20() { return &___serverHMAC_20; }
	inline void set_serverHMAC_20(KeyedHashAlgorithm_t1374150027 * value)
	{
		___serverHMAC_20 = value;
		Il2CppCodeGenWriteBarrier(&___serverHMAC_20, value);
	}
};

struct CipherSuite_t491456551_StaticFields
{
public:
	// System.Byte[] Mono.Security.Protocol.Tls.CipherSuite::EmptyArray
	ByteU5BU5D_t3397334013* ___EmptyArray_0;

public:
	inline static int32_t get_offset_of_EmptyArray_0() { return static_cast<int32_t>(offsetof(CipherSuite_t491456551_StaticFields, ___EmptyArray_0)); }
	inline ByteU5BU5D_t3397334013* get_EmptyArray_0() const { return ___EmptyArray_0; }
	inline ByteU5BU5D_t3397334013** get_address_of_EmptyArray_0() { return &___EmptyArray_0; }
	inline void set_EmptyArray_0(ByteU5BU5D_t3397334013* value)
	{
		___EmptyArray_0 = value;
		Il2CppCodeGenWriteBarrier(&___EmptyArray_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
