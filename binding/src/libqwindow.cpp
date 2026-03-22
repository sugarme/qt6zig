#include <QAccessibleInterface>
#include <QByteArray>
#include <QCloseEvent>
#include <QCursor>
#include <QEvent>
#include <QExposeEvent>
#include <QFocusEvent>
#include <QHideEvent>
#include <QIcon>
#include <QKeyEvent>
#include <QMargins>
#include <QMouseEvent>
#include <QMoveEvent>
#include <QObject>
#include <QPaintEvent>
#include <QPoint>
#include <QPointF>
#include <QRect>
#include <QRegion>
#include <QResizeEvent>
#include <QScreen>
#include <QShowEvent>
#include <QSize>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <type_traits>
#include <QSurface>
#include <QSurfaceFormat>
#include <QTabletEvent>
#include <QTouchEvent>
#include <QWheelEvent>
#include <QWindow>
#include <qwindow.h>
#include "libqwindow.h"
#include "libqwindow.hxx"

QWindow* QWindow_new() {
	 return new VirtualQWindow();
}

QWindow* QWindow_new2(QWindow* parent) {
	 return new VirtualQWindow(parent);
}

QWindow* QWindow_new3(QScreen* screen) {
	 return new VirtualQWindow(screen);
}

libqt_string QWindow_Tr(const char* s) {
	QString _ret = QWindow::tr(s);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QWindow_SetSurfaceType(QWindow* self, int surfaceType) {
	self->setSurfaceType(static_cast<QSurface::SurfaceType>(surfaceType));
}

int QWindow_SurfaceType(const QWindow* self) {
	return self->surfaceType();
}

bool QWindow_IsVisible(const QWindow* self) {
	return self->isVisible();
}

int QWindow_Visibility(const QWindow* self) {
	return self->visibility();
}

void QWindow_SetVisibility(QWindow* self, int v) {
	self->setVisibility(static_cast<QWindow::Visibility>(v));
}

void QWindow_Create(QWindow* self) {
	self->create();
}

uintptr_t QWindow_WinId(const QWindow* self) {
	return self->winId();
}

QWindow* QWindow_Parent(const QWindow* self) {
	return self->parent();
}

void QWindow_SetParent(QWindow* self, QWindow* parent) {
	self->setParent(parent);
}

bool QWindow_IsTopLevel(const QWindow* self) {
	return self->isTopLevel();
}

bool QWindow_IsModal(const QWindow* self) {
	return self->isModal();
}

int QWindow_Modality(const QWindow* self) {
	return self->modality();
}

void QWindow_SetModality(QWindow* self, int modality) {
	self->setModality(static_cast<Qt::WindowModality>(modality));
}

void QWindow_SetFormat(QWindow* self, const QSurfaceFormat* format) {
	self->setFormat(*format);
}

QSurfaceFormat* QWindow_Format(const QWindow* self) {
	return new QSurfaceFormat(self->format());
}

QSurfaceFormat* QWindow_RequestedFormat(const QWindow* self) {
	return new QSurfaceFormat(self->requestedFormat());
}

void QWindow_SetFlags(QWindow* self, int flags) {
	self->setFlags(static_cast<QFlags<Qt::WindowType>>(flags));
}

int QWindow_Flags(const QWindow* self) {
	return self->flags();
}

void QWindow_SetFlag(QWindow* self, int param1) {
	self->setFlag(static_cast<Qt::WindowType>(param1));
}

int QWindow_Type(const QWindow* self) {
	return self->type();
}

libqt_string QWindow_Title(const QWindow* self) {
	QString _ret = self->title();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QWindow_SetOpacity(QWindow* self, double level) {
	self->setOpacity(level);
}

double QWindow_Opacity(const QWindow* self) {
	return self->opacity();
}

void QWindow_SetMask(QWindow* self, const QRegion* region) {
	self->setMask(*region);
}

QRegion* QWindow_Mask(const QWindow* self) {
	return new QRegion(self->mask());
}

bool QWindow_IsActive(const QWindow* self) {
	return self->isActive();
}

void QWindow_ReportContentOrientationChange(QWindow* self, int orientation) {
	self->reportContentOrientationChange(static_cast<Qt::ScreenOrientation>(orientation));
}

int QWindow_ContentOrientation(const QWindow* self) {
	return self->contentOrientation();
}

double QWindow_DevicePixelRatio(const QWindow* self) {
	return self->devicePixelRatio();
}

int QWindow_WindowState(const QWindow* self) {
	return self->windowState();
}

int QWindow_WindowStates(const QWindow* self) {
	return self->windowStates();
}

void QWindow_SetWindowState(QWindow* self, int state) {
	self->setWindowState(static_cast<Qt::WindowState>(state));
}

void QWindow_SetWindowStates(QWindow* self, int states) {
	self->setWindowStates(static_cast<QFlags<Qt::WindowState>>(states));
}

void QWindow_SetTransientParent(QWindow* self, QWindow* parent) {
	self->setTransientParent(parent);
}

QWindow* QWindow_TransientParent(const QWindow* self) {
	return self->transientParent();
}

bool QWindow_IsAncestorOf(const QWindow* self, const QWindow* child) {
	return self->isAncestorOf(child);
}

bool QWindow_IsExposed(const QWindow* self) {
	return self->isExposed();
}

int QWindow_MinimumWidth(const QWindow* self) {
	return self->minimumWidth();
}

int QWindow_MinimumHeight(const QWindow* self) {
	return self->minimumHeight();
}

int QWindow_MaximumWidth(const QWindow* self) {
	return self->maximumWidth();
}

int QWindow_MaximumHeight(const QWindow* self) {
	return self->maximumHeight();
}

QSize* QWindow_MinimumSize(const QWindow* self) {
	return new QSize(self->minimumSize());
}

QSize* QWindow_MaximumSize(const QWindow* self) {
	return new QSize(self->maximumSize());
}

QSize* QWindow_BaseSize(const QWindow* self) {
	return new QSize(self->baseSize());
}

QSize* QWindow_SizeIncrement(const QWindow* self) {
	return new QSize(self->sizeIncrement());
}

void QWindow_SetMinimumSize(QWindow* self, const QSize* size) {
	self->setMinimumSize(*size);
}

void QWindow_SetMaximumSize(QWindow* self, const QSize* size) {
	self->setMaximumSize(*size);
}

void QWindow_SetBaseSize(QWindow* self, const QSize* size) {
	self->setBaseSize(*size);
}

void QWindow_SetSizeIncrement(QWindow* self, const QSize* size) {
	self->setSizeIncrement(*size);
}

QRect* QWindow_Geometry(const QWindow* self) {
	return new QRect(self->geometry());
}

QMargins* QWindow_FrameMargins(const QWindow* self) {
	return new QMargins(self->frameMargins());
}

QRect* QWindow_FrameGeometry(const QWindow* self) {
	return new QRect(self->frameGeometry());
}

QPoint* QWindow_FramePosition(const QWindow* self) {
	return new QPoint(self->framePosition());
}

void QWindow_SetFramePosition(QWindow* self, const QPoint* point) {
	self->setFramePosition(*point);
}

int QWindow_Width(const QWindow* self) {
	return self->width();
}

int QWindow_Height(const QWindow* self) {
	return self->height();
}

int QWindow_X(const QWindow* self) {
	return self->x();
}

int QWindow_Y(const QWindow* self) {
	return self->y();
}

QSize* QWindow_Size(const QWindow* self) {
	return new QSize(self->size());
}

QPoint* QWindow_Position(const QWindow* self) {
	return new QPoint(self->position());
}

void QWindow_SetPosition(QWindow* self, const QPoint* pt) {
	self->setPosition(*pt);
}

void QWindow_SetPosition2(QWindow* self, int posx, int posy) {
	self->setPosition(posx, posy);
}

void QWindow_Resize(QWindow* self, const QSize* newSize) {
	self->resize(*newSize);
}

void QWindow_Resize2(QWindow* self, int w, int h) {
	self->resize(w, h);
}

void QWindow_SetFilePath(QWindow* self, const libqt_string filePath) {
	self->setFilePath(QString::fromUtf8(filePath.data, filePath.len));
}

libqt_string QWindow_FilePath(const QWindow* self) {
	QString _ret = self->filePath();
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

void QWindow_SetIcon(QWindow* self, const QIcon* icon) {
	self->setIcon(*icon);
}

QIcon* QWindow_Icon(const QWindow* self) {
	return new QIcon(self->icon());
}

void QWindow_Destroy(QWindow* self) {
	self->destroy();
}

bool QWindow_SetKeyboardGrabEnabled(QWindow* self, bool grab) {
	return self->setKeyboardGrabEnabled(grab);
}

bool QWindow_SetMouseGrabEnabled(QWindow* self, bool grab) {
	return self->setMouseGrabEnabled(grab);
}

QScreen* QWindow_Screen(const QWindow* self) {
	return self->screen();
}

void QWindow_SetScreen(QWindow* self, QScreen* screen) {
	self->setScreen(screen);
}

QAccessibleInterface* QWindow_AccessibleRoot(const QWindow* self) {
	return self->accessibleRoot();
}

QObject* QWindow_FocusObject(const QWindow* self) {
	return self->focusObject();
}

QPointF* QWindow_MapToGlobal(const QWindow* self, const QPointF* pos) {
	return new QPointF(self->mapToGlobal(*pos));
}

QPointF* QWindow_MapFromGlobal(const QWindow* self, const QPointF* pos) {
	return new QPointF(self->mapFromGlobal(*pos));
}

QPoint* QWindow_MapToGlobal2(const QWindow* self, const QPoint* pos) {
	return new QPoint(self->mapToGlobal(*pos));
}

QPoint* QWindow_MapFromGlobal2(const QWindow* self, const QPoint* pos) {
	return new QPoint(self->mapFromGlobal(*pos));
}

QCursor* QWindow_Cursor(const QWindow* self) {
	return new QCursor(self->cursor());
}

void QWindow_SetCursor(QWindow* self, const QCursor* cursor) {
	self->setCursor(*cursor);
}

void QWindow_UnsetCursor(QWindow* self) {
	self->unsetCursor();
}

QWindow* QWindow_FromWinId(uintptr_t id) {
	return QWindow::fromWinId(id);
}

void QWindow_RequestActivate(QWindow* self) {
	self->requestActivate();
}

void QWindow_SetVisible(QWindow* self, bool visible) {
	self->setVisible(visible);
}

void QWindow_Show(QWindow* self) {
	self->show();
}

void QWindow_Hide(QWindow* self) {
	self->hide();
}

void QWindow_ShowMinimized(QWindow* self) {
	self->showMinimized();
}

void QWindow_ShowMaximized(QWindow* self) {
	self->showMaximized();
}

void QWindow_ShowFullScreen(QWindow* self) {
	self->showFullScreen();
}

void QWindow_ShowNormal(QWindow* self) {
	self->showNormal();
}

bool QWindow_Close(QWindow* self) {
	return self->close();
}

void QWindow_Raise(QWindow* self) {
	self->raise();
}

void QWindow_Lower(QWindow* self) {
	self->lower();
}

bool QWindow_StartSystemResize(QWindow* self, int edges) {
	return self->startSystemResize(static_cast<QFlags<Qt::Edge>>(edges));
}

bool QWindow_StartSystemMove(QWindow* self) {
	return self->startSystemMove();
}

void QWindow_SetTitle(QWindow* self, const libqt_string title) {
	self->setTitle(QString::fromUtf8(title.data, title.len));
}

void QWindow_SetX(QWindow* self, int arg) {
	self->setX(arg);
}

void QWindow_SetY(QWindow* self, int arg) {
	self->setY(arg);
}

void QWindow_SetWidth(QWindow* self, int arg) {
	self->setWidth(arg);
}

void QWindow_SetHeight(QWindow* self, int arg) {
	self->setHeight(arg);
}

void QWindow_SetGeometry(QWindow* self, int posx, int posy, int w, int h) {
	self->setGeometry(posx, posy, w, h);
}

void QWindow_SetGeometry2(QWindow* self, const QRect* rect) {
	self->setGeometry(*rect);
}

void QWindow_SetMinimumWidth(QWindow* self, int w) {
	self->setMinimumWidth(w);
}

void QWindow_SetMinimumHeight(QWindow* self, int h) {
	self->setMinimumHeight(h);
}

void QWindow_SetMaximumWidth(QWindow* self, int w) {
	self->setMaximumWidth(w);
}

void QWindow_SetMaximumHeight(QWindow* self, int h) {
	self->setMaximumHeight(h);
}

void QWindow_Alert(QWindow* self, int msec) {
	self->alert(msec);
}

void QWindow_RequestUpdate(QWindow* self) {
	self->requestUpdate();
}

void QWindow_ScreenChanged(QWindow* self, QScreen* screen) {
	self->screenChanged(screen);
}

void QWindow_Connect_ScreenChanged(QWindow* self, intptr_t slot) {
    void (*slotFunc)(QWindow*, QScreen*) = reinterpret_cast<void (*)(QWindow*, QScreen*)>(slot);
    QWindow::connect(self, &QWindow::screenChanged, [self, slotFunc](QScreen* screen) {
	slotFunc(self, screen);
    });
}

void QWindow_ModalityChanged(QWindow* self, int modality) {
	self->modalityChanged(static_cast<Qt::WindowModality>(modality));
}

void QWindow_Connect_ModalityChanged(QWindow* self, intptr_t slot) {
    void (*slotFunc)(QWindow*, int) = reinterpret_cast<void (*)(QWindow*, int)>(slot);
    QWindow::connect(self, &QWindow::modalityChanged, [self, slotFunc](Qt::WindowModality modality) {
	slotFunc(self, modality);
    });
}

void QWindow_WindowStateChanged(QWindow* self, int windowState) {
	self->windowStateChanged(static_cast<Qt::WindowState>(windowState));
}

void QWindow_Connect_WindowStateChanged(QWindow* self, intptr_t slot) {
    void (*slotFunc)(QWindow*, int) = reinterpret_cast<void (*)(QWindow*, int)>(slot);
    QWindow::connect(self, &QWindow::windowStateChanged, [self, slotFunc](Qt::WindowState windowState) {
	slotFunc(self, windowState);
    });
}

void QWindow_WindowTitleChanged(QWindow* self, const libqt_string title) {
	self->windowTitleChanged(QString::fromUtf8(title.data, title.len));
}

void QWindow_Connect_WindowTitleChanged(QWindow* self, intptr_t slot) {
    void (*slotFunc)(QWindow*, const char*) = reinterpret_cast<void (*)(QWindow*, const char*)>(slot);
    QWindow::connect(self, &QWindow::windowTitleChanged, [self, slotFunc](const QString& title) {
	slotFunc(self, title);
    });
}

void QWindow_XChanged(QWindow* self, int arg) {
	self->xChanged(arg);
}

void QWindow_Connect_XChanged(QWindow* self, intptr_t slot) {
    void (*slotFunc)(QWindow*, int) = reinterpret_cast<void (*)(QWindow*, int)>(slot);
    QWindow::connect(self, &QWindow::xChanged, [self, slotFunc](int arg) {
	slotFunc(self, arg);
    });
}

void QWindow_YChanged(QWindow* self, int arg) {
	self->yChanged(arg);
}

void QWindow_Connect_YChanged(QWindow* self, intptr_t slot) {
    void (*slotFunc)(QWindow*, int) = reinterpret_cast<void (*)(QWindow*, int)>(slot);
    QWindow::connect(self, &QWindow::yChanged, [self, slotFunc](int arg) {
	slotFunc(self, arg);
    });
}

void QWindow_WidthChanged(QWindow* self, int arg) {
	self->widthChanged(arg);
}

void QWindow_Connect_WidthChanged(QWindow* self, intptr_t slot) {
    void (*slotFunc)(QWindow*, int) = reinterpret_cast<void (*)(QWindow*, int)>(slot);
    QWindow::connect(self, &QWindow::widthChanged, [self, slotFunc](int arg) {
	slotFunc(self, arg);
    });
}

void QWindow_HeightChanged(QWindow* self, int arg) {
	self->heightChanged(arg);
}

void QWindow_Connect_HeightChanged(QWindow* self, intptr_t slot) {
    void (*slotFunc)(QWindow*, int) = reinterpret_cast<void (*)(QWindow*, int)>(slot);
    QWindow::connect(self, &QWindow::heightChanged, [self, slotFunc](int arg) {
	slotFunc(self, arg);
    });
}

void QWindow_MinimumWidthChanged(QWindow* self, int arg) {
	self->minimumWidthChanged(arg);
}

void QWindow_Connect_MinimumWidthChanged(QWindow* self, intptr_t slot) {
    void (*slotFunc)(QWindow*, int) = reinterpret_cast<void (*)(QWindow*, int)>(slot);
    QWindow::connect(self, &QWindow::minimumWidthChanged, [self, slotFunc](int arg) {
	slotFunc(self, arg);
    });
}

void QWindow_MinimumHeightChanged(QWindow* self, int arg) {
	self->minimumHeightChanged(arg);
}

void QWindow_Connect_MinimumHeightChanged(QWindow* self, intptr_t slot) {
    void (*slotFunc)(QWindow*, int) = reinterpret_cast<void (*)(QWindow*, int)>(slot);
    QWindow::connect(self, &QWindow::minimumHeightChanged, [self, slotFunc](int arg) {
	slotFunc(self, arg);
    });
}

void QWindow_MaximumWidthChanged(QWindow* self, int arg) {
	self->maximumWidthChanged(arg);
}

void QWindow_Connect_MaximumWidthChanged(QWindow* self, intptr_t slot) {
    void (*slotFunc)(QWindow*, int) = reinterpret_cast<void (*)(QWindow*, int)>(slot);
    QWindow::connect(self, &QWindow::maximumWidthChanged, [self, slotFunc](int arg) {
	slotFunc(self, arg);
    });
}

void QWindow_MaximumHeightChanged(QWindow* self, int arg) {
	self->maximumHeightChanged(arg);
}

void QWindow_Connect_MaximumHeightChanged(QWindow* self, intptr_t slot) {
    void (*slotFunc)(QWindow*, int) = reinterpret_cast<void (*)(QWindow*, int)>(slot);
    QWindow::connect(self, &QWindow::maximumHeightChanged, [self, slotFunc](int arg) {
	slotFunc(self, arg);
    });
}

void QWindow_VisibleChanged(QWindow* self, bool arg) {
	self->visibleChanged(arg);
}

void QWindow_Connect_VisibleChanged(QWindow* self, intptr_t slot) {
    void (*slotFunc)(QWindow*, bool) = reinterpret_cast<void (*)(QWindow*, bool)>(slot);
    QWindow::connect(self, &QWindow::visibleChanged, [self, slotFunc](bool arg) {
	slotFunc(self, arg);
    });
}

void QWindow_VisibilityChanged(QWindow* self, int visibility) {
	self->visibilityChanged(static_cast<QWindow::Visibility>(visibility));
}

void QWindow_Connect_VisibilityChanged(QWindow* self, intptr_t slot) {
    void (*slotFunc)(QWindow*, int) = reinterpret_cast<void (*)(QWindow*, int)>(slot);
    QWindow::connect(self, &QWindow::visibilityChanged, [self, slotFunc](QWindow::Visibility visibility) {
	slotFunc(self, visibility);
    });
}

void QWindow_ActiveChanged(QWindow* self) {
	self->activeChanged();
}

void QWindow_Connect_ActiveChanged(QWindow* self, intptr_t slot) {
    void (*slotFunc)(QWindow*) = reinterpret_cast<void (*)(QWindow*)>(slot);
    QWindow::connect(self, &QWindow::activeChanged, [self, slotFunc]() {
	slotFunc(self);
    });
}

void QWindow_ContentOrientationChanged(QWindow* self, int orientation) {
	self->contentOrientationChanged(static_cast<Qt::ScreenOrientation>(orientation));
}

void QWindow_Connect_ContentOrientationChanged(QWindow* self, intptr_t slot) {
    void (*slotFunc)(QWindow*, int) = reinterpret_cast<void (*)(QWindow*, int)>(slot);
    QWindow::connect(self, &QWindow::contentOrientationChanged, [self, slotFunc](Qt::ScreenOrientation orientation) {
	slotFunc(self, orientation);
    });
}

void QWindow_FocusObjectChanged(QWindow* self, QObject* object) {
	self->focusObjectChanged(object);
}

void QWindow_Connect_FocusObjectChanged(QWindow* self, intptr_t slot) {
    void (*slotFunc)(QWindow*, QObject*) = reinterpret_cast<void (*)(QWindow*, QObject*)>(slot);
    QWindow::connect(self, &QWindow::focusObjectChanged, [self, slotFunc](QObject* object) {
	slotFunc(self, object);
    });
}

void QWindow_OpacityChanged(QWindow* self, double opacity) {
	self->opacityChanged(opacity);
}

void QWindow_Connect_OpacityChanged(QWindow* self, intptr_t slot) {
    void (*slotFunc)(QWindow*, double) = reinterpret_cast<void (*)(QWindow*, double)>(slot);
    QWindow::connect(self, &QWindow::opacityChanged, [self, slotFunc](qreal opacity) {
	slotFunc(self, opacity);
    });
}

void QWindow_TransientParentChanged(QWindow* self, QWindow* transientParent) {
	self->transientParentChanged(transientParent);
}

void QWindow_Connect_TransientParentChanged(QWindow* self, intptr_t slot) {
    void (*slotFunc)(QWindow*, QWindow*) = reinterpret_cast<void (*)(QWindow*, QWindow*)>(slot);
    QWindow::connect(self, &QWindow::transientParentChanged, [self, slotFunc](QWindow* transientParent) {
	slotFunc(self, transientParent);
    });
}

libqt_string QWindow_Tr2(const char* s, const char* c) {
	QString _ret = QWindow::tr(s, c);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

libqt_string QWindow_Tr3(const char* s, const char* c, int n) {
	QString _ret = QWindow::tr(s, c, n);
	QByteArray _b = _ret.toUtf8();
	libqt_string _str;
	_str.len = _b.length();
	_str.data = static_cast<const char*>(malloc(_str.len + 1));
	memcpy((void*)_str.data, _b.data(), _str.len);
	((char*)_str.data)[_str.len] = '\0';
	return _str;
}

QWindow* QWindow_Parent1(const QWindow* self, int mode) {
	return self->parent(static_cast<QWindow::AncestorMode>(mode));
}

void QWindow_SetFlag2(QWindow* self, int param1, bool on) {
	self->setFlag(static_cast<Qt::WindowType>(param1), on);
}

bool QWindow_IsAncestorOf2(const QWindow* self, const QWindow* child, int mode) {
	return self->isAncestorOf(child, static_cast<QWindow::AncestorMode>(mode));
}

// Base class handler implementation
int QWindow_QBaseSurfaceType(const QWindow* self) {
	auto* vqwindow = dynamic_cast<const VirtualQWindow*>(self);
	if (vqwindow && vqwindow->isVirtualQWindow) {
vqwindow->setQWindow_SurfaceType_IsBase(true);
	return vqwindow->surfaceType();
}
}

// Auxiliary method to allow providing re-implementation
void QWindow_OnSurfaceType(const QWindow* self, intptr_t slot) {
	auto* vqwindow = dynamic_cast<const VirtualQWindow*>(self);
	if (vqwindow && vqwindow->isVirtualQWindow) {
vqwindow->setQWindow_SurfaceType_Callback(reinterpret_cast<VirtualQWindow::QWindow_SurfaceType_Callback>(slot));
}
}

// Base class handler implementation
QSurfaceFormat* QWindow_QBaseFormat(const QWindow* self) {
	auto* vqwindow = dynamic_cast<const VirtualQWindow*>(self);
	if (vqwindow && vqwindow->isVirtualQWindow) {
vqwindow->setQWindow_Format_IsBase(true);
	return new QSurfaceFormat(vqwindow->format());
}
}

// Auxiliary method to allow providing re-implementation
void QWindow_OnFormat(const QWindow* self, intptr_t slot) {
	auto* vqwindow = dynamic_cast<const VirtualQWindow*>(self);
	if (vqwindow && vqwindow->isVirtualQWindow) {
vqwindow->setQWindow_Format_Callback(reinterpret_cast<VirtualQWindow::QWindow_Format_Callback>(slot));
}
}

// Base class handler implementation
QSize* QWindow_QBaseSize(const QWindow* self) {
	auto* vqwindow = dynamic_cast<const VirtualQWindow*>(self);
	if (vqwindow && vqwindow->isVirtualQWindow) {
vqwindow->setQWindow_Size_IsBase(true);
	return new QSize(vqwindow->size());
}
}

// Auxiliary method to allow providing re-implementation
void QWindow_OnSize(const QWindow* self, intptr_t slot) {
	auto* vqwindow = dynamic_cast<const VirtualQWindow*>(self);
	if (vqwindow && vqwindow->isVirtualQWindow) {
vqwindow->setQWindow_Size_Callback(reinterpret_cast<VirtualQWindow::QWindow_Size_Callback>(slot));
}
}

// Base class handler implementation
QAccessibleInterface* QWindow_QBaseAccessibleRoot(const QWindow* self) {
	auto* vqwindow = dynamic_cast<const VirtualQWindow*>(self);
	if (vqwindow && vqwindow->isVirtualQWindow) {
vqwindow->setQWindow_AccessibleRoot_IsBase(true);
	return vqwindow->accessibleRoot();
}
}

// Auxiliary method to allow providing re-implementation
void QWindow_OnAccessibleRoot(const QWindow* self, intptr_t slot) {
	auto* vqwindow = dynamic_cast<const VirtualQWindow*>(self);
	if (vqwindow && vqwindow->isVirtualQWindow) {
vqwindow->setQWindow_AccessibleRoot_Callback(reinterpret_cast<VirtualQWindow::QWindow_AccessibleRoot_Callback>(slot));
}
}

// Base class handler implementation
QObject* QWindow_QBaseFocusObject(const QWindow* self) {
	auto* vqwindow = dynamic_cast<const VirtualQWindow*>(self);
	if (vqwindow && vqwindow->isVirtualQWindow) {
vqwindow->setQWindow_FocusObject_IsBase(true);
	return vqwindow->focusObject();
}
}

// Auxiliary method to allow providing re-implementation
void QWindow_OnFocusObject(const QWindow* self, intptr_t slot) {
	auto* vqwindow = dynamic_cast<const VirtualQWindow*>(self);
	if (vqwindow && vqwindow->isVirtualQWindow) {
vqwindow->setQWindow_FocusObject_Callback(reinterpret_cast<VirtualQWindow::QWindow_FocusObject_Callback>(slot));
}
}

void QWindow_Delete(QWindow* self) {
    delete self;
}

