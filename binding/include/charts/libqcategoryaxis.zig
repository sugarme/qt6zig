const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qcategoryaxis.html
pub const qcategoryaxis = struct {

    /// New constructs a new QCategoryAxis object.
    pub fn New() QtC.QCategoryAxis {
        return qtc.QCategoryAxis_new();
    }


    /// New2 constructs a new QCategoryAxis object.
    pub fn New2(parent: ?*anyopaque) QtC.QCategoryAxis {
        return qtc.QCategoryAxis_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCategoryAxis_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcategoryaxis.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QCategoryAxis_Type(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnType(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QCategoryAxis_OnType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseType(self: ?*anyopaque, ) i32 {
        return qtc.QCategoryAxis_QBaseType(@ptrCast(self));
    }

    pub fn Append(self: ?*anyopaque, label: []const u8, categoryEndValue: f64) void {
        const label_str = qtc.libqt_string{
    .len = label.len,
    .data = label.ptr,
};
qtc.QCategoryAxis_Append(@ptrCast(self), label_str, categoryEndValue);
    }

    pub fn Remove(self: ?*anyopaque, label: []const u8) void {
        const label_str = qtc.libqt_string{
    .len = label.len,
    .data = label.ptr,
};
qtc.QCategoryAxis_Remove(@ptrCast(self), label_str);
    }

    pub fn ReplaceLabel(self: ?*anyopaque, oldLabel: []const u8, newLabel: []const u8) void {
        const oldLabel_str = qtc.libqt_string{
    .len = oldLabel.len,
    .data = oldLabel.ptr,
};
const newLabel_str = qtc.libqt_string{
    .len = newLabel.len,
    .data = newLabel.ptr,
};
qtc.QCategoryAxis_ReplaceLabel(@ptrCast(self), oldLabel_str, newLabel_str);
    }

    pub fn StartValue(self: ?*anyopaque, ) f64 {
        return qtc.QCategoryAxis_StartValue(@ptrCast(self));
    }

    pub fn SetStartValue(self: ?*anyopaque, min: f64) void {
        qtc.QCategoryAxis_SetStartValue(@ptrCast(self), min);
    }

    pub fn EndValue(self: ?*anyopaque, categoryLabel: []const u8) f64 {
        const categoryLabel_str = qtc.libqt_string{
    .len = categoryLabel.len,
    .data = categoryLabel.ptr,
};
return qtc.QCategoryAxis_EndValue(@ptrCast(self), categoryLabel_str);
    }

    pub fn CategoriesLabels(self: ?*anyopaque, ) []const u8 {
        return qtc.QCategoryAxis_CategoriesLabels(@ptrCast(self));
    }

    pub fn Count(self: ?*anyopaque, ) i32 {
        return qtc.QCategoryAxis_Count(@ptrCast(self));
    }

    pub fn LabelsPosition(self: ?*anyopaque, ) i32 {
        return qtc.QCategoryAxis_LabelsPosition(@ptrCast(self));
    }

    pub fn SetLabelsPosition(self: ?*anyopaque, position: i32) void {
        qtc.QCategoryAxis_SetLabelsPosition(@ptrCast(self), @intCast(position));
    }

    pub fn CategoriesChanged(self: ?*anyopaque, ) void {
        qtc.QCategoryAxis_CategoriesChanged(@ptrCast(self));
    }

    pub fn OnCategoriesChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCategoryAxis_Connect_CategoriesChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LabelsPositionChanged(self: ?*anyopaque, position: i32) void {
        qtc.QCategoryAxis_LabelsPositionChanged(@ptrCast(self), @intCast(position));
    }

    pub fn OnLabelsPositionChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QCategoryAxis_Connect_LabelsPositionChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCategoryAxis_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcategoryaxis.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCategoryAxis_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcategoryaxis.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn StartValue1(self: ?*anyopaque, categoryLabel: []const u8) f64 {
        const categoryLabel_str = qtc.libqt_string{
    .len = categoryLabel.len,
    .data = categoryLabel.ptr,
};
return qtc.QCategoryAxis_StartValue1(@ptrCast(self), categoryLabel_str);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCategoryAxis_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/categoryaxis.html#types
pub const enums = struct {
    pub const AxisLabelsPosition = enum {
        pub const AxisLabelsPositionCenter: i32 = 0;
        pub const AxisLabelsPositionOnValue: i32 = 1;
    };

};
