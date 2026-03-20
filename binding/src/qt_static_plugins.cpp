// Static plugin registration for Qt6 static builds.

#include <QtPlugin>
#include <cstdio>

extern "C" QObject* qt_plugin_instance();
extern "C" const char* qt_plugin_query_metadata_v2(size_t*);

static QPluginMetaData qt6zig_qwindows_metadata() {
    size_t len = 0;
    const char* data = qt_plugin_query_metadata_v2(&len);
    return { data, len };
}

extern "C" void qt6zig_register_platform_plugins() {
    static bool done = false;
    if (done) return;
    done = true;
    fprintf(stderr, "qt6zig: registering platform plugin...\n");
    QStaticPlugin sp(qt_plugin_instance, qt6zig_qwindows_metadata);
    qRegisterStaticPluginFunction(sp);
    fprintf(stderr, "qt6zig: plugin registered successfully\n");
}
