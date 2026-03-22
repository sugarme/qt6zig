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

// Derived class handler implementation
bool QGroupBox_Event(QGroupBox* self, QEvent* event) {
	auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
	if (vqgroupbox && vqgroupbox->isVirtualQGroupBox) {
	return vqgroupbox->event(event);
	} else {
	return self->QGroupBox::event(event);
}
}

// Base class handler implementation
bool QGroupBox_QBaseEvent(QGroupBox* self, QEvent* event) {
	auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
	if (vqgroupbox && vqgroupbox->isVirtualQGroupBox) {
vqgroupbox->setQGroupBox_Event_IsBase(true);
	return vqgroupbox->event(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnEvent(QGroupBox* self, intptr_t slot) {
	auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
	if (vqgroupbox && vqgroupbox->isVirtualQGroupBox) {
vqgroupbox->setQGroupBox_Event_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_Event_Callback>(slot));
}
}

// Derived class handler implementation
void QGroupBox_ChildEvent(QGroupBox* self, QChildEvent* event) {
	auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
	if (vqgroupbox && vqgroupbox->isVirtualQGroupBox) {
	vqgroupbox->childEvent(event);
	} else {
	self->QGroupBox::childEvent(event);
}
}

// Base class handler implementation
void QGroupBox_QBaseChildEvent(QGroupBox* self, QChildEvent* event) {
	auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
	if (vqgroupbox && vqgroupbox->isVirtualQGroupBox) {
vqgroupbox->setQGroupBox_ChildEvent_IsBase(true);
	vqgroupbox->childEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnChildEvent(QGroupBox* self, intptr_t slot) {
	auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
	if (vqgroupbox && vqgroupbox->isVirtualQGroupBox) {
vqgroupbox->setQGroupBox_ChildEvent_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_ChildEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGroupBox_ResizeEvent(QGroupBox* self, QResizeEvent* event) {
	auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
	if (vqgroupbox && vqgroupbox->isVirtualQGroupBox) {
	vqgroupbox->resizeEvent(event);
	} else {
	self->QGroupBox::resizeEvent(event);
}
}

// Base class handler implementation
void QGroupBox_QBaseResizeEvent(QGroupBox* self, QResizeEvent* event) {
	auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
	if (vqgroupbox && vqgroupbox->isVirtualQGroupBox) {
vqgroupbox->setQGroupBox_ResizeEvent_IsBase(true);
	vqgroupbox->resizeEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnResizeEvent(QGroupBox* self, intptr_t slot) {
	auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
	if (vqgroupbox && vqgroupbox->isVirtualQGroupBox) {
vqgroupbox->setQGroupBox_ResizeEvent_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_ResizeEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGroupBox_PaintEvent(QGroupBox* self, QPaintEvent* event) {
	auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
	if (vqgroupbox && vqgroupbox->isVirtualQGroupBox) {
	vqgroupbox->paintEvent(event);
	} else {
	self->QGroupBox::paintEvent(event);
}
}

// Base class handler implementation
void QGroupBox_QBasePaintEvent(QGroupBox* self, QPaintEvent* event) {
	auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
	if (vqgroupbox && vqgroupbox->isVirtualQGroupBox) {
vqgroupbox->setQGroupBox_PaintEvent_IsBase(true);
	vqgroupbox->paintEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnPaintEvent(QGroupBox* self, intptr_t slot) {
	auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
	if (vqgroupbox && vqgroupbox->isVirtualQGroupBox) {
vqgroupbox->setQGroupBox_PaintEvent_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_PaintEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGroupBox_FocusInEvent(QGroupBox* self, QFocusEvent* event) {
	auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
	if (vqgroupbox && vqgroupbox->isVirtualQGroupBox) {
	vqgroupbox->focusInEvent(event);
	} else {
	self->QGroupBox::focusInEvent(event);
}
}

// Base class handler implementation
void QGroupBox_QBaseFocusInEvent(QGroupBox* self, QFocusEvent* event) {
	auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
	if (vqgroupbox && vqgroupbox->isVirtualQGroupBox) {
vqgroupbox->setQGroupBox_FocusInEvent_IsBase(true);
	vqgroupbox->focusInEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnFocusInEvent(QGroupBox* self, intptr_t slot) {
	auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
	if (vqgroupbox && vqgroupbox->isVirtualQGroupBox) {
vqgroupbox->setQGroupBox_FocusInEvent_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_FocusInEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGroupBox_ChangeEvent(QGroupBox* self, QEvent* event) {
	auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
	if (vqgroupbox && vqgroupbox->isVirtualQGroupBox) {
	vqgroupbox->changeEvent(event);
	} else {
	self->QGroupBox::changeEvent(event);
}
}

// Base class handler implementation
void QGroupBox_QBaseChangeEvent(QGroupBox* self, QEvent* event) {
	auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
	if (vqgroupbox && vqgroupbox->isVirtualQGroupBox) {
vqgroupbox->setQGroupBox_ChangeEvent_IsBase(true);
	vqgroupbox->changeEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnChangeEvent(QGroupBox* self, intptr_t slot) {
	auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
	if (vqgroupbox && vqgroupbox->isVirtualQGroupBox) {
vqgroupbox->setQGroupBox_ChangeEvent_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_ChangeEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGroupBox_MousePressEvent(QGroupBox* self, QMouseEvent* event) {
	auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
	if (vqgroupbox && vqgroupbox->isVirtualQGroupBox) {
	vqgroupbox->mousePressEvent(event);
	} else {
	self->QGroupBox::mousePressEvent(event);
}
}

// Base class handler implementation
void QGroupBox_QBaseMousePressEvent(QGroupBox* self, QMouseEvent* event) {
	auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
	if (vqgroupbox && vqgroupbox->isVirtualQGroupBox) {
vqgroupbox->setQGroupBox_MousePressEvent_IsBase(true);
	vqgroupbox->mousePressEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnMousePressEvent(QGroupBox* self, intptr_t slot) {
	auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
	if (vqgroupbox && vqgroupbox->isVirtualQGroupBox) {
vqgroupbox->setQGroupBox_MousePressEvent_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_MousePressEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGroupBox_MouseMoveEvent(QGroupBox* self, QMouseEvent* event) {
	auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
	if (vqgroupbox && vqgroupbox->isVirtualQGroupBox) {
	vqgroupbox->mouseMoveEvent(event);
	} else {
	self->QGroupBox::mouseMoveEvent(event);
}
}

// Base class handler implementation
void QGroupBox_QBaseMouseMoveEvent(QGroupBox* self, QMouseEvent* event) {
	auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
	if (vqgroupbox && vqgroupbox->isVirtualQGroupBox) {
vqgroupbox->setQGroupBox_MouseMoveEvent_IsBase(true);
	vqgroupbox->mouseMoveEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnMouseMoveEvent(QGroupBox* self, intptr_t slot) {
	auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
	if (vqgroupbox && vqgroupbox->isVirtualQGroupBox) {
vqgroupbox->setQGroupBox_MouseMoveEvent_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_MouseMoveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGroupBox_MouseReleaseEvent(QGroupBox* self, QMouseEvent* event) {
	auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
	if (vqgroupbox && vqgroupbox->isVirtualQGroupBox) {
	vqgroupbox->mouseReleaseEvent(event);
	} else {
	self->QGroupBox::mouseReleaseEvent(event);
}
}

// Base class handler implementation
void QGroupBox_QBaseMouseReleaseEvent(QGroupBox* self, QMouseEvent* event) {
	auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
	if (vqgroupbox && vqgroupbox->isVirtualQGroupBox) {
vqgroupbox->setQGroupBox_MouseReleaseEvent_IsBase(true);
	vqgroupbox->mouseReleaseEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnMouseReleaseEvent(QGroupBox* self, intptr_t slot) {
	auto* vqgroupbox = dynamic_cast<VirtualQGroupBox*>(self);
	if (vqgroupbox && vqgroupbox->isVirtualQGroupBox) {
vqgroupbox->setQGroupBox_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_MouseReleaseEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QGroupBox_InitStyleOption(const QGroupBox* self, QStyleOptionGroupBox* option) {
	auto* vqgroupbox = dynamic_cast<const VirtualQGroupBox*>(self);
	if (vqgroupbox && vqgroupbox->isVirtualQGroupBox) {
	vqgroupbox->initStyleOption(option);
	} else {
	self->QGroupBox::initStyleOption(option);
}
}

// Base class handler implementation
void QGroupBox_QBaseInitStyleOption(const QGroupBox* self, QStyleOptionGroupBox* option) {
	auto* vqgroupbox = dynamic_cast<const VirtualQGroupBox*>(self);
	if (vqgroupbox && vqgroupbox->isVirtualQGroupBox) {
vqgroupbox->setQGroupBox_InitStyleOption_IsBase(true);
	vqgroupbox->initStyleOption(option);
}
}

// Auxiliary method to allow providing re-implementation
void QGroupBox_OnInitStyleOption(const QGroupBox* self, intptr_t slot) {
	auto* vqgroupbox = dynamic_cast<const VirtualQGroupBox*>(self);
	if (vqgroupbox && vqgroupbox->isVirtualQGroupBox) {
vqgroupbox->setQGroupBox_InitStyleOption_Callback(reinterpret_cast<VirtualQGroupBox::QGroupBox_InitStyleOption_Callback>(slot));
}
}

void QGroupBox_Delete(QGroupBox* self) {
    delete self;
}

