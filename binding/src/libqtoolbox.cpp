#include <QEvent>
#include <QFrame>
#include <QIcon>
#include <QShowEvent>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QToolBox>
#include <QWidget>
#include <qtoolbox.h>
#include "libqtoolbox.h"
#include "libqtoolbox.hxx"

QToolBox* QToolBox_new(QWidget* parent) {
	 return new VirtualQToolBox(parent);
}

QToolBox* QToolBox_new2() {
	 return new VirtualQToolBox();
}

QToolBox* QToolBox_new3(QWidget* parent, int f) {
	 return new VirtualQToolBox(parent, static_cast<QFlags<Qt::WindowType>>(f));
}

libqt_string QToolBox_Tr(const char* s) {
	QString _ret = QToolBox::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QToolBox_AddItem(QToolBox* self, QWidget* widget, const libqt_string text) {
	return self->addItem(widget, QString::fromUtf8(text.data, text.len));
}

int QToolBox_AddItem2(QToolBox* self, QWidget* widget, const QIcon* icon, const libqt_string text) {
	return self->addItem(widget, *icon, QString::fromUtf8(text.data, text.len));
}

int QToolBox_InsertItem(QToolBox* self, int index, QWidget* widget, const libqt_string text) {
	return self->insertItem(index, widget, QString::fromUtf8(text.data, text.len));
}

int QToolBox_InsertItem2(QToolBox* self, int index, QWidget* widget, const QIcon* icon, const libqt_string text) {
	return self->insertItem(index, widget, *icon, QString::fromUtf8(text.data, text.len));
}

void QToolBox_RemoveItem(QToolBox* self, int index) {
	self->removeItem(index);
}

void QToolBox_SetItemEnabled(QToolBox* self, int index, bool enabled) {
	self->setItemEnabled(index, enabled);
}

bool QToolBox_IsItemEnabled(const QToolBox* self, int index) {
	return self->isItemEnabled(index);
}

void QToolBox_SetItemText(QToolBox* self, int index, const libqt_string text) {
	self->setItemText(index, QString::fromUtf8(text.data, text.len));
}

libqt_string QToolBox_ItemText(const QToolBox* self, int index) {
	QString _ret = self->itemText(index);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QToolBox_SetItemIcon(QToolBox* self, int index, const QIcon* icon) {
	self->setItemIcon(index, *icon);
}

QIcon* QToolBox_ItemIcon(const QToolBox* self, int index) {
	return new QIcon(self->itemIcon(index));
}

void QToolBox_SetItemToolTip(QToolBox* self, int index, const libqt_string toolTip) {
	self->setItemToolTip(index, QString::fromUtf8(toolTip.data, toolTip.len));
}

libqt_string QToolBox_ItemToolTip(const QToolBox* self, int index) {
	QString _ret = self->itemToolTip(index);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QToolBox_CurrentIndex(const QToolBox* self) {
	return self->currentIndex();
}

QWidget* QToolBox_CurrentWidget(const QToolBox* self) {
	return self->currentWidget();
}

QWidget* QToolBox_Widget(const QToolBox* self, int index) {
	return self->widget(index);
}

int QToolBox_IndexOf(const QToolBox* self, const QWidget* widget) {
	return self->indexOf(widget);
}

int QToolBox_Count(const QToolBox* self) {
	return self->count();
}

void QToolBox_SetCurrentIndex(QToolBox* self, int index) {
	self->setCurrentIndex(index);
}

void QToolBox_SetCurrentWidget(QToolBox* self, QWidget* widget) {
	self->setCurrentWidget(widget);
}

void QToolBox_CurrentChanged(QToolBox* self, int index) {
	self->currentChanged(index);
}

void QToolBox_Connect_CurrentChanged(QToolBox* self, intptr_t slot) {
    void (*slotFunc)(QToolBox*, int) = reinterpret_cast<void (*)(QToolBox*, int)>(slot);
    QToolBox::connect(self, &QToolBox::currentChanged, [self, slotFunc](int index) {
	slotFunc(self, index);
    });
}

libqt_string QToolBox_Tr2(const char* s, const char* c) {
	QString _ret = QToolBox::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QToolBox_Tr3(const char* s, const char* c, int n) {
	QString _ret = QToolBox::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Derived class handler implementation
bool QToolBox_Event(QToolBox* self, QEvent* e) {
	auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
	if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
	return vqtoolbox->event(e);
	} else {
	return self->QToolBox::event(e);
}
}

// Base class handler implementation
bool QToolBox_QBaseEvent(QToolBox* self, QEvent* e) {
	auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
	if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
vqtoolbox->setQToolBox_Event_IsBase(true);
	return vqtoolbox->event(e);
}
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnEvent(QToolBox* self, intptr_t slot) {
	auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
	if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
vqtoolbox->setQToolBox_Event_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_Event_Callback>(slot));
}
}

// Derived class handler implementation
void QToolBox_ItemInserted(QToolBox* self, int index) {
	auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
	if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
	vqtoolbox->itemInserted(index);
	} else {
	self->QToolBox::itemInserted(index);
}
}

// Base class handler implementation
void QToolBox_QBaseItemInserted(QToolBox* self, int index) {
	auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
	if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
vqtoolbox->setQToolBox_ItemInserted_IsBase(true);
	vqtoolbox->itemInserted(index);
}
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnItemInserted(QToolBox* self, intptr_t slot) {
	auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
	if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
vqtoolbox->setQToolBox_ItemInserted_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_ItemInserted_Callback>(slot));
}
}

// Derived class handler implementation
void QToolBox_ItemRemoved(QToolBox* self, int index) {
	auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
	if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
	vqtoolbox->itemRemoved(index);
	} else {
	self->QToolBox::itemRemoved(index);
}
}

// Base class handler implementation
void QToolBox_QBaseItemRemoved(QToolBox* self, int index) {
	auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
	if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
vqtoolbox->setQToolBox_ItemRemoved_IsBase(true);
	vqtoolbox->itemRemoved(index);
}
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnItemRemoved(QToolBox* self, intptr_t slot) {
	auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
	if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
vqtoolbox->setQToolBox_ItemRemoved_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_ItemRemoved_Callback>(slot));
}
}

// Derived class handler implementation
void QToolBox_ShowEvent(QToolBox* self, QShowEvent* e) {
	auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
	if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
	vqtoolbox->showEvent(e);
	} else {
	self->QToolBox::showEvent(e);
}
}

// Base class handler implementation
void QToolBox_QBaseShowEvent(QToolBox* self, QShowEvent* e) {
	auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
	if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
vqtoolbox->setQToolBox_ShowEvent_IsBase(true);
	vqtoolbox->showEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnShowEvent(QToolBox* self, intptr_t slot) {
	auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
	if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
vqtoolbox->setQToolBox_ShowEvent_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_ShowEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QToolBox_ChangeEvent(QToolBox* self, QEvent* param1) {
	auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
	if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
	vqtoolbox->changeEvent(param1);
	} else {
	self->QToolBox::changeEvent(param1);
}
}

// Base class handler implementation
void QToolBox_QBaseChangeEvent(QToolBox* self, QEvent* param1) {
	auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
	if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
vqtoolbox->setQToolBox_ChangeEvent_IsBase(true);
	vqtoolbox->changeEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QToolBox_OnChangeEvent(QToolBox* self, intptr_t slot) {
	auto* vqtoolbox = dynamic_cast<VirtualQToolBox*>(self);
	if (vqtoolbox && vqtoolbox->isVirtualQToolBox) {
vqtoolbox->setQToolBox_ChangeEvent_Callback(reinterpret_cast<VirtualQToolBox::QToolBox_ChangeEvent_Callback>(slot));
}
}

void QToolBox_Delete(QToolBox* self) {
    delete self;
}

