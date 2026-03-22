#pragma once
#ifndef QABSTRACTBUTTON_H_C_LIB
#define QABSTRACTBUTTON_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractButton QAbstractButton;
typedef struct QButtonGroup QButtonGroup;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QIcon QIcon;
typedef struct QKeyEvent QKeyEvent;
typedef struct QKeySequence QKeySequence;
typedef struct QMouseEvent QMouseEvent;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPoint QPoint;
typedef struct QSize QSize;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QAbstractButton* QAbstractButton_new(QWidget* parent);
QAbstractButton* QAbstractButton_new2();
libqt_string QAbstractButton_Tr(const char* s);
void QAbstractButton_SetText(QAbstractButton* self, const libqt_string text);
libqt_string QAbstractButton_Text(const QAbstractButton* self);
void QAbstractButton_SetIcon(QAbstractButton* self, const QIcon* icon);
QIcon* QAbstractButton_Icon(const QAbstractButton* self);
QSize* QAbstractButton_IconSize(const QAbstractButton* self);
void QAbstractButton_SetShortcut(QAbstractButton* self, const QKeySequence* key);
QKeySequence* QAbstractButton_Shortcut(const QAbstractButton* self);
void QAbstractButton_SetCheckable(QAbstractButton* self, bool checkable);
bool QAbstractButton_IsCheckable(const QAbstractButton* self);
bool QAbstractButton_IsChecked(const QAbstractButton* self);
void QAbstractButton_SetDown(QAbstractButton* self, bool down);
bool QAbstractButton_IsDown(const QAbstractButton* self);
void QAbstractButton_SetAutoRepeat(QAbstractButton* self, bool autoRepeat);
bool QAbstractButton_AutoRepeat(const QAbstractButton* self);
void QAbstractButton_SetAutoRepeatDelay(QAbstractButton* self, int autoRepeatDelay);
int QAbstractButton_AutoRepeatDelay(const QAbstractButton* self);
void QAbstractButton_SetAutoRepeatInterval(QAbstractButton* self, int autoRepeatInterval);
int QAbstractButton_AutoRepeatInterval(const QAbstractButton* self);
void QAbstractButton_SetAutoExclusive(QAbstractButton* self, bool autoExclusive);
bool QAbstractButton_AutoExclusive(const QAbstractButton* self);
QButtonGroup* QAbstractButton_Group(const QAbstractButton* self);
void QAbstractButton_SetIconSize(QAbstractButton* self, const QSize* size);
void QAbstractButton_AnimateClick(QAbstractButton* self);
void QAbstractButton_Click(QAbstractButton* self);
void QAbstractButton_Toggle(QAbstractButton* self);
void QAbstractButton_SetChecked(QAbstractButton* self, bool checked);
void QAbstractButton_Pressed(QAbstractButton* self);
void QAbstractButton_Connect_Pressed(QAbstractButton* self, intptr_t slot);
void QAbstractButton_Released(QAbstractButton* self);
void QAbstractButton_Connect_Released(QAbstractButton* self, intptr_t slot);
void QAbstractButton_Clicked(QAbstractButton* self);
void QAbstractButton_Connect_Clicked(QAbstractButton* self, intptr_t slot);
void QAbstractButton_Toggled(QAbstractButton* self, bool checked);
void QAbstractButton_Connect_Toggled(QAbstractButton* self, intptr_t slot);
void QAbstractButton_PaintEvent(QAbstractButton* self, QPaintEvent* e);
bool QAbstractButton_HitButton(const QAbstractButton* self, const QPoint* pos);
void QAbstractButton_CheckStateSet(QAbstractButton* self);
void QAbstractButton_NextCheckState(QAbstractButton* self);
bool QAbstractButton_Event(QAbstractButton* self, QEvent* e);
void QAbstractButton_KeyPressEvent(QAbstractButton* self, QKeyEvent* e);
void QAbstractButton_KeyReleaseEvent(QAbstractButton* self, QKeyEvent* e);
void QAbstractButton_MousePressEvent(QAbstractButton* self, QMouseEvent* e);
void QAbstractButton_MouseReleaseEvent(QAbstractButton* self, QMouseEvent* e);
void QAbstractButton_MouseMoveEvent(QAbstractButton* self, QMouseEvent* e);
void QAbstractButton_FocusInEvent(QAbstractButton* self, QFocusEvent* e);
void QAbstractButton_FocusOutEvent(QAbstractButton* self, QFocusEvent* e);
void QAbstractButton_ChangeEvent(QAbstractButton* self, QEvent* e);
void QAbstractButton_TimerEvent(QAbstractButton* self, QTimerEvent* e);
libqt_string QAbstractButton_Tr2(const char* s, const char* c);
libqt_string QAbstractButton_Tr3(const char* s, const char* c, int n);
void QAbstractButton_Clicked1(QAbstractButton* self, bool checked);
void QAbstractButton_Connect_Clicked1(QAbstractButton* self, intptr_t slot);
void QAbstractButton_OnPaintEvent(QAbstractButton* self, intptr_t slot);
void QAbstractButton_QBasePaintEvent(QAbstractButton* self, QPaintEvent* e);
void QAbstractButton_OnHitButton(const QAbstractButton* self, intptr_t slot);
bool QAbstractButton_QBaseHitButton(const QAbstractButton* self, const QPoint* pos);
void QAbstractButton_OnCheckStateSet(QAbstractButton* self, intptr_t slot);
void QAbstractButton_QBaseCheckStateSet(QAbstractButton* self);
void QAbstractButton_OnNextCheckState(QAbstractButton* self, intptr_t slot);
void QAbstractButton_QBaseNextCheckState(QAbstractButton* self);
void QAbstractButton_OnEvent(QAbstractButton* self, intptr_t slot);
bool QAbstractButton_QBaseEvent(QAbstractButton* self, QEvent* e);
void QAbstractButton_OnKeyPressEvent(QAbstractButton* self, intptr_t slot);
void QAbstractButton_QBaseKeyPressEvent(QAbstractButton* self, QKeyEvent* e);
void QAbstractButton_OnKeyReleaseEvent(QAbstractButton* self, intptr_t slot);
void QAbstractButton_QBaseKeyReleaseEvent(QAbstractButton* self, QKeyEvent* e);
void QAbstractButton_OnMousePressEvent(QAbstractButton* self, intptr_t slot);
void QAbstractButton_QBaseMousePressEvent(QAbstractButton* self, QMouseEvent* e);
void QAbstractButton_OnMouseReleaseEvent(QAbstractButton* self, intptr_t slot);
void QAbstractButton_QBaseMouseReleaseEvent(QAbstractButton* self, QMouseEvent* e);
void QAbstractButton_OnMouseMoveEvent(QAbstractButton* self, intptr_t slot);
void QAbstractButton_QBaseMouseMoveEvent(QAbstractButton* self, QMouseEvent* e);
void QAbstractButton_OnFocusInEvent(QAbstractButton* self, intptr_t slot);
void QAbstractButton_QBaseFocusInEvent(QAbstractButton* self, QFocusEvent* e);
void QAbstractButton_OnFocusOutEvent(QAbstractButton* self, intptr_t slot);
void QAbstractButton_QBaseFocusOutEvent(QAbstractButton* self, QFocusEvent* e);
void QAbstractButton_OnChangeEvent(QAbstractButton* self, intptr_t slot);
void QAbstractButton_QBaseChangeEvent(QAbstractButton* self, QEvent* e);
void QAbstractButton_OnTimerEvent(QAbstractButton* self, intptr_t slot);
void QAbstractButton_QBaseTimerEvent(QAbstractButton* self, QTimerEvent* e);
void QAbstractButton_Delete(QAbstractButton* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
