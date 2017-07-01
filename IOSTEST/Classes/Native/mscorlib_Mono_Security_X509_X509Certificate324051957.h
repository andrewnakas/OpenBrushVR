#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_DateTime693205669.h"

// Mono.Security.ASN1
struct ASN1_t924533535;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.String
struct String_t;
// System.Security.Cryptography.DSA
struct DSA_t903174880;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t1640144839;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.X509Certificate
struct  X509Certificate_t324051957  : public Il2CppObject
{
public:
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::decoder
	ASN1_t924533535 * ___decoder_0;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_encodedcert
	ByteU5BU5D_t3397334013* ___m_encodedcert_1;
	// System.DateTime Mono.Security.X509.X509Certificate::m_from
	DateTime_t693205669  ___m_from_2;
	// System.DateTime Mono.Security.X509.X509Certificate::m_until
	DateTime_t693205669  ___m_until_3;
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::issuer
	ASN1_t924533535 * ___issuer_4;
	// System.String Mono.Security.X509.X509Certificate::m_issuername
	String_t* ___m_issuername_5;
	// System.String Mono.Security.X509.X509Certificate::m_keyalgo
	String_t* ___m_keyalgo_6;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_keyalgoparams
	ByteU5BU5D_t3397334013* ___m_keyalgoparams_7;
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::subject
	ASN1_t924533535 * ___subject_8;
	// System.String Mono.Security.X509.X509Certificate::m_subject
	String_t* ___m_subject_9;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_publickey
	ByteU5BU5D_t3397334013* ___m_publickey_10;
	// System.Byte[] Mono.Security.X509.X509Certificate::signature
	ByteU5BU5D_t3397334013* ___signature_11;
	// System.String Mono.Security.X509.X509Certificate::m_signaturealgo
	String_t* ___m_signaturealgo_12;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_signaturealgoparams
	ByteU5BU5D_t3397334013* ___m_signaturealgoparams_13;
	// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::_dsa
	DSA_t903174880 * ____dsa_14;
	// System.Int32 Mono.Security.X509.X509Certificate::version
	int32_t ___version_15;
	// System.Byte[] Mono.Security.X509.X509Certificate::serialnumber
	ByteU5BU5D_t3397334013* ___serialnumber_16;
	// System.Byte[] Mono.Security.X509.X509Certificate::issuerUniqueID
	ByteU5BU5D_t3397334013* ___issuerUniqueID_17;
	// System.Byte[] Mono.Security.X509.X509Certificate::subjectUniqueID
	ByteU5BU5D_t3397334013* ___subjectUniqueID_18;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Certificate::extensions
	X509ExtensionCollection_t1640144839 * ___extensions_19;

public:
	inline static int32_t get_offset_of_decoder_0() { return static_cast<int32_t>(offsetof(X509Certificate_t324051957, ___decoder_0)); }
	inline ASN1_t924533535 * get_decoder_0() const { return ___decoder_0; }
	inline ASN1_t924533535 ** get_address_of_decoder_0() { return &___decoder_0; }
	inline void set_decoder_0(ASN1_t924533535 * value)
	{
		___decoder_0 = value;
		Il2CppCodeGenWriteBarrier(&___decoder_0, value);
	}

	inline static int32_t get_offset_of_m_encodedcert_1() { return static_cast<int32_t>(offsetof(X509Certificate_t324051957, ___m_encodedcert_1)); }
	inline ByteU5BU5D_t3397334013* get_m_encodedcert_1() const { return ___m_encodedcert_1; }
	inline ByteU5BU5D_t3397334013** get_address_of_m_encodedcert_1() { return &___m_encodedcert_1; }
	inline void set_m_encodedcert_1(ByteU5BU5D_t3397334013* value)
	{
		___m_encodedcert_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_encodedcert_1, value);
	}

	inline static int32_t get_offset_of_m_from_2() { return static_cast<int32_t>(offsetof(X509Certificate_t324051957, ___m_from_2)); }
	inline DateTime_t693205669  get_m_from_2() const { return ___m_from_2; }
	inline DateTime_t693205669 * get_address_of_m_from_2() { return &___m_from_2; }
	inline void set_m_from_2(DateTime_t693205669  value)
	{
		___m_from_2 = value;
	}

	inline static int32_t get_offset_of_m_until_3() { return static_cast<int32_t>(offsetof(X509Certificate_t324051957, ___m_until_3)); }
	inline DateTime_t693205669  get_m_until_3() const { return ___m_until_3; }
	inline DateTime_t693205669 * get_address_of_m_until_3() { return &___m_until_3; }
	inline void set_m_until_3(DateTime_t693205669  value)
	{
		___m_until_3 = value;
	}

	inline static int32_t get_offset_of_issuer_4() { return static_cast<int32_t>(offsetof(X509Certificate_t324051957, ___issuer_4)); }
	inline ASN1_t924533535 * get_issuer_4() const { return ___issuer_4; }
	inline ASN1_t924533535 ** get_address_of_issuer_4() { return &___issuer_4; }
	inline void set_issuer_4(ASN1_t924533535 * value)
	{
		___issuer_4 = value;
		Il2CppCodeGenWriteBarrier(&___issuer_4, value);
	}

	inline static int32_t get_offset_of_m_issuername_5() { return static_cast<int32_t>(offsetof(X509Certificate_t324051957, ___m_issuername_5)); }
	inline String_t* get_m_issuername_5() const { return ___m_issuername_5; }
	inline String_t** get_address_of_m_issuername_5() { return &___m_issuername_5; }
	inline void set_m_issuername_5(String_t* value)
	{
		___m_issuername_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_issuername_5, value);
	}

	inline static int32_t get_offset_of_m_keyalgo_6() { return static_cast<int32_t>(offsetof(X509Certificate_t324051957, ___m_keyalgo_6)); }
	inline String_t* get_m_keyalgo_6() const { return ___m_keyalgo_6; }
	inline String_t** get_address_of_m_keyalgo_6() { return &___m_keyalgo_6; }
	inline void set_m_keyalgo_6(String_t* value)
	{
		___m_keyalgo_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_keyalgo_6, value);
	}

	inline static int32_t get_offset_of_m_keyalgoparams_7() { return static_cast<int32_t>(offsetof(X509Certificate_t324051957, ___m_keyalgoparams_7)); }
	inline ByteU5BU5D_t3397334013* get_m_keyalgoparams_7() const { return ___m_keyalgoparams_7; }
	inline ByteU5BU5D_t3397334013** get_address_of_m_keyalgoparams_7() { return &___m_keyalgoparams_7; }
	inline void set_m_keyalgoparams_7(ByteU5BU5D_t3397334013* value)
	{
		___m_keyalgoparams_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_keyalgoparams_7, value);
	}

	inline static int32_t get_offset_of_subject_8() { return static_cast<int32_t>(offsetof(X509Certificate_t324051957, ___subject_8)); }
	inline ASN1_t924533535 * get_subject_8() const { return ___subject_8; }
	inline ASN1_t924533535 ** get_address_of_subject_8() { return &___subject_8; }
	inline void set_subject_8(ASN1_t924533535 * value)
	{
		___subject_8 = value;
		Il2CppCodeGenWriteBarrier(&___subject_8, value);
	}

	inline static int32_t get_offset_of_m_subject_9() { return static_cast<int32_t>(offsetof(X509Certificate_t324051957, ___m_subject_9)); }
	inline String_t* get_m_subject_9() const { return ___m_subject_9; }
	inline String_t** get_address_of_m_subject_9() { return &___m_subject_9; }
	inline void set_m_subject_9(String_t* value)
	{
		___m_subject_9 = value;
		Il2CppCodeGenWriteBarrier(&___m_subject_9, value);
	}

	inline static int32_t get_offset_of_m_publickey_10() { return static_cast<int32_t>(offsetof(X509Certificate_t324051957, ___m_publickey_10)); }
	inline ByteU5BU5D_t3397334013* get_m_publickey_10() const { return ___m_publickey_10; }
	inline ByteU5BU5D_t3397334013** get_address_of_m_publickey_10() { return &___m_publickey_10; }
	inline void set_m_publickey_10(ByteU5BU5D_t3397334013* value)
	{
		___m_publickey_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_publickey_10, value);
	}

	inline static int32_t get_offset_of_signature_11() { return static_cast<int32_t>(offsetof(X509Certificate_t324051957, ___signature_11)); }
	inline ByteU5BU5D_t3397334013* get_signature_11() const { return ___signature_11; }
	inline ByteU5BU5D_t3397334013** get_address_of_signature_11() { return &___signature_11; }
	inline void set_signature_11(ByteU5BU5D_t3397334013* value)
	{
		___signature_11 = value;
		Il2CppCodeGenWriteBarrier(&___signature_11, value);
	}

	inline static int32_t get_offset_of_m_signaturealgo_12() { return static_cast<int32_t>(offsetof(X509Certificate_t324051957, ___m_signaturealgo_12)); }
	inline String_t* get_m_signaturealgo_12() const { return ___m_signaturealgo_12; }
	inline String_t** get_address_of_m_signaturealgo_12() { return &___m_signaturealgo_12; }
	inline void set_m_signaturealgo_12(String_t* value)
	{
		___m_signaturealgo_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_signaturealgo_12, value);
	}

	inline static int32_t get_offset_of_m_signaturealgoparams_13() { return static_cast<int32_t>(offsetof(X509Certificate_t324051957, ___m_signaturealgoparams_13)); }
	inline ByteU5BU5D_t3397334013* get_m_signaturealgoparams_13() const { return ___m_signaturealgoparams_13; }
	inline ByteU5BU5D_t3397334013** get_address_of_m_signaturealgoparams_13() { return &___m_signaturealgoparams_13; }
	inline void set_m_signaturealgoparams_13(ByteU5BU5D_t3397334013* value)
	{
		___m_signaturealgoparams_13 = value;
		Il2CppCodeGenWriteBarrier(&___m_signaturealgoparams_13, value);
	}

	inline static int32_t get_offset_of__dsa_14() { return static_cast<int32_t>(offsetof(X509Certificate_t324051957, ____dsa_14)); }
	inline DSA_t903174880 * get__dsa_14() const { return ____dsa_14; }
	inline DSA_t903174880 ** get_address_of__dsa_14() { return &____dsa_14; }
	inline void set__dsa_14(DSA_t903174880 * value)
	{
		____dsa_14 = value;
		Il2CppCodeGenWriteBarrier(&____dsa_14, value);
	}

	inline static int32_t get_offset_of_version_15() { return static_cast<int32_t>(offsetof(X509Certificate_t324051957, ___version_15)); }
	inline int32_t get_version_15() const { return ___version_15; }
	inline int32_t* get_address_of_version_15() { return &___version_15; }
	inline void set_version_15(int32_t value)
	{
		___version_15 = value;
	}

	inline static int32_t get_offset_of_serialnumber_16() { return static_cast<int32_t>(offsetof(X509Certificate_t324051957, ___serialnumber_16)); }
	inline ByteU5BU5D_t3397334013* get_serialnumber_16() const { return ___serialnumber_16; }
	inline ByteU5BU5D_t3397334013** get_address_of_serialnumber_16() { return &___serialnumber_16; }
	inline void set_serialnumber_16(ByteU5BU5D_t3397334013* value)
	{
		___serialnumber_16 = value;
		Il2CppCodeGenWriteBarrier(&___serialnumber_16, value);
	}

	inline static int32_t get_offset_of_issuerUniqueID_17() { return static_cast<int32_t>(offsetof(X509Certificate_t324051957, ___issuerUniqueID_17)); }
	inline ByteU5BU5D_t3397334013* get_issuerUniqueID_17() const { return ___issuerUniqueID_17; }
	inline ByteU5BU5D_t3397334013** get_address_of_issuerUniqueID_17() { return &___issuerUniqueID_17; }
	inline void set_issuerUniqueID_17(ByteU5BU5D_t3397334013* value)
	{
		___issuerUniqueID_17 = value;
		Il2CppCodeGenWriteBarrier(&___issuerUniqueID_17, value);
	}

	inline static int32_t get_offset_of_subjectUniqueID_18() { return static_cast<int32_t>(offsetof(X509Certificate_t324051957, ___subjectUniqueID_18)); }
	inline ByteU5BU5D_t3397334013* get_subjectUniqueID_18() const { return ___subjectUniqueID_18; }
	inline ByteU5BU5D_t3397334013** get_address_of_subjectUniqueID_18() { return &___subjectUniqueID_18; }
	inline void set_subjectUniqueID_18(ByteU5BU5D_t3397334013* value)
	{
		___subjectUniqueID_18 = value;
		Il2CppCodeGenWriteBarrier(&___subjectUniqueID_18, value);
	}

	inline static int32_t get_offset_of_extensions_19() { return static_cast<int32_t>(offsetof(X509Certificate_t324051957, ___extensions_19)); }
	inline X509ExtensionCollection_t1640144839 * get_extensions_19() const { return ___extensions_19; }
	inline X509ExtensionCollection_t1640144839 ** get_address_of_extensions_19() { return &___extensions_19; }
	inline void set_extensions_19(X509ExtensionCollection_t1640144839 * value)
	{
		___extensions_19 = value;
		Il2CppCodeGenWriteBarrier(&___extensions_19, value);
	}
};

struct X509Certificate_t324051957_StaticFields
{
public:
	// System.String Mono.Security.X509.X509Certificate::encoding_error
	String_t* ___encoding_error_20;

public:
	inline static int32_t get_offset_of_encoding_error_20() { return static_cast<int32_t>(offsetof(X509Certificate_t324051957_StaticFields, ___encoding_error_20)); }
	inline String_t* get_encoding_error_20() const { return ___encoding_error_20; }
	inline String_t** get_address_of_encoding_error_20() { return &___encoding_error_20; }
	inline void set_encoding_error_20(String_t* value)
	{
		___encoding_error_20 = value;
		Il2CppCodeGenWriteBarrier(&___encoding_error_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
