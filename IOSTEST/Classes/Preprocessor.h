#pragma once

#include <Availability.h>

//------------------------------------------------------------------------------
//
// ensuring proper compiler/xcode/whatever selection
//

#ifndef __clang__
#error please use clang compiler.
#endif

// NOT the best way but apple do not care about adding extensions properly
#if __clang_major__ < 6
#error please use xcode 6.0 or newer
#endif

#if !defined(__IPHONE_8_0) || __IPHONE_OS_VERSION_MAX_ALLOWED < __IPHONE_8_0
#error please use ios sdk 8.0 or newer
#endif

#if !defined(__IPHONE_6_0) || __IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE_6_0
#error please target ios 6.0 or newer
#endif

#define UNITY_TRAMPOLINE_IN_USE 1

//------------------------------------------------------------------------------
//
// defines for sdk/target version
//

#define UNITY_PRE_IOS7_TARGET (__IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE_7_0)

#if !TARGET_IPHONE_SIMULATOR && !TARGET_TVOS_SIMULATOR
    #define UNITY_CAN_USE_METAL     1
#else
    #define UNITY_CAN_USE_METAL     0
#endif

// The following UNITY_USES_* flags disable functionality in the trampoline project
// whenever the user does not use it from his scripts. We detect the API usage and
// adjust the value of these flags whenever the project is built (including when the
// project is appended)
#define UNITY_USES_REMOTE_NOTIFICATIONS 1
#define UNITY_USES_WEBCAM 0
#define UNITY_USES_MICROPHONE 0
#define UNITY_USES_REPLAY_KIT 0
#define UNITY_SNAPSHOT_VIEW_ON_APPLICATION_PAUSE 0

#define USE_IL2CPP_PCH 0

#define UNITY_TVOS TARGET_OS_TV
#define UNITY_IOS !TARGET_OS_TV
#define UNITY_OSX 0

#define UNITY_DEVELOPER_BUILD 0

#if !defined(__IPHONE_9_0)
    #define UNITY_REPLAY_KIT_AVAILABLE 0
#else
    #define UNITY_REPLAY_KIT_AVAILABLE (UNITY_USES_REPLAY_KIT && (UNITY_IOS && (__IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_9_0)))
#endif
