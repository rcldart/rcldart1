import 'gen/ffi.dart';
import 'init_options.dart';

class ContextAlreadyInitialized extends Error {
  @override
  String toString() {
    return 'context is already initialized';
  }
}

typedef OnShutdownCallback = Function(void);

class Context {
  void init(List<String> args, {InitOptions? options}) {}
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
  rcl_context_t? _rclContext;
  InitOptions? _initOptions;
  String _shutdownReason = '';
  final Map<Type, dynamic> _subContexts = {};
  final List<OnShutdownCallback> _onShutdownCallbacks = [];
}

List<Context> getContexts() => throw UnimplementedError();
