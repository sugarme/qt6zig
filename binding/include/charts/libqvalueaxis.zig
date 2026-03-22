const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qvalueaxis.html
pub const qvalueaxis = struct {

    /// New constructs a new QValueAxis object.
    pub fn New() QtC.QValueAxis {
        return qtc.QValueAxis_new();
    }


    /// New2 constructs a new QValueAxis object.
    pub fn New2(parent: ?*anyopaque) QtC.QValueAxis {
        return qtc.QValueAxis_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QValueAxis_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qvalueaxis.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QValueAxis_Type(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnType(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QValueAxis_OnType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseType(self: ?*anyopaque, ) i32 {
        return qtc.QValueAxis_QBaseType(@ptrCast(self));
    }

    pub fn SetMin(self: ?*anyopaque, min: f64) void {
        qtc.QValueAxis_SetMin(@ptrCast(self), min);
    }

    pub fn Min(self: ?*anyopaque, ) f64 {
        return qtc.QValueAxis_Min(@ptrCast(self));
    }

    pub fn SetMax(self: ?*anyopaque, max: f64) void {
        qtc.QValueAxis_SetMax(@ptrCast(self), max);
    }

    pub fn Max(self: ?*anyopaque, ) f64 {
        return qtc.QValueAxis_Max(@ptrCast(self));
    }

    pub fn SetRange(self: ?*anyopaque, min: f64, max: f64) void {
        qtc.QValueAxis_SetRange(@ptrCast(self), min, max);
    }

    pub fn SetTickCount(self: ?*anyopaque, count: i32) void {
        qtc.QValueAxis_SetTickCount(@ptrCast(self), count);
    }

    pub fn TickCount(self: ?*anyopaque, ) i32 {
        return qtc.QValueAxis_TickCount(@ptrCast(self));
    }

    pub fn SetMinorTickCount(self: ?*anyopaque, count: i32) void {
        qtc.QValueAxis_SetMinorTickCount(@ptrCast(self), count);
    }

    pub fn MinorTickCount(self: ?*anyopaque, ) i32 {
        return qtc.QValueAxis_MinorTickCount(@ptrCast(self));
    }

    pub fn SetTickAnchor(self: ?*anyopaque, anchor: f64) void {
        qtc.QValueAxis_SetTickAnchor(@ptrCast(self), anchor);
    }

    pub fn TickAnchor(self: ?*anyopaque, ) f64 {
        return qtc.QValueAxis_TickAnchor(@ptrCast(self));
    }

    pub fn SetTickInterval(self: ?*anyopaque, insterval: f64) void {
        qtc.QValueAxis_SetTickInterval(@ptrCast(self), insterval);
    }

    pub fn TickInterval(self: ?*anyopaque, ) f64 {
        return qtc.QValueAxis_TickInterval(@ptrCast(self));
    }

    pub fn SetTickType(self: ?*anyopaque, typeVal: i32) void {
        qtc.QValueAxis_SetTickType(@ptrCast(self), @intCast(typeVal));
    }

    pub fn TickType(self: ?*anyopaque, ) i32 {
        return qtc.QValueAxis_TickType(@ptrCast(self));
    }

    pub fn SetLabelFormat(self: ?*anyopaque, format: []const u8) void {
        const format_str = qtc.libqt_string{
    .len = format.len,
    .data = format.ptr,
};
qtc.QValueAxis_SetLabelFormat(@ptrCast(self), format_str);
    }

    pub fn LabelFormat(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QValueAxis_LabelFormat(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qvalueaxis.LabelFormat: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ApplyNiceNumbers(self: ?*anyopaque, ) void {
        qtc.QValueAxis_ApplyNiceNumbers(@ptrCast(self));
    }

    pub fn MinChanged(self: ?*anyopaque, min: f64) void {
        qtc.QValueAxis_MinChanged(@ptrCast(self), min);
    }

    pub fn OnMinChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QValueAxis_Connect_MinChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn MaxChanged(self: ?*anyopaque, max: f64) void {
        qtc.QValueAxis_MaxChanged(@ptrCast(self), max);
    }

    pub fn OnMaxChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QValueAxis_Connect_MaxChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn RangeChanged(self: ?*anyopaque, min: f64, max: f64) void {
        qtc.QValueAxis_RangeChanged(@ptrCast(self), min, max);
    }

    pub fn OnRangeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f64, f64) callconv(.c) void) void {
        qtc.QValueAxis_Connect_RangeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn TickCountChanged(self: ?*anyopaque, tickCount: i32) void {
        qtc.QValueAxis_TickCountChanged(@ptrCast(self), tickCount);
    }

    pub fn OnTickCountChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QValueAxis_Connect_TickCountChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn MinorTickCountChanged(self: ?*anyopaque, tickCount: i32) void {
        qtc.QValueAxis_MinorTickCountChanged(@ptrCast(self), tickCount);
    }

    pub fn OnMinorTickCountChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QValueAxis_Connect_MinorTickCountChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LabelFormatChanged(self: ?*anyopaque, format: []const u8) void {
        const format_str = qtc.libqt_string{
    .len = format.len,
    .data = format.ptr,
};
qtc.QValueAxis_LabelFormatChanged(@ptrCast(self), format_str);
    }

    pub fn OnLabelFormatChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QValueAxis_Connect_LabelFormatChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn TickIntervalChanged(self: ?*anyopaque, interval: f64) void {
        qtc.QValueAxis_TickIntervalChanged(@ptrCast(self), interval);
    }

    pub fn OnTickIntervalChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QValueAxis_Connect_TickIntervalChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn TickAnchorChanged(self: ?*anyopaque, anchor: f64) void {
        qtc.QValueAxis_TickAnchorChanged(@ptrCast(self), anchor);
    }

    pub fn OnTickAnchorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QValueAxis_Connect_TickAnchorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn TickTypeChanged(self: ?*anyopaque, typeVal: i32) void {
        qtc.QValueAxis_TickTypeChanged(@ptrCast(self), @intCast(typeVal));
    }

    pub fn OnTickTypeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QValueAxis_Connect_TickTypeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QValueAxis_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qvalueaxis.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QValueAxis_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qvalueaxis.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QValueAxis_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/valueaxis.html#types
pub const enums = struct {
    pub const TickType = enum {
        pub const TicksDynamic: i32 = 0;
        pub const TicksFixed: i32 = 1;
    };

};
