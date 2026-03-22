const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qvariant.html
pub const qvariant = struct {

    /// New constructs a new QVariant object.
    pub fn New() QtC.QVariant {
        return qtc.QVariant_new();
    }


    /// New2 constructs a new QVariant object.
    pub fn New2(typeVal: QtC.QMetaType) QtC.QVariant {
        return qtc.QVariant_new2(@ptrCast(typeVal));
    }


    /// New3 constructs a new QVariant object.
    pub fn New3(other: ?*anyopaque) QtC.QVariant {
        return qtc.QVariant_new3(@ptrCast(other));
    }


    /// New4 constructs a new QVariant object.
    pub fn New4(i: i32) QtC.QVariant {
        return qtc.QVariant_new4(i);
    }


    /// New5 constructs a new QVariant object.
    pub fn New5(ui: u32) QtC.QVariant {
        return qtc.QVariant_new5(ui);
    }


    /// New6 constructs a new QVariant object.
    pub fn New6(ll: i64) QtC.QVariant {
        return qtc.QVariant_new6(ll);
    }


    /// New7 constructs a new QVariant object.
    pub fn New7(ull: u64) QtC.QVariant {
        return qtc.QVariant_new7(ull);
    }


    /// New8 constructs a new QVariant object.
    pub fn New8(b: bool) QtC.QVariant {
        return qtc.QVariant_new8(b);
    }


    /// New9 constructs a new QVariant object.
    pub fn New9(d: f64) QtC.QVariant {
        return qtc.QVariant_new9(d);
    }


    /// New10 constructs a new QVariant object.
    pub fn New10(f: f32) QtC.QVariant {
        return qtc.QVariant_new10(f);
    }


    /// New11 constructs a new QVariant object.
    pub fn New11(qchar: QtC.QChar) QtC.QVariant {
        return qtc.QVariant_new11(@ptrCast(qchar));
    }


    /// New12 constructs a new QVariant object.
    pub fn New12(date: QtC.QDate) QtC.QVariant {
        return qtc.QVariant_new12(@ptrCast(date));
    }


    /// New13 constructs a new QVariant object.
    pub fn New13(time: QtC.QTime) QtC.QVariant {
        return qtc.QVariant_new13(@ptrCast(time));
    }


    /// New14 constructs a new QVariant object.
    pub fn New14(bitarray: ?*anyopaque) QtC.QVariant {
        return qtc.QVariant_new14(@ptrCast(bitarray));
    }


    /// New15 constructs a new QVariant object.
    pub fn New15(bytearray: []u8) QtC.QVariant {
        const bytearray_str = qtc.libqt_string{
    .len = bytearray.len,
    .data = bytearray.ptr,
};
return qtc.QVariant_new15(bytearray_str);
    }


    /// New16 constructs a new QVariant object.
    pub fn New16(datetime: ?*anyopaque) QtC.QVariant {
        return qtc.QVariant_new16(@ptrCast(datetime));
    }


    /// New17 constructs a new QVariant object.
    pub fn New17(hash: *const QHash<QString, QVariant>) QtC.QVariant {
        return qtc.QVariant_new17(@ptrCast(hash));
    }


    /// New18 constructs a new QVariant object.
    pub fn New18(jsonArray: ?*anyopaque) QtC.QVariant {
        return qtc.QVariant_new18(@ptrCast(jsonArray));
    }


    /// New19 constructs a new QVariant object.
    pub fn New19(jsonObject: ?*anyopaque) QtC.QVariant {
        return qtc.QVariant_new19(@ptrCast(jsonObject));
    }


    /// New20 constructs a new QVariant object.
    pub fn New20(list: []const u8) QtC.QVariant {
        return qtc.QVariant_new20(@ptrCast(list));
    }


    /// New21 constructs a new QVariant object.
    pub fn New21(locale: ?*anyopaque) QtC.QVariant {
        return qtc.QVariant_new21(@ptrCast(locale));
    }


    /// New22 constructs a new QVariant object.
    pub fn New22(mapVal: *const QMap<QString, QVariant>) QtC.QVariant {
        return qtc.QVariant_new22(@ptrCast(mapVal));
    }


    /// New23 constructs a new QVariant object.
    pub fn New23(re: ?*anyopaque) QtC.QVariant {
        return qtc.QVariant_new23(@ptrCast(re));
    }


    /// New24 constructs a new QVariant object.
    pub fn New24(stringVal: []const u8) QtC.QVariant {
        const stringVal_str = qtc.libqt_string{
    .len = stringVal.len,
    .data = stringVal.ptr,
};
return qtc.QVariant_new24(stringVal_str);
    }


    /// New25 constructs a new QVariant object.
    pub fn New25(stringlist: []const u8) QtC.QVariant {
        return qtc.QVariant_new25(@ptrCast(stringlist));
    }


    /// New26 constructs a new QVariant object.
    pub fn New26(url: ?*anyopaque) QtC.QVariant {
        return qtc.QVariant_new26(@ptrCast(url));
    }


    /// New27 constructs a new QVariant object.
    pub fn New27(size: QtC.QSize) QtC.QVariant {
        return qtc.QVariant_new27(@ptrCast(size));
    }


    /// New28 constructs a new QVariant object.
    pub fn New28(pt: QtC.QPoint) QtC.QVariant {
        return qtc.QVariant_new28(@ptrCast(pt));
    }


    /// New29 constructs a new QVariant object.
    pub fn New29(typeVal: i32) QtC.QVariant {
        return qtc.QVariant_new29(@intCast(typeVal));
    }


    /// New30 constructs a new QVariant object.
    pub fn New30(typeVal: QtC.QMetaType, copyVal: ?*anyopaque) QtC.QVariant {
        return qtc.QVariant_new30(@ptrCast(typeVal), @ptrCast(copyVal));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QVariant_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QVariant_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn UserType(self: ?*anyopaque, ) i32 {
        return qtc.QVariant_UserType(@ptrCast(self));
    }

    pub fn TypeId(self: ?*anyopaque, ) i32 {
        return qtc.QVariant_TypeId(@ptrCast(self));
    }

    pub fn TypeName(self: ?*anyopaque, ) []const u8 {
        const _ret = qtc.QVariant_TypeName(@ptrCast(self));
return  std.mem.span(_ret);
    }

    pub fn MetaType(self: ?*anyopaque, ) QtC.QMetaType {
        return qtc.QVariant_MetaType(@ptrCast(self));
    }

    pub fn CanConvert(self: ?*anyopaque, targetType: QtC.QMetaType) bool {
        return qtc.QVariant_CanConvert(@ptrCast(self), @ptrCast(targetType));
    }

    pub fn Convert(self: ?*anyopaque, typeVal: QtC.QMetaType) bool {
        return qtc.QVariant_Convert(@ptrCast(self), @ptrCast(typeVal));
    }

    pub fn CanView(self: ?*anyopaque, targetType: QtC.QMetaType) bool {
        return qtc.QVariant_CanView(@ptrCast(self), @ptrCast(targetType));
    }

    pub fn CanConvert2(self: ?*anyopaque, targetTypeId: i32) bool {
        return qtc.QVariant_CanConvert2(@ptrCast(self), targetTypeId);
    }

    pub fn Convert2(self: ?*anyopaque, targetTypeId: i32) bool {
        return qtc.QVariant_Convert2(@ptrCast(self), targetTypeId);
    }

    pub fn IsValid(self: ?*anyopaque, ) bool {
        return qtc.QVariant_IsValid(@ptrCast(self));
    }

    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QVariant_IsNull(@ptrCast(self));
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QVariant_Clear(@ptrCast(self));
    }

    pub fn Detach(self: ?*anyopaque, ) void {
        qtc.QVariant_Detach(@ptrCast(self));
    }

    pub fn IsDetached(self: ?*anyopaque, ) bool {
        return qtc.QVariant_IsDetached(@ptrCast(self));
    }

    pub fn ToInt(self: ?*anyopaque, ) i32 {
        return qtc.QVariant_ToInt(@ptrCast(self));
    }

    pub fn ToUInt(self: ?*anyopaque, ) u32 {
        return qtc.QVariant_ToUInt(@ptrCast(self));
    }

    pub fn ToLongLong(self: ?*anyopaque, ) i64 {
        return qtc.QVariant_ToLongLong(@ptrCast(self));
    }

    pub fn ToULongLong(self: ?*anyopaque, ) u64 {
        return qtc.QVariant_ToULongLong(@ptrCast(self));
    }

    pub fn ToBool(self: ?*anyopaque, ) bool {
        return qtc.QVariant_ToBool(@ptrCast(self));
    }

    pub fn ToDouble(self: ?*anyopaque, ) f64 {
        return qtc.QVariant_ToDouble(@ptrCast(self));
    }

    pub fn ToFloat(self: ?*anyopaque, ) f32 {
        return qtc.QVariant_ToFloat(@ptrCast(self));
    }

    pub fn ToReal(self: ?*anyopaque, ) f64 {
        return qtc.QVariant_ToReal(@ptrCast(self));
    }

    pub fn ToByteArray(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QVariant_ToByteArray(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qvariant.ToByteArray: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn ToBitArray(self: ?*anyopaque, ) QtC.QBitArray {
        return qtc.QVariant_ToBitArray(@ptrCast(self));
    }

    pub fn ToString(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QVariant_ToString(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qvariant.ToString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ToStringList(self: ?*anyopaque, ) []const u8 {
        return qtc.QVariant_ToStringList(@ptrCast(self));
    }

    pub fn ToChar(self: ?*anyopaque, ) QtC.QChar {
        return qtc.QVariant_ToChar(@ptrCast(self));
    }

    pub fn ToDate(self: ?*anyopaque, ) QtC.QDate {
        return qtc.QVariant_ToDate(@ptrCast(self));
    }

    pub fn ToTime(self: ?*anyopaque, ) QtC.QTime {
        return qtc.QVariant_ToTime(@ptrCast(self));
    }

    pub fn ToDateTime(self: ?*anyopaque, ) QtC.QDateTime {
        return qtc.QVariant_ToDateTime(@ptrCast(self));
    }

    pub fn ToList(self: ?*anyopaque, ) []const u8 {
        return qtc.QVariant_ToList(@ptrCast(self));
    }

    pub fn ToMap(self: ?*anyopaque, ) QMap<QString, QVariant> {
        return qtc.QVariant_ToMap(@ptrCast(self));
    }

    pub fn ToHash(self: ?*anyopaque, ) QHash<QString, QVariant> {
        return qtc.QVariant_ToHash(@ptrCast(self));
    }

    pub fn ToPoint(self: ?*anyopaque, ) QtC.QPoint {
        return qtc.QVariant_ToPoint(@ptrCast(self));
    }

    pub fn ToPointF(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QVariant_ToPointF(@ptrCast(self));
    }

    pub fn ToRect(self: ?*anyopaque, ) QtC.QRect {
        return qtc.QVariant_ToRect(@ptrCast(self));
    }

    pub fn ToSize(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QVariant_ToSize(@ptrCast(self));
    }

    pub fn ToSizeF(self: ?*anyopaque, ) QtC.QSizeF {
        return qtc.QVariant_ToSizeF(@ptrCast(self));
    }

    pub fn ToLine(self: ?*anyopaque, ) QtC.QLine {
        return qtc.QVariant_ToLine(@ptrCast(self));
    }

    pub fn ToLineF(self: ?*anyopaque, ) QtC.QLineF {
        return qtc.QVariant_ToLineF(@ptrCast(self));
    }

    pub fn ToRectF(self: ?*anyopaque, ) QtC.QRectF {
        return qtc.QVariant_ToRectF(@ptrCast(self));
    }

    pub fn ToLocale(self: ?*anyopaque, ) QtC.QLocale {
        return qtc.QVariant_ToLocale(@ptrCast(self));
    }

    pub fn ToRegularExpression(self: ?*anyopaque, ) QtC.QRegularExpression {
        return qtc.QVariant_ToRegularExpression(@ptrCast(self));
    }

    pub fn ToEasingCurve(self: ?*anyopaque, ) QtC.QEasingCurve {
        return qtc.QVariant_ToEasingCurve(@ptrCast(self));
    }

    pub fn ToUuid(self: ?*anyopaque, ) QtC.QUuid {
        return qtc.QVariant_ToUuid(@ptrCast(self));
    }

    pub fn ToUrl(self: ?*anyopaque, ) QtC.QUrl {
        return qtc.QVariant_ToUrl(@ptrCast(self));
    }

    pub fn ToJsonValue(self: ?*anyopaque, ) QtC.QJsonValue {
        return qtc.QVariant_ToJsonValue(@ptrCast(self));
    }

    pub fn ToJsonObject(self: ?*anyopaque, ) QtC.QJsonObject {
        return qtc.QVariant_ToJsonObject(@ptrCast(self));
    }

    pub fn ToJsonArray(self: ?*anyopaque, ) QtC.QJsonArray {
        return qtc.QVariant_ToJsonArray(@ptrCast(self));
    }

    pub fn ToJsonDocument(self: ?*anyopaque, ) QtC.QJsonDocument {
        return qtc.QVariant_ToJsonDocument(@ptrCast(self));
    }

    pub fn ToModelIndex(self: ?*anyopaque, ) QtC.QModelIndex {
        return qtc.QVariant_ToModelIndex(@ptrCast(self));
    }

    pub fn ToPersistentModelIndex(self: ?*anyopaque, ) QtC.QPersistentModelIndex {
        return qtc.QVariant_ToPersistentModelIndex(@ptrCast(self));
    }

    pub fn Load(self: ?*anyopaque, ds: ?*anyopaque) void {
        qtc.QVariant_Load(@ptrCast(self), @ptrCast(ds));
    }

    pub fn Save(self: ?*anyopaque, ds: ?*anyopaque) void {
        qtc.QVariant_Save(@ptrCast(self), @ptrCast(ds));
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QVariant_Type(@ptrCast(self));
    }

    pub fn TypeToName(typeId: i32) []const u8 {
        const _ret = qtc.QVariant_TypeToName(typeId);
return  std.mem.span(_ret);
    }

    pub fn NameToType(name: []const u8) i32 {
        return qtc.QVariant_NameToType(@ptrCast(name));
    }

    pub fn Data(self: ?*anyopaque, ) ?*anyopaque {
        return qtc.QVariant_Data(@ptrCast(self));
    }

    pub fn ConstData(self: ?*anyopaque, ) ?*anyopaque {
        return qtc.QVariant_ConstData(@ptrCast(self));
    }

    pub fn Data2(self: ?*anyopaque, ) ?*anyopaque {
        return qtc.QVariant_Data2(@ptrCast(self));
    }

    pub fn SetValue(self: ?*anyopaque, avalue: ?*anyopaque) void {
        qtc.QVariant_SetValue(@ptrCast(self), @ptrCast(avalue));
    }

    pub fn FromMetaType(typeVal: QtC.QMetaType) QtC.QVariant {
        return qtc.QVariant_FromMetaType(@ptrCast(typeVal));
    }

    pub fn Compare(lhs: ?*anyopaque, rhs: ?*anyopaque) QtC.QPartialOrdering {
        return qtc.QVariant_Compare(@ptrCast(lhs), @ptrCast(rhs));
    }

    pub fn DataPtr(self: ?*anyopaque, ) QtC.QVariant__Private {
        return qtc.QVariant_DataPtr(@ptrCast(self));
    }

    pub fn DataPtr2(self: ?*anyopaque, ) QtC.QVariant__Private {
        return qtc.QVariant_DataPtr2(@ptrCast(self));
    }

    pub fn ToInt1(self: ?*anyopaque, ok: *bool) i32 {
        return qtc.QVariant_ToInt1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn ToUInt1(self: ?*anyopaque, ok: *bool) u32 {
        return qtc.QVariant_ToUInt1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn ToLongLong1(self: ?*anyopaque, ok: *bool) i64 {
        return qtc.QVariant_ToLongLong1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn ToULongLong1(self: ?*anyopaque, ok: *bool) u64 {
        return qtc.QVariant_ToULongLong1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn ToDouble1(self: ?*anyopaque, ok: *bool) f64 {
        return qtc.QVariant_ToDouble1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn ToFloat1(self: ?*anyopaque, ok: *bool) f32 {
        return qtc.QVariant_ToFloat1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn ToReal1(self: ?*anyopaque, ok: *bool) f64 {
        return qtc.QVariant_ToReal1(@ptrCast(self), @ptrCast(ok));
    }

    pub fn FromMetaType2(typeVal: QtC.QMetaType, copyVal: ?*anyopaque) QtC.QVariant {
        return qtc.QVariant_FromMetaType2(@ptrCast(typeVal), @ptrCast(copyVal));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QVariant_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qvariantconstpointer.html
pub const qvariantconstpointer = struct {

    /// New constructs a new QVariantConstPointer object.
    pub fn New(variant: QtC.QVariant) QtC.QVariantConstPointer {
        return qtc.QVariantConstPointer_new(@ptrCast(variant));
    }


    /// New2 constructs a new QVariantConstPointer object.
    pub fn New2(param1: ?*anyopaque) QtC.QVariantConstPointer {
        return qtc.QVariantConstPointer_new2(@ptrCast(param1));
    }


    pub fn OperatorMultiply(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QVariantConstPointer_OperatorMultiply(@ptrCast(self));
    }

    pub fn OperatorMinusGreater(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QVariantConstPointer_OperatorMinusGreater(@ptrCast(self));
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QVariantConstPointer_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QVariantConstPointer_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/variant.html#types
pub const enums = struct {
    pub const Type = enum {
        pub const Invalid: i64 = 0;
        pub const Bool: i64 = 1;
        pub const Int: i64 = 2;
        pub const UInt: i64 = 3;
        pub const LongLong: i64 = 4;
        pub const ULongLong: i64 = 5;
        pub const Double: i64 = 6;
        pub const Char: i64 = 7;
        pub const Map: i64 = 8;
        pub const List: i64 = 9;
        pub const String: i64 = 10;
        pub const StringList: i64 = 11;
        pub const ByteArray: i64 = 12;
        pub const BitArray: i64 = 13;
        pub const Date: i64 = 14;
        pub const Time: i64 = 15;
        pub const DateTime: i64 = 16;
        pub const Url: i64 = 17;
        pub const Locale: i64 = 18;
        pub const Rect: i64 = 19;
        pub const RectF: i64 = 20;
        pub const Size: i64 = 21;
        pub const SizeF: i64 = 22;
        pub const Line: i64 = 23;
        pub const LineF: i64 = 24;
        pub const Point: i64 = 25;
        pub const PointF: i64 = 26;
        pub const RegularExpression: i64 = 44;
        pub const Hash: i64 = 28;
        pub const EasingCurve: i64 = 29;
        pub const Uuid: i64 = 30;
        pub const ModelIndex: i64 = 42;
        pub const PersistentModelIndex: i64 = 50;
        pub const LastCoreType: i64 = 63;
        pub const Font: i64 = 4096;
        pub const Pixmap: i64 = 4097;
        pub const Brush: i64 = 4098;
        pub const Color: i64 = 4099;
        pub const Palette: i64 = 4100;
        pub const Image: i64 = 4102;
        pub const Polygon: i64 = 4103;
        pub const Region: i64 = 4104;
        pub const Bitmap: i64 = 4105;
        pub const Cursor: i64 = 4106;
        pub const KeySequence: i64 = 4107;
        pub const Pen: i64 = 4108;
        pub const TextLength: i64 = 4109;
        pub const TextFormat: i64 = 4110;
        pub const Transform: i64 = 4112;
        pub const Matrix4x4: i64 = 4113;
        pub const Vector2D: i64 = 4114;
        pub const Vector3D: i64 = 4115;
        pub const Vector4D: i64 = 4116;
        pub const Quaternion: i64 = 4117;
        pub const PolygonF: i64 = 4118;
        pub const Icon: i64 = 4101;
        pub const LastGuiType: i64 = 4119;
        pub const SizePolicy: i64 = 8192;
        pub const UserType: i64 = 65536;
        pub const LastType: i64 = 4294967295;
    };

};
