#pragma once
#ifndef QACCESSIBLEBRIDGE_H_C_LIB
#define QACCESSIBLEBRIDGE_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAccessibleBridge QAccessibleBridge;
typedef struct QAccessibleBridgePlugin QAccessibleBridgePlugin;
typedef struct QAccessibleEvent QAccessibleEvent;
typedef struct QAccessibleInterface QAccessibleInterface;
typedef struct QObject QObject;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QAccessibleBridge* QAccessibleBridge_new();
QAccessibleBridge* QAccessibleBridge_new2(const QAccessibleBridge* param1);
void QAccessibleBridge_SetRootObject(QAccessibleBridge* self, QAccessibleInterface* rootObject);
void QAccessibleBridge_NotifyAccessibilityUpdate(QAccessibleBridge* self, QAccessibleEvent* event);
void QAccessibleBridge_OperatorAssign(QAccessibleBridge* self, const QAccessibleBridge* param1);
void QAccessibleBridge_OnSetRootObject(QAccessibleBridge* self, intptr_t slot);
void QAccessibleBridge_QBaseSetRootObject(QAccessibleBridge* self, QAccessibleInterface* rootObject);
void QAccessibleBridge_OnNotifyAccessibilityUpdate(QAccessibleBridge* self, intptr_t slot);
void QAccessibleBridge_QBaseNotifyAccessibilityUpdate(QAccessibleBridge* self, QAccessibleEvent* event);
void QAccessibleBridge_Delete(QAccessibleBridge* self);

QAccessibleBridgePlugin* QAccessibleBridgePlugin_new();
QAccessibleBridgePlugin* QAccessibleBridgePlugin_new2(QObject* parent);
libqt_string QAccessibleBridgePlugin_Tr(const char* s);
QAccessibleBridge* QAccessibleBridgePlugin_Create(QAccessibleBridgePlugin* self, const libqt_string key);
libqt_string QAccessibleBridgePlugin_Tr2(const char* s, const char* c);
libqt_string QAccessibleBridgePlugin_Tr3(const char* s, const char* c, int n);
void QAccessibleBridgePlugin_OnCreate(QAccessibleBridgePlugin* self, intptr_t slot);
QAccessibleBridge* QAccessibleBridgePlugin_QBaseCreate(QAccessibleBridgePlugin* self, const libqt_string key);
void QAccessibleBridgePlugin_Delete(QAccessibleBridgePlugin* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
