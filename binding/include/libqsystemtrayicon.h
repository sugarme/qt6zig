#pragma once
#ifndef QSYSTEMTRAYICON_H_C_LIB
#define QSYSTEMTRAYICON_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QEvent QEvent;
typedef struct QIcon QIcon;
typedef struct QMenu QMenu;
typedef struct QObject QObject;
typedef struct QRect QRect;
typedef struct QSystemTrayIcon QSystemTrayIcon;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QSystemTrayIcon* QSystemTrayIcon_new();
QSystemTrayIcon* QSystemTrayIcon_new2(const QIcon* icon);
QSystemTrayIcon* QSystemTrayIcon_new3(QObject* parent);
QSystemTrayIcon* QSystemTrayIcon_new4(const QIcon* icon, QObject* parent);
libqt_string QSystemTrayIcon_Tr(const char* s);
void QSystemTrayIcon_SetContextMenu(QSystemTrayIcon* self, QMenu* menu);
QMenu* QSystemTrayIcon_ContextMenu(const QSystemTrayIcon* self);
QIcon* QSystemTrayIcon_Icon(const QSystemTrayIcon* self);
void QSystemTrayIcon_SetIcon(QSystemTrayIcon* self, const QIcon* icon);
libqt_string QSystemTrayIcon_ToolTip(const QSystemTrayIcon* self);
void QSystemTrayIcon_SetToolTip(QSystemTrayIcon* self, const libqt_string tip);
bool QSystemTrayIcon_IsSystemTrayAvailable();
bool QSystemTrayIcon_SupportsMessages();
QRect* QSystemTrayIcon_Geometry(const QSystemTrayIcon* self);
bool QSystemTrayIcon_IsVisible(const QSystemTrayIcon* self);
void QSystemTrayIcon_SetVisible(QSystemTrayIcon* self, bool visible);
void QSystemTrayIcon_Show(QSystemTrayIcon* self);
void QSystemTrayIcon_Hide(QSystemTrayIcon* self);
void QSystemTrayIcon_ShowMessage(QSystemTrayIcon* self, const libqt_string title, const libqt_string msg, const QIcon* icon);
void QSystemTrayIcon_ShowMessage2(QSystemTrayIcon* self, const libqt_string title, const libqt_string msg);
void QSystemTrayIcon_Activated(QSystemTrayIcon* self, int reason);
void QSystemTrayIcon_Connect_Activated(QSystemTrayIcon* self, intptr_t slot);
void QSystemTrayIcon_MessageClicked(QSystemTrayIcon* self);
void QSystemTrayIcon_Connect_MessageClicked(QSystemTrayIcon* self, intptr_t slot);
bool QSystemTrayIcon_Event(QSystemTrayIcon* self, QEvent* event);
libqt_string QSystemTrayIcon_Tr2(const char* s, const char* c);
libqt_string QSystemTrayIcon_Tr3(const char* s, const char* c, int n);
void QSystemTrayIcon_ShowMessage4(QSystemTrayIcon* self, const libqt_string title, const libqt_string msg, const QIcon* icon, int msecs);
void QSystemTrayIcon_ShowMessage3(QSystemTrayIcon* self, const libqt_string title, const libqt_string msg, int icon);
void QSystemTrayIcon_ShowMessage42(QSystemTrayIcon* self, const libqt_string title, const libqt_string msg, int icon, int msecs);
void QSystemTrayIcon_OnEvent(QSystemTrayIcon* self, intptr_t slot);
bool QSystemTrayIcon_QBaseEvent(QSystemTrayIcon* self, QEvent* event);
void QSystemTrayIcon_Delete(QSystemTrayIcon* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
