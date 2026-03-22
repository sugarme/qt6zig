#pragma once
#ifndef QFILEDIALOG_H_C_LIB
#define QFILEDIALOG_H_C_LIB

#include <stdbool.h>
#include <stddef.h>

#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#include "qtlibc.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __cplusplus
#else
typedef struct QAbstractFileIconProvider QAbstractFileIconProvider;
typedef struct QAbstractItemDelegate QAbstractItemDelegate;
typedef struct QAbstractProxyModel QAbstractProxyModel;
typedef struct QDialog QDialog;
typedef struct QDir QDir;
typedef struct QEvent QEvent;
typedef struct QFileDialog QFileDialog;
typedef struct QObject QObject;
typedef struct QUrl QUrl;
typedef struct QWidget QWidget;
typedef struct _GUID _GUID;
typedef struct type_info type_info;
#endif



QFileDialog* QFileDialog_new(QWidget* parent);
QFileDialog* QFileDialog_new2(QWidget* parent, int f);
QFileDialog* QFileDialog_new3();
QFileDialog* QFileDialog_new4(QWidget* parent, const libqt_string caption);
QFileDialog* QFileDialog_new5(QWidget* parent, const libqt_string caption, const libqt_string directory);
QFileDialog* QFileDialog_new6(QWidget* parent, const libqt_string caption, const libqt_string directory, const libqt_string filter);
libqt_string QFileDialog_Tr(const char* s);
void QFileDialog_SetDirectory(QFileDialog* self, const libqt_string directory);
void QFileDialog_SetDirectory2(QFileDialog* self, const QDir* directory);
QDir* QFileDialog_Directory(const QFileDialog* self);
void QFileDialog_SetDirectoryUrl(QFileDialog* self, const QUrl* directory);
QUrl* QFileDialog_DirectoryUrl(const QFileDialog* self);
void QFileDialog_SelectFile(QFileDialog* self, const libqt_string filename);
libqt_list QFileDialog_SelectedFiles(const QFileDialog* self);
void QFileDialog_SelectUrl(QFileDialog* self, const QUrl* url);
libqt_list QFileDialog_SelectedUrls(const QFileDialog* self);
void QFileDialog_SetNameFilter(QFileDialog* self, const libqt_string filter);
void QFileDialog_SetNameFilters(QFileDialog* self, const libqt_list filters);
libqt_list QFileDialog_NameFilters(const QFileDialog* self);
void QFileDialog_SelectNameFilter(QFileDialog* self, const libqt_string filter);
libqt_string QFileDialog_SelectedMimeTypeFilter(const QFileDialog* self);
libqt_string QFileDialog_SelectedNameFilter(const QFileDialog* self);
void QFileDialog_SetMimeTypeFilters(QFileDialog* self, const libqt_list filters);
libqt_list QFileDialog_MimeTypeFilters(const QFileDialog* self);
void QFileDialog_SelectMimeTypeFilter(QFileDialog* self, const libqt_string filter);
int QFileDialog_Filter(const QFileDialog* self);
void QFileDialog_SetFilter(QFileDialog* self, int filters);
void QFileDialog_SetViewMode(QFileDialog* self, int mode);
int QFileDialog_ViewMode(const QFileDialog* self);
void QFileDialog_SetFileMode(QFileDialog* self, int mode);
int QFileDialog_FileMode(const QFileDialog* self);
void QFileDialog_SetAcceptMode(QFileDialog* self, int mode);
int QFileDialog_AcceptMode(const QFileDialog* self);
void QFileDialog_SetSidebarUrls(QFileDialog* self, const libqt_list urls);
libqt_list QFileDialog_SidebarUrls(const QFileDialog* self);
libqt_string QFileDialog_SaveState(const QFileDialog* self);
bool QFileDialog_RestoreState(QFileDialog* self, const libqt_string state);
void QFileDialog_SetDefaultSuffix(QFileDialog* self, const libqt_string suffix);
libqt_string QFileDialog_DefaultSuffix(const QFileDialog* self);
void QFileDialog_SetHistory(QFileDialog* self, const libqt_list paths);
libqt_list QFileDialog_History(const QFileDialog* self);
void QFileDialog_SetItemDelegate(QFileDialog* self, QAbstractItemDelegate* delegate);
QAbstractItemDelegate* QFileDialog_ItemDelegate(const QFileDialog* self);
void QFileDialog_SetIconProvider(QFileDialog* self, QAbstractFileIconProvider* provider);
QAbstractFileIconProvider* QFileDialog_IconProvider(const QFileDialog* self);
void QFileDialog_SetLabelText(QFileDialog* self, int label, const libqt_string text);
libqt_string QFileDialog_LabelText(const QFileDialog* self, int label);
void QFileDialog_SetSupportedSchemes(QFileDialog* self, const libqt_list schemes);
libqt_list QFileDialog_SupportedSchemes(const QFileDialog* self);
void QFileDialog_SetProxyModel(QFileDialog* self, QAbstractProxyModel* model);
QAbstractProxyModel* QFileDialog_ProxyModel(const QFileDialog* self);
void QFileDialog_SetOption(QFileDialog* self, int option);
bool QFileDialog_TestOption(const QFileDialog* self, int option);
void QFileDialog_SetOptions(QFileDialog* self, int options);
int QFileDialog_Options(const QFileDialog* self);
void QFileDialog_Open(QFileDialog* self, QObject* receiver, const char* member);
void QFileDialog_SetVisible(QFileDialog* self, bool visible);
void QFileDialog_FileSelected(QFileDialog* self, const libqt_string file);
void QFileDialog_Connect_FileSelected(QFileDialog* self, intptr_t slot);
void QFileDialog_FilesSelected(QFileDialog* self, const libqt_list files);
void QFileDialog_Connect_FilesSelected(QFileDialog* self, intptr_t slot);
void QFileDialog_CurrentChanged(QFileDialog* self, const libqt_string path);
void QFileDialog_Connect_CurrentChanged(QFileDialog* self, intptr_t slot);
void QFileDialog_DirectoryEntered(QFileDialog* self, const libqt_string directory);
void QFileDialog_Connect_DirectoryEntered(QFileDialog* self, intptr_t slot);
void QFileDialog_UrlSelected(QFileDialog* self, const QUrl* url);
void QFileDialog_Connect_UrlSelected(QFileDialog* self, intptr_t slot);
void QFileDialog_UrlsSelected(QFileDialog* self, const libqt_list urls);
void QFileDialog_Connect_UrlsSelected(QFileDialog* self, intptr_t slot);
void QFileDialog_CurrentUrlChanged(QFileDialog* self, const QUrl* url);
void QFileDialog_Connect_CurrentUrlChanged(QFileDialog* self, intptr_t slot);
void QFileDialog_DirectoryUrlEntered(QFileDialog* self, const QUrl* directory);
void QFileDialog_Connect_DirectoryUrlEntered(QFileDialog* self, intptr_t slot);
void QFileDialog_FilterSelected(QFileDialog* self, const libqt_string filter);
void QFileDialog_Connect_FilterSelected(QFileDialog* self, intptr_t slot);
libqt_string QFileDialog_GetOpenFileName();
QUrl* QFileDialog_GetOpenFileUrl();
libqt_string QFileDialog_GetSaveFileName();
QUrl* QFileDialog_GetSaveFileUrl();
libqt_string QFileDialog_GetExistingDirectory();
QUrl* QFileDialog_GetExistingDirectoryUrl();
libqt_list QFileDialog_GetOpenFileNames();
libqt_list QFileDialog_GetOpenFileUrls();
void QFileDialog_SaveFileContent(const libqt_string fileContent, const libqt_string fileNameHint);
void QFileDialog_Done(QFileDialog* self, int result);
void QFileDialog_Accept(QFileDialog* self);
void QFileDialog_ChangeEvent(QFileDialog* self, QEvent* e);
libqt_string QFileDialog_Tr2(const char* s, const char* c);
libqt_string QFileDialog_Tr3(const char* s, const char* c, int n);
void QFileDialog_SetOption2(QFileDialog* self, int option, bool on);
libqt_string QFileDialog_GetOpenFileName1(QWidget* parent);
libqt_string QFileDialog_GetOpenFileName2(QWidget* parent, const libqt_string caption);
libqt_string QFileDialog_GetOpenFileName3(QWidget* parent, const libqt_string caption, const libqt_string dir);
libqt_string QFileDialog_GetOpenFileName4(QWidget* parent, const libqt_string caption, const libqt_string dir, const libqt_string filter);
libqt_string QFileDialog_GetOpenFileName5(QWidget* parent, const libqt_string caption, const libqt_string dir, const libqt_string filter, libqt_string selectedFilter);
libqt_string QFileDialog_GetOpenFileName6(QWidget* parent, const libqt_string caption, const libqt_string dir, const libqt_string filter, libqt_string selectedFilter, int options);
QUrl* QFileDialog_GetOpenFileUrl1(QWidget* parent);
QUrl* QFileDialog_GetOpenFileUrl2(QWidget* parent, const libqt_string caption);
QUrl* QFileDialog_GetOpenFileUrl3(QWidget* parent, const libqt_string caption, const QUrl* dir);
QUrl* QFileDialog_GetOpenFileUrl4(QWidget* parent, const libqt_string caption, const QUrl* dir, const libqt_string filter);
QUrl* QFileDialog_GetOpenFileUrl5(QWidget* parent, const libqt_string caption, const QUrl* dir, const libqt_string filter, libqt_string selectedFilter);
QUrl* QFileDialog_GetOpenFileUrl6(QWidget* parent, const libqt_string caption, const QUrl* dir, const libqt_string filter, libqt_string selectedFilter, int options);
QUrl* QFileDialog_GetOpenFileUrl7(QWidget* parent, const libqt_string caption, const QUrl* dir, const libqt_string filter, libqt_string selectedFilter, int options, const libqt_list supportedSchemes);
libqt_string QFileDialog_GetSaveFileName1(QWidget* parent);
libqt_string QFileDialog_GetSaveFileName2(QWidget* parent, const libqt_string caption);
libqt_string QFileDialog_GetSaveFileName3(QWidget* parent, const libqt_string caption, const libqt_string dir);
libqt_string QFileDialog_GetSaveFileName4(QWidget* parent, const libqt_string caption, const libqt_string dir, const libqt_string filter);
libqt_string QFileDialog_GetSaveFileName5(QWidget* parent, const libqt_string caption, const libqt_string dir, const libqt_string filter, libqt_string selectedFilter);
libqt_string QFileDialog_GetSaveFileName6(QWidget* parent, const libqt_string caption, const libqt_string dir, const libqt_string filter, libqt_string selectedFilter, int options);
QUrl* QFileDialog_GetSaveFileUrl1(QWidget* parent);
QUrl* QFileDialog_GetSaveFileUrl2(QWidget* parent, const libqt_string caption);
QUrl* QFileDialog_GetSaveFileUrl3(QWidget* parent, const libqt_string caption, const QUrl* dir);
QUrl* QFileDialog_GetSaveFileUrl4(QWidget* parent, const libqt_string caption, const QUrl* dir, const libqt_string filter);
QUrl* QFileDialog_GetSaveFileUrl5(QWidget* parent, const libqt_string caption, const QUrl* dir, const libqt_string filter, libqt_string selectedFilter);
QUrl* QFileDialog_GetSaveFileUrl6(QWidget* parent, const libqt_string caption, const QUrl* dir, const libqt_string filter, libqt_string selectedFilter, int options);
QUrl* QFileDialog_GetSaveFileUrl7(QWidget* parent, const libqt_string caption, const QUrl* dir, const libqt_string filter, libqt_string selectedFilter, int options, const libqt_list supportedSchemes);
libqt_string QFileDialog_GetExistingDirectory1(QWidget* parent);
libqt_string QFileDialog_GetExistingDirectory2(QWidget* parent, const libqt_string caption);
libqt_string QFileDialog_GetExistingDirectory3(QWidget* parent, const libqt_string caption, const libqt_string dir);
libqt_string QFileDialog_GetExistingDirectory4(QWidget* parent, const libqt_string caption, const libqt_string dir, int options);
QUrl* QFileDialog_GetExistingDirectoryUrl1(QWidget* parent);
QUrl* QFileDialog_GetExistingDirectoryUrl2(QWidget* parent, const libqt_string caption);
QUrl* QFileDialog_GetExistingDirectoryUrl3(QWidget* parent, const libqt_string caption, const QUrl* dir);
QUrl* QFileDialog_GetExistingDirectoryUrl4(QWidget* parent, const libqt_string caption, const QUrl* dir, int options);
QUrl* QFileDialog_GetExistingDirectoryUrl5(QWidget* parent, const libqt_string caption, const QUrl* dir, int options, const libqt_list supportedSchemes);
libqt_list QFileDialog_GetOpenFileNames1(QWidget* parent);
libqt_list QFileDialog_GetOpenFileNames2(QWidget* parent, const libqt_string caption);
libqt_list QFileDialog_GetOpenFileNames3(QWidget* parent, const libqt_string caption, const libqt_string dir);
libqt_list QFileDialog_GetOpenFileNames4(QWidget* parent, const libqt_string caption, const libqt_string dir, const libqt_string filter);
libqt_list QFileDialog_GetOpenFileNames5(QWidget* parent, const libqt_string caption, const libqt_string dir, const libqt_string filter, libqt_string selectedFilter);
libqt_list QFileDialog_GetOpenFileNames6(QWidget* parent, const libqt_string caption, const libqt_string dir, const libqt_string filter, libqt_string selectedFilter, int options);
libqt_list QFileDialog_GetOpenFileUrls1(QWidget* parent);
libqt_list QFileDialog_GetOpenFileUrls2(QWidget* parent, const libqt_string caption);
libqt_list QFileDialog_GetOpenFileUrls3(QWidget* parent, const libqt_string caption, const QUrl* dir);
libqt_list QFileDialog_GetOpenFileUrls4(QWidget* parent, const libqt_string caption, const QUrl* dir, const libqt_string filter);
libqt_list QFileDialog_GetOpenFileUrls5(QWidget* parent, const libqt_string caption, const QUrl* dir, const libqt_string filter, libqt_string selectedFilter);
libqt_list QFileDialog_GetOpenFileUrls6(QWidget* parent, const libqt_string caption, const QUrl* dir, const libqt_string filter, libqt_string selectedFilter, int options);
libqt_list QFileDialog_GetOpenFileUrls7(QWidget* parent, const libqt_string caption, const QUrl* dir, const libqt_string filter, libqt_string selectedFilter, int options, const libqt_list supportedSchemes);
void QFileDialog_SaveFileContent3(const libqt_string fileContent, const libqt_string fileNameHint, QWidget* parent);
void QFileDialog_OnSetVisible(QFileDialog* self, intptr_t slot);
void QFileDialog_QBaseSetVisible(QFileDialog* self, bool visible);
void QFileDialog_OnDone(QFileDialog* self, intptr_t slot);
void QFileDialog_QBaseDone(QFileDialog* self, int result);
void QFileDialog_OnAccept(QFileDialog* self, intptr_t slot);
void QFileDialog_QBaseAccept(QFileDialog* self);
void QFileDialog_OnChangeEvent(QFileDialog* self, intptr_t slot);
void QFileDialog_QBaseChangeEvent(QFileDialog* self, QEvent* e);
void QFileDialog_Delete(QFileDialog* self);

#ifdef __cplusplus
} /* extern C */
#endif

#endif
