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

void QSplitterHandle_Delete(QSplitterHandle* self) {
    delete self;
}

