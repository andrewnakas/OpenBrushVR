#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_Mono_Security_Cryptography_SymmetricTrans1394030013.h"

// System.UInt32[]
struct UInt32U5BU5D_t59386216;
// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.RijndaelTransform
struct  RijndaelTransform_t1067822295  : public SymmetricTransform_t1394030013
{
public:
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::expandedKey
	UInt32U5BU5D_t59386216* ___expandedKey_12;
	// System.Int32 System.Security.Cryptography.RijndaelTransform::Nb
	int32_t ___Nb_13;
	// System.Int32 System.Security.Cryptography.RijndaelTransform::Nk
	int32_t ___Nk_14;
	// System.Int32 System.Security.Cryptography.RijndaelTransform::Nr
	int32_t ___Nr_15;

public:
	inline static int32_t get_offset_of_expandedKey_12() { return static_cast<int32_t>(offsetof(RijndaelTransform_t1067822295, ___expandedKey_12)); }
	inline UInt32U5BU5D_t59386216* get_expandedKey_12() const { return ___expandedKey_12; }
	inline UInt32U5BU5D_t59386216** get_address_of_expandedKey_12() { return &___expandedKey_12; }
	inline void set_expandedKey_12(UInt32U5BU5D_t59386216* value)
	{
		___expandedKey_12 = value;
		Il2CppCodeGenWriteBarrier(&___expandedKey_12, value);
	}

	inline static int32_t get_offset_of_Nb_13() { return static_cast<int32_t>(offsetof(RijndaelTransform_t1067822295, ___Nb_13)); }
	inline int32_t get_Nb_13() const { return ___Nb_13; }
	inline int32_t* get_address_of_Nb_13() { return &___Nb_13; }
	inline void set_Nb_13(int32_t value)
	{
		___Nb_13 = value;
	}

	inline static int32_t get_offset_of_Nk_14() { return static_cast<int32_t>(offsetof(RijndaelTransform_t1067822295, ___Nk_14)); }
	inline int32_t get_Nk_14() const { return ___Nk_14; }
	inline int32_t* get_address_of_Nk_14() { return &___Nk_14; }
	inline void set_Nk_14(int32_t value)
	{
		___Nk_14 = value;
	}

	inline static int32_t get_offset_of_Nr_15() { return static_cast<int32_t>(offsetof(RijndaelTransform_t1067822295, ___Nr_15)); }
	inline int32_t get_Nr_15() const { return ___Nr_15; }
	inline int32_t* get_address_of_Nr_15() { return &___Nr_15; }
	inline void set_Nr_15(int32_t value)
	{
		___Nr_15 = value;
	}
};

struct RijndaelTransform_t1067822295_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::Rcon
	UInt32U5BU5D_t59386216* ___Rcon_16;
	// System.Byte[] System.Security.Cryptography.RijndaelTransform::SBox
	ByteU5BU5D_t3397334013* ___SBox_17;
	// System.Byte[] System.Security.Cryptography.RijndaelTransform::iSBox
	ByteU5BU5D_t3397334013* ___iSBox_18;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::T0
	UInt32U5BU5D_t59386216* ___T0_19;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::T1
	UInt32U5BU5D_t59386216* ___T1_20;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::T2
	UInt32U5BU5D_t59386216* ___T2_21;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::T3
	UInt32U5BU5D_t59386216* ___T3_22;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::iT0
	UInt32U5BU5D_t59386216* ___iT0_23;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::iT1
	UInt32U5BU5D_t59386216* ___iT1_24;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::iT2
	UInt32U5BU5D_t59386216* ___iT2_25;
	// System.UInt32[] System.Security.Cryptography.RijndaelTransform::iT3
	UInt32U5BU5D_t59386216* ___iT3_26;

public:
	inline static int32_t get_offset_of_Rcon_16() { return static_cast<int32_t>(offsetof(RijndaelTransform_t1067822295_StaticFields, ___Rcon_16)); }
	inline UInt32U5BU5D_t59386216* get_Rcon_16() const { return ___Rcon_16; }
	inline UInt32U5BU5D_t59386216** get_address_of_Rcon_16() { return &___Rcon_16; }
	inline void set_Rcon_16(UInt32U5BU5D_t59386216* value)
	{
		___Rcon_16 = value;
		Il2CppCodeGenWriteBarrier(&___Rcon_16, value);
	}

	inline static int32_t get_offset_of_SBox_17() { return static_cast<int32_t>(offsetof(RijndaelTransform_t1067822295_StaticFields, ___SBox_17)); }
	inline ByteU5BU5D_t3397334013* get_SBox_17() const { return ___SBox_17; }
	inline ByteU5BU5D_t3397334013** get_address_of_SBox_17() { return &___SBox_17; }
	inline void set_SBox_17(ByteU5BU5D_t3397334013* value)
	{
		___SBox_17 = value;
		Il2CppCodeGenWriteBarrier(&___SBox_17, value);
	}

	inline static int32_t get_offset_of_iSBox_18() { return static_cast<int32_t>(offsetof(RijndaelTransform_t1067822295_StaticFields, ___iSBox_18)); }
	inline ByteU5BU5D_t3397334013* get_iSBox_18() const { return ___iSBox_18; }
	inline ByteU5BU5D_t3397334013** get_address_of_iSBox_18() { return &___iSBox_18; }
	inline void set_iSBox_18(ByteU5BU5D_t3397334013* value)
	{
		___iSBox_18 = value;
		Il2CppCodeGenWriteBarrier(&___iSBox_18, value);
	}

	inline static int32_t get_offset_of_T0_19() { return static_cast<int32_t>(offsetof(RijndaelTransform_t1067822295_StaticFields, ___T0_19)); }
	inline UInt32U5BU5D_t59386216* get_T0_19() const { return ___T0_19; }
	inline UInt32U5BU5D_t59386216** get_address_of_T0_19() { return &___T0_19; }
	inline void set_T0_19(UInt32U5BU5D_t59386216* value)
	{
		___T0_19 = value;
		Il2CppCodeGenWriteBarrier(&___T0_19, value);
	}

	inline static int32_t get_offset_of_T1_20() { return static_cast<int32_t>(offsetof(RijndaelTransform_t1067822295_StaticFields, ___T1_20)); }
	inline UInt32U5BU5D_t59386216* get_T1_20() const { return ___T1_20; }
	inline UInt32U5BU5D_t59386216** get_address_of_T1_20() { return &___T1_20; }
	inline void set_T1_20(UInt32U5BU5D_t59386216* value)
	{
		___T1_20 = value;
		Il2CppCodeGenWriteBarrier(&___T1_20, value);
	}

	inline static int32_t get_offset_of_T2_21() { return static_cast<int32_t>(offsetof(RijndaelTransform_t1067822295_StaticFields, ___T2_21)); }
	inline UInt32U5BU5D_t59386216* get_T2_21() const { return ___T2_21; }
	inline UInt32U5BU5D_t59386216** get_address_of_T2_21() { return &___T2_21; }
	inline void set_T2_21(UInt32U5BU5D_t59386216* value)
	{
		___T2_21 = value;
		Il2CppCodeGenWriteBarrier(&___T2_21, value);
	}

	inline static int32_t get_offset_of_T3_22() { return static_cast<int32_t>(offsetof(RijndaelTransform_t1067822295_StaticFields, ___T3_22)); }
	inline UInt32U5BU5D_t59386216* get_T3_22() const { return ___T3_22; }
	inline UInt32U5BU5D_t59386216** get_address_of_T3_22() { return &___T3_22; }
	inline void set_T3_22(UInt32U5BU5D_t59386216* value)
	{
		___T3_22 = value;
		Il2CppCodeGenWriteBarrier(&___T3_22, value);
	}

	inline static int32_t get_offset_of_iT0_23() { return static_cast<int32_t>(offsetof(RijndaelTransform_t1067822295_StaticFields, ___iT0_23)); }
	inline UInt32U5BU5D_t59386216* get_iT0_23() const { return ___iT0_23; }
	inline UInt32U5BU5D_t59386216** get_address_of_iT0_23() { return &___iT0_23; }
	inline void set_iT0_23(UInt32U5BU5D_t59386216* value)
	{
		___iT0_23 = value;
		Il2CppCodeGenWriteBarrier(&___iT0_23, value);
	}

	inline static int32_t get_offset_of_iT1_24() { return static_cast<int32_t>(offsetof(RijndaelTransform_t1067822295_StaticFields, ___iT1_24)); }
	inline UInt32U5BU5D_t59386216* get_iT1_24() const { return ___iT1_24; }
	inline UInt32U5BU5D_t59386216** get_address_of_iT1_24() { return &___iT1_24; }
	inline void set_iT1_24(UInt32U5BU5D_t59386216* value)
	{
		___iT1_24 = value;
		Il2CppCodeGenWriteBarrier(&___iT1_24, value);
	}

	inline static int32_t get_offset_of_iT2_25() { return static_cast<int32_t>(offsetof(RijndaelTransform_t1067822295_StaticFields, ___iT2_25)); }
	inline UInt32U5BU5D_t59386216* get_iT2_25() const { return ___iT2_25; }
	inline UInt32U5BU5D_t59386216** get_address_of_iT2_25() { return &___iT2_25; }
	inline void set_iT2_25(UInt32U5BU5D_t59386216* value)
	{
		___iT2_25 = value;
		Il2CppCodeGenWriteBarrier(&___iT2_25, value);
	}

	inline static int32_t get_offset_of_iT3_26() { return static_cast<int32_t>(offsetof(RijndaelTransform_t1067822295_StaticFields, ___iT3_26)); }
	inline UInt32U5BU5D_t59386216* get_iT3_26() const { return ___iT3_26; }
	inline UInt32U5BU5D_t59386216** get_address_of_iT3_26() { return &___iT3_26; }
	inline void set_iT3_26(UInt32U5BU5D_t59386216* value)
	{
		___iT3_26 = value;
		Il2CppCodeGenWriteBarrier(&___iT3_26, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
