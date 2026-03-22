#include <QBoxLayout>
#include <QHBoxLayout>
#include <QLayout>
#include <QLayoutItem>
#include <QRect>
#include <QSize>
#include <QSpacerItem>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QVBoxLayout>
#include <QWidget>
#include <qboxlayout.h>
#include "libqboxlayout.h"
#include "libqboxlayout.hxx"

QBoxLayout* QBoxLayout_new(int param1) {
	 return new VirtualQBoxLayout(static_cast<QBoxLayout::Direction>(param1));
}

QBoxLayout* QBoxLayout_new2(int param1, QWidget* parent) {
	 return new VirtualQBoxLayout(static_cast<QBoxLayout::Direction>(param1), parent);
}

libqt_string QBoxLayout_Tr(const char* s) {
	QString _ret = QBoxLayout::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QBoxLayout_Direction(const QBoxLayout* self) {
	return self->direction();
}

void QBoxLayout_SetDirection(QBoxLayout* self, int direction) {
	self->setDirection(static_cast<QBoxLayout::Direction>(direction));
}

void QBoxLayout_AddSpacing(QBoxLayout* self, int size) {
	self->addSpacing(size);
}

void QBoxLayout_AddStretch(QBoxLayout* self) {
	self->addStretch();
}

void QBoxLayout_AddSpacerItem(QBoxLayout* self, QSpacerItem* spacerItem) {
	self->addSpacerItem(spacerItem);
}

void QBoxLayout_AddWidget(QBoxLayout* self, QWidget* param1) {
	self->addWidget(param1);
}

void QBoxLayout_AddLayout(QBoxLayout* self, QLayout* layout) {
	self->addLayout(layout);
}

void QBoxLayout_AddStrut(QBoxLayout* self, int param1) {
	self->addStrut(param1);
}

void QBoxLayout_AddItem(QBoxLayout* self, QLayoutItem* param1) {
	self->addItem(param1);
}

void QBoxLayout_InsertSpacing(QBoxLayout* self, int index, int size) {
	self->insertSpacing(index, size);
}

void QBoxLayout_InsertStretch(QBoxLayout* self, int index) {
	self->insertStretch(index);
}

void QBoxLayout_InsertSpacerItem(QBoxLayout* self, int index, QSpacerItem* spacerItem) {
	self->insertSpacerItem(index, spacerItem);
}

void QBoxLayout_InsertWidget(QBoxLayout* self, int index, QWidget* widget) {
	self->insertWidget(index, widget);
}

void QBoxLayout_InsertLayout(QBoxLayout* self, int index, QLayout* layout) {
	self->insertLayout(index, layout);
}

void QBoxLayout_InsertItem(QBoxLayout* self, int index, QLayoutItem* param2) {
	self->insertItem(index, param2);
}

int QBoxLayout_Spacing(const QBoxLayout* self) {
	return self->spacing();
}

void QBoxLayout_SetSpacing(QBoxLayout* self, int spacing) {
	self->setSpacing(spacing);
}

bool QBoxLayout_SetStretchFactor(QBoxLayout* self, QWidget* w, int stretch) {
	return self->setStretchFactor(w, stretch);
}

bool QBoxLayout_SetStretchFactor2(QBoxLayout* self, QLayout* l, int stretch) {
	return self->setStretchFactor(l, stretch);
}

void QBoxLayout_SetStretch(QBoxLayout* self, int index, int stretch) {
	self->setStretch(index, stretch);
}

int QBoxLayout_Stretch(const QBoxLayout* self, int index) {
	return self->stretch(index);
}

QSize* QBoxLayout_SizeHint(const QBoxLayout* self) {
	return new QSize(self->sizeHint());
}

QSize* QBoxLayout_MinimumSize(const QBoxLayout* self) {
	return new QSize(self->minimumSize());
}

QSize* QBoxLayout_MaximumSize(const QBoxLayout* self) {
	return new QSize(self->maximumSize());
}

bool QBoxLayout_HasHeightForWidth(const QBoxLayout* self) {
	return self->hasHeightForWidth();
}

int QBoxLayout_HeightForWidth(const QBoxLayout* self, int param1) {
	return self->heightForWidth(param1);
}

int QBoxLayout_MinimumHeightForWidth(const QBoxLayout* self, int param1) {
	return self->minimumHeightForWidth(param1);
}

int QBoxLayout_ExpandingDirections(const QBoxLayout* self) {
	return self->expandingDirections();
}

void QBoxLayout_Invalidate(QBoxLayout* self) {
	self->invalidate();
}

QLayoutItem* QBoxLayout_ItemAt(const QBoxLayout* self, int param1) {
	return self->itemAt(param1);
}

QLayoutItem* QBoxLayout_TakeAt(QBoxLayout* self, int param1) {
	return self->takeAt(param1);
}

int QBoxLayout_Count(const QBoxLayout* self) {
	return self->count();
}

void QBoxLayout_SetGeometry(QBoxLayout* self, const QRect* geometry) {
	self->setGeometry(*geometry);
}

libqt_string QBoxLayout_Tr2(const char* s, const char* c) {
	QString _ret = QBoxLayout::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QBoxLayout_Tr3(const char* s, const char* c, int n) {
	QString _ret = QBoxLayout::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QBoxLayout_AddStretch1(QBoxLayout* self, int stretch) {
	self->addStretch(stretch);
}

void QBoxLayout_AddWidget2(QBoxLayout* self, QWidget* param1, int stretch) {
	self->addWidget(param1, stretch);
}

void QBoxLayout_AddWidget3(QBoxLayout* self, QWidget* param1, int stretch, int alignment) {
	self->addWidget(param1, stretch, static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}

void QBoxLayout_AddLayout2(QBoxLayout* self, QLayout* layout, int stretch) {
	self->addLayout(layout, stretch);
}

void QBoxLayout_InsertStretch2(QBoxLayout* self, int index, int stretch) {
	self->insertStretch(index, stretch);
}

void QBoxLayout_InsertWidget3(QBoxLayout* self, int index, QWidget* widget, int stretch) {
	self->insertWidget(index, widget, stretch);
}

void QBoxLayout_InsertWidget4(QBoxLayout* self, int index, QWidget* widget, int stretch, int alignment) {
	self->insertWidget(index, widget, stretch, static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}

void QBoxLayout_InsertLayout3(QBoxLayout* self, int index, QLayout* layout, int stretch) {
	self->insertLayout(index, layout, stretch);
}

// Base class handler implementation
void QBoxLayout_QBaseAddItem(QBoxLayout* self, QLayoutItem* param1) {
	auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
	if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
vqboxlayout->setQBoxLayout_AddItem_IsBase(true);
	vqboxlayout->addItem(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnAddItem(QBoxLayout* self, intptr_t slot) {
	auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
	if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
vqboxlayout->setQBoxLayout_AddItem_Callback(reinterpret_cast<VirtualQBoxLayout::QBoxLayout_AddItem_Callback>(slot));
}
}

// Base class handler implementation
int QBoxLayout_QBaseSpacing(const QBoxLayout* self) {
	auto* vqboxlayout = dynamic_cast<const VirtualQBoxLayout*>(self);
	if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
vqboxlayout->setQBoxLayout_Spacing_IsBase(true);
	return vqboxlayout->spacing();
}
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnSpacing(const QBoxLayout* self, intptr_t slot) {
	auto* vqboxlayout = dynamic_cast<const VirtualQBoxLayout*>(self);
	if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
vqboxlayout->setQBoxLayout_Spacing_Callback(reinterpret_cast<VirtualQBoxLayout::QBoxLayout_Spacing_Callback>(slot));
}
}

// Base class handler implementation
void QBoxLayout_QBaseSetSpacing(QBoxLayout* self, int spacing) {
	auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
	if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
vqboxlayout->setQBoxLayout_SetSpacing_IsBase(true);
	vqboxlayout->setSpacing(spacing);
}
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnSetSpacing(QBoxLayout* self, intptr_t slot) {
	auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
	if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
vqboxlayout->setQBoxLayout_SetSpacing_Callback(reinterpret_cast<VirtualQBoxLayout::QBoxLayout_SetSpacing_Callback>(slot));
}
}

// Base class handler implementation
QSize* QBoxLayout_QBaseSizeHint(const QBoxLayout* self) {
	auto* vqboxlayout = dynamic_cast<const VirtualQBoxLayout*>(self);
	if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
vqboxlayout->setQBoxLayout_SizeHint_IsBase(true);
	return new QSize(vqboxlayout->sizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnSizeHint(const QBoxLayout* self, intptr_t slot) {
	auto* vqboxlayout = dynamic_cast<const VirtualQBoxLayout*>(self);
	if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
vqboxlayout->setQBoxLayout_SizeHint_Callback(reinterpret_cast<VirtualQBoxLayout::QBoxLayout_SizeHint_Callback>(slot));
}
}

// Base class handler implementation
QSize* QBoxLayout_QBaseMinimumSize(const QBoxLayout* self) {
	auto* vqboxlayout = dynamic_cast<const VirtualQBoxLayout*>(self);
	if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
vqboxlayout->setQBoxLayout_MinimumSize_IsBase(true);
	return new QSize(vqboxlayout->minimumSize());
}
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnMinimumSize(const QBoxLayout* self, intptr_t slot) {
	auto* vqboxlayout = dynamic_cast<const VirtualQBoxLayout*>(self);
	if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
vqboxlayout->setQBoxLayout_MinimumSize_Callback(reinterpret_cast<VirtualQBoxLayout::QBoxLayout_MinimumSize_Callback>(slot));
}
}

// Base class handler implementation
QSize* QBoxLayout_QBaseMaximumSize(const QBoxLayout* self) {
	auto* vqboxlayout = dynamic_cast<const VirtualQBoxLayout*>(self);
	if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
vqboxlayout->setQBoxLayout_MaximumSize_IsBase(true);
	return new QSize(vqboxlayout->maximumSize());
}
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnMaximumSize(const QBoxLayout* self, intptr_t slot) {
	auto* vqboxlayout = dynamic_cast<const VirtualQBoxLayout*>(self);
	if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
vqboxlayout->setQBoxLayout_MaximumSize_Callback(reinterpret_cast<VirtualQBoxLayout::QBoxLayout_MaximumSize_Callback>(slot));
}
}

// Base class handler implementation
bool QBoxLayout_QBaseHasHeightForWidth(const QBoxLayout* self) {
	auto* vqboxlayout = dynamic_cast<const VirtualQBoxLayout*>(self);
	if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
vqboxlayout->setQBoxLayout_HasHeightForWidth_IsBase(true);
	return vqboxlayout->hasHeightForWidth();
}
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnHasHeightForWidth(const QBoxLayout* self, intptr_t slot) {
	auto* vqboxlayout = dynamic_cast<const VirtualQBoxLayout*>(self);
	if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
vqboxlayout->setQBoxLayout_HasHeightForWidth_Callback(reinterpret_cast<VirtualQBoxLayout::QBoxLayout_HasHeightForWidth_Callback>(slot));
}
}

// Base class handler implementation
int QBoxLayout_QBaseHeightForWidth(const QBoxLayout* self, int param1) {
	auto* vqboxlayout = dynamic_cast<const VirtualQBoxLayout*>(self);
	if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
vqboxlayout->setQBoxLayout_HeightForWidth_IsBase(true);
	return vqboxlayout->heightForWidth(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnHeightForWidth(const QBoxLayout* self, intptr_t slot) {
	auto* vqboxlayout = dynamic_cast<const VirtualQBoxLayout*>(self);
	if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
vqboxlayout->setQBoxLayout_HeightForWidth_Callback(reinterpret_cast<VirtualQBoxLayout::QBoxLayout_HeightForWidth_Callback>(slot));
}
}

// Base class handler implementation
int QBoxLayout_QBaseMinimumHeightForWidth(const QBoxLayout* self, int param1) {
	auto* vqboxlayout = dynamic_cast<const VirtualQBoxLayout*>(self);
	if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
vqboxlayout->setQBoxLayout_MinimumHeightForWidth_IsBase(true);
	return vqboxlayout->minimumHeightForWidth(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnMinimumHeightForWidth(const QBoxLayout* self, intptr_t slot) {
	auto* vqboxlayout = dynamic_cast<const VirtualQBoxLayout*>(self);
	if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
vqboxlayout->setQBoxLayout_MinimumHeightForWidth_Callback(reinterpret_cast<VirtualQBoxLayout::QBoxLayout_MinimumHeightForWidth_Callback>(slot));
}
}

// Base class handler implementation
int QBoxLayout_QBaseExpandingDirections(const QBoxLayout* self) {
	auto* vqboxlayout = dynamic_cast<const VirtualQBoxLayout*>(self);
	if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
vqboxlayout->setQBoxLayout_ExpandingDirections_IsBase(true);
	return vqboxlayout->expandingDirections();
}
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnExpandingDirections(const QBoxLayout* self, intptr_t slot) {
	auto* vqboxlayout = dynamic_cast<const VirtualQBoxLayout*>(self);
	if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
vqboxlayout->setQBoxLayout_ExpandingDirections_Callback(reinterpret_cast<VirtualQBoxLayout::QBoxLayout_ExpandingDirections_Callback>(slot));
}
}

// Base class handler implementation
void QBoxLayout_QBaseInvalidate(QBoxLayout* self) {
	auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
	if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
vqboxlayout->setQBoxLayout_Invalidate_IsBase(true);
	vqboxlayout->invalidate();
}
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnInvalidate(QBoxLayout* self, intptr_t slot) {
	auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
	if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
vqboxlayout->setQBoxLayout_Invalidate_Callback(reinterpret_cast<VirtualQBoxLayout::QBoxLayout_Invalidate_Callback>(slot));
}
}

// Base class handler implementation
QLayoutItem* QBoxLayout_QBaseItemAt(const QBoxLayout* self, int param1) {
	auto* vqboxlayout = dynamic_cast<const VirtualQBoxLayout*>(self);
	if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
vqboxlayout->setQBoxLayout_ItemAt_IsBase(true);
	return vqboxlayout->itemAt(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnItemAt(const QBoxLayout* self, intptr_t slot) {
	auto* vqboxlayout = dynamic_cast<const VirtualQBoxLayout*>(self);
	if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
vqboxlayout->setQBoxLayout_ItemAt_Callback(reinterpret_cast<VirtualQBoxLayout::QBoxLayout_ItemAt_Callback>(slot));
}
}

// Base class handler implementation
QLayoutItem* QBoxLayout_QBaseTakeAt(QBoxLayout* self, int param1) {
	auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
	if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
vqboxlayout->setQBoxLayout_TakeAt_IsBase(true);
	return vqboxlayout->takeAt(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnTakeAt(QBoxLayout* self, intptr_t slot) {
	auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
	if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
vqboxlayout->setQBoxLayout_TakeAt_Callback(reinterpret_cast<VirtualQBoxLayout::QBoxLayout_TakeAt_Callback>(slot));
}
}

// Base class handler implementation
int QBoxLayout_QBaseCount(const QBoxLayout* self) {
	auto* vqboxlayout = dynamic_cast<const VirtualQBoxLayout*>(self);
	if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
vqboxlayout->setQBoxLayout_Count_IsBase(true);
	return vqboxlayout->count();
}
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnCount(const QBoxLayout* self, intptr_t slot) {
	auto* vqboxlayout = dynamic_cast<const VirtualQBoxLayout*>(self);
	if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
vqboxlayout->setQBoxLayout_Count_Callback(reinterpret_cast<VirtualQBoxLayout::QBoxLayout_Count_Callback>(slot));
}
}

// Base class handler implementation
void QBoxLayout_QBaseSetGeometry(QBoxLayout* self, const QRect* geometry) {
	auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
	if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
vqboxlayout->setQBoxLayout_SetGeometry_IsBase(true);
	vqboxlayout->setGeometry(*geometry);
}
}

// Auxiliary method to allow providing re-implementation
void QBoxLayout_OnSetGeometry(QBoxLayout* self, intptr_t slot) {
	auto* vqboxlayout = dynamic_cast<VirtualQBoxLayout*>(self);
	if (vqboxlayout && vqboxlayout->isVirtualQBoxLayout) {
vqboxlayout->setQBoxLayout_SetGeometry_Callback(reinterpret_cast<VirtualQBoxLayout::QBoxLayout_SetGeometry_Callback>(slot));
}
}

void QBoxLayout_Delete(QBoxLayout* self) {
    delete self;
}

QHBoxLayout* QHBoxLayout_new(QWidget* parent) {
	 return new QHBoxLayout(parent);
}

QHBoxLayout* QHBoxLayout_new2() {
	 return new QHBoxLayout();
}

libqt_string QHBoxLayout_Tr(const char* s) {
	QString _ret = QHBoxLayout::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QHBoxLayout_Tr2(const char* s, const char* c) {
	QString _ret = QHBoxLayout::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QHBoxLayout_Tr3(const char* s, const char* c, int n) {
	QString _ret = QHBoxLayout::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QHBoxLayout_Delete(QHBoxLayout* self) {
    delete self;
}

QVBoxLayout* QVBoxLayout_new(QWidget* parent) {
	 return new QVBoxLayout(parent);
}

QVBoxLayout* QVBoxLayout_new2() {
	 return new QVBoxLayout();
}

libqt_string QVBoxLayout_Tr(const char* s) {
	QString _ret = QVBoxLayout::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QVBoxLayout_Tr2(const char* s, const char* c) {
	QString _ret = QVBoxLayout::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QVBoxLayout_Tr3(const char* s, const char* c, int n) {
	QString _ret = QVBoxLayout::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QVBoxLayout_Delete(QVBoxLayout* self) {
    delete self;
}

