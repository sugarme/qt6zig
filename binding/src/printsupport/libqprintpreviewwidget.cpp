#include <QPrintPreviewWidget>
#include <QPrinter>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QWidget>
#include <qprintpreviewwidget.h>
#include "libqprintpreviewwidget.h"
#include "libqprintpreviewwidget.hxx"

QPrintPreviewWidget* QPrintPreviewWidget_new(QWidget* parent) {
	 return new VirtualQPrintPreviewWidget(parent);
}

QPrintPreviewWidget* QPrintPreviewWidget_new2(QPrinter* printer) {
	 return new VirtualQPrintPreviewWidget(printer);
}

QPrintPreviewWidget* QPrintPreviewWidget_new3() {
	 return new VirtualQPrintPreviewWidget();
}

QPrintPreviewWidget* QPrintPreviewWidget_new4(QPrinter* printer, QWidget* parent) {
	 return new VirtualQPrintPreviewWidget(printer, parent);
}

QPrintPreviewWidget* QPrintPreviewWidget_new5(QPrinter* printer, QWidget* parent, int flags) {
	 return new VirtualQPrintPreviewWidget(printer, parent, static_cast<QFlags<Qt::WindowType>>(flags));
}

QPrintPreviewWidget* QPrintPreviewWidget_new6(QWidget* parent, int flags) {
	 return new VirtualQPrintPreviewWidget(parent, static_cast<QFlags<Qt::WindowType>>(flags));
}

libqt_string QPrintPreviewWidget_Tr(const char* s) {
	QString _ret = QPrintPreviewWidget::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

double QPrintPreviewWidget_ZoomFactor(const QPrintPreviewWidget* self) {
	return self->zoomFactor();
}

int QPrintPreviewWidget_Orientation(const QPrintPreviewWidget* self) {
	return self->orientation();
}

int QPrintPreviewWidget_ViewMode(const QPrintPreviewWidget* self) {
	return self->viewMode();
}

int QPrintPreviewWidget_ZoomMode(const QPrintPreviewWidget* self) {
	return self->zoomMode();
}

int QPrintPreviewWidget_CurrentPage(const QPrintPreviewWidget* self) {
	return self->currentPage();
}

int QPrintPreviewWidget_PageCount(const QPrintPreviewWidget* self) {
	return self->pageCount();
}

void QPrintPreviewWidget_SetVisible(QPrintPreviewWidget* self, bool visible) {
	self->setVisible(visible);
}

void QPrintPreviewWidget_Print(QPrintPreviewWidget* self) {
	self->print();
}

void QPrintPreviewWidget_ZoomIn(QPrintPreviewWidget* self) {
	self->zoomIn();
}

void QPrintPreviewWidget_ZoomOut(QPrintPreviewWidget* self) {
	self->zoomOut();
}

void QPrintPreviewWidget_SetZoomFactor(QPrintPreviewWidget* self, double zoomFactor) {
	self->setZoomFactor(zoomFactor);
}

void QPrintPreviewWidget_SetOrientation(QPrintPreviewWidget* self, int orientation) {
	self->setOrientation(static_cast<QPageLayout::Orientation>(orientation));
}

void QPrintPreviewWidget_SetViewMode(QPrintPreviewWidget* self, int viewMode) {
	self->setViewMode(static_cast<QPrintPreviewWidget::ViewMode>(viewMode));
}

void QPrintPreviewWidget_SetZoomMode(QPrintPreviewWidget* self, int zoomMode) {
	self->setZoomMode(static_cast<QPrintPreviewWidget::ZoomMode>(zoomMode));
}

void QPrintPreviewWidget_SetCurrentPage(QPrintPreviewWidget* self, int pageNumber) {
	self->setCurrentPage(pageNumber);
}

void QPrintPreviewWidget_FitToWidth(QPrintPreviewWidget* self) {
	self->fitToWidth();
}

void QPrintPreviewWidget_FitInView(QPrintPreviewWidget* self) {
	self->fitInView();
}

void QPrintPreviewWidget_SetLandscapeOrientation(QPrintPreviewWidget* self) {
	self->setLandscapeOrientation();
}

void QPrintPreviewWidget_SetPortraitOrientation(QPrintPreviewWidget* self) {
	self->setPortraitOrientation();
}

void QPrintPreviewWidget_SetSinglePageViewMode(QPrintPreviewWidget* self) {
	self->setSinglePageViewMode();
}

void QPrintPreviewWidget_SetFacingPagesViewMode(QPrintPreviewWidget* self) {
	self->setFacingPagesViewMode();
}

void QPrintPreviewWidget_SetAllPagesViewMode(QPrintPreviewWidget* self) {
	self->setAllPagesViewMode();
}

void QPrintPreviewWidget_UpdatePreview(QPrintPreviewWidget* self) {
	self->updatePreview();
}

void QPrintPreviewWidget_PaintRequested(QPrintPreviewWidget* self, QPrinter* printer) {
	self->paintRequested(printer);
}

void QPrintPreviewWidget_Connect_PaintRequested(QPrintPreviewWidget* self, intptr_t slot) {
    void (*slotFunc)(QPrintPreviewWidget*, QPrinter*) = reinterpret_cast<void (*)(QPrintPreviewWidget*, QPrinter*)>(slot);
    QPrintPreviewWidget::connect(self, &QPrintPreviewWidget::paintRequested, [self, slotFunc](QPrinter* printer) {
	slotFunc(self, printer);
    });
}

void QPrintPreviewWidget_PreviewChanged(QPrintPreviewWidget* self) {
	self->previewChanged();
}

void QPrintPreviewWidget_Connect_PreviewChanged(QPrintPreviewWidget* self, intptr_t slot) {
    void (*slotFunc)(QPrintPreviewWidget*) = reinterpret_cast<void (*)(QPrintPreviewWidget*)>(slot);
    QPrintPreviewWidget::connect(self, &QPrintPreviewWidget::previewChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

libqt_string QPrintPreviewWidget_Tr2(const char* s, const char* c) {
	QString _ret = QPrintPreviewWidget::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QPrintPreviewWidget_Tr3(const char* s, const char* c, int n) {
	QString _ret = QPrintPreviewWidget::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QPrintPreviewWidget_ZoomIn1(QPrintPreviewWidget* self, double zoom) {
	self->zoomIn(zoom);
}

void QPrintPreviewWidget_ZoomOut1(QPrintPreviewWidget* self, double zoom) {
	self->zoomOut(zoom);
}

// Base class handler implementation
void QPrintPreviewWidget_QBaseSetVisible(QPrintPreviewWidget* self, bool visible) {
	auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
	if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
vqprintpreviewwidget->setQPrintPreviewWidget_SetVisible_IsBase(true);
	vqprintpreviewwidget->setVisible(visible);
}
}

// Auxiliary method to allow providing re-implementation
void QPrintPreviewWidget_OnSetVisible(QPrintPreviewWidget* self, intptr_t slot) {
	auto* vqprintpreviewwidget = dynamic_cast<VirtualQPrintPreviewWidget*>(self);
	if (vqprintpreviewwidget && vqprintpreviewwidget->isVirtualQPrintPreviewWidget) {
vqprintpreviewwidget->setQPrintPreviewWidget_SetVisible_Callback(reinterpret_cast<VirtualQPrintPreviewWidget::QPrintPreviewWidget_SetVisible_Callback>(slot));
}
}

void QPrintPreviewWidget_Delete(QPrintPreviewWidget* self) {
    delete self;
}

