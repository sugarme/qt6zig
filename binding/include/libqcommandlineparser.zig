const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qcommandlineparser.html
pub const qcommandlineparser = struct {

    /// New constructs a new QCommandLineParser object.
    pub fn New() QtC.QCommandLineParser {
        return qtc.QCommandLineParser_new();
    }


    pub fn Tr(sourceText: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCommandLineParser_Tr(@ptrCast(sourceText));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcommandlineparser.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetSingleDashWordOptionMode(self: ?*anyopaque, parsingMode: i32) void {
        qtc.QCommandLineParser_SetSingleDashWordOptionMode(@ptrCast(self), @intCast(parsingMode));
    }

    pub fn SetOptionsAfterPositionalArgumentsMode(self: ?*anyopaque, mode: i32) void {
        qtc.QCommandLineParser_SetOptionsAfterPositionalArgumentsMode(@ptrCast(self), @intCast(mode));
    }

    pub fn AddOption(self: ?*anyopaque, commandLineOption: ?*anyopaque) bool {
        return qtc.QCommandLineParser_AddOption(@ptrCast(self), @ptrCast(commandLineOption));
    }

    pub fn AddOptions(self: ?*anyopaque, options: []const u8) bool {
        return qtc.QCommandLineParser_AddOptions(@ptrCast(self), @ptrCast(options));
    }

    pub fn AddVersionOption(self: ?*anyopaque, ) QtC.QCommandLineOption {
        return qtc.QCommandLineParser_AddVersionOption(@ptrCast(self));
    }

    pub fn AddHelpOption(self: ?*anyopaque, ) QtC.QCommandLineOption {
        return qtc.QCommandLineParser_AddHelpOption(@ptrCast(self));
    }

    pub fn SetApplicationDescription(self: ?*anyopaque, description: []const u8) void {
        const description_str = qtc.libqt_string{
    .len = description.len,
    .data = description.ptr,
};
qtc.QCommandLineParser_SetApplicationDescription(@ptrCast(self), description_str);
    }

    pub fn ApplicationDescription(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCommandLineParser_ApplicationDescription(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcommandlineparser.ApplicationDescription: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn AddPositionalArgument(self: ?*anyopaque, name: []const u8, description: []const u8) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
const description_str = qtc.libqt_string{
    .len = description.len,
    .data = description.ptr,
};
qtc.QCommandLineParser_AddPositionalArgument(@ptrCast(self), name_str, description_str);
    }

    pub fn ClearPositionalArguments(self: ?*anyopaque, ) void {
        qtc.QCommandLineParser_ClearPositionalArguments(@ptrCast(self));
    }

    pub fn Process(self: ?*anyopaque, arguments: []const u8) void {
        qtc.QCommandLineParser_Process(@ptrCast(self), @ptrCast(arguments));
    }

    pub fn Process2(self: ?*anyopaque, app: ?*anyopaque) void {
        qtc.QCommandLineParser_Process2(@ptrCast(self), @ptrCast(app));
    }

    pub fn Parse(self: ?*anyopaque, arguments: []const u8) bool {
        return qtc.QCommandLineParser_Parse(@ptrCast(self), @ptrCast(arguments));
    }

    pub fn ErrorText(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCommandLineParser_ErrorText(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcommandlineparser.ErrorText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn IsSet(self: ?*anyopaque, name: []const u8) bool {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QCommandLineParser_IsSet(@ptrCast(self), name_str);
    }

    pub fn Value(self: ?*anyopaque, name: []const u8, allocator: std.mem.Allocator) []const u8 {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
const _str = qtc.QCommandLineParser_Value(@ptrCast(self), name_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcommandlineparser.Value: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Values(self: ?*anyopaque, name: []const u8) []const u8 {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QCommandLineParser_Values(@ptrCast(self), name_str);
    }

    pub fn IsSet2(self: ?*anyopaque, option: ?*anyopaque) bool {
        return qtc.QCommandLineParser_IsSet2(@ptrCast(self), @ptrCast(option));
    }

    pub fn Value2(self: ?*anyopaque, option: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCommandLineParser_Value2(@ptrCast(self), @ptrCast(option));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcommandlineparser.Value2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Values2(self: ?*anyopaque, option: ?*anyopaque) []const u8 {
        return qtc.QCommandLineParser_Values2(@ptrCast(self), @ptrCast(option));
    }

    pub fn PositionalArguments(self: ?*anyopaque, ) []const u8 {
        return qtc.QCommandLineParser_PositionalArguments(@ptrCast(self));
    }

    pub fn OptionNames(self: ?*anyopaque, ) []const u8 {
        return qtc.QCommandLineParser_OptionNames(@ptrCast(self));
    }

    pub fn UnknownOptionNames(self: ?*anyopaque, ) []const u8 {
        return qtc.QCommandLineParser_UnknownOptionNames(@ptrCast(self));
    }

    pub fn ShowVersion(self: ?*anyopaque, ) void {
        qtc.QCommandLineParser_ShowVersion(@ptrCast(self));
    }

    pub fn ShowHelp(self: ?*anyopaque, ) void {
        qtc.QCommandLineParser_ShowHelp(@ptrCast(self));
    }

    pub fn HelpText(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCommandLineParser_HelpText(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcommandlineparser.HelpText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr2(sourceText: []const u8, disambiguation: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCommandLineParser_Tr2(@ptrCast(sourceText), @ptrCast(disambiguation));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcommandlineparser.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(sourceText: []const u8, disambiguation: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCommandLineParser_Tr3(@ptrCast(sourceText), @ptrCast(disambiguation), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcommandlineparser.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn AddPositionalArgument3(self: ?*anyopaque, name: []const u8, description: []const u8, syntax: []const u8) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
const description_str = qtc.libqt_string{
    .len = description.len,
    .data = description.ptr,
};
const syntax_str = qtc.libqt_string{
    .len = syntax.len,
    .data = syntax.ptr,
};
qtc.QCommandLineParser_AddPositionalArgument3(@ptrCast(self), name_str, description_str, syntax_str);
    }

    pub fn ShowHelp1(self: ?*anyopaque, exitCode: i32) void {
        qtc.QCommandLineParser_ShowHelp1(@ptrCast(self), exitCode);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCommandLineParser_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/commandlineparser.html#types
pub const enums = struct {
    pub const SingleDashWordOptionMode = enum {
        pub const ParseAsCompactedShortOptions: i32 = 0;
        pub const ParseAsLongOptions: i32 = 1;
    };

    pub const OptionsAfterPositionalArgumentsMode = enum {
        pub const ParseAsOptions: i32 = 0;
        pub const ParseAsPositionalArguments: i32 = 1;
    };

};
