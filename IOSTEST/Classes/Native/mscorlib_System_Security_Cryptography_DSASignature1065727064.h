#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Security_Cryptography_AsymmetricSi4058014248.h"

// System.Security.Cryptography.DSA
struct DSA_t903174880;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DSASignatureFormatter
struct  DSASignatureFormatter_t1065727064  : public AsymmetricSignatureFormatter_t4058014248
{
public:
	// System.Security.Cryptography.DSA System.Security.Cryptography.DSASignatureFormatter::dsa
	DSA_t903174880 * ___dsa_0;

public:
	inline static int32_t get_offset_of_dsa_0() { return static_cast<int32_t>(offsetof(DSASignatureFormatter_t1065727064, ___dsa_0)); }
	inline DSA_t903174880 * get_dsa_0() const { return ___dsa_0; }
	inline DSA_t903174880 ** get_address_of_dsa_0() { return &___dsa_0; }
	inline void set_dsa_0(DSA_t903174880 * value)
	{
		___dsa_0 = value;
		Il2CppCodeGenWriteBarrier(&___dsa_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
