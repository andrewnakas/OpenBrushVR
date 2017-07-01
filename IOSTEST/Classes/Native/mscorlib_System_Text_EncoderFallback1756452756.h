#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Text.EncoderFallback
struct EncoderFallback_t1756452756;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.EncoderFallback
struct  EncoderFallback_t1756452756  : public Il2CppObject
{
public:

public:
};

struct EncoderFallback_t1756452756_StaticFields
{
public:
	// System.Text.EncoderFallback System.Text.EncoderFallback::exception_fallback
	EncoderFallback_t1756452756 * ___exception_fallback_0;
	// System.Text.EncoderFallback System.Text.EncoderFallback::replacement_fallback
	EncoderFallback_t1756452756 * ___replacement_fallback_1;
	// System.Text.EncoderFallback System.Text.EncoderFallback::standard_safe_fallback
	EncoderFallback_t1756452756 * ___standard_safe_fallback_2;

public:
	inline static int32_t get_offset_of_exception_fallback_0() { return static_cast<int32_t>(offsetof(EncoderFallback_t1756452756_StaticFields, ___exception_fallback_0)); }
	inline EncoderFallback_t1756452756 * get_exception_fallback_0() const { return ___exception_fallback_0; }
	inline EncoderFallback_t1756452756 ** get_address_of_exception_fallback_0() { return &___exception_fallback_0; }
	inline void set_exception_fallback_0(EncoderFallback_t1756452756 * value)
	{
		___exception_fallback_0 = value;
		Il2CppCodeGenWriteBarrier(&___exception_fallback_0, value);
	}

	inline static int32_t get_offset_of_replacement_fallback_1() { return static_cast<int32_t>(offsetof(EncoderFallback_t1756452756_StaticFields, ___replacement_fallback_1)); }
	inline EncoderFallback_t1756452756 * get_replacement_fallback_1() const { return ___replacement_fallback_1; }
	inline EncoderFallback_t1756452756 ** get_address_of_replacement_fallback_1() { return &___replacement_fallback_1; }
	inline void set_replacement_fallback_1(EncoderFallback_t1756452756 * value)
	{
		___replacement_fallback_1 = value;
		Il2CppCodeGenWriteBarrier(&___replacement_fallback_1, value);
	}

	inline static int32_t get_offset_of_standard_safe_fallback_2() { return static_cast<int32_t>(offsetof(EncoderFallback_t1756452756_StaticFields, ___standard_safe_fallback_2)); }
	inline EncoderFallback_t1756452756 * get_standard_safe_fallback_2() const { return ___standard_safe_fallback_2; }
	inline EncoderFallback_t1756452756 ** get_address_of_standard_safe_fallback_2() { return &___standard_safe_fallback_2; }
	inline void set_standard_safe_fallback_2(EncoderFallback_t1756452756 * value)
	{
		___standard_safe_fallback_2 = value;
		Il2CppCodeGenWriteBarrier(&___standard_safe_fallback_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
