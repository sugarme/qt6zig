#pragma once
#ifndef QSTYLE_H_C_LIBVIRTUAL
#define QSTYLE_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QStyle so that we can call protected methods
class VirtualQStyle : public QStyle {

public:
	// Virtual class boolean flag
	bool isVirtualQStyle= true;

	// Virtual class public types (including callbacks)
	using QStyle_Polish_Callback = void (*)(QStyle*, QWidget*);
	using QStyle_Unpolish_Callback = void (*)(QStyle*, QWidget*);
	using QStyle_Polish2_Callback = void (*)(QStyle*, QApplication*);
	using QStyle_Unpolish2_Callback = void (*)(QStyle*, QApplication*);
	using QStyle_Polish3_Callback = void (*)(QStyle*, QPalette*);
	using QStyle_ItemTextRect_Callback = QRect* (*)(const QStyle*, const QFontMetrics*, const QRect*, int, bool, libqt_string);
	using QStyle_ItemPixmapRect_Callback = QRect* (*)(const QStyle*, const QRect*, int, const QPixmap*);
	using QStyle_DrawItemText_Callback = void (*)(const QStyle*, QPainter*, const QRect*, int, const QPalette*, bool, libqt_string, int);
	using QStyle_DrawItemPixmap_Callback = void (*)(const QStyle*, QPainter*, const QRect*, int, const QPixmap*);
	using QStyle_StandardPalette_Callback = QPalette* (*)();
	using QStyle_DrawPrimitive_Callback = void (*)(const QStyle*, int, const QStyleOption*, QPainter*, const QWidget*);
	using QStyle_DrawControl_Callback = void (*)(const QStyle*, int, const QStyleOption*, QPainter*, const QWidget*);
	using QStyle_SubElementRect_Callback = QRect* (*)(const QStyle*, int, const QStyleOption*, const QWidget*);
	using QStyle_DrawComplexControl_Callback = void (*)(const QStyle*, int, const QStyleOptionComplex*, QPainter*, const QWidget*);
	using QStyle_HitTestComplexControl_Callback = int (*)(const QStyle*, int, const QStyleOptionComplex*, const QPoint*, const QWidget*);
	using QStyle_SubControlRect_Callback = QRect* (*)(const QStyle*, int, const QStyleOptionComplex*, int, const QWidget*);
	using QStyle_PixelMetric_Callback = int (*)(const QStyle*, int, const QStyleOption*, const QWidget*);
	using QStyle_SizeFromContents_Callback = QSize* (*)(const QStyle*, int, const QStyleOption*, const QSize*, const QWidget*);
	using QStyle_StyleHint_Callback = int (*)(const QStyle*, int, const QStyleOption*, const QWidget*, QStyleHintReturn*);
	using QStyle_StandardPixmap_Callback = QPixmap* (*)(const QStyle*, int, const QStyleOption*, const QWidget*);
	using QStyle_StandardIcon_Callback = QIcon* (*)(const QStyle*, int, const QStyleOption*, const QWidget*);
	using QStyle_GeneratedIconPixmap_Callback = QPixmap* (*)(const QStyle*, int, const QPixmap*, const QStyleOption*);
	using QStyle_LayoutSpacing_Callback = int (*)(const QStyle*, int, int, int, const QStyleOption*, const QWidget*);

protected:
	// Instance callback storage
	mutable QStyle_Polish_Callback qstyle_polish_callback = nullptr;
	mutable QStyle_Unpolish_Callback qstyle_unpolish_callback = nullptr;
	mutable QStyle_Polish2_Callback qstyle_polish2_callback = nullptr;
	mutable QStyle_Unpolish2_Callback qstyle_unpolish2_callback = nullptr;
	mutable QStyle_Polish3_Callback qstyle_polish3_callback = nullptr;
	mutable QStyle_ItemTextRect_Callback qstyle_itemtextrect_callback = nullptr;
	mutable QStyle_ItemPixmapRect_Callback qstyle_itempixmaprect_callback = nullptr;
	mutable QStyle_DrawItemText_Callback qstyle_drawitemtext_callback = nullptr;
	mutable QStyle_DrawItemPixmap_Callback qstyle_drawitempixmap_callback = nullptr;
	mutable QStyle_StandardPalette_Callback qstyle_standardpalette_callback = nullptr;
	mutable QStyle_DrawPrimitive_Callback qstyle_drawprimitive_callback = nullptr;
	mutable QStyle_DrawControl_Callback qstyle_drawcontrol_callback = nullptr;
	mutable QStyle_SubElementRect_Callback qstyle_subelementrect_callback = nullptr;
	mutable QStyle_DrawComplexControl_Callback qstyle_drawcomplexcontrol_callback = nullptr;
	mutable QStyle_HitTestComplexControl_Callback qstyle_hittestcomplexcontrol_callback = nullptr;
	mutable QStyle_SubControlRect_Callback qstyle_subcontrolrect_callback = nullptr;
	mutable QStyle_PixelMetric_Callback qstyle_pixelmetric_callback = nullptr;
	mutable QStyle_SizeFromContents_Callback qstyle_sizefromcontents_callback = nullptr;
	mutable QStyle_StyleHint_Callback qstyle_stylehint_callback = nullptr;
	mutable QStyle_StandardPixmap_Callback qstyle_standardpixmap_callback = nullptr;
	mutable QStyle_StandardIcon_Callback qstyle_standardicon_callback = nullptr;
	mutable QStyle_GeneratedIconPixmap_Callback qstyle_generatediconpixmap_callback = nullptr;
	mutable QStyle_LayoutSpacing_Callback qstyle_layoutspacing_callback = nullptr;

	// Instance base flags
    mutable bool qstyle_polish_isbase = false;
    mutable bool qstyle_unpolish_isbase = false;
    mutable bool qstyle_polish2_isbase = false;
    mutable bool qstyle_unpolish2_isbase = false;
    mutable bool qstyle_polish3_isbase = false;
    mutable bool qstyle_itemtextrect_isbase = false;
    mutable bool qstyle_itempixmaprect_isbase = false;
    mutable bool qstyle_drawitemtext_isbase = false;
    mutable bool qstyle_drawitempixmap_isbase = false;
    mutable bool qstyle_standardpalette_isbase = false;
    mutable bool qstyle_drawprimitive_isbase = false;
    mutable bool qstyle_drawcontrol_isbase = false;
    mutable bool qstyle_subelementrect_isbase = false;
    mutable bool qstyle_drawcomplexcontrol_isbase = false;
    mutable bool qstyle_hittestcomplexcontrol_isbase = false;
    mutable bool qstyle_subcontrolrect_isbase = false;
    mutable bool qstyle_pixelmetric_isbase = false;
    mutable bool qstyle_sizefromcontents_isbase = false;
    mutable bool qstyle_stylehint_isbase = false;
    mutable bool qstyle_standardpixmap_isbase = false;
    mutable bool qstyle_standardicon_isbase = false;
    mutable bool qstyle_generatediconpixmap_isbase = false;
    mutable bool qstyle_layoutspacing_isbase = false;

public:
	VirtualQStyle(): QStyle() {};

	~VirtualQStyle() {
		qstyle_polish_callback = nullptr;
		qstyle_unpolish_callback = nullptr;
		qstyle_polish2_callback = nullptr;
		qstyle_unpolish2_callback = nullptr;
		qstyle_polish3_callback = nullptr;
		qstyle_itemtextrect_callback = nullptr;
		qstyle_itempixmaprect_callback = nullptr;
		qstyle_drawitemtext_callback = nullptr;
		qstyle_drawitempixmap_callback = nullptr;
		qstyle_standardpalette_callback = nullptr;
		qstyle_drawprimitive_callback = nullptr;
		qstyle_drawcontrol_callback = nullptr;
		qstyle_subelementrect_callback = nullptr;
		qstyle_drawcomplexcontrol_callback = nullptr;
		qstyle_hittestcomplexcontrol_callback = nullptr;
		qstyle_subcontrolrect_callback = nullptr;
		qstyle_pixelmetric_callback = nullptr;
		qstyle_sizefromcontents_callback = nullptr;
		qstyle_stylehint_callback = nullptr;
		qstyle_standardpixmap_callback = nullptr;
		qstyle_standardicon_callback = nullptr;
		qstyle_generatediconpixmap_callback = nullptr;
		qstyle_layoutspacing_callback = nullptr;
	}

// Callback setters
	inline void setQStyle_Polish_Callback(QStyle_Polish_Callback cb) const { qstyle_polish_callback = cb; }
	inline void setQStyle_Unpolish_Callback(QStyle_Unpolish_Callback cb) const { qstyle_unpolish_callback = cb; }
	inline void setQStyle_Polish2_Callback(QStyle_Polish2_Callback cb) const { qstyle_polish2_callback = cb; }
	inline void setQStyle_Unpolish2_Callback(QStyle_Unpolish2_Callback cb) const { qstyle_unpolish2_callback = cb; }
	inline void setQStyle_Polish3_Callback(QStyle_Polish3_Callback cb) const { qstyle_polish3_callback = cb; }
	inline void setQStyle_ItemTextRect_Callback(QStyle_ItemTextRect_Callback cb) const { qstyle_itemtextrect_callback = cb; }
	inline void setQStyle_ItemPixmapRect_Callback(QStyle_ItemPixmapRect_Callback cb) const { qstyle_itempixmaprect_callback = cb; }
	inline void setQStyle_DrawItemText_Callback(QStyle_DrawItemText_Callback cb) const { qstyle_drawitemtext_callback = cb; }
	inline void setQStyle_DrawItemPixmap_Callback(QStyle_DrawItemPixmap_Callback cb) const { qstyle_drawitempixmap_callback = cb; }
	inline void setQStyle_StandardPalette_Callback(QStyle_StandardPalette_Callback cb) const { qstyle_standardpalette_callback = cb; }
	inline void setQStyle_DrawPrimitive_Callback(QStyle_DrawPrimitive_Callback cb) const { qstyle_drawprimitive_callback = cb; }
	inline void setQStyle_DrawControl_Callback(QStyle_DrawControl_Callback cb) const { qstyle_drawcontrol_callback = cb; }
	inline void setQStyle_SubElementRect_Callback(QStyle_SubElementRect_Callback cb) const { qstyle_subelementrect_callback = cb; }
	inline void setQStyle_DrawComplexControl_Callback(QStyle_DrawComplexControl_Callback cb) const { qstyle_drawcomplexcontrol_callback = cb; }
	inline void setQStyle_HitTestComplexControl_Callback(QStyle_HitTestComplexControl_Callback cb) const { qstyle_hittestcomplexcontrol_callback = cb; }
	inline void setQStyle_SubControlRect_Callback(QStyle_SubControlRect_Callback cb) const { qstyle_subcontrolrect_callback = cb; }
	inline void setQStyle_PixelMetric_Callback(QStyle_PixelMetric_Callback cb) const { qstyle_pixelmetric_callback = cb; }
	inline void setQStyle_SizeFromContents_Callback(QStyle_SizeFromContents_Callback cb) const { qstyle_sizefromcontents_callback = cb; }
	inline void setQStyle_StyleHint_Callback(QStyle_StyleHint_Callback cb) const { qstyle_stylehint_callback = cb; }
	inline void setQStyle_StandardPixmap_Callback(QStyle_StandardPixmap_Callback cb) const { qstyle_standardpixmap_callback = cb; }
	inline void setQStyle_StandardIcon_Callback(QStyle_StandardIcon_Callback cb) const { qstyle_standardicon_callback = cb; }
	inline void setQStyle_GeneratedIconPixmap_Callback(QStyle_GeneratedIconPixmap_Callback cb) const { qstyle_generatediconpixmap_callback = cb; }
	inline void setQStyle_LayoutSpacing_Callback(QStyle_LayoutSpacing_Callback cb) const { qstyle_layoutspacing_callback = cb; }

// Base flag setters
	inline void setQStyle_Polish_IsBase(bool value) const { qstyle_polish_isbase = value; }
	inline void setQStyle_Unpolish_IsBase(bool value) const { qstyle_unpolish_isbase = value; }
	inline void setQStyle_Polish2_IsBase(bool value) const { qstyle_polish2_isbase = value; }
	inline void setQStyle_Unpolish2_IsBase(bool value) const { qstyle_unpolish2_isbase = value; }
	inline void setQStyle_Polish3_IsBase(bool value) const { qstyle_polish3_isbase = value; }
	inline void setQStyle_ItemTextRect_IsBase(bool value) const { qstyle_itemtextrect_isbase = value; }
	inline void setQStyle_ItemPixmapRect_IsBase(bool value) const { qstyle_itempixmaprect_isbase = value; }
	inline void setQStyle_DrawItemText_IsBase(bool value) const { qstyle_drawitemtext_isbase = value; }
	inline void setQStyle_DrawItemPixmap_IsBase(bool value) const { qstyle_drawitempixmap_isbase = value; }
	inline void setQStyle_StandardPalette_IsBase(bool value) const { qstyle_standardpalette_isbase = value; }
	inline void setQStyle_DrawPrimitive_IsBase(bool value) const { qstyle_drawprimitive_isbase = value; }
	inline void setQStyle_DrawControl_IsBase(bool value) const { qstyle_drawcontrol_isbase = value; }
	inline void setQStyle_SubElementRect_IsBase(bool value) const { qstyle_subelementrect_isbase = value; }
	inline void setQStyle_DrawComplexControl_IsBase(bool value) const { qstyle_drawcomplexcontrol_isbase = value; }
	inline void setQStyle_HitTestComplexControl_IsBase(bool value) const { qstyle_hittestcomplexcontrol_isbase = value; }
	inline void setQStyle_SubControlRect_IsBase(bool value) const { qstyle_subcontrolrect_isbase = value; }
	inline void setQStyle_PixelMetric_IsBase(bool value) const { qstyle_pixelmetric_isbase = value; }
	inline void setQStyle_SizeFromContents_IsBase(bool value) const { qstyle_sizefromcontents_isbase = value; }
	inline void setQStyle_StyleHint_IsBase(bool value) const { qstyle_stylehint_isbase = value; }
	inline void setQStyle_StandardPixmap_IsBase(bool value) const { qstyle_standardpixmap_isbase = value; }
	inline void setQStyle_StandardIcon_IsBase(bool value) const { qstyle_standardicon_isbase = value; }
	inline void setQStyle_GeneratedIconPixmap_IsBase(bool value) const { qstyle_generatediconpixmap_isbase = value; }
	inline void setQStyle_LayoutSpacing_IsBase(bool value) const { qstyle_layoutspacing_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void polish(QWidget* widget) override {
		if (qstyle_polish_isbase) {
			qstyle_polish_isbase = false;
			QStyle::polish(widget);
		} else if (qstyle_polish_callback != nullptr) {
			QWidget* cbval1 = widget;
			qstyle_polish_callback(this, cbval1);
		} else {
			QStyle::polish(widget);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void unpolish(QWidget* widget) override {
		if (qstyle_unpolish_isbase) {
			qstyle_unpolish_isbase = false;
			QStyle::unpolish(widget);
		} else if (qstyle_unpolish_callback != nullptr) {
			QWidget* cbval1 = widget;
			qstyle_unpolish_callback(this, cbval1);
		} else {
			QStyle::unpolish(widget);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void polish(QApplication* application) override {
		if (qstyle_polish2_isbase) {
			qstyle_polish2_isbase = false;
			QStyle::polish(application);
		} else if (qstyle_polish2_callback != nullptr) {
			QApplication* cbval1 = application;
			qstyle_polish2_callback(this, cbval1);
		} else {
			QStyle::polish(application);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void unpolish(QApplication* application) override {
		if (qstyle_unpolish2_isbase) {
			qstyle_unpolish2_isbase = false;
			QStyle::unpolish(application);
		} else if (qstyle_unpolish2_callback != nullptr) {
			QApplication* cbval1 = application;
			qstyle_unpolish2_callback(this, cbval1);
		} else {
			QStyle::unpolish(application);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void polish(QPalette& palette) override {
		if (qstyle_polish3_isbase) {
			qstyle_polish3_isbase = false;
			QStyle::polish(palette);
		} else if (qstyle_polish3_callback != nullptr) {
			QPalette* cbval1 = &palette;
			qstyle_polish3_callback(this, cbval1);
		} else {
			QStyle::polish(palette);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QRect itemTextRect(const QFontMetrics& fm, const QRect& r, int flags, bool enabled, const QString& text) const override {
		if (qstyle_itemtextrect_isbase) {
			qstyle_itemtextrect_isbase = false;
			return QStyle::itemTextRect(fm, r, flags, enabled, text);
		} else if (qstyle_itemtextrect_callback != nullptr) {
			const QFontMetrics* cbval1 = (const QFontMetrics*)&fm;
			const QRect* cbval2 = (const QRect*)&r;
			int cbval3 = flags;
			bool cbval4 = enabled;
			QByteArray text_qb = text.toUtf8();
			libqt_string cbval5;
			cbval5.len = text_qb.length();
			cbval5.data = static_cast<const char*>(text_qb.constData());
			QRect* callback_ret = qstyle_itemtextrect_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
			return *callback_ret;
		} else {
			return QStyle::itemTextRect(fm, r, flags, enabled, text);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QRect itemPixmapRect(const QRect& r, int flags, const QPixmap& pixmap) const override {
		if (qstyle_itempixmaprect_isbase) {
			qstyle_itempixmaprect_isbase = false;
			return QStyle::itemPixmapRect(r, flags, pixmap);
		} else if (qstyle_itempixmaprect_callback != nullptr) {
			const QRect* cbval1 = (const QRect*)&r;
			int cbval2 = flags;
			const QPixmap* cbval3 = (const QPixmap*)&pixmap;
			QRect* callback_ret = qstyle_itempixmaprect_callback(this, cbval1, cbval2, cbval3);
			return *callback_ret;
		} else {
			return QStyle::itemPixmapRect(r, flags, pixmap);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void drawItemText(QPainter* painter, const QRect& rect, int flags, const QPalette& pal, bool enabled, const QString& text, QPalette::ColorRole textRole) const override {
		if (qstyle_drawitemtext_isbase) {
			qstyle_drawitemtext_isbase = false;
			QStyle::drawItemText(painter, rect, flags, pal, enabled, text, textRole);
		} else if (qstyle_drawitemtext_callback != nullptr) {
			QPainter* cbval1 = painter;
			const QRect* cbval2 = (const QRect*)&rect;
			int cbval3 = flags;
			const QPalette* cbval4 = (const QPalette*)&pal;
			bool cbval5 = enabled;
			QByteArray text_qb = text.toUtf8();
			libqt_string cbval6;
			cbval6.len = text_qb.length();
			cbval6.data = static_cast<const char*>(text_qb.constData());
			int cbval7 = static_cast<int>(textRole);
			qstyle_drawitemtext_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5, cbval6, cbval7);
		} else {
			QStyle::drawItemText(painter, rect, flags, pal, enabled, text, textRole);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void drawItemPixmap(QPainter* painter, const QRect& rect, int alignment, const QPixmap& pixmap) const override {
		if (qstyle_drawitempixmap_isbase) {
			qstyle_drawitempixmap_isbase = false;
			QStyle::drawItemPixmap(painter, rect, alignment, pixmap);
		} else if (qstyle_drawitempixmap_callback != nullptr) {
			QPainter* cbval1 = painter;
			const QRect* cbval2 = (const QRect*)&rect;
			int cbval3 = alignment;
			const QPixmap* cbval4 = (const QPixmap*)&pixmap;
			qstyle_drawitempixmap_callback(this, cbval1, cbval2, cbval3, cbval4);
		} else {
			QStyle::drawItemPixmap(painter, rect, alignment, pixmap);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QPalette standardPalette() const override {
		if (qstyle_standardpalette_isbase) {
			qstyle_standardpalette_isbase = false;
			return QStyle::standardPalette();
		} else if (qstyle_standardpalette_callback != nullptr) {
			QPalette* callback_ret = qstyle_standardpalette_callback();
			return *callback_ret;
		} else {
			return QStyle::standardPalette();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void drawPrimitive(PrimitiveElement pe, const QStyleOption* opt, QPainter* p, const QWidget* w) const override {
		if (qstyle_drawprimitive_callback != nullptr) {
			int cbval1 = static_cast<int>(pe);
			const QStyleOption* cbval2 = opt;
			QPainter* cbval3 = p;
			const QWidget* cbval4 = w;
			qstyle_drawprimitive_callback(this, cbval1, cbval2, cbval3, cbval4);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void drawControl(ControlElement element, const QStyleOption* opt, QPainter* p, const QWidget* w) const override {
		if (qstyle_drawcontrol_callback != nullptr) {
			int cbval1 = static_cast<int>(element);
			const QStyleOption* cbval2 = opt;
			QPainter* cbval3 = p;
			const QWidget* cbval4 = w;
			qstyle_drawcontrol_callback(this, cbval1, cbval2, cbval3, cbval4);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QRect subElementRect(SubElement subElement, const QStyleOption* option, const QWidget* widget) const override {
		if (qstyle_subelementrect_callback != nullptr) {
			int cbval1 = static_cast<int>(subElement);
			const QStyleOption* cbval2 = option;
			const QWidget* cbval3 = widget;
			QRect* callback_ret = qstyle_subelementrect_callback(this, cbval1, cbval2, cbval3);
			return *callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void drawComplexControl(ComplexControl cc, const QStyleOptionComplex* opt, QPainter* p, const QWidget* widget) const override {
		if (qstyle_drawcomplexcontrol_callback != nullptr) {
			int cbval1 = static_cast<int>(cc);
			const QStyleOptionComplex* cbval2 = opt;
			QPainter* cbval3 = p;
			const QWidget* cbval4 = widget;
			qstyle_drawcomplexcontrol_callback(this, cbval1, cbval2, cbval3, cbval4);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual SubControl hitTestComplexControl(ComplexControl cc, const QStyleOptionComplex* opt, const QPoint& pt, const QWidget* widget) const override {
		if (qstyle_hittestcomplexcontrol_callback != nullptr) {
			int cbval1 = static_cast<int>(cc);
			const QStyleOptionComplex* cbval2 = opt;
			const QPoint* cbval3 = (const QPoint*)&pt;
			const QWidget* cbval4 = widget;
			int callback_ret = qstyle_hittestcomplexcontrol_callback(this, cbval1, cbval2, cbval3, cbval4);
			return static_cast<QStyle::SubControl>(callback_ret);
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QRect subControlRect(ComplexControl cc, const QStyleOptionComplex* opt, SubControl sc, const QWidget* widget) const override {
		if (qstyle_subcontrolrect_callback != nullptr) {
			int cbval1 = static_cast<int>(cc);
			const QStyleOptionComplex* cbval2 = opt;
			int cbval3 = static_cast<int>(sc);
			const QWidget* cbval4 = widget;
			QRect* callback_ret = qstyle_subcontrolrect_callback(this, cbval1, cbval2, cbval3, cbval4);
			return *callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int pixelMetric(PixelMetric metric, const QStyleOption* option, const QWidget* widget) const override {
		if (qstyle_pixelmetric_callback != nullptr) {
			int cbval1 = static_cast<int>(metric);
			const QStyleOption* cbval2 = option;
			const QWidget* cbval3 = widget;
			int callback_ret = qstyle_pixelmetric_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize sizeFromContents(ContentsType ct, const QStyleOption* opt, const QSize& contentsSize, const QWidget* w) const override {
		if (qstyle_sizefromcontents_callback != nullptr) {
			int cbval1 = static_cast<int>(ct);
			const QStyleOption* cbval2 = opt;
			const QSize* cbval3 = (const QSize*)&contentsSize;
			const QWidget* cbval4 = w;
			QSize* callback_ret = qstyle_sizefromcontents_callback(this, cbval1, cbval2, cbval3, cbval4);
			return *callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int styleHint(StyleHint stylehint, const QStyleOption* opt, const QWidget* widget, QStyleHintReturn* returnData) const override {
		if (qstyle_stylehint_callback != nullptr) {
			int cbval1 = static_cast<int>(stylehint);
			const QStyleOption* cbval2 = opt;
			const QWidget* cbval3 = widget;
			QStyleHintReturn* cbval4 = returnData;
			int callback_ret = qstyle_stylehint_callback(this, cbval1, cbval2, cbval3, cbval4);
			return callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QPixmap standardPixmap(StandardPixmap standardPixmap, const QStyleOption* opt, const QWidget* widget) const override {
		if (qstyle_standardpixmap_callback != nullptr) {
			int cbval1 = static_cast<int>(standardPixmap);
			const QStyleOption* cbval2 = opt;
			const QWidget* cbval3 = widget;
			QPixmap* callback_ret = qstyle_standardpixmap_callback(this, cbval1, cbval2, cbval3);
			return *callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QIcon standardIcon(StandardPixmap standardIcon, const QStyleOption* option, const QWidget* widget) const override {
		if (qstyle_standardicon_callback != nullptr) {
			int cbval1 = static_cast<int>(standardIcon);
			const QStyleOption* cbval2 = option;
			const QWidget* cbval3 = widget;
			QIcon* callback_ret = qstyle_standardicon_callback(this, cbval1, cbval2, cbval3);
			return *callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QPixmap generatedIconPixmap(QIcon::Mode iconMode, const QPixmap& pixmap, const QStyleOption* opt) const override {
		if (qstyle_generatediconpixmap_callback != nullptr) {
			int cbval1 = static_cast<int>(iconMode);
			const QPixmap* cbval2 = (const QPixmap*)&pixmap;
			const QStyleOption* cbval3 = opt;
			QPixmap* callback_ret = qstyle_generatediconpixmap_callback(this, cbval1, cbval2, cbval3);
			return *callback_ret;
		} else {
			return {};
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int layoutSpacing(QSizePolicy::ControlType control1, QSizePolicy::ControlType control2, Qt::Orientation orientation, const QStyleOption* option, const QWidget* widget) const override {
		if (qstyle_layoutspacing_callback != nullptr) {
			int cbval1 = static_cast<int>(control1);
			int cbval2 = static_cast<int>(control2);
			int cbval3 = static_cast<int>(orientation);
			const QStyleOption* cbval4 = option;
			const QWidget* cbval5 = widget;
			int callback_ret = qstyle_layoutspacing_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
			return callback_ret;
		} else {
			return {};
		}
	}
};

#endif


