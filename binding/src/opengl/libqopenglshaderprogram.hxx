#pragma once
#ifndef QOPENGLSHADERPROGRAM_H_C_LIBVIRTUAL
#define QOPENGLSHADERPROGRAM_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QOpenGLShaderProgram so that we can call protected methods
class VirtualQOpenGLShaderProgram final : public QOpenGLShaderProgram {

public:
	// Virtual class boolean flag
	bool isVirtualQOpenGLShaderProgram= true;

	// Virtual class public types (including callbacks)
	using QOpenGLShaderProgram_Link_Callback = bool (*)();

protected:
	// Instance callback storage
	mutable QOpenGLShaderProgram_Link_Callback qopenglshaderprogram_link_callback = nullptr;

	// Instance base flags
    mutable bool qopenglshaderprogram_link_isbase = false;

public:
	VirtualQOpenGLShaderProgram(): QOpenGLShaderProgram() {};
	VirtualQOpenGLShaderProgram(QObject* parent): QOpenGLShaderProgram(parent) {};

	~VirtualQOpenGLShaderProgram() {
		qopenglshaderprogram_link_callback = nullptr;
	}

// Callback setters
	inline void setQOpenGLShaderProgram_Link_Callback(QOpenGLShaderProgram_Link_Callback cb) const { qopenglshaderprogram_link_callback = cb; }

// Base flag setters
	inline void setQOpenGLShaderProgram_Link_IsBase(bool value) const { qopenglshaderprogram_link_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool link() override {
		if (qopenglshaderprogram_link_isbase) {
			qopenglshaderprogram_link_isbase = false;
			return QOpenGLShaderProgram::link();
		} else if (qopenglshaderprogram_link_callback != nullptr) {
			bool callback_ret = qopenglshaderprogram_link_callback();
			return callback_ret;
		} else {
			return QOpenGLShaderProgram::link();
		}
	}
};

#endif


