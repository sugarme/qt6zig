#include <QLayout>
#include <QLayoutItem>
#include <QRect>
#include <QSize>
#include <QSizePolicy>
#include <QSpacerItem>
#include <QWidget>
#include <QWidgetItem>
#include <QWidgetItemV2>
#include <qlayoutitem.h>
#include "libqlayoutitem.h"
#include "libqlayoutitem.hxx"

QLayoutItem* QLayoutItem_new() {
	 return new VirtualQLayoutItem();
}

QLayoutItem* QLayoutItem_new2(const QLayoutItem* param1) {
	 return new VirtualQLayoutItem(*param1);
}

QLayoutItem* QLayoutItem_new3(int alignment) {
	 return new VirtualQLayoutItem(static_cast<QFlags<Qt::AlignmentFlag>>(alignment));
}

QSize* QLayoutItem_SizeHint(const QLayoutItem* self) {
	return new QSize(self->sizeHint());
}

QSize* QLayoutItem_MinimumSize(const QLayoutItem* self) {
	return new QSize(self->minimumSize());
}

QSize* QLayoutItem_MaximumSize(const QLayoutItem* self) {
	return new QSize(self->maximumSize());
}

int QLayoutItem_ExpandingDirections(const QLayoutItem* self) {
	return self->expandingDirections();
}

void QLayoutItem_SetGeometry(QLayoutItem* self, const QRect* geometry) {
	self->setGeometry(*geometry);
}

QRect* QLayoutItem_Geometry(const QLayoutItem* self) {
	return new QRect(self->geometry());
}

bool QLayoutItem_IsEmpty(const QLayoutItem* self) {
	return self->isEmpty();
}

bool QLayoutItem_HasHeightForWidth(const QLayoutItem* self) {
	return self->hasHeightForWidth();
}

int QLayoutItem_HeightForWidth(const QLayoutItem* self, int param1) {
	return self->heightForWidth(param1);
}

int QLayoutItem_MinimumHeightForWidth(const QLayoutItem* self, int param1) {
	return self->minimumHeightForWidth(param1);
}

void QLayoutItem_Invalidate(QLayoutItem* self) {
	self->invalidate();
}

QWidget* QLayoutItem_Widget(const QLayoutItem* self) {
	return self->widget();
}

QLayout* QLayoutItem_Layout(QLayoutItem* self) {
	return self->layout();
}

QSpacerItem* QLayoutItem_SpacerItem(QLayoutItem* self) {
	return self->spacerItem();
}

int QLayoutItem_Alignment(const QLayoutItem* self) {
	return self->alignment();
}

void QLayoutItem_SetAlignment(QLayoutItem* self, int a) {
	self->setAlignment(static_cast<QFlags<Qt::AlignmentFlag>>(a));
}

int QLayoutItem_ControlTypes(const QLayoutItem* self) {
	return self->controlTypes();
}

// Base class handler implementation
QSize* QLayoutItem_QBaseSizeHint(const QLayoutItem* self) {
	auto* vqlayoutitem = dynamic_cast<const VirtualQLayoutItem*>(self);
	if (vqlayoutitem && vqlayoutitem->isVirtualQLayoutItem) {
vqlayoutitem->setQLayoutItem_SizeHint_IsBase(true);
	return new QSize(vqlayoutitem->sizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QLayoutItem_OnSizeHint(const QLayoutItem* self, intptr_t slot) {
	auto* vqlayoutitem = dynamic_cast<const VirtualQLayoutItem*>(self);
	if (vqlayoutitem && vqlayoutitem->isVirtualQLayoutItem) {
vqlayoutitem->setQLayoutItem_SizeHint_Callback(reinterpret_cast<VirtualQLayoutItem::QLayoutItem_SizeHint_Callback>(slot));
}
}

// Base class handler implementation
QSize* QLayoutItem_QBaseMinimumSize(const QLayoutItem* self) {
	auto* vqlayoutitem = dynamic_cast<const VirtualQLayoutItem*>(self);
	if (vqlayoutitem && vqlayoutitem->isVirtualQLayoutItem) {
vqlayoutitem->setQLayoutItem_MinimumSize_IsBase(true);
	return new QSize(vqlayoutitem->minimumSize());
}
}

// Auxiliary method to allow providing re-implementation
void QLayoutItem_OnMinimumSize(const QLayoutItem* self, intptr_t slot) {
	auto* vqlayoutitem = dynamic_cast<const VirtualQLayoutItem*>(self);
	if (vqlayoutitem && vqlayoutitem->isVirtualQLayoutItem) {
vqlayoutitem->setQLayoutItem_MinimumSize_Callback(reinterpret_cast<VirtualQLayoutItem::QLayoutItem_MinimumSize_Callback>(slot));
}
}

// Base class handler implementation
QSize* QLayoutItem_QBaseMaximumSize(const QLayoutItem* self) {
	auto* vqlayoutitem = dynamic_cast<const VirtualQLayoutItem*>(self);
	if (vqlayoutitem && vqlayoutitem->isVirtualQLayoutItem) {
vqlayoutitem->setQLayoutItem_MaximumSize_IsBase(true);
	return new QSize(vqlayoutitem->maximumSize());
}
}

// Auxiliary method to allow providing re-implementation
void QLayoutItem_OnMaximumSize(const QLayoutItem* self, intptr_t slot) {
	auto* vqlayoutitem = dynamic_cast<const VirtualQLayoutItem*>(self);
	if (vqlayoutitem && vqlayoutitem->isVirtualQLayoutItem) {
vqlayoutitem->setQLayoutItem_MaximumSize_Callback(reinterpret_cast<VirtualQLayoutItem::QLayoutItem_MaximumSize_Callback>(slot));
}
}

// Base class handler implementation
int QLayoutItem_QBaseExpandingDirections(const QLayoutItem* self) {
	auto* vqlayoutitem = dynamic_cast<const VirtualQLayoutItem*>(self);
	if (vqlayoutitem && vqlayoutitem->isVirtualQLayoutItem) {
vqlayoutitem->setQLayoutItem_ExpandingDirections_IsBase(true);
	return vqlayoutitem->expandingDirections();
}
}

// Auxiliary method to allow providing re-implementation
void QLayoutItem_OnExpandingDirections(const QLayoutItem* self, intptr_t slot) {
	auto* vqlayoutitem = dynamic_cast<const VirtualQLayoutItem*>(self);
	if (vqlayoutitem && vqlayoutitem->isVirtualQLayoutItem) {
vqlayoutitem->setQLayoutItem_ExpandingDirections_Callback(reinterpret_cast<VirtualQLayoutItem::QLayoutItem_ExpandingDirections_Callback>(slot));
}
}

// Base class handler implementation
void QLayoutItem_QBaseSetGeometry(QLayoutItem* self, const QRect* geometry) {
	auto* vqlayoutitem = dynamic_cast<VirtualQLayoutItem*>(self);
	if (vqlayoutitem && vqlayoutitem->isVirtualQLayoutItem) {
vqlayoutitem->setQLayoutItem_SetGeometry_IsBase(true);
	vqlayoutitem->setGeometry(*geometry);
}
}

// Auxiliary method to allow providing re-implementation
void QLayoutItem_OnSetGeometry(QLayoutItem* self, intptr_t slot) {
	auto* vqlayoutitem = dynamic_cast<VirtualQLayoutItem*>(self);
	if (vqlayoutitem && vqlayoutitem->isVirtualQLayoutItem) {
vqlayoutitem->setQLayoutItem_SetGeometry_Callback(reinterpret_cast<VirtualQLayoutItem::QLayoutItem_SetGeometry_Callback>(slot));
}
}

// Base class handler implementation
QRect* QLayoutItem_QBaseGeometry(const QLayoutItem* self) {
	auto* vqlayoutitem = dynamic_cast<const VirtualQLayoutItem*>(self);
	if (vqlayoutitem && vqlayoutitem->isVirtualQLayoutItem) {
vqlayoutitem->setQLayoutItem_Geometry_IsBase(true);
	return new QRect(vqlayoutitem->geometry());
}
}

// Auxiliary method to allow providing re-implementation
void QLayoutItem_OnGeometry(const QLayoutItem* self, intptr_t slot) {
	auto* vqlayoutitem = dynamic_cast<const VirtualQLayoutItem*>(self);
	if (vqlayoutitem && vqlayoutitem->isVirtualQLayoutItem) {
vqlayoutitem->setQLayoutItem_Geometry_Callback(reinterpret_cast<VirtualQLayoutItem::QLayoutItem_Geometry_Callback>(slot));
}
}

// Base class handler implementation
bool QLayoutItem_QBaseIsEmpty(const QLayoutItem* self) {
	auto* vqlayoutitem = dynamic_cast<const VirtualQLayoutItem*>(self);
	if (vqlayoutitem && vqlayoutitem->isVirtualQLayoutItem) {
vqlayoutitem->setQLayoutItem_IsEmpty_IsBase(true);
	return vqlayoutitem->isEmpty();
}
}

// Auxiliary method to allow providing re-implementation
void QLayoutItem_OnIsEmpty(const QLayoutItem* self, intptr_t slot) {
	auto* vqlayoutitem = dynamic_cast<const VirtualQLayoutItem*>(self);
	if (vqlayoutitem && vqlayoutitem->isVirtualQLayoutItem) {
vqlayoutitem->setQLayoutItem_IsEmpty_Callback(reinterpret_cast<VirtualQLayoutItem::QLayoutItem_IsEmpty_Callback>(slot));
}
}

// Base class handler implementation
bool QLayoutItem_QBaseHasHeightForWidth(const QLayoutItem* self) {
	auto* vqlayoutitem = dynamic_cast<const VirtualQLayoutItem*>(self);
	if (vqlayoutitem && vqlayoutitem->isVirtualQLayoutItem) {
vqlayoutitem->setQLayoutItem_HasHeightForWidth_IsBase(true);
	return vqlayoutitem->hasHeightForWidth();
}
}

// Auxiliary method to allow providing re-implementation
void QLayoutItem_OnHasHeightForWidth(const QLayoutItem* self, intptr_t slot) {
	auto* vqlayoutitem = dynamic_cast<const VirtualQLayoutItem*>(self);
	if (vqlayoutitem && vqlayoutitem->isVirtualQLayoutItem) {
vqlayoutitem->setQLayoutItem_HasHeightForWidth_Callback(reinterpret_cast<VirtualQLayoutItem::QLayoutItem_HasHeightForWidth_Callback>(slot));
}
}

// Base class handler implementation
int QLayoutItem_QBaseHeightForWidth(const QLayoutItem* self, int param1) {
	auto* vqlayoutitem = dynamic_cast<const VirtualQLayoutItem*>(self);
	if (vqlayoutitem && vqlayoutitem->isVirtualQLayoutItem) {
vqlayoutitem->setQLayoutItem_HeightForWidth_IsBase(true);
	return vqlayoutitem->heightForWidth(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QLayoutItem_OnHeightForWidth(const QLayoutItem* self, intptr_t slot) {
	auto* vqlayoutitem = dynamic_cast<const VirtualQLayoutItem*>(self);
	if (vqlayoutitem && vqlayoutitem->isVirtualQLayoutItem) {
vqlayoutitem->setQLayoutItem_HeightForWidth_Callback(reinterpret_cast<VirtualQLayoutItem::QLayoutItem_HeightForWidth_Callback>(slot));
}
}

// Base class handler implementation
int QLayoutItem_QBaseMinimumHeightForWidth(const QLayoutItem* self, int param1) {
	auto* vqlayoutitem = dynamic_cast<const VirtualQLayoutItem*>(self);
	if (vqlayoutitem && vqlayoutitem->isVirtualQLayoutItem) {
vqlayoutitem->setQLayoutItem_MinimumHeightForWidth_IsBase(true);
	return vqlayoutitem->minimumHeightForWidth(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QLayoutItem_OnMinimumHeightForWidth(const QLayoutItem* self, intptr_t slot) {
	auto* vqlayoutitem = dynamic_cast<const VirtualQLayoutItem*>(self);
	if (vqlayoutitem && vqlayoutitem->isVirtualQLayoutItem) {
vqlayoutitem->setQLayoutItem_MinimumHeightForWidth_Callback(reinterpret_cast<VirtualQLayoutItem::QLayoutItem_MinimumHeightForWidth_Callback>(slot));
}
}

// Base class handler implementation
void QLayoutItem_QBaseInvalidate(QLayoutItem* self) {
	auto* vqlayoutitem = dynamic_cast<VirtualQLayoutItem*>(self);
	if (vqlayoutitem && vqlayoutitem->isVirtualQLayoutItem) {
vqlayoutitem->setQLayoutItem_Invalidate_IsBase(true);
	vqlayoutitem->invalidate();
}
}

// Auxiliary method to allow providing re-implementation
void QLayoutItem_OnInvalidate(QLayoutItem* self, intptr_t slot) {
	auto* vqlayoutitem = dynamic_cast<VirtualQLayoutItem*>(self);
	if (vqlayoutitem && vqlayoutitem->isVirtualQLayoutItem) {
vqlayoutitem->setQLayoutItem_Invalidate_Callback(reinterpret_cast<VirtualQLayoutItem::QLayoutItem_Invalidate_Callback>(slot));
}
}

// Base class handler implementation
QWidget* QLayoutItem_QBaseWidget(const QLayoutItem* self) {
	auto* vqlayoutitem = dynamic_cast<const VirtualQLayoutItem*>(self);
	if (vqlayoutitem && vqlayoutitem->isVirtualQLayoutItem) {
vqlayoutitem->setQLayoutItem_Widget_IsBase(true);
	return vqlayoutitem->widget();
}
}

// Auxiliary method to allow providing re-implementation
void QLayoutItem_OnWidget(const QLayoutItem* self, intptr_t slot) {
	auto* vqlayoutitem = dynamic_cast<const VirtualQLayoutItem*>(self);
	if (vqlayoutitem && vqlayoutitem->isVirtualQLayoutItem) {
vqlayoutitem->setQLayoutItem_Widget_Callback(reinterpret_cast<VirtualQLayoutItem::QLayoutItem_Widget_Callback>(slot));
}
}

// Base class handler implementation
QLayout* QLayoutItem_QBaseLayout(QLayoutItem* self) {
	auto* vqlayoutitem = dynamic_cast<VirtualQLayoutItem*>(self);
	if (vqlayoutitem && vqlayoutitem->isVirtualQLayoutItem) {
vqlayoutitem->setQLayoutItem_Layout_IsBase(true);
	return vqlayoutitem->layout();
}
}

// Auxiliary method to allow providing re-implementation
void QLayoutItem_OnLayout(QLayoutItem* self, intptr_t slot) {
	auto* vqlayoutitem = dynamic_cast<VirtualQLayoutItem*>(self);
	if (vqlayoutitem && vqlayoutitem->isVirtualQLayoutItem) {
vqlayoutitem->setQLayoutItem_Layout_Callback(reinterpret_cast<VirtualQLayoutItem::QLayoutItem_Layout_Callback>(slot));
}
}

// Base class handler implementation
QSpacerItem* QLayoutItem_QBaseSpacerItem(QLayoutItem* self) {
	auto* vqlayoutitem = dynamic_cast<VirtualQLayoutItem*>(self);
	if (vqlayoutitem && vqlayoutitem->isVirtualQLayoutItem) {
vqlayoutitem->setQLayoutItem_SpacerItem_IsBase(true);
	return vqlayoutitem->spacerItem();
}
}

// Auxiliary method to allow providing re-implementation
void QLayoutItem_OnSpacerItem(QLayoutItem* self, intptr_t slot) {
	auto* vqlayoutitem = dynamic_cast<VirtualQLayoutItem*>(self);
	if (vqlayoutitem && vqlayoutitem->isVirtualQLayoutItem) {
vqlayoutitem->setQLayoutItem_SpacerItem_Callback(reinterpret_cast<VirtualQLayoutItem::QLayoutItem_SpacerItem_Callback>(slot));
}
}

// Base class handler implementation
int QLayoutItem_QBaseControlTypes(const QLayoutItem* self) {
	auto* vqlayoutitem = dynamic_cast<const VirtualQLayoutItem*>(self);
	if (vqlayoutitem && vqlayoutitem->isVirtualQLayoutItem) {
vqlayoutitem->setQLayoutItem_ControlTypes_IsBase(true);
	return vqlayoutitem->controlTypes();
}
}

// Auxiliary method to allow providing re-implementation
void QLayoutItem_OnControlTypes(const QLayoutItem* self, intptr_t slot) {
	auto* vqlayoutitem = dynamic_cast<const VirtualQLayoutItem*>(self);
	if (vqlayoutitem && vqlayoutitem->isVirtualQLayoutItem) {
vqlayoutitem->setQLayoutItem_ControlTypes_Callback(reinterpret_cast<VirtualQLayoutItem::QLayoutItem_ControlTypes_Callback>(slot));
}
}

// Derived class handler implementation
void QLayoutItem_OperatorAssign(QLayoutItem* self, const QLayoutItem* param1) {
	auto* vqlayoutitem = dynamic_cast<VirtualQLayoutItem*>(self);
	if (vqlayoutitem && vqlayoutitem->isVirtualQLayoutItem) {
	vqlayoutitem->operator=(*param1);
	} else {
	self->QLayoutItem::operator=(*param1);
}
}

// Base class handler implementation
void QLayoutItem_QBaseOperatorAssign(QLayoutItem* self, const QLayoutItem* param1) {
	auto* vqlayoutitem = dynamic_cast<VirtualQLayoutItem*>(self);
	if (vqlayoutitem && vqlayoutitem->isVirtualQLayoutItem) {
vqlayoutitem->setQLayoutItem_OperatorAssign_IsBase(true);
	vqlayoutitem->operator=(*param1);
}
}

// Auxiliary method to allow providing re-implementation
void QLayoutItem_OnOperatorAssign(QLayoutItem* self, intptr_t slot) {
	auto* vqlayoutitem = dynamic_cast<VirtualQLayoutItem*>(self);
	if (vqlayoutitem && vqlayoutitem->isVirtualQLayoutItem) {
vqlayoutitem->setQLayoutItem_OperatorAssign_Callback(reinterpret_cast<VirtualQLayoutItem::QLayoutItem_OperatorAssign_Callback>(slot));
}
}

void QLayoutItem_Delete(QLayoutItem* self) {
    delete self;
}

QSpacerItem* QSpacerItem_new(int w, int h) {
	 return new VirtualQSpacerItem(w, h);
}

QSpacerItem* QSpacerItem_new2(const QSpacerItem* param1) {
	 return new VirtualQSpacerItem(*param1);
}

QSpacerItem* QSpacerItem_new3(int w, int h, int hData) {
	 return new VirtualQSpacerItem(w, h, static_cast<QSizePolicy::Policy>(hData));
}

QSpacerItem* QSpacerItem_new4(int w, int h, int hData, int vData) {
	 return new VirtualQSpacerItem(w, h, static_cast<QSizePolicy::Policy>(hData), static_cast<QSizePolicy::Policy>(vData));
}

void QSpacerItem_ChangeSize(QSpacerItem* self, int w, int h) {
	self->changeSize(w, h);
}

QSize* QSpacerItem_SizeHint(const QSpacerItem* self) {
	return new QSize(self->sizeHint());
}

QSize* QSpacerItem_MinimumSize(const QSpacerItem* self) {
	return new QSize(self->minimumSize());
}

QSize* QSpacerItem_MaximumSize(const QSpacerItem* self) {
	return new QSize(self->maximumSize());
}

int QSpacerItem_ExpandingDirections(const QSpacerItem* self) {
	return self->expandingDirections();
}

bool QSpacerItem_IsEmpty(const QSpacerItem* self) {
	return self->isEmpty();
}

void QSpacerItem_SetGeometry(QSpacerItem* self, const QRect* geometry) {
	self->setGeometry(*geometry);
}

QRect* QSpacerItem_Geometry(const QSpacerItem* self) {
	return new QRect(self->geometry());
}

QSpacerItem* QSpacerItem_SpacerItem(QSpacerItem* self) {
	return self->spacerItem();
}

QSizePolicy* QSpacerItem_SizePolicy(const QSpacerItem* self) {
	return new QSizePolicy(self->sizePolicy());
}

void QSpacerItem_ChangeSize3(QSpacerItem* self, int w, int h, int hData) {
	self->changeSize(w, h, static_cast<QSizePolicy::Policy>(hData));
}

void QSpacerItem_ChangeSize4(QSpacerItem* self, int w, int h, int hData, int vData) {
	self->changeSize(w, h, static_cast<QSizePolicy::Policy>(hData), static_cast<QSizePolicy::Policy>(vData));
}

// Base class handler implementation
QSize* QSpacerItem_QBaseSizeHint(const QSpacerItem* self) {
	auto* vqspaceritem = dynamic_cast<const VirtualQSpacerItem*>(self);
	if (vqspaceritem && vqspaceritem->isVirtualQSpacerItem) {
vqspaceritem->setQSpacerItem_SizeHint_IsBase(true);
	return new QSize(vqspaceritem->sizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QSpacerItem_OnSizeHint(const QSpacerItem* self, intptr_t slot) {
	auto* vqspaceritem = dynamic_cast<const VirtualQSpacerItem*>(self);
	if (vqspaceritem && vqspaceritem->isVirtualQSpacerItem) {
vqspaceritem->setQSpacerItem_SizeHint_Callback(reinterpret_cast<VirtualQSpacerItem::QSpacerItem_SizeHint_Callback>(slot));
}
}

// Base class handler implementation
QSize* QSpacerItem_QBaseMinimumSize(const QSpacerItem* self) {
	auto* vqspaceritem = dynamic_cast<const VirtualQSpacerItem*>(self);
	if (vqspaceritem && vqspaceritem->isVirtualQSpacerItem) {
vqspaceritem->setQSpacerItem_MinimumSize_IsBase(true);
	return new QSize(vqspaceritem->minimumSize());
}
}

// Auxiliary method to allow providing re-implementation
void QSpacerItem_OnMinimumSize(const QSpacerItem* self, intptr_t slot) {
	auto* vqspaceritem = dynamic_cast<const VirtualQSpacerItem*>(self);
	if (vqspaceritem && vqspaceritem->isVirtualQSpacerItem) {
vqspaceritem->setQSpacerItem_MinimumSize_Callback(reinterpret_cast<VirtualQSpacerItem::QSpacerItem_MinimumSize_Callback>(slot));
}
}

// Base class handler implementation
QSize* QSpacerItem_QBaseMaximumSize(const QSpacerItem* self) {
	auto* vqspaceritem = dynamic_cast<const VirtualQSpacerItem*>(self);
	if (vqspaceritem && vqspaceritem->isVirtualQSpacerItem) {
vqspaceritem->setQSpacerItem_MaximumSize_IsBase(true);
	return new QSize(vqspaceritem->maximumSize());
}
}

// Auxiliary method to allow providing re-implementation
void QSpacerItem_OnMaximumSize(const QSpacerItem* self, intptr_t slot) {
	auto* vqspaceritem = dynamic_cast<const VirtualQSpacerItem*>(self);
	if (vqspaceritem && vqspaceritem->isVirtualQSpacerItem) {
vqspaceritem->setQSpacerItem_MaximumSize_Callback(reinterpret_cast<VirtualQSpacerItem::QSpacerItem_MaximumSize_Callback>(slot));
}
}

// Base class handler implementation
int QSpacerItem_QBaseExpandingDirections(const QSpacerItem* self) {
	auto* vqspaceritem = dynamic_cast<const VirtualQSpacerItem*>(self);
	if (vqspaceritem && vqspaceritem->isVirtualQSpacerItem) {
vqspaceritem->setQSpacerItem_ExpandingDirections_IsBase(true);
	return vqspaceritem->expandingDirections();
}
}

// Auxiliary method to allow providing re-implementation
void QSpacerItem_OnExpandingDirections(const QSpacerItem* self, intptr_t slot) {
	auto* vqspaceritem = dynamic_cast<const VirtualQSpacerItem*>(self);
	if (vqspaceritem && vqspaceritem->isVirtualQSpacerItem) {
vqspaceritem->setQSpacerItem_ExpandingDirections_Callback(reinterpret_cast<VirtualQSpacerItem::QSpacerItem_ExpandingDirections_Callback>(slot));
}
}

// Base class handler implementation
bool QSpacerItem_QBaseIsEmpty(const QSpacerItem* self) {
	auto* vqspaceritem = dynamic_cast<const VirtualQSpacerItem*>(self);
	if (vqspaceritem && vqspaceritem->isVirtualQSpacerItem) {
vqspaceritem->setQSpacerItem_IsEmpty_IsBase(true);
	return vqspaceritem->isEmpty();
}
}

// Auxiliary method to allow providing re-implementation
void QSpacerItem_OnIsEmpty(const QSpacerItem* self, intptr_t slot) {
	auto* vqspaceritem = dynamic_cast<const VirtualQSpacerItem*>(self);
	if (vqspaceritem && vqspaceritem->isVirtualQSpacerItem) {
vqspaceritem->setQSpacerItem_IsEmpty_Callback(reinterpret_cast<VirtualQSpacerItem::QSpacerItem_IsEmpty_Callback>(slot));
}
}

// Base class handler implementation
void QSpacerItem_QBaseSetGeometry(QSpacerItem* self, const QRect* geometry) {
	auto* vqspaceritem = dynamic_cast<VirtualQSpacerItem*>(self);
	if (vqspaceritem && vqspaceritem->isVirtualQSpacerItem) {
vqspaceritem->setQSpacerItem_SetGeometry_IsBase(true);
	vqspaceritem->setGeometry(*geometry);
}
}

// Auxiliary method to allow providing re-implementation
void QSpacerItem_OnSetGeometry(QSpacerItem* self, intptr_t slot) {
	auto* vqspaceritem = dynamic_cast<VirtualQSpacerItem*>(self);
	if (vqspaceritem && vqspaceritem->isVirtualQSpacerItem) {
vqspaceritem->setQSpacerItem_SetGeometry_Callback(reinterpret_cast<VirtualQSpacerItem::QSpacerItem_SetGeometry_Callback>(slot));
}
}

// Base class handler implementation
QRect* QSpacerItem_QBaseGeometry(const QSpacerItem* self) {
	auto* vqspaceritem = dynamic_cast<const VirtualQSpacerItem*>(self);
	if (vqspaceritem && vqspaceritem->isVirtualQSpacerItem) {
vqspaceritem->setQSpacerItem_Geometry_IsBase(true);
	return new QRect(vqspaceritem->geometry());
}
}

// Auxiliary method to allow providing re-implementation
void QSpacerItem_OnGeometry(const QSpacerItem* self, intptr_t slot) {
	auto* vqspaceritem = dynamic_cast<const VirtualQSpacerItem*>(self);
	if (vqspaceritem && vqspaceritem->isVirtualQSpacerItem) {
vqspaceritem->setQSpacerItem_Geometry_Callback(reinterpret_cast<VirtualQSpacerItem::QSpacerItem_Geometry_Callback>(slot));
}
}

// Base class handler implementation
QSpacerItem* QSpacerItem_QBaseSpacerItem(QSpacerItem* self) {
	auto* vqspaceritem = dynamic_cast<VirtualQSpacerItem*>(self);
	if (vqspaceritem && vqspaceritem->isVirtualQSpacerItem) {
vqspaceritem->setQSpacerItem_SpacerItem_IsBase(true);
	return vqspaceritem->spacerItem();
}
}

// Auxiliary method to allow providing re-implementation
void QSpacerItem_OnSpacerItem(QSpacerItem* self, intptr_t slot) {
	auto* vqspaceritem = dynamic_cast<VirtualQSpacerItem*>(self);
	if (vqspaceritem && vqspaceritem->isVirtualQSpacerItem) {
vqspaceritem->setQSpacerItem_SpacerItem_Callback(reinterpret_cast<VirtualQSpacerItem::QSpacerItem_SpacerItem_Callback>(slot));
}
}

void QSpacerItem_Delete(QSpacerItem* self) {
    delete self;
}

QWidgetItem* QWidgetItem_new(QWidget* w) {
	 return new VirtualQWidgetItem(w);
}

QSize* QWidgetItem_SizeHint(const QWidgetItem* self) {
	return new QSize(self->sizeHint());
}

QSize* QWidgetItem_MinimumSize(const QWidgetItem* self) {
	return new QSize(self->minimumSize());
}

QSize* QWidgetItem_MaximumSize(const QWidgetItem* self) {
	return new QSize(self->maximumSize());
}

int QWidgetItem_ExpandingDirections(const QWidgetItem* self) {
	return self->expandingDirections();
}

bool QWidgetItem_IsEmpty(const QWidgetItem* self) {
	return self->isEmpty();
}

void QWidgetItem_SetGeometry(QWidgetItem* self, const QRect* geometry) {
	self->setGeometry(*geometry);
}

QRect* QWidgetItem_Geometry(const QWidgetItem* self) {
	return new QRect(self->geometry());
}

QWidget* QWidgetItem_Widget(const QWidgetItem* self) {
	return self->widget();
}

bool QWidgetItem_HasHeightForWidth(const QWidgetItem* self) {
	return self->hasHeightForWidth();
}

int QWidgetItem_HeightForWidth(const QWidgetItem* self, int param1) {
	return self->heightForWidth(param1);
}

int QWidgetItem_MinimumHeightForWidth(const QWidgetItem* self, int param1) {
	return self->minimumHeightForWidth(param1);
}

int QWidgetItem_ControlTypes(const QWidgetItem* self) {
	return self->controlTypes();
}

// Base class handler implementation
QSize* QWidgetItem_QBaseSizeHint(const QWidgetItem* self) {
	auto* vqwidgetitem = dynamic_cast<const VirtualQWidgetItem*>(self);
	if (vqwidgetitem && vqwidgetitem->isVirtualQWidgetItem) {
vqwidgetitem->setQWidgetItem_SizeHint_IsBase(true);
	return new QSize(vqwidgetitem->sizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QWidgetItem_OnSizeHint(const QWidgetItem* self, intptr_t slot) {
	auto* vqwidgetitem = dynamic_cast<const VirtualQWidgetItem*>(self);
	if (vqwidgetitem && vqwidgetitem->isVirtualQWidgetItem) {
vqwidgetitem->setQWidgetItem_SizeHint_Callback(reinterpret_cast<VirtualQWidgetItem::QWidgetItem_SizeHint_Callback>(slot));
}
}

// Base class handler implementation
QSize* QWidgetItem_QBaseMinimumSize(const QWidgetItem* self) {
	auto* vqwidgetitem = dynamic_cast<const VirtualQWidgetItem*>(self);
	if (vqwidgetitem && vqwidgetitem->isVirtualQWidgetItem) {
vqwidgetitem->setQWidgetItem_MinimumSize_IsBase(true);
	return new QSize(vqwidgetitem->minimumSize());
}
}

// Auxiliary method to allow providing re-implementation
void QWidgetItem_OnMinimumSize(const QWidgetItem* self, intptr_t slot) {
	auto* vqwidgetitem = dynamic_cast<const VirtualQWidgetItem*>(self);
	if (vqwidgetitem && vqwidgetitem->isVirtualQWidgetItem) {
vqwidgetitem->setQWidgetItem_MinimumSize_Callback(reinterpret_cast<VirtualQWidgetItem::QWidgetItem_MinimumSize_Callback>(slot));
}
}

// Base class handler implementation
QSize* QWidgetItem_QBaseMaximumSize(const QWidgetItem* self) {
	auto* vqwidgetitem = dynamic_cast<const VirtualQWidgetItem*>(self);
	if (vqwidgetitem && vqwidgetitem->isVirtualQWidgetItem) {
vqwidgetitem->setQWidgetItem_MaximumSize_IsBase(true);
	return new QSize(vqwidgetitem->maximumSize());
}
}

// Auxiliary method to allow providing re-implementation
void QWidgetItem_OnMaximumSize(const QWidgetItem* self, intptr_t slot) {
	auto* vqwidgetitem = dynamic_cast<const VirtualQWidgetItem*>(self);
	if (vqwidgetitem && vqwidgetitem->isVirtualQWidgetItem) {
vqwidgetitem->setQWidgetItem_MaximumSize_Callback(reinterpret_cast<VirtualQWidgetItem::QWidgetItem_MaximumSize_Callback>(slot));
}
}

// Base class handler implementation
int QWidgetItem_QBaseExpandingDirections(const QWidgetItem* self) {
	auto* vqwidgetitem = dynamic_cast<const VirtualQWidgetItem*>(self);
	if (vqwidgetitem && vqwidgetitem->isVirtualQWidgetItem) {
vqwidgetitem->setQWidgetItem_ExpandingDirections_IsBase(true);
	return vqwidgetitem->expandingDirections();
}
}

// Auxiliary method to allow providing re-implementation
void QWidgetItem_OnExpandingDirections(const QWidgetItem* self, intptr_t slot) {
	auto* vqwidgetitem = dynamic_cast<const VirtualQWidgetItem*>(self);
	if (vqwidgetitem && vqwidgetitem->isVirtualQWidgetItem) {
vqwidgetitem->setQWidgetItem_ExpandingDirections_Callback(reinterpret_cast<VirtualQWidgetItem::QWidgetItem_ExpandingDirections_Callback>(slot));
}
}

// Base class handler implementation
bool QWidgetItem_QBaseIsEmpty(const QWidgetItem* self) {
	auto* vqwidgetitem = dynamic_cast<const VirtualQWidgetItem*>(self);
	if (vqwidgetitem && vqwidgetitem->isVirtualQWidgetItem) {
vqwidgetitem->setQWidgetItem_IsEmpty_IsBase(true);
	return vqwidgetitem->isEmpty();
}
}

// Auxiliary method to allow providing re-implementation
void QWidgetItem_OnIsEmpty(const QWidgetItem* self, intptr_t slot) {
	auto* vqwidgetitem = dynamic_cast<const VirtualQWidgetItem*>(self);
	if (vqwidgetitem && vqwidgetitem->isVirtualQWidgetItem) {
vqwidgetitem->setQWidgetItem_IsEmpty_Callback(reinterpret_cast<VirtualQWidgetItem::QWidgetItem_IsEmpty_Callback>(slot));
}
}

// Base class handler implementation
void QWidgetItem_QBaseSetGeometry(QWidgetItem* self, const QRect* geometry) {
	auto* vqwidgetitem = dynamic_cast<VirtualQWidgetItem*>(self);
	if (vqwidgetitem && vqwidgetitem->isVirtualQWidgetItem) {
vqwidgetitem->setQWidgetItem_SetGeometry_IsBase(true);
	vqwidgetitem->setGeometry(*geometry);
}
}

// Auxiliary method to allow providing re-implementation
void QWidgetItem_OnSetGeometry(QWidgetItem* self, intptr_t slot) {
	auto* vqwidgetitem = dynamic_cast<VirtualQWidgetItem*>(self);
	if (vqwidgetitem && vqwidgetitem->isVirtualQWidgetItem) {
vqwidgetitem->setQWidgetItem_SetGeometry_Callback(reinterpret_cast<VirtualQWidgetItem::QWidgetItem_SetGeometry_Callback>(slot));
}
}

// Base class handler implementation
QRect* QWidgetItem_QBaseGeometry(const QWidgetItem* self) {
	auto* vqwidgetitem = dynamic_cast<const VirtualQWidgetItem*>(self);
	if (vqwidgetitem && vqwidgetitem->isVirtualQWidgetItem) {
vqwidgetitem->setQWidgetItem_Geometry_IsBase(true);
	return new QRect(vqwidgetitem->geometry());
}
}

// Auxiliary method to allow providing re-implementation
void QWidgetItem_OnGeometry(const QWidgetItem* self, intptr_t slot) {
	auto* vqwidgetitem = dynamic_cast<const VirtualQWidgetItem*>(self);
	if (vqwidgetitem && vqwidgetitem->isVirtualQWidgetItem) {
vqwidgetitem->setQWidgetItem_Geometry_Callback(reinterpret_cast<VirtualQWidgetItem::QWidgetItem_Geometry_Callback>(slot));
}
}

// Base class handler implementation
QWidget* QWidgetItem_QBaseWidget(const QWidgetItem* self) {
	auto* vqwidgetitem = dynamic_cast<const VirtualQWidgetItem*>(self);
	if (vqwidgetitem && vqwidgetitem->isVirtualQWidgetItem) {
vqwidgetitem->setQWidgetItem_Widget_IsBase(true);
	return vqwidgetitem->widget();
}
}

// Auxiliary method to allow providing re-implementation
void QWidgetItem_OnWidget(const QWidgetItem* self, intptr_t slot) {
	auto* vqwidgetitem = dynamic_cast<const VirtualQWidgetItem*>(self);
	if (vqwidgetitem && vqwidgetitem->isVirtualQWidgetItem) {
vqwidgetitem->setQWidgetItem_Widget_Callback(reinterpret_cast<VirtualQWidgetItem::QWidgetItem_Widget_Callback>(slot));
}
}

// Base class handler implementation
bool QWidgetItem_QBaseHasHeightForWidth(const QWidgetItem* self) {
	auto* vqwidgetitem = dynamic_cast<const VirtualQWidgetItem*>(self);
	if (vqwidgetitem && vqwidgetitem->isVirtualQWidgetItem) {
vqwidgetitem->setQWidgetItem_HasHeightForWidth_IsBase(true);
	return vqwidgetitem->hasHeightForWidth();
}
}

// Auxiliary method to allow providing re-implementation
void QWidgetItem_OnHasHeightForWidth(const QWidgetItem* self, intptr_t slot) {
	auto* vqwidgetitem = dynamic_cast<const VirtualQWidgetItem*>(self);
	if (vqwidgetitem && vqwidgetitem->isVirtualQWidgetItem) {
vqwidgetitem->setQWidgetItem_HasHeightForWidth_Callback(reinterpret_cast<VirtualQWidgetItem::QWidgetItem_HasHeightForWidth_Callback>(slot));
}
}

// Base class handler implementation
int QWidgetItem_QBaseHeightForWidth(const QWidgetItem* self, int param1) {
	auto* vqwidgetitem = dynamic_cast<const VirtualQWidgetItem*>(self);
	if (vqwidgetitem && vqwidgetitem->isVirtualQWidgetItem) {
vqwidgetitem->setQWidgetItem_HeightForWidth_IsBase(true);
	return vqwidgetitem->heightForWidth(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QWidgetItem_OnHeightForWidth(const QWidgetItem* self, intptr_t slot) {
	auto* vqwidgetitem = dynamic_cast<const VirtualQWidgetItem*>(self);
	if (vqwidgetitem && vqwidgetitem->isVirtualQWidgetItem) {
vqwidgetitem->setQWidgetItem_HeightForWidth_Callback(reinterpret_cast<VirtualQWidgetItem::QWidgetItem_HeightForWidth_Callback>(slot));
}
}

// Base class handler implementation
int QWidgetItem_QBaseMinimumHeightForWidth(const QWidgetItem* self, int param1) {
	auto* vqwidgetitem = dynamic_cast<const VirtualQWidgetItem*>(self);
	if (vqwidgetitem && vqwidgetitem->isVirtualQWidgetItem) {
vqwidgetitem->setQWidgetItem_MinimumHeightForWidth_IsBase(true);
	return vqwidgetitem->minimumHeightForWidth(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QWidgetItem_OnMinimumHeightForWidth(const QWidgetItem* self, intptr_t slot) {
	auto* vqwidgetitem = dynamic_cast<const VirtualQWidgetItem*>(self);
	if (vqwidgetitem && vqwidgetitem->isVirtualQWidgetItem) {
vqwidgetitem->setQWidgetItem_MinimumHeightForWidth_Callback(reinterpret_cast<VirtualQWidgetItem::QWidgetItem_MinimumHeightForWidth_Callback>(slot));
}
}

// Base class handler implementation
int QWidgetItem_QBaseControlTypes(const QWidgetItem* self) {
	auto* vqwidgetitem = dynamic_cast<const VirtualQWidgetItem*>(self);
	if (vqwidgetitem && vqwidgetitem->isVirtualQWidgetItem) {
vqwidgetitem->setQWidgetItem_ControlTypes_IsBase(true);
	return vqwidgetitem->controlTypes();
}
}

// Auxiliary method to allow providing re-implementation
void QWidgetItem_OnControlTypes(const QWidgetItem* self, intptr_t slot) {
	auto* vqwidgetitem = dynamic_cast<const VirtualQWidgetItem*>(self);
	if (vqwidgetitem && vqwidgetitem->isVirtualQWidgetItem) {
vqwidgetitem->setQWidgetItem_ControlTypes_Callback(reinterpret_cast<VirtualQWidgetItem::QWidgetItem_ControlTypes_Callback>(slot));
}
}

void QWidgetItem_Delete(QWidgetItem* self) {
    delete self;
}

QWidgetItemV2* QWidgetItemV2_new(QWidget* widget) {
	 return new VirtualQWidgetItemV2(widget);
}

QSize* QWidgetItemV2_SizeHint(const QWidgetItemV2* self) {
	return new QSize(self->sizeHint());
}

QSize* QWidgetItemV2_MinimumSize(const QWidgetItemV2* self) {
	return new QSize(self->minimumSize());
}

QSize* QWidgetItemV2_MaximumSize(const QWidgetItemV2* self) {
	return new QSize(self->maximumSize());
}

int QWidgetItemV2_HeightForWidth(const QWidgetItemV2* self, int width) {
	return self->heightForWidth(width);
}

// Base class handler implementation
QSize* QWidgetItemV2_QBaseSizeHint(const QWidgetItemV2* self) {
	auto* vqwidgetitemv2 = dynamic_cast<const VirtualQWidgetItemV2*>(self);
	if (vqwidgetitemv2 && vqwidgetitemv2->isVirtualQWidgetItemV2) {
vqwidgetitemv2->setQWidgetItemV2_SizeHint_IsBase(true);
	return new QSize(vqwidgetitemv2->sizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QWidgetItemV2_OnSizeHint(const QWidgetItemV2* self, intptr_t slot) {
	auto* vqwidgetitemv2 = dynamic_cast<const VirtualQWidgetItemV2*>(self);
	if (vqwidgetitemv2 && vqwidgetitemv2->isVirtualQWidgetItemV2) {
vqwidgetitemv2->setQWidgetItemV2_SizeHint_Callback(reinterpret_cast<VirtualQWidgetItemV2::QWidgetItemV2_SizeHint_Callback>(slot));
}
}

// Base class handler implementation
QSize* QWidgetItemV2_QBaseMinimumSize(const QWidgetItemV2* self) {
	auto* vqwidgetitemv2 = dynamic_cast<const VirtualQWidgetItemV2*>(self);
	if (vqwidgetitemv2 && vqwidgetitemv2->isVirtualQWidgetItemV2) {
vqwidgetitemv2->setQWidgetItemV2_MinimumSize_IsBase(true);
	return new QSize(vqwidgetitemv2->minimumSize());
}
}

// Auxiliary method to allow providing re-implementation
void QWidgetItemV2_OnMinimumSize(const QWidgetItemV2* self, intptr_t slot) {
	auto* vqwidgetitemv2 = dynamic_cast<const VirtualQWidgetItemV2*>(self);
	if (vqwidgetitemv2 && vqwidgetitemv2->isVirtualQWidgetItemV2) {
vqwidgetitemv2->setQWidgetItemV2_MinimumSize_Callback(reinterpret_cast<VirtualQWidgetItemV2::QWidgetItemV2_MinimumSize_Callback>(slot));
}
}

// Base class handler implementation
QSize* QWidgetItemV2_QBaseMaximumSize(const QWidgetItemV2* self) {
	auto* vqwidgetitemv2 = dynamic_cast<const VirtualQWidgetItemV2*>(self);
	if (vqwidgetitemv2 && vqwidgetitemv2->isVirtualQWidgetItemV2) {
vqwidgetitemv2->setQWidgetItemV2_MaximumSize_IsBase(true);
	return new QSize(vqwidgetitemv2->maximumSize());
}
}

// Auxiliary method to allow providing re-implementation
void QWidgetItemV2_OnMaximumSize(const QWidgetItemV2* self, intptr_t slot) {
	auto* vqwidgetitemv2 = dynamic_cast<const VirtualQWidgetItemV2*>(self);
	if (vqwidgetitemv2 && vqwidgetitemv2->isVirtualQWidgetItemV2) {
vqwidgetitemv2->setQWidgetItemV2_MaximumSize_Callback(reinterpret_cast<VirtualQWidgetItemV2::QWidgetItemV2_MaximumSize_Callback>(slot));
}
}

// Base class handler implementation
int QWidgetItemV2_QBaseHeightForWidth(const QWidgetItemV2* self, int width) {
	auto* vqwidgetitemv2 = dynamic_cast<const VirtualQWidgetItemV2*>(self);
	if (vqwidgetitemv2 && vqwidgetitemv2->isVirtualQWidgetItemV2) {
vqwidgetitemv2->setQWidgetItemV2_HeightForWidth_IsBase(true);
	return vqwidgetitemv2->heightForWidth(width);
}
}

// Auxiliary method to allow providing re-implementation
void QWidgetItemV2_OnHeightForWidth(const QWidgetItemV2* self, intptr_t slot) {
	auto* vqwidgetitemv2 = dynamic_cast<const VirtualQWidgetItemV2*>(self);
	if (vqwidgetitemv2 && vqwidgetitemv2->isVirtualQWidgetItemV2) {
vqwidgetitemv2->setQWidgetItemV2_HeightForWidth_Callback(reinterpret_cast<VirtualQWidgetItemV2::QWidgetItemV2_HeightForWidth_Callback>(slot));
}
}

void QWidgetItemV2_Delete(QWidgetItemV2* self) {
    delete self;
}

