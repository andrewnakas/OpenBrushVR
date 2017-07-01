#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Valve_VR_VREvent_Res1373699568.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Valve_VR_VREvent_Con3913961192.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Valve_VR_VREvent_Mou2185307987.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Valve_VR_VREvent_Scro626693055.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Valve_VR_VREvent_Pro1803567141.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Valve_VR_VREvent_Not2249359203.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Valve_VR_VREvent_Ove2752044790.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Valve_VR_VREvent_Sta4114371706.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Valve_VR_VREvent_Ipd1361274599.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Valve_VR_VREvent_Cha3718891675.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Valve_VR_VREvent_Per1362097580.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Valve_VR_VREvent_Tou3788177431.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Valve_VR_VREvent_Sea1793378776.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Valve_VR_VREvent_Scre379786388.h"
#include "AssemblyU2DCSharpU2Dfirstpass_Valve_VR_VREvent_Key3649090227.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Valve.VR.VREvent_Data_t
struct  VREvent_Data_t_t3621557720 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_Reserved_t Valve.VR.VREvent_Data_t::reserved
			VREvent_Reserved_t_t1373699568  ___reserved_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Reserved_t_t1373699568  ___reserved_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_Controller_t Valve.VR.VREvent_Data_t::controller
			VREvent_Controller_t_t3913961192  ___controller_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Controller_t_t3913961192  ___controller_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_Mouse_t Valve.VR.VREvent_Data_t::mouse
			VREvent_Mouse_t_t2185307987  ___mouse_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Mouse_t_t2185307987  ___mouse_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_Scroll_t Valve.VR.VREvent_Data_t::scroll
			VREvent_Scroll_t_t626693055  ___scroll_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Scroll_t_t626693055  ___scroll_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_Process_t Valve.VR.VREvent_Data_t::process
			VREvent_Process_t_t1803567141  ___process_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Process_t_t1803567141  ___process_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_Notification_t Valve.VR.VREvent_Data_t::notification
			VREvent_Notification_t_t2249359203  ___notification_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Notification_t_t2249359203  ___notification_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_Overlay_t Valve.VR.VREvent_Data_t::overlay
			VREvent_Overlay_t_t2752044790  ___overlay_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Overlay_t_t2752044790  ___overlay_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_Status_t Valve.VR.VREvent_Data_t::status
			VREvent_Status_t_t4114371706  ___status_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Status_t_t4114371706  ___status_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_Ipd_t Valve.VR.VREvent_Data_t::ipd
			VREvent_Ipd_t_t1361274599  ___ipd_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Ipd_t_t1361274599  ___ipd_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_Chaperone_t Valve.VR.VREvent_Data_t::chaperone
			VREvent_Chaperone_t_t3718891675  ___chaperone_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Chaperone_t_t3718891675  ___chaperone_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_PerformanceTest_t Valve.VR.VREvent_Data_t::performanceTest
			VREvent_PerformanceTest_t_t1362097580  ___performanceTest_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_PerformanceTest_t_t1362097580  ___performanceTest_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_TouchPadMove_t Valve.VR.VREvent_Data_t::touchPadMove
			VREvent_TouchPadMove_t_t3788177431  ___touchPadMove_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_TouchPadMove_t_t3788177431  ___touchPadMove_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_SeatedZeroPoseReset_t Valve.VR.VREvent_Data_t::seatedZeroPoseReset
			VREvent_SeatedZeroPoseReset_t_t1793378776  ___seatedZeroPoseReset_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_SeatedZeroPoseReset_t_t1793378776  ___seatedZeroPoseReset_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_Screenshot_t Valve.VR.VREvent_Data_t::screenshot
			VREvent_Screenshot_t_t379786388  ___screenshot_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Screenshot_t_t379786388  ___screenshot_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Valve.VR.VREvent_Keyboard_t Valve.VR.VREvent_Data_t::keyboard
			VREvent_Keyboard_t_t3649090227  ___keyboard_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			VREvent_Keyboard_t_t3649090227  ___keyboard_14_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_reserved_0() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t3621557720, ___reserved_0)); }
	inline VREvent_Reserved_t_t1373699568  get_reserved_0() const { return ___reserved_0; }
	inline VREvent_Reserved_t_t1373699568 * get_address_of_reserved_0() { return &___reserved_0; }
	inline void set_reserved_0(VREvent_Reserved_t_t1373699568  value)
	{
		___reserved_0 = value;
	}

	inline static int32_t get_offset_of_controller_1() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t3621557720, ___controller_1)); }
	inline VREvent_Controller_t_t3913961192  get_controller_1() const { return ___controller_1; }
	inline VREvent_Controller_t_t3913961192 * get_address_of_controller_1() { return &___controller_1; }
	inline void set_controller_1(VREvent_Controller_t_t3913961192  value)
	{
		___controller_1 = value;
	}

	inline static int32_t get_offset_of_mouse_2() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t3621557720, ___mouse_2)); }
	inline VREvent_Mouse_t_t2185307987  get_mouse_2() const { return ___mouse_2; }
	inline VREvent_Mouse_t_t2185307987 * get_address_of_mouse_2() { return &___mouse_2; }
	inline void set_mouse_2(VREvent_Mouse_t_t2185307987  value)
	{
		___mouse_2 = value;
	}

	inline static int32_t get_offset_of_scroll_3() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t3621557720, ___scroll_3)); }
	inline VREvent_Scroll_t_t626693055  get_scroll_3() const { return ___scroll_3; }
	inline VREvent_Scroll_t_t626693055 * get_address_of_scroll_3() { return &___scroll_3; }
	inline void set_scroll_3(VREvent_Scroll_t_t626693055  value)
	{
		___scroll_3 = value;
	}

	inline static int32_t get_offset_of_process_4() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t3621557720, ___process_4)); }
	inline VREvent_Process_t_t1803567141  get_process_4() const { return ___process_4; }
	inline VREvent_Process_t_t1803567141 * get_address_of_process_4() { return &___process_4; }
	inline void set_process_4(VREvent_Process_t_t1803567141  value)
	{
		___process_4 = value;
	}

	inline static int32_t get_offset_of_notification_5() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t3621557720, ___notification_5)); }
	inline VREvent_Notification_t_t2249359203  get_notification_5() const { return ___notification_5; }
	inline VREvent_Notification_t_t2249359203 * get_address_of_notification_5() { return &___notification_5; }
	inline void set_notification_5(VREvent_Notification_t_t2249359203  value)
	{
		___notification_5 = value;
	}

	inline static int32_t get_offset_of_overlay_6() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t3621557720, ___overlay_6)); }
	inline VREvent_Overlay_t_t2752044790  get_overlay_6() const { return ___overlay_6; }
	inline VREvent_Overlay_t_t2752044790 * get_address_of_overlay_6() { return &___overlay_6; }
	inline void set_overlay_6(VREvent_Overlay_t_t2752044790  value)
	{
		___overlay_6 = value;
	}

	inline static int32_t get_offset_of_status_7() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t3621557720, ___status_7)); }
	inline VREvent_Status_t_t4114371706  get_status_7() const { return ___status_7; }
	inline VREvent_Status_t_t4114371706 * get_address_of_status_7() { return &___status_7; }
	inline void set_status_7(VREvent_Status_t_t4114371706  value)
	{
		___status_7 = value;
	}

	inline static int32_t get_offset_of_ipd_8() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t3621557720, ___ipd_8)); }
	inline VREvent_Ipd_t_t1361274599  get_ipd_8() const { return ___ipd_8; }
	inline VREvent_Ipd_t_t1361274599 * get_address_of_ipd_8() { return &___ipd_8; }
	inline void set_ipd_8(VREvent_Ipd_t_t1361274599  value)
	{
		___ipd_8 = value;
	}

	inline static int32_t get_offset_of_chaperone_9() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t3621557720, ___chaperone_9)); }
	inline VREvent_Chaperone_t_t3718891675  get_chaperone_9() const { return ___chaperone_9; }
	inline VREvent_Chaperone_t_t3718891675 * get_address_of_chaperone_9() { return &___chaperone_9; }
	inline void set_chaperone_9(VREvent_Chaperone_t_t3718891675  value)
	{
		___chaperone_9 = value;
	}

	inline static int32_t get_offset_of_performanceTest_10() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t3621557720, ___performanceTest_10)); }
	inline VREvent_PerformanceTest_t_t1362097580  get_performanceTest_10() const { return ___performanceTest_10; }
	inline VREvent_PerformanceTest_t_t1362097580 * get_address_of_performanceTest_10() { return &___performanceTest_10; }
	inline void set_performanceTest_10(VREvent_PerformanceTest_t_t1362097580  value)
	{
		___performanceTest_10 = value;
	}

	inline static int32_t get_offset_of_touchPadMove_11() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t3621557720, ___touchPadMove_11)); }
	inline VREvent_TouchPadMove_t_t3788177431  get_touchPadMove_11() const { return ___touchPadMove_11; }
	inline VREvent_TouchPadMove_t_t3788177431 * get_address_of_touchPadMove_11() { return &___touchPadMove_11; }
	inline void set_touchPadMove_11(VREvent_TouchPadMove_t_t3788177431  value)
	{
		___touchPadMove_11 = value;
	}

	inline static int32_t get_offset_of_seatedZeroPoseReset_12() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t3621557720, ___seatedZeroPoseReset_12)); }
	inline VREvent_SeatedZeroPoseReset_t_t1793378776  get_seatedZeroPoseReset_12() const { return ___seatedZeroPoseReset_12; }
	inline VREvent_SeatedZeroPoseReset_t_t1793378776 * get_address_of_seatedZeroPoseReset_12() { return &___seatedZeroPoseReset_12; }
	inline void set_seatedZeroPoseReset_12(VREvent_SeatedZeroPoseReset_t_t1793378776  value)
	{
		___seatedZeroPoseReset_12 = value;
	}

	inline static int32_t get_offset_of_screenshot_13() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t3621557720, ___screenshot_13)); }
	inline VREvent_Screenshot_t_t379786388  get_screenshot_13() const { return ___screenshot_13; }
	inline VREvent_Screenshot_t_t379786388 * get_address_of_screenshot_13() { return &___screenshot_13; }
	inline void set_screenshot_13(VREvent_Screenshot_t_t379786388  value)
	{
		___screenshot_13 = value;
	}

	inline static int32_t get_offset_of_keyboard_14() { return static_cast<int32_t>(offsetof(VREvent_Data_t_t3621557720, ___keyboard_14)); }
	inline VREvent_Keyboard_t_t3649090227  get_keyboard_14() const { return ___keyboard_14; }
	inline VREvent_Keyboard_t_t3649090227 * get_address_of_keyboard_14() { return &___keyboard_14; }
	inline void set_keyboard_14(VREvent_Keyboard_t_t3649090227  value)
	{
		___keyboard_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
