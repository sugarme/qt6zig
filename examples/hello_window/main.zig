const qt6 = @import("qt6zig");
const qapplication = qt6.qapplication;
const qwidget = qt6.qwidget;

pub fn main() !void {
    // Initialize the Qt application
    const dummy_arg: [*:0]u8 = @constCast(@ptrCast("qt6zig"));
    var argv = [_][*:0]u8{dummy_arg};
    const app = qapplication.New(1, &argv);
    defer qapplication.QDelete(app);

    // Create a window
    const window = qwidget.New2();
    qwidget.SetWindowTitle(window, "Hello Qt6 from Zig!");
    qwidget.Resize(window, 400, 300);
    qwidget.Show(window);

    // Run the event loop
    _ = qapplication.Exec();
}
