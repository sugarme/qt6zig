const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qprogressbar.html
pub const qprogressbar = struct {

    /// New constructs a new QProgressBar object.
    pub fn New(parent: ?*anyopaque) QtC.QProgressBar {
        return qtc.QProgressBar_new(@ptrCast(parent));
    }


    /// New2 constructs a new QProgressBar object.
    pub fn New2() QtC.QProgressBar {
        return qtc.QProgressBar_new2();
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QProgressBar_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qprogressbar.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Minimum(self: ?*anyopaque, ) i32 {
        return qtc.QProgressBar_Minimum(@ptrCast(self));
    }

    pub fn Maximum(self: ?*anyopaque, ) i32 {
        return qtc.QProgressBar_Maximum(@ptrCast(self));
    }

    pub fn Value(self: ?*anyopaque, ) i32 {
        return qtc.QProgressBar_Value(@ptrCast(self));
    }

    pub fn Text(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QProgressBar_Text(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qprogressbar.Text: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Allows for overriding the related default method
    pub fn OnText(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) [*:0]const u8) void {
        qtc.QProgressBar_OnText(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseText(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QProgressBar_QBaseText(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qprogressbar.Text: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetTextVisible(self: ?*anyopaque, visible: bool) void {
        qtc.QProgressBar_SetTextVisible(@ptrCast(self), visible);
    }

    pub fn IsTextVisible(self: ?*anyopaque, ) bool {
        return qtc.QProgressBar_IsTextVisible(@ptrCast(self));
    }

    pub fn Alignment(self: ?*anyopaque, ) i32 {
        return qtc.QProgressBar_Alignment(@ptrCast(self));
    }

    pub fn SetAlignment(self: ?*anyopaque, alignment: i32) void {
        qtc.QProgressBar_SetAlignment(@ptrCast(self), @intCast(alignment));
    }

    pub fn SizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QProgressBar_SizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QProgressBar_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QProgressBar_QBaseSizeHint(@ptrCast(self));
    }

    pub fn MinimumSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QProgressBar_MinimumSizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnMinimumSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QProgressBar_OnMinimumSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseMinimumSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QProgressBar_QBaseMinimumSizeHint(@ptrCast(self));
    }

    pub fn Orientation(self: ?*anyopaque, ) i32 {
        return qtc.QProgressBar_Orientation(@ptrCast(self));
    }

    pub fn SetInvertedAppearance(self: ?*anyopaque, invert: bool) void {
        qtc.QProgressBar_SetInvertedAppearance(@ptrCast(self), invert);
    }

    pub fn InvertedAppearance(self: ?*anyopaque, ) bool {
        return qtc.QProgressBar_InvertedAppearance(@ptrCast(self));
    }

    pub fn SetTextDirection(self: ?*anyopaque, textDirection: i32) void {
        qtc.QProgressBar_SetTextDirection(@ptrCast(self), @intCast(textDirection));
    }

    pub fn TextDirection(self: ?*anyopaque, ) i32 {
        return qtc.QProgressBar_TextDirection(@ptrCast(self));
    }

    pub fn SetFormat(self: ?*anyopaque, format: []const u8) void {
        const format_str = qtc.libqt_string{
    .len = format.len,
    .data = format.ptr,
};
qtc.QProgressBar_SetFormat(@ptrCast(self), format_str);
    }

    pub fn ResetFormat(self: ?*anyopaque, ) void {
        qtc.QProgressBar_ResetFormat(@ptrCast(self));
    }

    pub fn Format(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QProgressBar_Format(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qprogressbar.Format: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Reset(self: ?*anyopaque, ) void {
        qtc.QProgressBar_Reset(@ptrCast(self));
    }

    pub fn SetRange(self: ?*anyopaque, minimum: i32, maximum: i32) void {
        qtc.QProgressBar_SetRange(@ptrCast(self), minimum, maximum);
    }

    pub fn SetMinimum(self: ?*anyopaque, minimum: i32) void {
        qtc.QProgressBar_SetMinimum(@ptrCast(self), minimum);
    }

    pub fn SetMaximum(self: ?*anyopaque, maximum: i32) void {
        qtc.QProgressBar_SetMaximum(@ptrCast(self), maximum);
    }

    pub fn SetValue(self: ?*anyopaque, value: i32) void {
        qtc.QProgressBar_SetValue(@ptrCast(self), value);
    }

    pub fn SetOrientation(self: ?*anyopaque, orientation: i32) void {
        qtc.QProgressBar_SetOrientation(@ptrCast(self), @intCast(orientation));
    }

    pub fn ValueChanged(self: ?*anyopaque, value: i32) void {
        qtc.QProgressBar_ValueChanged(@ptrCast(self), value);
    }

    pub fn OnValueChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QProgressBar_Connect_ValueChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Event(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QProgressBar_Event(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QProgressBar_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QProgressBar_QBaseEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn PaintEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QProgressBar_PaintEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QProgressBar_OnPaintEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QProgressBar_QBasePaintEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn InitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QProgressBar_InitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    /// Allows for overriding the related default method
    pub fn OnInitStyleOption(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QProgressBar_OnInitStyleOption(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseInitStyleOption(self: ?*anyopaque, option: ?*anyopaque) void {
        qtc.QProgressBar_QBaseInitStyleOption(@ptrCast(self), @ptrCast(option));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QProgressBar_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qprogressbar.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QProgressBar_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qprogressbar.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QProgressBar_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/progressbar.html#types
pub const enums = struct {
    pub const Direction = enum {
        pub const TopToBottom: i32 = 0;
        pub const BottomToTop: i32 = 1;
    };

};
