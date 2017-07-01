#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_IO_TextReader1561828458.h"

// System.IO.TextReader
struct TextReader_t1561828458;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.SynchronizedReader
struct  SynchronizedReader_t498788541  : public TextReader_t1561828458
{
public:
	// System.IO.TextReader System.IO.SynchronizedReader::reader
	TextReader_t1561828458 * ___reader_1;

public:
	inline static int32_t get_offset_of_reader_1() { return static_cast<int32_t>(offsetof(SynchronizedReader_t498788541, ___reader_1)); }
	inline TextReader_t1561828458 * get_reader_1() const { return ___reader_1; }
	inline TextReader_t1561828458 ** get_address_of_reader_1() { return &___reader_1; }
	inline void set_reader_1(TextReader_t1561828458 * value)
	{
		___reader_1 = value;
		Il2CppCodeGenWriteBarrier(&___reader_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
