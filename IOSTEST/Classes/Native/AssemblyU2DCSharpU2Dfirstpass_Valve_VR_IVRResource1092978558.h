#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// Valve.VR.IVRResources/_LoadSharedResource
struct _LoadSharedResource_t4289483331;
// Valve.VR.IVRResources/_GetResourceFullPath
struct _GetResourceFullPath_t915790394;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Valve.VR.IVRResources
struct  IVRResources_t1092978558 
{
public:
	// Valve.VR.IVRResources/_LoadSharedResource Valve.VR.IVRResources::LoadSharedResource
	_LoadSharedResource_t4289483331 * ___LoadSharedResource_0;
	// Valve.VR.IVRResources/_GetResourceFullPath Valve.VR.IVRResources::GetResourceFullPath
	_GetResourceFullPath_t915790394 * ___GetResourceFullPath_1;

public:
	inline static int32_t get_offset_of_LoadSharedResource_0() { return static_cast<int32_t>(offsetof(IVRResources_t1092978558, ___LoadSharedResource_0)); }
	inline _LoadSharedResource_t4289483331 * get_LoadSharedResource_0() const { return ___LoadSharedResource_0; }
	inline _LoadSharedResource_t4289483331 ** get_address_of_LoadSharedResource_0() { return &___LoadSharedResource_0; }
	inline void set_LoadSharedResource_0(_LoadSharedResource_t4289483331 * value)
	{
		___LoadSharedResource_0 = value;
		Il2CppCodeGenWriteBarrier(&___LoadSharedResource_0, value);
	}

	inline static int32_t get_offset_of_GetResourceFullPath_1() { return static_cast<int32_t>(offsetof(IVRResources_t1092978558, ___GetResourceFullPath_1)); }
	inline _GetResourceFullPath_t915790394 * get_GetResourceFullPath_1() const { return ___GetResourceFullPath_1; }
	inline _GetResourceFullPath_t915790394 ** get_address_of_GetResourceFullPath_1() { return &___GetResourceFullPath_1; }
	inline void set_GetResourceFullPath_1(_GetResourceFullPath_t915790394 * value)
	{
		___GetResourceFullPath_1 = value;
		Il2CppCodeGenWriteBarrier(&___GetResourceFullPath_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Valve.VR.IVRResources
struct IVRResources_t1092978558_marshaled_pinvoke
{
	Il2CppMethodPointer ___LoadSharedResource_0;
	Il2CppMethodPointer ___GetResourceFullPath_1;
};
// Native definition for COM marshalling of Valve.VR.IVRResources
struct IVRResources_t1092978558_marshaled_com
{
	Il2CppMethodPointer ___LoadSharedResource_0;
	Il2CppMethodPointer ___GetResourceFullPath_1;
};
