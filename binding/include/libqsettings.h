#pragma once
#ifndef QSETTINGS_H_C_LIB
#define QSETTINGS_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAnyStringView QAnyStringView;
typedef struct QEvent QEvent;
typedef struct QObject QObject;
typedef struct QSettings QSettings;
typedef struct QVariant QVariant;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QSettings* QSettings_new(const libqt_string organization);
QSettings* QSettings_new2(int scope, const libqt_string organization);
QSettings* QSettings_new3(int format, int scope, const libqt_string organization);
QSettings* QSettings_new4(const libqt_string fileName, int format);
QSettings* QSettings_new5();
QSettings* QSettings_new6(int scope);
QSettings* QSettings_new7(const libqt_string organization, const libqt_string application);
QSettings* QSettings_new8(const libqt_string organization, const libqt_string application, QObject* parent);
QSettings* QSettings_new9(int scope, const libqt_string organization, const libqt_string application);
QSettings* QSettings_new10(int scope, const libqt_string organization, const libqt_string application, QObject* parent);
QSettings* QSettings_new11(int format, int scope, const libqt_string organization, const libqt_string application);
QSettings* QSettings_new12(int format, int scope, const libqt_string organization, const libqt_string application, QObject* parent);
QSettings* QSettings_new13(const libqt_string fileName, int format, QObject* parent);
QSettings* QSettings_new14(QObject* parent);
QSettings* QSettings_new15(int scope, QObject* parent);
libqt_string QSettings_Tr(const char* s);
void QSettings_Clear(QSettings* self);
void QSettings_Sync(QSettings* self);
int QSettings_Status(const QSettings* self);
bool QSettings_IsAtomicSyncRequired(const QSettings* self);
void QSettings_SetAtomicSyncRequired(QSettings* self, bool enable);
void QSettings_BeginGroup(QSettings* self, libqt_string prefix);
void QSettings_EndGroup(QSettings* self);
libqt_string QSettings_Group(const QSettings* self);
int QSettings_BeginReadArray(QSettings* self, libqt_string prefix);
void QSettings_BeginWriteArray(QSettings* self, libqt_string prefix);
void QSettings_EndArray(QSettings* self);
void QSettings_SetArrayIndex(QSettings* self, int i);
libqt_list QSettings_AllKeys(const QSettings* self);
libqt_list QSettings_ChildKeys(const QSettings* self);
libqt_list QSettings_ChildGroups(const QSettings* self);
bool QSettings_IsWritable(const QSettings* self);
void QSettings_SetValue(QSettings* self, libqt_string key, const QVariant* value);
QVariant* QSettings_Value(const QSettings* self, libqt_string key, const QVariant* defaultValue);
QVariant* QSettings_Value2(const QSettings* self, libqt_string key);
void QSettings_Remove(QSettings* self, libqt_string key);
bool QSettings_Contains(const QSettings* self, libqt_string key);
void QSettings_SetFallbacksEnabled(QSettings* self, bool b);
bool QSettings_FallbacksEnabled(const QSettings* self);
libqt_string QSettings_FileName(const QSettings* self);
int QSettings_Format(const QSettings* self);
int QSettings_Scope(const QSettings* self);
libqt_string QSettings_OrganizationName(const QSettings* self);
libqt_string QSettings_ApplicationName(const QSettings* self);
void QSettings_SetDefaultFormat(int format);
int QSettings_DefaultFormat();
void QSettings_SetPath(int format, int scope, const libqt_string path);
bool QSettings_Event(QSettings* self, QEvent* event);
libqt_string QSettings_Tr2(const char* s, const char* c);
libqt_string QSettings_Tr3(const char* s, const char* c, int n);
void QSettings_BeginWriteArray2(QSettings* self, libqt_string prefix, int size);
void QSettings_OnEvent(QSettings* self, intptr_t slot);
bool QSettings_QBaseEvent(QSettings* self, QEvent* event);
void QSettings_Delete(QSettings* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
