import 'dart:ffi';
import 'dart:io';

import 'ffi_bindings.dart';
export 'ffi_bindings.dart';

final ros2Version = getRosVersion();
final platformExtension = Platform.isMacOS
    ? 'dylib'
    : Platform.isLinux
        ? 'so'
        : '.dll';
String? ros2customPath;
final rcl = RCL(
  DynamicLibrary.open(
      ros2customPath ?? '/opt/ros/$ros2Version/lib/librcl.$platformExtension'),
);

// ignore_for_file: camel_case_types
typedef rcl_allocator_t = rcutils_allocator_t;
typedef rcl_ret_t = int;

String getRosVersion() {
  for (final version in ['galactic', 'foxy', 'eloquent', 'dashing']) {
    if (Directory('/opt/ros/$version').existsSync()) {
      return version;
    }
  }
  throw UnimplementedError(
      'ROS Version not found, please set ros2customPath=/path/to/librcl.so');
}
