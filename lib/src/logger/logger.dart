import 'package:logging/logging.dart';

final rclDartLogger = Logger('rcldart');

extension LoggerHelper on Logger {
  void error(Object? message, [Object? error, StackTrace? stacktrace]) =>
      severe(message, error, stacktrace);
}
