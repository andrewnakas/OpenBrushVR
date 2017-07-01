#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UI_UnityEngine_UI_MaskableGraphic540192618.h"
#include "UnityEngine_UI_UnityEngine_UI_Image_Type3352948571.h"
#include "UnityEngine_UI_UnityEngine_UI_Image_FillMethod1640962579.h"

// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.Sprite
struct Sprite_t309593783;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t686124026;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1172311765;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image
struct  Image_t2042527209  : public MaskableGraphic_t540192618
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t309593783 * ___m_Sprite_29;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t309593783 * ___m_OverrideSprite_30;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_31;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_32;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_33;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_34;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_35;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_36;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_37;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_38;

public:
	inline static int32_t get_offset_of_m_Sprite_29() { return static_cast<int32_t>(offsetof(Image_t2042527209, ___m_Sprite_29)); }
	inline Sprite_t309593783 * get_m_Sprite_29() const { return ___m_Sprite_29; }
	inline Sprite_t309593783 ** get_address_of_m_Sprite_29() { return &___m_Sprite_29; }
	inline void set_m_Sprite_29(Sprite_t309593783 * value)
	{
		___m_Sprite_29 = value;
		Il2CppCodeGenWriteBarrier(&___m_Sprite_29, value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_30() { return static_cast<int32_t>(offsetof(Image_t2042527209, ___m_OverrideSprite_30)); }
	inline Sprite_t309593783 * get_m_OverrideSprite_30() const { return ___m_OverrideSprite_30; }
	inline Sprite_t309593783 ** get_address_of_m_OverrideSprite_30() { return &___m_OverrideSprite_30; }
	inline void set_m_OverrideSprite_30(Sprite_t309593783 * value)
	{
		___m_OverrideSprite_30 = value;
		Il2CppCodeGenWriteBarrier(&___m_OverrideSprite_30, value);
	}

	inline static int32_t get_offset_of_m_Type_31() { return static_cast<int32_t>(offsetof(Image_t2042527209, ___m_Type_31)); }
	inline int32_t get_m_Type_31() const { return ___m_Type_31; }
	inline int32_t* get_address_of_m_Type_31() { return &___m_Type_31; }
	inline void set_m_Type_31(int32_t value)
	{
		___m_Type_31 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_32() { return static_cast<int32_t>(offsetof(Image_t2042527209, ___m_PreserveAspect_32)); }
	inline bool get_m_PreserveAspect_32() const { return ___m_PreserveAspect_32; }
	inline bool* get_address_of_m_PreserveAspect_32() { return &___m_PreserveAspect_32; }
	inline void set_m_PreserveAspect_32(bool value)
	{
		___m_PreserveAspect_32 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_33() { return static_cast<int32_t>(offsetof(Image_t2042527209, ___m_FillCenter_33)); }
	inline bool get_m_FillCenter_33() const { return ___m_FillCenter_33; }
	inline bool* get_address_of_m_FillCenter_33() { return &___m_FillCenter_33; }
	inline void set_m_FillCenter_33(bool value)
	{
		___m_FillCenter_33 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_34() { return static_cast<int32_t>(offsetof(Image_t2042527209, ___m_FillMethod_34)); }
	inline int32_t get_m_FillMethod_34() const { return ___m_FillMethod_34; }
	inline int32_t* get_address_of_m_FillMethod_34() { return &___m_FillMethod_34; }
	inline void set_m_FillMethod_34(int32_t value)
	{
		___m_FillMethod_34 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_35() { return static_cast<int32_t>(offsetof(Image_t2042527209, ___m_FillAmount_35)); }
	inline float get_m_FillAmount_35() const { return ___m_FillAmount_35; }
	inline float* get_address_of_m_FillAmount_35() { return &___m_FillAmount_35; }
	inline void set_m_FillAmount_35(float value)
	{
		___m_FillAmount_35 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_36() { return static_cast<int32_t>(offsetof(Image_t2042527209, ___m_FillClockwise_36)); }
	inline bool get_m_FillClockwise_36() const { return ___m_FillClockwise_36; }
	inline bool* get_address_of_m_FillClockwise_36() { return &___m_FillClockwise_36; }
	inline void set_m_FillClockwise_36(bool value)
	{
		___m_FillClockwise_36 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_37() { return static_cast<int32_t>(offsetof(Image_t2042527209, ___m_FillOrigin_37)); }
	inline int32_t get_m_FillOrigin_37() const { return ___m_FillOrigin_37; }
	inline int32_t* get_address_of_m_FillOrigin_37() { return &___m_FillOrigin_37; }
	inline void set_m_FillOrigin_37(int32_t value)
	{
		___m_FillOrigin_37 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_38() { return static_cast<int32_t>(offsetof(Image_t2042527209, ___m_AlphaHitTestMinimumThreshold_38)); }
	inline float get_m_AlphaHitTestMinimumThreshold_38() const { return ___m_AlphaHitTestMinimumThreshold_38; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_38() { return &___m_AlphaHitTestMinimumThreshold_38; }
	inline void set_m_AlphaHitTestMinimumThreshold_38(float value)
	{
		___m_AlphaHitTestMinimumThreshold_38 = value;
	}
};

struct Image_t2042527209_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t193706927 * ___s_ETC1DefaultUI_28;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_t686124026* ___s_VertScratch_39;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_t686124026* ___s_UVScratch_40;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t1172311765* ___s_Xy_41;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t1172311765* ___s_Uv_42;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_28() { return static_cast<int32_t>(offsetof(Image_t2042527209_StaticFields, ___s_ETC1DefaultUI_28)); }
	inline Material_t193706927 * get_s_ETC1DefaultUI_28() const { return ___s_ETC1DefaultUI_28; }
	inline Material_t193706927 ** get_address_of_s_ETC1DefaultUI_28() { return &___s_ETC1DefaultUI_28; }
	inline void set_s_ETC1DefaultUI_28(Material_t193706927 * value)
	{
		___s_ETC1DefaultUI_28 = value;
		Il2CppCodeGenWriteBarrier(&___s_ETC1DefaultUI_28, value);
	}

	inline static int32_t get_offset_of_s_VertScratch_39() { return static_cast<int32_t>(offsetof(Image_t2042527209_StaticFields, ___s_VertScratch_39)); }
	inline Vector2U5BU5D_t686124026* get_s_VertScratch_39() const { return ___s_VertScratch_39; }
	inline Vector2U5BU5D_t686124026** get_address_of_s_VertScratch_39() { return &___s_VertScratch_39; }
	inline void set_s_VertScratch_39(Vector2U5BU5D_t686124026* value)
	{
		___s_VertScratch_39 = value;
		Il2CppCodeGenWriteBarrier(&___s_VertScratch_39, value);
	}

	inline static int32_t get_offset_of_s_UVScratch_40() { return static_cast<int32_t>(offsetof(Image_t2042527209_StaticFields, ___s_UVScratch_40)); }
	inline Vector2U5BU5D_t686124026* get_s_UVScratch_40() const { return ___s_UVScratch_40; }
	inline Vector2U5BU5D_t686124026** get_address_of_s_UVScratch_40() { return &___s_UVScratch_40; }
	inline void set_s_UVScratch_40(Vector2U5BU5D_t686124026* value)
	{
		___s_UVScratch_40 = value;
		Il2CppCodeGenWriteBarrier(&___s_UVScratch_40, value);
	}

	inline static int32_t get_offset_of_s_Xy_41() { return static_cast<int32_t>(offsetof(Image_t2042527209_StaticFields, ___s_Xy_41)); }
	inline Vector3U5BU5D_t1172311765* get_s_Xy_41() const { return ___s_Xy_41; }
	inline Vector3U5BU5D_t1172311765** get_address_of_s_Xy_41() { return &___s_Xy_41; }
	inline void set_s_Xy_41(Vector3U5BU5D_t1172311765* value)
	{
		___s_Xy_41 = value;
		Il2CppCodeGenWriteBarrier(&___s_Xy_41, value);
	}

	inline static int32_t get_offset_of_s_Uv_42() { return static_cast<int32_t>(offsetof(Image_t2042527209_StaticFields, ___s_Uv_42)); }
	inline Vector3U5BU5D_t1172311765* get_s_Uv_42() const { return ___s_Uv_42; }
	inline Vector3U5BU5D_t1172311765** get_address_of_s_Uv_42() { return &___s_Uv_42; }
	inline void set_s_Uv_42(Vector3U5BU5D_t1172311765* value)
	{
		___s_Uv_42 = value;
		Il2CppCodeGenWriteBarrier(&___s_Uv_42, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
