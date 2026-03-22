const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qaudiodevice.html
pub const qaudiodevice = struct {

    /// New constructs a new QAudioDevice object.
    pub fn New() QtC.QAudioDevice {
        return qtc.QAudioDevice_new();
    }


    /// New2 constructs a new QAudioDevice object.
    pub fn New2(other: ?*anyopaque) QtC.QAudioDevice {
        return qtc.QAudioDevice_new2(@ptrCast(other));
    }


    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QAudioDevice_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QAudioDevice_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QAudioDevice_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QAudioDevice_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QAudioDevice_IsNull(@ptrCast(self));
    }

    pub fn Id(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QAudioDevice_Id(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qaudiodevice.Id: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Description(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QAudioDevice_Description(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qaudiodevice.Description: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn IsDefault(self: ?*anyopaque, ) bool {
        return qtc.QAudioDevice_IsDefault(@ptrCast(self));
    }

    pub fn Mode(self: ?*anyopaque, ) i32 {
        return qtc.QAudioDevice_Mode(@ptrCast(self));
    }

    pub fn IsFormatSupported(self: ?*anyopaque, format: ?*anyopaque) bool {
        return qtc.QAudioDevice_IsFormatSupported(@ptrCast(self), @ptrCast(format));
    }

    pub fn PreferredFormat(self: ?*anyopaque, ) QtC.QAudioFormat {
        return qtc.QAudioDevice_PreferredFormat(@ptrCast(self));
    }

    pub fn MinimumSampleRate(self: ?*anyopaque, ) i32 {
        return qtc.QAudioDevice_MinimumSampleRate(@ptrCast(self));
    }

    pub fn MaximumSampleRate(self: ?*anyopaque, ) i32 {
        return qtc.QAudioDevice_MaximumSampleRate(@ptrCast(self));
    }

    pub fn MinimumChannelCount(self: ?*anyopaque, ) i32 {
        return qtc.QAudioDevice_MinimumChannelCount(@ptrCast(self));
    }

    pub fn MaximumChannelCount(self: ?*anyopaque, ) i32 {
        return qtc.QAudioDevice_MaximumChannelCount(@ptrCast(self));
    }

    pub fn SupportedSampleFormats(self: ?*anyopaque, ) []const u8 {
        return qtc.QAudioDevice_SupportedSampleFormats(@ptrCast(self));
    }

    pub fn ChannelConfiguration(self: ?*anyopaque, ) u32 {
        return qtc.QAudioDevice_ChannelConfiguration(@ptrCast(self));
    }

    pub fn Handle(self: ?*anyopaque, ) QAudioDevicePrivate {
        return @ptrCast(qtc.QAudioDevice_Handle(@ptrCast(self)));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QAudioDevice_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/audiodevice.html#types
pub const enums = struct {
    pub const Mode = enum {
        pub const Null: i32 = 0;
        pub const Input: i32 = 1;
        pub const Output: i32 = 2;
    };

};
