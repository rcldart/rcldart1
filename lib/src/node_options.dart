import 'dart:ffi';

import 'package:ffi/ffi.dart';

import '../rcldart.dart';
import 'context.dart';

class NodeOptions {
  NodeOptions({rcl_allocator_t? allocator})
      : context = globalDefaultContext,
        allocator = allocator ?? rcl.rcutils_get_default_allocator();
  Pointer<rcl_node_options_t> nodeOptions = nullptr;
  final rcl_allocator_t allocator;
  bool allowUndeclaredParameters = false;
  bool automaticallyDeclareParametersFromOverrides = false;
  bool useGlobalArguments = true;
  bool useIntraProcessComms = false;
  bool startParameterServices = true;
  bool startParameterEventPublisher = true;
  final List<Parameter> parameterOverrides = [];
  final List<String> _arguments = [];
  set arguments(List<String> args) {
    _arguments
      ..clear()
      ..addAll(args);
  }

  List<String> get arguments => _arguments;

  final Context context;

  void dispose() {
    if (nodeOptions != nullptr) {
      final ret = rcl.rcl_node_options_fini(nodeOptions);
      if (RCL_RET_OK != ret) {
        //TODO: Error
        rcl.rcutils_reset_error();
      }
      calloc.free(nodeOptions);
      nodeOptions = nullptr;
    }
  }
}
