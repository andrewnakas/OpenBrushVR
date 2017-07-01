#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Core_Mono_Security_Cryptography_SymmetricTr1394030013.h"

// System.UInt32[]
struct UInt32U5BU5D_t59386216;
// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AesTransform
struct  AesTransform_t3733702461  : public SymmetricTransform_t1394030014
{
public:
	// System.UInt32[] System.Security.Cryptography.AesTransform::expandedKey
	UInt32U5BU5D_t59386216* ___expandedKey_12;
	// System.Int32 System.Security.Cryptography.AesTransform::Nk
	int32_t ___Nk_13;
	// System.Int32 System.Security.Cryptography.AesTransform::Nr
	int32_t ___Nr_14;

public:
	inline static int32_t get_offset_of_expandedKey_12() { return static_cast<int32_t>(offsetof(AesTransform_t3733702461, ___expandedKey_12)); }
	inline UInt32U5BU5D_t59386216* get_expandedKey_12() const { return ___expandedKey_12; }
	inline UInt32U5BU5D_t59386216** get_address_of_expandedKey_12() { return &___expandedKey_12; }
	inline void set_expandedKey_12(UInt32U5BU5D_t59386216* value)
	{
		___expandedKey_12 = value;
		Il2CppCodeGenWriteBarrier(&___expandedKey_12, value);
	}

	inline static int32_t get_offset_of_Nk_13() { return static_cast<int32_t>(offsetof(AesTransform_t3733702461, ___Nk_13)); }
	inline int32_t get_Nk_13() const { return ___Nk_13; }
	inline int32_t* get_address_of_Nk_13() { return &___Nk_13; }
	inline void set_Nk_13(int32_t value)
	{
		___Nk_13 = value;
	}

	inline static int32_t get_offset_of_Nr_14() { return static_cast<int32_t>(offsetof(AesTransform_t3733702461, ___Nr_14)); }
	inline int32_t get_Nr_14() const { return ___Nr_14; }
	inline int32_t* get_address_of_Nr_14() { return &___Nr_14; }
	inline void set_Nr_14(int32_t value)
	{
		___Nr_14 = value;
	}
};

struct AesTransform_t3733702461_StaticFields
{
public:
	// System.UInt32[] System.Security.Cryptography.AesTransform::Rcon
	UInt32U5BU5D_t59386216* ___Rcon_15;
	// System.Byte[] System.Security.Cryptography.AesTransform::SBox
	ByteU5BU5D_t3397334013* ___SBox_16;
	// System.Byte[] System.Security.Cryptography.AesTransform::iSBox
	ByteU5BU5D_t3397334013* ___iSBox_17;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T0
	UInt32U5BU5D_t59386216* ___T0_18;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T1
	UInt32U5BU5D_t59386216* ___T1_19;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T2
	UInt32U5BU5D_t59386216* ___T2_20;
	// System.UInt32[] System.Security.Cryptography.AesTransform::T3
	UInt32U5BU5D_t59386216* ___T3_21;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT0
	UInt32U5BU5D_t59386216* ___iT0_22;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT1
	UInt32U5BU5D_t59386216* ___iT1_23;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT2
	UInt32U5BU5D_t59386216* ___iT2_24;
	// System.UInt32[] System.Security.Cryptography.AesTransform::iT3
	UInt32U5BU5D_t59386216* ___iT3_25;

public:
	inline static int32_t get_offset_of_Rcon_15() { return static_cast<int32_t>(offsetof(AesTransform_t3733702461_StaticFields, ___Rcon_15)); }
	inline UInt32U5BU5D_t59386216* get_Rcon_15() const { return ___Rcon_15; }
	inline UInt32U5BU5D_t59386216** get_address_of_Rcon_15() { return &___Rcon_15; }
	inline void set_Rcon_15(UInt32U5BU5D_t59386216* value)
	{
		___Rcon_15 = value;
		Il2CppCodeGenWriteBarrier(&___Rcon_15, value);
	}

	inline static int32_t get_offset_of_SBox_16() { return static_cast<int32_t>(offsetof(AesTransform_t3733702461_StaticFields, ___SBox_16)); }
	inline ByteU5BU5D_t3397334013* get_SBox_16() const { return ___SBox_16; }
	inline ByteU5BU5D_t3397334013** get_address_of_SBox_16() { return &___SBox_16; }
	inline void set_SBox_16(ByteU5BU5D_t3397334013* value)
	{
		___SBox_16 = value;
		Il2CppCodeGenWriteBarrier(&___SBox_16, value);
	}

	inline static int32_t get_offset_of_iSBox_17() { return static_cast<int32_t>(offsetof(AesTransform_t3733702461_StaticFields, ___iSBox_17)); }
	inline ByteU5BU5D_t3397334013* get_iSBox_17() const { return ___iSBox_17; }
	inline ByteU5BU5D_t3397334013** get_address_of_iSBox_17() { return &___iSBox_17; }
	inline void set_iSBox_17(ByteU5BU5D_t3397334013* value)
	{
		___iSBox_17 = value;
		Il2CppCodeGenWriteBarrier(&___iSBox_17, value);
	}

	inline static int32_t get_offset_of_T0_18() { return static_cast<int32_t>(offsetof(AesTransform_t3733702461_StaticFields, ___T0_18)); }
	inline UInt32U5BU5D_t59386216* get_T0_18() const { return ___T0_18; }
	inline UInt32U5BU5D_t59386216** get_address_of_T0_18() { return &___T0_18; }
	inline void set_T0_18(UInt32U5BU5D_t59386216* value)
	{
		___T0_18 = value;
		Il2CppCodeGenWriteBarrier(&___T0_18, value);
	}

	inline static int32_t get_offset_of_T1_19() { return static_cast<int32_t>(offsetof(AesTransform_t3733702461_StaticFields, ___T1_19)); }
	inline UInt32U5BU5D_t59386216* get_T1_19() const { return ___T1_19; }
	inline UInt32U5BU5D_t59386216** get_address_of_T1_19() { return &___T1_19; }
	inline void set_T1_19(UInt32U5BU5D_t59386216* value)
	{
		___T1_19 = value;
		Il2CppCodeGenWriteBarrier(&___T1_19, value);
	}

	inline static int32_t get_offset_of_T2_20() { return static_cast<int32_t>(offsetof(AesTransform_t3733702461_StaticFields, ___T2_20)); }
	inline UInt32U5BU5D_t59386216* get_T2_20() const { return ___T2_20; }
	inline UInt32U5BU5D_t59386216** get_address_of_T2_20() { return &___T2_20; }
	inline void set_T2_20(UInt32U5BU5D_t59386216* value)
	{
		___T2_20 = value;
		Il2CppCodeGenWriteBarrier(&___T2_20, value);
	}

	inline static int32_t get_offset_of_T3_21() { return static_cast<int32_t>(offsetof(AesTransform_t3733702461_StaticFields, ___T3_21)); }
	inline UInt32U5BU5D_t59386216* get_T3_21() const { return ___T3_21; }
	inline UInt32U5BU5D_t59386216** get_address_of_T3_21() { return &___T3_21; }
	inline void set_T3_21(UInt32U5BU5D_t59386216* value)
	{
		___T3_21 = value;
		Il2CppCodeGenWriteBarrier(&___T3_21, value);
	}

	inline static int32_t get_offset_of_iT0_22() { return static_cast<int32_t>(offsetof(AesTransform_t3733702461_StaticFields, ___iT0_22)); }
	inline UInt32U5BU5D_t59386216* get_iT0_22() const { return ___iT0_22; }
	inline UInt32U5BU5D_t59386216** get_address_of_iT0_22() { return &___iT0_22; }
	inline void set_iT0_22(UInt32U5BU5D_t59386216* value)
	{
		___iT0_22 = value;
		Il2CppCodeGenWriteBarrier(&___iT0_22, value);
	}

	inline static int32_t get_offset_of_iT1_23() { return static_cast<int32_t>(offsetof(AesTransform_t3733702461_StaticFields, ___iT1_23)); }
	inline UInt32U5BU5D_t59386216* get_iT1_23() const { return ___iT1_23; }
	inline UInt32U5BU5D_t59386216** get_address_of_iT1_23() { return &___iT1_23; }
	inline void set_iT1_23(UInt32U5BU5D_t59386216* value)
	{
		___iT1_23 = value;
		Il2CppCodeGenWriteBarrier(&___iT1_23, value);
	}

	inline static int32_t get_offset_of_iT2_24() { return static_cast<int32_t>(offsetof(AesTransform_t3733702461_StaticFields, ___iT2_24)); }
	inline UInt32U5BU5D_t59386216* get_iT2_24() const { return ___iT2_24; }
	inline UInt32U5BU5D_t59386216** get_address_of_iT2_24() { return &___iT2_24; }
	inline void set_iT2_24(UInt32U5BU5D_t59386216* value)
	{
		___iT2_24 = value;
		Il2CppCodeGenWriteBarrier(&___iT2_24, value);
	}

	inline static int32_t get_offset_of_iT3_25() { return static_cast<int32_t>(offsetof(AesTransform_t3733702461_StaticFields, ___iT3_25)); }
	inline UInt32U5BU5D_t59386216* get_iT3_25() const { return ___iT3_25; }
	inline UInt32U5BU5D_t59386216** get_address_of_iT3_25() { return &___iT3_25; }
	inline void set_iT3_25(UInt32U5BU5D_t59386216* value)
	{
		___iT3_25 = value;
		Il2CppCodeGenWriteBarrier(&___iT3_25, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
