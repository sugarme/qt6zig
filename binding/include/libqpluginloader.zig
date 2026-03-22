const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qpluginloader.html
pub const qpluginloader = struct {

    /// New constructs a new QPluginLoader object.
    pub fn New() QtC.QPluginLoader {
        return qtc.QPluginLoader_new();
    }


    /// New2 constructs a new QPluginLoader object.
    pub fn New2(fileName: []const u8) QtC.QPluginLoader {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
return qtc.QPluginLoader_new2(fileName_str);
    }


    /// New3 constructs a new QPluginLoader object.
    pub fn New3(parent: ?*anyopaque) QtC.QPluginLoader {
        return qtc.QPluginLoader_new3(@ptrCast(parent));
    }


    /// New4 constructs a new QPluginLoader object.
    pub fn New4(fileName: []const u8, parent: ?*anyopaque) QtC.QPluginLoader {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
return qtc.QPluginLoader_new4(fileName_str, @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPluginLoader_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qpluginloader.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Instance(self: ?*anyopaque, ) QtC.QObject {
        return qtc.QPluginLoader_Instance(@ptrCast(self));
    }

    pub fn MetaData(self: ?*anyopaque, ) QtC.QJsonObject {
        return qtc.QPluginLoader_MetaData(@ptrCast(self));
    }

    pub fn StaticInstances() []const u8 {
        return qtc.QPluginLoader_StaticInstances();
    }

    pub fn StaticPlugins() []const u8 {
        return qtc.QPluginLoader_StaticPlugins();
    }

    pub fn Load(self: ?*anyopaque, ) bool {
        return qtc.QPluginLoader_Load(@ptrCast(self));
    }

    pub fn Unload(self: ?*anyopaque, ) bool {
        return qtc.QPluginLoader_Unload(@ptrCast(self));
    }

    pub fn IsLoaded(self: ?*anyopaque, ) bool {
        return qtc.QPluginLoader_IsLoaded(@ptrCast(self));
    }

    pub fn SetFileName(self: ?*anyopaque, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
qtc.QPluginLoader_SetFileName(@ptrCast(self), fileName_str);
    }

    pub fn FileName(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPluginLoader_FileName(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qpluginloader.FileName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn ErrorString(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPluginLoader_ErrorString(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qpluginloader.ErrorString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetLoadHints(self: ?*anyopaque, loadHints: i32) void {
        qtc.QPluginLoader_SetLoadHints(@ptrCast(self), @intCast(loadHints));
    }

    pub fn LoadHints(self: ?*anyopaque, ) i32 {
        return qtc.QPluginLoader_LoadHints(@ptrCast(self));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPluginLoader_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qpluginloader.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QPluginLoader_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qpluginloader.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPluginLoader_Delete(@ptrCast(self));
    }
};
