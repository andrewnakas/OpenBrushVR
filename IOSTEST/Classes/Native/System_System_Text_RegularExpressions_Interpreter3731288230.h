#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_System_Text_RegularExpressions_BaseMachine4008011478.h"
#include "System_System_Text_RegularExpressions_Interpreter_I273560425.h"

// System.UInt16[]
struct UInt16U5BU5D_t2527266722;
// System.String
struct String_t;
// System.Text.RegularExpressions.QuickSearch
struct QuickSearch_t1036078825;
// System.Text.RegularExpressions.Interpreter/RepeatContext
struct RepeatContext_t1827616978;
// System.Text.RegularExpressions.Mark[]
struct MarkU5BU5D_t3801731412;
// System.Int32[]
struct Int32U5BU5D_t3030399641;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Interpreter
struct  Interpreter_t3731288230  : public BaseMachine_t4008011478
{
public:
	// System.UInt16[] System.Text.RegularExpressions.Interpreter::program
	UInt16U5BU5D_t2527266722* ___program_1;
	// System.Int32 System.Text.RegularExpressions.Interpreter::program_start
	int32_t ___program_start_2;
	// System.String System.Text.RegularExpressions.Interpreter::text
	String_t* ___text_3;
	// System.Int32 System.Text.RegularExpressions.Interpreter::text_end
	int32_t ___text_end_4;
	// System.Int32 System.Text.RegularExpressions.Interpreter::group_count
	int32_t ___group_count_5;
	// System.Int32 System.Text.RegularExpressions.Interpreter::match_min
	int32_t ___match_min_6;
	// System.Text.RegularExpressions.QuickSearch System.Text.RegularExpressions.Interpreter::qs
	QuickSearch_t1036078825 * ___qs_7;
	// System.Int32 System.Text.RegularExpressions.Interpreter::scan_ptr
	int32_t ___scan_ptr_8;
	// System.Text.RegularExpressions.Interpreter/RepeatContext System.Text.RegularExpressions.Interpreter::repeat
	RepeatContext_t1827616978 * ___repeat_9;
	// System.Text.RegularExpressions.Interpreter/RepeatContext System.Text.RegularExpressions.Interpreter::fast
	RepeatContext_t1827616978 * ___fast_10;
	// System.Text.RegularExpressions.Interpreter/IntStack System.Text.RegularExpressions.Interpreter::stack
	IntStack_t273560425  ___stack_11;
	// System.Text.RegularExpressions.Interpreter/RepeatContext System.Text.RegularExpressions.Interpreter::deep
	RepeatContext_t1827616978 * ___deep_12;
	// System.Text.RegularExpressions.Mark[] System.Text.RegularExpressions.Interpreter::marks
	MarkU5BU5D_t3801731412* ___marks_13;
	// System.Int32 System.Text.RegularExpressions.Interpreter::mark_start
	int32_t ___mark_start_14;
	// System.Int32 System.Text.RegularExpressions.Interpreter::mark_end
	int32_t ___mark_end_15;
	// System.Int32[] System.Text.RegularExpressions.Interpreter::groups
	Int32U5BU5D_t3030399641* ___groups_16;

public:
	inline static int32_t get_offset_of_program_1() { return static_cast<int32_t>(offsetof(Interpreter_t3731288230, ___program_1)); }
	inline UInt16U5BU5D_t2527266722* get_program_1() const { return ___program_1; }
	inline UInt16U5BU5D_t2527266722** get_address_of_program_1() { return &___program_1; }
	inline void set_program_1(UInt16U5BU5D_t2527266722* value)
	{
		___program_1 = value;
		Il2CppCodeGenWriteBarrier(&___program_1, value);
	}

	inline static int32_t get_offset_of_program_start_2() { return static_cast<int32_t>(offsetof(Interpreter_t3731288230, ___program_start_2)); }
	inline int32_t get_program_start_2() const { return ___program_start_2; }
	inline int32_t* get_address_of_program_start_2() { return &___program_start_2; }
	inline void set_program_start_2(int32_t value)
	{
		___program_start_2 = value;
	}

	inline static int32_t get_offset_of_text_3() { return static_cast<int32_t>(offsetof(Interpreter_t3731288230, ___text_3)); }
	inline String_t* get_text_3() const { return ___text_3; }
	inline String_t** get_address_of_text_3() { return &___text_3; }
	inline void set_text_3(String_t* value)
	{
		___text_3 = value;
		Il2CppCodeGenWriteBarrier(&___text_3, value);
	}

	inline static int32_t get_offset_of_text_end_4() { return static_cast<int32_t>(offsetof(Interpreter_t3731288230, ___text_end_4)); }
	inline int32_t get_text_end_4() const { return ___text_end_4; }
	inline int32_t* get_address_of_text_end_4() { return &___text_end_4; }
	inline void set_text_end_4(int32_t value)
	{
		___text_end_4 = value;
	}

	inline static int32_t get_offset_of_group_count_5() { return static_cast<int32_t>(offsetof(Interpreter_t3731288230, ___group_count_5)); }
	inline int32_t get_group_count_5() const { return ___group_count_5; }
	inline int32_t* get_address_of_group_count_5() { return &___group_count_5; }
	inline void set_group_count_5(int32_t value)
	{
		___group_count_5 = value;
	}

	inline static int32_t get_offset_of_match_min_6() { return static_cast<int32_t>(offsetof(Interpreter_t3731288230, ___match_min_6)); }
	inline int32_t get_match_min_6() const { return ___match_min_6; }
	inline int32_t* get_address_of_match_min_6() { return &___match_min_6; }
	inline void set_match_min_6(int32_t value)
	{
		___match_min_6 = value;
	}

	inline static int32_t get_offset_of_qs_7() { return static_cast<int32_t>(offsetof(Interpreter_t3731288230, ___qs_7)); }
	inline QuickSearch_t1036078825 * get_qs_7() const { return ___qs_7; }
	inline QuickSearch_t1036078825 ** get_address_of_qs_7() { return &___qs_7; }
	inline void set_qs_7(QuickSearch_t1036078825 * value)
	{
		___qs_7 = value;
		Il2CppCodeGenWriteBarrier(&___qs_7, value);
	}

	inline static int32_t get_offset_of_scan_ptr_8() { return static_cast<int32_t>(offsetof(Interpreter_t3731288230, ___scan_ptr_8)); }
	inline int32_t get_scan_ptr_8() const { return ___scan_ptr_8; }
	inline int32_t* get_address_of_scan_ptr_8() { return &___scan_ptr_8; }
	inline void set_scan_ptr_8(int32_t value)
	{
		___scan_ptr_8 = value;
	}

	inline static int32_t get_offset_of_repeat_9() { return static_cast<int32_t>(offsetof(Interpreter_t3731288230, ___repeat_9)); }
	inline RepeatContext_t1827616978 * get_repeat_9() const { return ___repeat_9; }
	inline RepeatContext_t1827616978 ** get_address_of_repeat_9() { return &___repeat_9; }
	inline void set_repeat_9(RepeatContext_t1827616978 * value)
	{
		___repeat_9 = value;
		Il2CppCodeGenWriteBarrier(&___repeat_9, value);
	}

	inline static int32_t get_offset_of_fast_10() { return static_cast<int32_t>(offsetof(Interpreter_t3731288230, ___fast_10)); }
	inline RepeatContext_t1827616978 * get_fast_10() const { return ___fast_10; }
	inline RepeatContext_t1827616978 ** get_address_of_fast_10() { return &___fast_10; }
	inline void set_fast_10(RepeatContext_t1827616978 * value)
	{
		___fast_10 = value;
		Il2CppCodeGenWriteBarrier(&___fast_10, value);
	}

	inline static int32_t get_offset_of_stack_11() { return static_cast<int32_t>(offsetof(Interpreter_t3731288230, ___stack_11)); }
	inline IntStack_t273560425  get_stack_11() const { return ___stack_11; }
	inline IntStack_t273560425 * get_address_of_stack_11() { return &___stack_11; }
	inline void set_stack_11(IntStack_t273560425  value)
	{
		___stack_11 = value;
	}

	inline static int32_t get_offset_of_deep_12() { return static_cast<int32_t>(offsetof(Interpreter_t3731288230, ___deep_12)); }
	inline RepeatContext_t1827616978 * get_deep_12() const { return ___deep_12; }
	inline RepeatContext_t1827616978 ** get_address_of_deep_12() { return &___deep_12; }
	inline void set_deep_12(RepeatContext_t1827616978 * value)
	{
		___deep_12 = value;
		Il2CppCodeGenWriteBarrier(&___deep_12, value);
	}

	inline static int32_t get_offset_of_marks_13() { return static_cast<int32_t>(offsetof(Interpreter_t3731288230, ___marks_13)); }
	inline MarkU5BU5D_t3801731412* get_marks_13() const { return ___marks_13; }
	inline MarkU5BU5D_t3801731412** get_address_of_marks_13() { return &___marks_13; }
	inline void set_marks_13(MarkU5BU5D_t3801731412* value)
	{
		___marks_13 = value;
		Il2CppCodeGenWriteBarrier(&___marks_13, value);
	}

	inline static int32_t get_offset_of_mark_start_14() { return static_cast<int32_t>(offsetof(Interpreter_t3731288230, ___mark_start_14)); }
	inline int32_t get_mark_start_14() const { return ___mark_start_14; }
	inline int32_t* get_address_of_mark_start_14() { return &___mark_start_14; }
	inline void set_mark_start_14(int32_t value)
	{
		___mark_start_14 = value;
	}

	inline static int32_t get_offset_of_mark_end_15() { return static_cast<int32_t>(offsetof(Interpreter_t3731288230, ___mark_end_15)); }
	inline int32_t get_mark_end_15() const { return ___mark_end_15; }
	inline int32_t* get_address_of_mark_end_15() { return &___mark_end_15; }
	inline void set_mark_end_15(int32_t value)
	{
		___mark_end_15 = value;
	}

	inline static int32_t get_offset_of_groups_16() { return static_cast<int32_t>(offsetof(Interpreter_t3731288230, ___groups_16)); }
	inline Int32U5BU5D_t3030399641* get_groups_16() const { return ___groups_16; }
	inline Int32U5BU5D_t3030399641** get_address_of_groups_16() { return &___groups_16; }
	inline void set_groups_16(Int32U5BU5D_t3030399641* value)
	{
		___groups_16 = value;
		Il2CppCodeGenWriteBarrier(&___groups_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
