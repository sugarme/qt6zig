#pragma once
#ifndef QNETWORKCOOKIEJAR_H_C_LIBVIRTUAL
#define QNETWORKCOOKIEJAR_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QNetworkCookieJar so that we can call protected methods
class VirtualQNetworkCookieJar final : public QNetworkCookieJar {

public:
	// Virtual class boolean flag
	bool isVirtualQNetworkCookieJar= true;

	// Virtual class public types (including callbacks)
	using QNetworkCookieJar_CookiesForUrl_Callback = libqt_list (*)(const QNetworkCookieJar*, const QUrl*);
	using QNetworkCookieJar_SetCookiesFromUrl_Callback = bool (*)(QNetworkCookieJar*, libqt_list, const QUrl*);
	using QNetworkCookieJar_InsertCookie_Callback = bool (*)(QNetworkCookieJar*, const QNetworkCookie*);
	using QNetworkCookieJar_UpdateCookie_Callback = bool (*)(QNetworkCookieJar*, const QNetworkCookie*);
	using QNetworkCookieJar_DeleteCookie_Callback = bool (*)(QNetworkCookieJar*, const QNetworkCookie*);
	using QNetworkCookieJar_ValidateCookie_Callback = bool (*)(const QNetworkCookieJar*, const QNetworkCookie*, const QUrl*);
	using QNetworkCookieJar_AllCookies_Callback = libqt_list (*)();
	using QNetworkCookieJar_SetAllCookies_Callback = void (*)(QNetworkCookieJar*, libqt_list);

protected:
	// Instance callback storage
	mutable QNetworkCookieJar_CookiesForUrl_Callback qnetworkcookiejar_cookiesforurl_callback = nullptr;
	mutable QNetworkCookieJar_SetCookiesFromUrl_Callback qnetworkcookiejar_setcookiesfromurl_callback = nullptr;
	mutable QNetworkCookieJar_InsertCookie_Callback qnetworkcookiejar_insertcookie_callback = nullptr;
	mutable QNetworkCookieJar_UpdateCookie_Callback qnetworkcookiejar_updatecookie_callback = nullptr;
	mutable QNetworkCookieJar_DeleteCookie_Callback qnetworkcookiejar_deletecookie_callback = nullptr;
	mutable QNetworkCookieJar_ValidateCookie_Callback qnetworkcookiejar_validatecookie_callback = nullptr;
	mutable QNetworkCookieJar_AllCookies_Callback qnetworkcookiejar_allcookies_callback = nullptr;
	mutable QNetworkCookieJar_SetAllCookies_Callback qnetworkcookiejar_setallcookies_callback = nullptr;

	// Instance base flags
    mutable bool qnetworkcookiejar_cookiesforurl_isbase = false;
    mutable bool qnetworkcookiejar_setcookiesfromurl_isbase = false;
    mutable bool qnetworkcookiejar_insertcookie_isbase = false;
    mutable bool qnetworkcookiejar_updatecookie_isbase = false;
    mutable bool qnetworkcookiejar_deletecookie_isbase = false;
    mutable bool qnetworkcookiejar_validatecookie_isbase = false;
    mutable bool qnetworkcookiejar_allcookies_isbase = false;
    mutable bool qnetworkcookiejar_setallcookies_isbase = false;

public:
	VirtualQNetworkCookieJar(): QNetworkCookieJar() {};
	VirtualQNetworkCookieJar(QObject* parent): QNetworkCookieJar(parent) {};

	~VirtualQNetworkCookieJar() {
		qnetworkcookiejar_cookiesforurl_callback = nullptr;
		qnetworkcookiejar_setcookiesfromurl_callback = nullptr;
		qnetworkcookiejar_insertcookie_callback = nullptr;
		qnetworkcookiejar_updatecookie_callback = nullptr;
		qnetworkcookiejar_deletecookie_callback = nullptr;
		qnetworkcookiejar_validatecookie_callback = nullptr;
		qnetworkcookiejar_allcookies_callback = nullptr;
		qnetworkcookiejar_setallcookies_callback = nullptr;
	}

// Callback setters
	inline void setQNetworkCookieJar_CookiesForUrl_Callback(QNetworkCookieJar_CookiesForUrl_Callback cb) const { qnetworkcookiejar_cookiesforurl_callback = cb; }
	inline void setQNetworkCookieJar_SetCookiesFromUrl_Callback(QNetworkCookieJar_SetCookiesFromUrl_Callback cb) const { qnetworkcookiejar_setcookiesfromurl_callback = cb; }
	inline void setQNetworkCookieJar_InsertCookie_Callback(QNetworkCookieJar_InsertCookie_Callback cb) const { qnetworkcookiejar_insertcookie_callback = cb; }
	inline void setQNetworkCookieJar_UpdateCookie_Callback(QNetworkCookieJar_UpdateCookie_Callback cb) const { qnetworkcookiejar_updatecookie_callback = cb; }
	inline void setQNetworkCookieJar_DeleteCookie_Callback(QNetworkCookieJar_DeleteCookie_Callback cb) const { qnetworkcookiejar_deletecookie_callback = cb; }
	inline void setQNetworkCookieJar_ValidateCookie_Callback(QNetworkCookieJar_ValidateCookie_Callback cb) const { qnetworkcookiejar_validatecookie_callback = cb; }
	inline void setQNetworkCookieJar_AllCookies_Callback(QNetworkCookieJar_AllCookies_Callback cb) const { qnetworkcookiejar_allcookies_callback = cb; }
	inline void setQNetworkCookieJar_SetAllCookies_Callback(QNetworkCookieJar_SetAllCookies_Callback cb) const { qnetworkcookiejar_setallcookies_callback = cb; }

// Base flag setters
	inline void setQNetworkCookieJar_CookiesForUrl_IsBase(bool value) const { qnetworkcookiejar_cookiesforurl_isbase = value; }
	inline void setQNetworkCookieJar_SetCookiesFromUrl_IsBase(bool value) const { qnetworkcookiejar_setcookiesfromurl_isbase = value; }
	inline void setQNetworkCookieJar_InsertCookie_IsBase(bool value) const { qnetworkcookiejar_insertcookie_isbase = value; }
	inline void setQNetworkCookieJar_UpdateCookie_IsBase(bool value) const { qnetworkcookiejar_updatecookie_isbase = value; }
	inline void setQNetworkCookieJar_DeleteCookie_IsBase(bool value) const { qnetworkcookiejar_deletecookie_isbase = value; }
	inline void setQNetworkCookieJar_ValidateCookie_IsBase(bool value) const { qnetworkcookiejar_validatecookie_isbase = value; }
	inline void setQNetworkCookieJar_AllCookies_IsBase(bool value) const { qnetworkcookiejar_allcookies_isbase = value; }
	inline void setQNetworkCookieJar_SetAllCookies_IsBase(bool value) const { qnetworkcookiejar_setallcookies_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QList<QNetworkCookie> cookiesForUrl(const QUrl& url) const override {
		if (qnetworkcookiejar_cookiesforurl_isbase) {
			qnetworkcookiejar_cookiesforurl_isbase = false;
			return QNetworkCookieJar::cookiesForUrl(url);
		} else if (qnetworkcookiejar_cookiesforurl_callback != nullptr) {
			const QUrl* cbval1 = (const QUrl*)&url;
			libqt_list callback_ret = qnetworkcookiejar_cookiesforurl_callback(this, cbval1);
			return callback_ret;
		} else {
			return QNetworkCookieJar::cookiesForUrl(url);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool setCookiesFromUrl(const QList<QNetworkCookie>& cookieList, const QUrl& url) override {
		if (qnetworkcookiejar_setcookiesfromurl_isbase) {
			qnetworkcookiejar_setcookiesfromurl_isbase = false;
			return QNetworkCookieJar::setCookiesFromUrl(cookieList, url);
		} else if (qnetworkcookiejar_setcookiesfromurl_callback != nullptr) {
			libqt_list cbval1 = cookieList;
			const QUrl* cbval2 = (const QUrl*)&url;
			bool callback_ret = qnetworkcookiejar_setcookiesfromurl_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QNetworkCookieJar::setCookiesFromUrl(cookieList, url);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool insertCookie(const QNetworkCookie& cookie) override {
		if (qnetworkcookiejar_insertcookie_isbase) {
			qnetworkcookiejar_insertcookie_isbase = false;
			return QNetworkCookieJar::insertCookie(cookie);
		} else if (qnetworkcookiejar_insertcookie_callback != nullptr) {
			const QNetworkCookie* cbval1 = (const QNetworkCookie*)&cookie;
			bool callback_ret = qnetworkcookiejar_insertcookie_callback(this, cbval1);
			return callback_ret;
		} else {
			return QNetworkCookieJar::insertCookie(cookie);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool updateCookie(const QNetworkCookie& cookie) override {
		if (qnetworkcookiejar_updatecookie_isbase) {
			qnetworkcookiejar_updatecookie_isbase = false;
			return QNetworkCookieJar::updateCookie(cookie);
		} else if (qnetworkcookiejar_updatecookie_callback != nullptr) {
			const QNetworkCookie* cbval1 = (const QNetworkCookie*)&cookie;
			bool callback_ret = qnetworkcookiejar_updatecookie_callback(this, cbval1);
			return callback_ret;
		} else {
			return QNetworkCookieJar::updateCookie(cookie);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool deleteCookie(const QNetworkCookie& cookie) override {
		if (qnetworkcookiejar_deletecookie_isbase) {
			qnetworkcookiejar_deletecookie_isbase = false;
			return QNetworkCookieJar::deleteCookie(cookie);
		} else if (qnetworkcookiejar_deletecookie_callback != nullptr) {
			const QNetworkCookie* cbval1 = (const QNetworkCookie*)&cookie;
			bool callback_ret = qnetworkcookiejar_deletecookie_callback(this, cbval1);
			return callback_ret;
		} else {
			return QNetworkCookieJar::deleteCookie(cookie);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool validateCookie(const QNetworkCookie& cookie, const QUrl& url) const override {
		if (qnetworkcookiejar_validatecookie_isbase) {
			qnetworkcookiejar_validatecookie_isbase = false;
			return QNetworkCookieJar::validateCookie(cookie, url);
		} else if (qnetworkcookiejar_validatecookie_callback != nullptr) {
			const QNetworkCookie* cbval1 = (const QNetworkCookie*)&cookie;
			const QUrl* cbval2 = (const QUrl*)&url;
			bool callback_ret = qnetworkcookiejar_validatecookie_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QNetworkCookieJar::validateCookie(cookie, url);
		}
	}

	// Virtual method for C ABI access and custom callback
	QList<QNetworkCookie> allCookies() const {
		if (qnetworkcookiejar_allcookies_isbase) {
			qnetworkcookiejar_allcookies_isbase = false;
			return QNetworkCookieJar::allCookies();
		} else if (qnetworkcookiejar_allcookies_callback != nullptr) {
			libqt_list callback_ret = qnetworkcookiejar_allcookies_callback();
			return callback_ret;
		} else {
			return QNetworkCookieJar::allCookies();
		}
	}

	// Virtual method for C ABI access and custom callback
	void setAllCookies(const QList<QNetworkCookie>& cookieList) {
		if (qnetworkcookiejar_setallcookies_isbase) {
			qnetworkcookiejar_setallcookies_isbase = false;
			QNetworkCookieJar::setAllCookies(cookieList);
		} else if (qnetworkcookiejar_setallcookies_callback != nullptr) {
			libqt_list cbval1 = cookieList;
			qnetworkcookiejar_setallcookies_callback(this, cbval1);
		} else {
			QNetworkCookieJar::setAllCookies(cookieList);
		}
	}

	// Friend functions
	friend bool QNetworkCookieJar_ValidateCookie(const QNetworkCookieJar* self, const QNetworkCookie* cookie, const QUrl* url);
	friend bool QNetworkCookieJar_QBaseValidateCookie(const QNetworkCookieJar* self, const QNetworkCookie* cookie, const QUrl* url);
	friend libqt_list QNetworkCookieJar_AllCookies(const QNetworkCookieJar* self);
	friend libqt_list QNetworkCookieJar_QBaseAllCookies(const QNetworkCookieJar* self);
	friend void QNetworkCookieJar_SetAllCookies(QNetworkCookieJar* self, const libqt_list cookieList);
	friend void QNetworkCookieJar_QBaseSetAllCookies(QNetworkCookieJar* self, const libqt_list cookieList);
};

#endif


