// Static plugin registration for Qt6 static builds.
// When Qt is linked statically, platform plugins must be explicitly imported.

#include <QtPlugin>

// Register the Windows platform plugin
Q_IMPORT_PLUGIN(QWindowsIntegrationPlugin)
