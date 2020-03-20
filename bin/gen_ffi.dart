import 'package:dshell/dshell.dart';
import 'package:petitparser/petitparser.dart';

final version = "eloquent";

void main() {
  final installLoc = "/opt/ros/$version";
  final includeDir = "$installLoc/include";
  final rclHeaders = "$includeDir/rcl";

  final rclMainHeader = "$rclHeaders/rcl.h";
  final command = 'clang -I$includeDir -P -E -nobuiltininc -nostdinc $rclMainHeader';
  // print(command);
  final preprocessed = command.toList(runInShell: true, nothrow: false).join("\n");
  final outputName = 'gen/preprocessed.h';
  if (exists(outputName)) delete(outputName);
  outputName.append(preprocessed);
}

class CHeaderGrammar extends GrammarParser {
  CHeaderGrammar() : super(CHeaderGrammarDefinition());
}

class CHeaderGrammarDefinition extends GrammarDefinition {
  @override
  Parser start() {}
}
