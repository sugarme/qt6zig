#pragma once
#ifndef QCOREAPPLICATION_H_C_LIB
#define QCOREAPPLICATION_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractEventDispatcher QAbstractEventDispatcher;
typedef struct QAbstractNativeEventFilter QAbstractNativeEventFilter;
typedef struct QCoreApplication QCoreApplication;
typedef struct QDeadlineTimer QDeadlineTimer;
typedef struct QEvent QEvent;
typedef struct QObject QObject;
typedef struct QPermission QPermission;
typedef struct QTranslator QTranslator;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QCoreApplication* QCoreApplication_new(int* argc, char** argv);
QCoreApplication* QCoreApplication_new2(int* argc, char** argv, int param3);
libqt_string QCoreApplication_Tr(const char* s);
libqt_list QCoreApplication_Arguments();
void QCoreApplication_SetAttribute(int attribute);
bool QCoreApplication_TestAttribute(int attribute);
void QCoreApplication_SetOrganizationDomain(const libqt_string orgDomain);
libqt_string QCoreApplication_OrganizationDomain();
void QCoreApplication_SetOrganizationName(const libqt_string orgName);
libqt_string QCoreApplication_OrganizationName();
void QCoreApplication_SetApplicationName(const libqt_string application);
libqt_string QCoreApplication_ApplicationName();
void QCoreApplication_SetApplicationVersion(const libqt_string version);
libqt_string QCoreApplication_ApplicationVersion();
void QCoreApplication_SetSetuidAllowed(bool allow);
bool QCoreApplication_IsSetuidAllowed();
QCoreApplication* QCoreApplication_Instance();
int QCoreApplication_Exec();
void QCoreApplication_ProcessEvents();
void QCoreApplication_ProcessEvents2(int flags, int maxtime);
void QCoreApplication_ProcessEvents3(int flags, QDeadlineTimer* deadline);
bool QCoreApplication_SendEvent(QObject* receiver, QEvent* event);
void QCoreApplication_PostEvent(QObject* receiver, QEvent* event);
void QCoreApplication_SendPostedEvents();
void QCoreApplication_RemovePostedEvents(QObject* receiver);
QAbstractEventDispatcher* QCoreApplication_EventDispatcher();
void QCoreApplication_SetEventDispatcher(QAbstractEventDispatcher* eventDispatcher);
bool QCoreApplication_Notify(QCoreApplication* self, QObject* param1, QEvent* param2);
bool QCoreApplication_StartingUp();
bool QCoreApplication_ClosingDown();
libqt_string QCoreApplication_ApplicationDirPath();
libqt_string QCoreApplication_ApplicationFilePath();
long long QCoreApplication_ApplicationPid();
int QCoreApplication_CheckPermission(QCoreApplication* self, const QPermission* permission);
void QCoreApplication_SetLibraryPaths(const libqt_list libraryPaths);
libqt_list QCoreApplication_LibraryPaths();
void QCoreApplication_AddLibraryPath(const libqt_string param1);
void QCoreApplication_RemoveLibraryPath(const libqt_string param1);
bool QCoreApplication_InstallTranslator(QTranslator* messageFile);
bool QCoreApplication_RemoveTranslator(QTranslator* messageFile);
libqt_string QCoreApplication_Translate(const char* context, const char* key);
void QCoreApplication_InstallNativeEventFilter(QCoreApplication* self, QAbstractNativeEventFilter* filterObj);
void QCoreApplication_Connect_InstallNativeEventFilter(QCoreApplication* self, intptr_t slot);
void QCoreApplication_RemoveNativeEventFilter(QCoreApplication* self, QAbstractNativeEventFilter* filterObj);
void QCoreApplication_Connect_RemoveNativeEventFilter(QCoreApplication* self, intptr_t slot);
bool QCoreApplication_IsQuitLockEnabled();
void QCoreApplication_SetQuitLockEnabled(bool enabled);
void QCoreApplication_Quit();
void QCoreApplication_Exit();
void QCoreApplication_OrganizationNameChanged(QCoreApplication* self);
void QCoreApplication_Connect_OrganizationNameChanged(QCoreApplication* self, intptr_t slot);
void QCoreApplication_OrganizationDomainChanged(QCoreApplication* self);
void QCoreApplication_Connect_OrganizationDomainChanged(QCoreApplication* self, intptr_t slot);
void QCoreApplication_ApplicationNameChanged(QCoreApplication* self);
void QCoreApplication_Connect_ApplicationNameChanged(QCoreApplication* self, intptr_t slot);
void QCoreApplication_ApplicationVersionChanged(QCoreApplication* self);
void QCoreApplication_Connect_ApplicationVersionChanged(QCoreApplication* self, intptr_t slot);
bool QCoreApplication_Event(QCoreApplication* self, QEvent* param1);
bool QCoreApplication_CompressEvent(QCoreApplication* self, QEvent* param1, QObject* receiver, QPostEventList* param3);
libqt_string QCoreApplication_Tr2(const char* s, const char* c);
libqt_string QCoreApplication_Tr3(const char* s, const char* c, int n);
void QCoreApplication_SetAttribute2(int attribute, bool on);
void QCoreApplication_ProcessEvents1(int flags);
void QCoreApplication_PostEvent3(QObject* receiver, QEvent* event, int priority);
void QCoreApplication_SendPostedEvents1(QObject* receiver);
void QCoreApplication_SendPostedEvents2(QObject* receiver, int event_type);
void QCoreApplication_RemovePostedEvents2(QObject* receiver, int eventType);
libqt_string QCoreApplication_Translate3(const char* context, const char* key, const char* disambiguation);
libqt_string QCoreApplication_Translate4(const char* context, const char* key, const char* disambiguation, int n);
void QCoreApplication_Exit1(int retcode);
void QCoreApplication_OnNotify(QCoreApplication* self, intptr_t slot);
bool QCoreApplication_QBaseNotify(QCoreApplication* self, QObject* param1, QEvent* param2);
void QCoreApplication_OnEvent(QCoreApplication* self, intptr_t slot);
bool QCoreApplication_QBaseEvent(QCoreApplication* self, QEvent* param1);
void QCoreApplication_OnCompressEvent(QCoreApplication* self, intptr_t slot);
bool QCoreApplication_QBaseCompressEvent(QCoreApplication* self, QEvent* param1, QObject* receiver, QPostEventList* param3);
void* QCoreApplication_ResolveInterface(const QCoreApplication* self, const char* name, int revision);
void QCoreApplication_OnResolveInterface(const QCoreApplication* self, intptr_t slot);
void* QCoreApplication_QBaseResolveInterface(const QCoreApplication* self, const char* name, int revision);
void QCoreApplication_Connect_aboutToQuit(QCoreApplication* self, intptr_t slot);
void QCoreApplication_Delete(QCoreApplication* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
