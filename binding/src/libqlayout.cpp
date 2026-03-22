#include <QChildEvent>
#include <QEvent>
#include <QLayout>
#include <QLayoutItem>
#include <QMargins>
#include <QObject>
#include <QRect>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QWidget>
#include <qlayout.h>
#include "libqlayout.h"
#include "libqlayout.hxx"

QLayout* QLayout_new(QWidget* parent) {
	 return new VirtualQLayout(parent);
}

QLayout* QLayout_new2() {
	 return new VirtualQLayout();
}

libqt_string QLayout_Tr(const char* s) {
	QString _ret = QLayout::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

int QLayout_Spacing(const QLayout* self) {
	return self->spacing();
}

void QLayout_SetSpacing(QLayout* self, int spacing) {
	self->setSpacing(spacing);
}

void QLayout_SetContentsMargins(QLayout* self, int left, int top, int right, int bottom) {
	self->setContentsMargins(left, top, right, bottom);
}

void QLayout_SetContentsMargins2(QLayout* self, const QMargins* margins) {
	self->setContentsMargins(*margins);
}

void QLayout_UnsetContentsMargins(QLayout* self) {
	self->unsetContentsMargins();
}

void QLayout_GetContentsMargins(const QLayout* self, int* left, int* top, int* right, int* bottom) {
	self->getContentsMargins(left, top, right, bottom);
}

QMargins* QLayout_ContentsMargins(const QLayout* self) {
	return new QMargins(self->contentsMargins());
}

QRect* QLayout_ContentsRect(const QLayout* self) {
	return new QRect(self->contentsRect());
}

bool QLayout_SetAlignment(QLayout* self, QWidget* w, int alignment) {
	return self->setAlignment(w, static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}

bool QLayout_SetAlignment2(QLayout* self, QLayout* l, int alignment) {
	return self->setAlignment(l, static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}

void QLayout_SetSizeConstraint(QLayout* self, int sizeConstraint) {
	self->setSizeConstraint(static_cast<QLayout::SizeConstraint>(sizeConstraint));
}

int QLayout_SizeConstraint(const QLayout* self) {
	return self->sizeConstraint();
}

void QLayout_SetMenuBar(QLayout* self, QWidget* w) {
	self->setMenuBar(w);
}

QWidget* QLayout_MenuBar(const QLayout* self) {
	return self->menuBar();
}

QWidget* QLayout_ParentWidget(const QLayout* self) {
	return self->parentWidget();
}

void QLayout_Invalidate(QLayout* self) {
	self->invalidate();
}

QRect* QLayout_Geometry(const QLayout* self) {
	return new QRect(self->geometry());
}

bool QLayout_Activate(QLayout* self) {
	return self->activate();
}

void QLayout_Update(QLayout* self) {
	self->update();
}

void QLayout_AddWidget(QLayout* self, QWidget* w) {
	self->addWidget(w);
}

void QLayout_AddItem(QLayout* self, QLayoutItem* param1) {
	self->addItem(param1);
}

void QLayout_RemoveWidget(QLayout* self, QWidget* w) {
	self->removeWidget(w);
}

void QLayout_RemoveItem(QLayout* self, QLayoutItem* param1) {
	self->removeItem(param1);
}

int QLayout_ExpandingDirections(const QLayout* self) {
	return self->expandingDirections();
}

QSize* QLayout_MinimumSize(const QLayout* self) {
	return new QSize(self->minimumSize());
}

QSize* QLayout_MaximumSize(const QLayout* self) {
	return new QSize(self->maximumSize());
}

void QLayout_SetGeometry(QLayout* self, const QRect* geometry) {
	self->setGeometry(*geometry);
}

QLayoutItem* QLayout_ItemAt(const QLayout* self, int index) {
	return self->itemAt(index);
}

QLayoutItem* QLayout_TakeAt(QLayout* self, int index) {
	return self->takeAt(index);
}

int QLayout_IndexOf(const QLayout* self, const QWidget* param1) {
	return self->indexOf(param1);
}

int QLayout_IndexOf2(const QLayout* self, const QLayoutItem* param1) {
	return self->indexOf(param1);
}

int QLayout_Count(const QLayout* self) {
	return self->count();
}

bool QLayout_IsEmpty(const QLayout* self) {
	return self->isEmpty();
}

int QLayout_ControlTypes(const QLayout* self) {
	return self->controlTypes();
}

QLayoutItem* QLayout_ReplaceWidget(QLayout* self, QWidget* from, QWidget* to, int options) {
	return self->replaceWidget(from, to, static_cast<QFlags<Qt::FindChildOption>>(options));
}

int QLayout_TotalMinimumHeightForWidth(const QLayout* self, int w) {
	return self->totalMinimumHeightForWidth(w);
}

int QLayout_TotalHeightForWidth(const QLayout* self, int w) {
	return self->totalHeightForWidth(w);
}

QSize* QLayout_TotalMinimumSize(const QLayout* self) {
	return new QSize(self->totalMinimumSize());
}

QSize* QLayout_TotalMaximumSize(const QLayout* self) {
	return new QSize(self->totalMaximumSize());
}

QSize* QLayout_TotalSizeHint(const QLayout* self) {
	return new QSize(self->totalSizeHint());
}

QLayout* QLayout_Layout(QLayout* self) {
	return self->layout();
}

void QLayout_SetEnabled(QLayout* self, bool enabled) {
	self->setEnabled(enabled);
}

bool QLayout_IsEnabled(const QLayout* self) {
	return self->isEnabled();
}

QSize* QLayout_ClosestAcceptableSize(const QWidget* w, const QSize* s) {
	return new QSize(QLayout::closestAcceptableSize(w, *s));
}

libqt_string QLayout_Tr2(const char* s, const char* c) {
	QString _ret = QLayout::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QLayout_Tr3(const char* s, const char* c, int n) {
	QString _ret = QLayout::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
int QLayout_QBaseSpacing(const QLayout* self) {
	auto* vqlayout = dynamic_cast<const VirtualQLayout*>(self);
	if (vqlayout && vqlayout->isVirtualQLayout) {
vqlayout->setQLayout_Spacing_IsBase(true);
	return vqlayout->spacing();
}
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnSpacing(const QLayout* self, intptr_t slot) {
	auto* vqlayout = dynamic_cast<const VirtualQLayout*>(self);
	if (vqlayout && vqlayout->isVirtualQLayout) {
vqlayout->setQLayout_Spacing_Callback(reinterpret_cast<VirtualQLayout::QLayout_Spacing_Callback>(slot));
}
}

// Base class handler implementation
void QLayout_QBaseSetSpacing(QLayout* self, int spacing) {
	auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
	if (vqlayout && vqlayout->isVirtualQLayout) {
vqlayout->setQLayout_SetSpacing_IsBase(true);
	vqlayout->setSpacing(spacing);
}
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnSetSpacing(QLayout* self, intptr_t slot) {
	auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
	if (vqlayout && vqlayout->isVirtualQLayout) {
vqlayout->setQLayout_SetSpacing_Callback(reinterpret_cast<VirtualQLayout::QLayout_SetSpacing_Callback>(slot));
}
}

// Base class handler implementation
void QLayout_QBaseInvalidate(QLayout* self) {
	auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
	if (vqlayout && vqlayout->isVirtualQLayout) {
vqlayout->setQLayout_Invalidate_IsBase(true);
	vqlayout->invalidate();
}
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnInvalidate(QLayout* self, intptr_t slot) {
	auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
	if (vqlayout && vqlayout->isVirtualQLayout) {
vqlayout->setQLayout_Invalidate_Callback(reinterpret_cast<VirtualQLayout::QLayout_Invalidate_Callback>(slot));
}
}

// Base class handler implementation
QRect* QLayout_QBaseGeometry(const QLayout* self) {
	auto* vqlayout = dynamic_cast<const VirtualQLayout*>(self);
	if (vqlayout && vqlayout->isVirtualQLayout) {
vqlayout->setQLayout_Geometry_IsBase(true);
	return new QRect(vqlayout->geometry());
}
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnGeometry(const QLayout* self, intptr_t slot) {
	auto* vqlayout = dynamic_cast<const VirtualQLayout*>(self);
	if (vqlayout && vqlayout->isVirtualQLayout) {
vqlayout->setQLayout_Geometry_Callback(reinterpret_cast<VirtualQLayout::QLayout_Geometry_Callback>(slot));
}
}

// Base class handler implementation
void QLayout_QBaseAddItem(QLayout* self, QLayoutItem* param1) {
	auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
	if (vqlayout && vqlayout->isVirtualQLayout) {
vqlayout->setQLayout_AddItem_IsBase(true);
	vqlayout->addItem(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnAddItem(QLayout* self, intptr_t slot) {
	auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
	if (vqlayout && vqlayout->isVirtualQLayout) {
vqlayout->setQLayout_AddItem_Callback(reinterpret_cast<VirtualQLayout::QLayout_AddItem_Callback>(slot));
}
}

// Base class handler implementation
int QLayout_QBaseExpandingDirections(const QLayout* self) {
	auto* vqlayout = dynamic_cast<const VirtualQLayout*>(self);
	if (vqlayout && vqlayout->isVirtualQLayout) {
vqlayout->setQLayout_ExpandingDirections_IsBase(true);
	return vqlayout->expandingDirections();
}
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnExpandingDirections(const QLayout* self, intptr_t slot) {
	auto* vqlayout = dynamic_cast<const VirtualQLayout*>(self);
	if (vqlayout && vqlayout->isVirtualQLayout) {
vqlayout->setQLayout_ExpandingDirections_Callback(reinterpret_cast<VirtualQLayout::QLayout_ExpandingDirections_Callback>(slot));
}
}

// Base class handler implementation
QSize* QLayout_QBaseMinimumSize(const QLayout* self) {
	auto* vqlayout = dynamic_cast<const VirtualQLayout*>(self);
	if (vqlayout && vqlayout->isVirtualQLayout) {
vqlayout->setQLayout_MinimumSize_IsBase(true);
	return new QSize(vqlayout->minimumSize());
}
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnMinimumSize(const QLayout* self, intptr_t slot) {
	auto* vqlayout = dynamic_cast<const VirtualQLayout*>(self);
	if (vqlayout && vqlayout->isVirtualQLayout) {
vqlayout->setQLayout_MinimumSize_Callback(reinterpret_cast<VirtualQLayout::QLayout_MinimumSize_Callback>(slot));
}
}

// Base class handler implementation
QSize* QLayout_QBaseMaximumSize(const QLayout* self) {
	auto* vqlayout = dynamic_cast<const VirtualQLayout*>(self);
	if (vqlayout && vqlayout->isVirtualQLayout) {
vqlayout->setQLayout_MaximumSize_IsBase(true);
	return new QSize(vqlayout->maximumSize());
}
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnMaximumSize(const QLayout* self, intptr_t slot) {
	auto* vqlayout = dynamic_cast<const VirtualQLayout*>(self);
	if (vqlayout && vqlayout->isVirtualQLayout) {
vqlayout->setQLayout_MaximumSize_Callback(reinterpret_cast<VirtualQLayout::QLayout_MaximumSize_Callback>(slot));
}
}

// Base class handler implementation
void QLayout_QBaseSetGeometry(QLayout* self, const QRect* geometry) {
	auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
	if (vqlayout && vqlayout->isVirtualQLayout) {
vqlayout->setQLayout_SetGeometry_IsBase(true);
	vqlayout->setGeometry(*geometry);
}
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnSetGeometry(QLayout* self, intptr_t slot) {
	auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
	if (vqlayout && vqlayout->isVirtualQLayout) {
vqlayout->setQLayout_SetGeometry_Callback(reinterpret_cast<VirtualQLayout::QLayout_SetGeometry_Callback>(slot));
}
}

// Base class handler implementation
QLayoutItem* QLayout_QBaseItemAt(const QLayout* self, int index) {
	auto* vqlayout = dynamic_cast<const VirtualQLayout*>(self);
	if (vqlayout && vqlayout->isVirtualQLayout) {
vqlayout->setQLayout_ItemAt_IsBase(true);
	return vqlayout->itemAt(index);
}
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnItemAt(const QLayout* self, intptr_t slot) {
	auto* vqlayout = dynamic_cast<const VirtualQLayout*>(self);
	if (vqlayout && vqlayout->isVirtualQLayout) {
vqlayout->setQLayout_ItemAt_Callback(reinterpret_cast<VirtualQLayout::QLayout_ItemAt_Callback>(slot));
}
}

// Base class handler implementation
QLayoutItem* QLayout_QBaseTakeAt(QLayout* self, int index) {
	auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
	if (vqlayout && vqlayout->isVirtualQLayout) {
vqlayout->setQLayout_TakeAt_IsBase(true);
	return vqlayout->takeAt(index);
}
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnTakeAt(QLayout* self, intptr_t slot) {
	auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
	if (vqlayout && vqlayout->isVirtualQLayout) {
vqlayout->setQLayout_TakeAt_Callback(reinterpret_cast<VirtualQLayout::QLayout_TakeAt_Callback>(slot));
}
}

// Base class handler implementation
int QLayout_QBaseIndexOf(const QLayout* self, const QWidget* param1) {
	auto* vqlayout = dynamic_cast<const VirtualQLayout*>(self);
	if (vqlayout && vqlayout->isVirtualQLayout) {
vqlayout->setQLayout_IndexOf_IsBase(true);
	return vqlayout->indexOf(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnIndexOf(const QLayout* self, intptr_t slot) {
	auto* vqlayout = dynamic_cast<const VirtualQLayout*>(self);
	if (vqlayout && vqlayout->isVirtualQLayout) {
vqlayout->setQLayout_IndexOf_Callback(reinterpret_cast<VirtualQLayout::QLayout_IndexOf_Callback>(slot));
}
}

// Base class handler implementation
int QLayout_QBaseIndexOf2(const QLayout* self, const QLayoutItem* param1) {
	auto* vqlayout = dynamic_cast<const VirtualQLayout*>(self);
	if (vqlayout && vqlayout->isVirtualQLayout) {
vqlayout->setQLayout_IndexOf2_IsBase(true);
	return vqlayout->indexOf(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnIndexOf2(const QLayout* self, intptr_t slot) {
	auto* vqlayout = dynamic_cast<const VirtualQLayout*>(self);
	if (vqlayout && vqlayout->isVirtualQLayout) {
vqlayout->setQLayout_IndexOf2_Callback(reinterpret_cast<VirtualQLayout::QLayout_IndexOf2_Callback>(slot));
}
}

// Base class handler implementation
int QLayout_QBaseCount(const QLayout* self) {
	auto* vqlayout = dynamic_cast<const VirtualQLayout*>(self);
	if (vqlayout && vqlayout->isVirtualQLayout) {
vqlayout->setQLayout_Count_IsBase(true);
	return vqlayout->count();
}
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnCount(const QLayout* self, intptr_t slot) {
	auto* vqlayout = dynamic_cast<const VirtualQLayout*>(self);
	if (vqlayout && vqlayout->isVirtualQLayout) {
vqlayout->setQLayout_Count_Callback(reinterpret_cast<VirtualQLayout::QLayout_Count_Callback>(slot));
}
}

// Base class handler implementation
bool QLayout_QBaseIsEmpty(const QLayout* self) {
	auto* vqlayout = dynamic_cast<const VirtualQLayout*>(self);
	if (vqlayout && vqlayout->isVirtualQLayout) {
vqlayout->setQLayout_IsEmpty_IsBase(true);
	return vqlayout->isEmpty();
}
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnIsEmpty(const QLayout* self, intptr_t slot) {
	auto* vqlayout = dynamic_cast<const VirtualQLayout*>(self);
	if (vqlayout && vqlayout->isVirtualQLayout) {
vqlayout->setQLayout_IsEmpty_Callback(reinterpret_cast<VirtualQLayout::QLayout_IsEmpty_Callback>(slot));
}
}

// Base class handler implementation
int QLayout_QBaseControlTypes(const QLayout* self) {
	auto* vqlayout = dynamic_cast<const VirtualQLayout*>(self);
	if (vqlayout && vqlayout->isVirtualQLayout) {
vqlayout->setQLayout_ControlTypes_IsBase(true);
	return vqlayout->controlTypes();
}
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnControlTypes(const QLayout* self, intptr_t slot) {
	auto* vqlayout = dynamic_cast<const VirtualQLayout*>(self);
	if (vqlayout && vqlayout->isVirtualQLayout) {
vqlayout->setQLayout_ControlTypes_Callback(reinterpret_cast<VirtualQLayout::QLayout_ControlTypes_Callback>(slot));
}
}

// Base class handler implementation
QLayoutItem* QLayout_QBaseReplaceWidget(QLayout* self, QWidget* from, QWidget* to, int options) {
	auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
	if (vqlayout && vqlayout->isVirtualQLayout) {
vqlayout->setQLayout_ReplaceWidget_IsBase(true);
	return vqlayout->replaceWidget(from, to, static_cast<QFlags<Qt::FindChildOption>>(options));
}
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnReplaceWidget(QLayout* self, intptr_t slot) {
	auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
	if (vqlayout && vqlayout->isVirtualQLayout) {
vqlayout->setQLayout_ReplaceWidget_Callback(reinterpret_cast<VirtualQLayout::QLayout_ReplaceWidget_Callback>(slot));
}
}

// Base class handler implementation
QLayout* QLayout_QBaseLayout(QLayout* self) {
	auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
	if (vqlayout && vqlayout->isVirtualQLayout) {
vqlayout->setQLayout_Layout_IsBase(true);
	return vqlayout->layout();
}
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnLayout(QLayout* self, intptr_t slot) {
	auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
	if (vqlayout && vqlayout->isVirtualQLayout) {
vqlayout->setQLayout_Layout_Callback(reinterpret_cast<VirtualQLayout::QLayout_Layout_Callback>(slot));
}
}

// Derived class handler implementation
void QLayout_ChildEvent(QLayout* self, QChildEvent* e) {
	auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
	if (vqlayout && vqlayout->isVirtualQLayout) {
	vqlayout->childEvent(e);
	} else {
	self->QLayout::childEvent(e);
}
}

// Base class handler implementation
void QLayout_QBaseChildEvent(QLayout* self, QChildEvent* e) {
	auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
	if (vqlayout && vqlayout->isVirtualQLayout) {
vqlayout->setQLayout_ChildEvent_IsBase(true);
	vqlayout->childEvent(e);
}
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnChildEvent(QLayout* self, intptr_t slot) {
	auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
	if (vqlayout && vqlayout->isVirtualQLayout) {
vqlayout->setQLayout_ChildEvent_Callback(reinterpret_cast<VirtualQLayout::QLayout_ChildEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QLayout_WidgetEvent(QLayout* self, QEvent* param1) {
	auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
	if (vqlayout && vqlayout->isVirtualQLayout) {
	vqlayout->widgetEvent(param1);
	} else {
	self->QLayout::widgetEvent(param1);
}
}

// Base class handler implementation
void QLayout_QBaseWidgetEvent(QLayout* self, QEvent* param1) {
	auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
	if (vqlayout && vqlayout->isVirtualQLayout) {
vqlayout->setQLayout_WidgetEvent_IsBase(true);
	vqlayout->widgetEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnWidgetEvent(QLayout* self, intptr_t slot) {
	auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
	if (vqlayout && vqlayout->isVirtualQLayout) {
vqlayout->setQLayout_WidgetEvent_Callback(reinterpret_cast<VirtualQLayout::QLayout_WidgetEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QLayout_AddChildLayout(QLayout* self, QLayout* l) {
	auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
	if (vqlayout && vqlayout->isVirtualQLayout) {
	vqlayout->addChildLayout(l);
	} else {
	self->QLayout::addChildLayout(l);
}
}

// Base class handler implementation
void QLayout_QBaseAddChildLayout(QLayout* self, QLayout* l) {
	auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
	if (vqlayout && vqlayout->isVirtualQLayout) {
vqlayout->setQLayout_AddChildLayout_IsBase(true);
	vqlayout->addChildLayout(l);
}
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnAddChildLayout(QLayout* self, intptr_t slot) {
	auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
	if (vqlayout && vqlayout->isVirtualQLayout) {
vqlayout->setQLayout_AddChildLayout_Callback(reinterpret_cast<VirtualQLayout::QLayout_AddChildLayout_Callback>(slot));
}
}

// Derived class handler implementation
void QLayout_AddChildWidget(QLayout* self, QWidget* w) {
	auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
	if (vqlayout && vqlayout->isVirtualQLayout) {
	vqlayout->addChildWidget(w);
	} else {
	self->QLayout::addChildWidget(w);
}
}

// Base class handler implementation
void QLayout_QBaseAddChildWidget(QLayout* self, QWidget* w) {
	auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
	if (vqlayout && vqlayout->isVirtualQLayout) {
vqlayout->setQLayout_AddChildWidget_IsBase(true);
	vqlayout->addChildWidget(w);
}
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnAddChildWidget(QLayout* self, intptr_t slot) {
	auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
	if (vqlayout && vqlayout->isVirtualQLayout) {
vqlayout->setQLayout_AddChildWidget_Callback(reinterpret_cast<VirtualQLayout::QLayout_AddChildWidget_Callback>(slot));
}
}

// Derived class handler implementation
bool QLayout_AdoptLayout(QLayout* self, QLayout* layout) {
	auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
	if (vqlayout && vqlayout->isVirtualQLayout) {
	return vqlayout->adoptLayout(layout);
	} else {
	return self->QLayout::adoptLayout(layout);
}
}

// Base class handler implementation
bool QLayout_QBaseAdoptLayout(QLayout* self, QLayout* layout) {
	auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
	if (vqlayout && vqlayout->isVirtualQLayout) {
vqlayout->setQLayout_AdoptLayout_IsBase(true);
	return vqlayout->adoptLayout(layout);
}
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnAdoptLayout(QLayout* self, intptr_t slot) {
	auto* vqlayout = dynamic_cast<VirtualQLayout*>(self);
	if (vqlayout && vqlayout->isVirtualQLayout) {
vqlayout->setQLayout_AdoptLayout_Callback(reinterpret_cast<VirtualQLayout::QLayout_AdoptLayout_Callback>(slot));
}
}

// Derived class handler implementation
QRect* QLayout_AlignmentRect(const QLayout* self, const QRect* param1) {
	auto* vqlayout = dynamic_cast<const VirtualQLayout*>(self);
	if (vqlayout && vqlayout->isVirtualQLayout) {
	return new QRect(vqlayout->alignmentRect(*param1));
	} else {
	return new QRect(self->QLayout::alignmentRect(*param1));
}
}

// Base class handler implementation
QRect* QLayout_QBaseAlignmentRect(const QLayout* self, const QRect* param1) {
	auto* vqlayout = dynamic_cast<const VirtualQLayout*>(self);
	if (vqlayout && vqlayout->isVirtualQLayout) {
vqlayout->setQLayout_AlignmentRect_IsBase(true);
	return new QRect(vqlayout->alignmentRect(*param1));
}
}

// Auxiliary method to allow providing re-implementation
void QLayout_OnAlignmentRect(const QLayout* self, intptr_t slot) {
	auto* vqlayout = dynamic_cast<const VirtualQLayout*>(self);
	if (vqlayout && vqlayout->isVirtualQLayout) {
vqlayout->setQLayout_AlignmentRect_Callback(reinterpret_cast<VirtualQLayout::QLayout_AlignmentRect_Callback>(slot));
}
}

void QLayout_Delete(QLayout* self) {
    delete self;
}

