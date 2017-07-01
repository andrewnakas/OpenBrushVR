#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_ScriptableObject1975622470.h"

// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents
struct PlayerEditorConnectionEvents_t2252784345;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t1440998580;
// UnityEngine.Networking.PlayerConnection.PlayerConnection
struct PlayerConnection_t3517219175;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.PlayerConnection.PlayerConnection
struct  PlayerConnection_t3517219175  : public ScriptableObject_t1975622470
{
public:
	// UnityEngine.Networking.PlayerConnection.PlayerEditorConnectionEvents UnityEngine.Networking.PlayerConnection.PlayerConnection::m_PlayerEditorConnectionEvents
	PlayerEditorConnectionEvents_t2252784345 * ___m_PlayerEditorConnectionEvents_2;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.Networking.PlayerConnection.PlayerConnection::m_connectedPlayers
	List_1_t1440998580 * ___m_connectedPlayers_3;

public:
	inline static int32_t get_offset_of_m_PlayerEditorConnectionEvents_2() { return static_cast<int32_t>(offsetof(PlayerConnection_t3517219175, ___m_PlayerEditorConnectionEvents_2)); }
	inline PlayerEditorConnectionEvents_t2252784345 * get_m_PlayerEditorConnectionEvents_2() const { return ___m_PlayerEditorConnectionEvents_2; }
	inline PlayerEditorConnectionEvents_t2252784345 ** get_address_of_m_PlayerEditorConnectionEvents_2() { return &___m_PlayerEditorConnectionEvents_2; }
	inline void set_m_PlayerEditorConnectionEvents_2(PlayerEditorConnectionEvents_t2252784345 * value)
	{
		___m_PlayerEditorConnectionEvents_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_PlayerEditorConnectionEvents_2, value);
	}

	inline static int32_t get_offset_of_m_connectedPlayers_3() { return static_cast<int32_t>(offsetof(PlayerConnection_t3517219175, ___m_connectedPlayers_3)); }
	inline List_1_t1440998580 * get_m_connectedPlayers_3() const { return ___m_connectedPlayers_3; }
	inline List_1_t1440998580 ** get_address_of_m_connectedPlayers_3() { return &___m_connectedPlayers_3; }
	inline void set_m_connectedPlayers_3(List_1_t1440998580 * value)
	{
		___m_connectedPlayers_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_connectedPlayers_3, value);
	}
};

struct PlayerConnection_t3517219175_StaticFields
{
public:
	// UnityEngine.Networking.PlayerConnection.PlayerConnection UnityEngine.Networking.PlayerConnection.PlayerConnection::s_Instance
	PlayerConnection_t3517219175 * ___s_Instance_4;

public:
	inline static int32_t get_offset_of_s_Instance_4() { return static_cast<int32_t>(offsetof(PlayerConnection_t3517219175_StaticFields, ___s_Instance_4)); }
	inline PlayerConnection_t3517219175 * get_s_Instance_4() const { return ___s_Instance_4; }
	inline PlayerConnection_t3517219175 ** get_address_of_s_Instance_4() { return &___s_Instance_4; }
	inline void set_s_Instance_4(PlayerConnection_t3517219175 * value)
	{
		___s_Instance_4 = value;
		Il2CppCodeGenWriteBarrier(&___s_Instance_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
