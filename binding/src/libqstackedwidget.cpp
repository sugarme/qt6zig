#include <QEvent>
#include <QFrame>
#include <QStackedWidget>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QWidget>
#include <qstackedwidget.h>
#include "libqstackedwidget.h"
#include "libqstackedwidget.hxx"

QStackedWidget* QStackedWidget_new(QWidget* parent) {
	 return new VirtualQStackedWidget(parent);
}

QStackedWidget* QStackedWidget_new2() {
	 return new VirtualQStackedWidget();
}

libqt_string QStackedWidget_Tr(const char* s) {
	QString _ret = QStackedWidget::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QStackedWidget_AddWidget(QStackedWidget* self, QWidget* w) {
	return self->addWidget(w);
}

int QStackedWidget_InsertWidget(QStackedWidget* self, int index, QWidget* w) {
	return self->insertWidget(index, w);
}

void QStackedWidget_RemoveWidget(QStackedWidget* self, QWidget* w) {
	self->removeWidget(w);
}

QWidget* QStackedWidget_CurrentWidget(const QStackedWidget* self) {
	return self->currentWidget();
}

int QStackedWidget_CurrentIndex(const QStackedWidget* self) {
	return self->currentIndex();
}

int QStackedWidget_IndexOf(const QStackedWidget* self, const QWidget* param1) {
	return self->indexOf(param1);
}

QWidget* QStackedWidget_Widget(const QStackedWidget* self, int param1) {
	return self->widget(param1);
}

int QStackedWidget_Count(const QStackedWidget* self) {
	return self->count();
}

void QStackedWidget_SetCurrentIndex(QStackedWidget* self, int index) {
	self->setCurrentIndex(index);
}

void QStackedWidget_SetCurrentWidget(QStackedWidget* self, QWidget* w) {
	self->setCurrentWidget(w);
}

void QStackedWidget_CurrentChanged(QStackedWidget* self, int param1) {
	self->currentChanged(param1);
}

void QStackedWidget_Connect_CurrentChanged(QStackedWidget* self, intptr_t slot) {
    void (*slotFunc)(QStackedWidget*, int) = reinterpret_cast<void (*)(QStackedWidget*, int)>(slot);
    QStackedWidget::connect(self, &QStackedWidget::currentChanged, [self, slotFunc](int param1) {
	slotFunc(self, param1);
    });
}

void QStackedWidget_WidgetRemoved(QStackedWidget* self, int index) {
	self->widgetRemoved(index);
}

void QStackedWidget_Connect_WidgetRemoved(QStackedWidget* self, intptr_t slot) {
    void (*slotFunc)(QStackedWidget*, int) = reinterpret_cast<void (*)(QStackedWidget*, int)>(slot);
    QStackedWidget::connect(self, &QStackedWidget::widgetRemoved, [self, slotFunc](int index) {
	slotFunc(self, index);
    });
}

libqt_string QStackedWidget_Tr2(const char* s, const char* c) {
	QString _ret = QStackedWidget::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QStackedWidget_Tr3(const char* s, const char* c, int n) {
	QString _ret = QStackedWidget::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Derived class handler implementation
bool QStackedWidget_Event(QStackedWidget* self, QEvent* e) {
	auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
	if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
	return vqstackedwidget->event(e);
	} else {
	return self->QStackedWidget::event(e);
}
}

// Base class handler implementation
bool QStackedWidget_QBaseEvent(QStackedWidget* self, QEvent* e) {
	auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
	if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
vqstackedwidget->setQStackedWidget_Event_IsBase(true);
	return vqstackedwidget->event(e);
}
}

// Auxiliary method to allow providing re-implementation
void QStackedWidget_OnEvent(QStackedWidget* self, intptr_t slot) {
	auto* vqstackedwidget = dynamic_cast<VirtualQStackedWidget*>(self);
	if (vqstackedwidget && vqstackedwidget->isVirtualQStackedWidget) {
vqstackedwidget->setQStackedWidget_Event_Callback(reinterpret_cast<VirtualQStackedWidget::QStackedWidget_Event_Callback>(slot));
}
}

void QStackedWidget_Delete(QStackedWidget* self) {
    delete self;
}

