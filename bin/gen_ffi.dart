import 'package:dshell/dshell.dart';
import 'package:petitparser/petitparser.dart';
import 'package:petitparser/debug.dart';

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
    final test = """
    typedef int rcutils_ret_t;
typedef struct rcutils_allocator_t
{

  void *(*allocate)(size_t size, void *state);

  void (*deallocate)(void *pointer, void *state);
  void *(*reallocate)(void *pointer, size_t size, void *state);

  void *(*zero_allocate)(size_t number_of_elements, size_t size_of_element, void *state);

  void *state;
} rcutils_allocator_t;

__attribute__((visibility("default")))
__attribute__((warn_unused_result))
rcutils_allocator_t
rcutils_get_zero_initialized_allocator(void);
    """;
    final grammer = CHeaderGrammar();
    print("Created Grammer");
    grammer.parse(test);
    print("Parsed");
  }
}

class CHeaderGrammar extends GrammarParser {
  CHeaderGrammar() : super(CHeaderGrammarDefinition());
}
//typedef int rcutils_ret_t;
// typedef struct rcutils_allocator_t
// {

//   void *(*allocate)(size_t size, void *state);

//   void (*deallocate)(void *pointer, void *state);
//   void *(*reallocate)(void *pointer, size_t size, void *state);

//   void *(*zero_allocate)(size_t number_of_elements, size_t size_of_element, void *state);

//   void *state;
// } rcutils_allocator_t;

// __attribute__((visibility("default")))
// __attribute__((warn_unused_result))
// rcutils_allocator_t
// rcutils_get_zero_initialized_allocator(void);
class CHeaderGrammarDefinition extends GrammarDefinition {
  @override
  Parser start() {
    return externalDeclaration().star().end().map((value) => print(value));
  }

  List<String> enums = List();

  void Function(dynamic) debugPrint(name) {
    return (value) {
      print("$name: $value");
      return value;
    };
  }

//https://cs.wmich.edu/~gupta/teaching/cs4850/sumII06/The%20syntax%20of%20C%20in%20Backus-Naur%20form.htm
  Parser externalDeclaration() => (ref(declaration)
      //| ref(functionDefinition) This is not needed because we don't have any definitions, just declarations and it breaks the thing
      )
      .map(debugPrint('externalDeclaration'));
  Parser functionDefinition() =>
      (ref(declarationSpecifier).star() & ref(declarator) & ref(declaration).star() & ref(compoundStatement))
          .map(debugPrint('functionDefinition'));
  Parser declarationSpecifier() =>
      (ref(storageClassSpecifier) | ref(typeSpecifier) | ref(typeQualifier)).map(debugPrint('declarationSpecifier'));
  Parser storageClassSpecifier() => (ref(token, 'auto') |
          ref(token, 'register') |
          ref(token, 'static') |
          ref(token, 'extern') |
          ref(token, 'typedef'))
      .map(debugPrint('storageClassSpecifier'));
  Parser typeSpecifier() => (ref(token, 'void') |
          ref(token, 'char') |
          ref(token, 'short') |
          ref(token, 'int') |
          ref(token, 'long') |
          ref(token, 'float') |
          ref(token, 'double') |
          ref(token, 'signed') |
          ref(token, 'size_t') |
          ref(token, 'unsigned') |
          ref(structOrUnionSpecifier) |
          ref(enumSpecifier) |
          ref(typedefName))
      .map(debugPrint('typeSpecifier'));
  Parser structOrUnionSpecifier() =>
      (ref(structOrUnion) & ref(identifier) & openBrace() & ref(structDeclaration).plus() & closeBrace() |
              ref(structOrUnion) & openBrace() & ref(structDeclaration).plus() & closeBrace() |
              ref(structOrUnion) & ref(identifier))
          .map(debugPrint('structOrUnionSpecifier'));
  Parser structOrUnion() => (ref(token, 'struct') | ref(token, 'union')).map(debugPrint('structOrUnion'));
  Parser structDeclaration() =>
      (ref(specifierQualifier).star() & ref(structDeclaratorList)).map(debugPrint('structDeclaration'));
  Parser specifierQualifier() => (typeSpecifier() | typeQualifier()).map(debugPrint('specifierQualifier'));
  Parser structDeclaratorList() =>
      (ref(structDeclarator) | ref(structDeclarator) & (comma() & ref(structDeclarator)).star())
          .map(debugPrint('structDeclaratorList'));
  Parser structDeclarator() =>
      (ref(declarator) | ref(declarator) & colon() & ref(constantExpression) | colon() & ref(constantExpression))
          .map(debugPrint('structDeclarator'));
  Parser declarator() => (pointer().optional() & ref(directDeclarator)).map(debugPrint('declarator'));
  Parser pointer() => (star() & typeQualifier().star() & ref(pointer).optional()).map(debugPrint('pointer'));
  Parser typeQualifier() => (ref(token, 'const') | ref(token, 'volatile')).map(debugPrint('typeQualifier'));
  Parser directDeclarator() => (ref(identifier) |
          (openParen() & ref(declarator) & closeParen()) |
          (ref(directDeclarator) & openBracket() & ref(constantExpression).optional() & closeBracket()) |
          (ref(directDeclarator) & openParen() & parameterTypeList() & closeParen()) |
          (ref(directDeclarator) & openParen() & ref(identifier).star() & closeParen()))
      .map(debugPrint('directDeclarator'));

  Parser constantExpression() => conditionalExpression().map(debugPrint('constantExpression'));
  Parser conditionalExpression() =>
      ref(logicalOrExpression) |
      ref(logicalOrExpression) & ref(token, '?') & ref(expression) & colon() & ref(conditionalExpression);
  Parser logicalOrExpression() =>
      ref(logicalAndExpression) | ref(logicalOrExpression) & ref(token, '||') & ref(logicalAndExpression);
  Parser logicalAndExpression() =>
      ref(inclusiveOrExpression) | ref(logicalAndExpression) & ref(token, '&&') & ref(inclusiveOrExpression);
  Parser inclusiveOrExpression() =>
      ref(exclusiveOrExpression) | ref(inclusiveOrExpression) & ref(token, '|') & ref(exclusiveOrExpression);
  Parser exclusiveOrExpression() =>
      ref(andExpression) | ref(exclusiveOrExpression) & ref(token, '^') & ref(andExpression);
  Parser andExpression() => ref(equalityExpression) | ref(andExpression) & ref(token, '&') & ref(equalityExpression);
  Parser equalityExpression() =>
      ref(relationalExpression) |
      ref(equalityExpression) & ref(token, '==') & ref(relationalExpression) |
      ref(equalityExpression) & ref(token, '!=') & ref(relationalExpression);
  Parser relationalExpression() =>
      ref(shiftExpression) |
      ref(relationalExpression) & ref(token, '<') & ref(shiftExpression) |
      ref(relationalExpression) & ref(token, '>') & ref(shiftExpression) |
      ref(relationalExpression) & ref(token, '<=') & ref(shiftExpression) |
      ref(relationalExpression) & ref(token, '>=') & ref(shiftExpression);
  Parser shiftExpression() =>
      ref(additiveExpression) |
      ref(shiftExpression) & ref(token, '<<') & ref(additiveExpression) |
      ref(shiftExpression) & ref(token, '>>') & ref(additiveExpression);
  Parser additiveExpression() =>
      ref(multiplicativeExpression) |
      ref(additiveExpression) & ref(token, '+') & ref(multiplicativeExpression) |
      ref(additiveExpression) & ref(token, '-') & ref(multiplicativeExpression);
  Parser multiplicativeExpression() =>
      ref(castExpression) |
      ref(multiplicativeExpression) & ref(token, '*') & ref(castExpression) |
      ref(multiplicativeExpression) & ref(token, '/') & ref(castExpression) |
      ref(multiplicativeExpression) & ref(token, '%') & ref(castExpression);

  Parser castExpression() => ref(unaryExpression) | openParen() & ref(typeName) & ref(castExpression);
  Parser unaryExpression() =>
      ref(postfixExpression) |
      ref(token, '++') & ref(unaryExpression) |
      ref(token, '--') & ref(unaryExpression) |
      unaryOperator() & ref(castExpression) |
      sizeof() & ref(unaryExpression) |
      sizeof() & ref(typeName);
  Parser postfixExpression() =>
      ref(primaryExpression) |
      ref(postfixExpression) & openBracket() & ref(expression) & closeBracket() |
      ref(postfixExpression) & openParen() & ref(assignmentExpression).star() & closeParen() |
      ref(postfixExpression) & ref(token, '.') & ref(identifier) |
      ref(postfixExpression) & ref(token, '->') & ref(identifier) |
      ref(postfixExpression) & ref(token, '++') |
      ref(postfixExpression) & ref(token, '--');

  Parser primaryExpression() =>
      ref(identifier) | constant() | stringConstant() | openParen() & ref(expression) & closeParen();
  Parser constant() => (integerConstant() | characterConstant() | floatingConstant() | enumerationConstant())
      .map(debugPrint('constant'));
  Parser integerConstant() => (digit('integer').plus()).map(debugPrint('integerConstant'));
  Parser characterConstant() => (char("'") & letter('character') & char("'")).map(debugPrint('characterConstant'));
  Parser floatingConstant() => (digit('floating').star() & char('.', 'floatingPoint') & digit('floating').star())
      .map(debugPrint('floatingConstant'));
  Parser enumerationConstant() {
    if (enums.length == 0) {
      return failure().map(debugPrint('no enums'));
    } else if (enums.length == 1) {
      return ref(token, enums[0]).map(debugPrint('enum'));
    } else {
      var parser = null;
      for (final enumValue in enums) {
        if (parser == null) {
          parser = ref(token, enumValue);
        } else {
          parser = parser | ref(token, enumValue);
        }
      }
      return parser.map(debugPrint('enum'));
    }
  }

  Parser stringConstant() => (char('"') & any().plus() & char('"')).map(debugPrint('stringConstant'));

  Parser expression() => ref(assignmentExpression) | ref(expression) & ref(token, ',') & ref(assignmentExpression);
  Parser assignmentExpression() =>
      ref(conditionalExpression) | ref(unaryExpression) & ref(assignmentOperator) & ref(assignmentExpression);
  Parser assignmentOperator() =>
      ref(token, '=') |
      ref(token, '*=') |
      ref(token, '/=') |
      ref(token, '%=') |
      ref(token, '+=') |
      ref(token, '-=') |
      ref(token, '<<=') |
      ref(token, '>>=') |
      ref(token, '&=') |
      ref(token, '^=') |
      ref(token, '|=');
  Parser unaryOperator() =>
      ref(token, '&') | ref(token, '*') | ref(token, '+') | ref(token, '-') | ref(token, '~') | ref(token, '!');
  Parser typeName() =>
      (ref(specifierQualifier).plus() & ref(abstractDeclarator).optional()).map(debugPrint('typeName'));
  Parser parameterTypeList() =>
      (ref(parameterList) | ref(parameterList) & comma() & ref(token, '...')).map(debugPrint('parameterTypeList'));
  Parser parameterList() =>
      (ref(parameterDeclaration) | ref(parameterDeclaration) & (comma() & ref(parameterDeclaration)).star())
          .map(debugPrint('parameterList'));
  Parser parameterDeclaration() => (ref(declarationSpecifier).plus() & ref(declarator) |
          ref(declarationSpecifier).plus() & ref(abstractDeclarator) |
          ref(declarationSpecifier).plus())
      .map(debugPrint('parameterDeclaration'));
  Parser abstractDeclarator() =>
      (ref(pointer) | ref(pointer) & ref(directAbstractDeclarator) | ref(directAbstractDeclarator))
          .map(debugPrint('abstractDeclarator'));
  Parser directAbstractDeclarator() => (openParen() & ref(abstractDeclarator) & closeParen() |
          ref(directAbstractDeclarator).optional() &
              openBracket() &
              ref(constantExpression).optional() &
              closeBracket() |
          ref(directAbstractDeclarator).optional() & openParen() & ref(parameterTypeList).optional() & closeParen())
      .map(debugPrint('directAbstractDeclarator'));
  Parser enumSpecifier() => (ref(token, 'enum') & ref(identifier) & openBrace() & ref(enumeratorList) & closeBrace() |
          ref(token, 'enum') & openBrace() & ref(enumeratorList) & closeBrace() |
          ref(token, 'enum') & ref(identifier))
      .map(debugPrint('enumSpecifier'));
  Parser enumeratorList() =>
      (ref(enumerator) | ref(enumerator) & (comma() & ref(enumerator)).star()).map(debugPrint('enumeratorList'));
  Parser enumerator() => (ref(identifier).map((name) {
            print("Enum: $name");
            enums.add(name);
            return name;
          }) |
          ref(identifier).map((name) {
                print("Enum: $name");
                enums.add(name);
                return name;
              }) &
              ref(token, '=') &
              ref(constantExpression))
      .map(debugPrint('enum'));
  Parser typedefName() => ref(identifier).map(debugPrint('typedefName'));
  Parser declaration() => (ref(declarationSpecifier).plus().map(debugPrint('visitingDeclaration')) &
          // ref(initDeclarator).star().map(debugPrint('visitingInitDeclarator')) &
          semicolon())
      .map(debugPrint('declaration'));
  Parser initDeclarator() =>
      (ref(declarator) | ref(declarator) & ref(token, '=') & ref(initializer)).map(debugPrint('initDeclarator'));
  Parser initializer() => (assignmentExpression() |
          openBrace() & ref(initializerList) & closeBrace() |
          openBrace() & ref(initializerList) & comma() & closeBrace())
      .map(debugPrint('initializer'));
  Parser initializerList() =>
      (ref(initializer) | ref(initializer) & (comma() & ref(initializer)).star()).map(debugPrint('initializerList'));
  Parser compoundStatement() => (openBrace() & ref(declaration).star() & ref(statement).star() & closeBrace())
      .map(debugPrint('compoundStatement'));
  Parser statement() => (ref(labeledStatement) |
          ref(expressionStatement) |
          ref(compoundStatement) |
          ref(selectionStatement) |
          ref(iterationStatement) |
          ref(jumpStatement))
      .map(debugPrint('statement'));
  Parser labeledStatement() => (ref(identifier) & colon() & ref(statement) |
          ref(token, 'case') & ref(constantExpression) & colon() & ref(statement) |
          ref(token, 'default') & colon() & ref(statement))
      .map(debugPrint('labeledStatement'));
  Parser expressionStatement() => (ref(expression) & semicolon()).map(debugPrint('expressionStatement'));
  Parser selectionStatement() =>
      ref(token, 'if') & openParen() & ref(expression) & closeParen() & statement() |
      ref(token, 'if') & openParen() & ref(expression) & closeParen() & ref(token, 'else') & statement() |
      ref(token, 'switch') & openParen() & ref(expression) & closeParen();
  Parser iterationStatement() =>
      ref(token, 'while') & openParen() & ref(expression) & closeParen() & statement() |
      ref(token, 'do') &
          statement() &
          ref(token, 'while') &
          openParen() &
          ref(expression) &
          closeParen() &
          semicolon() |
      ref(token, 'for') &
          openParen() &
          ref(expression).optional() &
          semicolon() &
          ref(expression).optional() &
          semicolon() &
          ref(expression).optional() &
          closeParen() &
          statement();
  Parser jumpStatement() =>
      ref(token, 'goto') & ref(identifier) & semicolon() |
      ref(token, 'continue') & semicolon() |
      ref(token, 'break') & semicolon() & ref(token, 'return') & ref(expression).optional() & semicolon();

  Parser identifier() =>
      ((letter() | underscore()) & (letter() | digit() | underscore()).star()).flatten().map(debugPrint('identifier'));
  Parser underscore() => char('_');

  Parser token(String value) => (whitespace().star() &
          PredicateStringExtension(value).toParser(message: 'Expecting Token: $value') &
          whitespace().star())
      .trim()
      .flatten()
      .map(debugPrint('token'));

  Parser sizeof() => ref(token, 'sizeof');
  Parser star() => ref(token, '*');
  Parser colon() => ref(token, ':');
  Parser semicolon() => ref(token, ';');
  Parser openParen() => ref(token, '(');
  Parser closeParen() => ref(token, ')');
  Parser openBracket() => ref(token, '[');
  Parser closeBracket() => ref(token, ']');
  Parser openBrace() => ref(token, '{');
  Parser closeBrace() => ref(token, '}');
  Parser comma() => ref(token, ',');

  List<String> reservedTokens = [
    'void',
    'char',
    'short',
    'int',
    'long',
    'float',
    'double',
    'signed',
    'size_t',
    'unsigned',
    'sizeof',
    'goto',
    'continue',
    'break',
    'return',
    'if',
    'else',
    'switch',
    'for',
    'while',
    'do',
    'case',
    'default',
    'enum',
    'struct',
    'union',
    'auto',
    'register',
    'static',
    'extern',
    'typedef'
  ];
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
