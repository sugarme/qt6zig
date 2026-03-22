const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qwavedecoder.html
pub const qwavedecoder = struct {

    /// New constructs a new QWaveDecoder object.
    pub fn New(device: ?*anyopaque) QtC.QWaveDecoder {
        return qtc.QWaveDecoder_new(@ptrCast(device));
    }


    /// New2 constructs a new QWaveDecoder object.
    pub fn New2(device: ?*anyopaque, format: ?*anyopaque) QtC.QWaveDecoder {
        return qtc.QWaveDecoder_new2(@ptrCast(device), @ptrCast(format));
    }


    /// New3 constructs a new QWaveDecoder object.
    pub fn New3(device: ?*anyopaque, parent: ?*anyopaque) QtC.QWaveDecoder {
        return qtc.QWaveDecoder_new3(@ptrCast(device), @ptrCast(parent));
    }


    /// New4 constructs a new QWaveDecoder object.
    pub fn New4(device: ?*anyopaque, format: ?*anyopaque, parent: ?*anyopaque) QtC.QWaveDecoder {
        return qtc.QWaveDecoder_new4(@ptrCast(device), @ptrCast(format), @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWaveDecoder_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qwavedecoder.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn AudioFormat(self: ?*anyopaque, ) QtC.QAudioFormat {
        return qtc.QWaveDecoder_AudioFormat(@ptrCast(self));
    }

    pub fn GetDevice(self: ?*anyopaque, ) QtC.QIODevice {
        return qtc.QWaveDecoder_GetDevice(@ptrCast(self));
    }

    pub fn Duration(self: ?*anyopaque, ) i32 {
        return qtc.QWaveDecoder_Duration(@ptrCast(self));
    }

    pub fn HeaderLength() i64 {
        return qtc.QWaveDecoder_HeaderLength();
    }

    pub fn Open(self: ?*anyopaque, mode: QIODevice::OpenMode) bool {
        return qtc.QWaveDecoder_Open(@ptrCast(self), mode);
    }

    /// Allows for overriding the related default method
    pub fn OnOpen(self: ?*anyopaque, callback: *const fn (?*anyopaque, QIODevice::OpenMode) callconv(.c) bool) void {
        qtc.QWaveDecoder_OnOpen(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseOpen(self: ?*anyopaque, mode: QIODevice::OpenMode) bool {
        return qtc.QWaveDecoder_QBaseOpen(@ptrCast(self), mode);
    }

    pub fn Close(self: ?*anyopaque, ) void {
        qtc.QWaveDecoder_Close(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnClose(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QWaveDecoder_OnClose(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseClose(self: ?*anyopaque, ) void {
        qtc.QWaveDecoder_QBaseClose(@ptrCast(self));
    }

    pub fn Seek(self: ?*anyopaque, pos: i64) bool {
        return qtc.QWaveDecoder_Seek(@ptrCast(self), pos);
    }

    /// Allows for overriding the related default method
    pub fn OnSeek(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) bool) void {
        qtc.QWaveDecoder_OnSeek(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSeek(self: ?*anyopaque, pos: i64) bool {
        return qtc.QWaveDecoder_QBaseSeek(@ptrCast(self), pos);
    }

    pub fn Pos(self: ?*anyopaque, ) i64 {
        return qtc.QWaveDecoder_Pos(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnPos(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i64) void {
        qtc.QWaveDecoder_OnPos(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePos(self: ?*anyopaque, ) i64 {
        return qtc.QWaveDecoder_QBasePos(@ptrCast(self));
    }

    pub fn SetIODevice(self: ?*anyopaque, device: ?*anyopaque) void {
        qtc.QWaveDecoder_SetIODevice(@ptrCast(self), @ptrCast(device));
    }

    pub fn Size(self: ?*anyopaque, ) i64 {
        return qtc.QWaveDecoder_Size(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSize(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i64) void {
        qtc.QWaveDecoder_OnSize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSize(self: ?*anyopaque, ) i64 {
        return qtc.QWaveDecoder_QBaseSize(@ptrCast(self));
    }

    pub fn IsSequential(self: ?*anyopaque, ) bool {
        return qtc.QWaveDecoder_IsSequential(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnIsSequential(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QWaveDecoder_OnIsSequential(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsSequential(self: ?*anyopaque, ) bool {
        return qtc.QWaveDecoder_QBaseIsSequential(@ptrCast(self));
    }

    pub fn BytesAvailable(self: ?*anyopaque, ) i64 {
        return qtc.QWaveDecoder_BytesAvailable(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnBytesAvailable(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i64) void {
        qtc.QWaveDecoder_OnBytesAvailable(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBytesAvailable(self: ?*anyopaque, ) i64 {
        return qtc.QWaveDecoder_QBaseBytesAvailable(@ptrCast(self));
    }

    pub fn FormatKnown(self: ?*anyopaque, ) void {
        qtc.QWaveDecoder_FormatKnown(@ptrCast(self));
    }

    pub fn OnFormatKnown(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QWaveDecoder_Connect_FormatKnown(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ParsingError(self: ?*anyopaque, ) void {
        qtc.QWaveDecoder_ParsingError(@ptrCast(self));
    }

    pub fn OnParsingError(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QWaveDecoder_Connect_ParsingError(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWaveDecoder_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qwavedecoder.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QWaveDecoder_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qwavedecoder.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QWaveDecoder_Delete(@ptrCast(self));
    }
};
