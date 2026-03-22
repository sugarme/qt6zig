const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qmediadevices.html
pub const qmediadevices = struct {

    /// New constructs a new QMediaDevices object.
    pub fn New() QtC.QMediaDevices {
        return qtc.QMediaDevices_new();
    }


    /// New2 constructs a new QMediaDevices object.
    pub fn New2(parent: ?*anyopaque) QtC.QMediaDevices {
        return qtc.QMediaDevices_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMediaDevices_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediadevices.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn AudioInputs() []const u8 {
        return qtc.QMediaDevices_AudioInputs();
    }

    pub fn AudioOutputs() []const u8 {
        return qtc.QMediaDevices_AudioOutputs();
    }

    pub fn VideoInputs() []const u8 {
        return qtc.QMediaDevices_VideoInputs();
    }

    pub fn DefaultAudioInput() QtC.QAudioDevice {
        return qtc.QMediaDevices_DefaultAudioInput();
    }

    pub fn DefaultAudioOutput() QtC.QAudioDevice {
        return qtc.QMediaDevices_DefaultAudioOutput();
    }

    pub fn DefaultVideoInput() QtC.QCameraDevice {
        return qtc.QMediaDevices_DefaultVideoInput();
    }

    pub fn AudioInputsChanged(self: ?*anyopaque, ) void {
        qtc.QMediaDevices_AudioInputsChanged(@ptrCast(self));
    }

    pub fn OnAudioInputsChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaDevices_Connect_AudioInputsChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn AudioOutputsChanged(self: ?*anyopaque, ) void {
        qtc.QMediaDevices_AudioOutputsChanged(@ptrCast(self));
    }

    pub fn OnAudioOutputsChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaDevices_Connect_AudioOutputsChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn VideoInputsChanged(self: ?*anyopaque, ) void {
        qtc.QMediaDevices_VideoInputsChanged(@ptrCast(self));
    }

    pub fn OnVideoInputsChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaDevices_Connect_VideoInputsChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QMediaDevices_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Allows for overriding the related default method
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMediaDevices_OnConnectNotify(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.QMediaDevices_QBaseConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMediaDevices_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediadevices.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMediaDevices_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediadevices.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMediaDevices_Delete(@ptrCast(self));
    }
};
