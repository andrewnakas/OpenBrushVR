#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Uri
struct Uri_t19570940;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Net.ICredentials
struct ICredentials_t3855617113;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.WebProxy
struct  WebProxy_t1169192840  : public Il2CppObject
{
public:
	// System.Uri System.Net.WebProxy::address
	Uri_t19570940 * ___address_0;
	// System.Boolean System.Net.WebProxy::bypassOnLocal
	bool ___bypassOnLocal_1;
	// System.Collections.ArrayList System.Net.WebProxy::bypassList
	ArrayList_t4252133567 * ___bypassList_2;
	// System.Net.ICredentials System.Net.WebProxy::credentials
	Il2CppObject * ___credentials_3;
	// System.Boolean System.Net.WebProxy::useDefaultCredentials
	bool ___useDefaultCredentials_4;

public:
	inline static int32_t get_offset_of_address_0() { return static_cast<int32_t>(offsetof(WebProxy_t1169192840, ___address_0)); }
	inline Uri_t19570940 * get_address_0() const { return ___address_0; }
	inline Uri_t19570940 ** get_address_of_address_0() { return &___address_0; }
	inline void set_address_0(Uri_t19570940 * value)
	{
		___address_0 = value;
		Il2CppCodeGenWriteBarrier(&___address_0, value);
	}

	inline static int32_t get_offset_of_bypassOnLocal_1() { return static_cast<int32_t>(offsetof(WebProxy_t1169192840, ___bypassOnLocal_1)); }
	inline bool get_bypassOnLocal_1() const { return ___bypassOnLocal_1; }
	inline bool* get_address_of_bypassOnLocal_1() { return &___bypassOnLocal_1; }
	inline void set_bypassOnLocal_1(bool value)
	{
		___bypassOnLocal_1 = value;
	}

	inline static int32_t get_offset_of_bypassList_2() { return static_cast<int32_t>(offsetof(WebProxy_t1169192840, ___bypassList_2)); }
	inline ArrayList_t4252133567 * get_bypassList_2() const { return ___bypassList_2; }
	inline ArrayList_t4252133567 ** get_address_of_bypassList_2() { return &___bypassList_2; }
	inline void set_bypassList_2(ArrayList_t4252133567 * value)
	{
		___bypassList_2 = value;
		Il2CppCodeGenWriteBarrier(&___bypassList_2, value);
	}

	inline static int32_t get_offset_of_credentials_3() { return static_cast<int32_t>(offsetof(WebProxy_t1169192840, ___credentials_3)); }
	inline Il2CppObject * get_credentials_3() const { return ___credentials_3; }
	inline Il2CppObject ** get_address_of_credentials_3() { return &___credentials_3; }
	inline void set_credentials_3(Il2CppObject * value)
	{
		___credentials_3 = value;
		Il2CppCodeGenWriteBarrier(&___credentials_3, value);
	}

	inline static int32_t get_offset_of_useDefaultCredentials_4() { return static_cast<int32_t>(offsetof(WebProxy_t1169192840, ___useDefaultCredentials_4)); }
	inline bool get_useDefaultCredentials_4() const { return ___useDefaultCredentials_4; }
	inline bool* get_address_of_useDefaultCredentials_4() { return &___useDefaultCredentials_4; }
	inline void set_useDefaultCredentials_4(bool value)
	{
		___useDefaultCredentials_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
