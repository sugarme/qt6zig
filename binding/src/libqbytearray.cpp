#include <QByteArray>
#define WORKAROUND_INNER_CLASS_DEFINITION_QByteArray__FromBase64Result
#include <QByteArrayView>
#include <qbytearray.h>
#include "libqbytearray.h"
#include "libqbytearray.hxx"

QByteArray* QByteArray_new() {
	 return new QByteArray();
}

QByteArray* QByteArray_new2(const char* param1) {
	 return new QByteArray(param1);
}

QByteArray* QByteArray_new3(ptrdiff_t size, char c) {
	 return new QByteArray(size, c);
}

QByteArray* QByteArray_new4(ptrdiff_t size, int param2) {
	 return new QByteArray(size, static_cast<Qt::Initialization>(param2));
}

QByteArray* QByteArray_new5(QByteArrayView* v) {
	 return new QByteArray(*v);
}

QByteArray* QByteArray_new6(const libqt_string param1) {
	 return new QByteArray(QByteArray(param1.data, param1.len));
}

QByteArray* QByteArray_new7(const char* param1, ptrdiff_t size) {
	 return new QByteArray(param1, size);
}

void QByteArray_OperatorAssign(QByteArray* self, const libqt_string param1) {
	self->operator=(QByteArray(param1.data, param1.len));
}

void QByteArray_OperatorAssign2(QByteArray* self, const char* str) {
	self->operator=(str);
}

void QByteArray_Swap(QByteArray* self, libqt_string other) {
	self->swap(QByteArray(other.data, other.len));
}

bool QByteArray_IsEmpty(const QByteArray* self) {
	return self->isEmpty();
}

void QByteArray_Resize(QByteArray* self, ptrdiff_t size) {
	self->resize(size);
}

void QByteArray_Resize2(QByteArray* self, ptrdiff_t size, char c) {
	self->resize(size, c);
}

void QByteArray_ResizeForOverwrite(QByteArray* self, ptrdiff_t size) {
	self->resizeForOverwrite(size);
}

libqt_string QByteArray_Fill(QByteArray* self, char c) {
	QByteArray _qb = self->fill(c);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

ptrdiff_t QByteArray_Capacity(const QByteArray* self) {
	return self->capacity();
}

void QByteArray_Reserve(QByteArray* self, ptrdiff_t size) {
	self->reserve(size);
}

void QByteArray_Squeeze(QByteArray* self) {
	self->squeeze();
}

const char* QByteArray_OperatorconstCharMultiply(const QByteArray* self) {
	return self->operator const char *();
}

const void* QByteArray_OperatorconstVoidMultiply(const QByteArray* self) {
	return self->operator const void *();
}

char* QByteArray_Data(QByteArray* self) {
	return self->data();
}

const char* QByteArray_Data2(const QByteArray* self) {
	return self->data();
}

const char* QByteArray_ConstData(const QByteArray* self) {
	return self->constData();
}

void QByteArray_Detach(QByteArray* self) {
	self->detach();
}

bool QByteArray_IsDetached(const QByteArray* self) {
	return self->isDetached();
}

bool QByteArray_IsSharedWith(const QByteArray* self, const libqt_string other) {
	return self->isSharedWith(QByteArray(other.data, other.len));
}

void QByteArray_Clear(QByteArray* self) {
	self->clear();
}

char QByteArray_At(const QByteArray* self, ptrdiff_t i) {
	return self->at(i);
}

char QByteArray_OperatorSubscript(const QByteArray* self, ptrdiff_t i) {
	return self->operator[](i);
}

char* QByteArray_OperatorSubscript2(QByteArray* self, ptrdiff_t i) {
	return self->operator[](i);
}

char QByteArray_Front(const QByteArray* self) {
	return self->front();
}

char* QByteArray_Front2(QByteArray* self) {
	return self->front();
}

char QByteArray_Back(const QByteArray* self) {
	return self->back();
}

char* QByteArray_Back2(QByteArray* self) {
	return self->back();
}

ptrdiff_t QByteArray_IndexOf(const QByteArray* self, char c) {
	return self->indexOf(c);
}

ptrdiff_t QByteArray_IndexOf2(const QByteArray* self, QByteArrayView* bv) {
	return self->indexOf(*bv);
}

ptrdiff_t QByteArray_LastIndexOf(const QByteArray* self, char c) {
	return self->lastIndexOf(c);
}

ptrdiff_t QByteArray_LastIndexOf2(const QByteArray* self, QByteArrayView* bv) {
	return self->lastIndexOf(*bv);
}

ptrdiff_t QByteArray_LastIndexOf3(const QByteArray* self, QByteArrayView* bv, ptrdiff_t from) {
	return self->lastIndexOf(*bv, from);
}

bool QByteArray_Contains(const QByteArray* self, char c) {
	return self->contains(c);
}

bool QByteArray_Contains2(const QByteArray* self, QByteArrayView* bv) {
	return self->contains(*bv);
}

ptrdiff_t QByteArray_Count(const QByteArray* self, char c) {
	return self->count(c);
}

ptrdiff_t QByteArray_Count2(const QByteArray* self, QByteArrayView* bv) {
	return self->count(*bv);
}

int QByteArray_Compare(const QByteArray* self, QByteArrayView* a) {
	return self->compare(*a);
}

libqt_string QByteArray_Left(const QByteArray* self, ptrdiff_t n) {
	QByteArray _qb = self->left(n);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_Right(const QByteArray* self, ptrdiff_t n) {
	QByteArray _qb = self->right(n);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_Mid(const QByteArray* self, ptrdiff_t index) {
	QByteArray _qb = self->mid(index);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_First(const QByteArray* self, ptrdiff_t n) {
	QByteArray _qb = self->first(n);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_Last(const QByteArray* self, ptrdiff_t n) {
	QByteArray _qb = self->last(n);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_Sliced(const QByteArray* self, ptrdiff_t pos) {
	QByteArray _qb = self->sliced(pos);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_Sliced2(const QByteArray* self, ptrdiff_t pos, ptrdiff_t n) {
	QByteArray _qb = self->sliced(pos, n);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_Chopped(const QByteArray* self, ptrdiff_t lenVal) {
	QByteArray _qb = self->chopped(lenVal);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QByteArray_StartsWith(const QByteArray* self, QByteArrayView* bv) {
	return self->startsWith(*bv);
}

bool QByteArray_StartsWith2(const QByteArray* self, char c) {
	return self->startsWith(c);
}

bool QByteArray_EndsWith(const QByteArray* self, char c) {
	return self->endsWith(c);
}

bool QByteArray_EndsWith2(const QByteArray* self, QByteArrayView* bv) {
	return self->endsWith(*bv);
}

bool QByteArray_IsUpper(const QByteArray* self) {
	return self->isUpper();
}

bool QByteArray_IsLower(const QByteArray* self) {
	return self->isLower();
}

bool QByteArray_IsValidUtf8(const QByteArray* self) {
	return self->isValidUtf8();
}

void QByteArray_Truncate(QByteArray* self, ptrdiff_t pos) {
	self->truncate(pos);
}

void QByteArray_Chop(QByteArray* self, ptrdiff_t n) {
	self->chop(n);
}

libqt_string QByteArray_Slice(QByteArray* self, ptrdiff_t pos) {
	QByteArray _qb = self->slice(pos);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_Slice2(QByteArray* self, ptrdiff_t pos, ptrdiff_t n) {
	QByteArray _qb = self->slice(pos, n);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_ToLower(const QByteArray* self) {
	QByteArray _qb = self->toLower();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_ToUpper(const QByteArray* self) {
	QByteArray _qb = self->toUpper();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_Trimmed(const QByteArray* self) {
	QByteArray _qb = self->trimmed();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_Simplified(const QByteArray* self) {
	QByteArray _qb = self->simplified();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_LeftJustified(const QByteArray* self, ptrdiff_t width) {
	QByteArray _qb = self->leftJustified(width);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_RightJustified(const QByteArray* self, ptrdiff_t width) {
	QByteArray _qb = self->rightJustified(width);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_Prepend(QByteArray* self, char c) {
	QByteArray _qb = self->prepend(c);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_Prepend2(QByteArray* self, ptrdiff_t count, char c) {
	QByteArray _qb = self->prepend(count, c);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_Prepend3(QByteArray* self, const char* s) {
	QByteArray _qb = self->prepend(s);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_Prepend4(QByteArray* self, const char* s, ptrdiff_t lenVal) {
	QByteArray _qb = self->prepend(s, lenVal);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_Prepend5(QByteArray* self, const libqt_string a) {
	QByteArray _qb = self->prepend(QByteArray(a.data, a.len));
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_Prepend6(QByteArray* self, QByteArrayView* a) {
	QByteArray _qb = self->prepend(*a);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_Append(QByteArray* self, char c) {
	QByteArray _qb = self->append(c);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_Append2(QByteArray* self, ptrdiff_t count, char c) {
	QByteArray _qb = self->append(count, c);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_Append3(QByteArray* self, const char* s) {
	QByteArray _qb = self->append(s);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_Append4(QByteArray* self, const char* s, ptrdiff_t lenVal) {
	QByteArray _qb = self->append(s, lenVal);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_Append5(QByteArray* self, const libqt_string a) {
	QByteArray _qb = self->append(QByteArray(a.data, a.len));
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_Append6(QByteArray* self, QByteArrayView* a) {
	QByteArray _qb = self->append(*a);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_Assign(QByteArray* self, QByteArrayView* v) {
	QByteArray _qb = self->assign(*v);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_Assign2(QByteArray* self, ptrdiff_t n, char c) {
	QByteArray _qb = self->assign(n, c);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_Insert(QByteArray* self, ptrdiff_t i, QByteArrayView* data) {
	QByteArray _qb = self->insert(i, *data);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_Insert2(QByteArray* self, ptrdiff_t i, const char* s) {
	QByteArray _qb = self->insert(i, s);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_Insert3(QByteArray* self, ptrdiff_t i, const libqt_string data) {
	QByteArray _qb = self->insert(i, QByteArray(data.data, data.len));
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_Insert4(QByteArray* self, ptrdiff_t i, ptrdiff_t count, char c) {
	QByteArray _qb = self->insert(i, count, c);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_Insert5(QByteArray* self, ptrdiff_t i, char c) {
	QByteArray _qb = self->insert(i, c);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_Insert6(QByteArray* self, ptrdiff_t i, const char* s, ptrdiff_t lenVal) {
	QByteArray _qb = self->insert(i, s, lenVal);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_Remove(QByteArray* self, ptrdiff_t index, ptrdiff_t lenVal) {
	QByteArray _qb = self->remove(index, lenVal);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_RemoveAt(QByteArray* self, ptrdiff_t pos) {
	QByteArray _qb = self->removeAt(pos);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_RemoveFirst(QByteArray* self) {
	QByteArray _qb = self->removeFirst();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_RemoveLast(QByteArray* self) {
	QByteArray _qb = self->removeLast();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_Replace(QByteArray* self, ptrdiff_t index, ptrdiff_t lenVal, const char* s, ptrdiff_t alen) {
	QByteArray _qb = self->replace(index, lenVal, s, alen);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_Replace2(QByteArray* self, ptrdiff_t index, ptrdiff_t lenVal, QByteArrayView* s) {
	QByteArray _qb = self->replace(index, lenVal, *s);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_Replace3(QByteArray* self, char before, QByteArrayView* after) {
	QByteArray _qb = self->replace(before, *after);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_Replace4(QByteArray* self, const char* before, ptrdiff_t bsize, const char* after, ptrdiff_t asize) {
	QByteArray _qb = self->replace(before, bsize, after, asize);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_Replace5(QByteArray* self, QByteArrayView* before, QByteArrayView* after) {
	QByteArray _qb = self->replace(*before, *after);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_Replace6(QByteArray* self, char before, char after) {
	QByteArray _qb = self->replace(before, after);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_OperatorPlusAssign(QByteArray* self, char c) {
	QByteArray _qb = self->operator+=(c);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_OperatorPlusAssign2(QByteArray* self, const char* s) {
	QByteArray _qb = self->operator+=(s);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_OperatorPlusAssign3(QByteArray* self, const libqt_string a) {
	QByteArray _qb = self->operator+=(QByteArray(a.data, a.len));
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_OperatorPlusAssign4(QByteArray* self, QByteArrayView* a) {
	QByteArray _qb = self->operator+=(*a);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QByteArray_Split(const QByteArray* self, char sep) {
	auto _ret = self->split(sep);
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

libqt_string QByteArray_Repeated(const QByteArray* self, ptrdiff_t times) {
	QByteArray _qb = self->repeated(times);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int16_t QByteArray_ToShort(const QByteArray* self) {
	return self->toShort();
}

uint16_t QByteArray_ToUShort(const QByteArray* self) {
	return self->toUShort();
}

int QByteArray_ToInt(const QByteArray* self) {
	return self->toInt();
}

unsigned int QByteArray_ToUInt(const QByteArray* self) {
	return self->toUInt();
}

long QByteArray_ToLong(const QByteArray* self) {
	return self->toLong();
}

unsigned long QByteArray_ToULong(const QByteArray* self) {
	return self->toULong();
}

long long QByteArray_ToLongLong(const QByteArray* self) {
	return self->toLongLong();
}

unsigned long long QByteArray_ToULongLong(const QByteArray* self) {
	return self->toULongLong();
}

float QByteArray_ToFloat(const QByteArray* self) {
	return self->toFloat();
}

double QByteArray_ToDouble(const QByteArray* self) {
	return self->toDouble();
}

libqt_string QByteArray_ToBase64(const QByteArray* self) {
	QByteArray _qb = self->toBase64();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_ToHex(const QByteArray* self) {
	QByteArray _qb = self->toHex();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_ToPercentEncoding(const QByteArray* self) {
	QByteArray _qb = self->toPercentEncoding();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_PercentDecoded(const QByteArray* self) {
	QByteArray _qb = self->percentDecoded();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_SetNum(QByteArray* self, int16_t param1) {
	QByteArray _qb = self->setNum(param1);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_SetNum2(QByteArray* self, uint16_t param1) {
	QByteArray _qb = self->setNum(param1);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_SetNum3(QByteArray* self, int param1) {
	QByteArray _qb = self->setNum(param1);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_SetNum4(QByteArray* self, unsigned int param1) {
	QByteArray _qb = self->setNum(param1);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_SetNum5(QByteArray* self, long param1) {
	QByteArray _qb = self->setNum(param1);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_SetNum6(QByteArray* self, unsigned long param1) {
	QByteArray _qb = self->setNum(param1);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_SetNum7(QByteArray* self, long long param1) {
	QByteArray _qb = self->setNum(param1);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_SetNum8(QByteArray* self, unsigned long long param1) {
	QByteArray _qb = self->setNum(param1);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_SetNum9(QByteArray* self, float param1) {
	QByteArray _qb = self->setNum(param1);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_SetNum10(QByteArray* self, double param1) {
	QByteArray _qb = self->setNum(param1);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_SetRawData(QByteArray* self, const char* a, ptrdiff_t n) {
	QByteArray _qb = self->setRawData(a, n);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_Number(int param1) {
	QByteArray _qb = QByteArray::number(param1);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_Number2(unsigned int param1) {
	QByteArray _qb = QByteArray::number(param1);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_Number3(long param1) {
	QByteArray _qb = QByteArray::number(param1);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_Number4(unsigned long param1) {
	QByteArray _qb = QByteArray::number(param1);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_Number5(long long param1) {
	QByteArray _qb = QByteArray::number(param1);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_Number6(unsigned long long param1) {
	QByteArray _qb = QByteArray::number(param1);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_Number7(double param1) {
	QByteArray _qb = QByteArray::number(param1);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_FromRawData(const char* data, ptrdiff_t size) {
	QByteArray _qb = QByteArray::fromRawData(data, size);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QByteArray__FromBase64Result* QByteArray_FromBase64Encoding(const libqt_string base64) {
	return new QByteArray::FromBase64Result(QByteArray::fromBase64Encoding(QByteArray(base64.data, base64.len)));
}

libqt_string QByteArray_FromBase64(const libqt_string base64) {
	QByteArray _qb = QByteArray::fromBase64(QByteArray(base64.data, base64.len));
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_FromHex(const libqt_string hexEncoded) {
	QByteArray _qb = QByteArray::fromHex(QByteArray(hexEncoded.data, hexEncoded.len));
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_FromPercentEncoding(const libqt_string pctEncoded) {
	QByteArray _qb = QByteArray::fromPercentEncoding(QByteArray(pctEncoded.data, pctEncoded.len));
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

char** QByteArray_Begin(QByteArray* self) {
	return self->begin();
}

const char** QByteArray_Begin2(const QByteArray* self) {
	return self->begin();
}

const char** QByteArray_Cbegin(const QByteArray* self) {
	return self->cbegin();
}

const char** QByteArray_ConstBegin(const QByteArray* self) {
	return self->constBegin();
}

char** QByteArray_End(QByteArray* self) {
	return self->end();
}

const char** QByteArray_End2(const QByteArray* self) {
	return self->end();
}

const char** QByteArray_Cend(const QByteArray* self) {
	return self->cend();
}

const char** QByteArray_ConstEnd(const QByteArray* self) {
	return self->constEnd();
}

void QByteArray_PushBack(QByteArray* self, char c) {
	self->push_back(c);
}

void QByteArray_PushBack2(QByteArray* self, const char* s) {
	self->push_back(s);
}

void QByteArray_PushBack3(QByteArray* self, const libqt_string a) {
	self->push_back(QByteArray(a.data, a.len));
}

void QByteArray_PushBack4(QByteArray* self, QByteArrayView* a) {
	self->push_back(*a);
}

void QByteArray_PushFront(QByteArray* self, char c) {
	self->push_front(c);
}

void QByteArray_PushFront2(QByteArray* self, const char* c) {
	self->push_front(c);
}

void QByteArray_PushFront3(QByteArray* self, const libqt_string a) {
	self->push_front(QByteArray(a.data, a.len));
}

void QByteArray_PushFront4(QByteArray* self, QByteArrayView* a) {
	self->push_front(*a);
}

void QByteArray_ShrinkToFit(QByteArray* self) {
	self->shrink_to_fit();
}

char** QByteArray_Erase(QByteArray* self, const char** first, const char** last) {
	return self->erase(first, last);
}

char** QByteArray_Erase2(QByteArray* self, const char** it) {
	return self->erase(it);
}

ptrdiff_t QByteArray_MaxSize(const QByteArray* self) {
	return self->max_size();
}

ptrdiff_t QByteArray_MaxSize2() {
	return QByteArray::maxSize();
}

ptrdiff_t QByteArray_Size(const QByteArray* self) {
	return self->size();
}

ptrdiff_t QByteArray_Count3(const QByteArray* self) {
	return self->count();
}

ptrdiff_t QByteArray_Length(const QByteArray* self) {
	return self->length();
}

bool QByteArray_IsNull(const QByteArray* self) {
	return self->isNull();
}

libqt_string QByteArray_Fill2(QByteArray* self, char c, ptrdiff_t size) {
	QByteArray _qb = self->fill(c, size);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

ptrdiff_t QByteArray_IndexOf22(const QByteArray* self, char c, ptrdiff_t from) {
	return self->indexOf(c, from);
}

ptrdiff_t QByteArray_IndexOf23(const QByteArray* self, QByteArrayView* bv, ptrdiff_t from) {
	return self->indexOf(*bv, from);
}

ptrdiff_t QByteArray_LastIndexOf22(const QByteArray* self, char c, ptrdiff_t from) {
	return self->lastIndexOf(c, from);
}

int QByteArray_Compare2(const QByteArray* self, QByteArrayView* a, int cs) {
	return self->compare(*a, static_cast<Qt::CaseSensitivity>(cs));
}

libqt_string QByteArray_Mid2(const QByteArray* self, ptrdiff_t index, ptrdiff_t lenVal) {
	QByteArray _qb = self->mid(index, lenVal);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_LeftJustified2(const QByteArray* self, ptrdiff_t width, char fill) {
	QByteArray _qb = self->leftJustified(width, fill);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_LeftJustified3(const QByteArray* self, ptrdiff_t width, char fill, bool truncate) {
	QByteArray _qb = self->leftJustified(width, fill, truncate);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_RightJustified2(const QByteArray* self, ptrdiff_t width, char fill) {
	QByteArray _qb = self->rightJustified(width, fill);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_RightJustified3(const QByteArray* self, ptrdiff_t width, char fill, bool truncate) {
	QByteArray _qb = self->rightJustified(width, fill, truncate);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int16_t QByteArray_ToShort1(const QByteArray* self, bool* ok) {
	return self->toShort(ok);
}

int16_t QByteArray_ToShort2(const QByteArray* self, bool* ok, int base) {
	return self->toShort(ok, base);
}

uint16_t QByteArray_ToUShort1(const QByteArray* self, bool* ok) {
	return self->toUShort(ok);
}

uint16_t QByteArray_ToUShort2(const QByteArray* self, bool* ok, int base) {
	return self->toUShort(ok, base);
}

int QByteArray_ToInt1(const QByteArray* self, bool* ok) {
	return self->toInt(ok);
}

int QByteArray_ToInt2(const QByteArray* self, bool* ok, int base) {
	return self->toInt(ok, base);
}

unsigned int QByteArray_ToUInt1(const QByteArray* self, bool* ok) {
	return self->toUInt(ok);
}

unsigned int QByteArray_ToUInt2(const QByteArray* self, bool* ok, int base) {
	return self->toUInt(ok, base);
}

long QByteArray_ToLong1(const QByteArray* self, bool* ok) {
	return self->toLong(ok);
}

long QByteArray_ToLong2(const QByteArray* self, bool* ok, int base) {
	return self->toLong(ok, base);
}

unsigned long QByteArray_ToULong1(const QByteArray* self, bool* ok) {
	return self->toULong(ok);
}

unsigned long QByteArray_ToULong2(const QByteArray* self, bool* ok, int base) {
	return self->toULong(ok, base);
}

long long QByteArray_ToLongLong1(const QByteArray* self, bool* ok) {
	return self->toLongLong(ok);
}

long long QByteArray_ToLongLong2(const QByteArray* self, bool* ok, int base) {
	return self->toLongLong(ok, base);
}

unsigned long long QByteArray_ToULongLong1(const QByteArray* self, bool* ok) {
	return self->toULongLong(ok);
}

unsigned long long QByteArray_ToULongLong2(const QByteArray* self, bool* ok, int base) {
	return self->toULongLong(ok, base);
}

float QByteArray_ToFloat1(const QByteArray* self, bool* ok) {
	return self->toFloat(ok);
}

double QByteArray_ToDouble1(const QByteArray* self, bool* ok) {
	return self->toDouble(ok);
}

libqt_string QByteArray_ToBase641(const QByteArray* self, int options) {
	QByteArray _qb = self->toBase64(static_cast<QFlags<QByteArray::Base64Option>>(options));
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_ToHex1(const QByteArray* self, char separator) {
	QByteArray _qb = self->toHex(separator);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_ToPercentEncoding1(const QByteArray* self, const libqt_string exclude) {
	QByteArray _qb = self->toPercentEncoding(QByteArray(exclude.data, exclude.len));
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_ToPercentEncoding2(const QByteArray* self, const libqt_string exclude, const libqt_string include) {
	QByteArray _qb = self->toPercentEncoding(QByteArray(exclude.data, exclude.len), QByteArray(include.data, include.len));
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_ToPercentEncoding3(const QByteArray* self, const libqt_string exclude, const libqt_string include, char percent) {
	QByteArray _qb = self->toPercentEncoding(QByteArray(exclude.data, exclude.len), QByteArray(include.data, include.len), percent);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_PercentDecoded1(const QByteArray* self, char percent) {
	QByteArray _qb = self->percentDecoded(percent);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_SetNum22(QByteArray* self, int16_t param1, int base) {
	QByteArray _qb = self->setNum(param1, base);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_SetNum23(QByteArray* self, uint16_t param1, int base) {
	QByteArray _qb = self->setNum(param1, base);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_SetNum24(QByteArray* self, int param1, int base) {
	QByteArray _qb = self->setNum(param1, base);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_SetNum25(QByteArray* self, unsigned int param1, int base) {
	QByteArray _qb = self->setNum(param1, base);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_SetNum26(QByteArray* self, long param1, int base) {
	QByteArray _qb = self->setNum(param1, base);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_SetNum27(QByteArray* self, unsigned long param1, int base) {
	QByteArray _qb = self->setNum(param1, base);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_SetNum28(QByteArray* self, long long param1, int base) {
	QByteArray _qb = self->setNum(param1, base);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_SetNum29(QByteArray* self, unsigned long long param1, int base) {
	QByteArray _qb = self->setNum(param1, base);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_SetNum210(QByteArray* self, float param1, char format) {
	QByteArray _qb = self->setNum(param1, format);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_SetNum32(QByteArray* self, float param1, char format, int precision) {
	QByteArray _qb = self->setNum(param1, format, precision);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_SetNum211(QByteArray* self, double param1, char format) {
	QByteArray _qb = self->setNum(param1, format);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_SetNum33(QByteArray* self, double param1, char format, int precision) {
	QByteArray _qb = self->setNum(param1, format, precision);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_Number22(int param1, int base) {
	QByteArray _qb = QByteArray::number(param1, base);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_Number23(unsigned int param1, int base) {
	QByteArray _qb = QByteArray::number(param1, base);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_Number24(long param1, int base) {
	QByteArray _qb = QByteArray::number(param1, base);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_Number25(unsigned long param1, int base) {
	QByteArray _qb = QByteArray::number(param1, base);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_Number26(long long param1, int base) {
	QByteArray _qb = QByteArray::number(param1, base);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_Number27(unsigned long long param1, int base) {
	QByteArray _qb = QByteArray::number(param1, base);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_Number28(double param1, char format) {
	QByteArray _qb = QByteArray::number(param1, format);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_Number32(double param1, char format, int precision) {
	QByteArray _qb = QByteArray::number(param1, format, precision);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QByteArray__FromBase64Result* QByteArray_FromBase64Encoding2(const libqt_string base64, int options) {
	return new QByteArray::FromBase64Result(QByteArray::fromBase64Encoding(QByteArray(base64.data, base64.len), static_cast<QFlags<QByteArray::Base64Option>>(options)));
}

libqt_string QByteArray_FromBase642(const libqt_string base64, int options) {
	QByteArray _qb = QByteArray::fromBase64(QByteArray(base64.data, base64.len), static_cast<QFlags<QByteArray::Base64Option>>(options));
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray_FromPercentEncoding2(const libqt_string pctEncoded, char percent) {
	QByteArray _qb = QByteArray::fromPercentEncoding(QByteArray(pctEncoded.data, pctEncoded.len), percent);
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QByteArray_Delete(QByteArray* self) {
    delete self;
}

QByteArray__FromBase64Result* QByteArray__FromBase64Result_new(const QByteArray__FromBase64Result* param1) {
	 return new QByteArray::FromBase64Result(*param1);
}

QByteArray__FromBase64Result* QByteArray__FromBase64Result_new2() {
	 return new QByteArray::FromBase64Result();
}

libqt_string QByteArray__FromBase64Result_Decoded(const QByteArray__FromBase64Result* self) {
	QByteArray _qb = self->decoded;
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QByteArray__FromBase64Result_SetDecoded(QByteArray__FromBase64Result* self, libqt_string decoded) {
	self->decoded;
}

int QByteArray__FromBase64Result_DecodingStatus(const QByteArray__FromBase64Result* self) {
	return self->decodingStatus;
}

void QByteArray__FromBase64Result_SetDecodingStatus(QByteArray__FromBase64Result* self, int decodingStatus) {
	self->decodingStatus;
}

void QByteArray__FromBase64Result_Swap(QByteArray__FromBase64Result* self, QByteArray__FromBase64Result* other) {
	self->swap(*other);
}

bool QByteArray__FromBase64Result_Operatorbool(const QByteArray__FromBase64Result* self) {
	return self->operator bool();
}

libqt_string QByteArray__FromBase64Result_OperatorMultiply(QByteArray__FromBase64Result* self) {
	QByteArray _qb = self->operator*();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QByteArray__FromBase64Result_OperatorMultiply2(const QByteArray__FromBase64Result* self) {
	QByteArray _qb = self->operator*();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QByteArray__FromBase64Result_OperatorAssign(QByteArray__FromBase64Result* self, const QByteArray__FromBase64Result* param1) {
	self->operator=(*param1);
}

void QByteArray__FromBase64Result_Delete(QByteArray__FromBase64Result* self) {
    delete self;
}

