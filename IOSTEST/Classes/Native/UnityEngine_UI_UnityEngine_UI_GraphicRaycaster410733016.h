#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UI_UnityEngine_EventSystems_BaseRaycas2336171397.h"
#include "UnityEngine_UI_UnityEngine_UI_GraphicRaycaster_Blo2548930813.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"

// UnityEngine.Canvas
struct Canvas_t209405766;
// System.Collections.Generic.List`1<UnityEngine.UI.Graphic>
struct List_1_t1795346708;
// System.Comparison`1<UnityEngine.UI.Graphic>
struct Comparison_1_t3687964427;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.GraphicRaycaster
struct  GraphicRaycaster_t410733016  : public BaseRaycaster_t2336171397
{
public:
	// System.Boolean UnityEngine.UI.GraphicRaycaster::m_IgnoreReversedGraphics
	bool ___m_IgnoreReversedGraphics_3;
	// UnityEngine.UI.GraphicRaycaster/BlockingObjects UnityEngine.UI.GraphicRaycaster::m_BlockingObjects
	int32_t ___m_BlockingObjects_4;
	// UnityEngine.LayerMask UnityEngine.UI.GraphicRaycaster::m_BlockingMask
	LayerMask_t3188175821  ___m_BlockingMask_5;
	// UnityEngine.Canvas UnityEngine.UI.GraphicRaycaster::m_Canvas
	Canvas_t209405766 * ___m_Canvas_6;
	// System.Collections.Generic.List`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRaycaster::m_RaycastResults
	List_1_t1795346708 * ___m_RaycastResults_7;

public:
	inline static int32_t get_offset_of_m_IgnoreReversedGraphics_3() { return static_cast<int32_t>(offsetof(GraphicRaycaster_t410733016, ___m_IgnoreReversedGraphics_3)); }
	inline bool get_m_IgnoreReversedGraphics_3() const { return ___m_IgnoreReversedGraphics_3; }
	inline bool* get_address_of_m_IgnoreReversedGraphics_3() { return &___m_IgnoreReversedGraphics_3; }
	inline void set_m_IgnoreReversedGraphics_3(bool value)
	{
		___m_IgnoreReversedGraphics_3 = value;
	}

	inline static int32_t get_offset_of_m_BlockingObjects_4() { return static_cast<int32_t>(offsetof(GraphicRaycaster_t410733016, ___m_BlockingObjects_4)); }
	inline int32_t get_m_BlockingObjects_4() const { return ___m_BlockingObjects_4; }
	inline int32_t* get_address_of_m_BlockingObjects_4() { return &___m_BlockingObjects_4; }
	inline void set_m_BlockingObjects_4(int32_t value)
	{
		___m_BlockingObjects_4 = value;
	}

	inline static int32_t get_offset_of_m_BlockingMask_5() { return static_cast<int32_t>(offsetof(GraphicRaycaster_t410733016, ___m_BlockingMask_5)); }
	inline LayerMask_t3188175821  get_m_BlockingMask_5() const { return ___m_BlockingMask_5; }
	inline LayerMask_t3188175821 * get_address_of_m_BlockingMask_5() { return &___m_BlockingMask_5; }
	inline void set_m_BlockingMask_5(LayerMask_t3188175821  value)
	{
		___m_BlockingMask_5 = value;
	}

	inline static int32_t get_offset_of_m_Canvas_6() { return static_cast<int32_t>(offsetof(GraphicRaycaster_t410733016, ___m_Canvas_6)); }
	inline Canvas_t209405766 * get_m_Canvas_6() const { return ___m_Canvas_6; }
	inline Canvas_t209405766 ** get_address_of_m_Canvas_6() { return &___m_Canvas_6; }
	inline void set_m_Canvas_6(Canvas_t209405766 * value)
	{
		___m_Canvas_6 = value;
		Il2CppCodeGenWriteBarrier(&___m_Canvas_6, value);
	}

	inline static int32_t get_offset_of_m_RaycastResults_7() { return static_cast<int32_t>(offsetof(GraphicRaycaster_t410733016, ___m_RaycastResults_7)); }
	inline List_1_t1795346708 * get_m_RaycastResults_7() const { return ___m_RaycastResults_7; }
	inline List_1_t1795346708 ** get_address_of_m_RaycastResults_7() { return &___m_RaycastResults_7; }
	inline void set_m_RaycastResults_7(List_1_t1795346708 * value)
	{
		___m_RaycastResults_7 = value;
		Il2CppCodeGenWriteBarrier(&___m_RaycastResults_7, value);
	}
};

struct GraphicRaycaster_t410733016_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRaycaster::s_SortedGraphics
	List_1_t1795346708 * ___s_SortedGraphics_8;
	// System.Comparison`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRaycaster::<>f__am$cache0
	Comparison_1_t3687964427 * ___U3CU3Ef__amU24cache0_9;

public:
	inline static int32_t get_offset_of_s_SortedGraphics_8() { return static_cast<int32_t>(offsetof(GraphicRaycaster_t410733016_StaticFields, ___s_SortedGraphics_8)); }
	inline List_1_t1795346708 * get_s_SortedGraphics_8() const { return ___s_SortedGraphics_8; }
	inline List_1_t1795346708 ** get_address_of_s_SortedGraphics_8() { return &___s_SortedGraphics_8; }
	inline void set_s_SortedGraphics_8(List_1_t1795346708 * value)
	{
		___s_SortedGraphics_8 = value;
		Il2CppCodeGenWriteBarrier(&___s_SortedGraphics_8, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_9() { return static_cast<int32_t>(offsetof(GraphicRaycaster_t410733016_StaticFields, ___U3CU3Ef__amU24cache0_9)); }
	inline Comparison_1_t3687964427 * get_U3CU3Ef__amU24cache0_9() const { return ___U3CU3Ef__amU24cache0_9; }
	inline Comparison_1_t3687964427 ** get_address_of_U3CU3Ef__amU24cache0_9() { return &___U3CU3Ef__amU24cache0_9; }
	inline void set_U3CU3Ef__amU24cache0_9(Comparison_1_t3687964427 * value)
	{
		___U3CU3Ef__amU24cache0_9 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache0_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
