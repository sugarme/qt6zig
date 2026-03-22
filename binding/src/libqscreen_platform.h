#pragma once
#ifndef QSCREEN_PLATFORM_H_C_LIB
#define QSCREEN_PLATFORM_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QNativeInterface__QWindowsScreen)
typedef QNativeInterface::QWindowsScreen QNativeInterface__QWindowsScreen;
#endif
#else
typedef struct QNativeInterface__QWindowsScreen QNativeInterface__QWindowsScreen;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QNativeInterface__QWindowsScreen* QNativeInterface__QWindowsScreen_new();
struct HMONITOR__* QNativeInterface__QWindowsScreen_Handle(const QNativeInterface__QWindowsScreen* self);
struct HMONITOR__* QNativeInterface__QWindowsScreen_Connect_Handle(QNativeInterface__QWindowsScreen* self, intptr_t slot);
void QNativeInterface__QWindowsScreen_OnHandle(const QNativeInterface__QWindowsScreen* self, intptr_t slot);
struct HMONITOR__* QNativeInterface__QWindowsScreen_QBaseHandle(const QNativeInterface__QWindowsScreen* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
