#include <QByteArray>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QSysInfo>
#include <qsysinfo.h>
#include "libqsysinfo.h"
#include "libqsysinfo.hxx"

QSysInfo* QSysInfo_new(const QSysInfo* other) {
	 return new QSysInfo(*other);
}

QSysInfo* QSysInfo_new2(QSysInfo* other) {
	 return new QSysInfo(*other);
}

QSysInfo* QSysInfo_new3() {
	 return new QSysInfo();
}

QSysInfo* QSysInfo_new4(const QSysInfo* param1) {
	 return new QSysInfo(*param1);
}

void QSysInfo_CopyAssign(QSysInfo* self, QSysInfo* other) {
    *self = *other;
}

void QSysInfo_MoveAssign(QSysInfo* self, QSysInfo* other) {
    *self = std::move(*other);
}

libqt_string QSysInfo_BuildCpuArchitecture() {
	QString _ret = QSysInfo::buildCpuArchitecture();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSysInfo_CurrentCpuArchitecture() {
	QString _ret = QSysInfo::currentCpuArchitecture();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSysInfo_BuildAbi() {
	QString _ret = QSysInfo::buildAbi();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSysInfo_KernelType() {
	QString _ret = QSysInfo::kernelType();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSysInfo_KernelVersion() {
	QString _ret = QSysInfo::kernelVersion();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSysInfo_ProductType() {
	QString _ret = QSysInfo::productType();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSysInfo_ProductVersion() {
	QString _ret = QSysInfo::productVersion();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSysInfo_PrettyProductName() {
	QString _ret = QSysInfo::prettyProductName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSysInfo_MachineHostName() {
	QString _ret = QSysInfo::machineHostName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSysInfo_MachineUniqueId() {
	QByteArray _qb = QSysInfo::machineUniqueId();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSysInfo_BootUniqueId() {
	QByteArray _qb = QSysInfo::bootUniqueId();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QSysInfo_OperatorAssign(QSysInfo* self, const QSysInfo* param1) {
	self->operator=(*param1);
}

void QSysInfo_Delete(QSysInfo* self) {
    delete self;
}

