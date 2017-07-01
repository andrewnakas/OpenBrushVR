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

// SteamVR_LoadLevel
struct SteamVR_LoadLevel_t3225691259;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t2243626319;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.AsyncOperation
struct AsyncOperation_t3814632279;
// UnityEngine.RenderTexture
struct RenderTexture_t2666733923;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SteamVR_LoadLevel
struct  SteamVR_LoadLevel_t3225691259  : public MonoBehaviour_t1158329972
{
public:
	// System.String SteamVR_LoadLevel::levelName
	String_t* ___levelName_3;
	// System.String SteamVR_LoadLevel::internalProcessPath
	String_t* ___internalProcessPath_4;
	// System.String SteamVR_LoadLevel::internalProcessArgs
	String_t* ___internalProcessArgs_5;
	// System.Boolean SteamVR_LoadLevel::loadAdditive
	bool ___loadAdditive_6;
	// System.Boolean SteamVR_LoadLevel::loadAsync
	bool ___loadAsync_7;
	// UnityEngine.Texture SteamVR_LoadLevel::loadingScreen
	Texture_t2243626319 * ___loadingScreen_8;
	// UnityEngine.Texture SteamVR_LoadLevel::progressBarEmpty
	Texture_t2243626319 * ___progressBarEmpty_9;
	// UnityEngine.Texture SteamVR_LoadLevel::progressBarFull
	Texture_t2243626319 * ___progressBarFull_10;
	// System.Single SteamVR_LoadLevel::loadingScreenWidthInMeters
	float ___loadingScreenWidthInMeters_11;
	// System.Single SteamVR_LoadLevel::progressBarWidthInMeters
	float ___progressBarWidthInMeters_12;
	// System.Single SteamVR_LoadLevel::loadingScreenDistance
	float ___loadingScreenDistance_13;
	// UnityEngine.Transform SteamVR_LoadLevel::loadingScreenTransform
	Transform_t3275118058 * ___loadingScreenTransform_14;
	// UnityEngine.Transform SteamVR_LoadLevel::progressBarTransform
	Transform_t3275118058 * ___progressBarTransform_15;
	// UnityEngine.Texture SteamVR_LoadLevel::front
	Texture_t2243626319 * ___front_16;
	// UnityEngine.Texture SteamVR_LoadLevel::back
	Texture_t2243626319 * ___back_17;
	// UnityEngine.Texture SteamVR_LoadLevel::left
	Texture_t2243626319 * ___left_18;
	// UnityEngine.Texture SteamVR_LoadLevel::right
	Texture_t2243626319 * ___right_19;
	// UnityEngine.Texture SteamVR_LoadLevel::top
	Texture_t2243626319 * ___top_20;
	// UnityEngine.Texture SteamVR_LoadLevel::bottom
	Texture_t2243626319 * ___bottom_21;
	// UnityEngine.Color SteamVR_LoadLevel::backgroundColor
	Color_t2020392075  ___backgroundColor_22;
	// System.Boolean SteamVR_LoadLevel::showGrid
	bool ___showGrid_23;
	// System.Single SteamVR_LoadLevel::fadeOutTime
	float ___fadeOutTime_24;
	// System.Single SteamVR_LoadLevel::fadeInTime
	float ___fadeInTime_25;
	// System.Single SteamVR_LoadLevel::postLoadSettleTime
	float ___postLoadSettleTime_26;
	// System.Single SteamVR_LoadLevel::loadingScreenFadeInTime
	float ___loadingScreenFadeInTime_27;
	// System.Single SteamVR_LoadLevel::loadingScreenFadeOutTime
	float ___loadingScreenFadeOutTime_28;
	// System.Single SteamVR_LoadLevel::fadeRate
	float ___fadeRate_29;
	// System.Single SteamVR_LoadLevel::alpha
	float ___alpha_30;
	// UnityEngine.AsyncOperation SteamVR_LoadLevel::async
	AsyncOperation_t3814632279 * ___async_31;
	// UnityEngine.RenderTexture SteamVR_LoadLevel::renderTexture
	RenderTexture_t2666733923 * ___renderTexture_32;
	// System.UInt64 SteamVR_LoadLevel::loadingScreenOverlayHandle
	uint64_t ___loadingScreenOverlayHandle_33;
	// System.UInt64 SteamVR_LoadLevel::progressBarOverlayHandle
	uint64_t ___progressBarOverlayHandle_34;
	// System.Boolean SteamVR_LoadLevel::autoTriggerOnEnable
	bool ___autoTriggerOnEnable_35;

public:
	inline static int32_t get_offset_of_levelName_3() { return static_cast<int32_t>(offsetof(SteamVR_LoadLevel_t3225691259, ___levelName_3)); }
	inline String_t* get_levelName_3() const { return ___levelName_3; }
	inline String_t** get_address_of_levelName_3() { return &___levelName_3; }
	inline void set_levelName_3(String_t* value)
	{
		___levelName_3 = value;
		Il2CppCodeGenWriteBarrier(&___levelName_3, value);
	}

	inline static int32_t get_offset_of_internalProcessPath_4() { return static_cast<int32_t>(offsetof(SteamVR_LoadLevel_t3225691259, ___internalProcessPath_4)); }
	inline String_t* get_internalProcessPath_4() const { return ___internalProcessPath_4; }
	inline String_t** get_address_of_internalProcessPath_4() { return &___internalProcessPath_4; }
	inline void set_internalProcessPath_4(String_t* value)
	{
		___internalProcessPath_4 = value;
		Il2CppCodeGenWriteBarrier(&___internalProcessPath_4, value);
	}

	inline static int32_t get_offset_of_internalProcessArgs_5() { return static_cast<int32_t>(offsetof(SteamVR_LoadLevel_t3225691259, ___internalProcessArgs_5)); }
	inline String_t* get_internalProcessArgs_5() const { return ___internalProcessArgs_5; }
	inline String_t** get_address_of_internalProcessArgs_5() { return &___internalProcessArgs_5; }
	inline void set_internalProcessArgs_5(String_t* value)
	{
		___internalProcessArgs_5 = value;
		Il2CppCodeGenWriteBarrier(&___internalProcessArgs_5, value);
	}

	inline static int32_t get_offset_of_loadAdditive_6() { return static_cast<int32_t>(offsetof(SteamVR_LoadLevel_t3225691259, ___loadAdditive_6)); }
	inline bool get_loadAdditive_6() const { return ___loadAdditive_6; }
	inline bool* get_address_of_loadAdditive_6() { return &___loadAdditive_6; }
	inline void set_loadAdditive_6(bool value)
	{
		___loadAdditive_6 = value;
	}

	inline static int32_t get_offset_of_loadAsync_7() { return static_cast<int32_t>(offsetof(SteamVR_LoadLevel_t3225691259, ___loadAsync_7)); }
	inline bool get_loadAsync_7() const { return ___loadAsync_7; }
	inline bool* get_address_of_loadAsync_7() { return &___loadAsync_7; }
	inline void set_loadAsync_7(bool value)
	{
		___loadAsync_7 = value;
	}

	inline static int32_t get_offset_of_loadingScreen_8() { return static_cast<int32_t>(offsetof(SteamVR_LoadLevel_t3225691259, ___loadingScreen_8)); }
	inline Texture_t2243626319 * get_loadingScreen_8() const { return ___loadingScreen_8; }
	inline Texture_t2243626319 ** get_address_of_loadingScreen_8() { return &___loadingScreen_8; }
	inline void set_loadingScreen_8(Texture_t2243626319 * value)
	{
		___loadingScreen_8 = value;
		Il2CppCodeGenWriteBarrier(&___loadingScreen_8, value);
	}

	inline static int32_t get_offset_of_progressBarEmpty_9() { return static_cast<int32_t>(offsetof(SteamVR_LoadLevel_t3225691259, ___progressBarEmpty_9)); }
	inline Texture_t2243626319 * get_progressBarEmpty_9() const { return ___progressBarEmpty_9; }
	inline Texture_t2243626319 ** get_address_of_progressBarEmpty_9() { return &___progressBarEmpty_9; }
	inline void set_progressBarEmpty_9(Texture_t2243626319 * value)
	{
		___progressBarEmpty_9 = value;
		Il2CppCodeGenWriteBarrier(&___progressBarEmpty_9, value);
	}

	inline static int32_t get_offset_of_progressBarFull_10() { return static_cast<int32_t>(offsetof(SteamVR_LoadLevel_t3225691259, ___progressBarFull_10)); }
	inline Texture_t2243626319 * get_progressBarFull_10() const { return ___progressBarFull_10; }
	inline Texture_t2243626319 ** get_address_of_progressBarFull_10() { return &___progressBarFull_10; }
	inline void set_progressBarFull_10(Texture_t2243626319 * value)
	{
		___progressBarFull_10 = value;
		Il2CppCodeGenWriteBarrier(&___progressBarFull_10, value);
	}

	inline static int32_t get_offset_of_loadingScreenWidthInMeters_11() { return static_cast<int32_t>(offsetof(SteamVR_LoadLevel_t3225691259, ___loadingScreenWidthInMeters_11)); }
	inline float get_loadingScreenWidthInMeters_11() const { return ___loadingScreenWidthInMeters_11; }
	inline float* get_address_of_loadingScreenWidthInMeters_11() { return &___loadingScreenWidthInMeters_11; }
	inline void set_loadingScreenWidthInMeters_11(float value)
	{
		___loadingScreenWidthInMeters_11 = value;
	}

	inline static int32_t get_offset_of_progressBarWidthInMeters_12() { return static_cast<int32_t>(offsetof(SteamVR_LoadLevel_t3225691259, ___progressBarWidthInMeters_12)); }
	inline float get_progressBarWidthInMeters_12() const { return ___progressBarWidthInMeters_12; }
	inline float* get_address_of_progressBarWidthInMeters_12() { return &___progressBarWidthInMeters_12; }
	inline void set_progressBarWidthInMeters_12(float value)
	{
		___progressBarWidthInMeters_12 = value;
	}

	inline static int32_t get_offset_of_loadingScreenDistance_13() { return static_cast<int32_t>(offsetof(SteamVR_LoadLevel_t3225691259, ___loadingScreenDistance_13)); }
	inline float get_loadingScreenDistance_13() const { return ___loadingScreenDistance_13; }
	inline float* get_address_of_loadingScreenDistance_13() { return &___loadingScreenDistance_13; }
	inline void set_loadingScreenDistance_13(float value)
	{
		___loadingScreenDistance_13 = value;
	}

	inline static int32_t get_offset_of_loadingScreenTransform_14() { return static_cast<int32_t>(offsetof(SteamVR_LoadLevel_t3225691259, ___loadingScreenTransform_14)); }
	inline Transform_t3275118058 * get_loadingScreenTransform_14() const { return ___loadingScreenTransform_14; }
	inline Transform_t3275118058 ** get_address_of_loadingScreenTransform_14() { return &___loadingScreenTransform_14; }
	inline void set_loadingScreenTransform_14(Transform_t3275118058 * value)
	{
		___loadingScreenTransform_14 = value;
		Il2CppCodeGenWriteBarrier(&___loadingScreenTransform_14, value);
	}

	inline static int32_t get_offset_of_progressBarTransform_15() { return static_cast<int32_t>(offsetof(SteamVR_LoadLevel_t3225691259, ___progressBarTransform_15)); }
	inline Transform_t3275118058 * get_progressBarTransform_15() const { return ___progressBarTransform_15; }
	inline Transform_t3275118058 ** get_address_of_progressBarTransform_15() { return &___progressBarTransform_15; }
	inline void set_progressBarTransform_15(Transform_t3275118058 * value)
	{
		___progressBarTransform_15 = value;
		Il2CppCodeGenWriteBarrier(&___progressBarTransform_15, value);
	}

	inline static int32_t get_offset_of_front_16() { return static_cast<int32_t>(offsetof(SteamVR_LoadLevel_t3225691259, ___front_16)); }
	inline Texture_t2243626319 * get_front_16() const { return ___front_16; }
	inline Texture_t2243626319 ** get_address_of_front_16() { return &___front_16; }
	inline void set_front_16(Texture_t2243626319 * value)
	{
		___front_16 = value;
		Il2CppCodeGenWriteBarrier(&___front_16, value);
	}

	inline static int32_t get_offset_of_back_17() { return static_cast<int32_t>(offsetof(SteamVR_LoadLevel_t3225691259, ___back_17)); }
	inline Texture_t2243626319 * get_back_17() const { return ___back_17; }
	inline Texture_t2243626319 ** get_address_of_back_17() { return &___back_17; }
	inline void set_back_17(Texture_t2243626319 * value)
	{
		___back_17 = value;
		Il2CppCodeGenWriteBarrier(&___back_17, value);
	}

	inline static int32_t get_offset_of_left_18() { return static_cast<int32_t>(offsetof(SteamVR_LoadLevel_t3225691259, ___left_18)); }
	inline Texture_t2243626319 * get_left_18() const { return ___left_18; }
	inline Texture_t2243626319 ** get_address_of_left_18() { return &___left_18; }
	inline void set_left_18(Texture_t2243626319 * value)
	{
		___left_18 = value;
		Il2CppCodeGenWriteBarrier(&___left_18, value);
	}

	inline static int32_t get_offset_of_right_19() { return static_cast<int32_t>(offsetof(SteamVR_LoadLevel_t3225691259, ___right_19)); }
	inline Texture_t2243626319 * get_right_19() const { return ___right_19; }
	inline Texture_t2243626319 ** get_address_of_right_19() { return &___right_19; }
	inline void set_right_19(Texture_t2243626319 * value)
	{
		___right_19 = value;
		Il2CppCodeGenWriteBarrier(&___right_19, value);
	}

	inline static int32_t get_offset_of_top_20() { return static_cast<int32_t>(offsetof(SteamVR_LoadLevel_t3225691259, ___top_20)); }
	inline Texture_t2243626319 * get_top_20() const { return ___top_20; }
	inline Texture_t2243626319 ** get_address_of_top_20() { return &___top_20; }
	inline void set_top_20(Texture_t2243626319 * value)
	{
		___top_20 = value;
		Il2CppCodeGenWriteBarrier(&___top_20, value);
	}

	inline static int32_t get_offset_of_bottom_21() { return static_cast<int32_t>(offsetof(SteamVR_LoadLevel_t3225691259, ___bottom_21)); }
	inline Texture_t2243626319 * get_bottom_21() const { return ___bottom_21; }
	inline Texture_t2243626319 ** get_address_of_bottom_21() { return &___bottom_21; }
	inline void set_bottom_21(Texture_t2243626319 * value)
	{
		___bottom_21 = value;
		Il2CppCodeGenWriteBarrier(&___bottom_21, value);
	}

	inline static int32_t get_offset_of_backgroundColor_22() { return static_cast<int32_t>(offsetof(SteamVR_LoadLevel_t3225691259, ___backgroundColor_22)); }
	inline Color_t2020392075  get_backgroundColor_22() const { return ___backgroundColor_22; }
	inline Color_t2020392075 * get_address_of_backgroundColor_22() { return &___backgroundColor_22; }
	inline void set_backgroundColor_22(Color_t2020392075  value)
	{
		___backgroundColor_22 = value;
	}

	inline static int32_t get_offset_of_showGrid_23() { return static_cast<int32_t>(offsetof(SteamVR_LoadLevel_t3225691259, ___showGrid_23)); }
	inline bool get_showGrid_23() const { return ___showGrid_23; }
	inline bool* get_address_of_showGrid_23() { return &___showGrid_23; }
	inline void set_showGrid_23(bool value)
	{
		___showGrid_23 = value;
	}

	inline static int32_t get_offset_of_fadeOutTime_24() { return static_cast<int32_t>(offsetof(SteamVR_LoadLevel_t3225691259, ___fadeOutTime_24)); }
	inline float get_fadeOutTime_24() const { return ___fadeOutTime_24; }
	inline float* get_address_of_fadeOutTime_24() { return &___fadeOutTime_24; }
	inline void set_fadeOutTime_24(float value)
	{
		___fadeOutTime_24 = value;
	}

	inline static int32_t get_offset_of_fadeInTime_25() { return static_cast<int32_t>(offsetof(SteamVR_LoadLevel_t3225691259, ___fadeInTime_25)); }
	inline float get_fadeInTime_25() const { return ___fadeInTime_25; }
	inline float* get_address_of_fadeInTime_25() { return &___fadeInTime_25; }
	inline void set_fadeInTime_25(float value)
	{
		___fadeInTime_25 = value;
	}

	inline static int32_t get_offset_of_postLoadSettleTime_26() { return static_cast<int32_t>(offsetof(SteamVR_LoadLevel_t3225691259, ___postLoadSettleTime_26)); }
	inline float get_postLoadSettleTime_26() const { return ___postLoadSettleTime_26; }
	inline float* get_address_of_postLoadSettleTime_26() { return &___postLoadSettleTime_26; }
	inline void set_postLoadSettleTime_26(float value)
	{
		___postLoadSettleTime_26 = value;
	}

	inline static int32_t get_offset_of_loadingScreenFadeInTime_27() { return static_cast<int32_t>(offsetof(SteamVR_LoadLevel_t3225691259, ___loadingScreenFadeInTime_27)); }
	inline float get_loadingScreenFadeInTime_27() const { return ___loadingScreenFadeInTime_27; }
	inline float* get_address_of_loadingScreenFadeInTime_27() { return &___loadingScreenFadeInTime_27; }
	inline void set_loadingScreenFadeInTime_27(float value)
	{
		___loadingScreenFadeInTime_27 = value;
	}

	inline static int32_t get_offset_of_loadingScreenFadeOutTime_28() { return static_cast<int32_t>(offsetof(SteamVR_LoadLevel_t3225691259, ___loadingScreenFadeOutTime_28)); }
	inline float get_loadingScreenFadeOutTime_28() const { return ___loadingScreenFadeOutTime_28; }
	inline float* get_address_of_loadingScreenFadeOutTime_28() { return &___loadingScreenFadeOutTime_28; }
	inline void set_loadingScreenFadeOutTime_28(float value)
	{
		___loadingScreenFadeOutTime_28 = value;
	}

	inline static int32_t get_offset_of_fadeRate_29() { return static_cast<int32_t>(offsetof(SteamVR_LoadLevel_t3225691259, ___fadeRate_29)); }
	inline float get_fadeRate_29() const { return ___fadeRate_29; }
	inline float* get_address_of_fadeRate_29() { return &___fadeRate_29; }
	inline void set_fadeRate_29(float value)
	{
		___fadeRate_29 = value;
	}

	inline static int32_t get_offset_of_alpha_30() { return static_cast<int32_t>(offsetof(SteamVR_LoadLevel_t3225691259, ___alpha_30)); }
	inline float get_alpha_30() const { return ___alpha_30; }
	inline float* get_address_of_alpha_30() { return &___alpha_30; }
	inline void set_alpha_30(float value)
	{
		___alpha_30 = value;
	}

	inline static int32_t get_offset_of_async_31() { return static_cast<int32_t>(offsetof(SteamVR_LoadLevel_t3225691259, ___async_31)); }
	inline AsyncOperation_t3814632279 * get_async_31() const { return ___async_31; }
	inline AsyncOperation_t3814632279 ** get_address_of_async_31() { return &___async_31; }
	inline void set_async_31(AsyncOperation_t3814632279 * value)
	{
		___async_31 = value;
		Il2CppCodeGenWriteBarrier(&___async_31, value);
	}

	inline static int32_t get_offset_of_renderTexture_32() { return static_cast<int32_t>(offsetof(SteamVR_LoadLevel_t3225691259, ___renderTexture_32)); }
	inline RenderTexture_t2666733923 * get_renderTexture_32() const { return ___renderTexture_32; }
	inline RenderTexture_t2666733923 ** get_address_of_renderTexture_32() { return &___renderTexture_32; }
	inline void set_renderTexture_32(RenderTexture_t2666733923 * value)
	{
		___renderTexture_32 = value;
		Il2CppCodeGenWriteBarrier(&___renderTexture_32, value);
	}

	inline static int32_t get_offset_of_loadingScreenOverlayHandle_33() { return static_cast<int32_t>(offsetof(SteamVR_LoadLevel_t3225691259, ___loadingScreenOverlayHandle_33)); }
	inline uint64_t get_loadingScreenOverlayHandle_33() const { return ___loadingScreenOverlayHandle_33; }
	inline uint64_t* get_address_of_loadingScreenOverlayHandle_33() { return &___loadingScreenOverlayHandle_33; }
	inline void set_loadingScreenOverlayHandle_33(uint64_t value)
	{
		___loadingScreenOverlayHandle_33 = value;
	}

	inline static int32_t get_offset_of_progressBarOverlayHandle_34() { return static_cast<int32_t>(offsetof(SteamVR_LoadLevel_t3225691259, ___progressBarOverlayHandle_34)); }
	inline uint64_t get_progressBarOverlayHandle_34() const { return ___progressBarOverlayHandle_34; }
	inline uint64_t* get_address_of_progressBarOverlayHandle_34() { return &___progressBarOverlayHandle_34; }
	inline void set_progressBarOverlayHandle_34(uint64_t value)
	{
		___progressBarOverlayHandle_34 = value;
	}

	inline static int32_t get_offset_of_autoTriggerOnEnable_35() { return static_cast<int32_t>(offsetof(SteamVR_LoadLevel_t3225691259, ___autoTriggerOnEnable_35)); }
	inline bool get_autoTriggerOnEnable_35() const { return ___autoTriggerOnEnable_35; }
	inline bool* get_address_of_autoTriggerOnEnable_35() { return &___autoTriggerOnEnable_35; }
	inline void set_autoTriggerOnEnable_35(bool value)
	{
		___autoTriggerOnEnable_35 = value;
	}
};

struct SteamVR_LoadLevel_t3225691259_StaticFields
{
public:
	// SteamVR_LoadLevel SteamVR_LoadLevel::_active
	SteamVR_LoadLevel_t3225691259 * ____active_2;

public:
	inline static int32_t get_offset_of__active_2() { return static_cast<int32_t>(offsetof(SteamVR_LoadLevel_t3225691259_StaticFields, ____active_2)); }
	inline SteamVR_LoadLevel_t3225691259 * get__active_2() const { return ____active_2; }
	inline SteamVR_LoadLevel_t3225691259 ** get_address_of__active_2() { return &____active_2; }
	inline void set__active_2(SteamVR_LoadLevel_t3225691259 * value)
	{
		____active_2 = value;
		Il2CppCodeGenWriteBarrier(&____active_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
