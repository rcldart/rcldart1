import 'dart:ffi';

import 'package:ffi/ffi.dart';

import 'exceptions.dart';
import 'gen/ffi.dart';

/// Encapsulation of options for initializing rclcpp.
class InitOptions {
  /// Constructor
  ///
  /// It allows you to specify the [allocator] used within the init options.
  /// Throws anything throwFromRclError can throw.
  InitOptions({rcl_allocator_t? allocator}) {
    final allocate = allocator ?? rcl.rcutils_get_default_allocator();
    _initOptions = calloc.allocate(sizeOf<rcl_init_options_t>());
    final options = rcl.rcl_get_zero_initialized_init_options();
    _initOptions!.ref.impl = options.impl;
    final ret = rcl.rcl_init_options_init(_initOptions!, allocate);
    if (ret != RCL_RET_OK) {
      throwFromRclError(
        ret,
        prefix: 'failed to initialize rcl init options',
      );
    }
  }

  /// If true, the context will be shutdown on SIGINT by the signal handler
  ///
  ///  (if it was installed).
  bool shutdownOnSigint = true;

  /// Whether logging should be initialized when `Context.init` is called.
  bool autoInitializeLogging = true;

  void finalizeInitOptions() {}

  /// Return the domain id
  int get domainId => throw UnimplementedError();

  /// Set the domain id
  set domainId(int id) => throw UnimplementedError();

  Pointer<rcl_init_options_t>? _initOptions;
}
