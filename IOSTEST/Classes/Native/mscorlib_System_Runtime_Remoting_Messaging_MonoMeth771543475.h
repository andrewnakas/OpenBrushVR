#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Reflection.MonoMethod
struct MonoMethod_t;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t725724420;
// System.Object
struct Il2CppObject;
// System.Exception
struct Exception_t1927440687;
// System.String
struct String_t;
// System.Type[]
struct TypeU5BU5D_t1664964607;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.MonoMethodMessage
struct  MonoMethodMessage_t771543475  : public Il2CppObject
{
public:
	// System.Reflection.MonoMethod System.Runtime.Remoting.Messaging.MonoMethodMessage::method
	MonoMethod_t * ___method_0;
	// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::args
	ObjectU5BU5D_t3614634134* ___args_1;
	// System.Byte[] System.Runtime.Remoting.Messaging.MonoMethodMessage::arg_types
	ByteU5BU5D_t3397334013* ___arg_types_2;
	// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MonoMethodMessage::ctx
	LogicalCallContext_t725724420 * ___ctx_3;
	// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::rval
	Il2CppObject * ___rval_4;
	// System.Exception System.Runtime.Remoting.Messaging.MonoMethodMessage::exc
	Exception_t1927440687 * ___exc_5;
	// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::uri
	String_t* ___uri_6;
	// System.Type[] System.Runtime.Remoting.Messaging.MonoMethodMessage::methodSignature
	TypeU5BU5D_t1664964607* ___methodSignature_7;

public:
	inline static int32_t get_offset_of_method_0() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t771543475, ___method_0)); }
	inline MonoMethod_t * get_method_0() const { return ___method_0; }
	inline MonoMethod_t ** get_address_of_method_0() { return &___method_0; }
	inline void set_method_0(MonoMethod_t * value)
	{
		___method_0 = value;
		Il2CppCodeGenWriteBarrier(&___method_0, value);
	}

	inline static int32_t get_offset_of_args_1() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t771543475, ___args_1)); }
	inline ObjectU5BU5D_t3614634134* get_args_1() const { return ___args_1; }
	inline ObjectU5BU5D_t3614634134** get_address_of_args_1() { return &___args_1; }
	inline void set_args_1(ObjectU5BU5D_t3614634134* value)
	{
		___args_1 = value;
		Il2CppCodeGenWriteBarrier(&___args_1, value);
	}

	inline static int32_t get_offset_of_arg_types_2() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t771543475, ___arg_types_2)); }
	inline ByteU5BU5D_t3397334013* get_arg_types_2() const { return ___arg_types_2; }
	inline ByteU5BU5D_t3397334013** get_address_of_arg_types_2() { return &___arg_types_2; }
	inline void set_arg_types_2(ByteU5BU5D_t3397334013* value)
	{
		___arg_types_2 = value;
		Il2CppCodeGenWriteBarrier(&___arg_types_2, value);
	}

	inline static int32_t get_offset_of_ctx_3() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t771543475, ___ctx_3)); }
	inline LogicalCallContext_t725724420 * get_ctx_3() const { return ___ctx_3; }
	inline LogicalCallContext_t725724420 ** get_address_of_ctx_3() { return &___ctx_3; }
	inline void set_ctx_3(LogicalCallContext_t725724420 * value)
	{
		___ctx_3 = value;
		Il2CppCodeGenWriteBarrier(&___ctx_3, value);
	}

	inline static int32_t get_offset_of_rval_4() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t771543475, ___rval_4)); }
	inline Il2CppObject * get_rval_4() const { return ___rval_4; }
	inline Il2CppObject ** get_address_of_rval_4() { return &___rval_4; }
	inline void set_rval_4(Il2CppObject * value)
	{
		___rval_4 = value;
		Il2CppCodeGenWriteBarrier(&___rval_4, value);
	}

	inline static int32_t get_offset_of_exc_5() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t771543475, ___exc_5)); }
	inline Exception_t1927440687 * get_exc_5() const { return ___exc_5; }
	inline Exception_t1927440687 ** get_address_of_exc_5() { return &___exc_5; }
	inline void set_exc_5(Exception_t1927440687 * value)
	{
		___exc_5 = value;
		Il2CppCodeGenWriteBarrier(&___exc_5, value);
	}

	inline static int32_t get_offset_of_uri_6() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t771543475, ___uri_6)); }
	inline String_t* get_uri_6() const { return ___uri_6; }
	inline String_t** get_address_of_uri_6() { return &___uri_6; }
	inline void set_uri_6(String_t* value)
	{
		___uri_6 = value;
		Il2CppCodeGenWriteBarrier(&___uri_6, value);
	}

	inline static int32_t get_offset_of_methodSignature_7() { return static_cast<int32_t>(offsetof(MonoMethodMessage_t771543475, ___methodSignature_7)); }
	inline TypeU5BU5D_t1664964607* get_methodSignature_7() const { return ___methodSignature_7; }
	inline TypeU5BU5D_t1664964607** get_address_of_methodSignature_7() { return &___methodSignature_7; }
	inline void set_methodSignature_7(TypeU5BU5D_t1664964607* value)
	{
		___methodSignature_7 = value;
		Il2CppCodeGenWriteBarrier(&___methodSignature_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
