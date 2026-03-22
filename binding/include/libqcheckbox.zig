const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qcheckbox.html
pub const qcheckbox = struct {

    /// New constructs a new QCheckBox object.
    pub fn New(parent: ?*anyopaque) QtC.QCheckBox {
        return qtc.QCheckBox_new(@ptrCast(parent));
    }


    /// New2 constructs a new QCheckBox object.
    pub fn New2() QtC.QCheckBox {
        return qtc.QCheckBox_new2();
    }


    /// New3 constructs a new QCheckBox object.
    pub fn New3(text: []const u8) QtC.QCheckBox {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QCheckBox_new3(text_str);
    }


    /// New4 constructs a new QCheckBox object.
    pub fn New4(text: []const u8, parent: ?*anyopaque) QtC.QCheckBox {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QCheckBox_new4(text_str, @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCheckBox_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcheckbox.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QCheckBox_SizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QCheckBox_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QCheckBox_QBaseSizeHint(@ptrCast(self));
    }

    pub fn MinimumSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QCheckBox_MinimumSizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnMinimumSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QCheckBox_OnMinimumSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMinimumSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QCheckBox_QBaseMinimumSizeHint(@ptrCast(self));
    }

    pub fn SetTristate(self: ?*anyopaque, ) void {
        qtc.QCheckBox_SetTristate(@ptrCast(self));
    }

    pub fn IsTristate(self: ?*anyopaque, ) bool {
        return qtc.QCheckBox_IsTristate(@ptrCast(self));
    }

    pub fn CheckState(self: ?*anyopaque, ) i32 {
        return qtc.QCheckBox_CheckState(@ptrCast(self));
    }

    pub fn SetCheckState(self: ?*anyopaque, state: i32) void {
        qtc.QCheckBox_SetCheckState(@ptrCast(self), @intCast(state));
    }

    pub fn StateChanged(self: ?*anyopaque, param1: i32) void {
        qtc.QCheckBox_StateChanged(@ptrCast(self), param1);
    }

    pub fn OnStateChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QCheckBox_Connect_StateChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CheckStateChanged(self: ?*anyopaque, param1: i32) void {
        qtc.QCheckBox_CheckStateChanged(@ptrCast(self), @intCast(param1));
    }

    pub fn OnCheckStateChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QCheckBox_Connect_CheckStateChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Event(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QCheckBox_Event(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QCheckBox_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QCheckBox_QBaseEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn HitButton(self: ?*anyopaque, pos: ?*anyopaque) bool {
        return qtc.QCheckBox_HitButton(@ptrCast(self), @ptrCast(pos));
    }

    /// Allows for overriding the related default method
    pub fn OnHitButton(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QCheckBox_OnHitButton(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseHitButton(self: ?*anyopaque, pos: ?*anyopaque) bool {
        return qtc.QCheckBox_QBaseHitButton(@ptrCast(self), @ptrCast(pos));
    }

    pub fn CheckStateSet(self: ?*anyopaque, ) void {
        qtc.QCheckBox_CheckStateSet(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnCheckStateSet(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCheckBox_OnCheckStateSet(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCheckStateSet(self: ?*anyopaque, ) void {
        qtc.QCheckBox_QBaseCheckStateSet(@ptrCast(self));
    }

    pub fn NextCheckState(self: ?*anyopaque, ) void {
        qtc.QCheckBox_NextCheckState(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnNextCheckState(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCheckBox_OnNextCheckState(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseNextCheckState(self: ?*anyopaque, ) void {
        qtc.QCheckBox_QBaseNextCheckState(@ptrCast(self));
    }

    pub fn PaintEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QCheckBox_PaintEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCheckBox_OnPaintEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QCheckBox_QBasePaintEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn MouseMoveEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QCheckBox_MouseMoveEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnMouseMoveEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCheckBox_OnMouseMoveEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMouseMoveEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QCheckBox_QBaseMouseMoveEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn InitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QCheckBox_InitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Allows for overriding the related default method
    pub fn OnInitStyleOption(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QCheckBox_OnInitStyleOption(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QCheckBox_QBaseInitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCheckBox_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcheckbox.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCheckBox_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcheckbox.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetTristate1(self: ?*anyopaque, y: bool) void {
        qtc.QCheckBox_SetTristate1(@ptrCast(self), y);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCheckBox_Delete(@ptrCast(self));
    }
};
