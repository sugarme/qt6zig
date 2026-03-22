#pragma once
#ifndef QINPUTDEVICE_H_C_LIB
#define QINPUTDEVICE_H_C_LIB

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
typedef struct QInputDevice QInputDevice;
typedef struct QObject QObject;
typedef struct QRect QRect;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif




QInputDevice* QInputDevice_new();
QInputDevice* QInputDevice_new2(const libqt_string name, long long systemId, int typeVal);
QInputDevice* QInputDevice_new3(QObject* parent);
QInputDevice* QInputDevice_new4(const libqt_string name, long long systemId, int typeVal, const libqt_string seatName);
QInputDevice* QInputDevice_new5(const libqt_string name, long long systemId, int typeVal, const libqt_string seatName, QObject* parent);
libqt_string QInputDevice_Tr(const char* s);
libqt_string QInputDevice_Name(const QInputDevice* self);
int QInputDevice_Type(const QInputDevice* self);
int QInputDevice_Capabilities(const QInputDevice* self);
bool QInputDevice_HasCapability(const QInputDevice* self, int cap);
long long QInputDevice_SystemId(const QInputDevice* self);
libqt_string QInputDevice_SeatName(const QInputDevice* self);
QRect* QInputDevice_AvailableVirtualGeometry(const QInputDevice* self);
libqt_list QInputDevice_SeatNames();
libqt_list QInputDevice_Devices();
const QInputDevice* QInputDevice_PrimaryKeyboard();
bool QInputDevice_OperatorEqual(const QInputDevice* self, const QInputDevice* other);
void QInputDevice_AvailableVirtualGeometryChanged(QInputDevice* self, QRect* area);
void QInputDevice_Connect_AvailableVirtualGeometryChanged(QInputDevice* self, intptr_t slot);
libqt_string QInputDevice_Tr2(const char* s, const char* c);
libqt_string QInputDevice_Tr3(const char* s, const char* c, int n);
const QInputDevice* QInputDevice_PrimaryKeyboard1(const libqt_string seatName);
void QInputDevice_Delete(QInputDevice* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
