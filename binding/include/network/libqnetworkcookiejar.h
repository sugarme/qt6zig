#pragma once
#ifndef QNETWORKCOOKIEJAR_H_C_LIB
#define QNETWORKCOOKIEJAR_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QNetworkCookie QNetworkCookie;
typedef struct QNetworkCookieJar QNetworkCookieJar;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QNetworkCookieJar* QNetworkCookieJar_new();
QNetworkCookieJar* QNetworkCookieJar_new2(QObject* parent);
libqt_string QNetworkCookieJar_Tr(const char* s);
libqt_list QNetworkCookieJar_CookiesForUrl(const QNetworkCookieJar* self, const QUrl* url);
bool QNetworkCookieJar_SetCookiesFromUrl(QNetworkCookieJar* self, const libqt_list cookieList, const QUrl* url);
bool QNetworkCookieJar_InsertCookie(QNetworkCookieJar* self, const QNetworkCookie* cookie);
bool QNetworkCookieJar_UpdateCookie(QNetworkCookieJar* self, const QNetworkCookie* cookie);
bool QNetworkCookieJar_DeleteCookie(QNetworkCookieJar* self, const QNetworkCookie* cookie);
bool QNetworkCookieJar_ValidateCookie(const QNetworkCookieJar* self, const QNetworkCookie* cookie, const QUrl* url);
libqt_string QNetworkCookieJar_Tr2(const char* s, const char* c);
libqt_string QNetworkCookieJar_Tr3(const char* s, const char* c, int n);
void QNetworkCookieJar_OnCookiesForUrl(const QNetworkCookieJar* self, intptr_t slot);
libqt_list QNetworkCookieJar_QBaseCookiesForUrl(const QNetworkCookieJar* self, const QUrl* url);
void QNetworkCookieJar_OnSetCookiesFromUrl(QNetworkCookieJar* self, intptr_t slot);
bool QNetworkCookieJar_QBaseSetCookiesFromUrl(QNetworkCookieJar* self, const libqt_list cookieList, const QUrl* url);
void QNetworkCookieJar_OnInsertCookie(QNetworkCookieJar* self, intptr_t slot);
bool QNetworkCookieJar_QBaseInsertCookie(QNetworkCookieJar* self, const QNetworkCookie* cookie);
void QNetworkCookieJar_OnUpdateCookie(QNetworkCookieJar* self, intptr_t slot);
bool QNetworkCookieJar_QBaseUpdateCookie(QNetworkCookieJar* self, const QNetworkCookie* cookie);
void QNetworkCookieJar_OnDeleteCookie(QNetworkCookieJar* self, intptr_t slot);
bool QNetworkCookieJar_QBaseDeleteCookie(QNetworkCookieJar* self, const QNetworkCookie* cookie);
void QNetworkCookieJar_OnValidateCookie(const QNetworkCookieJar* self, intptr_t slot);
bool QNetworkCookieJar_QBaseValidateCookie(const QNetworkCookieJar* self, const QNetworkCookie* cookie, const QUrl* url);
libqt_list QNetworkCookieJar_AllCookies(const QNetworkCookieJar* self);
void QNetworkCookieJar_OnAllCookies(const QNetworkCookieJar* self, intptr_t slot);
libqt_list QNetworkCookieJar_QBaseAllCookies(const QNetworkCookieJar* self);
void QNetworkCookieJar_SetAllCookies(QNetworkCookieJar* self, const libqt_list cookieList);
void QNetworkCookieJar_OnSetAllCookies(QNetworkCookieJar* self, intptr_t slot);
void QNetworkCookieJar_QBaseSetAllCookies(QNetworkCookieJar* self, const libqt_list cookieList);
void QNetworkCookieJar_Delete(QNetworkCookieJar* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
