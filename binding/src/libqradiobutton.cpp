#include <QAbstractButton>
#include <QEvent>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QPoint>
#include <QRadioButton>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QStyleOptionButton>
#include <QWidget>
#include <qradiobutton.h>
#include "libqradiobutton.h"
#include "libqradiobutton.hxx"

QRadioButton* QRadioButton_new(QWidget* parent) {
	 return new VirtualQRadioButton(parent);
}

QRadioButton* QRadioButton_new2() {
	 return new VirtualQRadioButton();
}

QRadioButton* QRadioButton_new3(const libqt_string text) {
	 return new VirtualQRadioButton(QString::fromUtf8(text.data, text.len));
}

QRadioButton* QRadioButton_new4(const libqt_string text, QWidget* parent) {
	 return new VirtualQRadioButton(QString::fromUtf8(text.data, text.len), parent);
}

libqt_string QRadioButton_Tr(const char* s) {
	QString _ret = QRadioButton::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QSize* QRadioButton_SizeHint(const QRadioButton* self) {
	return new QSize(self->sizeHint());
}

QSize* QRadioButton_MinimumSizeHint(const QRadioButton* self) {
	return new QSize(self->minimumSizeHint());
}

libqt_string QRadioButton_Tr2(const char* s, const char* c) {
	QString _ret = QRadioButton::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QRadioButton_Tr3(const char* s, const char* c, int n) {
	QString _ret = QRadioButton::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
QSize* QRadioButton_QBaseSizeHint(const QRadioButton* self) {
	auto* vqradiobutton = dynamic_cast<const VirtualQRadioButton*>(self);
	if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
vqradiobutton->setQRadioButton_SizeHint_IsBase(true);
	return new QSize(vqradiobutton->sizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnSizeHint(const QRadioButton* self, intptr_t slot) {
	auto* vqradiobutton = dynamic_cast<const VirtualQRadioButton*>(self);
	if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
vqradiobutton->setQRadioButton_SizeHint_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_SizeHint_Callback>(slot));
}
}

// Base class handler implementation
QSize* QRadioButton_QBaseMinimumSizeHint(const QRadioButton* self) {
	auto* vqradiobutton = dynamic_cast<const VirtualQRadioButton*>(self);
	if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
vqradiobutton->setQRadioButton_MinimumSizeHint_IsBase(true);
	return new QSize(vqradiobutton->minimumSizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QRadioButton_OnMinimumSizeHint(const QRadioButton* self, intptr_t slot) {
	auto* vqradiobutton = dynamic_cast<const VirtualQRadioButton*>(self);
	if (vqradiobutton && vqradiobutton->isVirtualQRadioButton) {
vqradiobutton->setQRadioButton_MinimumSizeHint_Callback(reinterpret_cast<VirtualQRadioButton::QRadioButton_MinimumSizeHint_Callback>(slot));
}
}

void QRadioButton_Delete(QRadioButton* self) {
    delete self;
}

