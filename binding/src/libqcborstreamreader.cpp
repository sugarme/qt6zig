#include <QByteArray>
#include <QCborError>
#include <QCborStreamReader>
#include <QIODevice>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qcborstreamreader.h>
#include "libqcborstreamreader.h"
#include "libqcborstreamreader.hxx"

QCborStreamReader* QCborStreamReader_new() {
	 return new QCborStreamReader();
}

QCborStreamReader* QCborStreamReader_new2(const char* data, ptrdiff_t lenVal) {
	 return new QCborStreamReader(data, lenVal);
}

QCborStreamReader* QCborStreamReader_new3(const unsigned char* data, ptrdiff_t lenVal) {
	 return new QCborStreamReader(data, lenVal);
}

QCborStreamReader* QCborStreamReader_new4(const libqt_string data) {
	 return new QCborStreamReader(QByteArray(data.data, data.len));
}

QCborStreamReader* QCborStreamReader_new5(QIODevice* device) {
	 return new QCborStreamReader(device);
}

void QCborStreamReader_SetDevice(QCborStreamReader* self, QIODevice* device) {
	self->setDevice(device);
}

QIODevice* QCborStreamReader_Device(const QCborStreamReader* self) {
	return self->device();
}

void QCborStreamReader_AddData(QCborStreamReader* self, const libqt_string data) {
	self->addData(QByteArray(data.data, data.len));
}

void QCborStreamReader_AddData2(QCborStreamReader* self, const char* data, ptrdiff_t lenVal) {
	self->addData(data, lenVal);
}

void QCborStreamReader_AddData3(QCborStreamReader* self, const unsigned char* data, ptrdiff_t lenVal) {
	self->addData(data, lenVal);
}

void QCborStreamReader_Reparse(QCborStreamReader* self) {
	self->reparse();
}

void QCborStreamReader_Clear(QCborStreamReader* self) {
	self->clear();
}

void QCborStreamReader_Reset(QCborStreamReader* self) {
	self->reset();
}

QCborError* QCborStreamReader_LastError(const QCborStreamReader* self) {
	return new QCborError(self->lastError());
}

long long QCborStreamReader_CurrentOffset(const QCborStreamReader* self) {
	return self->currentOffset();
}

bool QCborStreamReader_IsValid(const QCborStreamReader* self) {
	return self->isValid();
}

int QCborStreamReader_ContainerDepth(const QCborStreamReader* self) {
	return self->containerDepth();
}

quint8 QCborStreamReader_ParentContainerType(const QCborStreamReader* self) {
	return self->parentContainerType();
}

bool QCborStreamReader_HasNext(const QCborStreamReader* self) {
	return self->hasNext();
}

bool QCborStreamReader_Next(QCborStreamReader* self) {
	return self->next();
}

int QCborStreamReader_Type(const QCborStreamReader* self) {
	return self->type();
}

bool QCborStreamReader_IsUnsignedInteger(const QCborStreamReader* self) {
	return self->isUnsignedInteger();
}

bool QCborStreamReader_IsNegativeInteger(const QCborStreamReader* self) {
	return self->isNegativeInteger();
}

bool QCborStreamReader_IsInteger(const QCborStreamReader* self) {
	return self->isInteger();
}

bool QCborStreamReader_IsByteArray(const QCborStreamReader* self) {
	return self->isByteArray();
}

bool QCborStreamReader_IsString(const QCborStreamReader* self) {
	return self->isString();
}

bool QCborStreamReader_IsArray(const QCborStreamReader* self) {
	return self->isArray();
}

bool QCborStreamReader_IsMap(const QCborStreamReader* self) {
	return self->isMap();
}

bool QCborStreamReader_IsTag(const QCborStreamReader* self) {
	return self->isTag();
}

bool QCborStreamReader_IsSimpleType(const QCborStreamReader* self) {
	return self->isSimpleType();
}

bool QCborStreamReader_IsFloat16(const QCborStreamReader* self) {
	return self->isFloat16();
}

bool QCborStreamReader_IsFloat(const QCborStreamReader* self) {
	return self->isFloat();
}

bool QCborStreamReader_IsDouble(const QCborStreamReader* self) {
	return self->isDouble();
}

bool QCborStreamReader_IsInvalid(const QCborStreamReader* self) {
	return self->isInvalid();
}

bool QCborStreamReader_IsSimpleType2(const QCborStreamReader* self, quint8 st) {
	return self->isSimpleType(static_cast<QCborSimpleType>(st));
}

bool QCborStreamReader_IsFalse(const QCborStreamReader* self) {
	return self->isFalse();
}

bool QCborStreamReader_IsTrue(const QCborStreamReader* self) {
	return self->isTrue();
}

bool QCborStreamReader_IsBool(const QCborStreamReader* self) {
	return self->isBool();
}

bool QCborStreamReader_IsNull(const QCborStreamReader* self) {
	return self->isNull();
}

bool QCborStreamReader_IsUndefined(const QCborStreamReader* self) {
	return self->isUndefined();
}

bool QCborStreamReader_IsLengthKnown(const QCborStreamReader* self) {
	return self->isLengthKnown();
}

unsigned long long QCborStreamReader_Length(const QCborStreamReader* self) {
	return self->length();
}

bool QCborStreamReader_IsContainer(const QCborStreamReader* self) {
	return self->isContainer();
}

bool QCborStreamReader_EnterContainer(QCborStreamReader* self) {
	return self->enterContainer();
}

bool QCborStreamReader_LeaveContainer(QCborStreamReader* self) {
	return self->leaveContainer();
}

bool QCborStreamReader_ReadAndAppendToString(QCborStreamReader* self, libqt_string dst) {
	return self->readAndAppendToString(QString::fromUtf8(dst.data, dst.len));
}

bool QCborStreamReader_ReadAndAppendToUtf8String(QCborStreamReader* self, libqt_string dst) {
	return self->readAndAppendToUtf8String(QByteArray(dst.data, dst.len));
}

bool QCborStreamReader_ReadAndAppendToByteArray(QCborStreamReader* self, libqt_string dst) {
	return self->readAndAppendToByteArray(QByteArray(dst.data, dst.len));
}

ptrdiff_t QCborStreamReader_CurrentStringChunkSize(const QCborStreamReader* self) {
	return self->currentStringChunkSize();
}

bool QCborStreamReader_ToBool(const QCborStreamReader* self) {
	return self->toBool();
}

quint64 QCborStreamReader_ToTag(const QCborStreamReader* self) {
	return self->toTag();
}

unsigned long long QCborStreamReader_ToUnsignedInteger(const QCborStreamReader* self) {
	return self->toUnsignedInteger();
}

quint64 QCborStreamReader_ToNegativeInteger(const QCborStreamReader* self) {
	return self->toNegativeInteger();
}

quint8 QCborStreamReader_ToSimpleType(const QCborStreamReader* self) {
	return self->toSimpleType();
}

float QCborStreamReader_ToFloat(const QCborStreamReader* self) {
	return self->toFloat();
}

double QCborStreamReader_ToDouble(const QCborStreamReader* self) {
	return self->toDouble();
}

long long QCborStreamReader_ToInteger(const QCborStreamReader* self) {
	return self->toInteger();
}

libqt_string QCborStreamReader_ReadAllString(QCborStreamReader* self) {
	QString _ret = self->readAllString();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QCborStreamReader_ReadAllUtf8String(QCborStreamReader* self) {
	QByteArray _qb = self->readAllUtf8String();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QCborStreamReader_ReadAllByteArray(QCborStreamReader* self) {
	QByteArray _qb = self->readAllByteArray();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QCborStreamReader_Next1(QCborStreamReader* self, int maxRecursion) {
	return self->next(maxRecursion);
}

void QCborStreamReader_Delete(QCborStreamReader* self) {
    delete self;
}

