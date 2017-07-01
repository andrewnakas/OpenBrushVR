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

// ClickedEventArgs
struct  ClickedEventArgs_t2917034410 
{
public:
	// System.UInt32 ClickedEventArgs::controllerIndex
	uint32_t ___controllerIndex_0;
	// System.UInt32 ClickedEventArgs::flags
	uint32_t ___flags_1;
	// System.Single ClickedEventArgs::padX
	float ___padX_2;
	// System.Single ClickedEventArgs::padY
	float ___padY_3;

public:
	inline static int32_t get_offset_of_controllerIndex_0() { return static_cast<int32_t>(offsetof(ClickedEventArgs_t2917034410, ___controllerIndex_0)); }
	inline uint32_t get_controllerIndex_0() const { return ___controllerIndex_0; }
	inline uint32_t* get_address_of_controllerIndex_0() { return &___controllerIndex_0; }
	inline void set_controllerIndex_0(uint32_t value)
	{
		___controllerIndex_0 = value;
	}

	inline static int32_t get_offset_of_flags_1() { return static_cast<int32_t>(offsetof(ClickedEventArgs_t2917034410, ___flags_1)); }
	inline uint32_t get_flags_1() const { return ___flags_1; }
	inline uint32_t* get_address_of_flags_1() { return &___flags_1; }
	inline void set_flags_1(uint32_t value)
	{
		___flags_1 = value;
	}

	inline static int32_t get_offset_of_padX_2() { return static_cast<int32_t>(offsetof(ClickedEventArgs_t2917034410, ___padX_2)); }
	inline float get_padX_2() const { return ___padX_2; }
	inline float* get_address_of_padX_2() { return &___padX_2; }
	inline void set_padX_2(float value)
	{
		___padX_2 = value;
	}

	inline static int32_t get_offset_of_padY_3() { return static_cast<int32_t>(offsetof(ClickedEventArgs_t2917034410, ___padY_3)); }
	inline float get_padY_3() const { return ___padY_3; }
	inline float* get_address_of_padY_3() { return &___padY_3; }
	inline void set_padY_3(float value)
	{
		___padY_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
