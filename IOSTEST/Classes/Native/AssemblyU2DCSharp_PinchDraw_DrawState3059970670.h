#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1612828712;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t1612828711;
// System.Collections.Generic.List`1<UnityEngine.Color>
struct List_1_t1389513207;
// PinchDraw
struct PinchDraw_t3627651698;
// UnityEngine.Mesh
struct Mesh_t1356156583;
// SmoothedVector3
struct SmoothedVector3_t1397904915;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PinchDraw/DrawState
struct  DrawState_t3059970670  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Vector3> PinchDraw/DrawState::_vertices
	List_1_t1612828712 * ____vertices_0;
	// System.Collections.Generic.List`1<System.Int32> PinchDraw/DrawState::_tris
	List_1_t1440998580 * ____tris_1;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> PinchDraw/DrawState::_uvs
	List_1_t1612828711 * ____uvs_2;
	// System.Collections.Generic.List`1<UnityEngine.Color> PinchDraw/DrawState::_colors
	List_1_t1389513207 * ____colors_3;
	// PinchDraw PinchDraw/DrawState::_parent
	PinchDraw_t3627651698 * ____parent_4;
	// System.Int32 PinchDraw/DrawState::_rings
	int32_t ____rings_5;
	// UnityEngine.Vector3 PinchDraw/DrawState::_prevRing0
	Vector3_t2243707580  ____prevRing0_6;
	// UnityEngine.Vector3 PinchDraw/DrawState::_prevRing1
	Vector3_t2243707580  ____prevRing1_7;
	// UnityEngine.Vector3 PinchDraw/DrawState::_prevNormal0
	Vector3_t2243707580  ____prevNormal0_8;
	// UnityEngine.Mesh PinchDraw/DrawState::_mesh
	Mesh_t1356156583 * ____mesh_9;
	// SmoothedVector3 PinchDraw/DrawState::_smoothedPosition
	SmoothedVector3_t1397904915 * ____smoothedPosition_10;

public:
	inline static int32_t get_offset_of__vertices_0() { return static_cast<int32_t>(offsetof(DrawState_t3059970670, ____vertices_0)); }
	inline List_1_t1612828712 * get__vertices_0() const { return ____vertices_0; }
	inline List_1_t1612828712 ** get_address_of__vertices_0() { return &____vertices_0; }
	inline void set__vertices_0(List_1_t1612828712 * value)
	{
		____vertices_0 = value;
		Il2CppCodeGenWriteBarrier(&____vertices_0, value);
	}

	inline static int32_t get_offset_of__tris_1() { return static_cast<int32_t>(offsetof(DrawState_t3059970670, ____tris_1)); }
	inline List_1_t1440998580 * get__tris_1() const { return ____tris_1; }
	inline List_1_t1440998580 ** get_address_of__tris_1() { return &____tris_1; }
	inline void set__tris_1(List_1_t1440998580 * value)
	{
		____tris_1 = value;
		Il2CppCodeGenWriteBarrier(&____tris_1, value);
	}

	inline static int32_t get_offset_of__uvs_2() { return static_cast<int32_t>(offsetof(DrawState_t3059970670, ____uvs_2)); }
	inline List_1_t1612828711 * get__uvs_2() const { return ____uvs_2; }
	inline List_1_t1612828711 ** get_address_of__uvs_2() { return &____uvs_2; }
	inline void set__uvs_2(List_1_t1612828711 * value)
	{
		____uvs_2 = value;
		Il2CppCodeGenWriteBarrier(&____uvs_2, value);
	}

	inline static int32_t get_offset_of__colors_3() { return static_cast<int32_t>(offsetof(DrawState_t3059970670, ____colors_3)); }
	inline List_1_t1389513207 * get__colors_3() const { return ____colors_3; }
	inline List_1_t1389513207 ** get_address_of__colors_3() { return &____colors_3; }
	inline void set__colors_3(List_1_t1389513207 * value)
	{
		____colors_3 = value;
		Il2CppCodeGenWriteBarrier(&____colors_3, value);
	}

	inline static int32_t get_offset_of__parent_4() { return static_cast<int32_t>(offsetof(DrawState_t3059970670, ____parent_4)); }
	inline PinchDraw_t3627651698 * get__parent_4() const { return ____parent_4; }
	inline PinchDraw_t3627651698 ** get_address_of__parent_4() { return &____parent_4; }
	inline void set__parent_4(PinchDraw_t3627651698 * value)
	{
		____parent_4 = value;
		Il2CppCodeGenWriteBarrier(&____parent_4, value);
	}

	inline static int32_t get_offset_of__rings_5() { return static_cast<int32_t>(offsetof(DrawState_t3059970670, ____rings_5)); }
	inline int32_t get__rings_5() const { return ____rings_5; }
	inline int32_t* get_address_of__rings_5() { return &____rings_5; }
	inline void set__rings_5(int32_t value)
	{
		____rings_5 = value;
	}

	inline static int32_t get_offset_of__prevRing0_6() { return static_cast<int32_t>(offsetof(DrawState_t3059970670, ____prevRing0_6)); }
	inline Vector3_t2243707580  get__prevRing0_6() const { return ____prevRing0_6; }
	inline Vector3_t2243707580 * get_address_of__prevRing0_6() { return &____prevRing0_6; }
	inline void set__prevRing0_6(Vector3_t2243707580  value)
	{
		____prevRing0_6 = value;
	}

	inline static int32_t get_offset_of__prevRing1_7() { return static_cast<int32_t>(offsetof(DrawState_t3059970670, ____prevRing1_7)); }
	inline Vector3_t2243707580  get__prevRing1_7() const { return ____prevRing1_7; }
	inline Vector3_t2243707580 * get_address_of__prevRing1_7() { return &____prevRing1_7; }
	inline void set__prevRing1_7(Vector3_t2243707580  value)
	{
		____prevRing1_7 = value;
	}

	inline static int32_t get_offset_of__prevNormal0_8() { return static_cast<int32_t>(offsetof(DrawState_t3059970670, ____prevNormal0_8)); }
	inline Vector3_t2243707580  get__prevNormal0_8() const { return ____prevNormal0_8; }
	inline Vector3_t2243707580 * get_address_of__prevNormal0_8() { return &____prevNormal0_8; }
	inline void set__prevNormal0_8(Vector3_t2243707580  value)
	{
		____prevNormal0_8 = value;
	}

	inline static int32_t get_offset_of__mesh_9() { return static_cast<int32_t>(offsetof(DrawState_t3059970670, ____mesh_9)); }
	inline Mesh_t1356156583 * get__mesh_9() const { return ____mesh_9; }
	inline Mesh_t1356156583 ** get_address_of__mesh_9() { return &____mesh_9; }
	inline void set__mesh_9(Mesh_t1356156583 * value)
	{
		____mesh_9 = value;
		Il2CppCodeGenWriteBarrier(&____mesh_9, value);
	}

	inline static int32_t get_offset_of__smoothedPosition_10() { return static_cast<int32_t>(offsetof(DrawState_t3059970670, ____smoothedPosition_10)); }
	inline SmoothedVector3_t1397904915 * get__smoothedPosition_10() const { return ____smoothedPosition_10; }
	inline SmoothedVector3_t1397904915 ** get_address_of__smoothedPosition_10() { return &____smoothedPosition_10; }
	inline void set__smoothedPosition_10(SmoothedVector3_t1397904915 * value)
	{
		____smoothedPosition_10 = value;
		Il2CppCodeGenWriteBarrier(&____smoothedPosition_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
