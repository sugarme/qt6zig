#pragma once
#ifndef QTESTSUPPORT_WIDGETS_H_C_LIBVIRTUAL
#define QTESTSUPPORT_WIDGETS_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QTest::QTouchEventWidgetSequence so that we can call protected methods
class VirtualQTestQTouchEventWidgetSequence final : public QTest::QTouchEventWidgetSequence {

public:
	// Virtual class boolean flag
	bool isVirtualQTestQTouchEventWidgetSequence= true;

	// Virtual class public types (including callbacks)
	using QTest__QTouchEventWidgetSequence_Stationary_Callback = QTest__QTouchEventWidgetSequence* (*)(QTest__QTouchEventWidgetSequence*, int);
	using QTest__QTouchEventWidgetSequence_Commit_Callback = bool (*)(QTest__QTouchEventWidgetSequence*, bool);

protected:
	// Instance callback storage
	mutable QTest__QTouchEventWidgetSequence_Stationary_Callback qtest__qtoucheventwidgetsequence_stationary_callback = nullptr;
	mutable QTest__QTouchEventWidgetSequence_Commit_Callback qtest__qtoucheventwidgetsequence_commit_callback = nullptr;

	// Instance base flags
    mutable bool qtest__qtoucheventwidgetsequence_stationary_isbase = false;
    mutable bool qtest__qtoucheventwidgetsequence_commit_isbase = false;

public:
	VirtualQTestQTouchEventWidgetSequence(const QTest::QTouchEventWidgetSequence& param1): QTest::QTouchEventWidgetSequence(param1) {};

	~VirtualQTestQTouchEventWidgetSequence() {
		qtest__qtoucheventwidgetsequence_stationary_callback = nullptr;
		qtest__qtoucheventwidgetsequence_commit_callback = nullptr;
	}

// Callback setters
	inline void setQTest__QTouchEventWidgetSequence_Stationary_Callback(QTest__QTouchEventWidgetSequence_Stationary_Callback cb) const { qtest__qtoucheventwidgetsequence_stationary_callback = cb; }
	inline void setQTest__QTouchEventWidgetSequence_Commit_Callback(QTest__QTouchEventWidgetSequence_Commit_Callback cb) const { qtest__qtoucheventwidgetsequence_commit_callback = cb; }

// Base flag setters
	inline void setQTest__QTouchEventWidgetSequence_Stationary_IsBase(bool value) const { qtest__qtoucheventwidgetsequence_stationary_isbase = value; }
	inline void setQTest__QTouchEventWidgetSequence_Commit_IsBase(bool value) const { qtest__qtoucheventwidgetsequence_commit_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QTest::QTouchEventWidgetSequence& stationary(int touchId) override {
		if (qtest__qtoucheventwidgetsequence_stationary_isbase) {
			qtest__qtoucheventwidgetsequence_stationary_isbase = false;
			return QTest__QTouchEventWidgetSequence::stationary(touchId);
		} else if (qtest__qtoucheventwidgetsequence_stationary_callback != nullptr) {
			int cbval1 = touchId;
			QTest__QTouchEventWidgetSequence* callback_ret = qtest__qtoucheventwidgetsequence_stationary_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QTest__QTouchEventWidgetSequence::stationary(touchId);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool commit(bool processEvents) override {
		if (qtest__qtoucheventwidgetsequence_commit_isbase) {
			qtest__qtoucheventwidgetsequence_commit_isbase = false;
			return QTest__QTouchEventWidgetSequence::commit(processEvents);
		} else if (qtest__qtoucheventwidgetsequence_commit_callback != nullptr) {
			bool cbval1 = processEvents;
			bool callback_ret = qtest__qtoucheventwidgetsequence_commit_callback(this, cbval1);
			return callback_ret;
		} else {
			return QTest__QTouchEventWidgetSequence::commit(processEvents);
		}
	}
};

#endif


