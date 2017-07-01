#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Valve.VR.VREvent_Process_t
struct  VREvent_Process_t_t1803567141 
{
public:
	// System.UInt32 Valve.VR.VREvent_Process_t::pid
	uint32_t ___pid_0;
	// System.UInt32 Valve.VR.VREvent_Process_t::oldPid
	uint32_t ___oldPid_1;
	// System.Boolean Valve.VR.VREvent_Process_t::bForced
	bool ___bForced_2;

public:
	inline static int32_t get_offset_of_pid_0() { return static_cast<int32_t>(offsetof(VREvent_Process_t_t1803567141, ___pid_0)); }
	inline uint32_t get_pid_0() const { return ___pid_0; }
	inline uint32_t* get_address_of_pid_0() { return &___pid_0; }
	inline void set_pid_0(uint32_t value)
	{
		___pid_0 = value;
	}

	inline static int32_t get_offset_of_oldPid_1() { return static_cast<int32_t>(offsetof(VREvent_Process_t_t1803567141, ___oldPid_1)); }
	inline uint32_t get_oldPid_1() const { return ___oldPid_1; }
	inline uint32_t* get_address_of_oldPid_1() { return &___oldPid_1; }
	inline void set_oldPid_1(uint32_t value)
	{
		___oldPid_1 = value;
	}

	inline static int32_t get_offset_of_bForced_2() { return static_cast<int32_t>(offsetof(VREvent_Process_t_t1803567141, ___bForced_2)); }
	inline bool get_bForced_2() const { return ___bForced_2; }
	inline bool* get_address_of_bForced_2() { return &___bForced_2; }
	inline void set_bForced_2(bool value)
	{
		___bForced_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
