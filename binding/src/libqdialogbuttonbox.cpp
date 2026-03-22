#include <QAbstractButton>
#include <QDialogButtonBox>
#include <QEvent>
#include <QPushButton>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QWidget>
#include <qdialogbuttonbox.h>
#include "libqdialogbuttonbox.h"
#include "libqdialogbuttonbox.hxx"

QDialogButtonBox* QDialogButtonBox_new(QWidget* parent) {
	 return new VirtualQDialogButtonBox(parent);
}

QDialogButtonBox* QDialogButtonBox_new2() {
	 return new VirtualQDialogButtonBox();
}

QDialogButtonBox* QDialogButtonBox_new3(int orientation) {
	 return new VirtualQDialogButtonBox(static_cast<Qt::Orientation>(orientation));
}

QDialogButtonBox* QDialogButtonBox_new4(int buttons) {
	 return new VirtualQDialogButtonBox(static_cast<QFlags<QDialogButtonBox::StandardButton>>(buttons));
}

QDialogButtonBox* QDialogButtonBox_new5(int buttons, int orientation) {
	 return new VirtualQDialogButtonBox(static_cast<QFlags<QDialogButtonBox::StandardButton>>(buttons), static_cast<Qt::Orientation>(orientation));
}

QDialogButtonBox* QDialogButtonBox_new6(int orientation, QWidget* parent) {
	 return new VirtualQDialogButtonBox(static_cast<Qt::Orientation>(orientation), parent);
}

QDialogButtonBox* QDialogButtonBox_new7(int buttons, QWidget* parent) {
	 return new VirtualQDialogButtonBox(static_cast<QFlags<QDialogButtonBox::StandardButton>>(buttons), parent);
}

QDialogButtonBox* QDialogButtonBox_new8(int buttons, int orientation, QWidget* parent) {
	 return new VirtualQDialogButtonBox(static_cast<QFlags<QDialogButtonBox::StandardButton>>(buttons), static_cast<Qt::Orientation>(orientation), parent);
}

libqt_string QDialogButtonBox_Tr(const char* s) {
	QString _ret = QDialogButtonBox::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QDialogButtonBox_SetOrientation(QDialogButtonBox* self, int orientation) {
	self->setOrientation(static_cast<Qt::Orientation>(orientation));
}

int QDialogButtonBox_Orientation(const QDialogButtonBox* self) {
	return self->orientation();
}

void QDialogButtonBox_AddButton(QDialogButtonBox* self, QAbstractButton* button, int role) {
	self->addButton(button, static_cast<QMessageBox::ButtonRole>(role));
}

QPushButton* QDialogButtonBox_AddButton2(QDialogButtonBox* self, const libqt_string text, int role) {
	return self->addButton(QString::fromUtf8(text.data, text.len), static_cast<QMessageBox::ButtonRole>(role));
}

QPushButton* QDialogButtonBox_AddButton3(QDialogButtonBox* self, int button) {
	return self->addButton(static_cast<QMessageBox::StandardButton>(button));
}

void QDialogButtonBox_RemoveButton(QDialogButtonBox* self, QAbstractButton* button) {
	self->removeButton(button);
}

void QDialogButtonBox_Clear(QDialogButtonBox* self) {
	self->clear();
}

libqt_list QDialogButtonBox_Buttons(const QDialogButtonBox* self) {
	auto _ret = self->buttons();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		_data[_i] = _ret[_i];
	}
	return _arr;
}

int QDialogButtonBox_ButtonRole(const QDialogButtonBox* self, QAbstractButton* button) {
	return self->buttonRole(button);
}

void QDialogButtonBox_SetStandardButtons(QDialogButtonBox* self, int buttons) {
	self->setStandardButtons(static_cast<QFlags<QDialogButtonBox::StandardButton>>(buttons));
}

int QDialogButtonBox_StandardButtons(const QDialogButtonBox* self) {
	return self->standardButtons();
}

int QDialogButtonBox_StandardButton(const QDialogButtonBox* self, QAbstractButton* button) {
	return self->standardButton(button);
}

QPushButton* QDialogButtonBox_Button(const QDialogButtonBox* self, int which) {
	return self->button(static_cast<QMessageBox::StandardButton>(which));
}

void QDialogButtonBox_SetCenterButtons(QDialogButtonBox* self, bool center) {
	self->setCenterButtons(center);
}

bool QDialogButtonBox_CenterButtons(const QDialogButtonBox* self) {
	return self->centerButtons();
}

void QDialogButtonBox_Clicked(QDialogButtonBox* self, QAbstractButton* button) {
	self->clicked(button);
}

void QDialogButtonBox_Connect_Clicked(QDialogButtonBox* self, intptr_t slot) {
    void (*slotFunc)(QDialogButtonBox*, QAbstractButton*) = reinterpret_cast<void (*)(QDialogButtonBox*, QAbstractButton*)>(slot);
    QDialogButtonBox::connect(self, &QDialogButtonBox::clicked, [self, slotFunc](QAbstractButton* button) {
	slotFunc(self, button);
    });
}

void QDialogButtonBox_Accepted(QDialogButtonBox* self) {
	self->accepted();
}

void QDialogButtonBox_Connect_Accepted(QDialogButtonBox* self, intptr_t slot) {
    void (*slotFunc)(QDialogButtonBox*) = reinterpret_cast<void (*)(QDialogButtonBox*)>(slot);
    QDialogButtonBox::connect(self, &QDialogButtonBox::accepted, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QDialogButtonBox_HelpRequested(QDialogButtonBox* self) {
	self->helpRequested();
}

void QDialogButtonBox_Connect_HelpRequested(QDialogButtonBox* self, intptr_t slot) {
    void (*slotFunc)(QDialogButtonBox*) = reinterpret_cast<void (*)(QDialogButtonBox*)>(slot);
    QDialogButtonBox::connect(self, &QDialogButtonBox::helpRequested, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QDialogButtonBox_Rejected(QDialogButtonBox* self) {
	self->rejected();
}

void QDialogButtonBox_Connect_Rejected(QDialogButtonBox* self, intptr_t slot) {
    void (*slotFunc)(QDialogButtonBox*) = reinterpret_cast<void (*)(QDialogButtonBox*)>(slot);
    QDialogButtonBox::connect(self, &QDialogButtonBox::rejected, [self, slotFunc]() {
	slotFunc(self);
    });
}

libqt_string QDialogButtonBox_Tr2(const char* s, const char* c) {
	QString _ret = QDialogButtonBox::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QDialogButtonBox_Tr3(const char* s, const char* c, int n) {
	QString _ret = QDialogButtonBox::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Derived class handler implementation
void QDialogButtonBox_ChangeEvent(QDialogButtonBox* self, QEvent* event) {
	auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self);
	if (vqdialogbuttonbox && vqdialogbuttonbox->isVirtualQDialogButtonBox) {
	vqdialogbuttonbox->changeEvent(event);
	} else {
	self->QDialogButtonBox::changeEvent(event);
}
}

// Base class handler implementation
void QDialogButtonBox_QBaseChangeEvent(QDialogButtonBox* self, QEvent* event) {
	auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self);
	if (vqdialogbuttonbox && vqdialogbuttonbox->isVirtualQDialogButtonBox) {
vqdialogbuttonbox->setQDialogButtonBox_ChangeEvent_IsBase(true);
	vqdialogbuttonbox->changeEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnChangeEvent(QDialogButtonBox* self, intptr_t slot) {
	auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self);
	if (vqdialogbuttonbox && vqdialogbuttonbox->isVirtualQDialogButtonBox) {
vqdialogbuttonbox->setQDialogButtonBox_ChangeEvent_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_ChangeEvent_Callback>(slot));
}
}

// Derived class handler implementation
bool QDialogButtonBox_Event(QDialogButtonBox* self, QEvent* event) {
	auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self);
	if (vqdialogbuttonbox && vqdialogbuttonbox->isVirtualQDialogButtonBox) {
	return vqdialogbuttonbox->event(event);
	} else {
	return self->QDialogButtonBox::event(event);
}
}

// Base class handler implementation
bool QDialogButtonBox_QBaseEvent(QDialogButtonBox* self, QEvent* event) {
	auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self);
	if (vqdialogbuttonbox && vqdialogbuttonbox->isVirtualQDialogButtonBox) {
vqdialogbuttonbox->setQDialogButtonBox_Event_IsBase(true);
	return vqdialogbuttonbox->event(event);
}
}

// Auxiliary method to allow providing re-implementation
void QDialogButtonBox_OnEvent(QDialogButtonBox* self, intptr_t slot) {
	auto* vqdialogbuttonbox = dynamic_cast<VirtualQDialogButtonBox*>(self);
	if (vqdialogbuttonbox && vqdialogbuttonbox->isVirtualQDialogButtonBox) {
vqdialogbuttonbox->setQDialogButtonBox_Event_Callback(reinterpret_cast<VirtualQDialogButtonBox::QDialogButtonBox_Event_Callback>(slot));
}
}

void QDialogButtonBox_Delete(QDialogButtonBox* self) {
    delete self;
}

