const std = @import("std");
const qt6 = @import("qt6zig");
const qapplication = qt6.qapplication;
const qpushbutton = qt6.qpushbutton;
const qwidget = qt6.qwidget;

pub fn main() !void {
    qt6.registerPlatformPlugins();

    const dummy_arg: [*:0]u8 = @constCast(@ptrCast("qt6zig"));
    var argv = [_][*:0]u8{dummy_arg};
    const app = qapplication.New(1, &argv);
    defer qapplication.QDelete(app);

    // Create a window with a push button
    const window = qwidget.New2();
    qwidget.SetWindowTitle(window, "Hello Button");
    qwidget.Resize(window, 300, 200);

    // Create a push button as child of the window
    const button = qpushbutton.New5("Click me!", window);
    qpushbutton.SetGeometry(button, 50, 50, 200, 60);

    // Connect the clicked signal
    qpushbutton.OnClicked(button, &onButtonClicked);

    qwidget.Show(window);
    _ = qapplication.Exec();
}

fn onButtonClicked(_: ?*anyopaque) callconv(.c) void {
    std.debug.print("Button was clicked!\n", .{});
}
