#pragma once
#ifndef QSIGNALMAPPER_H_C_LIB
#define QSIGNALMAPPER_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QObject QObject;
typedef struct QSignalMapper QSignalMapper;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QSignalMapper* QSignalMapper_new();
QSignalMapper* QSignalMapper_new2(QObject* parent);
libqt_string QSignalMapper_Tr(const char* s);
void QSignalMapper_SetMapping(QSignalMapper* self, QObject* sender, int id);
void QSignalMapper_SetMapping2(QSignalMapper* self, QObject* sender, const libqt_string text);
void QSignalMapper_SetMapping3(QSignalMapper* self, QObject* sender, QObject* object);
void QSignalMapper_RemoveMappings(QSignalMapper* self, QObject* sender);
QObject* QSignalMapper_Mapping(const QSignalMapper* self, int id);
QObject* QSignalMapper_Mapping2(const QSignalMapper* self, const libqt_string text);
QObject* QSignalMapper_Mapping3(const QSignalMapper* self, QObject* object);
void QSignalMapper_MappedInt(QSignalMapper* self, int param1);
void QSignalMapper_Connect_MappedInt(QSignalMapper* self, intptr_t slot);
void QSignalMapper_MappedString(QSignalMapper* self, const libqt_string param1);
void QSignalMapper_Connect_MappedString(QSignalMapper* self, intptr_t slot);
void QSignalMapper_MappedObject(QSignalMapper* self, QObject* param1);
void QSignalMapper_Connect_MappedObject(QSignalMapper* self, intptr_t slot);
void QSignalMapper_Map(QSignalMapper* self);
void QSignalMapper_Map2(QSignalMapper* self, QObject* sender);
libqt_string QSignalMapper_Tr2(const char* s, const char* c);
libqt_string QSignalMapper_Tr3(const char* s, const char* c, int n);
void QSignalMapper_Delete(QSignalMapper* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
