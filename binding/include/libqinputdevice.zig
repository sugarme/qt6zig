const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qinputdevice.html
pub const qinputdevice = struct {

    /// New constructs a new QInputDevice object.
    pub fn New() QtC.QInputDevice {
        return qtc.QInputDevice_new();
    }


    /// New2 constructs a new QInputDevice object.
    pub fn New2(name: []const u8, systemId: i64, typeVal: i32) QtC.QInputDevice {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QInputDevice_new2(name_str, systemId, @intCast(typeVal));
    }


    /// New3 constructs a new QInputDevice object.
    pub fn New3(parent: ?*anyopaque) QtC.QInputDevice {
        return qtc.QInputDevice_new3(@ptrCast(parent));
    }


    /// New4 constructs a new QInputDevice object.
    pub fn New4(name: []const u8, systemId: i64, typeVal: i32, seatName: []const u8) QtC.QInputDevice {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
const seatName_str = qtc.libqt_string{
    .len = seatName.len,
    .data = seatName.ptr,
};
return qtc.QInputDevice_new4(name_str, systemId, @intCast(typeVal), seatName_str);
    }


    /// New5 constructs a new QInputDevice object.
    pub fn New5(name: []const u8, systemId: i64, typeVal: i32, seatName: []const u8, parent: ?*anyopaque) QtC.QInputDevice {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
const seatName_str = qtc.libqt_string{
    .len = seatName.len,
    .data = seatName.ptr,
};
return qtc.QInputDevice_new5(name_str, systemId, @intCast(typeVal), seatName_str, @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QInputDevice_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qinputdevice.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Name(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QInputDevice_Name(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qinputdevice.Name: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QInputDevice_Type(@ptrCast(self));
    }

    pub fn Capabilities(self: ?*anyopaque, ) i32 {
        return qtc.QInputDevice_Capabilities(@ptrCast(self));
    }

    pub fn HasCapability(self: ?*anyopaque, cap: i32) bool {
        return qtc.QInputDevice_HasCapability(@ptrCast(self), @intCast(cap));
    }

    pub fn SystemId(self: ?*anyopaque, ) i64 {
        return qtc.QInputDevice_SystemId(@ptrCast(self));
    }

    pub fn SeatName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QInputDevice_SeatName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qinputdevice.SeatName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn AvailableVirtualGeometry(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QInputDevice_AvailableVirtualGeometry(@ptrCast(self));
    }

    pub fn SeatNames() []const u8 {
        return qtc.QInputDevice_SeatNames();
    }

    pub fn Devices() []const u8 {
        return qtc.QInputDevice_Devices();
    }

    pub fn PrimaryKeyboard() QtC.QInputDevice {
        return qtc.QInputDevice_PrimaryKeyboard();
    }

    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QInputDevice_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn AvailableVirtualGeometryChanged(self: ?*anyopaque, area: QtC.QRect) void {
        qtc.QInputDevice_AvailableVirtualGeometryChanged(@ptrCast(self), @ptrCast(area));
    }

    pub fn OnAvailableVirtualGeometryChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, QtC.QRect) callconv(.c) void) void {
        qtc.QInputDevice_Connect_AvailableVirtualGeometryChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QInputDevice_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qinputdevice.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QInputDevice_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qinputdevice.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn PrimaryKeyboard1(seatName: []const u8) QtC.QInputDevice {
        const seatName_str = qtc.libqt_string{
    .len = seatName.len,
    .data = seatName.ptr,
};
return qtc.QInputDevice_PrimaryKeyboard1(seatName_str);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QInputDevice_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/inputdevice.html#types
pub const enums = struct {
    pub const DeviceType = enum {
        pub const Unknown: i32 = 0;
        pub const Mouse: i32 = 1;
        pub const TouchScreen: i32 = 2;
        pub const TouchPad: i32 = 4;
        pub const Puck: i32 = 8;
        pub const Stylus: i32 = 16;
        pub const Airbrush: i32 = 32;
        pub const Keyboard: i32 = 4096;
        pub const AllDevices: i32 = 2147483647;
    };

    pub const Capability = enum {
        pub const None: i32 = 0;
        pub const Position: i32 = 1;
        pub const Area: i32 = 2;
        pub const Pressure: i32 = 4;
        pub const Velocity: i32 = 8;
        pub const NormalizedPosition: i32 = 32;
        pub const MouseEmulation: i32 = 64;
        pub const PixelScroll: i32 = 128;
        pub const Scroll: i32 = 256;
        pub const Hover: i32 = 512;
        pub const Rotation: i32 = 1024;
        pub const XTilt: i32 = 2048;
        pub const YTilt: i32 = 4096;
        pub const TangentialPressure: i32 = 8192;
        pub const ZPosition: i32 = 16384;
        pub const All: i32 = 2147483647;
    };

};
