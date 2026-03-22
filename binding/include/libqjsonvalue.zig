const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qjsonvalue.html
pub const qjsonvalue = struct {

    /// New constructs a new QJsonValue object.
    pub fn New() QtC.QJsonValue {
        return qtc.QJsonValue_new();
    }


    /// New2 constructs a new QJsonValue object.
    pub fn New2(b: bool) QtC.QJsonValue {
        return qtc.QJsonValue_new2(b);
    }


    /// New3 constructs a new QJsonValue object.
    pub fn New3(n: f64) QtC.QJsonValue {
        return qtc.QJsonValue_new3(n);
    }


    /// New4 constructs a new QJsonValue object.
    pub fn New4(n: i32) QtC.QJsonValue {
        return qtc.QJsonValue_new4(n);
    }


    /// New5 constructs a new QJsonValue object.
    pub fn New5(v: i64) QtC.QJsonValue {
        return qtc.QJsonValue_new5(v);
    }


    /// New6 constructs a new QJsonValue object.
    pub fn New6(s: []const u8) QtC.QJsonValue {
        const s_str = qtc.libqt_string{
    .len = s.len,
    .data = s.ptr,
};
return qtc.QJsonValue_new6(s_str);
    }


    /// New7 constructs a new QJsonValue object.
    pub fn New7(s: QLatin1StringView) QtC.QJsonValue {
        return qtc.QJsonValue_new7(s);
    }


    /// New8 constructs a new QJsonValue object.
    pub fn New8(s: []const u8) QtC.QJsonValue {
        return qtc.QJsonValue_new8(@ptrCast(s));
    }


    /// New9 constructs a new QJsonValue object.
    pub fn New9(a: ?*anyopaque) QtC.QJsonValue {
        return qtc.QJsonValue_new9(@ptrCast(a));
    }


    /// New10 constructs a new QJsonValue object.
    pub fn New10(o: ?*anyopaque) QtC.QJsonValue {
        return qtc.QJsonValue_new10(@ptrCast(o));
    }


    /// New11 constructs a new QJsonValue object.
    pub fn New11(other: ?*anyopaque) QtC.QJsonValue {
        return qtc.QJsonValue_new11(@ptrCast(other));
    }


    /// New12 constructs a new QJsonValue object.
    pub fn New12(param1: i32) QtC.QJsonValue {
        return qtc.QJsonValue_new12(@intCast(param1));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QJsonValue_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QJsonValue_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn FromVariant(variant: ?*anyopaque) QtC.QJsonValue {
        return qtc.QJsonValue_FromVariant(@ptrCast(variant));
    }

    pub fn ToVariant(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QJsonValue_ToVariant(@ptrCast(self));
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QJsonValue_Type(@ptrCast(self));
    }

    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QJsonValue_IsNull(@ptrCast(self));
    }

    pub fn IsBool(self: ?*anyopaque, ) bool {
        return qtc.QJsonValue_IsBool(@ptrCast(self));
    }

    pub fn IsDouble(self: ?*anyopaque, ) bool {
        return qtc.QJsonValue_IsDouble(@ptrCast(self));
    }

    pub fn IsString(self: ?*anyopaque, ) bool {
        return qtc.QJsonValue_IsString(@ptrCast(self));
    }

    pub fn IsArray(self: ?*anyopaque, ) bool {
        return qtc.QJsonValue_IsArray(@ptrCast(self));
    }

    pub fn IsObject(self: ?*anyopaque, ) bool {
        return qtc.QJsonValue_IsObject(@ptrCast(self));
    }

    pub fn IsUndefined(self: ?*anyopaque, ) bool {
        return qtc.QJsonValue_IsUndefined(@ptrCast(self));
    }

    pub fn ToBool(self: ?*anyopaque, ) bool {
        return qtc.QJsonValue_ToBool(@ptrCast(self));
    }

    pub fn ToInt(self: ?*anyopaque, ) i32 {
        return qtc.QJsonValue_ToInt(@ptrCast(self));
    }

    pub fn ToInteger(self: ?*anyopaque, ) i64 {
        return qtc.QJsonValue_ToInteger(@ptrCast(self));
    }

    pub fn ToDouble(self: ?*anyopaque, ) f64 {
        return qtc.QJsonValue_ToDouble(@ptrCast(self));
    }

    pub fn ToString(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QJsonValue_ToString(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qjsonvalue.ToString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ToString2(self: ?*anyopaque, defaultValue: []const u8, allocator: std.mem.Allocator) []const u8 {
        const defaultValue_str = qtc.libqt_string{
    .len = defaultValue.len,
    .data = defaultValue.ptr,
};
const _str = qtc.QJsonValue_ToString2(@ptrCast(self), defaultValue_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qjsonvalue.ToString2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ToArray(self: ?*anyopaque, ) QtC.QJsonArray {
        return qtc.QJsonValue_ToArray(@ptrCast(self));
    }

    pub fn ToArray2(self: ?*anyopaque, defaultValue: ?*anyopaque) QtC.QJsonArray {
        return qtc.QJsonValue_ToArray2(@ptrCast(self), @ptrCast(defaultValue));
    }

    pub fn ToObject(self: ?*anyopaque, ) QtC.QJsonObject {
        return qtc.QJsonValue_ToObject(@ptrCast(self));
    }

    pub fn ToObject2(self: ?*anyopaque, defaultValue: ?*anyopaque) QtC.QJsonObject {
        return qtc.QJsonValue_ToObject2(@ptrCast(self), @ptrCast(defaultValue));
    }

    pub fn OperatorSubscript(self: ?*anyopaque, key: []const u8) QtC.QJsonValue {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
return qtc.QJsonValue_OperatorSubscript(@ptrCast(self), key_str);
    }

    pub fn OperatorSubscript2(self: ?*anyopaque, key: []const u8) QtC.QJsonValue {
        return qtc.QJsonValue_OperatorSubscript2(@ptrCast(self), @ptrCast(key));
    }

    pub fn OperatorSubscript3(self: ?*anyopaque, key: QLatin1StringView) QtC.QJsonValue {
        return qtc.QJsonValue_OperatorSubscript3(@ptrCast(self), key);
    }

    pub fn OperatorSubscript4(self: ?*anyopaque, i: i64) QtC.QJsonValue {
        return qtc.QJsonValue_OperatorSubscript4(@ptrCast(self), i);
    }

    pub fn ToBool1(self: ?*anyopaque, defaultValue: bool) bool {
        return qtc.QJsonValue_ToBool1(@ptrCast(self), defaultValue);
    }

    pub fn ToInt1(self: ?*anyopaque, defaultValue: i32) i32 {
        return qtc.QJsonValue_ToInt1(@ptrCast(self), defaultValue);
    }

    pub fn ToInteger1(self: ?*anyopaque, defaultValue: i64) i64 {
        return qtc.QJsonValue_ToInteger1(@ptrCast(self), defaultValue);
    }

    pub fn ToDouble1(self: ?*anyopaque, defaultValue: f64) f64 {
        return qtc.QJsonValue_ToDouble1(@ptrCast(self), defaultValue);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QJsonValue_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qjsonvalueconstref.html
pub const qjsonvalueconstref = struct {

    pub fn OperatorQJsonValue(self: ?*anyopaque, ) QtC.QJsonValue {
        return qtc.QJsonValueConstRef_OperatorQJsonValue(@ptrCast(self));
    }

    pub fn ToVariant(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QJsonValueConstRef_ToVariant(@ptrCast(self));
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QJsonValueConstRef_Type(@ptrCast(self));
    }

    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QJsonValueConstRef_IsNull(@ptrCast(self));
    }

    pub fn IsBool(self: ?*anyopaque, ) bool {
        return qtc.QJsonValueConstRef_IsBool(@ptrCast(self));
    }

    pub fn IsDouble(self: ?*anyopaque, ) bool {
        return qtc.QJsonValueConstRef_IsDouble(@ptrCast(self));
    }

    pub fn IsString(self: ?*anyopaque, ) bool {
        return qtc.QJsonValueConstRef_IsString(@ptrCast(self));
    }

    pub fn IsArray(self: ?*anyopaque, ) bool {
        return qtc.QJsonValueConstRef_IsArray(@ptrCast(self));
    }

    pub fn IsObject(self: ?*anyopaque, ) bool {
        return qtc.QJsonValueConstRef_IsObject(@ptrCast(self));
    }

    pub fn IsUndefined(self: ?*anyopaque, ) bool {
        return qtc.QJsonValueConstRef_IsUndefined(@ptrCast(self));
    }

    pub fn ToBool(self: ?*anyopaque, ) bool {
        return qtc.QJsonValueConstRef_ToBool(@ptrCast(self));
    }

    pub fn ToInt(self: ?*anyopaque, ) i32 {
        return qtc.QJsonValueConstRef_ToInt(@ptrCast(self));
    }

    pub fn ToInteger(self: ?*anyopaque, ) i64 {
        return qtc.QJsonValueConstRef_ToInteger(@ptrCast(self));
    }

    pub fn ToDouble(self: ?*anyopaque, ) f64 {
        return qtc.QJsonValueConstRef_ToDouble(@ptrCast(self));
    }

    pub fn ToString(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QJsonValueConstRef_ToString(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qjsonvalueconstref.ToString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ToArray(self: ?*anyopaque, ) QtC.QJsonArray {
        return qtc.QJsonValueConstRef_ToArray(@ptrCast(self));
    }

    pub fn ToObject(self: ?*anyopaque, ) QtC.QJsonObject {
        return qtc.QJsonValueConstRef_ToObject(@ptrCast(self));
    }

    pub fn OperatorSubscript(self: ?*anyopaque, key: []const u8) QtC.QJsonValue {
        return qtc.QJsonValueConstRef_OperatorSubscript(@ptrCast(self), @ptrCast(key));
    }

    pub fn OperatorSubscript2(self: ?*anyopaque, key: QLatin1StringView) QtC.QJsonValue {
        return qtc.QJsonValueConstRef_OperatorSubscript2(@ptrCast(self), key);
    }

    pub fn OperatorSubscript3(self: ?*anyopaque, i: i64) QtC.QJsonValue {
        return qtc.QJsonValueConstRef_OperatorSubscript3(@ptrCast(self), i);
    }

    pub fn ToBool1(self: ?*anyopaque, defaultValue: bool) bool {
        return qtc.QJsonValueConstRef_ToBool1(@ptrCast(self), defaultValue);
    }

    pub fn ToInt1(self: ?*anyopaque, defaultValue: i32) i32 {
        return qtc.QJsonValueConstRef_ToInt1(@ptrCast(self), defaultValue);
    }

    pub fn ToInteger1(self: ?*anyopaque, defaultValue: i64) i64 {
        return qtc.QJsonValueConstRef_ToInteger1(@ptrCast(self), defaultValue);
    }

    pub fn ToDouble1(self: ?*anyopaque, defaultValue: f64) f64 {
        return qtc.QJsonValueConstRef_ToDouble1(@ptrCast(self), defaultValue);
    }

    pub fn ToString1(self: ?*anyopaque, defaultValue: []const u8, allocator: std.mem.Allocator) []const u8 {
        const defaultValue_str = qtc.libqt_string{
    .len = defaultValue.len,
    .data = defaultValue.ptr,
};
const _str = qtc.QJsonValueConstRef_ToString1(@ptrCast(self), defaultValue_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qjsonvalueconstref.ToString1: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QJsonValueConstRef_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qjsonvalueref.html
pub const qjsonvalueref = struct {

    /// New constructs a new QJsonValueRef object.
    pub fn New(array: ?*anyopaque, idx: i64) QtC.QJsonValueRef {
        return qtc.QJsonValueRef_new(@ptrCast(array), idx);
    }


    /// New2 constructs a new QJsonValueRef object.
    pub fn New2(object: ?*anyopaque, idx: i64) QtC.QJsonValueRef {
        return qtc.QJsonValueRef_new2(@ptrCast(object), idx);
    }


    pub fn OperatorAssign(self: ?*anyopaque, val: ?*anyopaque) void {
        qtc.QJsonValueRef_OperatorAssign(@ptrCast(self), @ptrCast(val));
    }

    pub fn OperatorQJsonValue(self: ?*anyopaque, ) QtC.QJsonValue {
        return qtc.QJsonValueRef_OperatorQJsonValue(@ptrCast(self));
    }

    pub fn ToVariant(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QJsonValueRef_ToVariant(@ptrCast(self));
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QJsonValueRef_Type(@ptrCast(self));
    }

    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QJsonValueRef_IsNull(@ptrCast(self));
    }

    pub fn IsBool(self: ?*anyopaque, ) bool {
        return qtc.QJsonValueRef_IsBool(@ptrCast(self));
    }

    pub fn IsDouble(self: ?*anyopaque, ) bool {
        return qtc.QJsonValueRef_IsDouble(@ptrCast(self));
    }

    pub fn IsString(self: ?*anyopaque, ) bool {
        return qtc.QJsonValueRef_IsString(@ptrCast(self));
    }

    pub fn IsArray(self: ?*anyopaque, ) bool {
        return qtc.QJsonValueRef_IsArray(@ptrCast(self));
    }

    pub fn IsObject(self: ?*anyopaque, ) bool {
        return qtc.QJsonValueRef_IsObject(@ptrCast(self));
    }

    pub fn IsUndefined(self: ?*anyopaque, ) bool {
        return qtc.QJsonValueRef_IsUndefined(@ptrCast(self));
    }

    pub fn ToBool(self: ?*anyopaque, ) bool {
        return qtc.QJsonValueRef_ToBool(@ptrCast(self));
    }

    pub fn ToInt(self: ?*anyopaque, ) i32 {
        return qtc.QJsonValueRef_ToInt(@ptrCast(self));
    }

    pub fn ToInteger(self: ?*anyopaque, ) i64 {
        return qtc.QJsonValueRef_ToInteger(@ptrCast(self));
    }

    pub fn ToDouble(self: ?*anyopaque, ) f64 {
        return qtc.QJsonValueRef_ToDouble(@ptrCast(self));
    }

    pub fn ToString(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QJsonValueRef_ToString(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qjsonvalueref.ToString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ToArray(self: ?*anyopaque, ) QtC.QJsonArray {
        return qtc.QJsonValueRef_ToArray(@ptrCast(self));
    }

    pub fn ToObject(self: ?*anyopaque, ) QtC.QJsonObject {
        return qtc.QJsonValueRef_ToObject(@ptrCast(self));
    }

    pub fn OperatorSubscript(self: ?*anyopaque, key: []const u8) QtC.QJsonValue {
        return qtc.QJsonValueRef_OperatorSubscript(@ptrCast(self), @ptrCast(key));
    }

    pub fn OperatorSubscript2(self: ?*anyopaque, key: QLatin1StringView) QtC.QJsonValue {
        return qtc.QJsonValueRef_OperatorSubscript2(@ptrCast(self), key);
    }

    pub fn OperatorSubscript3(self: ?*anyopaque, i: i64) QtC.QJsonValue {
        return qtc.QJsonValueRef_OperatorSubscript3(@ptrCast(self), i);
    }

    pub fn ToBool1(self: ?*anyopaque, defaultValue: bool) bool {
        return qtc.QJsonValueRef_ToBool1(@ptrCast(self), defaultValue);
    }

    pub fn ToInt1(self: ?*anyopaque, defaultValue: i32) i32 {
        return qtc.QJsonValueRef_ToInt1(@ptrCast(self), defaultValue);
    }

    pub fn ToInteger1(self: ?*anyopaque, defaultValue: i64) i64 {
        return qtc.QJsonValueRef_ToInteger1(@ptrCast(self), defaultValue);
    }

    pub fn ToDouble1(self: ?*anyopaque, defaultValue: f64) f64 {
        return qtc.QJsonValueRef_ToDouble1(@ptrCast(self), defaultValue);
    }

    pub fn ToString1(self: ?*anyopaque, defaultValue: []const u8, allocator: std.mem.Allocator) []const u8 {
        const defaultValue_str = qtc.libqt_string{
    .len = defaultValue.len,
    .data = defaultValue.ptr,
};
const _str = qtc.QJsonValueRef_ToString1(@ptrCast(self), defaultValue_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qjsonvalueref.ToString1: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QJsonValueRef_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/jsonvalue.html#types
pub const enums = struct {
    pub const Type = enum {
        pub const Null: i32 = 0;
        pub const Bool: i32 = 1;
        pub const Double: i32 = 2;
        pub const String: i32 = 3;
        pub const Array: i32 = 4;
        pub const Object: i32 = 5;
        pub const Undefined: i32 = 128;
    };

};
