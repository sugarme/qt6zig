const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qstandardpaths.html
pub const qstandardpaths = struct {

    /// New constructs a new QStandardPaths object.
    pub fn New(other: ?*anyopaque) QtC.QStandardPaths {
        return qtc.QStandardPaths_new(@ptrCast(other));
    }


    /// New2 constructs a new QStandardPaths object.
    pub fn New2(param1: ?*anyopaque) QtC.QStandardPaths {
        return qtc.QStandardPaths_new2(@ptrCast(param1));
    }

    /// CopyAssign shallow copies `other` into `self`.
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QStandardPaths_CopyAssign(@ptrCast(self), @ptrCast(other));
    }


    pub fn WritableLocation(typeVal: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStandardPaths_WritableLocation(@intCast(typeVal));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstandardpaths.WritableLocation: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn StandardLocations(typeVal: i32) []const u8 {
        return qtc.QStandardPaths_StandardLocations(@intCast(typeVal));
    }

    pub fn Locate(typeVal: i32, fileName: []const u8, allocator: std.mem.Allocator) []const u8 {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
const _str = qtc.QStandardPaths_Locate(@intCast(typeVal), fileName_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstandardpaths.Locate: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn LocateAll(typeVal: i32, fileName: []const u8) []const u8 {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
return qtc.QStandardPaths_LocateAll(@intCast(typeVal), fileName_str);
    }

    pub fn DisplayName(typeVal: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QStandardPaths_DisplayName(@intCast(typeVal));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstandardpaths.DisplayName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn FindExecutable(executableName: []const u8, allocator: std.mem.Allocator) []const u8 {
        const executableName_str = qtc.libqt_string{
    .len = executableName.len,
    .data = executableName.ptr,
};
const _str = qtc.QStandardPaths_FindExecutable(executableName_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstandardpaths.FindExecutable: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetTestModeEnabled(testMode: bool) void {
        qtc.QStandardPaths_SetTestModeEnabled(testMode);
    }

    pub fn IsTestModeEnabled() bool {
        return qtc.QStandardPaths_IsTestModeEnabled();
    }

    pub fn Locate3(typeVal: i32, fileName: []const u8, options: i32, allocator: std.mem.Allocator) []const u8 {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
const _str = qtc.QStandardPaths_Locate3(@intCast(typeVal), fileName_str, @intCast(options));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstandardpaths.Locate3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn LocateAll3(typeVal: i32, fileName: []const u8, options: i32) []const u8 {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
return qtc.QStandardPaths_LocateAll3(@intCast(typeVal), fileName_str, @intCast(options));
    }

    pub fn FindExecutable2(executableName: []const u8, paths: []const u8, allocator: std.mem.Allocator) []const u8 {
        const executableName_str = qtc.libqt_string{
    .len = executableName.len,
    .data = executableName.ptr,
};
const _str = qtc.QStandardPaths_FindExecutable2(executableName_str, @ptrCast(paths));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qstandardpaths.FindExecutable2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }
};

/// https://doc.qt.io/qt-6/standardpaths.html#types
pub const enums = struct {
    pub const StandardLocation = enum {
        pub const DesktopLocation: i32 = 0;
        pub const DocumentsLocation: i32 = 1;
        pub const FontsLocation: i32 = 2;
        pub const ApplicationsLocation: i32 = 3;
        pub const MusicLocation: i32 = 4;
        pub const MoviesLocation: i32 = 5;
        pub const PicturesLocation: i32 = 6;
        pub const TempLocation: i32 = 7;
        pub const HomeLocation: i32 = 8;
        pub const AppLocalDataLocation: i32 = 9;
        pub const CacheLocation: i32 = 10;
        pub const GenericDataLocation: i32 = 11;
        pub const RuntimeLocation: i32 = 12;
        pub const ConfigLocation: i32 = 13;
        pub const DownloadLocation: i32 = 14;
        pub const GenericCacheLocation: i32 = 15;
        pub const GenericConfigLocation: i32 = 16;
        pub const AppDataLocation: i32 = 17;
        pub const AppConfigLocation: i32 = 18;
        pub const PublicShareLocation: i32 = 19;
        pub const TemplatesLocation: i32 = 20;
        pub const StateLocation: i32 = 21;
        pub const GenericStateLocation: i32 = 22;
    };

    pub const LocateOption = enum {
        pub const LocateFile: i32 = 0;
        pub const LocateDirectory: i32 = 1;
    };

};
