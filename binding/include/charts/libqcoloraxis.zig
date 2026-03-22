const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qcoloraxis.html
pub const qcoloraxis = struct {

    /// New constructs a new QColorAxis object.
    pub fn New() QtC.QColorAxis {
        return qtc.QColorAxis_new();
    }


    /// New2 constructs a new QColorAxis object.
    pub fn New2(parent: ?*anyopaque) QtC.QColorAxis {
        return qtc.QColorAxis_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QColorAxis_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcoloraxis.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QColorAxis_Type(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnType(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QColorAxis_OnType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseType(self: ?*anyopaque, ) i32 {
        return qtc.QColorAxis_QBaseType(@ptrCast(self));
    }

    pub fn SetMin(self: ?*anyopaque, min: f64) void {
        qtc.QColorAxis_SetMin(@ptrCast(self), min);
    }

    pub fn Min(self: ?*anyopaque, ) f64 {
        return qtc.QColorAxis_Min(@ptrCast(self));
    }

    pub fn SetMax(self: ?*anyopaque, max: f64) void {
        qtc.QColorAxis_SetMax(@ptrCast(self), max);
    }

    pub fn Max(self: ?*anyopaque, ) f64 {
        return qtc.QColorAxis_Max(@ptrCast(self));
    }

    pub fn SetRange(self: ?*anyopaque, min: f64, max: f64) void {
        qtc.QColorAxis_SetRange(@ptrCast(self), min, max);
    }

    pub fn SetTickCount(self: ?*anyopaque, count: i32) void {
        qtc.QColorAxis_SetTickCount(@ptrCast(self), count);
    }

    pub fn TickCount(self: ?*anyopaque, ) i32 {
        return qtc.QColorAxis_TickCount(@ptrCast(self));
    }

    pub fn SetSize(self: ?*anyopaque, size: f64) void {
        qtc.QColorAxis_SetSize(@ptrCast(self), size);
    }

    pub fn Size(self: ?*anyopaque, ) f64 {
        return qtc.QColorAxis_Size(@ptrCast(self));
    }

    pub fn SetGradient(self: ?*anyopaque, gradient: ?*anyopaque) void {
        qtc.QColorAxis_SetGradient(@ptrCast(self), @ptrCast(gradient));
    }

    pub fn Gradient(self: ?*anyopaque, ) QtC.QLinearGradient {
        return qtc.QColorAxis_Gradient(@ptrCast(self));
    }

    pub fn SetAutoRange(self: ?*anyopaque, autoRange: bool) void {
        qtc.QColorAxis_SetAutoRange(@ptrCast(self), autoRange);
    }

    pub fn AutoRange(self: ?*anyopaque, ) bool {
        return qtc.QColorAxis_AutoRange(@ptrCast(self));
    }

    pub fn MinChanged(self: ?*anyopaque, min: f64) void {
        qtc.QColorAxis_MinChanged(@ptrCast(self), min);
    }

    pub fn OnMinChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QColorAxis_Connect_MinChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn MaxChanged(self: ?*anyopaque, max: f64) void {
        qtc.QColorAxis_MaxChanged(@ptrCast(self), max);
    }

    pub fn OnMaxChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QColorAxis_Connect_MaxChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn RangeChanged(self: ?*anyopaque, min: f64, max: f64) void {
        qtc.QColorAxis_RangeChanged(@ptrCast(self), min, max);
    }

    pub fn OnRangeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f64, f64) callconv(.c) void) void {
        qtc.QColorAxis_Connect_RangeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn TickCountChanged(self: ?*anyopaque, tickCount: i32) void {
        qtc.QColorAxis_TickCountChanged(@ptrCast(self), tickCount);
    }

    pub fn OnTickCountChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QColorAxis_Connect_TickCountChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn GradientChanged(self: ?*anyopaque, gradient: ?*anyopaque) void {
        qtc.QColorAxis_GradientChanged(@ptrCast(self), @ptrCast(gradient));
    }

    pub fn OnGradientChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QColorAxis_Connect_GradientChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn SizeChanged(self: ?*anyopaque, size: f64) void {
        qtc.QColorAxis_SizeChanged(@ptrCast(self), size);
    }

    pub fn OnSizeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QColorAxis_Connect_SizeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn AutoRangeChanged(self: ?*anyopaque, autoRange: bool) void {
        qtc.QColorAxis_AutoRangeChanged(@ptrCast(self), autoRange);
    }

    pub fn OnAutoRangeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QColorAxis_Connect_AutoRangeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QColorAxis_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcoloraxis.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QColorAxis_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcoloraxis.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QColorAxis_Delete(@ptrCast(self));
    }
};
