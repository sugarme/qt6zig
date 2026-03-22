const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qicon.html
pub const qicon = struct {

    /// New constructs a new QIcon object.
    pub fn New() QtC.QIcon {
        return qtc.QIcon_new();
    }


    /// New2 constructs a new QIcon object.
    pub fn New2(pixmap: ?*anyopaque) QtC.QIcon {
        return qtc.QIcon_new2(@ptrCast(pixmap));
    }


    /// New3 constructs a new QIcon object.
    pub fn New3(other: ?*anyopaque) QtC.QIcon {
        return qtc.QIcon_new3(@ptrCast(other));
    }


    /// New4 constructs a new QIcon object.
    pub fn New4(fileName: []const u8) QtC.QIcon {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
return qtc.QIcon_new4(fileName_str);
    }


    /// New5 constructs a new QIcon object.
    pub fn New5(engine: ?*anyopaque) QtC.QIcon {
        return qtc.QIcon_new5(@ptrCast(engine));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QIcon_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QIcon_Swap(@ptrCast(self), @ptrCast(other));
    }

    pub fn OperatorQVariant(self: ?*anyopaque, ) QtC.QVariant {
        return qtc.QIcon_OperatorQVariant(@ptrCast(self));
    }

    pub fn Pixmap(self: ?*anyopaque, size: ?*anyopaque) QtC.QPixmap {
        return qtc.QIcon_Pixmap(@ptrCast(self), @ptrCast(size));
    }

    pub fn Pixmap2(self: ?*anyopaque, w: i32, h: i32) QtC.QPixmap {
        return qtc.QIcon_Pixmap2(@ptrCast(self), w, h);
    }

    pub fn Pixmap3(self: ?*anyopaque, extent: i32) QtC.QPixmap {
        return qtc.QIcon_Pixmap3(@ptrCast(self), extent);
    }

    pub fn Pixmap4(self: ?*anyopaque, size: ?*anyopaque, devicePixelRatio: f64) QtC.QPixmap {
        return qtc.QIcon_Pixmap4(@ptrCast(self), @ptrCast(size), devicePixelRatio);
    }

    pub fn Pixmap5(self: ?*anyopaque, window: ?*anyopaque, size: ?*anyopaque) QtC.QPixmap {
        return qtc.QIcon_Pixmap5(@ptrCast(self), @ptrCast(window), @ptrCast(size));
    }

    pub fn ActualSize(self: ?*anyopaque, size: ?*anyopaque) QtC.QSize {
        return qtc.QIcon_ActualSize(@ptrCast(self), @ptrCast(size));
    }

    pub fn ActualSize2(self: ?*anyopaque, window: ?*anyopaque, size: ?*anyopaque) QtC.QSize {
        return qtc.QIcon_ActualSize2(@ptrCast(self), @ptrCast(window), @ptrCast(size));
    }

    pub fn Name(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QIcon_Name(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qicon.Name: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Paint(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque) void {
        qtc.QIcon_Paint(@ptrCast(self), @ptrCast(painter), @ptrCast(rect));
    }

    pub fn Paint2(self: ?*anyopaque, painter: ?*anyopaque, x: i32, y: i32, w: i32, h: i32) void {
        qtc.QIcon_Paint2(@ptrCast(self), @ptrCast(painter), x, y, w, h);
    }

    pub fn IsNull(self: ?*anyopaque, ) bool {
        return qtc.QIcon_IsNull(@ptrCast(self));
    }

    pub fn IsDetached(self: ?*anyopaque, ) bool {
        return qtc.QIcon_IsDetached(@ptrCast(self));
    }

    pub fn Detach(self: ?*anyopaque, ) void {
        qtc.QIcon_Detach(@ptrCast(self));
    }

    pub fn CacheKey(self: ?*anyopaque, ) i64 {
        return qtc.QIcon_CacheKey(@ptrCast(self));
    }

    pub fn AddPixmap(self: ?*anyopaque, pixmap: ?*anyopaque) void {
        qtc.QIcon_AddPixmap(@ptrCast(self), @ptrCast(pixmap));
    }

    pub fn AddFile(self: ?*anyopaque, fileName: []const u8) void {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
qtc.QIcon_AddFile(@ptrCast(self), fileName_str);
    }

    pub fn AvailableSizes(self: ?*anyopaque, ) []const u8 {
        return qtc.QIcon_AvailableSizes(@ptrCast(self));
    }

    pub fn SetIsMask(self: ?*anyopaque, isMask: bool) void {
        qtc.QIcon_SetIsMask(@ptrCast(self), isMask);
    }

    pub fn IsMask(self: ?*anyopaque, ) bool {
        return qtc.QIcon_IsMask(@ptrCast(self));
    }

    pub fn FromTheme(name: []const u8) QtC.QIcon {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QIcon_FromTheme(name_str);
    }

    pub fn FromTheme2(name: []const u8, fallback: ?*anyopaque) QtC.QIcon {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QIcon_FromTheme2(name_str, @ptrCast(fallback));
    }

    pub fn HasThemeIcon(name: []const u8) bool {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
return qtc.QIcon_HasThemeIcon(name_str);
    }

    pub fn FromTheme3(icon: i32) QtC.QIcon {
        return qtc.QIcon_FromTheme3(@intCast(icon));
    }

    pub fn FromTheme4(icon: i32, fallback: ?*anyopaque) QtC.QIcon {
        return qtc.QIcon_FromTheme4(@intCast(icon), @ptrCast(fallback));
    }

    pub fn HasThemeIcon2(icon: i32) bool {
        return qtc.QIcon_HasThemeIcon2(@intCast(icon));
    }

    pub fn ThemeSearchPaths() []const u8 {
        return qtc.QIcon_ThemeSearchPaths();
    }

    pub fn SetThemeSearchPaths(searchpath: []const u8) void {
        qtc.QIcon_SetThemeSearchPaths(@ptrCast(searchpath));
    }

    pub fn FallbackSearchPaths() []const u8 {
        return qtc.QIcon_FallbackSearchPaths();
    }

    pub fn SetFallbackSearchPaths(paths: []const u8) void {
        qtc.QIcon_SetFallbackSearchPaths(@ptrCast(paths));
    }

    pub fn ThemeName(, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QIcon_ThemeName();
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qicon.ThemeName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetThemeName(path: []const u8) void {
        const path_str = qtc.libqt_string{
    .len = path.len,
    .data = path.ptr,
};
qtc.QIcon_SetThemeName(path_str);
    }

    pub fn FallbackThemeName(, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QIcon_FallbackThemeName();
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qicon.FallbackThemeName: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SetFallbackThemeName(name: []const u8) void {
        const name_str = qtc.libqt_string{
    .len = name.len,
    .data = name.ptr,
};
qtc.QIcon_SetFallbackThemeName(name_str);
    }

    pub fn DataPtr(self: ?*anyopaque, ) QIconPrivate {
        return @ptrCast(qtc.QIcon_DataPtr(@ptrCast(self)));
    }

    pub fn Pixmap22(self: ?*anyopaque, size: ?*anyopaque, mode: i32) QtC.QPixmap {
        return qtc.QIcon_Pixmap22(@ptrCast(self), @ptrCast(size), @intCast(mode));
    }

    pub fn Pixmap32(self: ?*anyopaque, size: ?*anyopaque, mode: i32, state: i32) QtC.QPixmap {
        return qtc.QIcon_Pixmap32(@ptrCast(self), @ptrCast(size), @intCast(mode), @intCast(state));
    }

    pub fn Pixmap33(self: ?*anyopaque, w: i32, h: i32, mode: i32) QtC.QPixmap {
        return qtc.QIcon_Pixmap33(@ptrCast(self), w, h, @intCast(mode));
    }

    pub fn Pixmap42(self: ?*anyopaque, w: i32, h: i32, mode: i32, state: i32) QtC.QPixmap {
        return qtc.QIcon_Pixmap42(@ptrCast(self), w, h, @intCast(mode), @intCast(state));
    }

    pub fn Pixmap23(self: ?*anyopaque, extent: i32, mode: i32) QtC.QPixmap {
        return qtc.QIcon_Pixmap23(@ptrCast(self), extent, @intCast(mode));
    }

    pub fn Pixmap34(self: ?*anyopaque, extent: i32, mode: i32, state: i32) QtC.QPixmap {
        return qtc.QIcon_Pixmap34(@ptrCast(self), extent, @intCast(mode), @intCast(state));
    }

    pub fn Pixmap35(self: ?*anyopaque, size: ?*anyopaque, devicePixelRatio: f64, mode: i32) QtC.QPixmap {
        return qtc.QIcon_Pixmap35(@ptrCast(self), @ptrCast(size), devicePixelRatio, @intCast(mode));
    }

    pub fn Pixmap43(self: ?*anyopaque, size: ?*anyopaque, devicePixelRatio: f64, mode: i32, state: i32) QtC.QPixmap {
        return qtc.QIcon_Pixmap43(@ptrCast(self), @ptrCast(size), devicePixelRatio, @intCast(mode), @intCast(state));
    }

    pub fn Pixmap36(self: ?*anyopaque, window: ?*anyopaque, size: ?*anyopaque, mode: i32) QtC.QPixmap {
        return qtc.QIcon_Pixmap36(@ptrCast(self), @ptrCast(window), @ptrCast(size), @intCast(mode));
    }

    pub fn Pixmap44(self: ?*anyopaque, window: ?*anyopaque, size: ?*anyopaque, mode: i32, state: i32) QtC.QPixmap {
        return qtc.QIcon_Pixmap44(@ptrCast(self), @ptrCast(window), @ptrCast(size), @intCast(mode), @intCast(state));
    }

    pub fn ActualSize22(self: ?*anyopaque, size: ?*anyopaque, mode: i32) QtC.QSize {
        return qtc.QIcon_ActualSize22(@ptrCast(self), @ptrCast(size), @intCast(mode));
    }

    pub fn ActualSize3(self: ?*anyopaque, size: ?*anyopaque, mode: i32, state: i32) QtC.QSize {
        return qtc.QIcon_ActualSize3(@ptrCast(self), @ptrCast(size), @intCast(mode), @intCast(state));
    }

    pub fn ActualSize32(self: ?*anyopaque, window: ?*anyopaque, size: ?*anyopaque, mode: i32) QtC.QSize {
        return qtc.QIcon_ActualSize32(@ptrCast(self), @ptrCast(window), @ptrCast(size), @intCast(mode));
    }

    pub fn ActualSize4(self: ?*anyopaque, window: ?*anyopaque, size: ?*anyopaque, mode: i32, state: i32) QtC.QSize {
        return qtc.QIcon_ActualSize4(@ptrCast(self), @ptrCast(window), @ptrCast(size), @intCast(mode), @intCast(state));
    }

    pub fn Paint3(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, alignment: i32) void {
        qtc.QIcon_Paint3(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @intCast(alignment));
    }

    pub fn Paint4(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, alignment: i32, mode: i32) void {
        qtc.QIcon_Paint4(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @intCast(alignment), @intCast(mode));
    }

    pub fn Paint5(self: ?*anyopaque, painter: ?*anyopaque, rect: ?*anyopaque, alignment: i32, mode: i32, state: i32) void {
        qtc.QIcon_Paint5(@ptrCast(self), @ptrCast(painter), @ptrCast(rect), @intCast(alignment), @intCast(mode), @intCast(state));
    }

    pub fn Paint6(self: ?*anyopaque, painter: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, alignment: i32) void {
        qtc.QIcon_Paint6(@ptrCast(self), @ptrCast(painter), x, y, w, h, @intCast(alignment));
    }

    pub fn Paint7(self: ?*anyopaque, painter: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, alignment: i32, mode: i32) void {
        qtc.QIcon_Paint7(@ptrCast(self), @ptrCast(painter), x, y, w, h, @intCast(alignment), @intCast(mode));
    }

    pub fn Paint8(self: ?*anyopaque, painter: ?*anyopaque, x: i32, y: i32, w: i32, h: i32, alignment: i32, mode: i32, state: i32) void {
        qtc.QIcon_Paint8(@ptrCast(self), @ptrCast(painter), x, y, w, h, @intCast(alignment), @intCast(mode), @intCast(state));
    }

    pub fn AddPixmap2(self: ?*anyopaque, pixmap: ?*anyopaque, mode: i32) void {
        qtc.QIcon_AddPixmap2(@ptrCast(self), @ptrCast(pixmap), @intCast(mode));
    }

    pub fn AddPixmap3(self: ?*anyopaque, pixmap: ?*anyopaque, mode: i32, state: i32) void {
        qtc.QIcon_AddPixmap3(@ptrCast(self), @ptrCast(pixmap), @intCast(mode), @intCast(state));
    }

    pub fn AddFile2(self: ?*anyopaque, fileName: []const u8, size: ?*anyopaque) void {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
qtc.QIcon_AddFile2(@ptrCast(self), fileName_str, @ptrCast(size));
    }

    pub fn AddFile3(self: ?*anyopaque, fileName: []const u8, size: ?*anyopaque, mode: i32) void {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
qtc.QIcon_AddFile3(@ptrCast(self), fileName_str, @ptrCast(size), @intCast(mode));
    }

    pub fn AddFile4(self: ?*anyopaque, fileName: []const u8, size: ?*anyopaque, mode: i32, state: i32) void {
        const fileName_str = qtc.libqt_string{
    .len = fileName.len,
    .data = fileName.ptr,
};
qtc.QIcon_AddFile4(@ptrCast(self), fileName_str, @ptrCast(size), @intCast(mode), @intCast(state));
    }

    pub fn AvailableSizes1(self: ?*anyopaque, mode: i32) []const u8 {
        return qtc.QIcon_AvailableSizes1(@ptrCast(self), @intCast(mode));
    }

    pub fn AvailableSizes2(self: ?*anyopaque, mode: i32, state: i32) []const u8 {
        return qtc.QIcon_AvailableSizes2(@ptrCast(self), @intCast(mode), @intCast(state));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QIcon_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/icon.html#types
pub const enums = struct {
    pub const Mode = enum {
        pub const Normal: i32 = 0;
        pub const Disabled: i32 = 1;
        pub const Active: i32 = 2;
        pub const Selected: i32 = 3;
    };

    pub const State = enum {
        pub const On: i32 = 0;
        pub const Off: i32 = 1;
    };

    pub const ThemeIcon = enum {
        pub const AddressBookNew: i32 = 0;
        pub const ApplicationExit: i32 = 1;
        pub const AppointmentNew: i32 = 2;
        pub const CallStart: i32 = 3;
        pub const CallStop: i32 = 4;
        pub const ContactNew: i32 = 5;
        pub const DocumentNew: i32 = 6;
        pub const DocumentOpen: i32 = 7;
        pub const DocumentOpenRecent: i32 = 8;
        pub const DocumentPageSetup: i32 = 9;
        pub const DocumentPrint: i32 = 10;
        pub const DocumentPrintPreview: i32 = 11;
        pub const DocumentProperties: i32 = 12;
        pub const DocumentRevert: i32 = 13;
        pub const DocumentSave: i32 = 14;
        pub const DocumentSaveAs: i32 = 15;
        pub const DocumentSend: i32 = 16;
        pub const EditClear: i32 = 17;
        pub const EditCopy: i32 = 18;
        pub const EditCut: i32 = 19;
        pub const EditDelete: i32 = 20;
        pub const EditFind: i32 = 21;
        pub const EditPaste: i32 = 22;
        pub const EditRedo: i32 = 23;
        pub const EditSelectAll: i32 = 24;
        pub const EditUndo: i32 = 25;
        pub const FolderNew: i32 = 26;
        pub const FormatIndentLess: i32 = 27;
        pub const FormatIndentMore: i32 = 28;
        pub const FormatJustifyCenter: i32 = 29;
        pub const FormatJustifyFill: i32 = 30;
        pub const FormatJustifyLeft: i32 = 31;
        pub const FormatJustifyRight: i32 = 32;
        pub const FormatTextDirectionLtr: i32 = 33;
        pub const FormatTextDirectionRtl: i32 = 34;
        pub const FormatTextBold: i32 = 35;
        pub const FormatTextItalic: i32 = 36;
        pub const FormatTextUnderline: i32 = 37;
        pub const FormatTextStrikethrough: i32 = 38;
        pub const GoDown: i32 = 39;
        pub const GoHome: i32 = 40;
        pub const GoNext: i32 = 41;
        pub const GoPrevious: i32 = 42;
        pub const GoUp: i32 = 43;
        pub const HelpAbout: i32 = 44;
        pub const HelpFaq: i32 = 45;
        pub const InsertImage: i32 = 46;
        pub const InsertLink: i32 = 47;
        pub const InsertText: i32 = 48;
        pub const ListAdd: i32 = 49;
        pub const ListRemove: i32 = 50;
        pub const MailForward: i32 = 51;
        pub const MailMarkImportant: i32 = 52;
        pub const MailMarkRead: i32 = 53;
        pub const MailMarkUnread: i32 = 54;
        pub const MailMessageNew: i32 = 55;
        pub const MailReplyAll: i32 = 56;
        pub const MailReplySender: i32 = 57;
        pub const MailSend: i32 = 58;
        pub const MediaEject: i32 = 59;
        pub const MediaPlaybackPause: i32 = 60;
        pub const MediaPlaybackStart: i32 = 61;
        pub const MediaPlaybackStop: i32 = 62;
        pub const MediaRecord: i32 = 63;
        pub const MediaSeekBackward: i32 = 64;
        pub const MediaSeekForward: i32 = 65;
        pub const MediaSkipBackward: i32 = 66;
        pub const MediaSkipForward: i32 = 67;
        pub const ObjectRotateLeft: i32 = 68;
        pub const ObjectRotateRight: i32 = 69;
        pub const ProcessStop: i32 = 70;
        pub const SystemLockScreen: i32 = 71;
        pub const SystemLogOut: i32 = 72;
        pub const SystemSearch: i32 = 73;
        pub const SystemReboot: i32 = 74;
        pub const SystemShutdown: i32 = 75;
        pub const ToolsCheckSpelling: i32 = 76;
        pub const ViewFullscreen: i32 = 77;
        pub const ViewRefresh: i32 = 78;
        pub const ViewRestore: i32 = 79;
        pub const WindowClose: i32 = 80;
        pub const WindowNew: i32 = 81;
        pub const ZoomFitBest: i32 = 82;
        pub const ZoomIn: i32 = 83;
        pub const ZoomOut: i32 = 84;
        pub const AudioCard: i32 = 85;
        pub const AudioInputMicrophone: i32 = 86;
        pub const Battery: i32 = 87;
        pub const CameraPhoto: i32 = 88;
        pub const CameraVideo: i32 = 89;
        pub const CameraWeb: i32 = 90;
        pub const Computer: i32 = 91;
        pub const DriveHarddisk: i32 = 92;
        pub const DriveOptical: i32 = 93;
        pub const InputGaming: i32 = 94;
        pub const InputKeyboard: i32 = 95;
        pub const InputMouse: i32 = 96;
        pub const InputTablet: i32 = 97;
        pub const MediaFlash: i32 = 98;
        pub const MediaOptical: i32 = 99;
        pub const MediaTape: i32 = 100;
        pub const MultimediaPlayer: i32 = 101;
        pub const NetworkWired: i32 = 102;
        pub const NetworkWireless: i32 = 103;
        pub const Phone: i32 = 104;
        pub const Printer: i32 = 105;
        pub const Scanner: i32 = 106;
        pub const VideoDisplay: i32 = 107;
        pub const AppointmentMissed: i32 = 108;
        pub const AppointmentSoon: i32 = 109;
        pub const AudioVolumeHigh: i32 = 110;
        pub const AudioVolumeLow: i32 = 111;
        pub const AudioVolumeMedium: i32 = 112;
        pub const AudioVolumeMuted: i32 = 113;
        pub const BatteryCaution: i32 = 114;
        pub const BatteryLow: i32 = 115;
        pub const DialogError: i32 = 116;
        pub const DialogInformation: i32 = 117;
        pub const DialogPassword: i32 = 118;
        pub const DialogQuestion: i32 = 119;
        pub const DialogWarning: i32 = 120;
        pub const FolderDragAccept: i32 = 121;
        pub const FolderOpen: i32 = 122;
        pub const FolderVisiting: i32 = 123;
        pub const ImageLoading: i32 = 124;
        pub const ImageMissing: i32 = 125;
        pub const MailAttachment: i32 = 126;
        pub const MailUnread: i32 = 127;
        pub const MailRead: i32 = 128;
        pub const MailReplied: i32 = 129;
        pub const MediaPlaylistRepeat: i32 = 130;
        pub const MediaPlaylistShuffle: i32 = 131;
        pub const NetworkOffline: i32 = 132;
        pub const PrinterPrinting: i32 = 133;
        pub const SecurityHigh: i32 = 134;
        pub const SecurityLow: i32 = 135;
        pub const SoftwareUpdateAvailable: i32 = 136;
        pub const SoftwareUpdateUrgent: i32 = 137;
        pub const SyncError: i32 = 138;
        pub const SyncSynchronizing: i32 = 139;
        pub const UserAvailable: i32 = 140;
        pub const UserOffline: i32 = 141;
        pub const WeatherClear: i32 = 142;
        pub const WeatherClearNight: i32 = 143;
        pub const WeatherFewClouds: i32 = 144;
        pub const WeatherFewCloudsNight: i32 = 145;
        pub const WeatherFog: i32 = 146;
        pub const WeatherShowers: i32 = 147;
        pub const WeatherSnow: i32 = 148;
        pub const WeatherStorm: i32 = 149;
        pub const NThemeIcons: i32 = 150;
    };

};
