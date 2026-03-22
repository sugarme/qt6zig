const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qoperatingsystemversionbase.html
pub const qoperatingsystemversionbase = struct {

    /// New constructs a new QOperatingSystemVersionBase object.
    pub fn New(osType: i32, vmajor: i32) QtC.QOperatingSystemVersionBase {
        return qtc.QOperatingSystemVersionBase_new(@intCast(osType), vmajor);
    }


    /// New2 constructs a new QOperatingSystemVersionBase object.
    pub fn New2(param1: ?*anyopaque) QtC.QOperatingSystemVersionBase {
        return qtc.QOperatingSystemVersionBase_new2(@ptrCast(param1));
    }


    /// New3 constructs a new QOperatingSystemVersionBase object.
    pub fn New3(osType: i32, vmajor: i32, vminor: i32) QtC.QOperatingSystemVersionBase {
        return qtc.QOperatingSystemVersionBase_new3(@intCast(osType), vmajor, vminor);
    }


    /// New4 constructs a new QOperatingSystemVersionBase object.
    pub fn New4(osType: i32, vmajor: i32, vminor: i32, vmicro: i32) QtC.QOperatingSystemVersionBase {
        return qtc.QOperatingSystemVersionBase_new4(@intCast(osType), vmajor, vminor, vmicro);
    }


    pub fn Current() QtC.QOperatingSystemVersionBase {
        return qtc.QOperatingSystemVersionBase_Current();
    }

    pub fn Name(osversion: QtC.QOperatingSystemVersionBase, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QOperatingSystemVersionBase_Name(@ptrCast(osversion));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qoperatingsystemversionbase.Name: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn CurrentType() i32 {
        return qtc.QOperatingSystemVersionBase_CurrentType();
    }

    pub fn Version(self: ?*anyopaque, ) QtC.QVersionNumber {
        return qtc.QOperatingSystemVersionBase_Version(@ptrCast(self));
    }

    pub fn MajorVersion(self: ?*anyopaque, ) i32 {
        return qtc.QOperatingSystemVersionBase_MajorVersion(@ptrCast(self));
    }

    pub fn MinorVersion(self: ?*anyopaque, ) i32 {
        return qtc.QOperatingSystemVersionBase_MinorVersion(@ptrCast(self));
    }

    pub fn MicroVersion(self: ?*anyopaque, ) i32 {
        return qtc.QOperatingSystemVersionBase_MicroVersion(@ptrCast(self));
    }

    pub fn SegmentCount(self: ?*anyopaque, ) i32 {
        return qtc.QOperatingSystemVersionBase_SegmentCount(@ptrCast(self));
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QOperatingSystemVersionBase_Type(@ptrCast(self));
    }

    pub fn Name2(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QOperatingSystemVersionBase_Name2(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qoperatingsystemversionbase.Name2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOperatingSystemVersionBase_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qoperatingsystemversionunexported.html
pub const qoperatingsystemversionunexported = struct {

    /// New constructs a new QOperatingSystemVersionUnexported object.
    pub fn New(other: QtC.QOperatingSystemVersionBase) QtC.QOperatingSystemVersionUnexported {
        return qtc.QOperatingSystemVersionUnexported_new(@ptrCast(other));
    }


    /// New2 constructs a new QOperatingSystemVersionUnexported object.
    pub fn New2() QtC.QOperatingSystemVersionUnexported {
        return qtc.QOperatingSystemVersionUnexported_new2();
    }


    /// New3 constructs a new QOperatingSystemVersionUnexported object.
    pub fn New3(param1: ?*anyopaque) QtC.QOperatingSystemVersionUnexported {
        return qtc.QOperatingSystemVersionUnexported_new3(@ptrCast(param1));
    }


    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QOperatingSystemVersionUnexported_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOperatingSystemVersionUnexported_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qoperatingsystemversion.html
pub const qoperatingsystemversion = struct {

    /// New constructs a new QOperatingSystemVersion object.
    pub fn New(osversion: ?*anyopaque) QtC.QOperatingSystemVersion {
        return qtc.QOperatingSystemVersion_new(@ptrCast(osversion));
    }


    /// New2 constructs a new QOperatingSystemVersion object.
    pub fn New2(osType: i32, vmajor: i32) QtC.QOperatingSystemVersion {
        return qtc.QOperatingSystemVersion_new2(@intCast(osType), vmajor);
    }


    /// New3 constructs a new QOperatingSystemVersion object.
    pub fn New3(param1: ?*anyopaque) QtC.QOperatingSystemVersion {
        return qtc.QOperatingSystemVersion_new3(@ptrCast(param1));
    }


    /// New4 constructs a new QOperatingSystemVersion object.
    pub fn New4(osType: i32, vmajor: i32, vminor: i32) QtC.QOperatingSystemVersion {
        return qtc.QOperatingSystemVersion_new4(@intCast(osType), vmajor, vminor);
    }


    /// New5 constructs a new QOperatingSystemVersion object.
    pub fn New5(osType: i32, vmajor: i32, vminor: i32, vmicro: i32) QtC.QOperatingSystemVersion {
        return qtc.QOperatingSystemVersion_new5(@intCast(osType), vmajor, vminor, vmicro);
    }


    pub fn CurrentType() i32 {
        return qtc.QOperatingSystemVersion_CurrentType();
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QOperatingSystemVersion_Type(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QOperatingSystemVersion_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/operatingsystemversion.html#types
pub const enums = struct {
    pub const OSType = enum {
        pub const Unknown: i32 = 0;
        pub const Windows: i32 = 1;
        pub const MacOS: i32 = 2;
        pub const IOS: i32 = 3;
        pub const TvOS: i32 = 4;
        pub const WatchOS: i32 = 5;
        pub const Android: i32 = 6;
        pub const VisionOS: i32 = 7;
    };

};
