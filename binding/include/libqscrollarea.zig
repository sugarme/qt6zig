const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qscrollarea.html
pub const qscrollarea = struct {

    /// New constructs a new QScrollArea object.
    pub fn New(parent: ?*anyopaque) QtC.QScrollArea {
        return qtc.QScrollArea_new(@ptrCast(parent));
    }


    /// New2 constructs a new QScrollArea object.
    pub fn New2() QtC.QScrollArea {
        return qtc.QScrollArea_new2();
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QScrollArea_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qscrollarea.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Widget(self: ?*anyopaque, ) QtC.QWidget {
        return qtc.QScrollArea_Widget(@ptrCast(self));
    }

    pub fn SetWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QScrollArea_SetWidget(@ptrCast(self), @ptrCast(widget));
    }

    pub fn TakeWidget(self: ?*anyopaque, ) QtC.QWidget {
        return qtc.QScrollArea_TakeWidget(@ptrCast(self));
    }

    pub fn WidgetResizable(self: ?*anyopaque, ) bool {
        return qtc.QScrollArea_WidgetResizable(@ptrCast(self));
    }

    pub fn SetWidgetResizable(self: ?*anyopaque, resizable: bool) void {
        qtc.QScrollArea_SetWidgetResizable(@ptrCast(self), resizable);
    }

    pub fn SizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QScrollArea_SizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QScrollArea_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QScrollArea_QBaseSizeHint(@ptrCast(self));
    }

    pub fn FocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.QScrollArea_FocusNextPrevChild(@ptrCast(self), next);
    }

    /// Allows for overriding the related default method
    pub fn OnFocusNextPrevChild(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) bool) void {
        qtc.QScrollArea_OnFocusNextPrevChild(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFocusNextPrevChild(self: ?*anyopaque, next: bool) bool {
        return qtc.QScrollArea_QBaseFocusNextPrevChild(@ptrCast(self), next);
    }

    pub fn Alignment(self: ?*anyopaque, ) i32 {
        return qtc.QScrollArea_Alignment(@ptrCast(self));
    }

    pub fn SetAlignment(self: ?*anyopaque, alignment: i32) void {
        qtc.QScrollArea_SetAlignment(@ptrCast(self), @intCast(alignment));
    }

    pub fn EnsureVisible(self: ?*anyopaque, x: i32, y: i32) void {
        qtc.QScrollArea_EnsureVisible(@ptrCast(self), x, y);
    }

    pub fn EnsureWidgetVisible(self: ?*anyopaque, childWidget: ?*anyopaque) void {
        qtc.QScrollArea_EnsureWidgetVisible(@ptrCast(self), @ptrCast(childWidget));
    }

    pub fn Event(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QScrollArea_Event(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QScrollArea_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QScrollArea_QBaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn EventFilter(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) bool {
        return qtc.QScrollArea_EventFilter(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Allows for overriding the related default method
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QScrollArea_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEventFilter(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) bool {
        return qtc.QScrollArea_QBaseEventFilter(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    pub fn ResizeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QScrollArea_ResizeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnResizeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QScrollArea_OnResizeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseResizeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QScrollArea_QBaseResizeEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn ScrollContentsBy(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QScrollArea_ScrollContentsBy(@ptrCast(self), dx, dy);
    }

    /// Allows for overriding the related default method
    pub fn OnScrollContentsBy(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QScrollArea_OnScrollContentsBy(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseScrollContentsBy(self: ?*anyopaque, dx: i32, dy: i32) void {
        qtc.QScrollArea_QBaseScrollContentsBy(@ptrCast(self), dx, dy);
    }

    pub fn ViewportSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QScrollArea_ViewportSizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnViewportSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QScrollArea_OnViewportSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseViewportSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QScrollArea_QBaseViewportSizeHint(@ptrCast(self));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QScrollArea_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qscrollarea.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QScrollArea_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qscrollarea.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn EnsureVisible3(self: ?*anyopaque, x: i32, y: i32, xmargin: i32) void {
        qtc.QScrollArea_EnsureVisible3(@ptrCast(self), x, y, xmargin);
    }

    pub fn EnsureVisible4(self: ?*anyopaque, x: i32, y: i32, xmargin: i32, ymargin: i32) void {
        qtc.QScrollArea_EnsureVisible4(@ptrCast(self), x, y, xmargin, ymargin);
    }

    pub fn EnsureWidgetVisible2(self: ?*anyopaque, childWidget: ?*anyopaque, xmargin: i32) void {
        qtc.QScrollArea_EnsureWidgetVisible2(@ptrCast(self), @ptrCast(childWidget), xmargin);
    }

    pub fn EnsureWidgetVisible3(self: ?*anyopaque, childWidget: ?*anyopaque, xmargin: i32, ymargin: i32) void {
        qtc.QScrollArea_EnsureWidgetVisible3(@ptrCast(self), @ptrCast(childWidget), xmargin, ymargin);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QScrollArea_Delete(@ptrCast(self));
    }
};
