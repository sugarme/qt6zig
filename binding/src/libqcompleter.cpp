#include <QAbstractItemModel>
#include <QAbstractItemView>
#include <QCompleter>
#include <QEvent>
#include <QModelIndex>
#include <QObject>
#include <QRect>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QWidget>
#include <qcompleter.h>
#include "libqcompleter.h"
#include "libqcompleter.hxx"

QCompleter* QCompleter_new() {
	 return new VirtualQCompleter();
}

QCompleter* QCompleter_new2(QAbstractItemModel* model) {
	 return new VirtualQCompleter(model);
}

QCompleter* QCompleter_new3(const libqt_list completions) {
	 return new VirtualQCompleter(QList<QString>());
}

QCompleter* QCompleter_new4(QObject* parent) {
	 return new VirtualQCompleter(parent);
}

QCompleter* QCompleter_new5(QAbstractItemModel* model, QObject* parent) {
	 return new VirtualQCompleter(model, parent);
}

QCompleter* QCompleter_new6(const libqt_list completions, QObject* parent) {
	 return new VirtualQCompleter(QList<QString>(), parent);
}

libqt_string QCompleter_Tr(const char* s) {
	QString _ret = QCompleter::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QCompleter_SetWidget(QCompleter* self, QWidget* widget) {
	self->setWidget(widget);
}

QWidget* QCompleter_Widget(const QCompleter* self) {
	return self->widget();
}

void QCompleter_SetModel(QCompleter* self, QAbstractItemModel* c) {
	self->setModel(c);
}

QAbstractItemModel* QCompleter_Model(const QCompleter* self) {
	return self->model();
}

void QCompleter_SetCompletionMode(QCompleter* self, int mode) {
	self->setCompletionMode(static_cast<QCompleter::CompletionMode>(mode));
}

int QCompleter_CompletionMode(const QCompleter* self) {
	return self->completionMode();
}

void QCompleter_SetFilterMode(QCompleter* self, int filterMode) {
	self->setFilterMode(static_cast<QFlags<Qt::MatchFlag>>(filterMode));
}

int QCompleter_FilterMode(const QCompleter* self) {
	return self->filterMode();
}

QAbstractItemView* QCompleter_Popup(const QCompleter* self) {
	return self->popup();
}

void QCompleter_SetPopup(QCompleter* self, QAbstractItemView* popup) {
	self->setPopup(popup);
}

void QCompleter_SetCaseSensitivity(QCompleter* self, int caseSensitivity) {
	self->setCaseSensitivity(static_cast<Qt::CaseSensitivity>(caseSensitivity));
}

int QCompleter_CaseSensitivity(const QCompleter* self) {
	return self->caseSensitivity();
}

void QCompleter_SetModelSorting(QCompleter* self, int sorting) {
	self->setModelSorting(static_cast<QCompleter::ModelSorting>(sorting));
}

int QCompleter_ModelSorting(const QCompleter* self) {
	return self->modelSorting();
}

void QCompleter_SetCompletionColumn(QCompleter* self, int column) {
	self->setCompletionColumn(column);
}

int QCompleter_CompletionColumn(const QCompleter* self) {
	return self->completionColumn();
}

void QCompleter_SetCompletionRole(QCompleter* self, int role) {
	self->setCompletionRole(role);
}

int QCompleter_CompletionRole(const QCompleter* self) {
	return self->completionRole();
}

bool QCompleter_WrapAround(const QCompleter* self) {
	return self->wrapAround();
}

int QCompleter_MaxVisibleItems(const QCompleter* self) {
	return self->maxVisibleItems();
}

void QCompleter_SetMaxVisibleItems(QCompleter* self, int maxItems) {
	self->setMaxVisibleItems(maxItems);
}

int QCompleter_CompletionCount(const QCompleter* self) {
	return self->completionCount();
}

bool QCompleter_SetCurrentRow(QCompleter* self, int row) {
	return self->setCurrentRow(row);
}

int QCompleter_CurrentRow(const QCompleter* self) {
	return self->currentRow();
}

QModelIndex* QCompleter_CurrentIndex(const QCompleter* self) {
	return new QModelIndex(self->currentIndex());
}

libqt_string QCompleter_CurrentCompletion(const QCompleter* self) {
	QString _ret = self->currentCompletion();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QAbstractItemModel* QCompleter_CompletionModel(const QCompleter* self) {
	return self->completionModel();
}

libqt_string QCompleter_CompletionPrefix(const QCompleter* self) {
	QString _ret = self->completionPrefix();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QCompleter_SetCompletionPrefix(QCompleter* self, const libqt_string prefix) {
	self->setCompletionPrefix(QString::fromUtf8(prefix.data, prefix.len));
}

void QCompleter_Complete(QCompleter* self) {
	self->complete();
}

void QCompleter_SetWrapAround(QCompleter* self, bool wrap) {
	self->setWrapAround(wrap);
}

libqt_string QCompleter_PathFromIndex(const QCompleter* self, const QModelIndex* index) {
	QString _ret = self->pathFromIndex(*index);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_list QCompleter_SplitPath(const QCompleter* self, const libqt_string path) {
	auto _ret = self->splitPath(QString::fromUtf8(path.data, path.len));
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		QByteArray _b = _ret[_i].toUtf8();
		libqt_string* _str = new libqt_string();
		_str->len = _b.length();
		_str->data = static_cast<const char*>(malloc(_str->len + 1));
		memcpy((void*)_str->data, _b.data(), _str->len);
		((char*)_str->data)[_str->len] = '\0';
		_data[_i] = _str;
	}
	return _arr;
}

void QCompleter_Activated(QCompleter* self, const libqt_string text) {
	self->activated(QString::fromUtf8(text.data, text.len));
}

void QCompleter_Activated2(QCompleter* self, const QModelIndex* index) {
	self->activated(*index);
}

void QCompleter_Highlighted(QCompleter* self, const libqt_string text) {
	self->highlighted(QString::fromUtf8(text.data, text.len));
}

void QCompleter_Highlighted2(QCompleter* self, const QModelIndex* index) {
	self->highlighted(*index);
}

libqt_string QCompleter_Tr2(const char* s, const char* c) {
	QString _ret = QCompleter::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QCompleter_Tr3(const char* s, const char* c, int n) {
	QString _ret = QCompleter::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QCompleter_Complete1(QCompleter* self, const QRect* rect) {
	self->complete(*rect);
}

// Base class handler implementation
libqt_string QCompleter_QBasePathFromIndex(const QCompleter* self, const QModelIndex* index) {
	auto* vqcompleter = dynamic_cast<const VirtualQCompleter*>(self);
	if (vqcompleter && vqcompleter->isVirtualQCompleter) {
vqcompleter->setQCompleter_PathFromIndex_IsBase(true);
	QString _ret = vqcompleter->pathFromIndex(*index);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}
}

// Auxiliary method to allow providing re-implementation
void QCompleter_OnPathFromIndex(const QCompleter* self, intptr_t slot) {
	auto* vqcompleter = dynamic_cast<const VirtualQCompleter*>(self);
	if (vqcompleter && vqcompleter->isVirtualQCompleter) {
vqcompleter->setQCompleter_PathFromIndex_Callback(reinterpret_cast<VirtualQCompleter::QCompleter_PathFromIndex_Callback>(slot));
}
}

// Base class handler implementation
libqt_list QCompleter_QBaseSplitPath(const QCompleter* self, const libqt_string path) {
	auto* vqcompleter = dynamic_cast<const VirtualQCompleter*>(self);
	if (vqcompleter && vqcompleter->isVirtualQCompleter) {
vqcompleter->setQCompleter_SplitPath_IsBase(true);
	auto _ret = vqcompleter->splitPath(QString::fromUtf8(path.data, path.len));
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		QByteArray _b = _ret[_i].toUtf8();
		libqt_string* _str = new libqt_string();
		_str->len = _b.length();
		_str->data = static_cast<const char*>(malloc(_str->len + 1));
		memcpy((void*)_str->data, _b.data(), _str->len);
		((char*)_str->data)[_str->len] = '\0';
		_data[_i] = _str;
	}
	return _arr;
}
}

// Auxiliary method to allow providing re-implementation
void QCompleter_OnSplitPath(const QCompleter* self, intptr_t slot) {
	auto* vqcompleter = dynamic_cast<const VirtualQCompleter*>(self);
	if (vqcompleter && vqcompleter->isVirtualQCompleter) {
vqcompleter->setQCompleter_SplitPath_Callback(reinterpret_cast<VirtualQCompleter::QCompleter_SplitPath_Callback>(slot));
}
}

// Derived class handler implementation
bool QCompleter_EventFilter(QCompleter* self, QObject* o, QEvent* e) {
	auto* vqcompleter = dynamic_cast<VirtualQCompleter*>(self);
	if (vqcompleter && vqcompleter->isVirtualQCompleter) {
	return vqcompleter->eventFilter(o, e);
	} else {
	return self->QCompleter::eventFilter(o, e);
}
}

// Base class handler implementation
bool QCompleter_QBaseEventFilter(QCompleter* self, QObject* o, QEvent* e) {
	auto* vqcompleter = dynamic_cast<VirtualQCompleter*>(self);
	if (vqcompleter && vqcompleter->isVirtualQCompleter) {
vqcompleter->setQCompleter_EventFilter_IsBase(true);
	return vqcompleter->eventFilter(o, e);
}
}

// Auxiliary method to allow providing re-implementation
void QCompleter_OnEventFilter(QCompleter* self, intptr_t slot) {
	auto* vqcompleter = dynamic_cast<VirtualQCompleter*>(self);
	if (vqcompleter && vqcompleter->isVirtualQCompleter) {
vqcompleter->setQCompleter_EventFilter_Callback(reinterpret_cast<VirtualQCompleter::QCompleter_EventFilter_Callback>(slot));
}
}

// Derived class handler implementation
bool QCompleter_Event(QCompleter* self, QEvent* param1) {
	auto* vqcompleter = dynamic_cast<VirtualQCompleter*>(self);
	if (vqcompleter && vqcompleter->isVirtualQCompleter) {
	return vqcompleter->event(param1);
	} else {
	return self->QCompleter::event(param1);
}
}

// Base class handler implementation
bool QCompleter_QBaseEvent(QCompleter* self, QEvent* param1) {
	auto* vqcompleter = dynamic_cast<VirtualQCompleter*>(self);
	if (vqcompleter && vqcompleter->isVirtualQCompleter) {
vqcompleter->setQCompleter_Event_IsBase(true);
	return vqcompleter->event(param1);
}
}

// Auxiliary method to allow providing re-implementation
void QCompleter_OnEvent(QCompleter* self, intptr_t slot) {
	auto* vqcompleter = dynamic_cast<VirtualQCompleter*>(self);
	if (vqcompleter && vqcompleter->isVirtualQCompleter) {
vqcompleter->setQCompleter_Event_Callback(reinterpret_cast<VirtualQCompleter::QCompleter_Event_Callback>(slot));
}
}

void QCompleter_Delete(QCompleter* self) {
    delete self;
}

