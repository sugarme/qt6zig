#pragma once
#ifndef QTEXTBROWSER_H_C_LIB
#define QTEXTBROWSER_H_C_LIB

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
typedef struct QMouseEvent QMouseEvent;
typedef struct QPaintEvent QPaintEvent;
typedef struct QTextBrowser QTextBrowser;
typedef struct QTextEdit QTextEdit;
typedef struct QUrl QUrl;
typedef struct QVariant QVariant;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QTextBrowser* QTextBrowser_new(QWidget* parent);
QTextBrowser* QTextBrowser_new2();
libqt_string QTextBrowser_Tr(const char* s);
QUrl* QTextBrowser_Source(const QTextBrowser* self);
int QTextBrowser_SourceType(const QTextBrowser* self);
libqt_list QTextBrowser_SearchPaths(const QTextBrowser* self);
void QTextBrowser_SetSearchPaths(QTextBrowser* self, const libqt_list paths);
QVariant* QTextBrowser_LoadResource(QTextBrowser* self, int typeVal, const QUrl* name);
bool QTextBrowser_IsBackwardAvailable(const QTextBrowser* self);
bool QTextBrowser_IsForwardAvailable(const QTextBrowser* self);
void QTextBrowser_ClearHistory(QTextBrowser* self);
libqt_string QTextBrowser_HistoryTitle(const QTextBrowser* self, int param1);
QUrl* QTextBrowser_HistoryUrl(const QTextBrowser* self, int param1);
int QTextBrowser_BackwardHistoryCount(const QTextBrowser* self);
int QTextBrowser_ForwardHistoryCount(const QTextBrowser* self);
bool QTextBrowser_OpenExternalLinks(const QTextBrowser* self);
void QTextBrowser_SetOpenExternalLinks(QTextBrowser* self, bool open);
bool QTextBrowser_OpenLinks(const QTextBrowser* self);
void QTextBrowser_SetOpenLinks(QTextBrowser* self, bool open);
void QTextBrowser_SetSource(QTextBrowser* self, const QUrl* name);
void QTextBrowser_Backward(QTextBrowser* self);
void QTextBrowser_Forward(QTextBrowser* self);
void QTextBrowser_Home(QTextBrowser* self);
void QTextBrowser_Reload(QTextBrowser* self);
void QTextBrowser_BackwardAvailable(QTextBrowser* self, bool param1);
void QTextBrowser_Connect_BackwardAvailable(QTextBrowser* self, intptr_t slot);
void QTextBrowser_ForwardAvailable(QTextBrowser* self, bool param1);
void QTextBrowser_Connect_ForwardAvailable(QTextBrowser* self, intptr_t slot);
void QTextBrowser_HistoryChanged(QTextBrowser* self);
void QTextBrowser_Connect_HistoryChanged(QTextBrowser* self, intptr_t slot);
void QTextBrowser_SourceChanged(QTextBrowser* self, const QUrl* param1);
void QTextBrowser_Connect_SourceChanged(QTextBrowser* self, intptr_t slot);
void QTextBrowser_Highlighted(QTextBrowser* self, const QUrl* param1);
void QTextBrowser_Connect_Highlighted(QTextBrowser* self, intptr_t slot);
void QTextBrowser_AnchorClicked(QTextBrowser* self, const QUrl* param1);
void QTextBrowser_Connect_AnchorClicked(QTextBrowser* self, intptr_t slot);
bool QTextBrowser_Event(QTextBrowser* self, QEvent* e);
void QTextBrowser_KeyPressEvent(QTextBrowser* self, QKeyEvent* ev);
void QTextBrowser_MouseMoveEvent(QTextBrowser* self, QMouseEvent* ev);
void QTextBrowser_MousePressEvent(QTextBrowser* self, QMouseEvent* ev);
void QTextBrowser_MouseReleaseEvent(QTextBrowser* self, QMouseEvent* ev);
void QTextBrowser_FocusOutEvent(QTextBrowser* self, QFocusEvent* ev);
bool QTextBrowser_FocusNextPrevChild(QTextBrowser* self, bool next);
void QTextBrowser_PaintEvent(QTextBrowser* self, QPaintEvent* e);
void QTextBrowser_DoSetSource(QTextBrowser* self, const QUrl* name, int typeVal);
libqt_string QTextBrowser_Tr2(const char* s, const char* c);
libqt_string QTextBrowser_Tr3(const char* s, const char* c, int n);
void QTextBrowser_SetSource2(QTextBrowser* self, const QUrl* name, int typeVal);
void QTextBrowser_OnLoadResource(QTextBrowser* self, intptr_t slot);
QVariant* QTextBrowser_QBaseLoadResource(QTextBrowser* self, int typeVal, const QUrl* name);
void QTextBrowser_OnBackward(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseBackward(QTextBrowser* self);
void QTextBrowser_OnForward(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseForward(QTextBrowser* self);
void QTextBrowser_OnHome(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseHome(QTextBrowser* self);
void QTextBrowser_OnReload(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseReload(QTextBrowser* self);
void QTextBrowser_OnEvent(QTextBrowser* self, intptr_t slot);
bool QTextBrowser_QBaseEvent(QTextBrowser* self, QEvent* e);
void QTextBrowser_OnKeyPressEvent(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseKeyPressEvent(QTextBrowser* self, QKeyEvent* ev);
void QTextBrowser_OnMouseMoveEvent(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseMouseMoveEvent(QTextBrowser* self, QMouseEvent* ev);
void QTextBrowser_OnMousePressEvent(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseMousePressEvent(QTextBrowser* self, QMouseEvent* ev);
void QTextBrowser_OnMouseReleaseEvent(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseMouseReleaseEvent(QTextBrowser* self, QMouseEvent* ev);
void QTextBrowser_OnFocusOutEvent(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseFocusOutEvent(QTextBrowser* self, QFocusEvent* ev);
void QTextBrowser_OnFocusNextPrevChild(QTextBrowser* self, intptr_t slot);
bool QTextBrowser_QBaseFocusNextPrevChild(QTextBrowser* self, bool next);
void QTextBrowser_OnPaintEvent(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBasePaintEvent(QTextBrowser* self, QPaintEvent* e);
void QTextBrowser_OnDoSetSource(QTextBrowser* self, intptr_t slot);
void QTextBrowser_QBaseDoSetSource(QTextBrowser* self, const QUrl* name, int typeVal);
void QTextBrowser_Delete(QTextBrowser* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
