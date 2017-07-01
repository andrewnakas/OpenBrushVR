#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Valve.VR.CVRRenderModels
struct CVRRenderModels_t2019937239;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SteamVR_RenderModel/RenderModelInterfaceHolder
struct  RenderModelInterfaceHolder_t289202529  : public Il2CppObject
{
public:
	// System.Boolean SteamVR_RenderModel/RenderModelInterfaceHolder::needsShutdown
	bool ___needsShutdown_0;
	// System.Boolean SteamVR_RenderModel/RenderModelInterfaceHolder::failedLoadInterface
	bool ___failedLoadInterface_1;
	// Valve.VR.CVRRenderModels SteamVR_RenderModel/RenderModelInterfaceHolder::_instance
	CVRRenderModels_t2019937239 * ____instance_2;

public:
	inline static int32_t get_offset_of_needsShutdown_0() { return static_cast<int32_t>(offsetof(RenderModelInterfaceHolder_t289202529, ___needsShutdown_0)); }
	inline bool get_needsShutdown_0() const { return ___needsShutdown_0; }
	inline bool* get_address_of_needsShutdown_0() { return &___needsShutdown_0; }
	inline void set_needsShutdown_0(bool value)
	{
		___needsShutdown_0 = value;
	}

	inline static int32_t get_offset_of_failedLoadInterface_1() { return static_cast<int32_t>(offsetof(RenderModelInterfaceHolder_t289202529, ___failedLoadInterface_1)); }
	inline bool get_failedLoadInterface_1() const { return ___failedLoadInterface_1; }
	inline bool* get_address_of_failedLoadInterface_1() { return &___failedLoadInterface_1; }
	inline void set_failedLoadInterface_1(bool value)
	{
		___failedLoadInterface_1 = value;
	}

	inline static int32_t get_offset_of__instance_2() { return static_cast<int32_t>(offsetof(RenderModelInterfaceHolder_t289202529, ____instance_2)); }
	inline CVRRenderModels_t2019937239 * get__instance_2() const { return ____instance_2; }
	inline CVRRenderModels_t2019937239 ** get_address_of__instance_2() { return &____instance_2; }
	inline void set__instance_2(CVRRenderModels_t2019937239 * value)
	{
		____instance_2 = value;
		Il2CppCodeGenWriteBarrier(&____instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
