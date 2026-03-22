#include <QNativeIpcKey>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qtipccommon.h>
#include "libqtipccommon.h"
#include "libqtipccommon.hxx"

QNativeIpcKey* QNativeIpcKey_new() {
	 return new QNativeIpcKey();
}

QNativeIpcKey* QNativeIpcKey_new2(int typeVal) {
	 return new QNativeIpcKey(static_cast<QMetaType::Type>(typeVal));
}

QNativeIpcKey* QNativeIpcKey_new3(const libqt_string k) {
	 return new QNativeIpcKey(QString::fromUtf8(k.data, k.len));
}

QNativeIpcKey* QNativeIpcKey_new4(const QNativeIpcKey* other) {
	 return new QNativeIpcKey(*other);
}

QNativeIpcKey* QNativeIpcKey_new5(const libqt_string k, int typeVal) {
	 return new QNativeIpcKey(QString::fromUtf8(k.data, k.len), static_cast<QMetaType::Type>(typeVal));
}

int QNativeIpcKey_LegacyDefaultTypeForOs() {
	return QNativeIpcKey::legacyDefaultTypeForOs();
}

void QNativeIpcKey_OperatorAssign(QNativeIpcKey* self, const QNativeIpcKey* other) {
	self->operator=(*other);
}

void QNativeIpcKey_Swap(QNativeIpcKey* self, QNativeIpcKey* other) {
	self->swap(*other);
}

bool QNativeIpcKey_IsEmpty(const QNativeIpcKey* self) {
	return self->isEmpty();
}

bool QNativeIpcKey_IsValid(const QNativeIpcKey* self) {
	return self->isValid();
}

int QNativeIpcKey_Type(const QNativeIpcKey* self) {
	return self->type();
}

void QNativeIpcKey_SetType(QNativeIpcKey* self, int typeVal) {
	self->setType(static_cast<QMetaType::Type>(typeVal));
}

libqt_string QNativeIpcKey_NativeKey(const QNativeIpcKey* self) {
	QString _ret = self->nativeKey();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QNativeIpcKey_SetNativeKey(QNativeIpcKey* self, const libqt_string newKey) {
	self->setNativeKey(QString::fromUtf8(newKey.data, newKey.len));
}

libqt_string QNativeIpcKey_ToString(const QNativeIpcKey* self) {
	QString _ret = self->toString();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QNativeIpcKey* QNativeIpcKey_FromString(const libqt_string stringVal) {
	return new QNativeIpcKey(QNativeIpcKey::fromString(QString::fromUtf8(stringVal.data, stringVal.len)));
}

void QNativeIpcKey_Delete(QNativeIpcKey* self) {
    delete self;
}

