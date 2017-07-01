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
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// System.Reflection.MethodBase
struct MethodBase_t904190842;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t725724420;
// System.Collections.IDictionary
struct IDictionary_t596158605;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3986656710;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.MethodCall
struct  MethodCall_t2461541281  : public Il2CppObject
{
public:
	// System.String System.Runtime.Remoting.Messaging.MethodCall::_uri
	String_t* ____uri_0;
	// System.String System.Runtime.Remoting.Messaging.MethodCall::_typeName
	String_t* ____typeName_1;
	// System.String System.Runtime.Remoting.Messaging.MethodCall::_methodName
	String_t* ____methodName_2;
	// System.Object[] System.Runtime.Remoting.Messaging.MethodCall::_args
	ObjectU5BU5D_t3614634134* ____args_3;
	// System.Type[] System.Runtime.Remoting.Messaging.MethodCall::_methodSignature
	TypeU5BU5D_t1664964607* ____methodSignature_4;
	// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MethodCall::_methodBase
	MethodBase_t904190842 * ____methodBase_5;
	// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MethodCall::_callContext
	LogicalCallContext_t725724420 * ____callContext_6;
	// System.Type[] System.Runtime.Remoting.Messaging.MethodCall::_genericArguments
	TypeU5BU5D_t1664964607* ____genericArguments_7;
	// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodCall::ExternalProperties
	Il2CppObject * ___ExternalProperties_8;
	// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodCall::InternalProperties
	Il2CppObject * ___InternalProperties_9;

public:
	inline static int32_t get_offset_of__uri_0() { return static_cast<int32_t>(offsetof(MethodCall_t2461541281, ____uri_0)); }
	inline String_t* get__uri_0() const { return ____uri_0; }
	inline String_t** get_address_of__uri_0() { return &____uri_0; }
	inline void set__uri_0(String_t* value)
	{
		____uri_0 = value;
		Il2CppCodeGenWriteBarrier(&____uri_0, value);
	}

	inline static int32_t get_offset_of__typeName_1() { return static_cast<int32_t>(offsetof(MethodCall_t2461541281, ____typeName_1)); }
	inline String_t* get__typeName_1() const { return ____typeName_1; }
	inline String_t** get_address_of__typeName_1() { return &____typeName_1; }
	inline void set__typeName_1(String_t* value)
	{
		____typeName_1 = value;
		Il2CppCodeGenWriteBarrier(&____typeName_1, value);
	}

	inline static int32_t get_offset_of__methodName_2() { return static_cast<int32_t>(offsetof(MethodCall_t2461541281, ____methodName_2)); }
	inline String_t* get__methodName_2() const { return ____methodName_2; }
	inline String_t** get_address_of__methodName_2() { return &____methodName_2; }
	inline void set__methodName_2(String_t* value)
	{
		____methodName_2 = value;
		Il2CppCodeGenWriteBarrier(&____methodName_2, value);
	}

	inline static int32_t get_offset_of__args_3() { return static_cast<int32_t>(offsetof(MethodCall_t2461541281, ____args_3)); }
	inline ObjectU5BU5D_t3614634134* get__args_3() const { return ____args_3; }
	inline ObjectU5BU5D_t3614634134** get_address_of__args_3() { return &____args_3; }
	inline void set__args_3(ObjectU5BU5D_t3614634134* value)
	{
		____args_3 = value;
		Il2CppCodeGenWriteBarrier(&____args_3, value);
	}

	inline static int32_t get_offset_of__methodSignature_4() { return static_cast<int32_t>(offsetof(MethodCall_t2461541281, ____methodSignature_4)); }
	inline TypeU5BU5D_t1664964607* get__methodSignature_4() const { return ____methodSignature_4; }
	inline TypeU5BU5D_t1664964607** get_address_of__methodSignature_4() { return &____methodSignature_4; }
	inline void set__methodSignature_4(TypeU5BU5D_t1664964607* value)
	{
		____methodSignature_4 = value;
		Il2CppCodeGenWriteBarrier(&____methodSignature_4, value);
	}

	inline static int32_t get_offset_of__methodBase_5() { return static_cast<int32_t>(offsetof(MethodCall_t2461541281, ____methodBase_5)); }
	inline MethodBase_t904190842 * get__methodBase_5() const { return ____methodBase_5; }
	inline MethodBase_t904190842 ** get_address_of__methodBase_5() { return &____methodBase_5; }
	inline void set__methodBase_5(MethodBase_t904190842 * value)
	{
		____methodBase_5 = value;
		Il2CppCodeGenWriteBarrier(&____methodBase_5, value);
	}

	inline static int32_t get_offset_of__callContext_6() { return static_cast<int32_t>(offsetof(MethodCall_t2461541281, ____callContext_6)); }
	inline LogicalCallContext_t725724420 * get__callContext_6() const { return ____callContext_6; }
	inline LogicalCallContext_t725724420 ** get_address_of__callContext_6() { return &____callContext_6; }
	inline void set__callContext_6(LogicalCallContext_t725724420 * value)
	{
		____callContext_6 = value;
		Il2CppCodeGenWriteBarrier(&____callContext_6, value);
	}

	inline static int32_t get_offset_of__genericArguments_7() { return static_cast<int32_t>(offsetof(MethodCall_t2461541281, ____genericArguments_7)); }
	inline TypeU5BU5D_t1664964607* get__genericArguments_7() const { return ____genericArguments_7; }
	inline TypeU5BU5D_t1664964607** get_address_of__genericArguments_7() { return &____genericArguments_7; }
	inline void set__genericArguments_7(TypeU5BU5D_t1664964607* value)
	{
		____genericArguments_7 = value;
		Il2CppCodeGenWriteBarrier(&____genericArguments_7, value);
	}

	inline static int32_t get_offset_of_ExternalProperties_8() { return static_cast<int32_t>(offsetof(MethodCall_t2461541281, ___ExternalProperties_8)); }
	inline Il2CppObject * get_ExternalProperties_8() const { return ___ExternalProperties_8; }
	inline Il2CppObject ** get_address_of_ExternalProperties_8() { return &___ExternalProperties_8; }
	inline void set_ExternalProperties_8(Il2CppObject * value)
	{
		___ExternalProperties_8 = value;
		Il2CppCodeGenWriteBarrier(&___ExternalProperties_8, value);
	}

	inline static int32_t get_offset_of_InternalProperties_9() { return static_cast<int32_t>(offsetof(MethodCall_t2461541281, ___InternalProperties_9)); }
	inline Il2CppObject * get_InternalProperties_9() const { return ___InternalProperties_9; }
	inline Il2CppObject ** get_address_of_InternalProperties_9() { return &___InternalProperties_9; }
	inline void set_InternalProperties_9(Il2CppObject * value)
	{
		___InternalProperties_9 = value;
		Il2CppCodeGenWriteBarrier(&___InternalProperties_9, value);
	}
};

struct MethodCall_t2461541281_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.Messaging.MethodCall::<>f__switch$map1F
	Dictionary_2_t3986656710 * ___U3CU3Ef__switchU24map1F_10;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map1F_10() { return static_cast<int32_t>(offsetof(MethodCall_t2461541281_StaticFields, ___U3CU3Ef__switchU24map1F_10)); }
	inline Dictionary_2_t3986656710 * get_U3CU3Ef__switchU24map1F_10() const { return ___U3CU3Ef__switchU24map1F_10; }
	inline Dictionary_2_t3986656710 ** get_address_of_U3CU3Ef__switchU24map1F_10() { return &___U3CU3Ef__switchU24map1F_10; }
	inline void set_U3CU3Ef__switchU24map1F_10(Dictionary_2_t3986656710 * value)
	{
		___U3CU3Ef__switchU24map1F_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__switchU24map1F_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
