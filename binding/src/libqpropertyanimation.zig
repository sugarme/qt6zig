const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qpropertyanimation.html
pub const qpropertyanimation = struct {

    /// New constructs a new QPropertyAnimation object.
    pub fn New() QtC.QPropertyAnimation {
        return qtc.QPropertyAnimation_new();
    }


    /// New2 constructs a new QPropertyAnimation object.
    pub fn New2(target: ?*anyopaque, propertyName: []u8) QtC.QPropertyAnimation {
        const propertyName_str = qtc.libqt_string{
    .len = propertyName.len,
    .data = propertyName.ptr,
};
return qtc.QPropertyAnimation_new2(@ptrCast(target), propertyName_str);
    }


    /// New3 constructs a new QPropertyAnimation object.
    pub fn New3(parent: ?*anyopaque) QtC.QPropertyAnimation {
        return qtc.QPropertyAnimation_new3(@ptrCast(parent));
    }


    /// New4 constructs a new QPropertyAnimation object.
    pub fn New4(target: ?*anyopaque, propertyName: []u8, parent: ?*anyopaque) QtC.QPropertyAnimation {
        const propertyName_str = qtc.libqt_string{
    .len = propertyName.len,
    .data = propertyName.ptr,
};
return qtc.QPropertyAnimation_new4(@ptrCast(target), propertyName_str, @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPropertyAnimation_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qpropertyanimation.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn TargetObject(self: ?*anyopaque, ) QtC.QObject {
        return qtc.QPropertyAnimation_TargetObject(@ptrCast(self));
    }

    pub fn SetTargetObject(self: ?*anyopaque, target: ?*anyopaque) void {
        qtc.QPropertyAnimation_SetTargetObject(@ptrCast(self), @ptrCast(target));
    }

    pub fn BindableTargetObject(self: ?*anyopaque, ) QBindable<QObject *> {
        return qtc.QPropertyAnimation_BindableTargetObject(@ptrCast(self));
    }

    pub fn PropertyName(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QPropertyAnimation_PropertyName(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qpropertyanimation.PropertyName: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn SetPropertyName(self: ?*anyopaque, propertyName: []u8) void {
        const propertyName_str = qtc.libqt_string{
    .len = propertyName.len,
    .data = propertyName.ptr,
};
qtc.QPropertyAnimation_SetPropertyName(@ptrCast(self), propertyName_str);
    }

    pub fn BindablePropertyName(self: ?*anyopaque, ) QBindable<QByteArray> {
        return qtc.QPropertyAnimation_BindablePropertyName(@ptrCast(self));
    }

    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QPropertyAnimation_Event(@ptrCast(self), @ptrCast(event));
    }

    /// Allows for overriding the related default method
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.QPropertyAnimation_OnEvent(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.QPropertyAnimation_QBaseEvent(@ptrCast(self), @ptrCast(event));
    }

    pub fn UpdateCurrentValue(self: ?*anyopaque, value: ?*anyopaque) void {
        qtc.QPropertyAnimation_UpdateCurrentValue(@ptrCast(self), @ptrCast(value));
    }

    /// Allows for overriding the related default method
    pub fn OnUpdateCurrentValue(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QPropertyAnimation_OnUpdateCurrentValue(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUpdateCurrentValue(self: ?*anyopaque, value: ?*anyopaque) void {
        qtc.QPropertyAnimation_QBaseUpdateCurrentValue(@ptrCast(self), @ptrCast(value));
    }

    pub fn UpdateState(self: ?*anyopaque, newState: i32, oldState: i32) void {
        qtc.QPropertyAnimation_UpdateState(@ptrCast(self), @intCast(newState), @intCast(oldState));
    }

    /// Allows for overriding the related default method
    pub fn OnUpdateState(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QPropertyAnimation_OnUpdateState(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseUpdateState(self: ?*anyopaque, newState: i32, oldState: i32) void {
        qtc.QPropertyAnimation_QBaseUpdateState(@ptrCast(self), @intCast(newState), @intCast(oldState));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPropertyAnimation_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qpropertyanimation.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPropertyAnimation_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qpropertyanimation.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPropertyAnimation_Delete(@ptrCast(self));
    }
};
