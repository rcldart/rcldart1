import 'dart:ffi';

import 'gen/ffi.dart';

class InvalidNodeError extends Error {
  InvalidNodeError();
  @override
  String toString() => 'node is invalid';
}

class NameValidationError extends ArgumentError {
  NameValidationError(this.nameType, this.name, this.errorMsg);

  final String nameType;
  @override
  // ignore: overridden_fields
  final String name;
  final String errorMsg;
}

class InvalidNodeNameError extends NameValidationError {
  InvalidNodeNameError(String name, String errorMsg)
      : super('node name', name, errorMsg);
}

class InvalidNamespaceError extends NameValidationError {
  InvalidNamespaceError(String name, String errorMsg)
      : super('namespace', name, errorMsg);
}

class InvalidTopicNameError extends NameValidationError {
  InvalidTopicNameError(String name, String errorMsg)
      : super('topic name', name, errorMsg);
}

class InvalidServiceNameError extends NameValidationError {
  InvalidServiceNameError(String name, String errorMsg)
      : super('service name', name, errorMsg);
}

class RCLErrorBase {
  RCLErrorBase(this.ret, this.errorState);
  RCLErrorBase.fromBase(RCLErrorBase base)
      : ret = base.ret,
        errorState = base.errorState;

  final rcl_ret_t ret;
  final Pointer<rcl_error_state_t> errorState;
  String get message => throw UnimplementedError();
  String get file => throw UnimplementedError();
  int get line => errorState.ref.line_number;
  String get formattedMessage => throw UnimplementedError();
}

class RCLError extends RCLErrorBase {
  RCLError(RCLErrorBase errorState, String formattedPrefix)
      : super.fromBase(errorState);
}

class RCLBadAlloc extends RCLErrorBase {
  RCLBadAlloc(RCLErrorBase errorState) : super.fromBase(errorState);
}

class RCLInvalidArgument extends RCLErrorBase {
  RCLInvalidArgument(RCLErrorBase errorState, String formattedPrefix)
      : super.fromBase(errorState);
}

class RCLInvalidROSArgsError extends RCLErrorBase {
  RCLInvalidROSArgsError(RCLErrorBase errorState, String formattedPrefix)
      : super.fromBase(errorState);
}

class UnknownROSArgsError extends Error {}

class InvalidEventError extends Error {}

class EventNotRegisteredError extends Error {}

class InvalidParametersException implements Exception {}

class InvalidParameterValueException implements Exception {}

class InvalidParameterTypeException implements Exception {}

class ParameterAlreadyDeclaredException implements Exception {}

class ParameterNotDeclaredException implements Exception {}

class ParameterImmutableException implements Exception {}

class ParameterModifiedInCallbackException implements Exception {}

class NoParameterOverrideProvided extends Error {}

class InvalidQosOverridesException implements Exception {}

class QoSCheckCompatibleException implements Exception {}

Never throwFromRclError(
  rcl_ret_t ret, {
  String prefix = '',
  Pointer<rcl_error_state_t>? errorState,
  void Function()? resetError,
}) =>
    // ignore: only_throw_errors
    throw fromRCLError(ret, prefix, errorState, resetError);

RCLErrorBase fromRCLError(
  rcl_ret_t ret,
  String prefix,
  Pointer<rcl_error_state_t>? errorState,
  void Function()? resetError,
) {
  if (RCL_RET_OK == ret) {
    throw ArgumentError('ret is RCL_RET_OK');
  }
  // ignore: parameter_assignments
  errorState ??= rcl.rcutils_get_error_state();
  if (errorState == nullptr) {
    throw RCLErr('rcl error state is not set');
  }
  var formattedPrefix = prefix;
  if (prefix.isNotEmpty) {
    formattedPrefix += ': ';
  }
  final baseExec = RCLErrorBase(ret, errorState);
  if (resetError != null) {
    resetError();
  }
  switch (ret) {
    case RCL_RET_BAD_ALLOC:
      return RCLBadAlloc(baseExec);
    case RCL_RET_INVALID_ARGUMENT:
      return RCLInvalidArgument(baseExec, formattedPrefix);
    case RCL_RET_INVALID_ROS_ARGS:
      return RCLInvalidROSArgsError(baseExec, formattedPrefix);
    default:
      return RCLError(baseExec, formattedPrefix);
  }
}

class RCLErr extends Error {
  RCLErr(this.message);
  String message;
  @override
  String toString() => message;
}
