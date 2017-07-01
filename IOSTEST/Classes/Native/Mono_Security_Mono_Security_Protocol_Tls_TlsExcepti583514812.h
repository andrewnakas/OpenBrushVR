#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Exception1927440687.h"

// Mono.Security.Protocol.Tls.Alert
struct Alert_t3405955216;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Protocol.Tls.TlsException
struct  TlsException_t583514812  : public Exception_t1927440687
{
public:
	// Mono.Security.Protocol.Tls.Alert Mono.Security.Protocol.Tls.TlsException::alert
	Alert_t3405955216 * ___alert_11;

public:
	inline static int32_t get_offset_of_alert_11() { return static_cast<int32_t>(offsetof(TlsException_t583514812, ___alert_11)); }
	inline Alert_t3405955216 * get_alert_11() const { return ___alert_11; }
	inline Alert_t3405955216 ** get_address_of_alert_11() { return &___alert_11; }
	inline void set_alert_11(Alert_t3405955216 * value)
	{
		___alert_11 = value;
		Il2CppCodeGenWriteBarrier(&___alert_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
