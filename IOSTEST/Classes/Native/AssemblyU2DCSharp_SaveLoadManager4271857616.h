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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// SaveInjector[]
struct SaveInjectorU5BU5D_t2738950776;
// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SaveLoadManager
struct  SaveLoadManager_t4271857616  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject SaveLoadManager::objectsParent
	GameObject_t1756533147 * ___objectsParent_2;
	// UnityEngine.GameObject[] SaveLoadManager::strokeObjects
	GameObjectU5BU5D_t3057952154* ___strokeObjects_3;
	// SaveInjector[] SaveLoadManager::SaveFiles
	SaveInjectorU5BU5D_t2738950776* ___SaveFiles_4;
	// System.Byte[] SaveLoadManager::data
	ByteU5BU5D_t3397334013* ___data_5;

public:
	inline static int32_t get_offset_of_objectsParent_2() { return static_cast<int32_t>(offsetof(SaveLoadManager_t4271857616, ___objectsParent_2)); }
	inline GameObject_t1756533147 * get_objectsParent_2() const { return ___objectsParent_2; }
	inline GameObject_t1756533147 ** get_address_of_objectsParent_2() { return &___objectsParent_2; }
	inline void set_objectsParent_2(GameObject_t1756533147 * value)
	{
		___objectsParent_2 = value;
		Il2CppCodeGenWriteBarrier(&___objectsParent_2, value);
	}

	inline static int32_t get_offset_of_strokeObjects_3() { return static_cast<int32_t>(offsetof(SaveLoadManager_t4271857616, ___strokeObjects_3)); }
	inline GameObjectU5BU5D_t3057952154* get_strokeObjects_3() const { return ___strokeObjects_3; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_strokeObjects_3() { return &___strokeObjects_3; }
	inline void set_strokeObjects_3(GameObjectU5BU5D_t3057952154* value)
	{
		___strokeObjects_3 = value;
		Il2CppCodeGenWriteBarrier(&___strokeObjects_3, value);
	}

	inline static int32_t get_offset_of_SaveFiles_4() { return static_cast<int32_t>(offsetof(SaveLoadManager_t4271857616, ___SaveFiles_4)); }
	inline SaveInjectorU5BU5D_t2738950776* get_SaveFiles_4() const { return ___SaveFiles_4; }
	inline SaveInjectorU5BU5D_t2738950776** get_address_of_SaveFiles_4() { return &___SaveFiles_4; }
	inline void set_SaveFiles_4(SaveInjectorU5BU5D_t2738950776* value)
	{
		___SaveFiles_4 = value;
		Il2CppCodeGenWriteBarrier(&___SaveFiles_4, value);
	}

	inline static int32_t get_offset_of_data_5() { return static_cast<int32_t>(offsetof(SaveLoadManager_t4271857616, ___data_5)); }
	inline ByteU5BU5D_t3397334013* get_data_5() const { return ___data_5; }
	inline ByteU5BU5D_t3397334013** get_address_of_data_5() { return &___data_5; }
	inline void set_data_5(ByteU5BU5D_t3397334013* value)
	{
		___data_5 = value;
		Il2CppCodeGenWriteBarrier(&___data_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
