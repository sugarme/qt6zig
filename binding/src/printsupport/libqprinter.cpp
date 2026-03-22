#include <QPageSize>
#include <QPagedPaintDevice>
#include <QPaintEngine>
#include <QPrintEngine>
#include <QPrinter>
#include <QPrinterInfo>
#include <QRectF>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <qprinter.h>
#include "libqprinter.h"
#include "libqprinter.hxx"

QPrinter* QPrinter_new() {
	 return new VirtualQPrinter();
}

QPrinter* QPrinter_new2(const QPrinterInfo* printer) {
	 return new VirtualQPrinter(*printer);
}

QPrinter* QPrinter_new3(int mode) {
	 return new VirtualQPrinter(static_cast<QPrinter::PrinterMode>(mode));
}

QPrinter* QPrinter_new4(const QPrinterInfo* printer, int mode) {
	 return new VirtualQPrinter(*printer, static_cast<QPrinter::PrinterMode>(mode));
}

int QPrinter_DevType(const QPrinter* self) {
	return self->devType();
}

void QPrinter_SetOutputFormat(QPrinter* self, int format) {
	self->setOutputFormat(static_cast<QPrinter::OutputFormat>(format));
}

int QPrinter_OutputFormat(const QPrinter* self) {
	return self->outputFormat();
}

void QPrinter_SetPdfVersion(QPrinter* self, int version) {
	self->setPdfVersion(static_cast<QPagedPaintDevice::PdfVersion>(version));
}

int QPrinter_PdfVersion(const QPrinter* self) {
	return self->pdfVersion();
}

void QPrinter_SetPrinterName(QPrinter* self, const libqt_string printerName) {
	self->setPrinterName(QString::fromUtf8(printerName.data, printerName.len));
}

libqt_string QPrinter_PrinterName(const QPrinter* self) {
	QString _ret = self->printerName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QPrinter_IsValid(const QPrinter* self) {
	return self->isValid();
}

void QPrinter_SetOutputFileName(QPrinter* self, const libqt_string outputFileName) {
	self->setOutputFileName(QString::fromUtf8(outputFileName.data, outputFileName.len));
}

libqt_string QPrinter_OutputFileName(const QPrinter* self) {
	QString _ret = self->outputFileName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QPrinter_SetPrintProgram(QPrinter* self, const libqt_string printProgram) {
	self->setPrintProgram(QString::fromUtf8(printProgram.data, printProgram.len));
}

libqt_string QPrinter_PrintProgram(const QPrinter* self) {
	QString _ret = self->printProgram();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QPrinter_SetDocName(QPrinter* self, const libqt_string docName) {
	self->setDocName(QString::fromUtf8(docName.data, docName.len));
}

libqt_string QPrinter_DocName(const QPrinter* self) {
	QString _ret = self->docName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QPrinter_SetCreator(QPrinter* self, const libqt_string creator) {
	self->setCreator(QString::fromUtf8(creator.data, creator.len));
}

libqt_string QPrinter_Creator(const QPrinter* self) {
	QString _ret = self->creator();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QPrinter_SetPageOrder(QPrinter* self, int pageOrder) {
	self->setPageOrder(static_cast<QPrinter::PageOrder>(pageOrder));
}

int QPrinter_PageOrder(const QPrinter* self) {
	return self->pageOrder();
}

void QPrinter_SetResolution(QPrinter* self, int resolution) {
	self->setResolution(resolution);
}

int QPrinter_Resolution(const QPrinter* self) {
	return self->resolution();
}

void QPrinter_SetColorMode(QPrinter* self, int colorMode) {
	self->setColorMode(static_cast<QPrinter::ColorMode>(colorMode));
}

int QPrinter_ColorMode(const QPrinter* self) {
	return self->colorMode();
}

void QPrinter_SetCollateCopies(QPrinter* self, bool collate) {
	self->setCollateCopies(collate);
}

bool QPrinter_CollateCopies(const QPrinter* self) {
	return self->collateCopies();
}

void QPrinter_SetFullPage(QPrinter* self, bool fullPage) {
	self->setFullPage(fullPage);
}

bool QPrinter_FullPage(const QPrinter* self) {
	return self->fullPage();
}

void QPrinter_SetCopyCount(QPrinter* self, int copyCount) {
	self->setCopyCount(copyCount);
}

int QPrinter_CopyCount(const QPrinter* self) {
	return self->copyCount();
}

bool QPrinter_SupportsMultipleCopies(const QPrinter* self) {
	return self->supportsMultipleCopies();
}

void QPrinter_SetPaperSource(QPrinter* self, int paperSource) {
	self->setPaperSource(static_cast<QPrinter::PaperSource>(paperSource));
}

int QPrinter_PaperSource(const QPrinter* self) {
	return self->paperSource();
}

void QPrinter_SetDuplex(QPrinter* self, int duplex) {
	self->setDuplex(static_cast<QPrinter::DuplexMode>(duplex));
}

int QPrinter_Duplex(const QPrinter* self) {
	return self->duplex();
}

libqt_list QPrinter_SupportedResolutions(const QPrinter* self) {
	return self->supportedResolutions();
}

libqt_list QPrinter_SupportedPaperSources(const QPrinter* self) {
	return self->supportedPaperSources();
}

void QPrinter_SetFontEmbeddingEnabled(QPrinter* self, bool enable) {
	self->setFontEmbeddingEnabled(enable);
}

bool QPrinter_FontEmbeddingEnabled(const QPrinter* self) {
	return self->fontEmbeddingEnabled();
}

QRectF* QPrinter_PaperRect(const QPrinter* self, int param1) {
	return new QRectF(self->paperRect(static_cast<QPrinter::Unit>(param1)));
}

QRectF* QPrinter_PageRect(const QPrinter* self, int param1) {
	return new QRectF(self->pageRect(static_cast<QPrinter::Unit>(param1)));
}

libqt_string QPrinter_PrinterSelectionOption(const QPrinter* self) {
	QString _ret = self->printerSelectionOption();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QPrinter_SetPrinterSelectionOption(QPrinter* self, const libqt_string printerSelectionOption) {
	self->setPrinterSelectionOption(QString::fromUtf8(printerSelectionOption.data, printerSelectionOption.len));
}

bool QPrinter_NewPage(QPrinter* self) {
	return self->newPage();
}

bool QPrinter_Abort(QPrinter* self) {
	return self->abort();
}

int QPrinter_PrinterState(const QPrinter* self) {
	return self->printerState();
}

QPaintEngine* QPrinter_PaintEngine(const QPrinter* self) {
	return self->paintEngine();
}

QPrintEngine* QPrinter_PrintEngine(const QPrinter* self) {
	return self->printEngine();
}

void QPrinter_SetFromTo(QPrinter* self, int fromPage, int toPage) {
	self->setFromTo(fromPage, toPage);
}

int QPrinter_FromPage(const QPrinter* self) {
	return self->fromPage();
}

int QPrinter_ToPage(const QPrinter* self) {
	return self->toPage();
}

void QPrinter_SetPrintRange(QPrinter* self, int range) {
	self->setPrintRange(static_cast<QPrinter::PrintRange>(range));
}

int QPrinter_PrintRange(const QPrinter* self) {
	return self->printRange();
}

// Base class handler implementation
int QPrinter_QBaseDevType(const QPrinter* self) {
	auto* vqprinter = dynamic_cast<const VirtualQPrinter*>(self);
	if (vqprinter && vqprinter->isVirtualQPrinter) {
vqprinter->setQPrinter_DevType_IsBase(true);
	return vqprinter->devType();
}
}

// Auxiliary method to allow providing re-implementation
void QPrinter_OnDevType(const QPrinter* self, intptr_t slot) {
	auto* vqprinter = dynamic_cast<const VirtualQPrinter*>(self);
	if (vqprinter && vqprinter->isVirtualQPrinter) {
vqprinter->setQPrinter_DevType_Callback(reinterpret_cast<VirtualQPrinter::QPrinter_DevType_Callback>(slot));
}
}

// Base class handler implementation
bool QPrinter_QBaseNewPage(QPrinter* self) {
	auto* vqprinter = dynamic_cast<VirtualQPrinter*>(self);
	if (vqprinter && vqprinter->isVirtualQPrinter) {
vqprinter->setQPrinter_NewPage_IsBase(true);
	return vqprinter->newPage();
}
}

// Auxiliary method to allow providing re-implementation
void QPrinter_OnNewPage(QPrinter* self, intptr_t slot) {
	auto* vqprinter = dynamic_cast<VirtualQPrinter*>(self);
	if (vqprinter && vqprinter->isVirtualQPrinter) {
vqprinter->setQPrinter_NewPage_Callback(reinterpret_cast<VirtualQPrinter::QPrinter_NewPage_Callback>(slot));
}
}

// Base class handler implementation
QPaintEngine* QPrinter_QBasePaintEngine(const QPrinter* self) {
	auto* vqprinter = dynamic_cast<const VirtualQPrinter*>(self);
	if (vqprinter && vqprinter->isVirtualQPrinter) {
vqprinter->setQPrinter_PaintEngine_IsBase(true);
	return vqprinter->paintEngine();
}
}

// Auxiliary method to allow providing re-implementation
void QPrinter_OnPaintEngine(const QPrinter* self, intptr_t slot) {
	auto* vqprinter = dynamic_cast<const VirtualQPrinter*>(self);
	if (vqprinter && vqprinter->isVirtualQPrinter) {
vqprinter->setQPrinter_PaintEngine_Callback(reinterpret_cast<VirtualQPrinter::QPrinter_PaintEngine_Callback>(slot));
}
}

// Derived class handler implementation
int QPrinter_Metric(const QPrinter* self, int param1) {
	auto* vqprinter = dynamic_cast<const VirtualQPrinter*>(self);
	if (vqprinter && vqprinter->isVirtualQPrinter) {
	return vqprinter->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
	} else {
	return self->QPrinter::metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
}
}

// Base class handler implementation
int QPrinter_QBaseMetric(const QPrinter* self, int param1) {
	auto* vqprinter = dynamic_cast<const VirtualQPrinter*>(self);
	if (vqprinter && vqprinter->isVirtualQPrinter) {
vqprinter->setQPrinter_Metric_IsBase(true);
	return vqprinter->metric(static_cast<QPaintDevice::PaintDeviceMetric>(param1));
}
}

// Auxiliary method to allow providing re-implementation
void QPrinter_OnMetric(const QPrinter* self, intptr_t slot) {
	auto* vqprinter = dynamic_cast<const VirtualQPrinter*>(self);
	if (vqprinter && vqprinter->isVirtualQPrinter) {
vqprinter->setQPrinter_Metric_Callback(reinterpret_cast<VirtualQPrinter::QPrinter_Metric_Callback>(slot));
}
}

// Derived class handler implementation
void QPrinter_SetEngines(QPrinter* self, QPrintEngine* printEngine, QPaintEngine* paintEngine) {
	auto* vqprinter = dynamic_cast<VirtualQPrinter*>(self);
	if (vqprinter && vqprinter->isVirtualQPrinter) {
	vqprinter->setEngines(printEngine, paintEngine);
	} else {
	self->QPrinter::setEngines(printEngine, paintEngine);
}
}

// Base class handler implementation
void QPrinter_QBaseSetEngines(QPrinter* self, QPrintEngine* printEngine, QPaintEngine* paintEngine) {
	auto* vqprinter = dynamic_cast<VirtualQPrinter*>(self);
	if (vqprinter && vqprinter->isVirtualQPrinter) {
vqprinter->setQPrinter_SetEngines_IsBase(true);
	vqprinter->setEngines(printEngine, paintEngine);
}
}

// Auxiliary method to allow providing re-implementation
void QPrinter_OnSetEngines(QPrinter* self, intptr_t slot) {
	auto* vqprinter = dynamic_cast<VirtualQPrinter*>(self);
	if (vqprinter && vqprinter->isVirtualQPrinter) {
vqprinter->setQPrinter_SetEngines_Callback(reinterpret_cast<VirtualQPrinter::QPrinter_SetEngines_Callback>(slot));
}
}

void QPrinter_Delete(QPrinter* self) {
    delete self;
}

