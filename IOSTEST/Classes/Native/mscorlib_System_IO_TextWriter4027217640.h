#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Char[]
struct CharU5BU5D_t1328083999;
// System.IO.TextWriter
struct TextWriter_t4027217640;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.TextWriter
struct  TextWriter_t4027217640  : public Il2CppObject
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t1328083999* ___CoreNewLine_0;

public:
	inline static int32_t get_offset_of_CoreNewLine_0() { return static_cast<int32_t>(offsetof(TextWriter_t4027217640, ___CoreNewLine_0)); }
	inline CharU5BU5D_t1328083999* get_CoreNewLine_0() const { return ___CoreNewLine_0; }
	inline CharU5BU5D_t1328083999** get_address_of_CoreNewLine_0() { return &___CoreNewLine_0; }
	inline void set_CoreNewLine_0(CharU5BU5D_t1328083999* value)
	{
		___CoreNewLine_0 = value;
		Il2CppCodeGenWriteBarrier(&___CoreNewLine_0, value);
	}
};

struct TextWriter_t4027217640_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t4027217640 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t4027217640_StaticFields, ___Null_1)); }
	inline TextWriter_t4027217640 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t4027217640 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t4027217640 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier(&___Null_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
