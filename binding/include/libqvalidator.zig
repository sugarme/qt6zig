const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qvalidator.html
pub const qvalidator = struct {

    /// New constructs a new QValidator object.
    pub fn New() QtC.QValidator {
        return qtc.QValidator_new();
    }


    /// New2 constructs a new QValidator object.
    pub fn New2(parent: ?*anyopaque) QtC.QValidator {
        return qtc.QValidator_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QValidator_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qvalidator.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetLocale(self: ?*anyopaque, locale: ?*anyopaque) void {
        qtc.QValidator_SetLocale(@ptrCast(self), @ptrCast(locale));
    }

    pub fn Locale(self: ?*anyopaque, ) QtC.QLocale {
        return qtc.QValidator_Locale(@ptrCast(self));
    }

    pub fn Validate(self: ?*anyopaque, param1: []const u8, param2: *i32) i32 {
        const param1_str = qtc.libqt_string{
    .len = param1.len,
    .data = param1.ptr,
};
return qtc.QValidator_Validate(@ptrCast(self), param1_str, @ptrCast(param2));
    }

    /// Allows for overriding the related default method
    pub fn OnValidate(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, *i32) callconv(.c) i32) void {
        qtc.QValidator_OnValidate(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseValidate(self: ?*anyopaque, param1: []const u8, param2: *i32) i32 {
        const param1_str = qtc.libqt_string{
    .len = param1.len,
    .data = param1.ptr,
};
return qtc.QValidator_QBaseValidate(@ptrCast(self), param1_str, @ptrCast(param2));
    }

    pub fn Fixup(self: ?*anyopaque, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
    .len = param1.len,
    .data = param1.ptr,
};
qtc.QValidator_Fixup(@ptrCast(self), param1_str);
    }

    /// Allows for overriding the related default method
    pub fn OnFixup(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QValidator_OnFixup(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFixup(self: ?*anyopaque, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
    .len = param1.len,
    .data = param1.ptr,
};
qtc.QValidator_QBaseFixup(@ptrCast(self), param1_str);
    }

    pub fn Changed(self: ?*anyopaque, ) void {
        qtc.QValidator_Changed(@ptrCast(self));
    }

    pub fn OnChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QValidator_Connect_Changed(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QValidator_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qvalidator.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QValidator_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qvalidator.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QValidator_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qintvalidator.html
pub const qintvalidator = struct {

    /// New constructs a new QIntValidator object.
    pub fn New() QtC.QIntValidator {
        return qtc.QIntValidator_new();
    }


    /// New2 constructs a new QIntValidator object.
    pub fn New2(bottom: i32, top: i32) QtC.QIntValidator {
        return qtc.QIntValidator_new2(bottom, top);
    }


    /// New3 constructs a new QIntValidator object.
    pub fn New3(parent: ?*anyopaque) QtC.QIntValidator {
        return qtc.QIntValidator_new3(@ptrCast(parent));
    }


    /// New4 constructs a new QIntValidator object.
    pub fn New4(bottom: i32, top: i32, parent: ?*anyopaque) QtC.QIntValidator {
        return qtc.QIntValidator_new4(bottom, top, @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QIntValidator_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qintvalidator.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Validate(self: ?*anyopaque, param1: []const u8, param2: *i32) i32 {
        const param1_str = qtc.libqt_string{
    .len = param1.len,
    .data = param1.ptr,
};
return qtc.QIntValidator_Validate(@ptrCast(self), param1_str, @ptrCast(param2));
    }

    /// Allows for overriding the related default method
    pub fn OnValidate(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, *i32) callconv(.c) i32) void {
        qtc.QIntValidator_OnValidate(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseValidate(self: ?*anyopaque, param1: []const u8, param2: *i32) i32 {
        const param1_str = qtc.libqt_string{
    .len = param1.len,
    .data = param1.ptr,
};
return qtc.QIntValidator_QBaseValidate(@ptrCast(self), param1_str, @ptrCast(param2));
    }

    pub fn Fixup(self: ?*anyopaque, input: []const u8) void {
        const input_str = qtc.libqt_string{
    .len = input.len,
    .data = input.ptr,
};
qtc.QIntValidator_Fixup(@ptrCast(self), input_str);
    }

    /// Allows for overriding the related default method
    pub fn OnFixup(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QIntValidator_OnFixup(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFixup(self: ?*anyopaque, input: []const u8) void {
        const input_str = qtc.libqt_string{
    .len = input.len,
    .data = input.ptr,
};
qtc.QIntValidator_QBaseFixup(@ptrCast(self), input_str);
    }

    pub fn SetBottom(self: ?*anyopaque, bottom: i32) void {
        qtc.QIntValidator_SetBottom(@ptrCast(self), bottom);
    }

    pub fn SetTop(self: ?*anyopaque, top: i32) void {
        qtc.QIntValidator_SetTop(@ptrCast(self), top);
    }

    pub fn SetRange(self: ?*anyopaque, bottom: i32, top: i32) void {
        qtc.QIntValidator_SetRange(@ptrCast(self), bottom, top);
    }

    pub fn Bottom(self: ?*anyopaque, ) i32 {
        return qtc.QIntValidator_Bottom(@ptrCast(self));
    }

    pub fn Top(self: ?*anyopaque, ) i32 {
        return qtc.QIntValidator_Top(@ptrCast(self));
    }

    pub fn BottomChanged(self: ?*anyopaque, bottom: i32) void {
        qtc.QIntValidator_BottomChanged(@ptrCast(self), bottom);
    }

    pub fn OnBottomChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QIntValidator_Connect_BottomChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn TopChanged(self: ?*anyopaque, top: i32) void {
        qtc.QIntValidator_TopChanged(@ptrCast(self), top);
    }

    pub fn OnTopChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QIntValidator_Connect_TopChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QIntValidator_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qintvalidator.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QIntValidator_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qintvalidator.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QIntValidator_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdoublevalidator.html
pub const qdoublevalidator = struct {

    /// New constructs a new QDoubleValidator object.
    pub fn New() QtC.QDoubleValidator {
        return qtc.QDoubleValidator_new();
    }


    /// New2 constructs a new QDoubleValidator object.
    pub fn New2(bottom: f64, top: f64, decimals: i32) QtC.QDoubleValidator {
        return qtc.QDoubleValidator_new2(bottom, top, decimals);
    }


    /// New3 constructs a new QDoubleValidator object.
    pub fn New3(parent: ?*anyopaque) QtC.QDoubleValidator {
        return qtc.QDoubleValidator_new3(@ptrCast(parent));
    }


    /// New4 constructs a new QDoubleValidator object.
    pub fn New4(bottom: f64, top: f64, decimals: i32, parent: ?*anyopaque) QtC.QDoubleValidator {
        return qtc.QDoubleValidator_new4(bottom, top, decimals, @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDoubleValidator_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdoublevalidator.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Validate(self: ?*anyopaque, param1: []const u8, param2: *i32) i32 {
        const param1_str = qtc.libqt_string{
    .len = param1.len,
    .data = param1.ptr,
};
return qtc.QDoubleValidator_Validate(@ptrCast(self), param1_str, @ptrCast(param2));
    }

    /// Allows for overriding the related default method
    pub fn OnValidate(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, *i32) callconv(.c) i32) void {
        qtc.QDoubleValidator_OnValidate(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseValidate(self: ?*anyopaque, param1: []const u8, param2: *i32) i32 {
        const param1_str = qtc.libqt_string{
    .len = param1.len,
    .data = param1.ptr,
};
return qtc.QDoubleValidator_QBaseValidate(@ptrCast(self), param1_str, @ptrCast(param2));
    }

    pub fn Fixup(self: ?*anyopaque, input: []const u8) void {
        const input_str = qtc.libqt_string{
    .len = input.len,
    .data = input.ptr,
};
qtc.QDoubleValidator_Fixup(@ptrCast(self), input_str);
    }

    /// Allows for overriding the related default method
    pub fn OnFixup(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QDoubleValidator_OnFixup(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFixup(self: ?*anyopaque, input: []const u8) void {
        const input_str = qtc.libqt_string{
    .len = input.len,
    .data = input.ptr,
};
qtc.QDoubleValidator_QBaseFixup(@ptrCast(self), input_str);
    }

    pub fn SetRange(self: ?*anyopaque, bottom: f64, top: f64, decimals: i32) void {
        qtc.QDoubleValidator_SetRange(@ptrCast(self), bottom, top, decimals);
    }

    pub fn SetRange2(self: ?*anyopaque, bottom: f64, top: f64) void {
        qtc.QDoubleValidator_SetRange2(@ptrCast(self), bottom, top);
    }

    pub fn SetBottom(self: ?*anyopaque, bottom: f64) void {
        qtc.QDoubleValidator_SetBottom(@ptrCast(self), bottom);
    }

    pub fn SetTop(self: ?*anyopaque, top: f64) void {
        qtc.QDoubleValidator_SetTop(@ptrCast(self), top);
    }

    pub fn SetDecimals(self: ?*anyopaque, decimals: i32) void {
        qtc.QDoubleValidator_SetDecimals(@ptrCast(self), decimals);
    }

    pub fn SetNotation(self: ?*anyopaque, notation: i32) void {
        qtc.QDoubleValidator_SetNotation(@ptrCast(self), @intCast(notation));
    }

    pub fn Bottom(self: ?*anyopaque, ) f64 {
        return qtc.QDoubleValidator_Bottom(@ptrCast(self));
    }

    pub fn Top(self: ?*anyopaque, ) f64 {
        return qtc.QDoubleValidator_Top(@ptrCast(self));
    }

    pub fn Decimals(self: ?*anyopaque, ) i32 {
        return qtc.QDoubleValidator_Decimals(@ptrCast(self));
    }

    pub fn Notation(self: ?*anyopaque, ) i32 {
        return qtc.QDoubleValidator_Notation(@ptrCast(self));
    }

    pub fn BottomChanged(self: ?*anyopaque, bottom: f64) void {
        qtc.QDoubleValidator_BottomChanged(@ptrCast(self), bottom);
    }

    pub fn OnBottomChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QDoubleValidator_Connect_BottomChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn TopChanged(self: ?*anyopaque, top: f64) void {
        qtc.QDoubleValidator_TopChanged(@ptrCast(self), top);
    }

    pub fn OnTopChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QDoubleValidator_Connect_TopChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn DecimalsChanged(self: ?*anyopaque, decimals: i32) void {
        qtc.QDoubleValidator_DecimalsChanged(@ptrCast(self), decimals);
    }

    pub fn OnDecimalsChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QDoubleValidator_Connect_DecimalsChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn NotationChanged(self: ?*anyopaque, notation: i32) void {
        qtc.QDoubleValidator_NotationChanged(@ptrCast(self), @intCast(notation));
    }

    pub fn OnNotationChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QDoubleValidator_Connect_NotationChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDoubleValidator_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdoublevalidator.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDoubleValidator_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdoublevalidator.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDoubleValidator_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qregularexpressionvalidator.html
pub const qregularexpressionvalidator = struct {

    /// New constructs a new QRegularExpressionValidator object.
    pub fn New() QtC.QRegularExpressionValidator {
        return qtc.QRegularExpressionValidator_new();
    }


    /// New2 constructs a new QRegularExpressionValidator object.
    pub fn New2(re: ?*anyopaque) QtC.QRegularExpressionValidator {
        return qtc.QRegularExpressionValidator_new2(@ptrCast(re));
    }


    /// New3 constructs a new QRegularExpressionValidator object.
    pub fn New3(parent: ?*anyopaque) QtC.QRegularExpressionValidator {
        return qtc.QRegularExpressionValidator_new3(@ptrCast(parent));
    }


    /// New4 constructs a new QRegularExpressionValidator object.
    pub fn New4(re: ?*anyopaque, parent: ?*anyopaque) QtC.QRegularExpressionValidator {
        return qtc.QRegularExpressionValidator_new4(@ptrCast(re), @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QRegularExpressionValidator_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qregularexpressionvalidator.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Validate(self: ?*anyopaque, input: []const u8, pos: *i32) i32 {
        const input_str = qtc.libqt_string{
    .len = input.len,
    .data = input.ptr,
};
return qtc.QRegularExpressionValidator_Validate(@ptrCast(self), input_str, @ptrCast(pos));
    }

    /// Allows for overriding the related default method
    pub fn OnValidate(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, *i32) callconv(.c) i32) void {
        qtc.QRegularExpressionValidator_OnValidate(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseValidate(self: ?*anyopaque, input: []const u8, pos: *i32) i32 {
        const input_str = qtc.libqt_string{
    .len = input.len,
    .data = input.ptr,
};
return qtc.QRegularExpressionValidator_QBaseValidate(@ptrCast(self), input_str, @ptrCast(pos));
    }

    pub fn RegularExpression(self: ?*anyopaque, ) QtC.QRegularExpression {
        return qtc.QRegularExpressionValidator_RegularExpression(@ptrCast(self));
    }

    pub fn SetRegularExpression(self: ?*anyopaque, re: ?*anyopaque) void {
        qtc.QRegularExpressionValidator_SetRegularExpression(@ptrCast(self), @ptrCast(re));
    }

    pub fn RegularExpressionChanged(self: ?*anyopaque, re: ?*anyopaque) void {
        qtc.QRegularExpressionValidator_RegularExpressionChanged(@ptrCast(self), @ptrCast(re));
    }

    pub fn OnRegularExpressionChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QRegularExpressionValidator_Connect_RegularExpressionChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QRegularExpressionValidator_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qregularexpressionvalidator.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QRegularExpressionValidator_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qregularexpressionvalidator.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QRegularExpressionValidator_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/validator.html#types
pub const enums = struct {
    pub const State = enum {
        pub const Invalid: i32 = 0;
        pub const Intermediate: i32 = 1;
        pub const Acceptable: i32 = 2;
    };

    pub const Notation = enum {
        pub const StandardNotation: i32 = 0;
        pub const ScientificNotation: i32 = 1;
    };

};
