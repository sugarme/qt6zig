#pragma once
#ifndef QFILESELECTOR_H_C_LIB
#define QFILESELECTOR_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QFileSelector QFileSelector;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QFileSelector* QFileSelector_new();
QFileSelector* QFileSelector_new2(QObject* parent);
libqt_string QFileSelector_Tr(const char* s);
libqt_string QFileSelector_Select(const QFileSelector* self, const libqt_string filePath);
QUrl* QFileSelector_Select2(const QFileSelector* self, const QUrl* filePath);
libqt_list QFileSelector_ExtraSelectors(const QFileSelector* self);
void QFileSelector_SetExtraSelectors(QFileSelector* self, const libqt_list list);
libqt_list QFileSelector_AllSelectors(const QFileSelector* self);
libqt_string QFileSelector_Tr2(const char* s, const char* c);
libqt_string QFileSelector_Tr3(const char* s, const char* c, int n);
void QFileSelector_Delete(QFileSelector* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
