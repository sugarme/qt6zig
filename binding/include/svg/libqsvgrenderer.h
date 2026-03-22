#pragma once
#ifndef QSVGRENDERER_H_C_LIB
#define QSVGRENDERER_H_C_LIB

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
typedef struct QPainter QPainter;
typedef struct QRect QRect;
typedef struct QRectF QRectF;
typedef struct QSize QSize;
typedef struct QSvgRenderer QSvgRenderer;
typedef struct QTransform QTransform;
typedef struct QXmlStreamReader QXmlStreamReader;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif




QSvgRenderer* QSvgRenderer_new();
QSvgRenderer* QSvgRenderer_new2(const libqt_string filename);
QSvgRenderer* QSvgRenderer_new3(const libqt_string contents);
QSvgRenderer* QSvgRenderer_new4(QXmlStreamReader* contents);
QSvgRenderer* QSvgRenderer_new5(QObject* parent);
QSvgRenderer* QSvgRenderer_new6(const libqt_string filename, QObject* parent);
QSvgRenderer* QSvgRenderer_new7(const libqt_string contents, QObject* parent);
QSvgRenderer* QSvgRenderer_new8(QXmlStreamReader* contents, QObject* parent);
libqt_string QSvgRenderer_Tr(const char* s);
bool QSvgRenderer_IsValid(const QSvgRenderer* self);
QSize* QSvgRenderer_DefaultSize(const QSvgRenderer* self);
QRect* QSvgRenderer_ViewBox(const QSvgRenderer* self);
QRectF* QSvgRenderer_ViewBoxF(const QSvgRenderer* self);
void QSvgRenderer_SetViewBox(QSvgRenderer* self, const QRect* viewbox);
void QSvgRenderer_SetViewBox2(QSvgRenderer* self, const QRectF* viewbox);
int QSvgRenderer_AspectRatioMode(const QSvgRenderer* self);
void QSvgRenderer_SetAspectRatioMode(QSvgRenderer* self, int mode);
quint32 QSvgRenderer_Options(const QSvgRenderer* self);
void QSvgRenderer_SetOptions(QSvgRenderer* self, quint32 flags);
bool QSvgRenderer_Animated(const QSvgRenderer* self);
int QSvgRenderer_FramesPerSecond(const QSvgRenderer* self);
void QSvgRenderer_SetFramesPerSecond(QSvgRenderer* self, int num);
int QSvgRenderer_CurrentFrame(const QSvgRenderer* self);
void QSvgRenderer_SetCurrentFrame(QSvgRenderer* self, int currentFrame);
int QSvgRenderer_AnimationDuration(const QSvgRenderer* self);
bool QSvgRenderer_IsAnimationEnabled(const QSvgRenderer* self);
void QSvgRenderer_SetAnimationEnabled(QSvgRenderer* self, bool enable);
QRectF* QSvgRenderer_BoundsOnElement(const QSvgRenderer* self, const libqt_string id);
bool QSvgRenderer_ElementExists(const QSvgRenderer* self, const libqt_string id);
QTransform* QSvgRenderer_TransformForElement(const QSvgRenderer* self, const libqt_string id);
void QSvgRenderer_SetDefaultOptions(quint32 flags);
bool QSvgRenderer_Load(QSvgRenderer* self, const libqt_string filename);
bool QSvgRenderer_Load2(QSvgRenderer* self, const libqt_string contents);
bool QSvgRenderer_Load3(QSvgRenderer* self, QXmlStreamReader* contents);
void QSvgRenderer_Render(QSvgRenderer* self, QPainter* p);
void QSvgRenderer_Render2(QSvgRenderer* self, QPainter* p, const QRectF* bounds);
void QSvgRenderer_Render3(QSvgRenderer* self, QPainter* p, const libqt_string elementId);
void QSvgRenderer_RepaintNeeded(QSvgRenderer* self);
void QSvgRenderer_Connect_RepaintNeeded(QSvgRenderer* self, intptr_t slot);
libqt_string QSvgRenderer_Tr2(const char* s, const char* c);
libqt_string QSvgRenderer_Tr3(const char* s, const char* c, int n);
void QSvgRenderer_Render32(QSvgRenderer* self, QPainter* p, const libqt_string elementId, const QRectF* bounds);
void QSvgRenderer_Delete(QSvgRenderer* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
