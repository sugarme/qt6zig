#include <QAnyStringView>
#include <QByteArray>
#include <QChar>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QStringView>
#include <qanystringview.h>
#include "libqanystringview.h"
#include "libqanystringview.hxx"

QAnyStringView* QAnyStringView_new(const libqt_string other) {
	 return new QAnyStringView(QAnyStringView(QString::fromUtf8(other.data, other.len)));
}

QAnyStringView* QAnyStringView_new2(libqt_string other) {
	 return new QAnyStringView(QAnyStringView(QString::fromUtf8(other.data, other.len)));
}

QAnyStringView* QAnyStringView_new3() {
	 return new QAnyStringView();
}

QAnyStringView* QAnyStringView_new4(const libqt_string str) {
	 return new QAnyStringView(QByteArray(str.data, str.len));
}

QAnyStringView* QAnyStringView_new5(const libqt_string str) {
	 return new QAnyStringView(QString::fromUtf8(str.data, str.len));
}

QAnyStringView* QAnyStringView_new6(QLatin1StringView str) {
	 return new QAnyStringView(str);
}

QAnyStringView* QAnyStringView_new7(QStringView* v) {
	 return new QAnyStringView(*v);
}

QAnyStringView* QAnyStringView_new8(const libqt_string param1) {
	 return new QAnyStringView(QAnyStringView(QString::fromUtf8(param1.data, param1.len)));
}

void QAnyStringView_CopyAssign(QAnyStringView* self, QAnyStringView* other) {
    *self = *other;
}

void QAnyStringView_MoveAssign(QAnyStringView* self, QAnyStringView* other) {
    *self = std::move(*other);
}

libqt_string QAnyStringView_Mid(const QAnyStringView* self, ptrdiff_t pos) {
	return new QAnyStringView(self->mid(pos));
}

libqt_string QAnyStringView_Left(const QAnyStringView* self, ptrdiff_t n) {
	return new QAnyStringView(self->left(n));
}

libqt_string QAnyStringView_Right(const QAnyStringView* self, ptrdiff_t n) {
	return new QAnyStringView(self->right(n));
}

libqt_string QAnyStringView_Sliced(const QAnyStringView* self, ptrdiff_t pos) {
	return new QAnyStringView(self->sliced(pos));
}

libqt_string QAnyStringView_Sliced2(const QAnyStringView* self, ptrdiff_t pos, ptrdiff_t n) {
	return new QAnyStringView(self->sliced(pos, n));
}

libqt_string QAnyStringView_First(const QAnyStringView* self, ptrdiff_t n) {
	return new QAnyStringView(self->first(n));
}

libqt_string QAnyStringView_Last(const QAnyStringView* self, ptrdiff_t n) {
	return new QAnyStringView(self->last(n));
}

libqt_string QAnyStringView_Chopped(const QAnyStringView* self, ptrdiff_t n) {
	return new QAnyStringView(self->chopped(n));
}

libqt_string QAnyStringView_Slice(QAnyStringView* self, ptrdiff_t pos) {
	return new QAnyStringView(self->slice(pos));
}

libqt_string QAnyStringView_Slice2(QAnyStringView* self, ptrdiff_t pos, ptrdiff_t n) {
	return new QAnyStringView(self->slice(pos, n));
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

int QAnyStringView_Compare(libqt_string lhs, libqt_string rhs) {
	return QAnyStringView::compare(QAnyStringView(QString::fromUtf8(lhs.data, lhs.len)), QAnyStringView(QString::fromUtf8(rhs.data, rhs.len)));
}

bool QAnyStringView_Equal(libqt_string lhs, libqt_string rhs) {
	return QAnyStringView::equal(QAnyStringView(QString::fromUtf8(lhs.data, lhs.len)), QAnyStringView(QString::fromUtf8(rhs.data, rhs.len)));
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

libqt_string QAnyStringView_Mid2(const QAnyStringView* self, ptrdiff_t pos, ptrdiff_t n) {
	return new QAnyStringView(self->mid(pos, n));
}

int QAnyStringView_Compare3(libqt_string lhs, libqt_string rhs, int cs) {
	return QAnyStringView::compare(QAnyStringView(QString::fromUtf8(lhs.data, lhs.len)), QAnyStringView(QString::fromUtf8(rhs.data, rhs.len)), static_cast<Qt::CaseSensitivity>(cs));
}

void QAnyStringView_Delete(QAnyStringView* self) {
    delete self;
}

