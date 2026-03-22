#include <QEvent>
#include <QHideEvent>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintEvent>
#include <QShowEvent>
#include <QSize>
#include <QSizeGrip>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QWidget>
#include <qsizegrip.h>
#include "libqsizegrip.h"
#include "libqsizegrip.hxx"

QSizeGrip* QSizeGrip_new(QWidget* parent) {
	 return new VirtualQSizeGrip(parent);
}

libqt_string QSizeGrip_Tr(const char* s) {
	QString _ret = QSizeGrip::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QSize* QSizeGrip_SizeHint(const QSizeGrip* self) {
	return new QSize(self->sizeHint());
}

void QSizeGrip_SetVisible(QSizeGrip* self, bool visible) {
	self->setVisible(visible);
}

libqt_string QSizeGrip_Tr2(const char* s, const char* c) {
	QString _ret = QSizeGrip::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSizeGrip_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSizeGrip::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
QSize* QSizeGrip_QBaseSizeHint(const QSizeGrip* self) {
	auto* vqsizegrip = dynamic_cast<const VirtualQSizeGrip*>(self);
	if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
vqsizegrip->setQSizeGrip_SizeHint_IsBase(true);
	return new QSize(vqsizegrip->sizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnSizeHint(const QSizeGrip* self, intptr_t slot) {
	auto* vqsizegrip = dynamic_cast<const VirtualQSizeGrip*>(self);
	if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
vqsizegrip->setQSizeGrip_SizeHint_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_SizeHint_Callback>(slot));
}
}

// Base class handler implementation
void QSizeGrip_QBaseSetVisible(QSizeGrip* self, bool visible) {
	auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
	if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
vqsizegrip->setQSizeGrip_SetVisible_IsBase(true);
	vqsizegrip->setVisible(visible);
}
}

// Auxiliary method to allow providing re-implementation
void QSizeGrip_OnSetVisible(QSizeGrip* self, intptr_t slot) {
	auto* vqsizegrip = dynamic_cast<VirtualQSizeGrip*>(self);
	if (vqsizegrip && vqsizegrip->isVirtualQSizeGrip) {
vqsizegrip->setQSizeGrip_SetVisible_Callback(reinterpret_cast<VirtualQSizeGrip::QSizeGrip_SetVisible_Callback>(slot));
}
}

void QSizeGrip_Delete(QSizeGrip* self) {
    delete self;
}

