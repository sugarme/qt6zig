#pragma once
#ifndef QBITMAP_H_C_LIB
#define QBITMAP_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QBitmap QBitmap;
typedef struct QImage QImage;
typedef struct QPixmap QPixmap;
typedef struct QSize QSize;
typedef struct QTransform QTransform;
typedef struct QVariant QVariant;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QBitmap* QBitmap_new();
QBitmap* QBitmap_new2(const QPixmap* param1);
QBitmap* QBitmap_new3(int w, int h);
QBitmap* QBitmap_new4(const QSize* param1);
QBitmap* QBitmap_new5(const libqt_string fileName);
QBitmap* QBitmap_new6(const libqt_string fileName, const char* format);
void QBitmap_OperatorAssign(QBitmap* self, const QPixmap* param1);
void QBitmap_Swap(QBitmap* self, QBitmap* other);
QVariant* QBitmap_OperatorQVariant(const QBitmap* self);
void QBitmap_Clear(QBitmap* self);
QBitmap* QBitmap_FromImage(const QImage* image);
QBitmap* QBitmap_FromData(const QSize* size, const unsigned char* bits);
QBitmap* QBitmap_FromPixmap(const QPixmap* pixmap);
QBitmap* QBitmap_Transformed(const QBitmap* self, const QTransform* matrix);
void QBitmap_OperatorAssign2(QBitmap* self, const QBitmap* param1);
QBitmap* QBitmap_FromImage2(const QImage* image, int flags);
QBitmap* QBitmap_FromData3(const QSize* size, const unsigned char* bits, int monoFormat);
void QBitmap_Delete(QBitmap* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
