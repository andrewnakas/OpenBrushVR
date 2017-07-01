#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.String
struct String_t;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t2189618969;
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection
struct DynamicPropertyCollection_t2282532998;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t318414488;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Identity
struct  Identity_t3647548000  : public Il2CppObject
{
public:
	// System.String System.Runtime.Remoting.Identity::_objectUri
	String_t* ____objectUri_0;
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Identity::_channelSink
	Il2CppObject * ____channelSink_1;
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Identity::_envoySink
	Il2CppObject * ____envoySink_2;
	// System.Runtime.Remoting.Contexts.DynamicPropertyCollection System.Runtime.Remoting.Identity::_clientDynamicProperties
	DynamicPropertyCollection_t2282532998 * ____clientDynamicProperties_3;
	// System.Runtime.Remoting.Contexts.DynamicPropertyCollection System.Runtime.Remoting.Identity::_serverDynamicProperties
	DynamicPropertyCollection_t2282532998 * ____serverDynamicProperties_4;
	// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.Identity::_objRef
	ObjRef_t318414488 * ____objRef_5;
	// System.Boolean System.Runtime.Remoting.Identity::_disposed
	bool ____disposed_6;

public:
	inline static int32_t get_offset_of__objectUri_0() { return static_cast<int32_t>(offsetof(Identity_t3647548000, ____objectUri_0)); }
	inline String_t* get__objectUri_0() const { return ____objectUri_0; }
	inline String_t** get_address_of__objectUri_0() { return &____objectUri_0; }
	inline void set__objectUri_0(String_t* value)
	{
		____objectUri_0 = value;
		Il2CppCodeGenWriteBarrier(&____objectUri_0, value);
	}

	inline static int32_t get_offset_of__channelSink_1() { return static_cast<int32_t>(offsetof(Identity_t3647548000, ____channelSink_1)); }
	inline Il2CppObject * get__channelSink_1() const { return ____channelSink_1; }
	inline Il2CppObject ** get_address_of__channelSink_1() { return &____channelSink_1; }
	inline void set__channelSink_1(Il2CppObject * value)
	{
		____channelSink_1 = value;
		Il2CppCodeGenWriteBarrier(&____channelSink_1, value);
	}

	inline static int32_t get_offset_of__envoySink_2() { return static_cast<int32_t>(offsetof(Identity_t3647548000, ____envoySink_2)); }
	inline Il2CppObject * get__envoySink_2() const { return ____envoySink_2; }
	inline Il2CppObject ** get_address_of__envoySink_2() { return &____envoySink_2; }
	inline void set__envoySink_2(Il2CppObject * value)
	{
		____envoySink_2 = value;
		Il2CppCodeGenWriteBarrier(&____envoySink_2, value);
	}

	inline static int32_t get_offset_of__clientDynamicProperties_3() { return static_cast<int32_t>(offsetof(Identity_t3647548000, ____clientDynamicProperties_3)); }
	inline DynamicPropertyCollection_t2282532998 * get__clientDynamicProperties_3() const { return ____clientDynamicProperties_3; }
	inline DynamicPropertyCollection_t2282532998 ** get_address_of__clientDynamicProperties_3() { return &____clientDynamicProperties_3; }
	inline void set__clientDynamicProperties_3(DynamicPropertyCollection_t2282532998 * value)
	{
		____clientDynamicProperties_3 = value;
		Il2CppCodeGenWriteBarrier(&____clientDynamicProperties_3, value);
	}

	inline static int32_t get_offset_of__serverDynamicProperties_4() { return static_cast<int32_t>(offsetof(Identity_t3647548000, ____serverDynamicProperties_4)); }
	inline DynamicPropertyCollection_t2282532998 * get__serverDynamicProperties_4() const { return ____serverDynamicProperties_4; }
	inline DynamicPropertyCollection_t2282532998 ** get_address_of__serverDynamicProperties_4() { return &____serverDynamicProperties_4; }
	inline void set__serverDynamicProperties_4(DynamicPropertyCollection_t2282532998 * value)
	{
		____serverDynamicProperties_4 = value;
		Il2CppCodeGenWriteBarrier(&____serverDynamicProperties_4, value);
	}

	inline static int32_t get_offset_of__objRef_5() { return static_cast<int32_t>(offsetof(Identity_t3647548000, ____objRef_5)); }
	inline ObjRef_t318414488 * get__objRef_5() const { return ____objRef_5; }
	inline ObjRef_t318414488 ** get_address_of__objRef_5() { return &____objRef_5; }
	inline void set__objRef_5(ObjRef_t318414488 * value)
	{
		____objRef_5 = value;
		Il2CppCodeGenWriteBarrier(&____objRef_5, value);
	}

	inline static int32_t get_offset_of__disposed_6() { return static_cast<int32_t>(offsetof(Identity_t3647548000, ____disposed_6)); }
	inline bool get__disposed_6() const { return ____disposed_6; }
	inline bool* get_address_of__disposed_6() { return &____disposed_6; }
	inline void set__disposed_6(bool value)
	{
		____disposed_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
