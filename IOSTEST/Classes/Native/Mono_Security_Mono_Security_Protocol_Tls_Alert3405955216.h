#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertLeve1706602846.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertDescr844791462.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.Alert
struct  Alert_t3405955216  : public Il2CppObject
{
public:
	// Mono.Security.Protocol.Tls.AlertLevel Mono.Security.Protocol.Tls.Alert::level
	uint8_t ___level_0;
	// Mono.Security.Protocol.Tls.AlertDescription Mono.Security.Protocol.Tls.Alert::description
	uint8_t ___description_1;

public:
	inline static int32_t get_offset_of_level_0() { return static_cast<int32_t>(offsetof(Alert_t3405955216, ___level_0)); }
	inline uint8_t get_level_0() const { return ___level_0; }
	inline uint8_t* get_address_of_level_0() { return &___level_0; }
	inline void set_level_0(uint8_t value)
	{
		___level_0 = value;
	}

	inline static int32_t get_offset_of_description_1() { return static_cast<int32_t>(offsetof(Alert_t3405955216, ___description_1)); }
	inline uint8_t get_description_1() const { return ___description_1; }
	inline uint8_t* get_address_of_description_1() { return &___description_1; }
	inline void set_description_1(uint8_t value)
	{
		___description_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
