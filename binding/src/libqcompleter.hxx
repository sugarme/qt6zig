#pragma once
#ifndef QCOMPLETER_H_C_LIBVIRTUAL
#define QCOMPLETER_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QCompleter so that we can call protected methods
class VirtualQCompleter final : public QCompleter {

public:
	// Virtual class boolean flag
	bool isVirtualQCompleter= true;

	// Virtual class public types (including callbacks)
	using QCompleter_PathFromIndex_Callback = const char* (*)(const QCompleter*, const QModelIndex*);
	using QCompleter_SplitPath_Callback = libqt_list (*)(const QCompleter*, libqt_string);
	using QCompleter_EventFilter_Callback = bool (*)(QCompleter*, QObject*, QEvent*);
	using QCompleter_Event_Callback = bool (*)(QCompleter*, QEvent*);

protected:
	// Instance callback storage
	mutable QCompleter_PathFromIndex_Callback qcompleter_pathfromindex_callback = nullptr;
	mutable QCompleter_SplitPath_Callback qcompleter_splitpath_callback = nullptr;
	mutable QCompleter_EventFilter_Callback qcompleter_eventfilter_callback = nullptr;
	mutable QCompleter_Event_Callback qcompleter_event_callback = nullptr;

	// Instance base flags
    mutable bool qcompleter_pathfromindex_isbase = false;
    mutable bool qcompleter_splitpath_isbase = false;
    mutable bool qcompleter_eventfilter_isbase = false;
    mutable bool qcompleter_event_isbase = false;

public:
	VirtualQCompleter(): QCompleter() {};
	VirtualQCompleter(QAbstractItemModel* model): QCompleter(model) {};
	VirtualQCompleter(const QList<QString>& completions): QCompleter(completions) {};
	VirtualQCompleter(QObject* parent): QCompleter(parent) {};
	VirtualQCompleter(QAbstractItemModel* model, QObject* parent): QCompleter(model, parent) {};
	VirtualQCompleter(const QList<QString>& completions, QObject* parent): QCompleter(completions, parent) {};

	~VirtualQCompleter() {
		qcompleter_pathfromindex_callback = nullptr;
		qcompleter_splitpath_callback = nullptr;
		qcompleter_eventfilter_callback = nullptr;
		qcompleter_event_callback = nullptr;
	}

// Callback setters
	inline void setQCompleter_PathFromIndex_Callback(QCompleter_PathFromIndex_Callback cb) const { qcompleter_pathfromindex_callback = cb; }
	inline void setQCompleter_SplitPath_Callback(QCompleter_SplitPath_Callback cb) const { qcompleter_splitpath_callback = cb; }
	inline void setQCompleter_EventFilter_Callback(QCompleter_EventFilter_Callback cb) const { qcompleter_eventfilter_callback = cb; }
	inline void setQCompleter_Event_Callback(QCompleter_Event_Callback cb) const { qcompleter_event_callback = cb; }

// Base flag setters
	inline void setQCompleter_PathFromIndex_IsBase(bool value) const { qcompleter_pathfromindex_isbase = value; }
	inline void setQCompleter_SplitPath_IsBase(bool value) const { qcompleter_splitpath_isbase = value; }
	inline void setQCompleter_EventFilter_IsBase(bool value) const { qcompleter_eventfilter_isbase = value; }
	inline void setQCompleter_Event_IsBase(bool value) const { qcompleter_event_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QString pathFromIndex(const QModelIndex& index) const override {
		if (qcompleter_pathfromindex_isbase) {
			qcompleter_pathfromindex_isbase = false;
			return QCompleter::pathFromIndex(index);
		} else if (qcompleter_pathfromindex_callback != nullptr) {
			const QModelIndex* cbval1 = (const QModelIndex*)&index;
			const char* callback_ret = qcompleter_pathfromindex_callback(this, cbval1);
			return QString::fromUtf8(callback_ret.data, callback_ret.len);
		} else {
			return QCompleter::pathFromIndex(index);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QList<QString> splitPath(const QString& path) const override {
		if (qcompleter_splitpath_isbase) {
			qcompleter_splitpath_isbase = false;
			return QCompleter::splitPath(path);
		} else if (qcompleter_splitpath_callback != nullptr) {
			QByteArray path_qb = path.toUtf8();
			libqt_string cbval1;
			cbval1.len = path_qb.length();
			cbval1.data = static_cast<const char*>(path_qb.constData());
			libqt_list callback_ret = qcompleter_splitpath_callback(this, cbval1);
			return QList<QString>();
		} else {
			return QCompleter::splitPath(path);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool eventFilter(QObject* o, QEvent* e) override {
		if (qcompleter_eventfilter_isbase) {
			qcompleter_eventfilter_isbase = false;
			return QCompleter::eventFilter(o, e);
		} else if (qcompleter_eventfilter_callback != nullptr) {
			QObject* cbval1 = o;
			QEvent* cbval2 = e;
			bool callback_ret = qcompleter_eventfilter_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QCompleter::eventFilter(o, e);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* param1) override {
		if (qcompleter_event_isbase) {
			qcompleter_event_isbase = false;
			return QCompleter::event(param1);
		} else if (qcompleter_event_callback != nullptr) {
			QEvent* cbval1 = param1;
			bool callback_ret = qcompleter_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QCompleter::event(param1);
		}
	}

	// Friend functions
	friend bool QCompleter_EventFilter(QCompleter* self, QObject* o, QEvent* e);
	friend bool QCompleter_QBaseEventFilter(QCompleter* self, QObject* o, QEvent* e);
	friend bool QCompleter_Event(QCompleter* self, QEvent* param1);
	friend bool QCompleter_QBaseEvent(QCompleter* self, QEvent* param1);
};

#endif


