#pragma once
#ifndef QKEYSEQUENCEEDIT_H_C_LIB
#define QKEYSEQUENCEEDIT_H_C_LIB

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
typedef struct QFocusEvent QFocusEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QKeySequence QKeySequence;
typedef struct QKeySequenceEdit QKeySequenceEdit;
typedef struct QTimerEvent QTimerEvent;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QKeySequenceEdit* QKeySequenceEdit_new(QWidget* parent);
QKeySequenceEdit* QKeySequenceEdit_new2();
QKeySequenceEdit* QKeySequenceEdit_new3(const QKeySequence* keySequence);
QKeySequenceEdit* QKeySequenceEdit_new4(const QKeySequence* keySequence, QWidget* parent);
libqt_string QKeySequenceEdit_Tr(const char* s);
QKeySequence* QKeySequenceEdit_KeySequence(const QKeySequenceEdit* self);
ptrdiff_t QKeySequenceEdit_MaximumSequenceLength(const QKeySequenceEdit* self);
void QKeySequenceEdit_SetClearButtonEnabled(QKeySequenceEdit* self, bool enable);
bool QKeySequenceEdit_IsClearButtonEnabled(const QKeySequenceEdit* self);
void QKeySequenceEdit_SetFinishingKeyCombinations(QKeySequenceEdit* self, const libqt_list finishingKeyCombinations);
libqt_list QKeySequenceEdit_FinishingKeyCombinations(const QKeySequenceEdit* self);
void QKeySequenceEdit_SetKeySequence(QKeySequenceEdit* self, const QKeySequence* keySequence);
void QKeySequenceEdit_Clear(QKeySequenceEdit* self);
void QKeySequenceEdit_SetMaximumSequenceLength(QKeySequenceEdit* self, ptrdiff_t count);
void QKeySequenceEdit_EditingFinished(QKeySequenceEdit* self);
void QKeySequenceEdit_Connect_EditingFinished(QKeySequenceEdit* self, intptr_t slot);
void QKeySequenceEdit_KeySequenceChanged(QKeySequenceEdit* self, const QKeySequence* keySequence);
void QKeySequenceEdit_Connect_KeySequenceChanged(QKeySequenceEdit* self, intptr_t slot);
bool QKeySequenceEdit_Event(QKeySequenceEdit* self, QEvent* param1);
void QKeySequenceEdit_KeyPressEvent(QKeySequenceEdit* self, QKeyEvent* param1);
void QKeySequenceEdit_KeyReleaseEvent(QKeySequenceEdit* self, QKeyEvent* param1);
void QKeySequenceEdit_TimerEvent(QKeySequenceEdit* self, QTimerEvent* param1);
void QKeySequenceEdit_FocusOutEvent(QKeySequenceEdit* self, QFocusEvent* param1);
libqt_string QKeySequenceEdit_Tr2(const char* s, const char* c);
libqt_string QKeySequenceEdit_Tr3(const char* s, const char* c, int n);
void QKeySequenceEdit_OnEvent(QKeySequenceEdit* self, intptr_t slot);
bool QKeySequenceEdit_QBaseEvent(QKeySequenceEdit* self, QEvent* param1);
void QKeySequenceEdit_OnKeyPressEvent(QKeySequenceEdit* self, intptr_t slot);
void QKeySequenceEdit_QBaseKeyPressEvent(QKeySequenceEdit* self, QKeyEvent* param1);
void QKeySequenceEdit_OnKeyReleaseEvent(QKeySequenceEdit* self, intptr_t slot);
void QKeySequenceEdit_QBaseKeyReleaseEvent(QKeySequenceEdit* self, QKeyEvent* param1);
void QKeySequenceEdit_OnTimerEvent(QKeySequenceEdit* self, intptr_t slot);
void QKeySequenceEdit_QBaseTimerEvent(QKeySequenceEdit* self, QTimerEvent* param1);
void QKeySequenceEdit_OnFocusOutEvent(QKeySequenceEdit* self, intptr_t slot);
void QKeySequenceEdit_QBaseFocusOutEvent(QKeySequenceEdit* self, QFocusEvent* param1);
void QKeySequenceEdit_Delete(QKeySequenceEdit* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
