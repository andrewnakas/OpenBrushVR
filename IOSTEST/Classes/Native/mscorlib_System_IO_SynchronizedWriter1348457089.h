#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_IO_TextWriter4027217640.h"

// System.IO.TextWriter
struct TextWriter_t4027217640;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.SynchronizedWriter
struct  SynchronizedWriter_t1348457089  : public TextWriter_t4027217640
{
public:
	// System.IO.TextWriter System.IO.SynchronizedWriter::writer
	TextWriter_t4027217640 * ___writer_2;
	// System.Boolean System.IO.SynchronizedWriter::neverClose
	bool ___neverClose_3;

public:
	inline static int32_t get_offset_of_writer_2() { return static_cast<int32_t>(offsetof(SynchronizedWriter_t1348457089, ___writer_2)); }
	inline TextWriter_t4027217640 * get_writer_2() const { return ___writer_2; }
	inline TextWriter_t4027217640 ** get_address_of_writer_2() { return &___writer_2; }
	inline void set_writer_2(TextWriter_t4027217640 * value)
	{
		___writer_2 = value;
		Il2CppCodeGenWriteBarrier(&___writer_2, value);
	}

	inline static int32_t get_offset_of_neverClose_3() { return static_cast<int32_t>(offsetof(SynchronizedWriter_t1348457089, ___neverClose_3)); }
	inline bool get_neverClose_3() const { return ___neverClose_3; }
	inline bool* get_address_of_neverClose_3() { return &___neverClose_3; }
	inline void set_neverClose_3(bool value)
	{
		___neverClose_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
