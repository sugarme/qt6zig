const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qdatawidgetmapper.html
pub const qdatawidgetmapper = struct {

    /// New constructs a new QDataWidgetMapper object.
    pub fn New() QtC.QDataWidgetMapper {
        return qtc.QDataWidgetMapper_new();
    }


    /// New2 constructs a new QDataWidgetMapper object.
    pub fn New2(parent: ?*anyopaque) QtC.QDataWidgetMapper {
        return qtc.QDataWidgetMapper_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDataWidgetMapper_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatawidgetmapper.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetModel(self: ?*anyopaque, model: ?*anyopaque) void {
        qtc.QDataWidgetMapper_SetModel(@ptrCast(self), @ptrCast(model));
    }

    pub fn Model(self: ?*anyopaque, ) QtC.QAbstractItemModel {
        return qtc.QDataWidgetMapper_Model(@ptrCast(self));
    }

    pub fn SetItemDelegate(self: ?*anyopaque, delegate: ?*anyopaque) void {
        qtc.QDataWidgetMapper_SetItemDelegate(@ptrCast(self), @ptrCast(delegate));
    }

    pub fn ItemDelegate(self: ?*anyopaque, ) QtC.QAbstractItemDelegate {
        return qtc.QDataWidgetMapper_ItemDelegate(@ptrCast(self));
    }

    pub fn SetRootIndex(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QDataWidgetMapper_SetRootIndex(@ptrCast(self), @ptrCast(index));
    }

    pub fn RootIndex(self: ?*anyopaque, ) QtC.QModelIndex {
        return qtc.QDataWidgetMapper_RootIndex(@ptrCast(self));
    }

    pub fn SetOrientation(self: ?*anyopaque, aOrientation: i32) void {
        qtc.QDataWidgetMapper_SetOrientation(@ptrCast(self), @intCast(aOrientation));
    }

    pub fn Orientation(self: ?*anyopaque, ) i32 {
        return qtc.QDataWidgetMapper_Orientation(@ptrCast(self));
    }

    pub fn SetSubmitPolicy(self: ?*anyopaque, policy: i32) void {
        qtc.QDataWidgetMapper_SetSubmitPolicy(@ptrCast(self), @intCast(policy));
    }

    pub fn SubmitPolicy(self: ?*anyopaque, ) i32 {
        return qtc.QDataWidgetMapper_SubmitPolicy(@ptrCast(self));
    }

    pub fn AddMapping(self: ?*anyopaque, widget: ?*anyopaque, section: i32) void {
        qtc.QDataWidgetMapper_AddMapping(@ptrCast(self), @ptrCast(widget), section);
    }

    pub fn AddMapping2(self: ?*anyopaque, widget: ?*anyopaque, section: i32, propertyName: []u8) void {
        const propertyName_str = qtc.libqt_string{
    .len = propertyName.len,
    .data = propertyName.ptr,
};
qtc.QDataWidgetMapper_AddMapping2(@ptrCast(self), @ptrCast(widget), section, propertyName_str);
    }

    pub fn RemoveMapping(self: ?*anyopaque, widget: ?*anyopaque) void {
        qtc.QDataWidgetMapper_RemoveMapping(@ptrCast(self), @ptrCast(widget));
    }

    pub fn MappedSection(self: ?*anyopaque, widget: ?*anyopaque) i32 {
        return qtc.QDataWidgetMapper_MappedSection(@ptrCast(self), @ptrCast(widget));
    }

    pub fn MappedPropertyName(self: ?*anyopaque, widget: ?*anyopaque, allocator: std.mem.Allocator) []u8 {
        const _bytearray: qtc.libqt_string = qtc.QDataWidgetMapper_MappedPropertyName(@ptrCast(self), @ptrCast(widget));
defer qtc.libqt_string_free(&_bytearray);
const _ret = allocator.alloc(u8, _bytearray.len) catch @panic("qdatawidgetmapper.MappedPropertyName: Memory allocation failed");
@memcpy(_ret, _bytearray.data[0.._bytearray.len]);
return  _ret;
    }

    pub fn MappedWidgetAt(self: ?*anyopaque, section: i32) QtC.QWidget {
        return qtc.QDataWidgetMapper_MappedWidgetAt(@ptrCast(self), section);
    }

    pub fn ClearMapping(self: ?*anyopaque, ) void {
        qtc.QDataWidgetMapper_ClearMapping(@ptrCast(self));
    }

    pub fn CurrentIndex(self: ?*anyopaque, ) i32 {
        return qtc.QDataWidgetMapper_CurrentIndex(@ptrCast(self));
    }

    pub fn Revert(self: ?*anyopaque, ) void {
        qtc.QDataWidgetMapper_Revert(@ptrCast(self));
    }

    pub fn Submit(self: ?*anyopaque, ) bool {
        return qtc.QDataWidgetMapper_Submit(@ptrCast(self));
    }

    pub fn ToFirst(self: ?*anyopaque, ) void {
        qtc.QDataWidgetMapper_ToFirst(@ptrCast(self));
    }

    pub fn ToLast(self: ?*anyopaque, ) void {
        qtc.QDataWidgetMapper_ToLast(@ptrCast(self));
    }

    pub fn ToNext(self: ?*anyopaque, ) void {
        qtc.QDataWidgetMapper_ToNext(@ptrCast(self));
    }

    pub fn ToPrevious(self: ?*anyopaque, ) void {
        qtc.QDataWidgetMapper_ToPrevious(@ptrCast(self));
    }

    pub fn SetCurrentIndex(self: ?*anyopaque, index: i32) void {
        qtc.QDataWidgetMapper_SetCurrentIndex(@ptrCast(self), index);
    }

    /// Allows for overriding the related default method
    pub fn OnSetCurrentIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QDataWidgetMapper_OnSetCurrentIndex(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    /// Base class method implementation
    pub fn QBaseSetCurrentIndex(self: ?*anyopaque, index: i32) void {
        qtc.QDataWidgetMapper_QBaseSetCurrentIndex(@ptrCast(self), index);
    }

    pub fn SetCurrentModelIndex(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.QDataWidgetMapper_SetCurrentModelIndex(@ptrCast(self), @ptrCast(index));
    }

    pub fn CurrentIndexChanged(self: ?*anyopaque, index: i32) void {
        qtc.QDataWidgetMapper_CurrentIndexChanged(@ptrCast(self), index);
    }

    pub fn OnCurrentIndexChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QDataWidgetMapper_Connect_CurrentIndexChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDataWidgetMapper_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatawidgetmapper.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QDataWidgetMapper_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qdatawidgetmapper.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QDataWidgetMapper_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/datawidgetmapper.html#types
pub const enums = struct {
    pub const SubmitPolicy = enum {
        pub const AutoSubmit: i32 = 0;
        pub const ManualSubmit: i32 = 1;
    };

};
