const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qmediaplayer.html
pub const qmediaplayer = struct {

    /// New constructs a new QMediaPlayer object.
    pub fn New() QtC.QMediaPlayer {
        return qtc.QMediaPlayer_new();
    }


    /// New2 constructs a new QMediaPlayer object.
    pub fn New2(parent: ?*anyopaque) QtC.QMediaPlayer {
        return qtc.QMediaPlayer_new2(@ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMediaPlayer_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediaplayer.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn AudioTracks(self: ?*anyopaque, ) []const u8 {
        return qtc.QMediaPlayer_AudioTracks(@ptrCast(self));
    }

    pub fn VideoTracks(self: ?*anyopaque, ) []const u8 {
        return qtc.QMediaPlayer_VideoTracks(@ptrCast(self));
    }

    pub fn SubtitleTracks(self: ?*anyopaque, ) []const u8 {
        return qtc.QMediaPlayer_SubtitleTracks(@ptrCast(self));
    }

    pub fn ActiveAudioTrack(self: ?*anyopaque, ) i32 {
        return qtc.QMediaPlayer_ActiveAudioTrack(@ptrCast(self));
    }

    pub fn ActiveVideoTrack(self: ?*anyopaque, ) i32 {
        return qtc.QMediaPlayer_ActiveVideoTrack(@ptrCast(self));
    }

    pub fn ActiveSubtitleTrack(self: ?*anyopaque, ) i32 {
        return qtc.QMediaPlayer_ActiveSubtitleTrack(@ptrCast(self));
    }

    pub fn SetActiveAudioTrack(self: ?*anyopaque, index: i32) void {
        qtc.QMediaPlayer_SetActiveAudioTrack(@ptrCast(self), index);
    }

    pub fn SetActiveVideoTrack(self: ?*anyopaque, index: i32) void {
        qtc.QMediaPlayer_SetActiveVideoTrack(@ptrCast(self), index);
    }

    pub fn SetActiveSubtitleTrack(self: ?*anyopaque, index: i32) void {
        qtc.QMediaPlayer_SetActiveSubtitleTrack(@ptrCast(self), index);
    }

    pub fn SetAudioBufferOutput(self: ?*anyopaque, output: ?*anyopaque) void {
        qtc.QMediaPlayer_SetAudioBufferOutput(@ptrCast(self), @ptrCast(output));
    }

    pub fn AudioBufferOutput(self: ?*anyopaque, ) QtC.QAudioBufferOutput {
        return qtc.QMediaPlayer_AudioBufferOutput(@ptrCast(self));
    }

    pub fn SetAudioOutput(self: ?*anyopaque, output: ?*anyopaque) void {
        qtc.QMediaPlayer_SetAudioOutput(@ptrCast(self), @ptrCast(output));
    }

    pub fn AudioOutput(self: ?*anyopaque, ) QtC.QAudioOutput {
        return qtc.QMediaPlayer_AudioOutput(@ptrCast(self));
    }

    pub fn SetVideoOutput(self: ?*anyopaque, videoOutput: ?*anyopaque) void {
        qtc.QMediaPlayer_SetVideoOutput(@ptrCast(self), @ptrCast(videoOutput));
    }

    pub fn VideoOutput(self: ?*anyopaque, ) QtC.QObject {
        return qtc.QMediaPlayer_VideoOutput(@ptrCast(self));
    }

    pub fn SetVideoSink(self: ?*anyopaque, sink: ?*anyopaque) void {
        qtc.QMediaPlayer_SetVideoSink(@ptrCast(self), @ptrCast(sink));
    }

    pub fn VideoSink(self: ?*anyopaque, ) QtC.QVideoSink {
        return qtc.QMediaPlayer_VideoSink(@ptrCast(self));
    }

    pub fn Source(self: ?*anyopaque, ) QtC.QUrl {
        return qtc.QMediaPlayer_Source(@ptrCast(self));
    }

    pub fn SourceDevice(self: ?*anyopaque, ) QtC.QIODevice {
        return qtc.QMediaPlayer_SourceDevice(@ptrCast(self));
    }

    pub fn PlaybackState(self: ?*anyopaque, ) i32 {
        return qtc.QMediaPlayer_PlaybackState(@ptrCast(self));
    }

    pub fn MediaStatus(self: ?*anyopaque, ) i32 {
        return qtc.QMediaPlayer_MediaStatus(@ptrCast(self));
    }

    pub fn Duration(self: ?*anyopaque, ) i64 {
        return qtc.QMediaPlayer_Duration(@ptrCast(self));
    }

    pub fn Position(self: ?*anyopaque, ) i64 {
        return qtc.QMediaPlayer_Position(@ptrCast(self));
    }

    pub fn HasAudio(self: ?*anyopaque, ) bool {
        return qtc.QMediaPlayer_HasAudio(@ptrCast(self));
    }

    pub fn HasVideo(self: ?*anyopaque, ) bool {
        return qtc.QMediaPlayer_HasVideo(@ptrCast(self));
    }

    pub fn BufferProgress(self: ?*anyopaque, ) f32 {
        return qtc.QMediaPlayer_BufferProgress(@ptrCast(self));
    }

    pub fn BufferedTimeRange(self: ?*anyopaque, ) QtC.QMediaTimeRange {
        return qtc.QMediaPlayer_BufferedTimeRange(@ptrCast(self));
    }

    pub fn IsSeekable(self: ?*anyopaque, ) bool {
        return qtc.QMediaPlayer_IsSeekable(@ptrCast(self));
    }

    pub fn PlaybackRate(self: ?*anyopaque, ) f64 {
        return qtc.QMediaPlayer_PlaybackRate(@ptrCast(self));
    }

    pub fn IsPlaying(self: ?*anyopaque, ) bool {
        return qtc.QMediaPlayer_IsPlaying(@ptrCast(self));
    }

    pub fn Loops(self: ?*anyopaque, ) i32 {
        return qtc.QMediaPlayer_Loops(@ptrCast(self));
    }

    pub fn SetLoops(self: ?*anyopaque, loops: i32) void {
        qtc.QMediaPlayer_SetLoops(@ptrCast(self), loops);
    }

    pub fn Error(self: ?*anyopaque, ) i32 {
        return qtc.QMediaPlayer_Error(@ptrCast(self));
    }

    pub fn ErrorString(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMediaPlayer_ErrorString(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediaplayer.ErrorString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn IsAvailable(self: ?*anyopaque, ) bool {
        return qtc.QMediaPlayer_IsAvailable(@ptrCast(self));
    }

    pub fn MetaData(self: ?*anyopaque, ) QtC.QMediaMetaData {
        return qtc.QMediaPlayer_MetaData(@ptrCast(self));
    }

    pub fn Play(self: ?*anyopaque, ) void {
        qtc.QMediaPlayer_Play(@ptrCast(self));
    }

    pub fn Pause(self: ?*anyopaque, ) void {
        qtc.QMediaPlayer_Pause(@ptrCast(self));
    }

    pub fn Stop(self: ?*anyopaque, ) void {
        qtc.QMediaPlayer_Stop(@ptrCast(self));
    }

    pub fn SetPosition(self: ?*anyopaque, position: i64) void {
        qtc.QMediaPlayer_SetPosition(@ptrCast(self), position);
    }

    pub fn SetPlaybackRate(self: ?*anyopaque, rate: f64) void {
        qtc.QMediaPlayer_SetPlaybackRate(@ptrCast(self), rate);
    }

    pub fn SetSource(self: ?*anyopaque, source: ?*anyopaque) void {
        qtc.QMediaPlayer_SetSource(@ptrCast(self), @ptrCast(source));
    }

    pub fn SetSourceDevice(self: ?*anyopaque, device: ?*anyopaque) void {
        qtc.QMediaPlayer_SetSourceDevice(@ptrCast(self), @ptrCast(device));
    }

    pub fn SourceChanged(self: ?*anyopaque, media: ?*anyopaque) void {
        qtc.QMediaPlayer_SourceChanged(@ptrCast(self), @ptrCast(media));
    }

    pub fn OnSourceChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_SourceChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn PlaybackStateChanged(self: ?*anyopaque, newState: i32) void {
        qtc.QMediaPlayer_PlaybackStateChanged(@ptrCast(self), @intCast(newState));
    }

    pub fn OnPlaybackStateChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_PlaybackStateChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn MediaStatusChanged(self: ?*anyopaque, status: i32) void {
        qtc.QMediaPlayer_MediaStatusChanged(@ptrCast(self), @intCast(status));
    }

    pub fn OnMediaStatusChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_MediaStatusChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn DurationChanged(self: ?*anyopaque, duration: i64) void {
        qtc.QMediaPlayer_DurationChanged(@ptrCast(self), duration);
    }

    pub fn OnDurationChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_DurationChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn PositionChanged(self: ?*anyopaque, position: i64) void {
        qtc.QMediaPlayer_PositionChanged(@ptrCast(self), position);
    }

    pub fn OnPositionChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i64) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_PositionChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn HasAudioChanged(self: ?*anyopaque, available: bool) void {
        qtc.QMediaPlayer_HasAudioChanged(@ptrCast(self), available);
    }

    pub fn OnHasAudioChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_HasAudioChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn HasVideoChanged(self: ?*anyopaque, videoAvailable: bool) void {
        qtc.QMediaPlayer_HasVideoChanged(@ptrCast(self), videoAvailable);
    }

    pub fn OnHasVideoChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_HasVideoChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn BufferProgressChanged(self: ?*anyopaque, progress: f32) void {
        qtc.QMediaPlayer_BufferProgressChanged(@ptrCast(self), progress);
    }

    pub fn OnBufferProgressChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f32) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_BufferProgressChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn SeekableChanged(self: ?*anyopaque, seekable: bool) void {
        qtc.QMediaPlayer_SeekableChanged(@ptrCast(self), seekable);
    }

    pub fn OnSeekableChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_SeekableChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn PlayingChanged(self: ?*anyopaque, playing: bool) void {
        qtc.QMediaPlayer_PlayingChanged(@ptrCast(self), playing);
    }

    pub fn OnPlayingChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_PlayingChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn PlaybackRateChanged(self: ?*anyopaque, rate: f64) void {
        qtc.QMediaPlayer_PlaybackRateChanged(@ptrCast(self), rate);
    }

    pub fn OnPlaybackRateChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f64) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_PlaybackRateChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn LoopsChanged(self: ?*anyopaque, ) void {
        qtc.QMediaPlayer_LoopsChanged(@ptrCast(self));
    }

    pub fn OnLoopsChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_LoopsChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn MetaDataChanged(self: ?*anyopaque, ) void {
        qtc.QMediaPlayer_MetaDataChanged(@ptrCast(self));
    }

    pub fn OnMetaDataChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_MetaDataChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn VideoOutputChanged(self: ?*anyopaque, ) void {
        qtc.QMediaPlayer_VideoOutputChanged(@ptrCast(self));
    }

    pub fn OnVideoOutputChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_VideoOutputChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn AudioOutputChanged(self: ?*anyopaque, ) void {
        qtc.QMediaPlayer_AudioOutputChanged(@ptrCast(self));
    }

    pub fn OnAudioOutputChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_AudioOutputChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn AudioBufferOutputChanged(self: ?*anyopaque, ) void {
        qtc.QMediaPlayer_AudioBufferOutputChanged(@ptrCast(self));
    }

    pub fn OnAudioBufferOutputChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_AudioBufferOutputChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn TracksChanged(self: ?*anyopaque, ) void {
        qtc.QMediaPlayer_TracksChanged(@ptrCast(self));
    }

    pub fn OnTracksChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_TracksChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ActiveTracksChanged(self: ?*anyopaque, ) void {
        qtc.QMediaPlayer_ActiveTracksChanged(@ptrCast(self));
    }

    pub fn OnActiveTracksChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_ActiveTracksChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ErrorChanged(self: ?*anyopaque, ) void {
        qtc.QMediaPlayer_ErrorChanged(@ptrCast(self));
    }

    pub fn OnErrorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_ErrorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ErrorOccurred(self: ?*anyopaque, errorVal: i32, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
    .len = errorString.len,
    .data = errorString.ptr,
};
qtc.QMediaPlayer_ErrorOccurred(@ptrCast(self), @intCast(errorVal), errorString_str);
    }

    pub fn OnErrorOccurred(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QMediaPlayer_Connect_ErrorOccurred(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMediaPlayer_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediaplayer.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QMediaPlayer_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qmediaplayer.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetSourceDevice2(self: ?*anyopaque, device: ?*anyopaque, sourceUrl: ?*anyopaque) void {
        qtc.QMediaPlayer_SetSourceDevice2(@ptrCast(self), @ptrCast(device), @ptrCast(sourceUrl));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMediaPlayer_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/mediaplayer.html#types
pub const enums = struct {
    pub const PlaybackState = enum {
        pub const StoppedState: i32 = 0;
        pub const PlayingState: i32 = 1;
        pub const PausedState: i32 = 2;
    };

    pub const MediaStatus = enum {
        pub const NoMedia: i32 = 0;
        pub const LoadingMedia: i32 = 1;
        pub const LoadedMedia: i32 = 2;
        pub const StalledMedia: i32 = 3;
        pub const BufferingMedia: i32 = 4;
        pub const BufferedMedia: i32 = 5;
        pub const EndOfMedia: i32 = 6;
        pub const InvalidMedia: i32 = 7;
    };

    pub const Error = enum {
        pub const NoError: i32 = 0;
        pub const ResourceError: i32 = 1;
        pub const FormatError: i32 = 2;
        pub const NetworkError: i32 = 3;
        pub const AccessDeniedError: i32 = 4;
    };

    pub const Loops = enum {
        pub const Infinite: i32 = -1;
        pub const Once: i32 = 1;
    };

};
