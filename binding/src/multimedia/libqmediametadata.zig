const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qmediametadata.html
pub const qmediametadata = struct {

    /// New constructs a new QMediaMetaData object.
    pub fn New(param1: ?*anyopaque) QtC.QMediaMetaData {
        return qtc.QMediaMetaData_new(@ptrCast(param1));
    }


    /// New2 constructs a new QMediaMetaData object.
    pub fn New2() QtC.QMediaMetaData {
        return qtc.QMediaMetaData_new2();
    }


    pub fn Value(self: ?*anyopaque, k: QtC.QPixmapCache__Key) QtC.QVariant {
        return qtc.QMediaMetaData_Value(@ptrCast(self), @ptrCast(k));
    }

    pub fn Insert(self: ?*anyopaque, k: QtC.QPixmapCache__Key, value: ?*anyopaque) void {
        qtc.QMediaMetaData_Insert(@ptrCast(self), @ptrCast(k), @ptrCast(value));
    }

    pub fn Remove(self: ?*anyopaque, k: QtC.QPixmapCache__Key) void {
        qtc.QMediaMetaData_Remove(@ptrCast(self), @ptrCast(k));
    }

    pub fn Keys(self: ?*anyopaque, ) []const u8 {
        return qtc.QMediaMetaData_Keys(@ptrCast(self));
    }

    pub fn OperatorSubscript(self: ?*anyopaque, k: QtC.QPixmapCache__Key) QtC.QVariant {
        return qtc.QMediaMetaData_OperatorSubscript(@ptrCast(self), @ptrCast(k));
    }

    pub fn Clear(self: ?*anyopaque, ) void {
        qtc.QMediaMetaData_Clear(@ptrCast(self));
    }

    pub fn IsEmpty(self: ?*anyopaque, ) bool {
        return qtc.QMediaMetaData_IsEmpty(@ptrCast(self));
    }

    pub fn StringValue(self: ?*anyopaque, k: QtC.QPixmapCache__Key, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMediaMetaData_StringValue(@ptrCast(self), @ptrCast(k));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediametadata.StringValue: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn MetaDataKeyToString(k: QtC.QPixmapCache__Key, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMediaMetaData_MetaDataKeyToString(@ptrCast(k));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediametadata.MetaDataKeyToString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMediaMetaData_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/mediametadata.html#types
pub const enums = struct {
    pub const Key = enum {
        pub const Title: i32 = 0;
        pub const Author: i32 = 1;
        pub const Comment: i32 = 2;
        pub const Description: i32 = 3;
        pub const Genre: i32 = 4;
        pub const Date: i32 = 5;
        pub const Language: i32 = 6;
        pub const Publisher: i32 = 7;
        pub const Copyright: i32 = 8;
        pub const Url: i32 = 9;
        pub const Duration: i32 = 10;
        pub const MediaType: i32 = 11;
        pub const FileFormat: i32 = 12;
        pub const AudioBitRate: i32 = 13;
        pub const AudioCodec: i32 = 14;
        pub const VideoBitRate: i32 = 15;
        pub const VideoCodec: i32 = 16;
        pub const VideoFrameRate: i32 = 17;
        pub const AlbumTitle: i32 = 18;
        pub const AlbumArtist: i32 = 19;
        pub const ContributingArtist: i32 = 20;
        pub const TrackNumber: i32 = 21;
        pub const Composer: i32 = 22;
        pub const LeadPerformer: i32 = 23;
        pub const ThumbnailImage: i32 = 24;
        pub const CoverArtImage: i32 = 25;
        pub const Orientation: i32 = 26;
        pub const Resolution: i32 = 27;
        pub const HasHdrContent: i32 = 28;
    };

};
