const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qhostinfo.html
pub const qhostinfo = struct {

    /// New constructs a new QHostInfo object.
    pub fn New() QtC.QHostInfo {
        return qtc.QHostInfo_new();
    }


    /// New2 constructs a new QHostInfo object.
    pub fn New2(d: ?*anyopaque) QtC.QHostInfo {
        return qtc.QHostInfo_new2(@ptrCast(d));
    }


    /// New3 constructs a new QHostInfo object.
    pub fn New3(lookupId: i32) QtC.QHostInfo {
        return qtc.QHostInfo_new3(lookupId);
    }


    pub fn OperatorAssign(self: ?*anyopaque, d: ?*anyopaque) void {
        qtc.QHostInfo_OperatorAssign(@ptrCast(self), @ptrCast(d));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QHostInfo_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn HostName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QHostInfo_HostName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qhostinfo.HostName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetHostName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
qtc.QHostInfo_SetHostName(@ptrCast(self), name_str);
    }

    pub fn Addresses(self: ?*anyopaque, ) []const u8 {
        return qtc.QHostInfo_Addresses(@ptrCast(self));
    }

    pub fn SetAddresses(self: ?*anyopaque, addresses: []const u8) void {
        qtc.QHostInfo_SetAddresses(@ptrCast(self), @ptrCast(addresses));
    }

    pub fn Error(self: ?*anyopaque, ) i32 {
        return qtc.QHostInfo_Error(@ptrCast(self));
    }

    pub fn SetError(self: ?*anyopaque, errorVal: i32) void {
        qtc.QHostInfo_SetError(@ptrCast(self), @intCast(errorVal));
    }

    pub fn ErrorString(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QHostInfo_ErrorString(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qhostinfo.ErrorString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetErrorString(self: ?*anyopaque, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
    .len = errorString.len,
    .data = errorString.ptr,
};
qtc.QHostInfo_SetErrorString(@ptrCast(self), errorString_str);
    }

    pub fn SetLookupId(self: ?*anyopaque, id: i32) void {
        qtc.QHostInfo_SetLookupId(@ptrCast(self), id);
    }

    pub fn LookupId(self: ?*anyopaque, ) i32 {
        return qtc.QHostInfo_LookupId(@ptrCast(self));
    }

    pub fn LookupHost(name: []const u8, receiver: ?*anyopaque, member: []const u8) i32 {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QHostInfo_LookupHost(name_str, @ptrCast(receiver), @ptrCast(member));
    }

    pub fn AbortHostLookup(lookupId: i32) void {
        qtc.QHostInfo_AbortHostLookup(lookupId);
    }

    pub fn FromName(name: []const u8) QtC.QHostInfo {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QHostInfo_FromName(name_str);
    }

    pub fn LocalHostName(, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QHostInfo_LocalHostName();
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qhostinfo.LocalHostName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn LocalDomainName(, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QHostInfo_LocalDomainName();
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qhostinfo.LocalDomainName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QHostInfo_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/hostinfo.html#types
pub const enums = struct {
    pub const HostInfoError = enum {
        pub const NoError: i32 = 0;
        pub const HostNotFound: i32 = 1;
        pub const UnknownError: i32 = 2;
    };

};
