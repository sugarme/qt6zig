#pragma once
#ifndef QPOINTINGDEVICE_H_C_LIB
#define QPOINTINGDEVICE_H_C_LIB

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
typedef struct QEventPoint QEventPoint;
typedef struct QInputDevice QInputDevice;
typedef struct QObject QObject;
typedef struct QPointerEvent QPointerEvent;
typedef struct QPointingDevice QPointingDevice;
typedef struct QPointingDeviceUniqueId QPointingDeviceUniqueId;
typedef struct QScreen QScreen;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif





QPointingDeviceUniqueId* QPointingDeviceUniqueId_new(const QPointingDeviceUniqueId* other);
QPointingDeviceUniqueId* QPointingDeviceUniqueId_new2(QPointingDeviceUniqueId* other);
QPointingDeviceUniqueId* QPointingDeviceUniqueId_new3();
QPointingDeviceUniqueId* QPointingDeviceUniqueId_new4(const QPointingDeviceUniqueId* param1);
void QPointingDeviceUniqueId_CopyAssign(QPointingDeviceUniqueId* self, QPointingDeviceUniqueId* other);
void QPointingDeviceUniqueId_MoveAssign(QPointingDeviceUniqueId* self, QPointingDeviceUniqueId* other);
QPointingDeviceUniqueId* QPointingDeviceUniqueId_FromNumericId(long long id);
bool QPointingDeviceUniqueId_IsValid(const QPointingDeviceUniqueId* self);
long long QPointingDeviceUniqueId_NumericId(const QPointingDeviceUniqueId* self);
void QPointingDeviceUniqueId_Delete(QPointingDeviceUniqueId* self);

QPointingDevice* QPointingDevice_new();
QPointingDevice* QPointingDevice_new2(const libqt_string name, long long systemId, int devType, int pType, int caps, int maxPoints, int buttonCount);
QPointingDevice* QPointingDevice_new3(QObject* parent);
QPointingDevice* QPointingDevice_new4(const libqt_string name, long long systemId, int devType, int pType, int caps, int maxPoints, int buttonCount, const libqt_string seatName);
QPointingDevice* QPointingDevice_new5(const libqt_string name, long long systemId, int devType, int pType, int caps, int maxPoints, int buttonCount, const libqt_string seatName, QPointingDeviceUniqueId* uniqueId);
QPointingDevice* QPointingDevice_new6(const libqt_string name, long long systemId, int devType, int pType, int caps, int maxPoints, int buttonCount, const libqt_string seatName, QPointingDeviceUniqueId* uniqueId, QObject* parent);
libqt_string QPointingDevice_Tr(const char* s);
void QPointingDevice_SetType(QPointingDevice* self, int devType);
void QPointingDevice_SetCapabilities(QPointingDevice* self, int caps);
void QPointingDevice_SetMaximumTouchPoints(QPointingDevice* self, int c);
int QPointingDevice_PointerType(const QPointingDevice* self);
int QPointingDevice_MaximumPoints(const QPointingDevice* self);
int QPointingDevice_ButtonCount(const QPointingDevice* self);
QPointingDeviceUniqueId* QPointingDevice_UniqueId(const QPointingDevice* self);
const QPointingDevice* QPointingDevice_PrimaryPointingDevice();
bool QPointingDevice_OperatorEqual(const QPointingDevice* self, const QPointingDevice* other);
void QPointingDevice_GrabChanged(const QPointingDevice* self, QObject* grabber, int transition, const QPointerEvent* event, const QEventPoint* point);
void QPointingDevice_Connect_GrabChanged(QPointingDevice* self, intptr_t slot);
libqt_string QPointingDevice_Tr2(const char* s, const char* c);
libqt_string QPointingDevice_Tr3(const char* s, const char* c, int n);
const QPointingDevice* QPointingDevice_PrimaryPointingDevice1(const libqt_string seatName);
void QPointingDevice_Delete(QPointingDevice* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
