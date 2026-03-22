const QtC = @import("qt6zig");
const qtc = @import("qt6c");%%_IMPORTLIBS_%%
%%_STRUCTDEFS_%%

/// https://doc.qt.io/qt-6/qpermission.html
pub const qpermission = struct {

    /// New constructs a new QPermission object.
    pub fn New() QtC.QPermission {
        return qtc.QPermission_new();
    }


    /// New2 constructs a new QPermission object.
    pub fn New2(param1: ?*anyopaque) QtC.QPermission {
        return qtc.QPermission_new2(@ptrCast(param1));
    }


    pub fn Status(self: ?*anyopaque, ) i32 {
        return qtc.QPermission_Status(@ptrCast(self));
    }

    pub fn Type(self: ?*anyopaque, ) QtC.QMetaType {
        return qtc.QPermission_Type(@ptrCast(self));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPermission_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qlocationpermission.html
pub const qlocationpermission = struct {

    /// New constructs a new QLocationPermission object.
    pub fn New() QtC.QLocationPermission {
        return qtc.QLocationPermission_new();
    }


    /// New2 constructs a new QLocationPermission object.
    pub fn New2(other: ?*anyopaque) QtC.QLocationPermission {
        return qtc.QLocationPermission_new2(@ptrCast(other));
    }


    pub fn SetAccuracy(self: ?*anyopaque, accuracy: u8) void {
        qtc.QLocationPermission_SetAccuracy(@ptrCast(self), @intCast(accuracy));
    }

    pub fn Accuracy(self: ?*anyopaque, ) u8 {
        return qtc.QLocationPermission_Accuracy(@ptrCast(self));
    }

    pub fn SetAvailability(self: ?*anyopaque, availability: u8) void {
        qtc.QLocationPermission_SetAvailability(@ptrCast(self), @intCast(availability));
    }

    pub fn Availability(self: ?*anyopaque, ) u8 {
        return qtc.QLocationPermission_Availability(@ptrCast(self));
    }

    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QLocationPermission_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QLocationPermission_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QLocationPermission_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qcalendarpermission.html
pub const qcalendarpermission = struct {

    /// New constructs a new QCalendarPermission object.
    pub fn New() QtC.QCalendarPermission {
        return qtc.QCalendarPermission_new();
    }


    /// New2 constructs a new QCalendarPermission object.
    pub fn New2(other: ?*anyopaque) QtC.QCalendarPermission {
        return qtc.QCalendarPermission_new2(@ptrCast(other));
    }


    pub fn SetAccessMode(self: ?*anyopaque, mode: i32) void {
        qtc.QCalendarPermission_SetAccessMode(@ptrCast(self), @intCast(mode));
    }

    pub fn AccessMode(self: ?*anyopaque, ) i32 {
        return qtc.QCalendarPermission_AccessMode(@ptrCast(self));
    }

    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCalendarPermission_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCalendarPermission_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCalendarPermission_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qcontactspermission.html
pub const qcontactspermission = struct {

    /// New constructs a new QContactsPermission object.
    pub fn New() QtC.QContactsPermission {
        return qtc.QContactsPermission_new();
    }


    /// New2 constructs a new QContactsPermission object.
    pub fn New2(other: ?*anyopaque) QtC.QContactsPermission {
        return qtc.QContactsPermission_new2(@ptrCast(other));
    }


    pub fn SetAccessMode(self: ?*anyopaque, mode: i32) void {
        qtc.QContactsPermission_SetAccessMode(@ptrCast(self), @intCast(mode));
    }

    pub fn AccessMode(self: ?*anyopaque, ) i32 {
        return qtc.QContactsPermission_AccessMode(@ptrCast(self));
    }

    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QContactsPermission_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QContactsPermission_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QContactsPermission_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qbluetoothpermission.html
pub const qbluetoothpermission = struct {

    /// New constructs a new QBluetoothPermission object.
    pub fn New() QtC.QBluetoothPermission {
        return qtc.QBluetoothPermission_new();
    }


    /// New2 constructs a new QBluetoothPermission object.
    pub fn New2(other: ?*anyopaque) QtC.QBluetoothPermission {
        return qtc.QBluetoothPermission_new2(@ptrCast(other));
    }


    pub fn SetCommunicationModes(self: ?*anyopaque, modes: u8) void {
        qtc.QBluetoothPermission_SetCommunicationModes(@ptrCast(self), @intCast(modes));
    }

    pub fn CommunicationModes(self: ?*anyopaque, ) u8 {
        return qtc.QBluetoothPermission_CommunicationModes(@ptrCast(self));
    }

    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QBluetoothPermission_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QBluetoothPermission_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QBluetoothPermission_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qcamerapermission.html
pub const qcamerapermission = struct {

    /// New constructs a new QCameraPermission object.
    pub fn New() QtC.QCameraPermission {
        return qtc.QCameraPermission_new();
    }


    /// New2 constructs a new QCameraPermission object.
    pub fn New2(other: ?*anyopaque) QtC.QCameraPermission {
        return qtc.QCameraPermission_new2(@ptrCast(other));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCameraPermission_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QCameraPermission_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QCameraPermission_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qmicrophonepermission.html
pub const qmicrophonepermission = struct {

    /// New constructs a new QMicrophonePermission object.
    pub fn New() QtC.QMicrophonePermission {
        return qtc.QMicrophonePermission_new();
    }


    /// New2 constructs a new QMicrophonePermission object.
    pub fn New2(other: ?*anyopaque) QtC.QMicrophonePermission {
        return qtc.QMicrophonePermission_new2(@ptrCast(other));
    }


    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMicrophonePermission_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    pub fn Swap(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QMicrophonePermission_Swap(@ptrCast(self), @ptrCast(other));
    }

    /// Delete this object from C++ memory.
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QMicrophonePermission_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/permissions.html#types
pub const enums = struct {
    pub const Accuracy = enum {
        pub const Approximate: u8 = 0;
        pub const Precise: u8 = 1;
    };

    pub const Availability = enum {
        pub const WhenInUse: u8 = 0;
        pub const Always: u8 = 1;
    };

    pub const AccessMode = enum {
        pub const ReadOnly: u8 = 0;
        pub const ReadWrite: u8 = 1;
    };

    pub const CommunicationMode = enum {
        pub const Access: u8 = 1;
        pub const Advertise: u8 = 2;
        pub const Default: u8 = 3;
    };

};
