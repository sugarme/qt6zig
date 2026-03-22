#pragma once
#ifndef QTESTSUPPORT_GUI_H_C_LIB
#define QTESTSUPPORT_GUI_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QTest__QTouchEventSequence)
typedef QTest::QTouchEventSequence QTest__QTouchEventSequence;
#endif
#else
typedef struct QEventPoint QEventPoint;
typedef struct QPoint QPoint;
typedef struct QTest__QTouchEventSequence QTest__QTouchEventSequence;
typedef struct QWindow QWindow;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QTest__QTouchEventSequence* QTest__QTouchEventSequence_new(const QTest__QTouchEventSequence* param1);
QTest__QTouchEventSequence* QTest__QTouchEventSequence_Press(QTest__QTouchEventSequence* self, int touchId, const QPoint* pt);
QTest__QTouchEventSequence* QTest__QTouchEventSequence_Move(QTest__QTouchEventSequence* self, int touchId, const QPoint* pt);
QTest__QTouchEventSequence* QTest__QTouchEventSequence_Release(QTest__QTouchEventSequence* self, int touchId, const QPoint* pt);
QTest__QTouchEventSequence* QTest__QTouchEventSequence_Stationary(QTest__QTouchEventSequence* self, int touchId);
bool QTest__QTouchEventSequence_Commit(QTest__QTouchEventSequence* self, bool processEvents);
QTest__QTouchEventSequence* QTest__QTouchEventSequence_Press3(QTest__QTouchEventSequence* self, int touchId, const QPoint* pt, QWindow* window);
QTest__QTouchEventSequence* QTest__QTouchEventSequence_Move3(QTest__QTouchEventSequence* self, int touchId, const QPoint* pt, QWindow* window);
QTest__QTouchEventSequence* QTest__QTouchEventSequence_Release3(QTest__QTouchEventSequence* self, int touchId, const QPoint* pt, QWindow* window);
void QTest__QTouchEventSequence_OnStationary(QTest__QTouchEventSequence* self, intptr_t slot);
QTest__QTouchEventSequence* QTest__QTouchEventSequence_QBaseStationary(QTest__QTouchEventSequence* self, int touchId);
void QTest__QTouchEventSequence_OnCommit(QTest__QTouchEventSequence* self, intptr_t slot);
bool QTest__QTouchEventSequence_QBaseCommit(QTest__QTouchEventSequence* self, bool processEvents);
QPoint* QTest__QTouchEventSequence_MapToScreen(QTest__QTouchEventSequence* self, QWindow* window, const QPoint* pt);
void QTest__QTouchEventSequence_OnMapToScreen(QTest__QTouchEventSequence* self, intptr_t slot);
QPoint* QTest__QTouchEventSequence_QBaseMapToScreen(QTest__QTouchEventSequence* self, QWindow* window, const QPoint* pt);
QEventPoint* QTest__QTouchEventSequence_Point(QTest__QTouchEventSequence* self, int touchId);
void QTest__QTouchEventSequence_OnPoint(QTest__QTouchEventSequence* self, intptr_t slot);
QEventPoint* QTest__QTouchEventSequence_QBasePoint(QTest__QTouchEventSequence* self, int touchId);
QEventPoint* QTest__QTouchEventSequence_PointOrPreviousPoint(QTest__QTouchEventSequence* self, int touchId);
void QTest__QTouchEventSequence_OnPointOrPreviousPoint(QTest__QTouchEventSequence* self, intptr_t slot);
QEventPoint* QTest__QTouchEventSequence_QBasePointOrPreviousPoint(QTest__QTouchEventSequence* self, int touchId);
void QTest__QTouchEventSequence_OperatorAssign(QTest__QTouchEventSequence* self, const QTest__QTouchEventSequence* param1);
void QTest__QTouchEventSequence_OnOperatorAssign(QTest__QTouchEventSequence* self, intptr_t slot);
void QTest__QTouchEventSequence_QBaseOperatorAssign(QTest__QTouchEventSequence* self, const QTest__QTouchEventSequence* param1);
void QTest__QTouchEventSequence_Delete(QTest__QTouchEventSequence* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
