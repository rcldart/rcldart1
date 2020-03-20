import 'package:dshell/dshell.dart';
import 'package:petitparser/petitparser.dart';

final version = "eloquent";

void main() {
  final outputName = 'gen/preprocessed.h';
  if (!exists(outputName)) {
    final installLoc = "/opt/ros/$version";
    final includeDir = "$installLoc/include";
    final rclHeaders = "$includeDir/rcl";

    final rclMainHeader = "$rclHeaders/rcl.h";
    final command = 'clang -I$includeDir -P -E -nobuiltininc -nostdinc $rclMainHeader';
    // print(command);
    final preprocessed = command.toList(runInShell: true, nothrow: false).join("\n");
    outputName.append(preprocessed);
  } else {
    final file = read(outputName).toList().join('\n');
    CHeaderGrammar().parse(file);
  }
}

class CHeaderGrammar extends GrammarParser {
  CHeaderGrammar() : super(CHeaderGrammarDefinition());
}

class CHeaderGrammarDefinition extends GrammarDefinition {
  @override
  Parser start() {
    return (digit() | letter() | whitespace()).star().map((x) => print(x));
  }

  functionDefinition() =>
      returnType() &
      whitespace() &
      functionName() &
      whitespace().optional() &
      char('(') &
      whitespace().optional() &
      functionArgs().optional() &
      whitespace().optional() &
      char(')') &
      whitespace().optional() &
      char(';');
  returnType() => type();
  type() => name();
  functionName() => name();
  name() => (letter() & (digit() | letter()).optional()).flatten();
  arg() => type() + name();
  functionArgs() => list(arg);
  list(parser) => parser() & (char(',') & whitespace().optional() & parser() & whitespace().optional()).optional();
}

/// models
class TypeDefinition extends Type {}

class Struct extends Type {}

class FunctionDefinition {
  final List<Type> args;
  final Type returnValue;
  FunctionDefinition(this.args, this.returnValue);
}

class Type {}

class ExternFunctionDefinition extends Type {
  final FunctionDefinition definition;
  ExternFunctionDefinition(this.definition);
}
