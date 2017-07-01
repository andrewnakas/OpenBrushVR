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
// UnityEngine.UI.Image
struct Image_t2042527209;
// BrushManager
struct BrushManager_t3700771555;
// UndoManager
struct UndoManager_t2597966929;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ToolManager
struct  ToolManager_t1959626337  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject ToolManager::con
	GameObject_t1756533147 * ___con_2;
	// UnityEngine.UI.Text ToolManager::teltext
	Text_t356221433 * ___teltext_3;
	// UnityEngine.GameObject ToolManager::laser
	GameObject_t1756533147 * ___laser_6;
	// UnityEngine.UI.Image ToolManager::teleportbutton
	Image_t2042527209 * ___teleportbutton_7;
	// BrushManager ToolManager::brusher
	BrushManager_t3700771555 * ___brusher_8;
	// UnityEngine.GameObject ToolManager::cursor
	GameObject_t1756533147 * ___cursor_9;
	// UnityEngine.UI.Text ToolManager::retexturetxt
	Text_t356221433 * ___retexturetxt_10;
	// System.Boolean ToolManager::isGripped
	bool ___isGripped_11;
	// UnityEngine.GameObject ToolManager::lastSelGameObject
	GameObject_t1756533147 * ___lastSelGameObject_13;
	// UndoManager ToolManager::Undoer
	UndoManager_t2597966929 * ___Undoer_14;
	// UnityEngine.GameObject ToolManager::eportmesh
	GameObject_t1756533147 * ___eportmesh_15;

public:
	inline static int32_t get_offset_of_con_2() { return static_cast<int32_t>(offsetof(ToolManager_t1959626337, ___con_2)); }
	inline GameObject_t1756533147 * get_con_2() const { return ___con_2; }
	inline GameObject_t1756533147 ** get_address_of_con_2() { return &___con_2; }
	inline void set_con_2(GameObject_t1756533147 * value)
	{
		___con_2 = value;
		Il2CppCodeGenWriteBarrier(&___con_2, value);
	}

	inline static int32_t get_offset_of_teltext_3() { return static_cast<int32_t>(offsetof(ToolManager_t1959626337, ___teltext_3)); }
	inline Text_t356221433 * get_teltext_3() const { return ___teltext_3; }
	inline Text_t356221433 ** get_address_of_teltext_3() { return &___teltext_3; }
	inline void set_teltext_3(Text_t356221433 * value)
	{
		___teltext_3 = value;
		Il2CppCodeGenWriteBarrier(&___teltext_3, value);
	}

	inline static int32_t get_offset_of_laser_6() { return static_cast<int32_t>(offsetof(ToolManager_t1959626337, ___laser_6)); }
	inline GameObject_t1756533147 * get_laser_6() const { return ___laser_6; }
	inline GameObject_t1756533147 ** get_address_of_laser_6() { return &___laser_6; }
	inline void set_laser_6(GameObject_t1756533147 * value)
	{
		___laser_6 = value;
		Il2CppCodeGenWriteBarrier(&___laser_6, value);
	}

	inline static int32_t get_offset_of_teleportbutton_7() { return static_cast<int32_t>(offsetof(ToolManager_t1959626337, ___teleportbutton_7)); }
	inline Image_t2042527209 * get_teleportbutton_7() const { return ___teleportbutton_7; }
	inline Image_t2042527209 ** get_address_of_teleportbutton_7() { return &___teleportbutton_7; }
	inline void set_teleportbutton_7(Image_t2042527209 * value)
	{
		___teleportbutton_7 = value;
		Il2CppCodeGenWriteBarrier(&___teleportbutton_7, value);
	}

	inline static int32_t get_offset_of_brusher_8() { return static_cast<int32_t>(offsetof(ToolManager_t1959626337, ___brusher_8)); }
	inline BrushManager_t3700771555 * get_brusher_8() const { return ___brusher_8; }
	inline BrushManager_t3700771555 ** get_address_of_brusher_8() { return &___brusher_8; }
	inline void set_brusher_8(BrushManager_t3700771555 * value)
	{
		___brusher_8 = value;
		Il2CppCodeGenWriteBarrier(&___brusher_8, value);
	}

	inline static int32_t get_offset_of_cursor_9() { return static_cast<int32_t>(offsetof(ToolManager_t1959626337, ___cursor_9)); }
	inline GameObject_t1756533147 * get_cursor_9() const { return ___cursor_9; }
	inline GameObject_t1756533147 ** get_address_of_cursor_9() { return &___cursor_9; }
	inline void set_cursor_9(GameObject_t1756533147 * value)
	{
		___cursor_9 = value;
		Il2CppCodeGenWriteBarrier(&___cursor_9, value);
	}

	inline static int32_t get_offset_of_retexturetxt_10() { return static_cast<int32_t>(offsetof(ToolManager_t1959626337, ___retexturetxt_10)); }
	inline Text_t356221433 * get_retexturetxt_10() const { return ___retexturetxt_10; }
	inline Text_t356221433 ** get_address_of_retexturetxt_10() { return &___retexturetxt_10; }
	inline void set_retexturetxt_10(Text_t356221433 * value)
	{
		___retexturetxt_10 = value;
		Il2CppCodeGenWriteBarrier(&___retexturetxt_10, value);
	}

	inline static int32_t get_offset_of_isGripped_11() { return static_cast<int32_t>(offsetof(ToolManager_t1959626337, ___isGripped_11)); }
	inline bool get_isGripped_11() const { return ___isGripped_11; }
	inline bool* get_address_of_isGripped_11() { return &___isGripped_11; }
	inline void set_isGripped_11(bool value)
	{
		___isGripped_11 = value;
	}

	inline static int32_t get_offset_of_lastSelGameObject_13() { return static_cast<int32_t>(offsetof(ToolManager_t1959626337, ___lastSelGameObject_13)); }
	inline GameObject_t1756533147 * get_lastSelGameObject_13() const { return ___lastSelGameObject_13; }
	inline GameObject_t1756533147 ** get_address_of_lastSelGameObject_13() { return &___lastSelGameObject_13; }
	inline void set_lastSelGameObject_13(GameObject_t1756533147 * value)
	{
		___lastSelGameObject_13 = value;
		Il2CppCodeGenWriteBarrier(&___lastSelGameObject_13, value);
	}

	inline static int32_t get_offset_of_Undoer_14() { return static_cast<int32_t>(offsetof(ToolManager_t1959626337, ___Undoer_14)); }
	inline UndoManager_t2597966929 * get_Undoer_14() const { return ___Undoer_14; }
	inline UndoManager_t2597966929 ** get_address_of_Undoer_14() { return &___Undoer_14; }
	inline void set_Undoer_14(UndoManager_t2597966929 * value)
	{
		___Undoer_14 = value;
		Il2CppCodeGenWriteBarrier(&___Undoer_14, value);
	}

	inline static int32_t get_offset_of_eportmesh_15() { return static_cast<int32_t>(offsetof(ToolManager_t1959626337, ___eportmesh_15)); }
	inline GameObject_t1756533147 * get_eportmesh_15() const { return ___eportmesh_15; }
	inline GameObject_t1756533147 ** get_address_of_eportmesh_15() { return &___eportmesh_15; }
	inline void set_eportmesh_15(GameObject_t1756533147 * value)
	{
		___eportmesh_15 = value;
		Il2CppCodeGenWriteBarrier(&___eportmesh_15, value);
	}
};

struct ToolManager_t1959626337_StaticFields
{
public:
	// System.Boolean ToolManager::canteleport
	bool ___canteleport_4;
	// System.Boolean ToolManager::couldteleport
	bool ___couldteleport_5;
	// UnityEngine.GameObject ToolManager::curSelGameObject
	GameObject_t1756533147 * ___curSelGameObject_12;

public:
	inline static int32_t get_offset_of_canteleport_4() { return static_cast<int32_t>(offsetof(ToolManager_t1959626337_StaticFields, ___canteleport_4)); }
	inline bool get_canteleport_4() const { return ___canteleport_4; }
	inline bool* get_address_of_canteleport_4() { return &___canteleport_4; }
	inline void set_canteleport_4(bool value)
	{
		___canteleport_4 = value;
	}

	inline static int32_t get_offset_of_couldteleport_5() { return static_cast<int32_t>(offsetof(ToolManager_t1959626337_StaticFields, ___couldteleport_5)); }
	inline bool get_couldteleport_5() const { return ___couldteleport_5; }
	inline bool* get_address_of_couldteleport_5() { return &___couldteleport_5; }
	inline void set_couldteleport_5(bool value)
	{
		___couldteleport_5 = value;
	}

	inline static int32_t get_offset_of_curSelGameObject_12() { return static_cast<int32_t>(offsetof(ToolManager_t1959626337_StaticFields, ___curSelGameObject_12)); }
	inline GameObject_t1756533147 * get_curSelGameObject_12() const { return ___curSelGameObject_12; }
	inline GameObject_t1756533147 ** get_address_of_curSelGameObject_12() { return &___curSelGameObject_12; }
	inline void set_curSelGameObject_12(GameObject_t1756533147 * value)
	{
		___curSelGameObject_12 = value;
		Il2CppCodeGenWriteBarrier(&___curSelGameObject_12, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
