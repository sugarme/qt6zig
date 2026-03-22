const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qwebchannelabstracttransport.html
pub const qwebchannelabstracttransport = struct {

    /// New constructs a new QWebChannelAbstractTransport object.
    pub fn New() QtC.QWebChannelAbstractTransport {
        return qtc.QWebChannelAbstractTransport_new();
    }


    /// New2 constructs a new QWebChannelAbstractTransport object.
    pub fn New2(parent: ?*anyopaque) QtC.QWebChannelAbstractTransport {
        return qtc.QWebChannelAbstractTransport_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWebChannelAbstractTransport_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebchannelabstracttransport.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SendMessage(self: ?*anyopaque, message: ?*anyopaque) void {
        qtc.QWebChannelAbstractTransport_SendMessage(@ptrCast(self), @ptrCast(message));
    }

    /// Allows for overriding the related default method
    pub fn OnSendMessage(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWebChannelAbstractTransport_OnSendMessage(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSendMessage(self: ?*anyopaque, message: ?*anyopaque) void {
        qtc.QWebChannelAbstractTransport_QBaseSendMessage(@ptrCast(self), @ptrCast(message));
    }

    pub fn MessageReceived(self: ?*anyopaque, message: ?*anyopaque, transport: ?*anyopaque) void {
        qtc.QWebChannelAbstractTransport_MessageReceived(@ptrCast(self), @ptrCast(message), @ptrCast(transport));
    }

    pub fn OnMessageReceived(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QWebChannelAbstractTransport_Connect_MessageReceived(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWebChannelAbstractTransport_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebchannelabstracttransport.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWebChannelAbstractTransport_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qwebchannelabstracttransport.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWebChannelAbstractTransport_Delete(@ptrCast(self));
    }
};
