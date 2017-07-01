#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "mscorlib_System_IntPtr2504060609.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Valve.VR.HiddenAreaMesh_t
struct  HiddenAreaMesh_t_t3319190843 
{
public:
	// System.IntPtr Valve.VR.HiddenAreaMesh_t::pVertexData
	IntPtr_t ___pVertexData_0;
	// System.UInt32 Valve.VR.HiddenAreaMesh_t::unTriangleCount
	uint32_t ___unTriangleCount_1;

public:
	inline static int32_t get_offset_of_pVertexData_0() { return static_cast<int32_t>(offsetof(HiddenAreaMesh_t_t3319190843, ___pVertexData_0)); }
	inline IntPtr_t get_pVertexData_0() const { return ___pVertexData_0; }
	inline IntPtr_t* get_address_of_pVertexData_0() { return &___pVertexData_0; }
	inline void set_pVertexData_0(IntPtr_t value)
	{
		___pVertexData_0 = value;
	}

	inline static int32_t get_offset_of_unTriangleCount_1() { return static_cast<int32_t>(offsetof(HiddenAreaMesh_t_t3319190843, ___unTriangleCount_1)); }
	inline uint32_t get_unTriangleCount_1() const { return ___unTriangleCount_1; }
	inline uint32_t* get_address_of_unTriangleCount_1() { return &___unTriangleCount_1; }
	inline void set_unTriangleCount_1(uint32_t value)
	{
		___unTriangleCount_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
