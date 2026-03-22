#include <QDataStream>
#include <QPageRanges>
#define WORKAROUND_INNER_CLASS_DEFINITION_QPageRanges__Range
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <qpageranges.h>
#include "libqpageranges.h"
#include "libqpageranges.hxx"

QPageRanges* QPageRanges_new() {
	 return new QPageRanges();
}

QPageRanges* QPageRanges_new2(const QPageRanges* other) {
	 return new QPageRanges(*other);
}

void QPageRanges_OperatorAssign(QPageRanges* self, const QPageRanges* other) {
	self->operator=(*other);
}

void QPageRanges_Swap(QPageRanges* self, QPageRanges* other) {
	self->swap(*other);
}

void QPageRanges_AddPage(QPageRanges* self, int pageNumber) {
	self->addPage(pageNumber);
}

void QPageRanges_AddRange(QPageRanges* self, int from, int to) {
	self->addRange(from, to);
}

libqt_list QPageRanges_ToRangeList(const QPageRanges* self) {
	auto _ret = self->toRangeList();
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

void QPageRanges_Clear(QPageRanges* self) {
	self->clear();
}

libqt_string QPageRanges_ToString(const QPageRanges* self) {
	QString _ret = self->toString();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QPageRanges* QPageRanges_FromString(const libqt_string ranges) {
	return new QPageRanges(QPageRanges::fromString(QString::fromUtf8(ranges.data, ranges.len)));
}

bool QPageRanges_Contains(const QPageRanges* self, int pageNumber) {
	return self->contains(pageNumber);
}

bool QPageRanges_IsEmpty(const QPageRanges* self) {
	return self->isEmpty();
}

int QPageRanges_FirstPage(const QPageRanges* self) {
	return self->firstPage();
}

int QPageRanges_LastPage(const QPageRanges* self) {
	return self->lastPage();
}

void QPageRanges_Detach(QPageRanges* self) {
	self->detach();
}

void QPageRanges_Delete(QPageRanges* self) {
    delete self;
}

QPageRanges__Range* QPageRanges__Range_new(const QPageRanges__Range* other) {
	 return new QPageRanges::Range(*other);
}

QPageRanges__Range* QPageRanges__Range_new2(QPageRanges__Range* other) {
	 return new QPageRanges::Range(*other);
}

QPageRanges__Range* QPageRanges__Range_new3() {
	 return new QPageRanges::Range();
}

QPageRanges__Range* QPageRanges__Range_new4(const QPageRanges__Range* param1) {
	 return new QPageRanges::Range(*param1);
}

void QPageRanges__Range_CopyAssign(QPageRanges__Range* self, QPageRanges__Range* other) {
    *self = *other;
}

void QPageRanges__Range_MoveAssign(QPageRanges__Range* self, QPageRanges__Range* other) {
    *self = std::move(*other);
}

int QPageRanges__Range_From(const QPageRanges__Range* self) {
	return self->from;
}

void QPageRanges__Range_SetFrom(QPageRanges__Range* self, int from) {
	self->from;
}

int QPageRanges__Range_To(const QPageRanges__Range* self) {
	return self->to;
}

void QPageRanges__Range_SetTo(QPageRanges__Range* self, int to) {
	self->to;
}

bool QPageRanges__Range_Contains(const QPageRanges__Range* self, int pageNumber) {
	return self->contains(pageNumber);
}

void QPageRanges__Range_Delete(QPageRanges__Range* self) {
    delete self;
}

