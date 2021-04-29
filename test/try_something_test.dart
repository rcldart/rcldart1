import 'dart:ffi';

import 'package:rcldart/rcldart.dart';
import 'package:ffi/ffi.dart';

Future<void> main() async {
  final rcl = RCL(DynamicLibrary.open('/opt/ros/eloquent/lib/librcl.so'));
  final poptions =
      calloc.allocate<rcl_init_options_t>(sizeOf<rcl_init_options_t>());
  poptions.ref.impl = Pointer.fromAddress(0);
  final pcontext = calloc.allocate<rcl_context_t>(sizeOf<rcl_context_t>());
  final allocator = rcl.rcutils_get_default_allocator();
  var result = rcl.rcl_init_options_init(poptions, allocator);
  print(result);

  final context = rcl.rcl_get_zero_initialized_context();
  pcontext.ref.global_arguments = context.global_arguments;
  pcontext.ref.impl = context.impl;
  result = rcl.rcl_init(0, Pointer.fromAddress(0), poptions, pcontext);
  print(result);
  await Future.delayed(const Duration(milliseconds: 1000));
  result = rcl.rcl_shutdown(pcontext);
  print(result);

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
