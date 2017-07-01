#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.ComponentModel.ListEntry
struct ListEntry_t935815304;
// System.Delegate
struct Delegate_t3022476291;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EventHandlerList
struct  EventHandlerList_t1298116880  : public Il2CppObject
{
public:
	// System.ComponentModel.ListEntry System.ComponentModel.EventHandlerList::entries
	ListEntry_t935815304 * ___entries_0;
	// System.Delegate System.ComponentModel.EventHandlerList::null_entry
	Delegate_t3022476291 * ___null_entry_1;

public:
	inline static int32_t get_offset_of_entries_0() { return static_cast<int32_t>(offsetof(EventHandlerList_t1298116880, ___entries_0)); }
	inline ListEntry_t935815304 * get_entries_0() const { return ___entries_0; }
	inline ListEntry_t935815304 ** get_address_of_entries_0() { return &___entries_0; }
	inline void set_entries_0(ListEntry_t935815304 * value)
	{
		___entries_0 = value;
		Il2CppCodeGenWriteBarrier(&___entries_0, value);
	}

	inline static int32_t get_offset_of_null_entry_1() { return static_cast<int32_t>(offsetof(EventHandlerList_t1298116880, ___null_entry_1)); }
	inline Delegate_t3022476291 * get_null_entry_1() const { return ___null_entry_1; }
	inline Delegate_t3022476291 ** get_address_of_null_entry_1() { return &___null_entry_1; }
	inline void set_null_entry_1(Delegate_t3022476291 * value)
	{
		___null_entry_1 = value;
		Il2CppCodeGenWriteBarrier(&___null_entry_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
