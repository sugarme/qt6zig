#pragma once
#ifndef QGUIAPPLICATION_H_C_LIB
#define QGUIAPPLICATION_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QClipboard QClipboard;
typedef struct QCoreApplication QCoreApplication;
typedef struct QCursor QCursor;
typedef struct QEvent QEvent;
typedef struct QFont QFont;
typedef struct QGuiApplication QGuiApplication;
typedef struct QIcon QIcon;
typedef struct QInputMethod QInputMethod;
typedef struct QObject QObject;
typedef struct QPalette QPalette;
typedef struct QPoint QPoint;
typedef struct QScreen QScreen;
typedef struct QSessionManager QSessionManager;
typedef struct QStyleHints QStyleHints;
typedef struct QWindow QWindow;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QGuiApplication* QGuiApplication_new(int* argc, char** argv);
QGuiApplication* QGuiApplication_new2(int* argc, char** argv, int param3);
libqt_string QGuiApplication_Tr(const char* s);
void QGuiApplication_SetApplicationDisplayName(const libqt_string name);
libqt_string QGuiApplication_ApplicationDisplayName();
void QGuiApplication_SetBadgeNumber(QGuiApplication* self, long long number);
void QGuiApplication_SetDesktopFileName(const libqt_string name);
libqt_string QGuiApplication_DesktopFileName();
libqt_list QGuiApplication_AllWindows();
libqt_list QGuiApplication_TopLevelWindows();
QWindow* QGuiApplication_TopLevelAt(const QPoint* pos);
void QGuiApplication_SetWindowIcon(const QIcon* icon);
QIcon* QGuiApplication_WindowIcon();
libqt_string QGuiApplication_PlatformName();
QWindow* QGuiApplication_ModalWindow();
QWindow* QGuiApplication_FocusWindow();
QObject* QGuiApplication_FocusObject();
QScreen* QGuiApplication_PrimaryScreen();
libqt_list QGuiApplication_Screens();
QScreen* QGuiApplication_ScreenAt(const QPoint* point);
double QGuiApplication_DevicePixelRatio(const QGuiApplication* self);
QCursor* QGuiApplication_OverrideCursor();
void QGuiApplication_SetOverrideCursor(const QCursor* overrideCursor);
void QGuiApplication_ChangeOverrideCursor(const QCursor* param1);
void QGuiApplication_RestoreOverrideCursor();
QFont* QGuiApplication_Font();
void QGuiApplication_SetFont(const QFont* font);
QClipboard* QGuiApplication_Clipboard();
QPalette* QGuiApplication_Palette();
void QGuiApplication_SetPalette(const QPalette* pal);
int QGuiApplication_KeyboardModifiers();
int QGuiApplication_QueryKeyboardModifiers();
int QGuiApplication_MouseButtons();
void QGuiApplication_SetLayoutDirection(int direction);
int QGuiApplication_LayoutDirection();
bool QGuiApplication_IsRightToLeft();
bool QGuiApplication_IsLeftToRight();
QStyleHints* QGuiApplication_StyleHints();
void QGuiApplication_SetDesktopSettingsAware(bool on);
bool QGuiApplication_DesktopSettingsAware();
QInputMethod* QGuiApplication_InputMethod();
void QGuiApplication_SetQuitOnLastWindowClosed(bool quit);
bool QGuiApplication_QuitOnLastWindowClosed();
int QGuiApplication_ApplicationState();
void QGuiApplication_SetHighDpiScaleFactorRoundingPolicy(int policy);
int QGuiApplication_HighDpiScaleFactorRoundingPolicy();
int QGuiApplication_Exec();
bool QGuiApplication_Notify(QGuiApplication* self, QObject* param1, QEvent* param2);
bool QGuiApplication_IsSessionRestored(const QGuiApplication* self);
libqt_string QGuiApplication_SessionId(const QGuiApplication* self);
libqt_string QGuiApplication_SessionKey(const QGuiApplication* self);
bool QGuiApplication_IsSavingSession(const QGuiApplication* self);
void QGuiApplication_Sync();
void QGuiApplication_FontDatabaseChanged(QGuiApplication* self);
void QGuiApplication_Connect_FontDatabaseChanged(QGuiApplication* self, intptr_t slot);
void QGuiApplication_ScreenAdded(QGuiApplication* self, QScreen* screen);
void QGuiApplication_Connect_ScreenAdded(QGuiApplication* self, intptr_t slot);
void QGuiApplication_ScreenRemoved(QGuiApplication* self, QScreen* screen);
void QGuiApplication_Connect_ScreenRemoved(QGuiApplication* self, intptr_t slot);
void QGuiApplication_PrimaryScreenChanged(QGuiApplication* self, QScreen* screen);
void QGuiApplication_Connect_PrimaryScreenChanged(QGuiApplication* self, intptr_t slot);
void QGuiApplication_LastWindowClosed(QGuiApplication* self);
void QGuiApplication_Connect_LastWindowClosed(QGuiApplication* self, intptr_t slot);
void QGuiApplication_FocusObjectChanged(QGuiApplication* self, QObject* focusObject);
void QGuiApplication_Connect_FocusObjectChanged(QGuiApplication* self, intptr_t slot);
void QGuiApplication_FocusWindowChanged(QGuiApplication* self, QWindow* focusWindow);
void QGuiApplication_Connect_FocusWindowChanged(QGuiApplication* self, intptr_t slot);
void QGuiApplication_ApplicationStateChanged(QGuiApplication* self, int state);
void QGuiApplication_Connect_ApplicationStateChanged(QGuiApplication* self, intptr_t slot);
void QGuiApplication_LayoutDirectionChanged(QGuiApplication* self, int direction);
void QGuiApplication_Connect_LayoutDirectionChanged(QGuiApplication* self, intptr_t slot);
void QGuiApplication_CommitDataRequest(QGuiApplication* self, QSessionManager* sessionManager);
void QGuiApplication_Connect_CommitDataRequest(QGuiApplication* self, intptr_t slot);
void QGuiApplication_SaveStateRequest(QGuiApplication* self, QSessionManager* sessionManager);
void QGuiApplication_Connect_SaveStateRequest(QGuiApplication* self, intptr_t slot);
void QGuiApplication_ApplicationDisplayNameChanged(QGuiApplication* self);
void QGuiApplication_Connect_ApplicationDisplayNameChanged(QGuiApplication* self, intptr_t slot);
void QGuiApplication_PaletteChanged(QGuiApplication* self, const QPalette* pal);
void QGuiApplication_Connect_PaletteChanged(QGuiApplication* self, intptr_t slot);
void QGuiApplication_FontChanged(QGuiApplication* self, const QFont* font);
void QGuiApplication_Connect_FontChanged(QGuiApplication* self, intptr_t slot);
bool QGuiApplication_Event(QGuiApplication* self, QEvent* param1);
libqt_string QGuiApplication_Tr2(const char* s, const char* c);
libqt_string QGuiApplication_Tr3(const char* s, const char* c, int n);
void QGuiApplication_OnNotify(QGuiApplication* self, intptr_t slot);
bool QGuiApplication_QBaseNotify(QGuiApplication* self, QObject* param1, QEvent* param2);
void QGuiApplication_OnEvent(QGuiApplication* self, intptr_t slot);
bool QGuiApplication_QBaseEvent(QGuiApplication* self, QEvent* param1);
void* QGuiApplication_ResolveInterface(const QGuiApplication* self, const char* name, int revision);
void QGuiApplication_OnResolveInterface(const QGuiApplication* self, intptr_t slot);
void* QGuiApplication_QBaseResolveInterface(const QGuiApplication* self, const char* name, int revision);
void QGuiApplication_Delete(QGuiApplication* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
