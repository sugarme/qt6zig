const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qmimedatabase.html
pub const qmimedatabase = struct {

    /// New constructs a new QMimeDatabase object.
    pub fn New() QtC.QMimeDatabase {
        return qtc.QMimeDatabase_new();
    }


    pub fn MimeTypeForName(self: ?*anyopaque, nameOrAlias: []const u8) QtC.QMimeType {
        const nameOrAlias_str = qtc.libqt_string{
    .len = nameOrAlias.len,
    .data = nameOrAlias.ptr,
};
return qtc.QMimeDatabase_MimeTypeForName(@ptrCast(self), nameOrAlias_str);
    }

    pub fn MimeTypeForFile(self: ?*anyopaque, fileName: []const u8) QtC.QMimeType {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
return qtc.QMimeDatabase_MimeTypeForFile(@ptrCast(self), fileName_str);
    }

    pub fn MimeTypeForFile2(self: ?*anyopaque, fileInfo: ?*anyopaque) QtC.QMimeType {
        return qtc.QMimeDatabase_MimeTypeForFile2(@ptrCast(self), @ptrCast(fileInfo));
    }

    pub fn MimeTypesForFileName(self: ?*anyopaque, fileName: []const u8) []const u8 {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
return qtc.QMimeDatabase_MimeTypesForFileName(@ptrCast(self), fileName_str);
    }

    pub fn MimeTypeForData(self: ?*anyopaque, data: []u8) QtC.QMimeType {
        const data_str = qtc.libqt_string{
    .len = data.len,
    .data = data.ptr,
};
return qtc.QMimeDatabase_MimeTypeForData(@ptrCast(self), data_str);
    }

    pub fn MimeTypeForData2(self: ?*anyopaque, device: ?*anyopaque) QtC.QMimeType {
        return qtc.QMimeDatabase_MimeTypeForData2(@ptrCast(self), @ptrCast(device));
    }

    pub fn MimeTypeForUrl(self: ?*anyopaque, url: ?*anyopaque) QtC.QMimeType {
        return qtc.QMimeDatabase_MimeTypeForUrl(@ptrCast(self), @ptrCast(url));
    }

    pub fn MimeTypeForFileNameAndData(self: ?*anyopaque, fileName: []const u8, device: ?*anyopaque) QtC.QMimeType {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
return qtc.QMimeDatabase_MimeTypeForFileNameAndData(@ptrCast(self), fileName_str, @ptrCast(device));
    }

    pub fn MimeTypeForFileNameAndData2(self: ?*anyopaque, fileName: []const u8, data: []u8) QtC.QMimeType {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
const data_str = qtc.libqt_string{
    .len = data.len,
    .data = data.ptr,
};
return qtc.QMimeDatabase_MimeTypeForFileNameAndData2(@ptrCast(self), fileName_str, data_str);
    }

    pub fn SuffixForFileName(self: ?*anyopaque, fileName: []const u8, allocator: std.mem.Allocator) []const u8 {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
const _str = qtc.QMimeDatabase_SuffixForFileName(@ptrCast(self), fileName_str);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmimedatabase.SuffixForFileName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn AllMimeTypes(self: ?*anyopaque, ) []const u8 {
        return qtc.QMimeDatabase_AllMimeTypes(@ptrCast(self));
    }

    pub fn MimeTypeForFile22(self: ?*anyopaque, fileName: []const u8, mode: i32) QtC.QMimeType {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
return qtc.QMimeDatabase_MimeTypeForFile22(@ptrCast(self), fileName_str, @intCast(mode));
    }

    pub fn MimeTypeForFile23(self: ?*anyopaque, fileInfo: ?*anyopaque, mode: i32) QtC.QMimeType {
        return qtc.QMimeDatabase_MimeTypeForFile23(@ptrCast(self), @ptrCast(fileInfo), @intCast(mode));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMimeDatabase_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/mimedatabase.html#types
pub const enums = struct {
    pub const MatchMode = enum {
        pub const MatchDefault: i32 = 0;
        pub const MatchExtension: i32 = 1;
        pub const MatchContent: i32 = 2;
    };

};
