#include <QAction>
#include <QEvent>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <QWidgetAction>
#include <qwidgetaction.h>
#include "libqwidgetaction.h"
#include "libqwidgetaction.hxx"

QWidgetAction* QWidgetAction_new(QObject* parent) {
	 return new VirtualQWidgetAction(parent);
}

libqt_string QWidgetAction_Tr(const char* s) {
	QString _ret = QWidgetAction::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QWidgetAction_SetDefaultWidget(QWidgetAction* self, QWidget* w) {
	self->setDefaultWidget(w);
}

QWidget* QWidgetAction_DefaultWidget(const QWidgetAction* self) {
	return self->defaultWidget();
}

QWidget* QWidgetAction_RequestWidget(QWidgetAction* self, QWidget* parent) {
	return self->requestWidget(parent);
}

void QWidgetAction_ReleaseWidget(QWidgetAction* self, QWidget* widget) {
	self->releaseWidget(widget);
}

libqt_string QWidgetAction_Tr2(const char* s, const char* c) {
	QString _ret = QWidgetAction::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QWidgetAction_Tr3(const char* s, const char* c, int n) {
	QString _ret = QWidgetAction::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Derived class handler implementation
bool QWidgetAction_Event(QWidgetAction* self, QEvent* param1) {
	auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self);
	if (vqwidgetaction && vqwidgetaction->isVirtualQWidgetAction) {
	return vqwidgetaction->event(param1);
	} else {
	return self->QWidgetAction::event(param1);
}
}

// Base class handler implementation
bool QWidgetAction_QBaseEvent(QWidgetAction* self, QEvent* param1) {
	auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self);
	if (vqwidgetaction && vqwidgetaction->isVirtualQWidgetAction) {
vqwidgetaction->setQWidgetAction_Event_IsBase(true);
	return vqwidgetaction->event(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QWidgetAction_OnEvent(QWidgetAction* self, intptr_t slot) {
	auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self);
	if (vqwidgetaction && vqwidgetaction->isVirtualQWidgetAction) {
vqwidgetaction->setQWidgetAction_Event_Callback(reinterpret_cast<VirtualQWidgetAction::QWidgetAction_Event_Callback>(slot));
}
}

// Derived class handler implementation
bool QWidgetAction_EventFilter(QWidgetAction* self, QObject* param1, QEvent* param2) {
	auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self);
	if (vqwidgetaction && vqwidgetaction->isVirtualQWidgetAction) {
	return vqwidgetaction->eventFilter(param1, param2);
	} else {
	return self->QWidgetAction::eventFilter(param1, param2);
}
}

// Base class handler implementation
bool QWidgetAction_QBaseEventFilter(QWidgetAction* self, QObject* param1, QEvent* param2) {
	auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self);
	if (vqwidgetaction && vqwidgetaction->isVirtualQWidgetAction) {
vqwidgetaction->setQWidgetAction_EventFilter_IsBase(true);
	return vqwidgetaction->eventFilter(param1, param2);
}
}

// Auxiliary method to allow providing re-implementation
void QWidgetAction_OnEventFilter(QWidgetAction* self, intptr_t slot) {
	auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self);
	if (vqwidgetaction && vqwidgetaction->isVirtualQWidgetAction) {
vqwidgetaction->setQWidgetAction_EventFilter_Callback(reinterpret_cast<VirtualQWidgetAction::QWidgetAction_EventFilter_Callback>(slot));
}
}

// Derived class handler implementation
QWidget* QWidgetAction_CreateWidget(QWidgetAction* self, QWidget* parent) {
	auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self);
	if (vqwidgetaction && vqwidgetaction->isVirtualQWidgetAction) {
	return vqwidgetaction->createWidget(parent);
	} else {
	return self->QWidgetAction::createWidget(parent);
}
}

// Base class handler implementation
QWidget* QWidgetAction_QBaseCreateWidget(QWidgetAction* self, QWidget* parent) {
	auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self);
	if (vqwidgetaction && vqwidgetaction->isVirtualQWidgetAction) {
vqwidgetaction->setQWidgetAction_CreateWidget_IsBase(true);
	return vqwidgetaction->createWidget(parent);
}
}

// Auxiliary method to allow providing re-implementation
void QWidgetAction_OnCreateWidget(QWidgetAction* self, intptr_t slot) {
	auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self);
	if (vqwidgetaction && vqwidgetaction->isVirtualQWidgetAction) {
vqwidgetaction->setQWidgetAction_CreateWidget_Callback(reinterpret_cast<VirtualQWidgetAction::QWidgetAction_CreateWidget_Callback>(slot));
}
}

// Derived class handler implementation
void QWidgetAction_DeleteWidget(QWidgetAction* self, QWidget* widget) {
	auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self);
	if (vqwidgetaction && vqwidgetaction->isVirtualQWidgetAction) {
	vqwidgetaction->deleteWidget(widget);
	} else {
	self->QWidgetAction::deleteWidget(widget);
}
}

// Base class handler implementation
void QWidgetAction_QBaseDeleteWidget(QWidgetAction* self, QWidget* widget) {
	auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self);
	if (vqwidgetaction && vqwidgetaction->isVirtualQWidgetAction) {
vqwidgetaction->setQWidgetAction_DeleteWidget_IsBase(true);
	vqwidgetaction->deleteWidget(widget);
}
}

// Auxiliary method to allow providing re-implementation
void QWidgetAction_OnDeleteWidget(QWidgetAction* self, intptr_t slot) {
	auto* vqwidgetaction = dynamic_cast<VirtualQWidgetAction*>(self);
	if (vqwidgetaction && vqwidgetaction->isVirtualQWidgetAction) {
vqwidgetaction->setQWidgetAction_DeleteWidget_Callback(reinterpret_cast<VirtualQWidgetAction::QWidgetAction_DeleteWidget_Callback>(slot));
}
}

// Derived class handler implementation
libqt_list QWidgetAction_CreatedWidgets(const QWidgetAction* self) {
	auto* vqwidgetaction = dynamic_cast<const VirtualQWidgetAction*>(self);
	if (vqwidgetaction && vqwidgetaction->isVirtualQWidgetAction) {
	return vqwidgetaction->createdWidgets();
	} else {
	return self->QWidgetAction::createdWidgets();
}
}

// Base class handler implementation
libqt_list QWidgetAction_QBaseCreatedWidgets(const QWidgetAction* self) {
	auto* vqwidgetaction = dynamic_cast<const VirtualQWidgetAction*>(self);
	if (vqwidgetaction && vqwidgetaction->isVirtualQWidgetAction) {
vqwidgetaction->setQWidgetAction_CreatedWidgets_IsBase(true);
	return vqwidgetaction->createdWidgets();
}
}

// Auxiliary method to allow providing re-implementation
void QWidgetAction_OnCreatedWidgets(const QWidgetAction* self, intptr_t slot) {
	auto* vqwidgetaction = dynamic_cast<const VirtualQWidgetAction*>(self);
	if (vqwidgetaction && vqwidgetaction->isVirtualQWidgetAction) {
vqwidgetaction->setQWidgetAction_CreatedWidgets_Callback(reinterpret_cast<VirtualQWidgetAction::QWidgetAction_CreatedWidgets_Callback>(slot));
}
}

void QWidgetAction_Delete(QWidgetAction* self) {
    delete self;
}

