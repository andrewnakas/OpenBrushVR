#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_System_Security_Cryptography_X509Certificat1320896183.h"
#include "System_System_Security_Cryptography_AsnDecodeStatu1962003286.h"

// System.Security.Cryptography.OidCollection
struct OidCollection_t3790243618;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension
struct  X509EnhancedKeyUsageExtension_t2099881051  : public X509Extension_t1320896183
{
public:
	// System.Security.Cryptography.OidCollection System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::_enhKeyUsage
	OidCollection_t3790243618 * ____enhKeyUsage_4;
	// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::_status
	int32_t ____status_5;

public:
	inline static int32_t get_offset_of__enhKeyUsage_4() { return static_cast<int32_t>(offsetof(X509EnhancedKeyUsageExtension_t2099881051, ____enhKeyUsage_4)); }
	inline OidCollection_t3790243618 * get__enhKeyUsage_4() const { return ____enhKeyUsage_4; }
	inline OidCollection_t3790243618 ** get_address_of__enhKeyUsage_4() { return &____enhKeyUsage_4; }
	inline void set__enhKeyUsage_4(OidCollection_t3790243618 * value)
	{
		____enhKeyUsage_4 = value;
		Il2CppCodeGenWriteBarrier(&____enhKeyUsage_4, value);
	}

	inline static int32_t get_offset_of__status_5() { return static_cast<int32_t>(offsetof(X509EnhancedKeyUsageExtension_t2099881051, ____status_5)); }
	inline int32_t get__status_5() const { return ____status_5; }
	inline int32_t* get_address_of__status_5() { return &____status_5; }
	inline void set__status_5(int32_t value)
	{
		____status_5 = value;
	}
};

struct X509EnhancedKeyUsageExtension_t2099881051_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::<>f__switch$mapE
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24mapE_6;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24mapE_6() { return static_cast<int32_t>(offsetof(X509EnhancedKeyUsageExtension_t2099881051_StaticFields, ___U3CU3Ef__switchU24mapE_6)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24mapE_6() const { return ___U3CU3Ef__switchU24mapE_6; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24mapE_6() { return &___U3CU3Ef__switchU24mapE_6; }
	inline void set_U3CU3Ef__switchU24mapE_6(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24mapE_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24mapE_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
