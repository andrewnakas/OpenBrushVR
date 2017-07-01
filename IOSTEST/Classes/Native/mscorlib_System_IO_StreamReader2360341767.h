#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_IO_TextReader1561828458.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.Text.Encoding
struct Encoding_t663144255;
// System.Text.Decoder
struct Decoder_t3792697818;
// System.IO.Stream
struct Stream_t3255436806;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// System.IO.StreamReader
struct StreamReader_t2360341767;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StreamReader
struct  StreamReader_t2360341767  : public TextReader_t1561828458
{
public:
	// System.Byte[] System.IO.StreamReader::input_buffer
	ByteU5BU5D_t3397334013* ___input_buffer_1;
	// System.Char[] System.IO.StreamReader::decoded_buffer
	CharU5BU5D_t1328083999* ___decoded_buffer_2;
	// System.Int32 System.IO.StreamReader::decoded_count
	int32_t ___decoded_count_3;
	// System.Int32 System.IO.StreamReader::pos
	int32_t ___pos_4;
	// System.Int32 System.IO.StreamReader::buffer_size
	int32_t ___buffer_size_5;
	// System.Int32 System.IO.StreamReader::do_checks
	int32_t ___do_checks_6;
	// System.Text.Encoding System.IO.StreamReader::encoding
	Encoding_t663144255 * ___encoding_7;
	// System.Text.Decoder System.IO.StreamReader::decoder
	Decoder_t3792697818 * ___decoder_8;
	// System.IO.Stream System.IO.StreamReader::base_stream
	Stream_t3255436806 * ___base_stream_9;
	// System.Boolean System.IO.StreamReader::mayBlock
	bool ___mayBlock_10;
	// System.Text.StringBuilder System.IO.StreamReader::line_builder
	StringBuilder_t1221177846 * ___line_builder_11;
	// System.Boolean System.IO.StreamReader::foundCR
	bool ___foundCR_13;

public:
	inline static int32_t get_offset_of_input_buffer_1() { return static_cast<int32_t>(offsetof(StreamReader_t2360341767, ___input_buffer_1)); }
	inline ByteU5BU5D_t3397334013* get_input_buffer_1() const { return ___input_buffer_1; }
	inline ByteU5BU5D_t3397334013** get_address_of_input_buffer_1() { return &___input_buffer_1; }
	inline void set_input_buffer_1(ByteU5BU5D_t3397334013* value)
	{
		___input_buffer_1 = value;
		Il2CppCodeGenWriteBarrier(&___input_buffer_1, value);
	}

	inline static int32_t get_offset_of_decoded_buffer_2() { return static_cast<int32_t>(offsetof(StreamReader_t2360341767, ___decoded_buffer_2)); }
	inline CharU5BU5D_t1328083999* get_decoded_buffer_2() const { return ___decoded_buffer_2; }
	inline CharU5BU5D_t1328083999** get_address_of_decoded_buffer_2() { return &___decoded_buffer_2; }
	inline void set_decoded_buffer_2(CharU5BU5D_t1328083999* value)
	{
		___decoded_buffer_2 = value;
		Il2CppCodeGenWriteBarrier(&___decoded_buffer_2, value);
	}

	inline static int32_t get_offset_of_decoded_count_3() { return static_cast<int32_t>(offsetof(StreamReader_t2360341767, ___decoded_count_3)); }
	inline int32_t get_decoded_count_3() const { return ___decoded_count_3; }
	inline int32_t* get_address_of_decoded_count_3() { return &___decoded_count_3; }
	inline void set_decoded_count_3(int32_t value)
	{
		___decoded_count_3 = value;
	}

	inline static int32_t get_offset_of_pos_4() { return static_cast<int32_t>(offsetof(StreamReader_t2360341767, ___pos_4)); }
	inline int32_t get_pos_4() const { return ___pos_4; }
	inline int32_t* get_address_of_pos_4() { return &___pos_4; }
	inline void set_pos_4(int32_t value)
	{
		___pos_4 = value;
	}

	inline static int32_t get_offset_of_buffer_size_5() { return static_cast<int32_t>(offsetof(StreamReader_t2360341767, ___buffer_size_5)); }
	inline int32_t get_buffer_size_5() const { return ___buffer_size_5; }
	inline int32_t* get_address_of_buffer_size_5() { return &___buffer_size_5; }
	inline void set_buffer_size_5(int32_t value)
	{
		___buffer_size_5 = value;
	}

	inline static int32_t get_offset_of_do_checks_6() { return static_cast<int32_t>(offsetof(StreamReader_t2360341767, ___do_checks_6)); }
	inline int32_t get_do_checks_6() const { return ___do_checks_6; }
	inline int32_t* get_address_of_do_checks_6() { return &___do_checks_6; }
	inline void set_do_checks_6(int32_t value)
	{
		___do_checks_6 = value;
	}

	inline static int32_t get_offset_of_encoding_7() { return static_cast<int32_t>(offsetof(StreamReader_t2360341767, ___encoding_7)); }
	inline Encoding_t663144255 * get_encoding_7() const { return ___encoding_7; }
	inline Encoding_t663144255 ** get_address_of_encoding_7() { return &___encoding_7; }
	inline void set_encoding_7(Encoding_t663144255 * value)
	{
		___encoding_7 = value;
		Il2CppCodeGenWriteBarrier(&___encoding_7, value);
	}

	inline static int32_t get_offset_of_decoder_8() { return static_cast<int32_t>(offsetof(StreamReader_t2360341767, ___decoder_8)); }
	inline Decoder_t3792697818 * get_decoder_8() const { return ___decoder_8; }
	inline Decoder_t3792697818 ** get_address_of_decoder_8() { return &___decoder_8; }
	inline void set_decoder_8(Decoder_t3792697818 * value)
	{
		___decoder_8 = value;
		Il2CppCodeGenWriteBarrier(&___decoder_8, value);
	}

	inline static int32_t get_offset_of_base_stream_9() { return static_cast<int32_t>(offsetof(StreamReader_t2360341767, ___base_stream_9)); }
	inline Stream_t3255436806 * get_base_stream_9() const { return ___base_stream_9; }
	inline Stream_t3255436806 ** get_address_of_base_stream_9() { return &___base_stream_9; }
	inline void set_base_stream_9(Stream_t3255436806 * value)
	{
		___base_stream_9 = value;
		Il2CppCodeGenWriteBarrier(&___base_stream_9, value);
	}

	inline static int32_t get_offset_of_mayBlock_10() { return static_cast<int32_t>(offsetof(StreamReader_t2360341767, ___mayBlock_10)); }
	inline bool get_mayBlock_10() const { return ___mayBlock_10; }
	inline bool* get_address_of_mayBlock_10() { return &___mayBlock_10; }
	inline void set_mayBlock_10(bool value)
	{
		___mayBlock_10 = value;
	}

	inline static int32_t get_offset_of_line_builder_11() { return static_cast<int32_t>(offsetof(StreamReader_t2360341767, ___line_builder_11)); }
	inline StringBuilder_t1221177846 * get_line_builder_11() const { return ___line_builder_11; }
	inline StringBuilder_t1221177846 ** get_address_of_line_builder_11() { return &___line_builder_11; }
	inline void set_line_builder_11(StringBuilder_t1221177846 * value)
	{
		___line_builder_11 = value;
		Il2CppCodeGenWriteBarrier(&___line_builder_11, value);
	}

	inline static int32_t get_offset_of_foundCR_13() { return static_cast<int32_t>(offsetof(StreamReader_t2360341767, ___foundCR_13)); }
	inline bool get_foundCR_13() const { return ___foundCR_13; }
	inline bool* get_address_of_foundCR_13() { return &___foundCR_13; }
	inline void set_foundCR_13(bool value)
	{
		___foundCR_13 = value;
	}
};

struct StreamReader_t2360341767_StaticFields
{
public:
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t2360341767 * ___Null_12;

public:
	inline static int32_t get_offset_of_Null_12() { return static_cast<int32_t>(offsetof(StreamReader_t2360341767_StaticFields, ___Null_12)); }
	inline StreamReader_t2360341767 * get_Null_12() const { return ___Null_12; }
	inline StreamReader_t2360341767 ** get_address_of_Null_12() { return &___Null_12; }
	inline void set_Null_12(StreamReader_t2360341767 * value)
	{
		___Null_12 = value;
		Il2CppCodeGenWriteBarrier(&___Null_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
