#pragma once
#ifndef QAPPLICATION_H_C_LIB
#define QAPPLICATION_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QApplication QApplication;
typedef struct QEvent QEvent;
typedef struct QEventLoop QEventLoop;
typedef struct QFont QFont;
typedef struct QFontMetrics QFontMetrics;
typedef struct QGuiApplication QGuiApplication;
typedef struct QLocale QLocale;
typedef struct QObject QObject;
typedef struct QPalette QPalette;
typedef struct QPoint QPoint;
typedef struct QStyle QStyle;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif





QApplication* QApplication_new(int* argc, char** argv);
QApplication* QApplication_new2(int* argc, char** argv, int param3);
libqt_string QApplication_Tr(const char* s);
QStyle* QApplication_Style();
void QApplication_SetStyle(QStyle* style);
QStyle* QApplication_SetStyle2(const libqt_string style);
QPalette* QApplication_Palette(const QWidget* param1);
QPalette* QApplication_Palette2(const char* className);
void QApplication_SetPalette(const QPalette* param1);
QFont* QApplication_Font();
QFont* QApplication_Font2(const QWidget* param1);
QFont* QApplication_Font3(const char* className);
void QApplication_SetFont(const QFont* param1);
QFontMetrics* QApplication_FontMetrics();
libqt_list QApplication_AllWidgets();
libqt_list QApplication_TopLevelWidgets();
QWidget* QApplication_ActivePopupWidget();
QWidget* QApplication_ActiveModalWidget();
QWidget* QApplication_FocusWidget();
QWidget* QApplication_ActiveWindow();
void QApplication_SetActiveWindow(QWidget* act);
QWidget* QApplication_WidgetAt(const QPoint* p);
QWidget* QApplication_WidgetAt2(int x, int y);
QWidget* QApplication_TopLevelAt(const QPoint* p);
QWidget* QApplication_TopLevelAt2(int x, int y);
void QApplication_Beep();
void QApplication_Alert(QWidget* widget);
void QApplication_SetCursorFlashTime(int cursorFlashTime);
int QApplication_CursorFlashTime();
void QApplication_SetDoubleClickInterval(int doubleClickInterval);
int QApplication_DoubleClickInterval();
void QApplication_SetKeyboardInputInterval(int keyboardInputInterval);
int QApplication_KeyboardInputInterval();
void QApplication_SetWheelScrollLines(int wheelScrollLines);
int QApplication_WheelScrollLines();
void QApplication_SetStartDragTime(int ms);
int QApplication_StartDragTime();
void QApplication_SetStartDragDistance(int l);
int QApplication_StartDragDistance();
bool QApplication_IsEffectEnabled(int param1);
void QApplication_SetEffectEnabled(int param1);
int QApplication_Exec();
bool QApplication_Notify(QApplication* self, QObject* param1, QEvent* param2);
void QApplication_FocusChanged(QApplication* self, QWidget* old, QWidget* now);
void QApplication_Connect_FocusChanged(QApplication* self, intptr_t slot);
libqt_string QApplication_StyleSheet(const QApplication* self);
bool QApplication_AutoSipEnabled(const QApplication* self);
void QApplication_SetStyleSheet(QApplication* self, const libqt_string sheet);
void QApplication_SetAutoSipEnabled(QApplication* self, const bool enabled);
void QApplication_CloseAllWindows();
void QApplication_AboutQt();
bool QApplication_Event(QApplication* self, QEvent* param1);
bool QApplication_CompressEvent(QApplication* self, QEvent* param1, QObject* receiver, QPostEventList* param3);
libqt_string QApplication_Tr2(const char* s, const char* c);
libqt_string QApplication_Tr3(const char* s, const char* c, int n);
void QApplication_SetPalette2(const QPalette* param1, const char* className);
void QApplication_SetFont2(const QFont* param1, const char* className);
void QApplication_Alert2(QWidget* widget, int duration);
void QApplication_SetEffectEnabled2(int param1, bool enable);
void QApplication_OnNotify(QApplication* self, intptr_t slot);
bool QApplication_QBaseNotify(QApplication* self, QObject* param1, QEvent* param2);
void QApplication_OnEvent(QApplication* self, intptr_t slot);
bool QApplication_QBaseEvent(QApplication* self, QEvent* param1);
void QApplication_OnCompressEvent(QApplication* self, intptr_t slot);
bool QApplication_QBaseCompressEvent(QApplication* self, QEvent* param1, QObject* receiver, QPostEventList* param3);
void* QApplication_ResolveInterface(const QApplication* self, const char* name, int revision);
void QApplication_OnResolveInterface(const QApplication* self, intptr_t slot);
void* QApplication_QBaseResolveInterface(const QApplication* self, const char* name, int revision);
void QApplication_Delete(QApplication* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
