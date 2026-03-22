#include <QBitArray>
#include <QBitRef>
#include <qbitarray.h>
#include "libqbitarray.h"
#include "libqbitarray.hxx"

QBitArray* QBitArray_new() {
	 return new QBitArray();
}

QBitArray* QBitArray_new2(ptrdiff_t size) {
	 return new QBitArray(size);
}

QBitArray* QBitArray_new3(const QBitArray* other) {
	 return new QBitArray(*other);
}

QBitArray* QBitArray_new4(ptrdiff_t size, bool val) {
	 return new QBitArray(size, val);
}

void QBitArray_OperatorAssign(QBitArray* self, const QBitArray* other) {
	self->operator=(*other);
}

void QBitArray_Swap(QBitArray* self, QBitArray* other) {
	self->swap(*other);
}

ptrdiff_t QBitArray_Size(const QBitArray* self) {
	return self->size();
}

ptrdiff_t QBitArray_Count(const QBitArray* self) {
	return self->count();
}

ptrdiff_t QBitArray_Count2(const QBitArray* self, bool on) {
	return self->count(on);
}

bool QBitArray_IsEmpty(const QBitArray* self) {
	return self->isEmpty();
}

bool QBitArray_IsNull(const QBitArray* self) {
	return self->isNull();
}

void QBitArray_Resize(QBitArray* self, ptrdiff_t size) {
	self->resize(size);
}

void QBitArray_Detach(QBitArray* self) {
	self->detach();
}

bool QBitArray_IsDetached(const QBitArray* self) {
	return self->isDetached();
}

void QBitArray_Clear(QBitArray* self) {
	self->clear();
}

bool QBitArray_TestBit(const QBitArray* self, ptrdiff_t i) {
	return self->testBit(i);
}

void QBitArray_SetBit(QBitArray* self, ptrdiff_t i) {
	self->setBit(i);
}

void QBitArray_SetBit2(QBitArray* self, ptrdiff_t i, bool val) {
	self->setBit(i, val);
}

void QBitArray_ClearBit(QBitArray* self, ptrdiff_t i) {
	self->clearBit(i);
}

bool QBitArray_ToggleBit(QBitArray* self, ptrdiff_t i) {
	return self->toggleBit(i);
}

bool QBitArray_At(const QBitArray* self, ptrdiff_t i) {
	return self->at(i);
}

QBitRef* QBitArray_OperatorSubscript(QBitArray* self, ptrdiff_t i) {
	return new QBitRef(self->operator[](i));
}

bool QBitArray_OperatorSubscript2(const QBitArray* self, ptrdiff_t i) {
	return self->operator[](i);
}

void QBitArray_OperatorBitwiseAndAssign(QBitArray* self, const QBitArray* param1) {
	self->operator&=(*param1);
}

void QBitArray_OperatorBitwiseOrAssign(QBitArray* self, const QBitArray* param1) {
	self->operator|=(*param1);
}

void QBitArray_OperatorBitwiseXorAssign(QBitArray* self, const QBitArray* param1) {
	self->operator^=(*param1);
}

bool QBitArray_Fill(QBitArray* self, bool aval) {
	return self->fill(aval);
}

void QBitArray_Fill2(QBitArray* self, bool val, ptrdiff_t first, ptrdiff_t last) {
	self->fill(val, first, last);
}

void QBitArray_Truncate(QBitArray* self, ptrdiff_t pos) {
	self->truncate(pos);
}

const char* QBitArray_Bits(const QBitArray* self) {
	return self->bits();
}

QBitArray* QBitArray_FromBits(const char* data, ptrdiff_t lenVal) {
	return new QBitArray(QBitArray::fromBits(data, lenVal));
}

unsigned int QBitArray_ToUInt32(const QBitArray* self, int endianness) {
	return self->toUInt32(static_cast<QSysInfo::Endian>(endianness));
}

QArrayDataPointer<char>* QBitArray_DataPtr(QBitArray* self) {
	return self->data_ptr();
}

const QArrayDataPointer<char>* QBitArray_DataPtr2(const QBitArray* self) {
	return self->data_ptr();
}

bool QBitArray_Fill22(QBitArray* self, bool aval, ptrdiff_t asize) {
	return self->fill(aval, asize);
}

unsigned int QBitArray_ToUInt322(const QBitArray* self, int endianness, bool* ok) {
	return self->toUInt32(static_cast<QSysInfo::Endian>(endianness), ok);
}

void QBitArray_Delete(QBitArray* self) {
    delete self;
}

QBitRef* QBitRef_new(const QBitRef* other) {
	 return new QBitRef(*other);
}

QBitRef* QBitRef_new2(const QBitRef* param1) {
	 return new QBitRef(*param1);
}

bool QBitRef_Operatorbool(const QBitRef* self) {
	return self->operator bool();
}

bool QBitRef_OperatorNot(const QBitRef* self) {
	return self->operator!();
}

void QBitRef_OperatorAssign(QBitRef* self, const QBitRef* val) {
	self->operator=(*val);
}

void QBitRef_OperatorAssign2(QBitRef* self, bool val) {
	self->operator=(val);
}

void QBitRef_Delete(QBitRef* self) {
    delete self;
}

