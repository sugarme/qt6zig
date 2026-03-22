#pragma once
#ifndef QTESTSUPPORT_GUI_H_C_LIBVIRTUAL
#define QTESTSUPPORT_GUI_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QTest::QTouchEventSequence so that we can call protected methods
class VirtualQTestQTouchEventSequence final : public QTest::QTouchEventSequence {

public:
	// Virtual class boolean flag
	bool isVirtualQTestQTouchEventSequence= true;

	// Virtual class public types (including callbacks)
	using QTest__QTouchEventSequence_Stationary_Callback = QTest__QTouchEventSequence* (*)(QTest__QTouchEventSequence*, int);
	using QTest__QTouchEventSequence_Commit_Callback = bool (*)(QTest__QTouchEventSequence*, bool);
	using QTest__QTouchEventSequence_MapToScreen_Callback = QPoint* (*)(QTest__QTouchEventSequence*, QWindow*, const QPoint*);
	using QTest__QTouchEventSequence_Point_Callback = QEventPoint* (*)(QTest__QTouchEventSequence*, int);
	using QTest__QTouchEventSequence_PointOrPreviousPoint_Callback = QEventPoint* (*)(QTest__QTouchEventSequence*, int);
	using QTest__QTouchEventSequence_OperatorAssign_Callback = void (*)(QTest__QTouchEventSequence*, const QTest__QTouchEventSequence*);

protected:
	// Instance callback storage
	mutable QTest__QTouchEventSequence_Stationary_Callback qtest__qtoucheventsequence_stationary_callback = nullptr;
	mutable QTest__QTouchEventSequence_Commit_Callback qtest__qtoucheventsequence_commit_callback = nullptr;
	mutable QTest__QTouchEventSequence_MapToScreen_Callback qtest__qtoucheventsequence_maptoscreen_callback = nullptr;
	mutable QTest__QTouchEventSequence_Point_Callback qtest__qtoucheventsequence_point_callback = nullptr;
	mutable QTest__QTouchEventSequence_PointOrPreviousPoint_Callback qtest__qtoucheventsequence_pointorpreviouspoint_callback = nullptr;
	mutable QTest__QTouchEventSequence_OperatorAssign_Callback qtest__qtoucheventsequence_operatorassign_callback = nullptr;

	// Instance base flags
    mutable bool qtest__qtoucheventsequence_stationary_isbase = false;
    mutable bool qtest__qtoucheventsequence_commit_isbase = false;
    mutable bool qtest__qtoucheventsequence_maptoscreen_isbase = false;
    mutable bool qtest__qtoucheventsequence_point_isbase = false;
    mutable bool qtest__qtoucheventsequence_pointorpreviouspoint_isbase = false;
    mutable bool qtest__qtoucheventsequence_operatorassign_isbase = false;

public:
	VirtualQTestQTouchEventSequence(const QTest::QTouchEventSequence& param1): QTest::QTouchEventSequence(param1) {};

	~VirtualQTestQTouchEventSequence() {
		qtest__qtoucheventsequence_stationary_callback = nullptr;
		qtest__qtoucheventsequence_commit_callback = nullptr;
		qtest__qtoucheventsequence_maptoscreen_callback = nullptr;
		qtest__qtoucheventsequence_point_callback = nullptr;
		qtest__qtoucheventsequence_pointorpreviouspoint_callback = nullptr;
		qtest__qtoucheventsequence_operatorassign_callback = nullptr;
	}

// Callback setters
	inline void setQTest__QTouchEventSequence_Stationary_Callback(QTest__QTouchEventSequence_Stationary_Callback cb) const { qtest__qtoucheventsequence_stationary_callback = cb; }
	inline void setQTest__QTouchEventSequence_Commit_Callback(QTest__QTouchEventSequence_Commit_Callback cb) const { qtest__qtoucheventsequence_commit_callback = cb; }
	inline void setQTest__QTouchEventSequence_MapToScreen_Callback(QTest__QTouchEventSequence_MapToScreen_Callback cb) const { qtest__qtoucheventsequence_maptoscreen_callback = cb; }
	inline void setQTest__QTouchEventSequence_Point_Callback(QTest__QTouchEventSequence_Point_Callback cb) const { qtest__qtoucheventsequence_point_callback = cb; }
	inline void setQTest__QTouchEventSequence_PointOrPreviousPoint_Callback(QTest__QTouchEventSequence_PointOrPreviousPoint_Callback cb) const { qtest__qtoucheventsequence_pointorpreviouspoint_callback = cb; }
	inline void setQTest__QTouchEventSequence_OperatorAssign_Callback(QTest__QTouchEventSequence_OperatorAssign_Callback cb) const { qtest__qtoucheventsequence_operatorassign_callback = cb; }

// Base flag setters
	inline void setQTest__QTouchEventSequence_Stationary_IsBase(bool value) const { qtest__qtoucheventsequence_stationary_isbase = value; }
	inline void setQTest__QTouchEventSequence_Commit_IsBase(bool value) const { qtest__qtoucheventsequence_commit_isbase = value; }
	inline void setQTest__QTouchEventSequence_MapToScreen_IsBase(bool value) const { qtest__qtoucheventsequence_maptoscreen_isbase = value; }
	inline void setQTest__QTouchEventSequence_Point_IsBase(bool value) const { qtest__qtoucheventsequence_point_isbase = value; }
	inline void setQTest__QTouchEventSequence_PointOrPreviousPoint_IsBase(bool value) const { qtest__qtoucheventsequence_pointorpreviouspoint_isbase = value; }
	inline void setQTest__QTouchEventSequence_OperatorAssign_IsBase(bool value) const { qtest__qtoucheventsequence_operatorassign_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QTest::QTouchEventSequence& stationary(int touchId) override {
		if (qtest__qtoucheventsequence_stationary_isbase) {
			qtest__qtoucheventsequence_stationary_isbase = false;
			return QTest__QTouchEventSequence::stationary(touchId);
		} else if (qtest__qtoucheventsequence_stationary_callback != nullptr) {
			int cbval1 = touchId;
			QTest__QTouchEventSequence* callback_ret = qtest__qtoucheventsequence_stationary_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QTest__QTouchEventSequence::stationary(touchId);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool commit(bool processEvents) override {
		if (qtest__qtoucheventsequence_commit_isbase) {
			qtest__qtoucheventsequence_commit_isbase = false;
			return QTest__QTouchEventSequence::commit(processEvents);
		} else if (qtest__qtoucheventsequence_commit_callback != nullptr) {
			bool cbval1 = processEvents;
			bool callback_ret = qtest__qtoucheventsequence_commit_callback(this, cbval1);
			return callback_ret;
		} else {
			return QTest__QTouchEventSequence::commit(processEvents);
		}
	}

	// Virtual method for C ABI access and custom callback
	QPoint mapToScreen(QWindow* window, const QPoint& pt) {
		if (qtest__qtoucheventsequence_maptoscreen_isbase) {
			qtest__qtoucheventsequence_maptoscreen_isbase = false;
			return QTest__QTouchEventSequence::mapToScreen(window, pt);
		} else if (qtest__qtoucheventsequence_maptoscreen_callback != nullptr) {
			QWindow* cbval1 = window;
			const QPoint* cbval2 = (const QPoint*)&pt;
			QPoint* callback_ret = qtest__qtoucheventsequence_maptoscreen_callback(this, cbval1, cbval2);
			return *callback_ret;
		} else {
			return QTest__QTouchEventSequence::mapToScreen(window, pt);
		}
	}

	// Virtual method for C ABI access and custom callback
	QEventPoint& point(int touchId) {
		if (qtest__qtoucheventsequence_point_isbase) {
			qtest__qtoucheventsequence_point_isbase = false;
			return QTest__QTouchEventSequence::point(touchId);
		} else if (qtest__qtoucheventsequence_point_callback != nullptr) {
			int cbval1 = touchId;
			QEventPoint* callback_ret = qtest__qtoucheventsequence_point_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QTest__QTouchEventSequence::point(touchId);
		}
	}

	// Virtual method for C ABI access and custom callback
	QEventPoint& pointOrPreviousPoint(int touchId) {
		if (qtest__qtoucheventsequence_pointorpreviouspoint_isbase) {
			qtest__qtoucheventsequence_pointorpreviouspoint_isbase = false;
			return QTest__QTouchEventSequence::pointOrPreviousPoint(touchId);
		} else if (qtest__qtoucheventsequence_pointorpreviouspoint_callback != nullptr) {
			int cbval1 = touchId;
			QEventPoint* callback_ret = qtest__qtoucheventsequence_pointorpreviouspoint_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QTest__QTouchEventSequence::pointOrPreviousPoint(touchId);
		}
	}

	// Virtual method for C ABI access and custom callback
	void operator=(const QTest::QTouchEventSequence& param1) {
		if (qtest__qtoucheventsequence_operatorassign_isbase) {
			qtest__qtoucheventsequence_operatorassign_isbase = false;
			QTest__QTouchEventSequence::operator=(param1);
		} else if (qtest__qtoucheventsequence_operatorassign_callback != nullptr) {
			const QTest__QTouchEventSequence* cbval1 = (const QTest__QTouchEventSequence*)&param1;
			qtest__qtoucheventsequence_operatorassign_callback(this, cbval1);
		} else {
			QTest__QTouchEventSequence::operator=(param1);
		}
	}

	// Friend functions
	friend QPoint* QTest__QTouchEventSequence_MapToScreen(QTest::QTouchEventSequence* self, QWindow* window, const QPoint* pt);
	friend QPoint* QTest__QTouchEventSequence_QBaseMapToScreen(QTest::QTouchEventSequence* self, QWindow* window, const QPoint* pt);
	friend QEventPoint* QTest__QTouchEventSequence_Point(QTest::QTouchEventSequence* self, int touchId);
	friend QEventPoint* QTest__QTouchEventSequence_QBasePoint(QTest::QTouchEventSequence* self, int touchId);
	friend QEventPoint* QTest__QTouchEventSequence_PointOrPreviousPoint(QTest::QTouchEventSequence* self, int touchId);
	friend QEventPoint* QTest__QTouchEventSequence_QBasePointOrPreviousPoint(QTest::QTouchEventSequence* self, int touchId);
	friend void QTest__QTouchEventSequence_OperatorAssign(QTest::QTouchEventSequence* self, const QTest__QTouchEventSequence* param1);
	friend void QTest__QTouchEventSequence_QBaseOperatorAssign(QTest::QTouchEventSequence* self, const QTest__QTouchEventSequence* param1);
};

#endif


