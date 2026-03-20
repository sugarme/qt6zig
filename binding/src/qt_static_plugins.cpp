// Static plugin registration for Qt6 static builds.
// Must be called before QApplication is created.

#include <QtPlugin>

// Symbols exported by qwindows.lib
extern "C" QObject *qt_plugin_instance();
extern "C" const char *qt_plugin_query_metadata_v2(size_t *len);

static QPluginMetaData qt_plugin_metadata_wrapper() {
    size_t len = 0;
    const char *data = qt_plugin_query_metadata_v2(&len);
    return { data, len };
}

extern "C" void qt6zig_register_platform_plugins() {
    static bool registered = false;
    if (registered) return;
    registered = true;
    QStaticPlugin sp(qt_plugin_instance, qt_plugin_metadata_wrapper);
    qRegisterStaticPluginFunction(sp);
}
