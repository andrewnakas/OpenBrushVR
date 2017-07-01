#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Mesh
struct Mesh_t1356156583;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MeshLineRenderer
struct  MeshLineRenderer_t2460589256  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector3 MeshLineRenderer::lastV
	Vector3_t2243707580  ___lastV_2;
	// UnityEngine.Material MeshLineRenderer::lmat
	Material_t193706927 * ___lmat_3;
	// UnityEngine.Mesh MeshLineRenderer::ml
	Mesh_t1356156583 * ___ml_4;
	// UnityEngine.Vector3 MeshLineRenderer::s
	Vector3_t2243707580  ___s_5;
	// UnityEngine.Vector3 MeshLineRenderer::sl
	Vector3_t2243707580  ___sl_6;
	// System.Single MeshLineRenderer::lineSize
	float ___lineSize_7;
	// System.Boolean MeshLineRenderer::firstQuad
	bool ___firstQuad_8;

public:
	inline static int32_t get_offset_of_lastV_2() { return static_cast<int32_t>(offsetof(MeshLineRenderer_t2460589256, ___lastV_2)); }
	inline Vector3_t2243707580  get_lastV_2() const { return ___lastV_2; }
	inline Vector3_t2243707580 * get_address_of_lastV_2() { return &___lastV_2; }
	inline void set_lastV_2(Vector3_t2243707580  value)
	{
		___lastV_2 = value;
	}

	inline static int32_t get_offset_of_lmat_3() { return static_cast<int32_t>(offsetof(MeshLineRenderer_t2460589256, ___lmat_3)); }
	inline Material_t193706927 * get_lmat_3() const { return ___lmat_3; }
	inline Material_t193706927 ** get_address_of_lmat_3() { return &___lmat_3; }
	inline void set_lmat_3(Material_t193706927 * value)
	{
		___lmat_3 = value;
		Il2CppCodeGenWriteBarrier(&___lmat_3, value);
	}

	inline static int32_t get_offset_of_ml_4() { return static_cast<int32_t>(offsetof(MeshLineRenderer_t2460589256, ___ml_4)); }
	inline Mesh_t1356156583 * get_ml_4() const { return ___ml_4; }
	inline Mesh_t1356156583 ** get_address_of_ml_4() { return &___ml_4; }
	inline void set_ml_4(Mesh_t1356156583 * value)
	{
		___ml_4 = value;
		Il2CppCodeGenWriteBarrier(&___ml_4, value);
	}

	inline static int32_t get_offset_of_s_5() { return static_cast<int32_t>(offsetof(MeshLineRenderer_t2460589256, ___s_5)); }
	inline Vector3_t2243707580  get_s_5() const { return ___s_5; }
	inline Vector3_t2243707580 * get_address_of_s_5() { return &___s_5; }
	inline void set_s_5(Vector3_t2243707580  value)
	{
		___s_5 = value;
	}

	inline static int32_t get_offset_of_sl_6() { return static_cast<int32_t>(offsetof(MeshLineRenderer_t2460589256, ___sl_6)); }
	inline Vector3_t2243707580  get_sl_6() const { return ___sl_6; }
	inline Vector3_t2243707580 * get_address_of_sl_6() { return &___sl_6; }
	inline void set_sl_6(Vector3_t2243707580  value)
	{
		___sl_6 = value;
	}

	inline static int32_t get_offset_of_lineSize_7() { return static_cast<int32_t>(offsetof(MeshLineRenderer_t2460589256, ___lineSize_7)); }
	inline float get_lineSize_7() const { return ___lineSize_7; }
	inline float* get_address_of_lineSize_7() { return &___lineSize_7; }
	inline void set_lineSize_7(float value)
	{
		___lineSize_7 = value;
	}

	inline static int32_t get_offset_of_firstQuad_8() { return static_cast<int32_t>(offsetof(MeshLineRenderer_t2460589256, ___firstQuad_8)); }
	inline bool get_firstQuad_8() const { return ___firstQuad_8; }
	inline bool* get_address_of_firstQuad_8() { return &___firstQuad_8; }
	inline void set_firstQuad_8(bool value)
	{
		___firstQuad_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
