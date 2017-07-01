#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Math_Prime_Generator_SequentialS463670656.h"
#include "Mono_Security_Mono_Security_ASN1924533535.h"
#include "Mono_Security_Mono_Security_ASN1Convert3301846396.h"
#include "Mono_Security_Mono_Security_BitConverterLE2825370260.h"
#include "Mono_Security_Mono_Security_PKCS73223261922.h"
#include "Mono_Security_Mono_Security_PKCS7_ContentInfo1443605387.h"
#include "Mono_Security_Mono_Security_PKCS7_EncryptedData2656813772.h"
#include "Mono_Security_Mono_Security_Cryptography_ARC4Manag3379271383.h"
#include "Mono_Security_Mono_Security_Cryptography_CryptoCon4146607874.h"
#include "Mono_Security_Mono_Security_Cryptography_KeyBuilde3965881084.h"
#include "Mono_Security_Mono_Security_Cryptography_MD2726199179.h"
#include "Mono_Security_Mono_Security_Cryptography_MD2Manage1421454332.h"
#include "Mono_Security_Mono_Security_Cryptography_MD41888998593.h"
#include "Mono_Security_Mono_Security_Cryptography_MD4Manage2176273562.h"
#include "Mono_Security_Mono_Security_Cryptography_PKCS13312870480.h"
#include "Mono_Security_Mono_Security_Cryptography_PKCS82103016899.h"
#include "Mono_Security_Mono_Security_Cryptography_PKCS8_Priva92917103.h"
#include "Mono_Security_Mono_Security_Cryptography_PKCS8_Enc1722354997.h"
#include "Mono_Security_Mono_Security_Cryptography_RC42789934315.h"
#include "Mono_Security_Mono_Security_Cryptography_RSAManage3034748747.h"
#include "Mono_Security_Mono_Security_Cryptography_RSAManaged108853709.h"
#include "Mono_Security_Mono_Security_X509_SafeBag2166702855.h"
#include "Mono_Security_Mono_Security_X509_PKCS121362584794.h"
#include "Mono_Security_Mono_Security_X509_PKCS12_DeriveByte1740753016.h"
#include "Mono_Security_Mono_Security_X509_X501349661534.h"
#include "Mono_Security_Mono_Security_X509_X509Certificate324051957.h"
#include "Mono_Security_Mono_Security_X509_X509CertificateCo3592472865.h"
#include "Mono_Security_Mono_Security_X509_X509CertificateCo3487770522.h"
#include "Mono_Security_Mono_Security_X509_X509Chain1938971907.h"
#include "Mono_Security_Mono_Security_X509_X509ChainStatusFl2843686920.h"
#include "Mono_Security_Mono_Security_X509_X509Crl1699034837.h"
#include "Mono_Security_Mono_Security_X509_X509Crl_X509CrlEnt743353844.h"
#include "Mono_Security_Mono_Security_X509_X509Extension1439760127.h"
#include "Mono_Security_Mono_Security_X509_X509ExtensionColl1640144839.h"
#include "Mono_Security_Mono_Security_X509_X509Store4028973563.h"
#include "Mono_Security_Mono_Security_X509_X509StoreManager1740460066.h"
#include "Mono_Security_Mono_Security_X509_X509Stores3001420398.h"
#include "Mono_Security_Mono_Security_X509_Extensions_Authori795428182.h"
#include "Mono_Security_Mono_Security_X509_Extensions_BasicC3608227951.h"
#include "Mono_Security_Mono_Security_X509_Extensions_Extend3816993686.h"
#include "Mono_Security_Mono_Security_X509_Extensions_Genera2355256240.h"
#include "Mono_Security_Mono_Security_X509_Extensions_KeyUsag530589947.h"
#include "Mono_Security_Mono_Security_X509_Extensions_KeyUsa1909787375.h"
#include "Mono_Security_Mono_Security_X509_Extensions_Netsca3880736488.h"
#include "Mono_Security_Mono_Security_X509_Extensions_Netsca3955735183.h"
#include "Mono_Security_Mono_Security_X509_Extensions_Subject604050261.h"
#include "Mono_Security_Mono_Security_Cryptography_HMAC2707728663.h"
#include "Mono_Security_Mono_Security_Cryptography_MD5SHA13340472487.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertLeve1706602846.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertDescr844791462.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Alert3405955216.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherAlg4212518094.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuit491456551.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSui2431504453.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSui3273693255.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ClientCon3002158488.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ClientRec2694504884.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ClientSes3468069089.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ClientSes3595945587.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ContentTyp859870085.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Context4285182719.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ExchangeAl954949548.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake1820731088.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_HashAlgor1654661965.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_HttpsClie3823629320.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_RecordPro3166895267.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_RecordPro1946181211.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_RecordProt173216930.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_RSASslSign389653629.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_RSASslSig1282301050.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityC3722381418.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityP2290372928.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityPr155967584.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ServerCon3823737132.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Validatio1782558132.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SslClient3918817353.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SslCipher1404755603.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SslHandsh3044322977.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SslStreamB934199321.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SslStream1610391122.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsCipherS396038680.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsClient2311449551.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsExcepti583514812.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsServerS403340211.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsStream4089752859.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake4001384466.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake3938752374.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake2540099417.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake2537917473.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake4150496570.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake3939745042.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake2939633944.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake3808761250.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_905088469.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake2187269356.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake1869592958.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake1289300668.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_530021076.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake2172608670.h"
#include "Mono_Security_Mono_Math_Prime_PrimalityTest572679901.h"







#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize900 = { sizeof (SequentialSearchPrimeGeneratorBase_t463670657), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize901 = { sizeof (ASN1_t924533536), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable901[3] = 
{
	ASN1_t924533536::get_offset_of_m_nTag_0(),
	ASN1_t924533536::get_offset_of_m_aValue_1(),
	ASN1_t924533536::get_offset_of_elist_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize902 = { sizeof (ASN1Convert_t3301846397), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize903 = { sizeof (BitConverterLE_t2825370261), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize904 = { sizeof (PKCS7_t3223261923), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize905 = { sizeof (ContentInfo_t1443605388), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable905[2] = 
{
	ContentInfo_t1443605388::get_offset_of_contentType_0(),
	ContentInfo_t1443605388::get_offset_of_content_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize906 = { sizeof (EncryptedData_t2656813773), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable906[4] = 
{
	EncryptedData_t2656813773::get_offset_of__version_0(),
	EncryptedData_t2656813773::get_offset_of__content_1(),
	EncryptedData_t2656813773::get_offset_of__encryptionAlgorithm_2(),
	EncryptedData_t2656813773::get_offset_of__encrypted_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize907 = { sizeof (ARC4Managed_t3379271383), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable907[5] = 
{
	ARC4Managed_t3379271383::get_offset_of_key_12(),
	ARC4Managed_t3379271383::get_offset_of_state_13(),
	ARC4Managed_t3379271383::get_offset_of_x_14(),
	ARC4Managed_t3379271383::get_offset_of_y_15(),
	ARC4Managed_t3379271383::get_offset_of_m_disposed_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize908 = { sizeof (CryptoConvert_t4146607875), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize909 = { sizeof (KeyBuilder_t3965881085), -1, sizeof(KeyBuilder_t3965881085_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable909[1] = 
{
	KeyBuilder_t3965881085_StaticFields::get_offset_of_rng_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize910 = { sizeof (MD2_t726199179), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize911 = { sizeof (MD2Managed_t1421454332), -1, sizeof(MD2Managed_t1421454332_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable911[6] = 
{
	MD2Managed_t1421454332::get_offset_of_state_4(),
	MD2Managed_t1421454332::get_offset_of_checksum_5(),
	MD2Managed_t1421454332::get_offset_of_buffer_6(),
	MD2Managed_t1421454332::get_offset_of_count_7(),
	MD2Managed_t1421454332::get_offset_of_x_8(),
	MD2Managed_t1421454332_StaticFields::get_offset_of_PI_SUBST_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize912 = { sizeof (MD4_t1888998593), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize913 = { sizeof (MD4Managed_t2176273562), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable913[5] = 
{
	MD4Managed_t2176273562::get_offset_of_state_4(),
	MD4Managed_t2176273562::get_offset_of_buffer_5(),
	MD4Managed_t2176273562::get_offset_of_count_6(),
	MD4Managed_t2176273562::get_offset_of_x_7(),
	MD4Managed_t2176273562::get_offset_of_digest_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize914 = { sizeof (PKCS1_t3312870481), -1, sizeof(PKCS1_t3312870481_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable914[4] = 
{
	PKCS1_t3312870481_StaticFields::get_offset_of_emptySHA1_0(),
	PKCS1_t3312870481_StaticFields::get_offset_of_emptySHA256_1(),
	PKCS1_t3312870481_StaticFields::get_offset_of_emptySHA384_2(),
	PKCS1_t3312870481_StaticFields::get_offset_of_emptySHA512_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize915 = { sizeof (PKCS8_t2103016900), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize916 = { sizeof (PrivateKeyInfo_t92917104), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable916[4] = 
{
	PrivateKeyInfo_t92917104::get_offset_of__version_0(),
	PrivateKeyInfo_t92917104::get_offset_of__algorithm_1(),
	PrivateKeyInfo_t92917104::get_offset_of__key_2(),
	PrivateKeyInfo_t92917104::get_offset_of__list_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize917 = { sizeof (EncryptedPrivateKeyInfo_t1722354998), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable917[4] = 
{
	EncryptedPrivateKeyInfo_t1722354998::get_offset_of__algorithm_0(),
	EncryptedPrivateKeyInfo_t1722354998::get_offset_of__salt_1(),
	EncryptedPrivateKeyInfo_t1722354998::get_offset_of__iterations_2(),
	EncryptedPrivateKeyInfo_t1722354998::get_offset_of__data_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize918 = { sizeof (RC4_t2789934315), -1, sizeof(RC4_t2789934315_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable918[2] = 
{
	RC4_t2789934315_StaticFields::get_offset_of_s_legalBlockSizes_10(),
	RC4_t2789934315_StaticFields::get_offset_of_s_legalKeySizes_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize919 = { sizeof (RSAManaged_t3034748748), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable919[13] = 
{
	RSAManaged_t3034748748::get_offset_of_isCRTpossible_2(),
	RSAManaged_t3034748748::get_offset_of_keyBlinding_3(),
	RSAManaged_t3034748748::get_offset_of_keypairGenerated_4(),
	RSAManaged_t3034748748::get_offset_of_m_disposed_5(),
	RSAManaged_t3034748748::get_offset_of_d_6(),
	RSAManaged_t3034748748::get_offset_of_p_7(),
	RSAManaged_t3034748748::get_offset_of_q_8(),
	RSAManaged_t3034748748::get_offset_of_dp_9(),
	RSAManaged_t3034748748::get_offset_of_dq_10(),
	RSAManaged_t3034748748::get_offset_of_qInv_11(),
	RSAManaged_t3034748748::get_offset_of_n_12(),
	RSAManaged_t3034748748::get_offset_of_e_13(),
	RSAManaged_t3034748748::get_offset_of_KeyGenerated_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize920 = { sizeof (KeyGeneratedEventHandler_t108853710), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize921 = { sizeof (SafeBag_t2166702856), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable921[2] = 
{
	SafeBag_t2166702856::get_offset_of__bagOID_0(),
	SafeBag_t2166702856::get_offset_of__asn1_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize922 = { sizeof (PKCS12_t1362584795), -1, sizeof(PKCS12_t1362584795_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable922[17] = 
{
	PKCS12_t1362584795_StaticFields::get_offset_of_recommendedIterationCount_0(),
	PKCS12_t1362584795::get_offset_of__password_1(),
	PKCS12_t1362584795::get_offset_of__keyBags_2(),
	PKCS12_t1362584795::get_offset_of__secretBags_3(),
	PKCS12_t1362584795::get_offset_of__certs_4(),
	PKCS12_t1362584795::get_offset_of__keyBagsChanged_5(),
	PKCS12_t1362584795::get_offset_of__secretBagsChanged_6(),
	PKCS12_t1362584795::get_offset_of__certsChanged_7(),
	PKCS12_t1362584795::get_offset_of__iterations_8(),
	PKCS12_t1362584795::get_offset_of__safeBags_9(),
	PKCS12_t1362584795::get_offset_of__rng_10(),
	PKCS12_t1362584795_StaticFields::get_offset_of_password_max_length_11(),
	PKCS12_t1362584795_StaticFields::get_offset_of_U3CU3Ef__switchU24map5_12(),
	PKCS12_t1362584795_StaticFields::get_offset_of_U3CU3Ef__switchU24map6_13(),
	PKCS12_t1362584795_StaticFields::get_offset_of_U3CU3Ef__switchU24map7_14(),
	PKCS12_t1362584795_StaticFields::get_offset_of_U3CU3Ef__switchU24map8_15(),
	PKCS12_t1362584795_StaticFields::get_offset_of_U3CU3Ef__switchU24mapC_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize923 = { sizeof (DeriveBytes_t1740753017), -1, sizeof(DeriveBytes_t1740753017_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable923[7] = 
{
	DeriveBytes_t1740753017_StaticFields::get_offset_of_keyDiversifier_0(),
	DeriveBytes_t1740753017_StaticFields::get_offset_of_ivDiversifier_1(),
	DeriveBytes_t1740753017_StaticFields::get_offset_of_macDiversifier_2(),
	DeriveBytes_t1740753017::get_offset_of__hashName_3(),
	DeriveBytes_t1740753017::get_offset_of__iterations_4(),
	DeriveBytes_t1740753017::get_offset_of__password_5(),
	DeriveBytes_t1740753017::get_offset_of__salt_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize924 = { sizeof (X501_t349661535), -1, sizeof(X501_t349661535_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable924[15] = 
{
	X501_t349661535_StaticFields::get_offset_of_countryName_0(),
	X501_t349661535_StaticFields::get_offset_of_organizationName_1(),
	X501_t349661535_StaticFields::get_offset_of_organizationalUnitName_2(),
	X501_t349661535_StaticFields::get_offset_of_commonName_3(),
	X501_t349661535_StaticFields::get_offset_of_localityName_4(),
	X501_t349661535_StaticFields::get_offset_of_stateOrProvinceName_5(),
	X501_t349661535_StaticFields::get_offset_of_streetAddress_6(),
	X501_t349661535_StaticFields::get_offset_of_domainComponent_7(),
	X501_t349661535_StaticFields::get_offset_of_userid_8(),
	X501_t349661535_StaticFields::get_offset_of_email_9(),
	X501_t349661535_StaticFields::get_offset_of_dnQualifier_10(),
	X501_t349661535_StaticFields::get_offset_of_title_11(),
	X501_t349661535_StaticFields::get_offset_of_surname_12(),
	X501_t349661535_StaticFields::get_offset_of_givenName_13(),
	X501_t349661535_StaticFields::get_offset_of_initial_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize925 = { sizeof (X509Certificate_t324051958), -1, sizeof(X509Certificate_t324051958_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable925[26] = 
{
	X509Certificate_t324051958::get_offset_of_decoder_0(),
	X509Certificate_t324051958::get_offset_of_m_encodedcert_1(),
	X509Certificate_t324051958::get_offset_of_m_from_2(),
	X509Certificate_t324051958::get_offset_of_m_until_3(),
	X509Certificate_t324051958::get_offset_of_issuer_4(),
	X509Certificate_t324051958::get_offset_of_m_issuername_5(),
	X509Certificate_t324051958::get_offset_of_m_keyalgo_6(),
	X509Certificate_t324051958::get_offset_of_m_keyalgoparams_7(),
	X509Certificate_t324051958::get_offset_of_subject_8(),
	X509Certificate_t324051958::get_offset_of_m_subject_9(),
	X509Certificate_t324051958::get_offset_of_m_publickey_10(),
	X509Certificate_t324051958::get_offset_of_signature_11(),
	X509Certificate_t324051958::get_offset_of_m_signaturealgo_12(),
	X509Certificate_t324051958::get_offset_of_m_signaturealgoparams_13(),
	X509Certificate_t324051958::get_offset_of_certhash_14(),
	X509Certificate_t324051958::get_offset_of__rsa_15(),
	X509Certificate_t324051958::get_offset_of__dsa_16(),
	X509Certificate_t324051958::get_offset_of_version_17(),
	X509Certificate_t324051958::get_offset_of_serialnumber_18(),
	X509Certificate_t324051958::get_offset_of_issuerUniqueID_19(),
	X509Certificate_t324051958::get_offset_of_subjectUniqueID_20(),
	X509Certificate_t324051958::get_offset_of_extensions_21(),
	X509Certificate_t324051958_StaticFields::get_offset_of_encoding_error_22(),
	X509Certificate_t324051958_StaticFields::get_offset_of_U3CU3Ef__switchU24mapF_23(),
	X509Certificate_t324051958_StaticFields::get_offset_of_U3CU3Ef__switchU24map10_24(),
	X509Certificate_t324051958_StaticFields::get_offset_of_U3CU3Ef__switchU24map11_25(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize926 = { sizeof (X509CertificateCollection_t3592472866), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize927 = { sizeof (X509CertificateEnumerator_t3487770523), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable927[1] = 
{
	X509CertificateEnumerator_t3487770523::get_offset_of_enumerator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize928 = { sizeof (X509Chain_t1938971907), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable928[5] = 
{
	X509Chain_t1938971907::get_offset_of_roots_0(),
	X509Chain_t1938971907::get_offset_of_certs_1(),
	X509Chain_t1938971907::get_offset_of__root_2(),
	X509Chain_t1938971907::get_offset_of__chain_3(),
	X509Chain_t1938971907::get_offset_of__status_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize929 = { sizeof (X509ChainStatusFlags_t2843686920)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable929[8] = 
{
	X509ChainStatusFlags_t2843686920::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize930 = { sizeof (X509Crl_t1699034837), -1, sizeof(X509Crl_t1699034837_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable930[11] = 
{
	X509Crl_t1699034837::get_offset_of_issuer_0(),
	X509Crl_t1699034837::get_offset_of_version_1(),
	X509Crl_t1699034837::get_offset_of_thisUpdate_2(),
	X509Crl_t1699034837::get_offset_of_nextUpdate_3(),
	X509Crl_t1699034837::get_offset_of_entries_4(),
	X509Crl_t1699034837::get_offset_of_signatureOID_5(),
	X509Crl_t1699034837::get_offset_of_signature_6(),
	X509Crl_t1699034837::get_offset_of_extensions_7(),
	X509Crl_t1699034837::get_offset_of_encoded_8(),
	X509Crl_t1699034837::get_offset_of_hash_value_9(),
	X509Crl_t1699034837_StaticFields::get_offset_of_U3CU3Ef__switchU24map13_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize931 = { sizeof (X509CrlEntry_t743353844), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable931[3] = 
{
	X509CrlEntry_t743353844::get_offset_of_sn_0(),
	X509CrlEntry_t743353844::get_offset_of_revocationDate_1(),
	X509CrlEntry_t743353844::get_offset_of_extensions_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize932 = { sizeof (X509Extension_t1439760128), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable932[3] = 
{
	X509Extension_t1439760128::get_offset_of_extnOid_0(),
	X509Extension_t1439760128::get_offset_of_extnCritical_1(),
	X509Extension_t1439760128::get_offset_of_extnValue_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize933 = { sizeof (X509ExtensionCollection_t1640144840), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable933[1] = 
{
	X509ExtensionCollection_t1640144840::get_offset_of_readOnly_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize934 = { sizeof (X509Store_t4028973563), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable934[4] = 
{
	X509Store_t4028973563::get_offset_of__storePath_0(),
	X509Store_t4028973563::get_offset_of__certificates_1(),
	X509Store_t4028973563::get_offset_of__crls_2(),
	X509Store_t4028973563::get_offset_of__crl_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize935 = { sizeof (X509StoreManager_t1740460066), -1, sizeof(X509StoreManager_t1740460066_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable935[2] = 
{
	X509StoreManager_t1740460066_StaticFields::get_offset_of__userStore_0(),
	X509StoreManager_t1740460066_StaticFields::get_offset_of__machineStore_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize936 = { sizeof (X509Stores_t3001420398), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable936[2] = 
{
	X509Stores_t3001420398::get_offset_of__storePath_0(),
	X509Stores_t3001420398::get_offset_of__trusted_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize937 = { sizeof (AuthorityKeyIdentifierExtension_t795428182), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable937[1] = 
{
	AuthorityKeyIdentifierExtension_t795428182::get_offset_of_aki_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize938 = { sizeof (BasicConstraintsExtension_t3608227951), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable938[2] = 
{
	BasicConstraintsExtension_t3608227951::get_offset_of_cA_3(),
	BasicConstraintsExtension_t3608227951::get_offset_of_pathLenConstraint_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize939 = { sizeof (ExtendedKeyUsageExtension_t3816993686), -1, sizeof(ExtendedKeyUsageExtension_t3816993686_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable939[2] = 
{
	ExtendedKeyUsageExtension_t3816993686::get_offset_of_keyPurpose_3(),
	ExtendedKeyUsageExtension_t3816993686_StaticFields::get_offset_of_U3CU3Ef__switchU24map14_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize940 = { sizeof (GeneralNames_t2355256240), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable940[5] = 
{
	GeneralNames_t2355256240::get_offset_of_rfc822Name_0(),
	GeneralNames_t2355256240::get_offset_of_dnsName_1(),
	GeneralNames_t2355256240::get_offset_of_directoryNames_2(),
	GeneralNames_t2355256240::get_offset_of_uris_3(),
	GeneralNames_t2355256240::get_offset_of_ipAddr_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize941 = { sizeof (KeyUsages_t530589947)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable941[11] = 
{
	KeyUsages_t530589947::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize942 = { sizeof (KeyUsageExtension_t1909787375), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable942[1] = 
{
	KeyUsageExtension_t1909787375::get_offset_of_kubits_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize943 = { sizeof (NetscapeCertTypeExtension_t3880736488), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable943[1] = 
{
	NetscapeCertTypeExtension_t3880736488::get_offset_of_ctbits_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize944 = { sizeof (CertTypes_t3955735183)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable944[8] = 
{
	CertTypes_t3955735183::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize945 = { sizeof (SubjectAltNameExtension_t604050261), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable945[1] = 
{
	SubjectAltNameExtension_t604050261::get_offset_of__names_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize946 = { sizeof (HMAC_t2707728663), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable946[4] = 
{
	HMAC_t2707728663::get_offset_of_hash_5(),
	HMAC_t2707728663::get_offset_of_hashing_6(),
	HMAC_t2707728663::get_offset_of_innerPad_7(),
	HMAC_t2707728663::get_offset_of_outerPad_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize947 = { sizeof (MD5SHA1_t3340472487), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable947[3] = 
{
	MD5SHA1_t3340472487::get_offset_of_md5_4(),
	MD5SHA1_t3340472487::get_offset_of_sha_5(),
	MD5SHA1_t3340472487::get_offset_of_hashing_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize948 = { sizeof (AlertLevel_t1706602846)+ sizeof (Il2CppObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable948[3] = 
{
	AlertLevel_t1706602846::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize949 = { sizeof (AlertDescription_t844791462)+ sizeof (Il2CppObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable949[25] = 
{
	AlertDescription_t844791462::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize950 = { sizeof (Alert_t3405955216), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable950[2] = 
{
	Alert_t3405955216::get_offset_of_level_0(),
	Alert_t3405955216::get_offset_of_description_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize951 = { sizeof (CipherAlgorithmType_t4212518094)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable951[8] = 
{
	CipherAlgorithmType_t4212518094::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize952 = { sizeof (CipherSuite_t491456551), -1, sizeof(CipherSuite_t491456551_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable952[21] = 
{
	CipherSuite_t491456551_StaticFields::get_offset_of_EmptyArray_0(),
	CipherSuite_t491456551::get_offset_of_code_1(),
	CipherSuite_t491456551::get_offset_of_name_2(),
	CipherSuite_t491456551::get_offset_of_cipherAlgorithmType_3(),
	CipherSuite_t491456551::get_offset_of_hashAlgorithmType_4(),
	CipherSuite_t491456551::get_offset_of_exchangeAlgorithmType_5(),
	CipherSuite_t491456551::get_offset_of_isExportable_6(),
	CipherSuite_t491456551::get_offset_of_cipherMode_7(),
	CipherSuite_t491456551::get_offset_of_keyMaterialSize_8(),
	CipherSuite_t491456551::get_offset_of_keyBlockSize_9(),
	CipherSuite_t491456551::get_offset_of_expandedKeyMaterialSize_10(),
	CipherSuite_t491456551::get_offset_of_effectiveKeyBits_11(),
	CipherSuite_t491456551::get_offset_of_ivSize_12(),
	CipherSuite_t491456551::get_offset_of_blockSize_13(),
	CipherSuite_t491456551::get_offset_of_context_14(),
	CipherSuite_t491456551::get_offset_of_encryptionAlgorithm_15(),
	CipherSuite_t491456551::get_offset_of_encryptionCipher_16(),
	CipherSuite_t491456551::get_offset_of_decryptionAlgorithm_17(),
	CipherSuite_t491456551::get_offset_of_decryptionCipher_18(),
	CipherSuite_t491456551::get_offset_of_clientHMAC_19(),
	CipherSuite_t491456551::get_offset_of_serverHMAC_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize953 = { sizeof (CipherSuiteCollection_t2431504453), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable953[2] = 
{
	CipherSuiteCollection_t2431504453::get_offset_of_cipherSuites_0(),
	CipherSuiteCollection_t2431504453::get_offset_of_protocol_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize954 = { sizeof (CipherSuiteFactory_t3273693255), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize955 = { sizeof (ClientContext_t3002158488), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable955[2] = 
{
	ClientContext_t3002158488::get_offset_of_sslStream_30(),
	ClientContext_t3002158488::get_offset_of_clientHelloProtocol_31(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize956 = { sizeof (ClientRecordProtocol_t2694504884), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize957 = { sizeof (ClientSessionInfo_t3468069089), -1, sizeof(ClientSessionInfo_t3468069089_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable957[6] = 
{
	ClientSessionInfo_t3468069089_StaticFields::get_offset_of_ValidityInterval_0(),
	ClientSessionInfo_t3468069089::get_offset_of_disposed_1(),
	ClientSessionInfo_t3468069089::get_offset_of_validuntil_2(),
	ClientSessionInfo_t3468069089::get_offset_of_host_3(),
	ClientSessionInfo_t3468069089::get_offset_of_sid_4(),
	ClientSessionInfo_t3468069089::get_offset_of_masterSecret_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize958 = { sizeof (ClientSessionCache_t3595945587), -1, sizeof(ClientSessionCache_t3595945587_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable958[2] = 
{
	ClientSessionCache_t3595945587_StaticFields::get_offset_of_cache_0(),
	ClientSessionCache_t3595945587_StaticFields::get_offset_of_locker_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize959 = { sizeof (ContentType_t859870085)+ sizeof (Il2CppObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable959[5] = 
{
	ContentType_t859870085::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize960 = { sizeof (Context_t4285182719), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable960[30] = 
{
	Context_t4285182719::get_offset_of_securityProtocol_0(),
	Context_t4285182719::get_offset_of_sessionId_1(),
	Context_t4285182719::get_offset_of_compressionMethod_2(),
	Context_t4285182719::get_offset_of_serverSettings_3(),
	Context_t4285182719::get_offset_of_clientSettings_4(),
	Context_t4285182719::get_offset_of_current_5(),
	Context_t4285182719::get_offset_of_negotiating_6(),
	Context_t4285182719::get_offset_of_read_7(),
	Context_t4285182719::get_offset_of_write_8(),
	Context_t4285182719::get_offset_of_supportedCiphers_9(),
	Context_t4285182719::get_offset_of_lastHandshakeMsg_10(),
	Context_t4285182719::get_offset_of_handshakeState_11(),
	Context_t4285182719::get_offset_of_abbreviatedHandshake_12(),
	Context_t4285182719::get_offset_of_receivedConnectionEnd_13(),
	Context_t4285182719::get_offset_of_sentConnectionEnd_14(),
	Context_t4285182719::get_offset_of_protocolNegotiated_15(),
	Context_t4285182719::get_offset_of_writeSequenceNumber_16(),
	Context_t4285182719::get_offset_of_readSequenceNumber_17(),
	Context_t4285182719::get_offset_of_clientRandom_18(),
	Context_t4285182719::get_offset_of_serverRandom_19(),
	Context_t4285182719::get_offset_of_randomCS_20(),
	Context_t4285182719::get_offset_of_randomSC_21(),
	Context_t4285182719::get_offset_of_masterSecret_22(),
	Context_t4285182719::get_offset_of_clientWriteKey_23(),
	Context_t4285182719::get_offset_of_serverWriteKey_24(),
	Context_t4285182719::get_offset_of_clientWriteIV_25(),
	Context_t4285182719::get_offset_of_serverWriteIV_26(),
	Context_t4285182719::get_offset_of_handshakeMessages_27(),
	Context_t4285182719::get_offset_of_random_28(),
	Context_t4285182719::get_offset_of_recordProtocol_29(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize961 = { sizeof (ExchangeAlgorithmType_t954949548)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable961[6] = 
{
	ExchangeAlgorithmType_t954949548::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize962 = { sizeof (HandshakeState_t1820731088)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable962[4] = 
{
	HandshakeState_t1820731088::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize963 = { sizeof (HashAlgorithmType_t1654661965)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable963[4] = 
{
	HashAlgorithmType_t1654661965::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize964 = { sizeof (HttpsClientStream_t3823629320), -1, sizeof(HttpsClientStream_t3823629320_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable964[4] = 
{
	HttpsClientStream_t3823629320::get_offset_of__request_20(),
	HttpsClientStream_t3823629320::get_offset_of__status_21(),
	HttpsClientStream_t3823629320_StaticFields::get_offset_of_U3CU3Ef__amU24cache2_22(),
	HttpsClientStream_t3823629320_StaticFields::get_offset_of_U3CU3Ef__amU24cache3_23(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize965 = { sizeof (RecordProtocol_t3166895267), -1, sizeof(RecordProtocol_t3166895267_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable965[3] = 
{
	RecordProtocol_t3166895267_StaticFields::get_offset_of_record_processing_0(),
	RecordProtocol_t3166895267::get_offset_of_innerStream_1(),
	RecordProtocol_t3166895267::get_offset_of_context_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize966 = { sizeof (ReceiveRecordAsyncResult_t1946181211), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable966[9] = 
{
	ReceiveRecordAsyncResult_t1946181211::get_offset_of_locker_0(),
	ReceiveRecordAsyncResult_t1946181211::get_offset_of__userCallback_1(),
	ReceiveRecordAsyncResult_t1946181211::get_offset_of__userState_2(),
	ReceiveRecordAsyncResult_t1946181211::get_offset_of__asyncException_3(),
	ReceiveRecordAsyncResult_t1946181211::get_offset_of_handle_4(),
	ReceiveRecordAsyncResult_t1946181211::get_offset_of__resultingBuffer_5(),
	ReceiveRecordAsyncResult_t1946181211::get_offset_of__record_6(),
	ReceiveRecordAsyncResult_t1946181211::get_offset_of_completed_7(),
	ReceiveRecordAsyncResult_t1946181211::get_offset_of__initialBuffer_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize967 = { sizeof (SendRecordAsyncResult_t173216930), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable967[7] = 
{
	SendRecordAsyncResult_t173216930::get_offset_of_locker_0(),
	SendRecordAsyncResult_t173216930::get_offset_of__userCallback_1(),
	SendRecordAsyncResult_t173216930::get_offset_of__userState_2(),
	SendRecordAsyncResult_t173216930::get_offset_of__asyncException_3(),
	SendRecordAsyncResult_t173216930::get_offset_of_handle_4(),
	SendRecordAsyncResult_t173216930::get_offset_of__message_5(),
	SendRecordAsyncResult_t173216930::get_offset_of_completed_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize968 = { sizeof (RSASslSignatureDeformatter_t389653629), -1, sizeof(RSASslSignatureDeformatter_t389653629_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable968[3] = 
{
	RSASslSignatureDeformatter_t389653629::get_offset_of_key_0(),
	RSASslSignatureDeformatter_t389653629::get_offset_of_hash_1(),
	RSASslSignatureDeformatter_t389653629_StaticFields::get_offset_of_U3CU3Ef__switchU24map15_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize969 = { sizeof (RSASslSignatureFormatter_t1282301050), -1, sizeof(RSASslSignatureFormatter_t1282301050_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable969[3] = 
{
	RSASslSignatureFormatter_t1282301050::get_offset_of_key_0(),
	RSASslSignatureFormatter_t1282301050::get_offset_of_hash_1(),
	RSASslSignatureFormatter_t1282301050_StaticFields::get_offset_of_U3CU3Ef__switchU24map16_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize970 = { sizeof (SecurityCompressionType_t3722381418)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable970[3] = 
{
	SecurityCompressionType_t3722381418::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize971 = { sizeof (SecurityParameters_t2290372928), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable971[3] = 
{
	SecurityParameters_t2290372928::get_offset_of_cipher_0(),
	SecurityParameters_t2290372928::get_offset_of_clientWriteMAC_1(),
	SecurityParameters_t2290372928::get_offset_of_serverWriteMAC_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize972 = { sizeof (SecurityProtocolType_t155967584)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable972[5] = 
{
	SecurityProtocolType_t155967584::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize973 = { sizeof (ServerContext_t3823737132), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize974 = { sizeof (ValidationResult_t1782558132), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable974[2] = 
{
	ValidationResult_t1782558132::get_offset_of_trusted_0(),
	ValidationResult_t1782558132::get_offset_of_error_code_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize975 = { sizeof (SslClientStream_t3918817353), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable975[4] = 
{
	SslClientStream_t3918817353::get_offset_of_ServerCertValidation_16(),
	SslClientStream_t3918817353::get_offset_of_ClientCertSelection_17(),
	SslClientStream_t3918817353::get_offset_of_PrivateKeySelection_18(),
	SslClientStream_t3918817353::get_offset_of_ServerCertValidation2_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize976 = { sizeof (SslCipherSuite_t1404755603), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable976[3] = 
{
	SslCipherSuite_t1404755603::get_offset_of_pad1_21(),
	SslCipherSuite_t1404755603::get_offset_of_pad2_22(),
	SslCipherSuite_t1404755603::get_offset_of_header_23(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize977 = { sizeof (SslHandshakeHash_t3044322977), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable977[8] = 
{
	SslHandshakeHash_t3044322977::get_offset_of_md5_4(),
	SslHandshakeHash_t3044322977::get_offset_of_sha_5(),
	SslHandshakeHash_t3044322977::get_offset_of_hashing_6(),
	SslHandshakeHash_t3044322977::get_offset_of_secret_7(),
	SslHandshakeHash_t3044322977::get_offset_of_innerPadMD5_8(),
	SslHandshakeHash_t3044322977::get_offset_of_outerPadMD5_9(),
	SslHandshakeHash_t3044322977::get_offset_of_innerPadSHA_10(),
	SslHandshakeHash_t3044322977::get_offset_of_outerPadSHA_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize978 = { sizeof (SslStreamBase_t934199321), -1, sizeof(SslStreamBase_t934199321_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable978[15] = 
{
	0,
	SslStreamBase_t934199321_StaticFields::get_offset_of_record_processing_2(),
	SslStreamBase_t934199321::get_offset_of_innerStream_3(),
	SslStreamBase_t934199321::get_offset_of_inputBuffer_4(),
	SslStreamBase_t934199321::get_offset_of_context_5(),
	SslStreamBase_t934199321::get_offset_of_protocol_6(),
	SslStreamBase_t934199321::get_offset_of_ownsStream_7(),
	SslStreamBase_t934199321::get_offset_of_disposed_8(),
	SslStreamBase_t934199321::get_offset_of_checkCertRevocationStatus_9(),
	SslStreamBase_t934199321::get_offset_of_negotiate_10(),
	SslStreamBase_t934199321::get_offset_of_read_11(),
	SslStreamBase_t934199321::get_offset_of_write_12(),
	SslStreamBase_t934199321::get_offset_of_negotiationComplete_13(),
	SslStreamBase_t934199321::get_offset_of_recbuf_14(),
	SslStreamBase_t934199321::get_offset_of_recordStream_15(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize979 = { sizeof (InternalAsyncResult_t1610391122), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable979[12] = 
{
	InternalAsyncResult_t1610391122::get_offset_of_locker_0(),
	InternalAsyncResult_t1610391122::get_offset_of__userCallback_1(),
	InternalAsyncResult_t1610391122::get_offset_of__userState_2(),
	InternalAsyncResult_t1610391122::get_offset_of__asyncException_3(),
	InternalAsyncResult_t1610391122::get_offset_of_handle_4(),
	InternalAsyncResult_t1610391122::get_offset_of_completed_5(),
	InternalAsyncResult_t1610391122::get_offset_of__bytesRead_6(),
	InternalAsyncResult_t1610391122::get_offset_of__fromWrite_7(),
	InternalAsyncResult_t1610391122::get_offset_of__proceedAfterHandshake_8(),
	InternalAsyncResult_t1610391122::get_offset_of__buffer_9(),
	InternalAsyncResult_t1610391122::get_offset_of__offset_10(),
	InternalAsyncResult_t1610391122::get_offset_of__count_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize980 = { sizeof (TlsCipherSuite_t396038680), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable980[2] = 
{
	TlsCipherSuite_t396038680::get_offset_of_header_21(),
	TlsCipherSuite_t396038680::get_offset_of_headerLock_22(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize981 = { sizeof (TlsClientSettings_t2311449551), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable981[4] = 
{
	TlsClientSettings_t2311449551::get_offset_of_targetHost_0(),
	TlsClientSettings_t2311449551::get_offset_of_certificates_1(),
	TlsClientSettings_t2311449551::get_offset_of_clientCertificate_2(),
	TlsClientSettings_t2311449551::get_offset_of_certificateRSA_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize982 = { sizeof (TlsException_t583514812), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable982[1] = 
{
	TlsException_t583514812::get_offset_of_alert_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize983 = { sizeof (TlsServerSettings_t403340211), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable983[8] = 
{
	TlsServerSettings_t403340211::get_offset_of_certificates_0(),
	TlsServerSettings_t403340211::get_offset_of_certificateRSA_1(),
	TlsServerSettings_t403340211::get_offset_of_rsaParameters_2(),
	TlsServerSettings_t403340211::get_offset_of_signedParams_3(),
	TlsServerSettings_t403340211::get_offset_of_distinguisedNames_4(),
	TlsServerSettings_t403340211::get_offset_of_serverKeyExchange_5(),
	TlsServerSettings_t403340211::get_offset_of_certificateRequest_6(),
	TlsServerSettings_t403340211::get_offset_of_certificateTypes_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize984 = { sizeof (TlsStream_t4089752859), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable984[4] = 
{
	TlsStream_t4089752859::get_offset_of_canRead_1(),
	TlsStream_t4089752859::get_offset_of_canWrite_2(),
	TlsStream_t4089752859::get_offset_of_buffer_3(),
	TlsStream_t4089752859::get_offset_of_temp_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize985 = { sizeof (ClientCertificateType_t4001384466)+ sizeof (Il2CppObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable985[6] = 
{
	ClientCertificateType_t4001384466::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize986 = { sizeof (HandshakeMessage_t3938752374), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable986[4] = 
{
	HandshakeMessage_t3938752374::get_offset_of_context_5(),
	HandshakeMessage_t3938752374::get_offset_of_handshakeType_6(),
	HandshakeMessage_t3938752374::get_offset_of_contentType_7(),
	HandshakeMessage_t3938752374::get_offset_of_cache_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize987 = { sizeof (HandshakeType_t2540099417)+ sizeof (Il2CppObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable987[12] = 
{
	HandshakeType_t2540099417::get_offset_of_value___1() + static_cast<int32_t>(sizeof(Il2CppObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize988 = { sizeof (TlsClientCertificate_t2537917473), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable988[2] = 
{
	TlsClientCertificate_t2537917473::get_offset_of_clientCertSelected_9(),
	TlsClientCertificate_t2537917473::get_offset_of_clientCert_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize989 = { sizeof (TlsClientCertificateVerify_t4150496570), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize990 = { sizeof (TlsClientFinished_t3939745042), -1, sizeof(TlsClientFinished_t3939745042_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable990[1] = 
{
	TlsClientFinished_t3939745042_StaticFields::get_offset_of_Ssl3Marker_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize991 = { sizeof (TlsClientHello_t2939633944), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable991[1] = 
{
	TlsClientHello_t2939633944::get_offset_of_random_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize992 = { sizeof (TlsClientKeyExchange_t3808761250), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize993 = { sizeof (TlsServerCertificate_t905088469), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable993[1] = 
{
	TlsServerCertificate_t905088469::get_offset_of_certificates_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize994 = { sizeof (TlsServerCertificateRequest_t2187269356), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable994[2] = 
{
	TlsServerCertificateRequest_t2187269356::get_offset_of_certificateTypes_9(),
	TlsServerCertificateRequest_t2187269356::get_offset_of_distinguisedNames_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize995 = { sizeof (TlsServerFinished_t1869592958), -1, sizeof(TlsServerFinished_t1869592958_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable995[1] = 
{
	TlsServerFinished_t1869592958_StaticFields::get_offset_of_Ssl3Marker_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize996 = { sizeof (TlsServerHello_t1289300668), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable996[4] = 
{
	TlsServerHello_t1289300668::get_offset_of_compressionMethod_9(),
	TlsServerHello_t1289300668::get_offset_of_random_10(),
	TlsServerHello_t1289300668::get_offset_of_sessionId_11(),
	TlsServerHello_t1289300668::get_offset_of_cipherSuite_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize997 = { sizeof (TlsServerHelloDone_t530021076), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize998 = { sizeof (TlsServerKeyExchange_t2172608670), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable998[2] = 
{
	TlsServerKeyExchange_t2172608670::get_offset_of_rsaParams_9(),
	TlsServerKeyExchange_t2172608670::get_offset_of_signedParams_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize999 = { sizeof (PrimalityTest_t572679902), sizeof(Il2CppMethodPointer), 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
