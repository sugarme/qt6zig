#pragma once
#ifndef QPDFWRITER_H_C_LIB
#define QPDFWRITER_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QIODevice QIODevice;
typedef struct QObject QObject;
typedef struct QPagedPaintDevice QPagedPaintDevice;
typedef struct QPaintEngine QPaintEngine;
typedef struct QPdfOutputIntent QPdfOutputIntent;
typedef struct QPdfWriter QPdfWriter;
typedef struct QUuid QUuid;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QPdfWriter* QPdfWriter_new(const libqt_string filename);
QPdfWriter* QPdfWriter_new2(QIODevice* device);
libqt_string QPdfWriter_Tr(const char* s);
void QPdfWriter_SetPdfVersion(QPdfWriter* self, int version);
int QPdfWriter_PdfVersion(const QPdfWriter* self);
libqt_string QPdfWriter_Title(const QPdfWriter* self);
void QPdfWriter_SetTitle(QPdfWriter* self, const libqt_string title);
libqt_string QPdfWriter_Creator(const QPdfWriter* self);
void QPdfWriter_SetCreator(QPdfWriter* self, const libqt_string creator);
QUuid* QPdfWriter_DocumentId(const QPdfWriter* self);
void QPdfWriter_SetDocumentId(QPdfWriter* self, QUuid* documentId);
bool QPdfWriter_NewPage(QPdfWriter* self);
void QPdfWriter_SetResolution(QPdfWriter* self, int resolution);
int QPdfWriter_Resolution(const QPdfWriter* self);
void QPdfWriter_SetDocumentXmpMetadata(QPdfWriter* self, const libqt_string xmpMetadata);
libqt_string QPdfWriter_DocumentXmpMetadata(const QPdfWriter* self);
void QPdfWriter_AddFileAttachment(QPdfWriter* self, const libqt_string fileName, const libqt_string data);
int QPdfWriter_ColorModel(const QPdfWriter* self);
void QPdfWriter_SetColorModel(QPdfWriter* self, int model);
QPdfOutputIntent* QPdfWriter_OutputIntent(const QPdfWriter* self);
void QPdfWriter_SetOutputIntent(QPdfWriter* self, const QPdfOutputIntent* intent);
QPaintEngine* QPdfWriter_PaintEngine(const QPdfWriter* self);
int QPdfWriter_Metric(const QPdfWriter* self, int id);
libqt_string QPdfWriter_Tr2(const char* s, const char* c);
libqt_string QPdfWriter_Tr3(const char* s, const char* c, int n);
void QPdfWriter_AddFileAttachment3(QPdfWriter* self, const libqt_string fileName, const libqt_string data, const libqt_string mimeType);
void QPdfWriter_OnNewPage(QPdfWriter* self, intptr_t slot);
bool QPdfWriter_QBaseNewPage(QPdfWriter* self);
void QPdfWriter_OnPaintEngine(const QPdfWriter* self, intptr_t slot);
QPaintEngine* QPdfWriter_QBasePaintEngine(const QPdfWriter* self);
void QPdfWriter_OnMetric(const QPdfWriter* self, intptr_t slot);
int QPdfWriter_QBaseMetric(const QPdfWriter* self, int id);
void QPdfWriter_Delete(QPdfWriter* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
