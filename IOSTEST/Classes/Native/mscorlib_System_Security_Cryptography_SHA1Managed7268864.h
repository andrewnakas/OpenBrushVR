#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Security_Cryptography_SHA13336793149.h"

// System.Security.Cryptography.SHA1Internal
struct SHA1Internal_t3873507626;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SHA1Managed
struct  SHA1Managed_t7268864  : public SHA1_t3336793149
{
public:
	// System.Security.Cryptography.SHA1Internal System.Security.Cryptography.SHA1Managed::sha
	SHA1Internal_t3873507626 * ___sha_4;

public:
	inline static int32_t get_offset_of_sha_4() { return static_cast<int32_t>(offsetof(SHA1Managed_t7268864, ___sha_4)); }
	inline SHA1Internal_t3873507626 * get_sha_4() const { return ___sha_4; }
	inline SHA1Internal_t3873507626 ** get_address_of_sha_4() { return &___sha_4; }
	inline void set_sha_4(SHA1Internal_t3873507626 * value)
	{
		___sha_4 = value;
		Il2CppCodeGenWriteBarrier(&___sha_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
