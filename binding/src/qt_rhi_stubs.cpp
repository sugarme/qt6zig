// Stub implementations for QBackingStoreRhiSupport and QBackingStoreDefaultCompositor.
// These are Qt private RHI classes whose source files are not included in qt6-zig-build.
// Stubs provide no-op implementations - software rendering still works fine.

#include <cstddef>
#include <cstdint>

// Provide exact symbols using their mangled names
extern "C" {

// QBackingStoreRhiSupport::checkForceRhi(QPlatformBackingStoreRhiConfig*, QSurface::SurfaceType*)
int _ZN23QBackingStoreRhiSupport13checkForceRhiEP30QPlatformBackingStoreRhiConfigPN8QSurface11SurfaceTypeE(
    void*, void*) { return 0; }

// QBackingStoreRhiSupport::apiToRhiBackend(QPlatformBackingStoreRhiConfig::Api)
int _ZN23QBackingStoreRhiSupport15apiToRhiBackendEN30QPlatformBackingStoreRhiConfig3ApiE(
    int) { return 0; }

// QBackingStoreRhiSupport::swapChainForWindow(QWindow*)
void* _ZN23QBackingStoreRhiSupport18swapChainForWindowEP7QWindow(
    void*, void*) { return NULL; }

// QBackingStoreRhiSupport::surfaceTypeForConfig(QPlatformBackingStoreRhiConfig const&)
int _ZN23QBackingStoreRhiSupport20surfaceTypeForConfigERK30QPlatformBackingStoreRhiConfig(
    void*) { return 0; }

// QBackingStoreRhiSupport::reset()
void _ZN23QBackingStoreRhiSupport5resetEv(void*) {}

// QBackingStoreRhiSupport::create()
int _ZN23QBackingStoreRhiSupport6createEv(void*) { return 0; }

// QBackingStoreRhiSupport::~QBackingStoreRhiSupport()
void _ZN23QBackingStoreRhiSupportD1Ev(void*) {}
void _ZN23QBackingStoreRhiSupportD2Ev(void*) {}

// QBackingStoreDefaultCompositor::flush(...)
void _ZN30QBackingStoreDefaultCompositor5flushEP21QPlatformBackingStoreP4QRhiP13QRhiSwapChainP7QWindowdRK7QRegionRK6QPointP20QPlatformTextureListb(
    void*, void*, void*, void*, void*, double, void*, void*, void*, int) {}

// QBackingStoreDefaultCompositor::reset()
void _ZN30QBackingStoreDefaultCompositor5resetEv(void*) {}

// QBackingStoreDefaultCompositor::~QBackingStoreDefaultCompositor()
void _ZN30QBackingStoreDefaultCompositorD1Ev(void*) {}
void _ZN30QBackingStoreDefaultCompositorD2Ev(void*) {}

// QBackingStoreDefaultCompositor::toTexture(...)
void* _ZNK30QBackingStoreDefaultCompositor9toTextureEPK21QPlatformBackingStoreP4QRhiP23QRhiResourceUpdateBatchRK7QRegionP6QFlagsINS0_11TextureFlagEE(
    void*, void*, void*, void*, void*, void*) { return NULL; }

// GpuDescription stubs
struct GpuDescription { int vendorId; int deviceId; int revision; };
GpuDescription _ZN14GpuDescription6detectEv() { return {}; }
void* _ZN14GpuDescription9detectAllEv() { return nullptr; }
int _ZNK14GpuDescription9toVariantEv(void*) { return 0; }

// Qt resource initialization stubs
void _Z22qInitResources_cursorsv() {}
void _Z31qInitResources_openglblacklistsv() {}
void _Z19qInitResources_qpdfv() {}
void _Z21qInitResources_qstylev() {}
void _Z26qInitResources_qmessageboxv() {}

// QPlatformScreen::staticMetaObject stub
// This is a QMetaObject struct - provide a minimal one
#include <cstring>
struct FakeMetaObject {
    void* superdata;
    void* stringdata;
    void* data;
    void* static_metacall;
    void* relatedMetaObjects;
    void* metaTypes;
    void* extradata;
};
FakeMetaObject _ZN15QPlatformScreen16staticMetaObjectE = {};

// WinRT stubs
long WindowsCreateStringReference(const void*, unsigned int, void*, void**) { return -1; }
long RoGetActivationFactory(void*, const void*, void**) { return -1; }

} // extern "C"
