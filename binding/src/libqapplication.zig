const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qapplication.html
pub const qapplication = struct {

    /// New constructs a new QApplication object.
    pub fn New(argc: *i32, argv: []const u8) QtC.QApplication {
        return qtc.QApplication_new(@ptrCast(argc), @ptrCast(argv));
    }


    /// New2 constructs a new QApplication object.
    pub fn New2(argc: *i32, argv: []const u8, param3: i32) QtC.QApplication {
        return qtc.QApplication_new2(@ptrCast(argc), @ptrCast(argv), param3);
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QApplication_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qapplication.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Style() QtC.QStyle {
        return qtc.QApplication_Style();
    }

    pub fn SetStyle(style: ?*anyopaque) void {
        qtc.QApplication_SetStyle(@ptrCast(style));
    }

    pub fn SetStyle2(style: []const u8) QtC.QStyle {
        const style_str = qtc.libqt_string{
    .len = style.len,
    .data = style.ptr,
};
return qtc.QApplication_SetStyle2(style_str);
    }

    pub fn Palette(param1: ?*anyopaque) QtC.QPalette {
        return qtc.QApplication_Palette(@ptrCast(param1));
    }

    pub fn Palette2(className: []const u8) QtC.QPalette {
        return qtc.QApplication_Palette2(@ptrCast(className));
    }

    pub fn SetPalette(param1: ?*anyopaque) void {
        qtc.QApplication_SetPalette(@ptrCast(param1));
    }

    pub fn Font() QtC.QFont {
        return qtc.QApplication_Font();
    }

    pub fn Font2(param1: ?*anyopaque) QtC.QFont {
        return qtc.QApplication_Font2(@ptrCast(param1));
    }

    pub fn Font3(className: []const u8) QtC.QFont {
        return qtc.QApplication_Font3(@ptrCast(className));
    }

    pub fn SetFont(param1: ?*anyopaque) void {
        qtc.QApplication_SetFont(@ptrCast(param1));
    }

    pub fn FontMetrics() QtC.QFontMetrics {
        return qtc.QApplication_FontMetrics();
    }

    pub fn AllWidgets() []const u8 {
        return qtc.QApplication_AllWidgets();
    }

    pub fn TopLevelWidgets() []const u8 {
        return qtc.QApplication_TopLevelWidgets();
    }

    pub fn ActivePopupWidget() QtC.QWidget {
        return qtc.QApplication_ActivePopupWidget();
    }

    pub fn ActiveModalWidget() QtC.QWidget {
        return qtc.QApplication_ActiveModalWidget();
    }

    pub fn FocusWidget() QtC.QWidget {
        return qtc.QApplication_FocusWidget();
    }

    pub fn ActiveWindow() QtC.QWidget {
        return qtc.QApplication_ActiveWindow();
    }

    pub fn SetActiveWindow(act: ?*anyopaque) void {
        qtc.QApplication_SetActiveWindow(@ptrCast(act));
    }

    pub fn WidgetAt(p: ?*anyopaque) QtC.QWidget {
        return qtc.QApplication_WidgetAt(@ptrCast(p));
    }

    pub fn WidgetAt2(x: i32, y: i32) QtC.QWidget {
        return qtc.QApplication_WidgetAt2(x, y);
    }

    pub fn TopLevelAt(p: ?*anyopaque) QtC.QWidget {
        return qtc.QApplication_TopLevelAt(@ptrCast(p));
    }

    pub fn TopLevelAt2(x: i32, y: i32) QtC.QWidget {
        return qtc.QApplication_TopLevelAt2(x, y);
    }

    pub fn Beep() void {
        qtc.QApplication_Beep();
    }

    pub fn Alert(widget: ?*anyopaque) void {
        qtc.QApplication_Alert(@ptrCast(widget));
    }

    pub fn SetCursorFlashTime(cursorFlashTime: i32) void {
        qtc.QApplication_SetCursorFlashTime(cursorFlashTime);
    }

    pub fn CursorFlashTime() i32 {
        return qtc.QApplication_CursorFlashTime();
    }

    pub fn SetDoubleClickInterval(doubleClickInterval: i32) void {
        qtc.QApplication_SetDoubleClickInterval(doubleClickInterval);
    }

    pub fn DoubleClickInterval() i32 {
        return qtc.QApplication_DoubleClickInterval();
    }

    pub fn SetKeyboardInputInterval(keyboardInputInterval: i32) void {
        qtc.QApplication_SetKeyboardInputInterval(keyboardInputInterval);
    }

    pub fn KeyboardInputInterval() i32 {
        return qtc.QApplication_KeyboardInputInterval();
    }

    pub fn SetWheelScrollLines(wheelScrollLines: i32) void {
        qtc.QApplication_SetWheelScrollLines(wheelScrollLines);
    }

    pub fn WheelScrollLines() i32 {
        return qtc.QApplication_WheelScrollLines();
    }

    pub fn SetStartDragTime(ms: i32) void {
        qtc.QApplication_SetStartDragTime(ms);
    }

    pub fn StartDragTime() i32 {
        return qtc.QApplication_StartDragTime();
    }

    pub fn SetStartDragDistance(l: i32) void {
        qtc.QApplication_SetStartDragDistance(l);
    }

    pub fn StartDragDistance() i32 {
        return qtc.QApplication_StartDragDistance();
    }

    pub fn IsEffectEnabled(param1: i32) bool {
        return qtc.QApplication_IsEffectEnabled(@intCast(param1));
    }

    pub fn SetEffectEnabled(param1: i32) void {
        qtc.QApplication_SetEffectEnabled(@intCast(param1));
    }

    pub fn Exec() i32 {
        return qtc.QApplication_Exec();
    }

    pub fn Notify(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) bool {
        return qtc.QApplication_Notify(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Allows for overriding the related default method
    pub fn OnNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QApplication_OnNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseNotify(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) bool {
        return qtc.QApplication_QBaseNotify(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    pub fn ResolveInterface(self: ?*anyopaque, name: []const u8, revision: i32) ?*anyopaque {
        return qtc.QApplication_ResolveInterface(@ptrCast(self), @ptrCast(name), revision);
    }

    pub fn OnResolveInterface(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i32) callconv(.c) void) void {
        qtc.QApplication_Connect_ResolveInterface(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Allows for overriding the related default method
    pub fn OnResolveInterface(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i32) callconv(.c) ?*anyopaque) void {
        qtc.QApplication_OnResolveInterface(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseResolveInterface(self: ?*anyopaque, name: []const u8, revision: i32) ?*anyopaque {
        return qtc.QApplication_QBaseResolveInterface(@ptrCast(self), @ptrCast(name), revision);
    }

    pub fn FocusChanged(self: ?*anyopaque, old: ?*anyopaque, now: ?*anyopaque) void {
        qtc.QApplication_FocusChanged(@ptrCast(self), @ptrCast(old), @ptrCast(now));
    }

    pub fn OnFocusChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QApplication_Connect_FocusChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn StyleSheet(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QApplication_StyleSheet(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qapplication.StyleSheet: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn AutoSipEnabled(self: ?*anyopaque, ) bool {
        return qtc.QApplication_AutoSipEnabled(@ptrCast(self));
    }

    pub fn SetStyleSheet(self: ?*anyopaque, sheet: []const u8) void {
        const sheet_str = qtc.libqt_string{
    .len = sheet.len,
    .data = sheet.ptr,
};
qtc.QApplication_SetStyleSheet(@ptrCast(self), sheet_str);
    }

    pub fn SetAutoSipEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QApplication_SetAutoSipEnabled(@ptrCast(self), enabled);
    }

    pub fn CloseAllWindows() void {
        qtc.QApplication_CloseAllWindows();
    }

    pub fn AboutQt() void {
        qtc.QApplication_AboutQt();
    }

    pub fn Event(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QApplication_Event(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QApplication_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QApplication_QBaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QApplication_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qapplication.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QApplication_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qapplication.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetPalette2(param1: ?*anyopaque, className: []const u8) void {
        qtc.QApplication_SetPalette2(@ptrCast(param1), @ptrCast(className));
    }

    pub fn SetFont2(param1: ?*anyopaque, className: []const u8) void {
        qtc.QApplication_SetFont2(@ptrCast(param1), @ptrCast(className));
    }

    pub fn Alert2(widget: ?*anyopaque, duration: i32) void {
        qtc.QApplication_Alert2(@ptrCast(widget), duration);
    }

    pub fn SetEffectEnabled2(param1: i32, enable: bool) void {
        qtc.QApplication_SetEffectEnabled2(@intCast(param1), enable);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QApplication_Delete(@ptrCast(self));
    }
};
