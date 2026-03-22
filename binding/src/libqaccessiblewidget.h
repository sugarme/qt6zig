#pragma once
#ifndef QACCESSIBLEWIDGET_H_C_LIB
#define QACCESSIBLEWIDGET_H_C_LIB

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
typedef struct QAccessibleActionInterface QAccessibleActionInterface;
typedef struct QAccessibleInterface QAccessibleInterface;
typedef struct QAccessibleObject QAccessibleObject;
typedef struct QAccessibleWidget QAccessibleWidget;
typedef struct QColor QColor;
typedef struct QObject QObject;
typedef struct QRect QRect;
typedef struct QWidget QWidget;
typedef struct QWindow QWindow;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QAccessibleWidget* QAccessibleWidget_new(QWidget* o);
QAccessibleWidget* QAccessibleWidget_new2(QWidget* o, int r);
QAccessibleWidget* QAccessibleWidget_new3(QWidget* o, int r, const libqt_string name);
bool QAccessibleWidget_IsValid(const QAccessibleWidget* self);
QWindow* QAccessibleWidget_Window(const QAccessibleWidget* self);
int QAccessibleWidget_ChildCount(const QAccessibleWidget* self);
int QAccessibleWidget_IndexOfChild(const QAccessibleWidget* self, const QAccessibleInterface* child);
libqt_list QAccessibleWidget_Relations(const QAccessibleWidget* self, int match);
QAccessibleInterface* QAccessibleWidget_FocusChild(const QAccessibleWidget* self);
QRect* QAccessibleWidget_Rect(const QAccessibleWidget* self);
QAccessibleInterface* QAccessibleWidget_Parent(const QAccessibleWidget* self);
QAccessibleInterface* QAccessibleWidget_Child(const QAccessibleWidget* self, int index);
libqt_string QAccessibleWidget_Text(const QAccessibleWidget* self, int t);
int QAccessibleWidget_Role(const QAccessibleWidget* self);
QAccessible__State* QAccessibleWidget_State(const QAccessibleWidget* self);
QColor* QAccessibleWidget_ForegroundColor(const QAccessibleWidget* self);
QColor* QAccessibleWidget_BackgroundColor(const QAccessibleWidget* self);
void* QAccessibleWidget_InterfaceCast(QAccessibleWidget* self, int t);
libqt_list QAccessibleWidget_ActionNames(const QAccessibleWidget* self);
void QAccessibleWidget_DoAction(QAccessibleWidget* self, const libqt_string actionName);
libqt_list QAccessibleWidget_KeyBindingsForAction(const QAccessibleWidget* self, const libqt_string actionName);
void QAccessibleWidget_OnIsValid(const QAccessibleWidget* self, intptr_t slot);
bool QAccessibleWidget_QBaseIsValid(const QAccessibleWidget* self);
void QAccessibleWidget_OnWindow(const QAccessibleWidget* self, intptr_t slot);
QWindow* QAccessibleWidget_QBaseWindow(const QAccessibleWidget* self);
void QAccessibleWidget_OnChildCount(const QAccessibleWidget* self, intptr_t slot);
int QAccessibleWidget_QBaseChildCount(const QAccessibleWidget* self);
void QAccessibleWidget_OnIndexOfChild(const QAccessibleWidget* self, intptr_t slot);
int QAccessibleWidget_QBaseIndexOfChild(const QAccessibleWidget* self, const QAccessibleInterface* child);
void QAccessibleWidget_OnRelations(const QAccessibleWidget* self, intptr_t slot);
libqt_list QAccessibleWidget_QBaseRelations(const QAccessibleWidget* self, int match);
void QAccessibleWidget_OnFocusChild(const QAccessibleWidget* self, intptr_t slot);
QAccessibleInterface* QAccessibleWidget_QBaseFocusChild(const QAccessibleWidget* self);
void QAccessibleWidget_OnRect(const QAccessibleWidget* self, intptr_t slot);
QRect* QAccessibleWidget_QBaseRect(const QAccessibleWidget* self);
void QAccessibleWidget_OnParent(const QAccessibleWidget* self, intptr_t slot);
QAccessibleInterface* QAccessibleWidget_QBaseParent(const QAccessibleWidget* self);
void QAccessibleWidget_OnChild(const QAccessibleWidget* self, intptr_t slot);
QAccessibleInterface* QAccessibleWidget_QBaseChild(const QAccessibleWidget* self, int index);
void QAccessibleWidget_OnText(const QAccessibleWidget* self, intptr_t slot);
libqt_string QAccessibleWidget_QBaseText(const QAccessibleWidget* self, int t);
void QAccessibleWidget_OnRole(const QAccessibleWidget* self, intptr_t slot);
int QAccessibleWidget_QBaseRole(const QAccessibleWidget* self);
void QAccessibleWidget_OnState(const QAccessibleWidget* self, intptr_t slot);
QAccessible__State* QAccessibleWidget_QBaseState(const QAccessibleWidget* self);
void QAccessibleWidget_OnForegroundColor(const QAccessibleWidget* self, intptr_t slot);
QColor* QAccessibleWidget_QBaseForegroundColor(const QAccessibleWidget* self);
void QAccessibleWidget_OnBackgroundColor(const QAccessibleWidget* self, intptr_t slot);
QColor* QAccessibleWidget_QBaseBackgroundColor(const QAccessibleWidget* self);
void QAccessibleWidget_OnInterfaceCast(QAccessibleWidget* self, intptr_t slot);
void* QAccessibleWidget_QBaseInterfaceCast(QAccessibleWidget* self, int t);
void QAccessibleWidget_OnActionNames(const QAccessibleWidget* self, intptr_t slot);
libqt_list QAccessibleWidget_QBaseActionNames(const QAccessibleWidget* self);
void QAccessibleWidget_OnDoAction(QAccessibleWidget* self, intptr_t slot);
void QAccessibleWidget_QBaseDoAction(QAccessibleWidget* self, const libqt_string actionName);
void QAccessibleWidget_OnKeyBindingsForAction(const QAccessibleWidget* self, intptr_t slot);
libqt_list QAccessibleWidget_QBaseKeyBindingsForAction(const QAccessibleWidget* self, const libqt_string actionName);
QWidget* QAccessibleWidget_Widget(const QAccessibleWidget* self);
void QAccessibleWidget_OnWidget(const QAccessibleWidget* self, intptr_t slot);
QWidget* QAccessibleWidget_QBaseWidget(const QAccessibleWidget* self);
QObject* QAccessibleWidget_ParentObject(const QAccessibleWidget* self);
void QAccessibleWidget_OnParentObject(const QAccessibleWidget* self, intptr_t slot);
QObject* QAccessibleWidget_QBaseParentObject(const QAccessibleWidget* self);
void QAccessibleWidget_AddControllingSignal(QAccessibleWidget* self, const libqt_string signal);
void QAccessibleWidget_OnAddControllingSignal(QAccessibleWidget* self, intptr_t slot);
void QAccessibleWidget_QBaseAddControllingSignal(QAccessibleWidget* self, const libqt_string signal);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
