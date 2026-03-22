#pragma once
#ifndef QSPLITTER_H_C_LIBVIRTUAL
#define QSPLITTER_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QSplitter so that we can call protected methods
class VirtualQSplitter final : public QSplitter {

public:
	// Virtual class boolean flag
	bool isVirtualQSplitter= true;

	// Virtual class public types (including callbacks)
	using QSplitter_SizeHint_Callback = QSize* (*)();
	using QSplitter_MinimumSizeHint_Callback = QSize* (*)();
	using QSplitter_CreateHandle_Callback = QSplitterHandle* (*)();
	using QSplitter_ChildEvent_Callback = void (*)(QSplitter*, QChildEvent*);
	using QSplitter_Event_Callback = bool (*)(QSplitter*, QEvent*);
	using QSplitter_ResizeEvent_Callback = void (*)(QSplitter*, QResizeEvent*);
	using QSplitter_ChangeEvent_Callback = void (*)(QSplitter*, QEvent*);
	using QSplitter_MoveSplitter_Callback = void (*)(QSplitter*, int, int);
	using QSplitter_SetRubberBand_Callback = void (*)(QSplitter*, int);
	using QSplitter_ClosestLegalPosition_Callback = int (*)(QSplitter*, int, int);

protected:
	// Instance callback storage
	mutable QSplitter_SizeHint_Callback qsplitter_sizehint_callback = nullptr;
	mutable QSplitter_MinimumSizeHint_Callback qsplitter_minimumsizehint_callback = nullptr;
	mutable QSplitter_CreateHandle_Callback qsplitter_createhandle_callback = nullptr;
	mutable QSplitter_ChildEvent_Callback qsplitter_childevent_callback = nullptr;
	mutable QSplitter_Event_Callback qsplitter_event_callback = nullptr;
	mutable QSplitter_ResizeEvent_Callback qsplitter_resizeevent_callback = nullptr;
	mutable QSplitter_ChangeEvent_Callback qsplitter_changeevent_callback = nullptr;
	mutable QSplitter_MoveSplitter_Callback qsplitter_movesplitter_callback = nullptr;
	mutable QSplitter_SetRubberBand_Callback qsplitter_setrubberband_callback = nullptr;
	mutable QSplitter_ClosestLegalPosition_Callback qsplitter_closestlegalposition_callback = nullptr;

	// Instance base flags
    mutable bool qsplitter_sizehint_isbase = false;
    mutable bool qsplitter_minimumsizehint_isbase = false;
    mutable bool qsplitter_createhandle_isbase = false;
    mutable bool qsplitter_childevent_isbase = false;
    mutable bool qsplitter_event_isbase = false;
    mutable bool qsplitter_resizeevent_isbase = false;
    mutable bool qsplitter_changeevent_isbase = false;
    mutable bool qsplitter_movesplitter_isbase = false;
    mutable bool qsplitter_setrubberband_isbase = false;
    mutable bool qsplitter_closestlegalposition_isbase = false;

public:
	VirtualQSplitter(QWidget* parent): QSplitter(parent) {};
	VirtualQSplitter(): QSplitter() {};
	VirtualQSplitter(Qt::Orientation param1): QSplitter(param1) {};
	VirtualQSplitter(Qt::Orientation param1, QWidget* parent): QSplitter(param1, parent) {};

	~VirtualQSplitter() {
		qsplitter_sizehint_callback = nullptr;
		qsplitter_minimumsizehint_callback = nullptr;
		qsplitter_createhandle_callback = nullptr;
		qsplitter_childevent_callback = nullptr;
		qsplitter_event_callback = nullptr;
		qsplitter_resizeevent_callback = nullptr;
		qsplitter_changeevent_callback = nullptr;
		qsplitter_movesplitter_callback = nullptr;
		qsplitter_setrubberband_callback = nullptr;
		qsplitter_closestlegalposition_callback = nullptr;
	}

// Callback setters
	inline void setQSplitter_SizeHint_Callback(QSplitter_SizeHint_Callback cb) const { qsplitter_sizehint_callback = cb; }
	inline void setQSplitter_MinimumSizeHint_Callback(QSplitter_MinimumSizeHint_Callback cb) const { qsplitter_minimumsizehint_callback = cb; }
	inline void setQSplitter_CreateHandle_Callback(QSplitter_CreateHandle_Callback cb) const { qsplitter_createhandle_callback = cb; }
	inline void setQSplitter_ChildEvent_Callback(QSplitter_ChildEvent_Callback cb) const { qsplitter_childevent_callback = cb; }
	inline void setQSplitter_Event_Callback(QSplitter_Event_Callback cb) const { qsplitter_event_callback = cb; }
	inline void setQSplitter_ResizeEvent_Callback(QSplitter_ResizeEvent_Callback cb) const { qsplitter_resizeevent_callback = cb; }
	inline void setQSplitter_ChangeEvent_Callback(QSplitter_ChangeEvent_Callback cb) const { qsplitter_changeevent_callback = cb; }
	inline void setQSplitter_MoveSplitter_Callback(QSplitter_MoveSplitter_Callback cb) const { qsplitter_movesplitter_callback = cb; }
	inline void setQSplitter_SetRubberBand_Callback(QSplitter_SetRubberBand_Callback cb) const { qsplitter_setrubberband_callback = cb; }
	inline void setQSplitter_ClosestLegalPosition_Callback(QSplitter_ClosestLegalPosition_Callback cb) const { qsplitter_closestlegalposition_callback = cb; }

// Base flag setters
	inline void setQSplitter_SizeHint_IsBase(bool value) const { qsplitter_sizehint_isbase = value; }
	inline void setQSplitter_MinimumSizeHint_IsBase(bool value) const { qsplitter_minimumsizehint_isbase = value; }
	inline void setQSplitter_CreateHandle_IsBase(bool value) const { qsplitter_createhandle_isbase = value; }
	inline void setQSplitter_ChildEvent_IsBase(bool value) const { qsplitter_childevent_isbase = value; }
	inline void setQSplitter_Event_IsBase(bool value) const { qsplitter_event_isbase = value; }
	inline void setQSplitter_ResizeEvent_IsBase(bool value) const { qsplitter_resizeevent_isbase = value; }
	inline void setQSplitter_ChangeEvent_IsBase(bool value) const { qsplitter_changeevent_isbase = value; }
	inline void setQSplitter_MoveSplitter_IsBase(bool value) const { qsplitter_movesplitter_isbase = value; }
	inline void setQSplitter_SetRubberBand_IsBase(bool value) const { qsplitter_setrubberband_isbase = value; }
	inline void setQSplitter_ClosestLegalPosition_IsBase(bool value) const { qsplitter_closestlegalposition_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QSize sizeHint() const override {
		if (qsplitter_sizehint_isbase) {
			qsplitter_sizehint_isbase = false;
			return QSplitter::sizeHint();
		} else if (qsplitter_sizehint_callback != nullptr) {
			QSize* callback_ret = qsplitter_sizehint_callback();
			return *callback_ret;
		} else {
			return QSplitter::sizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize minimumSizeHint() const override {
		if (qsplitter_minimumsizehint_isbase) {
			qsplitter_minimumsizehint_isbase = false;
			return QSplitter::minimumSizeHint();
		} else if (qsplitter_minimumsizehint_callback != nullptr) {
			QSize* callback_ret = qsplitter_minimumsizehint_callback();
			return *callback_ret;
		} else {
			return QSplitter::minimumSizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSplitterHandle* createHandle() override {
		if (qsplitter_createhandle_isbase) {
			qsplitter_createhandle_isbase = false;
			return QSplitter::createHandle();
		} else if (qsplitter_createhandle_callback != nullptr) {
			QSplitterHandle* callback_ret = qsplitter_createhandle_callback();
			return callback_ret;
		} else {
			return QSplitter::createHandle();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void childEvent(QChildEvent* param1) override {
		if (qsplitter_childevent_isbase) {
			qsplitter_childevent_isbase = false;
			QSplitter::childEvent(param1);
		} else if (qsplitter_childevent_callback != nullptr) {
			QChildEvent* cbval1 = param1;
			qsplitter_childevent_callback(this, cbval1);
		} else {
			QSplitter::childEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* param1) override {
		if (qsplitter_event_isbase) {
			qsplitter_event_isbase = false;
			return QSplitter::event(param1);
		} else if (qsplitter_event_callback != nullptr) {
			QEvent* cbval1 = param1;
			bool callback_ret = qsplitter_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QSplitter::event(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (qsplitter_resizeevent_isbase) {
			qsplitter_resizeevent_isbase = false;
			QSplitter::resizeEvent(param1);
		} else if (qsplitter_resizeevent_callback != nullptr) {
			QResizeEvent* cbval1 = param1;
			qsplitter_resizeevent_callback(this, cbval1);
		} else {
			QSplitter::resizeEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void changeEvent(QEvent* param1) override {
		if (qsplitter_changeevent_isbase) {
			qsplitter_changeevent_isbase = false;
			QSplitter::changeEvent(param1);
		} else if (qsplitter_changeevent_callback != nullptr) {
			QEvent* cbval1 = param1;
			qsplitter_changeevent_callback(this, cbval1);
		} else {
			QSplitter::changeEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	void moveSplitter(int pos, int index) {
		if (qsplitter_movesplitter_isbase) {
			qsplitter_movesplitter_isbase = false;
			QSplitter::moveSplitter(pos, index);
		} else if (qsplitter_movesplitter_callback != nullptr) {
			int cbval1 = pos;
			int cbval2 = index;
			qsplitter_movesplitter_callback(this, cbval1, cbval2);
		} else {
			QSplitter::moveSplitter(pos, index);
		}
	}

	// Virtual method for C ABI access and custom callback
	void setRubberBand(int position) {
		if (qsplitter_setrubberband_isbase) {
			qsplitter_setrubberband_isbase = false;
			QSplitter::setRubberBand(position);
		} else if (qsplitter_setrubberband_callback != nullptr) {
			int cbval1 = position;
			qsplitter_setrubberband_callback(this, cbval1);
		} else {
			QSplitter::setRubberBand(position);
		}
	}

	// Virtual method for C ABI access and custom callback
	int closestLegalPosition(int param1, int param2) {
		if (qsplitter_closestlegalposition_isbase) {
			qsplitter_closestlegalposition_isbase = false;
			return QSplitter::closestLegalPosition(param1, param2);
		} else if (qsplitter_closestlegalposition_callback != nullptr) {
			int cbval1 = param1;
			int cbval2 = param2;
			int callback_ret = qsplitter_closestlegalposition_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QSplitter::closestLegalPosition(param1, param2);
		}
	}

	// Friend functions
	friend QSplitterHandle* QSplitter_CreateHandle(QSplitter* self);
	friend QSplitterHandle* QSplitter_QBaseCreateHandle(QSplitter* self);
	friend void QSplitter_ChildEvent(QSplitter* self, QChildEvent* param1);
	friend void QSplitter_QBaseChildEvent(QSplitter* self, QChildEvent* param1);
	friend bool QSplitter_Event(QSplitter* self, QEvent* param1);
	friend bool QSplitter_QBaseEvent(QSplitter* self, QEvent* param1);
	friend void QSplitter_ResizeEvent(QSplitter* self, QResizeEvent* param1);
	friend void QSplitter_QBaseResizeEvent(QSplitter* self, QResizeEvent* param1);
	friend void QSplitter_ChangeEvent(QSplitter* self, QEvent* param1);
	friend void QSplitter_QBaseChangeEvent(QSplitter* self, QEvent* param1);
	friend void QSplitter_MoveSplitter(QSplitter* self, int pos, int index);
	friend void QSplitter_QBaseMoveSplitter(QSplitter* self, int pos, int index);
	friend void QSplitter_SetRubberBand(QSplitter* self, int position);
	friend void QSplitter_QBaseSetRubberBand(QSplitter* self, int position);
	friend int QSplitter_ClosestLegalPosition(QSplitter* self, int param1, int param2);
	friend int QSplitter_QBaseClosestLegalPosition(QSplitter* self, int param1, int param2);
};

// This class is a subclass of QSplitterHandle so that we can call protected methods
class VirtualQSplitterHandle final : public QSplitterHandle {

public:
	// Virtual class boolean flag
	bool isVirtualQSplitterHandle= true;

	// Virtual class public types (including callbacks)
	using QSplitterHandle_SizeHint_Callback = QSize* (*)();
	using QSplitterHandle_PaintEvent_Callback = void (*)(QSplitterHandle*, QPaintEvent*);
	using QSplitterHandle_MouseMoveEvent_Callback = void (*)(QSplitterHandle*, QMouseEvent*);
	using QSplitterHandle_MousePressEvent_Callback = void (*)(QSplitterHandle*, QMouseEvent*);
	using QSplitterHandle_MouseReleaseEvent_Callback = void (*)(QSplitterHandle*, QMouseEvent*);
	using QSplitterHandle_ResizeEvent_Callback = void (*)(QSplitterHandle*, QResizeEvent*);
	using QSplitterHandle_Event_Callback = bool (*)(QSplitterHandle*, QEvent*);
	using QSplitterHandle_MoveSplitter_Callback = void (*)(QSplitterHandle*, int);
	using QSplitterHandle_ClosestLegalPosition_Callback = int (*)(QSplitterHandle*, int);

protected:
	// Instance callback storage
	mutable QSplitterHandle_SizeHint_Callback qsplitterhandle_sizehint_callback = nullptr;
	mutable QSplitterHandle_PaintEvent_Callback qsplitterhandle_paintevent_callback = nullptr;
	mutable QSplitterHandle_MouseMoveEvent_Callback qsplitterhandle_mousemoveevent_callback = nullptr;
	mutable QSplitterHandle_MousePressEvent_Callback qsplitterhandle_mousepressevent_callback = nullptr;
	mutable QSplitterHandle_MouseReleaseEvent_Callback qsplitterhandle_mousereleaseevent_callback = nullptr;
	mutable QSplitterHandle_ResizeEvent_Callback qsplitterhandle_resizeevent_callback = nullptr;
	mutable QSplitterHandle_Event_Callback qsplitterhandle_event_callback = nullptr;
	mutable QSplitterHandle_MoveSplitter_Callback qsplitterhandle_movesplitter_callback = nullptr;
	mutable QSplitterHandle_ClosestLegalPosition_Callback qsplitterhandle_closestlegalposition_callback = nullptr;

	// Instance base flags
    mutable bool qsplitterhandle_sizehint_isbase = false;
    mutable bool qsplitterhandle_paintevent_isbase = false;
    mutable bool qsplitterhandle_mousemoveevent_isbase = false;
    mutable bool qsplitterhandle_mousepressevent_isbase = false;
    mutable bool qsplitterhandle_mousereleaseevent_isbase = false;
    mutable bool qsplitterhandle_resizeevent_isbase = false;
    mutable bool qsplitterhandle_event_isbase = false;
    mutable bool qsplitterhandle_movesplitter_isbase = false;
    mutable bool qsplitterhandle_closestlegalposition_isbase = false;

public:
	VirtualQSplitterHandle(Qt::Orientation o, QSplitter* parent): QSplitterHandle(o, parent) {};

	~VirtualQSplitterHandle() {
		qsplitterhandle_sizehint_callback = nullptr;
		qsplitterhandle_paintevent_callback = nullptr;
		qsplitterhandle_mousemoveevent_callback = nullptr;
		qsplitterhandle_mousepressevent_callback = nullptr;
		qsplitterhandle_mousereleaseevent_callback = nullptr;
		qsplitterhandle_resizeevent_callback = nullptr;
		qsplitterhandle_event_callback = nullptr;
		qsplitterhandle_movesplitter_callback = nullptr;
		qsplitterhandle_closestlegalposition_callback = nullptr;
	}

// Callback setters
	inline void setQSplitterHandle_SizeHint_Callback(QSplitterHandle_SizeHint_Callback cb) const { qsplitterhandle_sizehint_callback = cb; }
	inline void setQSplitterHandle_PaintEvent_Callback(QSplitterHandle_PaintEvent_Callback cb) const { qsplitterhandle_paintevent_callback = cb; }
	inline void setQSplitterHandle_MouseMoveEvent_Callback(QSplitterHandle_MouseMoveEvent_Callback cb) const { qsplitterhandle_mousemoveevent_callback = cb; }
	inline void setQSplitterHandle_MousePressEvent_Callback(QSplitterHandle_MousePressEvent_Callback cb) const { qsplitterhandle_mousepressevent_callback = cb; }
	inline void setQSplitterHandle_MouseReleaseEvent_Callback(QSplitterHandle_MouseReleaseEvent_Callback cb) const { qsplitterhandle_mousereleaseevent_callback = cb; }
	inline void setQSplitterHandle_ResizeEvent_Callback(QSplitterHandle_ResizeEvent_Callback cb) const { qsplitterhandle_resizeevent_callback = cb; }
	inline void setQSplitterHandle_Event_Callback(QSplitterHandle_Event_Callback cb) const { qsplitterhandle_event_callback = cb; }
	inline void setQSplitterHandle_MoveSplitter_Callback(QSplitterHandle_MoveSplitter_Callback cb) const { qsplitterhandle_movesplitter_callback = cb; }
	inline void setQSplitterHandle_ClosestLegalPosition_Callback(QSplitterHandle_ClosestLegalPosition_Callback cb) const { qsplitterhandle_closestlegalposition_callback = cb; }

// Base flag setters
	inline void setQSplitterHandle_SizeHint_IsBase(bool value) const { qsplitterhandle_sizehint_isbase = value; }
	inline void setQSplitterHandle_PaintEvent_IsBase(bool value) const { qsplitterhandle_paintevent_isbase = value; }
	inline void setQSplitterHandle_MouseMoveEvent_IsBase(bool value) const { qsplitterhandle_mousemoveevent_isbase = value; }
	inline void setQSplitterHandle_MousePressEvent_IsBase(bool value) const { qsplitterhandle_mousepressevent_isbase = value; }
	inline void setQSplitterHandle_MouseReleaseEvent_IsBase(bool value) const { qsplitterhandle_mousereleaseevent_isbase = value; }
	inline void setQSplitterHandle_ResizeEvent_IsBase(bool value) const { qsplitterhandle_resizeevent_isbase = value; }
	inline void setQSplitterHandle_Event_IsBase(bool value) const { qsplitterhandle_event_isbase = value; }
	inline void setQSplitterHandle_MoveSplitter_IsBase(bool value) const { qsplitterhandle_movesplitter_isbase = value; }
	inline void setQSplitterHandle_ClosestLegalPosition_IsBase(bool value) const { qsplitterhandle_closestlegalposition_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QSize sizeHint() const override {
		if (qsplitterhandle_sizehint_isbase) {
			qsplitterhandle_sizehint_isbase = false;
			return QSplitterHandle::sizeHint();
		} else if (qsplitterhandle_sizehint_callback != nullptr) {
			QSize* callback_ret = qsplitterhandle_sizehint_callback();
			return *callback_ret;
		} else {
			return QSplitterHandle::sizeHint();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void paintEvent(QPaintEvent* param1) override {
		if (qsplitterhandle_paintevent_isbase) {
			qsplitterhandle_paintevent_isbase = false;
			QSplitterHandle::paintEvent(param1);
		} else if (qsplitterhandle_paintevent_callback != nullptr) {
			QPaintEvent* cbval1 = param1;
			qsplitterhandle_paintevent_callback(this, cbval1);
		} else {
			QSplitterHandle::paintEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseMoveEvent(QMouseEvent* param1) override {
		if (qsplitterhandle_mousemoveevent_isbase) {
			qsplitterhandle_mousemoveevent_isbase = false;
			QSplitterHandle::mouseMoveEvent(param1);
		} else if (qsplitterhandle_mousemoveevent_callback != nullptr) {
			QMouseEvent* cbval1 = param1;
			qsplitterhandle_mousemoveevent_callback(this, cbval1);
		} else {
			QSplitterHandle::mouseMoveEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mousePressEvent(QMouseEvent* param1) override {
		if (qsplitterhandle_mousepressevent_isbase) {
			qsplitterhandle_mousepressevent_isbase = false;
			QSplitterHandle::mousePressEvent(param1);
		} else if (qsplitterhandle_mousepressevent_callback != nullptr) {
			QMouseEvent* cbval1 = param1;
			qsplitterhandle_mousepressevent_callback(this, cbval1);
		} else {
			QSplitterHandle::mousePressEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void mouseReleaseEvent(QMouseEvent* param1) override {
		if (qsplitterhandle_mousereleaseevent_isbase) {
			qsplitterhandle_mousereleaseevent_isbase = false;
			QSplitterHandle::mouseReleaseEvent(param1);
		} else if (qsplitterhandle_mousereleaseevent_callback != nullptr) {
			QMouseEvent* cbval1 = param1;
			qsplitterhandle_mousereleaseevent_callback(this, cbval1);
		} else {
			QSplitterHandle::mouseReleaseEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void resizeEvent(QResizeEvent* param1) override {
		if (qsplitterhandle_resizeevent_isbase) {
			qsplitterhandle_resizeevent_isbase = false;
			QSplitterHandle::resizeEvent(param1);
		} else if (qsplitterhandle_resizeevent_callback != nullptr) {
			QResizeEvent* cbval1 = param1;
			qsplitterhandle_resizeevent_callback(this, cbval1);
		} else {
			QSplitterHandle::resizeEvent(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* param1) override {
		if (qsplitterhandle_event_isbase) {
			qsplitterhandle_event_isbase = false;
			return QSplitterHandle::event(param1);
		} else if (qsplitterhandle_event_callback != nullptr) {
			QEvent* cbval1 = param1;
			bool callback_ret = qsplitterhandle_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QSplitterHandle::event(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	void moveSplitter(int p) {
		if (qsplitterhandle_movesplitter_isbase) {
			qsplitterhandle_movesplitter_isbase = false;
			QSplitterHandle::moveSplitter(p);
		} else if (qsplitterhandle_movesplitter_callback != nullptr) {
			int cbval1 = p;
			qsplitterhandle_movesplitter_callback(this, cbval1);
		} else {
			QSplitterHandle::moveSplitter(p);
		}
	}

	// Virtual method for C ABI access and custom callback
	int closestLegalPosition(int p) {
		if (qsplitterhandle_closestlegalposition_isbase) {
			qsplitterhandle_closestlegalposition_isbase = false;
			return QSplitterHandle::closestLegalPosition(p);
		} else if (qsplitterhandle_closestlegalposition_callback != nullptr) {
			int cbval1 = p;
			int callback_ret = qsplitterhandle_closestlegalposition_callback(this, cbval1);
			return callback_ret;
		} else {
			return QSplitterHandle::closestLegalPosition(p);
		}
	}

	// Friend functions
	friend void QSplitterHandle_PaintEvent(QSplitterHandle* self, QPaintEvent* param1);
	friend void QSplitterHandle_QBasePaintEvent(QSplitterHandle* self, QPaintEvent* param1);
	friend void QSplitterHandle_MouseMoveEvent(QSplitterHandle* self, QMouseEvent* param1);
	friend void QSplitterHandle_QBaseMouseMoveEvent(QSplitterHandle* self, QMouseEvent* param1);
	friend void QSplitterHandle_MousePressEvent(QSplitterHandle* self, QMouseEvent* param1);
	friend void QSplitterHandle_QBaseMousePressEvent(QSplitterHandle* self, QMouseEvent* param1);
	friend void QSplitterHandle_MouseReleaseEvent(QSplitterHandle* self, QMouseEvent* param1);
	friend void QSplitterHandle_QBaseMouseReleaseEvent(QSplitterHandle* self, QMouseEvent* param1);
	friend void QSplitterHandle_ResizeEvent(QSplitterHandle* self, QResizeEvent* param1);
	friend void QSplitterHandle_QBaseResizeEvent(QSplitterHandle* self, QResizeEvent* param1);
	friend bool QSplitterHandle_Event(QSplitterHandle* self, QEvent* param1);
	friend bool QSplitterHandle_QBaseEvent(QSplitterHandle* self, QEvent* param1);
	friend void QSplitterHandle_MoveSplitter(QSplitterHandle* self, int p);
	friend void QSplitterHandle_QBaseMoveSplitter(QSplitterHandle* self, int p);
	friend int QSplitterHandle_ClosestLegalPosition(QSplitterHandle* self, int p);
	friend int QSplitterHandle_QBaseClosestLegalPosition(QSplitterHandle* self, int p);
};

#endif


