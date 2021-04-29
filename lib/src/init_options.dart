import 'gen/ffi.dart';

class InitOptions {
  bool shutdown_on_sigint = true;
  bool auto_initialize_logging = true;
  InitOptions({rcl_allocator_t? allocator});

  void finalize_init_options() {}
  int get domainId => throw UnimplementedError();
  set domainId(int id) => throw UnimplementedError();
  late rcl_init_options_t _init_options;
}
