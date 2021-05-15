import 'dart:ffi';

import 'package:rcldart/rcldart.dart';
import 'package:ffi/ffi.dart';

Future<void> main() async {
  const prefix = '/Users/timwhiting/dartlibs/rcldart/libs';
  for (final lib in [
    'librcutils',
    'librcpputils',
    'librosidl_runtime_c',
    'librosidl_typesupport_c',
    'librosidl_typesupport_cpp',
    'librosidl_typesupport_introspection_c',
    'librosidl_typesupport_introspection_cpp',
    'libbuiltin_interfaces__rosidl_generator_c',
    'libbuiltin_interfaces__rosidl_typesupport_introspection_c',
    'libbuiltin_interfaces__rosidl_typesupport_c',
    'libbuiltin_interfaces__rosidl_typesupport_cpp',
    'libbuiltin_interfaces__rosidl_typesupport_introspection_cpp',
    'librcl_interfaces__rosidl_generator_c',
    'librcl_interfaces__rosidl_typesupport_introspection_c',
    'librcl_interfaces__rosidl_typesupport_c',
    'librcl_interfaces__rosidl_typesupport_introspection_cpp',
    'librcl_interfaces__rosidl_typesupport_cpp',
    'libyaml',
    'librmw',
    'librcl_yaml_param_parser',
    'librmw_implementation',
    'librmw_fastrtps_cpp',
    'librcl_logging_interface',
    'librcl_logging_spdlog',
    'libtracetools',
  ]) {
    DynamicLibrary.open('$prefix/$lib.dylib');
  }
  ros2customPath = '$prefix/librcl.dylib';
  final options = rcl.rcl_get_zero_initialized_init_options();
  final poptions =
      calloc.allocate<rcl_init_options_t>(sizeOf<rcl_init_options_t>());
  poptions.ref.impl = options.impl;
  final allocator = rcl.rcutils_get_default_allocator();
  var result = rcl.rcl_init_options_init(poptions, allocator);
  print(result);
  if (result == 0) {
    // final context = rcl.rcl_get_zero_initialized_context();
    // pcontext.ref.global_arguments = context.global_arguments;
    // pcontext.ref.impl = context.impl;
    // result = rcl.rcl_init(0, Pointer.fromAddress(0), poptions, pcontext);
    // print(result);
    // await Future.delayed(const Duration(milliseconds: 1000));
    // result = rcl.rcl_shutdown(pcontext);
    // print(result);
  } else {}

  // final node = rcl.rcl_get_zero_initialized_node();
  // final pnode = allocate<rcl_node_t>();
  // pnode.ref.context = node.context;
  // pnode.ref.impl = node.impl;
  // final options = rcl.rcl_node_get_default_options();
  // final poptions = allocate<rcl_node_options_t>();
  // poptions.ref.allocator = options.allocator;
  // poptions.ref.arguments = options.arguments;
  // poptions.ref.domain_id = options.domain_id;
  // poptions.ref.enable_rosout = options.enable_rosout;
  // poptions.ref.use_global_arguments = options.use_global_arguments;
  // final context = rcl.rcl_con
  // rcl.rcl_node_init(
  //     pnode, Utf8.toUtf8('name'), Utf8.toUtf8(''), pcontext, poptions);
}
