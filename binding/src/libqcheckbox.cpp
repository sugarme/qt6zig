#include <QAbstractButton>
#include <QCheckBox>
#include <QEvent>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QPoint>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QStyleOptionButton>
#include <QWidget>
#include <qcheckbox.h>
#include "libqcheckbox.h"
#include "libqcheckbox.hxx"

QCheckBox* QCheckBox_new(QWidget* parent) {
	 return new VirtualQCheckBox(parent);
}

QCheckBox* QCheckBox_new2() {
	 return new VirtualQCheckBox();
}

QCheckBox* QCheckBox_new3(const libqt_string text) {
	 return new VirtualQCheckBox(QString::fromUtf8(text.data, text.len));
}

QCheckBox* QCheckBox_new4(const libqt_string text, QWidget* parent) {
	 return new VirtualQCheckBox(QString::fromUtf8(text.data, text.len), parent);
}

libqt_string QCheckBox_Tr(const char* s) {
	QString _ret = QCheckBox::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QSize* QCheckBox_SizeHint(const QCheckBox* self) {
	return new QSize(self->sizeHint());
}

QSize* QCheckBox_MinimumSizeHint(const QCheckBox* self) {
	return new QSize(self->minimumSizeHint());
}

void QCheckBox_SetTristate(QCheckBox* self) {
	self->setTristate();
}

bool QCheckBox_IsTristate(const QCheckBox* self) {
	return self->isTristate();
}

int QCheckBox_CheckState(const QCheckBox* self) {
	return self->checkState();
}

void QCheckBox_SetCheckState(QCheckBox* self, int state) {
	self->setCheckState(static_cast<Qt::CheckState>(state));
}

void QCheckBox_StateChanged(QCheckBox* self, int param1) {
	self->stateChanged(param1);
}

void QCheckBox_Connect_StateChanged(QCheckBox* self, intptr_t slot) {
    void (*slotFunc)(QCheckBox*, int) = reinterpret_cast<void (*)(QCheckBox*, int)>(slot);
    QCheckBox::connect(self, &QCheckBox::stateChanged, [self, slotFunc](int param1) {
	slotFunc(self, param1);
    });
}

void QCheckBox_CheckStateChanged(QCheckBox* self, int param1) {
	self->checkStateChanged(static_cast<Qt::CheckState>(param1));
}

void QCheckBox_Connect_CheckStateChanged(QCheckBox* self, intptr_t slot) {
    void (*slotFunc)(QCheckBox*, int) = reinterpret_cast<void (*)(QCheckBox*, int)>(slot);
    QCheckBox::connect(self, &QCheckBox::checkStateChanged, [self, slotFunc](Qt::CheckState param1) {
	slotFunc(self, param1);
    });
}

libqt_string QCheckBox_Tr2(const char* s, const char* c) {
	QString _ret = QCheckBox::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QCheckBox_Tr3(const char* s, const char* c, int n) {
	QString _ret = QCheckBox::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QCheckBox_SetTristate1(QCheckBox* self, bool y) {
	self->setTristate(y);
}

// Base class handler implementation
QSize* QCheckBox_QBaseSizeHint(const QCheckBox* self) {
	auto* vqcheckbox = dynamic_cast<const VirtualQCheckBox*>(self);
	if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
vqcheckbox->setQCheckBox_SizeHint_IsBase(true);
	return new QSize(vqcheckbox->sizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnSizeHint(const QCheckBox* self, intptr_t slot) {
	auto* vqcheckbox = dynamic_cast<const VirtualQCheckBox*>(self);
	if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
vqcheckbox->setQCheckBox_SizeHint_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_SizeHint_Callback>(slot));
}
}

// Base class handler implementation
QSize* QCheckBox_QBaseMinimumSizeHint(const QCheckBox* self) {
	auto* vqcheckbox = dynamic_cast<const VirtualQCheckBox*>(self);
	if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
vqcheckbox->setQCheckBox_MinimumSizeHint_IsBase(true);
	return new QSize(vqcheckbox->minimumSizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QCheckBox_OnMinimumSizeHint(const QCheckBox* self, intptr_t slot) {
	auto* vqcheckbox = dynamic_cast<const VirtualQCheckBox*>(self);
	if (vqcheckbox && vqcheckbox->isVirtualQCheckBox) {
vqcheckbox->setQCheckBox_MinimumSizeHint_Callback(reinterpret_cast<VirtualQCheckBox::QCheckBox_MinimumSizeHint_Callback>(slot));
}
}

void QCheckBox_Delete(QCheckBox* self) {
    delete self;
}

