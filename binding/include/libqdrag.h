#pragma once
#ifndef QDRAG_H_C_LIB
#define QDRAG_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QDrag QDrag;
typedef struct QMimeData QMimeData;
typedef struct QObject QObject;
typedef struct QPixmap QPixmap;
typedef struct QPoint QPoint;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QDrag* QDrag_new(QObject* dragSource);
libqt_string QDrag_Tr(const char* s);
void QDrag_SetMimeData(QDrag* self, QMimeData* data);
QMimeData* QDrag_MimeData(const QDrag* self);
void QDrag_SetPixmap(QDrag* self, const QPixmap* pixmap);
QPixmap* QDrag_Pixmap(const QDrag* self);
void QDrag_SetHotSpot(QDrag* self, const QPoint* hotspot);
QPoint* QDrag_HotSpot(const QDrag* self);
QObject* QDrag_Source(const QDrag* self);
QObject* QDrag_Target(const QDrag* self);
int QDrag_Exec(QDrag* self);
int QDrag_Exec2(QDrag* self, int supportedActions, int defaultAction);
void QDrag_SetDragCursor(QDrag* self, const QPixmap* cursor, int action);
QPixmap* QDrag_DragCursor(const QDrag* self, int action);
int QDrag_SupportedActions(const QDrag* self);
int QDrag_DefaultAction(const QDrag* self);
void QDrag_Cancel();
void QDrag_ActionChanged(QDrag* self, int action);
void QDrag_Connect_ActionChanged(QDrag* self, intptr_t slot);
void QDrag_TargetChanged(QDrag* self, QObject* newTarget);
void QDrag_Connect_TargetChanged(QDrag* self, intptr_t slot);
libqt_string QDrag_Tr2(const char* s, const char* c);
libqt_string QDrag_Tr3(const char* s, const char* c, int n);
int QDrag_Exec1(QDrag* self, int supportedActions);
void QDrag_Delete(QDrag* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
