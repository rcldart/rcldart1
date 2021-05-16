import 'dart:ffi';
import 'dart:io';

import 'package:ffi/ffi.dart';
import 'package:rcldart/src/exceptions.dart';
import 'package:rcldart/src/logger/logger.dart';

import 'gen/ffi.dart';
import 'init_options.dart';

class ContextAlreadyInitialized extends Error {
  @override
  String toString() => 'context is already initialized';
}

typedef OnShutdownCallback = Function(void);

class Context {
  void _deleteContext(Pointer<rcl_context_t> context) {
    if (context != nullptr) {
      if (rcl.rcl_context_is_valid(context)) {
        rclDartLogger
            .error('rcl context unexpectedly not shutdown during cleanup');
      } else {
        final ret = rcl.rcl_context_fini(context);
        if (ret != RCL_RET_OK) {
          final err = rcl.rcutils_get_error_string().str;
          rclDartLogger.error('failed to finalize context: $err');
          // TODO: Convert err to utf8
          rcl.rcutils_reset_error();
        }
      }
      calloc.free(context);
      // ignore: parameter_assignments
      context = nullptr;
    }
  }

  void init(List<String> args, {InitOptions? options}) {
    if (isValid) {
      throw ContextAlreadyInitialized();
    }
    _cleanUp();
    _rclContext = calloc.allocate<rcl_context_t>(sizeOf<rcl_context_t>());
    final c = rcl.rcl_get_zero_initialized_context();
    _rclContext.ref.impl = c.impl;
    _rclContext.ref.global_arguments = c.global_arguments;
    _rclContext.ref.instance_id_storage = c.instance_id_storage;
    final ret =
        rcl.rcl_init(args.length, nullptr, options!.initOptions, _rclContext);

    if (ret != RCL_RET_OK) {
      calloc.free(_rclContext);
      throwFromRclError(ret, prefix: 'failed to initialize rcl');
    }

    _deleteContext(_rclContext);
    if (initOptions.autoInitializeLogging) {
      // TODO: Logging
    }
    try {} on Exception catch (e) {}
  }

  bool get isValid => throw UnimplementedError();
  InitOptions get initOptions => throw UnimplementedError();
  int get domainId => throw UnimplementedError();
  String get shutdownReason => throw UnimplementedError();
  bool shutdown(String reason) => throw UnimplementedError();
  OnShutdownCallback onShutdown(OnShutdownCallback callback) =>
      throw UnimplementedError();
  List<OnShutdownCallback> get onShutdownCallbacks =>
      throw UnimplementedError();
  rcl_context_t get rclContext => throw UnimplementedError();
  bool sleepFor(Duration duration) => throw UnimplementedError();
  void interruptAllSleepFor() => throw UnimplementedError();
  SubContext getSubContext<SubContext>(List<dynamic> args) {
    throw UnimplementedError();
  }

  void finalize() {
    try {
      shutdown('context destructor was called while still not shutdown');
      _cleanUp();
    } on Exception catch (e) {} catch (o) {} // TODO: Log exceptions
  }

  void _cleanUp() => throw UnimplementedError();
  Pointer<rcl_context_t> _rclContext = nullptr;
  InitOptions? _initOptions;
  String _shutdownReason = '';
  final Map<Type, dynamic> _subContexts = {};
  final List<OnShutdownCallback> _onShutdownCallbacks = [];
}

List<Context> getContexts() => throw UnimplementedError();
