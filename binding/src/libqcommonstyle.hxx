#pragma once
#ifndef QCOMMONSTYLE_H_C_LIBVIRTUAL
#define QCOMMONSTYLE_H_C_LIBVIRTUAL

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"


// This class is a subclass of QCommonStyle so that we can call protected methods
class VirtualQCommonStyle final : public QCommonStyle {

public:
	// Virtual class boolean flag
	bool isVirtualQCommonStyle= true;

	// Virtual class public types (including callbacks)
	using QCommonStyle_DrawPrimitive_Callback = void (*)(const QCommonStyle*, int, const QStyleOption*, QPainter*, const QWidget*);
	using QCommonStyle_DrawControl_Callback = void (*)(const QCommonStyle*, int, const QStyleOption*, QPainter*, const QWidget*);
	using QCommonStyle_SubElementRect_Callback = QRect* (*)(const QCommonStyle*, int, const QStyleOption*, const QWidget*);
	using QCommonStyle_DrawComplexControl_Callback = void (*)(const QCommonStyle*, int, const QStyleOptionComplex*, QPainter*, const QWidget*);
	using QCommonStyle_HitTestComplexControl_Callback = int (*)(const QCommonStyle*, int, const QStyleOptionComplex*, const QPoint*, const QWidget*);
	using QCommonStyle_SubControlRect_Callback = QRect* (*)(const QCommonStyle*, int, const QStyleOptionComplex*, int, const QWidget*);
	using QCommonStyle_SizeFromContents_Callback = QSize* (*)(const QCommonStyle*, int, const QStyleOption*, const QSize*, const QWidget*);
	using QCommonStyle_PixelMetric_Callback = int (*)(const QCommonStyle*, int, const QStyleOption*, const QWidget*);
	using QCommonStyle_StyleHint_Callback = int (*)(const QCommonStyle*, int, const QStyleOption*, const QWidget*, QStyleHintReturn*);
	using QCommonStyle_StandardIcon_Callback = QIcon* (*)(const QCommonStyle*, int, const QStyleOption*, const QWidget*);
	using QCommonStyle_StandardPixmap_Callback = QPixmap* (*)(const QCommonStyle*, int, const QStyleOption*, const QWidget*);
	using QCommonStyle_GeneratedIconPixmap_Callback = QPixmap* (*)(const QCommonStyle*, int, const QPixmap*, const QStyleOption*);
	using QCommonStyle_LayoutSpacing_Callback = int (*)(const QCommonStyle*, int, int, int, const QStyleOption*, const QWidget*);
	using QCommonStyle_Polish_Callback = void (*)(QCommonStyle*, QPalette*);
	using QCommonStyle_Polish2_Callback = void (*)(QCommonStyle*, QApplication*);
	using QCommonStyle_Polish3_Callback = void (*)(QCommonStyle*, QWidget*);
	using QCommonStyle_Unpolish_Callback = void (*)(QCommonStyle*, QWidget*);
	using QCommonStyle_Unpolish2_Callback = void (*)(QCommonStyle*, QApplication*);

protected:
	// Instance callback storage
	mutable QCommonStyle_DrawPrimitive_Callback qcommonstyle_drawprimitive_callback = nullptr;
	mutable QCommonStyle_DrawControl_Callback qcommonstyle_drawcontrol_callback = nullptr;
	mutable QCommonStyle_SubElementRect_Callback qcommonstyle_subelementrect_callback = nullptr;
	mutable QCommonStyle_DrawComplexControl_Callback qcommonstyle_drawcomplexcontrol_callback = nullptr;
	mutable QCommonStyle_HitTestComplexControl_Callback qcommonstyle_hittestcomplexcontrol_callback = nullptr;
	mutable QCommonStyle_SubControlRect_Callback qcommonstyle_subcontrolrect_callback = nullptr;
	mutable QCommonStyle_SizeFromContents_Callback qcommonstyle_sizefromcontents_callback = nullptr;
	mutable QCommonStyle_PixelMetric_Callback qcommonstyle_pixelmetric_callback = nullptr;
	mutable QCommonStyle_StyleHint_Callback qcommonstyle_stylehint_callback = nullptr;
	mutable QCommonStyle_StandardIcon_Callback qcommonstyle_standardicon_callback = nullptr;
	mutable QCommonStyle_StandardPixmap_Callback qcommonstyle_standardpixmap_callback = nullptr;
	mutable QCommonStyle_GeneratedIconPixmap_Callback qcommonstyle_generatediconpixmap_callback = nullptr;
	mutable QCommonStyle_LayoutSpacing_Callback qcommonstyle_layoutspacing_callback = nullptr;
	mutable QCommonStyle_Polish_Callback qcommonstyle_polish_callback = nullptr;
	mutable QCommonStyle_Polish2_Callback qcommonstyle_polish2_callback = nullptr;
	mutable QCommonStyle_Polish3_Callback qcommonstyle_polish3_callback = nullptr;
	mutable QCommonStyle_Unpolish_Callback qcommonstyle_unpolish_callback = nullptr;
	mutable QCommonStyle_Unpolish2_Callback qcommonstyle_unpolish2_callback = nullptr;

	// Instance base flags
    mutable bool qcommonstyle_drawprimitive_isbase = false;
    mutable bool qcommonstyle_drawcontrol_isbase = false;
    mutable bool qcommonstyle_subelementrect_isbase = false;
    mutable bool qcommonstyle_drawcomplexcontrol_isbase = false;
    mutable bool qcommonstyle_hittestcomplexcontrol_isbase = false;
    mutable bool qcommonstyle_subcontrolrect_isbase = false;
    mutable bool qcommonstyle_sizefromcontents_isbase = false;
    mutable bool qcommonstyle_pixelmetric_isbase = false;
    mutable bool qcommonstyle_stylehint_isbase = false;
    mutable bool qcommonstyle_standardicon_isbase = false;
    mutable bool qcommonstyle_standardpixmap_isbase = false;
    mutable bool qcommonstyle_generatediconpixmap_isbase = false;
    mutable bool qcommonstyle_layoutspacing_isbase = false;
    mutable bool qcommonstyle_polish_isbase = false;
    mutable bool qcommonstyle_polish2_isbase = false;
    mutable bool qcommonstyle_polish3_isbase = false;
    mutable bool qcommonstyle_unpolish_isbase = false;
    mutable bool qcommonstyle_unpolish2_isbase = false;

public:
	VirtualQCommonStyle(): QCommonStyle() {};

	~VirtualQCommonStyle() {
		qcommonstyle_drawprimitive_callback = nullptr;
		qcommonstyle_drawcontrol_callback = nullptr;
		qcommonstyle_subelementrect_callback = nullptr;
		qcommonstyle_drawcomplexcontrol_callback = nullptr;
		qcommonstyle_hittestcomplexcontrol_callback = nullptr;
		qcommonstyle_subcontrolrect_callback = nullptr;
		qcommonstyle_sizefromcontents_callback = nullptr;
		qcommonstyle_pixelmetric_callback = nullptr;
		qcommonstyle_stylehint_callback = nullptr;
		qcommonstyle_standardicon_callback = nullptr;
		qcommonstyle_standardpixmap_callback = nullptr;
		qcommonstyle_generatediconpixmap_callback = nullptr;
		qcommonstyle_layoutspacing_callback = nullptr;
		qcommonstyle_polish_callback = nullptr;
		qcommonstyle_polish2_callback = nullptr;
		qcommonstyle_polish3_callback = nullptr;
		qcommonstyle_unpolish_callback = nullptr;
		qcommonstyle_unpolish2_callback = nullptr;
	}

// Callback setters
	inline void setQCommonStyle_DrawPrimitive_Callback(QCommonStyle_DrawPrimitive_Callback cb) const { qcommonstyle_drawprimitive_callback = cb; }
	inline void setQCommonStyle_DrawControl_Callback(QCommonStyle_DrawControl_Callback cb) const { qcommonstyle_drawcontrol_callback = cb; }
	inline void setQCommonStyle_SubElementRect_Callback(QCommonStyle_SubElementRect_Callback cb) const { qcommonstyle_subelementrect_callback = cb; }
	inline void setQCommonStyle_DrawComplexControl_Callback(QCommonStyle_DrawComplexControl_Callback cb) const { qcommonstyle_drawcomplexcontrol_callback = cb; }
	inline void setQCommonStyle_HitTestComplexControl_Callback(QCommonStyle_HitTestComplexControl_Callback cb) const { qcommonstyle_hittestcomplexcontrol_callback = cb; }
	inline void setQCommonStyle_SubControlRect_Callback(QCommonStyle_SubControlRect_Callback cb) const { qcommonstyle_subcontrolrect_callback = cb; }
	inline void setQCommonStyle_SizeFromContents_Callback(QCommonStyle_SizeFromContents_Callback cb) const { qcommonstyle_sizefromcontents_callback = cb; }
	inline void setQCommonStyle_PixelMetric_Callback(QCommonStyle_PixelMetric_Callback cb) const { qcommonstyle_pixelmetric_callback = cb; }
	inline void setQCommonStyle_StyleHint_Callback(QCommonStyle_StyleHint_Callback cb) const { qcommonstyle_stylehint_callback = cb; }
	inline void setQCommonStyle_StandardIcon_Callback(QCommonStyle_StandardIcon_Callback cb) const { qcommonstyle_standardicon_callback = cb; }
	inline void setQCommonStyle_StandardPixmap_Callback(QCommonStyle_StandardPixmap_Callback cb) const { qcommonstyle_standardpixmap_callback = cb; }
	inline void setQCommonStyle_GeneratedIconPixmap_Callback(QCommonStyle_GeneratedIconPixmap_Callback cb) const { qcommonstyle_generatediconpixmap_callback = cb; }
	inline void setQCommonStyle_LayoutSpacing_Callback(QCommonStyle_LayoutSpacing_Callback cb) const { qcommonstyle_layoutspacing_callback = cb; }
	inline void setQCommonStyle_Polish_Callback(QCommonStyle_Polish_Callback cb) const { qcommonstyle_polish_callback = cb; }
	inline void setQCommonStyle_Polish2_Callback(QCommonStyle_Polish2_Callback cb) const { qcommonstyle_polish2_callback = cb; }
	inline void setQCommonStyle_Polish3_Callback(QCommonStyle_Polish3_Callback cb) const { qcommonstyle_polish3_callback = cb; }
	inline void setQCommonStyle_Unpolish_Callback(QCommonStyle_Unpolish_Callback cb) const { qcommonstyle_unpolish_callback = cb; }
	inline void setQCommonStyle_Unpolish2_Callback(QCommonStyle_Unpolish2_Callback cb) const { qcommonstyle_unpolish2_callback = cb; }

// Base flag setters
	inline void setQCommonStyle_DrawPrimitive_IsBase(bool value) const { qcommonstyle_drawprimitive_isbase = value; }
	inline void setQCommonStyle_DrawControl_IsBase(bool value) const { qcommonstyle_drawcontrol_isbase = value; }
	inline void setQCommonStyle_SubElementRect_IsBase(bool value) const { qcommonstyle_subelementrect_isbase = value; }
	inline void setQCommonStyle_DrawComplexControl_IsBase(bool value) const { qcommonstyle_drawcomplexcontrol_isbase = value; }
	inline void setQCommonStyle_HitTestComplexControl_IsBase(bool value) const { qcommonstyle_hittestcomplexcontrol_isbase = value; }
	inline void setQCommonStyle_SubControlRect_IsBase(bool value) const { qcommonstyle_subcontrolrect_isbase = value; }
	inline void setQCommonStyle_SizeFromContents_IsBase(bool value) const { qcommonstyle_sizefromcontents_isbase = value; }
	inline void setQCommonStyle_PixelMetric_IsBase(bool value) const { qcommonstyle_pixelmetric_isbase = value; }
	inline void setQCommonStyle_StyleHint_IsBase(bool value) const { qcommonstyle_stylehint_isbase = value; }
	inline void setQCommonStyle_StandardIcon_IsBase(bool value) const { qcommonstyle_standardicon_isbase = value; }
	inline void setQCommonStyle_StandardPixmap_IsBase(bool value) const { qcommonstyle_standardpixmap_isbase = value; }
	inline void setQCommonStyle_GeneratedIconPixmap_IsBase(bool value) const { qcommonstyle_generatediconpixmap_isbase = value; }
	inline void setQCommonStyle_LayoutSpacing_IsBase(bool value) const { qcommonstyle_layoutspacing_isbase = value; }
	inline void setQCommonStyle_Polish_IsBase(bool value) const { qcommonstyle_polish_isbase = value; }
	inline void setQCommonStyle_Polish2_IsBase(bool value) const { qcommonstyle_polish2_isbase = value; }
	inline void setQCommonStyle_Polish3_IsBase(bool value) const { qcommonstyle_polish3_isbase = value; }
	inline void setQCommonStyle_Unpolish_IsBase(bool value) const { qcommonstyle_unpolish_isbase = value; }
	inline void setQCommonStyle_Unpolish2_IsBase(bool value) const { qcommonstyle_unpolish2_isbase = value; }


	// Virtual method for C ABI access and custom callback
	virtual void drawPrimitive(PrimitiveElement pe, const QStyleOption* opt, QPainter* p, const QWidget* w) const override {
		if (qcommonstyle_drawprimitive_isbase) {
			qcommonstyle_drawprimitive_isbase = false;
			QCommonStyle::drawPrimitive(pe, opt, p, w);
		} else if (qcommonstyle_drawprimitive_callback != nullptr) {
			int cbval1 = static_cast<int>(pe);
			const QStyleOption* cbval2 = opt;
			QPainter* cbval3 = p;
			const QWidget* cbval4 = w;
			qcommonstyle_drawprimitive_callback(this, cbval1, cbval2, cbval3, cbval4);
		} else {
			QCommonStyle::drawPrimitive(pe, opt, p, w);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void drawControl(ControlElement element, const QStyleOption* opt, QPainter* p, const QWidget* w) const override {
		if (qcommonstyle_drawcontrol_isbase) {
			qcommonstyle_drawcontrol_isbase = false;
			QCommonStyle::drawControl(element, opt, p, w);
		} else if (qcommonstyle_drawcontrol_callback != nullptr) {
			int cbval1 = static_cast<int>(element);
			const QStyleOption* cbval2 = opt;
			QPainter* cbval3 = p;
			const QWidget* cbval4 = w;
			qcommonstyle_drawcontrol_callback(this, cbval1, cbval2, cbval3, cbval4);
		} else {
			QCommonStyle::drawControl(element, opt, p, w);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QRect subElementRect(SubElement r, const QStyleOption* opt, const QWidget* widget) const override {
		if (qcommonstyle_subelementrect_isbase) {
			qcommonstyle_subelementrect_isbase = false;
			return QCommonStyle::subElementRect(r, opt, widget);
		} else if (qcommonstyle_subelementrect_callback != nullptr) {
			int cbval1 = static_cast<int>(r);
			const QStyleOption* cbval2 = opt;
			const QWidget* cbval3 = widget;
			QRect* callback_ret = qcommonstyle_subelementrect_callback(this, cbval1, cbval2, cbval3);
			return *callback_ret;
		} else {
			return QCommonStyle::subElementRect(r, opt, widget);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void drawComplexControl(ComplexControl cc, const QStyleOptionComplex* opt, QPainter* p, const QWidget* w) const override {
		if (qcommonstyle_drawcomplexcontrol_isbase) {
			qcommonstyle_drawcomplexcontrol_isbase = false;
			QCommonStyle::drawComplexControl(cc, opt, p, w);
		} else if (qcommonstyle_drawcomplexcontrol_callback != nullptr) {
			int cbval1 = static_cast<int>(cc);
			const QStyleOptionComplex* cbval2 = opt;
			QPainter* cbval3 = p;
			const QWidget* cbval4 = w;
			qcommonstyle_drawcomplexcontrol_callback(this, cbval1, cbval2, cbval3, cbval4);
		} else {
			QCommonStyle::drawComplexControl(cc, opt, p, w);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual SubControl hitTestComplexControl(ComplexControl cc, const QStyleOptionComplex* opt, const QPoint& pt, const QWidget* w) const override {
		if (qcommonstyle_hittestcomplexcontrol_isbase) {
			qcommonstyle_hittestcomplexcontrol_isbase = false;
			return QCommonStyle::hitTestComplexControl(cc, opt, pt, w);
		} else if (qcommonstyle_hittestcomplexcontrol_callback != nullptr) {
			int cbval1 = static_cast<int>(cc);
			const QStyleOptionComplex* cbval2 = opt;
			const QPoint* cbval3 = (const QPoint*)&pt;
			const QWidget* cbval4 = w;
			int callback_ret = qcommonstyle_hittestcomplexcontrol_callback(this, cbval1, cbval2, cbval3, cbval4);
			return static_cast<QStyle::SubControl>(callback_ret);
		} else {
			return QCommonStyle::hitTestComplexControl(cc, opt, pt, w);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QRect subControlRect(ComplexControl cc, const QStyleOptionComplex* opt, SubControl sc, const QWidget* w) const override {
		if (qcommonstyle_subcontrolrect_isbase) {
			qcommonstyle_subcontrolrect_isbase = false;
			return QCommonStyle::subControlRect(cc, opt, sc, w);
		} else if (qcommonstyle_subcontrolrect_callback != nullptr) {
			int cbval1 = static_cast<int>(cc);
			const QStyleOptionComplex* cbval2 = opt;
			int cbval3 = static_cast<int>(sc);
			const QWidget* cbval4 = w;
			QRect* callback_ret = qcommonstyle_subcontrolrect_callback(this, cbval1, cbval2, cbval3, cbval4);
			return *callback_ret;
		} else {
			return QCommonStyle::subControlRect(cc, opt, sc, w);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QSize sizeFromContents(ContentsType ct, const QStyleOption* opt, const QSize& contentsSize, const QWidget* widget) const override {
		if (qcommonstyle_sizefromcontents_isbase) {
			qcommonstyle_sizefromcontents_isbase = false;
			return QCommonStyle::sizeFromContents(ct, opt, contentsSize, widget);
		} else if (qcommonstyle_sizefromcontents_callback != nullptr) {
			int cbval1 = static_cast<int>(ct);
			const QStyleOption* cbval2 = opt;
			const QSize* cbval3 = (const QSize*)&contentsSize;
			const QWidget* cbval4 = widget;
			QSize* callback_ret = qcommonstyle_sizefromcontents_callback(this, cbval1, cbval2, cbval3, cbval4);
			return *callback_ret;
		} else {
			return QCommonStyle::sizeFromContents(ct, opt, contentsSize, widget);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int pixelMetric(PixelMetric m, const QStyleOption* opt, const QWidget* widget) const override {
		if (qcommonstyle_pixelmetric_isbase) {
			qcommonstyle_pixelmetric_isbase = false;
			return QCommonStyle::pixelMetric(m, opt, widget);
		} else if (qcommonstyle_pixelmetric_callback != nullptr) {
			int cbval1 = static_cast<int>(m);
			const QStyleOption* cbval2 = opt;
			const QWidget* cbval3 = widget;
			int callback_ret = qcommonstyle_pixelmetric_callback(this, cbval1, cbval2, cbval3);
			return callback_ret;
		} else {
			return QCommonStyle::pixelMetric(m, opt, widget);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int styleHint(StyleHint sh, const QStyleOption* opt, const QWidget* w, QStyleHintReturn* shret) const override {
		if (qcommonstyle_stylehint_isbase) {
			qcommonstyle_stylehint_isbase = false;
			return QCommonStyle::styleHint(sh, opt, w, shret);
		} else if (qcommonstyle_stylehint_callback != nullptr) {
			int cbval1 = static_cast<int>(sh);
			const QStyleOption* cbval2 = opt;
			const QWidget* cbval3 = w;
			QStyleHintReturn* cbval4 = shret;
			int callback_ret = qcommonstyle_stylehint_callback(this, cbval1, cbval2, cbval3, cbval4);
			return callback_ret;
		} else {
			return QCommonStyle::styleHint(sh, opt, w, shret);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QIcon standardIcon(StandardPixmap standardIcon, const QStyleOption* opt, const QWidget* widget) const override {
		if (qcommonstyle_standardicon_isbase) {
			qcommonstyle_standardicon_isbase = false;
			return QCommonStyle::standardIcon(standardIcon, opt, widget);
		} else if (qcommonstyle_standardicon_callback != nullptr) {
			int cbval1 = static_cast<int>(standardIcon);
			const QStyleOption* cbval2 = opt;
			const QWidget* cbval3 = widget;
			QIcon* callback_ret = qcommonstyle_standardicon_callback(this, cbval1, cbval2, cbval3);
			return *callback_ret;
		} else {
			return QCommonStyle::standardIcon(standardIcon, opt, widget);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QPixmap standardPixmap(StandardPixmap sp, const QStyleOption* opt, const QWidget* widget) const override {
		if (qcommonstyle_standardpixmap_isbase) {
			qcommonstyle_standardpixmap_isbase = false;
			return QCommonStyle::standardPixmap(sp, opt, widget);
		} else if (qcommonstyle_standardpixmap_callback != nullptr) {
			int cbval1 = static_cast<int>(sp);
			const QStyleOption* cbval2 = opt;
			const QWidget* cbval3 = widget;
			QPixmap* callback_ret = qcommonstyle_standardpixmap_callback(this, cbval1, cbval2, cbval3);
			return *callback_ret;
		} else {
			return QCommonStyle::standardPixmap(sp, opt, widget);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual QPixmap generatedIconPixmap(QIcon::Mode iconMode, const QPixmap& pixmap, const QStyleOption* opt) const override {
		if (qcommonstyle_generatediconpixmap_isbase) {
			qcommonstyle_generatediconpixmap_isbase = false;
			return QCommonStyle::generatedIconPixmap(iconMode, pixmap, opt);
		} else if (qcommonstyle_generatediconpixmap_callback != nullptr) {
			int cbval1 = static_cast<int>(iconMode);
			const QPixmap* cbval2 = (const QPixmap*)&pixmap;
			const QStyleOption* cbval3 = opt;
			QPixmap* callback_ret = qcommonstyle_generatediconpixmap_callback(this, cbval1, cbval2, cbval3);
			return *callback_ret;
		} else {
			return QCommonStyle::generatedIconPixmap(iconMode, pixmap, opt);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual int layoutSpacing(QSizePolicy::ControlType control1, QSizePolicy::ControlType control2, Qt::Orientation orientation, const QStyleOption* option, const QWidget* widget) const override {
		if (qcommonstyle_layoutspacing_isbase) {
			qcommonstyle_layoutspacing_isbase = false;
			return QCommonStyle::layoutSpacing(control1, control2, orientation, option, widget);
		} else if (qcommonstyle_layoutspacing_callback != nullptr) {
			int cbval1 = static_cast<int>(control1);
			int cbval2 = static_cast<int>(control2);
			int cbval3 = static_cast<int>(orientation);
			const QStyleOption* cbval4 = option;
			const QWidget* cbval5 = widget;
			int callback_ret = qcommonstyle_layoutspacing_callback(this, cbval1, cbval2, cbval3, cbval4, cbval5);
			return callback_ret;
		} else {
			return QCommonStyle::layoutSpacing(control1, control2, orientation, option, widget);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void polish(QPalette& param1) override {
		if (qcommonstyle_polish_isbase) {
			qcommonstyle_polish_isbase = false;
			QCommonStyle::polish(param1);
		} else if (qcommonstyle_polish_callback != nullptr) {
			QPalette* cbval1 = &param1;
			qcommonstyle_polish_callback(this, cbval1);
		} else {
			QCommonStyle::polish(param1);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void polish(QApplication* app) override {
		if (qcommonstyle_polish2_isbase) {
			qcommonstyle_polish2_isbase = false;
			QCommonStyle::polish(app);
		} else if (qcommonstyle_polish2_callback != nullptr) {
			QApplication* cbval1 = app;
			qcommonstyle_polish2_callback(this, cbval1);
		} else {
			QCommonStyle::polish(app);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void polish(QWidget* widget) override {
		if (qcommonstyle_polish3_isbase) {
			qcommonstyle_polish3_isbase = false;
			QCommonStyle::polish(widget);
		} else if (qcommonstyle_polish3_callback != nullptr) {
			QWidget* cbval1 = widget;
			qcommonstyle_polish3_callback(this, cbval1);
		} else {
			QCommonStyle::polish(widget);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void unpolish(QWidget* widget) override {
		if (qcommonstyle_unpolish_isbase) {
			qcommonstyle_unpolish_isbase = false;
			QCommonStyle::unpolish(widget);
		} else if (qcommonstyle_unpolish_callback != nullptr) {
			QWidget* cbval1 = widget;
			qcommonstyle_unpolish_callback(this, cbval1);
		} else {
			QCommonStyle::unpolish(widget);
		}
	}

	// Virtual method for C ABI access and custom callback
	virtual void unpolish(QApplication* application) override {
		if (qcommonstyle_unpolish2_isbase) {
			qcommonstyle_unpolish2_isbase = false;
			QCommonStyle::unpolish(application);
		} else if (qcommonstyle_unpolish2_callback != nullptr) {
			QApplication* cbval1 = application;
			qcommonstyle_unpolish2_callback(this, cbval1);
		} else {
			QCommonStyle::unpolish(application);
		}
	}
};

#endif


