const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qjsonparseerror.html
pub const qjsonparseerror = struct {

    /// New constructs a new QJsonParseError object.
    pub fn New(other: ?*anyopaque) QtC.QJsonParseError {
        return qtc.QJsonParseError_new(@ptrCast(other));
    }


    /// New2 constructs a new QJsonParseError object.
    pub fn New2(other: ?*anyopaque) QtC.QJsonParseError {
        return qtc.QJsonParseError_new2(@ptrCast(other));
    }


    /// New3 constructs a new QJsonParseError object.
    pub fn New3() QtC.QJsonParseError {
        return qtc.QJsonParseError_new3();
    }


    /// New4 constructs a new QJsonParseError object.
    pub fn New4(param1: ?*anyopaque) QtC.QJsonParseError {
        return qtc.QJsonParseError_new4(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QJsonParseError_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QJsonParseError_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn ErrorString(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QJsonParseError_ErrorString(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qjsonparseerror.ErrorString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Offset(self: ?*anyopaque, ) i32 {
        return qtc.QJsonParseError_Offset(@ptrCast(self));
    }

    pub fn SetOffset(self: ?*anyopaque, offset: i32) void {
        qtc.QJsonParseError_SetOffset(@ptrCast(self), offset);
    }

    pub fn Error(self: ?*anyopaque, ) i32 {
        return qtc.QJsonParseError_Error(@ptrCast(self));
    }

    pub fn SetError(self: ?*anyopaque, _error: i32) void {
        qtc.QJsonParseError_SetError(@ptrCast(self), @intCast(_error));
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QJsonParseError_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QJsonParseError_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qjsondocument.html
pub const qjsondocument = struct {

    /// New constructs a new QJsonDocument object.
    pub fn New() QtC.QJsonDocument {
        return qtc.QJsonDocument_new();
    }


    /// New2 constructs a new QJsonDocument object.
    pub fn New2(object: ?*anyopaque) QtC.QJsonDocument {
        return qtc.QJsonDocument_new2(@ptrCast(object));
    }


    /// New3 constructs a new QJsonDocument object.
    pub fn New3(array: ?*anyopaque) QtC.QJsonDocument {
        return qtc.QJsonDocument_new3(@ptrCast(array));
    }


    /// New4 constructs a new QJsonDocument object.
    pub fn New4(other: ?*anyopaque) QtC.QJsonDocument {
        return qtc.QJsonDocument_new4(@ptrCast(other));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QJsonDocument_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QJsonDocument_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn FromVariant(variant: ?*anyopaque) QtC.QJsonDocument {
        return qtc.QJsonDocument_FromVariant(@ptrCast(variant));
    }

    pub fn ToVariant(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QJsonDocument_ToVariant(@ptrCast(self));
    }

    pub fn FromJson(json: []u8) QtC.QJsonDocument {
        const json_str = qtc.libqt_string{
    .len = json.len,
    .data = json.ptr,
};
return qtc.QJsonDocument_FromJson(json_str);
    }

    pub fn ToJson(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QJsonDocument_ToJson(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qjsondocument.ToJson: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn IsEmpty(self: ?*anyopaque, ) bool {
        return qtc.QJsonDocument_IsEmpty(@ptrCast(self));
    }

    pub fn IsArray(self: ?*anyopaque, ) bool {
        return qtc.QJsonDocument_IsArray(@ptrCast(self));
    }

    pub fn IsObject(self: ?*anyopaque, ) bool {
        return qtc.QJsonDocument_IsObject(@ptrCast(self));
    }

    pub fn Object(self: ?*anyopaque, ) QtC.QJsonObject {
        return qtc.QJsonDocument_Object(@ptrCast(self));
    }

    pub fn Array(self: ?*anyopaque, ) QtC.QJsonArray {
        return qtc.QJsonDocument_Array(@ptrCast(self));
    }

    pub fn SetObject(self: ?*anyopaque, object: ?*anyopaque) void {
        qtc.QJsonDocument_SetObject(@ptrCast(self), @ptrCast(object));
    }

    pub fn SetArray(self: ?*anyopaque, array: ?*anyopaque) void {
        qtc.QJsonDocument_SetArray(@ptrCast(self), @ptrCast(array));
    }

    pub fn OperatorSubscript(self: ?*anyopaque, key: []const u8) QtC.QJsonValue {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
return qtc.QJsonDocument_OperatorSubscript(@ptrCast(self), key_str);
    }

    pub fn OperatorSubscript4(self: ?*anyopaque, i: i64) QtC.QJsonValue {
        return qtc.QJsonDocument_OperatorSubscript4(@ptrCast(self), i);
    }

    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QJsonDocument_IsNull(@ptrCast(self));
    }

    pub fn FromJson2(json: []u8, errorVal: ?*anyopaque) QtC.QJsonDocument {
        const json_str = qtc.libqt_string{
    .len = json.len,
    .data = json.ptr,
};
return qtc.QJsonDocument_FromJson2(json_str, @ptrCast(errorVal));
    }

    pub fn ToJson1(self: ?*anyopaque, format: i32, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QJsonDocument_ToJson1(@ptrCast(self), @intCast(format));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qjsondocument.ToJson1: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QJsonDocument_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/jsondocument.html#types
pub const enums = struct {
    pub const ParseError = enum {
        pub const NoError: i32 = 0;
        pub const UnterminatedObject: i32 = 1;
        pub const MissingNameSeparator: i32 = 2;
        pub const UnterminatedArray: i32 = 3;
        pub const MissingValueSeparator: i32 = 4;
        pub const IllegalValue: i32 = 5;
        pub const TerminationByNumber: i32 = 6;
        pub const IllegalNumber: i32 = 7;
        pub const IllegalEscapeSequence: i32 = 8;
        pub const IllegalUTF8String: i32 = 9;
        pub const UnterminatedString: i32 = 10;
        pub const MissingObject: i32 = 11;
        pub const DeepNesting: i32 = 12;
        pub const DocumentTooLarge: i32 = 13;
        pub const GarbageAtEnd: i32 = 14;
    };

    pub const JsonFormat = enum {
        pub const Indented: i32 = 0;
        pub const Compact: i32 = 1;
    };

};
