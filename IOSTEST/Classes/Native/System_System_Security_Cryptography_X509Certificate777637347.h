#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "System_System_Security_Cryptography_X509Certificat1570828128.h"

// System.Security.Cryptography.X509Certificates.X509ChainElementCollection
struct X509ChainElementCollection_t2081831987;
// System.Security.Cryptography.X509Certificates.X509ChainPolicy
struct X509ChainPolicy_t3452126517;
// System.Security.Cryptography.X509Certificates.X509ChainStatus[]
struct X509ChainStatusU5BU5D_t830390908;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName
struct X500DistinguishedName_t452415348;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t784058677;
// System.Security.Cryptography.X509Certificates.X509ChainElement
struct X509ChainElement_t528874471;
// System.Security.Cryptography.X509Certificates.X509Store
struct X509Store_t1617430119;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t1108969367;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Chain
struct  X509Chain_t777637347  : public Il2CppObject
{
public:
	// System.Security.Cryptography.X509Certificates.StoreLocation System.Security.Cryptography.X509Certificates.X509Chain::location
	int32_t ___location_0;
	// System.Security.Cryptography.X509Certificates.X509ChainElementCollection System.Security.Cryptography.X509Certificates.X509Chain::elements
	X509ChainElementCollection_t2081831987 * ___elements_1;
	// System.Security.Cryptography.X509Certificates.X509ChainPolicy System.Security.Cryptography.X509Certificates.X509Chain::policy
	X509ChainPolicy_t3452126517 * ___policy_2;
	// System.Security.Cryptography.X509Certificates.X509ChainStatus[] System.Security.Cryptography.X509Certificates.X509Chain::status
	X509ChainStatusU5BU5D_t830390908* ___status_3;
	// System.Int32 System.Security.Cryptography.X509Certificates.X509Chain::max_path_length
	int32_t ___max_path_length_5;
	// System.Security.Cryptography.X509Certificates.X500DistinguishedName System.Security.Cryptography.X509Certificates.X509Chain::working_issuer_name
	X500DistinguishedName_t452415348 * ___working_issuer_name_6;
	// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.X509Chain::working_public_key
	AsymmetricAlgorithm_t784058677 * ___working_public_key_7;
	// System.Security.Cryptography.X509Certificates.X509ChainElement System.Security.Cryptography.X509Certificates.X509Chain::bce_restriction
	X509ChainElement_t528874471 * ___bce_restriction_8;
	// System.Security.Cryptography.X509Certificates.X509Store System.Security.Cryptography.X509Certificates.X509Chain::roots
	X509Store_t1617430119 * ___roots_9;
	// System.Security.Cryptography.X509Certificates.X509Store System.Security.Cryptography.X509Certificates.X509Chain::cas
	X509Store_t1617430119 * ___cas_10;
	// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509Chain::collection
	X509Certificate2Collection_t1108969367 * ___collection_11;

public:
	inline static int32_t get_offset_of_location_0() { return static_cast<int32_t>(offsetof(X509Chain_t777637347, ___location_0)); }
	inline int32_t get_location_0() const { return ___location_0; }
	inline int32_t* get_address_of_location_0() { return &___location_0; }
	inline void set_location_0(int32_t value)
	{
		___location_0 = value;
	}

	inline static int32_t get_offset_of_elements_1() { return static_cast<int32_t>(offsetof(X509Chain_t777637347, ___elements_1)); }
	inline X509ChainElementCollection_t2081831987 * get_elements_1() const { return ___elements_1; }
	inline X509ChainElementCollection_t2081831987 ** get_address_of_elements_1() { return &___elements_1; }
	inline void set_elements_1(X509ChainElementCollection_t2081831987 * value)
	{
		___elements_1 = value;
		Il2CppCodeGenWriteBarrier(&___elements_1, value);
	}

	inline static int32_t get_offset_of_policy_2() { return static_cast<int32_t>(offsetof(X509Chain_t777637347, ___policy_2)); }
	inline X509ChainPolicy_t3452126517 * get_policy_2() const { return ___policy_2; }
	inline X509ChainPolicy_t3452126517 ** get_address_of_policy_2() { return &___policy_2; }
	inline void set_policy_2(X509ChainPolicy_t3452126517 * value)
	{
		___policy_2 = value;
		Il2CppCodeGenWriteBarrier(&___policy_2, value);
	}

	inline static int32_t get_offset_of_status_3() { return static_cast<int32_t>(offsetof(X509Chain_t777637347, ___status_3)); }
	inline X509ChainStatusU5BU5D_t830390908* get_status_3() const { return ___status_3; }
	inline X509ChainStatusU5BU5D_t830390908** get_address_of_status_3() { return &___status_3; }
	inline void set_status_3(X509ChainStatusU5BU5D_t830390908* value)
	{
		___status_3 = value;
		Il2CppCodeGenWriteBarrier(&___status_3, value);
	}

	inline static int32_t get_offset_of_max_path_length_5() { return static_cast<int32_t>(offsetof(X509Chain_t777637347, ___max_path_length_5)); }
	inline int32_t get_max_path_length_5() const { return ___max_path_length_5; }
	inline int32_t* get_address_of_max_path_length_5() { return &___max_path_length_5; }
	inline void set_max_path_length_5(int32_t value)
	{
		___max_path_length_5 = value;
	}

	inline static int32_t get_offset_of_working_issuer_name_6() { return static_cast<int32_t>(offsetof(X509Chain_t777637347, ___working_issuer_name_6)); }
	inline X500DistinguishedName_t452415348 * get_working_issuer_name_6() const { return ___working_issuer_name_6; }
	inline X500DistinguishedName_t452415348 ** get_address_of_working_issuer_name_6() { return &___working_issuer_name_6; }
	inline void set_working_issuer_name_6(X500DistinguishedName_t452415348 * value)
	{
		___working_issuer_name_6 = value;
		Il2CppCodeGenWriteBarrier(&___working_issuer_name_6, value);
	}

	inline static int32_t get_offset_of_working_public_key_7() { return static_cast<int32_t>(offsetof(X509Chain_t777637347, ___working_public_key_7)); }
	inline AsymmetricAlgorithm_t784058677 * get_working_public_key_7() const { return ___working_public_key_7; }
	inline AsymmetricAlgorithm_t784058677 ** get_address_of_working_public_key_7() { return &___working_public_key_7; }
	inline void set_working_public_key_7(AsymmetricAlgorithm_t784058677 * value)
	{
		___working_public_key_7 = value;
		Il2CppCodeGenWriteBarrier(&___working_public_key_7, value);
	}

	inline static int32_t get_offset_of_bce_restriction_8() { return static_cast<int32_t>(offsetof(X509Chain_t777637347, ___bce_restriction_8)); }
	inline X509ChainElement_t528874471 * get_bce_restriction_8() const { return ___bce_restriction_8; }
	inline X509ChainElement_t528874471 ** get_address_of_bce_restriction_8() { return &___bce_restriction_8; }
	inline void set_bce_restriction_8(X509ChainElement_t528874471 * value)
	{
		___bce_restriction_8 = value;
		Il2CppCodeGenWriteBarrier(&___bce_restriction_8, value);
	}

	inline static int32_t get_offset_of_roots_9() { return static_cast<int32_t>(offsetof(X509Chain_t777637347, ___roots_9)); }
	inline X509Store_t1617430119 * get_roots_9() const { return ___roots_9; }
	inline X509Store_t1617430119 ** get_address_of_roots_9() { return &___roots_9; }
	inline void set_roots_9(X509Store_t1617430119 * value)
	{
		___roots_9 = value;
		Il2CppCodeGenWriteBarrier(&___roots_9, value);
	}

	inline static int32_t get_offset_of_cas_10() { return static_cast<int32_t>(offsetof(X509Chain_t777637347, ___cas_10)); }
	inline X509Store_t1617430119 * get_cas_10() const { return ___cas_10; }
	inline X509Store_t1617430119 ** get_address_of_cas_10() { return &___cas_10; }
	inline void set_cas_10(X509Store_t1617430119 * value)
	{
		___cas_10 = value;
		Il2CppCodeGenWriteBarrier(&___cas_10, value);
	}

	inline static int32_t get_offset_of_collection_11() { return static_cast<int32_t>(offsetof(X509Chain_t777637347, ___collection_11)); }
	inline X509Certificate2Collection_t1108969367 * get_collection_11() const { return ___collection_11; }
	inline X509Certificate2Collection_t1108969367 ** get_address_of_collection_11() { return &___collection_11; }
	inline void set_collection_11(X509Certificate2Collection_t1108969367 * value)
	{
		___collection_11 = value;
		Il2CppCodeGenWriteBarrier(&___collection_11, value);
	}
};

struct X509Chain_t777637347_StaticFields
{
public:
	// System.Security.Cryptography.X509Certificates.X509ChainStatus[] System.Security.Cryptography.X509Certificates.X509Chain::Empty
	X509ChainStatusU5BU5D_t830390908* ___Empty_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.X509Certificates.X509Chain::<>f__switch$mapB
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24mapB_12;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.X509Certificates.X509Chain::<>f__switch$mapC
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24mapC_13;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.X509Certificates.X509Chain::<>f__switch$mapD
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24mapD_14;

public:
	inline static int32_t get_offset_of_Empty_4() { return static_cast<int32_t>(offsetof(X509Chain_t777637347_StaticFields, ___Empty_4)); }
	inline X509ChainStatusU5BU5D_t830390908* get_Empty_4() const { return ___Empty_4; }
	inline X509ChainStatusU5BU5D_t830390908** get_address_of_Empty_4() { return &___Empty_4; }
	inline void set_Empty_4(X509ChainStatusU5BU5D_t830390908* value)
	{
		___Empty_4 = value;
		Il2CppCodeGenWriteBarrier(&___Empty_4, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapB_12() { return static_cast<int32_t>(offsetof(X509Chain_t777637347_StaticFields, ___U3CU3Ef__switchU24mapB_12)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24mapB_12() const { return ___U3CU3Ef__switchU24mapB_12; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24mapB_12() { return &___U3CU3Ef__switchU24mapB_12; }
	inline void set_U3CU3Ef__switchU24mapB_12(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24mapB_12 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24mapB_12, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapC_13() { return static_cast<int32_t>(offsetof(X509Chain_t777637347_StaticFields, ___U3CU3Ef__switchU24mapC_13)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24mapC_13() const { return ___U3CU3Ef__switchU24mapC_13; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24mapC_13() { return &___U3CU3Ef__switchU24mapC_13; }
	inline void set_U3CU3Ef__switchU24mapC_13(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24mapC_13 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24mapC_13, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapD_14() { return static_cast<int32_t>(offsetof(X509Chain_t777637347_StaticFields, ___U3CU3Ef__switchU24mapD_14)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24mapD_14() const { return ___U3CU3Ef__switchU24mapD_14; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24mapD_14() { return &___U3CU3Ef__switchU24mapD_14; }
	inline void set_U3CU3Ef__switchU24mapD_14(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24mapD_14 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24mapD_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
