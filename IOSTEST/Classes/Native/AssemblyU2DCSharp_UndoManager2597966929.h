#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1125654279;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;
// System.Collections.Generic.List`1<UndoManager/PrevTrans>
struct List_1_t3131549365;
// System.Collections.Generic.List`1<UndoManager/RedoTrans>
struct List_1_t2736756800;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UndoManager
struct  UndoManager_t2597966929  : public MonoBehaviour_t1158329972
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UndoManager::strokes
	List_1_t1125654279 * ___strokes_2;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UndoManager::redostrokes
	List_1_t1125654279 * ___redostrokes_3;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UndoManager::del
	List_1_t1125654279 * ___del_4;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UndoManager::redodel
	List_1_t1125654279 * ___redodel_5;
	// System.Collections.Generic.List`1<System.Int32> UndoManager::globalUndo
	List_1_t1440998580 * ___globalUndo_6;
	// System.Collections.Generic.List`1<System.Int32> UndoManager::globalRedo
	List_1_t1440998580 * ___globalRedo_7;
	// UnityEngine.GameObject UndoManager::redoButton
	GameObject_t1756533147 * ___redoButton_8;
	// UnityEngine.GameObject UndoManager::redotButton
	GameObject_t1756533147 * ___redotButton_9;
	// UnityEngine.Transform UndoManager::meshexporter
	Transform_t3275118058 * ___meshexporter_10;
	// UnityEngine.GameObject UndoManager::tempG
	GameObject_t1756533147 * ___tempG_11;
	// System.Collections.Generic.List`1<UndoManager/PrevTrans> UndoManager::prevTrans
	List_1_t3131549365 * ___prevTrans_12;
	// System.Collections.Generic.List`1<UndoManager/RedoTrans> UndoManager::redoTrans
	List_1_t2736756800 * ___redoTrans_13;

public:
	inline static int32_t get_offset_of_strokes_2() { return static_cast<int32_t>(offsetof(UndoManager_t2597966929, ___strokes_2)); }
	inline List_1_t1125654279 * get_strokes_2() const { return ___strokes_2; }
	inline List_1_t1125654279 ** get_address_of_strokes_2() { return &___strokes_2; }
	inline void set_strokes_2(List_1_t1125654279 * value)
	{
		___strokes_2 = value;
		Il2CppCodeGenWriteBarrier(&___strokes_2, value);
	}

	inline static int32_t get_offset_of_redostrokes_3() { return static_cast<int32_t>(offsetof(UndoManager_t2597966929, ___redostrokes_3)); }
	inline List_1_t1125654279 * get_redostrokes_3() const { return ___redostrokes_3; }
	inline List_1_t1125654279 ** get_address_of_redostrokes_3() { return &___redostrokes_3; }
	inline void set_redostrokes_3(List_1_t1125654279 * value)
	{
		___redostrokes_3 = value;
		Il2CppCodeGenWriteBarrier(&___redostrokes_3, value);
	}

	inline static int32_t get_offset_of_del_4() { return static_cast<int32_t>(offsetof(UndoManager_t2597966929, ___del_4)); }
	inline List_1_t1125654279 * get_del_4() const { return ___del_4; }
	inline List_1_t1125654279 ** get_address_of_del_4() { return &___del_4; }
	inline void set_del_4(List_1_t1125654279 * value)
	{
		___del_4 = value;
		Il2CppCodeGenWriteBarrier(&___del_4, value);
	}

	inline static int32_t get_offset_of_redodel_5() { return static_cast<int32_t>(offsetof(UndoManager_t2597966929, ___redodel_5)); }
	inline List_1_t1125654279 * get_redodel_5() const { return ___redodel_5; }
	inline List_1_t1125654279 ** get_address_of_redodel_5() { return &___redodel_5; }
	inline void set_redodel_5(List_1_t1125654279 * value)
	{
		___redodel_5 = value;
		Il2CppCodeGenWriteBarrier(&___redodel_5, value);
	}

	inline static int32_t get_offset_of_globalUndo_6() { return static_cast<int32_t>(offsetof(UndoManager_t2597966929, ___globalUndo_6)); }
	inline List_1_t1440998580 * get_globalUndo_6() const { return ___globalUndo_6; }
	inline List_1_t1440998580 ** get_address_of_globalUndo_6() { return &___globalUndo_6; }
	inline void set_globalUndo_6(List_1_t1440998580 * value)
	{
		___globalUndo_6 = value;
		Il2CppCodeGenWriteBarrier(&___globalUndo_6, value);
	}

	inline static int32_t get_offset_of_globalRedo_7() { return static_cast<int32_t>(offsetof(UndoManager_t2597966929, ___globalRedo_7)); }
	inline List_1_t1440998580 * get_globalRedo_7() const { return ___globalRedo_7; }
	inline List_1_t1440998580 ** get_address_of_globalRedo_7() { return &___globalRedo_7; }
	inline void set_globalRedo_7(List_1_t1440998580 * value)
	{
		___globalRedo_7 = value;
		Il2CppCodeGenWriteBarrier(&___globalRedo_7, value);
	}

	inline static int32_t get_offset_of_redoButton_8() { return static_cast<int32_t>(offsetof(UndoManager_t2597966929, ___redoButton_8)); }
	inline GameObject_t1756533147 * get_redoButton_8() const { return ___redoButton_8; }
	inline GameObject_t1756533147 ** get_address_of_redoButton_8() { return &___redoButton_8; }
	inline void set_redoButton_8(GameObject_t1756533147 * value)
	{
		___redoButton_8 = value;
		Il2CppCodeGenWriteBarrier(&___redoButton_8, value);
	}

	inline static int32_t get_offset_of_redotButton_9() { return static_cast<int32_t>(offsetof(UndoManager_t2597966929, ___redotButton_9)); }
	inline GameObject_t1756533147 * get_redotButton_9() const { return ___redotButton_9; }
	inline GameObject_t1756533147 ** get_address_of_redotButton_9() { return &___redotButton_9; }
	inline void set_redotButton_9(GameObject_t1756533147 * value)
	{
		___redotButton_9 = value;
		Il2CppCodeGenWriteBarrier(&___redotButton_9, value);
	}

	inline static int32_t get_offset_of_meshexporter_10() { return static_cast<int32_t>(offsetof(UndoManager_t2597966929, ___meshexporter_10)); }
	inline Transform_t3275118058 * get_meshexporter_10() const { return ___meshexporter_10; }
	inline Transform_t3275118058 ** get_address_of_meshexporter_10() { return &___meshexporter_10; }
	inline void set_meshexporter_10(Transform_t3275118058 * value)
	{
		___meshexporter_10 = value;
		Il2CppCodeGenWriteBarrier(&___meshexporter_10, value);
	}

	inline static int32_t get_offset_of_tempG_11() { return static_cast<int32_t>(offsetof(UndoManager_t2597966929, ___tempG_11)); }
	inline GameObject_t1756533147 * get_tempG_11() const { return ___tempG_11; }
	inline GameObject_t1756533147 ** get_address_of_tempG_11() { return &___tempG_11; }
	inline void set_tempG_11(GameObject_t1756533147 * value)
	{
		___tempG_11 = value;
		Il2CppCodeGenWriteBarrier(&___tempG_11, value);
	}

	inline static int32_t get_offset_of_prevTrans_12() { return static_cast<int32_t>(offsetof(UndoManager_t2597966929, ___prevTrans_12)); }
	inline List_1_t3131549365 * get_prevTrans_12() const { return ___prevTrans_12; }
	inline List_1_t3131549365 ** get_address_of_prevTrans_12() { return &___prevTrans_12; }
	inline void set_prevTrans_12(List_1_t3131549365 * value)
	{
		___prevTrans_12 = value;
		Il2CppCodeGenWriteBarrier(&___prevTrans_12, value);
	}

	inline static int32_t get_offset_of_redoTrans_13() { return static_cast<int32_t>(offsetof(UndoManager_t2597966929, ___redoTrans_13)); }
	inline List_1_t2736756800 * get_redoTrans_13() const { return ___redoTrans_13; }
	inline List_1_t2736756800 ** get_address_of_redoTrans_13() { return &___redoTrans_13; }
	inline void set_redoTrans_13(List_1_t2736756800 * value)
	{
		___redoTrans_13 = value;
		Il2CppCodeGenWriteBarrier(&___redoTrans_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
