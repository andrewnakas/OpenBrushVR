#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_System_Net_WebRequest1365124353.h"
#include "mscorlib_System_IO_FileAccess4282042064.h"

// System.Uri
struct Uri_t19570940;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t3028142837;
// System.String
struct String_t;
// System.Net.IWebProxy
struct IWebProxy_t3916853445;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.FileWebRequest
struct  FileWebRequest_t1571840111  : public WebRequest_t1365124353
{
public:
	// System.Uri System.Net.FileWebRequest::uri
	Uri_t19570940 * ___uri_6;
	// System.Net.WebHeaderCollection System.Net.FileWebRequest::webHeaders
	WebHeaderCollection_t3028142837 * ___webHeaders_7;
	// System.String System.Net.FileWebRequest::connectionGroup
	String_t* ___connectionGroup_8;
	// System.Int64 System.Net.FileWebRequest::contentLength
	int64_t ___contentLength_9;
	// System.IO.FileAccess System.Net.FileWebRequest::fileAccess
	int32_t ___fileAccess_10;
	// System.String System.Net.FileWebRequest::method
	String_t* ___method_11;
	// System.Net.IWebProxy System.Net.FileWebRequest::proxy
	Il2CppObject * ___proxy_12;
	// System.Boolean System.Net.FileWebRequest::preAuthenticate
	bool ___preAuthenticate_13;
	// System.Int32 System.Net.FileWebRequest::timeout
	int32_t ___timeout_14;

public:
	inline static int32_t get_offset_of_uri_6() { return static_cast<int32_t>(offsetof(FileWebRequest_t1571840111, ___uri_6)); }
	inline Uri_t19570940 * get_uri_6() const { return ___uri_6; }
	inline Uri_t19570940 ** get_address_of_uri_6() { return &___uri_6; }
	inline void set_uri_6(Uri_t19570940 * value)
	{
		___uri_6 = value;
		Il2CppCodeGenWriteBarrier(&___uri_6, value);
	}

	inline static int32_t get_offset_of_webHeaders_7() { return static_cast<int32_t>(offsetof(FileWebRequest_t1571840111, ___webHeaders_7)); }
	inline WebHeaderCollection_t3028142837 * get_webHeaders_7() const { return ___webHeaders_7; }
	inline WebHeaderCollection_t3028142837 ** get_address_of_webHeaders_7() { return &___webHeaders_7; }
	inline void set_webHeaders_7(WebHeaderCollection_t3028142837 * value)
	{
		___webHeaders_7 = value;
		Il2CppCodeGenWriteBarrier(&___webHeaders_7, value);
	}

	inline static int32_t get_offset_of_connectionGroup_8() { return static_cast<int32_t>(offsetof(FileWebRequest_t1571840111, ___connectionGroup_8)); }
	inline String_t* get_connectionGroup_8() const { return ___connectionGroup_8; }
	inline String_t** get_address_of_connectionGroup_8() { return &___connectionGroup_8; }
	inline void set_connectionGroup_8(String_t* value)
	{
		___connectionGroup_8 = value;
		Il2CppCodeGenWriteBarrier(&___connectionGroup_8, value);
	}

	inline static int32_t get_offset_of_contentLength_9() { return static_cast<int32_t>(offsetof(FileWebRequest_t1571840111, ___contentLength_9)); }
	inline int64_t get_contentLength_9() const { return ___contentLength_9; }
	inline int64_t* get_address_of_contentLength_9() { return &___contentLength_9; }
	inline void set_contentLength_9(int64_t value)
	{
		___contentLength_9 = value;
	}

	inline static int32_t get_offset_of_fileAccess_10() { return static_cast<int32_t>(offsetof(FileWebRequest_t1571840111, ___fileAccess_10)); }
	inline int32_t get_fileAccess_10() const { return ___fileAccess_10; }
	inline int32_t* get_address_of_fileAccess_10() { return &___fileAccess_10; }
	inline void set_fileAccess_10(int32_t value)
	{
		___fileAccess_10 = value;
	}

	inline static int32_t get_offset_of_method_11() { return static_cast<int32_t>(offsetof(FileWebRequest_t1571840111, ___method_11)); }
	inline String_t* get_method_11() const { return ___method_11; }
	inline String_t** get_address_of_method_11() { return &___method_11; }
	inline void set_method_11(String_t* value)
	{
		___method_11 = value;
		Il2CppCodeGenWriteBarrier(&___method_11, value);
	}

	inline static int32_t get_offset_of_proxy_12() { return static_cast<int32_t>(offsetof(FileWebRequest_t1571840111, ___proxy_12)); }
	inline Il2CppObject * get_proxy_12() const { return ___proxy_12; }
	inline Il2CppObject ** get_address_of_proxy_12() { return &___proxy_12; }
	inline void set_proxy_12(Il2CppObject * value)
	{
		___proxy_12 = value;
		Il2CppCodeGenWriteBarrier(&___proxy_12, value);
	}

	inline static int32_t get_offset_of_preAuthenticate_13() { return static_cast<int32_t>(offsetof(FileWebRequest_t1571840111, ___preAuthenticate_13)); }
	inline bool get_preAuthenticate_13() const { return ___preAuthenticate_13; }
	inline bool* get_address_of_preAuthenticate_13() { return &___preAuthenticate_13; }
	inline void set_preAuthenticate_13(bool value)
	{
		___preAuthenticate_13 = value;
	}

	inline static int32_t get_offset_of_timeout_14() { return static_cast<int32_t>(offsetof(FileWebRequest_t1571840111, ___timeout_14)); }
	inline int32_t get_timeout_14() const { return ___timeout_14; }
	inline int32_t* get_address_of_timeout_14() { return &___timeout_14; }
	inline void set_timeout_14(int32_t value)
	{
		___timeout_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
