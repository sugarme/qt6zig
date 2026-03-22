const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qmediaformat.html
pub const qmediaformat = struct {

    /// New constructs a new QMediaFormat object.
    pub fn New() QtC.QMediaFormat {
        return qtc.QMediaFormat_new();
    }


    /// New2 constructs a new QMediaFormat object.
    pub fn New2(other: ?*anyopaque) QtC.QMediaFormat {
        return qtc.QMediaFormat_new2(@ptrCast(other));
    }


    /// New3 constructs a new QMediaFormat object.
    pub fn New3(format: i32) QtC.QMediaFormat {
        return qtc.QMediaFormat_new3(@intCast(format));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMediaFormat_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMediaFormat_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn FileFormat(self: ?*anyopaque, ) i32 {
        return qtc.QMediaFormat_FileFormat(@ptrCast(self));
    }

    pub fn SetFileFormat(self: ?*anyopaque, f: i32) void {
        qtc.QMediaFormat_SetFileFormat(@ptrCast(self), @intCast(f));
    }

    pub fn SetVideoCodec(self: ?*anyopaque, codec: i32) void {
        qtc.QMediaFormat_SetVideoCodec(@ptrCast(self), @intCast(codec));
    }

    pub fn VideoCodec(self: ?*anyopaque, ) i32 {
        return qtc.QMediaFormat_VideoCodec(@ptrCast(self));
    }

    pub fn SetAudioCodec(self: ?*anyopaque, codec: i32) void {
        qtc.QMediaFormat_SetAudioCodec(@ptrCast(self), @intCast(codec));
    }

    pub fn AudioCodec(self: ?*anyopaque, ) i32 {
        return qtc.QMediaFormat_AudioCodec(@ptrCast(self));
    }

    pub fn IsSupported(self: ?*anyopaque, mode: i32) bool {
        return qtc.QMediaFormat_IsSupported(@ptrCast(self), @intCast(mode));
    }

    pub fn MimeType(self: ?*anyopaque, ) QtC.QMimeType {
        return qtc.QMediaFormat_MimeType(@ptrCast(self));
    }

    pub fn SupportedFileFormats(self: ?*anyopaque, m: i32) []const u8 {
        return qtc.QMediaFormat_SupportedFileFormats(@ptrCast(self), @intCast(m));
    }

    pub fn SupportedVideoCodecs(self: ?*anyopaque, m: i32) []const u8 {
        return qtc.QMediaFormat_SupportedVideoCodecs(@ptrCast(self), @intCast(m));
    }

    pub fn SupportedAudioCodecs(self: ?*anyopaque, m: i32) []const u8 {
        return qtc.QMediaFormat_SupportedAudioCodecs(@ptrCast(self), @intCast(m));
    }

    pub fn FileFormatName(fileFormat: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMediaFormat_FileFormatName(@intCast(fileFormat));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediaformat.FileFormatName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn AudioCodecName(codec: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMediaFormat_AudioCodecName(@intCast(codec));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediaformat.AudioCodecName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn VideoCodecName(codec: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMediaFormat_VideoCodecName(@intCast(codec));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediaformat.VideoCodecName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn FileFormatDescription(fileFormat: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMediaFormat_FileFormatDescription(@intCast(fileFormat));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediaformat.FileFormatDescription: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn AudioCodecDescription(codec: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMediaFormat_AudioCodecDescription(@intCast(codec));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediaformat.AudioCodecDescription: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn VideoCodecDescription(codec: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMediaFormat_VideoCodecDescription(@intCast(codec));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediaformat.VideoCodecDescription: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn OperatorEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QMediaFormat_OperatorEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorNotEqual(self: ?*anyopaque, other: ?*anyopaque) bool {
        return qtc.QMediaFormat_OperatorNotEqual(@ptrCast(self), @ptrCast(other));
    }

    pub fn ResolveForEncoding(self: ?*anyopaque, flags: i32) void {
        qtc.QMediaFormat_ResolveForEncoding(@ptrCast(self), @intCast(flags));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMediaFormat_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/mediaformat.html#types
pub const enums = struct {
    pub const FileFormat = enum {
        pub const UnspecifiedFormat: i32 = -1;
        pub const WMV: i32 = 0;
        pub const AVI: i32 = 1;
        pub const Matroska: i32 = 2;
        pub const MPEG4: i32 = 3;
        pub const Ogg: i32 = 4;
        pub const QuickTime: i32 = 5;
        pub const WebM: i32 = 6;
        pub const Mpeg4Audio: i32 = 7;
        pub const AAC: i32 = 8;
        pub const WMA: i32 = 9;
        pub const MP3: i32 = 10;
        pub const FLAC: i32 = 11;
        pub const Wave: i32 = 12;
        pub const LastFileFormat: i32 = 12;
    };

    pub const AudioCodec = enum {
        pub const Unspecified: i32 = -1;
        pub const MP3: i32 = 0;
        pub const AAC: i32 = 1;
        pub const AC3: i32 = 2;
        pub const EAC3: i32 = 3;
        pub const FLAC: i32 = 4;
        pub const DolbyTrueHD: i32 = 5;
        pub const Opus: i32 = 6;
        pub const Vorbis: i32 = 7;
        pub const Wave: i32 = 8;
        pub const WMA: i32 = 9;
        pub const ALAC: i32 = 10;
        pub const LastAudioCodec: i32 = 10;
    };

    pub const VideoCodec = enum {
        pub const Unspecified: i32 = -1;
        pub const MPEG1: i32 = 0;
        pub const MPEG2: i32 = 1;
        pub const MPEG4: i32 = 2;
        pub const H264: i32 = 3;
        pub const H265: i32 = 4;
        pub const VP8: i32 = 5;
        pub const VP9: i32 = 6;
        pub const AV1: i32 = 7;
        pub const Theora: i32 = 8;
        pub const WMV: i32 = 9;
        pub const MotionJPEG: i32 = 10;
        pub const LastVideoCodec: i32 = 10;
    };

    pub const ConversionMode = enum {
        pub const Encode: i32 = 0;
        pub const Decode: i32 = 1;
    };

    pub const ResolveFlags = enum {
        pub const NoFlags: i32 = 0;
        pub const RequiresVideo: i32 = 1;
    };

};
