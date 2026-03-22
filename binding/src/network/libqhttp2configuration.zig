const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qhttp2configuration.html
pub const qhttp2configuration = struct {

    /// New constructs a new QHttp2Configuration object.
    pub fn New() QtC.QHttp2Configuration {
        return qtc.QHttp2Configuration_new();
    }


    /// New2 constructs a new QHttp2Configuration object.
    pub fn New2(other: ?*anyopaque) QtC.QHttp2Configuration {
        return qtc.QHttp2Configuration_new2(@ptrCast(other));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QHttp2Configuration_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn SetServerPushEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QHttp2Configuration_SetServerPushEnabled(@ptrCast(self), enable);
    }

    pub fn ServerPushEnabled(self: ?*anyopaque, ) bool {
        return qtc.QHttp2Configuration_ServerPushEnabled(@ptrCast(self));
    }

    pub fn SetHuffmanCompressionEnabled(self: ?*anyopaque, enable: bool) void {
        qtc.QHttp2Configuration_SetHuffmanCompressionEnabled(@ptrCast(self), enable);
    }

    pub fn HuffmanCompressionEnabled(self: ?*anyopaque, ) bool {
        return qtc.QHttp2Configuration_HuffmanCompressionEnabled(@ptrCast(self));
    }

    pub fn SetSessionReceiveWindowSize(self: ?*anyopaque, size: u32) bool {
        return qtc.QHttp2Configuration_SetSessionReceiveWindowSize(@ptrCast(self), size);
    }

    pub fn SessionReceiveWindowSize(self: ?*anyopaque, ) u32 {
        return qtc.QHttp2Configuration_SessionReceiveWindowSize(@ptrCast(self));
    }

    pub fn SetStreamReceiveWindowSize(self: ?*anyopaque, size: u32) bool {
        return qtc.QHttp2Configuration_SetStreamReceiveWindowSize(@ptrCast(self), size);
    }

    pub fn StreamReceiveWindowSize(self: ?*anyopaque, ) u32 {
        return qtc.QHttp2Configuration_StreamReceiveWindowSize(@ptrCast(self));
    }

    pub fn SetMaxFrameSize(self: ?*anyopaque, size: u32) bool {
        return qtc.QHttp2Configuration_SetMaxFrameSize(@ptrCast(self), size);
    }

    pub fn MaxFrameSize(self: ?*anyopaque, ) u32 {
        return qtc.QHttp2Configuration_MaxFrameSize(@ptrCast(self));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QHttp2Configuration_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QHttp2Configuration_Delete(@ptrCast(self));
    }
};
