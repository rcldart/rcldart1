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
    final test = """typedef int rcutils_ret_t;""";
    final othertest = """
    typedef int rcutils_ret_t;
typedef struct rcutils_allocator_t
{

  void *(*allocate)(size_t size, void *state);

  void (*deallocate)(void *pointer, void *state);
  void *(*reallocate)(void *pointer, size_t size, void *state);

  void *(*zero_allocate)(size_t number_of_elements, size_t size_of_element, void *state);

  void *state;
} rcutils_allocator_t;

rcutils_allocator_t rcutils_get_zero_initialized_allocator(void);
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
      print("$name $value");
      return value;
    };
  }

//https://cs.wmich.edu/~gupta/teaching/cs4850/sumII06/The%20syntax%20of%20C%20in%20Backus-Naur%20form.htm
  Parser externalDeclaration() => (ref(declaration, 'externalDeclaration:')
      //| ref(functionDefinition) This is not needed because we don't have any definitions, just declarations and it breaks the thing
      )
      .map(debugPrint('externalDeclaration:'));
  // Parser functionDefinition(String prefix) {
  //   final debugName = prefix + 'functionDefinition:';
  //   return (ref(declarationSpecifier, debugName).star() &
  //           ref(declarator, debugName) &
  //           ref(declaration, debugName).star() &
  //           ref(compoundStatement, debugName))
  //       .map(debugPrint(debugName));
  // }

  Parser declarationSpecifier(String prefix) {
    final debugName = prefix + 'declarationSpecifier:';
    return (ref(storageClassSpecifier, debugName) | ref(typeSpecifier, debugName) | ref(typeQualifier, debugName))
        .map(debugPrint(debugName));
  }

  Parser storageClassSpecifier(String prefix) {
    final debugName = prefix + 'storageClassSpecifier:';
    return (ref(token, 'auto', debugName) |
            ref(token, 'register', debugName) |
            ref(token, 'static', debugName) |
            ref(token, 'extern', debugName) |
            ref(token, 'typedef', debugName))
        .map(debugPrint(debugName));
  }

  Parser typeSpecifier(String prefix) {
    final debugName = prefix + 'typeSpecifier:';
    return (ref(token, 'void', debugName) |
            ref(token, 'char', debugName) |
            ref(token, 'short', debugName) |
            ref(token, 'int', debugName) |
            ref(token, 'long', debugName) |
            ref(token, 'float', debugName) |
            ref(token, 'double', debugName) |
            ref(token, 'signed', debugName) |
            ref(token, 'size_t', debugName) |
            ref(token, 'signed', debugName) |
            ref(token, 'unsigned', debugName) |
            ref(structOrUnionSpecifier, debugName) |
            ref(enumSpecifier, debugName) |
            ref(typedefName, debugName))
        .map(debugPrint(debugName));
  }

  Parser structOrUnionSpecifier(String prefix) {
    final debugName = prefix + 'structOrUnionSpecifier:';
    return ((ref(structOrUnion, debugName) &
                ref(identifier, debugName) &
                openBrace() &
                ref(structDeclaration, debugName).plus() &
                closeBrace()) |
            (ref(structOrUnion, debugName) & openBrace() & ref(structDeclaration, debugName).plus() & closeBrace()) |
            (ref(structOrUnion, debugName) & ref(identifier, debugName)))
        .map(debugPrint(debugName));
  }

  Parser structOrUnion(String prefix) {
    final debugName = prefix + 'structOrUnion:';
    return (ref(token, 'struct', debugName) | ref(token, 'union', debugName)).map(debugPrint(debugName));
  }

  Parser structDeclaration(String prefix) {
    final debugName = prefix + 'structDeclaration:';
    return (ref(specifierQualifier, debugName).star() & ref(structDeclaratorList, debugName))
        .map(debugPrint(debugName));
  }

  Parser specifierQualifier(String prefix) {
    final debugName = prefix + 'specifierQualifier:';
    return (ref(typeSpecifier, debugName) | ref(typeQualifier, debugName)).map(debugPrint(debugName));
  }

  Parser structDeclaratorList(String prefix) {
    final debugName = prefix + 'structDeclaratorList:';
    return (ref(structDeclarator, debugName) |
            ref(structDeclarator, debugName) & (comma() & ref(structDeclarator, debugName)).star())
        .map(debugPrint(debugName));
  }

  Parser structDeclarator(String prefix) {
    final debugName = prefix + 'structDeclarator:';
    return (ref(declarator, debugName))
        // ref(declarator, debugName) & colon() & ref(constantExpression, debugName) |
        // colon() & ref(constantExpression, debugName))
        .map(debugPrint(debugName));
  }

  Parser declarator(String prefix) {
    final debugName = prefix + 'declarator:';
    return (ref(pointer, debugName).optional() & ref(directDeclarator, debugName)).map(debugPrint(debugName));
  }

  Parser pointer(String prefix) {
    final debugName = prefix + 'pointer:';
    return (star() & ref(typeQualifier, debugName).star() & ref(pointer, debugName).optional())
        .map(debugPrint(debugName));
  }

  Parser typeQualifier(String prefix) {
    final debugName = prefix + 'typeQualifier:';
    return (ref(token, 'const', debugName) | ref(token, 'volatile', debugName)).map(debugPrint(debugName));
  }

  Parser directDeclarator(String prefix) {
    final debugName = prefix + 'directDeclarator:';
    return (ref(identifier, debugName) |
            (openParen() & ref(declarator, debugName) & closeParen()) |
            // (ref(directDeclarator) & openBracket() & ref(constantExpression).optional() & closeBracket()) |
            (ref(directDeclarator, debugName) & openParen() & ref(parameterTypeList, debugName) & closeParen()) |
            (ref(directDeclarator, debugName) & openParen() & ref(identifier, debugName).star() & closeParen()))
        .map(debugPrint('directDeclarator'));
  }

  // Parser constantExpression(String prefix) => conditionalExpression().map(debugPrint('constantExpression'));
  // Parser conditionalExpression(String prefix) =>
  //     ref(logicalOrExpression) |
  //     ref(logicalOrExpression) & ref(token, '?') & ref(expression) & colon() & ref(conditionalExpression);
  // Parser logicalOrExpression(String prefix) =>
  //     ref(logicalAndExpression) | ref(logicalOrExpression) & ref(token, '||') & ref(logicalAndExpression);
  // Parser logicalAndExpression(String prefix) =>
  //     ref(inclusiveOrExpression) | ref(logicalAndExpression) & ref(token, '&&') & ref(inclusiveOrExpression);
  // Parser inclusiveOrExpression(String prefix) =>
  //     ref(exclusiveOrExpression) | ref(inclusiveOrExpression) & ref(token, '|') & ref(exclusiveOrExpression);
  // Parser exclusiveOrExpression(String prefix) =>
  //     ref(andExpression) | ref(exclusiveOrExpression) & ref(token, '^') & ref(andExpression);
  // Parser andExpression(String prefix) =>
  //     ref(equalityExpression) | ref(andExpression) & ref(token, '&') & ref(equalityExpression);
  // Parser equalityExpression(String prefix) =>
  //     ref(relationalExpression) |
  //     ref(equalityExpression) & ref(token, '==') & ref(relationalExpression) |
  //     ref(equalityExpression) & ref(token, '!=') & ref(relationalExpression);
  // Parser relationalExpression(String prefix) =>
  //     ref(shiftExpression) |
  //     ref(relationalExpression) & ref(token, '<') & ref(shiftExpression) |
  //     ref(relationalExpression) & ref(token, '>') & ref(shiftExpression) |
  //     ref(relationalExpression) & ref(token, '<=') & ref(shiftExpression) |
  //     ref(relationalExpression) & ref(token, '>=') & ref(shiftExpression);
  // Parser shiftExpression(String prefix) =>
  //     ref(additiveExpression) |
  //     ref(shiftExpression) & ref(token, '<<') & ref(additiveExpression) |
  //     ref(shiftExpression) & ref(token, '>>') & ref(additiveExpression);
  // Parser additiveExpression(String prefix) =>
  //     ref(multiplicativeExpression) |
  //     ref(additiveExpression) & ref(token, '+') & ref(multiplicativeExpression) |
  //     ref(additiveExpression) & ref(token, '-') & ref(multiplicativeExpression);
  // Parser multiplicativeExpression(String prefix) =>
  //     ref(castExpression) |
  //     ref(multiplicativeExpression) & ref(token, '*') & ref(castExpression) |
  //     ref(multiplicativeExpression) & ref(token, '/') & ref(castExpression) |
  //     ref(multiplicativeExpression) & ref(token, '%') & ref(castExpression);

  // Parser castExpression(String prefix) => ref(unaryExpression) | openParen() & ref(typeName) & ref(castExpression);
  // Parser unaryExpression(String prefix) =>
  //     ref(postfixExpression) |
  //     ref(token, '++') & ref(unaryExpression) |
  //     ref(token, '--') & ref(unaryExpression) |
  //     unaryOperator() & ref(castExpression) |
  //     sizeof() & ref(unaryExpression) |
  //     sizeof() & ref(typeName);
  // Parser postfixExpression(String prefix) =>
  //     ref(primaryExpression) |
  //     ref(postfixExpression) & openBracket() & ref(expression) & closeBracket() |
  //     ref(postfixExpression) & openParen() & ref(assignmentExpression).star() & closeParen() |
  //     ref(postfixExpression) & ref(token, '.') & ref(identifier) |
  //     ref(postfixExpression) & ref(token, '->') & ref(identifier) |
  //     ref(postfixExpression) & ref(token, '++') |
  //     ref(postfixExpression) & ref(token, '--');

  // Parser primaryExpression(String prefix) =>
  //     ref(identifier) | constant() | stringConstant() | openParen() & ref(expression) & closeParen();
  // Parser constant(String prefix) =>
  //     (integerConstant() | characterConstant() | floatingConstant() | enumerationConstant())
  //         .map(debugPrint('constant'));
  // Parser integerConstant(String prefix) => (digit('integer').plus()).map(debugPrint('integerConstant'));
  // Parser characterConstant(String prefix) =>
  //     (char("'") & letter('character') & char("'")).map(debugPrint('characterConstant'));
  // Parser floatingConstant(String prefix) =>
  //     (digit('floating').star() & char('.', 'floatingPoint') & digit('floating').star())
  //         .map(debugPrint('floatingConstant'));
  Parser enumerationConstant(String prefix) {
    final debugName = prefix + 'enumerationConstant:';
    if (enums.length == 0) {
      return failure().map(debugPrint(debugName + 'no enums'));
    } else if (enums.length == 1) {
      return ref(token, enums[0]).map(debugPrint(debugName + 'enum'));
    } else {
      var parser = null;
      for (final enumValue in enums) {
        if (parser == null) {
          parser = ref(token, enumValue);
        } else {
          parser = parser | ref(token, enumValue);
        }
      }
      return parser.map(debugPrint(debugName));
    }
  }

  Parser stringConstant(String prefix) =>
      (char('"') & any().plus() & char('"')).flatten().map(debugPrint(prefix + 'stringConstant:'));

  // Parser expression(String prefix) =>
  //     ref(assignmentExpression) | ref(expression) & ref(token, ',') & ref(assignmentExpression);
  // Parser assignmentExpression(String prefix) =>
  //     ref(conditionalExpression) | ref(unaryExpression) & ref(assignmentOperator) & ref(assignmentExpression);
  Parser assignmentOperator(String prefix) {
    final debugName = prefix + 'assignmentOperator:';
    return ref(token, '=', debugName) |
        ref(token, '*=', debugName) |
        ref(token, '/=', debugName) |
        ref(token, '%=', debugName) |
        ref(token, '+=', debugName) |
        ref(token, '-=', debugName) |
        ref(token, '<<=', debugName) |
        ref(token, '>>=', debugName) |
        ref(token, '&=', debugName) |
        ref(token, '^=', debugName) |
        ref(token, '|=', debugName);
  }

  Parser unaryOperator(String prefix) {
    final debugName = prefix + 'unaryOperator:';
    return ref(token, '&', debugName) |
        ref(token, '*', debugName) |
        ref(token, '+', debugName) |
        ref(token, '-', debugName) |
        ref(token, '~', debugName) |
        ref(token, '!', debugName);
  }

  Parser typeName(String prefix) {
    final debugName = prefix + 'typeName:';
    return (ref(specifierQualifier, debugName).plus() & ref(abstractDeclarator, debugName).optional())
        .map(debugPrint(debugName));
  }

  Parser parameterTypeList(String prefix) {
    final debugName = prefix + 'parameterTypeList:';
    return (ref(parameterList, debugName) | ref(parameterList, debugName) & comma() & ref(token, '...', debugName))
        .map(debugPrint(debugName));
  }

  Parser parameterList(String prefix) {
    final debugName = prefix + 'parameterList:';
    return (ref(parameterDeclaration, debugName) |
            ref(parameterDeclaration, debugName) & (comma() & ref(parameterDeclaration, debugName)).star())
        .map(debugPrint(debugName));
  }

  Parser parameterDeclaration(String prefix) {
    final debugName = prefix + 'parameterDeclaration:';
    return (ref(declarationSpecifier, debugName).plus() & ref(declarator, debugName) |
            ref(declarationSpecifier, debugName).plus() & ref(abstractDeclarator, debugName) |
            ref(declarationSpecifier, debugName).plus())
        .map(debugPrint(debugName));
  }

  Parser abstractDeclarator(String prefix) {
    final debugName = prefix + 'abstractDeclarator:';
    return (ref(pointer, debugName) |
            ref(pointer, debugName) & ref(directAbstractDeclarator, debugName) |
            ref(directAbstractDeclarator, debugName))
        .map(debugPrint(debugName));
  }

  Parser directAbstractDeclarator(String prefix) {
    final debugName = prefix + 'directAbstractDeclarator:';
    return (openParen() & ref(abstractDeclarator, debugName) & closeParen() |
            // ref(directAbstractDeclarator).optional() &
            //     openBracket() &
            //     ref(constantExpression).optional() &
            //     closeBracket() |
            ref(directAbstractDeclarator, debugName).optional() &
                openParen() &
                ref(parameterTypeList, debugName).optional() &
                closeParen())
        .map(debugPrint(debugName));
  }

  Parser enumSpecifier(String prefix) {
    final debugName = prefix + 'enumSpecifier:';
    return (ref(token, 'enum', debugName) &
                ref(identifier, debugName) &
                openBrace() &
                ref(enumeratorList, debugName) &
                closeBrace() |
            ref(token, 'enum', debugName) & openBrace() & ref(enumeratorList, debugName) & closeBrace() |
            ref(token, 'enum', debugName) & ref(identifier, debugName))
        .map(debugPrint(debugName));
  }

  Parser enumeratorList(String prefix) {
    final debugName = prefix + 'enumeratorList:';
    return (ref(enumerator, debugName) | ref(enumerator, debugName) & (comma() & ref(enumerator, debugName)).star())
        .map(debugPrint(debugName));
  }

  Parser enumerator(String prefix) {
    final debugName = prefix + 'enumerator:';
    return (ref(identifier, debugName).map((name) {
      print("Enum: $name");
      enums.add(name);
      return name;
    })
        // ref(identifier).map((name) {
        //       print("Enum: $name");
        //       enums.add(name);
        //       return name;
        //     }) &
        //     ref(token, '=') &
        //     ref(constantExpression))
        ).map(debugPrint(debugName));
  }

  Parser typedefName(String prefix) {
    final debugName = prefix + 'typedefName:';
    return ref(identifier, debugName).map(debugPrint(debugName));
  }

  Parser declaration(String prefix) {
    final debugName = prefix + 'declaration:';
    return (ref(declarationSpecifier, debugName).plus() &
            // ref(initDeclarator).star().map(debugPrint('visitingInitDeclarator')) &
            semicolon())
        .map(debugPrint(debugName));
  }

  Parser initDeclarator(String prefix) {
    final debugName = prefix + 'initDeclarator:';
    return (ref(declarator, debugName) |
            ref(declarator, debugName) & ref(token, '=', debugName) & ref(initializer, debugName))
        .map(debugPrint(debugName));
  }

  Parser initializer(String prefix) {
    final debugName = prefix + 'initializer:';
    return (
            // assignmentExpression() |
            openBrace() & ref(initializerList, debugName) & closeBrace() |
                openBrace() & ref(initializerList, debugName) & comma() & closeBrace())
        .map(debugPrint(debugName));
  }

  Parser initializerList(String prefix) {
    final debugName = prefix + 'initializerList:';
    return (ref(initializer, debugName) | ref(initializer, debugName) & (comma() & ref(initializer, debugName)).star())
        .map(debugPrint(debugName));
  }
  // Parser compoundStatement(String prefix) =>
  //     (openBrace() & ref(declaration).star() & ref(statement).star() & closeBrace())
  //         .map(debugPrint('compoundStatement'));
  // Parser statement(String prefix) => (ref(labeledStatement) |
  //         ref(expressionStatement) |
  //         ref(compoundStatement) |
  //         ref(selectionStatement) |
  //         ref(iterationStatement) |
  //         ref(jumpStatement))
  //     .map(debugPrint('statement'));
  // Parser labeledStatement(String prefix) => (ref(identifier) & colon() & ref(statement) |
  //         ref(token, 'case') & ref(constantExpression) & colon() & ref(statement) |
  //         ref(token, 'default') & colon() & ref(statement))
  //     .map(debugPrint('labeledStatement'));
  // Parser expressionStatement(String prefix) => (ref(expression) & semicolon()).map(debugPrint('expressionStatement'));
  // Parser selectionStatement(String prefix) =>
  //     ref(token, 'if') & openParen() & ref(expression) & closeParen() & statement() |
  //     ref(token, 'if') & openParen() & ref(expression) & closeParen() & ref(token, 'else') & statement() |
  //     ref(token, 'switch') & openParen() & ref(expression) & closeParen();
  // Parser iterationStatement(String prefix) =>
  //     ref(token, 'while') & openParen() & ref(expression) & closeParen() & statement() |
  //     ref(token, 'do') &
  //         statement() &
  //         ref(token, 'while') &
  //         openParen() &
  //         ref(expression) &
  //         closeParen() &
  //         semicolon() |
  //     ref(token, 'for') &
  //         openParen() &
  //         ref(expression).optional() &
  //         semicolon() &
  //         ref(expression).optional() &
  //         semicolon() &
  //         ref(expression).optional() &
  //         closeParen() &
  //         statement();
  // Parser jumpStatement(String prefix) =>
  //     ref(token, 'goto') & ref(identifier) & semicolon() |
  //     ref(token, 'continue') & semicolon() |
  //     ref(token, 'break') & semicolon() & ref(token, 'return') & ref(expression).optional() & semicolon();

  Parser identifier(String prefix) {
    final debugName = prefix + 'identifier:';
    return ((letter() | underscore()) & (letter() | digit() | underscore()).star())
        .flatten()
        .map(debugPrint(debugName));
  }

  Parser underscore() => char('_');

  Parser token(String value, String prefix) => (whitespace().star() &
          PredicateStringExtension(value).toParser(message: 'Expecting Token: $value') &
          whitespace().star())
      .trim()
      .flatten()
      .map(debugPrint(prefix + 'token:'));

  Parser sizeof() => ref(token, 'sizeof', '');
  Parser star() => ref(token, '*', '');
  Parser colon() => ref(token, ':', '');
  Parser semicolon() => ref(token, ';', '');
  Parser openParen() => ref(token, '(', '');
  Parser closeParen() => ref(token, ')', '');
  Parser openBracket() => ref(token, '[', '');
  Parser closeBracket() => ref(token, ']', '');
  Parser openBrace() => ref(token, '{', '');
  Parser closeBrace() => ref(token, '}', '');
  Parser comma() => ref(token, ',', '');

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
