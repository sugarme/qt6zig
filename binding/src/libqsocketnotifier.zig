const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qsocketnotifier.html
pub const qsocketnotifier = struct {

    /// New constructs a new QSocketNotifier object.
    pub fn New(param1: i32) QtC.QSocketNotifier {
        return qtc.QSocketNotifier_new(@intCast(param1));
    }


    /// New2 constructs a new QSocketNotifier object.
    pub fn New2(socket: isize, param2: i32) QtC.QSocketNotifier {
        return qtc.QSocketNotifier_new2(socket, @intCast(param2));
    }


    /// New3 constructs a new QSocketNotifier object.
    pub fn New3(param1: i32, parent: ?*anyopaque) QtC.QSocketNotifier {
        return qtc.QSocketNotifier_new3(@intCast(param1), @ptrCast(parent));
    }


    /// New4 constructs a new QSocketNotifier object.
    pub fn New4(socket: isize, param2: i32, parent: ?*anyopaque) QtC.QSocketNotifier {
        return qtc.QSocketNotifier_new4(socket, @intCast(param2), @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSocketNotifier_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsocketnotifier.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetSocket(self: ?*anyopaque, socket: isize) void {
        qtc.QSocketNotifier_SetSocket(@ptrCast(self), socket);
    }

    pub fn Socket(self: ?*anyopaque, ) isize {
        return qtc.QSocketNotifier_Socket(@ptrCast(self));
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QSocketNotifier_Type(@ptrCast(self));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QSocketNotifier_IsValid(@ptrCast(self));
    }

    pub fn IsEnabled(self: ?*anyopaque, ) bool {
        return qtc.QSocketNotifier_IsEnabled(@ptrCast(self));
    }

    pub fn SetEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QSocketNotifier_SetEnabled(@ptrCast(self), enabled);
    }

    pub fn Event(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QSocketNotifier_Event(@ptrCast(self), @ptrCast(param1));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSocketNotifier_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, param1: ?*anyopaque) bool {
        return qtc.QSocketNotifier_QBaseEvent(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSocketNotifier_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsocketnotifier.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSocketNotifier_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsocketnotifier.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Wrapper to allow calling private signal
    pub fn Onactivated(self: ?*anyopaque, callback: *const fn (?*anyopaque, QtC.QSocketDescriptor, i32) callconv(.c) void) void {
        qtc.QSocketNotifier_Connect_activated(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSocketNotifier_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qsocketdescriptor.html
pub const qsocketdescriptor = struct {

    /// New constructs a new QSocketDescriptor object.
    pub fn New(other: ?*anyopaque) QtC.QSocketDescriptor {
        return qtc.QSocketDescriptor_new(@ptrCast(other));
    }


    /// New2 constructs a new QSocketDescriptor object.
    pub fn New2(other: ?*anyopaque) QtC.QSocketDescriptor {
        return qtc.QSocketDescriptor_new2(@ptrCast(other));
    }


    /// New3 constructs a new QSocketDescriptor object.
    pub fn New3() QtC.QSocketDescriptor {
        return qtc.QSocketDescriptor_new3();
    }


    /// New4 constructs a new QSocketDescriptor object.
    pub fn New4(desc: isize) QtC.QSocketDescriptor {
        return qtc.QSocketDescriptor_new4(desc);
    }


    /// New5 constructs a new QSocketDescriptor object.
    pub fn New5(param1: ?*anyopaque) QtC.QSocketDescriptor {
        return qtc.QSocketDescriptor_new5(@ptrCast(param1));
    }


    /// New6 constructs a new QSocketDescriptor object.
    pub fn New6(descriptor: ?*anyopaque) QtC.QSocketDescriptor {
        return qtc.QSocketDescriptor_new6(@ptrCast(descriptor));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSocketDescriptor_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSocketDescriptor_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn OperatorlongLong(self: ?*anyopaque, ) isize {
        return qtc.QSocketDescriptor_OperatorlongLong(@ptrCast(self));
    }

    pub fn WinHandle(self: ?*anyopaque, ) ?*anyopaque {
        return qtc.QSocketDescriptor_WinHandle(@ptrCast(self));
    }

    pub fn OperatorvoidMultiply(self: ?*anyopaque, ) ?*anyopaque {
        return qtc.QSocketDescriptor_OperatorvoidMultiply(@ptrCast(self));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QSocketDescriptor_IsValid(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSocketDescriptor_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/socketnotifier.html#types
pub const enums = struct {
    pub const Type = enum {
        pub const Read: i32 = 0;
        pub const Write: i32 = 1;
        pub const Exception: i32 = 2;
    };

};
