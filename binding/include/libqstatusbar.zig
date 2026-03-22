const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qstatusbar.html
pub const qstatusbar = struct {

    /// New constructs a new QStatusBar object.
    pub fn New(parent: ?*anyopaque) QtC.QStatusBar {
        return qtc.QStatusBar_new(@ptrCast(parent));
    }


    /// New2 constructs a new QStatusBar object.
    pub fn New2() QtC.QStatusBar {
        return qtc.QStatusBar_new2();
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStatusBar_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstatusbar.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn AddWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QStatusBar_AddWidget(@ptrCast(self), @ptrCast(widget));
    }

    pub fn InsertWidget(self: ?*anyopaque, index: i32, widget: ?*anyopaque) i32 {
        return qtc.QStatusBar_InsertWidget(@ptrCast(self), index, @ptrCast(widget));
    }

    pub fn AddPermanentWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QStatusBar_AddPermanentWidget(@ptrCast(self), @ptrCast(widget));
    }

    pub fn InsertPermanentWidget(self: ?*anyopaque, index: i32, widget: ?*anyopaque) i32 {
        return qtc.QStatusBar_InsertPermanentWidget(@ptrCast(self), index, @ptrCast(widget));
    }

    pub fn RemoveWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QStatusBar_RemoveWidget(@ptrCast(self), @ptrCast(widget));
    }

    pub fn SetSizeGripEnabled(self: ?*anyopaque, sizeGripEnabled: bool) void {
        qtc.QStatusBar_SetSizeGripEnabled(@ptrCast(self), sizeGripEnabled);
    }

    pub fn IsSizeGripEnabled(self: ?*anyopaque, ) bool {
        return qtc.QStatusBar_IsSizeGripEnabled(@ptrCast(self));
    }

    pub fn CurrentMessage(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStatusBar_CurrentMessage(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstatusbar.CurrentMessage: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ShowMessage(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QStatusBar_ShowMessage(@ptrCast(self), text_str);
    }

    pub fn ClearMessage(self: ?*anyopaque, ) void {
        qtc.QStatusBar_ClearMessage(@ptrCast(self));
    }

    pub fn MessageChanged(self: ?*anyopaque, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QStatusBar_MessageChanged(@ptrCast(self), text_str);
    }

    pub fn OnMessageChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QStatusBar_Connect_MessageChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ShowEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QStatusBar_ShowEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnShowEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStatusBar_OnShowEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseShowEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QStatusBar_QBaseShowEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn PaintEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QStatusBar_PaintEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStatusBar_OnPaintEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QStatusBar_QBasePaintEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn ResizeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QStatusBar_ResizeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnResizeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStatusBar_OnResizeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseResizeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QStatusBar_QBaseResizeEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Reformat(self: ?*anyopaque, ) void {
        qtc.QStatusBar_Reformat(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnReformat(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QStatusBar_OnReformat(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseReformat(self: ?*anyopaque, ) void {
        qtc.QStatusBar_QBaseReformat(@ptrCast(self));
    }

    pub fn HideOrShow(self: ?*anyopaque, ) void {
        qtc.QStatusBar_HideOrShow(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnHideOrShow(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QStatusBar_OnHideOrShow(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHideOrShow(self: ?*anyopaque, ) void {
        qtc.QStatusBar_QBaseHideOrShow(@ptrCast(self));
    }

    pub fn Event(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QStatusBar_Event(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QStatusBar_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QStatusBar_QBaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStatusBar_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstatusbar.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStatusBar_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstatusbar.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn AddWidget2(self: ?*anyopaque, widget: ?*anyopaque, stretch: i32) void {
        qtc.QStatusBar_AddWidget2(@ptrCast(self), @ptrCast(widget), stretch);
    }

    pub fn InsertWidget3(self: ?*anyopaque, index: i32, widget: ?*anyopaque, stretch: i32) i32 {
        return qtc.QStatusBar_InsertWidget3(@ptrCast(self), index, @ptrCast(widget), stretch);
    }

    pub fn AddPermanentWidget2(self: ?*anyopaque, widget: ?*anyopaque, stretch: i32) void {
        qtc.QStatusBar_AddPermanentWidget2(@ptrCast(self), @ptrCast(widget), stretch);
    }

    pub fn InsertPermanentWidget3(self: ?*anyopaque, index: i32, widget: ?*anyopaque, stretch: i32) i32 {
        return qtc.QStatusBar_InsertPermanentWidget3(@ptrCast(self), index, @ptrCast(widget), stretch);
    }

    pub fn ShowMessage2(self: ?*anyopaque, text: []const u8, timeout: i32) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QStatusBar_ShowMessage2(@ptrCast(self), text_str, timeout);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStatusBar_Delete(@ptrCast(self));
    }
};
