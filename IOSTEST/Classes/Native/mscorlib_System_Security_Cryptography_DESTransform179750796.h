#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_Mono_Security_Cryptography_SymmetricTrans1394030013.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.UInt32[]
struct UInt32U5BU5D_t59386216;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DESTransform
struct  DESTransform_t179750796  : public SymmetricTransform_t1394030013
{
public:
	// System.Byte[] System.Security.Cryptography.DESTransform::keySchedule
	ByteU5BU5D_t3397334013* ___keySchedule_16;
	// System.Byte[] System.Security.Cryptography.DESTransform::byteBuff
	ByteU5BU5D_t3397334013* ___byteBuff_17;
	// System.UInt32[] System.Security.Cryptography.DESTransform::dwordBuff
	UInt32U5BU5D_t59386216* ___dwordBuff_18;

public:
	inline static int32_t get_offset_of_keySchedule_16() { return static_cast<int32_t>(offsetof(DESTransform_t179750796, ___keySchedule_16)); }
	inline ByteU5BU5D_t3397334013* get_keySchedule_16() const { return ___keySchedule_16; }
	inline ByteU5BU5D_t3397334013** get_address_of_keySchedule_16() { return &___keySchedule_16; }
	inline void set_keySchedule_16(ByteU5BU5D_t3397334013* value)
	{
		___keySchedule_16 = value;
		Il2CppCodeGenWriteBarrier(&___keySchedule_16, value);
	}

	inline static int32_t get_offset_of_byteBuff_17() { return static_cast<int32_t>(offsetof(DESTransform_t179750796, ___byteBuff_17)); }
	inline ByteU5BU5D_t3397334013* get_byteBuff_17() const { return ___byteBuff_17; }
	inline ByteU5BU5D_t3397334013** get_address_of_byteBuff_17() { return &___byteBuff_17; }
	inline void set_byteBuff_17(ByteU5BU5D_t3397334013* value)
	{
		___byteBuff_17 = value;
		Il2CppCodeGenWriteBarrier(&___byteBuff_17, value);
	}

	inline static int32_t get_offset_of_dwordBuff_18() { return static_cast<int32_t>(offsetof(DESTransform_t179750796, ___dwordBuff_18)); }
	inline UInt32U5BU5D_t59386216* get_dwordBuff_18() const { return ___dwordBuff_18; }
	inline UInt32U5BU5D_t59386216** get_address_of_dwordBuff_18() { return &___dwordBuff_18; }
	inline void set_dwordBuff_18(UInt32U5BU5D_t59386216* value)
	{
		___dwordBuff_18 = value;
		Il2CppCodeGenWriteBarrier(&___dwordBuff_18, value);
	}
};

struct DESTransform_t179750796_StaticFields
{
public:
	// System.Int32 System.Security.Cryptography.DESTransform::KEY_BIT_SIZE
	int32_t ___KEY_BIT_SIZE_12;
	// System.Int32 System.Security.Cryptography.DESTransform::KEY_BYTE_SIZE
	int32_t ___KEY_BYTE_SIZE_13;
	// System.Int32 System.Security.Cryptography.DESTransform::BLOCK_BIT_SIZE
	int32_t ___BLOCK_BIT_SIZE_14;
	// System.Int32 System.Security.Cryptography.DESTransform::BLOCK_BYTE_SIZE
	int32_t ___BLOCK_BYTE_SIZE_15;
	// System.UInt32[] System.Security.Cryptography.DESTransform::spBoxes
	UInt32U5BU5D_t59386216* ___spBoxes_19;
	// System.Byte[] System.Security.Cryptography.DESTransform::PC1
	ByteU5BU5D_t3397334013* ___PC1_20;
	// System.Byte[] System.Security.Cryptography.DESTransform::leftRotTotal
	ByteU5BU5D_t3397334013* ___leftRotTotal_21;
	// System.Byte[] System.Security.Cryptography.DESTransform::PC2
	ByteU5BU5D_t3397334013* ___PC2_22;
	// System.UInt32[] System.Security.Cryptography.DESTransform::ipTab
	UInt32U5BU5D_t59386216* ___ipTab_23;
	// System.UInt32[] System.Security.Cryptography.DESTransform::fpTab
	UInt32U5BU5D_t59386216* ___fpTab_24;

public:
	inline static int32_t get_offset_of_KEY_BIT_SIZE_12() { return static_cast<int32_t>(offsetof(DESTransform_t179750796_StaticFields, ___KEY_BIT_SIZE_12)); }
	inline int32_t get_KEY_BIT_SIZE_12() const { return ___KEY_BIT_SIZE_12; }
	inline int32_t* get_address_of_KEY_BIT_SIZE_12() { return &___KEY_BIT_SIZE_12; }
	inline void set_KEY_BIT_SIZE_12(int32_t value)
	{
		___KEY_BIT_SIZE_12 = value;
	}

	inline static int32_t get_offset_of_KEY_BYTE_SIZE_13() { return static_cast<int32_t>(offsetof(DESTransform_t179750796_StaticFields, ___KEY_BYTE_SIZE_13)); }
	inline int32_t get_KEY_BYTE_SIZE_13() const { return ___KEY_BYTE_SIZE_13; }
	inline int32_t* get_address_of_KEY_BYTE_SIZE_13() { return &___KEY_BYTE_SIZE_13; }
	inline void set_KEY_BYTE_SIZE_13(int32_t value)
	{
		___KEY_BYTE_SIZE_13 = value;
	}

	inline static int32_t get_offset_of_BLOCK_BIT_SIZE_14() { return static_cast<int32_t>(offsetof(DESTransform_t179750796_StaticFields, ___BLOCK_BIT_SIZE_14)); }
	inline int32_t get_BLOCK_BIT_SIZE_14() const { return ___BLOCK_BIT_SIZE_14; }
	inline int32_t* get_address_of_BLOCK_BIT_SIZE_14() { return &___BLOCK_BIT_SIZE_14; }
	inline void set_BLOCK_BIT_SIZE_14(int32_t value)
	{
		___BLOCK_BIT_SIZE_14 = value;
	}

	inline static int32_t get_offset_of_BLOCK_BYTE_SIZE_15() { return static_cast<int32_t>(offsetof(DESTransform_t179750796_StaticFields, ___BLOCK_BYTE_SIZE_15)); }
	inline int32_t get_BLOCK_BYTE_SIZE_15() const { return ___BLOCK_BYTE_SIZE_15; }
	inline int32_t* get_address_of_BLOCK_BYTE_SIZE_15() { return &___BLOCK_BYTE_SIZE_15; }
	inline void set_BLOCK_BYTE_SIZE_15(int32_t value)
	{
		___BLOCK_BYTE_SIZE_15 = value;
	}

	inline static int32_t get_offset_of_spBoxes_19() { return static_cast<int32_t>(offsetof(DESTransform_t179750796_StaticFields, ___spBoxes_19)); }
	inline UInt32U5BU5D_t59386216* get_spBoxes_19() const { return ___spBoxes_19; }
	inline UInt32U5BU5D_t59386216** get_address_of_spBoxes_19() { return &___spBoxes_19; }
	inline void set_spBoxes_19(UInt32U5BU5D_t59386216* value)
	{
		___spBoxes_19 = value;
		Il2CppCodeGenWriteBarrier(&___spBoxes_19, value);
	}

	inline static int32_t get_offset_of_PC1_20() { return static_cast<int32_t>(offsetof(DESTransform_t179750796_StaticFields, ___PC1_20)); }
	inline ByteU5BU5D_t3397334013* get_PC1_20() const { return ___PC1_20; }
	inline ByteU5BU5D_t3397334013** get_address_of_PC1_20() { return &___PC1_20; }
	inline void set_PC1_20(ByteU5BU5D_t3397334013* value)
	{
		___PC1_20 = value;
		Il2CppCodeGenWriteBarrier(&___PC1_20, value);
	}

	inline static int32_t get_offset_of_leftRotTotal_21() { return static_cast<int32_t>(offsetof(DESTransform_t179750796_StaticFields, ___leftRotTotal_21)); }
	inline ByteU5BU5D_t3397334013* get_leftRotTotal_21() const { return ___leftRotTotal_21; }
	inline ByteU5BU5D_t3397334013** get_address_of_leftRotTotal_21() { return &___leftRotTotal_21; }
	inline void set_leftRotTotal_21(ByteU5BU5D_t3397334013* value)
	{
		___leftRotTotal_21 = value;
		Il2CppCodeGenWriteBarrier(&___leftRotTotal_21, value);
	}

	inline static int32_t get_offset_of_PC2_22() { return static_cast<int32_t>(offsetof(DESTransform_t179750796_StaticFields, ___PC2_22)); }
	inline ByteU5BU5D_t3397334013* get_PC2_22() const { return ___PC2_22; }
	inline ByteU5BU5D_t3397334013** get_address_of_PC2_22() { return &___PC2_22; }
	inline void set_PC2_22(ByteU5BU5D_t3397334013* value)
	{
		___PC2_22 = value;
		Il2CppCodeGenWriteBarrier(&___PC2_22, value);
	}

	inline static int32_t get_offset_of_ipTab_23() { return static_cast<int32_t>(offsetof(DESTransform_t179750796_StaticFields, ___ipTab_23)); }
	inline UInt32U5BU5D_t59386216* get_ipTab_23() const { return ___ipTab_23; }
	inline UInt32U5BU5D_t59386216** get_address_of_ipTab_23() { return &___ipTab_23; }
	inline void set_ipTab_23(UInt32U5BU5D_t59386216* value)
	{
		___ipTab_23 = value;
		Il2CppCodeGenWriteBarrier(&___ipTab_23, value);
	}

	inline static int32_t get_offset_of_fpTab_24() { return static_cast<int32_t>(offsetof(DESTransform_t179750796_StaticFields, ___fpTab_24)); }
	inline UInt32U5BU5D_t59386216* get_fpTab_24() const { return ___fpTab_24; }
	inline UInt32U5BU5D_t59386216** get_address_of_fpTab_24() { return &___fpTab_24; }
	inline void set_fpTab_24(UInt32U5BU5D_t59386216* value)
	{
		___fpTab_24 = value;
		Il2CppCodeGenWriteBarrier(&___fpTab_24, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
