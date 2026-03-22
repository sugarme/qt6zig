const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qguiapplication.html
pub const qguiapplication = struct {

    /// New constructs a new QGuiApplication object.
    pub fn New(argc: *i32, argv: []const u8) QtC.QGuiApplication {
        return qtc.QGuiApplication_new(@ptrCast(argc), @ptrCast(argv));
    }


    /// New2 constructs a new QGuiApplication object.
    pub fn New2(argc: *i32, argv: []const u8, param3: i32) QtC.QGuiApplication {
        return qtc.QGuiApplication_new2(@ptrCast(argc), @ptrCast(argv), param3);
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGuiApplication_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qguiapplication.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetApplicationDisplayName(name: []const u8) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
qtc.QGuiApplication_SetApplicationDisplayName(name_str);
    }

    pub fn ApplicationDisplayName(, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGuiApplication_ApplicationDisplayName();
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qguiapplication.ApplicationDisplayName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetBadgeNumber(self: ?*anyopaque, number: i64) void {
        qtc.QGuiApplication_SetBadgeNumber(@ptrCast(self), number);
    }

    pub fn SetDesktopFileName(name: []const u8) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
qtc.QGuiApplication_SetDesktopFileName(name_str);
    }

    pub fn DesktopFileName(, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGuiApplication_DesktopFileName();
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qguiapplication.DesktopFileName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn AllWindows() []const u8 {
        return qtc.QGuiApplication_AllWindows();
    }

    pub fn TopLevelWindows() []const u8 {
        return qtc.QGuiApplication_TopLevelWindows();
    }

    pub fn TopLevelAt(pos: ?*anyopaque) QtC.QWindow {
        return qtc.QGuiApplication_TopLevelAt(@ptrCast(pos));
    }

    pub fn SetWindowIcon(icon: ?*anyopaque) void {
        qtc.QGuiApplication_SetWindowIcon(@ptrCast(icon));
    }

    pub fn WindowIcon() QtC.QIcon {
        return qtc.QGuiApplication_WindowIcon();
    }

    pub fn PlatformName(, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGuiApplication_PlatformName();
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qguiapplication.PlatformName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ModalWindow() QtC.QWindow {
        return qtc.QGuiApplication_ModalWindow();
    }

    pub fn FocusWindow() QtC.QWindow {
        return qtc.QGuiApplication_FocusWindow();
    }

    pub fn FocusObject() QtC.QObject {
        return qtc.QGuiApplication_FocusObject();
    }

    pub fn PrimaryScreen() QtC.QScreen {
        return qtc.QGuiApplication_PrimaryScreen();
    }

    pub fn Screens() []const u8 {
        return qtc.QGuiApplication_Screens();
    }

    pub fn ScreenAt(point: ?*anyopaque) QtC.QScreen {
        return qtc.QGuiApplication_ScreenAt(@ptrCast(point));
    }

    pub fn DevicePixelRatio(self: ?*anyopaque, ) f64 {
        return qtc.QGuiApplication_DevicePixelRatio(@ptrCast(self));
    }

    pub fn OverrideCursor() QtC.QCursor {
        return qtc.QGuiApplication_OverrideCursor();
    }

    pub fn SetOverrideCursor(overrideCursor: ?*anyopaque) void {
        qtc.QGuiApplication_SetOverrideCursor(@ptrCast(overrideCursor));
    }

    pub fn ChangeOverrideCursor(param1: ?*anyopaque) void {
        qtc.QGuiApplication_ChangeOverrideCursor(@ptrCast(param1));
    }

    pub fn RestoreOverrideCursor() void {
        qtc.QGuiApplication_RestoreOverrideCursor();
    }

    pub fn Font() QtC.QFont {
        return qtc.QGuiApplication_Font();
    }

    pub fn SetFont(font: ?*anyopaque) void {
        qtc.QGuiApplication_SetFont(@ptrCast(font));
    }

    pub fn Clipboard() QtC.QClipboard {
        return qtc.QGuiApplication_Clipboard();
    }

    pub fn Palette() QtC.QPalette {
        return qtc.QGuiApplication_Palette();
    }

    pub fn SetPalette(pal: ?*anyopaque) void {
        qtc.QGuiApplication_SetPalette(@ptrCast(pal));
    }

    pub fn KeyboardModifiers() i64 {
        return qtc.QGuiApplication_KeyboardModifiers();
    }

    pub fn QueryKeyboardModifiers() i64 {
        return qtc.QGuiApplication_QueryKeyboardModifiers();
    }

    pub fn MouseButtons() i64 {
        return qtc.QGuiApplication_MouseButtons();
    }

    pub fn SetLayoutDirection(direction: i32) void {
        qtc.QGuiApplication_SetLayoutDirection(@intCast(direction));
    }

    pub fn LayoutDirection() i32 {
        return qtc.QGuiApplication_LayoutDirection();
    }

    pub fn IsRightToLeft() bool {
        return qtc.QGuiApplication_IsRightToLeft();
    }

    pub fn IsLeftToRight() bool {
        return qtc.QGuiApplication_IsLeftToRight();
    }

    pub fn StyleHints() QtC.QStyleHints {
        return qtc.QGuiApplication_StyleHints();
    }

    pub fn SetDesktopSettingsAware(on: bool) void {
        qtc.QGuiApplication_SetDesktopSettingsAware(on);
    }

    pub fn DesktopSettingsAware() bool {
        return qtc.QGuiApplication_DesktopSettingsAware();
    }

    pub fn InputMethod() QtC.QInputMethod {
        return qtc.QGuiApplication_InputMethod();
    }

    pub fn PlatformNativeInterface() QPlatformNativeInterface {
        return @ptrCast(qtc.QGuiApplication_PlatformNativeInterface());
    }

    pub fn SetQuitOnLastWindowClosed(quit: bool) void {
        qtc.QGuiApplication_SetQuitOnLastWindowClosed(quit);
    }

    pub fn QuitOnLastWindowClosed() bool {
        return qtc.QGuiApplication_QuitOnLastWindowClosed();
    }

    pub fn ApplicationState() i32 {
        return qtc.QGuiApplication_ApplicationState();
    }

    pub fn SetHighDpiScaleFactorRoundingPolicy(policy: i32) void {
        qtc.QGuiApplication_SetHighDpiScaleFactorRoundingPolicy(@intCast(policy));
    }

    pub fn HighDpiScaleFactorRoundingPolicy() i32 {
        return qtc.QGuiApplication_HighDpiScaleFactorRoundingPolicy();
    }

    pub fn Exec() i32 {
        return qtc.QGuiApplication_Exec();
    }

    pub fn Notify(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) bool {
        return qtc.QGuiApplication_Notify(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Allows for overriding the related default method
    pub fn OnNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGuiApplication_OnNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseNotify(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) bool {
        return qtc.QGuiApplication_QBaseNotify(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    pub fn IsSessionRestored(self: ?*anyopaque, ) bool {
        return qtc.QGuiApplication_IsSessionRestored(@ptrCast(self));
    }

    pub fn SessionId(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGuiApplication_SessionId(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qguiapplication.SessionId: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SessionKey(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGuiApplication_SessionKey(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qguiapplication.SessionKey: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn IsSavingSession(self: ?*anyopaque, ) bool {
        return qtc.QGuiApplication_IsSavingSession(@ptrCast(self));
    }

    pub fn ResolveInterface(self: ?*anyopaque, name: []const u8, revision: i32) ?*anyopaque {
        return qtc.QGuiApplication_ResolveInterface(@ptrCast(self), @ptrCast(name), revision);
    }

    pub fn OnResolveInterface(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_ResolveInterface(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Allows for overriding the related default method
    pub fn OnResolveInterface(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i32) callconv(.c) ?*anyopaque) void {
        qtc.QGuiApplication_OnResolveInterface(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseResolveInterface(self: ?*anyopaque, name: []const u8, revision: i32) ?*anyopaque {
        return qtc.QGuiApplication_QBaseResolveInterface(@ptrCast(self), @ptrCast(name), revision);
    }

    pub fn Sync() void {
        qtc.QGuiApplication_Sync();
    }

    pub fn FontDatabaseChanged(self: ?*anyopaque, ) void {
        qtc.QGuiApplication_FontDatabaseChanged(@ptrCast(self));
    }

    pub fn OnFontDatabaseChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_FontDatabaseChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ScreenAdded(self: ?*anyopaque, screen: ?*anyopaque) void {
        qtc.QGuiApplication_ScreenAdded(@ptrCast(self), @ptrCast(screen));
    }

    pub fn OnScreenAdded(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_ScreenAdded(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ScreenRemoved(self: ?*anyopaque, screen: ?*anyopaque) void {
        qtc.QGuiApplication_ScreenRemoved(@ptrCast(self), @ptrCast(screen));
    }

    pub fn OnScreenRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_ScreenRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn PrimaryScreenChanged(self: ?*anyopaque, screen: ?*anyopaque) void {
        qtc.QGuiApplication_PrimaryScreenChanged(@ptrCast(self), @ptrCast(screen));
    }

    pub fn OnPrimaryScreenChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_PrimaryScreenChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LastWindowClosed(self: ?*anyopaque, ) void {
        qtc.QGuiApplication_LastWindowClosed(@ptrCast(self));
    }

    pub fn OnLastWindowClosed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_LastWindowClosed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn FocusObjectChanged(self: ?*anyopaque, focusObject: ?*anyopaque) void {
        qtc.QGuiApplication_FocusObjectChanged(@ptrCast(self), @ptrCast(focusObject));
    }

    pub fn OnFocusObjectChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_FocusObjectChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn FocusWindowChanged(self: ?*anyopaque, focusWindow: ?*anyopaque) void {
        qtc.QGuiApplication_FocusWindowChanged(@ptrCast(self), @ptrCast(focusWindow));
    }

    pub fn OnFocusWindowChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_FocusWindowChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ApplicationStateChanged(self: ?*anyopaque, state: i32) void {
        qtc.QGuiApplication_ApplicationStateChanged(@ptrCast(self), @intCast(state));
    }

    pub fn OnApplicationStateChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_ApplicationStateChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LayoutDirectionChanged(self: ?*anyopaque, direction: i32) void {
        qtc.QGuiApplication_LayoutDirectionChanged(@ptrCast(self), @intCast(direction));
    }

    pub fn OnLayoutDirectionChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_LayoutDirectionChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CommitDataRequest(self: ?*anyopaque, sessionManager: ?*anyopaque) void {
        qtc.QGuiApplication_CommitDataRequest(@ptrCast(self), @ptrCast(sessionManager));
    }

    pub fn OnCommitDataRequest(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_CommitDataRequest(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn SaveStateRequest(self: ?*anyopaque, sessionManager: ?*anyopaque) void {
        qtc.QGuiApplication_SaveStateRequest(@ptrCast(self), @ptrCast(sessionManager));
    }

    pub fn OnSaveStateRequest(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_SaveStateRequest(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ApplicationDisplayNameChanged(self: ?*anyopaque, ) void {
        qtc.QGuiApplication_ApplicationDisplayNameChanged(@ptrCast(self));
    }

    pub fn OnApplicationDisplayNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_ApplicationDisplayNameChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn PaletteChanged(self: ?*anyopaque, pal: ?*anyopaque) void {
        qtc.QGuiApplication_PaletteChanged(@ptrCast(self), @ptrCast(pal));
    }

    pub fn OnPaletteChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_PaletteChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn FontChanged(self: ?*anyopaque, font: ?*anyopaque) void {
        qtc.QGuiApplication_FontChanged(@ptrCast(self), @ptrCast(font));
    }

    pub fn OnFontChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QGuiApplication_Connect_FontChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Event(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QGuiApplication_Event(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QGuiApplication_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QGuiApplication_QBaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn CompressEvent(self: ?*anyopaque, param1: ?*anyopaque, receiver: ?*anyopaque, param3: *QPostEventList) bool {
        return qtc.QGuiApplication_CompressEvent(@ptrCast(self), @ptrCast(param1), @ptrCast(receiver), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    pub fn OnCompressEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, *QPostEventList) callconv(.c) bool) void {
        qtc.QGuiApplication_OnCompressEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCompressEvent(self: ?*anyopaque, param1: ?*anyopaque, receiver: ?*anyopaque, param3: *QPostEventList) bool {
        return qtc.QGuiApplication_QBaseCompressEvent(@ptrCast(self), @ptrCast(param1), @ptrCast(receiver), @ptrCast(param3));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGuiApplication_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qguiapplication.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QGuiApplication_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qguiapplication.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QGuiApplication_Delete(@ptrCast(self));
    }
};
