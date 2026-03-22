#include <QChildEvent>
#include <QEvent>
#include <QFocusEvent>
#include <QGroupBox>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QResizeEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QStyleOptionGroupBox>
#include <QWidget>
#include <qgroupbox.h>
#include "libqgroupbox.h"
#include "libqgroupbox.hxx"

QGroupBox* QGroupBox_new(QWidget* parent) {
	 return new VirtualQGroupBox(parent);
}

QGroupBox* QGroupBox_new2() {
	 return new VirtualQGroupBox();
}

QGroupBox* QGroupBox_new3(const libqt_string title) {
	 return new VirtualQGroupBox(QString::fromUtf8(title.data, title.len));
}

QGroupBox* QGroupBox_new4(const libqt_string title, QWidget* parent) {
	 return new VirtualQGroupBox(QString::fromUtf8(title.data, title.len), parent);
}

libqt_string QGroupBox_Tr(const char* s) {
	QString _ret = QGroupBox::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QGroupBox_Title(const QGroupBox* self) {
	QString _ret = self->title();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QGroupBox_SetTitle(QGroupBox* self, const libqt_string title) {
	self->setTitle(QString::fromUtf8(title.data, title.len));
}

int QGroupBox_Alignment(const QGroupBox* self) {
	return self->alignment();
}

void QGroupBox_SetAlignment(QGroupBox* self, int alignment) {
	self->setAlignment(alignment);
}

QSize* QGroupBox_MinimumSizeHint(const QGroupBox* self) {
	return new QSize(self->minimumSizeHint());
}

bool QGroupBox_IsFlat(const QGroupBox* self) {
	return self->isFlat();
}

void QGroupBox_SetFlat(QGroupBox* self, bool flat) {
	self->setFlat(flat);
}

bool QGroupBox_IsCheckable(const QGroupBox* self) {
	return self->isCheckable();
}

void QGroupBox_SetCheckable(QGroupBox* self, bool checkable) {
	self->setCheckable(checkable);
}

bool QGroupBox_IsChecked(const QGroupBox* self) {
	return self->isChecked();
}

void QGroupBox_SetChecked(QGroupBox* self, bool checked) {
	self->setChecked(checked);
}

void QGroupBox_Clicked(QGroupBox* self) {
	self->clicked();
}

void QGroupBox_Connect_Clicked(QGroupBox* self, intptr_t slot) {
    void (*slotFunc)(QGroupBox*) = reinterpret_cast<void (*)(QGroupBox*)>(slot);
    QGroupBox::connect(self, &QGroupBox::clicked, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QGroupBox_Toggled(QGroupBox* self, bool param1) {
	self->toggled(param1);
}

void QGroupBox_Connect_Toggled(QGroupBox* self, intptr_t slot) {
    void (*slotFunc)(QGroupBox*, bool) = reinterpret_cast<void (*)(QGroupBox*, bool)>(slot);
    QGroupBox::connect(self, &QGroupBox::toggled, [self, slotFunc](bool param1) {
	slotFunc(self, param1);
    });
}

libqt_string QGroupBox_Tr2(const char* s, const char* c) {
	QString _ret = QGroupBox::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QGroupBox_Tr3(const char* s, const char* c, int n) {
	QString _ret = QGroupBox::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QGroupBox_Clicked1(QGroupBox* self, bool checked) {
	self->clicked(checked);
}

void QGroupBox_Connect_Clicked1(QGroupBox* self, intptr_t slot) {
    void (*slotFunc)(QGroupBox*, bool) = reinterpret_cast<void (*)(QGroupBox*, bool)>(slot);
    QGroupBox::connect(self, &QGroupBox::clicked, [self, slotFunc](bool checked) {
	slotFunc(self, checked);
    });
}

// Base class handler implementation
QSize* QGroupBox_QBaseMinimumSizeHint(const QGroupBox* self) {
	auto* vqgroupbox = dynamic_cast<const VirtualQGroupBox*>(self);
	if (vqgroupbox && vqgroupbox->isVirtualQGroupBox) {
vqgroupbox->setQGroupBox_MinimumSizeHint_IsBase(true);
	return new QSize(vqgroupbox->minimumSizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnMinimumSizeHint(const QGroupBox* self, intptr_t slot) {
	auto* vqgroupbox = dynamic_cast<const VirtualQGroupBox*>(self);
	if (vqgroupbox && vqgroupbox->isVirtualQGroupBox) {
vqgroupbox->setQGroupBox_MinimumSizeHint_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_MinimumSizeHint_Callback>(slot));
}
}

void QGroupBox_Delete(QGroupBox* self) {
    delete self;
}

