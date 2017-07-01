#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_SteamVR_TrackedObject_EIndex129448938.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Valve_VR_RenderModel1298199406.h"

// System.String
struct String_t;
// UnityEngine.Shader
struct Shader_t2430389951;
// System.Collections.Hashtable
struct Hashtable_t909839986;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SteamVR_RenderModel
struct  SteamVR_RenderModel_t2905485978  : public MonoBehaviour_t1158329972
{
public:
	// SteamVR_TrackedObject/EIndex SteamVR_RenderModel::index
	int32_t ___index_2;
	// System.String SteamVR_RenderModel::modelOverride
	String_t* ___modelOverride_3;
	// UnityEngine.Shader SteamVR_RenderModel::shader
	Shader_t2430389951 * ___shader_4;
	// System.Boolean SteamVR_RenderModel::verbose
	bool ___verbose_5;
	// System.Boolean SteamVR_RenderModel::createComponents
	bool ___createComponents_6;
	// System.Boolean SteamVR_RenderModel::updateDynamically
	bool ___updateDynamically_7;
	// Valve.VR.RenderModel_ControllerMode_State_t SteamVR_RenderModel::controllerModeState
	RenderModel_ControllerMode_State_t_t1298199406  ___controllerModeState_8;
	// System.String SteamVR_RenderModel::<renderModelName>k__BackingField
	String_t* ___U3CrenderModelNameU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(SteamVR_RenderModel_t2905485978, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_modelOverride_3() { return static_cast<int32_t>(offsetof(SteamVR_RenderModel_t2905485978, ___modelOverride_3)); }
	inline String_t* get_modelOverride_3() const { return ___modelOverride_3; }
	inline String_t** get_address_of_modelOverride_3() { return &___modelOverride_3; }
	inline void set_modelOverride_3(String_t* value)
	{
		___modelOverride_3 = value;
		Il2CppCodeGenWriteBarrier(&___modelOverride_3, value);
	}

	inline static int32_t get_offset_of_shader_4() { return static_cast<int32_t>(offsetof(SteamVR_RenderModel_t2905485978, ___shader_4)); }
	inline Shader_t2430389951 * get_shader_4() const { return ___shader_4; }
	inline Shader_t2430389951 ** get_address_of_shader_4() { return &___shader_4; }
	inline void set_shader_4(Shader_t2430389951 * value)
	{
		___shader_4 = value;
		Il2CppCodeGenWriteBarrier(&___shader_4, value);
	}

	inline static int32_t get_offset_of_verbose_5() { return static_cast<int32_t>(offsetof(SteamVR_RenderModel_t2905485978, ___verbose_5)); }
	inline bool get_verbose_5() const { return ___verbose_5; }
	inline bool* get_address_of_verbose_5() { return &___verbose_5; }
	inline void set_verbose_5(bool value)
	{
		___verbose_5 = value;
	}

	inline static int32_t get_offset_of_createComponents_6() { return static_cast<int32_t>(offsetof(SteamVR_RenderModel_t2905485978, ___createComponents_6)); }
	inline bool get_createComponents_6() const { return ___createComponents_6; }
	inline bool* get_address_of_createComponents_6() { return &___createComponents_6; }
	inline void set_createComponents_6(bool value)
	{
		___createComponents_6 = value;
	}

	inline static int32_t get_offset_of_updateDynamically_7() { return static_cast<int32_t>(offsetof(SteamVR_RenderModel_t2905485978, ___updateDynamically_7)); }
	inline bool get_updateDynamically_7() const { return ___updateDynamically_7; }
	inline bool* get_address_of_updateDynamically_7() { return &___updateDynamically_7; }
	inline void set_updateDynamically_7(bool value)
	{
		___updateDynamically_7 = value;
	}

	inline static int32_t get_offset_of_controllerModeState_8() { return static_cast<int32_t>(offsetof(SteamVR_RenderModel_t2905485978, ___controllerModeState_8)); }
	inline RenderModel_ControllerMode_State_t_t1298199406  get_controllerModeState_8() const { return ___controllerModeState_8; }
	inline RenderModel_ControllerMode_State_t_t1298199406 * get_address_of_controllerModeState_8() { return &___controllerModeState_8; }
	inline void set_controllerModeState_8(RenderModel_ControllerMode_State_t_t1298199406  value)
	{
		___controllerModeState_8 = value;
	}

	inline static int32_t get_offset_of_U3CrenderModelNameU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(SteamVR_RenderModel_t2905485978, ___U3CrenderModelNameU3Ek__BackingField_10)); }
	inline String_t* get_U3CrenderModelNameU3Ek__BackingField_10() const { return ___U3CrenderModelNameU3Ek__BackingField_10; }
	inline String_t** get_address_of_U3CrenderModelNameU3Ek__BackingField_10() { return &___U3CrenderModelNameU3Ek__BackingField_10; }
	inline void set_U3CrenderModelNameU3Ek__BackingField_10(String_t* value)
	{
		___U3CrenderModelNameU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier(&___U3CrenderModelNameU3Ek__BackingField_10, value);
	}
};

struct SteamVR_RenderModel_t2905485978_StaticFields
{
public:
	// System.Collections.Hashtable SteamVR_RenderModel::models
	Hashtable_t909839986 * ___models_11;
	// System.Collections.Hashtable SteamVR_RenderModel::materials
	Hashtable_t909839986 * ___materials_12;

public:
	inline static int32_t get_offset_of_models_11() { return static_cast<int32_t>(offsetof(SteamVR_RenderModel_t2905485978_StaticFields, ___models_11)); }
	inline Hashtable_t909839986 * get_models_11() const { return ___models_11; }
	inline Hashtable_t909839986 ** get_address_of_models_11() { return &___models_11; }
	inline void set_models_11(Hashtable_t909839986 * value)
	{
		___models_11 = value;
		Il2CppCodeGenWriteBarrier(&___models_11, value);
	}

	inline static int32_t get_offset_of_materials_12() { return static_cast<int32_t>(offsetof(SteamVR_RenderModel_t2905485978_StaticFields, ___materials_12)); }
	inline Hashtable_t909839986 * get_materials_12() const { return ___materials_12; }
	inline Hashtable_t909839986 ** get_address_of_materials_12() { return &___materials_12; }
	inline void set_materials_12(Hashtable_t909839986 * value)
	{
		___materials_12 = value;
		Il2CppCodeGenWriteBarrier(&___materials_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
