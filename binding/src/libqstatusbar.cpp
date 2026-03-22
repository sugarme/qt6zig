#include <QEvent>
#include <QPaintEvent>
#include <QResizeEvent>
#include <QShowEvent>
#include <QStatusBar>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <qstatusbar.h>
#include "libqstatusbar.h"
#include "libqstatusbar.hxx"

QStatusBar* QStatusBar_new(QWidget* parent) {
	 return new VirtualQStatusBar(parent);
}

QStatusBar* QStatusBar_new2() {
	 return new VirtualQStatusBar();
}

libqt_string QStatusBar_Tr(const char* s) {
	QString _ret = QStatusBar::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QStatusBar_AddWidget(QStatusBar* self, QWidget* widget) {
	self->addWidget(widget);
}

int QStatusBar_InsertWidget(QStatusBar* self, int index, QWidget* widget) {
	return self->insertWidget(index, widget);
}

void QStatusBar_AddPermanentWidget(QStatusBar* self, QWidget* widget) {
	self->addPermanentWidget(widget);
}

int QStatusBar_InsertPermanentWidget(QStatusBar* self, int index, QWidget* widget) {
	return self->insertPermanentWidget(index, widget);
}

void QStatusBar_RemoveWidget(QStatusBar* self, QWidget* widget) {
	self->removeWidget(widget);
}

void QStatusBar_SetSizeGripEnabled(QStatusBar* self, bool sizeGripEnabled) {
	self->setSizeGripEnabled(sizeGripEnabled);
}

bool QStatusBar_IsSizeGripEnabled(const QStatusBar* self) {
	return self->isSizeGripEnabled();
}

libqt_string QStatusBar_CurrentMessage(const QStatusBar* self) {
	QString _ret = self->currentMessage();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QStatusBar_ShowMessage(QStatusBar* self, const libqt_string text) {
	self->showMessage(QString::fromUtf8(text.data, text.len));
}

void QStatusBar_ClearMessage(QStatusBar* self) {
	self->clearMessage();
}

void QStatusBar_MessageChanged(QStatusBar* self, const libqt_string text) {
	self->messageChanged(QString::fromUtf8(text.data, text.len));
}

void QStatusBar_Connect_MessageChanged(QStatusBar* self, intptr_t slot) {
    void (*slotFunc)(QStatusBar*, const char*) = reinterpret_cast<void (*)(QStatusBar*, const char*)>(slot);
    QStatusBar::connect(self, &QStatusBar::messageChanged, [self, slotFunc](const QString& text) {
	slotFunc(self, text);
    });
}

libqt_string QStatusBar_Tr2(const char* s, const char* c) {
	QString _ret = QStatusBar::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QStatusBar_Tr3(const char* s, const char* c, int n) {
	QString _ret = QStatusBar::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QStatusBar_AddWidget2(QStatusBar* self, QWidget* widget, int stretch) {
	self->addWidget(widget, stretch);
}

int QStatusBar_InsertWidget3(QStatusBar* self, int index, QWidget* widget, int stretch) {
	return self->insertWidget(index, widget, stretch);
}

void QStatusBar_AddPermanentWidget2(QStatusBar* self, QWidget* widget, int stretch) {
	self->addPermanentWidget(widget, stretch);
}

int QStatusBar_InsertPermanentWidget3(QStatusBar* self, int index, QWidget* widget, int stretch) {
	return self->insertPermanentWidget(index, widget, stretch);
}

void QStatusBar_ShowMessage2(QStatusBar* self, const libqt_string text, int timeout) {
	self->showMessage(QString::fromUtf8(text.data, text.len), timeout);
}

// Derived class handler implementation
void QStatusBar_ShowEvent(QStatusBar* self, QShowEvent* param1) {
	auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
	if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
	vqstatusbar->showEvent(param1);
	} else {
	self->QStatusBar::showEvent(param1);
}
}

// Base class handler implementation
void QStatusBar_QBaseShowEvent(QStatusBar* self, QShowEvent* param1) {
	auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
	if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
vqstatusbar->setQStatusBar_ShowEvent_IsBase(true);
	vqstatusbar->showEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnShowEvent(QStatusBar* self, intptr_t slot) {
	auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
	if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
vqstatusbar->setQStatusBar_ShowEvent_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_ShowEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QStatusBar_PaintEvent(QStatusBar* self, QPaintEvent* param1) {
	auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
	if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
	vqstatusbar->paintEvent(param1);
	} else {
	self->QStatusBar::paintEvent(param1);
}
}

// Base class handler implementation
void QStatusBar_QBasePaintEvent(QStatusBar* self, QPaintEvent* param1) {
	auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
	if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
vqstatusbar->setQStatusBar_PaintEvent_IsBase(true);
	vqstatusbar->paintEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnPaintEvent(QStatusBar* self, intptr_t slot) {
	auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
	if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
vqstatusbar->setQStatusBar_PaintEvent_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_PaintEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QStatusBar_ResizeEvent(QStatusBar* self, QResizeEvent* param1) {
	auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
	if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
	vqstatusbar->resizeEvent(param1);
	} else {
	self->QStatusBar::resizeEvent(param1);
}
}

// Base class handler implementation
void QStatusBar_QBaseResizeEvent(QStatusBar* self, QResizeEvent* param1) {
	auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
	if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
vqstatusbar->setQStatusBar_ResizeEvent_IsBase(true);
	vqstatusbar->resizeEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnResizeEvent(QStatusBar* self, intptr_t slot) {
	auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
	if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
vqstatusbar->setQStatusBar_ResizeEvent_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_ResizeEvent_Callback>(slot));
}
}

// Derived class handler implementation
bool QStatusBar_Event(QStatusBar* self, QEvent* param1) {
	auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
	if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
	return vqstatusbar->event(param1);
	} else {
	return self->QStatusBar::event(param1);
}
}

// Base class handler implementation
bool QStatusBar_QBaseEvent(QStatusBar* self, QEvent* param1) {
	auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
	if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
vqstatusbar->setQStatusBar_Event_IsBase(true);
	return vqstatusbar->event(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnEvent(QStatusBar* self, intptr_t slot) {
	auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
	if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
vqstatusbar->setQStatusBar_Event_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_Event_Callback>(slot));
}
}

// Derived class handler implementation
void QStatusBar_Reformat(QStatusBar* self) {
	auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
	if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
	vqstatusbar->reformat();
	} else {
	self->QStatusBar::reformat();
}
}

// Base class handler implementation
void QStatusBar_QBaseReformat(QStatusBar* self) {
	auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
	if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
vqstatusbar->setQStatusBar_Reformat_IsBase(true);
	vqstatusbar->reformat();
}
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnReformat(QStatusBar* self, intptr_t slot) {
	auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
	if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
vqstatusbar->setQStatusBar_Reformat_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_Reformat_Callback>(slot));
}
}

// Derived class handler implementation
void QStatusBar_HideOrShow(QStatusBar* self) {
	auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
	if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
	vqstatusbar->hideOrShow();
	} else {
	self->QStatusBar::hideOrShow();
}
}

// Base class handler implementation
void QStatusBar_QBaseHideOrShow(QStatusBar* self) {
	auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
	if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
vqstatusbar->setQStatusBar_HideOrShow_IsBase(true);
	vqstatusbar->hideOrShow();
}
}

// Auxiliary method to allow providing re-implementation
void QStatusBar_OnHideOrShow(QStatusBar* self, intptr_t slot) {
	auto* vqstatusbar = dynamic_cast<VirtualQStatusBar*>(self);
	if (vqstatusbar && vqstatusbar->isVirtualQStatusBar) {
vqstatusbar->setQStatusBar_HideOrShow_Callback(reinterpret_cast<VirtualQStatusBar::QStatusBar_HideOrShow_Callback>(slot));
}
}

void QStatusBar_Delete(QStatusBar* self) {
    delete self;
}

