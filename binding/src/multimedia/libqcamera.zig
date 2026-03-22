const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qcamera.html
pub const qcamera = struct {

    /// New constructs a new QCamera object.
    pub fn New() QtC.QCamera {
        return qtc.QCamera_new();
    }


    /// New2 constructs a new QCamera object.
    pub fn New2(cameraDevice: ?*anyopaque) QtC.QCamera {
        return qtc.QCamera_new2(@ptrCast(cameraDevice));
    }


    /// New3 constructs a new QCamera object.
    pub fn New3(position: i32) QtC.QCamera {
        return qtc.QCamera_new3(@intCast(position));
    }


    /// New4 constructs a new QCamera object.
    pub fn New4(parent: ?*anyopaque) QtC.QCamera {
        return qtc.QCamera_new4(@ptrCast(parent));
    }


    /// New5 constructs a new QCamera object.
    pub fn New5(cameraDevice: ?*anyopaque, parent: ?*anyopaque) QtC.QCamera {
        return qtc.QCamera_new5(@ptrCast(cameraDevice), @ptrCast(parent));
    }


    /// New6 constructs a new QCamera object.
    pub fn New6(position: i32, parent: ?*anyopaque) QtC.QCamera {
        return qtc.QCamera_new6(@intCast(position), @ptrCast(parent));
    }


    pub fn Tr(s: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCamera_Tr(@ptrCast(s));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcamera.Tr: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn IsAvailable(self: ?*anyopaque, ) bool {
        return qtc.QCamera_IsAvailable(@ptrCast(self));
    }

    pub fn IsActive(self: ?*anyopaque, ) bool {
        return qtc.QCamera_IsActive(@ptrCast(self));
    }

    pub fn CaptureSession(self: ?*anyopaque, ) QtC.QMediaCaptureSession {
        return qtc.QCamera_CaptureSession(@ptrCast(self));
    }

    pub fn CameraDevice(self: ?*anyopaque, ) QtC.QCameraDevice {
        return qtc.QCamera_CameraDevice(@ptrCast(self));
    }

    pub fn SetCameraDevice(self: ?*anyopaque, cameraDevice: ?*anyopaque) void {
        qtc.QCamera_SetCameraDevice(@ptrCast(self), @ptrCast(cameraDevice));
    }

    pub fn CameraFormat(self: ?*anyopaque, ) QtC.QCameraFormat {
        return qtc.QCamera_CameraFormat(@ptrCast(self));
    }

    pub fn SetCameraFormat(self: ?*anyopaque, format: ?*anyopaque) void {
        qtc.QCamera_SetCameraFormat(@ptrCast(self), @ptrCast(format));
    }

    pub fn Error(self: ?*anyopaque, ) i32 {
        return qtc.QCamera_Error(@ptrCast(self));
    }

    pub fn ErrorString(self: ?*anyopaque, , allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCamera_ErrorString(@ptrCast(self));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcamera.ErrorString: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn SupportedFeatures(self: ?*anyopaque, ) i32 {
        return qtc.QCamera_SupportedFeatures(@ptrCast(self));
    }

    pub fn FocusMode(self: ?*anyopaque, ) i32 {
        return qtc.QCamera_FocusMode(@ptrCast(self));
    }

    pub fn SetFocusMode(self: ?*anyopaque, mode: i32) void {
        qtc.QCamera_SetFocusMode(@ptrCast(self), @intCast(mode));
    }

    pub fn IsFocusModeSupported(self: ?*anyopaque, mode: i32) bool {
        return qtc.QCamera_IsFocusModeSupported(@ptrCast(self), @intCast(mode));
    }

    pub fn FocusPoint(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QCamera_FocusPoint(@ptrCast(self));
    }

    pub fn CustomFocusPoint(self: ?*anyopaque, ) QtC.QPointF {
        return qtc.QCamera_CustomFocusPoint(@ptrCast(self));
    }

    pub fn SetCustomFocusPoint(self: ?*anyopaque, point: ?*anyopaque) void {
        qtc.QCamera_SetCustomFocusPoint(@ptrCast(self), @ptrCast(point));
    }

    pub fn SetFocusDistance(self: ?*anyopaque, d: f32) void {
        qtc.QCamera_SetFocusDistance(@ptrCast(self), d);
    }

    pub fn FocusDistance(self: ?*anyopaque, ) f32 {
        return qtc.QCamera_FocusDistance(@ptrCast(self));
    }

    pub fn MinimumZoomFactor(self: ?*anyopaque, ) f32 {
        return qtc.QCamera_MinimumZoomFactor(@ptrCast(self));
    }

    pub fn MaximumZoomFactor(self: ?*anyopaque, ) f32 {
        return qtc.QCamera_MaximumZoomFactor(@ptrCast(self));
    }

    pub fn ZoomFactor(self: ?*anyopaque, ) f32 {
        return qtc.QCamera_ZoomFactor(@ptrCast(self));
    }

    pub fn SetZoomFactor(self: ?*anyopaque, factor: f32) void {
        qtc.QCamera_SetZoomFactor(@ptrCast(self), factor);
    }

    pub fn FlashMode(self: ?*anyopaque, ) i32 {
        return qtc.QCamera_FlashMode(@ptrCast(self));
    }

    pub fn IsFlashModeSupported(self: ?*anyopaque, mode: i32) bool {
        return qtc.QCamera_IsFlashModeSupported(@ptrCast(self), @intCast(mode));
    }

    pub fn IsFlashReady(self: ?*anyopaque, ) bool {
        return qtc.QCamera_IsFlashReady(@ptrCast(self));
    }

    pub fn TorchMode(self: ?*anyopaque, ) i32 {
        return qtc.QCamera_TorchMode(@ptrCast(self));
    }

    pub fn IsTorchModeSupported(self: ?*anyopaque, mode: i32) bool {
        return qtc.QCamera_IsTorchModeSupported(@ptrCast(self), @intCast(mode));
    }

    pub fn ExposureMode(self: ?*anyopaque, ) i32 {
        return qtc.QCamera_ExposureMode(@ptrCast(self));
    }

    pub fn IsExposureModeSupported(self: ?*anyopaque, mode: i32) bool {
        return qtc.QCamera_IsExposureModeSupported(@ptrCast(self), @intCast(mode));
    }

    pub fn ExposureCompensation(self: ?*anyopaque, ) f32 {
        return qtc.QCamera_ExposureCompensation(@ptrCast(self));
    }

    pub fn IsoSensitivity(self: ?*anyopaque, ) i32 {
        return qtc.QCamera_IsoSensitivity(@ptrCast(self));
    }

    pub fn ManualIsoSensitivity(self: ?*anyopaque, ) i32 {
        return qtc.QCamera_ManualIsoSensitivity(@ptrCast(self));
    }

    pub fn ExposureTime(self: ?*anyopaque, ) f32 {
        return qtc.QCamera_ExposureTime(@ptrCast(self));
    }

    pub fn ManualExposureTime(self: ?*anyopaque, ) f32 {
        return qtc.QCamera_ManualExposureTime(@ptrCast(self));
    }

    pub fn MinimumIsoSensitivity(self: ?*anyopaque, ) i32 {
        return qtc.QCamera_MinimumIsoSensitivity(@ptrCast(self));
    }

    pub fn MaximumIsoSensitivity(self: ?*anyopaque, ) i32 {
        return qtc.QCamera_MaximumIsoSensitivity(@ptrCast(self));
    }

    pub fn MinimumExposureTime(self: ?*anyopaque, ) f32 {
        return qtc.QCamera_MinimumExposureTime(@ptrCast(self));
    }

    pub fn MaximumExposureTime(self: ?*anyopaque, ) f32 {
        return qtc.QCamera_MaximumExposureTime(@ptrCast(self));
    }

    pub fn WhiteBalanceMode(self: ?*anyopaque, ) i32 {
        return qtc.QCamera_WhiteBalanceMode(@ptrCast(self));
    }

    pub fn IsWhiteBalanceModeSupported(self: ?*anyopaque, mode: i32) bool {
        return qtc.QCamera_IsWhiteBalanceModeSupported(@ptrCast(self), @intCast(mode));
    }

    pub fn ColorTemperature(self: ?*anyopaque, ) i32 {
        return qtc.QCamera_ColorTemperature(@ptrCast(self));
    }

    pub fn SetActive(self: ?*anyopaque, active: bool) void {
        qtc.QCamera_SetActive(@ptrCast(self), active);
    }

    pub fn Start(self: ?*anyopaque, ) void {
        qtc.QCamera_Start(@ptrCast(self));
    }

    pub fn Stop(self: ?*anyopaque, ) void {
        qtc.QCamera_Stop(@ptrCast(self));
    }

    pub fn ZoomTo(self: ?*anyopaque, zoom: f32, rate: f32) void {
        qtc.QCamera_ZoomTo(@ptrCast(self), zoom, rate);
    }

    pub fn SetFlashMode(self: ?*anyopaque, mode: i32) void {
        qtc.QCamera_SetFlashMode(@ptrCast(self), @intCast(mode));
    }

    pub fn SetTorchMode(self: ?*anyopaque, mode: i32) void {
        qtc.QCamera_SetTorchMode(@ptrCast(self), @intCast(mode));
    }

    pub fn SetExposureMode(self: ?*anyopaque, mode: i32) void {
        qtc.QCamera_SetExposureMode(@ptrCast(self), @intCast(mode));
    }

    pub fn SetExposureCompensation(self: ?*anyopaque, ev: f32) void {
        qtc.QCamera_SetExposureCompensation(@ptrCast(self), ev);
    }

    pub fn SetManualIsoSensitivity(self: ?*anyopaque, iso: i32) void {
        qtc.QCamera_SetManualIsoSensitivity(@ptrCast(self), iso);
    }

    pub fn SetAutoIsoSensitivity(self: ?*anyopaque, ) void {
        qtc.QCamera_SetAutoIsoSensitivity(@ptrCast(self));
    }

    pub fn SetManualExposureTime(self: ?*anyopaque, seconds: f32) void {
        qtc.QCamera_SetManualExposureTime(@ptrCast(self), seconds);
    }

    pub fn SetAutoExposureTime(self: ?*anyopaque, ) void {
        qtc.QCamera_SetAutoExposureTime(@ptrCast(self));
    }

    pub fn SetWhiteBalanceMode(self: ?*anyopaque, mode: i32) void {
        qtc.QCamera_SetWhiteBalanceMode(@ptrCast(self), @intCast(mode));
    }

    pub fn SetColorTemperature(self: ?*anyopaque, colorTemperature: i32) void {
        qtc.QCamera_SetColorTemperature(@ptrCast(self), colorTemperature);
    }

    pub fn ActiveChanged(self: ?*anyopaque, param1: bool) void {
        qtc.QCamera_ActiveChanged(@ptrCast(self), param1);
    }

    pub fn OnActiveChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QCamera_Connect_ActiveChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ErrorChanged(self: ?*anyopaque, ) void {
        qtc.QCamera_ErrorChanged(@ptrCast(self));
    }

    pub fn OnErrorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_Connect_ErrorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ErrorOccurred(self: ?*anyopaque, errorVal: i32, errorString: []const u8) void {
        const errorString_str = qtc.libqt_string{
    .len = errorString.len,
    .data = errorString.ptr,
};
qtc.QCamera_ErrorOccurred(@ptrCast(self), @intCast(errorVal), errorString_str);
    }

    pub fn OnErrorOccurred(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, [*:0]const u8) callconv(.c) void) void {
        qtc.QCamera_Connect_ErrorOccurred(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CameraDeviceChanged(self: ?*anyopaque, ) void {
        qtc.QCamera_CameraDeviceChanged(@ptrCast(self));
    }

    pub fn OnCameraDeviceChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_Connect_CameraDeviceChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CameraFormatChanged(self: ?*anyopaque, ) void {
        qtc.QCamera_CameraFormatChanged(@ptrCast(self));
    }

    pub fn OnCameraFormatChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_Connect_CameraFormatChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn SupportedFeaturesChanged(self: ?*anyopaque, ) void {
        qtc.QCamera_SupportedFeaturesChanged(@ptrCast(self));
    }

    pub fn OnSupportedFeaturesChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_Connect_SupportedFeaturesChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn FocusModeChanged(self: ?*anyopaque, ) void {
        qtc.QCamera_FocusModeChanged(@ptrCast(self));
    }

    pub fn OnFocusModeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_Connect_FocusModeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ZoomFactorChanged(self: ?*anyopaque, param1: f32) void {
        qtc.QCamera_ZoomFactorChanged(@ptrCast(self), param1);
    }

    pub fn OnZoomFactorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f32) callconv(.c) void) void {
        qtc.QCamera_Connect_ZoomFactorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn MinimumZoomFactorChanged(self: ?*anyopaque, param1: f32) void {
        qtc.QCamera_MinimumZoomFactorChanged(@ptrCast(self), param1);
    }

    pub fn OnMinimumZoomFactorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f32) callconv(.c) void) void {
        qtc.QCamera_Connect_MinimumZoomFactorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn MaximumZoomFactorChanged(self: ?*anyopaque, param1: f32) void {
        qtc.QCamera_MaximumZoomFactorChanged(@ptrCast(self), param1);
    }

    pub fn OnMaximumZoomFactorChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f32) callconv(.c) void) void {
        qtc.QCamera_Connect_MaximumZoomFactorChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn FocusDistanceChanged(self: ?*anyopaque, param1: f32) void {
        qtc.QCamera_FocusDistanceChanged(@ptrCast(self), param1);
    }

    pub fn OnFocusDistanceChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f32) callconv(.c) void) void {
        qtc.QCamera_Connect_FocusDistanceChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn FocusPointChanged(self: ?*anyopaque, ) void {
        qtc.QCamera_FocusPointChanged(@ptrCast(self));
    }

    pub fn OnFocusPointChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_Connect_FocusPointChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn CustomFocusPointChanged(self: ?*anyopaque, ) void {
        qtc.QCamera_CustomFocusPointChanged(@ptrCast(self));
    }

    pub fn OnCustomFocusPointChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_Connect_CustomFocusPointChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn FlashReady(self: ?*anyopaque, param1: bool) void {
        qtc.QCamera_FlashReady(@ptrCast(self), param1);
    }

    pub fn OnFlashReady(self: ?*anyopaque, callback: *const fn (?*anyopaque, bool) callconv(.c) void) void {
        qtc.QCamera_Connect_FlashReady(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn FlashModeChanged(self: ?*anyopaque, ) void {
        qtc.QCamera_FlashModeChanged(@ptrCast(self));
    }

    pub fn OnFlashModeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_Connect_FlashModeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn TorchModeChanged(self: ?*anyopaque, ) void {
        qtc.QCamera_TorchModeChanged(@ptrCast(self));
    }

    pub fn OnTorchModeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_Connect_TorchModeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ExposureTimeChanged(self: ?*anyopaque, speed: f32) void {
        qtc.QCamera_ExposureTimeChanged(@ptrCast(self), speed);
    }

    pub fn OnExposureTimeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f32) callconv(.c) void) void {
        qtc.QCamera_Connect_ExposureTimeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ManualExposureTimeChanged(self: ?*anyopaque, speed: f32) void {
        qtc.QCamera_ManualExposureTimeChanged(@ptrCast(self), speed);
    }

    pub fn OnManualExposureTimeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f32) callconv(.c) void) void {
        qtc.QCamera_Connect_ManualExposureTimeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn IsoSensitivityChanged(self: ?*anyopaque, param1: i32) void {
        qtc.QCamera_IsoSensitivityChanged(@ptrCast(self), param1);
    }

    pub fn OnIsoSensitivityChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QCamera_Connect_IsoSensitivityChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ManualIsoSensitivityChanged(self: ?*anyopaque, param1: i32) void {
        qtc.QCamera_ManualIsoSensitivityChanged(@ptrCast(self), param1);
    }

    pub fn OnManualIsoSensitivityChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32) callconv(.c) void) void {
        qtc.QCamera_Connect_ManualIsoSensitivityChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ExposureCompensationChanged(self: ?*anyopaque, param1: f32) void {
        qtc.QCamera_ExposureCompensationChanged(@ptrCast(self), param1);
    }

    pub fn OnExposureCompensationChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, f32) callconv(.c) void) void {
        qtc.QCamera_Connect_ExposureCompensationChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ExposureModeChanged(self: ?*anyopaque, ) void {
        qtc.QCamera_ExposureModeChanged(@ptrCast(self));
    }

    pub fn OnExposureModeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_Connect_ExposureModeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn WhiteBalanceModeChanged(self: ?*anyopaque, ) void {
        qtc.QCamera_WhiteBalanceModeChanged(@ptrCast(self));
    }

    pub fn OnWhiteBalanceModeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_Connect_WhiteBalanceModeChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ColorTemperatureChanged(self: ?*anyopaque, ) void {
        qtc.QCamera_ColorTemperatureChanged(@ptrCast(self));
    }

    pub fn OnColorTemperatureChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_Connect_ColorTemperatureChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn BrightnessChanged(self: ?*anyopaque, ) void {
        qtc.QCamera_BrightnessChanged(@ptrCast(self));
    }

    pub fn OnBrightnessChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_Connect_BrightnessChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn ContrastChanged(self: ?*anyopaque, ) void {
        qtc.QCamera_ContrastChanged(@ptrCast(self));
    }

    pub fn OnContrastChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_Connect_ContrastChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn SaturationChanged(self: ?*anyopaque, ) void {
        qtc.QCamera_SaturationChanged(@ptrCast(self));
    }

    pub fn OnSaturationChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_Connect_SaturationChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn HueChanged(self: ?*anyopaque, ) void {
        qtc.QCamera_HueChanged(@ptrCast(self));
    }

    pub fn OnHueChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QCamera_Connect_HueChanged(@ptrCast(self), @intCast(@intFromPtr(callback)));
    }

    pub fn Tr2(s: []const u8, c: []const u8, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCamera_Tr2(@ptrCast(s), @ptrCast(c));
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcamera.Tr2: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    pub fn Tr3(s: []const u8, c: []const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const _str = qtc.QCamera_Tr3(@ptrCast(s), @ptrCast(c), n);
defer qtc.libqt_string_free(&_str);
const _ret = allocator.alloc(u8, _str.len) catch @panic("qcamera.Tr3: Memory allocation failed");
@memcpy(_ret, _str.data[0.._str.len]);
return  _ret;
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCamera_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/camera.html#types
pub const enums = struct {
    pub const Error = enum {
        pub const NoError: i32 = 0;
        pub const CameraError: i32 = 1;
    };

    pub const FocusMode = enum {
        pub const FocusModeAuto: i32 = 0;
        pub const FocusModeAutoNear: i32 = 1;
        pub const FocusModeAutoFar: i32 = 2;
        pub const FocusModeHyperfocal: i32 = 3;
        pub const FocusModeInfinity: i32 = 4;
        pub const FocusModeManual: i32 = 5;
    };

    pub const FlashMode = enum {
        pub const FlashOff: i32 = 0;
        pub const FlashOn: i32 = 1;
        pub const FlashAuto: i32 = 2;
    };

    pub const TorchMode = enum {
        pub const TorchOff: i32 = 0;
        pub const TorchOn: i32 = 1;
        pub const TorchAuto: i32 = 2;
    };

    pub const ExposureMode = enum {
        pub const ExposureAuto: i32 = 0;
        pub const ExposureManual: i32 = 1;
        pub const ExposurePortrait: i32 = 2;
        pub const ExposureNight: i32 = 3;
        pub const ExposureSports: i32 = 4;
        pub const ExposureSnow: i32 = 5;
        pub const ExposureBeach: i32 = 6;
        pub const ExposureAction: i32 = 7;
        pub const ExposureLandscape: i32 = 8;
        pub const ExposureNightPortrait: i32 = 9;
        pub const ExposureTheatre: i32 = 10;
        pub const ExposureSunset: i32 = 11;
        pub const ExposureSteadyPhoto: i32 = 12;
        pub const ExposureFireworks: i32 = 13;
        pub const ExposureParty: i32 = 14;
        pub const ExposureCandlelight: i32 = 15;
        pub const ExposureBarcode: i32 = 16;
    };

    pub const WhiteBalanceMode = enum {
        pub const WhiteBalanceAuto: i32 = 0;
        pub const WhiteBalanceManual: i32 = 1;
        pub const WhiteBalanceSunlight: i32 = 2;
        pub const WhiteBalanceCloudy: i32 = 3;
        pub const WhiteBalanceShade: i32 = 4;
        pub const WhiteBalanceTungsten: i32 = 5;
        pub const WhiteBalanceFluorescent: i32 = 6;
        pub const WhiteBalanceFlash: i32 = 7;
        pub const WhiteBalanceSunset: i32 = 8;
    };

    pub const Feature = enum {
        pub const ColorTemperature: i32 = 1;
        pub const ExposureCompensation: i32 = 2;
        pub const IsoSensitivity: i32 = 4;
        pub const ManualExposureTime: i32 = 8;
        pub const CustomFocusPoint: i32 = 16;
        pub const FocusDistance: i32 = 32;
    };

};
