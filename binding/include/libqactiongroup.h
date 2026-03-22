#pragma once
#ifndef QACTIONGROUP_H_C_LIB
#define QACTIONGROUP_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAction QAction;
typedef struct QActionGroup QActionGroup;
typedef struct QIcon QIcon;
typedef struct QObject QObject;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QActionGroup* QActionGroup_new(QObject* parent);
libqt_string QActionGroup_Tr(const char* s);
QAction* QActionGroup_AddAction(QActionGroup* self, QAction* a);
QAction* QActionGroup_AddAction2(QActionGroup* self, const libqt_string text);
QAction* QActionGroup_AddAction3(QActionGroup* self, const QIcon* icon, const libqt_string text);
void QActionGroup_RemoveAction(QActionGroup* self, QAction* a);
libqt_list QActionGroup_Actions(const QActionGroup* self);
QAction* QActionGroup_CheckedAction(const QActionGroup* self);
bool QActionGroup_IsExclusive(const QActionGroup* self);
bool QActionGroup_IsEnabled(const QActionGroup* self);
bool QActionGroup_IsVisible(const QActionGroup* self);
int QActionGroup_ExclusionPolicy(const QActionGroup* self);
void QActionGroup_SetEnabled(QActionGroup* self, bool enabled);
void QActionGroup_SetDisabled(QActionGroup* self, bool b);
void QActionGroup_SetVisible(QActionGroup* self, bool visible);
void QActionGroup_SetExclusive(QActionGroup* self, bool exclusive);
void QActionGroup_SetExclusionPolicy(QActionGroup* self, int policy);
void QActionGroup_Triggered(QActionGroup* self, QAction* param1);
void QActionGroup_Connect_Triggered(QActionGroup* self, intptr_t slot);
void QActionGroup_Hovered(QActionGroup* self, QAction* param1);
void QActionGroup_Connect_Hovered(QActionGroup* self, intptr_t slot);
libqt_string QActionGroup_Tr2(const char* s, const char* c);
libqt_string QActionGroup_Tr3(const char* s, const char* c, int n);
void QActionGroup_Delete(QActionGroup* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
