const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qstackedwidget.html
pub const qstackedwidget = struct {

    /// New constructs a new QStackedWidget object.
    pub fn New(parent: ?*anyopaque) QtC.QStackedWidget {
        return qtc.QStackedWidget_new(@ptrCast(parent));
    }


    /// New2 constructs a new QStackedWidget object.
    pub fn New2() QtC.QStackedWidget {
        return qtc.QStackedWidget_new2();
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStackedWidget_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstackedwidget.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn AddWidget(self: ?*anyopaque, w: ?*anyopaque) i32 {
        return qtc.QStackedWidget_AddWidget(@ptrCast(self), @ptrCast(w));
    }

    pub fn InsertWidget(self: ?*anyopaque, index: i32, w: ?*anyopaque) i32 {
        return qtc.QStackedWidget_InsertWidget(@ptrCast(self), index, @ptrCast(w));
    }

    pub fn RemoveWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStackedWidget_RemoveWidget(@ptrCast(self), @ptrCast(w));
    }

    pub fn CurrentWidget(self: ?*anyopaque, ) QtC.QWidget {
        return qtc.QStackedWidget_CurrentWidget(@ptrCast(self));
    }

    pub fn CurrentIndex(self: ?*anyopaque, ) i32 {
        return qtc.QStackedWidget_CurrentIndex(@ptrCast(self));
    }

    pub fn IndexOf(self: ?*anyopaque, param1: ?*anyopaque) i32 {
        return qtc.QStackedWidget_IndexOf(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Widget(self: ?*anyopaque, param1: i32) QtC.QWidget {
        return qtc.QStackedWidget_Widget(@ptrCast(self), param1);
    }

    pub fn Count(self: ?*anyopaque, ) i32 {
        return qtc.QStackedWidget_Count(@ptrCast(self));
    }

    pub fn SetCurrentIndex(self: ?*anyopaque, index: i32) void {
        qtc.QStackedWidget_SetCurrentIndex(@ptrCast(self), index);
    }

    pub fn SetCurrentWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStackedWidget_SetCurrentWidget(@ptrCast(self), @ptrCast(w));
    }

    pub fn CurrentChanged(self: ?*anyopaque, param1: i32) void {
        qtc.QStackedWidget_CurrentChanged(@ptrCast(self), param1);
    }

    pub fn OnCurrentChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QStackedWidget_Connect_CurrentChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn WidgetRemoved(self: ?*anyopaque, index: i32) void {
        qtc.QStackedWidget_WidgetRemoved(@ptrCast(self), index);
    }

    pub fn OnWidgetRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QStackedWidget_Connect_WidgetRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Event(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QStackedWidget_Event(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QStackedWidget_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QStackedWidget_QBaseEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStackedWidget_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstackedwidget.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStackedWidget_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstackedwidget.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStackedWidget_Delete(@ptrCast(self));
    }
};
