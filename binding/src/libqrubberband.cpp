#include <QEvent>
#include <QMoveEvent>
#include <QPaintEvent>
#include <QPoint>
#include <QRect>
#include <QResizeEvent>
#include <QRubberBand>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QStyleOptionRubberBand>
#include <QWidget>
#include <qrubberband.h>
#include "libqrubberband.h"
#include "libqrubberband.hxx"

QRubberBand* QRubberBand_new(int param1) {
	 return new VirtualQRubberBand(static_cast<QRubberBand::Shape>(param1));
}

QRubberBand* QRubberBand_new2(int param1, QWidget* param2) {
	 return new VirtualQRubberBand(static_cast<QRubberBand::Shape>(param1), param2);
}

libqt_string QRubberBand_Tr(const char* s) {
	QString _ret = QRubberBand::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QRubberBand_Shape(const QRubberBand* self) {
	return self->shape();
}

void QRubberBand_SetGeometry(QRubberBand* self, const QRect* r) {
	self->setGeometry(*r);
}

void QRubberBand_SetGeometry2(QRubberBand* self, int x, int y, int w, int h) {
	self->setGeometry(x, y, w, h);
}

void QRubberBand_Move(QRubberBand* self, int x, int y) {
	self->move(x, y);
}

void QRubberBand_Move2(QRubberBand* self, const QPoint* p) {
	self->move(*p);
}

void QRubberBand_Resize(QRubberBand* self, int w, int h) {
	self->resize(w, h);
}

void QRubberBand_Resize2(QRubberBand* self, const QSize* s) {
	self->resize(*s);
}

libqt_string QRubberBand_Tr2(const char* s, const char* c) {
	QString _ret = QRubberBand::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QRubberBand_Tr3(const char* s, const char* c, int n) {
	QString _ret = QRubberBand::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QRubberBand_Delete(QRubberBand* self) {
    delete self;
}

