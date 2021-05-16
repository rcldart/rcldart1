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

typedef OnShutdownCallback = Function();

class Context {
  void _deleteContext() {
    if (_rclContext != nullptr) {
      if (rcl.rcl_context_is_valid(_rclContext)) {
        rclDartLogger
            .error('rcl context unexpectedly not shutdown during cleanup');
      } else {
        final ret = rcl.rcl_context_fini(_rclContext);
        if (ret != RCL_RET_OK) {
          final err = rcl.rcutils_get_error_string().str;
          rclDartLogger.error('failed to finalize context: $err');
          // TODO: Convert err to utf8
          rcl.rcutils_reset_error();
        }
      }
      calloc.free(_rclContext);
      // ignore: parameter_assignments
      _rclContext = nullptr;
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

    _deleteContext();
    if (initOptions.autoInitializeLogging) {
      // TODO: Logging
    }
    try {} on Exception catch (e) {
      final ret = rcl.rcl_shutdown(_rclContext);
      _rclContext = nullptr;
      if (ret != RCL_RET_OK) {
        throwFromRclError(
          ret,
          prefix: 'While handling $e another exception was thrown',
        );
      }
    }
  }

  bool get isValid {
    if (_rclContext == nullptr) {
      return false;
    }
    return rcl.rcl_context_is_valid(_rclContext);
  }

  InitOptions get initOptions => _initOptions!;
  String get shutdownReason => _shutdownReason;
  bool shutdown(String reason) {
    if (!isValid) {
      return false;
    }
    final ret = rcl.rcl_shutdown(_rclContext);
    if (ret != RCL_RET_OK) {
      throwFromRclError(ret);
    }
    _shutdownReason = reason;
    for (final callback in _onShutdownCallbacks) {
      callback();
    }
    interruptAllSleepFor();
    // TODO: weak contexts
    // TODO: Shut down logging
    return true;
  }

  OnShutdownCallback onShutdown(OnShutdownCallback callback) {
    _onShutdownCallbacks.add(callback);
    return callback;
  }

  List<OnShutdownCallback> get onShutdownCallbacks => _onShutdownCallbacks;
  Pointer<rcl_context_t> get rclContext => _rclContext;
  Future<bool> sleepFor(Duration duration) async {
    await Future.delayed(duration);
    return isValid;
  }

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

  void _cleanUp() {
    _shutdownReason = '';
    _rclContext = nullptr;
    // TODO: Subcontexts
  }

  Pointer<rcl_context_t> _rclContext = nullptr;
  InitOptions? _initOptions;
  String _shutdownReason = '';
  final Map<Type, dynamic> _subContexts = {};
  final List<OnShutdownCallback> _onShutdownCallbacks = [];
}

List<Context> getContexts() => throw UnimplementedError();
