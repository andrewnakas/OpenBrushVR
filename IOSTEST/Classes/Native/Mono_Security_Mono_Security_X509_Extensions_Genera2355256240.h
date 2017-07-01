#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.ArrayList
struct ArrayList_t4252133567;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.X509.Extensions.GeneralNames
struct  GeneralNames_t2355256240  : public Il2CppObject
{
public:
	// System.Collections.ArrayList Mono.Security.X509.Extensions.GeneralNames::rfc822Name
	ArrayList_t4252133567 * ___rfc822Name_0;
	// System.Collections.ArrayList Mono.Security.X509.Extensions.GeneralNames::dnsName
	ArrayList_t4252133567 * ___dnsName_1;
	// System.Collections.ArrayList Mono.Security.X509.Extensions.GeneralNames::directoryNames
	ArrayList_t4252133567 * ___directoryNames_2;
	// System.Collections.ArrayList Mono.Security.X509.Extensions.GeneralNames::uris
	ArrayList_t4252133567 * ___uris_3;
	// System.Collections.ArrayList Mono.Security.X509.Extensions.GeneralNames::ipAddr
	ArrayList_t4252133567 * ___ipAddr_4;

public:
	inline static int32_t get_offset_of_rfc822Name_0() { return static_cast<int32_t>(offsetof(GeneralNames_t2355256240, ___rfc822Name_0)); }
	inline ArrayList_t4252133567 * get_rfc822Name_0() const { return ___rfc822Name_0; }
	inline ArrayList_t4252133567 ** get_address_of_rfc822Name_0() { return &___rfc822Name_0; }
	inline void set_rfc822Name_0(ArrayList_t4252133567 * value)
	{
		___rfc822Name_0 = value;
		Il2CppCodeGenWriteBarrier(&___rfc822Name_0, value);
	}

	inline static int32_t get_offset_of_dnsName_1() { return static_cast<int32_t>(offsetof(GeneralNames_t2355256240, ___dnsName_1)); }
	inline ArrayList_t4252133567 * get_dnsName_1() const { return ___dnsName_1; }
	inline ArrayList_t4252133567 ** get_address_of_dnsName_1() { return &___dnsName_1; }
	inline void set_dnsName_1(ArrayList_t4252133567 * value)
	{
		___dnsName_1 = value;
		Il2CppCodeGenWriteBarrier(&___dnsName_1, value);
	}

	inline static int32_t get_offset_of_directoryNames_2() { return static_cast<int32_t>(offsetof(GeneralNames_t2355256240, ___directoryNames_2)); }
	inline ArrayList_t4252133567 * get_directoryNames_2() const { return ___directoryNames_2; }
	inline ArrayList_t4252133567 ** get_address_of_directoryNames_2() { return &___directoryNames_2; }
	inline void set_directoryNames_2(ArrayList_t4252133567 * value)
	{
		___directoryNames_2 = value;
		Il2CppCodeGenWriteBarrier(&___directoryNames_2, value);
	}

	inline static int32_t get_offset_of_uris_3() { return static_cast<int32_t>(offsetof(GeneralNames_t2355256240, ___uris_3)); }
	inline ArrayList_t4252133567 * get_uris_3() const { return ___uris_3; }
	inline ArrayList_t4252133567 ** get_address_of_uris_3() { return &___uris_3; }
	inline void set_uris_3(ArrayList_t4252133567 * value)
	{
		___uris_3 = value;
		Il2CppCodeGenWriteBarrier(&___uris_3, value);
	}

	inline static int32_t get_offset_of_ipAddr_4() { return static_cast<int32_t>(offsetof(GeneralNames_t2355256240, ___ipAddr_4)); }
	inline ArrayList_t4252133567 * get_ipAddr_4() const { return ___ipAddr_4; }
	inline ArrayList_t4252133567 ** get_address_of_ipAddr_4() { return &___ipAddr_4; }
	inline void set_ipAddr_4(ArrayList_t4252133567 * value)
	{
		___ipAddr_4 = value;
		Il2CppCodeGenWriteBarrier(&___ipAddr_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
