#pragma once
#ifndef QMIMEDATA_H_C_LIB
#define QMIMEDATA_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QMetaType QMetaType;
typedef struct QMimeData QMimeData;
typedef struct QObject QObject;
typedef struct QVariant QVariant;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QMimeData* QMimeData_new();
libqt_string QMimeData_Tr(const char* s);
libqt_list QMimeData_Urls(const QMimeData* self);
void QMimeData_SetUrls(QMimeData* self, const libqt_list urls);
bool QMimeData_HasUrls(const QMimeData* self);
libqt_string QMimeData_Text(const QMimeData* self);
void QMimeData_SetText(QMimeData* self, const libqt_string text);
bool QMimeData_HasText(const QMimeData* self);
libqt_string QMimeData_Html(const QMimeData* self);
void QMimeData_SetHtml(QMimeData* self, const libqt_string html);
bool QMimeData_HasHtml(const QMimeData* self);
QVariant* QMimeData_ImageData(const QMimeData* self);
void QMimeData_SetImageData(QMimeData* self, const QVariant* image);
bool QMimeData_HasImage(const QMimeData* self);
QVariant* QMimeData_ColorData(const QMimeData* self);
void QMimeData_SetColorData(QMimeData* self, const QVariant* color);
bool QMimeData_HasColor(const QMimeData* self);
libqt_string QMimeData_Data(const QMimeData* self, const libqt_string mimetype);
void QMimeData_SetData(QMimeData* self, const libqt_string mimetype, const libqt_string data);
void QMimeData_RemoveFormat(QMimeData* self, const libqt_string mimetype);
bool QMimeData_HasFormat(const QMimeData* self, const libqt_string mimetype);
libqt_list QMimeData_Formats(const QMimeData* self);
void QMimeData_Clear(QMimeData* self);
QVariant* QMimeData_RetrieveData(const QMimeData* self, const libqt_string mimetype, QMetaType* preferredType);
libqt_string QMimeData_Tr2(const char* s, const char* c);
libqt_string QMimeData_Tr3(const char* s, const char* c, int n);
void QMimeData_OnHasFormat(const QMimeData* self, intptr_t slot);
bool QMimeData_QBaseHasFormat(const QMimeData* self, const libqt_string mimetype);
void QMimeData_OnFormats(const QMimeData* self, intptr_t slot);
libqt_list QMimeData_QBaseFormats(const QMimeData* self);
void QMimeData_OnRetrieveData(const QMimeData* self, intptr_t slot);
QVariant* QMimeData_QBaseRetrieveData(const QMimeData* self, const libqt_string mimetype, QMetaType* preferredType);
void QMimeData_Delete(QMimeData* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
