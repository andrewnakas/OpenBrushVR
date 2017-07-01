#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Collections_ArrayList4252133567.h"

// System.Collections.ArrayList
struct ArrayList_t4252133567;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList/ArrayListWrapper
struct  ArrayListWrapper_t3918858854  : public ArrayList_t4252133567
{
public:
	// System.Collections.ArrayList System.Collections.ArrayList/ArrayListWrapper::m_InnerArrayList
	ArrayList_t4252133567 * ___m_InnerArrayList_5;

public:
	inline static int32_t get_offset_of_m_InnerArrayList_5() { return static_cast<int32_t>(offsetof(ArrayListWrapper_t3918858854, ___m_InnerArrayList_5)); }
	inline ArrayList_t4252133567 * get_m_InnerArrayList_5() const { return ___m_InnerArrayList_5; }
	inline ArrayList_t4252133567 ** get_address_of_m_InnerArrayList_5() { return &___m_InnerArrayList_5; }
	inline void set_m_InnerArrayList_5(ArrayList_t4252133567 * value)
	{
		___m_InnerArrayList_5 = value;
		Il2CppCodeGenWriteBarrier(&___m_InnerArrayList_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
