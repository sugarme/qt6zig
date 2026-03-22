#include <QAbstractFileIconProvider>
#include <QAbstractItemDelegate>
#include <QAbstractProxyModel>
#include <QByteArray>
#include <QDialog>
#include <QDir>
#include <QEvent>
#include <QFileDialog>
#include <QObject>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QUrl>
#include <QWidget>
#include <qfiledialog.h>
#include "libqfiledialog.h"
#include "libqfiledialog.hxx"

QFileDialog* QFileDialog_new(QWidget* parent) {
	 return new VirtualQFileDialog(parent);
}

QFileDialog* QFileDialog_new2(QWidget* parent, int f) {
	 return new VirtualQFileDialog(parent, static_cast<QFlags<Qt::WindowType>>(f));
}

QFileDialog* QFileDialog_new3() {
	 return new VirtualQFileDialog();
}

QFileDialog* QFileDialog_new4(QWidget* parent, const libqt_string caption) {
	 return new VirtualQFileDialog(parent, QString::fromUtf8(caption.data, caption.len));
}

QFileDialog* QFileDialog_new5(QWidget* parent, const libqt_string caption, const libqt_string directory) {
	 return new VirtualQFileDialog(parent, QString::fromUtf8(caption.data, caption.len), QString::fromUtf8(directory.data, directory.len));
}

QFileDialog* QFileDialog_new6(QWidget* parent, const libqt_string caption, const libqt_string directory, const libqt_string filter) {
	 return new VirtualQFileDialog(parent, QString::fromUtf8(caption.data, caption.len), QString::fromUtf8(directory.data, directory.len), QString::fromUtf8(filter.data, filter.len));
}

libqt_string QFileDialog_Tr(const char* s) {
	QString _ret = QFileDialog::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QFileDialog_SetDirectory(QFileDialog* self, const libqt_string directory) {
	self->setDirectory(QString::fromUtf8(directory.data, directory.len));
}

void QFileDialog_SetDirectory2(QFileDialog* self, const QDir* directory) {
	self->setDirectory(*directory);
}

QDir* QFileDialog_Directory(const QFileDialog* self) {
	return new QDir(self->directory());
}

void QFileDialog_SetDirectoryUrl(QFileDialog* self, const QUrl* directory) {
	self->setDirectoryUrl(*directory);
}

QUrl* QFileDialog_DirectoryUrl(const QFileDialog* self) {
	return new QUrl(self->directoryUrl());
}

void QFileDialog_SelectFile(QFileDialog* self, const libqt_string filename) {
	self->selectFile(QString::fromUtf8(filename.data, filename.len));
}

libqt_list QFileDialog_SelectedFiles(const QFileDialog* self) {
	auto _ret = self->selectedFiles();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		QByteArray _b = _ret[_i].toUtf8();
		libqt_string* _str = new libqt_string();
		_str->len = _b.length();
		_str->data = static_cast<const char*>(malloc(_str->len + 1));
		memcpy((void*)_str->data, _b.data(), _str->len);
		((char*)_str->data)[_str->len] = '\0';
		_data[_i] = _str;
	}
	return _arr;
}

void QFileDialog_SelectUrl(QFileDialog* self, const QUrl* url) {
	self->selectUrl(*url);
}

libqt_list QFileDialog_SelectedUrls(const QFileDialog* self) {
	auto _ret = self->selectedUrls();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

void QFileDialog_SetNameFilter(QFileDialog* self, const libqt_string filter) {
	self->setNameFilter(QString::fromUtf8(filter.data, filter.len));
}

void QFileDialog_SetNameFilters(QFileDialog* self, const libqt_list filters) {
	self->setNameFilters(QList<QString>());
}

libqt_list QFileDialog_NameFilters(const QFileDialog* self) {
	auto _ret = self->nameFilters();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		QByteArray _b = _ret[_i].toUtf8();
		libqt_string* _str = new libqt_string();
		_str->len = _b.length();
		_str->data = static_cast<const char*>(malloc(_str->len + 1));
		memcpy((void*)_str->data, _b.data(), _str->len);
		((char*)_str->data)[_str->len] = '\0';
		_data[_i] = _str;
	}
	return _arr;
}

void QFileDialog_SelectNameFilter(QFileDialog* self, const libqt_string filter) {
	self->selectNameFilter(QString::fromUtf8(filter.data, filter.len));
}

libqt_string QFileDialog_SelectedMimeTypeFilter(const QFileDialog* self) {
	QString _ret = self->selectedMimeTypeFilter();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QFileDialog_SelectedNameFilter(const QFileDialog* self) {
	QString _ret = self->selectedNameFilter();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QFileDialog_SetMimeTypeFilters(QFileDialog* self, const libqt_list filters) {
	self->setMimeTypeFilters(QList<QString>());
}

libqt_list QFileDialog_MimeTypeFilters(const QFileDialog* self) {
	auto _ret = self->mimeTypeFilters();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		QByteArray _b = _ret[_i].toUtf8();
		libqt_string* _str = new libqt_string();
		_str->len = _b.length();
		_str->data = static_cast<const char*>(malloc(_str->len + 1));
		memcpy((void*)_str->data, _b.data(), _str->len);
		((char*)_str->data)[_str->len] = '\0';
		_data[_i] = _str;
	}
	return _arr;
}

void QFileDialog_SelectMimeTypeFilter(QFileDialog* self, const libqt_string filter) {
	self->selectMimeTypeFilter(QString::fromUtf8(filter.data, filter.len));
}

int QFileDialog_Filter(const QFileDialog* self) {
	return self->filter();
}

void QFileDialog_SetFilter(QFileDialog* self, int filters) {
	self->setFilter(static_cast<QFlags<QDir::Filter>>(filters));
}

void QFileDialog_SetViewMode(QFileDialog* self, int mode) {
	self->setViewMode(static_cast<QMdiArea::ViewMode>(mode));
}

int QFileDialog_ViewMode(const QFileDialog* self) {
	return self->viewMode();
}

void QFileDialog_SetFileMode(QFileDialog* self, int mode) {
	self->setFileMode(static_cast<QFileDialog::FileMode>(mode));
}

int QFileDialog_FileMode(const QFileDialog* self) {
	return self->fileMode();
}

void QFileDialog_SetAcceptMode(QFileDialog* self, int mode) {
	self->setAcceptMode(static_cast<QFileDialog::AcceptMode>(mode));
}

int QFileDialog_AcceptMode(const QFileDialog* self) {
	return self->acceptMode();
}

void QFileDialog_SetSidebarUrls(QFileDialog* self, const libqt_list urls) {
	self->setSidebarUrls(QList<QUrl>());
}

libqt_list QFileDialog_SidebarUrls(const QFileDialog* self) {
	auto _ret = self->sidebarUrls();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

libqt_string QFileDialog_SaveState(const QFileDialog* self) {
	QByteArray _qb = self->saveState();
	libqt_string _str;
	_str.len = _qb.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _qb.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

bool QFileDialog_RestoreState(QFileDialog* self, const libqt_string state) {
	return self->restoreState(QByteArray(state.data, state.len));
}

void QFileDialog_SetDefaultSuffix(QFileDialog* self, const libqt_string suffix) {
	self->setDefaultSuffix(QString::fromUtf8(suffix.data, suffix.len));
}

libqt_string QFileDialog_DefaultSuffix(const QFileDialog* self) {
	QString _ret = self->defaultSuffix();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QFileDialog_SetHistory(QFileDialog* self, const libqt_list paths) {
	self->setHistory(QList<QString>());
}

libqt_list QFileDialog_History(const QFileDialog* self) {
	auto _ret = self->history();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		QByteArray _b = _ret[_i].toUtf8();
		libqt_string* _str = new libqt_string();
		_str->len = _b.length();
		_str->data = static_cast<const char*>(malloc(_str->len + 1));
		memcpy((void*)_str->data, _b.data(), _str->len);
		((char*)_str->data)[_str->len] = '\0';
		_data[_i] = _str;
	}
	return _arr;
}

void QFileDialog_SetItemDelegate(QFileDialog* self, QAbstractItemDelegate* delegate) {
	self->setItemDelegate(delegate);
}

QAbstractItemDelegate* QFileDialog_ItemDelegate(const QFileDialog* self) {
	return self->itemDelegate();
}

void QFileDialog_SetIconProvider(QFileDialog* self, QAbstractFileIconProvider* provider) {
	self->setIconProvider(provider);
}

QAbstractFileIconProvider* QFileDialog_IconProvider(const QFileDialog* self) {
	return self->iconProvider();
}

void QFileDialog_SetLabelText(QFileDialog* self, int label, const libqt_string text) {
	self->setLabelText(static_cast<QFileDialog::DialogLabel>(label), QString::fromUtf8(text.data, text.len));
}

libqt_string QFileDialog_LabelText(const QFileDialog* self, int label) {
	QString _ret = self->labelText(static_cast<QFileDialog::DialogLabel>(label));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QFileDialog_SetSupportedSchemes(QFileDialog* self, const libqt_list schemes) {
	self->setSupportedSchemes(QList<QString>());
}

libqt_list QFileDialog_SupportedSchemes(const QFileDialog* self) {
	auto _ret = self->supportedSchemes();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		QByteArray _b = _ret[_i].toUtf8();
		libqt_string* _str = new libqt_string();
		_str->len = _b.length();
		_str->data = static_cast<const char*>(malloc(_str->len + 1));
		memcpy((void*)_str->data, _b.data(), _str->len);
		((char*)_str->data)[_str->len] = '\0';
		_data[_i] = _str;
	}
	return _arr;
}

void QFileDialog_SetProxyModel(QFileDialog* self, QAbstractProxyModel* model) {
	self->setProxyModel(model);
}

QAbstractProxyModel* QFileDialog_ProxyModel(const QFileDialog* self) {
	return self->proxyModel();
}

void QFileDialog_SetOption(QFileDialog* self, int option) {
	self->setOption(static_cast<QMessageBox::Option>(option));
}

bool QFileDialog_TestOption(const QFileDialog* self, int option) {
	return self->testOption(static_cast<QMessageBox::Option>(option));
}

void QFileDialog_SetOptions(QFileDialog* self, int options) {
	self->setOptions(static_cast<QFlags<QFileDialog::Option>>(options));
}

int QFileDialog_Options(const QFileDialog* self) {
	return self->options();
}

void QFileDialog_Open(QFileDialog* self, QObject* receiver, const char* member) {
	self->open(receiver, member);
}

void QFileDialog_SetVisible(QFileDialog* self, bool visible) {
	self->setVisible(visible);
}

void QFileDialog_FileSelected(QFileDialog* self, const libqt_string file) {
	self->fileSelected(QString::fromUtf8(file.data, file.len));
}

void QFileDialog_Connect_FileSelected(QFileDialog* self, intptr_t slot) {
    void (*slotFunc)(QFileDialog*, const char*) = reinterpret_cast<void (*)(QFileDialog*, const char*)>(slot);
    QFileDialog::connect(self, &QFileDialog::fileSelected, [self, slotFunc](const QString& file) {
	slotFunc(self, file);
    });
}

void QFileDialog_FilesSelected(QFileDialog* self, const libqt_list files) {
	self->filesSelected(QList<QString>());
}

void QFileDialog_Connect_FilesSelected(QFileDialog* self, intptr_t slot) {
    void (*slotFunc)(QFileDialog*, libqt_list) = reinterpret_cast<void (*)(QFileDialog*, libqt_list)>(slot);
    QFileDialog::connect(self, &QFileDialog::filesSelected, [self, slotFunc](const QList<QString>& files) {
	slotFunc(self, files);
    });
}

void QFileDialog_CurrentChanged(QFileDialog* self, const libqt_string path) {
	self->currentChanged(QString::fromUtf8(path.data, path.len));
}

void QFileDialog_Connect_CurrentChanged(QFileDialog* self, intptr_t slot) {
    void (*slotFunc)(QFileDialog*, const char*) = reinterpret_cast<void (*)(QFileDialog*, const char*)>(slot);
    QFileDialog::connect(self, &QFileDialog::currentChanged, [self, slotFunc](const QString& path) {
	slotFunc(self, path);
    });
}

void QFileDialog_DirectoryEntered(QFileDialog* self, const libqt_string directory) {
	self->directoryEntered(QString::fromUtf8(directory.data, directory.len));
}

void QFileDialog_Connect_DirectoryEntered(QFileDialog* self, intptr_t slot) {
    void (*slotFunc)(QFileDialog*, const char*) = reinterpret_cast<void (*)(QFileDialog*, const char*)>(slot);
    QFileDialog::connect(self, &QFileDialog::directoryEntered, [self, slotFunc](const QString& directory) {
	slotFunc(self, directory);
    });
}

void QFileDialog_UrlSelected(QFileDialog* self, const QUrl* url) {
	self->urlSelected(*url);
}

void QFileDialog_Connect_UrlSelected(QFileDialog* self, intptr_t slot) {
    void (*slotFunc)(QFileDialog*, const QUrl*) = reinterpret_cast<void (*)(QFileDialog*, const QUrl*)>(slot);
    QFileDialog::connect(self, &QFileDialog::urlSelected, [self, slotFunc](const QUrl& url) {
	slotFunc(self, url);
    });
}

void QFileDialog_UrlsSelected(QFileDialog* self, const libqt_list urls) {
	self->urlsSelected(QList<QUrl>());
}

void QFileDialog_Connect_UrlsSelected(QFileDialog* self, intptr_t slot) {
    void (*slotFunc)(QFileDialog*, libqt_list) = reinterpret_cast<void (*)(QFileDialog*, libqt_list)>(slot);
    QFileDialog::connect(self, &QFileDialog::urlsSelected, [self, slotFunc](const QList<QUrl>& urls) {
	slotFunc(self, urls);
    });
}

void QFileDialog_CurrentUrlChanged(QFileDialog* self, const QUrl* url) {
	self->currentUrlChanged(*url);
}

void QFileDialog_Connect_CurrentUrlChanged(QFileDialog* self, intptr_t slot) {
    void (*slotFunc)(QFileDialog*, const QUrl*) = reinterpret_cast<void (*)(QFileDialog*, const QUrl*)>(slot);
    QFileDialog::connect(self, &QFileDialog::currentUrlChanged, [self, slotFunc](const QUrl& url) {
	slotFunc(self, url);
    });
}

void QFileDialog_DirectoryUrlEntered(QFileDialog* self, const QUrl* directory) {
	self->directoryUrlEntered(*directory);
}

void QFileDialog_Connect_DirectoryUrlEntered(QFileDialog* self, intptr_t slot) {
    void (*slotFunc)(QFileDialog*, const QUrl*) = reinterpret_cast<void (*)(QFileDialog*, const QUrl*)>(slot);
    QFileDialog::connect(self, &QFileDialog::directoryUrlEntered, [self, slotFunc](const QUrl& directory) {
	slotFunc(self, directory);
    });
}

void QFileDialog_FilterSelected(QFileDialog* self, const libqt_string filter) {
	self->filterSelected(QString::fromUtf8(filter.data, filter.len));
}

void QFileDialog_Connect_FilterSelected(QFileDialog* self, intptr_t slot) {
    void (*slotFunc)(QFileDialog*, const char*) = reinterpret_cast<void (*)(QFileDialog*, const char*)>(slot);
    QFileDialog::connect(self, &QFileDialog::filterSelected, [self, slotFunc](const QString& filter) {
	slotFunc(self, filter);
    });
}

libqt_string QFileDialog_GetOpenFileName() {
	QString _ret = QFileDialog::getOpenFileName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QUrl* QFileDialog_GetOpenFileUrl() {
	return new QUrl(QFileDialog::getOpenFileUrl());
}

libqt_string QFileDialog_GetSaveFileName() {
	QString _ret = QFileDialog::getSaveFileName();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QUrl* QFileDialog_GetSaveFileUrl() {
	return new QUrl(QFileDialog::getSaveFileUrl());
}

libqt_string QFileDialog_GetExistingDirectory() {
	QString _ret = QFileDialog::getExistingDirectory();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QUrl* QFileDialog_GetExistingDirectoryUrl() {
	return new QUrl(QFileDialog::getExistingDirectoryUrl());
}

libqt_list QFileDialog_GetOpenFileNames() {
	auto _ret = QFileDialog::getOpenFileNames();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		QByteArray _b = _ret[_i].toUtf8();
		libqt_string* _str = new libqt_string();
		_str->len = _b.length();
		_str->data = static_cast<const char*>(malloc(_str->len + 1));
		memcpy((void*)_str->data, _b.data(), _str->len);
		((char*)_str->data)[_str->len] = '\0';
		_data[_i] = _str;
	}
	return _arr;
}

libqt_list QFileDialog_GetOpenFileUrls() {
	auto _ret = QFileDialog::getOpenFileUrls();
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

void QFileDialog_SaveFileContent(const libqt_string fileContent, const libqt_string fileNameHint) {
	QFileDialog::saveFileContent(QByteArray(fileContent.data, fileContent.len), QString::fromUtf8(fileNameHint.data, fileNameHint.len));
}

libqt_string QFileDialog_Tr2(const char* s, const char* c) {
	QString _ret = QFileDialog::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QFileDialog_Tr3(const char* s, const char* c, int n) {
	QString _ret = QFileDialog::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QFileDialog_SetOption2(QFileDialog* self, int option, bool on) {
	self->setOption(static_cast<QMessageBox::Option>(option), on);
}

libqt_string QFileDialog_GetOpenFileName1(QWidget* parent) {
	QString _ret = QFileDialog::getOpenFileName(parent);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QFileDialog_GetOpenFileName2(QWidget* parent, const libqt_string caption) {
	QString _ret = QFileDialog::getOpenFileName(parent, QString::fromUtf8(caption.data, caption.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QFileDialog_GetOpenFileName3(QWidget* parent, const libqt_string caption, const libqt_string dir) {
	QString _ret = QFileDialog::getOpenFileName(parent, QString::fromUtf8(caption.data, caption.len), QString::fromUtf8(dir.data, dir.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QFileDialog_GetOpenFileName4(QWidget* parent, const libqt_string caption, const libqt_string dir, const libqt_string filter) {
	QString _ret = QFileDialog::getOpenFileName(parent, QString::fromUtf8(caption.data, caption.len), QString::fromUtf8(dir.data, dir.len), QString::fromUtf8(filter.data, filter.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QFileDialog_GetOpenFileName5(QWidget* parent, const libqt_string caption, const libqt_string dir, const libqt_string filter, libqt_string selectedFilter) {
	QString _ret = QFileDialog::getOpenFileName(parent, QString::fromUtf8(caption.data, caption.len), QString::fromUtf8(dir.data, dir.len), QString::fromUtf8(filter.data, filter.len), QString::fromUtf8(selectedFilter.data, selectedFilter.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QFileDialog_GetOpenFileName6(QWidget* parent, const libqt_string caption, const libqt_string dir, const libqt_string filter, libqt_string selectedFilter, int options) {
	QString _ret = QFileDialog::getOpenFileName(parent, QString::fromUtf8(caption.data, caption.len), QString::fromUtf8(dir.data, dir.len), QString::fromUtf8(filter.data, filter.len), QString::fromUtf8(selectedFilter.data, selectedFilter.len), static_cast<QFlags<QFileDialog::Option>>(options));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QUrl* QFileDialog_GetOpenFileUrl1(QWidget* parent) {
	return new QUrl(QFileDialog::getOpenFileUrl(parent));
}

QUrl* QFileDialog_GetOpenFileUrl2(QWidget* parent, const libqt_string caption) {
	return new QUrl(QFileDialog::getOpenFileUrl(parent, QString::fromUtf8(caption.data, caption.len)));
}

QUrl* QFileDialog_GetOpenFileUrl3(QWidget* parent, const libqt_string caption, const QUrl* dir) {
	return new QUrl(QFileDialog::getOpenFileUrl(parent, QString::fromUtf8(caption.data, caption.len), *dir));
}

QUrl* QFileDialog_GetOpenFileUrl4(QWidget* parent, const libqt_string caption, const QUrl* dir, const libqt_string filter) {
	return new QUrl(QFileDialog::getOpenFileUrl(parent, QString::fromUtf8(caption.data, caption.len), *dir, QString::fromUtf8(filter.data, filter.len)));
}

QUrl* QFileDialog_GetOpenFileUrl5(QWidget* parent, const libqt_string caption, const QUrl* dir, const libqt_string filter, libqt_string selectedFilter) {
	return new QUrl(QFileDialog::getOpenFileUrl(parent, QString::fromUtf8(caption.data, caption.len), *dir, QString::fromUtf8(filter.data, filter.len), QString::fromUtf8(selectedFilter.data, selectedFilter.len)));
}

QUrl* QFileDialog_GetOpenFileUrl6(QWidget* parent, const libqt_string caption, const QUrl* dir, const libqt_string filter, libqt_string selectedFilter, int options) {
	return new QUrl(QFileDialog::getOpenFileUrl(parent, QString::fromUtf8(caption.data, caption.len), *dir, QString::fromUtf8(filter.data, filter.len), QString::fromUtf8(selectedFilter.data, selectedFilter.len), static_cast<QFlags<QFileDialog::Option>>(options)));
}

QUrl* QFileDialog_GetOpenFileUrl7(QWidget* parent, const libqt_string caption, const QUrl* dir, const libqt_string filter, libqt_string selectedFilter, int options, const libqt_list supportedSchemes) {
	return new QUrl(QFileDialog::getOpenFileUrl(parent, QString::fromUtf8(caption.data, caption.len), *dir, QString::fromUtf8(filter.data, filter.len), QString::fromUtf8(selectedFilter.data, selectedFilter.len), static_cast<QFlags<QFileDialog::Option>>(options), QList<QString>()));
}

libqt_string QFileDialog_GetSaveFileName1(QWidget* parent) {
	QString _ret = QFileDialog::getSaveFileName(parent);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QFileDialog_GetSaveFileName2(QWidget* parent, const libqt_string caption) {
	QString _ret = QFileDialog::getSaveFileName(parent, QString::fromUtf8(caption.data, caption.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QFileDialog_GetSaveFileName3(QWidget* parent, const libqt_string caption, const libqt_string dir) {
	QString _ret = QFileDialog::getSaveFileName(parent, QString::fromUtf8(caption.data, caption.len), QString::fromUtf8(dir.data, dir.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QFileDialog_GetSaveFileName4(QWidget* parent, const libqt_string caption, const libqt_string dir, const libqt_string filter) {
	QString _ret = QFileDialog::getSaveFileName(parent, QString::fromUtf8(caption.data, caption.len), QString::fromUtf8(dir.data, dir.len), QString::fromUtf8(filter.data, filter.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QFileDialog_GetSaveFileName5(QWidget* parent, const libqt_string caption, const libqt_string dir, const libqt_string filter, libqt_string selectedFilter) {
	QString _ret = QFileDialog::getSaveFileName(parent, QString::fromUtf8(caption.data, caption.len), QString::fromUtf8(dir.data, dir.len), QString::fromUtf8(filter.data, filter.len), QString::fromUtf8(selectedFilter.data, selectedFilter.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QFileDialog_GetSaveFileName6(QWidget* parent, const libqt_string caption, const libqt_string dir, const libqt_string filter, libqt_string selectedFilter, int options) {
	QString _ret = QFileDialog::getSaveFileName(parent, QString::fromUtf8(caption.data, caption.len), QString::fromUtf8(dir.data, dir.len), QString::fromUtf8(filter.data, filter.len), QString::fromUtf8(selectedFilter.data, selectedFilter.len), static_cast<QFlags<QFileDialog::Option>>(options));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QUrl* QFileDialog_GetSaveFileUrl1(QWidget* parent) {
	return new QUrl(QFileDialog::getSaveFileUrl(parent));
}

QUrl* QFileDialog_GetSaveFileUrl2(QWidget* parent, const libqt_string caption) {
	return new QUrl(QFileDialog::getSaveFileUrl(parent, QString::fromUtf8(caption.data, caption.len)));
}

QUrl* QFileDialog_GetSaveFileUrl3(QWidget* parent, const libqt_string caption, const QUrl* dir) {
	return new QUrl(QFileDialog::getSaveFileUrl(parent, QString::fromUtf8(caption.data, caption.len), *dir));
}

QUrl* QFileDialog_GetSaveFileUrl4(QWidget* parent, const libqt_string caption, const QUrl* dir, const libqt_string filter) {
	return new QUrl(QFileDialog::getSaveFileUrl(parent, QString::fromUtf8(caption.data, caption.len), *dir, QString::fromUtf8(filter.data, filter.len)));
}

QUrl* QFileDialog_GetSaveFileUrl5(QWidget* parent, const libqt_string caption, const QUrl* dir, const libqt_string filter, libqt_string selectedFilter) {
	return new QUrl(QFileDialog::getSaveFileUrl(parent, QString::fromUtf8(caption.data, caption.len), *dir, QString::fromUtf8(filter.data, filter.len), QString::fromUtf8(selectedFilter.data, selectedFilter.len)));
}

QUrl* QFileDialog_GetSaveFileUrl6(QWidget* parent, const libqt_string caption, const QUrl* dir, const libqt_string filter, libqt_string selectedFilter, int options) {
	return new QUrl(QFileDialog::getSaveFileUrl(parent, QString::fromUtf8(caption.data, caption.len), *dir, QString::fromUtf8(filter.data, filter.len), QString::fromUtf8(selectedFilter.data, selectedFilter.len), static_cast<QFlags<QFileDialog::Option>>(options)));
}

QUrl* QFileDialog_GetSaveFileUrl7(QWidget* parent, const libqt_string caption, const QUrl* dir, const libqt_string filter, libqt_string selectedFilter, int options, const libqt_list supportedSchemes) {
	return new QUrl(QFileDialog::getSaveFileUrl(parent, QString::fromUtf8(caption.data, caption.len), *dir, QString::fromUtf8(filter.data, filter.len), QString::fromUtf8(selectedFilter.data, selectedFilter.len), static_cast<QFlags<QFileDialog::Option>>(options), QList<QString>()));
}

libqt_string QFileDialog_GetExistingDirectory1(QWidget* parent) {
	QString _ret = QFileDialog::getExistingDirectory(parent);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QFileDialog_GetExistingDirectory2(QWidget* parent, const libqt_string caption) {
	QString _ret = QFileDialog::getExistingDirectory(parent, QString::fromUtf8(caption.data, caption.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QFileDialog_GetExistingDirectory3(QWidget* parent, const libqt_string caption, const libqt_string dir) {
	QString _ret = QFileDialog::getExistingDirectory(parent, QString::fromUtf8(caption.data, caption.len), QString::fromUtf8(dir.data, dir.len));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QFileDialog_GetExistingDirectory4(QWidget* parent, const libqt_string caption, const libqt_string dir, int options) {
	QString _ret = QFileDialog::getExistingDirectory(parent, QString::fromUtf8(caption.data, caption.len), QString::fromUtf8(dir.data, dir.len), static_cast<QFlags<QFileDialog::Option>>(options));
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QUrl* QFileDialog_GetExistingDirectoryUrl1(QWidget* parent) {
	return new QUrl(QFileDialog::getExistingDirectoryUrl(parent));
}

QUrl* QFileDialog_GetExistingDirectoryUrl2(QWidget* parent, const libqt_string caption) {
	return new QUrl(QFileDialog::getExistingDirectoryUrl(parent, QString::fromUtf8(caption.data, caption.len)));
}

QUrl* QFileDialog_GetExistingDirectoryUrl3(QWidget* parent, const libqt_string caption, const QUrl* dir) {
	return new QUrl(QFileDialog::getExistingDirectoryUrl(parent, QString::fromUtf8(caption.data, caption.len), *dir));
}

QUrl* QFileDialog_GetExistingDirectoryUrl4(QWidget* parent, const libqt_string caption, const QUrl* dir, int options) {
	return new QUrl(QFileDialog::getExistingDirectoryUrl(parent, QString::fromUtf8(caption.data, caption.len), *dir, static_cast<QFlags<QFileDialog::Option>>(options)));
}

QUrl* QFileDialog_GetExistingDirectoryUrl5(QWidget* parent, const libqt_string caption, const QUrl* dir, int options, const libqt_list supportedSchemes) {
	return new QUrl(QFileDialog::getExistingDirectoryUrl(parent, QString::fromUtf8(caption.data, caption.len), *dir, static_cast<QFlags<QFileDialog::Option>>(options), QList<QString>()));
}

libqt_list QFileDialog_GetOpenFileNames1(QWidget* parent) {
	auto _ret = QFileDialog::getOpenFileNames(parent);
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		QByteArray _b = _ret[_i].toUtf8();
		libqt_string* _str = new libqt_string();
		_str->len = _b.length();
		_str->data = static_cast<const char*>(malloc(_str->len + 1));
		memcpy((void*)_str->data, _b.data(), _str->len);
		((char*)_str->data)[_str->len] = '\0';
		_data[_i] = _str;
	}
	return _arr;
}

libqt_list QFileDialog_GetOpenFileNames2(QWidget* parent, const libqt_string caption) {
	auto _ret = QFileDialog::getOpenFileNames(parent, QString::fromUtf8(caption.data, caption.len));
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		QByteArray _b = _ret[_i].toUtf8();
		libqt_string* _str = new libqt_string();
		_str->len = _b.length();
		_str->data = static_cast<const char*>(malloc(_str->len + 1));
		memcpy((void*)_str->data, _b.data(), _str->len);
		((char*)_str->data)[_str->len] = '\0';
		_data[_i] = _str;
	}
	return _arr;
}

libqt_list QFileDialog_GetOpenFileNames3(QWidget* parent, const libqt_string caption, const libqt_string dir) {
	auto _ret = QFileDialog::getOpenFileNames(parent, QString::fromUtf8(caption.data, caption.len), QString::fromUtf8(dir.data, dir.len));
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		QByteArray _b = _ret[_i].toUtf8();
		libqt_string* _str = new libqt_string();
		_str->len = _b.length();
		_str->data = static_cast<const char*>(malloc(_str->len + 1));
		memcpy((void*)_str->data, _b.data(), _str->len);
		((char*)_str->data)[_str->len] = '\0';
		_data[_i] = _str;
	}
	return _arr;
}

libqt_list QFileDialog_GetOpenFileNames4(QWidget* parent, const libqt_string caption, const libqt_string dir, const libqt_string filter) {
	auto _ret = QFileDialog::getOpenFileNames(parent, QString::fromUtf8(caption.data, caption.len), QString::fromUtf8(dir.data, dir.len), QString::fromUtf8(filter.data, filter.len));
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		QByteArray _b = _ret[_i].toUtf8();
		libqt_string* _str = new libqt_string();
		_str->len = _b.length();
		_str->data = static_cast<const char*>(malloc(_str->len + 1));
		memcpy((void*)_str->data, _b.data(), _str->len);
		((char*)_str->data)[_str->len] = '\0';
		_data[_i] = _str;
	}
	return _arr;
}

libqt_list QFileDialog_GetOpenFileNames5(QWidget* parent, const libqt_string caption, const libqt_string dir, const libqt_string filter, libqt_string selectedFilter) {
	auto _ret = QFileDialog::getOpenFileNames(parent, QString::fromUtf8(caption.data, caption.len), QString::fromUtf8(dir.data, dir.len), QString::fromUtf8(filter.data, filter.len), QString::fromUtf8(selectedFilter.data, selectedFilter.len));
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		QByteArray _b = _ret[_i].toUtf8();
		libqt_string* _str = new libqt_string();
		_str->len = _b.length();
		_str->data = static_cast<const char*>(malloc(_str->len + 1));
		memcpy((void*)_str->data, _b.data(), _str->len);
		((char*)_str->data)[_str->len] = '\0';
		_data[_i] = _str;
	}
	return _arr;
}

libqt_list QFileDialog_GetOpenFileNames6(QWidget* parent, const libqt_string caption, const libqt_string dir, const libqt_string filter, libqt_string selectedFilter, int options) {
	auto _ret = QFileDialog::getOpenFileNames(parent, QString::fromUtf8(caption.data, caption.len), QString::fromUtf8(dir.data, dir.len), QString::fromUtf8(filter.data, filter.len), QString::fromUtf8(selectedFilter.data, selectedFilter.len), static_cast<QFlags<QFileDialog::Option>>(options));
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		QByteArray _b = _ret[_i].toUtf8();
		libqt_string* _str = new libqt_string();
		_str->len = _b.length();
		_str->data = static_cast<const char*>(malloc(_str->len + 1));
		memcpy((void*)_str->data, _b.data(), _str->len);
		((char*)_str->data)[_str->len] = '\0';
		_data[_i] = _str;
	}
	return _arr;
}

libqt_list QFileDialog_GetOpenFileUrls1(QWidget* parent) {
	auto _ret = QFileDialog::getOpenFileUrls(parent);
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

libqt_list QFileDialog_GetOpenFileUrls2(QWidget* parent, const libqt_string caption) {
	auto _ret = QFileDialog::getOpenFileUrls(parent, QString::fromUtf8(caption.data, caption.len));
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

libqt_list QFileDialog_GetOpenFileUrls3(QWidget* parent, const libqt_string caption, const QUrl* dir) {
	auto _ret = QFileDialog::getOpenFileUrls(parent, QString::fromUtf8(caption.data, caption.len), *dir);
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

libqt_list QFileDialog_GetOpenFileUrls4(QWidget* parent, const libqt_string caption, const QUrl* dir, const libqt_string filter) {
	auto _ret = QFileDialog::getOpenFileUrls(parent, QString::fromUtf8(caption.data, caption.len), *dir, QString::fromUtf8(filter.data, filter.len));
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

libqt_list QFileDialog_GetOpenFileUrls5(QWidget* parent, const libqt_string caption, const QUrl* dir, const libqt_string filter, libqt_string selectedFilter) {
	auto _ret = QFileDialog::getOpenFileUrls(parent, QString::fromUtf8(caption.data, caption.len), *dir, QString::fromUtf8(filter.data, filter.len), QString::fromUtf8(selectedFilter.data, selectedFilter.len));
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

libqt_list QFileDialog_GetOpenFileUrls6(QWidget* parent, const libqt_string caption, const QUrl* dir, const libqt_string filter, libqt_string selectedFilter, int options) {
	auto _ret = QFileDialog::getOpenFileUrls(parent, QString::fromUtf8(caption.data, caption.len), *dir, QString::fromUtf8(filter.data, filter.len), QString::fromUtf8(selectedFilter.data, selectedFilter.len), static_cast<QFlags<QFileDialog::Option>>(options));
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

libqt_list QFileDialog_GetOpenFileUrls7(QWidget* parent, const libqt_string caption, const QUrl* dir, const libqt_string filter, libqt_string selectedFilter, int options, const libqt_list supportedSchemes) {
	auto _ret = QFileDialog::getOpenFileUrls(parent, QString::fromUtf8(caption.data, caption.len), *dir, QString::fromUtf8(filter.data, filter.len), QString::fromUtf8(selectedFilter.data, selectedFilter.len), static_cast<QFlags<QFileDialog::Option>>(options), QList<QString>());
	libqt_list _arr;
	_arr.len = _ret.length();
	_arr.data = malloc(_arr.len * sizeof(void*));
	void** _data = static_cast<void**>(_arr.data);
	for (int _i = 0; _i < _arr.len; ++_i) {
		auto& _elem = _ret[_i];
		_data[_i] = new std::remove_reference_t<decltype(_elem)>(_elem);
	}
	return _arr;
}

void QFileDialog_SaveFileContent3(const libqt_string fileContent, const libqt_string fileNameHint, QWidget* parent) {
	QFileDialog::saveFileContent(QByteArray(fileContent.data, fileContent.len), QString::fromUtf8(fileNameHint.data, fileNameHint.len), parent);
}

// Base class handler implementation
void QFileDialog_QBaseSetVisible(QFileDialog* self, bool visible) {
	auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self);
	if (vqfiledialog && vqfiledialog->isVirtualQFileDialog) {
vqfiledialog->setQFileDialog_SetVisible_IsBase(true);
	vqfiledialog->setVisible(visible);
}
}

// Auxiliary method to allow providing re-implementation
void QFileDialog_OnSetVisible(QFileDialog* self, intptr_t slot) {
	auto* vqfiledialog = dynamic_cast<VirtualQFileDialog*>(self);
	if (vqfiledialog && vqfiledialog->isVirtualQFileDialog) {
vqfiledialog->setQFileDialog_SetVisible_Callback(reinterpret_cast<VirtualQFileDialog::QFileDialog_SetVisible_Callback>(slot));
}
}

void QFileDialog_Delete(QFileDialog* self) {
    delete self;
}

