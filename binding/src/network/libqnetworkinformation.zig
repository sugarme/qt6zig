const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qnetworkinformation.html
pub const qnetworkinformation = struct {

    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QNetworkInformation_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkinformation.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Reachability(self: ?*anyopaque, ) i32 {
        return qtc.QNetworkInformation_Reachability(@ptrCast(self));
    }

    pub fn IsBehindCaptivePortal(self: ?*anyopaque, ) bool {
        return qtc.QNetworkInformation_IsBehindCaptivePortal(@ptrCast(self));
    }

    pub fn TransportMedium(self: ?*anyopaque, ) i32 {
        return qtc.QNetworkInformation_TransportMedium(@ptrCast(self));
    }

    pub fn IsMetered(self: ?*anyopaque, ) bool {
        return qtc.QNetworkInformation_IsMetered(@ptrCast(self));
    }

    pub fn BackendName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QNetworkInformation_BackendName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkinformation.BackendName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Supports(self: ?*anyopaque, features: i32) bool {
        return qtc.QNetworkInformation_Supports(@ptrCast(self), @intCast(features));
    }

    pub fn SupportedFeatures(self: ?*anyopaque, ) i32 {
        return qtc.QNetworkInformation_SupportedFeatures(@ptrCast(self));
    }

    pub fn LoadDefaultBackend() bool {
        return qtc.QNetworkInformation_LoadDefaultBackend();
    }

    pub fn LoadBackendByName(backend: []const u8) bool {
        return qtc.QNetworkInformation_LoadBackendByName(@ptrCast(backend));
    }

    pub fn LoadBackendByFeatures(features: i32) bool {
        return qtc.QNetworkInformation_LoadBackendByFeatures(@intCast(features));
    }

    pub fn Load(backend: []const u8) bool {
        return qtc.QNetworkInformation_Load(@ptrCast(backend));
    }

    pub fn Load2(features: i32) bool {
        return qtc.QNetworkInformation_Load2(@intCast(features));
    }

    pub fn AvailableBackends() []const u8 {
        return qtc.QNetworkInformation_AvailableBackends();
    }

    pub fn Instance() QtC.QNetworkInformation {
        return qtc.QNetworkInformation_Instance();
    }

    pub fn ReachabilityChanged(self: ?*anyopaque, newReachability: i32) void {
        qtc.QNetworkInformation_ReachabilityChanged(@ptrCast(self), @intCast(newReachability));
    }

    pub fn OnReachabilityChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QNetworkInformation_Connect_ReachabilityChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn IsBehindCaptivePortalChanged(self: ?*anyopaque, state: bool) void {
        qtc.QNetworkInformation_IsBehindCaptivePortalChanged(@ptrCast(self), state);
    }

    pub fn OnIsBehindCaptivePortalChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QNetworkInformation_Connect_IsBehindCaptivePortalChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn TransportMediumChanged(self: ?*anyopaque, current: i32) void {
        qtc.QNetworkInformation_TransportMediumChanged(@ptrCast(self), @intCast(current));
    }

    pub fn OnTransportMediumChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QNetworkInformation_Connect_TransportMediumChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn IsMeteredChanged(self: ?*anyopaque, isMetered: bool) void {
        qtc.QNetworkInformation_IsMeteredChanged(@ptrCast(self), isMetered);
    }

    pub fn OnIsMeteredChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QNetworkInformation_Connect_IsMeteredChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QNetworkInformation_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkinformation.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QNetworkInformation_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qnetworkinformation.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }
};

/// https://doc.qt.io/qt-6/networkinformation.html#types
pub const enums = struct {
    pub const Reachability = enum {
        pub const Unknown: i32 = 0;
        pub const Disconnected: i32 = 1;
        pub const Local: i32 = 2;
        pub const Site: i32 = 3;
        pub const Online: i32 = 4;
    };

    pub const TransportMedium = enum {
        pub const Unknown: i32 = 0;
        pub const Ethernet: i32 = 1;
        pub const Cellular: i32 = 2;
        pub const WiFi: i32 = 3;
        pub const Bluetooth: i32 = 4;
    };

    pub const Feature = enum {
        pub const Reachability: i32 = 1;
        pub const CaptivePortal: i32 = 2;
        pub const TransportMedium: i32 = 4;
        pub const Metered: i32 = 8;
    };

};
