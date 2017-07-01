#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t725724420;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Exception
struct Exception_t1927440687;
// System.Reflection.MethodBase
struct MethodBase_t904190842;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// System.Runtime.Remoting.Messaging.MethodReturnDictionary
struct MethodReturnDictionary_t981009581;
// System.Runtime.Remoting.Messaging.ArgInfo
struct ArgInfo_t688271106;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ReturnMessage
struct  ReturnMessage_t3411975905  : public Il2CppObject
{
public:
	// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::_outArgs
	ObjectU5BU5D_t3614634134* ____outArgs_0;
	// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::_args
	ObjectU5BU5D_t3614634134* ____args_1;
	// System.Int32 System.Runtime.Remoting.Messaging.ReturnMessage::_outArgsCount
	int32_t ____outArgsCount_2;
	// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.ReturnMessage::_callCtx
	LogicalCallContext_t725724420 * ____callCtx_3;
	// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::_returnValue
	Il2CppObject * ____returnValue_4;
	// System.String System.Runtime.Remoting.Messaging.ReturnMessage::_uri
	String_t* ____uri_5;
	// System.Exception System.Runtime.Remoting.Messaging.ReturnMessage::_exception
	Exception_t1927440687 * ____exception_6;
	// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.ReturnMessage::_methodBase
	MethodBase_t904190842 * ____methodBase_7;
	// System.String System.Runtime.Remoting.Messaging.ReturnMessage::_methodName
	String_t* ____methodName_8;
	// System.Type[] System.Runtime.Remoting.Messaging.ReturnMessage::_methodSignature
	TypeU5BU5D_t1664964607* ____methodSignature_9;
	// System.String System.Runtime.Remoting.Messaging.ReturnMessage::_typeName
	String_t* ____typeName_10;
	// System.Runtime.Remoting.Messaging.MethodReturnDictionary System.Runtime.Remoting.Messaging.ReturnMessage::_properties
	MethodReturnDictionary_t981009581 * ____properties_11;
	// System.Runtime.Remoting.Messaging.ArgInfo System.Runtime.Remoting.Messaging.ReturnMessage::_inArgInfo
	ArgInfo_t688271106 * ____inArgInfo_12;

public:
	inline static int32_t get_offset_of__outArgs_0() { return static_cast<int32_t>(offsetof(ReturnMessage_t3411975905, ____outArgs_0)); }
	inline ObjectU5BU5D_t3614634134* get__outArgs_0() const { return ____outArgs_0; }
	inline ObjectU5BU5D_t3614634134** get_address_of__outArgs_0() { return &____outArgs_0; }
	inline void set__outArgs_0(ObjectU5BU5D_t3614634134* value)
	{
		____outArgs_0 = value;
		Il2CppCodeGenWriteBarrier(&____outArgs_0, value);
	}

	inline static int32_t get_offset_of__args_1() { return static_cast<int32_t>(offsetof(ReturnMessage_t3411975905, ____args_1)); }
	inline ObjectU5BU5D_t3614634134* get__args_1() const { return ____args_1; }
	inline ObjectU5BU5D_t3614634134** get_address_of__args_1() { return &____args_1; }
	inline void set__args_1(ObjectU5BU5D_t3614634134* value)
	{
		____args_1 = value;
		Il2CppCodeGenWriteBarrier(&____args_1, value);
	}

	inline static int32_t get_offset_of__outArgsCount_2() { return static_cast<int32_t>(offsetof(ReturnMessage_t3411975905, ____outArgsCount_2)); }
	inline int32_t get__outArgsCount_2() const { return ____outArgsCount_2; }
	inline int32_t* get_address_of__outArgsCount_2() { return &____outArgsCount_2; }
	inline void set__outArgsCount_2(int32_t value)
	{
		____outArgsCount_2 = value;
	}

	inline static int32_t get_offset_of__callCtx_3() { return static_cast<int32_t>(offsetof(ReturnMessage_t3411975905, ____callCtx_3)); }
	inline LogicalCallContext_t725724420 * get__callCtx_3() const { return ____callCtx_3; }
	inline LogicalCallContext_t725724420 ** get_address_of__callCtx_3() { return &____callCtx_3; }
	inline void set__callCtx_3(LogicalCallContext_t725724420 * value)
	{
		____callCtx_3 = value;
		Il2CppCodeGenWriteBarrier(&____callCtx_3, value);
	}

	inline static int32_t get_offset_of__returnValue_4() { return static_cast<int32_t>(offsetof(ReturnMessage_t3411975905, ____returnValue_4)); }
	inline Il2CppObject * get__returnValue_4() const { return ____returnValue_4; }
	inline Il2CppObject ** get_address_of__returnValue_4() { return &____returnValue_4; }
	inline void set__returnValue_4(Il2CppObject * value)
	{
		____returnValue_4 = value;
		Il2CppCodeGenWriteBarrier(&____returnValue_4, value);
	}

	inline static int32_t get_offset_of__uri_5() { return static_cast<int32_t>(offsetof(ReturnMessage_t3411975905, ____uri_5)); }
	inline String_t* get__uri_5() const { return ____uri_5; }
	inline String_t** get_address_of__uri_5() { return &____uri_5; }
	inline void set__uri_5(String_t* value)
	{
		____uri_5 = value;
		Il2CppCodeGenWriteBarrier(&____uri_5, value);
	}

	inline static int32_t get_offset_of__exception_6() { return static_cast<int32_t>(offsetof(ReturnMessage_t3411975905, ____exception_6)); }
	inline Exception_t1927440687 * get__exception_6() const { return ____exception_6; }
	inline Exception_t1927440687 ** get_address_of__exception_6() { return &____exception_6; }
	inline void set__exception_6(Exception_t1927440687 * value)
	{
		____exception_6 = value;
		Il2CppCodeGenWriteBarrier(&____exception_6, value);
	}

	inline static int32_t get_offset_of__methodBase_7() { return static_cast<int32_t>(offsetof(ReturnMessage_t3411975905, ____methodBase_7)); }
	inline MethodBase_t904190842 * get__methodBase_7() const { return ____methodBase_7; }
	inline MethodBase_t904190842 ** get_address_of__methodBase_7() { return &____methodBase_7; }
	inline void set__methodBase_7(MethodBase_t904190842 * value)
	{
		____methodBase_7 = value;
		Il2CppCodeGenWriteBarrier(&____methodBase_7, value);
	}

	inline static int32_t get_offset_of__methodName_8() { return static_cast<int32_t>(offsetof(ReturnMessage_t3411975905, ____methodName_8)); }
	inline String_t* get__methodName_8() const { return ____methodName_8; }
	inline String_t** get_address_of__methodName_8() { return &____methodName_8; }
	inline void set__methodName_8(String_t* value)
	{
		____methodName_8 = value;
		Il2CppCodeGenWriteBarrier(&____methodName_8, value);
	}

	inline static int32_t get_offset_of__methodSignature_9() { return static_cast<int32_t>(offsetof(ReturnMessage_t3411975905, ____methodSignature_9)); }
	inline TypeU5BU5D_t1664964607* get__methodSignature_9() const { return ____methodSignature_9; }
	inline TypeU5BU5D_t1664964607** get_address_of__methodSignature_9() { return &____methodSignature_9; }
	inline void set__methodSignature_9(TypeU5BU5D_t1664964607* value)
	{
		____methodSignature_9 = value;
		Il2CppCodeGenWriteBarrier(&____methodSignature_9, value);
	}

	inline static int32_t get_offset_of__typeName_10() { return static_cast<int32_t>(offsetof(ReturnMessage_t3411975905, ____typeName_10)); }
	inline String_t* get__typeName_10() const { return ____typeName_10; }
	inline String_t** get_address_of__typeName_10() { return &____typeName_10; }
	inline void set__typeName_10(String_t* value)
	{
		____typeName_10 = value;
		Il2CppCodeGenWriteBarrier(&____typeName_10, value);
	}

	inline static int32_t get_offset_of__properties_11() { return static_cast<int32_t>(offsetof(ReturnMessage_t3411975905, ____properties_11)); }
	inline MethodReturnDictionary_t981009581 * get__properties_11() const { return ____properties_11; }
	inline MethodReturnDictionary_t981009581 ** get_address_of__properties_11() { return &____properties_11; }
	inline void set__properties_11(MethodReturnDictionary_t981009581 * value)
	{
		____properties_11 = value;
		Il2CppCodeGenWriteBarrier(&____properties_11, value);
	}

	inline static int32_t get_offset_of__inArgInfo_12() { return static_cast<int32_t>(offsetof(ReturnMessage_t3411975905, ____inArgInfo_12)); }
	inline ArgInfo_t688271106 * get__inArgInfo_12() const { return ____inArgInfo_12; }
	inline ArgInfo_t688271106 ** get_address_of__inArgInfo_12() { return &____inArgInfo_12; }
	inline void set__inArgInfo_12(ArgInfo_t688271106 * value)
	{
		____inArgInfo_12 = value;
		Il2CppCodeGenWriteBarrier(&____inArgInfo_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
