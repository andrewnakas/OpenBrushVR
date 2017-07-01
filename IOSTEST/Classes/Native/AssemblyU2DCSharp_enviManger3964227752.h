#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3123989686;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// enviManger
struct  enviManger_t3964227752  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean enviManger::groundVis
	bool ___groundVis_2;
	// UnityEngine.GameObject enviManger::ground
	GameObject_t1756533147 * ___ground_3;
	// UnityEngine.UI.Text enviManger::groundbutton
	Text_t356221433 * ___groundbutton_4;
	// UnityEngine.Material[] enviManger::Skyboxes
	MaterialU5BU5D_t3123989686* ___Skyboxes_5;
	// System.Int32 enviManger::skyboxint
	int32_t ___skyboxint_6;
	// UnityEngine.UI.Text enviManger::enviormentText
	Text_t356221433 * ___enviormentText_7;

public:
	inline static int32_t get_offset_of_groundVis_2() { return static_cast<int32_t>(offsetof(enviManger_t3964227752, ___groundVis_2)); }
	inline bool get_groundVis_2() const { return ___groundVis_2; }
	inline bool* get_address_of_groundVis_2() { return &___groundVis_2; }
	inline void set_groundVis_2(bool value)
	{
		___groundVis_2 = value;
	}

	inline static int32_t get_offset_of_ground_3() { return static_cast<int32_t>(offsetof(enviManger_t3964227752, ___ground_3)); }
	inline GameObject_t1756533147 * get_ground_3() const { return ___ground_3; }
	inline GameObject_t1756533147 ** get_address_of_ground_3() { return &___ground_3; }
	inline void set_ground_3(GameObject_t1756533147 * value)
	{
		___ground_3 = value;
		Il2CppCodeGenWriteBarrier(&___ground_3, value);
	}

	inline static int32_t get_offset_of_groundbutton_4() { return static_cast<int32_t>(offsetof(enviManger_t3964227752, ___groundbutton_4)); }
	inline Text_t356221433 * get_groundbutton_4() const { return ___groundbutton_4; }
	inline Text_t356221433 ** get_address_of_groundbutton_4() { return &___groundbutton_4; }
	inline void set_groundbutton_4(Text_t356221433 * value)
	{
		___groundbutton_4 = value;
		Il2CppCodeGenWriteBarrier(&___groundbutton_4, value);
	}

	inline static int32_t get_offset_of_Skyboxes_5() { return static_cast<int32_t>(offsetof(enviManger_t3964227752, ___Skyboxes_5)); }
	inline MaterialU5BU5D_t3123989686* get_Skyboxes_5() const { return ___Skyboxes_5; }
	inline MaterialU5BU5D_t3123989686** get_address_of_Skyboxes_5() { return &___Skyboxes_5; }
	inline void set_Skyboxes_5(MaterialU5BU5D_t3123989686* value)
	{
		___Skyboxes_5 = value;
		Il2CppCodeGenWriteBarrier(&___Skyboxes_5, value);
	}

	inline static int32_t get_offset_of_skyboxint_6() { return static_cast<int32_t>(offsetof(enviManger_t3964227752, ___skyboxint_6)); }
	inline int32_t get_skyboxint_6() const { return ___skyboxint_6; }
	inline int32_t* get_address_of_skyboxint_6() { return &___skyboxint_6; }
	inline void set_skyboxint_6(int32_t value)
	{
		___skyboxint_6 = value;
	}

	inline static int32_t get_offset_of_enviormentText_7() { return static_cast<int32_t>(offsetof(enviManger_t3964227752, ___enviormentText_7)); }
	inline Text_t356221433 * get_enviormentText_7() const { return ___enviormentText_7; }
	inline Text_t356221433 ** get_address_of_enviormentText_7() { return &___enviormentText_7; }
	inline void set_enviormentText_7(Text_t356221433 * value)
	{
		___enviormentText_7 = value;
		Il2CppCodeGenWriteBarrier(&___enviormentText_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
