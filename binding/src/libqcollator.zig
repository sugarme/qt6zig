const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qcollatorsortkey.html
pub const qcollatorsortkey = struct {

    /// New constructs a new QCollatorSortKey object.
    pub fn New(other: ?*anyopaque) QtC.QCollatorSortKey {
        return qtc.QCollatorSortKey_new(@ptrCast(other));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCollatorSortKey_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCollatorSortKey_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn Compare(self: ?*anyopaque, key: ?*anyopaque) i32 {
        return qtc.QCollatorSortKey_Compare(@ptrCast(self), @ptrCast(key));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCollatorSortKey_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qcollator.html
pub const qcollator = struct {

    /// New constructs a new QCollator object.
    pub fn New() QtC.QCollator {
        return qtc.QCollator_new();
    }


    /// New2 constructs a new QCollator object.
    pub fn New2(locale: ?*anyopaque) QtC.QCollator {
        return qtc.QCollator_new2(@ptrCast(locale));
    }


    /// New3 constructs a new QCollator object.
    pub fn New3(param1: ?*anyopaque) QtC.QCollator {
        return qtc.QCollator_new3(@ptrCast(param1));
    }


    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QCollator_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCollator_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn SetLocale(self: ?*anyopaque, locale: ?*anyopaque) void {
        qtc.QCollator_SetLocale(@ptrCast(self), @ptrCast(locale));
    }

    pub fn Locale(self: ?*anyopaque, ) QtC.QLocale {
        return qtc.QCollator_Locale(@ptrCast(self));
    }

    pub fn CaseSensitivity(self: ?*anyopaque, ) i32 {
        return qtc.QCollator_CaseSensitivity(@ptrCast(self));
    }

    pub fn SetCaseSensitivity(self: ?*anyopaque, cs: i32) void {
        qtc.QCollator_SetCaseSensitivity(@ptrCast(self), @intCast(cs));
    }

    pub fn SetNumericMode(self: ?*anyopaque, on: bool) void {
        qtc.QCollator_SetNumericMode(@ptrCast(self), on);
    }

    pub fn NumericMode(self: ?*anyopaque, ) bool {
        return qtc.QCollator_NumericMode(@ptrCast(self));
    }

    pub fn SetIgnorePunctuation(self: ?*anyopaque, on: bool) void {
        qtc.QCollator_SetIgnorePunctuation(@ptrCast(self), on);
    }

    pub fn IgnorePunctuation(self: ?*anyopaque, ) bool {
        return qtc.QCollator_IgnorePunctuation(@ptrCast(self));
    }

    pub fn Compare(self: ?*anyopaque, s1: []const u8, s2: []const u8) i32 {
        const s1_str = qtc.libqt_string{
    .len = s1.len,
    .data = s1.ptr,
};
const s2_str = qtc.libqt_string{
    .len = s2.len,
    .data = s2.ptr,
};
return qtc.QCollator_Compare(@ptrCast(self), s1_str, s2_str);
    }

    pub fn Compare2(self: ?*anyopaque, s1: ?*anyopaque, len1: i64, s2: ?*anyopaque, len2: i64) i32 {
        return qtc.QCollator_Compare2(@ptrCast(self), @ptrCast(s1), len1, @ptrCast(s2), len2);
    }

    pub fn OperatorCall(self: ?*anyopaque, s1: []const u8, s2: []const u8) bool {
        const s1_str = qtc.libqt_string{
    .len = s1.len,
    .data = s1.ptr,
};
const s2_str = qtc.libqt_string{
    .len = s2.len,
    .data = s2.ptr,
};
return qtc.QCollator_OperatorCall(@ptrCast(self), s1_str, s2_str);
    }

    pub fn Compare3(self: ?*anyopaque, s1: []const u8, s2: []const u8) i32 {
        return qtc.QCollator_Compare3(@ptrCast(self), @ptrCast(s1), @ptrCast(s2));
    }

    pub fn OperatorCall2(self: ?*anyopaque, s1: []const u8, s2: []const u8) bool {
        return qtc.QCollator_OperatorCall2(@ptrCast(self), @ptrCast(s1), @ptrCast(s2));
    }

    pub fn SortKey(self: ?*anyopaque, stringVal: []const u8) QtC.QCollatorSortKey {
        const stringVal_str = qtc.libqt_string{
    .len = stringVal.len,
    .data = stringVal.ptr,
};
return qtc.QCollator_SortKey(@ptrCast(self), stringVal_str);
    }

    pub fn DefaultCompare(s1: []const u8, s2: []const u8) i32 {
        return qtc.QCollator_DefaultCompare(@ptrCast(s1), @ptrCast(s2));
    }

    pub fn DefaultSortKey(key: []const u8) QtC.QCollatorSortKey {
        return qtc.QCollator_DefaultSortKey(@ptrCast(key));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCollator_Delete(@ptrCast(self));
    }
};
