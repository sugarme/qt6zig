const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qcommandlineoption.html
pub const qcommandlineoption = struct {

    /// New constructs a new QCommandLineOption object.
    pub fn New(name: []const u8) QtC.QCommandLineOption {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QCommandLineOption_new(name_str);
    }


    /// New2 constructs a new QCommandLineOption object.
    pub fn New2(names: []const u8) QtC.QCommandLineOption {
        return qtc.QCommandLineOption_new2(@ptrCast(names));
    }


    /// New3 constructs a new QCommandLineOption object.
    pub fn New3(name: []const u8, description: []const u8) QtC.QCommandLineOption {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
const description_str = qtc.libqt_string{
    .len = description.len,
    .data = description.ptr,
};
return qtc.QCommandLineOption_new3(name_str, description_str);
    }


    /// New4 constructs a new QCommandLineOption object.
    pub fn New4(names: []const u8, description: []const u8) QtC.QCommandLineOption {
        const description_str = qtc.libqt_string{
    .len = description.len,
    .data = description.ptr,
};
return qtc.QCommandLineOption_new4(@ptrCast(names), description_str);
    }


    /// New5 constructs a new QCommandLineOption object.
    pub fn New5(other: ?*anyopaque) QtC.QCommandLineOption {
        return qtc.QCommandLineOption_new5(@ptrCast(other));
    }


    /// New6 constructs a new QCommandLineOption object.
    pub fn New6(name: []const u8, description: []const u8, valueName: []const u8) QtC.QCommandLineOption {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
const description_str = qtc.libqt_string{
    .len = description.len,
    .data = description.ptr,
};
const valueName_str = qtc.libqt_string{
    .len = valueName.len,
    .data = valueName.ptr,
};
return qtc.QCommandLineOption_new6(name_str, description_str, valueName_str);
    }


    /// New7 constructs a new QCommandLineOption object.
    pub fn New7(name: []const u8, description: []const u8, valueName: []const u8, defaultValue: []const u8) QtC.QCommandLineOption {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
const description_str = qtc.libqt_string{
    .len = description.len,
    .data = description.ptr,
};
const valueName_str = qtc.libqt_string{
    .len = valueName.len,
    .data = valueName.ptr,
};
const defaultValue_str = qtc.libqt_string{
    .len = defaultValue.len,
    .data = defaultValue.ptr,
};
return qtc.QCommandLineOption_new7(name_str, description_str, valueName_str, defaultValue_str);
    }


    /// New8 constructs a new QCommandLineOption object.
    pub fn New8(names: []const u8, description: []const u8, valueName: []const u8) QtC.QCommandLineOption {
        const description_str = qtc.libqt_string{
    .len = description.len,
    .data = description.ptr,
};
const valueName_str = qtc.libqt_string{
    .len = valueName.len,
    .data = valueName.ptr,
};
return qtc.QCommandLineOption_new8(@ptrCast(names), description_str, valueName_str);
    }


    /// New9 constructs a new QCommandLineOption object.
    pub fn New9(names: []const u8, description: []const u8, valueName: []const u8, defaultValue: []const u8) QtC.QCommandLineOption {
        const description_str = qtc.libqt_string{
    .len = description.len,
    .data = description.ptr,
};
const valueName_str = qtc.libqt_string{
    .len = valueName.len,
    .data = valueName.ptr,
};
const defaultValue_str = qtc.libqt_string{
    .len = defaultValue.len,
    .data = defaultValue.ptr,
};
return qtc.QCommandLineOption_new9(@ptrCast(names), description_str, valueName_str, defaultValue_str);
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCommandLineOption_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCommandLineOption_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn Names(self: ?*anyopaque, ) []const u8 {
        return qtc.QCommandLineOption_Names(@ptrCast(self));
    }

    pub fn SetValueName(self: ?*anyopaque, name: []const u8) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
qtc.QCommandLineOption_SetValueName(@ptrCast(self), name_str);
    }

    pub fn ValueName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCommandLineOption_ValueName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcommandlineoption.ValueName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetDescription(self: ?*anyopaque, description: []const u8) void {
        const description_str = qtc.libqt_string{
    .len = description.len,
    .data = description.ptr,
};
qtc.QCommandLineOption_SetDescription(@ptrCast(self), description_str);
    }

    pub fn Description(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCommandLineOption_Description(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcommandlineoption.Description: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetDefaultValue(self: ?*anyopaque, defaultValue: []const u8) void {
        const defaultValue_str = qtc.libqt_string{
    .len = defaultValue.len,
    .data = defaultValue.ptr,
};
qtc.QCommandLineOption_SetDefaultValue(@ptrCast(self), defaultValue_str);
    }

    pub fn SetDefaultValues(self: ?*anyopaque, defaultValues: []const u8) void {
        qtc.QCommandLineOption_SetDefaultValues(@ptrCast(self), @ptrCast(defaultValues));
    }

    pub fn DefaultValues(self: ?*anyopaque, ) []const u8 {
        return qtc.QCommandLineOption_DefaultValues(@ptrCast(self));
    }

    pub fn Flags(self: ?*anyopaque, ) i32 {
        return qtc.QCommandLineOption_Flags(@ptrCast(self));
    }

    pub fn SetFlags(self: ?*anyopaque, aflags: i32) void {
        qtc.QCommandLineOption_SetFlags(@ptrCast(self), @intCast(aflags));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCommandLineOption_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/commandlineoption.html#types
pub const enums = struct {
    pub const Flag = enum {
        pub const HiddenFromHelp: i32 = 1;
        pub const ShortOptionStyle: i32 = 2;
    };

};
