const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qmediarecorder.html
pub const qmediarecorder = struct {

    /// New constructs a new QMediaRecorder object.
    pub fn New() QtC.QMediaRecorder {
        return qtc.QMediaRecorder_new();
    }


    /// New2 constructs a new QMediaRecorder object.
    pub fn New2(parent: ?*anyopaque) QtC.QMediaRecorder {
        return qtc.QMediaRecorder_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMediaRecorder_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediarecorder.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn IsAvailable(self: ?*anyopaque, ) bool {
        return qtc.QMediaRecorder_IsAvailable(@ptrCast(self));
    }

    pub fn OutputLocation(self: ?*anyopaque, ) QtC.QUrl {
        return qtc.QMediaRecorder_OutputLocation(@ptrCast(self));
    }

    pub fn SetOutputLocation(self: ?*anyopaque, location: ?*anyopaque) void {
        qtc.QMediaRecorder_SetOutputLocation(@ptrCast(self), @ptrCast(location));
    }

    pub fn SetOutputDevice(self: ?*anyopaque, device: ?*anyopaque) void {
        qtc.QMediaRecorder_SetOutputDevice(@ptrCast(self), @ptrCast(device));
    }

    pub fn OutputDevice(self: ?*anyopaque, ) QtC.QIODevice {
        return qtc.QMediaRecorder_OutputDevice(@ptrCast(self));
    }

    pub fn ActualLocation(self: ?*anyopaque, ) QtC.QUrl {
        return qtc.QMediaRecorder_ActualLocation(@ptrCast(self));
    }

    pub fn RecorderState(self: ?*anyopaque, ) i32 {
        return qtc.QMediaRecorder_RecorderState(@ptrCast(self));
    }

    pub fn Error(self: ?*anyopaque, ) i32 {
        return qtc.QMediaRecorder_Error(@ptrCast(self));
    }

    pub fn ErrorString(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMediaRecorder_ErrorString(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediarecorder.ErrorString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Duration(self: ?*anyopaque, ) i64 {
        return qtc.QMediaRecorder_Duration(@ptrCast(self));
    }

    pub fn MediaFormat(self: ?*anyopaque, ) QtC.QMediaFormat {
        return qtc.QMediaRecorder_MediaFormat(@ptrCast(self));
    }

    pub fn SetMediaFormat(self: ?*anyopaque, format: ?*anyopaque) void {
        qtc.QMediaRecorder_SetMediaFormat(@ptrCast(self), @ptrCast(format));
    }

    pub fn EncodingMode(self: ?*anyopaque, ) i32 {
        return qtc.QMediaRecorder_EncodingMode(@ptrCast(self));
    }

    pub fn SetEncodingMode(self: ?*anyopaque, encodingMode: i32) void {
        qtc.QMediaRecorder_SetEncodingMode(@ptrCast(self), @intCast(encodingMode));
    }

    pub fn Quality(self: ?*anyopaque, ) i32 {
        return qtc.QMediaRecorder_Quality(@ptrCast(self));
    }

    pub fn SetQuality(self: ?*anyopaque, quality: i32) void {
        qtc.QMediaRecorder_SetQuality(@ptrCast(self), @intCast(quality));
    }

    pub fn VideoResolution(self: ?*anyopaque, ) QtC.QSize {
        return qtc.QMediaRecorder_VideoResolution(@ptrCast(self));
    }

    pub fn SetVideoResolution(self: ?*anyopaque, videoResolution: ?*anyopaque) void {
        qtc.QMediaRecorder_SetVideoResolution(@ptrCast(self), @ptrCast(videoResolution));
    }

    pub fn SetVideoResolution2(self: ?*anyopaque, width: i32, height: i32) void {
        qtc.QMediaRecorder_SetVideoResolution2(@ptrCast(self), width, height);
    }

    pub fn VideoFrameRate(self: ?*anyopaque, ) f64 {
        return qtc.QMediaRecorder_VideoFrameRate(@ptrCast(self));
    }

    pub fn SetVideoFrameRate(self: ?*anyopaque, frameRate: f64) void {
        qtc.QMediaRecorder_SetVideoFrameRate(@ptrCast(self), frameRate);
    }

    pub fn VideoBitRate(self: ?*anyopaque, ) i32 {
        return qtc.QMediaRecorder_VideoBitRate(@ptrCast(self));
    }

    pub fn SetVideoBitRate(self: ?*anyopaque, bitRate: i32) void {
        qtc.QMediaRecorder_SetVideoBitRate(@ptrCast(self), bitRate);
    }

    pub fn AudioBitRate(self: ?*anyopaque, ) i32 {
        return qtc.QMediaRecorder_AudioBitRate(@ptrCast(self));
    }

    pub fn SetAudioBitRate(self: ?*anyopaque, bitRate: i32) void {
        qtc.QMediaRecorder_SetAudioBitRate(@ptrCast(self), bitRate);
    }

    pub fn AudioChannelCount(self: ?*anyopaque, ) i32 {
        return qtc.QMediaRecorder_AudioChannelCount(@ptrCast(self));
    }

    pub fn SetAudioChannelCount(self: ?*anyopaque, channels: i32) void {
        qtc.QMediaRecorder_SetAudioChannelCount(@ptrCast(self), channels);
    }

    pub fn AudioSampleRate(self: ?*anyopaque, ) i32 {
        return qtc.QMediaRecorder_AudioSampleRate(@ptrCast(self));
    }

    pub fn SetAudioSampleRate(self: ?*anyopaque, sampleRate: i32) void {
        qtc.QMediaRecorder_SetAudioSampleRate(@ptrCast(self), sampleRate);
    }

    pub fn MetaData(self: ?*anyopaque, ) QtC.QMediaMetaData {
        return qtc.QMediaRecorder_MetaData(@ptrCast(self));
    }

    pub fn SetMetaData(self: ?*anyopaque, metaData: ?*anyopaque) void {
        qtc.QMediaRecorder_SetMetaData(@ptrCast(self), @ptrCast(metaData));
    }

    pub fn AddMetaData(self: ?*anyopaque, metaData: ?*anyopaque) void {
        qtc.QMediaRecorder_AddMetaData(@ptrCast(self), @ptrCast(metaData));
    }

    pub fn AutoStop(self: ?*anyopaque, ) bool {
        return qtc.QMediaRecorder_AutoStop(@ptrCast(self));
    }

    pub fn SetAutoStop(self: ?*anyopaque, autoStop: bool) void {
        qtc.QMediaRecorder_SetAutoStop(@ptrCast(self), autoStop);
    }

    pub fn CaptureSession(self: ?*anyopaque, ) QtC.QMediaCaptureSession {
        return qtc.QMediaRecorder_CaptureSession(@ptrCast(self));
    }

    pub fn Record(self: ?*anyopaque, ) void {
        qtc.QMediaRecorder_Record(@ptrCast(self));
    }

    pub fn Pause(self: ?*anyopaque, ) void {
        qtc.QMediaRecorder_Pause(@ptrCast(self));
    }

    pub fn Stop(self: ?*anyopaque, ) void {
        qtc.QMediaRecorder_Stop(@ptrCast(self));
    }

    pub fn RecorderStateChanged(self: ?*anyopaque, state: i32) void {
        qtc.QMediaRecorder_RecorderStateChanged(@ptrCast(self), @intCast(state));
    }

    pub fn OnRecorderStateChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_RecorderStateChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn DurationChanged(self: ?*anyopaque, duration: i64) void {
        qtc.QMediaRecorder_DurationChanged(@ptrCast(self), duration);
    }

    pub fn OnDurationChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_DurationChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ActualLocationChanged(self: ?*anyopaque, location: ?*anyopaque) void {
        qtc.QMediaRecorder_ActualLocationChanged(@ptrCast(self), @ptrCast(location));
    }

    pub fn OnActualLocationChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_ActualLocationChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn EncoderSettingsChanged(self: ?*anyopaque, ) void {
        qtc.QMediaRecorder_EncoderSettingsChanged(@ptrCast(self));
    }

    pub fn OnEncoderSettingsChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_EncoderSettingsChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ErrorOccurred(self: ?*anyopaque, errorVal: i32, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
    .len = errorString.len,
    .data = errorString.ptr,
};
qtc.QMediaRecorder_ErrorOccurred(@ptrCast(self), @intCast(errorVal), errorString_str);
    }

    pub fn OnErrorOccurred(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_ErrorOccurred(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ErrorChanged(self: ?*anyopaque, ) void {
        qtc.QMediaRecorder_ErrorChanged(@ptrCast(self));
    }

    pub fn OnErrorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_ErrorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn MetaDataChanged(self: ?*anyopaque, ) void {
        qtc.QMediaRecorder_MetaDataChanged(@ptrCast(self));
    }

    pub fn OnMetaDataChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_MetaDataChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn MediaFormatChanged(self: ?*anyopaque, ) void {
        qtc.QMediaRecorder_MediaFormatChanged(@ptrCast(self));
    }

    pub fn OnMediaFormatChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_MediaFormatChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn EncodingModeChanged(self: ?*anyopaque, ) void {
        qtc.QMediaRecorder_EncodingModeChanged(@ptrCast(self));
    }

    pub fn OnEncodingModeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_EncodingModeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn QualityChanged(self: ?*anyopaque, ) void {
        qtc.QMediaRecorder_QualityChanged(@ptrCast(self));
    }

    pub fn OnQualityChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_QualityChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn VideoResolutionChanged(self: ?*anyopaque, ) void {
        qtc.QMediaRecorder_VideoResolutionChanged(@ptrCast(self));
    }

    pub fn OnVideoResolutionChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_VideoResolutionChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn VideoFrameRateChanged(self: ?*anyopaque, ) void {
        qtc.QMediaRecorder_VideoFrameRateChanged(@ptrCast(self));
    }

    pub fn OnVideoFrameRateChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_VideoFrameRateChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn VideoBitRateChanged(self: ?*anyopaque, ) void {
        qtc.QMediaRecorder_VideoBitRateChanged(@ptrCast(self));
    }

    pub fn OnVideoBitRateChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_VideoBitRateChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn AudioBitRateChanged(self: ?*anyopaque, ) void {
        qtc.QMediaRecorder_AudioBitRateChanged(@ptrCast(self));
    }

    pub fn OnAudioBitRateChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_AudioBitRateChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn AudioChannelCountChanged(self: ?*anyopaque, ) void {
        qtc.QMediaRecorder_AudioChannelCountChanged(@ptrCast(self));
    }

    pub fn OnAudioChannelCountChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_AudioChannelCountChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn AudioSampleRateChanged(self: ?*anyopaque, ) void {
        qtc.QMediaRecorder_AudioSampleRateChanged(@ptrCast(self));
    }

    pub fn OnAudioSampleRateChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_AudioSampleRateChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn AutoStopChanged(self: ?*anyopaque, ) void {
        qtc.QMediaRecorder_AutoStopChanged(@ptrCast(self));
    }

    pub fn OnAutoStopChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaRecorder_Connect_AutoStopChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMediaRecorder_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediarecorder.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMediaRecorder_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediarecorder.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMediaRecorder_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/mediarecorder.html#types
pub const enums = struct {
    pub const Quality = enum {
        pub const VeryLowQuality: i32 = 0;
        pub const LowQuality: i32 = 1;
        pub const NormalQuality: i32 = 2;
        pub const HighQuality: i32 = 3;
        pub const VeryHighQuality: i32 = 4;
    };

    pub const EncodingMode = enum {
        pub const ConstantQualityEncoding: i32 = 0;
        pub const ConstantBitRateEncoding: i32 = 1;
        pub const AverageBitRateEncoding: i32 = 2;
        pub const TwoPassEncoding: i32 = 3;
    };

    pub const RecorderState = enum {
        pub const StoppedState: i32 = 0;
        pub const RecordingState: i32 = 1;
        pub const PausedState: i32 = 2;
    };

    pub const Error = enum {
        pub const NoError: i32 = 0;
        pub const ResourceError: i32 = 1;
        pub const FormatError: i32 = 2;
        pub const OutOfSpaceError: i32 = 3;
        pub const LocationNotWritable: i32 = 4;
    };

};
