const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qstackedlayout.html
pub const qstackedlayout = struct {

    /// New constructs a new QStackedLayout object.
    pub fn New(parent: ?*anyopaque) QtC.QStackedLayout {
        return qtc.QStackedLayout_new(@ptrCast(parent));
    }


    /// New2 constructs a new QStackedLayout object.
    pub fn New2() QtC.QStackedLayout {
        return qtc.QStackedLayout_new2();
    }


    /// New3 constructs a new QStackedLayout object.
    pub fn New3(parentLayout: ?*anyopaque) QtC.QStackedLayout {
        return qtc.QStackedLayout_new3(@ptrCast(parentLayout));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStackedLayout_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstackedlayout.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn AddWidget(self: ?*anyopaque, w: ?*anyopaque) i32 {
        return qtc.QStackedLayout_AddWidget(@ptrCast(self), @ptrCast(w));
    }

    pub fn InsertWidget(self: ?*anyopaque, index: i32, w: ?*anyopaque) i32 {
        return qtc.QStackedLayout_InsertWidget(@ptrCast(self), index, @ptrCast(w));
    }

    pub fn CurrentWidget(self: ?*anyopaque, ) QtC.QWidget {
        return qtc.QStackedLayout_CurrentWidget(@ptrCast(self));
    }

    pub fn CurrentIndex(self: ?*anyopaque, ) i32 {
        return qtc.QStackedLayout_CurrentIndex(@ptrCast(self));
    }

    pub fn Widget(self: ?*anyopaque, param1: i32) QtC.QWidget {
        return qtc.QStackedLayout_Widget(@ptrCast(self), param1);
    }

    pub fn Count(self: ?*anyopaque, ) i32 {
        return qtc.QStackedLayout_Count(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnCount(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QStackedLayout_OnCount(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCount(self: ?*anyopaque, ) i32 {
        return qtc.QStackedLayout_QBaseCount(@ptrCast(self));
    }

    pub fn StackingMode(self: ?*anyopaque, ) i32 {
        return qtc.QStackedLayout_StackingMode(@ptrCast(self));
    }

    pub fn SetStackingMode(self: ?*anyopaque, stackingMode: i32) void {
        qtc.QStackedLayout_SetStackingMode(@ptrCast(self), @intCast(stackingMode));
    }

    pub fn AddItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QStackedLayout_AddItem(@ptrCast(self), @ptrCast(item));
    }

    /// Allows for overriding the related default method
    pub fn OnAddItem(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStackedLayout_OnAddItem(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseAddItem(self: ?*anyopaque, item: ?*anyopaque) void {
        qtc.QStackedLayout_QBaseAddItem(@ptrCast(self), @ptrCast(item));
    }

    pub fn SizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QStackedLayout_SizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QStackedLayout_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QStackedLayout_QBaseSizeHint(@ptrCast(self));
    }

    pub fn MinimumSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QStackedLayout_MinimumSize(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnMinimumSize(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QStackedLayout_OnMinimumSize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMinimumSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QStackedLayout_QBaseMinimumSize(@ptrCast(self));
    }

    pub fn ItemAt(self: ?*anyopaque, param1: i32) QtC.QLayoutItem {
        return qtc.QStackedLayout_ItemAt(@ptrCast(self), param1);
    }

    /// Allows for overriding the related default method
    pub fn OnItemAt(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QLayoutItem) void {
        qtc.QStackedLayout_OnItemAt(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseItemAt(self: ?*anyopaque, param1: i32) QtC.QLayoutItem {
        return qtc.QStackedLayout_QBaseItemAt(@ptrCast(self), param1);
    }

    pub fn TakeAt(self: ?*anyopaque, param1: i32) QtC.QLayoutItem {
        return qtc.QStackedLayout_TakeAt(@ptrCast(self), param1);
    }

    /// Allows for overriding the related default method
    pub fn OnTakeAt(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) QtC.QLayoutItem) void {
        qtc.QStackedLayout_OnTakeAt(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseTakeAt(self: ?*anyopaque, param1: i32) QtC.QLayoutItem {
        return qtc.QStackedLayout_QBaseTakeAt(@ptrCast(self), param1);
    }

    pub fn SetGeometry(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QStackedLayout_SetGeometry(@ptrCast(self), @ptrCast(rect));
    }

    /// Allows for overriding the related default method
    pub fn OnSetGeometry(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QStackedLayout_OnSetGeometry(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetGeometry(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QStackedLayout_QBaseSetGeometry(@ptrCast(self), @ptrCast(rect));
    }

    pub fn HasHeightForWidth(self: ?*anyopaque, ) bool {
        return qtc.QStackedLayout_HasHeightForWidth(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnHasHeightForWidth(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QStackedLayout_OnHasHeightForWidth(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHasHeightForWidth(self: ?*anyopaque, ) bool {
        return qtc.QStackedLayout_QBaseHasHeightForWidth(@ptrCast(self));
    }

    pub fn HeightForWidth(self: ?*anyopaque, width: i32) i32 {
        return qtc.QStackedLayout_HeightForWidth(@ptrCast(self), width);
    }

    /// Allows for overriding the related default method
    pub fn OnHeightForWidth(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) i32) void {
        qtc.QStackedLayout_OnHeightForWidth(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHeightForWidth(self: ?*anyopaque, width: i32) i32 {
        return qtc.QStackedLayout_QBaseHeightForWidth(@ptrCast(self), width);
    }

    pub fn WidgetRemoved(self: ?*anyopaque, index: i32) void {
        qtc.QStackedLayout_WidgetRemoved(@ptrCast(self), index);
    }

    pub fn OnWidgetRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QStackedLayout_Connect_WidgetRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CurrentChanged(self: ?*anyopaque, index: i32) void {
        qtc.QStackedLayout_CurrentChanged(@ptrCast(self), index);
    }

    pub fn OnCurrentChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QStackedLayout_Connect_CurrentChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn SetCurrentIndex(self: ?*anyopaque, index: i32) void {
        qtc.QStackedLayout_SetCurrentIndex(@ptrCast(self), index);
    }

    pub fn SetCurrentWidget(self: ?*anyopaque, w: ?*anyopaque) void {
        qtc.QStackedLayout_SetCurrentWidget(@ptrCast(self), @ptrCast(w));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStackedLayout_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstackedlayout.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStackedLayout_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstackedlayout.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QStackedLayout_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/stackedlayout.html#types
pub const enums = struct {
    pub const StackingMode = enum {
        pub const StackOne: i32 = 0;
        pub const StackAll: i32 = 1;
    };

};
