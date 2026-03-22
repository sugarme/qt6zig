#include <QOperatingSystemVersion>
#include <QOperatingSystemVersionBase>
#include <QOperatingSystemVersionUnexported>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QVersionNumber>
#include <qoperatingsystemversion.h>
#include "libqoperatingsystemversion.h"
#include "libqoperatingsystemversion.hxx"

QOperatingSystemVersionBase* QOperatingSystemVersionBase_new(int osType, int vmajor) {
	 return new QOperatingSystemVersionBase(static_cast<QOperatingSystemVersion::OSType>(osType), vmajor);
}

QOperatingSystemVersionBase* QOperatingSystemVersionBase_new2(const QOperatingSystemVersionBase* param1) {
	 return new QOperatingSystemVersionBase(*param1);
}

QOperatingSystemVersionBase* QOperatingSystemVersionBase_new3(int osType, int vmajor, int vminor) {
	 return new QOperatingSystemVersionBase(static_cast<QOperatingSystemVersion::OSType>(osType), vmajor, vminor);
}

QOperatingSystemVersionBase* QOperatingSystemVersionBase_new4(int osType, int vmajor, int vminor, int vmicro) {
	 return new QOperatingSystemVersionBase(static_cast<QOperatingSystemVersion::OSType>(osType), vmajor, vminor, vmicro);
}

QOperatingSystemVersionBase* QOperatingSystemVersionBase_Current() {
	return new QOperatingSystemVersionBase(QOperatingSystemVersionBase::current());
}

libqt_string QOperatingSystemVersionBase_Name(QOperatingSystemVersionBase* osversion) {
	QString _ret = QOperatingSystemVersionBase::name(*osversion);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QOperatingSystemVersionBase_CurrentType() {
	return QOperatingSystemVersionBase::currentType();
}

QVersionNumber* QOperatingSystemVersionBase_Version(const QOperatingSystemVersionBase* self) {
	return new QVersionNumber(self->version());
}

int QOperatingSystemVersionBase_MajorVersion(const QOperatingSystemVersionBase* self) {
	return self->majorVersion();
}

int QOperatingSystemVersionBase_MinorVersion(const QOperatingSystemVersionBase* self) {
	return self->minorVersion();
}

int QOperatingSystemVersionBase_MicroVersion(const QOperatingSystemVersionBase* self) {
	return self->microVersion();
}

int QOperatingSystemVersionBase_SegmentCount(const QOperatingSystemVersionBase* self) {
	return self->segmentCount();
}

int QOperatingSystemVersionBase_Type(const QOperatingSystemVersionBase* self) {
	return self->type();
}

libqt_string QOperatingSystemVersionBase_Name2(const QOperatingSystemVersionBase* self) {
	QString _ret = self->name();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QOperatingSystemVersionBase_Delete(QOperatingSystemVersionBase* self) {
    delete self;
}

QOperatingSystemVersionUnexported* QOperatingSystemVersionUnexported_new(QOperatingSystemVersionBase* other) {
	 return new QOperatingSystemVersionUnexported(*other);
}

QOperatingSystemVersionUnexported* QOperatingSystemVersionUnexported_new2() {
	 return new QOperatingSystemVersionUnexported();
}

QOperatingSystemVersionUnexported* QOperatingSystemVersionUnexported_new3(const QOperatingSystemVersionUnexported* param1) {
	 return new QOperatingSystemVersionUnexported(*param1);
}

void QOperatingSystemVersionUnexported_OperatorAssign(QOperatingSystemVersionUnexported* self, const QOperatingSystemVersionUnexported* param1) {
	self->operator=(*param1);
}

void QOperatingSystemVersionUnexported_Delete(QOperatingSystemVersionUnexported* self) {
    delete self;
}

QOperatingSystemVersion* QOperatingSystemVersion_new(const QOperatingSystemVersionBase* osversion) {
	 return new QOperatingSystemVersion(*osversion);
}

QOperatingSystemVersion* QOperatingSystemVersion_new2(int osType, int vmajor) {
	 return new QOperatingSystemVersion(static_cast<QOperatingSystemVersion::OSType>(osType), vmajor);
}

QOperatingSystemVersion* QOperatingSystemVersion_new3(const QOperatingSystemVersion* param1) {
	 return new QOperatingSystemVersion(*param1);
}

QOperatingSystemVersion* QOperatingSystemVersion_new4(int osType, int vmajor, int vminor) {
	 return new QOperatingSystemVersion(static_cast<QOperatingSystemVersion::OSType>(osType), vmajor, vminor);
}

QOperatingSystemVersion* QOperatingSystemVersion_new5(int osType, int vmajor, int vminor, int vmicro) {
	 return new QOperatingSystemVersion(static_cast<QOperatingSystemVersion::OSType>(osType), vmajor, vminor, vmicro);
}

int QOperatingSystemVersion_CurrentType() {
	return QOperatingSystemVersion::currentType();
}

int QOperatingSystemVersion_Type(const QOperatingSystemVersion* self) {
	return self->type();
}

void QOperatingSystemVersion_Delete(QOperatingSystemVersion* self) {
    delete self;
}

