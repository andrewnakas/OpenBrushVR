#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Attribute542643598.h"

// System.Version
struct Version_t1755874712;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Resources.SatelliteContractVersionAttribute
struct  SatelliteContractVersionAttribute_t2989984391  : public Attribute_t542643598
{
public:
	// System.Version System.Resources.SatelliteContractVersionAttribute::ver
	Version_t1755874712 * ___ver_0;

public:
	inline static int32_t get_offset_of_ver_0() { return static_cast<int32_t>(offsetof(SatelliteContractVersionAttribute_t2989984391, ___ver_0)); }
	inline Version_t1755874712 * get_ver_0() const { return ___ver_0; }
	inline Version_t1755874712 ** get_address_of_ver_0() { return &___ver_0; }
	inline void set_ver_0(Version_t1755874712 * value)
	{
		___ver_0 = value;
		Il2CppCodeGenWriteBarrier(&___ver_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
