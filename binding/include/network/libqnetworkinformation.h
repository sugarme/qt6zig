#pragma once
#ifndef QNETWORKINFORMATION_H_C_LIB
#define QNETWORKINFORMATION_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QNetworkInformation QNetworkInformation;
typedef struct QObject QObject;
typedef struct QStringView QStringView;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



libqt_string QNetworkInformation_Tr(const char* s);
int QNetworkInformation_Reachability(const QNetworkInformation* self);
bool QNetworkInformation_IsBehindCaptivePortal(const QNetworkInformation* self);
int QNetworkInformation_TransportMedium(const QNetworkInformation* self);
bool QNetworkInformation_IsMetered(const QNetworkInformation* self);
libqt_string QNetworkInformation_BackendName(const QNetworkInformation* self);
bool QNetworkInformation_Supports(const QNetworkInformation* self, int features);
int QNetworkInformation_SupportedFeatures(const QNetworkInformation* self);
bool QNetworkInformation_LoadDefaultBackend();
bool QNetworkInformation_LoadBackendByName(QStringView* backend);
bool QNetworkInformation_LoadBackendByFeatures(int features);
bool QNetworkInformation_Load(QStringView* backend);
bool QNetworkInformation_Load2(int features);
libqt_list QNetworkInformation_AvailableBackends();
QNetworkInformation* QNetworkInformation_Instance();
void QNetworkInformation_ReachabilityChanged(QNetworkInformation* self, int newReachability);
void QNetworkInformation_Connect_ReachabilityChanged(QNetworkInformation* self, intptr_t slot);
void QNetworkInformation_IsBehindCaptivePortalChanged(QNetworkInformation* self, bool state);
void QNetworkInformation_Connect_IsBehindCaptivePortalChanged(QNetworkInformation* self, intptr_t slot);
void QNetworkInformation_TransportMediumChanged(QNetworkInformation* self, int current);
void QNetworkInformation_Connect_TransportMediumChanged(QNetworkInformation* self, intptr_t slot);
void QNetworkInformation_IsMeteredChanged(QNetworkInformation* self, bool isMetered);
void QNetworkInformation_Connect_IsMeteredChanged(QNetworkInformation* self, intptr_t slot);
libqt_string QNetworkInformation_Tr2(const char* s, const char* c);
libqt_string QNetworkInformation_Tr3(const char* s, const char* c, int n);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
