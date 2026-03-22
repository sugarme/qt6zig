#pragma once
#ifndef QHTTPMULTIPART_H_C_LIB
#define QHTTPMULTIPART_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QDebug QDebug;
typedef struct QHttpMultiPart QHttpMultiPart;
typedef struct QHttpPart QHttpPart;
typedef struct QIODevice QIODevice;
typedef struct QObject QObject;
typedef struct QVariant QVariant;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif




QHttpPart* QHttpPart_new();
QHttpPart* QHttpPart_new2(const QHttpPart* other);
void QHttpPart_OperatorAssign(QHttpPart* self, const QHttpPart* other);
void QHttpPart_Swap(QHttpPart* self, QHttpPart* other);
bool QHttpPart_OperatorEqual(const QHttpPart* self, const QHttpPart* other);
bool QHttpPart_OperatorNotEqual(const QHttpPart* self, const QHttpPart* other);
void QHttpPart_SetHeader(QHttpPart* self, int header, const QVariant* value);
void QHttpPart_SetRawHeader(QHttpPart* self, const libqt_string headerName, const libqt_string headerValue);
void QHttpPart_SetBody(QHttpPart* self, const libqt_string body);
void QHttpPart_SetBodyDevice(QHttpPart* self, QIODevice* device);
void QHttpPart_Delete(QHttpPart* self);

QHttpMultiPart* QHttpMultiPart_new();
QHttpMultiPart* QHttpMultiPart_new2(int contentType);
QHttpMultiPart* QHttpMultiPart_new3(QObject* parent);
QHttpMultiPart* QHttpMultiPart_new4(int contentType, QObject* parent);
libqt_string QHttpMultiPart_Tr(const char* s);
void QHttpMultiPart_Append(QHttpMultiPart* self, const QHttpPart* httpPart);
void QHttpMultiPart_SetContentType(QHttpMultiPart* self, int contentType);
libqt_string QHttpMultiPart_Boundary(const QHttpMultiPart* self);
void QHttpMultiPart_SetBoundary(QHttpMultiPart* self, const libqt_string boundary);
libqt_string QHttpMultiPart_Tr2(const char* s, const char* c);
libqt_string QHttpMultiPart_Tr3(const char* s, const char* c, int n);
void QHttpMultiPart_Delete(QHttpMultiPart* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
