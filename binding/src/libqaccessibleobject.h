#pragma once
#ifndef QACCESSIBLEOBJECT_H_C_LIB
#define QACCESSIBLEOBJECT_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QAccessible__State)
typedef QAccessible::State QAccessible__State;
#endif
#else
typedef struct QAccessible__State QAccessible__State;
typedef struct QAccessibleApplication QAccessibleApplication;
typedef struct QAccessibleInterface QAccessibleInterface;
typedef struct QAccessibleObject QAccessibleObject;
typedef struct QObject QObject;
typedef struct QRect QRect;
typedef struct QWindow QWindow;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif




QAccessibleObject* QAccessibleObject_new(QObject* object);
bool QAccessibleObject_IsValid(const QAccessibleObject* self);
QObject* QAccessibleObject_Object(const QAccessibleObject* self);
QRect* QAccessibleObject_Rect(const QAccessibleObject* self);
void QAccessibleObject_SetText(QAccessibleObject* self, int t, const libqt_string text);
QAccessibleInterface* QAccessibleObject_ChildAt(const QAccessibleObject* self, int x, int y);
void QAccessibleObject_OnIsValid(const QAccessibleObject* self, intptr_t slot);
bool QAccessibleObject_QBaseIsValid(const QAccessibleObject* self);
void QAccessibleObject_OnObject(const QAccessibleObject* self, intptr_t slot);
QObject* QAccessibleObject_QBaseObject(const QAccessibleObject* self);
void QAccessibleObject_OnRect(const QAccessibleObject* self, intptr_t slot);
QRect* QAccessibleObject_QBaseRect(const QAccessibleObject* self);
void QAccessibleObject_OnSetText(QAccessibleObject* self, intptr_t slot);
void QAccessibleObject_QBaseSetText(QAccessibleObject* self, int t, const libqt_string text);
void QAccessibleObject_OnChildAt(const QAccessibleObject* self, intptr_t slot);
QAccessibleInterface* QAccessibleObject_QBaseChildAt(const QAccessibleObject* self, int x, int y);

QAccessibleApplication* QAccessibleApplication_new();
QWindow* QAccessibleApplication_Window(const QAccessibleApplication* self);
int QAccessibleApplication_ChildCount(const QAccessibleApplication* self);
int QAccessibleApplication_IndexOfChild(const QAccessibleApplication* self, const QAccessibleInterface* param1);
QAccessibleInterface* QAccessibleApplication_FocusChild(const QAccessibleApplication* self);
QAccessibleInterface* QAccessibleApplication_Parent(const QAccessibleApplication* self);
QAccessibleInterface* QAccessibleApplication_Child(const QAccessibleApplication* self, int index);
libqt_string QAccessibleApplication_Text(const QAccessibleApplication* self, int t);
int QAccessibleApplication_Role(const QAccessibleApplication* self);
QAccessible__State* QAccessibleApplication_State(const QAccessibleApplication* self);
void QAccessibleApplication_OnWindow(const QAccessibleApplication* self, intptr_t slot);
QWindow* QAccessibleApplication_QBaseWindow(const QAccessibleApplication* self);
void QAccessibleApplication_OnChildCount(const QAccessibleApplication* self, intptr_t slot);
int QAccessibleApplication_QBaseChildCount(const QAccessibleApplication* self);
void QAccessibleApplication_OnIndexOfChild(const QAccessibleApplication* self, intptr_t slot);
int QAccessibleApplication_QBaseIndexOfChild(const QAccessibleApplication* self, const QAccessibleInterface* param1);
void QAccessibleApplication_OnFocusChild(const QAccessibleApplication* self, intptr_t slot);
QAccessibleInterface* QAccessibleApplication_QBaseFocusChild(const QAccessibleApplication* self);
void QAccessibleApplication_OnParent(const QAccessibleApplication* self, intptr_t slot);
QAccessibleInterface* QAccessibleApplication_QBaseParent(const QAccessibleApplication* self);
void QAccessibleApplication_OnChild(const QAccessibleApplication* self, intptr_t slot);
QAccessibleInterface* QAccessibleApplication_QBaseChild(const QAccessibleApplication* self, int index);
void QAccessibleApplication_OnText(const QAccessibleApplication* self, intptr_t slot);
libqt_string QAccessibleApplication_QBaseText(const QAccessibleApplication* self, int t);
void QAccessibleApplication_OnRole(const QAccessibleApplication* self, intptr_t slot);
int QAccessibleApplication_QBaseRole(const QAccessibleApplication* self);
void QAccessibleApplication_OnState(const QAccessibleApplication* self, intptr_t slot);
QAccessible__State* QAccessibleApplication_QBaseState(const QAccessibleApplication* self);
void QAccessibleApplication_Delete(QAccessibleApplication* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
