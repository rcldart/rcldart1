import 'dart:ffi';

import '../rcldart.dart';
import 'context.dart';

class NodeOptions {
  NodeOptions({rcl_allocator_t? allocator}) : context = globalDefaultContext;
  NodeOptions.fromContext(this.context);
  final Pointer<rcl_node_options_t> rclNodeOptions = nullptr;
  final List<String> _arguments = [];
  set arguments(List<String> args) {
    _arguments
      ..clear()
      ..addAll(args);
  }

  List<String> get arguments => _arguments;

  final Context context;
}
