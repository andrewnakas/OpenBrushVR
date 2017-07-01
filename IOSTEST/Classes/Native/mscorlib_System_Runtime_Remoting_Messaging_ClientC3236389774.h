#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Runtime.Remoting.Contexts.Context
struct Context_t502196753;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ClientContextTerminatorSink
struct  ClientContextTerminatorSink_t3236389774  : public Il2CppObject
{
public:
	// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.Messaging.ClientContextTerminatorSink::_context
	Context_t502196753 * ____context_0;

public:
	inline static int32_t get_offset_of__context_0() { return static_cast<int32_t>(offsetof(ClientContextTerminatorSink_t3236389774, ____context_0)); }
	inline Context_t502196753 * get__context_0() const { return ____context_0; }
	inline Context_t502196753 ** get_address_of__context_0() { return &____context_0; }
	inline void set__context_0(Context_t502196753 * value)
	{
		____context_0 = value;
		Il2CppCodeGenWriteBarrier(&____context_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
