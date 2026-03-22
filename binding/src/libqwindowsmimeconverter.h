#pragma once
#ifndef QWINDOWSMIMECONVERTER_H_C_LIB
#define QWINDOWSMIMECONVERTER_H_C_LIB

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
typedef struct QVariant QVariant;
typedef struct QWindowsMimeConverter QWindowsMimeConverter;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QWindowsMimeConverter* QWindowsMimeConverter_new();
int QWindowsMimeConverter_RegisterMimeType(const libqt_string mimeType);
bool QWindowsMimeConverter_CanConvertFromMime(const QWindowsMimeConverter* self, const tagFORMATETC* formatetc, const QMimeData* mimeData);
bool QWindowsMimeConverter_ConvertFromMime(const QWindowsMimeConverter* self, const tagFORMATETC* formatetc, const QMimeData* mimeData, tagSTGMEDIUM* pmedium);
libqt_list QWindowsMimeConverter_FormatsForMime(const QWindowsMimeConverter* self, const libqt_string mimeType, const QMimeData* mimeData);
bool QWindowsMimeConverter_CanConvertToMime(const QWindowsMimeConverter* self, const libqt_string mimeType, IDataObject* pDataObj);
QVariant* QWindowsMimeConverter_ConvertToMime(const QWindowsMimeConverter* self, const libqt_string mimeType, IDataObject* pDataObj, QMetaType* preferredType);
libqt_string QWindowsMimeConverter_MimeForFormat(const QWindowsMimeConverter* self, const tagFORMATETC* formatetc);
void QWindowsMimeConverter_OnCanConvertFromMime(const QWindowsMimeConverter* self, intptr_t slot);
bool QWindowsMimeConverter_QBaseCanConvertFromMime(const QWindowsMimeConverter* self, const tagFORMATETC* formatetc, const QMimeData* mimeData);
void QWindowsMimeConverter_OnConvertFromMime(const QWindowsMimeConverter* self, intptr_t slot);
bool QWindowsMimeConverter_QBaseConvertFromMime(const QWindowsMimeConverter* self, const tagFORMATETC* formatetc, const QMimeData* mimeData, tagSTGMEDIUM* pmedium);
void QWindowsMimeConverter_OnFormatsForMime(const QWindowsMimeConverter* self, intptr_t slot);
libqt_list QWindowsMimeConverter_QBaseFormatsForMime(const QWindowsMimeConverter* self, const libqt_string mimeType, const QMimeData* mimeData);
void QWindowsMimeConverter_OnCanConvertToMime(const QWindowsMimeConverter* self, intptr_t slot);
bool QWindowsMimeConverter_QBaseCanConvertToMime(const QWindowsMimeConverter* self, const libqt_string mimeType, IDataObject* pDataObj);
void QWindowsMimeConverter_OnConvertToMime(const QWindowsMimeConverter* self, intptr_t slot);
QVariant* QWindowsMimeConverter_QBaseConvertToMime(const QWindowsMimeConverter* self, const libqt_string mimeType, IDataObject* pDataObj, QMetaType* preferredType);
void QWindowsMimeConverter_OnMimeForFormat(const QWindowsMimeConverter* self, intptr_t slot);
libqt_string QWindowsMimeConverter_QBaseMimeForFormat(const QWindowsMimeConverter* self, const tagFORMATETC* formatetc);
void QWindowsMimeConverter_Delete(QWindowsMimeConverter* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
