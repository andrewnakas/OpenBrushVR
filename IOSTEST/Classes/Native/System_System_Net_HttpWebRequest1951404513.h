#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_System_Net_WebRequest1365124353.h"

// System.Uri
struct Uri_t19570940;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t1197680765;
// System.String
struct String_t;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t3028142837;
// System.Version
struct Version_t1755874712;
// System.Net.IWebProxy
struct IWebProxy_t3916853445;
// System.Net.ServicePoint
struct ServicePoint_t2765344313;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.HttpWebRequest
struct  HttpWebRequest_t1951404513  : public WebRequest_t1365124353
{
public:
	// System.Uri System.Net.HttpWebRequest::requestUri
	Uri_t19570940 * ___requestUri_6;
	// System.Uri System.Net.HttpWebRequest::actualUri
	Uri_t19570940 * ___actualUri_7;
	// System.Boolean System.Net.HttpWebRequest::hostChanged
	bool ___hostChanged_8;
	// System.Boolean System.Net.HttpWebRequest::allowAutoRedirect
	bool ___allowAutoRedirect_9;
	// System.Boolean System.Net.HttpWebRequest::allowBuffering
	bool ___allowBuffering_10;
	// System.Security.Cryptography.X509Certificates.X509CertificateCollection System.Net.HttpWebRequest::certificates
	X509CertificateCollection_t1197680765 * ___certificates_11;
	// System.String System.Net.HttpWebRequest::connectionGroup
	String_t* ___connectionGroup_12;
	// System.Int64 System.Net.HttpWebRequest::contentLength
	int64_t ___contentLength_13;
	// System.Net.WebHeaderCollection System.Net.HttpWebRequest::webHeaders
	WebHeaderCollection_t3028142837 * ___webHeaders_14;
	// System.Boolean System.Net.HttpWebRequest::keepAlive
	bool ___keepAlive_15;
	// System.Int32 System.Net.HttpWebRequest::maxAutoRedirect
	int32_t ___maxAutoRedirect_16;
	// System.String System.Net.HttpWebRequest::mediaType
	String_t* ___mediaType_17;
	// System.String System.Net.HttpWebRequest::method
	String_t* ___method_18;
	// System.String System.Net.HttpWebRequest::initialMethod
	String_t* ___initialMethod_19;
	// System.Boolean System.Net.HttpWebRequest::pipelined
	bool ___pipelined_20;
	// System.Version System.Net.HttpWebRequest::version
	Version_t1755874712 * ___version_21;
	// System.Net.IWebProxy System.Net.HttpWebRequest::proxy
	Il2CppObject * ___proxy_22;
	// System.Boolean System.Net.HttpWebRequest::sendChunked
	bool ___sendChunked_23;
	// System.Net.ServicePoint System.Net.HttpWebRequest::servicePoint
	ServicePoint_t2765344313 * ___servicePoint_24;
	// System.Int32 System.Net.HttpWebRequest::timeout
	int32_t ___timeout_25;
	// System.Int32 System.Net.HttpWebRequest::redirects
	int32_t ___redirects_26;
	// System.Object System.Net.HttpWebRequest::locker
	Il2CppObject * ___locker_27;
	// System.Int32 System.Net.HttpWebRequest::readWriteTimeout
	int32_t ___readWriteTimeout_29;

public:
	inline static int32_t get_offset_of_requestUri_6() { return static_cast<int32_t>(offsetof(HttpWebRequest_t1951404513, ___requestUri_6)); }
	inline Uri_t19570940 * get_requestUri_6() const { return ___requestUri_6; }
	inline Uri_t19570940 ** get_address_of_requestUri_6() { return &___requestUri_6; }
	inline void set_requestUri_6(Uri_t19570940 * value)
	{
		___requestUri_6 = value;
		Il2CppCodeGenWriteBarrier(&___requestUri_6, value);
	}

	inline static int32_t get_offset_of_actualUri_7() { return static_cast<int32_t>(offsetof(HttpWebRequest_t1951404513, ___actualUri_7)); }
	inline Uri_t19570940 * get_actualUri_7() const { return ___actualUri_7; }
	inline Uri_t19570940 ** get_address_of_actualUri_7() { return &___actualUri_7; }
	inline void set_actualUri_7(Uri_t19570940 * value)
	{
		___actualUri_7 = value;
		Il2CppCodeGenWriteBarrier(&___actualUri_7, value);
	}

	inline static int32_t get_offset_of_hostChanged_8() { return static_cast<int32_t>(offsetof(HttpWebRequest_t1951404513, ___hostChanged_8)); }
	inline bool get_hostChanged_8() const { return ___hostChanged_8; }
	inline bool* get_address_of_hostChanged_8() { return &___hostChanged_8; }
	inline void set_hostChanged_8(bool value)
	{
		___hostChanged_8 = value;
	}

	inline static int32_t get_offset_of_allowAutoRedirect_9() { return static_cast<int32_t>(offsetof(HttpWebRequest_t1951404513, ___allowAutoRedirect_9)); }
	inline bool get_allowAutoRedirect_9() const { return ___allowAutoRedirect_9; }
	inline bool* get_address_of_allowAutoRedirect_9() { return &___allowAutoRedirect_9; }
	inline void set_allowAutoRedirect_9(bool value)
	{
		___allowAutoRedirect_9 = value;
	}

	inline static int32_t get_offset_of_allowBuffering_10() { return static_cast<int32_t>(offsetof(HttpWebRequest_t1951404513, ___allowBuffering_10)); }
	inline bool get_allowBuffering_10() const { return ___allowBuffering_10; }
	inline bool* get_address_of_allowBuffering_10() { return &___allowBuffering_10; }
	inline void set_allowBuffering_10(bool value)
	{
		___allowBuffering_10 = value;
	}

	inline static int32_t get_offset_of_certificates_11() { return static_cast<int32_t>(offsetof(HttpWebRequest_t1951404513, ___certificates_11)); }
	inline X509CertificateCollection_t1197680765 * get_certificates_11() const { return ___certificates_11; }
	inline X509CertificateCollection_t1197680765 ** get_address_of_certificates_11() { return &___certificates_11; }
	inline void set_certificates_11(X509CertificateCollection_t1197680765 * value)
	{
		___certificates_11 = value;
		Il2CppCodeGenWriteBarrier(&___certificates_11, value);
	}

	inline static int32_t get_offset_of_connectionGroup_12() { return static_cast<int32_t>(offsetof(HttpWebRequest_t1951404513, ___connectionGroup_12)); }
	inline String_t* get_connectionGroup_12() const { return ___connectionGroup_12; }
	inline String_t** get_address_of_connectionGroup_12() { return &___connectionGroup_12; }
	inline void set_connectionGroup_12(String_t* value)
	{
		___connectionGroup_12 = value;
		Il2CppCodeGenWriteBarrier(&___connectionGroup_12, value);
	}

	inline static int32_t get_offset_of_contentLength_13() { return static_cast<int32_t>(offsetof(HttpWebRequest_t1951404513, ___contentLength_13)); }
	inline int64_t get_contentLength_13() const { return ___contentLength_13; }
	inline int64_t* get_address_of_contentLength_13() { return &___contentLength_13; }
	inline void set_contentLength_13(int64_t value)
	{
		___contentLength_13 = value;
	}

	inline static int32_t get_offset_of_webHeaders_14() { return static_cast<int32_t>(offsetof(HttpWebRequest_t1951404513, ___webHeaders_14)); }
	inline WebHeaderCollection_t3028142837 * get_webHeaders_14() const { return ___webHeaders_14; }
	inline WebHeaderCollection_t3028142837 ** get_address_of_webHeaders_14() { return &___webHeaders_14; }
	inline void set_webHeaders_14(WebHeaderCollection_t3028142837 * value)
	{
		___webHeaders_14 = value;
		Il2CppCodeGenWriteBarrier(&___webHeaders_14, value);
	}

	inline static int32_t get_offset_of_keepAlive_15() { return static_cast<int32_t>(offsetof(HttpWebRequest_t1951404513, ___keepAlive_15)); }
	inline bool get_keepAlive_15() const { return ___keepAlive_15; }
	inline bool* get_address_of_keepAlive_15() { return &___keepAlive_15; }
	inline void set_keepAlive_15(bool value)
	{
		___keepAlive_15 = value;
	}

	inline static int32_t get_offset_of_maxAutoRedirect_16() { return static_cast<int32_t>(offsetof(HttpWebRequest_t1951404513, ___maxAutoRedirect_16)); }
	inline int32_t get_maxAutoRedirect_16() const { return ___maxAutoRedirect_16; }
	inline int32_t* get_address_of_maxAutoRedirect_16() { return &___maxAutoRedirect_16; }
	inline void set_maxAutoRedirect_16(int32_t value)
	{
		___maxAutoRedirect_16 = value;
	}

	inline static int32_t get_offset_of_mediaType_17() { return static_cast<int32_t>(offsetof(HttpWebRequest_t1951404513, ___mediaType_17)); }
	inline String_t* get_mediaType_17() const { return ___mediaType_17; }
	inline String_t** get_address_of_mediaType_17() { return &___mediaType_17; }
	inline void set_mediaType_17(String_t* value)
	{
		___mediaType_17 = value;
		Il2CppCodeGenWriteBarrier(&___mediaType_17, value);
	}

	inline static int32_t get_offset_of_method_18() { return static_cast<int32_t>(offsetof(HttpWebRequest_t1951404513, ___method_18)); }
	inline String_t* get_method_18() const { return ___method_18; }
	inline String_t** get_address_of_method_18() { return &___method_18; }
	inline void set_method_18(String_t* value)
	{
		___method_18 = value;
		Il2CppCodeGenWriteBarrier(&___method_18, value);
	}

	inline static int32_t get_offset_of_initialMethod_19() { return static_cast<int32_t>(offsetof(HttpWebRequest_t1951404513, ___initialMethod_19)); }
	inline String_t* get_initialMethod_19() const { return ___initialMethod_19; }
	inline String_t** get_address_of_initialMethod_19() { return &___initialMethod_19; }
	inline void set_initialMethod_19(String_t* value)
	{
		___initialMethod_19 = value;
		Il2CppCodeGenWriteBarrier(&___initialMethod_19, value);
	}

	inline static int32_t get_offset_of_pipelined_20() { return static_cast<int32_t>(offsetof(HttpWebRequest_t1951404513, ___pipelined_20)); }
	inline bool get_pipelined_20() const { return ___pipelined_20; }
	inline bool* get_address_of_pipelined_20() { return &___pipelined_20; }
	inline void set_pipelined_20(bool value)
	{
		___pipelined_20 = value;
	}

	inline static int32_t get_offset_of_version_21() { return static_cast<int32_t>(offsetof(HttpWebRequest_t1951404513, ___version_21)); }
	inline Version_t1755874712 * get_version_21() const { return ___version_21; }
	inline Version_t1755874712 ** get_address_of_version_21() { return &___version_21; }
	inline void set_version_21(Version_t1755874712 * value)
	{
		___version_21 = value;
		Il2CppCodeGenWriteBarrier(&___version_21, value);
	}

	inline static int32_t get_offset_of_proxy_22() { return static_cast<int32_t>(offsetof(HttpWebRequest_t1951404513, ___proxy_22)); }
	inline Il2CppObject * get_proxy_22() const { return ___proxy_22; }
	inline Il2CppObject ** get_address_of_proxy_22() { return &___proxy_22; }
	inline void set_proxy_22(Il2CppObject * value)
	{
		___proxy_22 = value;
		Il2CppCodeGenWriteBarrier(&___proxy_22, value);
	}

	inline static int32_t get_offset_of_sendChunked_23() { return static_cast<int32_t>(offsetof(HttpWebRequest_t1951404513, ___sendChunked_23)); }
	inline bool get_sendChunked_23() const { return ___sendChunked_23; }
	inline bool* get_address_of_sendChunked_23() { return &___sendChunked_23; }
	inline void set_sendChunked_23(bool value)
	{
		___sendChunked_23 = value;
	}

	inline static int32_t get_offset_of_servicePoint_24() { return static_cast<int32_t>(offsetof(HttpWebRequest_t1951404513, ___servicePoint_24)); }
	inline ServicePoint_t2765344313 * get_servicePoint_24() const { return ___servicePoint_24; }
	inline ServicePoint_t2765344313 ** get_address_of_servicePoint_24() { return &___servicePoint_24; }
	inline void set_servicePoint_24(ServicePoint_t2765344313 * value)
	{
		___servicePoint_24 = value;
		Il2CppCodeGenWriteBarrier(&___servicePoint_24, value);
	}

	inline static int32_t get_offset_of_timeout_25() { return static_cast<int32_t>(offsetof(HttpWebRequest_t1951404513, ___timeout_25)); }
	inline int32_t get_timeout_25() const { return ___timeout_25; }
	inline int32_t* get_address_of_timeout_25() { return &___timeout_25; }
	inline void set_timeout_25(int32_t value)
	{
		___timeout_25 = value;
	}

	inline static int32_t get_offset_of_redirects_26() { return static_cast<int32_t>(offsetof(HttpWebRequest_t1951404513, ___redirects_26)); }
	inline int32_t get_redirects_26() const { return ___redirects_26; }
	inline int32_t* get_address_of_redirects_26() { return &___redirects_26; }
	inline void set_redirects_26(int32_t value)
	{
		___redirects_26 = value;
	}

	inline static int32_t get_offset_of_locker_27() { return static_cast<int32_t>(offsetof(HttpWebRequest_t1951404513, ___locker_27)); }
	inline Il2CppObject * get_locker_27() const { return ___locker_27; }
	inline Il2CppObject ** get_address_of_locker_27() { return &___locker_27; }
	inline void set_locker_27(Il2CppObject * value)
	{
		___locker_27 = value;
		Il2CppCodeGenWriteBarrier(&___locker_27, value);
	}

	inline static int32_t get_offset_of_readWriteTimeout_29() { return static_cast<int32_t>(offsetof(HttpWebRequest_t1951404513, ___readWriteTimeout_29)); }
	inline int32_t get_readWriteTimeout_29() const { return ___readWriteTimeout_29; }
	inline int32_t* get_address_of_readWriteTimeout_29() { return &___readWriteTimeout_29; }
	inline void set_readWriteTimeout_29(int32_t value)
	{
		___readWriteTimeout_29 = value;
	}
};

struct HttpWebRequest_t1951404513_StaticFields
{
public:
	// System.Int32 System.Net.HttpWebRequest::defaultMaxResponseHeadersLength
	int32_t ___defaultMaxResponseHeadersLength_28;

public:
	inline static int32_t get_offset_of_defaultMaxResponseHeadersLength_28() { return static_cast<int32_t>(offsetof(HttpWebRequest_t1951404513_StaticFields, ___defaultMaxResponseHeadersLength_28)); }
	inline int32_t get_defaultMaxResponseHeadersLength_28() const { return ___defaultMaxResponseHeadersLength_28; }
	inline int32_t* get_address_of_defaultMaxResponseHeadersLength_28() { return &___defaultMaxResponseHeadersLength_28; }
	inline void set_defaultMaxResponseHeadersLength_28(int32_t value)
	{
		___defaultMaxResponseHeadersLength_28 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
