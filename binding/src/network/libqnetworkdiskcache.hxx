#pragma once
#ifndef QNETWORKDISKCACHE_H_C_LIBVIRTUAL
#define QNETWORKDISKCACHE_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "../qtlibc.h"


// This class is a subclass of QNetworkDiskCache so that we can call protected methods
class VirtualQNetworkDiskCache final : public QNetworkDiskCache {

public:
	// Virtual class boolean flag
	bool isVirtualQNetworkDiskCache= true;

	// Virtual class public types (including callbacks)
	using QNetworkDiskCache_CacheSize_Callback = long long (*)();
	using QNetworkDiskCache_MetaData_Callback = QNetworkCacheMetaData* (*)(QNetworkDiskCache*, const QUrl*);
	using QNetworkDiskCache_UpdateMetaData_Callback = void (*)(QNetworkDiskCache*, const QNetworkCacheMetaData*);
	using QNetworkDiskCache_Data_Callback = QIODevice* (*)(QNetworkDiskCache*, const QUrl*);
	using QNetworkDiskCache_Remove_Callback = bool (*)(QNetworkDiskCache*, const QUrl*);
	using QNetworkDiskCache_Prepare_Callback = QIODevice* (*)(QNetworkDiskCache*, const QNetworkCacheMetaData*);
	using QNetworkDiskCache_Insert_Callback = void (*)(QNetworkDiskCache*, QIODevice*);
	using QNetworkDiskCache_Clear_Callback = void (*)();
	using QNetworkDiskCache_Expire_Callback = long long (*)();

protected:
	// Instance callback storage
	mutable QNetworkDiskCache_CacheSize_Callback qnetworkdiskcache_cachesize_callback = nullptr;
	mutable QNetworkDiskCache_MetaData_Callback qnetworkdiskcache_metadata_callback = nullptr;
	mutable QNetworkDiskCache_UpdateMetaData_Callback qnetworkdiskcache_updatemetadata_callback = nullptr;
	mutable QNetworkDiskCache_Data_Callback qnetworkdiskcache_data_callback = nullptr;
	mutable QNetworkDiskCache_Remove_Callback qnetworkdiskcache_remove_callback = nullptr;
	mutable QNetworkDiskCache_Prepare_Callback qnetworkdiskcache_prepare_callback = nullptr;
	mutable QNetworkDiskCache_Insert_Callback qnetworkdiskcache_insert_callback = nullptr;
	mutable QNetworkDiskCache_Clear_Callback qnetworkdiskcache_clear_callback = nullptr;
	mutable QNetworkDiskCache_Expire_Callback qnetworkdiskcache_expire_callback = nullptr;

	// Instance base flags
    mutable bool qnetworkdiskcache_cachesize_isbase = false;
    mutable bool qnetworkdiskcache_metadata_isbase = false;
    mutable bool qnetworkdiskcache_updatemetadata_isbase = false;
    mutable bool qnetworkdiskcache_data_isbase = false;
    mutable bool qnetworkdiskcache_remove_isbase = false;
    mutable bool qnetworkdiskcache_prepare_isbase = false;
    mutable bool qnetworkdiskcache_insert_isbase = false;
    mutable bool qnetworkdiskcache_clear_isbase = false;
    mutable bool qnetworkdiskcache_expire_isbase = false;

public:
	VirtualQNetworkDiskCache(): QNetworkDiskCache() {};
	VirtualQNetworkDiskCache(QObject* parent): QNetworkDiskCache(parent) {};

	~VirtualQNetworkDiskCache() {
		qnetworkdiskcache_cachesize_callback = nullptr;
		qnetworkdiskcache_metadata_callback = nullptr;
		qnetworkdiskcache_updatemetadata_callback = nullptr;
		qnetworkdiskcache_data_callback = nullptr;
		qnetworkdiskcache_remove_callback = nullptr;
		qnetworkdiskcache_prepare_callback = nullptr;
		qnetworkdiskcache_insert_callback = nullptr;
		qnetworkdiskcache_clear_callback = nullptr;
		qnetworkdiskcache_expire_callback = nullptr;
	}

// Callback setters
	inline void setQNetworkDiskCache_CacheSize_Callback(QNetworkDiskCache_CacheSize_Callback cb) const { qnetworkdiskcache_cachesize_callback = cb; }
	inline void setQNetworkDiskCache_MetaData_Callback(QNetworkDiskCache_MetaData_Callback cb) const { qnetworkdiskcache_metadata_callback = cb; }
	inline void setQNetworkDiskCache_UpdateMetaData_Callback(QNetworkDiskCache_UpdateMetaData_Callback cb) const { qnetworkdiskcache_updatemetadata_callback = cb; }
	inline void setQNetworkDiskCache_Data_Callback(QNetworkDiskCache_Data_Callback cb) const { qnetworkdiskcache_data_callback = cb; }
	inline void setQNetworkDiskCache_Remove_Callback(QNetworkDiskCache_Remove_Callback cb) const { qnetworkdiskcache_remove_callback = cb; }
	inline void setQNetworkDiskCache_Prepare_Callback(QNetworkDiskCache_Prepare_Callback cb) const { qnetworkdiskcache_prepare_callback = cb; }
	inline void setQNetworkDiskCache_Insert_Callback(QNetworkDiskCache_Insert_Callback cb) const { qnetworkdiskcache_insert_callback = cb; }
	inline void setQNetworkDiskCache_Clear_Callback(QNetworkDiskCache_Clear_Callback cb) const { qnetworkdiskcache_clear_callback = cb; }
	inline void setQNetworkDiskCache_Expire_Callback(QNetworkDiskCache_Expire_Callback cb) const { qnetworkdiskcache_expire_callback = cb; }

// Base flag setters
	inline void setQNetworkDiskCache_CacheSize_IsBase(bool value) const { qnetworkdiskcache_cachesize_isbase = value; }
	inline void setQNetworkDiskCache_MetaData_IsBase(bool value) const { qnetworkdiskcache_metadata_isbase = value; }
	inline void setQNetworkDiskCache_UpdateMetaData_IsBase(bool value) const { qnetworkdiskcache_updatemetadata_isbase = value; }
	inline void setQNetworkDiskCache_Data_IsBase(bool value) const { qnetworkdiskcache_data_isbase = value; }
	inline void setQNetworkDiskCache_Remove_IsBase(bool value) const { qnetworkdiskcache_remove_isbase = value; }
	inline void setQNetworkDiskCache_Prepare_IsBase(bool value) const { qnetworkdiskcache_prepare_isbase = value; }
	inline void setQNetworkDiskCache_Insert_IsBase(bool value) const { qnetworkdiskcache_insert_isbase = value; }
	inline void setQNetworkDiskCache_Clear_IsBase(bool value) const { qnetworkdiskcache_clear_isbase = value; }
	inline void setQNetworkDiskCache_Expire_IsBase(bool value) const { qnetworkdiskcache_expire_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual long long cacheSize() const override {
		if (qnetworkdiskcache_cachesize_isbase) {
			qnetworkdiskcache_cachesize_isbase = false;
			return QNetworkDiskCache::cacheSize();
		} else if (qnetworkdiskcache_cachesize_callback != nullptr) {
			long long callback_ret = qnetworkdiskcache_cachesize_callback();
			return callback_ret;
		} else {
			return QNetworkDiskCache::cacheSize();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QNetworkCacheMetaData metaData(const QUrl& url) override {
		if (qnetworkdiskcache_metadata_isbase) {
			qnetworkdiskcache_metadata_isbase = false;
			return QNetworkDiskCache::metaData(url);
		} else if (qnetworkdiskcache_metadata_callback != nullptr) {
			const QUrl* cbval1 = (const QUrl*)&url;
			QNetworkCacheMetaData* callback_ret = qnetworkdiskcache_metadata_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QNetworkDiskCache::metaData(url);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void updateMetaData(const QNetworkCacheMetaData& metaData) override {
		if (qnetworkdiskcache_updatemetadata_isbase) {
			qnetworkdiskcache_updatemetadata_isbase = false;
			QNetworkDiskCache::updateMetaData(metaData);
		} else if (qnetworkdiskcache_updatemetadata_callback != nullptr) {
			const QNetworkCacheMetaData* cbval1 = (const QNetworkCacheMetaData*)&metaData;
			qnetworkdiskcache_updatemetadata_callback(this, cbval1);
		} else {
			QNetworkDiskCache::updateMetaData(metaData);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QIODevice* data(const QUrl& url) override {
		if (qnetworkdiskcache_data_isbase) {
			qnetworkdiskcache_data_isbase = false;
			return QNetworkDiskCache::data(url);
		} else if (qnetworkdiskcache_data_callback != nullptr) {
			const QUrl* cbval1 = (const QUrl*)&url;
			QIODevice* callback_ret = qnetworkdiskcache_data_callback(this, cbval1);
			return callback_ret;
		} else {
			return QNetworkDiskCache::data(url);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool remove(const QUrl& url) override {
		if (qnetworkdiskcache_remove_isbase) {
			qnetworkdiskcache_remove_isbase = false;
			return QNetworkDiskCache::remove(url);
		} else if (qnetworkdiskcache_remove_callback != nullptr) {
			const QUrl* cbval1 = (const QUrl*)&url;
			bool callback_ret = qnetworkdiskcache_remove_callback(this, cbval1);
			return callback_ret;
		} else {
			return QNetworkDiskCache::remove(url);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QIODevice* prepare(const QNetworkCacheMetaData& metaData) override {
		if (qnetworkdiskcache_prepare_isbase) {
			qnetworkdiskcache_prepare_isbase = false;
			return QNetworkDiskCache::prepare(metaData);
		} else if (qnetworkdiskcache_prepare_callback != nullptr) {
			const QNetworkCacheMetaData* cbval1 = (const QNetworkCacheMetaData*)&metaData;
			QIODevice* callback_ret = qnetworkdiskcache_prepare_callback(this, cbval1);
			return callback_ret;
		} else {
			return QNetworkDiskCache::prepare(metaData);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void insert(QIODevice* device) override {
		if (qnetworkdiskcache_insert_isbase) {
			qnetworkdiskcache_insert_isbase = false;
			QNetworkDiskCache::insert(device);
		} else if (qnetworkdiskcache_insert_callback != nullptr) {
			QIODevice* cbval1 = device;
			qnetworkdiskcache_insert_callback(this, cbval1);
		} else {
			QNetworkDiskCache::insert(device);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void clear() override {
		if (qnetworkdiskcache_clear_isbase) {
			qnetworkdiskcache_clear_isbase = false;
			QNetworkDiskCache::clear();
		} else if (qnetworkdiskcache_clear_callback != nullptr) {
			qnetworkdiskcache_clear_callback();
		} else {
			QNetworkDiskCache::clear();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual long long expire() override {
		if (qnetworkdiskcache_expire_isbase) {
			qnetworkdiskcache_expire_isbase = false;
			return QNetworkDiskCache::expire();
		} else if (qnetworkdiskcache_expire_callback != nullptr) {
			long long callback_ret = qnetworkdiskcache_expire_callback();
			return callback_ret;
		} else {
			return QNetworkDiskCache::expire();
		}
	}

	// Friend functions
	friend long long QNetworkDiskCache_Expire(QNetworkDiskCache* self);
	friend long long QNetworkDiskCache_QBaseExpire(QNetworkDiskCache* self);
};

#endif


