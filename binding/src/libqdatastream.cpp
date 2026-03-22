#include <QByteArray>
#include <QDataStream>
#include <QIODevice>
#include <QIODeviceBase>
#include <qdatastream.h>
#include "libqdatastream.h"
#include "libqdatastream.hxx"

QDataStream* QDataStream_new() {
	 return new QDataStream();
}

QDataStream* QDataStream_new2(QIODevice* param1) {
	 return new QDataStream(param1);
}

QDataStream* QDataStream_new3(libqt_string param1, int flags) {
	 return new QDataStream(QByteArray(param1.data, param1.len), static_cast<QFlags<QIODeviceBase::OpenModeFlag>>(flags));
}

QDataStream* QDataStream_new4(const libqt_string param1) {
	 return new QDataStream(QByteArray(param1.data, param1.len));
}

QIODevice* QDataStream_Device(const QDataStream* self) {
	return self->device();
}

void QDataStream_SetDevice(QDataStream* self, QIODevice* device) {
	self->setDevice(device);
}

bool QDataStream_AtEnd(const QDataStream* self) {
	return self->atEnd();
}

int QDataStream_Status(const QDataStream* self) {
	return self->status();
}

void QDataStream_SetStatus(QDataStream* self, int status) {
	self->setStatus(static_cast<QTextStream::Status>(status));
}

void QDataStream_ResetStatus(QDataStream* self) {
	self->resetStatus();
}

int QDataStream_FloatingPointPrecision(const QDataStream* self) {
	return self->floatingPointPrecision();
}

void QDataStream_SetFloatingPointPrecision(QDataStream* self, int precision) {
	self->setFloatingPointPrecision(static_cast<QDataStream::FloatingPointPrecision>(precision));
}

int QDataStream_ByteOrder(const QDataStream* self) {
	return self->byteOrder();
}

void QDataStream_SetByteOrder(QDataStream* self, int byteOrder) {
	self->setByteOrder(static_cast<QDataStream::ByteOrder>(byteOrder));
}

int QDataStream_Version(const QDataStream* self) {
	return self->version();
}

void QDataStream_SetVersion(QDataStream* self, int version) {
	self->setVersion(version);
}

void QDataStream_OperatorShiftRight(QDataStream* self, char* i) {
	self->operator>>(*i);
}

void QDataStream_OperatorShiftRight2(QDataStream* self, signed char* i) {
	self->operator>>(*i);
}

void QDataStream_OperatorShiftRight3(QDataStream* self, unsigned char* i) {
	self->operator>>(*i);
}

void QDataStream_OperatorShiftRight4(QDataStream* self, int16_t* i) {
	self->operator>>(*i);
}

void QDataStream_OperatorShiftRight5(QDataStream* self, uint16_t* i) {
	self->operator>>(*i);
}

void QDataStream_OperatorShiftRight6(QDataStream* self, int* i) {
	self->operator>>(*i);
}

void QDataStream_OperatorShiftRight7(QDataStream* self, unsigned int* i) {
	self->operator>>(*i);
}

void QDataStream_OperatorShiftRight8(QDataStream* self, long long* i) {
	self->operator>>(*i);
}

void QDataStream_OperatorShiftRight9(QDataStream* self, unsigned long long* i) {
	self->operator>>(*i);
}

void QDataStream_OperatorShiftRight11(QDataStream* self, bool* i) {
	self->operator>>(*i);
}

void QDataStream_OperatorShiftRight12(QDataStream* self, float* f) {
	self->operator>>(*f);
}

void QDataStream_OperatorShiftRight13(QDataStream* self, double* f) {
	self->operator>>(*f);
}

void QDataStream_OperatorShiftRight14(QDataStream* self, char* str) {
	self->operator>>(str);
}

void QDataStream_OperatorShiftLeft(QDataStream* self, char i) {
	self->operator<<(i);
}

void QDataStream_OperatorShiftLeft2(QDataStream* self, signed char i) {
	self->operator<<(i);
}

void QDataStream_OperatorShiftLeft3(QDataStream* self, unsigned char i) {
	self->operator<<(i);
}

void QDataStream_OperatorShiftLeft4(QDataStream* self, int16_t i) {
	self->operator<<(i);
}

void QDataStream_OperatorShiftLeft5(QDataStream* self, uint16_t i) {
	self->operator<<(i);
}

void QDataStream_OperatorShiftLeft6(QDataStream* self, int i) {
	self->operator<<(i);
}

void QDataStream_OperatorShiftLeft7(QDataStream* self, unsigned int i) {
	self->operator<<(i);
}

void QDataStream_OperatorShiftLeft8(QDataStream* self, long long i) {
	self->operator<<(i);
}

void QDataStream_OperatorShiftLeft9(QDataStream* self, unsigned long long i) {
	self->operator<<(i);
}

void QDataStream_OperatorShiftLeft11(QDataStream* self, float f) {
	self->operator<<(f);
}

void QDataStream_OperatorShiftLeft12(QDataStream* self, double f) {
	self->operator<<(f);
}

void QDataStream_OperatorShiftLeft13(QDataStream* self, const char* str) {
	self->operator<<(str);
}

QDataStream* QDataStream_ReadBytes(QDataStream* self, char* param1, unsigned int* lenVal) {
	return new QDataStream(self->readBytes(param1, *lenVal));
}

QDataStream* QDataStream_ReadBytes2(QDataStream* self, char* param1, long long* lenVal) {
	return new QDataStream(self->readBytes(param1, *lenVal));
}

long long QDataStream_ReadRawData(QDataStream* self, char* param1, long long lenVal) {
	return self->readRawData(param1, lenVal);
}

void QDataStream_WriteBytes(QDataStream* self, const char* param1, long long lenVal) {
	self->writeBytes(param1, lenVal);
}

long long QDataStream_WriteRawData(QDataStream* self, const char* param1, long long lenVal) {
	return self->writeRawData(param1, lenVal);
}

long long QDataStream_SkipRawData(QDataStream* self, long long lenVal) {
	return self->skipRawData(lenVal);
}

void QDataStream_StartTransaction(QDataStream* self) {
	self->startTransaction();
}

bool QDataStream_CommitTransaction(QDataStream* self) {
	return self->commitTransaction();
}

void QDataStream_RollbackTransaction(QDataStream* self) {
	self->rollbackTransaction();
}

void QDataStream_AbortTransaction(QDataStream* self) {
	self->abortTransaction();
}

bool QDataStream_IsDeviceTransactionStarted(const QDataStream* self) {
	return self->isDeviceTransactionStarted();
}

void QDataStream_Delete(QDataStream* self) {
    delete self;
}

