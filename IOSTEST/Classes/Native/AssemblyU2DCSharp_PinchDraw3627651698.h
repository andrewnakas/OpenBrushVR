#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;
// PinchDraw/DrawState[]
struct DrawStateU5BU5D_t3169353755;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PinchDraw
struct  PinchDraw_t3627651698  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean PinchDraw::firstpointtime
	bool ___firstpointtime_2;
	// UnityEngine.Material PinchDraw::_material
	Material_t193706927 * ____material_3;
	// UnityEngine.GameObject PinchDraw::strokes
	GameObject_t1756533147 * ___strokes_4;
	// UnityEngine.GameObject PinchDraw::UndoManager
	GameObject_t1756533147 * ___UndoManager_5;
	// UnityEngine.GameObject PinchDraw::sphere
	GameObject_t1756533147 * ___sphere_6;
	// UnityEngine.Color PinchDraw::_drawColor
	Color_t2020392075  ____drawColor_7;
	// UnityEngine.Transform PinchDraw::meshparent
	Transform_t3275118058 * ___meshparent_8;
	// System.Single PinchDraw::_smoothingDelay
	float ____smoothingDelay_9;
	// System.Single PinchDraw::_drawRadius
	float ____drawRadius_10;
	// System.Int32 PinchDraw::_drawResolution
	int32_t ____drawResolution_11;
	// System.Single PinchDraw::_minSegmentLength
	float ____minSegmentLength_12;
	// PinchDraw/DrawState[] PinchDraw::_drawStates
	DrawStateU5BU5D_t3169353755* ____drawStates_13;
	// System.Boolean PinchDraw::tangoIspainting
	bool ___tangoIspainting_14;

public:
	inline static int32_t get_offset_of_firstpointtime_2() { return static_cast<int32_t>(offsetof(PinchDraw_t3627651698, ___firstpointtime_2)); }
	inline bool get_firstpointtime_2() const { return ___firstpointtime_2; }
	inline bool* get_address_of_firstpointtime_2() { return &___firstpointtime_2; }
	inline void set_firstpointtime_2(bool value)
	{
		___firstpointtime_2 = value;
	}

	inline static int32_t get_offset_of__material_3() { return static_cast<int32_t>(offsetof(PinchDraw_t3627651698, ____material_3)); }
	inline Material_t193706927 * get__material_3() const { return ____material_3; }
	inline Material_t193706927 ** get_address_of__material_3() { return &____material_3; }
	inline void set__material_3(Material_t193706927 * value)
	{
		____material_3 = value;
		Il2CppCodeGenWriteBarrier(&____material_3, value);
	}

	inline static int32_t get_offset_of_strokes_4() { return static_cast<int32_t>(offsetof(PinchDraw_t3627651698, ___strokes_4)); }
	inline GameObject_t1756533147 * get_strokes_4() const { return ___strokes_4; }
	inline GameObject_t1756533147 ** get_address_of_strokes_4() { return &___strokes_4; }
	inline void set_strokes_4(GameObject_t1756533147 * value)
	{
		___strokes_4 = value;
		Il2CppCodeGenWriteBarrier(&___strokes_4, value);
	}

	inline static int32_t get_offset_of_UndoManager_5() { return static_cast<int32_t>(offsetof(PinchDraw_t3627651698, ___UndoManager_5)); }
	inline GameObject_t1756533147 * get_UndoManager_5() const { return ___UndoManager_5; }
	inline GameObject_t1756533147 ** get_address_of_UndoManager_5() { return &___UndoManager_5; }
	inline void set_UndoManager_5(GameObject_t1756533147 * value)
	{
		___UndoManager_5 = value;
		Il2CppCodeGenWriteBarrier(&___UndoManager_5, value);
	}

	inline static int32_t get_offset_of_sphere_6() { return static_cast<int32_t>(offsetof(PinchDraw_t3627651698, ___sphere_6)); }
	inline GameObject_t1756533147 * get_sphere_6() const { return ___sphere_6; }
	inline GameObject_t1756533147 ** get_address_of_sphere_6() { return &___sphere_6; }
	inline void set_sphere_6(GameObject_t1756533147 * value)
	{
		___sphere_6 = value;
		Il2CppCodeGenWriteBarrier(&___sphere_6, value);
	}

	inline static int32_t get_offset_of__drawColor_7() { return static_cast<int32_t>(offsetof(PinchDraw_t3627651698, ____drawColor_7)); }
	inline Color_t2020392075  get__drawColor_7() const { return ____drawColor_7; }
	inline Color_t2020392075 * get_address_of__drawColor_7() { return &____drawColor_7; }
	inline void set__drawColor_7(Color_t2020392075  value)
	{
		____drawColor_7 = value;
	}

	inline static int32_t get_offset_of_meshparent_8() { return static_cast<int32_t>(offsetof(PinchDraw_t3627651698, ___meshparent_8)); }
	inline Transform_t3275118058 * get_meshparent_8() const { return ___meshparent_8; }
	inline Transform_t3275118058 ** get_address_of_meshparent_8() { return &___meshparent_8; }
	inline void set_meshparent_8(Transform_t3275118058 * value)
	{
		___meshparent_8 = value;
		Il2CppCodeGenWriteBarrier(&___meshparent_8, value);
	}

	inline static int32_t get_offset_of__smoothingDelay_9() { return static_cast<int32_t>(offsetof(PinchDraw_t3627651698, ____smoothingDelay_9)); }
	inline float get__smoothingDelay_9() const { return ____smoothingDelay_9; }
	inline float* get_address_of__smoothingDelay_9() { return &____smoothingDelay_9; }
	inline void set__smoothingDelay_9(float value)
	{
		____smoothingDelay_9 = value;
	}

	inline static int32_t get_offset_of__drawRadius_10() { return static_cast<int32_t>(offsetof(PinchDraw_t3627651698, ____drawRadius_10)); }
	inline float get__drawRadius_10() const { return ____drawRadius_10; }
	inline float* get_address_of__drawRadius_10() { return &____drawRadius_10; }
	inline void set__drawRadius_10(float value)
	{
		____drawRadius_10 = value;
	}

	inline static int32_t get_offset_of__drawResolution_11() { return static_cast<int32_t>(offsetof(PinchDraw_t3627651698, ____drawResolution_11)); }
	inline int32_t get__drawResolution_11() const { return ____drawResolution_11; }
	inline int32_t* get_address_of__drawResolution_11() { return &____drawResolution_11; }
	inline void set__drawResolution_11(int32_t value)
	{
		____drawResolution_11 = value;
	}

	inline static int32_t get_offset_of__minSegmentLength_12() { return static_cast<int32_t>(offsetof(PinchDraw_t3627651698, ____minSegmentLength_12)); }
	inline float get__minSegmentLength_12() const { return ____minSegmentLength_12; }
	inline float* get_address_of__minSegmentLength_12() { return &____minSegmentLength_12; }
	inline void set__minSegmentLength_12(float value)
	{
		____minSegmentLength_12 = value;
	}

	inline static int32_t get_offset_of__drawStates_13() { return static_cast<int32_t>(offsetof(PinchDraw_t3627651698, ____drawStates_13)); }
	inline DrawStateU5BU5D_t3169353755* get__drawStates_13() const { return ____drawStates_13; }
	inline DrawStateU5BU5D_t3169353755** get_address_of__drawStates_13() { return &____drawStates_13; }
	inline void set__drawStates_13(DrawStateU5BU5D_t3169353755* value)
	{
		____drawStates_13 = value;
		Il2CppCodeGenWriteBarrier(&____drawStates_13, value);
	}

	inline static int32_t get_offset_of_tangoIspainting_14() { return static_cast<int32_t>(offsetof(PinchDraw_t3627651698, ___tangoIspainting_14)); }
	inline bool get_tangoIspainting_14() const { return ___tangoIspainting_14; }
	inline bool* get_address_of_tangoIspainting_14() { return &___tangoIspainting_14; }
	inline void set_tangoIspainting_14(bool value)
	{
		___tangoIspainting_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
