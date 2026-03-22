#pragma once
#ifndef QABSTRACTNETWORKCACHE_H_C_LIBVIRTUAL
#define QABSTRACTNETWORKCACHE_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QAbstractNetworkCache so that we can call protected methods
class VirtualQAbstractNetworkCache : public QAbstractNetworkCache {

public:
	// Virtual class boolean flag
	bool isVirtualQAbstractNetworkCache= true;

	// Virtual class public types (including callbacks)
	using QAbstractNetworkCache_MetaData_Callback = QNetworkCacheMetaData* (*)(QAbstractNetworkCache*, const QUrl*);
	using QAbstractNetworkCache_UpdateMetaData_Callback = void (*)(QAbstractNetworkCache*, const QNetworkCacheMetaData*);
	using QAbstractNetworkCache_Data_Callback = QIODevice* (*)(QAbstractNetworkCache*, const QUrl*);
	using QAbstractNetworkCache_Remove_Callback = bool (*)(QAbstractNetworkCache*, const QUrl*);
	using QAbstractNetworkCache_CacheSize_Callback = long long (*)();
	using QAbstractNetworkCache_Prepare_Callback = QIODevice* (*)(QAbstractNetworkCache*, const QNetworkCacheMetaData*);
	using QAbstractNetworkCache_Insert_Callback = void (*)(QAbstractNetworkCache*, QIODevice*);
	using QAbstractNetworkCache_Clear_Callback = void (*)();

protected:
	// Instance callback storage
	mutable QAbstractNetworkCache_MetaData_Callback qabstractnetworkcache_metadata_callback = nullptr;
	mutable QAbstractNetworkCache_UpdateMetaData_Callback qabstractnetworkcache_updatemetadata_callback = nullptr;
	mutable QAbstractNetworkCache_Data_Callback qabstractnetworkcache_data_callback = nullptr;
	mutable QAbstractNetworkCache_Remove_Callback qabstractnetworkcache_remove_callback = nullptr;
	mutable QAbstractNetworkCache_CacheSize_Callback qabstractnetworkcache_cachesize_callback = nullptr;
	mutable QAbstractNetworkCache_Prepare_Callback qabstractnetworkcache_prepare_callback = nullptr;
	mutable QAbstractNetworkCache_Insert_Callback qabstractnetworkcache_insert_callback = nullptr;
	mutable QAbstractNetworkCache_Clear_Callback qabstractnetworkcache_clear_callback = nullptr;

	// Instance base flags
    mutable bool qabstractnetworkcache_metadata_isbase = false;
    mutable bool qabstractnetworkcache_updatemetadata_isbase = false;
    mutable bool qabstractnetworkcache_data_isbase = false;
    mutable bool qabstractnetworkcache_remove_isbase = false;
    mutable bool qabstractnetworkcache_cachesize_isbase = false;
    mutable bool qabstractnetworkcache_prepare_isbase = false;
    mutable bool qabstractnetworkcache_insert_isbase = false;
    mutable bool qabstractnetworkcache_clear_isbase = false;

public:

	~VirtualQAbstractNetworkCache() {
		qabstractnetworkcache_metadata_callback = nullptr;
		qabstractnetworkcache_updatemetadata_callback = nullptr;
		qabstractnetworkcache_data_callback = nullptr;
		qabstractnetworkcache_remove_callback = nullptr;
		qabstractnetworkcache_cachesize_callback = nullptr;
		qabstractnetworkcache_prepare_callback = nullptr;
		qabstractnetworkcache_insert_callback = nullptr;
		qabstractnetworkcache_clear_callback = nullptr;
	}

// Callback setters
	inline void setQAbstractNetworkCache_MetaData_Callback(QAbstractNetworkCache_MetaData_Callback cb) const { qabstractnetworkcache_metadata_callback = cb; }
	inline void setQAbstractNetworkCache_UpdateMetaData_Callback(QAbstractNetworkCache_UpdateMetaData_Callback cb) const { qabstractnetworkcache_updatemetadata_callback = cb; }
	inline void setQAbstractNetworkCache_Data_Callback(QAbstractNetworkCache_Data_Callback cb) const { qabstractnetworkcache_data_callback = cb; }
	inline void setQAbstractNetworkCache_Remove_Callback(QAbstractNetworkCache_Remove_Callback cb) const { qabstractnetworkcache_remove_callback = cb; }
	inline void setQAbstractNetworkCache_CacheSize_Callback(QAbstractNetworkCache_CacheSize_Callback cb) const { qabstractnetworkcache_cachesize_callback = cb; }
	inline void setQAbstractNetworkCache_Prepare_Callback(QAbstractNetworkCache_Prepare_Callback cb) const { qabstractnetworkcache_prepare_callback = cb; }
	inline void setQAbstractNetworkCache_Insert_Callback(QAbstractNetworkCache_Insert_Callback cb) const { qabstractnetworkcache_insert_callback = cb; }
	inline void setQAbstractNetworkCache_Clear_Callback(QAbstractNetworkCache_Clear_Callback cb) const { qabstractnetworkcache_clear_callback = cb; }

// Base flag setters
	inline void setQAbstractNetworkCache_MetaData_IsBase(bool value) const { qabstractnetworkcache_metadata_isbase = value; }
	inline void setQAbstractNetworkCache_UpdateMetaData_IsBase(bool value) const { qabstractnetworkcache_updatemetadata_isbase = value; }
	inline void setQAbstractNetworkCache_Data_IsBase(bool value) const { qabstractnetworkcache_data_isbase = value; }
	inline void setQAbstractNetworkCache_Remove_IsBase(bool value) const { qabstractnetworkcache_remove_isbase = value; }
	inline void setQAbstractNetworkCache_CacheSize_IsBase(bool value) const { qabstractnetworkcache_cachesize_isbase = value; }
	inline void setQAbstractNetworkCache_Prepare_IsBase(bool value) const { qabstractnetworkcache_prepare_isbase = value; }
	inline void setQAbstractNetworkCache_Insert_IsBase(bool value) const { qabstractnetworkcache_insert_isbase = value; }
	inline void setQAbstractNetworkCache_Clear_IsBase(bool value) const { qabstractnetworkcache_clear_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QNetworkCacheMetaData metaData(const QUrl& url) override {
		if (qabstractnetworkcache_metadata_callback != nullptr) {
			const QUrl* cbval1 = (const QUrl*)&url;
			QNetworkCacheMetaData* callback_ret = qabstractnetworkcache_metadata_callback(this, cbval1);
			return *callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void updateMetaData(const QNetworkCacheMetaData& metaData) override {
		if (qabstractnetworkcache_updatemetadata_callback != nullptr) {
			const QNetworkCacheMetaData* cbval1 = (const QNetworkCacheMetaData*)&metaData;
			qabstractnetworkcache_updatemetadata_callback(this, cbval1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QIODevice* data(const QUrl& url) override {
		if (qabstractnetworkcache_data_callback != nullptr) {
			const QUrl* cbval1 = (const QUrl*)&url;
			QIODevice* callback_ret = qabstractnetworkcache_data_callback(this, cbval1);
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool remove(const QUrl& url) override {
		if (qabstractnetworkcache_remove_callback != nullptr) {
			const QUrl* cbval1 = (const QUrl*)&url;
			bool callback_ret = qabstractnetworkcache_remove_callback(this, cbval1);
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual long long cacheSize() const override {
		if (qabstractnetworkcache_cachesize_callback != nullptr) {
			long long callback_ret = qabstractnetworkcache_cachesize_callback();
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QIODevice* prepare(const QNetworkCacheMetaData& metaData) override {
		if (qabstractnetworkcache_prepare_callback != nullptr) {
			const QNetworkCacheMetaData* cbval1 = (const QNetworkCacheMetaData*)&metaData;
			QIODevice* callback_ret = qabstractnetworkcache_prepare_callback(this, cbval1);
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void insert(QIODevice* device) override {
		if (qabstractnetworkcache_insert_callback != nullptr) {
			QIODevice* cbval1 = device;
			qabstractnetworkcache_insert_callback(this, cbval1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void clear() override {
		if (qabstractnetworkcache_clear_callback != nullptr) {
			qabstractnetworkcache_clear_callback();
		}
	}
};

#endif


