#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Text.DecoderFallback
struct DecoderFallback_t1715117820;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t4206371382;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.Decoder
struct  Decoder_t3792697818  : public Il2CppObject
{
public:
	// System.Text.DecoderFallback System.Text.Decoder::fallback
	DecoderFallback_t1715117820 * ___fallback_0;
	// System.Text.DecoderFallbackBuffer System.Text.Decoder::fallback_buffer
	DecoderFallbackBuffer_t4206371382 * ___fallback_buffer_1;

public:
	inline static int32_t get_offset_of_fallback_0() { return static_cast<int32_t>(offsetof(Decoder_t3792697818, ___fallback_0)); }
	inline DecoderFallback_t1715117820 * get_fallback_0() const { return ___fallback_0; }
	inline DecoderFallback_t1715117820 ** get_address_of_fallback_0() { return &___fallback_0; }
	inline void set_fallback_0(DecoderFallback_t1715117820 * value)
	{
		___fallback_0 = value;
		Il2CppCodeGenWriteBarrier(&___fallback_0, value);
	}

	inline static int32_t get_offset_of_fallback_buffer_1() { return static_cast<int32_t>(offsetof(Decoder_t3792697818, ___fallback_buffer_1)); }
	inline DecoderFallbackBuffer_t4206371382 * get_fallback_buffer_1() const { return ___fallback_buffer_1; }
	inline DecoderFallbackBuffer_t4206371382 ** get_address_of_fallback_buffer_1() { return &___fallback_buffer_1; }
	inline void set_fallback_buffer_1(DecoderFallbackBuffer_t4206371382 * value)
	{
		___fallback_buffer_1 = value;
		Il2CppCodeGenWriteBarrier(&___fallback_buffer_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
