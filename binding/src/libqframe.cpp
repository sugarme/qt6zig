#include <QEvent>
#include <QFrame>
#include <QPaintEvent>
#include <QPainter>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QStyleOptionFrame>
#include <QWidget>
#include <qframe.h>
#include "libqframe.h"
#include "libqframe.hxx"

QFrame* QFrame_new(QWidget* parent) {
	 return new VirtualQFrame(parent);
}

QFrame* QFrame_new2() {
	 return new VirtualQFrame();
}

QFrame* QFrame_new3(QWidget* parent, int f) {
	 return new VirtualQFrame(parent, static_cast<QFlags<Qt::WindowType>>(f));
}

libqt_string QFrame_Tr(const char* s) {
	QString _ret = QFrame::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QFrame_FrameStyle(const QFrame* self) {
	return self->frameStyle();
}

void QFrame_SetFrameStyle(QFrame* self, int frameStyle) {
	self->setFrameStyle(frameStyle);
}

int QFrame_FrameWidth(const QFrame* self) {
	return self->frameWidth();
}

QSize* QFrame_SizeHint(const QFrame* self) {
	return new QSize(self->sizeHint());
}

int QFrame_FrameShape(const QFrame* self) {
	return self->frameShape();
}

void QFrame_SetFrameShape(QFrame* self, int frameShape) {
	self->setFrameShape(static_cast<QFrame::Shape>(frameShape));
}

int QFrame_FrameShadow(const QFrame* self) {
	return self->frameShadow();
}

void QFrame_SetFrameShadow(QFrame* self, int frameShadow) {
	self->setFrameShadow(static_cast<QFrame::Shadow>(frameShadow));
}

int QFrame_LineWidth(const QFrame* self) {
	return self->lineWidth();
}

void QFrame_SetLineWidth(QFrame* self, int lineWidth) {
	self->setLineWidth(lineWidth);
}

int QFrame_MidLineWidth(const QFrame* self) {
	return self->midLineWidth();
}

void QFrame_SetMidLineWidth(QFrame* self, int midLineWidth) {
	self->setMidLineWidth(midLineWidth);
}

QRect* QFrame_FrameRect(const QFrame* self) {
	return new QRect(self->frameRect());
}

void QFrame_SetFrameRect(QFrame* self, const QRect* frameRect) {
	self->setFrameRect(*frameRect);
}

libqt_string QFrame_Tr2(const char* s, const char* c) {
	QString _ret = QFrame::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QFrame_Tr3(const char* s, const char* c, int n) {
	QString _ret = QFrame::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
QSize* QFrame_QBaseSizeHint(const QFrame* self) {
	auto* vqframe = dynamic_cast<const VirtualQFrame*>(self);
	if (vqframe && vqframe->isVirtualQFrame) {
vqframe->setQFrame_SizeHint_IsBase(true);
	return new QSize(vqframe->sizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QFrame_OnSizeHint(const QFrame* self, intptr_t slot) {
	auto* vqframe = dynamic_cast<const VirtualQFrame*>(self);
	if (vqframe && vqframe->isVirtualQFrame) {
vqframe->setQFrame_SizeHint_Callback(reinterpret_cast<VirtualQFrame::QFrame_SizeHint_Callback>(slot));
}
}

void QFrame_Delete(QFrame* self) {
    delete self;
}

