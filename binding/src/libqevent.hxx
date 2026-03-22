#pragma once
#ifndef QEVENT_H_C_LIBVIRTUAL
#define QEVENT_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QInputEvent so that we can call protected methods
class VirtualQInputEvent final : public QInputEvent {

public:
	// Virtual class boolean flag
	bool isVirtualQInputEvent= true;

	// Virtual class public types (including callbacks)
	using QInputEvent_SetTimestamp_Callback = void (*)(QInputEvent*, unsigned long long);
	using QInputEvent_OperatorAssign_Callback = void (*)(QInputEvent*, const QInputEvent*);

protected:
	// Instance callback storage
	mutable QInputEvent_SetTimestamp_Callback qinputevent_settimestamp_callback = nullptr;
	mutable QInputEvent_OperatorAssign_Callback qinputevent_operatorassign_callback = nullptr;

	// Instance base flags
    mutable bool qinputevent_settimestamp_isbase = false;
    mutable bool qinputevent_operatorassign_isbase = false;

public:
	VirtualQInputEvent(QMetaType::Type typeVal, const QInputDevice* m_dev): QInputEvent(typeVal, m_dev) {};
	VirtualQInputEvent(QMetaType::Type typeVal, const QInputDevice* m_dev, Qt::KeyboardModifiers modifiers): QInputEvent(typeVal, m_dev, modifiers) {};

	~VirtualQInputEvent() {
		qinputevent_settimestamp_callback = nullptr;
		qinputevent_operatorassign_callback = nullptr;
	}

// Callback setters
	inline void setQInputEvent_SetTimestamp_Callback(QInputEvent_SetTimestamp_Callback cb) const { qinputevent_settimestamp_callback = cb; }
	inline void setQInputEvent_OperatorAssign_Callback(QInputEvent_OperatorAssign_Callback cb) const { qinputevent_operatorassign_callback = cb; }

// Base flag setters
	inline void setQInputEvent_SetTimestamp_IsBase(bool value) const { qinputevent_settimestamp_isbase = value; }
	inline void setQInputEvent_OperatorAssign_IsBase(bool value) const { qinputevent_operatorassign_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void setTimestamp(quint64 timestamp) override {
		if (qinputevent_settimestamp_isbase) {
			qinputevent_settimestamp_isbase = false;
			QInputEvent::setTimestamp(timestamp);
		} else if (qinputevent_settimestamp_callback != nullptr) {
			unsigned long long cbval1 = timestamp;
			qinputevent_settimestamp_callback(this, cbval1);
		} else {
			QInputEvent::setTimestamp(timestamp);
		}
	}

	// Virtual method for C ABI access and custom callback
	void operator=(const QInputEvent& other) {
		if (qinputevent_operatorassign_isbase) {
			qinputevent_operatorassign_isbase = false;
			QInputEvent::operator=(other);
		} else if (qinputevent_operatorassign_callback != nullptr) {
			const QInputEvent* cbval1 = (const QInputEvent*)&other;
			qinputevent_operatorassign_callback(this, cbval1);
		} else {
			QInputEvent::operator=(other);
		}
	}

	// Friend functions
	friend void QInputEvent_OperatorAssign(QInputEvent* self, const QInputEvent* other);
	friend void QInputEvent_QBaseOperatorAssign(QInputEvent* self, const QInputEvent* other);
};

// This class is a subclass of QPointerEvent so that we can call protected methods
class VirtualQPointerEvent final : public QPointerEvent {

public:
	// Virtual class boolean flag
	bool isVirtualQPointerEvent= true;

	// Virtual class public types (including callbacks)
	using QPointerEvent_SetTimestamp_Callback = void (*)(QPointerEvent*, unsigned long long);
	using QPointerEvent_IsBeginEvent_Callback = bool (*)();
	using QPointerEvent_IsUpdateEvent_Callback = bool (*)();
	using QPointerEvent_IsEndEvent_Callback = bool (*)();
	using QPointerEvent_SetAccepted_Callback = void (*)(QPointerEvent*, bool);
	using QPointerEvent_OperatorAssign_Callback = void (*)(QPointerEvent*, const QPointerEvent*);

protected:
	// Instance callback storage
	mutable QPointerEvent_SetTimestamp_Callback qpointerevent_settimestamp_callback = nullptr;
	mutable QPointerEvent_IsBeginEvent_Callback qpointerevent_isbeginevent_callback = nullptr;
	mutable QPointerEvent_IsUpdateEvent_Callback qpointerevent_isupdateevent_callback = nullptr;
	mutable QPointerEvent_IsEndEvent_Callback qpointerevent_isendevent_callback = nullptr;
	mutable QPointerEvent_SetAccepted_Callback qpointerevent_setaccepted_callback = nullptr;
	mutable QPointerEvent_OperatorAssign_Callback qpointerevent_operatorassign_callback = nullptr;

	// Instance base flags
    mutable bool qpointerevent_settimestamp_isbase = false;
    mutable bool qpointerevent_isbeginevent_isbase = false;
    mutable bool qpointerevent_isupdateevent_isbase = false;
    mutable bool qpointerevent_isendevent_isbase = false;
    mutable bool qpointerevent_setaccepted_isbase = false;
    mutable bool qpointerevent_operatorassign_isbase = false;

public:
	VirtualQPointerEvent(QMetaType::Type typeVal, const QPointingDevice* dev): QPointerEvent(typeVal, dev) {};
	VirtualQPointerEvent(QMetaType::Type typeVal, const QPointingDevice* dev, Qt::KeyboardModifiers modifiers): QPointerEvent(typeVal, dev, modifiers) {};
	VirtualQPointerEvent(QMetaType::Type typeVal, const QPointingDevice* dev, Qt::KeyboardModifiers modifiers, const QList<QEventPoint>& points): QPointerEvent(typeVal, dev, modifiers, points) {};

	~VirtualQPointerEvent() {
		qpointerevent_settimestamp_callback = nullptr;
		qpointerevent_isbeginevent_callback = nullptr;
		qpointerevent_isupdateevent_callback = nullptr;
		qpointerevent_isendevent_callback = nullptr;
		qpointerevent_setaccepted_callback = nullptr;
		qpointerevent_operatorassign_callback = nullptr;
	}

// Callback setters
	inline void setQPointerEvent_SetTimestamp_Callback(QPointerEvent_SetTimestamp_Callback cb) const { qpointerevent_settimestamp_callback = cb; }
	inline void setQPointerEvent_IsBeginEvent_Callback(QPointerEvent_IsBeginEvent_Callback cb) const { qpointerevent_isbeginevent_callback = cb; }
	inline void setQPointerEvent_IsUpdateEvent_Callback(QPointerEvent_IsUpdateEvent_Callback cb) const { qpointerevent_isupdateevent_callback = cb; }
	inline void setQPointerEvent_IsEndEvent_Callback(QPointerEvent_IsEndEvent_Callback cb) const { qpointerevent_isendevent_callback = cb; }
	inline void setQPointerEvent_SetAccepted_Callback(QPointerEvent_SetAccepted_Callback cb) const { qpointerevent_setaccepted_callback = cb; }
	inline void setQPointerEvent_OperatorAssign_Callback(QPointerEvent_OperatorAssign_Callback cb) const { qpointerevent_operatorassign_callback = cb; }

// Base flag setters
	inline void setQPointerEvent_SetTimestamp_IsBase(bool value) const { qpointerevent_settimestamp_isbase = value; }
	inline void setQPointerEvent_IsBeginEvent_IsBase(bool value) const { qpointerevent_isbeginevent_isbase = value; }
	inline void setQPointerEvent_IsUpdateEvent_IsBase(bool value) const { qpointerevent_isupdateevent_isbase = value; }
	inline void setQPointerEvent_IsEndEvent_IsBase(bool value) const { qpointerevent_isendevent_isbase = value; }
	inline void setQPointerEvent_SetAccepted_IsBase(bool value) const { qpointerevent_setaccepted_isbase = value; }
	inline void setQPointerEvent_OperatorAssign_IsBase(bool value) const { qpointerevent_operatorassign_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void setTimestamp(quint64 timestamp) override {
		if (qpointerevent_settimestamp_isbase) {
			qpointerevent_settimestamp_isbase = false;
			QPointerEvent::setTimestamp(timestamp);
		} else if (qpointerevent_settimestamp_callback != nullptr) {
			unsigned long long cbval1 = timestamp;
			qpointerevent_settimestamp_callback(this, cbval1);
		} else {
			QPointerEvent::setTimestamp(timestamp);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool isBeginEvent() const override {
		if (qpointerevent_isbeginevent_isbase) {
			qpointerevent_isbeginevent_isbase = false;
			return QPointerEvent::isBeginEvent();
		} else if (qpointerevent_isbeginevent_callback != nullptr) {
			bool callback_ret = qpointerevent_isbeginevent_callback();
			return callback_ret;
		} else {
			return QPointerEvent::isBeginEvent();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool isUpdateEvent() const override {
		if (qpointerevent_isupdateevent_isbase) {
			qpointerevent_isupdateevent_isbase = false;
			return QPointerEvent::isUpdateEvent();
		} else if (qpointerevent_isupdateevent_callback != nullptr) {
			bool callback_ret = qpointerevent_isupdateevent_callback();
			return callback_ret;
		} else {
			return QPointerEvent::isUpdateEvent();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool isEndEvent() const override {
		if (qpointerevent_isendevent_isbase) {
			qpointerevent_isendevent_isbase = false;
			return QPointerEvent::isEndEvent();
		} else if (qpointerevent_isendevent_callback != nullptr) {
			bool callback_ret = qpointerevent_isendevent_callback();
			return callback_ret;
		} else {
			return QPointerEvent::isEndEvent();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setAccepted(bool accepted) override {
		if (qpointerevent_setaccepted_isbase) {
			qpointerevent_setaccepted_isbase = false;
			QPointerEvent::setAccepted(accepted);
		} else if (qpointerevent_setaccepted_callback != nullptr) {
			bool cbval1 = accepted;
			qpointerevent_setaccepted_callback(this, cbval1);
		} else {
			QPointerEvent::setAccepted(accepted);
		}
	}

	// Virtual method for C ABI access and custom callback
	void operator=(const QPointerEvent& other) {
		if (qpointerevent_operatorassign_isbase) {
			qpointerevent_operatorassign_isbase = false;
			QPointerEvent::operator=(other);
		} else if (qpointerevent_operatorassign_callback != nullptr) {
			const QPointerEvent* cbval1 = (const QPointerEvent*)&other;
			qpointerevent_operatorassign_callback(this, cbval1);
		} else {
			QPointerEvent::operator=(other);
		}
	}

	// Friend functions
	friend void QPointerEvent_OperatorAssign(QPointerEvent* self, const QPointerEvent* other);
	friend void QPointerEvent_QBaseOperatorAssign(QPointerEvent* self, const QPointerEvent* other);
};

// This class is a subclass of QSinglePointEvent so that we can call protected methods
class VirtualQSinglePointEvent final : public QSinglePointEvent {

public:
	// Virtual class boolean flag
	bool isVirtualQSinglePointEvent= true;

	// Virtual class public types (including callbacks)
	using QSinglePointEvent_IsBeginEvent_Callback = bool (*)();
	using QSinglePointEvent_IsUpdateEvent_Callback = bool (*)();
	using QSinglePointEvent_IsEndEvent_Callback = bool (*)();
	using QSinglePointEvent_OperatorAssign_Callback = void (*)(QSinglePointEvent*, const QSinglePointEvent*);

protected:
	// Instance callback storage
	mutable QSinglePointEvent_IsBeginEvent_Callback qsinglepointevent_isbeginevent_callback = nullptr;
	mutable QSinglePointEvent_IsUpdateEvent_Callback qsinglepointevent_isupdateevent_callback = nullptr;
	mutable QSinglePointEvent_IsEndEvent_Callback qsinglepointevent_isendevent_callback = nullptr;
	mutable QSinglePointEvent_OperatorAssign_Callback qsinglepointevent_operatorassign_callback = nullptr;

	// Instance base flags
    mutable bool qsinglepointevent_isbeginevent_isbase = false;
    mutable bool qsinglepointevent_isupdateevent_isbase = false;
    mutable bool qsinglepointevent_isendevent_isbase = false;
    mutable bool qsinglepointevent_operatorassign_isbase = false;

public:

	~VirtualQSinglePointEvent() {
		qsinglepointevent_isbeginevent_callback = nullptr;
		qsinglepointevent_isupdateevent_callback = nullptr;
		qsinglepointevent_isendevent_callback = nullptr;
		qsinglepointevent_operatorassign_callback = nullptr;
	}

// Callback setters
	inline void setQSinglePointEvent_IsBeginEvent_Callback(QSinglePointEvent_IsBeginEvent_Callback cb) const { qsinglepointevent_isbeginevent_callback = cb; }
	inline void setQSinglePointEvent_IsUpdateEvent_Callback(QSinglePointEvent_IsUpdateEvent_Callback cb) const { qsinglepointevent_isupdateevent_callback = cb; }
	inline void setQSinglePointEvent_IsEndEvent_Callback(QSinglePointEvent_IsEndEvent_Callback cb) const { qsinglepointevent_isendevent_callback = cb; }
	inline void setQSinglePointEvent_OperatorAssign_Callback(QSinglePointEvent_OperatorAssign_Callback cb) const { qsinglepointevent_operatorassign_callback = cb; }

// Base flag setters
	inline void setQSinglePointEvent_IsBeginEvent_IsBase(bool value) const { qsinglepointevent_isbeginevent_isbase = value; }
	inline void setQSinglePointEvent_IsUpdateEvent_IsBase(bool value) const { qsinglepointevent_isupdateevent_isbase = value; }
	inline void setQSinglePointEvent_IsEndEvent_IsBase(bool value) const { qsinglepointevent_isendevent_isbase = value; }
	inline void setQSinglePointEvent_OperatorAssign_IsBase(bool value) const { qsinglepointevent_operatorassign_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool isBeginEvent() const override {
		if (qsinglepointevent_isbeginevent_isbase) {
			qsinglepointevent_isbeginevent_isbase = false;
			return QSinglePointEvent::isBeginEvent();
		} else if (qsinglepointevent_isbeginevent_callback != nullptr) {
			bool callback_ret = qsinglepointevent_isbeginevent_callback();
			return callback_ret;
		} else {
			return QSinglePointEvent::isBeginEvent();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool isUpdateEvent() const override {
		if (qsinglepointevent_isupdateevent_isbase) {
			qsinglepointevent_isupdateevent_isbase = false;
			return QSinglePointEvent::isUpdateEvent();
		} else if (qsinglepointevent_isupdateevent_callback != nullptr) {
			bool callback_ret = qsinglepointevent_isupdateevent_callback();
			return callback_ret;
		} else {
			return QSinglePointEvent::isUpdateEvent();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool isEndEvent() const override {
		if (qsinglepointevent_isendevent_isbase) {
			qsinglepointevent_isendevent_isbase = false;
			return QSinglePointEvent::isEndEvent();
		} else if (qsinglepointevent_isendevent_callback != nullptr) {
			bool callback_ret = qsinglepointevent_isendevent_callback();
			return callback_ret;
		} else {
			return QSinglePointEvent::isEndEvent();
		}
	}

	// Virtual method for C ABI access and custom callback
	void operator=(const QSinglePointEvent& other) {
		if (qsinglepointevent_operatorassign_isbase) {
			qsinglepointevent_operatorassign_isbase = false;
			QSinglePointEvent::operator=(other);
		} else if (qsinglepointevent_operatorassign_callback != nullptr) {
			const QSinglePointEvent* cbval1 = (const QSinglePointEvent*)&other;
			qsinglepointevent_operatorassign_callback(this, cbval1);
		} else {
			QSinglePointEvent::operator=(other);
		}
	}

	// Friend functions
	friend void QSinglePointEvent_OperatorAssign(QSinglePointEvent* self, const QSinglePointEvent* other);
	friend void QSinglePointEvent_QBaseOperatorAssign(QSinglePointEvent* self, const QSinglePointEvent* other);
};

// This class is a subclass of QHoverEvent so that we can call protected methods
class VirtualQHoverEvent final : public QHoverEvent {

public:
	// Virtual class boolean flag
	bool isVirtualQHoverEvent= true;

	// Virtual class public types (including callbacks)
	using QHoverEvent_IsUpdateEvent_Callback = bool (*)();
	using QHoverEvent_OperatorAssign_Callback = void (*)(QHoverEvent*, const QHoverEvent*);

protected:
	// Instance callback storage
	mutable QHoverEvent_IsUpdateEvent_Callback qhoverevent_isupdateevent_callback = nullptr;
	mutable QHoverEvent_OperatorAssign_Callback qhoverevent_operatorassign_callback = nullptr;

	// Instance base flags
    mutable bool qhoverevent_isupdateevent_isbase = false;
    mutable bool qhoverevent_operatorassign_isbase = false;

public:
	VirtualQHoverEvent(QMetaType::Type typeVal, const QPointF& scenePos, const QPointF& globalPos, const QPointF& oldPos): QHoverEvent(typeVal, scenePos, globalPos, oldPos) {};
	VirtualQHoverEvent(QMetaType::Type typeVal, const QPointF& pos, const QPointF& oldPos): QHoverEvent(typeVal, pos, oldPos) {};
	VirtualQHoverEvent(QMetaType::Type typeVal, const QPointF& scenePos, const QPointF& globalPos, const QPointF& oldPos, Qt::KeyboardModifiers modifiers): QHoverEvent(typeVal, scenePos, globalPos, oldPos, modifiers) {};
	VirtualQHoverEvent(QMetaType::Type typeVal, const QPointF& scenePos, const QPointF& globalPos, const QPointF& oldPos, Qt::KeyboardModifiers modifiers, const QPointingDevice* device): QHoverEvent(typeVal, scenePos, globalPos, oldPos, modifiers, device) {};
	VirtualQHoverEvent(QMetaType::Type typeVal, const QPointF& pos, const QPointF& oldPos, Qt::KeyboardModifiers modifiers): QHoverEvent(typeVal, pos, oldPos, modifiers) {};
	VirtualQHoverEvent(QMetaType::Type typeVal, const QPointF& pos, const QPointF& oldPos, Qt::KeyboardModifiers modifiers, const QPointingDevice* device): QHoverEvent(typeVal, pos, oldPos, modifiers, device) {};

	~VirtualQHoverEvent() {
		qhoverevent_isupdateevent_callback = nullptr;
		qhoverevent_operatorassign_callback = nullptr;
	}

// Callback setters
	inline void setQHoverEvent_IsUpdateEvent_Callback(QHoverEvent_IsUpdateEvent_Callback cb) const { qhoverevent_isupdateevent_callback = cb; }
	inline void setQHoverEvent_OperatorAssign_Callback(QHoverEvent_OperatorAssign_Callback cb) const { qhoverevent_operatorassign_callback = cb; }

// Base flag setters
	inline void setQHoverEvent_IsUpdateEvent_IsBase(bool value) const { qhoverevent_isupdateevent_isbase = value; }
	inline void setQHoverEvent_OperatorAssign_IsBase(bool value) const { qhoverevent_operatorassign_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool isUpdateEvent() const override {
		if (qhoverevent_isupdateevent_isbase) {
			qhoverevent_isupdateevent_isbase = false;
			return QHoverEvent::isUpdateEvent();
		} else if (qhoverevent_isupdateevent_callback != nullptr) {
			bool callback_ret = qhoverevent_isupdateevent_callback();
			return callback_ret;
		} else {
			return QHoverEvent::isUpdateEvent();
		}
	}

	// Virtual method for C ABI access and custom callback
	void operator=(const QHoverEvent& other) {
		if (qhoverevent_operatorassign_isbase) {
			qhoverevent_operatorassign_isbase = false;
			QHoverEvent::operator=(other);
		} else if (qhoverevent_operatorassign_callback != nullptr) {
			const QHoverEvent* cbval1 = (const QHoverEvent*)&other;
			qhoverevent_operatorassign_callback(this, cbval1);
		} else {
			QHoverEvent::operator=(other);
		}
	}

	// Friend functions
	friend void QHoverEvent_OperatorAssign(QHoverEvent* self, const QHoverEvent* other);
	friend void QHoverEvent_QBaseOperatorAssign(QHoverEvent* self, const QHoverEvent* other);
};

// This class is a subclass of QWheelEvent so that we can call protected methods
class VirtualQWheelEvent final : public QWheelEvent {

public:
	// Virtual class boolean flag
	bool isVirtualQWheelEvent= true;

	// Virtual class public types (including callbacks)
	using QWheelEvent_IsBeginEvent_Callback = bool (*)();
	using QWheelEvent_IsUpdateEvent_Callback = bool (*)();
	using QWheelEvent_IsEndEvent_Callback = bool (*)();
	using QWheelEvent_OperatorAssign_Callback = void (*)(QWheelEvent*, const QWheelEvent*);

protected:
	// Instance callback storage
	mutable QWheelEvent_IsBeginEvent_Callback qwheelevent_isbeginevent_callback = nullptr;
	mutable QWheelEvent_IsUpdateEvent_Callback qwheelevent_isupdateevent_callback = nullptr;
	mutable QWheelEvent_IsEndEvent_Callback qwheelevent_isendevent_callback = nullptr;
	mutable QWheelEvent_OperatorAssign_Callback qwheelevent_operatorassign_callback = nullptr;

	// Instance base flags
    mutable bool qwheelevent_isbeginevent_isbase = false;
    mutable bool qwheelevent_isupdateevent_isbase = false;
    mutable bool qwheelevent_isendevent_isbase = false;
    mutable bool qwheelevent_operatorassign_isbase = false;

public:
	VirtualQWheelEvent(const QPointF& pos, const QPointF& globalPos, QPoint pixelDelta, QPoint angleDelta, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, Qt::ScrollPhase phase, bool inverted): QWheelEvent(pos, globalPos, pixelDelta, angleDelta, buttons, modifiers, phase, inverted) {};
	VirtualQWheelEvent(const QPointF& pos, const QPointF& globalPos, QPoint pixelDelta, QPoint angleDelta, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, Qt::ScrollPhase phase, bool inverted, Qt::MouseEventSource source): QWheelEvent(pos, globalPos, pixelDelta, angleDelta, buttons, modifiers, phase, inverted, source) {};
	VirtualQWheelEvent(const QPointF& pos, const QPointF& globalPos, QPoint pixelDelta, QPoint angleDelta, Qt::MouseButtons buttons, Qt::KeyboardModifiers modifiers, Qt::ScrollPhase phase, bool inverted, Qt::MouseEventSource source, const QPointingDevice* device): QWheelEvent(pos, globalPos, pixelDelta, angleDelta, buttons, modifiers, phase, inverted, source, device) {};

	~VirtualQWheelEvent() {
		qwheelevent_isbeginevent_callback = nullptr;
		qwheelevent_isupdateevent_callback = nullptr;
		qwheelevent_isendevent_callback = nullptr;
		qwheelevent_operatorassign_callback = nullptr;
	}

// Callback setters
	inline void setQWheelEvent_IsBeginEvent_Callback(QWheelEvent_IsBeginEvent_Callback cb) const { qwheelevent_isbeginevent_callback = cb; }
	inline void setQWheelEvent_IsUpdateEvent_Callback(QWheelEvent_IsUpdateEvent_Callback cb) const { qwheelevent_isupdateevent_callback = cb; }
	inline void setQWheelEvent_IsEndEvent_Callback(QWheelEvent_IsEndEvent_Callback cb) const { qwheelevent_isendevent_callback = cb; }
	inline void setQWheelEvent_OperatorAssign_Callback(QWheelEvent_OperatorAssign_Callback cb) const { qwheelevent_operatorassign_callback = cb; }

// Base flag setters
	inline void setQWheelEvent_IsBeginEvent_IsBase(bool value) const { qwheelevent_isbeginevent_isbase = value; }
	inline void setQWheelEvent_IsUpdateEvent_IsBase(bool value) const { qwheelevent_isupdateevent_isbase = value; }
	inline void setQWheelEvent_IsEndEvent_IsBase(bool value) const { qwheelevent_isendevent_isbase = value; }
	inline void setQWheelEvent_OperatorAssign_IsBase(bool value) const { qwheelevent_operatorassign_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool isBeginEvent() const override {
		if (qwheelevent_isbeginevent_isbase) {
			qwheelevent_isbeginevent_isbase = false;
			return QWheelEvent::isBeginEvent();
		} else if (qwheelevent_isbeginevent_callback != nullptr) {
			bool callback_ret = qwheelevent_isbeginevent_callback();
			return callback_ret;
		} else {
			return QWheelEvent::isBeginEvent();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool isUpdateEvent() const override {
		if (qwheelevent_isupdateevent_isbase) {
			qwheelevent_isupdateevent_isbase = false;
			return QWheelEvent::isUpdateEvent();
		} else if (qwheelevent_isupdateevent_callback != nullptr) {
			bool callback_ret = qwheelevent_isupdateevent_callback();
			return callback_ret;
		} else {
			return QWheelEvent::isUpdateEvent();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool isEndEvent() const override {
		if (qwheelevent_isendevent_isbase) {
			qwheelevent_isendevent_isbase = false;
			return QWheelEvent::isEndEvent();
		} else if (qwheelevent_isendevent_callback != nullptr) {
			bool callback_ret = qwheelevent_isendevent_callback();
			return callback_ret;
		} else {
			return QWheelEvent::isEndEvent();
		}
	}

	// Virtual method for C ABI access and custom callback
	void operator=(const QWheelEvent& other) {
		if (qwheelevent_operatorassign_isbase) {
			qwheelevent_operatorassign_isbase = false;
			QWheelEvent::operator=(other);
		} else if (qwheelevent_operatorassign_callback != nullptr) {
			const QWheelEvent* cbval1 = (const QWheelEvent*)&other;
			qwheelevent_operatorassign_callback(this, cbval1);
		} else {
			QWheelEvent::operator=(other);
		}
	}

	// Friend functions
	friend void QWheelEvent_OperatorAssign(QWheelEvent* self, const QWheelEvent* other);
	friend void QWheelEvent_QBaseOperatorAssign(QWheelEvent* self, const QWheelEvent* other);
};

// This class is a subclass of QTouchEvent so that we can call protected methods
class VirtualQTouchEvent final : public QTouchEvent {

public:
	// Virtual class boolean flag
	bool isVirtualQTouchEvent= true;

	// Virtual class public types (including callbacks)
	using QTouchEvent_IsBeginEvent_Callback = bool (*)();
	using QTouchEvent_IsUpdateEvent_Callback = bool (*)();
	using QTouchEvent_IsEndEvent_Callback = bool (*)();
	using QTouchEvent_OperatorAssign_Callback = void (*)(QTouchEvent*, const QTouchEvent*);

protected:
	// Instance callback storage
	mutable QTouchEvent_IsBeginEvent_Callback qtouchevent_isbeginevent_callback = nullptr;
	mutable QTouchEvent_IsUpdateEvent_Callback qtouchevent_isupdateevent_callback = nullptr;
	mutable QTouchEvent_IsEndEvent_Callback qtouchevent_isendevent_callback = nullptr;
	mutable QTouchEvent_OperatorAssign_Callback qtouchevent_operatorassign_callback = nullptr;

	// Instance base flags
    mutable bool qtouchevent_isbeginevent_isbase = false;
    mutable bool qtouchevent_isupdateevent_isbase = false;
    mutable bool qtouchevent_isendevent_isbase = false;
    mutable bool qtouchevent_operatorassign_isbase = false;

public:
	VirtualQTouchEvent(QEvent::Type eventType): QTouchEvent(eventType) {};
	VirtualQTouchEvent(QEvent::Type eventType, const QPointingDevice* device, Qt::KeyboardModifiers modifiers, QEventPoint::States touchPointStates): QTouchEvent(eventType, device, modifiers, touchPointStates) {};
	VirtualQTouchEvent(QEvent::Type eventType, const QPointingDevice* device): QTouchEvent(eventType, device) {};
	VirtualQTouchEvent(QEvent::Type eventType, const QPointingDevice* device, Qt::KeyboardModifiers modifiers): QTouchEvent(eventType, device, modifiers) {};
	VirtualQTouchEvent(QEvent::Type eventType, const QPointingDevice* device, Qt::KeyboardModifiers modifiers, const QList<QEventPoint>& touchPoints): QTouchEvent(eventType, device, modifiers, touchPoints) {};
	VirtualQTouchEvent(QEvent::Type eventType, const QPointingDevice* device, Qt::KeyboardModifiers modifiers, QEventPoint::States touchPointStates, const QList<QEventPoint>& touchPoints): QTouchEvent(eventType, device, modifiers, touchPointStates, touchPoints) {};

	~VirtualQTouchEvent() {
		qtouchevent_isbeginevent_callback = nullptr;
		qtouchevent_isupdateevent_callback = nullptr;
		qtouchevent_isendevent_callback = nullptr;
		qtouchevent_operatorassign_callback = nullptr;
	}

// Callback setters
	inline void setQTouchEvent_IsBeginEvent_Callback(QTouchEvent_IsBeginEvent_Callback cb) const { qtouchevent_isbeginevent_callback = cb; }
	inline void setQTouchEvent_IsUpdateEvent_Callback(QTouchEvent_IsUpdateEvent_Callback cb) const { qtouchevent_isupdateevent_callback = cb; }
	inline void setQTouchEvent_IsEndEvent_Callback(QTouchEvent_IsEndEvent_Callback cb) const { qtouchevent_isendevent_callback = cb; }
	inline void setQTouchEvent_OperatorAssign_Callback(QTouchEvent_OperatorAssign_Callback cb) const { qtouchevent_operatorassign_callback = cb; }

// Base flag setters
	inline void setQTouchEvent_IsBeginEvent_IsBase(bool value) const { qtouchevent_isbeginevent_isbase = value; }
	inline void setQTouchEvent_IsUpdateEvent_IsBase(bool value) const { qtouchevent_isupdateevent_isbase = value; }
	inline void setQTouchEvent_IsEndEvent_IsBase(bool value) const { qtouchevent_isendevent_isbase = value; }
	inline void setQTouchEvent_OperatorAssign_IsBase(bool value) const { qtouchevent_operatorassign_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool isBeginEvent() const override {
		if (qtouchevent_isbeginevent_isbase) {
			qtouchevent_isbeginevent_isbase = false;
			return QTouchEvent::isBeginEvent();
		} else if (qtouchevent_isbeginevent_callback != nullptr) {
			bool callback_ret = qtouchevent_isbeginevent_callback();
			return callback_ret;
		} else {
			return QTouchEvent::isBeginEvent();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool isUpdateEvent() const override {
		if (qtouchevent_isupdateevent_isbase) {
			qtouchevent_isupdateevent_isbase = false;
			return QTouchEvent::isUpdateEvent();
		} else if (qtouchevent_isupdateevent_callback != nullptr) {
			bool callback_ret = qtouchevent_isupdateevent_callback();
			return callback_ret;
		} else {
			return QTouchEvent::isUpdateEvent();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool isEndEvent() const override {
		if (qtouchevent_isendevent_isbase) {
			qtouchevent_isendevent_isbase = false;
			return QTouchEvent::isEndEvent();
		} else if (qtouchevent_isendevent_callback != nullptr) {
			bool callback_ret = qtouchevent_isendevent_callback();
			return callback_ret;
		} else {
			return QTouchEvent::isEndEvent();
		}
	}

	// Virtual method for C ABI access and custom callback
	void operator=(const QTouchEvent& other) {
		if (qtouchevent_operatorassign_isbase) {
			qtouchevent_operatorassign_isbase = false;
			QTouchEvent::operator=(other);
		} else if (qtouchevent_operatorassign_callback != nullptr) {
			const QTouchEvent* cbval1 = (const QTouchEvent*)&other;
			qtouchevent_operatorassign_callback(this, cbval1);
		} else {
			QTouchEvent::operator=(other);
		}
	}

	// Friend functions
	friend void QTouchEvent_OperatorAssign(QTouchEvent* self, const QTouchEvent* other);
	friend void QTouchEvent_QBaseOperatorAssign(QTouchEvent* self, const QTouchEvent* other);
};

#endif


