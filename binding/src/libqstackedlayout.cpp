#include <QLayout>
#include <QLayoutItem>
#include <QRect>
#include <QSize>
#include <QStackedLayout>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <qstackedlayout.h>
#include "libqstackedlayout.h"
#include "libqstackedlayout.hxx"

QStackedLayout* QStackedLayout_new(QWidget* parent) {
	 return new VirtualQStackedLayout(parent);
}

QStackedLayout* QStackedLayout_new2() {
	 return new VirtualQStackedLayout();
}

QStackedLayout* QStackedLayout_new3(QLayout* parentLayout) {
	 return new VirtualQStackedLayout(parentLayout);
}

libqt_string QStackedLayout_Tr(const char* s) {
	QString _ret = QStackedLayout::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QStackedLayout_AddWidget(QStackedLayout* self, QWidget* w) {
	return self->addWidget(w);
}

int QStackedLayout_InsertWidget(QStackedLayout* self, int index, QWidget* w) {
	return self->insertWidget(index, w);
}

QWidget* QStackedLayout_CurrentWidget(const QStackedLayout* self) {
	return self->currentWidget();
}

int QStackedLayout_CurrentIndex(const QStackedLayout* self) {
	return self->currentIndex();
}

QWidget* QStackedLayout_Widget(const QStackedLayout* self, int param1) {
	return self->widget(param1);
}

int QStackedLayout_Count(const QStackedLayout* self) {
	return self->count();
}

int QStackedLayout_StackingMode(const QStackedLayout* self) {
	return self->stackingMode();
}

void QStackedLayout_SetStackingMode(QStackedLayout* self, int stackingMode) {
	self->setStackingMode(static_cast<QStackedLayout::StackingMode>(stackingMode));
}

void QStackedLayout_AddItem(QStackedLayout* self, QLayoutItem* item) {
	self->addItem(item);
}

QSize* QStackedLayout_SizeHint(const QStackedLayout* self) {
	return new QSize(self->sizeHint());
}

QSize* QStackedLayout_MinimumSize(const QStackedLayout* self) {
	return new QSize(self->minimumSize());
}

QLayoutItem* QStackedLayout_ItemAt(const QStackedLayout* self, int param1) {
	return self->itemAt(param1);
}

QLayoutItem* QStackedLayout_TakeAt(QStackedLayout* self, int param1) {
	return self->takeAt(param1);
}

void QStackedLayout_SetGeometry(QStackedLayout* self, const QRect* rect) {
	self->setGeometry(*rect);
}

bool QStackedLayout_HasHeightForWidth(const QStackedLayout* self) {
	return self->hasHeightForWidth();
}

int QStackedLayout_HeightForWidth(const QStackedLayout* self, int width) {
	return self->heightForWidth(width);
}

void QStackedLayout_WidgetRemoved(QStackedLayout* self, int index) {
	self->widgetRemoved(index);
}

void QStackedLayout_Connect_WidgetRemoved(QStackedLayout* self, intptr_t slot) {
    void (*slotFunc)(QStackedLayout*, int) = reinterpret_cast<void (*)(QStackedLayout*, int)>(slot);
    QStackedLayout::connect(self, &QStackedLayout::widgetRemoved, [self, slotFunc](int index) {
	slotFunc(self, index);
    });
}

void QStackedLayout_CurrentChanged(QStackedLayout* self, int index) {
	self->currentChanged(index);
}

void QStackedLayout_Connect_CurrentChanged(QStackedLayout* self, intptr_t slot) {
    void (*slotFunc)(QStackedLayout*, int) = reinterpret_cast<void (*)(QStackedLayout*, int)>(slot);
    QStackedLayout::connect(self, &QStackedLayout::currentChanged, [self, slotFunc](int index) {
	slotFunc(self, index);
    });
}

void QStackedLayout_SetCurrentIndex(QStackedLayout* self, int index) {
	self->setCurrentIndex(index);
}

void QStackedLayout_SetCurrentWidget(QStackedLayout* self, QWidget* w) {
	self->setCurrentWidget(w);
}

libqt_string QStackedLayout_Tr2(const char* s, const char* c) {
	QString _ret = QStackedLayout::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QStackedLayout_Tr3(const char* s, const char* c, int n) {
	QString _ret = QStackedLayout::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
int QStackedLayout_QBaseCount(const QStackedLayout* self) {
	auto* vqstackedlayout = dynamic_cast<const VirtualQStackedLayout*>(self);
	if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
vqstackedlayout->setQStackedLayout_Count_IsBase(true);
	return vqstackedlayout->count();
}
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnCount(const QStackedLayout* self, intptr_t slot) {
	auto* vqstackedlayout = dynamic_cast<const VirtualQStackedLayout*>(self);
	if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
vqstackedlayout->setQStackedLayout_Count_Callback(reinterpret_cast<VirtualQStackedLayout::QStackedLayout_Count_Callback>(slot));
}
}

// Base class handler implementation
void QStackedLayout_QBaseAddItem(QStackedLayout* self, QLayoutItem* item) {
	auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
	if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
vqstackedlayout->setQStackedLayout_AddItem_IsBase(true);
	vqstackedlayout->addItem(item);
}
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnAddItem(QStackedLayout* self, intptr_t slot) {
	auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
	if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
vqstackedlayout->setQStackedLayout_AddItem_Callback(reinterpret_cast<VirtualQStackedLayout::QStackedLayout_AddItem_Callback>(slot));
}
}

// Base class handler implementation
QSize* QStackedLayout_QBaseSizeHint(const QStackedLayout* self) {
	auto* vqstackedlayout = dynamic_cast<const VirtualQStackedLayout*>(self);
	if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
vqstackedlayout->setQStackedLayout_SizeHint_IsBase(true);
	return new QSize(vqstackedlayout->sizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnSizeHint(const QStackedLayout* self, intptr_t slot) {
	auto* vqstackedlayout = dynamic_cast<const VirtualQStackedLayout*>(self);
	if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
vqstackedlayout->setQStackedLayout_SizeHint_Callback(reinterpret_cast<VirtualQStackedLayout::QStackedLayout_SizeHint_Callback>(slot));
}
}

// Base class handler implementation
QSize* QStackedLayout_QBaseMinimumSize(const QStackedLayout* self) {
	auto* vqstackedlayout = dynamic_cast<const VirtualQStackedLayout*>(self);
	if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
vqstackedlayout->setQStackedLayout_MinimumSize_IsBase(true);
	return new QSize(vqstackedlayout->minimumSize());
}
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnMinimumSize(const QStackedLayout* self, intptr_t slot) {
	auto* vqstackedlayout = dynamic_cast<const VirtualQStackedLayout*>(self);
	if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
vqstackedlayout->setQStackedLayout_MinimumSize_Callback(reinterpret_cast<VirtualQStackedLayout::QStackedLayout_MinimumSize_Callback>(slot));
}
}

// Base class handler implementation
QLayoutItem* QStackedLayout_QBaseItemAt(const QStackedLayout* self, int param1) {
	auto* vqstackedlayout = dynamic_cast<const VirtualQStackedLayout*>(self);
	if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
vqstackedlayout->setQStackedLayout_ItemAt_IsBase(true);
	return vqstackedlayout->itemAt(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnItemAt(const QStackedLayout* self, intptr_t slot) {
	auto* vqstackedlayout = dynamic_cast<const VirtualQStackedLayout*>(self);
	if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
vqstackedlayout->setQStackedLayout_ItemAt_Callback(reinterpret_cast<VirtualQStackedLayout::QStackedLayout_ItemAt_Callback>(slot));
}
}

// Base class handler implementation
QLayoutItem* QStackedLayout_QBaseTakeAt(QStackedLayout* self, int param1) {
	auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
	if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
vqstackedlayout->setQStackedLayout_TakeAt_IsBase(true);
	return vqstackedlayout->takeAt(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnTakeAt(QStackedLayout* self, intptr_t slot) {
	auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
	if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
vqstackedlayout->setQStackedLayout_TakeAt_Callback(reinterpret_cast<VirtualQStackedLayout::QStackedLayout_TakeAt_Callback>(slot));
}
}

// Base class handler implementation
void QStackedLayout_QBaseSetGeometry(QStackedLayout* self, const QRect* rect) {
	auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
	if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
vqstackedlayout->setQStackedLayout_SetGeometry_IsBase(true);
	vqstackedlayout->setGeometry(*rect);
}
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnSetGeometry(QStackedLayout* self, intptr_t slot) {
	auto* vqstackedlayout = dynamic_cast<VirtualQStackedLayout*>(self);
	if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
vqstackedlayout->setQStackedLayout_SetGeometry_Callback(reinterpret_cast<VirtualQStackedLayout::QStackedLayout_SetGeometry_Callback>(slot));
}
}

// Base class handler implementation
bool QStackedLayout_QBaseHasHeightForWidth(const QStackedLayout* self) {
	auto* vqstackedlayout = dynamic_cast<const VirtualQStackedLayout*>(self);
	if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
vqstackedlayout->setQStackedLayout_HasHeightForWidth_IsBase(true);
	return vqstackedlayout->hasHeightForWidth();
}
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnHasHeightForWidth(const QStackedLayout* self, intptr_t slot) {
	auto* vqstackedlayout = dynamic_cast<const VirtualQStackedLayout*>(self);
	if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
vqstackedlayout->setQStackedLayout_HasHeightForWidth_Callback(reinterpret_cast<VirtualQStackedLayout::QStackedLayout_HasHeightForWidth_Callback>(slot));
}
}

// Base class handler implementation
int QStackedLayout_QBaseHeightForWidth(const QStackedLayout* self, int width) {
	auto* vqstackedlayout = dynamic_cast<const VirtualQStackedLayout*>(self);
	if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
vqstackedlayout->setQStackedLayout_HeightForWidth_IsBase(true);
	return vqstackedlayout->heightForWidth(width);
}
}

// Auxiliary method to allow providing re-implementation
void QStackedLayout_OnHeightForWidth(const QStackedLayout* self, intptr_t slot) {
	auto* vqstackedlayout = dynamic_cast<const VirtualQStackedLayout*>(self);
	if (vqstackedlayout && vqstackedlayout->isVirtualQStackedLayout) {
vqstackedlayout->setQStackedLayout_HeightForWidth_Callback(reinterpret_cast<VirtualQStackedLayout::QStackedLayout_HeightForWidth_Callback>(slot));
}
}

void QStackedLayout_Delete(QStackedLayout* self) {
    delete self;
}

