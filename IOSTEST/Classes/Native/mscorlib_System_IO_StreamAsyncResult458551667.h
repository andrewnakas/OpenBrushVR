#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Object
struct Il2CppObject;
// System.Exception
struct Exception_t1927440687;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t926074657;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.StreamAsyncResult
struct  StreamAsyncResult_t458551667  : public Il2CppObject
{
public:
	// System.Object System.IO.StreamAsyncResult::state
	Il2CppObject * ___state_0;
	// System.Boolean System.IO.StreamAsyncResult::completed
	bool ___completed_1;
	// System.Boolean System.IO.StreamAsyncResult::done
	bool ___done_2;
	// System.Exception System.IO.StreamAsyncResult::exc
	Exception_t1927440687 * ___exc_3;
	// System.Int32 System.IO.StreamAsyncResult::nbytes
	int32_t ___nbytes_4;
	// System.Threading.ManualResetEvent System.IO.StreamAsyncResult::wh
	ManualResetEvent_t926074657 * ___wh_5;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(StreamAsyncResult_t458551667, ___state_0)); }
	inline Il2CppObject * get_state_0() const { return ___state_0; }
	inline Il2CppObject ** get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(Il2CppObject * value)
	{
		___state_0 = value;
		Il2CppCodeGenWriteBarrier(&___state_0, value);
	}

	inline static int32_t get_offset_of_completed_1() { return static_cast<int32_t>(offsetof(StreamAsyncResult_t458551667, ___completed_1)); }
	inline bool get_completed_1() const { return ___completed_1; }
	inline bool* get_address_of_completed_1() { return &___completed_1; }
	inline void set_completed_1(bool value)
	{
		___completed_1 = value;
	}

	inline static int32_t get_offset_of_done_2() { return static_cast<int32_t>(offsetof(StreamAsyncResult_t458551667, ___done_2)); }
	inline bool get_done_2() const { return ___done_2; }
	inline bool* get_address_of_done_2() { return &___done_2; }
	inline void set_done_2(bool value)
	{
		___done_2 = value;
	}

	inline static int32_t get_offset_of_exc_3() { return static_cast<int32_t>(offsetof(StreamAsyncResult_t458551667, ___exc_3)); }
	inline Exception_t1927440687 * get_exc_3() const { return ___exc_3; }
	inline Exception_t1927440687 ** get_address_of_exc_3() { return &___exc_3; }
	inline void set_exc_3(Exception_t1927440687 * value)
	{
		___exc_3 = value;
		Il2CppCodeGenWriteBarrier(&___exc_3, value);
	}

	inline static int32_t get_offset_of_nbytes_4() { return static_cast<int32_t>(offsetof(StreamAsyncResult_t458551667, ___nbytes_4)); }
	inline int32_t get_nbytes_4() const { return ___nbytes_4; }
	inline int32_t* get_address_of_nbytes_4() { return &___nbytes_4; }
	inline void set_nbytes_4(int32_t value)
	{
		___nbytes_4 = value;
	}

	inline static int32_t get_offset_of_wh_5() { return static_cast<int32_t>(offsetof(StreamAsyncResult_t458551667, ___wh_5)); }
	inline ManualResetEvent_t926074657 * get_wh_5() const { return ___wh_5; }
	inline ManualResetEvent_t926074657 ** get_address_of_wh_5() { return &___wh_5; }
	inline void set_wh_5(ManualResetEvent_t926074657 * value)
	{
		___wh_5 = value;
		Il2CppCodeGenWriteBarrier(&___wh_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
