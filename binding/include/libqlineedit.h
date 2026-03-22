#pragma once
#ifndef QLINEEDIT_H_C_LIB
#define QLINEEDIT_H_C_LIB

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
typedef struct QCompleter QCompleter;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QIcon QIcon;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QLineEdit QLineEdit;
typedef struct QMargins QMargins;
typedef struct QMenu QMenu;
typedef struct QMouseEvent QMouseEvent;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QSize QSize;
typedef struct QStyleOptionFrame QStyleOptionFrame;
typedef struct QTimerEvent QTimerEvent;
typedef struct QValidator QValidator;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif




QLineEdit* QLineEdit_new(QWidget* parent);
QLineEdit* QLineEdit_new2();
QLineEdit* QLineEdit_new3(const libqt_string param1);
QLineEdit* QLineEdit_new4(const libqt_string param1, QWidget* parent);
libqt_string QLineEdit_Tr(const char* s);
libqt_string QLineEdit_Text(const QLineEdit* self);
libqt_string QLineEdit_DisplayText(const QLineEdit* self);
libqt_string QLineEdit_PlaceholderText(const QLineEdit* self);
void QLineEdit_SetPlaceholderText(QLineEdit* self, const libqt_string placeholderText);
int QLineEdit_MaxLength(const QLineEdit* self);
void QLineEdit_SetMaxLength(QLineEdit* self, int maxLength);
void QLineEdit_SetFrame(QLineEdit* self, bool frame);
bool QLineEdit_HasFrame(const QLineEdit* self);
void QLineEdit_SetClearButtonEnabled(QLineEdit* self, bool enable);
bool QLineEdit_IsClearButtonEnabled(const QLineEdit* self);
int QLineEdit_EchoMode(const QLineEdit* self);
void QLineEdit_SetEchoMode(QLineEdit* self, int echoMode);
bool QLineEdit_IsReadOnly(const QLineEdit* self);
void QLineEdit_SetReadOnly(QLineEdit* self, bool readOnly);
void QLineEdit_SetValidator(QLineEdit* self, const QValidator* validator);
const QValidator* QLineEdit_Validator(const QLineEdit* self);
void QLineEdit_SetCompleter(QLineEdit* self, QCompleter* completer);
QCompleter* QLineEdit_Completer(const QLineEdit* self);
QSize* QLineEdit_SizeHint(const QLineEdit* self);
QSize* QLineEdit_MinimumSizeHint(const QLineEdit* self);
int QLineEdit_CursorPosition(const QLineEdit* self);
void QLineEdit_SetCursorPosition(QLineEdit* self, int cursorPosition);
int QLineEdit_CursorPositionAt(QLineEdit* self, const QPoint* pos);
void QLineEdit_SetAlignment(QLineEdit* self, int flag);
int QLineEdit_Alignment(const QLineEdit* self);
void QLineEdit_CursorForward(QLineEdit* self, bool mark);
void QLineEdit_CursorBackward(QLineEdit* self, bool mark);
void QLineEdit_CursorWordForward(QLineEdit* self, bool mark);
void QLineEdit_CursorWordBackward(QLineEdit* self, bool mark);
void QLineEdit_Backspace(QLineEdit* self);
void QLineEdit_Del(QLineEdit* self);
void QLineEdit_Home(QLineEdit* self, bool mark);
void QLineEdit_End(QLineEdit* self, bool mark);
bool QLineEdit_IsModified(const QLineEdit* self);
void QLineEdit_SetModified(QLineEdit* self, bool modified);
void QLineEdit_SetSelection(QLineEdit* self, int param1, int param2);
bool QLineEdit_HasSelectedText(const QLineEdit* self);
libqt_string QLineEdit_SelectedText(const QLineEdit* self);
int QLineEdit_SelectionStart(const QLineEdit* self);
int QLineEdit_SelectionEnd(const QLineEdit* self);
int QLineEdit_SelectionLength(const QLineEdit* self);
bool QLineEdit_IsUndoAvailable(const QLineEdit* self);
bool QLineEdit_IsRedoAvailable(const QLineEdit* self);
void QLineEdit_SetDragEnabled(QLineEdit* self, bool b);
bool QLineEdit_DragEnabled(const QLineEdit* self);
void QLineEdit_SetCursorMoveStyle(QLineEdit* self, int style);
int QLineEdit_CursorMoveStyle(const QLineEdit* self);
libqt_string QLineEdit_InputMask(const QLineEdit* self);
void QLineEdit_SetInputMask(QLineEdit* self, const libqt_string inputMask);
bool QLineEdit_HasAcceptableInput(const QLineEdit* self);
void QLineEdit_SetTextMargins(QLineEdit* self, int left, int top, int right, int bottom);
void QLineEdit_SetTextMargins2(QLineEdit* self, const QMargins* margins);
QMargins* QLineEdit_TextMargins(const QLineEdit* self);
void QLineEdit_AddAction(QLineEdit* self, QAction* action, int position);
QAction* QLineEdit_AddAction2(QLineEdit* self, const QIcon* icon, int position);
void QLineEdit_SetText(QLineEdit* self, const libqt_string text);
void QLineEdit_Clear(QLineEdit* self);
void QLineEdit_SelectAll(QLineEdit* self);
void QLineEdit_Undo(QLineEdit* self);
void QLineEdit_Redo(QLineEdit* self);
void QLineEdit_Cut(QLineEdit* self);
void QLineEdit_Copy(const QLineEdit* self);
void QLineEdit_Paste(QLineEdit* self);
void QLineEdit_Deselect(QLineEdit* self);
void QLineEdit_Insert(QLineEdit* self, const libqt_string param1);
QMenu* QLineEdit_CreateStandardContextMenu(QLineEdit* self);
void QLineEdit_TextChanged(QLineEdit* self, const libqt_string param1);
void QLineEdit_Connect_TextChanged(QLineEdit* self, intptr_t slot);
void QLineEdit_TextEdited(QLineEdit* self, const libqt_string param1);
void QLineEdit_Connect_TextEdited(QLineEdit* self, intptr_t slot);
void QLineEdit_CursorPositionChanged(QLineEdit* self, int param1, int param2);
void QLineEdit_Connect_CursorPositionChanged(QLineEdit* self, intptr_t slot);
void QLineEdit_ReturnPressed(QLineEdit* self);
void QLineEdit_Connect_ReturnPressed(QLineEdit* self, intptr_t slot);
void QLineEdit_EditingFinished(QLineEdit* self);
void QLineEdit_Connect_EditingFinished(QLineEdit* self, intptr_t slot);
void QLineEdit_SelectionChanged(QLineEdit* self);
void QLineEdit_Connect_SelectionChanged(QLineEdit* self, intptr_t slot);
void QLineEdit_InputRejected(QLineEdit* self);
void QLineEdit_Connect_InputRejected(QLineEdit* self, intptr_t slot);
void QLineEdit_MousePressEvent(QLineEdit* self, QMouseEvent* param1);
void QLineEdit_MouseMoveEvent(QLineEdit* self, QMouseEvent* param1);
void QLineEdit_MouseReleaseEvent(QLineEdit* self, QMouseEvent* param1);
void QLineEdit_MouseDoubleClickEvent(QLineEdit* self, QMouseEvent* param1);
void QLineEdit_KeyPressEvent(QLineEdit* self, QKeyEvent* param1);
void QLineEdit_KeyReleaseEvent(QLineEdit* self, QKeyEvent* param1);
void QLineEdit_FocusInEvent(QLineEdit* self, QFocusEvent* param1);
void QLineEdit_FocusOutEvent(QLineEdit* self, QFocusEvent* param1);
void QLineEdit_PaintEvent(QLineEdit* self, QPaintEvent* param1);
void QLineEdit_DragEnterEvent(QLineEdit* self, QDragEnterEvent* param1);
void QLineEdit_DragMoveEvent(QLineEdit* self, QDragMoveEvent* e);
void QLineEdit_DragLeaveEvent(QLineEdit* self, QDragLeaveEvent* e);
void QLineEdit_DropEvent(QLineEdit* self, QDropEvent* param1);
void QLineEdit_ChangeEvent(QLineEdit* self, QEvent* param1);
void QLineEdit_ContextMenuEvent(QLineEdit* self, QContextMenuEvent* param1);
void QLineEdit_InputMethodEvent(QLineEdit* self, QInputMethodEvent* param1);
void QLineEdit_InitStyleOption(const QLineEdit* self, QStyleOptionFrame* option);
QVariant* QLineEdit_InputMethodQuery(const QLineEdit* self, int param1);
QVariant* QLineEdit_InputMethodQuery2(const QLineEdit* self, int property, QVariant* argument);
void QLineEdit_TimerEvent(QLineEdit* self, QTimerEvent* param1);
bool QLineEdit_Event(QLineEdit* self, QEvent* param1);
libqt_string QLineEdit_Tr2(const char* s, const char* c);
libqt_string QLineEdit_Tr3(const char* s, const char* c, int n);
void QLineEdit_CursorForward2(QLineEdit* self, bool mark, int steps);
void QLineEdit_CursorBackward2(QLineEdit* self, bool mark, int steps);
void QLineEdit_OnSizeHint(const QLineEdit* self, intptr_t slot);
QSize* QLineEdit_QBaseSizeHint(const QLineEdit* self);
void QLineEdit_OnMinimumSizeHint(const QLineEdit* self, intptr_t slot);
QSize* QLineEdit_QBaseMinimumSizeHint(const QLineEdit* self);
void QLineEdit_OnMousePressEvent(QLineEdit* self, intptr_t slot);
void QLineEdit_QBaseMousePressEvent(QLineEdit* self, QMouseEvent* param1);
void QLineEdit_OnMouseMoveEvent(QLineEdit* self, intptr_t slot);
void QLineEdit_QBaseMouseMoveEvent(QLineEdit* self, QMouseEvent* param1);
void QLineEdit_OnMouseReleaseEvent(QLineEdit* self, intptr_t slot);
void QLineEdit_QBaseMouseReleaseEvent(QLineEdit* self, QMouseEvent* param1);
void QLineEdit_OnMouseDoubleClickEvent(QLineEdit* self, intptr_t slot);
void QLineEdit_QBaseMouseDoubleClickEvent(QLineEdit* self, QMouseEvent* param1);
void QLineEdit_OnKeyPressEvent(QLineEdit* self, intptr_t slot);
void QLineEdit_QBaseKeyPressEvent(QLineEdit* self, QKeyEvent* param1);
void QLineEdit_OnKeyReleaseEvent(QLineEdit* self, intptr_t slot);
void QLineEdit_QBaseKeyReleaseEvent(QLineEdit* self, QKeyEvent* param1);
void QLineEdit_OnFocusInEvent(QLineEdit* self, intptr_t slot);
void QLineEdit_QBaseFocusInEvent(QLineEdit* self, QFocusEvent* param1);
void QLineEdit_OnFocusOutEvent(QLineEdit* self, intptr_t slot);
void QLineEdit_QBaseFocusOutEvent(QLineEdit* self, QFocusEvent* param1);
void QLineEdit_OnPaintEvent(QLineEdit* self, intptr_t slot);
void QLineEdit_QBasePaintEvent(QLineEdit* self, QPaintEvent* param1);
void QLineEdit_OnDragEnterEvent(QLineEdit* self, intptr_t slot);
void QLineEdit_QBaseDragEnterEvent(QLineEdit* self, QDragEnterEvent* param1);
void QLineEdit_OnDragMoveEvent(QLineEdit* self, intptr_t slot);
void QLineEdit_QBaseDragMoveEvent(QLineEdit* self, QDragMoveEvent* e);
void QLineEdit_OnDragLeaveEvent(QLineEdit* self, intptr_t slot);
void QLineEdit_QBaseDragLeaveEvent(QLineEdit* self, QDragLeaveEvent* e);
void QLineEdit_OnDropEvent(QLineEdit* self, intptr_t slot);
void QLineEdit_QBaseDropEvent(QLineEdit* self, QDropEvent* param1);
void QLineEdit_OnChangeEvent(QLineEdit* self, intptr_t slot);
void QLineEdit_QBaseChangeEvent(QLineEdit* self, QEvent* param1);
void QLineEdit_OnContextMenuEvent(QLineEdit* self, intptr_t slot);
void QLineEdit_QBaseContextMenuEvent(QLineEdit* self, QContextMenuEvent* param1);
void QLineEdit_OnInputMethodEvent(QLineEdit* self, intptr_t slot);
void QLineEdit_QBaseInputMethodEvent(QLineEdit* self, QInputMethodEvent* param1);
void QLineEdit_OnInitStyleOption(const QLineEdit* self, intptr_t slot);
void QLineEdit_QBaseInitStyleOption(const QLineEdit* self, QStyleOptionFrame* option);
void QLineEdit_OnInputMethodQuery(const QLineEdit* self, intptr_t slot);
QVariant* QLineEdit_QBaseInputMethodQuery(const QLineEdit* self, int param1);
void QLineEdit_OnTimerEvent(QLineEdit* self, intptr_t slot);
void QLineEdit_QBaseTimerEvent(QLineEdit* self, QTimerEvent* param1);
void QLineEdit_OnEvent(QLineEdit* self, intptr_t slot);
bool QLineEdit_QBaseEvent(QLineEdit* self, QEvent* param1);
QRect* QLineEdit_CursorRect(const QLineEdit* self);
void QLineEdit_OnCursorRect(const QLineEdit* self, intptr_t slot);
QRect* QLineEdit_QBaseCursorRect(const QLineEdit* self);
void QLineEdit_Delete(QLineEdit* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
