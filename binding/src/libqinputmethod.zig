const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qinputmethod.html
pub const qinputmethod = struct {

    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QInputMethod_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qinputmethod.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn InputItemTransform(self: ?*anyopaque, ) QtC.QTransform {
        return qtc.QInputMethod_InputItemTransform(@ptrCast(self));
    }

    pub fn SetInputItemTransform(self: ?*anyopaque, transform: ?*anyopaque) void {
        qtc.QInputMethod_SetInputItemTransform(@ptrCast(self), @ptrCast(transform));
    }

    pub fn InputItemRectangle(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QInputMethod_InputItemRectangle(@ptrCast(self));
    }

    pub fn SetInputItemRectangle(self: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QInputMethod_SetInputItemRectangle(@ptrCast(self), @ptrCast(rect));
    }

    pub fn CursorRectangle(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QInputMethod_CursorRectangle(@ptrCast(self));
    }

    pub fn AnchorRectangle(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QInputMethod_AnchorRectangle(@ptrCast(self));
    }

    pub fn KeyboardRectangle(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QInputMethod_KeyboardRectangle(@ptrCast(self));
    }

    pub fn InputItemClipRectangle(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QInputMethod_InputItemClipRectangle(@ptrCast(self));
    }

    pub fn IsVisible(self: ?*anyopaque, ) bool {
        return qtc.QInputMethod_IsVisible(@ptrCast(self));
    }

    pub fn SetVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QInputMethod_SetVisible(@ptrCast(self), visible);
    }

    pub fn IsAnimating(self: ?*anyopaque, ) bool {
        return qtc.QInputMethod_IsAnimating(@ptrCast(self));
    }

    pub fn Locale(self: ?*anyopaque, ) QtC.QLocale {
        return qtc.QInputMethod_Locale(@ptrCast(self));
    }

    pub fn InputDirection(self: ?*anyopaque, ) i32 {
        return qtc.QInputMethod_InputDirection(@ptrCast(self));
    }

    pub fn QueryFocusObject(query: i64, argument: ?*anyopaque) QtC.QVariant {
        return qtc.QInputMethod_QueryFocusObject(@intCast(query), @ptrCast(argument));
    }

    pub fn Show(self: ?*anyopaque, ) void {
        qtc.QInputMethod_Show(@ptrCast(self));
    }

    pub fn Hide(self: ?*anyopaque, ) void {
        qtc.QInputMethod_Hide(@ptrCast(self));
    }

    pub fn Update(self: ?*anyopaque, queries: i64) void {
        qtc.QInputMethod_Update(@ptrCast(self), @intCast(queries));
    }

    pub fn Reset(self: ?*anyopaque, ) void {
        qtc.QInputMethod_Reset(@ptrCast(self));
    }

    pub fn Commit(self: ?*anyopaque, ) void {
        qtc.QInputMethod_Commit(@ptrCast(self));
    }

    pub fn InvokeAction(self: ?*anyopaque, a: i32, cursorPosition: i32) void {
        qtc.QInputMethod_InvokeAction(@ptrCast(self), @intCast(a), cursorPosition);
    }

    pub fn CursorRectangleChanged(self: ?*anyopaque, ) void {
        qtc.QInputMethod_CursorRectangleChanged(@ptrCast(self));
    }

    pub fn OnCursorRectangleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QInputMethod_Connect_CursorRectangleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn AnchorRectangleChanged(self: ?*anyopaque, ) void {
        qtc.QInputMethod_AnchorRectangleChanged(@ptrCast(self));
    }

    pub fn OnAnchorRectangleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QInputMethod_Connect_AnchorRectangleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn KeyboardRectangleChanged(self: ?*anyopaque, ) void {
        qtc.QInputMethod_KeyboardRectangleChanged(@ptrCast(self));
    }

    pub fn OnKeyboardRectangleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QInputMethod_Connect_KeyboardRectangleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn InputItemClipRectangleChanged(self: ?*anyopaque, ) void {
        qtc.QInputMethod_InputItemClipRectangleChanged(@ptrCast(self));
    }

    pub fn OnInputItemClipRectangleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QInputMethod_Connect_InputItemClipRectangleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn VisibleChanged(self: ?*anyopaque, ) void {
        qtc.QInputMethod_VisibleChanged(@ptrCast(self));
    }

    pub fn OnVisibleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QInputMethod_Connect_VisibleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn AnimatingChanged(self: ?*anyopaque, ) void {
        qtc.QInputMethod_AnimatingChanged(@ptrCast(self));
    }

    pub fn OnAnimatingChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QInputMethod_Connect_AnimatingChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LocaleChanged(self: ?*anyopaque, ) void {
        qtc.QInputMethod_LocaleChanged(@ptrCast(self));
    }

    pub fn OnLocaleChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QInputMethod_Connect_LocaleChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn InputDirectionChanged(self: ?*anyopaque, newDirection: i32) void {
        qtc.QInputMethod_InputDirectionChanged(@ptrCast(self), @intCast(newDirection));
    }

    pub fn OnInputDirectionChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QInputMethod_Connect_InputDirectionChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QInputMethod_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qinputmethod.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QInputMethod_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qinputmethod.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }
};

/// https://doc.qt.io/qt-6/inputmethod.html#types
pub const enums = struct {
    pub const Action = enum {
        pub const Click: i32 = 0;
        pub const ContextMenu: i32 = 1;
    };

};
