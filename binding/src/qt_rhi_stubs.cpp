// Stub implementations for missing Qt symbols from qt6-zig-build.

#include <cstddef>
#include <cstdint>
#include <cstring>

// Bridge between Q_IMPORT_PLUGIN and qwindows.lib's exported symbols
#include <QtPlugin>

extern "C" QObject* qt_plugin_instance();
extern "C" const char* qt_plugin_query_metadata_v2(size_t*);

static QPluginMetaData qt6zig_plugin_metadata() {
    size_t len = 0;
    const char* data = qt_plugin_query_metadata_v2(&len);
    return { data, len };
}

// Provide the function that Q_IMPORT_PLUGIN(QWindowsIntegrationPlugin) expects
QStaticPlugin qt_static_plugin_QWindowsIntegrationPlugin() {
    return QStaticPlugin(qt_plugin_instance, qt6zig_plugin_metadata);
}

extern "C" {

// Also provide as explicit function callable from Zig
void qt6zig_register_platform_plugins() {}

// QBackingStoreRhiSupport stubs
int _ZN23QBackingStoreRhiSupport13checkForceRhiEP30QPlatformBackingStoreRhiConfigPN8QSurface11SurfaceTypeE(
    void*, void*) { return 0; }
int _ZN23QBackingStoreRhiSupport15apiToRhiBackendEN30QPlatformBackingStoreRhiConfig3ApiE(
    int) { return 0; }
void* _ZN23QBackingStoreRhiSupport18swapChainForWindowEP7QWindow(
    void*, void*) { return NULL; }
int _ZN23QBackingStoreRhiSupport20surfaceTypeForConfigERK30QPlatformBackingStoreRhiConfig(
    void*) { return 0; }
void _ZN23QBackingStoreRhiSupport5resetEv(void*) {}
int _ZN23QBackingStoreRhiSupport6createEv(void*) { return 0; }
void _ZN23QBackingStoreRhiSupportD1Ev(void*) {}
void _ZN23QBackingStoreRhiSupportD2Ev(void*) {}

// QBackingStoreDefaultCompositor stubs
void _ZN30QBackingStoreDefaultCompositor5flushEP21QPlatformBackingStoreP4QRhiP13QRhiSwapChainP7QWindowdRK7QRegionRK6QPointP20QPlatformTextureListb(
    void*, void*, void*, void*, void*, double, void*, void*, void*, int) {}
void _ZN30QBackingStoreDefaultCompositor5resetEv(void*) {}
void _ZN30QBackingStoreDefaultCompositorD1Ev(void*) {}
void _ZN30QBackingStoreDefaultCompositorD2Ev(void*) {}
void* _ZNK30QBackingStoreDefaultCompositor9toTextureEPK21QPlatformBackingStoreP4QRhiP23QRhiResourceUpdateBatchRK7QRegionP6QFlagsINS0_11TextureFlagEE(
    void*, void*, void*, void*, void*, void*) { return NULL; }

// GpuDescription - now compiled in qt6-zig-build

// Qt resource initialization stubs
void _Z22qInitResources_cursorsv() {}
void _Z31qInitResources_openglblacklistsv() {}
void _Z19qInitResources_qpdfv() {}
void _Z21qInitResources_qstylev() {}
void _Z26qInitResources_qmessageboxv() {}

// QPlatformScreen::staticMetaObject stub
struct FakeMetaObject {
    void* superdata; void* stringdata; void* data;
    void* static_metacall; void* relatedMetaObjects;
    void* metaTypes; void* extradata;
};
FakeMetaObject _ZN15QPlatformScreen16staticMetaObjectE = {};

// OpenGL/RHI stubs — referenced by qwindows.lib and Qt6Gui.lib
// but not defined because GLES2 RHI backend source files are not compiled.
// D3D11 is the primary backend; these stubs prevent link errors.
void* _ZN20QOpenGLStaticContext6createEb(int) { return nullptr; }
void* _ZN20QOpenGLStaticContext8opengl32E = nullptr;
void _ZN9QRhiGles2C1EP19QRhiGles2InitParamsP22QRhiGles2NativeHandles(void*, void*) {}
void _ZN9QRhiGles2C2EP19QRhiGles2InitParamsP22QRhiGles2NativeHandles(void*, void*) {}

// WinRT stubs
long WindowsCreateStringReference(const void*, unsigned int, void*, void**) { return -1; }
long RoGetActivationFactory(void*, const void*, void**) { return -1; }

} // extern "C"
