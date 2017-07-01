#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Security_Cryptography_X509Certifica283079845.h"

// System.Security.Cryptography.X509Certificates.X509ExtensionCollection
struct X509ExtensionCollection_t650873211;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t870392;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName
struct X500DistinguishedName_t452415348;
// System.Security.Cryptography.Oid
struct Oid_t3221867120;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t324051958;
// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Certificate2
struct  X509Certificate2_t4056456767  : public X509Certificate_t283079845
{
public:
	// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate2::_archived
	bool ____archived_5;
	// System.Security.Cryptography.X509Certificates.X509ExtensionCollection System.Security.Cryptography.X509Certificates.X509Certificate2::_extensions
	X509ExtensionCollection_t650873211 * ____extensions_6;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::_name
	String_t* ____name_7;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::_serial
	String_t* ____serial_8;
	// System.Security.Cryptography.X509Certificates.PublicKey System.Security.Cryptography.X509Certificates.X509Certificate2::_publicKey
	PublicKey_t870392 * ____publicKey_9;
	// System.Security.Cryptography.X509Certificates.X500DistinguishedName System.Security.Cryptography.X509Certificates.X509Certificate2::issuer_name
	X500DistinguishedName_t452415348 * ___issuer_name_10;
	// System.Security.Cryptography.X509Certificates.X500DistinguishedName System.Security.Cryptography.X509Certificates.X509Certificate2::subject_name
	X500DistinguishedName_t452415348 * ___subject_name_11;
	// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.X509Certificate2::signature_algorithm
	Oid_t3221867120 * ___signature_algorithm_12;
	// Mono.Security.X509.X509Certificate System.Security.Cryptography.X509Certificates.X509Certificate2::_cert
	X509Certificate_t324051958 * ____cert_13;

public:
	inline static int32_t get_offset_of__archived_5() { return static_cast<int32_t>(offsetof(X509Certificate2_t4056456767, ____archived_5)); }
	inline bool get__archived_5() const { return ____archived_5; }
	inline bool* get_address_of__archived_5() { return &____archived_5; }
	inline void set__archived_5(bool value)
	{
		____archived_5 = value;
	}

	inline static int32_t get_offset_of__extensions_6() { return static_cast<int32_t>(offsetof(X509Certificate2_t4056456767, ____extensions_6)); }
	inline X509ExtensionCollection_t650873211 * get__extensions_6() const { return ____extensions_6; }
	inline X509ExtensionCollection_t650873211 ** get_address_of__extensions_6() { return &____extensions_6; }
	inline void set__extensions_6(X509ExtensionCollection_t650873211 * value)
	{
		____extensions_6 = value;
		Il2CppCodeGenWriteBarrier(&____extensions_6, value);
	}

	inline static int32_t get_offset_of__name_7() { return static_cast<int32_t>(offsetof(X509Certificate2_t4056456767, ____name_7)); }
	inline String_t* get__name_7() const { return ____name_7; }
	inline String_t** get_address_of__name_7() { return &____name_7; }
	inline void set__name_7(String_t* value)
	{
		____name_7 = value;
		Il2CppCodeGenWriteBarrier(&____name_7, value);
	}

	inline static int32_t get_offset_of__serial_8() { return static_cast<int32_t>(offsetof(X509Certificate2_t4056456767, ____serial_8)); }
	inline String_t* get__serial_8() const { return ____serial_8; }
	inline String_t** get_address_of__serial_8() { return &____serial_8; }
	inline void set__serial_8(String_t* value)
	{
		____serial_8 = value;
		Il2CppCodeGenWriteBarrier(&____serial_8, value);
	}

	inline static int32_t get_offset_of__publicKey_9() { return static_cast<int32_t>(offsetof(X509Certificate2_t4056456767, ____publicKey_9)); }
	inline PublicKey_t870392 * get__publicKey_9() const { return ____publicKey_9; }
	inline PublicKey_t870392 ** get_address_of__publicKey_9() { return &____publicKey_9; }
	inline void set__publicKey_9(PublicKey_t870392 * value)
	{
		____publicKey_9 = value;
		Il2CppCodeGenWriteBarrier(&____publicKey_9, value);
	}

	inline static int32_t get_offset_of_issuer_name_10() { return static_cast<int32_t>(offsetof(X509Certificate2_t4056456767, ___issuer_name_10)); }
	inline X500DistinguishedName_t452415348 * get_issuer_name_10() const { return ___issuer_name_10; }
	inline X500DistinguishedName_t452415348 ** get_address_of_issuer_name_10() { return &___issuer_name_10; }
	inline void set_issuer_name_10(X500DistinguishedName_t452415348 * value)
	{
		___issuer_name_10 = value;
		Il2CppCodeGenWriteBarrier(&___issuer_name_10, value);
	}

	inline static int32_t get_offset_of_subject_name_11() { return static_cast<int32_t>(offsetof(X509Certificate2_t4056456767, ___subject_name_11)); }
	inline X500DistinguishedName_t452415348 * get_subject_name_11() const { return ___subject_name_11; }
	inline X500DistinguishedName_t452415348 ** get_address_of_subject_name_11() { return &___subject_name_11; }
	inline void set_subject_name_11(X500DistinguishedName_t452415348 * value)
	{
		___subject_name_11 = value;
		Il2CppCodeGenWriteBarrier(&___subject_name_11, value);
	}

	inline static int32_t get_offset_of_signature_algorithm_12() { return static_cast<int32_t>(offsetof(X509Certificate2_t4056456767, ___signature_algorithm_12)); }
	inline Oid_t3221867120 * get_signature_algorithm_12() const { return ___signature_algorithm_12; }
	inline Oid_t3221867120 ** get_address_of_signature_algorithm_12() { return &___signature_algorithm_12; }
	inline void set_signature_algorithm_12(Oid_t3221867120 * value)
	{
		___signature_algorithm_12 = value;
		Il2CppCodeGenWriteBarrier(&___signature_algorithm_12, value);
	}

	inline static int32_t get_offset_of__cert_13() { return static_cast<int32_t>(offsetof(X509Certificate2_t4056456767, ____cert_13)); }
	inline X509Certificate_t324051958 * get__cert_13() const { return ____cert_13; }
	inline X509Certificate_t324051958 ** get_address_of__cert_13() { return &____cert_13; }
	inline void set__cert_13(X509Certificate_t324051958 * value)
	{
		____cert_13 = value;
		Il2CppCodeGenWriteBarrier(&____cert_13, value);
	}
};

struct X509Certificate2_t4056456767_StaticFields
{
public:
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::empty_error
	String_t* ___empty_error_14;
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2::commonName
	ByteU5BU5D_t3397334013* ___commonName_15;
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2::email
	ByteU5BU5D_t3397334013* ___email_16;
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2::signedData
	ByteU5BU5D_t3397334013* ___signedData_17;

public:
	inline static int32_t get_offset_of_empty_error_14() { return static_cast<int32_t>(offsetof(X509Certificate2_t4056456767_StaticFields, ___empty_error_14)); }
	inline String_t* get_empty_error_14() const { return ___empty_error_14; }
	inline String_t** get_address_of_empty_error_14() { return &___empty_error_14; }
	inline void set_empty_error_14(String_t* value)
	{
		___empty_error_14 = value;
		Il2CppCodeGenWriteBarrier(&___empty_error_14, value);
	}

	inline static int32_t get_offset_of_commonName_15() { return static_cast<int32_t>(offsetof(X509Certificate2_t4056456767_StaticFields, ___commonName_15)); }
	inline ByteU5BU5D_t3397334013* get_commonName_15() const { return ___commonName_15; }
	inline ByteU5BU5D_t3397334013** get_address_of_commonName_15() { return &___commonName_15; }
	inline void set_commonName_15(ByteU5BU5D_t3397334013* value)
	{
		___commonName_15 = value;
		Il2CppCodeGenWriteBarrier(&___commonName_15, value);
	}

	inline static int32_t get_offset_of_email_16() { return static_cast<int32_t>(offsetof(X509Certificate2_t4056456767_StaticFields, ___email_16)); }
	inline ByteU5BU5D_t3397334013* get_email_16() const { return ___email_16; }
	inline ByteU5BU5D_t3397334013** get_address_of_email_16() { return &___email_16; }
	inline void set_email_16(ByteU5BU5D_t3397334013* value)
	{
		___email_16 = value;
		Il2CppCodeGenWriteBarrier(&___email_16, value);
	}

	inline static int32_t get_offset_of_signedData_17() { return static_cast<int32_t>(offsetof(X509Certificate2_t4056456767_StaticFields, ___signedData_17)); }
	inline ByteU5BU5D_t3397334013* get_signedData_17() const { return ___signedData_17; }
	inline ByteU5BU5D_t3397334013** get_address_of_signedData_17() { return &___signedData_17; }
	inline void set_signedData_17(ByteU5BU5D_t3397334013* value)
	{
		___signedData_17 = value;
		Il2CppCodeGenWriteBarrier(&___signedData_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
