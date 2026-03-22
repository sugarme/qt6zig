const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qsharedmemory.html
pub const qsharedmemory = struct {

    /// New constructs a new QSharedMemory object.
    pub fn New() QtC.QSharedMemory {
        return qtc.QSharedMemory_new();
    }


    /// New2 constructs a new QSharedMemory object.
    pub fn New2(key: ?*anyopaque) QtC.QSharedMemory {
        return qtc.QSharedMemory_new2(@ptrCast(key));
    }


    /// New3 constructs a new QSharedMemory object.
    pub fn New3(key: []const u8) QtC.QSharedMemory {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
return qtc.QSharedMemory_new3(key_str);
    }


    /// New4 constructs a new QSharedMemory object.
    pub fn New4(parent: ?*anyopaque) QtC.QSharedMemory {
        return qtc.QSharedMemory_new4(@ptrCast(parent));
    }


    /// New5 constructs a new QSharedMemory object.
    pub fn New5(key: ?*anyopaque, parent: ?*anyopaque) QtC.QSharedMemory {
        return qtc.QSharedMemory_new5(@ptrCast(key), @ptrCast(parent));
    }


    /// New6 constructs a new QSharedMemory object.
    pub fn New6(key: []const u8, parent: ?*anyopaque) QtC.QSharedMemory {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
return qtc.QSharedMemory_new6(key_str, @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSharedMemory_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsharedmemory.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetKey(self: ?*anyopaque, key: []const u8) void {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
qtc.QSharedMemory_SetKey(@ptrCast(self), key_str);
    }

    pub fn Key(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSharedMemory_Key(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsharedmemory.Key: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetNativeKey(self: ?*anyopaque, key: ?*anyopaque) void {
        qtc.QSharedMemory_SetNativeKey(@ptrCast(self), @ptrCast(key));
    }

    pub fn SetNativeKey2(self: ?*anyopaque, key: []const u8) void {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
qtc.QSharedMemory_SetNativeKey2(@ptrCast(self), key_str);
    }

    pub fn NativeKey(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSharedMemory_NativeKey(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsharedmemory.NativeKey: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn NativeIpcKey(self: ?*anyopaque, ) QtC.QNativeIpcKey {
        return qtc.QSharedMemory_NativeIpcKey(@ptrCast(self));
    }

    pub fn Create(self: ?*anyopaque, size: i64) bool {
        return qtc.QSharedMemory_Create(@ptrCast(self), size);
    }

    pub fn Size(self: ?*anyopaque, ) i64 {
        return qtc.QSharedMemory_Size(@ptrCast(self));
    }

    pub fn Attach(self: ?*anyopaque, ) bool {
        return qtc.QSharedMemory_Attach(@ptrCast(self));
    }

    pub fn IsAttached(self: ?*anyopaque, ) bool {
        return qtc.QSharedMemory_IsAttached(@ptrCast(self));
    }

    pub fn Detach(self: ?*anyopaque, ) bool {
        return qtc.QSharedMemory_Detach(@ptrCast(self));
    }

    pub fn Data(self: ?*anyopaque, ) ?*anyopaque {
        return qtc.QSharedMemory_Data(@ptrCast(self));
    }

    pub fn ConstData(self: ?*anyopaque, ) ?*anyopaque {
        return qtc.QSharedMemory_ConstData(@ptrCast(self));
    }

    pub fn Data2(self: ?*anyopaque, ) ?*anyopaque {
        return qtc.QSharedMemory_Data2(@ptrCast(self));
    }

    pub fn Lock(self: ?*anyopaque, ) bool {
        return qtc.QSharedMemory_Lock(@ptrCast(self));
    }

    pub fn Unlock(self: ?*anyopaque, ) bool {
        return qtc.QSharedMemory_Unlock(@ptrCast(self));
    }

    pub fn Error(self: ?*anyopaque, ) i32 {
        return qtc.QSharedMemory_Error(@ptrCast(self));
    }

    pub fn ErrorString(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSharedMemory_ErrorString(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsharedmemory.ErrorString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn IsKeyTypeSupported(typeVal: u16) bool {
        return qtc.QSharedMemory_IsKeyTypeSupported(@intCast(typeVal));
    }

    pub fn PlatformSafeKey(key: []const u8) QtC.QNativeIpcKey {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
return qtc.QSharedMemory_PlatformSafeKey(key_str);
    }

    pub fn LegacyNativeKey(key: []const u8) QtC.QNativeIpcKey {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
return qtc.QSharedMemory_LegacyNativeKey(key_str);
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSharedMemory_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsharedmemory.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSharedMemory_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qsharedmemory.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetNativeKey22(self: ?*anyopaque, key: []const u8, typeVal: u16) void {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
qtc.QSharedMemory_SetNativeKey22(@ptrCast(self), key_str, @intCast(typeVal));
    }

    pub fn Create2(self: ?*anyopaque, size: i64, mode: i32) bool {
        return qtc.QSharedMemory_Create2(@ptrCast(self), size, @intCast(mode));
    }

    pub fn Attach1(self: ?*anyopaque, mode: i32) bool {
        return qtc.QSharedMemory_Attach1(@ptrCast(self), @intCast(mode));
    }

    pub fn PlatformSafeKey2(key: []const u8, typeVal: u16) QtC.QNativeIpcKey {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
return qtc.QSharedMemory_PlatformSafeKey2(key_str, @intCast(typeVal));
    }

    pub fn LegacyNativeKey2(key: []const u8, typeVal: u16) QtC.QNativeIpcKey {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
return qtc.QSharedMemory_LegacyNativeKey2(key_str, @intCast(typeVal));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSharedMemory_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/sharedmemory.html#types
pub const enums = struct {
    pub const AccessMode = enum {
        pub const ReadOnly: i32 = 0;
        pub const ReadWrite: i32 = 1;
    };

    pub const SharedMemoryError = enum {
        pub const NoError: i32 = 0;
        pub const PermissionDenied: i32 = 1;
        pub const InvalidSize: i32 = 2;
        pub const KeyError: i32 = 3;
        pub const AlreadyExists: i32 = 4;
        pub const NotFound: i32 = 5;
        pub const LockError: i32 = 6;
        pub const OutOfResources: i32 = 7;
        pub const UnknownError: i32 = 8;
    };

};
