#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Valve.VR.CVRCompositor
struct CVRCompositor_t197946050;
// SteamVR_Overlay
struct SteamVR_Overlay_t1916653097;
// SteamVR_Render
struct SteamVR_Render_t595857297;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SteamVR_Render/<RenderLoop>c__Iterator0
struct  U3CRenderLoopU3Ec__Iterator0_t3103906043  : public Il2CppObject
{
public:
	// Valve.VR.CVRCompositor SteamVR_Render/<RenderLoop>c__Iterator0::<compositor>__1
	CVRCompositor_t197946050 * ___U3CcompositorU3E__1_0;
	// SteamVR_Overlay SteamVR_Render/<RenderLoop>c__Iterator0::<overlay>__1
	SteamVR_Overlay_t1916653097 * ___U3CoverlayU3E__1_1;
	// SteamVR_Render SteamVR_Render/<RenderLoop>c__Iterator0::$this
	SteamVR_Render_t595857297 * ___U24this_2;
	// System.Object SteamVR_Render/<RenderLoop>c__Iterator0::$current
	Il2CppObject * ___U24current_3;
	// System.Boolean SteamVR_Render/<RenderLoop>c__Iterator0::$disposing
	bool ___U24disposing_4;
	// System.Int32 SteamVR_Render/<RenderLoop>c__Iterator0::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U3CcompositorU3E__1_0() { return static_cast<int32_t>(offsetof(U3CRenderLoopU3Ec__Iterator0_t3103906043, ___U3CcompositorU3E__1_0)); }
	inline CVRCompositor_t197946050 * get_U3CcompositorU3E__1_0() const { return ___U3CcompositorU3E__1_0; }
	inline CVRCompositor_t197946050 ** get_address_of_U3CcompositorU3E__1_0() { return &___U3CcompositorU3E__1_0; }
	inline void set_U3CcompositorU3E__1_0(CVRCompositor_t197946050 * value)
	{
		___U3CcompositorU3E__1_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CcompositorU3E__1_0, value);
	}

	inline static int32_t get_offset_of_U3CoverlayU3E__1_1() { return static_cast<int32_t>(offsetof(U3CRenderLoopU3Ec__Iterator0_t3103906043, ___U3CoverlayU3E__1_1)); }
	inline SteamVR_Overlay_t1916653097 * get_U3CoverlayU3E__1_1() const { return ___U3CoverlayU3E__1_1; }
	inline SteamVR_Overlay_t1916653097 ** get_address_of_U3CoverlayU3E__1_1() { return &___U3CoverlayU3E__1_1; }
	inline void set_U3CoverlayU3E__1_1(SteamVR_Overlay_t1916653097 * value)
	{
		___U3CoverlayU3E__1_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CoverlayU3E__1_1, value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CRenderLoopU3Ec__Iterator0_t3103906043, ___U24this_2)); }
	inline SteamVR_Render_t595857297 * get_U24this_2() const { return ___U24this_2; }
	inline SteamVR_Render_t595857297 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(SteamVR_Render_t595857297 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier(&___U24this_2, value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CRenderLoopU3Ec__Iterator0_t3103906043, ___U24current_3)); }
	inline Il2CppObject * get_U24current_3() const { return ___U24current_3; }
	inline Il2CppObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(Il2CppObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier(&___U24current_3, value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CRenderLoopU3Ec__Iterator0_t3103906043, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CRenderLoopU3Ec__Iterator0_t3103906043, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
