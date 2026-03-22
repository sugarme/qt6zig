const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qlocalsocket.html
pub const qlocalsocket = struct {

    /// New constructs a new QLocalSocket object.
    pub fn New() QtC.QLocalSocket {
        return qtc.QLocalSocket_new();
    }


    /// New2 constructs a new QLocalSocket object.
    pub fn New2(parent: ?*anyopaque) QtC.QLocalSocket {
        return qtc.QLocalSocket_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocalSocket_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocalsocket.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ConnectToServer(self: ?*anyopaque, ) void {
        qtc.QLocalSocket_ConnectToServer(@ptrCast(self));
    }

    pub fn ConnectToServer2(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
qtc.QLocalSocket_ConnectToServer2(@ptrCast(self), name_str);
    }

    pub fn DisconnectFromServer(self: ?*anyopaque, ) void {
        qtc.QLocalSocket_DisconnectFromServer(@ptrCast(self));
    }

    pub fn SetServerName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
qtc.QLocalSocket_SetServerName(@ptrCast(self), name_str);
    }

    pub fn ServerName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocalSocket_ServerName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocalsocket.ServerName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn FullServerName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocalSocket_FullServerName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocalsocket.FullServerName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Abort(self: ?*anyopaque, ) void {
        qtc.QLocalSocket_Abort(@ptrCast(self));
    }

    pub fn IsSequential(self: ?*anyopaque, ) bool {
        return qtc.QLocalSocket_IsSequential(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnIsSequential(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QLocalSocket_OnIsSequential(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsSequential(self: ?*anyopaque, ) bool {
        return qtc.QLocalSocket_QBaseIsSequential(@ptrCast(self));
    }

    pub fn BytesAvailable(self: ?*anyopaque, ) i64 {
        return qtc.QLocalSocket_BytesAvailable(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnBytesAvailable(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i64) void {
        qtc.QLocalSocket_OnBytesAvailable(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBytesAvailable(self: ?*anyopaque, ) i64 {
        return qtc.QLocalSocket_QBaseBytesAvailable(@ptrCast(self));
    }

    pub fn BytesToWrite(self: ?*anyopaque, ) i64 {
        return qtc.QLocalSocket_BytesToWrite(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnBytesToWrite(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i64) void {
        qtc.QLocalSocket_OnBytesToWrite(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBytesToWrite(self: ?*anyopaque, ) i64 {
        return qtc.QLocalSocket_QBaseBytesToWrite(@ptrCast(self));
    }

    pub fn CanReadLine(self: ?*anyopaque, ) bool {
        return qtc.QLocalSocket_CanReadLine(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnCanReadLine(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QLocalSocket_OnCanReadLine(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCanReadLine(self: ?*anyopaque, ) bool {
        return qtc.QLocalSocket_QBaseCanReadLine(@ptrCast(self));
    }

    pub fn Open(self: ?*anyopaque, openMode: i32) bool {
        return qtc.QLocalSocket_Open(@ptrCast(self), @intCast(openMode));
    }

    /// Allows for overriding the related default method
    pub fn OnOpen(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QLocalSocket_OnOpen(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseOpen(self: ?*anyopaque, openMode: i32) bool {
        return qtc.QLocalSocket_QBaseOpen(@ptrCast(self), @intCast(openMode));
    }

    pub fn Close(self: ?*anyopaque, ) void {
        qtc.QLocalSocket_Close(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnClose(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QLocalSocket_OnClose(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseClose(self: ?*anyopaque, ) void {
        qtc.QLocalSocket_QBaseClose(@ptrCast(self));
    }

    pub fn Error(self: ?*anyopaque, ) i32 {
        return qtc.QLocalSocket_Error(@ptrCast(self));
    }

    pub fn Flush(self: ?*anyopaque, ) bool {
        return qtc.QLocalSocket_Flush(@ptrCast(self));
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QLocalSocket_IsValid(@ptrCast(self));
    }

    pub fn ReadBufferSize(self: ?*anyopaque, ) i64 {
        return qtc.QLocalSocket_ReadBufferSize(@ptrCast(self));
    }

    pub fn SetReadBufferSize(self: ?*anyopaque, size: i64) void {
        qtc.QLocalSocket_SetReadBufferSize(@ptrCast(self), size);
    }

    pub fn SetSocketDescriptor(self: ?*anyopaque, socketDescriptor: isize) bool {
        return qtc.QLocalSocket_SetSocketDescriptor(@ptrCast(self), socketDescriptor);
    }

    pub fn SocketDescriptor(self: ?*anyopaque, ) isize {
        return qtc.QLocalSocket_SocketDescriptor(@ptrCast(self));
    }

    pub fn SetSocketOptions(self: ?*anyopaque, option: i32) void {
        qtc.QLocalSocket_SetSocketOptions(@ptrCast(self), @intCast(option));
    }

    pub fn SocketOptions(self: ?*anyopaque, ) i32 {
        return qtc.QLocalSocket_SocketOptions(@ptrCast(self));
    }

    pub fn BindableSocketOptions(self: ?*anyopaque, ) QBindable<SocketOptions> {
        return qtc.QLocalSocket_BindableSocketOptions(@ptrCast(self));
    }

    pub fn State(self: ?*anyopaque, ) i32 {
        return qtc.QLocalSocket_State(@ptrCast(self));
    }

    pub fn WaitForBytesWritten(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QLocalSocket_WaitForBytesWritten(@ptrCast(self), msecs);
    }

    /// Allows for overriding the related default method
    pub fn OnWaitForBytesWritten(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QLocalSocket_OnWaitForBytesWritten(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWaitForBytesWritten(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QLocalSocket_QBaseWaitForBytesWritten(@ptrCast(self), msecs);
    }

    pub fn WaitForConnected(self: ?*anyopaque, ) bool {
        return qtc.QLocalSocket_WaitForConnected(@ptrCast(self));
    }

    pub fn WaitForDisconnected(self: ?*anyopaque, ) bool {
        return qtc.QLocalSocket_WaitForDisconnected(@ptrCast(self));
    }

    pub fn WaitForReadyRead(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QLocalSocket_WaitForReadyRead(@ptrCast(self), msecs);
    }

    /// Allows for overriding the related default method
    pub fn OnWaitForReadyRead(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QLocalSocket_OnWaitForReadyRead(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWaitForReadyRead(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QLocalSocket_QBaseWaitForReadyRead(@ptrCast(self), msecs);
    }

    pub fn Connected(self: ?*anyopaque, ) void {
        qtc.QLocalSocket_Connected(@ptrCast(self));
    }

    pub fn OnConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QLocalSocket_Connect_Connected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Disconnected(self: ?*anyopaque, ) void {
        qtc.QLocalSocket_Disconnected(@ptrCast(self));
    }

    pub fn OnDisconnected(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QLocalSocket_Connect_Disconnected(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ErrorOccurred(self: ?*anyopaque, socketError: i32) void {
        qtc.QLocalSocket_ErrorOccurred(@ptrCast(self), @intCast(socketError));
    }

    pub fn OnErrorOccurred(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QLocalSocket_Connect_ErrorOccurred(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn StateChanged(self: ?*anyopaque, socketState: i32) void {
        qtc.QLocalSocket_StateChanged(@ptrCast(self), @intCast(socketState));
    }

    pub fn OnStateChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QLocalSocket_Connect_StateChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ReadData(self: ?*anyopaque, param1: []const u8, param2: i64) i64 {
        return qtc.QLocalSocket_ReadData(@ptrCast(self), @ptrCast(param1), param2);
    }

    /// Allows for overriding the related default method
    pub fn OnReadData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i64) callconv(.c) i64) void {
        qtc.QLocalSocket_OnReadData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseReadData(self: ?*anyopaque, param1: []const u8, param2: i64) i64 {
        return qtc.QLocalSocket_QBaseReadData(@ptrCast(self), @ptrCast(param1), param2);
    }

    pub fn ReadLineData(self: ?*anyopaque, data: []const u8, maxSize: i64) i64 {
        return qtc.QLocalSocket_ReadLineData(@ptrCast(self), @ptrCast(data), maxSize);
    }

    /// Allows for overriding the related default method
    pub fn OnReadLineData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i64) callconv(.c) i64) void {
        qtc.QLocalSocket_OnReadLineData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseReadLineData(self: ?*anyopaque, data: []const u8, maxSize: i64) i64 {
        return qtc.QLocalSocket_QBaseReadLineData(@ptrCast(self), @ptrCast(data), maxSize);
    }

    pub fn SkipData(self: ?*anyopaque, maxSize: i64) i64 {
        return qtc.QLocalSocket_SkipData(@ptrCast(self), maxSize);
    }

    /// Allows for overriding the related default method
    pub fn OnSkipData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) i64) void {
        qtc.QLocalSocket_OnSkipData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSkipData(self: ?*anyopaque, maxSize: i64) i64 {
        return qtc.QLocalSocket_QBaseSkipData(@ptrCast(self), maxSize);
    }

    pub fn WriteData(self: ?*anyopaque, param1: []const u8, param2: i64) i64 {
        return qtc.QLocalSocket_WriteData(@ptrCast(self), @ptrCast(param1), param2);
    }

    /// Allows for overriding the related default method
    pub fn OnWriteData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i64) callconv(.c) i64) void {
        qtc.QLocalSocket_OnWriteData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWriteData(self: ?*anyopaque, param1: []const u8, param2: i64) i64 {
        return qtc.QLocalSocket_QBaseWriteData(@ptrCast(self), @ptrCast(param1), param2);
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocalSocket_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocalsocket.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLocalSocket_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlocalsocket.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ConnectToServer1(self: ?*anyopaque, openMode: i32) void {
        qtc.QLocalSocket_ConnectToServer1(@ptrCast(self), @intCast(openMode));
    }

    pub fn ConnectToServer22(self: ?*anyopaque, name: []const u8, openMode: i32) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
qtc.QLocalSocket_ConnectToServer22(@ptrCast(self), name_str, @intCast(openMode));
    }

    pub fn SetSocketDescriptor2(self: ?*anyopaque, socketDescriptor: isize, socketState: i32) bool {
        return qtc.QLocalSocket_SetSocketDescriptor2(@ptrCast(self), socketDescriptor, @intCast(socketState));
    }

    pub fn SetSocketDescriptor3(self: ?*anyopaque, socketDescriptor: isize, socketState: i32, openMode: i32) bool {
        return qtc.QLocalSocket_SetSocketDescriptor3(@ptrCast(self), socketDescriptor, @intCast(socketState), @intCast(openMode));
    }

    pub fn WaitForConnected1(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QLocalSocket_WaitForConnected1(@ptrCast(self), msecs);
    }

    pub fn WaitForDisconnected1(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QLocalSocket_WaitForDisconnected1(@ptrCast(self), msecs);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QLocalSocket_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/localsocket.html#types
pub const enums = struct {
    pub const LocalSocketError = enum {
        pub const ConnectionRefusedError: i32 = 0;
        pub const PeerClosedError: i32 = 1;
        pub const ServerNotFoundError: i32 = 2;
        pub const SocketAccessError: i32 = 3;
        pub const SocketResourceError: i32 = 4;
        pub const SocketTimeoutError: i32 = 5;
        pub const DatagramTooLargeError: i32 = 6;
        pub const ConnectionError: i32 = 7;
        pub const UnsupportedSocketOperationError: i32 = 10;
        pub const UnknownSocketError: i32 = -1;
        pub const OperationError: i32 = 19;
    };

    pub const LocalSocketState = enum {
        pub const UnconnectedState: i32 = 0;
        pub const ConnectingState: i32 = 2;
        pub const ConnectedState: i32 = 3;
        pub const ClosingState: i32 = 6;
    };

    pub const SocketOption = enum {
        pub const NoOptions: i32 = 0;
        pub const AbstractNamespaceOption: i32 = 1;
    };

};
