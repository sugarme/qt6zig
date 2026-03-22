const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qrestaccessmanager.html
pub const qrestaccessmanager = struct {

    /// New constructs a new QRestAccessManager object.
    pub fn New(manager: ?*anyopaque) QtC.QRestAccessManager {
        return qtc.QRestAccessManager_new(@ptrCast(manager));
    }


    /// New2 constructs a new QRestAccessManager object.
    pub fn New2(manager: ?*anyopaque, parent: ?*anyopaque) QtC.QRestAccessManager {
        return qtc.QRestAccessManager_new2(@ptrCast(manager), @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QRestAccessManager_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qrestaccessmanager.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn NetworkAccessManager(self: ?*anyopaque, ) QtC.QNetworkAccessManager {
        return qtc.QRestAccessManager_NetworkAccessManager(@ptrCast(self));
    }

    pub fn DeleteResource(self: ?*anyopaque, request: ?*anyopaque) QtC.QNetworkReply {
        return qtc.QRestAccessManager_DeleteResource(@ptrCast(self), @ptrCast(request));
    }

    pub fn OnDeleteResource(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QRestAccessManager_Connect_DeleteResource(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Head(self: ?*anyopaque, request: ?*anyopaque) QtC.QNetworkReply {
        return qtc.QRestAccessManager_Head(@ptrCast(self), @ptrCast(request));
    }

    pub fn OnHead(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QRestAccessManager_Connect_Head(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Get(self: ?*anyopaque, request: ?*anyopaque) QtC.QNetworkReply {
        return qtc.QRestAccessManager_Get(@ptrCast(self), @ptrCast(request));
    }

    pub fn OnGet(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QRestAccessManager_Connect_Get(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Get2(self: ?*anyopaque, request: ?*anyopaque, data: []u8) QtC.QNetworkReply {
        const data_str = qtc.libqt_string{
    .len = data.len,
    .data = data.ptr,
};
return qtc.QRestAccessManager_Get2(@ptrCast(self), @ptrCast(request), data_str);
    }

    pub fn OnGet2(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]u8) callconv(.c) void) void {
        qtc.QRestAccessManager_Connect_Get2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Get3(self: ?*anyopaque, request: ?*anyopaque, data: ?*anyopaque) QtC.QNetworkReply {
        return qtc.QRestAccessManager_Get3(@ptrCast(self), @ptrCast(request), @ptrCast(data));
    }

    pub fn OnGet3(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QRestAccessManager_Connect_Get3(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Get4(self: ?*anyopaque, request: ?*anyopaque, data: ?*anyopaque) QtC.QNetworkReply {
        return qtc.QRestAccessManager_Get4(@ptrCast(self), @ptrCast(request), @ptrCast(data));
    }

    pub fn OnGet4(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QRestAccessManager_Connect_Get4(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Post(self: ?*anyopaque, request: ?*anyopaque, data: ?*anyopaque) QtC.QNetworkReply {
        return qtc.QRestAccessManager_Post(@ptrCast(self), @ptrCast(request), @ptrCast(data));
    }

    pub fn OnPost(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QRestAccessManager_Connect_Post(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Post2(self: ?*anyopaque, request: ?*anyopaque, data: *const QMap<QString, QVariant>) QtC.QNetworkReply {
        return qtc.QRestAccessManager_Post2(@ptrCast(self), @ptrCast(request), @ptrCast(data));
    }

    pub fn OnPost2(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, *const QMap<QString, QVariant>) callconv(.c) void) void {
        qtc.QRestAccessManager_Connect_Post2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Post3(self: ?*anyopaque, request: ?*anyopaque, data: []u8) QtC.QNetworkReply {
        const data_str = qtc.libqt_string{
    .len = data.len,
    .data = data.ptr,
};
return qtc.QRestAccessManager_Post3(@ptrCast(self), @ptrCast(request), data_str);
    }

    pub fn OnPost3(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]u8) callconv(.c) void) void {
        qtc.QRestAccessManager_Connect_Post3(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Post4(self: ?*anyopaque, request: ?*anyopaque, data: ?*anyopaque) QtC.QNetworkReply {
        return qtc.QRestAccessManager_Post4(@ptrCast(self), @ptrCast(request), @ptrCast(data));
    }

    pub fn OnPost4(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QRestAccessManager_Connect_Post4(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Post5(self: ?*anyopaque, request: ?*anyopaque, data: ?*anyopaque) QtC.QNetworkReply {
        return qtc.QRestAccessManager_Post5(@ptrCast(self), @ptrCast(request), @ptrCast(data));
    }

    pub fn OnPost5(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QRestAccessManager_Connect_Post5(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Put(self: ?*anyopaque, request: ?*anyopaque, data: ?*anyopaque) QtC.QNetworkReply {
        return qtc.QRestAccessManager_Put(@ptrCast(self), @ptrCast(request), @ptrCast(data));
    }

    pub fn OnPut(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QRestAccessManager_Connect_Put(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Put2(self: ?*anyopaque, request: ?*anyopaque, data: *const QMap<QString, QVariant>) QtC.QNetworkReply {
        return qtc.QRestAccessManager_Put2(@ptrCast(self), @ptrCast(request), @ptrCast(data));
    }

    pub fn OnPut2(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, *const QMap<QString, QVariant>) callconv(.c) void) void {
        qtc.QRestAccessManager_Connect_Put2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Put3(self: ?*anyopaque, request: ?*anyopaque, data: []u8) QtC.QNetworkReply {
        const data_str = qtc.libqt_string{
    .len = data.len,
    .data = data.ptr,
};
return qtc.QRestAccessManager_Put3(@ptrCast(self), @ptrCast(request), data_str);
    }

    pub fn OnPut3(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]u8) callconv(.c) void) void {
        qtc.QRestAccessManager_Connect_Put3(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Put4(self: ?*anyopaque, request: ?*anyopaque, data: ?*anyopaque) QtC.QNetworkReply {
        return qtc.QRestAccessManager_Put4(@ptrCast(self), @ptrCast(request), @ptrCast(data));
    }

    pub fn OnPut4(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QRestAccessManager_Connect_Put4(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Put5(self: ?*anyopaque, request: ?*anyopaque, data: ?*anyopaque) QtC.QNetworkReply {
        return qtc.QRestAccessManager_Put5(@ptrCast(self), @ptrCast(request), @ptrCast(data));
    }

    pub fn OnPut5(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QRestAccessManager_Connect_Put5(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Patch(self: ?*anyopaque, request: ?*anyopaque, data: ?*anyopaque) QtC.QNetworkReply {
        return qtc.QRestAccessManager_Patch(@ptrCast(self), @ptrCast(request), @ptrCast(data));
    }

    pub fn OnPatch(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QRestAccessManager_Connect_Patch(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Patch2(self: ?*anyopaque, request: ?*anyopaque, data: *const QMap<QString, QVariant>) QtC.QNetworkReply {
        return qtc.QRestAccessManager_Patch2(@ptrCast(self), @ptrCast(request), @ptrCast(data));
    }

    pub fn OnPatch2(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, *const QMap<QString, QVariant>) callconv(.c) void) void {
        qtc.QRestAccessManager_Connect_Patch2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Patch3(self: ?*anyopaque, request: ?*anyopaque, data: []u8) QtC.QNetworkReply {
        const data_str = qtc.libqt_string{
    .len = data.len,
    .data = data.ptr,
};
return qtc.QRestAccessManager_Patch3(@ptrCast(self), @ptrCast(request), data_str);
    }

    pub fn OnPatch3(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]u8) callconv(.c) void) void {
        qtc.QRestAccessManager_Connect_Patch3(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Patch4(self: ?*anyopaque, request: ?*anyopaque, data: ?*anyopaque) QtC.QNetworkReply {
        return qtc.QRestAccessManager_Patch4(@ptrCast(self), @ptrCast(request), @ptrCast(data));
    }

    pub fn OnPatch4(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QRestAccessManager_Connect_Patch4(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn SendCustomRequest(self: ?*anyopaque, request: ?*anyopaque, method: []u8, data: []u8) QtC.QNetworkReply {
        const method_str = qtc.libqt_string{
    .len = method.len,
    .data = method.ptr,
};
const data_str = qtc.libqt_string{
    .len = data.len,
    .data = data.ptr,
};
return qtc.QRestAccessManager_SendCustomRequest(@ptrCast(self), @ptrCast(request), method_str, data_str);
    }

    pub fn OnSendCustomRequest(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]u8, [*:0]u8) callconv(.c) void) void {
        qtc.QRestAccessManager_Connect_SendCustomRequest(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn SendCustomRequest2(self: ?*anyopaque, request: ?*anyopaque, method: []u8, data: ?*anyopaque) QtC.QNetworkReply {
        const method_str = qtc.libqt_string{
    .len = method.len,
    .data = method.ptr,
};
return qtc.QRestAccessManager_SendCustomRequest2(@ptrCast(self), @ptrCast(request), method_str, @ptrCast(data));
    }

    pub fn OnSendCustomRequest2(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]u8, ?*anyopaque) callconv(.c) void) void {
        qtc.QRestAccessManager_Connect_SendCustomRequest2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn SendCustomRequest3(self: ?*anyopaque, request: ?*anyopaque, method: []u8, data: ?*anyopaque) QtC.QNetworkReply {
        const method_str = qtc.libqt_string{
    .len = method.len,
    .data = method.ptr,
};
return qtc.QRestAccessManager_SendCustomRequest3(@ptrCast(self), @ptrCast(request), method_str, @ptrCast(data));
    }

    pub fn OnSendCustomRequest3(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, [*:0]u8, ?*anyopaque) callconv(.c) void) void {
        qtc.QRestAccessManager_Connect_SendCustomRequest3(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QRestAccessManager_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qrestaccessmanager.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QRestAccessManager_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qrestaccessmanager.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QRestAccessManager_Delete(@ptrCast(self));
    }
};
