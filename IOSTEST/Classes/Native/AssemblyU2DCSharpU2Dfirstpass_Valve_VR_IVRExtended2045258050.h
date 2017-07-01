#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// Valve.VR.IVRExtendedDisplay/_GetWindowBounds
struct _GetWindowBounds_t2171929041;
// Valve.VR.IVRExtendedDisplay/_GetEyeOutputViewport
struct _GetEyeOutputViewport_t693377854;
// Valve.VR.IVRExtendedDisplay/_GetDXGIOutputInfo
struct _GetDXGIOutputInfo_t2084284319;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Valve.VR.IVRExtendedDisplay
struct  IVRExtendedDisplay_t2045258050 
{
public:
	// Valve.VR.IVRExtendedDisplay/_GetWindowBounds Valve.VR.IVRExtendedDisplay::GetWindowBounds
	_GetWindowBounds_t2171929041 * ___GetWindowBounds_0;
	// Valve.VR.IVRExtendedDisplay/_GetEyeOutputViewport Valve.VR.IVRExtendedDisplay::GetEyeOutputViewport
	_GetEyeOutputViewport_t693377854 * ___GetEyeOutputViewport_1;
	// Valve.VR.IVRExtendedDisplay/_GetDXGIOutputInfo Valve.VR.IVRExtendedDisplay::GetDXGIOutputInfo
	_GetDXGIOutputInfo_t2084284319 * ___GetDXGIOutputInfo_2;

public:
	inline static int32_t get_offset_of_GetWindowBounds_0() { return static_cast<int32_t>(offsetof(IVRExtendedDisplay_t2045258050, ___GetWindowBounds_0)); }
	inline _GetWindowBounds_t2171929041 * get_GetWindowBounds_0() const { return ___GetWindowBounds_0; }
	inline _GetWindowBounds_t2171929041 ** get_address_of_GetWindowBounds_0() { return &___GetWindowBounds_0; }
	inline void set_GetWindowBounds_0(_GetWindowBounds_t2171929041 * value)
	{
		___GetWindowBounds_0 = value;
		Il2CppCodeGenWriteBarrier(&___GetWindowBounds_0, value);
	}

	inline static int32_t get_offset_of_GetEyeOutputViewport_1() { return static_cast<int32_t>(offsetof(IVRExtendedDisplay_t2045258050, ___GetEyeOutputViewport_1)); }
	inline _GetEyeOutputViewport_t693377854 * get_GetEyeOutputViewport_1() const { return ___GetEyeOutputViewport_1; }
	inline _GetEyeOutputViewport_t693377854 ** get_address_of_GetEyeOutputViewport_1() { return &___GetEyeOutputViewport_1; }
	inline void set_GetEyeOutputViewport_1(_GetEyeOutputViewport_t693377854 * value)
	{
		___GetEyeOutputViewport_1 = value;
		Il2CppCodeGenWriteBarrier(&___GetEyeOutputViewport_1, value);
	}

	inline static int32_t get_offset_of_GetDXGIOutputInfo_2() { return static_cast<int32_t>(offsetof(IVRExtendedDisplay_t2045258050, ___GetDXGIOutputInfo_2)); }
	inline _GetDXGIOutputInfo_t2084284319 * get_GetDXGIOutputInfo_2() const { return ___GetDXGIOutputInfo_2; }
	inline _GetDXGIOutputInfo_t2084284319 ** get_address_of_GetDXGIOutputInfo_2() { return &___GetDXGIOutputInfo_2; }
	inline void set_GetDXGIOutputInfo_2(_GetDXGIOutputInfo_t2084284319 * value)
	{
		___GetDXGIOutputInfo_2 = value;
		Il2CppCodeGenWriteBarrier(&___GetDXGIOutputInfo_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Valve.VR.IVRExtendedDisplay
struct IVRExtendedDisplay_t2045258050_marshaled_pinvoke
{
	Il2CppMethodPointer ___GetWindowBounds_0;
	Il2CppMethodPointer ___GetEyeOutputViewport_1;
	Il2CppMethodPointer ___GetDXGIOutputInfo_2;
};
// Native definition for COM marshalling of Valve.VR.IVRExtendedDisplay
struct IVRExtendedDisplay_t2045258050_marshaled_com
{
	Il2CppMethodPointer ___GetWindowBounds_0;
	Il2CppMethodPointer ___GetEyeOutputViewport_1;
	Il2CppMethodPointer ___GetDXGIOutputInfo_2;
};
