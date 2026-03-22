const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qspinbox.html
pub const qspinbox = struct {

    /// New constructs a new QSpinBox object.
    pub fn New(parent: ?*anyopaque) QtC.QSpinBox {
        return qtc.QSpinBox_new(@ptrCast(parent));
    }


    /// New2 constructs a new QSpinBox object.
    pub fn New2() QtC.QSpinBox {
        return qtc.QSpinBox_new2();
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSpinBox_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qspinbox.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Value(self: ?*anyopaque, ) i32 {
        return qtc.QSpinBox_Value(@ptrCast(self));
    }

    pub fn Prefix(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSpinBox_Prefix(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qspinbox.Prefix: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetPrefix(self: ?*anyopaque, prefix: []const u8) void {
        const prefix_str = qtc.libqt_string{
    .len = prefix.len,
    .data = prefix.ptr,
};
qtc.QSpinBox_SetPrefix(@ptrCast(self), prefix_str);
    }

    pub fn Suffix(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSpinBox_Suffix(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qspinbox.Suffix: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetSuffix(self: ?*anyopaque, suffix: []const u8) void {
        const suffix_str = qtc.libqt_string{
    .len = suffix.len,
    .data = suffix.ptr,
};
qtc.QSpinBox_SetSuffix(@ptrCast(self), suffix_str);
    }

    pub fn CleanText(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSpinBox_CleanText(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qspinbox.CleanText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SingleStep(self: ?*anyopaque, ) i32 {
        return qtc.QSpinBox_SingleStep(@ptrCast(self));
    }

    pub fn SetSingleStep(self: ?*anyopaque, val: i32) void {
        qtc.QSpinBox_SetSingleStep(@ptrCast(self), val);
    }

    pub fn Minimum(self: ?*anyopaque, ) i32 {
        return qtc.QSpinBox_Minimum(@ptrCast(self));
    }

    pub fn SetMinimum(self: ?*anyopaque, min: i32) void {
        qtc.QSpinBox_SetMinimum(@ptrCast(self), min);
    }

    pub fn Maximum(self: ?*anyopaque, ) i32 {
        return qtc.QSpinBox_Maximum(@ptrCast(self));
    }

    pub fn SetMaximum(self: ?*anyopaque, max: i32) void {
        qtc.QSpinBox_SetMaximum(@ptrCast(self), max);
    }

    pub fn SetRange(self: ?*anyopaque, min: i32, max: i32) void {
        qtc.QSpinBox_SetRange(@ptrCast(self), min, max);
    }

    pub fn StepType(self: ?*anyopaque, ) i32 {
        return qtc.QSpinBox_StepType(@ptrCast(self));
    }

    pub fn SetStepType(self: ?*anyopaque, stepType: i32) void {
        qtc.QSpinBox_SetStepType(@ptrCast(self), @intCast(stepType));
    }

    pub fn DisplayIntegerBase(self: ?*anyopaque, ) i32 {
        return qtc.QSpinBox_DisplayIntegerBase(@ptrCast(self));
    }

    pub fn SetDisplayIntegerBase(self: ?*anyopaque, base: i32) void {
        qtc.QSpinBox_SetDisplayIntegerBase(@ptrCast(self), base);
    }

    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSpinBox_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QSpinBox_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QSpinBox_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn Validate(self: ?*anyopaque, input: []const u8, pos: *i32) i32 {
        const input_str = qtc.libqt_string{
    .len = input.len,
    .data = input.ptr,
};
return qtc.QSpinBox_Validate(@ptrCast(self), input_str, @ptrCast(pos));
    }

    /// Allows for overriding the related default method
    pub fn OnValidate(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, *i32) callconv(.c) i32) void {
        qtc.QSpinBox_OnValidate(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseValidate(self: ?*anyopaque, input: []const u8, pos: *i32) i32 {
        const input_str = qtc.libqt_string{
    .len = input.len,
    .data = input.ptr,
};
return qtc.QSpinBox_QBaseValidate(@ptrCast(self), input_str, @ptrCast(pos));
    }

    pub fn ValueFromText(self: ?*anyopaque, text: []const u8) i32 {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QSpinBox_ValueFromText(@ptrCast(self), text_str);
    }

    /// Allows for overriding the related default method
    pub fn OnValueFromText(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.QSpinBox_OnValueFromText(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseValueFromText(self: ?*anyopaque, text: []const u8) i32 {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QSpinBox_QBaseValueFromText(@ptrCast(self), text_str);
    }

    pub fn TextFromValue(self: ?*anyopaque, val: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSpinBox_TextFromValue(@ptrCast(self), val);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qspinbox.TextFromValue: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Allows for overriding the related default method
    pub fn OnTextFromValue(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) [*:0]const u8) void {
        qtc.QSpinBox_OnTextFromValue(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseTextFromValue(self: ?*anyopaque, val: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSpinBox_QBaseTextFromValue(@ptrCast(self), val);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qspinbox.TextFromValue: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Fixup(self: ?*anyopaque, str: []const u8) void {
        const str_str = qtc.libqt_string{
    .len = str.len,
    .data = str.ptr,
};
qtc.QSpinBox_Fixup(@ptrCast(self), str_str);
    }

    /// Allows for overriding the related default method
    pub fn OnFixup(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QSpinBox_OnFixup(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFixup(self: ?*anyopaque, str: []const u8) void {
        const str_str = qtc.libqt_string{
    .len = str.len,
    .data = str.ptr,
};
qtc.QSpinBox_QBaseFixup(@ptrCast(self), str_str);
    }

    pub fn SetValue(self: ?*anyopaque, val: i32) void {
        qtc.QSpinBox_SetValue(@ptrCast(self), val);
    }

    pub fn ValueChanged(self: ?*anyopaque, param1: i32) void {
        qtc.QSpinBox_ValueChanged(@ptrCast(self), param1);
    }

    pub fn OnValueChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QSpinBox_Connect_ValueChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn TextChanged(self: ?*anyopaque, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
    .len = param1.len,
    .data = param1.ptr,
};
qtc.QSpinBox_TextChanged(@ptrCast(self), param1_str);
    }

    pub fn OnTextChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QSpinBox_Connect_TextChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSpinBox_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qspinbox.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QSpinBox_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qspinbox.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QSpinBox_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qdoublespinbox.html
pub const qdoublespinbox = struct {

    /// New constructs a new QDoubleSpinBox object.
    pub fn New(parent: ?*anyopaque) QtC.QDoubleSpinBox {
        return qtc.QDoubleSpinBox_new(@ptrCast(parent));
    }


    /// New2 constructs a new QDoubleSpinBox object.
    pub fn New2() QtC.QDoubleSpinBox {
        return qtc.QDoubleSpinBox_new2();
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDoubleSpinBox_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdoublespinbox.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Value(self: ?*anyopaque, ) f64 {
        return qtc.QDoubleSpinBox_Value(@ptrCast(self));
    }

    pub fn Prefix(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDoubleSpinBox_Prefix(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdoublespinbox.Prefix: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetPrefix(self: ?*anyopaque, prefix: []const u8) void {
        const prefix_str = qtc.libqt_string{
    .len = prefix.len,
    .data = prefix.ptr,
};
qtc.QDoubleSpinBox_SetPrefix(@ptrCast(self), prefix_str);
    }

    pub fn Suffix(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDoubleSpinBox_Suffix(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdoublespinbox.Suffix: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetSuffix(self: ?*anyopaque, suffix: []const u8) void {
        const suffix_str = qtc.libqt_string{
    .len = suffix.len,
    .data = suffix.ptr,
};
qtc.QDoubleSpinBox_SetSuffix(@ptrCast(self), suffix_str);
    }

    pub fn CleanText(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDoubleSpinBox_CleanText(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdoublespinbox.CleanText: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SingleStep(self: ?*anyopaque, ) f64 {
        return qtc.QDoubleSpinBox_SingleStep(@ptrCast(self));
    }

    pub fn SetSingleStep(self: ?*anyopaque, val: f64) void {
        qtc.QDoubleSpinBox_SetSingleStep(@ptrCast(self), val);
    }

    pub fn Minimum(self: ?*anyopaque, ) f64 {
        return qtc.QDoubleSpinBox_Minimum(@ptrCast(self));
    }

    pub fn SetMinimum(self: ?*anyopaque, min: f64) void {
        qtc.QDoubleSpinBox_SetMinimum(@ptrCast(self), min);
    }

    pub fn Maximum(self: ?*anyopaque, ) f64 {
        return qtc.QDoubleSpinBox_Maximum(@ptrCast(self));
    }

    pub fn SetMaximum(self: ?*anyopaque, max: f64) void {
        qtc.QDoubleSpinBox_SetMaximum(@ptrCast(self), max);
    }

    pub fn SetRange(self: ?*anyopaque, min: f64, max: f64) void {
        qtc.QDoubleSpinBox_SetRange(@ptrCast(self), min, max);
    }

    pub fn StepType(self: ?*anyopaque, ) i32 {
        return qtc.QDoubleSpinBox_StepType(@ptrCast(self));
    }

    pub fn SetStepType(self: ?*anyopaque, stepType: i32) void {
        qtc.QDoubleSpinBox_SetStepType(@ptrCast(self), @intCast(stepType));
    }

    pub fn Decimals(self: ?*anyopaque, ) i32 {
        return qtc.QDoubleSpinBox_Decimals(@ptrCast(self));
    }

    pub fn SetDecimals(self: ?*anyopaque, prec: i32) void {
        qtc.QDoubleSpinBox_SetDecimals(@ptrCast(self), prec);
    }

    pub fn Validate(self: ?*anyopaque, input: []const u8, pos: *i32) i32 {
        const input_str = qtc.libqt_string{
    .len = input.len,
    .data = input.ptr,
};
return qtc.QDoubleSpinBox_Validate(@ptrCast(self), input_str, @ptrCast(pos));
    }

    /// Allows for overriding the related default method
    pub fn OnValidate(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, *i32) callconv(.c) i32) void {
        qtc.QDoubleSpinBox_OnValidate(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseValidate(self: ?*anyopaque, input: []const u8, pos: *i32) i32 {
        const input_str = qtc.libqt_string{
    .len = input.len,
    .data = input.ptr,
};
return qtc.QDoubleSpinBox_QBaseValidate(@ptrCast(self), input_str, @ptrCast(pos));
    }

    pub fn ValueFromText(self: ?*anyopaque, text: []const u8) f64 {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QDoubleSpinBox_ValueFromText(@ptrCast(self), text_str);
    }

    /// Allows for overriding the related default method
    pub fn OnValueFromText(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) f64) void {
        qtc.QDoubleSpinBox_OnValueFromText(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseValueFromText(self: ?*anyopaque, text: []const u8) f64 {
        const text_str = qtc.libqt_string{
    .len = text.len,
    .data = text.ptr,
};
return qtc.QDoubleSpinBox_QBaseValueFromText(@ptrCast(self), text_str);
    }

    pub fn TextFromValue(self: ?*anyopaque, val: f64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDoubleSpinBox_TextFromValue(@ptrCast(self), val);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdoublespinbox.TextFromValue: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Allows for overriding the related default method
    pub fn OnTextFromValue(self: ?*anyopaque, callback: *const fn (?*anyopaque, f64) callconv(.c) [*:0]const u8) void {
        qtc.QDoubleSpinBox_OnTextFromValue(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseTextFromValue(self: ?*anyopaque, val: f64, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDoubleSpinBox_QBaseTextFromValue(@ptrCast(self), val);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdoublespinbox.TextFromValue: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Fixup(self: ?*anyopaque, str: []const u8) void {
        const str_str = qtc.libqt_string{
    .len = str.len,
    .data = str.ptr,
};
qtc.QDoubleSpinBox_Fixup(@ptrCast(self), str_str);
    }

    /// Allows for overriding the related default method
    pub fn OnFixup(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QDoubleSpinBox_OnFixup(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseFixup(self: ?*anyopaque, str: []const u8) void {
        const str_str = qtc.libqt_string{
    .len = str.len,
    .data = str.ptr,
};
qtc.QDoubleSpinBox_QBaseFixup(@ptrCast(self), str_str);
    }

    pub fn SetValue(self: ?*anyopaque, val: f64) void {
        qtc.QDoubleSpinBox_SetValue(@ptrCast(self), val);
    }

    pub fn ValueChanged(self: ?*anyopaque, param1: f64) void {
        qtc.QDoubleSpinBox_ValueChanged(@ptrCast(self), param1);
    }

    pub fn OnValueChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QDoubleSpinBox_Connect_ValueChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn TextChanged(self: ?*anyopaque, param1: []const u8) void {
        const param1_str = qtc.libqt_string{
    .len = param1.len,
    .data = param1.ptr,
};
qtc.QDoubleSpinBox_TextChanged(@ptrCast(self), param1_str);
    }

    pub fn OnTextChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QDoubleSpinBox_Connect_TextChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDoubleSpinBox_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdoublespinbox.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDoubleSpinBox_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdoublespinbox.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDoubleSpinBox_Delete(@ptrCast(self));
    }
};
