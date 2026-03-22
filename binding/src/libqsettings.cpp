#include <QAnyStringView>
#include <QEvent>
#include <QObject>
#include <QSettings>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QVariant>
#include <qsettings.h>
#include "libqsettings.h"
#include "libqsettings.hxx"

QSettings* QSettings_new(const libqt_string organization) {
	 return new VirtualQSettings(QString::fromUtf8(organization.data, organization.len));
}

QSettings* QSettings_new2(int scope, const libqt_string organization) {
	 return new VirtualQSettings(static_cast<QSettings::Scope>(scope), QString::fromUtf8(organization.data, organization.len));
}

QSettings* QSettings_new3(int format, int scope, const libqt_string organization) {
	 return new VirtualQSettings(static_cast<QImage::Format>(format), static_cast<QSettings::Scope>(scope), QString::fromUtf8(organization.data, organization.len));
}

QSettings* QSettings_new4(const libqt_string fileName, int format) {
	 return new VirtualQSettings(QString::fromUtf8(fileName.data, fileName.len), static_cast<QImage::Format>(format));
}

QSettings* QSettings_new5() {
	 return new VirtualQSettings();
}

QSettings* QSettings_new6(int scope) {
	 return new VirtualQSettings(static_cast<QSettings::Scope>(scope));
}

QSettings* QSettings_new7(const libqt_string organization, const libqt_string application) {
	 return new VirtualQSettings(QString::fromUtf8(organization.data, organization.len), QString::fromUtf8(application.data, application.len));
}

QSettings* QSettings_new8(const libqt_string organization, const libqt_string application, QObject* parent) {
	 return new VirtualQSettings(QString::fromUtf8(organization.data, organization.len), QString::fromUtf8(application.data, application.len), parent);
}

QSettings* QSettings_new9(int scope, const libqt_string organization, const libqt_string application) {
	 return new VirtualQSettings(static_cast<QSettings::Scope>(scope), QString::fromUtf8(organization.data, organization.len), QString::fromUtf8(application.data, application.len));
}

QSettings* QSettings_new10(int scope, const libqt_string organization, const libqt_string application, QObject* parent) {
	 return new VirtualQSettings(static_cast<QSettings::Scope>(scope), QString::fromUtf8(organization.data, organization.len), QString::fromUtf8(application.data, application.len), parent);
}

QSettings* QSettings_new11(int format, int scope, const libqt_string organization, const libqt_string application) {
	 return new VirtualQSettings(static_cast<QImage::Format>(format), static_cast<QSettings::Scope>(scope), QString::fromUtf8(organization.data, organization.len), QString::fromUtf8(application.data, application.len));
}

QSettings* QSettings_new12(int format, int scope, const libqt_string organization, const libqt_string application, QObject* parent) {
	 return new VirtualQSettings(static_cast<QImage::Format>(format), static_cast<QSettings::Scope>(scope), QString::fromUtf8(organization.data, organization.len), QString::fromUtf8(application.data, application.len), parent);
}

QSettings* QSettings_new13(const libqt_string fileName, int format, QObject* parent) {
	 return new VirtualQSettings(QString::fromUtf8(fileName.data, fileName.len), static_cast<QImage::Format>(format), parent);
}

QSettings* QSettings_new14(QObject* parent) {
	 return new VirtualQSettings(parent);
}

QSettings* QSettings_new15(int scope, QObject* parent) {
	 return new VirtualQSettings(static_cast<QSettings::Scope>(scope), parent);
}

libqt_string QSettings_Tr(const char* s) {
	QString _ret = QSettings::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QSettings_Clear(QSettings* self) {
	self->clear();
}

void QSettings_Sync(QSettings* self) {
	self->sync();
}

int QSettings_Status(const QSettings* self) {
	return self->status();
}

bool QSettings_IsAtomicSyncRequired(const QSettings* self) {
	return self->isAtomicSyncRequired();
}

void QSettings_SetAtomicSyncRequired(QSettings* self, bool enable) {
	self->setAtomicSyncRequired(enable);
}

void QSettings_BeginGroup(QSettings* self, libqt_string prefix) {
	self->beginGroup(QAnyStringView(QString::fromUtf8(prefix.data, prefix.len)));
}

void QSettings_EndGroup(QSettings* self) {
	self->endGroup();
}

libqt_string QSettings_Group(const QSettings* self) {
	QString _ret = self->group();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QSettings_BeginReadArray(QSettings* self, libqt_string prefix) {
	return self->beginReadArray(QAnyStringView(QString::fromUtf8(prefix.data, prefix.len)));
}

void QSettings_BeginWriteArray(QSettings* self, libqt_string prefix) {
	self->beginWriteArray(QAnyStringView(QString::fromUtf8(prefix.data, prefix.len)));
}

void QSettings_EndArray(QSettings* self) {
	self->endArray();
}

void QSettings_SetArrayIndex(QSettings* self, int i) {
	self->setArrayIndex(i);
}

libqt_list QSettings_AllKeys(const QSettings* self) {
	return self->allKeys();
}

libqt_list QSettings_ChildKeys(const QSettings* self) {
	return self->childKeys();
}

libqt_list QSettings_ChildGroups(const QSettings* self) {
	return self->childGroups();
}

bool QSettings_IsWritable(const QSettings* self) {
	return self->isWritable();
}

void QSettings_SetValue(QSettings* self, libqt_string key, const QVariant* value) {
	self->setValue(QAnyStringView(QString::fromUtf8(key.data, key.len)), *value);
}

QVariant* QSettings_Value(const QSettings* self, libqt_string key, const QVariant* defaultValue) {
	return new QVariant(self->value(QAnyStringView(QString::fromUtf8(key.data, key.len)), *defaultValue));
}

QVariant* QSettings_Value2(const QSettings* self, libqt_string key) {
	return new QVariant(self->value(QAnyStringView(QString::fromUtf8(key.data, key.len))));
}

void QSettings_Remove(QSettings* self, libqt_string key) {
	self->remove(QAnyStringView(QString::fromUtf8(key.data, key.len)));
}

bool QSettings_Contains(const QSettings* self, libqt_string key) {
	return self->contains(QAnyStringView(QString::fromUtf8(key.data, key.len)));
}

void QSettings_SetFallbacksEnabled(QSettings* self, bool b) {
	self->setFallbacksEnabled(b);
}

bool QSettings_FallbacksEnabled(const QSettings* self) {
	return self->fallbacksEnabled();
}

libqt_string QSettings_FileName(const QSettings* self) {
	QString _ret = self->fileName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QSettings_Format(const QSettings* self) {
	return self->format();
}

int QSettings_Scope(const QSettings* self) {
	return self->scope();
}

libqt_string QSettings_OrganizationName(const QSettings* self) {
	QString _ret = self->organizationName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSettings_ApplicationName(const QSettings* self) {
	QString _ret = self->applicationName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QSettings_SetDefaultFormat(int format) {
	QSettings::setDefaultFormat(static_cast<QImage::Format>(format));
}

int QSettings_DefaultFormat() {
	return QSettings::defaultFormat();
}

void QSettings_SetPath(int format, int scope, const libqt_string path) {
	QSettings::setPath(static_cast<QImage::Format>(format), static_cast<QSettings::Scope>(scope), QString::fromUtf8(path.data, path.len));
}

libqt_string QSettings_Tr2(const char* s, const char* c) {
	QString _ret = QSettings::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSettings_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSettings::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QSettings_BeginWriteArray2(QSettings* self, libqt_string prefix, int size) {
	self->beginWriteArray(QAnyStringView(QString::fromUtf8(prefix.data, prefix.len)), size);
}

// Derived class handler implementation
bool QSettings_Event(QSettings* self, QEvent* event) {
	auto* vqsettings = dynamic_cast<VirtualQSettings*>(self);
	if (vqsettings && vqsettings->isVirtualQSettings) {
	return vqsettings->event(event);
	} else {
	return self->QSettings::event(event);
}
}

// Base class handler implementation
bool QSettings_QBaseEvent(QSettings* self, QEvent* event) {
	auto* vqsettings = dynamic_cast<VirtualQSettings*>(self);
	if (vqsettings && vqsettings->isVirtualQSettings) {
vqsettings->setQSettings_Event_IsBase(true);
	return vqsettings->event(event);
}
}

// Auxiliary method to allow providing re-implementation
void QSettings_OnEvent(QSettings* self, intptr_t slot) {
	auto* vqsettings = dynamic_cast<VirtualQSettings*>(self);
	if (vqsettings && vqsettings->isVirtualQSettings) {
vqsettings->setQSettings_Event_Callback(reinterpret_cast<VirtualQSettings::QSettings_Event_Callback>(slot));
}
}

void QSettings_Delete(QSettings* self) {
    delete self;
}

