#pragma once
#ifndef QSPLASHSCREEN_H_C_LIB
#define QSPLASHSCREEN_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QColor QColor;
typedef struct QEvent QEvent;
typedef struct QMouseEvent QMouseEvent;
typedef struct QPainter QPainter;
typedef struct QPixmap QPixmap;
typedef struct QScreen QScreen;
typedef struct QSplashScreen QSplashScreen;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QSplashScreen* QSplashScreen_new();
QSplashScreen* QSplashScreen_new2(QScreen* screen);
QSplashScreen* QSplashScreen_new3(const QPixmap* pixmap);
QSplashScreen* QSplashScreen_new4(const QPixmap* pixmap, int f);
QSplashScreen* QSplashScreen_new5(QScreen* screen, const QPixmap* pixmap);
QSplashScreen* QSplashScreen_new6(QScreen* screen, const QPixmap* pixmap, int f);
libqt_string QSplashScreen_Tr(const char* s);
void QSplashScreen_SetPixmap(QSplashScreen* self, const QPixmap* pixmap);
QPixmap* QSplashScreen_Pixmap(const QSplashScreen* self);
void QSplashScreen_Finish(QSplashScreen* self, QWidget* w);
void QSplashScreen_Repaint(QSplashScreen* self);
libqt_string QSplashScreen_Message(const QSplashScreen* self);
void QSplashScreen_ShowMessage(QSplashScreen* self, const libqt_string message);
void QSplashScreen_ClearMessage(QSplashScreen* self);
void QSplashScreen_MessageChanged(QSplashScreen* self, const libqt_string message);
void QSplashScreen_Connect_MessageChanged(QSplashScreen* self, intptr_t slot);
bool QSplashScreen_Event(QSplashScreen* self, QEvent* e);
void QSplashScreen_DrawContents(QSplashScreen* self, QPainter* painter);
void QSplashScreen_MousePressEvent(QSplashScreen* self, QMouseEvent* param1);
libqt_string QSplashScreen_Tr2(const char* s, const char* c);
libqt_string QSplashScreen_Tr3(const char* s, const char* c, int n);
void QSplashScreen_ShowMessage2(QSplashScreen* self, const libqt_string message, int alignment);
void QSplashScreen_ShowMessage3(QSplashScreen* self, const libqt_string message, int alignment, const QColor* color);
void QSplashScreen_OnEvent(QSplashScreen* self, intptr_t slot);
bool QSplashScreen_QBaseEvent(QSplashScreen* self, QEvent* e);
void QSplashScreen_OnDrawContents(QSplashScreen* self, intptr_t slot);
void QSplashScreen_QBaseDrawContents(QSplashScreen* self, QPainter* painter);
void QSplashScreen_OnMousePressEvent(QSplashScreen* self, intptr_t slot);
void QSplashScreen_QBaseMousePressEvent(QSplashScreen* self, QMouseEvent* param1);
void QSplashScreen_Delete(QSplashScreen* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
