const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qpointingdeviceuniqueid.html
pub const qpointingdeviceuniqueid = struct {

    /// New constructs a new QPointingDeviceUniqueId object.
    pub fn New(other: ?*anyopaque) QtC.QPointingDeviceUniqueId {
        return qtc.QPointingDeviceUniqueId_new(@ptrCast(other));
    }


    /// New2 constructs a new QPointingDeviceUniqueId object.
    pub fn New2(other: ?*anyopaque) QtC.QPointingDeviceUniqueId {
        return qtc.QPointingDeviceUniqueId_new2(@ptrCast(other));
    }


    /// New3 constructs a new QPointingDeviceUniqueId object.
    pub fn New3() QtC.QPointingDeviceUniqueId {
        return qtc.QPointingDeviceUniqueId_new3();
    }


    /// New4 constructs a new QPointingDeviceUniqueId object.
    pub fn New4(param1: ?*anyopaque) QtC.QPointingDeviceUniqueId {
        return qtc.QPointingDeviceUniqueId_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPointingDeviceUniqueId_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QPointingDeviceUniqueId_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn FromNumericId(id: i64) QtC.QPointingDeviceUniqueId {
        return qtc.QPointingDeviceUniqueId_FromNumericId(id);
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QPointingDeviceUniqueId_IsValid(@ptrCast(self));
    }

    pub fn NumericId(self: ?*anyopaque, ) i64 {
        return qtc.QPointingDeviceUniqueId_NumericId(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPointingDeviceUniqueId_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpointingdevice.html
pub const qpointingdevice = struct {

    /// New constructs a new QPointingDevice object.
    pub fn New() QtC.QPointingDevice {
        return qtc.QPointingDevice_new();
    }


    /// New2 constructs a new QPointingDevice object.
    pub fn New2(name: []const u8, systemId: i64, devType: i32, pType: i32, caps: i32, maxPoints: i32, buttonCount: i32) QtC.QPointingDevice {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QPointingDevice_new2(name_str, systemId, @intCast(devType), @intCast(pType), @intCast(caps), maxPoints, buttonCount);
    }


    /// New3 constructs a new QPointingDevice object.
    pub fn New3(parent: ?*anyopaque) QtC.QPointingDevice {
        return qtc.QPointingDevice_new3(@ptrCast(parent));
    }


    /// New4 constructs a new QPointingDevice object.
    pub fn New4(name: []const u8, systemId: i64, devType: i32, pType: i32, caps: i32, maxPoints: i32, buttonCount: i32, seatName: []const u8) QtC.QPointingDevice {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
const seatName_str = qtc.libqt_string{
    .len = seatName.len,
    .data = seatName.ptr,
};
return qtc.QPointingDevice_new4(name_str, systemId, @intCast(devType), @intCast(pType), @intCast(caps), maxPoints, buttonCount, seatName_str);
    }


    /// New5 constructs a new QPointingDevice object.
    pub fn New5(name: []const u8, systemId: i64, devType: i32, pType: i32, caps: i32, maxPoints: i32, buttonCount: i32, seatName: []const u8, uniqueId: QtC.QPointingDeviceUniqueId) QtC.QPointingDevice {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
const seatName_str = qtc.libqt_string{
    .len = seatName.len,
    .data = seatName.ptr,
};
return qtc.QPointingDevice_new5(name_str, systemId, @intCast(devType), @intCast(pType), @intCast(caps), maxPoints, buttonCount, seatName_str, @ptrCast(uniqueId));
    }


    /// New6 constructs a new QPointingDevice object.
    pub fn New6(name: []const u8, systemId: i64, devType: i32, pType: i32, caps: i32, maxPoints: i32, buttonCount: i32, seatName: []const u8, uniqueId: QtC.QPointingDeviceUniqueId, parent: ?*anyopaque) QtC.QPointingDevice {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
const seatName_str = qtc.libqt_string{
    .len = seatName.len,
    .data = seatName.ptr,
};
return qtc.QPointingDevice_new6(name_str, systemId, @intCast(devType), @intCast(pType), @intCast(caps), maxPoints, buttonCount, seatName_str, @ptrCast(uniqueId), @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPointingDevice_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qpointingdevice.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetType(self: ?*anyopaque, devType: i32) void {
        qtc.QPointingDevice_SetType(@ptrCast(self), @intCast(devType));
    }

    pub fn SetCapabilities(self: ?*anyopaque, caps: i32) void {
        qtc.QPointingDevice_SetCapabilities(@ptrCast(self), @intCast(caps));
    }

    pub fn SetMaximumTouchPoints(self: ?*anyopaque, c: i32) void {
        qtc.QPointingDevice_SetMaximumTouchPoints(@ptrCast(self), c);
    }

    pub fn PointerType(self: ?*anyopaque, ) i32 {
        return qtc.QPointingDevice_PointerType(@ptrCast(self));
    }

    pub fn MaximumPoints(self: ?*anyopaque, ) i32 {
        return qtc.QPointingDevice_MaximumPoints(@ptrCast(self));
    }

    pub fn ButtonCount(self: ?*anyopaque, ) i32 {
        return qtc.QPointingDevice_ButtonCount(@ptrCast(self));
    }

    pub fn UniqueId(self: ?*anyopaque, ) QtC.QPointingDeviceUniqueId {
        return qtc.QPointingDevice_UniqueId(@ptrCast(self));
    }

    pub fn PrimaryPointingDevice() QtC.QPointingDevice {
        return qtc.QPointingDevice_PrimaryPointingDevice();
    }

    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QPointingDevice_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn GrabChanged(self: ?*anyopaque, grabber: ?*anyopaque, transition: i32, event: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QPointingDevice_GrabChanged(@ptrCast(self), @ptrCast(grabber), @intCast(transition), @ptrCast(event), @ptrCast(point));
    }

    pub fn OnGrabChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPointingDevice_Connect_GrabChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPointingDevice_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qpointingdevice.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPointingDevice_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qpointingdevice.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn PrimaryPointingDevice1(seatName: []const u8) QtC.QPointingDevice {
        const seatName_str = qtc.libqt_string{
    .len = seatName.len,
    .data = seatName.ptr,
};
return qtc.QPointingDevice_PrimaryPointingDevice1(seatName_str);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPointingDevice_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/pointingdevice.html#types
pub const enums = struct {
    pub const PointerType = enum {
        pub const Unknown: i32 = 0;
        pub const Generic: i32 = 1;
        pub const Finger: i32 = 2;
        pub const Pen: i32 = 4;
        pub const Eraser: i32 = 8;
        pub const Cursor: i32 = 16;
        pub const AllPointerTypes: i32 = 32767;
    };

    pub const GrabTransition = enum {
        pub const GrabPassive: i32 = 1;
        pub const UngrabPassive: i32 = 2;
        pub const CancelGrabPassive: i32 = 3;
        pub const OverrideGrabPassive: i32 = 4;
        pub const GrabExclusive: i32 = 16;
        pub const UngrabExclusive: i32 = 32;
        pub const CancelGrabExclusive: i32 = 48;
    };

};
