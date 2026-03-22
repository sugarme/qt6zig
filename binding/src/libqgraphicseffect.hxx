#pragma once
#ifndef QGRAPHICSEFFECT_H_C_LIBVIRTUAL
#define QGRAPHICSEFFECT_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QGraphicsEffect so that we can call protected methods
class VirtualQGraphicsEffect : public QGraphicsEffect {

public:
	// Virtual class boolean flag
	bool isVirtualQGraphicsEffect= true;

	// Virtual class public types (including callbacks)
	using QGraphicsEffect_BoundingRectFor_Callback = QRectF* (*)(const QGraphicsEffect*, const QRectF*);
	using QGraphicsEffect_Draw_Callback = void (*)(QGraphicsEffect*, QPainter*);
	using QGraphicsEffect_SourceChanged_Callback = void (*)(QGraphicsEffect*, int);
	using QGraphicsEffect_UpdateBoundingRect_Callback = void (*)();
	using QGraphicsEffect_SourceIsPixmap_Callback = bool (*)();
	using QGraphicsEffect_SourceBoundingRect_Callback = QRectF* (*)();
	using QGraphicsEffect_DrawSource_Callback = void (*)(QGraphicsEffect*, QPainter*);
	using QGraphicsEffect_SourcePixmap_Callback = QPixmap* (*)();
	using QGraphicsEffect_SourceBoundingRect1_Callback = QRectF* (*)(const QGraphicsEffect*, int);
	using QGraphicsEffect_SourcePixmap1_Callback = QPixmap* (*)(const QGraphicsEffect*, int);
	using QGraphicsEffect_SourcePixmap2_Callback = QPixmap* (*)(const QGraphicsEffect*, int, QPoint*);
	using QGraphicsEffect_SourcePixmap3_Callback = QPixmap* (*)(const QGraphicsEffect*, int, QPoint*, int);

protected:
	// Instance callback storage
	mutable QGraphicsEffect_BoundingRectFor_Callback qgraphicseffect_boundingrectfor_callback = nullptr;
	mutable QGraphicsEffect_Draw_Callback qgraphicseffect_draw_callback = nullptr;
	mutable QGraphicsEffect_SourceChanged_Callback qgraphicseffect_sourcechanged_callback = nullptr;
	mutable QGraphicsEffect_UpdateBoundingRect_Callback qgraphicseffect_updateboundingrect_callback = nullptr;
	mutable QGraphicsEffect_SourceIsPixmap_Callback qgraphicseffect_sourceispixmap_callback = nullptr;
	mutable QGraphicsEffect_SourceBoundingRect_Callback qgraphicseffect_sourceboundingrect_callback = nullptr;
	mutable QGraphicsEffect_DrawSource_Callback qgraphicseffect_drawsource_callback = nullptr;
	mutable QGraphicsEffect_SourcePixmap_Callback qgraphicseffect_sourcepixmap_callback = nullptr;
	mutable QGraphicsEffect_SourceBoundingRect1_Callback qgraphicseffect_sourceboundingrect1_callback = nullptr;
	mutable QGraphicsEffect_SourcePixmap1_Callback qgraphicseffect_sourcepixmap1_callback = nullptr;
	mutable QGraphicsEffect_SourcePixmap2_Callback qgraphicseffect_sourcepixmap2_callback = nullptr;
	mutable QGraphicsEffect_SourcePixmap3_Callback qgraphicseffect_sourcepixmap3_callback = nullptr;

	// Instance base flags
    mutable bool qgraphicseffect_boundingrectfor_isbase = false;
    mutable bool qgraphicseffect_draw_isbase = false;
    mutable bool qgraphicseffect_sourcechanged_isbase = false;
    mutable bool qgraphicseffect_updateboundingrect_isbase = false;
    mutable bool qgraphicseffect_sourceispixmap_isbase = false;
    mutable bool qgraphicseffect_sourceboundingrect_isbase = false;
    mutable bool qgraphicseffect_drawsource_isbase = false;
    mutable bool qgraphicseffect_sourcepixmap_isbase = false;
    mutable bool qgraphicseffect_sourceboundingrect1_isbase = false;
    mutable bool qgraphicseffect_sourcepixmap1_isbase = false;
    mutable bool qgraphicseffect_sourcepixmap2_isbase = false;
    mutable bool qgraphicseffect_sourcepixmap3_isbase = false;

public:
	VirtualQGraphicsEffect(): QGraphicsEffect() {};
	VirtualQGraphicsEffect(QObject* parent): QGraphicsEffect(parent) {};

	~VirtualQGraphicsEffect() {
		qgraphicseffect_boundingrectfor_callback = nullptr;
		qgraphicseffect_draw_callback = nullptr;
		qgraphicseffect_sourcechanged_callback = nullptr;
		qgraphicseffect_updateboundingrect_callback = nullptr;
		qgraphicseffect_sourceispixmap_callback = nullptr;
		qgraphicseffect_sourceboundingrect_callback = nullptr;
		qgraphicseffect_drawsource_callback = nullptr;
		qgraphicseffect_sourcepixmap_callback = nullptr;
		qgraphicseffect_sourceboundingrect1_callback = nullptr;
		qgraphicseffect_sourcepixmap1_callback = nullptr;
		qgraphicseffect_sourcepixmap2_callback = nullptr;
		qgraphicseffect_sourcepixmap3_callback = nullptr;
	}

// Callback setters
	inline void setQGraphicsEffect_BoundingRectFor_Callback(QGraphicsEffect_BoundingRectFor_Callback cb) const { qgraphicseffect_boundingrectfor_callback = cb; }
	inline void setQGraphicsEffect_Draw_Callback(QGraphicsEffect_Draw_Callback cb) const { qgraphicseffect_draw_callback = cb; }
	inline void setQGraphicsEffect_SourceChanged_Callback(QGraphicsEffect_SourceChanged_Callback cb) const { qgraphicseffect_sourcechanged_callback = cb; }
	inline void setQGraphicsEffect_UpdateBoundingRect_Callback(QGraphicsEffect_UpdateBoundingRect_Callback cb) const { qgraphicseffect_updateboundingrect_callback = cb; }
	inline void setQGraphicsEffect_SourceIsPixmap_Callback(QGraphicsEffect_SourceIsPixmap_Callback cb) const { qgraphicseffect_sourceispixmap_callback = cb; }
	inline void setQGraphicsEffect_SourceBoundingRect_Callback(QGraphicsEffect_SourceBoundingRect_Callback cb) const { qgraphicseffect_sourceboundingrect_callback = cb; }
	inline void setQGraphicsEffect_DrawSource_Callback(QGraphicsEffect_DrawSource_Callback cb) const { qgraphicseffect_drawsource_callback = cb; }
	inline void setQGraphicsEffect_SourcePixmap_Callback(QGraphicsEffect_SourcePixmap_Callback cb) const { qgraphicseffect_sourcepixmap_callback = cb; }
	inline void setQGraphicsEffect_SourceBoundingRect1_Callback(QGraphicsEffect_SourceBoundingRect1_Callback cb) const { qgraphicseffect_sourceboundingrect1_callback = cb; }
	inline void setQGraphicsEffect_SourcePixmap1_Callback(QGraphicsEffect_SourcePixmap1_Callback cb) const { qgraphicseffect_sourcepixmap1_callback = cb; }
	inline void setQGraphicsEffect_SourcePixmap2_Callback(QGraphicsEffect_SourcePixmap2_Callback cb) const { qgraphicseffect_sourcepixmap2_callback = cb; }
	inline void setQGraphicsEffect_SourcePixmap3_Callback(QGraphicsEffect_SourcePixmap3_Callback cb) const { qgraphicseffect_sourcepixmap3_callback = cb; }

// Base flag setters
	inline void setQGraphicsEffect_BoundingRectFor_IsBase(bool value) const { qgraphicseffect_boundingrectfor_isbase = value; }
	inline void setQGraphicsEffect_Draw_IsBase(bool value) const { qgraphicseffect_draw_isbase = value; }
	inline void setQGraphicsEffect_SourceChanged_IsBase(bool value) const { qgraphicseffect_sourcechanged_isbase = value; }
	inline void setQGraphicsEffect_UpdateBoundingRect_IsBase(bool value) const { qgraphicseffect_updateboundingrect_isbase = value; }
	inline void setQGraphicsEffect_SourceIsPixmap_IsBase(bool value) const { qgraphicseffect_sourceispixmap_isbase = value; }
	inline void setQGraphicsEffect_SourceBoundingRect_IsBase(bool value) const { qgraphicseffect_sourceboundingrect_isbase = value; }
	inline void setQGraphicsEffect_DrawSource_IsBase(bool value) const { qgraphicseffect_drawsource_isbase = value; }
	inline void setQGraphicsEffect_SourcePixmap_IsBase(bool value) const { qgraphicseffect_sourcepixmap_isbase = value; }
	inline void setQGraphicsEffect_SourceBoundingRect1_IsBase(bool value) const { qgraphicseffect_sourceboundingrect1_isbase = value; }
	inline void setQGraphicsEffect_SourcePixmap1_IsBase(bool value) const { qgraphicseffect_sourcepixmap1_isbase = value; }
	inline void setQGraphicsEffect_SourcePixmap2_IsBase(bool value) const { qgraphicseffect_sourcepixmap2_isbase = value; }
	inline void setQGraphicsEffect_SourcePixmap3_IsBase(bool value) const { qgraphicseffect_sourcepixmap3_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QRectF boundingRectFor(const QRectF& sourceRect) const override {
		if (qgraphicseffect_boundingrectfor_isbase) {
			qgraphicseffect_boundingrectfor_isbase = false;
			return QGraphicsEffect::boundingRectFor(sourceRect);
		} else if (qgraphicseffect_boundingrectfor_callback != nullptr) {
			const QRectF* cbval1 = (const QRectF*)&sourceRect;
			QRectF* callback_ret = qgraphicseffect_boundingrectfor_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QGraphicsEffect::boundingRectFor(sourceRect);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void draw(QPainter* painter) override {
		if (qgraphicseffect_draw_callback != nullptr) {
			QPainter* cbval1 = painter;
			qgraphicseffect_draw_callback(this, cbval1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void sourceChanged(QFlags<QGraphicsEffect::ChangeFlag> flags) override {
		if (qgraphicseffect_sourcechanged_isbase) {
			qgraphicseffect_sourcechanged_isbase = false;
			QGraphicsEffect::sourceChanged(flags);
		} else if (qgraphicseffect_sourcechanged_callback != nullptr) {
			int cbval1 = static_cast<int>(flags);
			qgraphicseffect_sourcechanged_callback(this, cbval1);
		} else {
			QGraphicsEffect::sourceChanged(flags);
		}
	}

	// Virtual method for C ABI access and custom callback
	void updateBoundingRect() {
		if (qgraphicseffect_updateboundingrect_isbase) {
			qgraphicseffect_updateboundingrect_isbase = false;
			QGraphicsEffect::updateBoundingRect();
		} else if (qgraphicseffect_updateboundingrect_callback != nullptr) {
			qgraphicseffect_updateboundingrect_callback();
		} else {
			QGraphicsEffect::updateBoundingRect();
		}
	}

	// Virtual method for C ABI access and custom callback
	bool sourceIsPixmap() const {
		if (qgraphicseffect_sourceispixmap_isbase) {
			qgraphicseffect_sourceispixmap_isbase = false;
			return QGraphicsEffect::sourceIsPixmap();
		} else if (qgraphicseffect_sourceispixmap_callback != nullptr) {
			bool callback_ret = qgraphicseffect_sourceispixmap_callback();
			return callback_ret;
		} else {
			return QGraphicsEffect::sourceIsPixmap();
		}
	}

	// Virtual method for C ABI access and custom callback
	QRectF sourceBoundingRect() const {
		if (qgraphicseffect_sourceboundingrect_isbase) {
			qgraphicseffect_sourceboundingrect_isbase = false;
			return QGraphicsEffect::sourceBoundingRect();
		} else if (qgraphicseffect_sourceboundingrect_callback != nullptr) {
			QRectF* callback_ret = qgraphicseffect_sourceboundingrect_callback();
			return *callback_ret;
		} else {
			return QGraphicsEffect::sourceBoundingRect();
		}
	}

	// Virtual method for C ABI access and custom callback
	void drawSource(QPainter* painter) {
		if (qgraphicseffect_drawsource_isbase) {
			qgraphicseffect_drawsource_isbase = false;
			QGraphicsEffect::drawSource(painter);
		} else if (qgraphicseffect_drawsource_callback != nullptr) {
			QPainter* cbval1 = painter;
			qgraphicseffect_drawsource_callback(this, cbval1);
		} else {
			QGraphicsEffect::drawSource(painter);
		}
	}

	// Virtual method for C ABI access and custom callback
	QPixmap sourcePixmap() const {
		if (qgraphicseffect_sourcepixmap_isbase) {
			qgraphicseffect_sourcepixmap_isbase = false;
			return QGraphicsEffect::sourcePixmap();
		} else if (qgraphicseffect_sourcepixmap_callback != nullptr) {
			QPixmap* callback_ret = qgraphicseffect_sourcepixmap_callback();
			return *callback_ret;
		} else {
			return QGraphicsEffect::sourcePixmap();
		}
	}

	// Virtual method for C ABI access and custom callback
	QRectF sourceBoundingRect(Qt::CoordinateSystem system) const {
		if (qgraphicseffect_sourceboundingrect1_isbase) {
			qgraphicseffect_sourceboundingrect1_isbase = false;
			return QGraphicsEffect::sourceBoundingRect(system);
		} else if (qgraphicseffect_sourceboundingrect1_callback != nullptr) {
			int cbval1 = static_cast<int>(system);
			QRectF* callback_ret = qgraphicseffect_sourceboundingrect1_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QGraphicsEffect::sourceBoundingRect(system);
		}
	}

	// Virtual method for C ABI access and custom callback
	QPixmap sourcePixmap(Qt::CoordinateSystem system) const {
		if (qgraphicseffect_sourcepixmap1_isbase) {
			qgraphicseffect_sourcepixmap1_isbase = false;
			return QGraphicsEffect::sourcePixmap(system);
		} else if (qgraphicseffect_sourcepixmap1_callback != nullptr) {
			int cbval1 = static_cast<int>(system);
			QPixmap* callback_ret = qgraphicseffect_sourcepixmap1_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QGraphicsEffect::sourcePixmap(system);
		}
	}

	// Virtual method for C ABI access and custom callback
	QPixmap sourcePixmap(Qt::CoordinateSystem system, QPoint* offset) const {
		if (qgraphicseffect_sourcepixmap2_isbase) {
			qgraphicseffect_sourcepixmap2_isbase = false;
			return QGraphicsEffect::sourcePixmap(system, offset);
		} else if (qgraphicseffect_sourcepixmap2_callback != nullptr) {
			int cbval1 = static_cast<int>(system);
			QPoint* cbval2 = offset;
			QPixmap* callback_ret = qgraphicseffect_sourcepixmap2_callback(this, cbval1, cbval2);
			return *callback_ret;
		} else {
			return QGraphicsEffect::sourcePixmap(system, offset);
		}
	}

	// Virtual method for C ABI access and custom callback
	QPixmap sourcePixmap(Qt::CoordinateSystem system, QPoint* offset, PixmapPadMode mode) const {
		if (qgraphicseffect_sourcepixmap3_isbase) {
			qgraphicseffect_sourcepixmap3_isbase = false;
			return QGraphicsEffect::sourcePixmap(system, offset, mode);
		} else if (qgraphicseffect_sourcepixmap3_callback != nullptr) {
			int cbval1 = static_cast<int>(system);
			QPoint* cbval2 = offset;
			int cbval3 = static_cast<int>(mode);
			QPixmap* callback_ret = qgraphicseffect_sourcepixmap3_callback(this, cbval1, cbval2, cbval3);
			return *callback_ret;
		} else {
			return QGraphicsEffect::sourcePixmap(system, offset, mode);
		}
	}

	// Friend functions
	friend void QGraphicsEffect_Draw(QGraphicsEffect* self, QPainter* painter);
	friend void QGraphicsEffect_QBaseDraw(QGraphicsEffect* self, QPainter* painter);
	friend void QGraphicsEffect_SourceChanged(QGraphicsEffect* self, int flags);
	friend void QGraphicsEffect_QBaseSourceChanged(QGraphicsEffect* self, int flags);
	friend void QGraphicsEffect_UpdateBoundingRect(QGraphicsEffect* self);
	friend void QGraphicsEffect_QBaseUpdateBoundingRect(QGraphicsEffect* self);
	friend bool QGraphicsEffect_SourceIsPixmap(const QGraphicsEffect* self);
	friend bool QGraphicsEffect_QBaseSourceIsPixmap(const QGraphicsEffect* self);
	friend QRectF* QGraphicsEffect_SourceBoundingRect(const QGraphicsEffect* self);
	friend QRectF* QGraphicsEffect_QBaseSourceBoundingRect(const QGraphicsEffect* self);
	friend void QGraphicsEffect_DrawSource(QGraphicsEffect* self, QPainter* painter);
	friend void QGraphicsEffect_QBaseDrawSource(QGraphicsEffect* self, QPainter* painter);
	friend QPixmap* QGraphicsEffect_SourcePixmap(const QGraphicsEffect* self);
	friend QPixmap* QGraphicsEffect_QBaseSourcePixmap(const QGraphicsEffect* self);
	friend QRectF* QGraphicsEffect_SourceBoundingRect1(const QGraphicsEffect* self, int system);
	friend QRectF* QGraphicsEffect_QBaseSourceBoundingRect1(const QGraphicsEffect* self, int system);
	friend QPixmap* QGraphicsEffect_SourcePixmap1(const QGraphicsEffect* self, int system);
	friend QPixmap* QGraphicsEffect_QBaseSourcePixmap1(const QGraphicsEffect* self, int system);
	friend QPixmap* QGraphicsEffect_SourcePixmap2(const QGraphicsEffect* self, int system, QPoint* offset);
	friend QPixmap* QGraphicsEffect_QBaseSourcePixmap2(const QGraphicsEffect* self, int system, QPoint* offset);
	friend QPixmap* QGraphicsEffect_SourcePixmap3(const QGraphicsEffect* self, int system, QPoint* offset, int mode);
	friend QPixmap* QGraphicsEffect_QBaseSourcePixmap3(const QGraphicsEffect* self, int system, QPoint* offset, int mode);
};

// This class is a subclass of QGraphicsColorizeEffect so that we can call protected methods
class VirtualQGraphicsColorizeEffect final : public QGraphicsColorizeEffect {

public:
	// Virtual class boolean flag
	bool isVirtualQGraphicsColorizeEffect= true;

	// Virtual class public types (including callbacks)
	using QGraphicsColorizeEffect_Draw_Callback = void (*)(QGraphicsColorizeEffect*, QPainter*);

protected:
	// Instance callback storage
	mutable QGraphicsColorizeEffect_Draw_Callback qgraphicscolorizeeffect_draw_callback = nullptr;

	// Instance base flags
    mutable bool qgraphicscolorizeeffect_draw_isbase = false;

public:
	VirtualQGraphicsColorizeEffect(): QGraphicsColorizeEffect() {};
	VirtualQGraphicsColorizeEffect(QObject* parent): QGraphicsColorizeEffect(parent) {};

	~VirtualQGraphicsColorizeEffect() {
		qgraphicscolorizeeffect_draw_callback = nullptr;
	}

// Callback setters
	inline void setQGraphicsColorizeEffect_Draw_Callback(QGraphicsColorizeEffect_Draw_Callback cb) const { qgraphicscolorizeeffect_draw_callback = cb; }

// Base flag setters
	inline void setQGraphicsColorizeEffect_Draw_IsBase(bool value) const { qgraphicscolorizeeffect_draw_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void draw(QPainter* painter) override {
		if (qgraphicscolorizeeffect_draw_isbase) {
			qgraphicscolorizeeffect_draw_isbase = false;
			QGraphicsColorizeEffect::draw(painter);
		} else if (qgraphicscolorizeeffect_draw_callback != nullptr) {
			QPainter* cbval1 = painter;
			qgraphicscolorizeeffect_draw_callback(this, cbval1);
		} else {
			QGraphicsColorizeEffect::draw(painter);
		}
	}

	// Friend functions
	friend void QGraphicsColorizeEffect_Draw(QGraphicsColorizeEffect* self, QPainter* painter);
	friend void QGraphicsColorizeEffect_QBaseDraw(QGraphicsColorizeEffect* self, QPainter* painter);
};

// This class is a subclass of QGraphicsBlurEffect so that we can call protected methods
class VirtualQGraphicsBlurEffect final : public QGraphicsBlurEffect {

public:
	// Virtual class boolean flag
	bool isVirtualQGraphicsBlurEffect= true;

	// Virtual class public types (including callbacks)
	using QGraphicsBlurEffect_BoundingRectFor_Callback = QRectF* (*)(const QGraphicsBlurEffect*, const QRectF*);
	using QGraphicsBlurEffect_Draw_Callback = void (*)(QGraphicsBlurEffect*, QPainter*);

protected:
	// Instance callback storage
	mutable QGraphicsBlurEffect_BoundingRectFor_Callback qgraphicsblureffect_boundingrectfor_callback = nullptr;
	mutable QGraphicsBlurEffect_Draw_Callback qgraphicsblureffect_draw_callback = nullptr;

	// Instance base flags
    mutable bool qgraphicsblureffect_boundingrectfor_isbase = false;
    mutable bool qgraphicsblureffect_draw_isbase = false;

public:
	VirtualQGraphicsBlurEffect(): QGraphicsBlurEffect() {};
	VirtualQGraphicsBlurEffect(QObject* parent): QGraphicsBlurEffect(parent) {};

	~VirtualQGraphicsBlurEffect() {
		qgraphicsblureffect_boundingrectfor_callback = nullptr;
		qgraphicsblureffect_draw_callback = nullptr;
	}

// Callback setters
	inline void setQGraphicsBlurEffect_BoundingRectFor_Callback(QGraphicsBlurEffect_BoundingRectFor_Callback cb) const { qgraphicsblureffect_boundingrectfor_callback = cb; }
	inline void setQGraphicsBlurEffect_Draw_Callback(QGraphicsBlurEffect_Draw_Callback cb) const { qgraphicsblureffect_draw_callback = cb; }

// Base flag setters
	inline void setQGraphicsBlurEffect_BoundingRectFor_IsBase(bool value) const { qgraphicsblureffect_boundingrectfor_isbase = value; }
	inline void setQGraphicsBlurEffect_Draw_IsBase(bool value) const { qgraphicsblureffect_draw_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QRectF boundingRectFor(const QRectF& rect) const override {
		if (qgraphicsblureffect_boundingrectfor_isbase) {
			qgraphicsblureffect_boundingrectfor_isbase = false;
			return QGraphicsBlurEffect::boundingRectFor(rect);
		} else if (qgraphicsblureffect_boundingrectfor_callback != nullptr) {
			const QRectF* cbval1 = (const QRectF*)&rect;
			QRectF* callback_ret = qgraphicsblureffect_boundingrectfor_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QGraphicsBlurEffect::boundingRectFor(rect);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void draw(QPainter* painter) override {
		if (qgraphicsblureffect_draw_isbase) {
			qgraphicsblureffect_draw_isbase = false;
			QGraphicsBlurEffect::draw(painter);
		} else if (qgraphicsblureffect_draw_callback != nullptr) {
			QPainter* cbval1 = painter;
			qgraphicsblureffect_draw_callback(this, cbval1);
		} else {
			QGraphicsBlurEffect::draw(painter);
		}
	}

	// Friend functions
	friend void QGraphicsBlurEffect_Draw(QGraphicsBlurEffect* self, QPainter* painter);
	friend void QGraphicsBlurEffect_QBaseDraw(QGraphicsBlurEffect* self, QPainter* painter);
};

// This class is a subclass of QGraphicsDropShadowEffect so that we can call protected methods
class VirtualQGraphicsDropShadowEffect final : public QGraphicsDropShadowEffect {

public:
	// Virtual class boolean flag
	bool isVirtualQGraphicsDropShadowEffect= true;

	// Virtual class public types (including callbacks)
	using QGraphicsDropShadowEffect_BoundingRectFor_Callback = QRectF* (*)(const QGraphicsDropShadowEffect*, const QRectF*);
	using QGraphicsDropShadowEffect_Draw_Callback = void (*)(QGraphicsDropShadowEffect*, QPainter*);

protected:
	// Instance callback storage
	mutable QGraphicsDropShadowEffect_BoundingRectFor_Callback qgraphicsdropshadoweffect_boundingrectfor_callback = nullptr;
	mutable QGraphicsDropShadowEffect_Draw_Callback qgraphicsdropshadoweffect_draw_callback = nullptr;

	// Instance base flags
    mutable bool qgraphicsdropshadoweffect_boundingrectfor_isbase = false;
    mutable bool qgraphicsdropshadoweffect_draw_isbase = false;

public:
	VirtualQGraphicsDropShadowEffect(): QGraphicsDropShadowEffect() {};
	VirtualQGraphicsDropShadowEffect(QObject* parent): QGraphicsDropShadowEffect(parent) {};

	~VirtualQGraphicsDropShadowEffect() {
		qgraphicsdropshadoweffect_boundingrectfor_callback = nullptr;
		qgraphicsdropshadoweffect_draw_callback = nullptr;
	}

// Callback setters
	inline void setQGraphicsDropShadowEffect_BoundingRectFor_Callback(QGraphicsDropShadowEffect_BoundingRectFor_Callback cb) const { qgraphicsdropshadoweffect_boundingrectfor_callback = cb; }
	inline void setQGraphicsDropShadowEffect_Draw_Callback(QGraphicsDropShadowEffect_Draw_Callback cb) const { qgraphicsdropshadoweffect_draw_callback = cb; }

// Base flag setters
	inline void setQGraphicsDropShadowEffect_BoundingRectFor_IsBase(bool value) const { qgraphicsdropshadoweffect_boundingrectfor_isbase = value; }
	inline void setQGraphicsDropShadowEffect_Draw_IsBase(bool value) const { qgraphicsdropshadoweffect_draw_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual QRectF boundingRectFor(const QRectF& rect) const override {
		if (qgraphicsdropshadoweffect_boundingrectfor_isbase) {
			qgraphicsdropshadoweffect_boundingrectfor_isbase = false;
			return QGraphicsDropShadowEffect::boundingRectFor(rect);
		} else if (qgraphicsdropshadoweffect_boundingrectfor_callback != nullptr) {
			const QRectF* cbval1 = (const QRectF*)&rect;
			QRectF* callback_ret = qgraphicsdropshadoweffect_boundingrectfor_callback(this, cbval1);
			return *callback_ret;
		} else {
			return QGraphicsDropShadowEffect::boundingRectFor(rect);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void draw(QPainter* painter) override {
		if (qgraphicsdropshadoweffect_draw_isbase) {
			qgraphicsdropshadoweffect_draw_isbase = false;
			QGraphicsDropShadowEffect::draw(painter);
		} else if (qgraphicsdropshadoweffect_draw_callback != nullptr) {
			QPainter* cbval1 = painter;
			qgraphicsdropshadoweffect_draw_callback(this, cbval1);
		} else {
			QGraphicsDropShadowEffect::draw(painter);
		}
	}

	// Friend functions
	friend void QGraphicsDropShadowEffect_Draw(QGraphicsDropShadowEffect* self, QPainter* painter);
	friend void QGraphicsDropShadowEffect_QBaseDraw(QGraphicsDropShadowEffect* self, QPainter* painter);
};

// This class is a subclass of QGraphicsOpacityEffect so that we can call protected methods
class VirtualQGraphicsOpacityEffect final : public QGraphicsOpacityEffect {

public:
	// Virtual class boolean flag
	bool isVirtualQGraphicsOpacityEffect= true;

	// Virtual class public types (including callbacks)
	using QGraphicsOpacityEffect_Draw_Callback = void (*)(QGraphicsOpacityEffect*, QPainter*);

protected:
	// Instance callback storage
	mutable QGraphicsOpacityEffect_Draw_Callback qgraphicsopacityeffect_draw_callback = nullptr;

	// Instance base flags
    mutable bool qgraphicsopacityeffect_draw_isbase = false;

public:
	VirtualQGraphicsOpacityEffect(): QGraphicsOpacityEffect() {};
	VirtualQGraphicsOpacityEffect(QObject* parent): QGraphicsOpacityEffect(parent) {};

	~VirtualQGraphicsOpacityEffect() {
		qgraphicsopacityeffect_draw_callback = nullptr;
	}

// Callback setters
	inline void setQGraphicsOpacityEffect_Draw_Callback(QGraphicsOpacityEffect_Draw_Callback cb) const { qgraphicsopacityeffect_draw_callback = cb; }

// Base flag setters
	inline void setQGraphicsOpacityEffect_Draw_IsBase(bool value) const { qgraphicsopacityeffect_draw_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void draw(QPainter* painter) override {
		if (qgraphicsopacityeffect_draw_isbase) {
			qgraphicsopacityeffect_draw_isbase = false;
			QGraphicsOpacityEffect::draw(painter);
		} else if (qgraphicsopacityeffect_draw_callback != nullptr) {
			QPainter* cbval1 = painter;
			qgraphicsopacityeffect_draw_callback(this, cbval1);
		} else {
			QGraphicsOpacityEffect::draw(painter);
		}
	}

	// Friend functions
	friend void QGraphicsOpacityEffect_Draw(QGraphicsOpacityEffect* self, QPainter* painter);
	friend void QGraphicsOpacityEffect_QBaseDraw(QGraphicsOpacityEffect* self, QPainter* painter);
};

#endif


