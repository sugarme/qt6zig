#pragma once
#ifndef QPROXYSTYLE_H_C_LIBVIRTUAL
#define QPROXYSTYLE_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QProxyStyle so that we can call protected methods
class VirtualQProxyStyle final : public QProxyStyle {

public:
	// Virtual class boolean flag
	bool isVirtualQProxyStyle= true;

	// Virtual class public types (including callbacks)
	using QProxyStyle_DrawPrimitive_Callback = void (*)(const QProxyStyle*, int, const QStyleOption*, QPainter*, const QWidget*);
	using QProxyStyle_DrawControl_Callback = void (*)(const QProxyStyle*, int, const QStyleOption*, QPainter*, const QWidget*);
	using QProxyStyle_DrawComplexControl_Callback = void (*)(const QProxyStyle*, int, const QStyleOptionComplex*, QPainter*, const QWidget*);
	using QProxyStyle_DrawItemText_Callback = void (*)(const QProxyStyle*, QPainter*, const QRect*, int, const QPalette*, bool, libqt_string, int);
	using QProxyStyle_DrawItemPixmap_Callback = void (*)(const QProxyStyle*, QPainter*, const QRect*, int, const QPixmap*);
	using QProxyStyle_SizeFromContents_Callback = QSize* (*)(const QProxyStyle*, int, const QStyleOption*, const QSize*, const QWidget*);
	using QProxyStyle_SubElementRect_Callback = QRect* (*)(const QProxyStyle*, int, const QStyleOption*, const QWidget*);
	using QProxyStyle_SubControlRect_Callback = QRect* (*)(const QProxyStyle*, int, const QStyleOptionComplex*, int, const QWidget*);
	using QProxyStyle_ItemTextRect_Callback = QRect* (*)(const QProxyStyle*, const QFontMetrics*, const QRect*, int, bool, libqt_string);
	using QProxyStyle_ItemPixmapRect_Callback = QRect* (*)(const QProxyStyle*, const QRect*, int, const QPixmap*);
	using QProxyStyle_HitTestComplexControl_Callback = int (*)(const QProxyStyle*, int, const QStyleOptionComplex*, const QPoint*, const QWidget*);
	using QProxyStyle_StyleHint_Callback = int (*)(const QProxyStyle*, int, const QStyleOption*, const QWidget*, QStyleHintReturn*);
	using QProxyStyle_PixelMetric_Callback = int (*)(const QProxyStyle*, int, const QStyleOption*, const QWidget*);
	using QProxyStyle_LayoutSpacing_Callback = int (*)(const QProxyStyle*, int, int, int, const QStyleOption*, const QWidget*);
	using QProxyStyle_StandardIcon_Callback = QIcon* (*)(const QProxyStyle*, int, const QStyleOption*, const QWidget*);
	using QProxyStyle_StandardPixmap_Callback = QPixmap* (*)(const QProxyStyle*, int, const QStyleOption*, const QWidget*);
	using QProxyStyle_GeneratedIconPixmap_Callback = QPixmap* (*)(const QProxyStyle*, int, const QPixmap*, const QStyleOption*);
	using QProxyStyle_StandardPalette_Callback = QPalette* (*)();
	using QProxyStyle_Polish_Callback = void (*)(QProxyStyle*, QWidget*);
	using QProxyStyle_Polish2_Callback = void (*)(QProxyStyle*, QPalette*);
	using QProxyStyle_Polish3_Callback = void (*)(QProxyStyle*, QApplication*);
	using QProxyStyle_Unpolish_Callback = void (*)(QProxyStyle*, QWidget*);
	using QProxyStyle_Unpolish2_Callback = void (*)(QProxyStyle*, QApplication*);
	using QProxyStyle_Event_Callback = bool (*)(QProxyStyle*, QEvent*);

protected:
	// Instance callback storage
	mutable QProxyStyle_DrawPrimitive_Callback qproxystyle_drawprimitive_callback = nullptr;
	mutable QProxyStyle_DrawControl_Callback qproxystyle_drawcontrol_callback = nullptr;
	mutable QProxyStyle_DrawComplexControl_Callback qproxystyle_drawcomplexcontrol_callback = nullptr;
	mutable QProxyStyle_DrawItemText_Callback qproxystyle_drawitemtext_callback = nullptr;
	mutable QProxyStyle_DrawItemPixmap_Callback qproxystyle_drawitempixmap_callback = nullptr;
	mutable QProxyStyle_SizeFromContents_Callback qproxystyle_sizefromcontents_callback = nullptr;
	mutable QProxyStyle_SubElementRect_Callback qproxystyle_subelementrect_callback = nullptr;
	mutable QProxyStyle_SubControlRect_Callback qproxystyle_subcontrolrect_callback = nullptr;
	mutable QProxyStyle_ItemTextRect_Callback qproxystyle_itemtextrect_callback = nullptr;
	mutable QProxyStyle_ItemPixmapRect_Callback qproxystyle_itempixmaprect_callback = nullptr;
	mutable QProxyStyle_HitTestComplexControl_Callback qproxystyle_hittestcomplexcontrol_callback = nullptr;
	mutable QProxyStyle_StyleHint_Callback qproxystyle_stylehint_callback = nullptr;
	mutable QProxyStyle_PixelMetric_Callback qproxystyle_pixelmetric_callback = nullptr;
	mutable QProxyStyle_LayoutSpacing_Callback qproxystyle_layoutspacing_callback = nullptr;
	mutable QProxyStyle_StandardIcon_Callback qproxystyle_standardicon_callback = nullptr;
	mutable QProxyStyle_StandardPixmap_Callback qproxystyle_standardpixmap_callback = nullptr;
	mutable QProxyStyle_GeneratedIconPixmap_Callback qproxystyle_generatediconpixmap_callback = nullptr;
	mutable QProxyStyle_StandardPalette_Callback qproxystyle_standardpalette_callback = nullptr;
	mutable QProxyStyle_Polish_Callback qproxystyle_polish_callback = nullptr;
	mutable QProxyStyle_Polish2_Callback qproxystyle_polish2_callback = nullptr;
	mutable QProxyStyle_Polish3_Callback qproxystyle_polish3_callback = nullptr;
	mutable QProxyStyle_Unpolish_Callback qproxystyle_unpolish_callback = nullptr;
	mutable QProxyStyle_Unpolish2_Callback qproxystyle_unpolish2_callback = nullptr;
	mutable QProxyStyle_Event_Callback qproxystyle_event_callback = nullptr;

	// Instance base flags
    mutable bool qproxystyle_drawprimitive_isbase = false;
    mutable bool qproxystyle_drawcontrol_isbase = false;
    mutable bool qproxystyle_drawcomplexcontrol_isbase = false;
    mutable bool qproxystyle_drawitemtext_isbase = false;
    mutable bool qproxystyle_drawitempixmap_isbase = false;
    mutable bool qproxystyle_sizefromcontents_isbase = false;
    mutable bool qproxystyle_subelementrect_isbase = false;
    mutable bool qproxystyle_subcontrolrect_isbase = false;
    mutable bool qproxystyle_itemtextrect_isbase = false;
    mutable bool qproxystyle_itempixmaprect_isbase = false;
    mutable bool qproxystyle_hittestcomplexcontrol_isbase = false;
    mutable bool qproxystyle_stylehint_isbase = false;
    mutable bool qproxystyle_pixelmetric_isbase = false;
    mutable bool qproxystyle_layoutspacing_isbase = false;
    mutable bool qproxystyle_standardicon_isbase = false;
    mutable bool qproxystyle_standardpixmap_isbase = false;
    mutable bool qproxystyle_generatediconpixmap_isbase = false;
    mutable bool qproxystyle_standardpalette_isbase = false;
    mutable bool qproxystyle_polish_isbase = false;
    mutable bool qproxystyle_polish2_isbase = false;
    mutable bool qproxystyle_polish3_isbase = false;
    mutable bool qproxystyle_unpolish_isbase = false;
    mutable bool qproxystyle_unpolish2_isbase = false;
    mutable bool qproxystyle_event_isbase = false;

public:
	VirtualQProxyStyle(): QProxyStyle() {};
	VirtualQProxyStyle(const QString& key): QProxyStyle(key) {};
	VirtualQProxyStyle(QStyle* style): QProxyStyle(style) {};

	~VirtualQProxyStyle() {
		qproxystyle_drawprimitive_callback = nullptr;
		qproxystyle_drawcontrol_callback = nullptr;
		qproxystyle_drawcomplexcontrol_callback = nullptr;
		qproxystyle_drawitemtext_callback = nullptr;
		qproxystyle_drawitempixmap_callback = nullptr;
		qproxystyle_sizefromcontents_callback = nullptr;
		qproxystyle_subelementrect_callback = nullptr;
		qproxystyle_subcontrolrect_callback = nullptr;
		qproxystyle_itemtextrect_callback = nullptr;
		qproxystyle_itempixmaprect_callback = nullptr;
		qproxystyle_hittestcomplexcontrol_callback = nullptr;
		qproxystyle_stylehint_callback = nullptr;
		qproxystyle_pixelmetric_callback = nullptr;
		qproxystyle_layoutspacing_callback = nullptr;
		qproxystyle_standardicon_callback = nullptr;
		qproxystyle_standardpixmap_callback = nullptr;
		qproxystyle_generatediconpixmap_callback = nullptr;
		qproxystyle_standardpalette_callback = nullptr;
		qproxystyle_polish_callback = nullptr;
		qproxystyle_polish2_callback = nullptr;
		qproxystyle_polish3_callback = nullptr;
		qproxystyle_unpolish_callback = nullptr;
		qproxystyle_unpolish2_callback = nullptr;
		qproxystyle_event_callback = nullptr;
	}

// Callback setters
	inline void setQProxyStyle_DrawPrimitive_Callback(QProxyStyle_DrawPrimitive_Callback cb) const { qproxystyle_drawprimitive_callback = cb; }
	inline void setQProxyStyle_DrawControl_Callback(QProxyStyle_DrawControl_Callback cb) const { qproxystyle_drawcontrol_callback = cb; }
	inline void setQProxyStyle_DrawComplexControl_Callback(QProxyStyle_DrawComplexControl_Callback cb) const { qproxystyle_drawcomplexcontrol_callback = cb; }
	inline void setQProxyStyle_DrawItemText_Callback(QProxyStyle_DrawItemText_Callback cb) const { qproxystyle_drawitemtext_callback = cb; }
	inline void setQProxyStyle_DrawItemPixmap_Callback(QProxyStyle_DrawItemPixmap_Callback cb) const { qproxystyle_drawitempixmap_callback = cb; }
	inline void setQProxyStyle_SizeFromContents_Callback(QProxyStyle_SizeFromContents_Callback cb) const { qproxystyle_sizefromcontents_callback = cb; }
	inline void setQProxyStyle_SubElementRect_Callback(QProxyStyle_SubElementRect_Callback cb) const { qproxystyle_subelementrect_callback = cb; }
	inline void setQProxyStyle_SubControlRect_Callback(QProxyStyle_SubControlRect_Callback cb) const { qproxystyle_subcontrolrect_callback = cb; }
	inline void setQProxyStyle_ItemTextRect_Callback(QProxyStyle_ItemTextRect_Callback cb) const { qproxystyle_itemtextrect_callback = cb; }
	inline void setQProxyStyle_ItemPixmapRect_Callback(QProxyStyle_ItemPixmapRect_Callback cb) const { qproxystyle_itempixmaprect_callback = cb; }
	inline void setQProxyStyle_HitTestComplexControl_Callback(QProxyStyle_HitTestComplexControl_Callback cb) const { qproxystyle_hittestcomplexcontrol_callback = cb; }
	inline void setQProxyStyle_StyleHint_Callback(QProxyStyle_StyleHint_Callback cb) const { qproxystyle_stylehint_callback = cb; }
	inline void setQProxyStyle_PixelMetric_Callback(QProxyStyle_PixelMetric_Callback cb) const { qproxystyle_pixelmetric_callback = cb; }
	inline void setQProxyStyle_LayoutSpacing_Callback(QProxyStyle_LayoutSpacing_Callback cb) const { qproxystyle_layoutspacing_callback = cb; }
	inline void setQProxyStyle_StandardIcon_Callback(QProxyStyle_StandardIcon_Callback cb) const { qproxystyle_standardicon_callback = cb; }
	inline void setQProxyStyle_StandardPixmap_Callback(QProxyStyle_StandardPixmap_Callback cb) const { qproxystyle_standardpixmap_callback = cb; }
	inline void setQProxyStyle_GeneratedIconPixmap_Callback(QProxyStyle_GeneratedIconPixmap_Callback cb) const { qproxystyle_generatediconpixmap_callback = cb; }
	inline void setQProxyStyle_StandardPalette_Callback(QProxyStyle_StandardPalette_Callback cb) const { qproxystyle_standardpalette_callback = cb; }
	inline void setQProxyStyle_Polish_Callback(QProxyStyle_Polish_Callback cb) const { qproxystyle_polish_callback = cb; }
	inline void setQProxyStyle_Polish2_Callback(QProxyStyle_Polish2_Callback cb) const { qproxystyle_polish2_callback = cb; }
	inline void setQProxyStyle_Polish3_Callback(QProxyStyle_Polish3_Callback cb) const { qproxystyle_polish3_callback = cb; }
	inline void setQProxyStyle_Unpolish_Callback(QProxyStyle_Unpolish_Callback cb) const { qproxystyle_unpolish_callback = cb; }
	inline void setQProxyStyle_Unpolish2_Callback(QProxyStyle_Unpolish2_Callback cb) const { qproxystyle_unpolish2_callback = cb; }
	inline void setQProxyStyle_Event_Callback(QProxyStyle_Event_Callback cb) const { qproxystyle_event_callback = cb; }

// Base flag setters
	inline void setQProxyStyle_DrawPrimitive_IsBase(bool value) const { qproxystyle_drawprimitive_isbase = value; }
	inline void setQProxyStyle_DrawControl_IsBase(bool value) const { qproxystyle_drawcontrol_isbase = value; }
	inline void setQProxyStyle_DrawComplexControl_IsBase(bool value) const { qproxystyle_drawcomplexcontrol_isbase = value; }
	inline void setQProxyStyle_DrawItemText_IsBase(bool value) const { qproxystyle_drawitemtext_isbase = value; }
	inline void setQProxyStyle_DrawItemPixmap_IsBase(bool value) const { qproxystyle_drawitempixmap_isbase = value; }
	inline void setQProxyStyle_SizeFromContents_IsBase(bool value) const { qproxystyle_sizefromcontents_isbase = value; }
	inline void setQProxyStyle_SubElementRect_IsBase(bool value) const { qproxystyle_subelementrect_isbase = value; }
	inline void setQProxyStyle_SubControlRect_IsBase(bool value) const { qproxystyle_subcontrolrect_isbase = value; }
	inline void setQProxyStyle_ItemTextRect_IsBase(bool value) const { qproxystyle_itemtextrect_isbase = value; }
	inline void setQProxyStyle_ItemPixmapRect_IsBase(bool value) const { qproxystyle_itempixmaprect_isbase = value; }
	inline void setQProxyStyle_HitTestComplexControl_IsBase(bool value) const { qproxystyle_hittestcomplexcontrol_isbase = value; }
	inline void setQProxyStyle_StyleHint_IsBase(bool value) const { qproxystyle_stylehint_isbase = value; }
	inline void setQProxyStyle_PixelMetric_IsBase(bool value) const { qproxystyle_pixelmetric_isbase = value; }
	inline void setQProxyStyle_LayoutSpacing_IsBase(bool value) const { qproxystyle_layoutspacing_isbase = value; }
	inline void setQProxyStyle_StandardIcon_IsBase(bool value) const { qproxystyle_standardicon_isbase = value; }
	inline void setQProxyStyle_StandardPixmap_IsBase(bool value) const { qproxystyle_standardpixmap_isbase = value; }
	inline void setQProxyStyle_GeneratedIconPixmap_IsBase(bool value) const { qproxystyle_generatediconpixmap_isbase = value; }
	inline void setQProxyStyle_StandardPalette_IsBase(bool value) const { qproxystyle_standardpalette_isbase = value; }
	inline void setQProxyStyle_Polish_IsBase(bool value) const { qproxystyle_polish_isbase = value; }
	inline void setQProxyStyle_Polish2_IsBase(bool value) const { qproxystyle_polish2_isbase = value; }
	inline void setQProxyStyle_Polish3_IsBase(bool value) const { qproxystyle_polish3_isbase = value; }
	inline void setQProxyStyle_Unpolish_IsBase(bool value) const { qproxystyle_unpolish_isbase = value; }
	inline void setQProxyStyle_Unpolish2_IsBase(bool value) const { qproxystyle_unpolish2_isbase = value; }
	inline void setQProxyStyle_Event_IsBase(bool value) const { qproxystyle_event_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void drawPrimitive(PrimitiveElement element, const QStyleOption* option, QPainter* painter, const QWidget* widget) const override {
		if (qproxystyle_drawprimitive_isbase) {
			qproxystyle_drawprimitive_isbase = false;
			QProxyStyle::drawPrimitive(element, option, painter, widget);
		} else if (qproxystyle_drawprimitive_callback != nullptr) {
			int cbval1 = static_cast<int>(element);
			const QStyleOption* cbval2 = option;
			QPainter* cbval3 = painter;
			const QWidget* cbval4 = widget;
			qproxystyle_drawprimitive_callback(this, cbval1, cbval2, cbval3, cbval4);
		} else {
			QProxyStyle::drawPrimitive(element, option, painter, widget);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void drawControl(ControlElement element, const QStyleOption* option, QPainter* painter, const QWidget* widget) const override {
		if (qproxystyle_drawcontrol_isbase) {
			qproxystyle_drawcontrol_isbase = false;
			QProxyStyle::drawControl(element, option, painter, widget);
		} else if (qproxystyle_drawcontrol_callback != nullptr) {
			int cbval1 = static_cast<int>(element);
			const QStyleOption* cbval2 = option;
			QPainter* cbval3 = painter;
			const QWidget* cbval4 = widget;
			qproxystyle_drawcontrol_callback(this, cbval1, cbval2, cbval3, cbval4);
		} else {
			QProxyStyle::drawControl(element, option, painter, widget);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void drawComplexControl(ComplexControl control, const QStyleOptionComplex* option, QPainter* painter, const QWidget* widget) const override {
		if (qproxystyle_drawcomplexcontrol_isbase) {
			qproxystyle_drawcomplexcontrol_isbase = false;
			QProxyStyle::drawComplexControl(control, option, painter, widget);
		} else if (qproxystyle_drawcomplexcontrol_callback != nullptr) {
			int cbval1 = static_cast<int>(control);
			const QStyleOptionComplex* cbval2 = option;
			QPainter* cbval3 = painter;
			const QWidget* cbval4 = widget;
			qproxystyle_drawcomplexcontrol_callback(this, cbval1, cbval2, cbval3, cbval4);
		} else {
			QProxyStyle::drawComplexControl(control, option, painter, widget);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void drawItemText(QPainter* painter, const QRect& rect, int flags, const QPalette& pal, bool enabled, const QString& text, QPalette::ColorRole textRole) const override {
		if (qproxystyle_drawitemtext_isbase) {
			qproxystyle_drawitemtext_isbase = false;
			QProxyStyle::drawItemText(painter, rect, flags, pal, enabled, text, textRole);
		} else if (qproxystyle_drawitemtext_callback != nullptr) {
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
			qproxystyle_drawitemtext_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5, cbval6, cbval7);
		} else {
			QProxyStyle::drawItemText(painter, rect, flags, pal, enabled, text, textRole);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void drawItemPixmap(QPainter* painter, const QRect& rect, int alignment, const QPixmap& pixmap) const override {
		if (qproxystyle_drawitempixmap_isbase) {
			qproxystyle_drawitempixmap_isbase = false;
			QProxyStyle::drawItemPixmap(painter, rect, alignment, pixmap);
		} else if (qproxystyle_drawitempixmap_callback != nullptr) {
			QPainter* cbval1 = painter;
			const QRect* cbval2 = (const QRect*)&rect;
			int cbval3 = alignment;
			const QPixmap* cbval4 = (const QPixmap*)&pixmap;
			qproxystyle_drawitempixmap_callback(this, cbval1, cbval2, cbval3, cbval4);
		} else {
			QProxyStyle::drawItemPixmap(painter, rect, alignment, pixmap);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize sizeFromContents(ContentsType typeVal, const QStyleOption* option, const QSize& size, const QWidget* widget) const override {
		if (qproxystyle_sizefromcontents_isbase) {
			qproxystyle_sizefromcontents_isbase = false;
			return QProxyStyle::sizeFromContents(typeVal, option, size, widget);
		} else if (qproxystyle_sizefromcontents_callback != nullptr) {
			int cbval1 = static_cast<int>(typeVal);
			const QStyleOption* cbval2 = option;
			const QSize* cbval3 = (const QSize*)&size;
			const QWidget* cbval4 = widget;
			QSize* callback_ret = qproxystyle_sizefromcontents_callback(this, cbval1, cbval2, cbval3, cbval4);
			return *callback_ret;
		} else {
			return QProxyStyle::sizeFromContents(typeVal, option, size, widget);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QRect subElementRect(SubElement element, const QStyleOption* option, const QWidget* widget) const override {
		if (qproxystyle_subelementrect_isbase) {
			qproxystyle_subelementrect_isbase = false;
			return QProxyStyle::subElementRect(element, option, widget);
		} else if (qproxystyle_subelementrect_callback != nullptr) {
			int cbval1 = static_cast<int>(element);
			const QStyleOption* cbval2 = option;
			const QWidget* cbval3 = widget;
			QRect* callback_ret = qproxystyle_subelementrect_callback(this, cbval1, cbval2, cbval3);
			return *callback_ret;
		} else {
			return QProxyStyle::subElementRect(element, option, widget);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QRect subControlRect(ComplexControl cc, const QStyleOptionComplex* opt, SubControl sc, const QWidget* widget) const override {
		if (qproxystyle_subcontrolrect_isbase) {
			qproxystyle_subcontrolrect_isbase = false;
			return QProxyStyle::subControlRect(cc, opt, sc, widget);
		} else if (qproxystyle_subcontrolrect_callback != nullptr) {
			int cbval1 = static_cast<int>(cc);
			const QStyleOptionComplex* cbval2 = opt;
			int cbval3 = static_cast<int>(sc);
			const QWidget* cbval4 = widget;
			QRect* callback_ret = qproxystyle_subcontrolrect_callback(this, cbval1, cbval2, cbval3, cbval4);
			return *callback_ret;
		} else {
			return QProxyStyle::subControlRect(cc, opt, sc, widget);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QRect itemTextRect(const QFontMetrics& fm, const QRect& r, int flags, bool enabled, const QString& text) const override {
		if (qproxystyle_itemtextrect_isbase) {
			qproxystyle_itemtextrect_isbase = false;
			return QProxyStyle::itemTextRect(fm, r, flags, enabled, text);
		} else if (qproxystyle_itemtextrect_callback != nullptr) {
			const QFontMetrics* cbval1 = (const QFontMetrics*)&fm;
			const QRect* cbval2 = (const QRect*)&r;
			int cbval3 = flags;
			bool cbval4 = enabled;
			QByteArray text_qb = text.toUtf8();
			libqt_string cbval5;
			cbval5.len = text_qb.length();
			cbval5.data = static_cast<const char*>(text_qb.constData());
			QRect* callback_ret = qproxystyle_itemtextrect_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
			return *callback_ret;
		} else {
			return QProxyStyle::itemTextRect(fm, r, flags, enabled, text);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QRect itemPixmapRect(const QRect& r, int flags, const QPixmap& pixmap) const override {
		if (qproxystyle_itempixmaprect_isbase) {
			qproxystyle_itempixmaprect_isbase = false;
			return QProxyStyle::itemPixmapRect(r, flags, pixmap);
		} else if (qproxystyle_itempixmaprect_callback != nullptr) {
			const QRect* cbval1 = (const QRect*)&r;
			int cbval2 = flags;
			const QPixmap* cbval3 = (const QPixmap*)&pixmap;
			QRect* callback_ret = qproxystyle_itempixmaprect_callback(this, cbval1, cbval2, cbval3);
			return *callback_ret;
		} else {
			return QProxyStyle::itemPixmapRect(r, flags, pixmap);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual SubControl hitTestComplexControl(ComplexControl control, const QStyleOptionComplex* option, const QPoint& pos, const QWidget* widget) const override {
		if (qproxystyle_hittestcomplexcontrol_isbase) {
			qproxystyle_hittestcomplexcontrol_isbase = false;
			return QProxyStyle::hitTestComplexControl(control, option, pos, widget);
		} else if (qproxystyle_hittestcomplexcontrol_callback != nullptr) {
			int cbval1 = static_cast<int>(control);
			const QStyleOptionComplex* cbval2 = option;
			const QPoint* cbval3 = (const QPoint*)&pos;
			const QWidget* cbval4 = widget;
			int callback_ret = qproxystyle_hittestcomplexcontrol_callback(this, cbval1, cbval2, cbval3, cbval4);
			return static_cast<QStyle::SubControl>(callback_ret);
		} else {
			return QProxyStyle::hitTestComplexControl(control, option, pos, widget);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int styleHint(StyleHint hint, const QStyleOption* option, const QWidget* widget, QStyleHintReturn* returnData) const override {
		if (qproxystyle_stylehint_isbase) {
			qproxystyle_stylehint_isbase = false;
			return QProxyStyle::styleHint(hint, option, widget, returnData);
		} else if (qproxystyle_stylehint_callback != nullptr) {
			int cbval1 = static_cast<int>(hint);
			const QStyleOption* cbval2 = option;
			const QWidget* cbval3 = widget;
			QStyleHintReturn* cbval4 = returnData;
			int callback_ret = qproxystyle_stylehint_callback(this, cbval1, cbval2, cbval3, cbval4);
			return callback_ret;
		} else {
			return QProxyStyle::styleHint(hint, option, widget, returnData);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int pixelMetric(PixelMetric metric, const QStyleOption* option, const QWidget* widget) const override {
		if (qproxystyle_pixelmetric_isbase) {
			qproxystyle_pixelmetric_isbase = false;
			return QProxyStyle::pixelMetric(metric, option, widget);
		} else if (qproxystyle_pixelmetric_callback != nullptr) {
			int cbval1 = static_cast<int>(metric);
			const QStyleOption* cbval2 = option;
			const QWidget* cbval3 = widget;
			int callback_ret = qproxystyle_pixelmetric_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return QProxyStyle::pixelMetric(metric, option, widget);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int layoutSpacing(QSizePolicy::ControlType control1, QSizePolicy::ControlType control2, Qt::Orientation orientation, const QStyleOption* option, const QWidget* widget) const override {
		if (qproxystyle_layoutspacing_isbase) {
			qproxystyle_layoutspacing_isbase = false;
			return QProxyStyle::layoutSpacing(control1, control2, orientation, option, widget);
		} else if (qproxystyle_layoutspacing_callback != nullptr) {
			int cbval1 = static_cast<int>(control1);
			int cbval2 = static_cast<int>(control2);
			int cbval3 = static_cast<int>(orientation);
			const QStyleOption* cbval4 = option;
			const QWidget* cbval5 = widget;
			int callback_ret = qproxystyle_layoutspacing_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
			return callback_ret;
		} else {
			return QProxyStyle::layoutSpacing(control1, control2, orientation, option, widget);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QIcon standardIcon(StandardPixmap standardIcon, const QStyleOption* option, const QWidget* widget) const override {
		if (qproxystyle_standardicon_isbase) {
			qproxystyle_standardicon_isbase = false;
			return QProxyStyle::standardIcon(standardIcon, option, widget);
		} else if (qproxystyle_standardicon_callback != nullptr) {
			int cbval1 = static_cast<int>(standardIcon);
			const QStyleOption* cbval2 = option;
			const QWidget* cbval3 = widget;
			QIcon* callback_ret = qproxystyle_standardicon_callback(this, cbval1, cbval2, cbval3);
			return *callback_ret;
		} else {
			return QProxyStyle::standardIcon(standardIcon, option, widget);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QPixmap standardPixmap(StandardPixmap standardPixmap, const QStyleOption* opt, const QWidget* widget) const override {
		if (qproxystyle_standardpixmap_isbase) {
			qproxystyle_standardpixmap_isbase = false;
			return QProxyStyle::standardPixmap(standardPixmap, opt, widget);
		} else if (qproxystyle_standardpixmap_callback != nullptr) {
			int cbval1 = static_cast<int>(standardPixmap);
			const QStyleOption* cbval2 = opt;
			const QWidget* cbval3 = widget;
			QPixmap* callback_ret = qproxystyle_standardpixmap_callback(this, cbval1, cbval2, cbval3);
			return *callback_ret;
		} else {
			return QProxyStyle::standardPixmap(standardPixmap, opt, widget);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QPixmap generatedIconPixmap(QIcon::Mode iconMode, const QPixmap& pixmap, const QStyleOption* opt) const override {
		if (qproxystyle_generatediconpixmap_isbase) {
			qproxystyle_generatediconpixmap_isbase = false;
			return QProxyStyle::generatedIconPixmap(iconMode, pixmap, opt);
		} else if (qproxystyle_generatediconpixmap_callback != nullptr) {
			int cbval1 = static_cast<int>(iconMode);
			const QPixmap* cbval2 = (const QPixmap*)&pixmap;
			const QStyleOption* cbval3 = opt;
			QPixmap* callback_ret = qproxystyle_generatediconpixmap_callback(this, cbval1, cbval2, cbval3);
			return *callback_ret;
		} else {
			return QProxyStyle::generatedIconPixmap(iconMode, pixmap, opt);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QPalette standardPalette() const override {
		if (qproxystyle_standardpalette_isbase) {
			qproxystyle_standardpalette_isbase = false;
			return QProxyStyle::standardPalette();
		} else if (qproxystyle_standardpalette_callback != nullptr) {
			QPalette* callback_ret = qproxystyle_standardpalette_callback();
			return *callback_ret;
		} else {
			return QProxyStyle::standardPalette();
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void polish(QWidget* widget) override {
		if (qproxystyle_polish_isbase) {
			qproxystyle_polish_isbase = false;
			QProxyStyle::polish(widget);
		} else if (qproxystyle_polish_callback != nullptr) {
			QWidget* cbval1 = widget;
			qproxystyle_polish_callback(this, cbval1);
		} else {
			QProxyStyle::polish(widget);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void polish(QPalette& pal) override {
		if (qproxystyle_polish2_isbase) {
			qproxystyle_polish2_isbase = false;
			QProxyStyle::polish(pal);
		} else if (qproxystyle_polish2_callback != nullptr) {
			QPalette* cbval1 = &pal;
			qproxystyle_polish2_callback(this, cbval1);
		} else {
			QProxyStyle::polish(pal);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void polish(QApplication* app) override {
		if (qproxystyle_polish3_isbase) {
			qproxystyle_polish3_isbase = false;
			QProxyStyle::polish(app);
		} else if (qproxystyle_polish3_callback != nullptr) {
			QApplication* cbval1 = app;
			qproxystyle_polish3_callback(this, cbval1);
		} else {
			QProxyStyle::polish(app);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void unpolish(QWidget* widget) override {
		if (qproxystyle_unpolish_isbase) {
			qproxystyle_unpolish_isbase = false;
			QProxyStyle::unpolish(widget);
		} else if (qproxystyle_unpolish_callback != nullptr) {
			QWidget* cbval1 = widget;
			qproxystyle_unpolish_callback(this, cbval1);
		} else {
			QProxyStyle::unpolish(widget);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void unpolish(QApplication* app) override {
		if (qproxystyle_unpolish2_isbase) {
			qproxystyle_unpolish2_isbase = false;
			QProxyStyle::unpolish(app);
		} else if (qproxystyle_unpolish2_callback != nullptr) {
			QApplication* cbval1 = app;
			qproxystyle_unpolish2_callback(this, cbval1);
		} else {
			QProxyStyle::unpolish(app);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual bool event(QEvent* e) override {
		if (qproxystyle_event_isbase) {
			qproxystyle_event_isbase = false;
			return QProxyStyle::event(e);
		} else if (qproxystyle_event_callback != nullptr) {
			QEvent* cbval1 = e;
			bool callback_ret = qproxystyle_event_callback(this, cbval1);
			return callback_ret;
		} else {
			return QProxyStyle::event(e);
		}
	}

	// Friend functions
	friend bool QProxyStyle_Event(QProxyStyle* self, QEvent* e);
	friend bool QProxyStyle_QBaseEvent(QProxyStyle* self, QEvent* e);
};

#endif


