#pragma once
#ifndef QNETWORKREPLY_H_C_LIBVIRTUAL
#define QNETWORKREPLY_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QNetworkReply so that we can call protected methods
class VirtualQNetworkReply : public QNetworkReply {

public:
	// Virtual class boolean flag
	bool isVirtualQNetworkReply= true;

	// Virtual class public types (including callbacks)
	using QNetworkReply_Close_Callback = void (*)();
	using QNetworkReply_IsSequential_Callback = bool (*)();
	using QNetworkReply_SetReadBufferSize_Callback = void (*)(QNetworkReply*, long long);
	using QNetworkReply_Abort_Callback = void (*)();
	using QNetworkReply_IgnoreSslErrors2_Callback = void (*)();
	using QNetworkReply_WriteData_Callback = long long (*)(QNetworkReply*, const char*, long long);
	using QNetworkReply_SslConfigurationImplementation_Callback = void (*)(const QNetworkReply*, QSslConfiguration*);
	using QNetworkReply_SetSslConfigurationImplementation_Callback = void (*)(QNetworkReply*, const QSslConfiguration*);
	using QNetworkReply_IgnoreSslErrorsImplementation_Callback = void (*)(QNetworkReply*, libqt_list);
	using QNetworkReply_SetOperation_Callback = void (*)(QNetworkReply*, int);
	using QNetworkReply_SetRequest_Callback = void (*)(QNetworkReply*, const QNetworkRequest*);
	using QNetworkReply_SetError_Callback = void (*)(QNetworkReply*, int, libqt_string);
	using QNetworkReply_SetFinished_Callback = void (*)(QNetworkReply*, bool);
	using QNetworkReply_SetUrl_Callback = void (*)(QNetworkReply*, const QUrl*);
	using QNetworkReply_SetHeader_Callback = void (*)(QNetworkReply*, int, const QVariant*);
	using QNetworkReply_SetRawHeader_Callback = void (*)(QNetworkReply*, libqt_string, libqt_string);
	using QNetworkReply_SetHeaders_Callback = void (*)(QNetworkReply*, const QHttpHeaders*);
	using QNetworkReply_SetWellKnownHeader_Callback = void (*)(QNetworkReply*, int, QByteArrayView*);
	using QNetworkReply_SetAttribute_Callback = void (*)(QNetworkReply*, int, const QVariant*);

protected:
	// Instance callback storage
	mutable QNetworkReply_Close_Callback qnetworkreply_close_callback = nullptr;
	mutable QNetworkReply_IsSequential_Callback qnetworkreply_issequential_callback = nullptr;
	mutable QNetworkReply_SetReadBufferSize_Callback qnetworkreply_setreadbuffersize_callback = nullptr;
	mutable QNetworkReply_Abort_Callback qnetworkreply_abort_callback = nullptr;
	mutable QNetworkReply_IgnoreSslErrors2_Callback qnetworkreply_ignoresslerrors2_callback = nullptr;
	mutable QNetworkReply_WriteData_Callback qnetworkreply_writedata_callback = nullptr;
	mutable QNetworkReply_SslConfigurationImplementation_Callback qnetworkreply_sslconfigurationimplementation_callback = nullptr;
	mutable QNetworkReply_SetSslConfigurationImplementation_Callback qnetworkreply_setsslconfigurationimplementation_callback = nullptr;
	mutable QNetworkReply_IgnoreSslErrorsImplementation_Callback qnetworkreply_ignoresslerrorsimplementation_callback = nullptr;
	mutable QNetworkReply_SetOperation_Callback qnetworkreply_setoperation_callback = nullptr;
	mutable QNetworkReply_SetRequest_Callback qnetworkreply_setrequest_callback = nullptr;
	mutable QNetworkReply_SetError_Callback qnetworkreply_seterror_callback = nullptr;
	mutable QNetworkReply_SetFinished_Callback qnetworkreply_setfinished_callback = nullptr;
	mutable QNetworkReply_SetUrl_Callback qnetworkreply_seturl_callback = nullptr;
	mutable QNetworkReply_SetHeader_Callback qnetworkreply_setheader_callback = nullptr;
	mutable QNetworkReply_SetRawHeader_Callback qnetworkreply_setrawheader_callback = nullptr;
	mutable QNetworkReply_SetHeaders_Callback qnetworkreply_setheaders_callback = nullptr;
	mutable QNetworkReply_SetWellKnownHeader_Callback qnetworkreply_setwellknownheader_callback = nullptr;
	mutable QNetworkReply_SetAttribute_Callback qnetworkreply_setattribute_callback = nullptr;

	// Instance base flags
    mutable bool qnetworkreply_close_isbase = false;
    mutable bool qnetworkreply_issequential_isbase = false;
    mutable bool qnetworkreply_setreadbuffersize_isbase = false;
    mutable bool qnetworkreply_abort_isbase = false;
    mutable bool qnetworkreply_ignoresslerrors2_isbase = false;
    mutable bool qnetworkreply_writedata_isbase = false;
    mutable bool qnetworkreply_sslconfigurationimplementation_isbase = false;
    mutable bool qnetworkreply_setsslconfigurationimplementation_isbase = false;
    mutable bool qnetworkreply_ignoresslerrorsimplementation_isbase = false;
    mutable bool qnetworkreply_setoperation_isbase = false;
    mutable bool qnetworkreply_setrequest_isbase = false;
    mutable bool qnetworkreply_seterror_isbase = false;
    mutable bool qnetworkreply_setfinished_isbase = false;
    mutable bool qnetworkreply_seturl_isbase = false;
    mutable bool qnetworkreply_setheader_isbase = false;
    mutable bool qnetworkreply_setrawheader_isbase = false;
    mutable bool qnetworkreply_setheaders_isbase = false;
    mutable bool qnetworkreply_setwellknownheader_isbase = false;
    mutable bool qnetworkreply_setattribute_isbase = false;

public:

	~VirtualQNetworkReply() {
		qnetworkreply_close_callback = nullptr;
		qnetworkreply_issequential_callback = nullptr;
		qnetworkreply_setreadbuffersize_callback = nullptr;
		qnetworkreply_abort_callback = nullptr;
		qnetworkreply_ignoresslerrors2_callback = nullptr;
		qnetworkreply_writedata_callback = nullptr;
		qnetworkreply_sslconfigurationimplementation_callback = nullptr;
		qnetworkreply_setsslconfigurationimplementation_callback = nullptr;
		qnetworkreply_ignoresslerrorsimplementation_callback = nullptr;
		qnetworkreply_setoperation_callback = nullptr;
		qnetworkreply_setrequest_callback = nullptr;
		qnetworkreply_seterror_callback = nullptr;
		qnetworkreply_setfinished_callback = nullptr;
		qnetworkreply_seturl_callback = nullptr;
		qnetworkreply_setheader_callback = nullptr;
		qnetworkreply_setrawheader_callback = nullptr;
		qnetworkreply_setheaders_callback = nullptr;
		qnetworkreply_setwellknownheader_callback = nullptr;
		qnetworkreply_setattribute_callback = nullptr;
	}

// Callback setters
	inline void setQNetworkReply_Close_Callback(QNetworkReply_Close_Callback cb) const { qnetworkreply_close_callback = cb; }
	inline void setQNetworkReply_IsSequential_Callback(QNetworkReply_IsSequential_Callback cb) const { qnetworkreply_issequential_callback = cb; }
	inline void setQNetworkReply_SetReadBufferSize_Callback(QNetworkReply_SetReadBufferSize_Callback cb) const { qnetworkreply_setreadbuffersize_callback = cb; }
	inline void setQNetworkReply_Abort_Callback(QNetworkReply_Abort_Callback cb) const { qnetworkreply_abort_callback = cb; }
	inline void setQNetworkReply_IgnoreSslErrors2_Callback(QNetworkReply_IgnoreSslErrors2_Callback cb) const { qnetworkreply_ignoresslerrors2_callback = cb; }
	inline void setQNetworkReply_WriteData_Callback(QNetworkReply_WriteData_Callback cb) const { qnetworkreply_writedata_callback = cb; }
	inline void setQNetworkReply_SslConfigurationImplementation_Callback(QNetworkReply_SslConfigurationImplementation_Callback cb) const { qnetworkreply_sslconfigurationimplementation_callback = cb; }
	inline void setQNetworkReply_SetSslConfigurationImplementation_Callback(QNetworkReply_SetSslConfigurationImplementation_Callback cb) const { qnetworkreply_setsslconfigurationimplementation_callback = cb; }
	inline void setQNetworkReply_IgnoreSslErrorsImplementation_Callback(QNetworkReply_IgnoreSslErrorsImplementation_Callback cb) const { qnetworkreply_ignoresslerrorsimplementation_callback = cb; }
	inline void setQNetworkReply_SetOperation_Callback(QNetworkReply_SetOperation_Callback cb) const { qnetworkreply_setoperation_callback = cb; }
	inline void setQNetworkReply_SetRequest_Callback(QNetworkReply_SetRequest_Callback cb) const { qnetworkreply_setrequest_callback = cb; }
	inline void setQNetworkReply_SetError_Callback(QNetworkReply_SetError_Callback cb) const { qnetworkreply_seterror_callback = cb; }
	inline void setQNetworkReply_SetFinished_Callback(QNetworkReply_SetFinished_Callback cb) const { qnetworkreply_setfinished_callback = cb; }
	inline void setQNetworkReply_SetUrl_Callback(QNetworkReply_SetUrl_Callback cb) const { qnetworkreply_seturl_callback = cb; }
	inline void setQNetworkReply_SetHeader_Callback(QNetworkReply_SetHeader_Callback cb) const { qnetworkreply_setheader_callback = cb; }
	inline void setQNetworkReply_SetRawHeader_Callback(QNetworkReply_SetRawHeader_Callback cb) const { qnetworkreply_setrawheader_callback = cb; }
	inline void setQNetworkReply_SetHeaders_Callback(QNetworkReply_SetHeaders_Callback cb) const { qnetworkreply_setheaders_callback = cb; }
	inline void setQNetworkReply_SetWellKnownHeader_Callback(QNetworkReply_SetWellKnownHeader_Callback cb) const { qnetworkreply_setwellknownheader_callback = cb; }
	inline void setQNetworkReply_SetAttribute_Callback(QNetworkReply_SetAttribute_Callback cb) const { qnetworkreply_setattribute_callback = cb; }

// Base flag setters
	inline void setQNetworkReply_Close_IsBase(bool value) const { qnetworkreply_close_isbase = value; }
	inline void setQNetworkReply_IsSequential_IsBase(bool value) const { qnetworkreply_issequential_isbase = value; }
	inline void setQNetworkReply_SetReadBufferSize_IsBase(bool value) const { qnetworkreply_setreadbuffersize_isbase = value; }
	inline void setQNetworkReply_Abort_IsBase(bool value) const { qnetworkreply_abort_isbase = value; }
	inline void setQNetworkReply_IgnoreSslErrors2_IsBase(bool value) const { qnetworkreply_ignoresslerrors2_isbase = value; }
	inline void setQNetworkReply_WriteData_IsBase(bool value) const { qnetworkreply_writedata_isbase = value; }
	inline void setQNetworkReply_SslConfigurationImplementation_IsBase(bool value) const { qnetworkreply_sslconfigurationimplementation_isbase = value; }
	inline void setQNetworkReply_SetSslConfigurationImplementation_IsBase(bool value) const { qnetworkreply_setsslconfigurationimplementation_isbase = value; }
	inline void setQNetworkReply_IgnoreSslErrorsImplementation_IsBase(bool value) const { qnetworkreply_ignoresslerrorsimplementation_isbase = value; }
	inline void setQNetworkReply_SetOperation_IsBase(bool value) const { qnetworkreply_setoperation_isbase = value; }
	inline void setQNetworkReply_SetRequest_IsBase(bool value) const { qnetworkreply_setrequest_isbase = value; }
	inline void setQNetworkReply_SetError_IsBase(bool value) const { qnetworkreply_seterror_isbase = value; }
	inline void setQNetworkReply_SetFinished_IsBase(bool value) const { qnetworkreply_setfinished_isbase = value; }
	inline void setQNetworkReply_SetUrl_IsBase(bool value) const { qnetworkreply_seturl_isbase = value; }
	inline void setQNetworkReply_SetHeader_IsBase(bool value) const { qnetworkreply_setheader_isbase = value; }
	inline void setQNetworkReply_SetRawHeader_IsBase(bool value) const { qnetworkreply_setrawheader_isbase = value; }
	inline void setQNetworkReply_SetHeaders_IsBase(bool value) const { qnetworkreply_setheaders_isbase = value; }
	inline void setQNetworkReply_SetWellKnownHeader_IsBase(bool value) const { qnetworkreply_setwellknownheader_isbase = value; }
	inline void setQNetworkReply_SetAttribute_IsBase(bool value) const { qnetworkreply_setattribute_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void close() override {
		if (qnetworkreply_close_isbase) {
			qnetworkreply_close_isbase = false;
			QNetworkReply::close();
		} else if (qnetworkreply_close_callback != nullptr) {
			qnetworkreply_close_callback();
		} else {
			QNetworkReply::close();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool isSequential() const override {
		if (qnetworkreply_issequential_isbase) {
			qnetworkreply_issequential_isbase = false;
			return QNetworkReply::isSequential();
		} else if (qnetworkreply_issequential_callback != nullptr) {
			bool callback_ret = qnetworkreply_issequential_callback();
			return callback_ret;
		} else {
			return QNetworkReply::isSequential();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setReadBufferSize(qint64 size) override {
		if (qnetworkreply_setreadbuffersize_isbase) {
			qnetworkreply_setreadbuffersize_isbase = false;
			QNetworkReply::setReadBufferSize(size);
		} else if (qnetworkreply_setreadbuffersize_callback != nullptr) {
			long long cbval1 = size;
			qnetworkreply_setreadbuffersize_callback(this, cbval1);
		} else {
			QNetworkReply::setReadBufferSize(size);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void abort() override {
		if (qnetworkreply_abort_callback != nullptr) {
			qnetworkreply_abort_callback();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void ignoreSslErrors() override {
		if (qnetworkreply_ignoresslerrors2_isbase) {
			qnetworkreply_ignoresslerrors2_isbase = false;
			QNetworkReply::ignoreSslErrors();
		} else if (qnetworkreply_ignoresslerrors2_callback != nullptr) {
			qnetworkreply_ignoresslerrors2_callback();
		} else {
			QNetworkReply::ignoreSslErrors();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual long long writeData(const char* data, qint64 lenVal) override {
		if (qnetworkreply_writedata_isbase) {
			qnetworkreply_writedata_isbase = false;
			return QNetworkReply::writeData(data, lenVal);
		} else if (qnetworkreply_writedata_callback != nullptr) {
			const char* cbval1 = data;
			long long cbval2 = lenVal;
			long long callback_ret = qnetworkreply_writedata_callback(this, cbval1, cbval2);
			return callback_ret;
		} else {
			return QNetworkReply::writeData(data, lenVal);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void sslConfigurationImplementation(QSslConfiguration& param1) const override {
		if (qnetworkreply_sslconfigurationimplementation_isbase) {
			qnetworkreply_sslconfigurationimplementation_isbase = false;
			QNetworkReply::sslConfigurationImplementation(param1);
		} else if (qnetworkreply_sslconfigurationimplementation_callback != nullptr) {
			QSslConfiguration* cbval1 = &param1;
			qnetworkreply_sslconfigurationimplementation_callback(this, cbval1);
		} else {
			QNetworkReply::sslConfigurationImplementation(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void setSslConfigurationImplementation(const QSslConfiguration& sslConfigurationImplementation) override {
		if (qnetworkreply_setsslconfigurationimplementation_isbase) {
			qnetworkreply_setsslconfigurationimplementation_isbase = false;
			QNetworkReply::setSslConfigurationImplementation(sslConfigurationImplementation);
		} else if (qnetworkreply_setsslconfigurationimplementation_callback != nullptr) {
			const QSslConfiguration* cbval1 = (const QSslConfiguration*)&sslConfigurationImplementation;
			qnetworkreply_setsslconfigurationimplementation_callback(this, cbval1);
		} else {
			QNetworkReply::setSslConfigurationImplementation(sslConfigurationImplementation);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void ignoreSslErrorsImplementation(const QList<QSslError>& param1) override {
		if (qnetworkreply_ignoresslerrorsimplementation_isbase) {
			qnetworkreply_ignoresslerrorsimplementation_isbase = false;
			QNetworkReply::ignoreSslErrorsImplementation(param1);
		} else if (qnetworkreply_ignoresslerrorsimplementation_callback != nullptr) {
			libqt_list cbval1 = param1;
			qnetworkreply_ignoresslerrorsimplementation_callback(this, cbval1);
		} else {
			QNetworkReply::ignoreSslErrorsImplementation(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	void setOperation(QNetworkAccessManager::Operation operation) {
		if (qnetworkreply_setoperation_isbase) {
			qnetworkreply_setoperation_isbase = false;
			QNetworkReply::setOperation(operation);
		} else if (qnetworkreply_setoperation_callback != nullptr) {
			int cbval1 = static_cast<int>(operation);
			qnetworkreply_setoperation_callback(this, cbval1);
		} else {
			QNetworkReply::setOperation(operation);
		}
	}

	// Virtual method for C ABI access and custom callback
	void setRequest(const QNetworkRequest& request) {
		if (qnetworkreply_setrequest_isbase) {
			qnetworkreply_setrequest_isbase = false;
			QNetworkReply::setRequest(request);
		} else if (qnetworkreply_setrequest_callback != nullptr) {
			const QNetworkRequest* cbval1 = (const QNetworkRequest*)&request;
			qnetworkreply_setrequest_callback(this, cbval1);
		} else {
			QNetworkReply::setRequest(request);
		}
	}

	// Virtual method for C ABI access and custom callback
	void setError(NetworkError errorCode, const QString& errorString) {
		if (qnetworkreply_seterror_isbase) {
			qnetworkreply_seterror_isbase = false;
			QNetworkReply::setError(errorCode, errorString);
		} else if (qnetworkreply_seterror_callback != nullptr) {
			int cbval1 = static_cast<int>(errorCode);
			QByteArray errorString_qb = errorString.toUtf8();
			libqt_string cbval2;
			cbval2.len = errorString_qb.length();
			cbval2.data = static_cast<const char*>(errorString_qb.constData());
			qnetworkreply_seterror_callback(this, cbval1, cbval2);
		} else {
			QNetworkReply::setError(errorCode, errorString);
		}
	}

	// Virtual method for C ABI access and custom callback
	void setFinished(bool finished) {
		if (qnetworkreply_setfinished_isbase) {
			qnetworkreply_setfinished_isbase = false;
			QNetworkReply::setFinished(finished);
		} else if (qnetworkreply_setfinished_callback != nullptr) {
			bool cbval1 = finished;
			qnetworkreply_setfinished_callback(this, cbval1);
		} else {
			QNetworkReply::setFinished(finished);
		}
	}

	// Virtual method for C ABI access and custom callback
	void setUrl(const QUrl& url) {
		if (qnetworkreply_seturl_isbase) {
			qnetworkreply_seturl_isbase = false;
			QNetworkReply::setUrl(url);
		} else if (qnetworkreply_seturl_callback != nullptr) {
			const QUrl* cbval1 = (const QUrl*)&url;
			qnetworkreply_seturl_callback(this, cbval1);
		} else {
			QNetworkReply::setUrl(url);
		}
	}

	// Virtual method for C ABI access and custom callback
	void setHeader(QNetworkRequest::KnownHeaders header, const QVariant& value) {
		if (qnetworkreply_setheader_isbase) {
			qnetworkreply_setheader_isbase = false;
			QNetworkReply::setHeader(header, value);
		} else if (qnetworkreply_setheader_callback != nullptr) {
			int cbval1 = static_cast<int>(header);
			const QVariant* cbval2 = (const QVariant*)&value;
			qnetworkreply_setheader_callback(this, cbval1, cbval2);
		} else {
			QNetworkReply::setHeader(header, value);
		}
	}

	// Virtual method for C ABI access and custom callback
	void setRawHeader(const QByteArray& headerName, const QByteArray& value) {
		if (qnetworkreply_setrawheader_isbase) {
			qnetworkreply_setrawheader_isbase = false;
			QNetworkReply::setRawHeader(headerName, value);
		} else if (qnetworkreply_setrawheader_callback != nullptr) {
			QByteArray headerName_qb = headerName.toUtf8();
			libqt_string cbval1;
			cbval1.len = headerName_qb.length();
			cbval1.data = static_cast<const char*>(headerName_qb.constData());
			QByteArray value_qb = value.toUtf8();
			libqt_string cbval2;
			cbval2.len = value_qb.length();
			cbval2.data = static_cast<const char*>(value_qb.constData());
			qnetworkreply_setrawheader_callback(this, cbval1, cbval2);
		} else {
			QNetworkReply::setRawHeader(headerName, value);
		}
	}

	// Virtual method for C ABI access and custom callback
	void setHeaders(const QHttpHeaders& newHeaders) {
		if (qnetworkreply_setheaders_isbase) {
			qnetworkreply_setheaders_isbase = false;
			QNetworkReply::setHeaders(newHeaders);
		} else if (qnetworkreply_setheaders_callback != nullptr) {
			const QHttpHeaders* cbval1 = (const QHttpHeaders*)&newHeaders;
			qnetworkreply_setheaders_callback(this, cbval1);
		} else {
			QNetworkReply::setHeaders(newHeaders);
		}
	}

	// Virtual method for C ABI access and custom callback
	void setWellKnownHeader(QHttpHeaders::WellKnownHeader name, QByteArrayView value) {
		if (qnetworkreply_setwellknownheader_isbase) {
			qnetworkreply_setwellknownheader_isbase = false;
			QNetworkReply::setWellKnownHeader(name, value);
		} else if (qnetworkreply_setwellknownheader_callback != nullptr) {
			int cbval1 = static_cast<int>(name);
			QByteArrayView* cbval2 = &value;
			qnetworkreply_setwellknownheader_callback(this, cbval1, cbval2);
		} else {
			QNetworkReply::setWellKnownHeader(name, value);
		}
	}

	// Virtual method for C ABI access and custom callback
	void setAttribute(QNetworkRequest::Attribute code, const QVariant& value) {
		if (qnetworkreply_setattribute_isbase) {
			qnetworkreply_setattribute_isbase = false;
			QNetworkReply::setAttribute(code, value);
		} else if (qnetworkreply_setattribute_callback != nullptr) {
			int cbval1 = static_cast<int>(code);
			const QVariant* cbval2 = (const QVariant*)&value;
			qnetworkreply_setattribute_callback(this, cbval1, cbval2);
		} else {
			QNetworkReply::setAttribute(code, value);
		}
	}

	// Friend functions
	friend long long QNetworkReply_WriteData(QNetworkReply* self, const char* data, long long lenVal);
	friend long long QNetworkReply_QBaseWriteData(QNetworkReply* self, const char* data, long long lenVal);
	friend void QNetworkReply_SslConfigurationImplementation(const QNetworkReply* self, QSslConfiguration* param1);
	friend void QNetworkReply_QBaseSslConfigurationImplementation(const QNetworkReply* self, QSslConfiguration* param1);
	friend void QNetworkReply_SetSslConfigurationImplementation(QNetworkReply* self, const QSslConfiguration* sslConfigurationImplementation);
	friend void QNetworkReply_QBaseSetSslConfigurationImplementation(QNetworkReply* self, const QSslConfiguration* sslConfigurationImplementation);
	friend void QNetworkReply_IgnoreSslErrorsImplementation(QNetworkReply* self, const libqt_list param1);
	friend void QNetworkReply_QBaseIgnoreSslErrorsImplementation(QNetworkReply* self, const libqt_list param1);
	friend void QNetworkReply_SetOperation(QNetworkReply* self, int operation);
	friend void QNetworkReply_QBaseSetOperation(QNetworkReply* self, int operation);
	friend void QNetworkReply_SetRequest(QNetworkReply* self, const QNetworkRequest* request);
	friend void QNetworkReply_QBaseSetRequest(QNetworkReply* self, const QNetworkRequest* request);
	friend void QNetworkReply_SetError(QNetworkReply* self, int errorCode, const libqt_string errorString);
	friend void QNetworkReply_QBaseSetError(QNetworkReply* self, int errorCode, const libqt_string errorString);
	friend void QNetworkReply_SetFinished(QNetworkReply* self, bool finished);
	friend void QNetworkReply_QBaseSetFinished(QNetworkReply* self, bool finished);
	friend void QNetworkReply_SetUrl(QNetworkReply* self, const QUrl* url);
	friend void QNetworkReply_QBaseSetUrl(QNetworkReply* self, const QUrl* url);
	friend void QNetworkReply_SetHeader(QNetworkReply* self, int header, const QVariant* value);
	friend void QNetworkReply_QBaseSetHeader(QNetworkReply* self, int header, const QVariant* value);
	friend void QNetworkReply_SetRawHeader(QNetworkReply* self, const libqt_string headerName, const libqt_string value);
	friend void QNetworkReply_QBaseSetRawHeader(QNetworkReply* self, const libqt_string headerName, const libqt_string value);
	friend void QNetworkReply_SetHeaders(QNetworkReply* self, const QHttpHeaders* newHeaders);
	friend void QNetworkReply_QBaseSetHeaders(QNetworkReply* self, const QHttpHeaders* newHeaders);
	friend void QNetworkReply_SetWellKnownHeader(QNetworkReply* self, int name, QByteArrayView* value);
	friend void QNetworkReply_QBaseSetWellKnownHeader(QNetworkReply* self, int name, QByteArrayView* value);
	friend void QNetworkReply_SetAttribute(QNetworkReply* self, int code, const QVariant* value);
	friend void QNetworkReply_QBaseSetAttribute(QNetworkReply* self, int code, const QVariant* value);
};

#endif


