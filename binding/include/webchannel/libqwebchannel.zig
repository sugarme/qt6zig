const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qwebchannel.html
pub const qwebchannel = struct {

    /// New constructs a new QWebChannel object.
    pub fn New() QtC.QWebChannel {
        return qtc.QWebChannel_new();
    }


    /// New2 constructs a new QWebChannel object.
    pub fn New2(parent: ?*anyopaque) QtC.QWebChannel {
        return qtc.QWebChannel_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWebChannel_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebchannel.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn RegisterObjects(self: ?*anyopaque, objects: *const QHash<QString, QObject *>) void {
        qtc.QWebChannel_RegisterObjects(@ptrCast(self), @ptrCast(objects));
    }

    pub fn RegisteredObjects(self: ?*anyopaque, ) QHash<QString, QObject *> {
        return qtc.QWebChannel_RegisteredObjects(@ptrCast(self));
    }

    pub fn RegisterObject(self: ?*anyopaque, id: []const u8, object: ?*anyopaque) void {
        const id_str = qtc.libqt_string{
    .len = id.len,
    .data = id.ptr,
};
qtc.QWebChannel_RegisterObject(@ptrCast(self), id_str, @ptrCast(object));
    }

    pub fn DeregisterObject(self: ?*anyopaque, object: ?*anyopaque) void {
        qtc.QWebChannel_DeregisterObject(@ptrCast(self), @ptrCast(object));
    }

    pub fn BlockUpdates(self: ?*anyopaque, ) bool {
        return qtc.QWebChannel_BlockUpdates(@ptrCast(self));
    }

    pub fn SetBlockUpdates(self: ?*anyopaque, block: bool) void {
        qtc.QWebChannel_SetBlockUpdates(@ptrCast(self), block);
    }

    pub fn PropertyUpdateInterval(self: ?*anyopaque, ) i32 {
        return qtc.QWebChannel_PropertyUpdateInterval(@ptrCast(self));
    }

    pub fn SetPropertyUpdateInterval(self: ?*anyopaque, ms: i32) void {
        qtc.QWebChannel_SetPropertyUpdateInterval(@ptrCast(self), ms);
    }

    pub fn BlockUpdatesChanged(self: ?*anyopaque, block: bool) void {
        qtc.QWebChannel_BlockUpdatesChanged(@ptrCast(self), block);
    }

    pub fn OnBlockUpdatesChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QWebChannel_Connect_BlockUpdatesChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ConnectTo(self: ?*anyopaque, transport: ?*anyopaque) void {
        qtc.QWebChannel_ConnectTo(@ptrCast(self), @ptrCast(transport));
    }

    pub fn DisconnectFrom(self: ?*anyopaque, transport: ?*anyopaque) void {
        qtc.QWebChannel_DisconnectFrom(@ptrCast(self), @ptrCast(transport));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWebChannel_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebchannel.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWebChannel_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebchannel.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWebChannel_Delete(@ptrCast(self));
    }
};
