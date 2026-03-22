#pragma once
#ifndef QACCESSIBLE_BASE_H_C_LIBVIRTUAL
#define QACCESSIBLE_BASE_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QAccessible::ActivationObserver so that we can call protected methods
class VirtualQAccessibleActivationObserver : public QAccessible::ActivationObserver {

public:
	// Virtual class boolean flag
	bool isVirtualQAccessibleActivationObserver= true;

	// Virtual class public types (including callbacks)
	using QAccessible__ActivationObserver_AccessibilityActiveChanged_Callback = void (*)(QAccessible__ActivationObserver*, bool);

protected:
	// Instance callback storage
	mutable QAccessible__ActivationObserver_AccessibilityActiveChanged_Callback qaccessible__activationobserver_accessibilityactivechanged_callback = nullptr;

	// Instance base flags
    mutable bool qaccessible__activationobserver_accessibilityactivechanged_isbase = false;

public:
	VirtualQAccessibleActivationObserver(): QAccessible::ActivationObserver() {};
	VirtualQAccessibleActivationObserver(const QAccessible::ActivationObserver& param1): QAccessible::ActivationObserver(param1) {};

	~VirtualQAccessibleActivationObserver() {
		qaccessible__activationobserver_accessibilityactivechanged_callback = nullptr;
	}

// Callback setters
	inline void setQAccessible__ActivationObserver_AccessibilityActiveChanged_Callback(QAccessible__ActivationObserver_AccessibilityActiveChanged_Callback cb) const { qaccessible__activationobserver_accessibilityactivechanged_callback = cb; }

// Base flag setters
	inline void setQAccessible__ActivationObserver_AccessibilityActiveChanged_IsBase(bool value) const { qaccessible__activationobserver_accessibilityactivechanged_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void accessibilityActiveChanged(bool active) override {
		if (qaccessible__activationobserver_accessibilityactivechanged_callback != nullptr) {
			bool cbval1 = active;
			qaccessible__activationobserver_accessibilityactivechanged_callback(this, cbval1);
		}
	}
};

#endif


