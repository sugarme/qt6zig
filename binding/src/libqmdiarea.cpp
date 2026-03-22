#include <QAbstractScrollArea>
#include <QBrush>
#include <QChildEvent>
#include <QEvent>
#include <QMdiArea>
#include <QMdiSubWindow>
#include <QObject>
#include <QPaintEvent>
#include <QResizeEvent>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <QWidget>
#include <qmdiarea.h>
#include "libqmdiarea.h"
#include "libqmdiarea.hxx"

QMdiArea* QMdiArea_new(QWidget* parent) {
	 return new VirtualQMdiArea(parent);
}

QMdiArea* QMdiArea_new2() {
	 return new VirtualQMdiArea();
}

libqt_string QMdiArea_Tr(const char* s) {
	QString _ret = QMdiArea::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QSize* QMdiArea_SizeHint(const QMdiArea* self) {
	return new QSize(self->sizeHint());
}

QSize* QMdiArea_MinimumSizeHint(const QMdiArea* self) {
	return new QSize(self->minimumSizeHint());
}

QMdiSubWindow* QMdiArea_CurrentSubWindow(const QMdiArea* self) {
	return self->currentSubWindow();
}

QMdiSubWindow* QMdiArea_ActiveSubWindow(const QMdiArea* self) {
	return self->activeSubWindow();
}

libqt_list QMdiArea_SubWindowList(const QMdiArea* self) {
	return self->subWindowList();
}

QMdiSubWindow* QMdiArea_AddSubWindow(QMdiArea* self, QWidget* widget) {
	return self->addSubWindow(widget);
}

void QMdiArea_RemoveSubWindow(QMdiArea* self, QWidget* widget) {
	self->removeSubWindow(widget);
}

QBrush* QMdiArea_Background(const QMdiArea* self) {
	return new QBrush(self->background());
}

void QMdiArea_SetBackground(QMdiArea* self, const QBrush* background) {
	self->setBackground(*background);
}

int QMdiArea_ActivationOrder(const QMdiArea* self) {
	return self->activationOrder();
}

void QMdiArea_SetActivationOrder(QMdiArea* self, int order) {
	self->setActivationOrder(static_cast<QMdiArea::WindowOrder>(order));
}

void QMdiArea_SetOption(QMdiArea* self, int option) {
	self->setOption(static_cast<QMdiArea::AreaOption>(option));
}

bool QMdiArea_TestOption(const QMdiArea* self, int opton) {
	return self->testOption(static_cast<QMdiArea::AreaOption>(opton));
}

void QMdiArea_SetViewMode(QMdiArea* self, int mode) {
	self->setViewMode(static_cast<QMdiArea::ViewMode>(mode));
}

int QMdiArea_ViewMode(const QMdiArea* self) {
	return self->viewMode();
}

bool QMdiArea_DocumentMode(const QMdiArea* self) {
	return self->documentMode();
}

void QMdiArea_SetDocumentMode(QMdiArea* self, bool enabled) {
	self->setDocumentMode(enabled);
}

void QMdiArea_SetTabsClosable(QMdiArea* self, bool closable) {
	self->setTabsClosable(closable);
}

bool QMdiArea_TabsClosable(const QMdiArea* self) {
	return self->tabsClosable();
}

void QMdiArea_SetTabsMovable(QMdiArea* self, bool movable) {
	self->setTabsMovable(movable);
}

bool QMdiArea_TabsMovable(const QMdiArea* self) {
	return self->tabsMovable();
}

void QMdiArea_SetTabShape(QMdiArea* self, int shape) {
	self->setTabShape(static_cast<QTabWidget::TabShape>(shape));
}

int QMdiArea_TabShape(const QMdiArea* self) {
	return self->tabShape();
}

void QMdiArea_SetTabPosition(QMdiArea* self, int position) {
	self->setTabPosition(static_cast<QTabWidget::TabPosition>(position));
}

int QMdiArea_TabPosition(const QMdiArea* self) {
	return self->tabPosition();
}

void QMdiArea_SubWindowActivated(QMdiArea* self, QMdiSubWindow* param1) {
	self->subWindowActivated(param1);
}

void QMdiArea_Connect_SubWindowActivated(QMdiArea* self, intptr_t slot) {
    void (*slotFunc)(QMdiArea*, QMdiSubWindow*) = reinterpret_cast<void (*)(QMdiArea*, QMdiSubWindow*)>(slot);
    QMdiArea::connect(self, &QMdiArea::subWindowActivated, [self, slotFunc](QMdiSubWindow* param1) {
	slotFunc(self, param1);
    });
}

void QMdiArea_SetActiveSubWindow(QMdiArea* self, QMdiSubWindow* window) {
	self->setActiveSubWindow(window);
}

void QMdiArea_TileSubWindows(QMdiArea* self) {
	self->tileSubWindows();
}

void QMdiArea_CascadeSubWindows(QMdiArea* self) {
	self->cascadeSubWindows();
}

void QMdiArea_CloseActiveSubWindow(QMdiArea* self) {
	self->closeActiveSubWindow();
}

void QMdiArea_CloseAllSubWindows(QMdiArea* self) {
	self->closeAllSubWindows();
}

void QMdiArea_ActivateNextSubWindow(QMdiArea* self) {
	self->activateNextSubWindow();
}

void QMdiArea_ActivatePreviousSubWindow(QMdiArea* self) {
	self->activatePreviousSubWindow();
}

libqt_string QMdiArea_Tr2(const char* s, const char* c) {
	QString _ret = QMdiArea::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QMdiArea_Tr3(const char* s, const char* c, int n) {
	QString _ret = QMdiArea::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QMdiArea_SubWindowList1(const QMdiArea* self, int order) {
	return self->subWindowList(static_cast<QMdiArea::WindowOrder>(order));
}

QMdiSubWindow* QMdiArea_AddSubWindow2(QMdiArea* self, QWidget* widget, int flags) {
	return self->addSubWindow(widget, static_cast<QFlags<Qt::WindowType>>(flags));
}

void QMdiArea_SetOption2(QMdiArea* self, int option, bool on) {
	self->setOption(static_cast<QMdiArea::AreaOption>(option), on);
}

// Base class handler implementation
QSize* QMdiArea_QBaseSizeHint(const QMdiArea* self) {
	auto* vqmdiarea = dynamic_cast<const VirtualQMdiArea*>(self);
	if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
vqmdiarea->setQMdiArea_SizeHint_IsBase(true);
	return new QSize(vqmdiarea->sizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnSizeHint(const QMdiArea* self, intptr_t slot) {
	auto* vqmdiarea = dynamic_cast<const VirtualQMdiArea*>(self);
	if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
vqmdiarea->setQMdiArea_SizeHint_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_SizeHint_Callback>(slot));
}
}

// Base class handler implementation
QSize* QMdiArea_QBaseMinimumSizeHint(const QMdiArea* self) {
	auto* vqmdiarea = dynamic_cast<const VirtualQMdiArea*>(self);
	if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
vqmdiarea->setQMdiArea_MinimumSizeHint_IsBase(true);
	return new QSize(vqmdiarea->minimumSizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnMinimumSizeHint(const QMdiArea* self, intptr_t slot) {
	auto* vqmdiarea = dynamic_cast<const VirtualQMdiArea*>(self);
	if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
vqmdiarea->setQMdiArea_MinimumSizeHint_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_MinimumSizeHint_Callback>(slot));
}
}

// Derived class handler implementation
void QMdiArea_SetupViewport(QMdiArea* self, QWidget* viewport) {
	auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
	if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
	vqmdiarea->setupViewport(viewport);
	} else {
	self->QMdiArea::setupViewport(viewport);
}
}

// Base class handler implementation
void QMdiArea_QBaseSetupViewport(QMdiArea* self, QWidget* viewport) {
	auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
	if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
vqmdiarea->setQMdiArea_SetupViewport_IsBase(true);
	vqmdiarea->setupViewport(viewport);
}
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnSetupViewport(QMdiArea* self, intptr_t slot) {
	auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
	if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
vqmdiarea->setQMdiArea_SetupViewport_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_SetupViewport_Callback>(slot));
}
}

// Derived class handler implementation
bool QMdiArea_Event(QMdiArea* self, QEvent* event) {
	auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
	if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
	return vqmdiarea->event(event);
	} else {
	return self->QMdiArea::event(event);
}
}

// Base class handler implementation
bool QMdiArea_QBaseEvent(QMdiArea* self, QEvent* event) {
	auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
	if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
vqmdiarea->setQMdiArea_Event_IsBase(true);
	return vqmdiarea->event(event);
}
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnEvent(QMdiArea* self, intptr_t slot) {
	auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
	if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
vqmdiarea->setQMdiArea_Event_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_Event_Callback>(slot));
}
}

// Derived class handler implementation
bool QMdiArea_EventFilter(QMdiArea* self, QObject* object, QEvent* event) {
	auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
	if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
	return vqmdiarea->eventFilter(object, event);
	} else {
	return self->QMdiArea::eventFilter(object, event);
}
}

// Base class handler implementation
bool QMdiArea_QBaseEventFilter(QMdiArea* self, QObject* object, QEvent* event) {
	auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
	if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
vqmdiarea->setQMdiArea_EventFilter_IsBase(true);
	return vqmdiarea->eventFilter(object, event);
}
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnEventFilter(QMdiArea* self, intptr_t slot) {
	auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
	if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
vqmdiarea->setQMdiArea_EventFilter_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_EventFilter_Callback>(slot));
}
}

// Derived class handler implementation
void QMdiArea_PaintEvent(QMdiArea* self, QPaintEvent* paintEvent) {
	auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
	if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
	vqmdiarea->paintEvent(paintEvent);
	} else {
	self->QMdiArea::paintEvent(paintEvent);
}
}

// Base class handler implementation
void QMdiArea_QBasePaintEvent(QMdiArea* self, QPaintEvent* paintEvent) {
	auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
	if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
vqmdiarea->setQMdiArea_PaintEvent_IsBase(true);
	vqmdiarea->paintEvent(paintEvent);
}
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnPaintEvent(QMdiArea* self, intptr_t slot) {
	auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
	if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
vqmdiarea->setQMdiArea_PaintEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_PaintEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QMdiArea_ChildEvent(QMdiArea* self, QChildEvent* childEvent) {
	auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
	if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
	vqmdiarea->childEvent(childEvent);
	} else {
	self->QMdiArea::childEvent(childEvent);
}
}

// Base class handler implementation
void QMdiArea_QBaseChildEvent(QMdiArea* self, QChildEvent* childEvent) {
	auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
	if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
vqmdiarea->setQMdiArea_ChildEvent_IsBase(true);
	vqmdiarea->childEvent(childEvent);
}
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnChildEvent(QMdiArea* self, intptr_t slot) {
	auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
	if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
vqmdiarea->setQMdiArea_ChildEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_ChildEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QMdiArea_ResizeEvent(QMdiArea* self, QResizeEvent* resizeEvent) {
	auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
	if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
	vqmdiarea->resizeEvent(resizeEvent);
	} else {
	self->QMdiArea::resizeEvent(resizeEvent);
}
}

// Base class handler implementation
void QMdiArea_QBaseResizeEvent(QMdiArea* self, QResizeEvent* resizeEvent) {
	auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
	if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
vqmdiarea->setQMdiArea_ResizeEvent_IsBase(true);
	vqmdiarea->resizeEvent(resizeEvent);
}
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnResizeEvent(QMdiArea* self, intptr_t slot) {
	auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
	if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
vqmdiarea->setQMdiArea_ResizeEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_ResizeEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QMdiArea_TimerEvent(QMdiArea* self, QTimerEvent* timerEvent) {
	auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
	if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
	vqmdiarea->timerEvent(timerEvent);
	} else {
	self->QMdiArea::timerEvent(timerEvent);
}
}

// Base class handler implementation
void QMdiArea_QBaseTimerEvent(QMdiArea* self, QTimerEvent* timerEvent) {
	auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
	if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
vqmdiarea->setQMdiArea_TimerEvent_IsBase(true);
	vqmdiarea->timerEvent(timerEvent);
}
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnTimerEvent(QMdiArea* self, intptr_t slot) {
	auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
	if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
vqmdiarea->setQMdiArea_TimerEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_TimerEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QMdiArea_ShowEvent(QMdiArea* self, QShowEvent* showEvent) {
	auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
	if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
	vqmdiarea->showEvent(showEvent);
	} else {
	self->QMdiArea::showEvent(showEvent);
}
}

// Base class handler implementation
void QMdiArea_QBaseShowEvent(QMdiArea* self, QShowEvent* showEvent) {
	auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
	if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
vqmdiarea->setQMdiArea_ShowEvent_IsBase(true);
	vqmdiarea->showEvent(showEvent);
}
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnShowEvent(QMdiArea* self, intptr_t slot) {
	auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
	if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
vqmdiarea->setQMdiArea_ShowEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_ShowEvent_Callback>(slot));
}
}

// Derived class handler implementation
bool QMdiArea_ViewportEvent(QMdiArea* self, QEvent* event) {
	auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
	if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
	return vqmdiarea->viewportEvent(event);
	} else {
	return self->QMdiArea::viewportEvent(event);
}
}

// Base class handler implementation
bool QMdiArea_QBaseViewportEvent(QMdiArea* self, QEvent* event) {
	auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
	if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
vqmdiarea->setQMdiArea_ViewportEvent_IsBase(true);
	return vqmdiarea->viewportEvent(event);
}
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnViewportEvent(QMdiArea* self, intptr_t slot) {
	auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
	if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
vqmdiarea->setQMdiArea_ViewportEvent_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_ViewportEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QMdiArea_ScrollContentsBy(QMdiArea* self, int dx, int dy) {
	auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
	if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
	vqmdiarea->scrollContentsBy(dx, dy);
	} else {
	self->QMdiArea::scrollContentsBy(dx, dy);
}
}

// Base class handler implementation
void QMdiArea_QBaseScrollContentsBy(QMdiArea* self, int dx, int dy) {
	auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
	if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
vqmdiarea->setQMdiArea_ScrollContentsBy_IsBase(true);
	vqmdiarea->scrollContentsBy(dx, dy);
}
}

// Auxiliary method to allow providing re-implementation
void QMdiArea_OnScrollContentsBy(QMdiArea* self, intptr_t slot) {
	auto* vqmdiarea = dynamic_cast<VirtualQMdiArea*>(self);
	if (vqmdiarea && vqmdiarea->isVirtualQMdiArea) {
vqmdiarea->setQMdiArea_ScrollContentsBy_Callback(reinterpret_cast<VirtualQMdiArea::QMdiArea_ScrollContentsBy_Callback>(slot));
}
}

void QMdiArea_Delete(QMdiArea* self) {
    delete self;
}

