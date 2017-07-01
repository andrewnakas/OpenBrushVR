#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.IDictionary
struct IDictionary_t596158605;
// System.Runtime.Remoting.Messaging.IMethodMessage
struct IMethodMessage_t1899389025;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.MethodDictionary
struct  MethodDictionary_t1742974787  : public Il2CppObject
{
public:
	// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::_internalProperties
	Il2CppObject * ____internalProperties_0;
	// System.Runtime.Remoting.Messaging.IMethodMessage System.Runtime.Remoting.Messaging.MethodDictionary::_message
	Il2CppObject * ____message_1;
	// System.String[] System.Runtime.Remoting.Messaging.MethodDictionary::_methodKeys
	StringU5BU5D_t1642385972* ____methodKeys_2;
	// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::_ownProperties
	bool ____ownProperties_3;

public:
	inline static int32_t get_offset_of__internalProperties_0() { return static_cast<int32_t>(offsetof(MethodDictionary_t1742974787, ____internalProperties_0)); }
	inline Il2CppObject * get__internalProperties_0() const { return ____internalProperties_0; }
	inline Il2CppObject ** get_address_of__internalProperties_0() { return &____internalProperties_0; }
	inline void set__internalProperties_0(Il2CppObject * value)
	{
		____internalProperties_0 = value;
		Il2CppCodeGenWriteBarrier(&____internalProperties_0, value);
	}

	inline static int32_t get_offset_of__message_1() { return static_cast<int32_t>(offsetof(MethodDictionary_t1742974787, ____message_1)); }
	inline Il2CppObject * get__message_1() const { return ____message_1; }
	inline Il2CppObject ** get_address_of__message_1() { return &____message_1; }
	inline void set__message_1(Il2CppObject * value)
	{
		____message_1 = value;
		Il2CppCodeGenWriteBarrier(&____message_1, value);
	}

	inline static int32_t get_offset_of__methodKeys_2() { return static_cast<int32_t>(offsetof(MethodDictionary_t1742974787, ____methodKeys_2)); }
	inline StringU5BU5D_t1642385972* get__methodKeys_2() const { return ____methodKeys_2; }
	inline StringU5BU5D_t1642385972** get_address_of__methodKeys_2() { return &____methodKeys_2; }
	inline void set__methodKeys_2(StringU5BU5D_t1642385972* value)
	{
		____methodKeys_2 = value;
		Il2CppCodeGenWriteBarrier(&____methodKeys_2, value);
	}

	inline static int32_t get_offset_of__ownProperties_3() { return static_cast<int32_t>(offsetof(MethodDictionary_t1742974787, ____ownProperties_3)); }
	inline bool get__ownProperties_3() const { return ____ownProperties_3; }
	inline bool* get_address_of__ownProperties_3() { return &____ownProperties_3; }
	inline void set__ownProperties_3(bool value)
	{
		____ownProperties_3 = value;
	}
};

struct MethodDictionary_t1742974787_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.Messaging.MethodDictionary::<>f__switch$map21
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map21_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.Messaging.MethodDictionary::<>f__switch$map22
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map22_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map21_4() { return static_cast<int32_t>(offsetof(MethodDictionary_t1742974787_StaticFields, ___U3CU3Ef__switchU24map21_4)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map21_4() const { return ___U3CU3Ef__switchU24map21_4; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map21_4() { return &___U3CU3Ef__switchU24map21_4; }
	inline void set_U3CU3Ef__switchU24map21_4(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map21_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map21_4, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map22_5() { return static_cast<int32_t>(offsetof(MethodDictionary_t1742974787_StaticFields, ___U3CU3Ef__switchU24map22_5)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map22_5() const { return ___U3CU3Ef__switchU24map22_5; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map22_5() { return &___U3CU3Ef__switchU24map22_5; }
	inline void set_U3CU3Ef__switchU24map22_5(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map22_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map22_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
