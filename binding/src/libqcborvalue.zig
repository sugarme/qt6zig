const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qcborparsererror.html
pub const qcborparsererror = struct {

    /// New constructs a new QCborParserError object.
    pub fn New(other: ?*anyopaque) QtC.QCborParserError {
        return qtc.QCborParserError_new(@ptrCast(other));
    }


    /// New2 constructs a new QCborParserError object.
    pub fn New2(other: ?*anyopaque) QtC.QCborParserError {
        return qtc.QCborParserError_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCborParserError_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCborParserError_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn Offset(self: ?*anyopaque, ) i64 {
        return qtc.QCborParserError_Offset(@ptrCast(self));
    }

    pub fn SetOffset(self: ?*anyopaque, offset: i64) void {
        qtc.QCborParserError_SetOffset(@ptrCast(self), offset);
    }

    pub fn Error(self: ?*anyopaque, ) QtC.QCborError {
        return qtc.QCborParserError_Error(@ptrCast(self));
    }

    pub fn SetError(self: ?*anyopaque, _error: QtC.QCborError) void {
        qtc.QCborParserError_SetError(@ptrCast(self), @ptrCast(_error));
    }

    pub fn ErrorString(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCborParserError_ErrorString(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcborparsererror.ErrorString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCborParserError_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qcborvalue.html
pub const qcborvalue = struct {

    /// New constructs a new QCborValue object.
    pub fn New() QtC.QCborValue {
        return qtc.QCborValue_new();
    }


    /// New2 constructs a new QCborValue object.
    pub fn New2(t_: i32) QtC.QCborValue {
        return qtc.QCborValue_new2(@intCast(t_));
    }


    /// New3 constructs a new QCborValue object.
    pub fn New3(b_: bool) QtC.QCborValue {
        return qtc.QCborValue_new3(b_);
    }


    /// New4 constructs a new QCborValue object.
    pub fn New4(i: i32) QtC.QCborValue {
        return qtc.QCborValue_new4(i);
    }


    /// New5 constructs a new QCborValue object.
    pub fn New5(u: u32) QtC.QCborValue {
        return qtc.QCborValue_new5(u);
    }


    /// New6 constructs a new QCborValue object.
    pub fn New6(i: i64) QtC.QCborValue {
        return qtc.QCborValue_new6(i);
    }


    /// New7 constructs a new QCborValue object.
    pub fn New7(v: f64) QtC.QCborValue {
        return qtc.QCborValue_new7(v);
    }


    /// New8 constructs a new QCborValue object.
    pub fn New8(st: u8) QtC.QCborValue {
        return qtc.QCborValue_new8(@intCast(st));
    }


    /// New9 constructs a new QCborValue object.
    pub fn New9(ba: []u8) QtC.QCborValue {
        const ba_str = qtc.libqt_string{
    .len = ba.len,
    .data = ba.ptr,
};
return qtc.QCborValue_new9(ba_str);
    }


    /// New10 constructs a new QCborValue object.
    pub fn New10(s: []const u8) QtC.QCborValue {
        const s_str = qtc.libqt_string{
    .len = s.len,
    .data = s.ptr,
};
return qtc.QCborValue_new10(s_str);
    }


    /// New11 constructs a new QCborValue object.
    pub fn New11(s: []const u8) QtC.QCborValue {
        return qtc.QCborValue_new11(@ptrCast(s));
    }


    /// New12 constructs a new QCborValue object.
    pub fn New12(s: QLatin1StringView) QtC.QCborValue {
        return qtc.QCborValue_new12(s);
    }


    /// New13 constructs a new QCborValue object.
    pub fn New13(s: []const u8) QtC.QCborValue {
        return qtc.QCborValue_new13(@ptrCast(s));
    }


    /// New14 constructs a new QCborValue object.
    pub fn New14(a: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborValue_new14(@ptrCast(a));
    }


    /// New15 constructs a new QCborValue object.
    pub fn New15(m: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborValue_new15(@ptrCast(m));
    }


    /// New16 constructs a new QCborValue object.
    pub fn New16(tag: u64) QtC.QCborValue {
        return qtc.QCborValue_new16(@intCast(tag));
    }


    /// New17 constructs a new QCborValue object.
    pub fn New17(t_: i32) QtC.QCborValue {
        return qtc.QCborValue_new17(@intCast(t_));
    }


    /// New18 constructs a new QCborValue object.
    pub fn New18(dt: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborValue_new18(@ptrCast(dt));
    }


    /// New19 constructs a new QCborValue object.
    pub fn New19(url: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborValue_new19(@ptrCast(url));
    }


    /// New20 constructs a new QCborValue object.
    pub fn New20(rx: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborValue_new20(@ptrCast(rx));
    }


    /// New21 constructs a new QCborValue object.
    pub fn New21(uuid: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborValue_new21(@ptrCast(uuid));
    }


    /// New22 constructs a new QCborValue object.
    pub fn New22(other: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborValue_new22(@ptrCast(other));
    }


    /// New23 constructs a new QCborValue object.
    pub fn New23(tag: u64, taggedValue: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborValue_new23(@intCast(tag), @ptrCast(taggedValue));
    }


    /// New24 constructs a new QCborValue object.
    pub fn New24(t_: i32, tv: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborValue_new24(@intCast(t_), @ptrCast(tv));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCborValue_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCborValue_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QCborValue_Type(@ptrCast(self));
    }

    pub fn IsInteger(self: ?*anyopaque, ) bool {
        return qtc.QCborValue_IsInteger(@ptrCast(self));
    }

    pub fn IsByteArray(self: ?*anyopaque, ) bool {
        return qtc.QCborValue_IsByteArray(@ptrCast(self));
    }

    pub fn IsString(self: ?*anyopaque, ) bool {
        return qtc.QCborValue_IsString(@ptrCast(self));
    }

    pub fn IsArray(self: ?*anyopaque, ) bool {
        return qtc.QCborValue_IsArray(@ptrCast(self));
    }

    pub fn IsMap(self: ?*anyopaque, ) bool {
        return qtc.QCborValue_IsMap(@ptrCast(self));
    }

    pub fn IsTag(self: ?*anyopaque, ) bool {
        return qtc.QCborValue_IsTag(@ptrCast(self));
    }

    pub fn IsFalse(self: ?*anyopaque, ) bool {
        return qtc.QCborValue_IsFalse(@ptrCast(self));
    }

    pub fn IsTrue(self: ?*anyopaque, ) bool {
        return qtc.QCborValue_IsTrue(@ptrCast(self));
    }

    pub fn IsBool(self: ?*anyopaque, ) bool {
        return qtc.QCborValue_IsBool(@ptrCast(self));
    }

    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QCborValue_IsNull(@ptrCast(self));
    }

    pub fn IsUndefined(self: ?*anyopaque, ) bool {
        return qtc.QCborValue_IsUndefined(@ptrCast(self));
    }

    pub fn IsDouble(self: ?*anyopaque, ) bool {
        return qtc.QCborValue_IsDouble(@ptrCast(self));
    }

    pub fn IsDateTime(self: ?*anyopaque, ) bool {
        return qtc.QCborValue_IsDateTime(@ptrCast(self));
    }

    pub fn IsUrl(self: ?*anyopaque, ) bool {
        return qtc.QCborValue_IsUrl(@ptrCast(self));
    }

    pub fn IsRegularExpression(self: ?*anyopaque, ) bool {
        return qtc.QCborValue_IsRegularExpression(@ptrCast(self));
    }

    pub fn IsUuid(self: ?*anyopaque, ) bool {
        return qtc.QCborValue_IsUuid(@ptrCast(self));
    }

    pub fn IsInvalid(self: ?*anyopaque, ) bool {
        return qtc.QCborValue_IsInvalid(@ptrCast(self));
    }

    pub fn IsContainer(self: ?*anyopaque, ) bool {
        return qtc.QCborValue_IsContainer(@ptrCast(self));
    }

    pub fn IsSimpleType(self: ?*anyopaque, ) bool {
        return qtc.QCborValue_IsSimpleType(@ptrCast(self));
    }

    pub fn IsSimpleType2(self: ?*anyopaque, st: u8) bool {
        return qtc.QCborValue_IsSimpleType2(@ptrCast(self), @intCast(st));
    }

    pub fn ToSimpleType(self: ?*anyopaque, ) u8 {
        return qtc.QCborValue_ToSimpleType(@ptrCast(self));
    }

    pub fn ToInteger(self: ?*anyopaque, ) i64 {
        return qtc.QCborValue_ToInteger(@ptrCast(self));
    }

    pub fn ToBool(self: ?*anyopaque, ) bool {
        return qtc.QCborValue_ToBool(@ptrCast(self));
    }

    pub fn ToDouble(self: ?*anyopaque, ) f64 {
        return qtc.QCborValue_ToDouble(@ptrCast(self));
    }

    pub fn Tag(self: ?*anyopaque, ) u64 {
        return qtc.QCborValue_Tag(@ptrCast(self));
    }

    pub fn TaggedValue(self: ?*anyopaque, ) QtC.QCborValue {
        return qtc.QCborValue_TaggedValue(@ptrCast(self));
    }

    pub fn ToByteArray(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QCborValue_ToByteArray(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcborvalue.ToByteArray: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn ToString(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCborValue_ToString(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcborvalue.ToString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ToDateTime(self: ?*anyopaque, ) QtC.QDateTime {
        return qtc.QCborValue_ToDateTime(@ptrCast(self));
    }

    pub fn ToUrl(self: ?*anyopaque, ) QtC.QUrl {
        return qtc.QCborValue_ToUrl(@ptrCast(self));
    }

    pub fn ToRegularExpression(self: ?*anyopaque, ) QtC.QRegularExpression {
        return qtc.QCborValue_ToRegularExpression(@ptrCast(self));
    }

    pub fn ToUuid(self: ?*anyopaque, ) QtC.QUuid {
        return qtc.QCborValue_ToUuid(@ptrCast(self));
    }

    pub fn ToArray(self: ?*anyopaque, ) QtC.QCborArray {
        return qtc.QCborValue_ToArray(@ptrCast(self));
    }

    pub fn ToArray2(self: ?*anyopaque, defaultValue: ?*anyopaque) QtC.QCborArray {
        return qtc.QCborValue_ToArray2(@ptrCast(self), @ptrCast(defaultValue));
    }

    pub fn ToMap(self: ?*anyopaque, ) QtC.QCborMap {
        return qtc.QCborValue_ToMap(@ptrCast(self));
    }

    pub fn ToMap2(self: ?*anyopaque, defaultValue: ?*anyopaque) QtC.QCborMap {
        return qtc.QCborValue_ToMap2(@ptrCast(self), @ptrCast(defaultValue));
    }

    pub fn OperatorSubscript(self: ?*anyopaque, key: []const u8) QtC.QCborValue {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
return qtc.QCborValue_OperatorSubscript(@ptrCast(self), key_str);
    }

    pub fn OperatorSubscript2(self: ?*anyopaque, key: QLatin1StringView) QtC.QCborValue {
        return qtc.QCborValue_OperatorSubscript2(@ptrCast(self), key);
    }

    pub fn OperatorSubscript3(self: ?*anyopaque, key: i64) QtC.QCborValue {
        return qtc.QCborValue_OperatorSubscript3(@ptrCast(self), key);
    }

    pub fn OperatorSubscript4(self: ?*anyopaque, key: i64) QtC.QCborValueRef {
        return qtc.QCborValue_OperatorSubscript4(@ptrCast(self), key);
    }

    pub fn OperatorSubscript5(self: ?*anyopaque, key: QLatin1StringView) QtC.QCborValueRef {
        return qtc.QCborValue_OperatorSubscript5(@ptrCast(self), key);
    }

    pub fn OperatorSubscript6(self: ?*anyopaque, key: []const u8) QtC.QCborValueRef {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
return qtc.QCborValue_OperatorSubscript6(@ptrCast(self), key_str);
    }

    pub fn Compare(self: ?*anyopaque, other: ?*anyopaque) i32 {
        return qtc.QCborValue_Compare(@ptrCast(self), @ptrCast(other));
    }

    pub fn FromVariant(variant: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborValue_FromVariant(@ptrCast(variant));
    }

    pub fn ToVariant(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QCborValue_ToVariant(@ptrCast(self));
    }

    pub fn FromJsonValue(v: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborValue_FromJsonValue(@ptrCast(v));
    }

    pub fn ToJsonValue(self: ?*anyopaque, ) QtC.QJsonValue {
        return qtc.QCborValue_ToJsonValue(@ptrCast(self));
    }

    pub fn FromCbor(reader: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborValue_FromCbor(@ptrCast(reader));
    }

    pub fn FromCbor2(ba: []u8) QtC.QCborValue {
        const ba_str = qtc.libqt_string{
    .len = ba.len,
    .data = ba.ptr,
};
return qtc.QCborValue_FromCbor2(ba_str);
    }

    pub fn FromCbor3(data: []const u8, lenVal: i64) QtC.QCborValue {
        return qtc.QCborValue_FromCbor3(@ptrCast(data), lenVal);
    }

    pub fn FromCbor4(data: *const u8, lenVal: i64) QtC.QCborValue {
        return qtc.QCborValue_FromCbor4(@ptrCast(data), lenVal);
    }

    pub fn ToCbor(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QCborValue_ToCbor(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcborvalue.ToCbor: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn ToCbor2(self: ?*anyopaque, writer: ?*anyopaque) void {
        qtc.QCborValue_ToCbor2(@ptrCast(self), @ptrCast(writer));
    }

    pub fn ToDiagnosticNotation(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCborValue_ToDiagnosticNotation(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcborvalue.ToDiagnosticNotation: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ToSimpleType1(self: ?*anyopaque, defaultValue: u8) u8 {
        return qtc.QCborValue_ToSimpleType1(@ptrCast(self), @intCast(defaultValue));
    }

    pub fn ToInteger1(self: ?*anyopaque, defaultValue: i64) i64 {
        return qtc.QCborValue_ToInteger1(@ptrCast(self), defaultValue);
    }

    pub fn ToBool1(self: ?*anyopaque, defaultValue: bool) bool {
        return qtc.QCborValue_ToBool1(@ptrCast(self), defaultValue);
    }

    pub fn ToDouble1(self: ?*anyopaque, defaultValue: f64) f64 {
        return qtc.QCborValue_ToDouble1(@ptrCast(self), defaultValue);
    }

    pub fn Tag1(self: ?*anyopaque, defaultValue: u64) u64 {
        return qtc.QCborValue_Tag1(@ptrCast(self), @intCast(defaultValue));
    }

    pub fn TaggedValue1(self: ?*anyopaque, defaultValue: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborValue_TaggedValue1(@ptrCast(self), @ptrCast(defaultValue));
    }

    pub fn ToByteArray1(self: ?*anyopaque, defaultValue: []u8, allocator: std.mem.Allocator) []u8 {
        const defaultValue_str = qtc.libqt_string{
    .len = defaultValue.len,
    .data = defaultValue.ptr,
};
const _bytearray: qtc.libqt_string = qtc.QCborValue_ToByteArray1(@ptrCast(self), defaultValue_str);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcborvalue.ToByteArray1: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn ToString1(self: ?*anyopaque, defaultValue: []const u8, allocator: std.mem.Allocator) []const u8 {
        const defaultValue_str = qtc.libqt_string{
    .len = defaultValue.len,
    .data = defaultValue.ptr,
};
const _str = qtc.QCborValue_ToString1(@ptrCast(self), defaultValue_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcborvalue.ToString1: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ToDateTime1(self: ?*anyopaque, defaultValue: ?*anyopaque) QtC.QDateTime {
        return qtc.QCborValue_ToDateTime1(@ptrCast(self), @ptrCast(defaultValue));
    }

    pub fn ToUrl1(self: ?*anyopaque, defaultValue: ?*anyopaque) QtC.QUrl {
        return qtc.QCborValue_ToUrl1(@ptrCast(self), @ptrCast(defaultValue));
    }

    pub fn ToRegularExpression1(self: ?*anyopaque, defaultValue: ?*anyopaque) QtC.QRegularExpression {
        return qtc.QCborValue_ToRegularExpression1(@ptrCast(self), @ptrCast(defaultValue));
    }

    pub fn ToUuid1(self: ?*anyopaque, defaultValue: ?*anyopaque) QtC.QUuid {
        return qtc.QCborValue_ToUuid1(@ptrCast(self), @ptrCast(defaultValue));
    }

    pub fn FromCbor22(ba: []u8, errorVal: ?*anyopaque) QtC.QCborValue {
        const ba_str = qtc.libqt_string{
    .len = ba.len,
    .data = ba.ptr,
};
return qtc.QCborValue_FromCbor22(ba_str, @ptrCast(errorVal));
    }

    pub fn FromCbor32(data: []const u8, lenVal: i64, errorVal: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborValue_FromCbor32(@ptrCast(data), lenVal, @ptrCast(errorVal));
    }

    pub fn FromCbor33(data: *const u8, lenVal: i64, errorVal: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborValue_FromCbor33(@ptrCast(data), lenVal, @ptrCast(errorVal));
    }

    pub fn ToCbor1(self: ?*anyopaque, opt: i32, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QCborValue_ToCbor1(@ptrCast(self), @intCast(opt));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcborvalue.ToCbor1: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn ToCbor22(self: ?*anyopaque, writer: ?*anyopaque, opt: i32) void {
        qtc.QCborValue_ToCbor22(@ptrCast(self), @ptrCast(writer), @intCast(opt));
    }

    pub fn ToDiagnosticNotation1(self: ?*anyopaque, opts: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCborValue_ToDiagnosticNotation1(@ptrCast(self), @intCast(opts));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcborvalue.ToDiagnosticNotation1: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCborValue_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qcborvalueconstref.html
pub const qcborvalueconstref = struct {

    /// New constructs a new QCborValueConstRef object.
    pub fn New(other: ?*anyopaque) QtC.QCborValueConstRef {
        return qtc.QCborValueConstRef_new(@ptrCast(other));
    }


    /// New2 constructs a new QCborValueConstRef object.
    pub fn New2(param1: ?*anyopaque) QtC.QCborValueConstRef {
        return qtc.QCborValueConstRef_new2(@ptrCast(param1));
    }


    pub fn OperatorQCborValue(self: ?*anyopaque, ) QtC.QCborValue {
        return qtc.QCborValueConstRef_OperatorQCborValue(@ptrCast(self));
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QCborValueConstRef_Type(@ptrCast(self));
    }

    pub fn IsInteger(self: ?*anyopaque, ) bool {
        return qtc.QCborValueConstRef_IsInteger(@ptrCast(self));
    }

    pub fn IsByteArray(self: ?*anyopaque, ) bool {
        return qtc.QCborValueConstRef_IsByteArray(@ptrCast(self));
    }

    pub fn IsString(self: ?*anyopaque, ) bool {
        return qtc.QCborValueConstRef_IsString(@ptrCast(self));
    }

    pub fn IsArray(self: ?*anyopaque, ) bool {
        return qtc.QCborValueConstRef_IsArray(@ptrCast(self));
    }

    pub fn IsMap(self: ?*anyopaque, ) bool {
        return qtc.QCborValueConstRef_IsMap(@ptrCast(self));
    }

    pub fn IsTag(self: ?*anyopaque, ) bool {
        return qtc.QCborValueConstRef_IsTag(@ptrCast(self));
    }

    pub fn IsFalse(self: ?*anyopaque, ) bool {
        return qtc.QCborValueConstRef_IsFalse(@ptrCast(self));
    }

    pub fn IsTrue(self: ?*anyopaque, ) bool {
        return qtc.QCborValueConstRef_IsTrue(@ptrCast(self));
    }

    pub fn IsBool(self: ?*anyopaque, ) bool {
        return qtc.QCborValueConstRef_IsBool(@ptrCast(self));
    }

    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QCborValueConstRef_IsNull(@ptrCast(self));
    }

    pub fn IsUndefined(self: ?*anyopaque, ) bool {
        return qtc.QCborValueConstRef_IsUndefined(@ptrCast(self));
    }

    pub fn IsDouble(self: ?*anyopaque, ) bool {
        return qtc.QCborValueConstRef_IsDouble(@ptrCast(self));
    }

    pub fn IsDateTime(self: ?*anyopaque, ) bool {
        return qtc.QCborValueConstRef_IsDateTime(@ptrCast(self));
    }

    pub fn IsUrl(self: ?*anyopaque, ) bool {
        return qtc.QCborValueConstRef_IsUrl(@ptrCast(self));
    }

    pub fn IsRegularExpression(self: ?*anyopaque, ) bool {
        return qtc.QCborValueConstRef_IsRegularExpression(@ptrCast(self));
    }

    pub fn IsUuid(self: ?*anyopaque, ) bool {
        return qtc.QCborValueConstRef_IsUuid(@ptrCast(self));
    }

    pub fn IsInvalid(self: ?*anyopaque, ) bool {
        return qtc.QCborValueConstRef_IsInvalid(@ptrCast(self));
    }

    pub fn IsContainer(self: ?*anyopaque, ) bool {
        return qtc.QCborValueConstRef_IsContainer(@ptrCast(self));
    }

    pub fn IsSimpleType(self: ?*anyopaque, ) bool {
        return qtc.QCborValueConstRef_IsSimpleType(@ptrCast(self));
    }

    pub fn IsSimpleType2(self: ?*anyopaque, st: u8) bool {
        return qtc.QCborValueConstRef_IsSimpleType2(@ptrCast(self), @intCast(st));
    }

    pub fn ToSimpleType(self: ?*anyopaque, ) u8 {
        return qtc.QCborValueConstRef_ToSimpleType(@ptrCast(self));
    }

    pub fn Tag(self: ?*anyopaque, ) u64 {
        return qtc.QCborValueConstRef_Tag(@ptrCast(self));
    }

    pub fn TaggedValue(self: ?*anyopaque, ) QtC.QCborValue {
        return qtc.QCborValueConstRef_TaggedValue(@ptrCast(self));
    }

    pub fn ToInteger(self: ?*anyopaque, ) i64 {
        return qtc.QCborValueConstRef_ToInteger(@ptrCast(self));
    }

    pub fn ToBool(self: ?*anyopaque, ) bool {
        return qtc.QCborValueConstRef_ToBool(@ptrCast(self));
    }

    pub fn ToDouble(self: ?*anyopaque, ) f64 {
        return qtc.QCborValueConstRef_ToDouble(@ptrCast(self));
    }

    pub fn ToByteArray(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QCborValueConstRef_ToByteArray(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcborvalueconstref.ToByteArray: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn ToString(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCborValueConstRef_ToString(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcborvalueconstref.ToString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ToDateTime(self: ?*anyopaque, ) QtC.QDateTime {
        return qtc.QCborValueConstRef_ToDateTime(@ptrCast(self));
    }

    pub fn ToUrl(self: ?*anyopaque, ) QtC.QUrl {
        return qtc.QCborValueConstRef_ToUrl(@ptrCast(self));
    }

    pub fn ToRegularExpression(self: ?*anyopaque, ) QtC.QRegularExpression {
        return qtc.QCborValueConstRef_ToRegularExpression(@ptrCast(self));
    }

    pub fn ToUuid(self: ?*anyopaque, ) QtC.QUuid {
        return qtc.QCborValueConstRef_ToUuid(@ptrCast(self));
    }

    pub fn ToArray(self: ?*anyopaque, ) QtC.QCborArray {
        return qtc.QCborValueConstRef_ToArray(@ptrCast(self));
    }

    pub fn ToArray2(self: ?*anyopaque, a: ?*anyopaque) QtC.QCborArray {
        return qtc.QCborValueConstRef_ToArray2(@ptrCast(self), @ptrCast(a));
    }

    pub fn ToMap(self: ?*anyopaque, ) QtC.QCborMap {
        return qtc.QCborValueConstRef_ToMap(@ptrCast(self));
    }

    pub fn ToMap2(self: ?*anyopaque, m: ?*anyopaque) QtC.QCborMap {
        return qtc.QCborValueConstRef_ToMap2(@ptrCast(self), @ptrCast(m));
    }

    pub fn OperatorSubscript(self: ?*anyopaque, key: []const u8) QtC.QCborValue {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
return qtc.QCborValueConstRef_OperatorSubscript(@ptrCast(self), key_str);
    }

    pub fn OperatorSubscript2(self: ?*anyopaque, key: QLatin1StringView) QtC.QCborValue {
        return qtc.QCborValueConstRef_OperatorSubscript2(@ptrCast(self), key);
    }

    pub fn OperatorSubscript3(self: ?*anyopaque, key: i64) QtC.QCborValue {
        return qtc.QCborValueConstRef_OperatorSubscript3(@ptrCast(self), key);
    }

    pub fn Compare(self: ?*anyopaque, other: ?*anyopaque) i32 {
        return qtc.QCborValueConstRef_Compare(@ptrCast(self), @ptrCast(other));
    }

    pub fn ToVariant(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QCborValueConstRef_ToVariant(@ptrCast(self));
    }

    pub fn ToJsonValue(self: ?*anyopaque, ) QtC.QJsonValue {
        return qtc.QCborValueConstRef_ToJsonValue(@ptrCast(self));
    }

    pub fn ToCbor(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QCborValueConstRef_ToCbor(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcborvalueconstref.ToCbor: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn ToCbor2(self: ?*anyopaque, writer: ?*anyopaque) void {
        qtc.QCborValueConstRef_ToCbor2(@ptrCast(self), @ptrCast(writer));
    }

    pub fn ToDiagnosticNotation(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCborValueConstRef_ToDiagnosticNotation(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcborvalueconstref.ToDiagnosticNotation: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ToSimpleType1(self: ?*anyopaque, defaultValue: u8) u8 {
        return qtc.QCborValueConstRef_ToSimpleType1(@ptrCast(self), @intCast(defaultValue));
    }

    pub fn Tag1(self: ?*anyopaque, defaultValue: u64) u64 {
        return qtc.QCborValueConstRef_Tag1(@ptrCast(self), @intCast(defaultValue));
    }

    pub fn TaggedValue1(self: ?*anyopaque, defaultValue: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborValueConstRef_TaggedValue1(@ptrCast(self), @ptrCast(defaultValue));
    }

    pub fn ToInteger1(self: ?*anyopaque, defaultValue: i64) i64 {
        return qtc.QCborValueConstRef_ToInteger1(@ptrCast(self), defaultValue);
    }

    pub fn ToBool1(self: ?*anyopaque, defaultValue: bool) bool {
        return qtc.QCborValueConstRef_ToBool1(@ptrCast(self), defaultValue);
    }

    pub fn ToDouble1(self: ?*anyopaque, defaultValue: f64) f64 {
        return qtc.QCborValueConstRef_ToDouble1(@ptrCast(self), defaultValue);
    }

    pub fn ToByteArray1(self: ?*anyopaque, defaultValue: []u8, allocator: std.mem.Allocator) []u8 {
        const defaultValue_str = qtc.libqt_string{
    .len = defaultValue.len,
    .data = defaultValue.ptr,
};
const _bytearray: qtc.libqt_string = qtc.QCborValueConstRef_ToByteArray1(@ptrCast(self), defaultValue_str);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcborvalueconstref.ToByteArray1: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn ToString1(self: ?*anyopaque, defaultValue: []const u8, allocator: std.mem.Allocator) []const u8 {
        const defaultValue_str = qtc.libqt_string{
    .len = defaultValue.len,
    .data = defaultValue.ptr,
};
const _str = qtc.QCborValueConstRef_ToString1(@ptrCast(self), defaultValue_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcborvalueconstref.ToString1: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ToDateTime1(self: ?*anyopaque, defaultValue: ?*anyopaque) QtC.QDateTime {
        return qtc.QCborValueConstRef_ToDateTime1(@ptrCast(self), @ptrCast(defaultValue));
    }

    pub fn ToUrl1(self: ?*anyopaque, defaultValue: ?*anyopaque) QtC.QUrl {
        return qtc.QCborValueConstRef_ToUrl1(@ptrCast(self), @ptrCast(defaultValue));
    }

    pub fn ToRegularExpression1(self: ?*anyopaque, defaultValue: ?*anyopaque) QtC.QRegularExpression {
        return qtc.QCborValueConstRef_ToRegularExpression1(@ptrCast(self), @ptrCast(defaultValue));
    }

    pub fn ToUuid1(self: ?*anyopaque, defaultValue: ?*anyopaque) QtC.QUuid {
        return qtc.QCborValueConstRef_ToUuid1(@ptrCast(self), @ptrCast(defaultValue));
    }

    pub fn ToCbor1(self: ?*anyopaque, opt: i32, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QCborValueConstRef_ToCbor1(@ptrCast(self), @intCast(opt));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcborvalueconstref.ToCbor1: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn ToCbor22(self: ?*anyopaque, writer: ?*anyopaque, opt: i32) void {
        qtc.QCborValueConstRef_ToCbor22(@ptrCast(self), @ptrCast(writer), @intCast(opt));
    }

    pub fn ToDiagnosticNotation1(self: ?*anyopaque, opt: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCborValueConstRef_ToDiagnosticNotation1(@ptrCast(self), @intCast(opt));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcborvalueconstref.ToDiagnosticNotation1: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCborValueConstRef_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qcborvalueref.html
pub const qcborvalueref = struct {

    /// New constructs a new QCborValueRef object.
    pub fn New(other: ?*anyopaque) QtC.QCborValueRef {
        return qtc.QCborValueRef_new(@ptrCast(other));
    }


    /// New2 constructs a new QCborValueRef object.
    pub fn New2(other: ?*anyopaque) QtC.QCborValueRef {
        return qtc.QCborValueRef_new2(@ptrCast(other));
    }


    /// New3 constructs a new QCborValueRef object.
    pub fn New3(param1: ?*anyopaque) QtC.QCborValueRef {
        return qtc.QCborValueRef_new3(@ptrCast(param1));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCborValueRef_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorAssign2(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCborValueRef_OperatorAssign2(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorSubscript(self: ?*anyopaque, key: i64) QtC.QCborValueRef {
        return qtc.QCborValueRef_OperatorSubscript(@ptrCast(self), key);
    }

    pub fn OperatorSubscript2(self: ?*anyopaque, key: QLatin1StringView) QtC.QCborValueRef {
        return qtc.QCborValueRef_OperatorSubscript2(@ptrCast(self), key);
    }

    pub fn OperatorSubscript3(self: ?*anyopaque, key: []const u8) QtC.QCborValueRef {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
return qtc.QCborValueRef_OperatorSubscript3(@ptrCast(self), key_str);
    }

    pub fn OperatorQCborValue(self: ?*anyopaque, ) QtC.QCborValue {
        return qtc.QCborValueRef_OperatorQCborValue(@ptrCast(self));
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QCborValueRef_Type(@ptrCast(self));
    }

    pub fn IsInteger(self: ?*anyopaque, ) bool {
        return qtc.QCborValueRef_IsInteger(@ptrCast(self));
    }

    pub fn IsByteArray(self: ?*anyopaque, ) bool {
        return qtc.QCborValueRef_IsByteArray(@ptrCast(self));
    }

    pub fn IsString(self: ?*anyopaque, ) bool {
        return qtc.QCborValueRef_IsString(@ptrCast(self));
    }

    pub fn IsArray(self: ?*anyopaque, ) bool {
        return qtc.QCborValueRef_IsArray(@ptrCast(self));
    }

    pub fn IsMap(self: ?*anyopaque, ) bool {
        return qtc.QCborValueRef_IsMap(@ptrCast(self));
    }

    pub fn IsTag(self: ?*anyopaque, ) bool {
        return qtc.QCborValueRef_IsTag(@ptrCast(self));
    }

    pub fn IsFalse(self: ?*anyopaque, ) bool {
        return qtc.QCborValueRef_IsFalse(@ptrCast(self));
    }

    pub fn IsTrue(self: ?*anyopaque, ) bool {
        return qtc.QCborValueRef_IsTrue(@ptrCast(self));
    }

    pub fn IsBool(self: ?*anyopaque, ) bool {
        return qtc.QCborValueRef_IsBool(@ptrCast(self));
    }

    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QCborValueRef_IsNull(@ptrCast(self));
    }

    pub fn IsUndefined(self: ?*anyopaque, ) bool {
        return qtc.QCborValueRef_IsUndefined(@ptrCast(self));
    }

    pub fn IsDouble(self: ?*anyopaque, ) bool {
        return qtc.QCborValueRef_IsDouble(@ptrCast(self));
    }

    pub fn IsDateTime(self: ?*anyopaque, ) bool {
        return qtc.QCborValueRef_IsDateTime(@ptrCast(self));
    }

    pub fn IsUrl(self: ?*anyopaque, ) bool {
        return qtc.QCborValueRef_IsUrl(@ptrCast(self));
    }

    pub fn IsRegularExpression(self: ?*anyopaque, ) bool {
        return qtc.QCborValueRef_IsRegularExpression(@ptrCast(self));
    }

    pub fn IsUuid(self: ?*anyopaque, ) bool {
        return qtc.QCborValueRef_IsUuid(@ptrCast(self));
    }

    pub fn IsInvalid(self: ?*anyopaque, ) bool {
        return qtc.QCborValueRef_IsInvalid(@ptrCast(self));
    }

    pub fn IsContainer(self: ?*anyopaque, ) bool {
        return qtc.QCborValueRef_IsContainer(@ptrCast(self));
    }

    pub fn IsSimpleType(self: ?*anyopaque, ) bool {
        return qtc.QCborValueRef_IsSimpleType(@ptrCast(self));
    }

    pub fn IsSimpleType2(self: ?*anyopaque, st: u8) bool {
        return qtc.QCborValueRef_IsSimpleType2(@ptrCast(self), @intCast(st));
    }

    pub fn ToSimpleType(self: ?*anyopaque, ) u8 {
        return qtc.QCborValueRef_ToSimpleType(@ptrCast(self));
    }

    pub fn Tag(self: ?*anyopaque, ) u64 {
        return qtc.QCborValueRef_Tag(@ptrCast(self));
    }

    pub fn TaggedValue(self: ?*anyopaque, ) QtC.QCborValue {
        return qtc.QCborValueRef_TaggedValue(@ptrCast(self));
    }

    pub fn ToInteger(self: ?*anyopaque, ) i64 {
        return qtc.QCborValueRef_ToInteger(@ptrCast(self));
    }

    pub fn ToBool(self: ?*anyopaque, ) bool {
        return qtc.QCborValueRef_ToBool(@ptrCast(self));
    }

    pub fn ToDouble(self: ?*anyopaque, ) f64 {
        return qtc.QCborValueRef_ToDouble(@ptrCast(self));
    }

    pub fn ToByteArray(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QCborValueRef_ToByteArray(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcborvalueref.ToByteArray: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn ToString(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCborValueRef_ToString(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcborvalueref.ToString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ToDateTime(self: ?*anyopaque, ) QtC.QDateTime {
        return qtc.QCborValueRef_ToDateTime(@ptrCast(self));
    }

    pub fn ToUrl(self: ?*anyopaque, ) QtC.QUrl {
        return qtc.QCborValueRef_ToUrl(@ptrCast(self));
    }

    pub fn ToRegularExpression(self: ?*anyopaque, ) QtC.QRegularExpression {
        return qtc.QCborValueRef_ToRegularExpression(@ptrCast(self));
    }

    pub fn ToUuid(self: ?*anyopaque, ) QtC.QUuid {
        return qtc.QCborValueRef_ToUuid(@ptrCast(self));
    }

    pub fn ToArray(self: ?*anyopaque, ) QtC.QCborArray {
        return qtc.QCborValueRef_ToArray(@ptrCast(self));
    }

    pub fn ToArray2(self: ?*anyopaque, a: ?*anyopaque) QtC.QCborArray {
        return qtc.QCborValueRef_ToArray2(@ptrCast(self), @ptrCast(a));
    }

    pub fn ToMap(self: ?*anyopaque, ) QtC.QCborMap {
        return qtc.QCborValueRef_ToMap(@ptrCast(self));
    }

    pub fn ToMap2(self: ?*anyopaque, m: ?*anyopaque) QtC.QCborMap {
        return qtc.QCborValueRef_ToMap2(@ptrCast(self), @ptrCast(m));
    }

    pub fn OperatorSubscript4(self: ?*anyopaque, key: []const u8) QtC.QCborValue {
        const key_str = qtc.libqt_string{
    .len = key.len,
    .data = key.ptr,
};
return qtc.QCborValueRef_OperatorSubscript4(@ptrCast(self), key_str);
    }

    pub fn OperatorSubscript5(self: ?*anyopaque, key: QLatin1StringView) QtC.QCborValue {
        return qtc.QCborValueRef_OperatorSubscript5(@ptrCast(self), key);
    }

    pub fn OperatorSubscript6(self: ?*anyopaque, key: i64) QtC.QCborValue {
        return qtc.QCborValueRef_OperatorSubscript6(@ptrCast(self), key);
    }

    pub fn Compare(self: ?*anyopaque, other: ?*anyopaque) i32 {
        return qtc.QCborValueRef_Compare(@ptrCast(self), @ptrCast(other));
    }

    pub fn ToVariant(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QCborValueRef_ToVariant(@ptrCast(self));
    }

    pub fn ToJsonValue(self: ?*anyopaque, ) QtC.QJsonValue {
        return qtc.QCborValueRef_ToJsonValue(@ptrCast(self));
    }

    pub fn ToCbor(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QCborValueRef_ToCbor(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcborvalueref.ToCbor: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn ToCbor2(self: ?*anyopaque, writer: ?*anyopaque) void {
        qtc.QCborValueRef_ToCbor2(@ptrCast(self), @ptrCast(writer));
    }

    pub fn ToDiagnosticNotation(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCborValueRef_ToDiagnosticNotation(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcborvalueref.ToDiagnosticNotation: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ToSimpleType1(self: ?*anyopaque, defaultValue: u8) u8 {
        return qtc.QCborValueRef_ToSimpleType1(@ptrCast(self), @intCast(defaultValue));
    }

    pub fn Tag1(self: ?*anyopaque, defaultValue: u64) u64 {
        return qtc.QCborValueRef_Tag1(@ptrCast(self), @intCast(defaultValue));
    }

    pub fn TaggedValue1(self: ?*anyopaque, defaultValue: ?*anyopaque) QtC.QCborValue {
        return qtc.QCborValueRef_TaggedValue1(@ptrCast(self), @ptrCast(defaultValue));
    }

    pub fn ToInteger1(self: ?*anyopaque, defaultValue: i64) i64 {
        return qtc.QCborValueRef_ToInteger1(@ptrCast(self), defaultValue);
    }

    pub fn ToBool1(self: ?*anyopaque, defaultValue: bool) bool {
        return qtc.QCborValueRef_ToBool1(@ptrCast(self), defaultValue);
    }

    pub fn ToDouble1(self: ?*anyopaque, defaultValue: f64) f64 {
        return qtc.QCborValueRef_ToDouble1(@ptrCast(self), defaultValue);
    }

    pub fn ToByteArray1(self: ?*anyopaque, defaultValue: []u8, allocator: std.mem.Allocator) []u8 {
        const defaultValue_str = qtc.libqt_string{
    .len = defaultValue.len,
    .data = defaultValue.ptr,
};
const _bytearray: qtc.libqt_string = qtc.QCborValueRef_ToByteArray1(@ptrCast(self), defaultValue_str);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcborvalueref.ToByteArray1: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn ToString1(self: ?*anyopaque, defaultValue: []const u8, allocator: std.mem.Allocator) []const u8 {
        const defaultValue_str = qtc.libqt_string{
    .len = defaultValue.len,
    .data = defaultValue.ptr,
};
const _str = qtc.QCborValueRef_ToString1(@ptrCast(self), defaultValue_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcborvalueref.ToString1: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ToDateTime1(self: ?*anyopaque, defaultValue: ?*anyopaque) QtC.QDateTime {
        return qtc.QCborValueRef_ToDateTime1(@ptrCast(self), @ptrCast(defaultValue));
    }

    pub fn ToUrl1(self: ?*anyopaque, defaultValue: ?*anyopaque) QtC.QUrl {
        return qtc.QCborValueRef_ToUrl1(@ptrCast(self), @ptrCast(defaultValue));
    }

    pub fn ToRegularExpression1(self: ?*anyopaque, defaultValue: ?*anyopaque) QtC.QRegularExpression {
        return qtc.QCborValueRef_ToRegularExpression1(@ptrCast(self), @ptrCast(defaultValue));
    }

    pub fn ToUuid1(self: ?*anyopaque, defaultValue: ?*anyopaque) QtC.QUuid {
        return qtc.QCborValueRef_ToUuid1(@ptrCast(self), @ptrCast(defaultValue));
    }

    pub fn ToCbor1(self: ?*anyopaque, opt: i32, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QCborValueRef_ToCbor1(@ptrCast(self), @intCast(opt));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qcborvalueref.ToCbor1: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn ToCbor22(self: ?*anyopaque, writer: ?*anyopaque, opt: i32) void {
        qtc.QCborValueRef_ToCbor22(@ptrCast(self), @ptrCast(writer), @intCast(opt));
    }

    pub fn ToDiagnosticNotation1(self: ?*anyopaque, opt: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCborValueRef_ToDiagnosticNotation1(@ptrCast(self), @intCast(opt));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcborvalueref.ToDiagnosticNotation1: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCborValueRef_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/cborvalue.html#types
pub const enums = struct {
    pub const EncodingOption = enum {
        pub const SortKeysInMaps: i32 = 1;
        pub const UseFloat: i32 = 2;
        pub const UseFloat16: i32 = 6;
        pub const UseIntegers: i32 = 8;
        pub const NoTransformation: i32 = 0;
    };

    pub const DiagnosticNotationOption = enum {
        pub const Compact: i32 = 0;
        pub const LineWrapped: i32 = 1;
        pub const ExtendedFormat: i32 = 2;
    };

    pub const Type = enum {
        pub const Integer: i32 = 0;
        pub const ByteArray: i32 = 64;
        pub const String: i32 = 96;
        pub const Array: i32 = 128;
        pub const Map: i32 = 160;
        pub const Tag: i32 = 192;
        pub const SimpleType: i32 = 256;
        pub const False: i32 = 276;
        pub const True: i32 = 277;
        pub const Null: i32 = 278;
        pub const Undefined: i32 = 279;
        pub const Double: i32 = 514;
        pub const DateTime: i32 = 65536;
        pub const Url: i32 = 65568;
        pub const RegularExpression: i32 = 65571;
        pub const Uuid: i32 = 65573;
        pub const Invalid: i32 = -1;
    };

};
