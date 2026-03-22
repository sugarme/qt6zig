#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QFrame>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QResizeEvent>
#include <QSize>
#include <QSplitter>
#include <QSplitterHandle>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QTextStream>
#include <QWidget>
#include <qsplitter.h>
#include "libqsplitter.h"
#include "libqsplitter.hxx"

QSplitter* QSplitter_new(QWidget* parent) {
	 return new VirtualQSplitter(parent);
}

QSplitter* QSplitter_new2() {
	 return new VirtualQSplitter();
}

QSplitter* QSplitter_new3(int param1) {
	 return new VirtualQSplitter(static_cast<Qt::Orientation>(param1));
}

QSplitter* QSplitter_new4(int param1, QWidget* parent) {
	 return new VirtualQSplitter(static_cast<Qt::Orientation>(param1), parent);
}

libqt_string QSplitter_Tr(const char* s) {
	QString _ret = QSplitter::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QSplitter_AddWidget(QSplitter* self, QWidget* widget) {
	self->addWidget(widget);
}

void QSplitter_InsertWidget(QSplitter* self, int index, QWidget* widget) {
	self->insertWidget(index, widget);
}

QWidget* QSplitter_ReplaceWidget(QSplitter* self, int index, QWidget* widget) {
	return self->replaceWidget(index, widget);
}

void QSplitter_SetOrientation(QSplitter* self, int orientation) {
	self->setOrientation(static_cast<Qt::Orientation>(orientation));
}

int QSplitter_Orientation(const QSplitter* self) {
	return self->orientation();
}

void QSplitter_SetChildrenCollapsible(QSplitter* self, bool childrenCollapsible) {
	self->setChildrenCollapsible(childrenCollapsible);
}

bool QSplitter_ChildrenCollapsible(const QSplitter* self) {
	return self->childrenCollapsible();
}

void QSplitter_SetCollapsible(QSplitter* self, int index, bool param2) {
	self->setCollapsible(index, param2);
}

bool QSplitter_IsCollapsible(const QSplitter* self, int index) {
	return self->isCollapsible(index);
}

void QSplitter_SetOpaqueResize(QSplitter* self) {
	self->setOpaqueResize();
}

bool QSplitter_OpaqueResize(const QSplitter* self) {
	return self->opaqueResize();
}

void QSplitter_Refresh(QSplitter* self) {
	self->refresh();
}

QSize* QSplitter_SizeHint(const QSplitter* self) {
	return new QSize(self->sizeHint());
}

QSize* QSplitter_MinimumSizeHint(const QSplitter* self) {
	return new QSize(self->minimumSizeHint());
}

libqt_list QSplitter_Sizes(const QSplitter* self) {
	auto _ret = self->sizes();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

void QSplitter_SetSizes(QSplitter* self, const libqt_list list) {
	self->setSizes(QList<int>());
}

libqt_string QSplitter_SaveState(const QSplitter* self) {
	QByteArray _qb = self->saveState();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QSplitter_RestoreState(QSplitter* self, const libqt_string state) {
	return self->restoreState(QByteArray(state.data, state.len));
}

int QSplitter_HandleWidth(const QSplitter* self) {
	return self->handleWidth();
}

void QSplitter_SetHandleWidth(QSplitter* self, int handleWidth) {
	self->setHandleWidth(handleWidth);
}

int QSplitter_IndexOf(const QSplitter* self, QWidget* w) {
	return self->indexOf(w);
}

QWidget* QSplitter_Widget(const QSplitter* self, int index) {
	return self->widget(index);
}

int QSplitter_Count(const QSplitter* self) {
	return self->count();
}

void QSplitter_GetRange(const QSplitter* self, int index, int* param2, int* param3) {
	self->getRange(index, param2, param3);
}

QSplitterHandle* QSplitter_Handle(const QSplitter* self, int index) {
	return self->handle(index);
}

void QSplitter_SetStretchFactor(QSplitter* self, int index, int stretch) {
	self->setStretchFactor(index, stretch);
}

void QSplitter_SplitterMoved(QSplitter* self, int pos, int index) {
	self->splitterMoved(pos, index);
}

void QSplitter_Connect_SplitterMoved(QSplitter* self, intptr_t slot) {
    void (*slotFunc)(QSplitter*, int, int) = reinterpret_cast<void (*)(QSplitter*, int, int)>(slot);
    QSplitter::connect(self, &QSplitter::splitterMoved, [self, slotFunc](int pos, int index) {
	slotFunc(self, pos, index);
    });
}

libqt_string QSplitter_Tr2(const char* s, const char* c) {
	QString _ret = QSplitter::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSplitter_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSplitter::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QSplitter_SetOpaqueResize1(QSplitter* self, bool opaqueVal) {
	self->setOpaqueResize(opaqueVal);
}

// Base class handler implementation
QSize* QSplitter_QBaseSizeHint(const QSplitter* self) {
	auto* vqsplitter = dynamic_cast<const VirtualQSplitter*>(self);
	if (vqsplitter && vqsplitter->isVirtualQSplitter) {
vqsplitter->setQSplitter_SizeHint_IsBase(true);
	return new QSize(vqsplitter->sizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnSizeHint(const QSplitter* self, intptr_t slot) {
	auto* vqsplitter = dynamic_cast<const VirtualQSplitter*>(self);
	if (vqsplitter && vqsplitter->isVirtualQSplitter) {
vqsplitter->setQSplitter_SizeHint_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_SizeHint_Callback>(slot));
}
}

// Base class handler implementation
QSize* QSplitter_QBaseMinimumSizeHint(const QSplitter* self) {
	auto* vqsplitter = dynamic_cast<const VirtualQSplitter*>(self);
	if (vqsplitter && vqsplitter->isVirtualQSplitter) {
vqsplitter->setQSplitter_MinimumSizeHint_IsBase(true);
	return new QSize(vqsplitter->minimumSizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnMinimumSizeHint(const QSplitter* self, intptr_t slot) {
	auto* vqsplitter = dynamic_cast<const VirtualQSplitter*>(self);
	if (vqsplitter && vqsplitter->isVirtualQSplitter) {
vqsplitter->setQSplitter_MinimumSizeHint_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_MinimumSizeHint_Callback>(slot));
}
}

// Derived class handler implementation
QSplitterHandle* QSplitter_CreateHandle(QSplitter* self) {
	auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
	if (vqsplitter && vqsplitter->isVirtualQSplitter) {
	return vqsplitter->createHandle();
	} else {
	return self->QSplitter::createHandle();
}
}

// Base class handler implementation
QSplitterHandle* QSplitter_QBaseCreateHandle(QSplitter* self) {
	auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
	if (vqsplitter && vqsplitter->isVirtualQSplitter) {
vqsplitter->setQSplitter_CreateHandle_IsBase(true);
	return vqsplitter->createHandle();
}
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnCreateHandle(QSplitter* self, intptr_t slot) {
	auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
	if (vqsplitter && vqsplitter->isVirtualQSplitter) {
vqsplitter->setQSplitter_CreateHandle_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_CreateHandle_Callback>(slot));
}
}

// Derived class handler implementation
void QSplitter_ChildEvent(QSplitter* self, QChildEvent* param1) {
	auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
	if (vqsplitter && vqsplitter->isVirtualQSplitter) {
	vqsplitter->childEvent(param1);
	} else {
	self->QSplitter::childEvent(param1);
}
}

// Base class handler implementation
void QSplitter_QBaseChildEvent(QSplitter* self, QChildEvent* param1) {
	auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
	if (vqsplitter && vqsplitter->isVirtualQSplitter) {
vqsplitter->setQSplitter_ChildEvent_IsBase(true);
	vqsplitter->childEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnChildEvent(QSplitter* self, intptr_t slot) {
	auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
	if (vqsplitter && vqsplitter->isVirtualQSplitter) {
vqsplitter->setQSplitter_ChildEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_ChildEvent_Callback>(slot));
}
}

// Derived class handler implementation
bool QSplitter_Event(QSplitter* self, QEvent* param1) {
	auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
	if (vqsplitter && vqsplitter->isVirtualQSplitter) {
	return vqsplitter->event(param1);
	} else {
	return self->QSplitter::event(param1);
}
}

// Base class handler implementation
bool QSplitter_QBaseEvent(QSplitter* self, QEvent* param1) {
	auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
	if (vqsplitter && vqsplitter->isVirtualQSplitter) {
vqsplitter->setQSplitter_Event_IsBase(true);
	return vqsplitter->event(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnEvent(QSplitter* self, intptr_t slot) {
	auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
	if (vqsplitter && vqsplitter->isVirtualQSplitter) {
vqsplitter->setQSplitter_Event_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_Event_Callback>(slot));
}
}

// Derived class handler implementation
void QSplitter_ResizeEvent(QSplitter* self, QResizeEvent* param1) {
	auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
	if (vqsplitter && vqsplitter->isVirtualQSplitter) {
	vqsplitter->resizeEvent(param1);
	} else {
	self->QSplitter::resizeEvent(param1);
}
}

// Base class handler implementation
void QSplitter_QBaseResizeEvent(QSplitter* self, QResizeEvent* param1) {
	auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
	if (vqsplitter && vqsplitter->isVirtualQSplitter) {
vqsplitter->setQSplitter_ResizeEvent_IsBase(true);
	vqsplitter->resizeEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnResizeEvent(QSplitter* self, intptr_t slot) {
	auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
	if (vqsplitter && vqsplitter->isVirtualQSplitter) {
vqsplitter->setQSplitter_ResizeEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_ResizeEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QSplitter_ChangeEvent(QSplitter* self, QEvent* param1) {
	auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
	if (vqsplitter && vqsplitter->isVirtualQSplitter) {
	vqsplitter->changeEvent(param1);
	} else {
	self->QSplitter::changeEvent(param1);
}
}

// Base class handler implementation
void QSplitter_QBaseChangeEvent(QSplitter* self, QEvent* param1) {
	auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
	if (vqsplitter && vqsplitter->isVirtualQSplitter) {
vqsplitter->setQSplitter_ChangeEvent_IsBase(true);
	vqsplitter->changeEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnChangeEvent(QSplitter* self, intptr_t slot) {
	auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
	if (vqsplitter && vqsplitter->isVirtualQSplitter) {
vqsplitter->setQSplitter_ChangeEvent_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_ChangeEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QSplitter_MoveSplitter(QSplitter* self, int pos, int index) {
	auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
	if (vqsplitter && vqsplitter->isVirtualQSplitter) {
	vqsplitter->moveSplitter(pos, index);
	} else {
	self->QSplitter::moveSplitter(pos, index);
}
}

// Base class handler implementation
void QSplitter_QBaseMoveSplitter(QSplitter* self, int pos, int index) {
	auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
	if (vqsplitter && vqsplitter->isVirtualQSplitter) {
vqsplitter->setQSplitter_MoveSplitter_IsBase(true);
	vqsplitter->moveSplitter(pos, index);
}
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnMoveSplitter(QSplitter* self, intptr_t slot) {
	auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
	if (vqsplitter && vqsplitter->isVirtualQSplitter) {
vqsplitter->setQSplitter_MoveSplitter_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_MoveSplitter_Callback>(slot));
}
}

// Derived class handler implementation
void QSplitter_SetRubberBand(QSplitter* self, int position) {
	auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
	if (vqsplitter && vqsplitter->isVirtualQSplitter) {
	vqsplitter->setRubberBand(position);
	} else {
	self->QSplitter::setRubberBand(position);
}
}

// Base class handler implementation
void QSplitter_QBaseSetRubberBand(QSplitter* self, int position) {
	auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
	if (vqsplitter && vqsplitter->isVirtualQSplitter) {
vqsplitter->setQSplitter_SetRubberBand_IsBase(true);
	vqsplitter->setRubberBand(position);
}
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnSetRubberBand(QSplitter* self, intptr_t slot) {
	auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
	if (vqsplitter && vqsplitter->isVirtualQSplitter) {
vqsplitter->setQSplitter_SetRubberBand_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_SetRubberBand_Callback>(slot));
}
}

// Derived class handler implementation
int QSplitter_ClosestLegalPosition(QSplitter* self, int param1, int param2) {
	auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
	if (vqsplitter && vqsplitter->isVirtualQSplitter) {
	return vqsplitter->closestLegalPosition(param1, param2);
	} else {
	return self->QSplitter::closestLegalPosition(param1, param2);
}
}

// Base class handler implementation
int QSplitter_QBaseClosestLegalPosition(QSplitter* self, int param1, int param2) {
	auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
	if (vqsplitter && vqsplitter->isVirtualQSplitter) {
vqsplitter->setQSplitter_ClosestLegalPosition_IsBase(true);
	return vqsplitter->closestLegalPosition(param1, param2);
}
}

// Auxiliary method to allow providing re-implementation
void QSplitter_OnClosestLegalPosition(QSplitter* self, intptr_t slot) {
	auto* vqsplitter = dynamic_cast<VirtualQSplitter*>(self);
	if (vqsplitter && vqsplitter->isVirtualQSplitter) {
vqsplitter->setQSplitter_ClosestLegalPosition_Callback(reinterpret_cast<VirtualQSplitter::QSplitter_ClosestLegalPosition_Callback>(slot));
}
}

void QSplitter_Delete(QSplitter* self) {
    delete self;
}

QSplitterHandle* QSplitterHandle_new(int o, QSplitter* parent) {
	 return new VirtualQSplitterHandle(static_cast<Qt::Orientation>(o), parent);
}

libqt_string QSplitterHandle_Tr(const char* s) {
	QString _ret = QSplitterHandle::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QSplitterHandle_SetOrientation(QSplitterHandle* self, int o) {
	self->setOrientation(static_cast<Qt::Orientation>(o));
}

int QSplitterHandle_Orientation(const QSplitterHandle* self) {
	return self->orientation();
}

bool QSplitterHandle_OpaqueResize(const QSplitterHandle* self) {
	return self->opaqueResize();
}

QSplitter* QSplitterHandle_Splitter(const QSplitterHandle* self) {
	return self->splitter();
}

QSize* QSplitterHandle_SizeHint(const QSplitterHandle* self) {
	return new QSize(self->sizeHint());
}

libqt_string QSplitterHandle_Tr2(const char* s, const char* c) {
	QString _ret = QSplitterHandle::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QSplitterHandle_Tr3(const char* s, const char* c, int n) {
	QString _ret = QSplitterHandle::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

// Base class handler implementation
QSize* QSplitterHandle_QBaseSizeHint(const QSplitterHandle* self) {
	auto* vqsplitterhandle = dynamic_cast<const VirtualQSplitterHandle*>(self);
	if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
vqsplitterhandle->setQSplitterHandle_SizeHint_IsBase(true);
	return new QSize(vqsplitterhandle->sizeHint());
}
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnSizeHint(const QSplitterHandle* self, intptr_t slot) {
	auto* vqsplitterhandle = dynamic_cast<const VirtualQSplitterHandle*>(self);
	if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
vqsplitterhandle->setQSplitterHandle_SizeHint_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_SizeHint_Callback>(slot));
}
}

// Derived class handler implementation
void QSplitterHandle_PaintEvent(QSplitterHandle* self, QPaintEvent* param1) {
	auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
	if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
	vqsplitterhandle->paintEvent(param1);
	} else {
	self->QSplitterHandle::paintEvent(param1);
}
}

// Base class handler implementation
void QSplitterHandle_QBasePaintEvent(QSplitterHandle* self, QPaintEvent* param1) {
	auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
	if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
vqsplitterhandle->setQSplitterHandle_PaintEvent_IsBase(true);
	vqsplitterhandle->paintEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnPaintEvent(QSplitterHandle* self, intptr_t slot) {
	auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
	if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
vqsplitterhandle->setQSplitterHandle_PaintEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_PaintEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QSplitterHandle_MouseMoveEvent(QSplitterHandle* self, QMouseEvent* param1) {
	auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
	if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
	vqsplitterhandle->mouseMoveEvent(param1);
	} else {
	self->QSplitterHandle::mouseMoveEvent(param1);
}
}

// Base class handler implementation
void QSplitterHandle_QBaseMouseMoveEvent(QSplitterHandle* self, QMouseEvent* param1) {
	auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
	if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
vqsplitterhandle->setQSplitterHandle_MouseMoveEvent_IsBase(true);
	vqsplitterhandle->mouseMoveEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnMouseMoveEvent(QSplitterHandle* self, intptr_t slot) {
	auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
	if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
vqsplitterhandle->setQSplitterHandle_MouseMoveEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_MouseMoveEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QSplitterHandle_MousePressEvent(QSplitterHandle* self, QMouseEvent* param1) {
	auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
	if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
	vqsplitterhandle->mousePressEvent(param1);
	} else {
	self->QSplitterHandle::mousePressEvent(param1);
}
}

// Base class handler implementation
void QSplitterHandle_QBaseMousePressEvent(QSplitterHandle* self, QMouseEvent* param1) {
	auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
	if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
vqsplitterhandle->setQSplitterHandle_MousePressEvent_IsBase(true);
	vqsplitterhandle->mousePressEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnMousePressEvent(QSplitterHandle* self, intptr_t slot) {
	auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
	if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
vqsplitterhandle->setQSplitterHandle_MousePressEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_MousePressEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QSplitterHandle_MouseReleaseEvent(QSplitterHandle* self, QMouseEvent* param1) {
	auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
	if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
	vqsplitterhandle->mouseReleaseEvent(param1);
	} else {
	self->QSplitterHandle::mouseReleaseEvent(param1);
}
}

// Base class handler implementation
void QSplitterHandle_QBaseMouseReleaseEvent(QSplitterHandle* self, QMouseEvent* param1) {
	auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
	if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
vqsplitterhandle->setQSplitterHandle_MouseReleaseEvent_IsBase(true);
	vqsplitterhandle->mouseReleaseEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnMouseReleaseEvent(QSplitterHandle* self, intptr_t slot) {
	auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
	if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
vqsplitterhandle->setQSplitterHandle_MouseReleaseEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_MouseReleaseEvent_Callback>(slot));
}
}

// Derived class handler implementation
void QSplitterHandle_ResizeEvent(QSplitterHandle* self, QResizeEvent* param1) {
	auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
	if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
	vqsplitterhandle->resizeEvent(param1);
	} else {
	self->QSplitterHandle::resizeEvent(param1);
}
}

// Base class handler implementation
void QSplitterHandle_QBaseResizeEvent(QSplitterHandle* self, QResizeEvent* param1) {
	auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
	if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
vqsplitterhandle->setQSplitterHandle_ResizeEvent_IsBase(true);
	vqsplitterhandle->resizeEvent(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnResizeEvent(QSplitterHandle* self, intptr_t slot) {
	auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
	if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
vqsplitterhandle->setQSplitterHandle_ResizeEvent_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_ResizeEvent_Callback>(slot));
}
}

// Derived class handler implementation
bool QSplitterHandle_Event(QSplitterHandle* self, QEvent* param1) {
	auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
	if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
	return vqsplitterhandle->event(param1);
	} else {
	return self->QSplitterHandle::event(param1);
}
}

// Base class handler implementation
bool QSplitterHandle_QBaseEvent(QSplitterHandle* self, QEvent* param1) {
	auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
	if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
vqsplitterhandle->setQSplitterHandle_Event_IsBase(true);
	return vqsplitterhandle->event(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnEvent(QSplitterHandle* self, intptr_t slot) {
	auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
	if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
vqsplitterhandle->setQSplitterHandle_Event_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_Event_Callback>(slot));
}
}

// Derived class handler implementation
void QSplitterHandle_MoveSplitter(QSplitterHandle* self, int p) {
	auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
	if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
	vqsplitterhandle->moveSplitter(p);
	} else {
	self->QSplitterHandle::moveSplitter(p);
}
}

// Base class handler implementation
void QSplitterHandle_QBaseMoveSplitter(QSplitterHandle* self, int p) {
	auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
	if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
vqsplitterhandle->setQSplitterHandle_MoveSplitter_IsBase(true);
	vqsplitterhandle->moveSplitter(p);
}
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnMoveSplitter(QSplitterHandle* self, intptr_t slot) {
	auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
	if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
vqsplitterhandle->setQSplitterHandle_MoveSplitter_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_MoveSplitter_Callback>(slot));
}
}

// Derived class handler implementation
int QSplitterHandle_ClosestLegalPosition(QSplitterHandle* self, int p) {
	auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
	if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
	return vqsplitterhandle->closestLegalPosition(p);
	} else {
	return self->QSplitterHandle::closestLegalPosition(p);
}
}

// Base class handler implementation
int QSplitterHandle_QBaseClosestLegalPosition(QSplitterHandle* self, int p) {
	auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
	if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
vqsplitterhandle->setQSplitterHandle_ClosestLegalPosition_IsBase(true);
	return vqsplitterhandle->closestLegalPosition(p);
}
}

// Auxiliary method to allow providing re-implementation
void QSplitterHandle_OnClosestLegalPosition(QSplitterHandle* self, intptr_t slot) {
	auto* vqsplitterhandle = dynamic_cast<VirtualQSplitterHandle*>(self);
	if (vqsplitterhandle && vqsplitterhandle->isVirtualQSplitterHandle) {
vqsplitterhandle->setQSplitterHandle_ClosestLegalPosition_Callback(reinterpret_cast<VirtualQSplitterHandle::QSplitterHandle_ClosestLegalPosition_Callback>(slot));
}
}

void QSplitterHandle_Delete(QSplitterHandle* self) {
    delete self;
}

