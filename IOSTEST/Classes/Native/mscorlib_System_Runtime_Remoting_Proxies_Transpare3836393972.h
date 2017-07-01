#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Runtime.Remoting.Proxies.RealProxy
struct RealProxy_t298428346;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Proxies.TransparentProxy
struct  TransparentProxy_t3836393972  : public Il2CppObject
{
public:
	// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.Proxies.TransparentProxy::_rp
	RealProxy_t298428346 * ____rp_0;

public:
	inline static int32_t get_offset_of__rp_0() { return static_cast<int32_t>(offsetof(TransparentProxy_t3836393972, ____rp_0)); }
	inline RealProxy_t298428346 * get__rp_0() const { return ____rp_0; }
	inline RealProxy_t298428346 ** get_address_of__rp_0() { return &____rp_0; }
	inline void set__rp_0(RealProxy_t298428346 * value)
	{
		____rp_0 = value;
		Il2CppCodeGenWriteBarrier(&____rp_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
