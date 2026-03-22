#pragma once
#ifndef QLABEL_H_C_LIB
#define QLABEL_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QContextMenuEvent QContextMenuEvent;
typedef struct QEvent QEvent;
typedef struct QFocusEvent QFocusEvent;
typedef struct QFrame QFrame;
typedef struct QKeyEvent QKeyEvent;
typedef struct QLabel QLabel;
typedef struct QMouseEvent QMouseEvent;
typedef struct QMovie QMovie;
typedef struct QPaintEvent QPaintEvent;
typedef struct QPicture QPicture;
typedef struct QPixmap QPixmap;
typedef struct QSize QSize;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QLabel* QLabel_new(QWidget* parent);
QLabel* QLabel_new2();
QLabel* QLabel_new3(const libqt_string text);
QLabel* QLabel_new4(QWidget* parent, int f);
QLabel* QLabel_new5(const libqt_string text, QWidget* parent);
QLabel* QLabel_new6(const libqt_string text, QWidget* parent, int f);
libqt_string QLabel_Tr(const char* s);
libqt_string QLabel_Text(const QLabel* self);
QPixmap* QLabel_Pixmap(const QLabel* self, int param1);
QPixmap* QLabel_Pixmap2(const QLabel* self);
QPicture* QLabel_Picture(const QLabel* self, int param1);
QPicture* QLabel_Picture2(const QLabel* self);
QMovie* QLabel_Movie(const QLabel* self);
int QLabel_TextFormat(const QLabel* self);
void QLabel_SetTextFormat(QLabel* self, int textFormat);
int QLabel_Alignment(const QLabel* self);
void QLabel_SetAlignment(QLabel* self, int alignment);
void QLabel_SetWordWrap(QLabel* self, bool on);
bool QLabel_WordWrap(const QLabel* self);
int QLabel_Indent(const QLabel* self);
void QLabel_SetIndent(QLabel* self, int indent);
int QLabel_Margin(const QLabel* self);
void QLabel_SetMargin(QLabel* self, int margin);
bool QLabel_HasScaledContents(const QLabel* self);
void QLabel_SetScaledContents(QLabel* self, bool scaledContents);
QSize* QLabel_SizeHint(const QLabel* self);
QSize* QLabel_MinimumSizeHint(const QLabel* self);
void QLabel_SetBuddy(QLabel* self, QWidget* buddy);
QWidget* QLabel_Buddy(const QLabel* self);
int QLabel_HeightForWidth(const QLabel* self, int param1);
bool QLabel_OpenExternalLinks(const QLabel* self);
void QLabel_SetOpenExternalLinks(QLabel* self, bool open);
void QLabel_SetTextInteractionFlags(QLabel* self, int flags);
int QLabel_TextInteractionFlags(const QLabel* self);
void QLabel_SetSelection(QLabel* self, int param1, int param2);
bool QLabel_HasSelectedText(const QLabel* self);
libqt_string QLabel_SelectedText(const QLabel* self);
int QLabel_SelectionStart(const QLabel* self);
void QLabel_SetText(QLabel* self, const libqt_string text);
void QLabel_SetPixmap(QLabel* self, const QPixmap* pixmap);
void QLabel_SetPicture(QLabel* self, const QPicture* picture);
void QLabel_SetMovie(QLabel* self, QMovie* movie);
void QLabel_SetNum(QLabel* self, int num);
void QLabel_SetNum2(QLabel* self, double num);
void QLabel_Clear(QLabel* self);
void QLabel_LinkActivated(QLabel* self, const libqt_string link);
void QLabel_Connect_LinkActivated(QLabel* self, intptr_t slot);
void QLabel_LinkHovered(QLabel* self, const libqt_string link);
void QLabel_Connect_LinkHovered(QLabel* self, intptr_t slot);
bool QLabel_Event(QLabel* self, QEvent* e);
void QLabel_KeyPressEvent(QLabel* self, QKeyEvent* ev);
void QLabel_PaintEvent(QLabel* self, QPaintEvent* param1);
void QLabel_ChangeEvent(QLabel* self, QEvent* param1);
void QLabel_MousePressEvent(QLabel* self, QMouseEvent* ev);
void QLabel_MouseMoveEvent(QLabel* self, QMouseEvent* ev);
void QLabel_MouseReleaseEvent(QLabel* self, QMouseEvent* ev);
void QLabel_ContextMenuEvent(QLabel* self, QContextMenuEvent* ev);
void QLabel_FocusInEvent(QLabel* self, QFocusEvent* ev);
void QLabel_FocusOutEvent(QLabel* self, QFocusEvent* ev);
bool QLabel_FocusNextPrevChild(QLabel* self, bool next);
libqt_string QLabel_Tr2(const char* s, const char* c);
libqt_string QLabel_Tr3(const char* s, const char* c, int n);
void QLabel_OnSizeHint(const QLabel* self, intptr_t slot);
QSize* QLabel_QBaseSizeHint(const QLabel* self);
void QLabel_OnMinimumSizeHint(const QLabel* self, intptr_t slot);
QSize* QLabel_QBaseMinimumSizeHint(const QLabel* self);
void QLabel_OnHeightForWidth(const QLabel* self, intptr_t slot);
int QLabel_QBaseHeightForWidth(const QLabel* self, int param1);
void QLabel_OnEvent(QLabel* self, intptr_t slot);
bool QLabel_QBaseEvent(QLabel* self, QEvent* e);
void QLabel_OnKeyPressEvent(QLabel* self, intptr_t slot);
void QLabel_QBaseKeyPressEvent(QLabel* self, QKeyEvent* ev);
void QLabel_OnPaintEvent(QLabel* self, intptr_t slot);
void QLabel_QBasePaintEvent(QLabel* self, QPaintEvent* param1);
void QLabel_OnChangeEvent(QLabel* self, intptr_t slot);
void QLabel_QBaseChangeEvent(QLabel* self, QEvent* param1);
void QLabel_OnMousePressEvent(QLabel* self, intptr_t slot);
void QLabel_QBaseMousePressEvent(QLabel* self, QMouseEvent* ev);
void QLabel_OnMouseMoveEvent(QLabel* self, intptr_t slot);
void QLabel_QBaseMouseMoveEvent(QLabel* self, QMouseEvent* ev);
void QLabel_OnMouseReleaseEvent(QLabel* self, intptr_t slot);
void QLabel_QBaseMouseReleaseEvent(QLabel* self, QMouseEvent* ev);
void QLabel_OnContextMenuEvent(QLabel* self, intptr_t slot);
void QLabel_QBaseContextMenuEvent(QLabel* self, QContextMenuEvent* ev);
void QLabel_OnFocusInEvent(QLabel* self, intptr_t slot);
void QLabel_QBaseFocusInEvent(QLabel* self, QFocusEvent* ev);
void QLabel_OnFocusOutEvent(QLabel* self, intptr_t slot);
void QLabel_QBaseFocusOutEvent(QLabel* self, QFocusEvent* ev);
void QLabel_OnFocusNextPrevChild(QLabel* self, intptr_t slot);
bool QLabel_QBaseFocusNextPrevChild(QLabel* self, bool next);
void QLabel_Delete(QLabel* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
