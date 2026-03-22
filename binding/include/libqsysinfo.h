#pragma once
#ifndef QSYSINFO_H_C_LIB
#define QSYSINFO_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QSysInfo QSysInfo;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QSysInfo* QSysInfo_new(const QSysInfo* other);
QSysInfo* QSysInfo_new2(QSysInfo* other);
QSysInfo* QSysInfo_new3();
QSysInfo* QSysInfo_new4(const QSysInfo* param1);
void QSysInfo_CopyAssign(QSysInfo* self, QSysInfo* other);
void QSysInfo_MoveAssign(QSysInfo* self, QSysInfo* other);
libqt_string QSysInfo_BuildCpuArchitecture();
libqt_string QSysInfo_CurrentCpuArchitecture();
libqt_string QSysInfo_BuildAbi();
libqt_string QSysInfo_KernelType();
libqt_string QSysInfo_KernelVersion();
libqt_string QSysInfo_ProductType();
libqt_string QSysInfo_ProductVersion();
libqt_string QSysInfo_PrettyProductName();
libqt_string QSysInfo_MachineHostName();
libqt_string QSysInfo_MachineUniqueId();
libqt_string QSysInfo_BootUniqueId();
void QSysInfo_OperatorAssign(QSysInfo* self, const QSysInfo* param1);
void QSysInfo_Delete(QSysInfo* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
