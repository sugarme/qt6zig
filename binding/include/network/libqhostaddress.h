#pragma once
#ifndef QHOSTADDRESS_H_C_LIB
#define QHOSTADDRESS_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QHostAddress QHostAddress;
typedef struct QIPv6Address QIPv6Address;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QIPv6Address* QIPv6Address_new();
QIPv6Address* QIPv6Address_new2(const QIPv6Address* param1);
unsigned char* QIPv6Address_OperatorSubscript(QIPv6Address* self, int index);
unsigned char QIPv6Address_OperatorSubscript2(const QIPv6Address* self, int index);
void QIPv6Address_OperatorAssign(QIPv6Address* self, const QIPv6Address* param1);
void QIPv6Address_Delete(QIPv6Address* self);

QHostAddress* QHostAddress_new();
QHostAddress* QHostAddress_new2(unsigned int ip4Addr);
QHostAddress* QHostAddress_new3(const unsigned char* ip6Addr);
QHostAddress* QHostAddress_new4(const QIPv6Address* ip6Addr);
QHostAddress* QHostAddress_new5(const sockaddr* address);
QHostAddress* QHostAddress_new6(const libqt_string address);
QHostAddress* QHostAddress_new7(const QHostAddress* copyVal);
QHostAddress* QHostAddress_new8(int address);
void QHostAddress_OperatorAssign(QHostAddress* self, const QHostAddress* other);
void QHostAddress_OperatorAssign2(QHostAddress* self, int address);
void QHostAddress_Swap(QHostAddress* self, QHostAddress* other);
void QHostAddress_SetAddress(QHostAddress* self, unsigned int ip4Addr);
void QHostAddress_SetAddress2(QHostAddress* self, const unsigned char* ip6Addr);
void QHostAddress_SetAddress3(QHostAddress* self, const QIPv6Address* ip6Addr);
void QHostAddress_SetAddress4(QHostAddress* self, const sockaddr* address);
bool QHostAddress_SetAddress5(QHostAddress* self, const libqt_string address);
void QHostAddress_SetAddress6(QHostAddress* self, int address);
int QHostAddress_Protocol(const QHostAddress* self);
unsigned int QHostAddress_ToIPv4Address(const QHostAddress* self);
QIPv6Address* QHostAddress_ToIPv6Address(const QHostAddress* self);
libqt_string QHostAddress_ToString(const QHostAddress* self);
libqt_string QHostAddress_ScopeId(const QHostAddress* self);
void QHostAddress_SetScopeId(QHostAddress* self, const libqt_string id);
bool QHostAddress_IsEqual(const QHostAddress* self, const QHostAddress* address);
bool QHostAddress_OperatorEqual(const QHostAddress* self, const QHostAddress* address);
bool QHostAddress_OperatorEqual2(const QHostAddress* self, int address);
bool QHostAddress_OperatorNotEqual(const QHostAddress* self, const QHostAddress* address);
bool QHostAddress_OperatorNotEqual2(const QHostAddress* self, int address);
bool QHostAddress_IsNull(const QHostAddress* self);
void QHostAddress_Clear(QHostAddress* self);
bool QHostAddress_IsInSubnet(const QHostAddress* self, const QHostAddress* subnet, int netmask);
bool QHostAddress_IsLoopback(const QHostAddress* self);
bool QHostAddress_IsGlobal(const QHostAddress* self);
bool QHostAddress_IsLinkLocal(const QHostAddress* self);
bool QHostAddress_IsSiteLocal(const QHostAddress* self);
bool QHostAddress_IsUniqueLocalUnicast(const QHostAddress* self);
bool QHostAddress_IsMulticast(const QHostAddress* self);
bool QHostAddress_IsBroadcast(const QHostAddress* self);
bool QHostAddress_IsPrivateUse(const QHostAddress* self);
libqt_pair QHostAddress_ParseSubnet(const libqt_string subnet);
unsigned int QHostAddress_ToIPv4Address1(const QHostAddress* self, bool* ok);
bool QHostAddress_IsEqual2(const QHostAddress* self, const QHostAddress* address, int mode);
void QHostAddress_Delete(QHostAddress* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
