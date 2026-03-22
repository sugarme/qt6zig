#pragma once
#ifndef QGRAPHICSTRANSFORM_H_C_LIB
#define QGRAPHICSTRANSFORM_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QGraphicsRotation QGraphicsRotation;
typedef struct QGraphicsScale QGraphicsScale;
typedef struct QGraphicsTransform QGraphicsTransform;
typedef struct QMatrix4x4 QMatrix4x4;
typedef struct QObject QObject;
typedef struct QVector3D QVector3D;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QGraphicsTransform* QGraphicsTransform_new();
QGraphicsTransform* QGraphicsTransform_new2(QObject* parent);
libqt_string QGraphicsTransform_Tr(const char* s);
void QGraphicsTransform_ApplyTo(const QGraphicsTransform* self, QMatrix4x4* matrix);
libqt_string QGraphicsTransform_Tr2(const char* s, const char* c);
libqt_string QGraphicsTransform_Tr3(const char* s, const char* c, int n);
void QGraphicsTransform_OnApplyTo(const QGraphicsTransform* self, intptr_t slot);
void QGraphicsTransform_QBaseApplyTo(const QGraphicsTransform* self, QMatrix4x4* matrix);
void QGraphicsTransform_Update(QGraphicsTransform* self);
void QGraphicsTransform_OnUpdate(QGraphicsTransform* self, intptr_t slot);
void QGraphicsTransform_QBaseUpdate(QGraphicsTransform* self);
void QGraphicsTransform_Delete(QGraphicsTransform* self);

QGraphicsScale* QGraphicsScale_new();
QGraphicsScale* QGraphicsScale_new2(QObject* parent);
libqt_string QGraphicsScale_Tr(const char* s);
QVector3D* QGraphicsScale_Origin(const QGraphicsScale* self);
void QGraphicsScale_SetOrigin(QGraphicsScale* self, const QVector3D* point);
double QGraphicsScale_XScale(const QGraphicsScale* self);
void QGraphicsScale_SetXScale(QGraphicsScale* self, double xScale);
double QGraphicsScale_YScale(const QGraphicsScale* self);
void QGraphicsScale_SetYScale(QGraphicsScale* self, double yScale);
double QGraphicsScale_ZScale(const QGraphicsScale* self);
void QGraphicsScale_SetZScale(QGraphicsScale* self, double zScale);
void QGraphicsScale_ApplyTo(const QGraphicsScale* self, QMatrix4x4* matrix);
void QGraphicsScale_OriginChanged(QGraphicsScale* self);
void QGraphicsScale_Connect_OriginChanged(QGraphicsScale* self, intptr_t slot);
void QGraphicsScale_XScaleChanged(QGraphicsScale* self);
void QGraphicsScale_Connect_XScaleChanged(QGraphicsScale* self, intptr_t slot);
void QGraphicsScale_YScaleChanged(QGraphicsScale* self);
void QGraphicsScale_Connect_YScaleChanged(QGraphicsScale* self, intptr_t slot);
void QGraphicsScale_ZScaleChanged(QGraphicsScale* self);
void QGraphicsScale_Connect_ZScaleChanged(QGraphicsScale* self, intptr_t slot);
void QGraphicsScale_ScaleChanged(QGraphicsScale* self);
void QGraphicsScale_Connect_ScaleChanged(QGraphicsScale* self, intptr_t slot);
libqt_string QGraphicsScale_Tr2(const char* s, const char* c);
libqt_string QGraphicsScale_Tr3(const char* s, const char* c, int n);
void QGraphicsScale_OnApplyTo(const QGraphicsScale* self, intptr_t slot);
void QGraphicsScale_QBaseApplyTo(const QGraphicsScale* self, QMatrix4x4* matrix);
void QGraphicsScale_Delete(QGraphicsScale* self);

QGraphicsRotation* QGraphicsRotation_new();
QGraphicsRotation* QGraphicsRotation_new2(QObject* parent);
libqt_string QGraphicsRotation_Tr(const char* s);
QVector3D* QGraphicsRotation_Origin(const QGraphicsRotation* self);
void QGraphicsRotation_SetOrigin(QGraphicsRotation* self, const QVector3D* point);
double QGraphicsRotation_Angle(const QGraphicsRotation* self);
void QGraphicsRotation_SetAngle(QGraphicsRotation* self, double angle);
QVector3D* QGraphicsRotation_Axis(const QGraphicsRotation* self);
void QGraphicsRotation_SetAxis(QGraphicsRotation* self, const QVector3D* axis);
void QGraphicsRotation_SetAxis2(QGraphicsRotation* self, int axis);
void QGraphicsRotation_ApplyTo(const QGraphicsRotation* self, QMatrix4x4* matrix);
void QGraphicsRotation_OriginChanged(QGraphicsRotation* self);
void QGraphicsRotation_Connect_OriginChanged(QGraphicsRotation* self, intptr_t slot);
void QGraphicsRotation_AngleChanged(QGraphicsRotation* self);
void QGraphicsRotation_Connect_AngleChanged(QGraphicsRotation* self, intptr_t slot);
void QGraphicsRotation_AxisChanged(QGraphicsRotation* self);
void QGraphicsRotation_Connect_AxisChanged(QGraphicsRotation* self, intptr_t slot);
libqt_string QGraphicsRotation_Tr2(const char* s, const char* c);
libqt_string QGraphicsRotation_Tr3(const char* s, const char* c, int n);
void QGraphicsRotation_OnApplyTo(const QGraphicsRotation* self, intptr_t slot);
void QGraphicsRotation_QBaseApplyTo(const QGraphicsRotation* self, QMatrix4x4* matrix);
void QGraphicsRotation_Delete(QGraphicsRotation* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
