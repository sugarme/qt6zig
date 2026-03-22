#pragma once
#ifndef QRESTREPLY_H_C_LIB
#define QRESTREPLY_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QDebug QDebug;
typedef struct QNetworkReply QNetworkReply;
typedef struct QRestReply QRestReply;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif






QRestReply* QRestReply_new(QNetworkReply* reply);
void QRestReply_Swap(QRestReply* self, QRestReply* other);
QNetworkReply* QRestReply_NetworkReply(const QRestReply* self);
libqt_string QRestReply_ReadBody(QRestReply* self);
libqt_string QRestReply_ReadText(QRestReply* self);
bool QRestReply_IsSuccess(const QRestReply* self);
int QRestReply_HttpStatus(const QRestReply* self);
bool QRestReply_IsHttpStatusSuccess(const QRestReply* self);
bool QRestReply_HasError(const QRestReply* self);
int QRestReply_Error(const QRestReply* self);
libqt_string QRestReply_ErrorString(const QRestReply* self);
void QRestReply_Delete(QRestReply* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
