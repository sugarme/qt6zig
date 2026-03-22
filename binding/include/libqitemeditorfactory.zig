const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qitemeditorcreatorbase.html
pub const qitemeditorcreatorbase = struct {

    /// New constructs a new QItemEditorCreatorBase object.
    pub fn New() QtC.QItemEditorCreatorBase {
        return qtc.QItemEditorCreatorBase_new();
    }


    /// New2 constructs a new QItemEditorCreatorBase object.
    pub fn New2(param1: ?*anyopaque) QtC.QItemEditorCreatorBase {
        return qtc.QItemEditorCreatorBase_new2(@ptrCast(param1));
    }


    pub fn CreateWidget(self: ?*anyopaque, parent: ?*anyopaque) QtC.QWidget {
        return qtc.QItemEditorCreatorBase_CreateWidget(@ptrCast(self), @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnCreateWidget(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QWidget) void {
        qtc.QItemEditorCreatorBase_OnCreateWidget(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCreateWidget(self: ?*anyopaque, parent: ?*anyopaque) QtC.QWidget {
        return qtc.QItemEditorCreatorBase_QBaseCreateWidget(@ptrCast(self), @ptrCast(parent));
    }

    pub fn ValuePropertyName(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QItemEditorCreatorBase_ValuePropertyName(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qitemeditorcreatorbase.ValuePropertyName: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    /// Allows for overriding the related default method
    pub fn OnValuePropertyName(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) [*:0]u8) void {
        qtc.QItemEditorCreatorBase_OnValuePropertyName(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseValuePropertyName(self: ?*anyopaque, , allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QItemEditorCreatorBase_QBaseValuePropertyName(@ptrCast(self));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qitemeditorcreatorbase.ValuePropertyName: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn OperatorAssign(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QItemEditorCreatorBase_OperatorAssign(@ptrCast(self), @ptrCast(param1));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QItemEditorCreatorBase_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qitemeditorfactory.html
pub const qitemeditorfactory = struct {

    /// New constructs a new QItemEditorFactory object.
    pub fn New() QtC.QItemEditorFactory {
        return qtc.QItemEditorFactory_new();
    }


    /// New2 constructs a new QItemEditorFactory object.
    pub fn New2(param1: ?*anyopaque) QtC.QItemEditorFactory {
        return qtc.QItemEditorFactory_new2(@ptrCast(param1));
    }


    pub fn CreateEditor(self: ?*anyopaque, userType: i32, parent: ?*anyopaque) QtC.QWidget {
        return qtc.QItemEditorFactory_CreateEditor(@ptrCast(self), userType, @ptrCast(parent));
    }

    /// Allows for overriding the related default method
    pub fn OnCreateEditor(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, ?*anyopaque) callconv(.c) QtC.QWidget) void {
        qtc.QItemEditorFactory_OnCreateEditor(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseCreateEditor(self: ?*anyopaque, userType: i32, parent: ?*anyopaque) QtC.QWidget {
        return qtc.QItemEditorFactory_QBaseCreateEditor(@ptrCast(self), userType, @ptrCast(parent));
    }

    pub fn ValuePropertyName(self: ?*anyopaque, userType: i32, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QItemEditorFactory_ValuePropertyName(@ptrCast(self), userType);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qitemeditorfactory.ValuePropertyName: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    /// Allows for overriding the related default method
    pub fn OnValuePropertyName(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) [*:0]u8) void {
        qtc.QItemEditorFactory_OnValuePropertyName(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseValuePropertyName(self: ?*anyopaque, userType: i32, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QItemEditorFactory_QBaseValuePropertyName(@ptrCast(self), userType);
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qitemeditorfactory.ValuePropertyName: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn RegisterEditor(self: ?*anyopaque, userType: i32, creator: ?*anyopaque) void {
        qtc.QItemEditorFactory_RegisterEditor(@ptrCast(self), userType, @ptrCast(creator));
    }

    pub fn DefaultFactory() QtC.QItemEditorFactory {
        return qtc.QItemEditorFactory_DefaultFactory();
    }

    pub fn SetDefaultFactory(factory: ?*anyopaque) void {
        qtc.QItemEditorFactory_SetDefaultFactory(@ptrCast(factory));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QItemEditorFactory_Delete(@ptrCast(self));
    }
};
