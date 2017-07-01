#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.IO.BinaryWriter
struct BinaryWriter_t3179371318;
// System.IO.Stream
struct Stream_t3255436806;
// System.Text.Encoding
struct Encoding_t663144255;
// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.BinaryWriter
struct  BinaryWriter_t3179371318  : public Il2CppObject
{
public:
	// System.IO.Stream System.IO.BinaryWriter::OutStream
	Stream_t3255436806 * ___OutStream_1;
	// System.Text.Encoding System.IO.BinaryWriter::m_encoding
	Encoding_t663144255 * ___m_encoding_2;
	// System.Byte[] System.IO.BinaryWriter::buffer
	ByteU5BU5D_t3397334013* ___buffer_3;
	// System.Boolean System.IO.BinaryWriter::disposed
	bool ___disposed_4;

public:
	inline static int32_t get_offset_of_OutStream_1() { return static_cast<int32_t>(offsetof(BinaryWriter_t3179371318, ___OutStream_1)); }
	inline Stream_t3255436806 * get_OutStream_1() const { return ___OutStream_1; }
	inline Stream_t3255436806 ** get_address_of_OutStream_1() { return &___OutStream_1; }
	inline void set_OutStream_1(Stream_t3255436806 * value)
	{
		___OutStream_1 = value;
		Il2CppCodeGenWriteBarrier(&___OutStream_1, value);
	}

	inline static int32_t get_offset_of_m_encoding_2() { return static_cast<int32_t>(offsetof(BinaryWriter_t3179371318, ___m_encoding_2)); }
	inline Encoding_t663144255 * get_m_encoding_2() const { return ___m_encoding_2; }
	inline Encoding_t663144255 ** get_address_of_m_encoding_2() { return &___m_encoding_2; }
	inline void set_m_encoding_2(Encoding_t663144255 * value)
	{
		___m_encoding_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_encoding_2, value);
	}

	inline static int32_t get_offset_of_buffer_3() { return static_cast<int32_t>(offsetof(BinaryWriter_t3179371318, ___buffer_3)); }
	inline ByteU5BU5D_t3397334013* get_buffer_3() const { return ___buffer_3; }
	inline ByteU5BU5D_t3397334013** get_address_of_buffer_3() { return &___buffer_3; }
	inline void set_buffer_3(ByteU5BU5D_t3397334013* value)
	{
		___buffer_3 = value;
		Il2CppCodeGenWriteBarrier(&___buffer_3, value);
	}

	inline static int32_t get_offset_of_disposed_4() { return static_cast<int32_t>(offsetof(BinaryWriter_t3179371318, ___disposed_4)); }
	inline bool get_disposed_4() const { return ___disposed_4; }
	inline bool* get_address_of_disposed_4() { return &___disposed_4; }
	inline void set_disposed_4(bool value)
	{
		___disposed_4 = value;
	}
};

struct BinaryWriter_t3179371318_StaticFields
{
public:
	// System.IO.BinaryWriter System.IO.BinaryWriter::Null
	BinaryWriter_t3179371318 * ___Null_0;

public:
	inline static int32_t get_offset_of_Null_0() { return static_cast<int32_t>(offsetof(BinaryWriter_t3179371318_StaticFields, ___Null_0)); }
	inline BinaryWriter_t3179371318 * get_Null_0() const { return ___Null_0; }
	inline BinaryWriter_t3179371318 ** get_address_of_Null_0() { return &___Null_0; }
	inline void set_Null_0(BinaryWriter_t3179371318 * value)
	{
		___Null_0 = value;
		Il2CppCodeGenWriteBarrier(&___Null_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
