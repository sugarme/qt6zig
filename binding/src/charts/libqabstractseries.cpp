#include <QAbstractAxis>
#include <QAbstractSeries>
#include <QChart>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qabstractseries.h>
#include "libqabstractseries.h"
#include "libqabstractseries.hxx"

libqt_string QAbstractSeries_Tr(const char* s) {
	QString _ret = QAbstractSeries::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QAbstractSeries_Type(const QAbstractSeries* self) {
	return self->type();
}

void QAbstractSeries_SetName(QAbstractSeries* self, const libqt_string name) {
	self->setName(QString::fromUtf8(name.data, name.len));
}

libqt_string QAbstractSeries_Name(const QAbstractSeries* self) {
	QString _ret = self->name();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QAbstractSeries_SetVisible(QAbstractSeries* self) {
	self->setVisible();
}

bool QAbstractSeries_IsVisible(const QAbstractSeries* self) {
	return self->isVisible();
}

double QAbstractSeries_Opacity(const QAbstractSeries* self) {
	return self->opacity();
}

void QAbstractSeries_SetOpacity(QAbstractSeries* self, double opacity) {
	self->setOpacity(opacity);
}

void QAbstractSeries_SetUseOpenGL(QAbstractSeries* self) {
	self->setUseOpenGL();
}

bool QAbstractSeries_UseOpenGL(const QAbstractSeries* self) {
	return self->useOpenGL();
}

QChart* QAbstractSeries_Chart(const QAbstractSeries* self) {
	return self->chart();
}

bool QAbstractSeries_AttachAxis(QAbstractSeries* self, QAbstractAxis* axis) {
	return self->attachAxis(axis);
}

bool QAbstractSeries_DetachAxis(QAbstractSeries* self, QAbstractAxis* axis) {
	return self->detachAxis(axis);
}

libqt_list QAbstractSeries_AttachedAxes(QAbstractSeries* self) {
	return self->attachedAxes();
}

void QAbstractSeries_Show(QAbstractSeries* self) {
	self->show();
}

void QAbstractSeries_Hide(QAbstractSeries* self) {
	self->hide();
}

void QAbstractSeries_NameChanged(QAbstractSeries* self) {
	self->nameChanged();
}

void QAbstractSeries_Connect_NameChanged(QAbstractSeries* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSeries*) = reinterpret_cast<void (*)(QAbstractSeries*)>(slot);
    QAbstractSeries::connect(self, &QAbstractSeries::nameChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QAbstractSeries_VisibleChanged(QAbstractSeries* self) {
	self->visibleChanged();
}

void QAbstractSeries_Connect_VisibleChanged(QAbstractSeries* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSeries*) = reinterpret_cast<void (*)(QAbstractSeries*)>(slot);
    QAbstractSeries::connect(self, &QAbstractSeries::visibleChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QAbstractSeries_OpacityChanged(QAbstractSeries* self) {
	self->opacityChanged();
}

void QAbstractSeries_Connect_OpacityChanged(QAbstractSeries* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSeries*) = reinterpret_cast<void (*)(QAbstractSeries*)>(slot);
    QAbstractSeries::connect(self, &QAbstractSeries::opacityChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QAbstractSeries_UseOpenGLChanged(QAbstractSeries* self) {
	self->useOpenGLChanged();
}

void QAbstractSeries_Connect_UseOpenGLChanged(QAbstractSeries* self, intptr_t slot) {
    void (*slotFunc)(QAbstractSeries*) = reinterpret_cast<void (*)(QAbstractSeries*)>(slot);
    QAbstractSeries::connect(self, &QAbstractSeries::useOpenGLChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

libqt_string QAbstractSeries_Tr2(const char* s, const char* c) {
	QString _ret = QAbstractSeries::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QAbstractSeries_Tr3(const char* s, const char* c, int n) {
	QString _ret = QAbstractSeries::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QAbstractSeries_SetVisible1(QAbstractSeries* self, bool visible) {
	self->setVisible(visible);
}

void QAbstractSeries_SetUseOpenGL1(QAbstractSeries* self, bool enable) {
	self->setUseOpenGL(enable);
}

// Base class handler implementation
int QAbstractSeries_QBaseType(const QAbstractSeries* self) {
	auto* vqabstractseries = dynamic_cast<const VirtualQAbstractSeries*>(self);
	if (vqabstractseries && vqabstractseries->isVirtualQAbstractSeries) {
vqabstractseries->setQAbstractSeries_Type_IsBase(true);
	return vqabstractseries->type();
}
}

// Auxiliary method to allow providing re-implementation
void QAbstractSeries_OnType(const QAbstractSeries* self, intptr_t slot) {
	auto* vqabstractseries = dynamic_cast<const VirtualQAbstractSeries*>(self);
	if (vqabstractseries && vqabstractseries->isVirtualQAbstractSeries) {
vqabstractseries->setQAbstractSeries_Type_Callback(reinterpret_cast<VirtualQAbstractSeries::QAbstractSeries_Type_Callback>(slot));
}
}

void QAbstractSeries_Delete(QAbstractSeries* self) {
    delete self;
}

