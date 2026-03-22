#include <QAnyStringView>
#include <QByteArray>
#include <QChar>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qanystringview.h>
#include "libqanystringview.h"
#include "libqanystringview.hxx"

QAnyStringView* QAnyStringView_new() {
	 return new QAnyStringView();
}

QAnyStringView* QAnyStringView_new2(const libqt_string str) {
	 return new QAnyStringView(QByteArray(str.data, str.len));
}

QAnyStringView* QAnyStringView_new3(const libqt_string str) {
	 return new QAnyStringView(QString::fromUtf8(str.data, str.len));
}

void QAnyStringView_CopyAssign(QAnyStringView* self, QAnyStringView* other) {
    *self = *other;
}

void QAnyStringView_MoveAssign(QAnyStringView* self, QAnyStringView* other) {
    *self = std::move(*other);
}

void QAnyStringView_Truncate(QAnyStringView* self, ptrdiff_t n) {
	self->truncate(n);
}

void QAnyStringView_Chop(QAnyStringView* self, ptrdiff_t n) {
	self->chop(n);
}

libqt_string QAnyStringView_ToString(const QAnyStringView* self) {
	QString _ret = self->toString();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

ptrdiff_t QAnyStringView_Size(const QAnyStringView* self) {
	return self->size();
}

const void* QAnyStringView_Data(const QAnyStringView* self) {
	return self->data();
}

QChar* QAnyStringView_Front(const QAnyStringView* self) {
	return new QChar(self->front());
}

QChar* QAnyStringView_Back(const QAnyStringView* self) {
	return new QChar(self->back());
}

bool QAnyStringView_Empty(const QAnyStringView* self) {
	return self->empty();
}

ptrdiff_t QAnyStringView_SizeBytes(const QAnyStringView* self) {
	return self->size_bytes();
}

ptrdiff_t QAnyStringView_MaxSize(const QAnyStringView* self) {
	return self->max_size();
}

bool QAnyStringView_IsNull(const QAnyStringView* self) {
	return self->isNull();
}

bool QAnyStringView_IsEmpty(const QAnyStringView* self) {
	return self->isEmpty();
}

ptrdiff_t QAnyStringView_Length(const QAnyStringView* self) {
	return self->length();
}

void QAnyStringView_Delete(QAnyStringView* self) {
    delete self;
}

