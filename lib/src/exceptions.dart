import 'dart:ffi';

import 'gen/ffi.dart';

class InvalidNodeError extends Error {}

class NameValidationError extends ArgumentError {}

Never throwFromRclError(
  rcl_ret_t ret, {
  String prefix = '',
  Pointer<rcl_error_state_t>? errorState,
  void Function()? resetError,
}) =>
    throw UnimplementedError();
// TODO: Figure what this really is
