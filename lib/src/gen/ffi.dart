import 'dart:ffi';

import 'ffi_bindings.dart';
export 'ffi_bindings.dart';

String rosVersion = 'eloquent';
String? customPath;
final rcl = RCL(
  DynamicLibrary.open(customPath ?? '/opt/ros/$rosVersion/lib/librcl.so'),
);

// ignore_for_file: camel_case_types
typedef rcl_allocator_t = rcutils_allocator_t;
typedef rcl_ret_t = int;
