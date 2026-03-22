const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qwidgetaction.html
pub const qwidgetaction = struct {

    /// New constructs a new QWidgetAction object.
    pub fn New(parent: ?*anyopaque) QtC.QWidgetAction {
        return qtc.QWidgetAction_new(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidgetAction_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qwidgetaction.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetDefaultWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QWidgetAction_SetDefaultWidget(@ptrCast(self), @ptrCast(w));
    }

    pub fn DefaultWidget(self: ?*anyopaque, ) QtC.QWidget {
        return qtc.QWidgetAction_DefaultWidget(@ptrCast(self));
    }

    pub fn RequestWidget(self: ?*anyopaque, parent: ?*anyopaque) QtC.QWidget {
        return qtc.QWidgetAction_RequestWidget(@ptrCast(self), @ptrCast(parent));
    }

    pub fn ReleaseWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QWidgetAction_ReleaseWidget(@ptrCast(self), @ptrCast(widget));
    }

    pub fn Event(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QWidgetAction_Event(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QWidgetAction_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QWidgetAction_QBaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn EventFilter(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) bool {
        return qtc.QWidgetAction_EventFilter(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    /// Allows for overriding the related default method
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QWidgetAction_OnEventFilter(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEventFilter(self: ?*anyopaque, param1: ?*anyopaque, param2: ?*anyopaque) bool {
        return qtc.QWidgetAction_QBaseEventFilter(@ptrCast(self), @ptrCast(param1), @ptrCast(param2));
    }

    pub fn CreateWidget(self: ?*anyopaque, parent: ?*anyopaque) QtC.QWidget {
        return qtc.QWidgetAction_CreateWidget(@ptrCast(self), @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnCreateWidget(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QWidget) void {
        qtc.QWidgetAction_OnCreateWidget(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCreateWidget(self: ?*anyopaque, parent: ?*anyopaque) QtC.QWidget {
        return qtc.QWidgetAction_QBaseCreateWidget(@ptrCast(self), @ptrCast(parent));
    }

    pub fn DeleteWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QWidgetAction_DeleteWidget(@ptrCast(self), @ptrCast(widget));
    }

    /// Allows for overriding the related default method
    pub fn OnDeleteWidget(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWidgetAction_OnDeleteWidget(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseDeleteWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QWidgetAction_QBaseDeleteWidget(@ptrCast(self), @ptrCast(widget));
    }

    pub fn CreatedWidgets(self: ?*anyopaque, ) []const u8 {
        return qtc.QWidgetAction_CreatedWidgets(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnCreatedWidgets(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QWidgetAction_OnCreatedWidgets(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCreatedWidgets(self: ?*anyopaque, ) []const u8 {
        return qtc.QWidgetAction_QBaseCreatedWidgets(@ptrCast(self));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidgetAction_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qwidgetaction.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWidgetAction_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qwidgetaction.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWidgetAction_Delete(@ptrCast(self));
    }
};
