#pragma once
#ifndef QIMAGEIOHANDLER_H_C_LIBVIRTUAL
#define QIMAGEIOHANDLER_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QImageIOHandler so that we can call protected methods
class VirtualQImageIOHandler : public QImageIOHandler {

public:
	// Virtual class boolean flag
	bool isVirtualQImageIOHandler= true;

	// Virtual class public types (including callbacks)
	using QImageIOHandler_CanRead_Callback = bool (*)();
	using QImageIOHandler_Read_Callback = bool (*)(QImageIOHandler*, QImage*);
	using QImageIOHandler_Write_Callback = bool (*)(QImageIOHandler*, const QImage*);
	using QImageIOHandler_Option_Callback = QVariant* (*)(const QImageIOHandler*, int);
	using QImageIOHandler_SetOption_Callback = void (*)(QImageIOHandler*, int, const QVariant*);
	using QImageIOHandler_SupportsOption_Callback = bool (*)(const QImageIOHandler*, int);
	using QImageIOHandler_JumpToNextImage_Callback = bool (*)();
	using QImageIOHandler_JumpToImage_Callback = bool (*)(QImageIOHandler*, int);
	using QImageIOHandler_LoopCount_Callback = int (*)();
	using QImageIOHandler_ImageCount_Callback = int (*)();
	using QImageIOHandler_NextImageDelay_Callback = int (*)();
	using QImageIOHandler_CurrentImageNumber_Callback = int (*)();
	using QImageIOHandler_CurrentImageRect_Callback = QRect* (*)();

protected:
	// Instance callback storage
	mutable QImageIOHandler_CanRead_Callback qimageiohandler_canread_callback = nullptr;
	mutable QImageIOHandler_Read_Callback qimageiohandler_read_callback = nullptr;
	mutable QImageIOHandler_Write_Callback qimageiohandler_write_callback = nullptr;
	mutable QImageIOHandler_Option_Callback qimageiohandler_option_callback = nullptr;
	mutable QImageIOHandler_SetOption_Callback qimageiohandler_setoption_callback = nullptr;
	mutable QImageIOHandler_SupportsOption_Callback qimageiohandler_supportsoption_callback = nullptr;
	mutable QImageIOHandler_JumpToNextImage_Callback qimageiohandler_jumptonextimage_callback = nullptr;
	mutable QImageIOHandler_JumpToImage_Callback qimageiohandler_jumptoimage_callback = nullptr;
	mutable QImageIOHandler_LoopCount_Callback qimageiohandler_loopcount_callback = nullptr;
	mutable QImageIOHandler_ImageCount_Callback qimageiohandler_imagecount_callback = nullptr;
	mutable QImageIOHandler_NextImageDelay_Callback qimageiohandler_nextimagedelay_callback = nullptr;
	mutable QImageIOHandler_CurrentImageNumber_Callback qimageiohandler_currentimagenumber_callback = nullptr;
	mutable QImageIOHandler_CurrentImageRect_Callback qimageiohandler_currentimagerect_callback = nullptr;

	// Instance base flags
    mutable bool qimageiohandler_canread_isbase = false;
    mutable bool qimageiohandler_read_isbase = false;
    mutable bool qimageiohandler_write_isbase = false;
    mutable bool qimageiohandler_option_isbase = false;
    mutable bool qimageiohandler_setoption_isbase = false;
    mutable bool qimageiohandler_supportsoption_isbase = false;
    mutable bool qimageiohandler_jumptonextimage_isbase = false;
    mutable bool qimageiohandler_jumptoimage_isbase = false;
    mutable bool qimageiohandler_loopcount_isbase = false;
    mutable bool qimageiohandler_imagecount_isbase = false;
    mutable bool qimageiohandler_nextimagedelay_isbase = false;
    mutable bool qimageiohandler_currentimagenumber_isbase = false;
    mutable bool qimageiohandler_currentimagerect_isbase = false;

public:
	VirtualQImageIOHandler(): QImageIOHandler() {};

	~VirtualQImageIOHandler() {
		qimageiohandler_canread_callback = nullptr;
		qimageiohandler_read_callback = nullptr;
		qimageiohandler_write_callback = nullptr;
		qimageiohandler_option_callback = nullptr;
		qimageiohandler_setoption_callback = nullptr;
		qimageiohandler_supportsoption_callback = nullptr;
		qimageiohandler_jumptonextimage_callback = nullptr;
		qimageiohandler_jumptoimage_callback = nullptr;
		qimageiohandler_loopcount_callback = nullptr;
		qimageiohandler_imagecount_callback = nullptr;
		qimageiohandler_nextimagedelay_callback = nullptr;
		qimageiohandler_currentimagenumber_callback = nullptr;
		qimageiohandler_currentimagerect_callback = nullptr;
	}

// Callback setters
	inline void setQImageIOHandler_CanRead_Callback(QImageIOHandler_CanRead_Callback cb) const { qimageiohandler_canread_callback = cb; }
	inline void setQImageIOHandler_Read_Callback(QImageIOHandler_Read_Callback cb) const { qimageiohandler_read_callback = cb; }
	inline void setQImageIOHandler_Write_Callback(QImageIOHandler_Write_Callback cb) const { qimageiohandler_write_callback = cb; }
	inline void setQImageIOHandler_Option_Callback(QImageIOHandler_Option_Callback cb) const { qimageiohandler_option_callback = cb; }
	inline void setQImageIOHandler_SetOption_Callback(QImageIOHandler_SetOption_Callback cb) const { qimageiohandler_setoption_callback = cb; }
	inline void setQImageIOHandler_SupportsOption_Callback(QImageIOHandler_SupportsOption_Callback cb) const { qimageiohandler_supportsoption_callback = cb; }
	inline void setQImageIOHandler_JumpToNextImage_Callback(QImageIOHandler_JumpToNextImage_Callback cb) const { qimageiohandler_jumptonextimage_callback = cb; }
	inline void setQImageIOHandler_JumpToImage_Callback(QImageIOHandler_JumpToImage_Callback cb) const { qimageiohandler_jumptoimage_callback = cb; }
	inline void setQImageIOHandler_LoopCount_Callback(QImageIOHandler_LoopCount_Callback cb) const { qimageiohandler_loopcount_callback = cb; }
	inline void setQImageIOHandler_ImageCount_Callback(QImageIOHandler_ImageCount_Callback cb) const { qimageiohandler_imagecount_callback = cb; }
	inline void setQImageIOHandler_NextImageDelay_Callback(QImageIOHandler_NextImageDelay_Callback cb) const { qimageiohandler_nextimagedelay_callback = cb; }
	inline void setQImageIOHandler_CurrentImageNumber_Callback(QImageIOHandler_CurrentImageNumber_Callback cb) const { qimageiohandler_currentimagenumber_callback = cb; }
	inline void setQImageIOHandler_CurrentImageRect_Callback(QImageIOHandler_CurrentImageRect_Callback cb) const { qimageiohandler_currentimagerect_callback = cb; }

// Base flag setters
	inline void setQImageIOHandler_CanRead_IsBase(bool value) const { qimageiohandler_canread_isbase = value; }
	inline void setQImageIOHandler_Read_IsBase(bool value) const { qimageiohandler_read_isbase = value; }
	inline void setQImageIOHandler_Write_IsBase(bool value) const { qimageiohandler_write_isbase = value; }
	inline void setQImageIOHandler_Option_IsBase(bool value) const { qimageiohandler_option_isbase = value; }
	inline void setQImageIOHandler_SetOption_IsBase(bool value) const { qimageiohandler_setoption_isbase = value; }
	inline void setQImageIOHandler_SupportsOption_IsBase(bool value) const { qimageiohandler_supportsoption_isbase = value; }
	inline void setQImageIOHandler_JumpToNextImage_IsBase(bool value) const { qimageiohandler_jumptonextimage_isbase = value; }
	inline void setQImageIOHandler_JumpToImage_IsBase(bool value) const { qimageiohandler_jumptoimage_isbase = value; }
	inline void setQImageIOHandler_LoopCount_IsBase(bool value) const { qimageiohandler_loopcount_isbase = value; }
	inline void setQImageIOHandler_ImageCount_IsBase(bool value) const { qimageiohandler_imagecount_isbase = value; }
	inline void setQImageIOHandler_NextImageDelay_IsBase(bool value) const { qimageiohandler_nextimagedelay_isbase = value; }
	inline void setQImageIOHandler_CurrentImageNumber_IsBase(bool value) const { qimageiohandler_currentimagenumber_isbase = value; }
	inline void setQImageIOHandler_CurrentImageRect_IsBase(bool value) const { qimageiohandler_currentimagerect_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual bool canRead() const override {
		if (qimageiohandler_canread_callback != nullptr) {
			bool callback_ret = qimageiohandler_canread_callback();
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool read(QImage* image) override {
		if (qimageiohandler_read_callback != nullptr) {
			QImage* cbval1 = image;
			bool callback_ret = qimageiohandler_read_callback(this, cbval1);
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool write(const QImage& image) override {
		if (qimageiohandler_write_isbase) {
			qimageiohandler_write_isbase = false;
			return QImageIOHandler::write(image);
		} else if (qimageiohandler_write_callback != nullptr) {
			const QImage* cbval1 = (const QImage*)&image;
			bool callback_ret = qimageiohandler_write_callback(this, cbval1);
			return callback_ret;
		} else {
			return QImageIOHandler::write(image);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QVariant option(ImageOption option) const override {
		if (qimageiohandler_option_isbase) {
			qimageiohandler_option_isbase = false;
			return QImageIOHandler::option(option);
		} else if (qimageiohandler_option_callback != nullptr) {
			int cbval1 = static_cast<int>(option);
			QVariant* callback_ret = qimageiohandler_option_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QImageIOHandler::option(option);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setOption(ImageOption option, const QVariant& value) override {
		if (qimageiohandler_setoption_isbase) {
			qimageiohandler_setoption_isbase = false;
			QImageIOHandler::setOption(option, value);
		} else if (qimageiohandler_setoption_callback != nullptr) {
			int cbval1 = static_cast<int>(option);
			const QVariant* cbval2 = (const QVariant*)&value;
			qimageiohandler_setoption_callback(this, cbval1, cbval2);
		} else {
			QImageIOHandler::setOption(option, value);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool supportsOption(ImageOption option) const override {
		if (qimageiohandler_supportsoption_isbase) {
			qimageiohandler_supportsoption_isbase = false;
			return QImageIOHandler::supportsOption(option);
		} else if (qimageiohandler_supportsoption_callback != nullptr) {
			int cbval1 = static_cast<int>(option);
			bool callback_ret = qimageiohandler_supportsoption_callback(this, cbval1);
			return callback_ret;
		} else {
			return QImageIOHandler::supportsOption(option);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool jumpToNextImage() override {
		if (qimageiohandler_jumptonextimage_isbase) {
			qimageiohandler_jumptonextimage_isbase = false;
			return QImageIOHandler::jumpToNextImage();
		} else if (qimageiohandler_jumptonextimage_callback != nullptr) {
			bool callback_ret = qimageiohandler_jumptonextimage_callback();
			return callback_ret;
		} else {
			return QImageIOHandler::jumpToNextImage();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool jumpToImage(int imageNumber) override {
		if (qimageiohandler_jumptoimage_isbase) {
			qimageiohandler_jumptoimage_isbase = false;
			return QImageIOHandler::jumpToImage(imageNumber);
		} else if (qimageiohandler_jumptoimage_callback != nullptr) {
			int cbval1 = imageNumber;
			bool callback_ret = qimageiohandler_jumptoimage_callback(this, cbval1);
			return callback_ret;
		} else {
			return QImageIOHandler::jumpToImage(imageNumber);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int loopCount() const override {
		if (qimageiohandler_loopcount_isbase) {
			qimageiohandler_loopcount_isbase = false;
			return QImageIOHandler::loopCount();
		} else if (qimageiohandler_loopcount_callback != nullptr) {
			int callback_ret = qimageiohandler_loopcount_callback();
			return callback_ret;
		} else {
			return QImageIOHandler::loopCount();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int imageCount() const override {
		if (qimageiohandler_imagecount_isbase) {
			qimageiohandler_imagecount_isbase = false;
			return QImageIOHandler::imageCount();
		} else if (qimageiohandler_imagecount_callback != nullptr) {
			int callback_ret = qimageiohandler_imagecount_callback();
			return callback_ret;
		} else {
			return QImageIOHandler::imageCount();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int nextImageDelay() const override {
		if (qimageiohandler_nextimagedelay_isbase) {
			qimageiohandler_nextimagedelay_isbase = false;
			return QImageIOHandler::nextImageDelay();
		} else if (qimageiohandler_nextimagedelay_callback != nullptr) {
			int callback_ret = qimageiohandler_nextimagedelay_callback();
			return callback_ret;
		} else {
			return QImageIOHandler::nextImageDelay();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int currentImageNumber() const override {
		if (qimageiohandler_currentimagenumber_isbase) {
			qimageiohandler_currentimagenumber_isbase = false;
			return QImageIOHandler::currentImageNumber();
		} else if (qimageiohandler_currentimagenumber_callback != nullptr) {
			int callback_ret = qimageiohandler_currentimagenumber_callback();
			return callback_ret;
		} else {
			return QImageIOHandler::currentImageNumber();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QRect currentImageRect() const override {
		if (qimageiohandler_currentimagerect_isbase) {
			qimageiohandler_currentimagerect_isbase = false;
			return QImageIOHandler::currentImageRect();
		} else if (qimageiohandler_currentimagerect_callback != nullptr) {
			QRect* callback_ret = qimageiohandler_currentimagerect_callback();
			return *callback_ret;
		} else {
			return QImageIOHandler::currentImageRect();
		}
	}
};

// This class is a subclass of QImageIOPlugin so that we can call protected methods
class VirtualQImageIOPlugin : public QImageIOPlugin {

public:
	// Virtual class boolean flag
	bool isVirtualQImageIOPlugin= true;

	// Virtual class public types (including callbacks)
	using QImageIOPlugin_Capabilities_Callback = int (*)(const QImageIOPlugin*, QIODevice*, libqt_string);
	using QImageIOPlugin_Create_Callback = QImageIOHandler* (*)(const QImageIOPlugin*, QIODevice*, libqt_string);

protected:
	// Instance callback storage
	mutable QImageIOPlugin_Capabilities_Callback qimageioplugin_capabilities_callback = nullptr;
	mutable QImageIOPlugin_Create_Callback qimageioplugin_create_callback = nullptr;

	// Instance base flags
    mutable bool qimageioplugin_capabilities_isbase = false;
    mutable bool qimageioplugin_create_isbase = false;

public:
	VirtualQImageIOPlugin(): QImageIOPlugin() {};
	VirtualQImageIOPlugin(QObject* parent): QImageIOPlugin(parent) {};

	~VirtualQImageIOPlugin() {
		qimageioplugin_capabilities_callback = nullptr;
		qimageioplugin_create_callback = nullptr;
	}

// Callback setters
	inline void setQImageIOPlugin_Capabilities_Callback(QImageIOPlugin_Capabilities_Callback cb) const { qimageioplugin_capabilities_callback = cb; }
	inline void setQImageIOPlugin_Create_Callback(QImageIOPlugin_Create_Callback cb) const { qimageioplugin_create_callback = cb; }

// Base flag setters
	inline void setQImageIOPlugin_Capabilities_IsBase(bool value) const { qimageioplugin_capabilities_isbase = value; }
	inline void setQImageIOPlugin_Create_IsBase(bool value) const { qimageioplugin_create_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QFlags<QImageIOPlugin::Capability> capabilities(QIODevice* device, const QByteArray& format) const override {
		if (qimageioplugin_capabilities_callback != nullptr) {
			QIODevice* cbval1 = device;
			QByteArray format_qb = format.toUtf8();
			libqt_string cbval2;
			cbval2.len = format_qb.length();
			cbval2.data = static_cast<const char*>(format_qb.constData());
			int callback_ret = qimageioplugin_capabilities_callback(this, cbval1, cbval2);
			return static_cast<QFlags<QImageIOPlugin::Capability>>(callback_ret);
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QImageIOHandler* create(QIODevice* device, const QByteArray& format) const override {
		if (qimageioplugin_create_callback != nullptr) {
			QIODevice* cbval1 = device;
			QByteArray format_qb = format.toUtf8();
			libqt_string cbval2;
			cbval2.len = format_qb.length();
			cbval2.data = static_cast<const char*>(format_qb.constData());
			QImageIOHandler* callback_ret = qimageioplugin_create_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return {};
		}
	}
};

#endif


