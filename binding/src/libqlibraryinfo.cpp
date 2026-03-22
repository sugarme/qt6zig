#include <QLibraryInfo>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVersionNumber>
#include <qlibraryinfo.h>
#include "libqlibraryinfo.h"
#include "libqlibraryinfo.hxx"

QLibraryInfo* QLibraryInfo_new(const QLibraryInfo* other) {
	 return new QLibraryInfo(*other);
}

QLibraryInfo* QLibraryInfo_new2(QLibraryInfo* other) {
	 return new QLibraryInfo(*other);
}

QLibraryInfo* QLibraryInfo_new3(const QLibraryInfo* param1) {
	 return new QLibraryInfo(*param1);
}

void QLibraryInfo_CopyAssign(QLibraryInfo* self, QLibraryInfo* other) {
    *self = *other;
}

void QLibraryInfo_MoveAssign(QLibraryInfo* self, QLibraryInfo* other) {
    *self = std::move(*other);
}

const char* QLibraryInfo_Build() {
	return QLibraryInfo::build();
}

bool QLibraryInfo_IsDebugBuild() {
	return QLibraryInfo::isDebugBuild();
}

bool QLibraryInfo_IsSharedBuild() {
	return QLibraryInfo::isSharedBuild();
}

QVersionNumber* QLibraryInfo_Version() {
	return new QVersionNumber(QLibraryInfo::version());
}

libqt_string QLibraryInfo_Path(int p) {
	QString _ret = QLibraryInfo::path(static_cast<QLibraryInfo::LibraryPath>(p));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QLibraryInfo_Paths(int p) {
	return QLibraryInfo::paths(static_cast<QLibraryInfo::LibraryPath>(p));
}

libqt_string QLibraryInfo_Location(int location) {
	QString _ret = QLibraryInfo::location(static_cast<QLibraryInfo::LibraryPath>(location));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QLibraryInfo_PlatformPluginArguments(const libqt_string platformName) {
	return QLibraryInfo::platformPluginArguments(QString::fromUtf8(platformName.data, platformName.len));
}

void QLibraryInfo_Delete(QLibraryInfo* self) {
    delete self;
}

