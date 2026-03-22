const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qiodevice.html
pub const qiodevice = struct {

    /// New constructs a new QIODevice object.
    pub fn New() QtC.QIODevice {
        return qtc.QIODevice_new();
    }


    /// New2 constructs a new QIODevice object.
    pub fn New2(parent: ?*anyopaque) QtC.QIODevice {
        return qtc.QIODevice_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QIODevice_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qiodevice.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn OpenMode(self: ?*anyopaque, ) i32 {
        return qtc.QIODevice_OpenMode(@ptrCast(self));
    }

    pub fn SetTextModeEnabled(self: ?*anyopaque, enabled: bool) void {
        qtc.QIODevice_SetTextModeEnabled(@ptrCast(self), enabled);
    }

    pub fn IsTextModeEnabled(self: ?*anyopaque, ) bool {
        return qtc.QIODevice_IsTextModeEnabled(@ptrCast(self));
    }

    pub fn IsOpen(self: ?*anyopaque, ) bool {
        return qtc.QIODevice_IsOpen(@ptrCast(self));
    }

    pub fn IsReadable(self: ?*anyopaque, ) bool {
        return qtc.QIODevice_IsReadable(@ptrCast(self));
    }

    pub fn IsWritable(self: ?*anyopaque, ) bool {
        return qtc.QIODevice_IsWritable(@ptrCast(self));
    }

    pub fn IsSequential(self: ?*anyopaque, ) bool {
        return qtc.QIODevice_IsSequential(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnIsSequential(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QIODevice_OnIsSequential(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsSequential(self: ?*anyopaque, ) bool {
        return qtc.QIODevice_QBaseIsSequential(@ptrCast(self));
    }

    pub fn ReadChannelCount(self: ?*anyopaque, ) i32 {
        return qtc.QIODevice_ReadChannelCount(@ptrCast(self));
    }

    pub fn WriteChannelCount(self: ?*anyopaque, ) i32 {
        return qtc.QIODevice_WriteChannelCount(@ptrCast(self));
    }

    pub fn CurrentReadChannel(self: ?*anyopaque, ) i32 {
        return qtc.QIODevice_CurrentReadChannel(@ptrCast(self));
    }

    pub fn SetCurrentReadChannel(self: ?*anyopaque, channel: i32) void {
        qtc.QIODevice_SetCurrentReadChannel(@ptrCast(self), channel);
    }

    pub fn CurrentWriteChannel(self: ?*anyopaque, ) i32 {
        return qtc.QIODevice_CurrentWriteChannel(@ptrCast(self));
    }

    pub fn SetCurrentWriteChannel(self: ?*anyopaque, channel: i32) void {
        qtc.QIODevice_SetCurrentWriteChannel(@ptrCast(self), channel);
    }

    pub fn Open(self: ?*anyopaque, mode: i32) bool {
        return qtc.QIODevice_Open(@ptrCast(self), @intCast(mode));
    }

    /// Allows for overriding the related default method
    pub fn OnOpen(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QIODevice_OnOpen(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseOpen(self: ?*anyopaque, mode: i32) bool {
        return qtc.QIODevice_QBaseOpen(@ptrCast(self), @intCast(mode));
    }

    pub fn Close(self: ?*anyopaque, ) void {
        qtc.QIODevice_Close(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnClose(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QIODevice_OnClose(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseClose(self: ?*anyopaque, ) void {
        qtc.QIODevice_QBaseClose(@ptrCast(self));
    }

    pub fn Pos(self: ?*anyopaque, ) i64 {
        return qtc.QIODevice_Pos(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnPos(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i64) void {
        qtc.QIODevice_OnPos(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBasePos(self: ?*anyopaque, ) i64 {
        return qtc.QIODevice_QBasePos(@ptrCast(self));
    }

    pub fn Size(self: ?*anyopaque, ) i64 {
        return qtc.QIODevice_Size(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnSize(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i64) void {
        qtc.QIODevice_OnSize(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSize(self: ?*anyopaque, ) i64 {
        return qtc.QIODevice_QBaseSize(@ptrCast(self));
    }

    pub fn Seek(self: ?*anyopaque, pos: i64) bool {
        return qtc.QIODevice_Seek(@ptrCast(self), pos);
    }

    /// Allows for overriding the related default method
    pub fn OnSeek(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) bool) void {
        qtc.QIODevice_OnSeek(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSeek(self: ?*anyopaque, pos: i64) bool {
        return qtc.QIODevice_QBaseSeek(@ptrCast(self), pos);
    }

    pub fn AtEnd(self: ?*anyopaque, ) bool {
        return qtc.QIODevice_AtEnd(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnAtEnd(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QIODevice_OnAtEnd(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseAtEnd(self: ?*anyopaque, ) bool {
        return qtc.QIODevice_QBaseAtEnd(@ptrCast(self));
    }

    pub fn Reset(self: ?*anyopaque, ) bool {
        return qtc.QIODevice_Reset(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnReset(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QIODevice_OnReset(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseReset(self: ?*anyopaque, ) bool {
        return qtc.QIODevice_QBaseReset(@ptrCast(self));
    }

    pub fn BytesAvailable(self: ?*anyopaque, ) i64 {
        return qtc.QIODevice_BytesAvailable(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnBytesAvailable(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i64) void {
        qtc.QIODevice_OnBytesAvailable(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBytesAvailable(self: ?*anyopaque, ) i64 {
        return qtc.QIODevice_QBaseBytesAvailable(@ptrCast(self));
    }

    pub fn BytesToWrite(self: ?*anyopaque, ) i64 {
        return qtc.QIODevice_BytesToWrite(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnBytesToWrite(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i64) void {
        qtc.QIODevice_OnBytesToWrite(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBytesToWrite(self: ?*anyopaque, ) i64 {
        return qtc.QIODevice_QBaseBytesToWrite(@ptrCast(self));
    }

    pub fn Read(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        return qtc.QIODevice_Read(@ptrCast(self), @ptrCast(data), maxlen);
    }

    pub fn Read2(self: ?*anyopaque, maxlen: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QIODevice_Read2(@ptrCast(self), maxlen);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qiodevice.Read2: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn ReadAll(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QIODevice_ReadAll(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qiodevice.ReadAll: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn ReadLine(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        return qtc.QIODevice_ReadLine(@ptrCast(self), @ptrCast(data), maxlen);
    }

    pub fn ReadLine2(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QIODevice_ReadLine2(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qiodevice.ReadLine2: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn CanReadLine(self: ?*anyopaque, ) bool {
        return qtc.QIODevice_CanReadLine(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnCanReadLine(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QIODevice_OnCanReadLine(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCanReadLine(self: ?*anyopaque, ) bool {
        return qtc.QIODevice_QBaseCanReadLine(@ptrCast(self));
    }

    pub fn StartTransaction(self: ?*anyopaque, ) void {
        qtc.QIODevice_StartTransaction(@ptrCast(self));
    }

    pub fn CommitTransaction(self: ?*anyopaque, ) void {
        qtc.QIODevice_CommitTransaction(@ptrCast(self));
    }

    pub fn RollbackTransaction(self: ?*anyopaque, ) void {
        qtc.QIODevice_RollbackTransaction(@ptrCast(self));
    }

    pub fn IsTransactionStarted(self: ?*anyopaque, ) bool {
        return qtc.QIODevice_IsTransactionStarted(@ptrCast(self));
    }

    pub fn Write(self: ?*anyopaque, data: []const u8, lenVal: i64) i64 {
        return qtc.QIODevice_Write(@ptrCast(self), @ptrCast(data), lenVal);
    }

    pub fn Write2(self: ?*anyopaque, data: []const u8) i64 {
        return qtc.QIODevice_Write2(@ptrCast(self), @ptrCast(data));
    }

    pub fn Write3(self: ?*anyopaque, data: []u8) i64 {
        const data_str = qtc.libqt_string{
    .len = data.len,
    .data = data.ptr,
};
return qtc.QIODevice_Write3(@ptrCast(self), data_str);
    }

    pub fn Peek(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        return qtc.QIODevice_Peek(@ptrCast(self), @ptrCast(data), maxlen);
    }

    pub fn Peek2(self: ?*anyopaque, maxlen: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QIODevice_Peek2(@ptrCast(self), maxlen);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qiodevice.Peek2: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn Skip(self: ?*anyopaque, maxSize: i64) i64 {
        return qtc.QIODevice_Skip(@ptrCast(self), maxSize);
    }

    pub fn WaitForReadyRead(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QIODevice_WaitForReadyRead(@ptrCast(self), msecs);
    }

    /// Allows for overriding the related default method
    pub fn OnWaitForReadyRead(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QIODevice_OnWaitForReadyRead(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWaitForReadyRead(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QIODevice_QBaseWaitForReadyRead(@ptrCast(self), msecs);
    }

    pub fn WaitForBytesWritten(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QIODevice_WaitForBytesWritten(@ptrCast(self), msecs);
    }

    /// Allows for overriding the related default method
    pub fn OnWaitForBytesWritten(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QIODevice_OnWaitForBytesWritten(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWaitForBytesWritten(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QIODevice_QBaseWaitForBytesWritten(@ptrCast(self), msecs);
    }

    pub fn UngetChar(self: ?*anyopaque, c: i8) void {
        qtc.QIODevice_UngetChar(@ptrCast(self), c);
    }

    pub fn PutChar(self: ?*anyopaque, c: i8) bool {
        return qtc.QIODevice_PutChar(@ptrCast(self), c);
    }

    pub fn GetChar(self: ?*anyopaque, c: []const u8) bool {
        return qtc.QIODevice_GetChar(@ptrCast(self), @ptrCast(c));
    }

    pub fn ErrorString(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QIODevice_ErrorString(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qiodevice.ErrorString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ReadyRead(self: ?*anyopaque, ) void {
        qtc.QIODevice_ReadyRead(@ptrCast(self));
    }

    pub fn OnReadyRead(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QIODevice_Connect_ReadyRead(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ChannelReadyRead(self: ?*anyopaque, channel: i32) void {
        qtc.QIODevice_ChannelReadyRead(@ptrCast(self), channel);
    }

    pub fn OnChannelReadyRead(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QIODevice_Connect_ChannelReadyRead(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn BytesWritten(self: ?*anyopaque, bytes: i64) void {
        qtc.QIODevice_BytesWritten(@ptrCast(self), bytes);
    }

    pub fn OnBytesWritten(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QIODevice_Connect_BytesWritten(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ChannelBytesWritten(self: ?*anyopaque, channel: i32, bytes: i64) void {
        qtc.QIODevice_ChannelBytesWritten(@ptrCast(self), channel, bytes);
    }

    pub fn OnChannelBytesWritten(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i64) callconv(.c) void) void {
        qtc.QIODevice_Connect_ChannelBytesWritten(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn AboutToClose(self: ?*anyopaque, ) void {
        qtc.QIODevice_AboutToClose(@ptrCast(self));
    }

    pub fn OnAboutToClose(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QIODevice_Connect_AboutToClose(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ReadChannelFinished(self: ?*anyopaque, ) void {
        qtc.QIODevice_ReadChannelFinished(@ptrCast(self));
    }

    pub fn OnReadChannelFinished(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QIODevice_Connect_ReadChannelFinished(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ReadData(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        return qtc.QIODevice_ReadData(@ptrCast(self), @ptrCast(data), maxlen);
    }

    /// Allows for overriding the related default method
    pub fn OnReadData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i64) callconv(.c) i64) void {
        qtc.QIODevice_OnReadData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseReadData(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        return qtc.QIODevice_QBaseReadData(@ptrCast(self), @ptrCast(data), maxlen);
    }

    pub fn ReadLineData(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        return qtc.QIODevice_ReadLineData(@ptrCast(self), @ptrCast(data), maxlen);
    }

    /// Allows for overriding the related default method
    pub fn OnReadLineData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i64) callconv(.c) i64) void {
        qtc.QIODevice_OnReadLineData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseReadLineData(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        return qtc.QIODevice_QBaseReadLineData(@ptrCast(self), @ptrCast(data), maxlen);
    }

    pub fn SkipData(self: ?*anyopaque, maxSize: i64) i64 {
        return qtc.QIODevice_SkipData(@ptrCast(self), maxSize);
    }

    /// Allows for overriding the related default method
    pub fn OnSkipData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) i64) void {
        qtc.QIODevice_OnSkipData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSkipData(self: ?*anyopaque, maxSize: i64) i64 {
        return qtc.QIODevice_QBaseSkipData(@ptrCast(self), maxSize);
    }

    pub fn WriteData(self: ?*anyopaque, data: []const u8, lenVal: i64) i64 {
        return qtc.QIODevice_WriteData(@ptrCast(self), @ptrCast(data), lenVal);
    }

    /// Allows for overriding the related default method
    pub fn OnWriteData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i64) callconv(.c) i64) void {
        qtc.QIODevice_OnWriteData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWriteData(self: ?*anyopaque, data: []const u8, lenVal: i64) i64 {
        return qtc.QIODevice_QBaseWriteData(@ptrCast(self), @ptrCast(data), lenVal);
    }

    pub fn SetOpenMode(self: ?*anyopaque, openMode: i32) void {
        qtc.QIODevice_SetOpenMode(@ptrCast(self), @intCast(openMode));
    }

    /// Allows for overriding the related default method
    pub fn OnSetOpenMode(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QIODevice_OnSetOpenMode(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetOpenMode(self: ?*anyopaque, openMode: i32) void {
        qtc.QIODevice_QBaseSetOpenMode(@ptrCast(self), @intCast(openMode));
    }

    pub fn SetErrorString(self: ?*anyopaque, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
    .len = errorString.len,
    .data = errorString.ptr,
};
qtc.QIODevice_SetErrorString(@ptrCast(self), errorString_str);
    }

    /// Allows for overriding the related default method
    pub fn OnSetErrorString(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QIODevice_OnSetErrorString(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetErrorString(self: ?*anyopaque, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
    .len = errorString.len,
    .data = errorString.ptr,
};
qtc.QIODevice_QBaseSetErrorString(@ptrCast(self), errorString_str);
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QIODevice_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qiodevice.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QIODevice_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qiodevice.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ReadLine1(self: ?*anyopaque, maxlen: i64, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QIODevice_ReadLine1(@ptrCast(self), maxlen);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qiodevice.ReadLine1: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QIODevice_Delete(@ptrCast(self));
    }
};
