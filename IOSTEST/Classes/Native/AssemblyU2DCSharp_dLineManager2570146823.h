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

// MeshLineRenderer
struct MeshLineRenderer_t2460589256;
// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// dLineManager
struct  dLineManager_t2570146823  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean dLineManager::tangoIspainting
	bool ___tangoIspainting_2;
	// MeshLineRenderer dLineManager::currLine
	MeshLineRenderer_t2460589256 * ___currLine_3;
	// MeshLineRenderer dLineManager::currLine1
	MeshLineRenderer_t2460589256 * ___currLine1_4;
	// MeshLineRenderer dLineManager::currLine2
	MeshLineRenderer_t2460589256 * ___currLine2_5;
	// MeshLineRenderer dLineManager::currLine3
	MeshLineRenderer_t2460589256 * ___currLine3_6;
	// System.Int32 dLineManager::numClicks
	int32_t ___numClicks_7;
	// UnityEngine.Material dLineManager::matter
	Material_t193706927 * ___matter_8;
	// UnityEngine.GameObject dLineManager::UndoManager
	GameObject_t1756533147 * ___UndoManager_9;
	// UnityEngine.Transform dLineManager::meshparent
	Transform_t3275118058 * ___meshparent_10;
	// System.Boolean dLineManager::firstPointtime
	bool ___firstPointtime_11;
	// System.Boolean dLineManager::secondPointtime
	bool ___secondPointtime_12;
	// UnityEngine.Vector3 dLineManager::lastpos
	Vector3_t2243707580  ___lastpos_13;
	// UnityEngine.GameObject dLineManager::sphere
	GameObject_t1756533147 * ___sphere_14;
	// UnityEngine.Transform dLineManager::sphereHigh
	Transform_t3275118058 * ___sphereHigh_15;
	// UnityEngine.Transform dLineManager::sphereLow
	Transform_t3275118058 * ___sphereLow_16;
	// UnityEngine.Transform dLineManager::sphererl
	Transform_t3275118058 * ___sphererl_17;
	// UnityEngine.Transform dLineManager::spherell
	Transform_t3275118058 * ___spherell_18;
	// UnityEngine.Transform dLineManager::sphererh
	Transform_t3275118058 * ___sphererh_19;
	// UnityEngine.Transform dLineManager::spherelh
	Transform_t3275118058 * ___spherelh_20;

public:
	inline static int32_t get_offset_of_tangoIspainting_2() { return static_cast<int32_t>(offsetof(dLineManager_t2570146823, ___tangoIspainting_2)); }
	inline bool get_tangoIspainting_2() const { return ___tangoIspainting_2; }
	inline bool* get_address_of_tangoIspainting_2() { return &___tangoIspainting_2; }
	inline void set_tangoIspainting_2(bool value)
	{
		___tangoIspainting_2 = value;
	}

	inline static int32_t get_offset_of_currLine_3() { return static_cast<int32_t>(offsetof(dLineManager_t2570146823, ___currLine_3)); }
	inline MeshLineRenderer_t2460589256 * get_currLine_3() const { return ___currLine_3; }
	inline MeshLineRenderer_t2460589256 ** get_address_of_currLine_3() { return &___currLine_3; }
	inline void set_currLine_3(MeshLineRenderer_t2460589256 * value)
	{
		___currLine_3 = value;
		Il2CppCodeGenWriteBarrier(&___currLine_3, value);
	}

	inline static int32_t get_offset_of_currLine1_4() { return static_cast<int32_t>(offsetof(dLineManager_t2570146823, ___currLine1_4)); }
	inline MeshLineRenderer_t2460589256 * get_currLine1_4() const { return ___currLine1_4; }
	inline MeshLineRenderer_t2460589256 ** get_address_of_currLine1_4() { return &___currLine1_4; }
	inline void set_currLine1_4(MeshLineRenderer_t2460589256 * value)
	{
		___currLine1_4 = value;
		Il2CppCodeGenWriteBarrier(&___currLine1_4, value);
	}

	inline static int32_t get_offset_of_currLine2_5() { return static_cast<int32_t>(offsetof(dLineManager_t2570146823, ___currLine2_5)); }
	inline MeshLineRenderer_t2460589256 * get_currLine2_5() const { return ___currLine2_5; }
	inline MeshLineRenderer_t2460589256 ** get_address_of_currLine2_5() { return &___currLine2_5; }
	inline void set_currLine2_5(MeshLineRenderer_t2460589256 * value)
	{
		___currLine2_5 = value;
		Il2CppCodeGenWriteBarrier(&___currLine2_5, value);
	}

	inline static int32_t get_offset_of_currLine3_6() { return static_cast<int32_t>(offsetof(dLineManager_t2570146823, ___currLine3_6)); }
	inline MeshLineRenderer_t2460589256 * get_currLine3_6() const { return ___currLine3_6; }
	inline MeshLineRenderer_t2460589256 ** get_address_of_currLine3_6() { return &___currLine3_6; }
	inline void set_currLine3_6(MeshLineRenderer_t2460589256 * value)
	{
		___currLine3_6 = value;
		Il2CppCodeGenWriteBarrier(&___currLine3_6, value);
	}

	inline static int32_t get_offset_of_numClicks_7() { return static_cast<int32_t>(offsetof(dLineManager_t2570146823, ___numClicks_7)); }
	inline int32_t get_numClicks_7() const { return ___numClicks_7; }
	inline int32_t* get_address_of_numClicks_7() { return &___numClicks_7; }
	inline void set_numClicks_7(int32_t value)
	{
		___numClicks_7 = value;
	}

	inline static int32_t get_offset_of_matter_8() { return static_cast<int32_t>(offsetof(dLineManager_t2570146823, ___matter_8)); }
	inline Material_t193706927 * get_matter_8() const { return ___matter_8; }
	inline Material_t193706927 ** get_address_of_matter_8() { return &___matter_8; }
	inline void set_matter_8(Material_t193706927 * value)
	{
		___matter_8 = value;
		Il2CppCodeGenWriteBarrier(&___matter_8, value);
	}

	inline static int32_t get_offset_of_UndoManager_9() { return static_cast<int32_t>(offsetof(dLineManager_t2570146823, ___UndoManager_9)); }
	inline GameObject_t1756533147 * get_UndoManager_9() const { return ___UndoManager_9; }
	inline GameObject_t1756533147 ** get_address_of_UndoManager_9() { return &___UndoManager_9; }
	inline void set_UndoManager_9(GameObject_t1756533147 * value)
	{
		___UndoManager_9 = value;
		Il2CppCodeGenWriteBarrier(&___UndoManager_9, value);
	}

	inline static int32_t get_offset_of_meshparent_10() { return static_cast<int32_t>(offsetof(dLineManager_t2570146823, ___meshparent_10)); }
	inline Transform_t3275118058 * get_meshparent_10() const { return ___meshparent_10; }
	inline Transform_t3275118058 ** get_address_of_meshparent_10() { return &___meshparent_10; }
	inline void set_meshparent_10(Transform_t3275118058 * value)
	{
		___meshparent_10 = value;
		Il2CppCodeGenWriteBarrier(&___meshparent_10, value);
	}

	inline static int32_t get_offset_of_firstPointtime_11() { return static_cast<int32_t>(offsetof(dLineManager_t2570146823, ___firstPointtime_11)); }
	inline bool get_firstPointtime_11() const { return ___firstPointtime_11; }
	inline bool* get_address_of_firstPointtime_11() { return &___firstPointtime_11; }
	inline void set_firstPointtime_11(bool value)
	{
		___firstPointtime_11 = value;
	}

	inline static int32_t get_offset_of_secondPointtime_12() { return static_cast<int32_t>(offsetof(dLineManager_t2570146823, ___secondPointtime_12)); }
	inline bool get_secondPointtime_12() const { return ___secondPointtime_12; }
	inline bool* get_address_of_secondPointtime_12() { return &___secondPointtime_12; }
	inline void set_secondPointtime_12(bool value)
	{
		___secondPointtime_12 = value;
	}

	inline static int32_t get_offset_of_lastpos_13() { return static_cast<int32_t>(offsetof(dLineManager_t2570146823, ___lastpos_13)); }
	inline Vector3_t2243707580  get_lastpos_13() const { return ___lastpos_13; }
	inline Vector3_t2243707580 * get_address_of_lastpos_13() { return &___lastpos_13; }
	inline void set_lastpos_13(Vector3_t2243707580  value)
	{
		___lastpos_13 = value;
	}

	inline static int32_t get_offset_of_sphere_14() { return static_cast<int32_t>(offsetof(dLineManager_t2570146823, ___sphere_14)); }
	inline GameObject_t1756533147 * get_sphere_14() const { return ___sphere_14; }
	inline GameObject_t1756533147 ** get_address_of_sphere_14() { return &___sphere_14; }
	inline void set_sphere_14(GameObject_t1756533147 * value)
	{
		___sphere_14 = value;
		Il2CppCodeGenWriteBarrier(&___sphere_14, value);
	}

	inline static int32_t get_offset_of_sphereHigh_15() { return static_cast<int32_t>(offsetof(dLineManager_t2570146823, ___sphereHigh_15)); }
	inline Transform_t3275118058 * get_sphereHigh_15() const { return ___sphereHigh_15; }
	inline Transform_t3275118058 ** get_address_of_sphereHigh_15() { return &___sphereHigh_15; }
	inline void set_sphereHigh_15(Transform_t3275118058 * value)
	{
		___sphereHigh_15 = value;
		Il2CppCodeGenWriteBarrier(&___sphereHigh_15, value);
	}

	inline static int32_t get_offset_of_sphereLow_16() { return static_cast<int32_t>(offsetof(dLineManager_t2570146823, ___sphereLow_16)); }
	inline Transform_t3275118058 * get_sphereLow_16() const { return ___sphereLow_16; }
	inline Transform_t3275118058 ** get_address_of_sphereLow_16() { return &___sphereLow_16; }
	inline void set_sphereLow_16(Transform_t3275118058 * value)
	{
		___sphereLow_16 = value;
		Il2CppCodeGenWriteBarrier(&___sphereLow_16, value);
	}

	inline static int32_t get_offset_of_sphererl_17() { return static_cast<int32_t>(offsetof(dLineManager_t2570146823, ___sphererl_17)); }
	inline Transform_t3275118058 * get_sphererl_17() const { return ___sphererl_17; }
	inline Transform_t3275118058 ** get_address_of_sphererl_17() { return &___sphererl_17; }
	inline void set_sphererl_17(Transform_t3275118058 * value)
	{
		___sphererl_17 = value;
		Il2CppCodeGenWriteBarrier(&___sphererl_17, value);
	}

	inline static int32_t get_offset_of_spherell_18() { return static_cast<int32_t>(offsetof(dLineManager_t2570146823, ___spherell_18)); }
	inline Transform_t3275118058 * get_spherell_18() const { return ___spherell_18; }
	inline Transform_t3275118058 ** get_address_of_spherell_18() { return &___spherell_18; }
	inline void set_spherell_18(Transform_t3275118058 * value)
	{
		___spherell_18 = value;
		Il2CppCodeGenWriteBarrier(&___spherell_18, value);
	}

	inline static int32_t get_offset_of_sphererh_19() { return static_cast<int32_t>(offsetof(dLineManager_t2570146823, ___sphererh_19)); }
	inline Transform_t3275118058 * get_sphererh_19() const { return ___sphererh_19; }
	inline Transform_t3275118058 ** get_address_of_sphererh_19() { return &___sphererh_19; }
	inline void set_sphererh_19(Transform_t3275118058 * value)
	{
		___sphererh_19 = value;
		Il2CppCodeGenWriteBarrier(&___sphererh_19, value);
	}

	inline static int32_t get_offset_of_spherelh_20() { return static_cast<int32_t>(offsetof(dLineManager_t2570146823, ___spherelh_20)); }
	inline Transform_t3275118058 * get_spherelh_20() const { return ___spherelh_20; }
	inline Transform_t3275118058 ** get_address_of_spherelh_20() { return &___spherelh_20; }
	inline void set_spherelh_20(Transform_t3275118058 * value)
	{
		___spherelh_20 = value;
		Il2CppCodeGenWriteBarrier(&___spherelh_20, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
