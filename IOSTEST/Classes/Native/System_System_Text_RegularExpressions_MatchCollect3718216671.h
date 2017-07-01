#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Text.RegularExpressions.Match
struct Match_t3164245899;
// System.Collections.ArrayList
struct ArrayList_t4252133567;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.MatchCollection
struct  MatchCollection_t3718216671  : public Il2CppObject
{
public:
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.MatchCollection::current
	Match_t3164245899 * ___current_0;
	// System.Collections.ArrayList System.Text.RegularExpressions.MatchCollection::list
	ArrayList_t4252133567 * ___list_1;

public:
	inline static int32_t get_offset_of_current_0() { return static_cast<int32_t>(offsetof(MatchCollection_t3718216671, ___current_0)); }
	inline Match_t3164245899 * get_current_0() const { return ___current_0; }
	inline Match_t3164245899 ** get_address_of_current_0() { return &___current_0; }
	inline void set_current_0(Match_t3164245899 * value)
	{
		___current_0 = value;
		Il2CppCodeGenWriteBarrier(&___current_0, value);
	}

	inline static int32_t get_offset_of_list_1() { return static_cast<int32_t>(offsetof(MatchCollection_t3718216671, ___list_1)); }
	inline ArrayList_t4252133567 * get_list_1() const { return ___list_1; }
	inline ArrayList_t4252133567 ** get_address_of_list_1() { return &___list_1; }
	inline void set_list_1(ArrayList_t4252133567 * value)
	{
		___list_1 = value;
		Il2CppCodeGenWriteBarrier(&___list_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
