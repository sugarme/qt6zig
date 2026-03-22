const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qlogvalueaxis.html
pub const qlogvalueaxis = struct {

    /// New constructs a new QLogValueAxis object.
    pub fn New() QtC.QLogValueAxis {
        return qtc.QLogValueAxis_new();
    }


    /// New2 constructs a new QLogValueAxis object.
    pub fn New2(parent: ?*anyopaque) QtC.QLogValueAxis {
        return qtc.QLogValueAxis_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLogValueAxis_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlogvalueaxis.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QLogValueAxis_Type(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnType(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QLogValueAxis_OnType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseType(self: ?*anyopaque, ) i32 {
        return qtc.QLogValueAxis_QBaseType(@ptrCast(self));
    }

    pub fn SetMin(self: ?*anyopaque, min: f64) void {
        qtc.QLogValueAxis_SetMin(@ptrCast(self), min);
    }

    pub fn Min(self: ?*anyopaque, ) f64 {
        return qtc.QLogValueAxis_Min(@ptrCast(self));
    }

    pub fn SetMax(self: ?*anyopaque, max: f64) void {
        qtc.QLogValueAxis_SetMax(@ptrCast(self), max);
    }

    pub fn Max(self: ?*anyopaque, ) f64 {
        return qtc.QLogValueAxis_Max(@ptrCast(self));
    }

    pub fn SetRange(self: ?*anyopaque, min: f64, max: f64) void {
        qtc.QLogValueAxis_SetRange(@ptrCast(self), min, max);
    }

    pub fn SetLabelFormat(self: ?*anyopaque, format: []const u8) void {
        const format_str = qtc.libqt_string{
    .len = format.len,
    .data = format.ptr,
};
qtc.QLogValueAxis_SetLabelFormat(@ptrCast(self), format_str);
    }

    pub fn LabelFormat(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLogValueAxis_LabelFormat(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlogvalueaxis.LabelFormat: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetBase(self: ?*anyopaque, base: f64) void {
        qtc.QLogValueAxis_SetBase(@ptrCast(self), base);
    }

    pub fn Base(self: ?*anyopaque, ) f64 {
        return qtc.QLogValueAxis_Base(@ptrCast(self));
    }

    pub fn TickCount(self: ?*anyopaque, ) i32 {
        return qtc.QLogValueAxis_TickCount(@ptrCast(self));
    }

    pub fn SetMinorTickCount(self: ?*anyopaque, minorTickCount: i32) void {
        qtc.QLogValueAxis_SetMinorTickCount(@ptrCast(self), minorTickCount);
    }

    pub fn MinorTickCount(self: ?*anyopaque, ) i32 {
        return qtc.QLogValueAxis_MinorTickCount(@ptrCast(self));
    }

    pub fn MinChanged(self: ?*anyopaque, min: f64) void {
        qtc.QLogValueAxis_MinChanged(@ptrCast(self), min);
    }

    pub fn OnMinChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QLogValueAxis_Connect_MinChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn MaxChanged(self: ?*anyopaque, max: f64) void {
        qtc.QLogValueAxis_MaxChanged(@ptrCast(self), max);
    }

    pub fn OnMaxChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QLogValueAxis_Connect_MaxChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn RangeChanged(self: ?*anyopaque, min: f64, max: f64) void {
        qtc.QLogValueAxis_RangeChanged(@ptrCast(self), min, max);
    }

    pub fn OnRangeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f64, f64) callconv(.c) void) void {
        qtc.QLogValueAxis_Connect_RangeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LabelFormatChanged(self: ?*anyopaque, format: []const u8) void {
        const format_str = qtc.libqt_string{
    .len = format.len,
    .data = format.ptr,
};
qtc.QLogValueAxis_LabelFormatChanged(@ptrCast(self), format_str);
    }

    pub fn OnLabelFormatChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QLogValueAxis_Connect_LabelFormatChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn BaseChanged(self: ?*anyopaque, base: f64) void {
        qtc.QLogValueAxis_BaseChanged(@ptrCast(self), base);
    }

    pub fn OnBaseChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QLogValueAxis_Connect_BaseChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn TickCountChanged(self: ?*anyopaque, tickCount: i32) void {
        qtc.QLogValueAxis_TickCountChanged(@ptrCast(self), tickCount);
    }

    pub fn OnTickCountChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QLogValueAxis_Connect_TickCountChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn MinorTickCountChanged(self: ?*anyopaque, minorTickCount: i32) void {
        qtc.QLogValueAxis_MinorTickCountChanged(@ptrCast(self), minorTickCount);
    }

    pub fn OnMinorTickCountChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QLogValueAxis_Connect_MinorTickCountChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLogValueAxis_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlogvalueaxis.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLogValueAxis_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlogvalueaxis.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QLogValueAxis_Delete(@ptrCast(self));
    }
};
