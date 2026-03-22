const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qsysinfo.html
pub const qsysinfo = struct {

    /// New constructs a new QSysInfo object.
    pub fn New(other: ?*anyopaque) QtC.QSysInfo {
        return qtc.QSysInfo_new(@ptrCast(other));
    }


    /// New2 constructs a new QSysInfo object.
    pub fn New2(other: ?*anyopaque) QtC.QSysInfo {
        return qtc.QSysInfo_new2(@ptrCast(other));
    }


    /// New3 constructs a new QSysInfo object.
    pub fn New3() QtC.QSysInfo {
        return qtc.QSysInfo_new3();
    }


    /// New4 constructs a new QSysInfo object.
    pub fn New4(param1: ?*anyopaque) QtC.QSysInfo {
        return qtc.QSysInfo_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSysInfo_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QSysInfo_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn BuildCpuArchitecture(, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSysInfo_BuildCpuArchitecture();
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsysinfo.BuildCpuArchitecture: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn CurrentCpuArchitecture(, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSysInfo_CurrentCpuArchitecture();
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsysinfo.CurrentCpuArchitecture: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn BuildAbi(, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSysInfo_BuildAbi();
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsysinfo.BuildAbi: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn KernelType(, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSysInfo_KernelType();
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsysinfo.KernelType: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn KernelVersion(, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSysInfo_KernelVersion();
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsysinfo.KernelVersion: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ProductType(, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSysInfo_ProductType();
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsysinfo.ProductType: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ProductVersion(, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSysInfo_ProductVersion();
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsysinfo.ProductVersion: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn PrettyProductName(, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSysInfo_PrettyProductName();
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsysinfo.PrettyProductName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn MachineHostName(, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSysInfo_MachineHostName();
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsysinfo.MachineHostName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn MachineUniqueId(, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QSysInfo_MachineUniqueId();
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsysinfo.MachineUniqueId: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn BootUniqueId(, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QSysInfo_BootUniqueId();
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qsysinfo.BootUniqueId: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QSysInfo_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSysInfo_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/sysinfo.html#types
pub const enums = struct {
    pub const Sizes = enum {
        pub const WordSize: i32 = 64;
    };

    pub const Endian = enum {
        pub const BigEndian: i32 = 0;
        pub const LittleEndian: i32 = 1;
        pub const ByteOrder: i32 = 1;
    };

};
