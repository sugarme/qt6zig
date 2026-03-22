const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qtoolbox.html
pub const qtoolbox = struct {

    /// New constructs a new QToolBox object.
    pub fn New(parent: ?*anyopaque) QtC.QToolBox {
        return qtc.QToolBox_new(@ptrCast(parent));
    }


    /// New2 constructs a new QToolBox object.
    pub fn New2() QtC.QToolBox {
        return qtc.QToolBox_new2();
    }


    /// New3 constructs a new QToolBox object.
    pub fn New3(parent: ?*anyopaque, f: i64) QtC.QToolBox {
        return qtc.QToolBox_new3(@ptrCast(parent), @intCast(f));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QToolBox_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtoolbox.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn AddItem(self: ?*anyopaque, widget: ?*anyopaque, text: []const u8) i32 {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QToolBox_AddItem(@ptrCast(self), @ptrCast(widget), text_str);
    }

    pub fn AddItem2(self: ?*anyopaque, widget: ?*anyopaque, icon: ?*anyopaque, text: []const u8) i32 {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QToolBox_AddItem2(@ptrCast(self), @ptrCast(widget), @ptrCast(icon), text_str);
    }

    pub fn InsertItem(self: ?*anyopaque, index: i32, widget: ?*anyopaque, text: []const u8) i32 {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QToolBox_InsertItem(@ptrCast(self), index, @ptrCast(widget), text_str);
    }

    pub fn InsertItem2(self: ?*anyopaque, index: i32, widget: ?*anyopaque, icon: ?*anyopaque, text: []const u8) i32 {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QToolBox_InsertItem2(@ptrCast(self), index, @ptrCast(widget), @ptrCast(icon), text_str);
    }

    pub fn RemoveItem(self: ?*anyopaque, index: i32) void {
        qtc.QToolBox_RemoveItem(@ptrCast(self), index);
    }

    pub fn SetItemEnabled(self: ?*anyopaque, index: i32, enabled: bool) void {
        qtc.QToolBox_SetItemEnabled(@ptrCast(self), index, enabled);
    }

    pub fn IsItemEnabled(self: ?*anyopaque, index: i32) bool {
        return qtc.QToolBox_IsItemEnabled(@ptrCast(self), index);
    }

    pub fn SetItemText(self: ?*anyopaque, index: i32, text: []const u8) void {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
qtc.QToolBox_SetItemText(@ptrCast(self), index, text_str);
    }

    pub fn ItemText(self: ?*anyopaque, index: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QToolBox_ItemText(@ptrCast(self), index);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtoolbox.ItemText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetItemIcon(self: ?*anyopaque, index: i32, icon: ?*anyopaque) void {
        qtc.QToolBox_SetItemIcon(@ptrCast(self), index, @ptrCast(icon));
    }

    pub fn ItemIcon(self: ?*anyopaque, index: i32) QtC.QIcon {
        return qtc.QToolBox_ItemIcon(@ptrCast(self), index);
    }

    pub fn SetItemToolTip(self: ?*anyopaque, index: i32, toolTip: []const u8) void {
        const toolTip_str = qtc.libqt_string{
    .len = toolTip.len,
    .data = toolTip.ptr,
};
qtc.QToolBox_SetItemToolTip(@ptrCast(self), index, toolTip_str);
    }

    pub fn ItemToolTip(self: ?*anyopaque, index: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QToolBox_ItemToolTip(@ptrCast(self), index);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtoolbox.ItemToolTip: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn CurrentIndex(self: ?*anyopaque, ) i32 {
        return qtc.QToolBox_CurrentIndex(@ptrCast(self));
    }

    pub fn CurrentWidget(self: ?*anyopaque, ) QtC.QWidget {
        return qtc.QToolBox_CurrentWidget(@ptrCast(self));
    }

    pub fn Widget(self: ?*anyopaque, index: i32) QtC.QWidget {
        return qtc.QToolBox_Widget(@ptrCast(self), index);
    }

    pub fn IndexOf(self: ?*anyopaque, widget: ?*anyopaque) i32 {
        return qtc.QToolBox_IndexOf(@ptrCast(self), @ptrCast(widget));
    }

    pub fn Count(self: ?*anyopaque, ) i32 {
        return qtc.QToolBox_Count(@ptrCast(self));
    }

    pub fn SetCurrentIndex(self: ?*anyopaque, index: i32) void {
        qtc.QToolBox_SetCurrentIndex(@ptrCast(self), index);
    }

    pub fn SetCurrentWidget(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QToolBox_SetCurrentWidget(@ptrCast(self), @ptrCast(widget));
    }

    pub fn CurrentChanged(self: ?*anyopaque, index: i32) void {
        qtc.QToolBox_CurrentChanged(@ptrCast(self), index);
    }

    pub fn OnCurrentChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QToolBox_Connect_CurrentChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Event(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QToolBox_Event(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QToolBox_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QToolBox_QBaseEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn ItemInserted(self: ?*anyopaque, index: i32) void {
        qtc.QToolBox_ItemInserted(@ptrCast(self), index);
    }

    /// Allows for overriding the related default method
    pub fn OnItemInserted(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QToolBox_OnItemInserted(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseItemInserted(self: ?*anyopaque, index: i32) void {
        qtc.QToolBox_QBaseItemInserted(@ptrCast(self), index);
    }

    pub fn ItemRemoved(self: ?*anyopaque, index: i32) void {
        qtc.QToolBox_ItemRemoved(@ptrCast(self), index);
    }

    /// Allows for overriding the related default method
    pub fn OnItemRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QToolBox_OnItemRemoved(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseItemRemoved(self: ?*anyopaque, index: i32) void {
        qtc.QToolBox_QBaseItemRemoved(@ptrCast(self), index);
    }

    pub fn ShowEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QToolBox_ShowEvent(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnShowEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QToolBox_OnShowEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseShowEvent(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QToolBox_QBaseShowEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn ChangeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QToolBox_ChangeEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnChangeEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QToolBox_OnChangeEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseChangeEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QToolBox_QBaseChangeEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QToolBox_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtoolbox.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QToolBox_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qtoolbox.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QToolBox_Delete(@ptrCast(self));
    }
};
