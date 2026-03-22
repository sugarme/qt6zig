const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qlcdnumber.html
pub const qlcdnumber = struct {

    /// New constructs a new QLCDNumber object.
    pub fn New(parent: ?*anyopaque) QtC.QLCDNumber {
        return qtc.QLCDNumber_new(@ptrCast(parent));
    }


    /// New2 constructs a new QLCDNumber object.
    pub fn New2() QtC.QLCDNumber {
        return qtc.QLCDNumber_new2();
    }


    /// New3 constructs a new QLCDNumber object.
    pub fn New3(numDigits: u32) QtC.QLCDNumber {
        return qtc.QLCDNumber_new3(numDigits);
    }


    /// New4 constructs a new QLCDNumber object.
    pub fn New4(numDigits: u32, parent: ?*anyopaque) QtC.QLCDNumber {
        return qtc.QLCDNumber_new4(numDigits, @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLCDNumber_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlcdnumber.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SmallDecimalPoint(self: ?*anyopaque, ) bool {
        return qtc.QLCDNumber_SmallDecimalPoint(@ptrCast(self));
    }

    pub fn DigitCount(self: ?*anyopaque, ) i32 {
        return qtc.QLCDNumber_DigitCount(@ptrCast(self));
    }

    pub fn SetDigitCount(self: ?*anyopaque, nDigits: i32) void {
        qtc.QLCDNumber_SetDigitCount(@ptrCast(self), nDigits);
    }

    pub fn CheckOverflow(self: ?*anyopaque, num: f64) bool {
        return qtc.QLCDNumber_CheckOverflow(@ptrCast(self), num);
    }

    pub fn CheckOverflow2(self: ?*anyopaque, num: i32) bool {
        return qtc.QLCDNumber_CheckOverflow2(@ptrCast(self), num);
    }

    pub fn Mode(self: ?*anyopaque, ) i32 {
        return qtc.QLCDNumber_Mode(@ptrCast(self));
    }

    pub fn SetMode(self: ?*anyopaque, mode: i32) void {
        qtc.QLCDNumber_SetMode(@ptrCast(self), @intCast(mode));
    }

    pub fn SegmentStyle(self: ?*anyopaque, ) i32 {
        return qtc.QLCDNumber_SegmentStyle(@ptrCast(self));
    }

    pub fn SetSegmentStyle(self: ?*anyopaque, segmentStyle: i32) void {
        qtc.QLCDNumber_SetSegmentStyle(@ptrCast(self), @intCast(segmentStyle));
    }

    pub fn Value(self: ?*anyopaque, ) f64 {
        return qtc.QLCDNumber_Value(@ptrCast(self));
    }

    pub fn IntValue(self: ?*anyopaque, ) i32 {
        return qtc.QLCDNumber_IntValue(@ptrCast(self));
    }

    pub fn SizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QLCDNumber_SizeHint(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSizeHint(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.QLCDNumber_OnSizeHint(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSizeHint(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QLCDNumber_QBaseSizeHint(@ptrCast(self));
    }

    pub fn Display(self: ?*anyopaque, str: []const u8) void {
        const str_str = qtc.libqt_string{
    .len = str.len,
    .data = str.ptr,
};
qtc.QLCDNumber_Display(@ptrCast(self), str_str);
    }

    pub fn Display2(self: ?*anyopaque, num: i32) void {
        qtc.QLCDNumber_Display2(@ptrCast(self), num);
    }

    pub fn Display3(self: ?*anyopaque, num: f64) void {
        qtc.QLCDNumber_Display3(@ptrCast(self), num);
    }

    pub fn SetHexMode(self: ?*anyopaque, ) void {
        qtc.QLCDNumber_SetHexMode(@ptrCast(self));
    }

    pub fn SetDecMode(self: ?*anyopaque, ) void {
        qtc.QLCDNumber_SetDecMode(@ptrCast(self));
    }

    pub fn SetOctMode(self: ?*anyopaque, ) void {
        qtc.QLCDNumber_SetOctMode(@ptrCast(self));
    }

    pub fn SetBinMode(self: ?*anyopaque, ) void {
        qtc.QLCDNumber_SetBinMode(@ptrCast(self));
    }

    pub fn SetSmallDecimalPoint(self: ?*anyopaque, smallDecimalPoint: bool) void {
        qtc.QLCDNumber_SetSmallDecimalPoint(@ptrCast(self), smallDecimalPoint);
    }

    pub fn Overflow(self: ?*anyopaque, ) void {
        qtc.QLCDNumber_Overflow(@ptrCast(self));
    }

    pub fn OnOverflow(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QLCDNumber_Connect_Overflow(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Event(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QLCDNumber_Event(@ptrCast(self), @ptrCast(e));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QLCDNumber_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, e: ?*anyopaque) bool {
        return qtc.QLCDNumber_QBaseEvent(@ptrCast(self), @ptrCast(e));
    }

    pub fn PaintEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLCDNumber_PaintEvent(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnPaintEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QLCDNumber_OnPaintEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePaintEvent(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QLCDNumber_QBasePaintEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLCDNumber_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlcdnumber.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLCDNumber_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlcdnumber.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QLCDNumber_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/lcdnumber.html#types
pub const enums = struct {
    pub const Mode = enum {
        pub const Hex: i32 = 0;
        pub const Dec: i32 = 1;
        pub const Oct: i32 = 2;
        pub const Bin: i32 = 3;
    };

    pub const SegmentStyle = enum {
        pub const Outline: i32 = 0;
        pub const Filled: i32 = 1;
        pub const Flat: i32 = 2;
    };

};
