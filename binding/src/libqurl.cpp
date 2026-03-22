#include <QByteArray>
#include <QByteArrayView>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QUrl>
#include <QUrlQuery>
#include <qurl.h>
#include "libqurl.h"
#include "libqurl.hxx"

QUrl* QUrl_new() {
	 return new QUrl();
}

QUrl* QUrl_new2(const QUrl* copyVal) {
	 return new QUrl(*copyVal);
}

QUrl* QUrl_new3(const libqt_string url) {
	 return new QUrl(QString::fromUtf8(url.data, url.len));
}

QUrl* QUrl_new4(const libqt_string url, int mode) {
	 return new QUrl(QString::fromUtf8(url.data, url.len), static_cast<QUrl::ParsingMode>(mode));
}

void QUrl_OperatorAssign(QUrl* self, const QUrl* copyVal) {
	self->operator=(*copyVal);
}

void QUrl_OperatorAssign2(QUrl* self, const libqt_string url) {
	self->operator=(QString::fromUtf8(url.data, url.len));
}

void QUrl_Swap(QUrl* self, QUrl* other) {
	self->swap(*other);
}

void QUrl_SetUrl(QUrl* self, const libqt_string url) {
	self->setUrl(QString::fromUtf8(url.data, url.len));
}

libqt_string QUrl_Url(const QUrl* self) {
	QString _ret = self->url();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QUrl_ToString(const QUrl* self) {
	QString _ret = self->toString();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QUrl_ToDisplayString(const QUrl* self) {
	QString _ret = self->toDisplayString();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QUrl* QUrl_Adjusted(const QUrl* self, QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption> options) {
	return new QUrl(self->adjusted(options));
}

libqt_string QUrl_ToEncoded(const QUrl* self) {
	QByteArray _qb = self->toEncoded();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QUrl* QUrl_FromEncoded(QByteArrayView* input) {
	return new QUrl(QUrl::fromEncoded(*input));
}

QUrl* QUrl_FromUserInput(const libqt_string userInput) {
	return new QUrl(QUrl::fromUserInput(QString::fromUtf8(userInput.data, userInput.len)));
}

bool QUrl_IsValid(const QUrl* self) {
	return self->isValid();
}

libqt_string QUrl_ErrorString(const QUrl* self) {
	QString _ret = self->errorString();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QUrl_IsEmpty(const QUrl* self) {
	return self->isEmpty();
}

void QUrl_Clear(QUrl* self) {
	self->clear();
}

void QUrl_SetScheme(QUrl* self, const libqt_string scheme) {
	self->setScheme(QString::fromUtf8(scheme.data, scheme.len));
}

libqt_string QUrl_Scheme(const QUrl* self) {
	QString _ret = self->scheme();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QUrl_SetAuthority(QUrl* self, const libqt_string authority) {
	self->setAuthority(QString::fromUtf8(authority.data, authority.len));
}

libqt_string QUrl_Authority(const QUrl* self) {
	QString _ret = self->authority();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QUrl_SetUserInfo(QUrl* self, const libqt_string userInfo) {
	self->setUserInfo(QString::fromUtf8(userInfo.data, userInfo.len));
}

libqt_string QUrl_UserInfo(const QUrl* self) {
	QString _ret = self->userInfo();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QUrl_SetUserName(QUrl* self, const libqt_string userName) {
	self->setUserName(QString::fromUtf8(userName.data, userName.len));
}

libqt_string QUrl_UserName(const QUrl* self) {
	QString _ret = self->userName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QUrl_SetPassword(QUrl* self, const libqt_string password) {
	self->setPassword(QString::fromUtf8(password.data, password.len));
}

libqt_string QUrl_Password(const QUrl* self) {
	QString _ret = self->password();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QUrl_SetHost(QUrl* self, const libqt_string host) {
	self->setHost(QString::fromUtf8(host.data, host.len));
}

libqt_string QUrl_Host(const QUrl* self) {
	QString _ret = self->host();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QUrl_SetPort(QUrl* self, int port) {
	self->setPort(port);
}

int QUrl_Port(const QUrl* self) {
	return self->port();
}

void QUrl_SetPath(QUrl* self, const libqt_string path) {
	self->setPath(QString::fromUtf8(path.data, path.len));
}

libqt_string QUrl_Path(const QUrl* self) {
	QString _ret = self->path();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QUrl_FileName(const QUrl* self) {
	QString _ret = self->fileName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QUrl_HasQuery(const QUrl* self) {
	return self->hasQuery();
}

void QUrl_SetQuery(QUrl* self, const libqt_string query) {
	self->setQuery(QString::fromUtf8(query.data, query.len));
}

void QUrl_SetQuery2(QUrl* self, const QUrlQuery* query) {
	self->setQuery(*query);
}

libqt_string QUrl_Query(const QUrl* self) {
	QString _ret = self->query();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QUrl_HasFragment(const QUrl* self) {
	return self->hasFragment();
}

libqt_string QUrl_Fragment(const QUrl* self) {
	QString _ret = self->fragment();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QUrl_SetFragment(QUrl* self, const libqt_string fragment) {
	self->setFragment(QString::fromUtf8(fragment.data, fragment.len));
}

QUrl* QUrl_Resolved(const QUrl* self, const QUrl* relative) {
	return new QUrl(self->resolved(*relative));
}

bool QUrl_IsRelative(const QUrl* self) {
	return self->isRelative();
}

bool QUrl_IsParentOf(const QUrl* self, const QUrl* url) {
	return self->isParentOf(*url);
}

bool QUrl_IsLocalFile(const QUrl* self) {
	return self->isLocalFile();
}

QUrl* QUrl_FromLocalFile(const libqt_string localfile) {
	return new QUrl(QUrl::fromLocalFile(QString::fromUtf8(localfile.data, localfile.len)));
}

libqt_string QUrl_ToLocalFile(const QUrl* self) {
	QString _ret = self->toLocalFile();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QUrl_Detach(QUrl* self) {
	self->detach();
}

bool QUrl_IsDetached(const QUrl* self) {
	return self->isDetached();
}

bool QUrl_Matches(const QUrl* self, const QUrl* url, QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption> options) {
	return self->matches(*url, options);
}

libqt_string QUrl_FromPercentEncoding(const libqt_string param1) {
	QString _ret = QUrl::fromPercentEncoding(QByteArray(param1.data, param1.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QUrl_ToPercentEncoding(const libqt_string param1) {
	QByteArray _qb = QUrl::toPercentEncoding(QString::fromUtf8(param1.data, param1.len));
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QUrl_FromAce(const libqt_string domain) {
	QString _ret = QUrl::fromAce(QByteArray(domain.data, domain.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QUrl_ToAce(const libqt_string domain) {
	QByteArray _qb = QUrl::toAce(QString::fromUtf8(domain.data, domain.len));
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QUrl_IdnWhitelist() {
	return QUrl::idnWhitelist();
}

libqt_list QUrl_ToStringList(const libqt_list uris) {
	return QUrl::toStringList(*uris);
}

libqt_list QUrl_FromStringList(const libqt_list uris) {
	return QUrl::fromStringList(*uris);
}

void QUrl_SetIdnWhitelist(const libqt_list idnWhitelist) {
	QUrl::setIdnWhitelist(*idnWhitelist);
}

QUrlPrivate** QUrl_DataPtr(QUrl* self) {
	return self->data_ptr();
}

void QUrl_SetUrl2(QUrl* self, const libqt_string url, int mode) {
	self->setUrl(QString::fromUtf8(url.data, url.len), static_cast<QUrl::ParsingMode>(mode));
}

libqt_string QUrl_Url1(const QUrl* self, QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption> options) {
	QString _ret = self->url(options);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QUrl_ToString1(const QUrl* self, QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption> options) {
	QString _ret = self->toString(options);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QUrl_ToDisplayString1(const QUrl* self, QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption> options) {
	QString _ret = self->toDisplayString(options);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QUrl_ToEncoded1(const QUrl* self, QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption> options) {
	QByteArray _qb = self->toEncoded(options);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QUrl* QUrl_FromEncoded2(QByteArrayView* input, int mode) {
	return new QUrl(QUrl::fromEncoded(*input, static_cast<QUrl::ParsingMode>(mode)));
}

QUrl* QUrl_FromUserInput2(const libqt_string userInput, const libqt_string workingDirectory) {
	return new QUrl(QUrl::fromUserInput(QString::fromUtf8(userInput.data, userInput.len), QString::fromUtf8(workingDirectory.data, workingDirectory.len)));
}

QUrl* QUrl_FromUserInput3(const libqt_string userInput, const libqt_string workingDirectory, int options) {
	return new QUrl(QUrl::fromUserInput(QString::fromUtf8(userInput.data, userInput.len), QString::fromUtf8(workingDirectory.data, workingDirectory.len), static_cast<QFlags<QUrl::UserInputResolutionOption>>(options)));
}

void QUrl_SetAuthority2(QUrl* self, const libqt_string authority, int mode) {
	self->setAuthority(QString::fromUtf8(authority.data, authority.len), static_cast<QUrl::ParsingMode>(mode));
}

libqt_string QUrl_Authority1(const QUrl* self, unsigned int options) {
	QString _ret = self->authority(static_cast<QFlags<QUrl::ComponentFormattingOption>>(options));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QUrl_SetUserInfo2(QUrl* self, const libqt_string userInfo, int mode) {
	self->setUserInfo(QString::fromUtf8(userInfo.data, userInfo.len), static_cast<QUrl::ParsingMode>(mode));
}

libqt_string QUrl_UserInfo1(const QUrl* self, unsigned int options) {
	QString _ret = self->userInfo(static_cast<QFlags<QUrl::ComponentFormattingOption>>(options));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QUrl_SetUserName2(QUrl* self, const libqt_string userName, int mode) {
	self->setUserName(QString::fromUtf8(userName.data, userName.len), static_cast<QUrl::ParsingMode>(mode));
}

libqt_string QUrl_UserName1(const QUrl* self, unsigned int options) {
	QString _ret = self->userName(static_cast<QFlags<QUrl::ComponentFormattingOption>>(options));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QUrl_SetPassword2(QUrl* self, const libqt_string password, int mode) {
	self->setPassword(QString::fromUtf8(password.data, password.len), static_cast<QUrl::ParsingMode>(mode));
}

libqt_string QUrl_Password1(const QUrl* self, unsigned int param1) {
	QString _ret = self->password(static_cast<QFlags<QUrl::ComponentFormattingOption>>(param1));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QUrl_SetHost2(QUrl* self, const libqt_string host, int mode) {
	self->setHost(QString::fromUtf8(host.data, host.len), static_cast<QUrl::ParsingMode>(mode));
}

libqt_string QUrl_Host1(const QUrl* self, unsigned int param1) {
	QString _ret = self->host(static_cast<QFlags<QUrl::ComponentFormattingOption>>(param1));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QUrl_Port1(const QUrl* self, int defaultPort) {
	return self->port(defaultPort);
}

void QUrl_SetPath2(QUrl* self, const libqt_string path, int mode) {
	self->setPath(QString::fromUtf8(path.data, path.len), static_cast<QUrl::ParsingMode>(mode));
}

libqt_string QUrl_Path1(const QUrl* self, unsigned int options) {
	QString _ret = self->path(static_cast<QFlags<QUrl::ComponentFormattingOption>>(options));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QUrl_FileName1(const QUrl* self, unsigned int options) {
	QString _ret = self->fileName(static_cast<QFlags<QUrl::ComponentFormattingOption>>(options));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QUrl_SetQuery22(QUrl* self, const libqt_string query, int mode) {
	self->setQuery(QString::fromUtf8(query.data, query.len), static_cast<QUrl::ParsingMode>(mode));
}

libqt_string QUrl_Query1(const QUrl* self, unsigned int param1) {
	QString _ret = self->query(static_cast<QFlags<QUrl::ComponentFormattingOption>>(param1));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QUrl_Fragment1(const QUrl* self, unsigned int options) {
	QString _ret = self->fragment(static_cast<QFlags<QUrl::ComponentFormattingOption>>(options));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QUrl_SetFragment2(QUrl* self, const libqt_string fragment, int mode) {
	self->setFragment(QString::fromUtf8(fragment.data, fragment.len), static_cast<QUrl::ParsingMode>(mode));
}

libqt_string QUrl_ToPercentEncoding2(const libqt_string param1, const libqt_string exclude) {
	QByteArray _qb = QUrl::toPercentEncoding(QString::fromUtf8(param1.data, param1.len), QByteArray(exclude.data, exclude.len));
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QUrl_ToPercentEncoding3(const libqt_string param1, const libqt_string exclude, const libqt_string include) {
	QByteArray _qb = QUrl::toPercentEncoding(QString::fromUtf8(param1.data, param1.len), QByteArray(exclude.data, exclude.len), QByteArray(include.data, include.len));
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QUrl_FromAce2(const libqt_string domain, unsigned int options) {
	QString _ret = QUrl::fromAce(QByteArray(domain.data, domain.len), static_cast<QFlags<QUrl::AceProcessingOption>>(options));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QUrl_ToAce2(const libqt_string domain, unsigned int options) {
	QByteArray _qb = QUrl::toAce(QString::fromUtf8(domain.data, domain.len), static_cast<QFlags<QUrl::AceProcessingOption>>(options));
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QUrl_ToStringList2(const libqt_list uris, QUrlTwoFlags<QUrl::UrlFormattingOption, QUrl::ComponentFormattingOption> options) {
	return QUrl::toStringList(*uris, options);
}

libqt_list QUrl_FromStringList2(const libqt_list uris, int mode) {
	return QUrl::fromStringList(*uris, static_cast<QUrl::ParsingMode>(mode));
}

void QUrl_Delete(QUrl* self) {
    delete self;
}

