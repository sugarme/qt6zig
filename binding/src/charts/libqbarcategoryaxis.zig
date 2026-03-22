const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qbarcategoryaxis.html
pub const qbarcategoryaxis = struct {

    /// New constructs a new QBarCategoryAxis object.
    pub fn New() QtC.QBarCategoryAxis {
        return qtc.QBarCategoryAxis_new();
    }


    /// New2 constructs a new QBarCategoryAxis object.
    pub fn New2(parent: ?*anyopaque) QtC.QBarCategoryAxis {
        return qtc.QBarCategoryAxis_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QBarCategoryAxis_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qbarcategoryaxis.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Type(self: ?*anyopaque, ) i32 {
        return qtc.QBarCategoryAxis_Type(@ptrCast(self));
    }

    /// Allows for overriding the related default method
    pub fn OnType(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) i32) void {
        qtc.QBarCategoryAxis_OnType(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseType(self: ?*anyopaque, ) i32 {
        return qtc.QBarCategoryAxis_QBaseType(@ptrCast(self));
    }

    pub fn Append(self: ?*anyopaque, categories: []const u8) void {
        qtc.QBarCategoryAxis_Append(@ptrCast(self), @ptrCast(categories));
    }

    pub fn Append2(self: ?*anyopaque, category: []const u8) void {
        const category_str = qtc.libqt_string{
    .len = category.len,
    .data = category.ptr,
};
qtc.QBarCategoryAxis_Append2(@ptrCast(self), category_str);
    }

    pub fn Remove(self: ?*anyopaque, category: []const u8) void {
        const category_str = qtc.libqt_string{
    .len = category.len,
    .data = category.ptr,
};
qtc.QBarCategoryAxis_Remove(@ptrCast(self), category_str);
    }

    pub fn Insert(self: ?*anyopaque, index: i32, category: []const u8) void {
        const category_str = qtc.libqt_string{
    .len = category.len,
    .data = category.ptr,
};
qtc.QBarCategoryAxis_Insert(@ptrCast(self), index, category_str);
    }

    pub fn Replace(self: ?*anyopaque, oldCategory: []const u8, newCategory: []const u8) void {
        const oldCategory_str = qtc.libqt_string{
    .len = oldCategory.len,
    .data = oldCategory.ptr,
};
const newCategory_str = qtc.libqt_string{
    .len = newCategory.len,
    .data = newCategory.ptr,
};
qtc.QBarCategoryAxis_Replace(@ptrCast(self), oldCategory_str, newCategory_str);
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QBarCategoryAxis_Clear(@ptrCast(self));
    }

    pub fn SetCategories(self: ?*anyopaque, categories: []const u8) void {
        qtc.QBarCategoryAxis_SetCategories(@ptrCast(self), @ptrCast(categories));
    }

    pub fn Categories(self: ?*anyopaque, ) []const u8 {
        return qtc.QBarCategoryAxis_Categories(@ptrCast(self));
    }

    pub fn Count(self: ?*anyopaque, ) i32 {
        return qtc.QBarCategoryAxis_Count(@ptrCast(self));
    }

    pub fn At(self: ?*anyopaque, index: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QBarCategoryAxis_At(@ptrCast(self), index);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qbarcategoryaxis.At: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetMin(self: ?*anyopaque, minCategory: []const u8) void {
        const minCategory_str = qtc.libqt_string{
    .len = minCategory.len,
    .data = minCategory.ptr,
};
qtc.QBarCategoryAxis_SetMin(@ptrCast(self), minCategory_str);
    }

    pub fn Min(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QBarCategoryAxis_Min(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qbarcategoryaxis.Min: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetMax(self: ?*anyopaque, maxCategory: []const u8) void {
        const maxCategory_str = qtc.libqt_string{
    .len = maxCategory.len,
    .data = maxCategory.ptr,
};
qtc.QBarCategoryAxis_SetMax(@ptrCast(self), maxCategory_str);
    }

    pub fn Max(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QBarCategoryAxis_Max(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qbarcategoryaxis.Max: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetRange(self: ?*anyopaque, minCategory: []const u8, maxCategory: []const u8) void {
        const minCategory_str = qtc.libqt_string{
    .len = minCategory.len,
    .data = minCategory.ptr,
};
const maxCategory_str = qtc.libqt_string{
    .len = maxCategory.len,
    .data = maxCategory.ptr,
};
qtc.QBarCategoryAxis_SetRange(@ptrCast(self), minCategory_str, maxCategory_str);
    }

    pub fn CategoriesChanged(self: ?*anyopaque, ) void {
        qtc.QBarCategoryAxis_CategoriesChanged(@ptrCast(self));
    }

    pub fn OnCategoriesChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QBarCategoryAxis_Connect_CategoriesChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn MinChanged(self: ?*anyopaque, min: []const u8) void {
        const min_str = qtc.libqt_string{
    .len = min.len,
    .data = min.ptr,
};
qtc.QBarCategoryAxis_MinChanged(@ptrCast(self), min_str);
    }

    pub fn OnMinChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QBarCategoryAxis_Connect_MinChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn MaxChanged(self: ?*anyopaque, max: []const u8) void {
        const max_str = qtc.libqt_string{
    .len = max.len,
    .data = max.ptr,
};
qtc.QBarCategoryAxis_MaxChanged(@ptrCast(self), max_str);
    }

    pub fn OnMaxChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QBarCategoryAxis_Connect_MaxChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn RangeChanged(self: ?*anyopaque, min: []const u8, max: []const u8) void {
        const min_str = qtc.libqt_string{
    .len = min.len,
    .data = min.ptr,
};
const max_str = qtc.libqt_string{
    .len = max.len,
    .data = max.ptr,
};
qtc.QBarCategoryAxis_RangeChanged(@ptrCast(self), min_str, max_str);
    }

    pub fn OnRangeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, [*:0]const u8) callconv(.c) void) void {
        qtc.QBarCategoryAxis_Connect_RangeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CountChanged(self: ?*anyopaque, ) void {
        qtc.QBarCategoryAxis_CountChanged(@ptrCast(self));
    }

    pub fn OnCountChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QBarCategoryAxis_Connect_CountChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QBarCategoryAxis_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qbarcategoryaxis.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QBarCategoryAxis_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qbarcategoryaxis.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QBarCategoryAxis_Delete(@ptrCast(self));
    }
};
