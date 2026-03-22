const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qprocessenvironment.html
pub const qprocessenvironment = struct {

    /// New constructs a new QProcessEnvironment object.
    pub fn New() QtC.QProcessEnvironment {
        return qtc.QProcessEnvironment_new();
    }


    /// New2 constructs a new QProcessEnvironment object.
    pub fn New2(param1: i32) QtC.QProcessEnvironment {
        return qtc.QProcessEnvironment_new2(@intCast(param1));
    }


    /// New3 constructs a new QProcessEnvironment object.
    pub fn New3(other: ?*anyopaque) QtC.QProcessEnvironment {
        return qtc.QProcessEnvironment_new3(@ptrCast(other));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QProcessEnvironment_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QProcessEnvironment_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn IsEmpty(self: ?*anyopaque, ) bool {
        return qtc.QProcessEnvironment_IsEmpty(@ptrCast(self));
    }

    pub fn InheritsFromParent(self: ?*anyopaque, ) bool {
        return qtc.QProcessEnvironment_InheritsFromParent(@ptrCast(self));
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QProcessEnvironment_Clear(@ptrCast(self));
    }

    pub fn Contains(self: ?*anyopaque, name: []const u8) bool {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QProcessEnvironment_Contains(@ptrCast(self), name_str);
    }

    pub fn Insert(self: ?*anyopaque, name: []const u8, value: []const u8) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
const value_str = qtc.libqt_string{
    .len = value.len,
    .data = value.ptr,
};
qtc.QProcessEnvironment_Insert(@ptrCast(self), name_str, value_str);
    }

    pub fn Remove(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
qtc.QProcessEnvironment_Remove(@ptrCast(self), name_str);
    }

    pub fn Value(self: ?*anyopaque, name: []const u8, allocator: std.mem.Allocator) []const u8 {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
const _str = qtc.QProcessEnvironment_Value(@ptrCast(self), name_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qprocessenvironment.Value: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ToStringList(self: ?*anyopaque, ) []const u8 {
        return qtc.QProcessEnvironment_ToStringList(@ptrCast(self));
    }

    pub fn Keys(self: ?*anyopaque, ) []const u8 {
        return qtc.QProcessEnvironment_Keys(@ptrCast(self));
    }

    pub fn Insert2(self: ?*anyopaque, e: ?*anyopaque) void {
        qtc.QProcessEnvironment_Insert2(@ptrCast(self), @ptrCast(e));
    }

    pub fn SystemEnvironment() QtC.QProcessEnvironment {
        return qtc.QProcessEnvironment_SystemEnvironment();
    }

    pub fn Value2(self: ?*anyopaque, name: []const u8, defaultValue: []const u8, allocator: std.mem.Allocator) []const u8 {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
const defaultValue_str = qtc.libqt_string{
    .len = defaultValue.len,
    .data = defaultValue.ptr,
};
const _str = qtc.QProcessEnvironment_Value2(@ptrCast(self), name_str, defaultValue_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qprocessenvironment.Value2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QProcessEnvironment_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qprocess.html
pub const qprocess = struct {

    /// New constructs a new QProcess object.
    pub fn New() QtC.QProcess {
        return qtc.QProcess_new();
    }


    /// New2 constructs a new QProcess object.
    pub fn New2(parent: ?*anyopaque) QtC.QProcess {
        return qtc.QProcess_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QProcess_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qprocess.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Start(self: ?*anyopaque, program: []const u8) void {
        const program_str = qtc.libqt_string{
    .len = program.len,
    .data = program.ptr,
};
qtc.QProcess_Start(@ptrCast(self), program_str);
    }

    pub fn Start2(self: ?*anyopaque, ) void {
        qtc.QProcess_Start2(@ptrCast(self));
    }

    pub fn StartCommand(self: ?*anyopaque, command: []const u8) void {
        const command_str = qtc.libqt_string{
    .len = command.len,
    .data = command.ptr,
};
qtc.QProcess_StartCommand(@ptrCast(self), command_str);
    }

    pub fn StartDetached(self: ?*anyopaque, ) bool {
        return qtc.QProcess_StartDetached(@ptrCast(self));
    }

    pub fn Open(self: ?*anyopaque, mode: i32) bool {
        return qtc.QProcess_Open(@ptrCast(self), @intCast(mode));
    }

    /// Allows for overriding the related default method
    pub fn OnOpen(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QProcess_OnOpen(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseOpen(self: ?*anyopaque, mode: i32) bool {
        return qtc.QProcess_QBaseOpen(@ptrCast(self), @intCast(mode));
    }

    pub fn Program(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QProcess_Program(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qprocess.Program: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetProgram(self: ?*anyopaque, program: []const u8) void {
        const program_str = qtc.libqt_string{
    .len = program.len,
    .data = program.ptr,
};
qtc.QProcess_SetProgram(@ptrCast(self), program_str);
    }

    pub fn Arguments(self: ?*anyopaque, ) []const u8 {
        return qtc.QProcess_Arguments(@ptrCast(self));
    }

    pub fn SetArguments(self: ?*anyopaque, arguments: []const u8) void {
        qtc.QProcess_SetArguments(@ptrCast(self), @ptrCast(arguments));
    }

    pub fn ProcessChannelMode(self: ?*anyopaque, ) i32 {
        return qtc.QProcess_ProcessChannelMode(@ptrCast(self));
    }

    pub fn SetProcessChannelMode(self: ?*anyopaque, mode: i32) void {
        qtc.QProcess_SetProcessChannelMode(@ptrCast(self), @intCast(mode));
    }

    pub fn InputChannelMode(self: ?*anyopaque, ) i32 {
        return qtc.QProcess_InputChannelMode(@ptrCast(self));
    }

    pub fn SetInputChannelMode(self: ?*anyopaque, mode: i32) void {
        qtc.QProcess_SetInputChannelMode(@ptrCast(self), @intCast(mode));
    }

    pub fn ReadChannel(self: ?*anyopaque, ) i32 {
        return qtc.QProcess_ReadChannel(@ptrCast(self));
    }

    pub fn SetReadChannel(self: ?*anyopaque, channel: i32) void {
        qtc.QProcess_SetReadChannel(@ptrCast(self), @intCast(channel));
    }

    pub fn CloseReadChannel(self: ?*anyopaque, channel: i32) void {
        qtc.QProcess_CloseReadChannel(@ptrCast(self), @intCast(channel));
    }

    pub fn CloseWriteChannel(self: ?*anyopaque, ) void {
        qtc.QProcess_CloseWriteChannel(@ptrCast(self));
    }

    pub fn SetStandardInputFile(self: ?*anyopaque, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
qtc.QProcess_SetStandardInputFile(@ptrCast(self), fileName_str);
    }

    pub fn SetStandardOutputFile(self: ?*anyopaque, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
qtc.QProcess_SetStandardOutputFile(@ptrCast(self), fileName_str);
    }

    pub fn SetStandardErrorFile(self: ?*anyopaque, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
qtc.QProcess_SetStandardErrorFile(@ptrCast(self), fileName_str);
    }

    pub fn SetStandardOutputProcess(self: ?*anyopaque, destination: ?*anyopaque) void {
        qtc.QProcess_SetStandardOutputProcess(@ptrCast(self), @ptrCast(destination));
    }

    pub fn NativeArguments(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QProcess_NativeArguments(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qprocess.NativeArguments: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetNativeArguments(self: ?*anyopaque, arguments: []const u8) void {
        const arguments_str = qtc.libqt_string{
    .len = arguments.len,
    .data = arguments.ptr,
};
qtc.QProcess_SetNativeArguments(@ptrCast(self), arguments_str);
    }

    pub fn WorkingDirectory(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QProcess_WorkingDirectory(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qprocess.WorkingDirectory: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetWorkingDirectory(self: ?*anyopaque, dir: []const u8) void {
        const dir_str = qtc.libqt_string{
    .len = dir.len,
    .data = dir.ptr,
};
qtc.QProcess_SetWorkingDirectory(@ptrCast(self), dir_str);
    }

    pub fn SetEnvironment(self: ?*anyopaque, environment: []const u8) void {
        qtc.QProcess_SetEnvironment(@ptrCast(self), @ptrCast(environment));
    }

    pub fn Environment(self: ?*anyopaque, ) []const u8 {
        return qtc.QProcess_Environment(@ptrCast(self));
    }

    pub fn SetProcessEnvironment(self: ?*anyopaque, environment: ?*anyopaque) void {
        qtc.QProcess_SetProcessEnvironment(@ptrCast(self), @ptrCast(environment));
    }

    pub fn ProcessEnvironment(self: ?*anyopaque, ) QtC.QProcessEnvironment {
        return qtc.QProcess_ProcessEnvironment(@ptrCast(self));
    }

    pub fn Error(self: ?*anyopaque, ) i32 {
        return qtc.QProcess_Error(@ptrCast(self));
    }

    pub fn State(self: ?*anyopaque, ) i32 {
        return qtc.QProcess_State(@ptrCast(self));
    }

    pub fn ProcessId(self: ?*anyopaque, ) i64 {
        return qtc.QProcess_ProcessId(@ptrCast(self));
    }

    pub fn WaitForStarted(self: ?*anyopaque, ) bool {
        return qtc.QProcess_WaitForStarted(@ptrCast(self));
    }

    pub fn WaitForReadyRead(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QProcess_WaitForReadyRead(@ptrCast(self), msecs);
    }

    /// Allows for overriding the related default method
    pub fn OnWaitForReadyRead(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QProcess_OnWaitForReadyRead(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWaitForReadyRead(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QProcess_QBaseWaitForReadyRead(@ptrCast(self), msecs);
    }

    pub fn WaitForBytesWritten(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QProcess_WaitForBytesWritten(@ptrCast(self), msecs);
    }

    /// Allows for overriding the related default method
    pub fn OnWaitForBytesWritten(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) bool) void {
        qtc.QProcess_OnWaitForBytesWritten(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWaitForBytesWritten(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QProcess_QBaseWaitForBytesWritten(@ptrCast(self), msecs);
    }

    pub fn WaitForFinished(self: ?*anyopaque, ) bool {
        return qtc.QProcess_WaitForFinished(@ptrCast(self));
    }

    pub fn ReadAllStandardOutput(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QProcess_ReadAllStandardOutput(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qprocess.ReadAllStandardOutput: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn ReadAllStandardError(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QProcess_ReadAllStandardError(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qprocess.ReadAllStandardError: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn ExitCode(self: ?*anyopaque, ) i32 {
        return qtc.QProcess_ExitCode(@ptrCast(self));
    }

    pub fn ExitStatus(self: ?*anyopaque, ) i32 {
        return qtc.QProcess_ExitStatus(@ptrCast(self));
    }

    pub fn BytesToWrite(self: ?*anyopaque, ) i64 {
        return qtc.QProcess_BytesToWrite(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnBytesToWrite(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i64) void {
        qtc.QProcess_OnBytesToWrite(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseBytesToWrite(self: ?*anyopaque, ) i64 {
        return qtc.QProcess_QBaseBytesToWrite(@ptrCast(self));
    }

    pub fn IsSequential(self: ?*anyopaque, ) bool {
        return qtc.QProcess_IsSequential(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnIsSequential(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) bool) void {
        qtc.QProcess_OnIsSequential(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseIsSequential(self: ?*anyopaque, ) bool {
        return qtc.QProcess_QBaseIsSequential(@ptrCast(self));
    }

    pub fn Close(self: ?*anyopaque, ) void {
        qtc.QProcess_Close(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnClose(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QProcess_OnClose(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseClose(self: ?*anyopaque, ) void {
        qtc.QProcess_QBaseClose(@ptrCast(self));
    }

    pub fn Execute(program: []const u8) i32 {
        const program_str = qtc.libqt_string{
    .len = program.len,
    .data = program.ptr,
};
return qtc.QProcess_Execute(program_str);
    }

    pub fn StartDetached2(program: []const u8) bool {
        const program_str = qtc.libqt_string{
    .len = program.len,
    .data = program.ptr,
};
return qtc.QProcess_StartDetached2(program_str);
    }

    pub fn SystemEnvironment() []const u8 {
        return qtc.QProcess_SystemEnvironment();
    }

    pub fn NullDevice(, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QProcess_NullDevice();
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qprocess.NullDevice: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SplitCommand(command: []const u8) []const u8 {
        return qtc.QProcess_SplitCommand(@ptrCast(command));
    }

    pub fn Terminate(self: ?*anyopaque, ) void {
        qtc.QProcess_Terminate(@ptrCast(self));
    }

    pub fn Kill(self: ?*anyopaque, ) void {
        qtc.QProcess_Kill(@ptrCast(self));
    }

    pub fn Finished(self: ?*anyopaque, exitCode: i32) void {
        qtc.QProcess_Finished(@ptrCast(self), exitCode);
    }

    pub fn OnFinished(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QProcess_Connect_Finished(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ErrorOccurred(self: ?*anyopaque, errorVal: i32) void {
        qtc.QProcess_ErrorOccurred(@ptrCast(self), @intCast(errorVal));
    }

    pub fn OnErrorOccurred(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QProcess_Connect_ErrorOccurred(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn SetProcessState(self: ?*anyopaque, state: i32) void {
        qtc.QProcess_SetProcessState(@ptrCast(self), @intCast(state));
    }

    /// Allows for overriding the related default method
    pub fn OnSetProcessState(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QProcess_OnSetProcessState(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetProcessState(self: ?*anyopaque, state: i32) void {
        qtc.QProcess_QBaseSetProcessState(@ptrCast(self), @intCast(state));
    }

    pub fn ReadData(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        return qtc.QProcess_ReadData(@ptrCast(self), @ptrCast(data), maxlen);
    }

    /// Allows for overriding the related default method
    pub fn OnReadData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i64) callconv(.c) i64) void {
        qtc.QProcess_OnReadData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseReadData(self: ?*anyopaque, data: []const u8, maxlen: i64) i64 {
        return qtc.QProcess_QBaseReadData(@ptrCast(self), @ptrCast(data), maxlen);
    }

    pub fn WriteData(self: ?*anyopaque, data: []const u8, lenVal: i64) i64 {
        return qtc.QProcess_WriteData(@ptrCast(self), @ptrCast(data), lenVal);
    }

    /// Allows for overriding the related default method
    pub fn OnWriteData(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, i64) callconv(.c) i64) void {
        qtc.QProcess_OnWriteData(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseWriteData(self: ?*anyopaque, data: []const u8, lenVal: i64) i64 {
        return qtc.QProcess_QBaseWriteData(@ptrCast(self), @ptrCast(data), lenVal);
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QProcess_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qprocess.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QProcess_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qprocess.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Start22(self: ?*anyopaque, program: []const u8, arguments: []const u8) void {
        const program_str = qtc.libqt_string{
    .len = program.len,
    .data = program.ptr,
};
qtc.QProcess_Start22(@ptrCast(self), program_str, @ptrCast(arguments));
    }

    pub fn Start3(self: ?*anyopaque, program: []const u8, arguments: []const u8, mode: i32) void {
        const program_str = qtc.libqt_string{
    .len = program.len,
    .data = program.ptr,
};
qtc.QProcess_Start3(@ptrCast(self), program_str, @ptrCast(arguments), @intCast(mode));
    }

    pub fn Start1(self: ?*anyopaque, mode: i32) void {
        qtc.QProcess_Start1(@ptrCast(self), @intCast(mode));
    }

    pub fn StartCommand2(self: ?*anyopaque, command: []const u8, mode: i32) void {
        const command_str = qtc.libqt_string{
    .len = command.len,
    .data = command.ptr,
};
qtc.QProcess_StartCommand2(@ptrCast(self), command_str, @intCast(mode));
    }

    pub fn StartDetached1(self: ?*anyopaque, pid: *i64) bool {
        return qtc.QProcess_StartDetached1(@ptrCast(self), @ptrCast(pid));
    }

    pub fn SetStandardOutputFile2(self: ?*anyopaque, fileName: []const u8, mode: i32) void {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
qtc.QProcess_SetStandardOutputFile2(@ptrCast(self), fileName_str, @intCast(mode));
    }

    pub fn SetStandardErrorFile2(self: ?*anyopaque, fileName: []const u8, mode: i32) void {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
qtc.QProcess_SetStandardErrorFile2(@ptrCast(self), fileName_str, @intCast(mode));
    }

    pub fn WaitForStarted1(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QProcess_WaitForStarted1(@ptrCast(self), msecs);
    }

    pub fn WaitForFinished1(self: ?*anyopaque, msecs: i32) bool {
        return qtc.QProcess_WaitForFinished1(@ptrCast(self), msecs);
    }

    pub fn Execute2(program: []const u8, arguments: []const u8) i32 {
        const program_str = qtc.libqt_string{
    .len = program.len,
    .data = program.ptr,
};
return qtc.QProcess_Execute2(program_str, @ptrCast(arguments));
    }

    pub fn StartDetached22(program: []const u8, arguments: []const u8) bool {
        const program_str = qtc.libqt_string{
    .len = program.len,
    .data = program.ptr,
};
return qtc.QProcess_StartDetached22(program_str, @ptrCast(arguments));
    }

    pub fn StartDetached3(program: []const u8, arguments: []const u8, workingDirectory: []const u8) bool {
        const program_str = qtc.libqt_string{
    .len = program.len,
    .data = program.ptr,
};
const workingDirectory_str = qtc.libqt_string{
    .len = workingDirectory.len,
    .data = workingDirectory.ptr,
};
return qtc.QProcess_StartDetached3(program_str, @ptrCast(arguments), workingDirectory_str);
    }

    pub fn StartDetached4(program: []const u8, arguments: []const u8, workingDirectory: []const u8, pid: *i64) bool {
        const program_str = qtc.libqt_string{
    .len = program.len,
    .data = program.ptr,
};
const workingDirectory_str = qtc.libqt_string{
    .len = workingDirectory.len,
    .data = workingDirectory.ptr,
};
return qtc.QProcess_StartDetached4(program_str, @ptrCast(arguments), workingDirectory_str, @ptrCast(pid));
    }

    pub fn Finished2(self: ?*anyopaque, exitCode: i32, exitStatus: i32) void {
        qtc.QProcess_Finished2(@ptrCast(self), exitCode, @intCast(exitStatus));
    }

    pub fn OnFinished2(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QProcess_Connect_Finished2(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Wrapper to allow calling private signal
    pub fn Onstarted(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QProcess_Connect_started(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Wrapper to allow calling private signal
    pub fn OnstateChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QProcess_Connect_stateChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Wrapper to allow calling private signal
    pub fn OnreadyReadStandardOutput(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QProcess_Connect_readyReadStandardOutput(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Wrapper to allow calling private signal
    pub fn OnreadyReadStandardError(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QProcess_Connect_readyReadStandardError(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QProcess_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qprocess-createprocessarguments.html
pub const qprocess__createprocessarguments = struct {

    pub fn ProcessAttributes(self: ?*anyopaque, ) _SECURITY_ATTRIBUTES {
        return @ptrCast(qtc.QProcess__CreateProcessArguments_ProcessAttributes(@ptrCast(self)));
    }

    pub fn SetProcessAttributes(self: ?*anyopaque, processAttributes: *_SECURITY_ATTRIBUTES) void {
        qtc.QProcess__CreateProcessArguments_SetProcessAttributes(@ptrCast(self), @ptrCast(processAttributes));
    }

    pub fn ThreadAttributes(self: ?*anyopaque, ) _SECURITY_ATTRIBUTES {
        return @ptrCast(qtc.QProcess__CreateProcessArguments_ThreadAttributes(@ptrCast(self)));
    }

    pub fn SetThreadAttributes(self: ?*anyopaque, threadAttributes: *_SECURITY_ATTRIBUTES) void {
        qtc.QProcess__CreateProcessArguments_SetThreadAttributes(@ptrCast(self), @ptrCast(threadAttributes));
    }

    pub fn InheritHandles(self: ?*anyopaque, ) bool {
        return qtc.QProcess__CreateProcessArguments_InheritHandles(@ptrCast(self));
    }

    pub fn SetInheritHandles(self: ?*anyopaque, inheritHandles: bool) void {
        qtc.QProcess__CreateProcessArguments_SetInheritHandles(@ptrCast(self), inheritHandles);
    }

    pub fn Flags(self: ?*anyopaque, ) unsigned long {
        return qtc.QProcess__CreateProcessArguments_Flags(@ptrCast(self));
    }

    pub fn SetFlags(self: ?*anyopaque, flags: unsigned long) void {
        qtc.QProcess__CreateProcessArguments_SetFlags(@ptrCast(self), flags);
    }

    pub fn StartupInfo(self: ?*anyopaque, ) _STARTUPINFOW {
        return @ptrCast(qtc.QProcess__CreateProcessArguments_StartupInfo(@ptrCast(self)));
    }

    pub fn SetStartupInfo(self: ?*anyopaque, startupInfo: *_STARTUPINFOW) void {
        qtc.QProcess__CreateProcessArguments_SetStartupInfo(@ptrCast(self), @ptrCast(startupInfo));
    }

    pub fn ProcessInformation(self: ?*anyopaque, ) _PROCESS_INFORMATION {
        return @ptrCast(qtc.QProcess__CreateProcessArguments_ProcessInformation(@ptrCast(self)));
    }

    pub fn SetProcessInformation(self: ?*anyopaque, processInformation: *_PROCESS_INFORMATION) void {
        qtc.QProcess__CreateProcessArguments_SetProcessInformation(@ptrCast(self), @ptrCast(processInformation));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QProcess__CreateProcessArguments_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/process.html#types
pub const enums = struct {
    pub const Initialization = enum {
        pub const InheritFromParent: i32 = 0;
    };

    pub const ProcessError = enum {
        pub const FailedToStart: i32 = 0;
        pub const Crashed: i32 = 1;
        pub const Timedout: i32 = 2;
        pub const ReadError: i32 = 3;
        pub const WriteError: i32 = 4;
        pub const UnknownError: i32 = 5;
    };

    pub const ProcessState = enum {
        pub const NotRunning: i32 = 0;
        pub const Starting: i32 = 1;
        pub const Running: i32 = 2;
    };

    pub const ProcessChannel = enum {
        pub const StandardOutput: i32 = 0;
        pub const StandardError: i32 = 1;
    };

    pub const ProcessChannelMode = enum {
        pub const SeparateChannels: i32 = 0;
        pub const MergedChannels: i32 = 1;
        pub const ForwardedChannels: i32 = 2;
        pub const ForwardedOutputChannel: i32 = 3;
        pub const ForwardedErrorChannel: i32 = 4;
    };

    pub const InputChannelMode = enum {
        pub const ManagedInputChannel: i32 = 0;
        pub const ForwardedInputChannel: i32 = 1;
    };

    pub const ExitStatus = enum {
        pub const NormalExit: i32 = 0;
        pub const CrashExit: i32 = 1;
    };

};
