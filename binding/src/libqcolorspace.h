#pragma once
#ifndef QCOLORSPACE_H_C_LIB
#define QCOLORSPACE_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QColorSpace QColorSpace;
typedef struct QColorTransform QColorTransform;
typedef struct QPointF QPointF;
typedef struct QVariant QVariant;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QColorSpace* QColorSpace_new();
QColorSpace* QColorSpace_new2(int namedColorSpace);
QColorSpace* QColorSpace_new3(QPointF* whitePoint, int transferFunction);
QColorSpace* QColorSpace_new4(QPointF* whitePoint, const libqt_list transferFunctionTable);
QColorSpace* QColorSpace_new5(int primaries, int transferFunction);
QColorSpace* QColorSpace_new6(int primaries, float gamma);
QColorSpace* QColorSpace_new7(int primaries, const libqt_list transferFunctionTable);
QColorSpace* QColorSpace_new8(const QPointF* whitePoint, const QPointF* redPoint, const QPointF* greenPoint, const QPointF* bluePoint, int transferFunction);
QColorSpace* QColorSpace_new9(const QPointF* whitePoint, const QPointF* redPoint, const QPointF* greenPoint, const QPointF* bluePoint, const libqt_list transferFunctionTable);
QColorSpace* QColorSpace_new10(const QPointF* whitePoint, const QPointF* redPoint, const QPointF* greenPoint, const QPointF* bluePoint, const libqt_list redTransferFunctionTable, const libqt_list greenTransferFunctionTable, const libqt_list blueTransferFunctionTable);
QColorSpace* QColorSpace_new11(const QColorSpace* colorSpace);
QColorSpace* QColorSpace_new12(QPointF* whitePoint, int transferFunction, float gamma);
QColorSpace* QColorSpace_new13(int primaries, int transferFunction, float gamma);
QColorSpace* QColorSpace_new14(const QPointF* whitePoint, const QPointF* redPoint, const QPointF* greenPoint, const QPointF* bluePoint, int transferFunction, float gamma);
void QColorSpace_OperatorAssign(QColorSpace* self, const QColorSpace* colorSpace);
void QColorSpace_Swap(QColorSpace* self, QColorSpace* colorSpace);
int QColorSpace_Primaries(const QColorSpace* self);
int QColorSpace_TransferFunction(const QColorSpace* self);
float QColorSpace_Gamma(const QColorSpace* self);
libqt_string QColorSpace_Description(const QColorSpace* self);
void QColorSpace_SetDescription(QColorSpace* self, const libqt_string description);
void QColorSpace_SetTransferFunction(QColorSpace* self, int transferFunction);
void QColorSpace_SetTransferFunction2(QColorSpace* self, const libqt_list transferFunctionTable);
void QColorSpace_SetTransferFunctions(QColorSpace* self, const libqt_list redTransferFunctionTable, const libqt_list greenTransferFunctionTable, const libqt_list blueTransferFunctionTable);
QColorSpace* QColorSpace_WithTransferFunction(const QColorSpace* self, int transferFunction);
QColorSpace* QColorSpace_WithTransferFunction2(const QColorSpace* self, const libqt_list transferFunctionTable);
QColorSpace* QColorSpace_WithTransferFunctions(const QColorSpace* self, const libqt_list redTransferFunctionTable, const libqt_list greenTransferFunctionTable, const libqt_list blueTransferFunctionTable);
void QColorSpace_SetPrimaries(QColorSpace* self, int primariesId);
void QColorSpace_SetPrimaries2(QColorSpace* self, const QPointF* whitePoint, const QPointF* redPoint, const QPointF* greenPoint, const QPointF* bluePoint);
void QColorSpace_SetWhitePoint(QColorSpace* self, QPointF* whitePoint);
QPointF* QColorSpace_WhitePoint(const QColorSpace* self);
uint8_t QColorSpace_TransformModel(const QColorSpace* self);
int QColorSpace_ColorModel(const QColorSpace* self);
void QColorSpace_Detach(QColorSpace* self);
bool QColorSpace_IsValid(const QColorSpace* self);
bool QColorSpace_IsValidTarget(const QColorSpace* self);
QColorSpace* QColorSpace_FromIccProfile(const libqt_string iccProfile);
libqt_string QColorSpace_IccProfile(const QColorSpace* self);
QColorTransform* QColorSpace_TransformationToColorSpace(const QColorSpace* self, const QColorSpace* colorspace);
QVariant* QColorSpace_OperatorQVariant(const QColorSpace* self);
void QColorSpace_SetTransferFunction22(QColorSpace* self, int transferFunction, float gamma);
QColorSpace* QColorSpace_WithTransferFunction22(const QColorSpace* self, int transferFunction, float gamma);
void QColorSpace_Delete(QColorSpace* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
