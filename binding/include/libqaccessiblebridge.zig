const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qaccessiblebridge.html
pub const qaccessiblebridge = struct {

    /// New constructs a new QAccessibleBridge object.
    pub fn New() QtC.QAccessibleBridge {
        return qtc.QAccessibleBridge_new();
    }


    /// New2 constructs a new QAccessibleBridge object.
    pub fn New2(param1: ?*anyopaque) QtC.QAccessibleBridge {
        return qtc.QAccessibleBridge_new2(@ptrCast(param1));
    }


    pub fn SetRootObject(self: ?*anyopaque, rootObject: ?*anyopaque) void {
        qtc.QAccessibleBridge_SetRootObject(@ptrCast(self), @ptrCast(rootObject));
    }

    /// Allows for overriding the related default method
    pub fn OnSetRootObject(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAccessibleBridge_OnSetRootObject(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetRootObject(self: ?*anyopaque, rootObject: ?*anyopaque) void {
        qtc.QAccessibleBridge_QBaseSetRootObject(@ptrCast(self), @ptrCast(rootObject));
    }

    pub fn NotifyAccessibilityUpdate(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAccessibleBridge_NotifyAccessibilityUpdate(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnNotifyAccessibilityUpdate(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAccessibleBridge_OnNotifyAccessibilityUpdate(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseNotifyAccessibilityUpdate(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.QAccessibleBridge_QBaseNotifyAccessibilityUpdate(@ptrCast(self), @ptrCast(event));
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QAccessibleBridge_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleBridge_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qaccessiblebridgeplugin.html
pub const qaccessiblebridgeplugin = struct {

    /// New constructs a new QAccessibleBridgePlugin object.
    pub fn New() QtC.QAccessibleBridgePlugin {
        return qtc.QAccessibleBridgePlugin_new();
    }


    /// New2 constructs a new QAccessibleBridgePlugin object.
    pub fn New2(parent: ?*anyopaque) QtC.QAccessibleBridgePlugin {
        return qtc.QAccessibleBridgePlugin_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleBridgePlugin_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessiblebridgeplugin.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Create(self: ?*anyopaque, key: []const u8) QtC.QAccessibleBridge {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
return qtc.QAccessibleBridgePlugin_Create(@ptrCast(self), key_str);
    }

    /// Allows for overriding the related default method
    pub fn OnCreate(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) QtC.QAccessibleBridge) void {
        qtc.QAccessibleBridgePlugin_OnCreate(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCreate(self: ?*anyopaque, key: []const u8) QtC.QAccessibleBridge {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
return qtc.QAccessibleBridgePlugin_QBaseCreate(@ptrCast(self), key_str);
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleBridgePlugin_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessiblebridgeplugin.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAccessibleBridgePlugin_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaccessiblebridgeplugin.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAccessibleBridgePlugin_Delete(@ptrCast(self));
    }
};
