#pragma once
#ifndef QABSTRACTSPINBOX_H_C_LIB
#define QABSTRACTSPINBOX_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractSpinBox QAbstractSpinBox;
typedef struct QCloseEvent QCloseEvent;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QHideEvent QHideEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QLineEdit QLineEdit;
typedef struct QMouseEvent QMouseEvent;
typedef struct QPaintEvent QPaintEvent;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QSize QSize;
typedef struct QStyleOptionSpinBox QStyleOptionSpinBox;
typedef struct QTimerEvent QTimerEvent;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QAbstractSpinBox* QAbstractSpinBox_new(QWidget* parent);
QAbstractSpinBox* QAbstractSpinBox_new2();
libqt_string QAbstractSpinBox_Tr(const char* s);
int QAbstractSpinBox_ButtonSymbols(const QAbstractSpinBox* self);
void QAbstractSpinBox_SetButtonSymbols(QAbstractSpinBox* self, int bs);
void QAbstractSpinBox_SetCorrectionMode(QAbstractSpinBox* self, int cm);
int QAbstractSpinBox_CorrectionMode(const QAbstractSpinBox* self);
bool QAbstractSpinBox_HasAcceptableInput(const QAbstractSpinBox* self);
libqt_string QAbstractSpinBox_Text(const QAbstractSpinBox* self);
libqt_string QAbstractSpinBox_SpecialValueText(const QAbstractSpinBox* self);
void QAbstractSpinBox_SetSpecialValueText(QAbstractSpinBox* self, const libqt_string txt);
bool QAbstractSpinBox_Wrapping(const QAbstractSpinBox* self);
void QAbstractSpinBox_SetWrapping(QAbstractSpinBox* self, bool w);
void QAbstractSpinBox_SetReadOnly(QAbstractSpinBox* self, bool r);
bool QAbstractSpinBox_IsReadOnly(const QAbstractSpinBox* self);
void QAbstractSpinBox_SetKeyboardTracking(QAbstractSpinBox* self, bool kt);
bool QAbstractSpinBox_KeyboardTracking(const QAbstractSpinBox* self);
void QAbstractSpinBox_SetAlignment(QAbstractSpinBox* self, int flag);
int QAbstractSpinBox_Alignment(const QAbstractSpinBox* self);
void QAbstractSpinBox_SetFrame(QAbstractSpinBox* self, bool frame);
bool QAbstractSpinBox_HasFrame(const QAbstractSpinBox* self);
void QAbstractSpinBox_SetAccelerated(QAbstractSpinBox* self, bool on);
bool QAbstractSpinBox_IsAccelerated(const QAbstractSpinBox* self);
void QAbstractSpinBox_SetGroupSeparatorShown(QAbstractSpinBox* self, bool shown);
bool QAbstractSpinBox_IsGroupSeparatorShown(const QAbstractSpinBox* self);
QSize* QAbstractSpinBox_SizeHint(const QAbstractSpinBox* self);
QSize* QAbstractSpinBox_MinimumSizeHint(const QAbstractSpinBox* self);
void QAbstractSpinBox_InterpretText(QAbstractSpinBox* self);
bool QAbstractSpinBox_Event(QAbstractSpinBox* self, QEvent* event);
QVariant* QAbstractSpinBox_InputMethodQuery(const QAbstractSpinBox* self, int param1);
int QAbstractSpinBox_Validate(const QAbstractSpinBox* self, libqt_string input, int* pos);
void QAbstractSpinBox_Fixup(const QAbstractSpinBox* self, libqt_string input);
void QAbstractSpinBox_StepBy(QAbstractSpinBox* self, int steps);
void QAbstractSpinBox_StepUp(QAbstractSpinBox* self);
void QAbstractSpinBox_StepDown(QAbstractSpinBox* self);
void QAbstractSpinBox_SelectAll(QAbstractSpinBox* self);
void QAbstractSpinBox_Clear(QAbstractSpinBox* self);
void QAbstractSpinBox_ResizeEvent(QAbstractSpinBox* self, QResizeEvent* event);
void QAbstractSpinBox_KeyPressEvent(QAbstractSpinBox* self, QKeyEvent* event);
void QAbstractSpinBox_KeyReleaseEvent(QAbstractSpinBox* self, QKeyEvent* event);
void QAbstractSpinBox_WheelEvent(QAbstractSpinBox* self, QWheelEvent* event);
void QAbstractSpinBox_FocusInEvent(QAbstractSpinBox* self, QFocusEvent* event);
void QAbstractSpinBox_FocusOutEvent(QAbstractSpinBox* self, QFocusEvent* event);
void QAbstractSpinBox_ContextMenuEvent(QAbstractSpinBox* self, QContextMenuEvent* event);
void QAbstractSpinBox_ChangeEvent(QAbstractSpinBox* self, QEvent* event);
void QAbstractSpinBox_CloseEvent(QAbstractSpinBox* self, QCloseEvent* event);
void QAbstractSpinBox_HideEvent(QAbstractSpinBox* self, QHideEvent* event);
void QAbstractSpinBox_MousePressEvent(QAbstractSpinBox* self, QMouseEvent* event);
void QAbstractSpinBox_MouseReleaseEvent(QAbstractSpinBox* self, QMouseEvent* event);
void QAbstractSpinBox_MouseMoveEvent(QAbstractSpinBox* self, QMouseEvent* event);
void QAbstractSpinBox_TimerEvent(QAbstractSpinBox* self, QTimerEvent* event);
void QAbstractSpinBox_PaintEvent(QAbstractSpinBox* self, QPaintEvent* event);
void QAbstractSpinBox_ShowEvent(QAbstractSpinBox* self, QShowEvent* event);
void QAbstractSpinBox_InitStyleOption(const QAbstractSpinBox* self, QStyleOptionSpinBox* option);
int QAbstractSpinBox_StepEnabled(const QAbstractSpinBox* self);
void QAbstractSpinBox_EditingFinished(QAbstractSpinBox* self);
void QAbstractSpinBox_Connect_EditingFinished(QAbstractSpinBox* self, intptr_t slot);
libqt_string QAbstractSpinBox_Tr2(const char* s, const char* c);
libqt_string QAbstractSpinBox_Tr3(const char* s, const char* c, int n);
void QAbstractSpinBox_OnSizeHint(const QAbstractSpinBox* self, intptr_t slot);
QSize* QAbstractSpinBox_QBaseSizeHint(const QAbstractSpinBox* self);
void QAbstractSpinBox_OnMinimumSizeHint(const QAbstractSpinBox* self, intptr_t slot);
QSize* QAbstractSpinBox_QBaseMinimumSizeHint(const QAbstractSpinBox* self);
void QAbstractSpinBox_OnEvent(QAbstractSpinBox* self, intptr_t slot);
bool QAbstractSpinBox_QBaseEvent(QAbstractSpinBox* self, QEvent* event);
void QAbstractSpinBox_OnInputMethodQuery(const QAbstractSpinBox* self, intptr_t slot);
QVariant* QAbstractSpinBox_QBaseInputMethodQuery(const QAbstractSpinBox* self, int param1);
void QAbstractSpinBox_OnValidate(const QAbstractSpinBox* self, intptr_t slot);
int QAbstractSpinBox_QBaseValidate(const QAbstractSpinBox* self, libqt_string input, int* pos);
void QAbstractSpinBox_OnFixup(const QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseFixup(const QAbstractSpinBox* self, libqt_string input);
void QAbstractSpinBox_OnStepBy(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseStepBy(QAbstractSpinBox* self, int steps);
void QAbstractSpinBox_OnClear(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseClear(QAbstractSpinBox* self);
void QAbstractSpinBox_OnResizeEvent(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseResizeEvent(QAbstractSpinBox* self, QResizeEvent* event);
void QAbstractSpinBox_OnKeyPressEvent(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseKeyPressEvent(QAbstractSpinBox* self, QKeyEvent* event);
void QAbstractSpinBox_OnKeyReleaseEvent(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseKeyReleaseEvent(QAbstractSpinBox* self, QKeyEvent* event);
void QAbstractSpinBox_OnWheelEvent(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseWheelEvent(QAbstractSpinBox* self, QWheelEvent* event);
void QAbstractSpinBox_OnFocusInEvent(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseFocusInEvent(QAbstractSpinBox* self, QFocusEvent* event);
void QAbstractSpinBox_OnFocusOutEvent(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseFocusOutEvent(QAbstractSpinBox* self, QFocusEvent* event);
void QAbstractSpinBox_OnContextMenuEvent(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseContextMenuEvent(QAbstractSpinBox* self, QContextMenuEvent* event);
void QAbstractSpinBox_OnChangeEvent(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseChangeEvent(QAbstractSpinBox* self, QEvent* event);
void QAbstractSpinBox_OnCloseEvent(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseCloseEvent(QAbstractSpinBox* self, QCloseEvent* event);
void QAbstractSpinBox_OnHideEvent(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseHideEvent(QAbstractSpinBox* self, QHideEvent* event);
void QAbstractSpinBox_OnMousePressEvent(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseMousePressEvent(QAbstractSpinBox* self, QMouseEvent* event);
void QAbstractSpinBox_OnMouseReleaseEvent(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseMouseReleaseEvent(QAbstractSpinBox* self, QMouseEvent* event);
void QAbstractSpinBox_OnMouseMoveEvent(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseMouseMoveEvent(QAbstractSpinBox* self, QMouseEvent* event);
void QAbstractSpinBox_OnTimerEvent(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseTimerEvent(QAbstractSpinBox* self, QTimerEvent* event);
void QAbstractSpinBox_OnPaintEvent(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBasePaintEvent(QAbstractSpinBox* self, QPaintEvent* event);
void QAbstractSpinBox_OnShowEvent(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseShowEvent(QAbstractSpinBox* self, QShowEvent* event);
void QAbstractSpinBox_OnInitStyleOption(const QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseInitStyleOption(const QAbstractSpinBox* self, QStyleOptionSpinBox* option);
void QAbstractSpinBox_OnStepEnabled(const QAbstractSpinBox* self, intptr_t slot);
int QAbstractSpinBox_QBaseStepEnabled(const QAbstractSpinBox* self);
QLineEdit* QAbstractSpinBox_LineEdit(const QAbstractSpinBox* self);
void QAbstractSpinBox_OnLineEdit(const QAbstractSpinBox* self, intptr_t slot);
QLineEdit* QAbstractSpinBox_QBaseLineEdit(const QAbstractSpinBox* self);
void QAbstractSpinBox_SetLineEdit(QAbstractSpinBox* self, QLineEdit* edit);
void QAbstractSpinBox_OnSetLineEdit(QAbstractSpinBox* self, intptr_t slot);
void QAbstractSpinBox_QBaseSetLineEdit(QAbstractSpinBox* self, QLineEdit* edit);
void QAbstractSpinBox_Delete(QAbstractSpinBox* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
