const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qlibraryinfo.html
pub const qlibraryinfo = struct {

    /// New constructs a new QLibraryInfo object.
    pub fn New(other: ?*anyopaque) QtC.QLibraryInfo {
        return qtc.QLibraryInfo_new(@ptrCast(other));
    }


    /// New2 constructs a new QLibraryInfo object.
    pub fn New2(other: ?*anyopaque) QtC.QLibraryInfo {
        return qtc.QLibraryInfo_new2(@ptrCast(other));
    }


    /// New3 constructs a new QLibraryInfo object.
    pub fn New3(param1: ?*anyopaque) QtC.QLibraryInfo {
        return qtc.QLibraryInfo_new3(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QLibraryInfo_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QLibraryInfo_MoveAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn Build() []const u8 {
        const _ret = qtc.QLibraryInfo_Build();
return  std.mem.span(_ret);
    }

    pub fn IsDebugBuild() bool {
        return qtc.QLibraryInfo_IsDebugBuild();
    }

    pub fn IsSharedBuild() bool {
        return qtc.QLibraryInfo_IsSharedBuild();
    }

    pub fn Version() QtC.QVersionNumber {
        return qtc.QLibraryInfo_Version();
    }

    pub fn Path(p: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLibraryInfo_Path(@intCast(p));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlibraryinfo.Path: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Paths(p: i32) []const u8 {
        return qtc.QLibraryInfo_Paths(@intCast(p));
    }

    pub fn Location(location: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QLibraryInfo_Location(@intCast(location));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qlibraryinfo.Location: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn PlatformPluginArguments(platformName: []const u8) []const u8 {
        const platformName_str = qtc.libqt_string{
    .len = platformName.len,
    .data = platformName.ptr,
};
return qtc.QLibraryInfo_PlatformPluginArguments(platformName_str);
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QLibraryInfo_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/libraryinfo.html#types
pub const enums = struct {
    pub const LibraryPath = enum {
        pub const PrefixPath: i32 = 0;
        pub const DocumentationPath: i32 = 1;
        pub const HeadersPath: i32 = 2;
        pub const LibrariesPath: i32 = 3;
        pub const LibraryExecutablesPath: i32 = 4;
        pub const BinariesPath: i32 = 5;
        pub const PluginsPath: i32 = 6;
        pub const QmlImportsPath: i32 = 7;
        pub const Qml2ImportsPath: i32 = 7;
        pub const ArchDataPath: i32 = 8;
        pub const DataPath: i32 = 9;
        pub const TranslationsPath: i32 = 10;
        pub const ExamplesPath: i32 = 11;
        pub const TestsPath: i32 = 12;
        pub const SettingsPath: i32 = 100;
    };

};
