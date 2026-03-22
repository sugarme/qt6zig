#pragma once
#ifndef QTESTSUPPORT_WIDGETS_H_C_LIB
#define QTESTSUPPORT_WIDGETS_H_C_LIB

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
#if defined(WORKAROUND_INNER_CLASS_DEFINITION_QTest__QTouchEventWidgetSequence)
typedef QTest::QTouchEventWidgetSequence QTest__QTouchEventWidgetSequence;
#endif
#else
typedef struct QPoint QPoint;
typedef struct QPointingDevice QPointingDevice;
typedef struct QTest__QTouchEventSequence QTest__QTouchEventSequence;
typedef struct QTest__QTouchEventWidgetSequence QTest__QTouchEventWidgetSequence;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif




QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_new(const QTest__QTouchEventWidgetSequence* param1);
QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_Press(QTest__QTouchEventWidgetSequence* self, int touchId, const QPoint* pt);
QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_Move(QTest__QTouchEventWidgetSequence* self, int touchId, const QPoint* pt);
QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_Release(QTest__QTouchEventWidgetSequence* self, int touchId, const QPoint* pt);
QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_Stationary(QTest__QTouchEventWidgetSequence* self, int touchId);
bool QTest__QTouchEventWidgetSequence_Commit(QTest__QTouchEventWidgetSequence* self, bool processEvents);
QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_Press3(QTest__QTouchEventWidgetSequence* self, int touchId, const QPoint* pt, QWidget* widget);
QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_Move3(QTest__QTouchEventWidgetSequence* self, int touchId, const QPoint* pt, QWidget* widget);
QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_Release3(QTest__QTouchEventWidgetSequence* self, int touchId, const QPoint* pt, QWidget* widget);
void QTest__QTouchEventWidgetSequence_OnStationary(QTest__QTouchEventWidgetSequence* self, intptr_t slot);
QTest__QTouchEventWidgetSequence* QTest__QTouchEventWidgetSequence_QBaseStationary(QTest__QTouchEventWidgetSequence* self, int touchId);
void QTest__QTouchEventWidgetSequence_OnCommit(QTest__QTouchEventWidgetSequence* self, intptr_t slot);
bool QTest__QTouchEventWidgetSequence_QBaseCommit(QTest__QTouchEventWidgetSequence* self, bool processEvents);
void QTest__QTouchEventWidgetSequence_Delete(QTest__QTouchEventWidgetSequence* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
