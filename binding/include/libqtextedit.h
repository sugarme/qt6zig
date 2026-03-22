#pragma once
#ifndef QTEXTEDIT_H_C_LIB
#define QTEXTEDIT_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QTextEdit__ExtraSelection)
typedef QTextEdit::ExtraSelection QTextEdit__ExtraSelection;
#endif
#else
typedef struct QAbstractScrollArea QAbstractScrollArea;
typedef struct QColor QColor;
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QDragEnterEvent QDragEnterEvent;
typedef struct QDragLeaveEvent QDragLeaveEvent;
typedef struct QDragMoveEvent QDragMoveEvent;
typedef struct QDropEvent QDropEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QFont QFont;
typedef struct QInputMethodEvent QInputMethodEvent;
typedef struct QKeyEvent QKeyEvent;
typedef struct QMenu QMenu;
typedef struct QMimeData QMimeData;
typedef struct QMouseEvent QMouseEvent;
typedef struct QPagedPaintDevice QPagedPaintDevice;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPoint QPoint;
typedef struct QRect QRect;
typedef struct QRegularExpression QRegularExpression;
typedef struct QResizeEvent QResizeEvent;
typedef struct QShowEvent QShowEvent;
typedef struct QTextCharFormat QTextCharFormat;
typedef struct QTextCursor QTextCursor;
typedef struct QTextDocument QTextDocument;
typedef struct QTextEdit QTextEdit;
typedef struct QTextEdit__ExtraSelection QTextEdit__ExtraSelection;
typedef struct QTimerEvent QTimerEvent;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
typedef struct QWheelEvent QWheelEvent;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif




QTextEdit* QTextEdit_new(QWidget* parent);
QTextEdit* QTextEdit_new2();
QTextEdit* QTextEdit_new3(const libqt_string text);
QTextEdit* QTextEdit_new4(const libqt_string text, QWidget* parent);
libqt_string QTextEdit_Tr(const char* s);
void QTextEdit_SetDocument(QTextEdit* self, QTextDocument* document);
QTextDocument* QTextEdit_Document(const QTextEdit* self);
void QTextEdit_SetPlaceholderText(QTextEdit* self, const libqt_string placeholderText);
libqt_string QTextEdit_PlaceholderText(const QTextEdit* self);
void QTextEdit_SetTextCursor(QTextEdit* self, const QTextCursor* cursor);
QTextCursor* QTextEdit_TextCursor(const QTextEdit* self);
bool QTextEdit_IsReadOnly(const QTextEdit* self);
void QTextEdit_SetReadOnly(QTextEdit* self, bool ro);
void QTextEdit_SetTextInteractionFlags(QTextEdit* self, int flags);
int QTextEdit_TextInteractionFlags(const QTextEdit* self);
double QTextEdit_FontPointSize(const QTextEdit* self);
libqt_string QTextEdit_FontFamily(const QTextEdit* self);
int QTextEdit_FontWeight(const QTextEdit* self);
bool QTextEdit_FontUnderline(const QTextEdit* self);
bool QTextEdit_FontItalic(const QTextEdit* self);
QColor* QTextEdit_TextColor(const QTextEdit* self);
QColor* QTextEdit_TextBackgroundColor(const QTextEdit* self);
QFont* QTextEdit_CurrentFont(const QTextEdit* self);
int QTextEdit_Alignment(const QTextEdit* self);
void QTextEdit_MergeCurrentCharFormat(QTextEdit* self, const QTextCharFormat* modifier);
void QTextEdit_SetCurrentCharFormat(QTextEdit* self, const QTextCharFormat* format);
QTextCharFormat* QTextEdit_CurrentCharFormat(const QTextEdit* self);
int QTextEdit_AutoFormatting(const QTextEdit* self);
void QTextEdit_SetAutoFormatting(QTextEdit* self, int features);
bool QTextEdit_TabChangesFocus(const QTextEdit* self);
void QTextEdit_SetTabChangesFocus(QTextEdit* self, bool b);
void QTextEdit_SetDocumentTitle(QTextEdit* self, const libqt_string title);
libqt_string QTextEdit_DocumentTitle(const QTextEdit* self);
bool QTextEdit_IsUndoRedoEnabled(const QTextEdit* self);
void QTextEdit_SetUndoRedoEnabled(QTextEdit* self, bool enable);
int QTextEdit_LineWrapMode(const QTextEdit* self);
void QTextEdit_SetLineWrapMode(QTextEdit* self, int mode);
int QTextEdit_LineWrapColumnOrWidth(const QTextEdit* self);
void QTextEdit_SetLineWrapColumnOrWidth(QTextEdit* self, int w);
int QTextEdit_WordWrapMode(const QTextEdit* self);
void QTextEdit_SetWordWrapMode(QTextEdit* self, int policy);
bool QTextEdit_Find(QTextEdit* self, const libqt_string exp);
bool QTextEdit_Find2(QTextEdit* self, const QRegularExpression* exp);
libqt_string QTextEdit_ToPlainText(const QTextEdit* self);
libqt_string QTextEdit_ToHtml(const QTextEdit* self);
libqt_string QTextEdit_ToMarkdown(const QTextEdit* self);
void QTextEdit_EnsureCursorVisible(QTextEdit* self);
QVariant* QTextEdit_LoadResource(QTextEdit* self, int typeVal, const QUrl* name);
QMenu* QTextEdit_CreateStandardContextMenu(QTextEdit* self);
QMenu* QTextEdit_CreateStandardContextMenu2(QTextEdit* self, const QPoint* position);
QTextCursor* QTextEdit_CursorForPosition(const QTextEdit* self, const QPoint* pos);
QRect* QTextEdit_CursorRect(const QTextEdit* self, const QTextCursor* cursor);
QRect* QTextEdit_CursorRect2(const QTextEdit* self);
libqt_string QTextEdit_AnchorAt(const QTextEdit* self, const QPoint* pos);
bool QTextEdit_OverwriteMode(const QTextEdit* self);
void QTextEdit_SetOverwriteMode(QTextEdit* self, bool overwrite);
double QTextEdit_TabStopDistance(const QTextEdit* self);
void QTextEdit_SetTabStopDistance(QTextEdit* self, double distance);
int QTextEdit_CursorWidth(const QTextEdit* self);
void QTextEdit_SetCursorWidth(QTextEdit* self, int width);
bool QTextEdit_AcceptRichText(const QTextEdit* self);
void QTextEdit_SetAcceptRichText(QTextEdit* self, bool accept);
void QTextEdit_SetExtraSelections(QTextEdit* self, const libqt_list selections);
libqt_list QTextEdit_ExtraSelections(const QTextEdit* self);
void QTextEdit_MoveCursor(QTextEdit* self, int operation);
bool QTextEdit_CanPaste(const QTextEdit* self);
void QTextEdit_Print(const QTextEdit* self, QPagedPaintDevice* printer);
QVariant* QTextEdit_InputMethodQuery(const QTextEdit* self, int property);
QVariant* QTextEdit_InputMethodQuery2(const QTextEdit* self, int query, QVariant* argument);
void QTextEdit_SetFontPointSize(QTextEdit* self, double s);
void QTextEdit_SetFontFamily(QTextEdit* self, const libqt_string fontFamily);
void QTextEdit_SetFontWeight(QTextEdit* self, int w);
void QTextEdit_SetFontUnderline(QTextEdit* self, bool b);
void QTextEdit_SetFontItalic(QTextEdit* self, bool b);
void QTextEdit_SetTextColor(QTextEdit* self, const QColor* c);
void QTextEdit_SetTextBackgroundColor(QTextEdit* self, const QColor* c);
void QTextEdit_SetCurrentFont(QTextEdit* self, const QFont* f);
void QTextEdit_SetAlignment(QTextEdit* self, int a);
void QTextEdit_SetPlainText(QTextEdit* self, const libqt_string text);
void QTextEdit_SetHtml(QTextEdit* self, const libqt_string text);
void QTextEdit_SetMarkdown(QTextEdit* self, const libqt_string markdown);
void QTextEdit_SetText(QTextEdit* self, const libqt_string text);
void QTextEdit_Cut(QTextEdit* self);
void QTextEdit_Copy(QTextEdit* self);
void QTextEdit_Paste(QTextEdit* self);
void QTextEdit_Undo(QTextEdit* self);
void QTextEdit_Redo(QTextEdit* self);
void QTextEdit_Clear(QTextEdit* self);
void QTextEdit_SelectAll(QTextEdit* self);
void QTextEdit_InsertPlainText(QTextEdit* self, const libqt_string text);
void QTextEdit_InsertHtml(QTextEdit* self, const libqt_string text);
void QTextEdit_Append(QTextEdit* self, const libqt_string text);
void QTextEdit_ScrollToAnchor(QTextEdit* self, const libqt_string name);
void QTextEdit_ZoomIn(QTextEdit* self);
void QTextEdit_ZoomOut(QTextEdit* self);
void QTextEdit_TextChanged(QTextEdit* self);
void QTextEdit_Connect_TextChanged(QTextEdit* self, intptr_t slot);
void QTextEdit_UndoAvailable(QTextEdit* self, bool b);
void QTextEdit_Connect_UndoAvailable(QTextEdit* self, intptr_t slot);
void QTextEdit_RedoAvailable(QTextEdit* self, bool b);
void QTextEdit_Connect_RedoAvailable(QTextEdit* self, intptr_t slot);
void QTextEdit_CurrentCharFormatChanged(QTextEdit* self, const QTextCharFormat* format);
void QTextEdit_Connect_CurrentCharFormatChanged(QTextEdit* self, intptr_t slot);
void QTextEdit_CopyAvailable(QTextEdit* self, bool b);
void QTextEdit_Connect_CopyAvailable(QTextEdit* self, intptr_t slot);
void QTextEdit_SelectionChanged(QTextEdit* self);
void QTextEdit_Connect_SelectionChanged(QTextEdit* self, intptr_t slot);
void QTextEdit_CursorPositionChanged(QTextEdit* self);
void QTextEdit_Connect_CursorPositionChanged(QTextEdit* self, intptr_t slot);
bool QTextEdit_Event(QTextEdit* self, QEvent* e);
void QTextEdit_TimerEvent(QTextEdit* self, QTimerEvent* e);
void QTextEdit_KeyPressEvent(QTextEdit* self, QKeyEvent* e);
void QTextEdit_KeyReleaseEvent(QTextEdit* self, QKeyEvent* e);
void QTextEdit_ResizeEvent(QTextEdit* self, QResizeEvent* e);
void QTextEdit_PaintEvent(QTextEdit* self, QPaintEvent* e);
void QTextEdit_MousePressEvent(QTextEdit* self, QMouseEvent* e);
void QTextEdit_MouseMoveEvent(QTextEdit* self, QMouseEvent* e);
void QTextEdit_MouseReleaseEvent(QTextEdit* self, QMouseEvent* e);
void QTextEdit_MouseDoubleClickEvent(QTextEdit* self, QMouseEvent* e);
bool QTextEdit_FocusNextPrevChild(QTextEdit* self, bool next);
void QTextEdit_ContextMenuEvent(QTextEdit* self, QContextMenuEvent* e);
void QTextEdit_DragEnterEvent(QTextEdit* self, QDragEnterEvent* e);
void QTextEdit_DragLeaveEvent(QTextEdit* self, QDragLeaveEvent* e);
void QTextEdit_DragMoveEvent(QTextEdit* self, QDragMoveEvent* e);
void QTextEdit_DropEvent(QTextEdit* self, QDropEvent* e);
void QTextEdit_FocusInEvent(QTextEdit* self, QFocusEvent* e);
void QTextEdit_FocusOutEvent(QTextEdit* self, QFocusEvent* e);
void QTextEdit_ShowEvent(QTextEdit* self, QShowEvent* param1);
void QTextEdit_ChangeEvent(QTextEdit* self, QEvent* e);
void QTextEdit_WheelEvent(QTextEdit* self, QWheelEvent* e);
QMimeData* QTextEdit_CreateMimeDataFromSelection(const QTextEdit* self);
bool QTextEdit_CanInsertFromMimeData(const QTextEdit* self, const QMimeData* source);
void QTextEdit_InsertFromMimeData(QTextEdit* self, const QMimeData* source);
void QTextEdit_InputMethodEvent(QTextEdit* self, QInputMethodEvent* param1);
void QTextEdit_ScrollContentsBy(QTextEdit* self, int dx, int dy);
void QTextEdit_DoSetTextCursor(QTextEdit* self, const QTextCursor* cursor);
libqt_string QTextEdit_Tr2(const char* s, const char* c);
libqt_string QTextEdit_Tr3(const char* s, const char* c, int n);
bool QTextEdit_Find22(QTextEdit* self, const libqt_string exp, int options);
bool QTextEdit_Find23(QTextEdit* self, const QRegularExpression* exp, int options);
libqt_string QTextEdit_ToMarkdown1(const QTextEdit* self, int features);
void QTextEdit_MoveCursor2(QTextEdit* self, int operation, int mode);
void QTextEdit_ZoomIn1(QTextEdit* self, int range);
void QTextEdit_ZoomOut1(QTextEdit* self, int range);
void QTextEdit_OnLoadResource(QTextEdit* self, intptr_t slot);
QVariant* QTextEdit_QBaseLoadResource(QTextEdit* self, int typeVal, const QUrl* name);
void QTextEdit_OnInputMethodQuery(const QTextEdit* self, intptr_t slot);
QVariant* QTextEdit_QBaseInputMethodQuery(const QTextEdit* self, int property);
void QTextEdit_OnEvent(QTextEdit* self, intptr_t slot);
bool QTextEdit_QBaseEvent(QTextEdit* self, QEvent* e);
void QTextEdit_OnTimerEvent(QTextEdit* self, intptr_t slot);
void QTextEdit_QBaseTimerEvent(QTextEdit* self, QTimerEvent* e);
void QTextEdit_OnKeyPressEvent(QTextEdit* self, intptr_t slot);
void QTextEdit_QBaseKeyPressEvent(QTextEdit* self, QKeyEvent* e);
void QTextEdit_OnKeyReleaseEvent(QTextEdit* self, intptr_t slot);
void QTextEdit_QBaseKeyReleaseEvent(QTextEdit* self, QKeyEvent* e);
void QTextEdit_OnResizeEvent(QTextEdit* self, intptr_t slot);
void QTextEdit_QBaseResizeEvent(QTextEdit* self, QResizeEvent* e);
void QTextEdit_OnPaintEvent(QTextEdit* self, intptr_t slot);
void QTextEdit_QBasePaintEvent(QTextEdit* self, QPaintEvent* e);
void QTextEdit_OnMousePressEvent(QTextEdit* self, intptr_t slot);
void QTextEdit_QBaseMousePressEvent(QTextEdit* self, QMouseEvent* e);
void QTextEdit_OnMouseMoveEvent(QTextEdit* self, intptr_t slot);
void QTextEdit_QBaseMouseMoveEvent(QTextEdit* self, QMouseEvent* e);
void QTextEdit_OnMouseReleaseEvent(QTextEdit* self, intptr_t slot);
void QTextEdit_QBaseMouseReleaseEvent(QTextEdit* self, QMouseEvent* e);
void QTextEdit_OnMouseDoubleClickEvent(QTextEdit* self, intptr_t slot);
void QTextEdit_QBaseMouseDoubleClickEvent(QTextEdit* self, QMouseEvent* e);
void QTextEdit_OnFocusNextPrevChild(QTextEdit* self, intptr_t slot);
bool QTextEdit_QBaseFocusNextPrevChild(QTextEdit* self, bool next);
void QTextEdit_OnContextMenuEvent(QTextEdit* self, intptr_t slot);
void QTextEdit_QBaseContextMenuEvent(QTextEdit* self, QContextMenuEvent* e);
void QTextEdit_OnDragEnterEvent(QTextEdit* self, intptr_t slot);
void QTextEdit_QBaseDragEnterEvent(QTextEdit* self, QDragEnterEvent* e);
void QTextEdit_OnDragLeaveEvent(QTextEdit* self, intptr_t slot);
void QTextEdit_QBaseDragLeaveEvent(QTextEdit* self, QDragLeaveEvent* e);
void QTextEdit_OnDragMoveEvent(QTextEdit* self, intptr_t slot);
void QTextEdit_QBaseDragMoveEvent(QTextEdit* self, QDragMoveEvent* e);
void QTextEdit_OnDropEvent(QTextEdit* self, intptr_t slot);
void QTextEdit_QBaseDropEvent(QTextEdit* self, QDropEvent* e);
void QTextEdit_OnFocusInEvent(QTextEdit* self, intptr_t slot);
void QTextEdit_QBaseFocusInEvent(QTextEdit* self, QFocusEvent* e);
void QTextEdit_OnFocusOutEvent(QTextEdit* self, intptr_t slot);
void QTextEdit_QBaseFocusOutEvent(QTextEdit* self, QFocusEvent* e);
void QTextEdit_OnShowEvent(QTextEdit* self, intptr_t slot);
void QTextEdit_QBaseShowEvent(QTextEdit* self, QShowEvent* param1);
void QTextEdit_OnChangeEvent(QTextEdit* self, intptr_t slot);
void QTextEdit_QBaseChangeEvent(QTextEdit* self, QEvent* e);
void QTextEdit_OnWheelEvent(QTextEdit* self, intptr_t slot);
void QTextEdit_QBaseWheelEvent(QTextEdit* self, QWheelEvent* e);
void QTextEdit_OnCreateMimeDataFromSelection(const QTextEdit* self, intptr_t slot);
QMimeData* QTextEdit_QBaseCreateMimeDataFromSelection(const QTextEdit* self);
void QTextEdit_OnCanInsertFromMimeData(const QTextEdit* self, intptr_t slot);
bool QTextEdit_QBaseCanInsertFromMimeData(const QTextEdit* self, const QMimeData* source);
void QTextEdit_OnInsertFromMimeData(QTextEdit* self, intptr_t slot);
void QTextEdit_QBaseInsertFromMimeData(QTextEdit* self, const QMimeData* source);
void QTextEdit_OnInputMethodEvent(QTextEdit* self, intptr_t slot);
void QTextEdit_QBaseInputMethodEvent(QTextEdit* self, QInputMethodEvent* param1);
void QTextEdit_OnScrollContentsBy(QTextEdit* self, intptr_t slot);
void QTextEdit_QBaseScrollContentsBy(QTextEdit* self, int dx, int dy);
void QTextEdit_OnDoSetTextCursor(QTextEdit* self, intptr_t slot);
void QTextEdit_QBaseDoSetTextCursor(QTextEdit* self, const QTextCursor* cursor);
void QTextEdit_ZoomInF(QTextEdit* self, float range);
void QTextEdit_OnZoomInF(QTextEdit* self, intptr_t slot);
void QTextEdit_QBaseZoomInF(QTextEdit* self, float range);
void QTextEdit_Delete(QTextEdit* self);

QTextEdit__ExtraSelection* QTextEdit__ExtraSelection_new(const QTextEdit__ExtraSelection* param1);
QTextCursor* QTextEdit__ExtraSelection_Cursor(const QTextEdit__ExtraSelection* self);
void QTextEdit__ExtraSelection_SetCursor(QTextEdit__ExtraSelection* self, QTextCursor* cursor);
QTextCharFormat* QTextEdit__ExtraSelection_Format(const QTextEdit__ExtraSelection* self);
void QTextEdit__ExtraSelection_SetFormat(QTextEdit__ExtraSelection* self, QTextCharFormat* format);
void QTextEdit__ExtraSelection_OperatorAssign(QTextEdit__ExtraSelection* self, const QTextEdit__ExtraSelection* param1);
void QTextEdit__ExtraSelection_Delete(QTextEdit__ExtraSelection* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
