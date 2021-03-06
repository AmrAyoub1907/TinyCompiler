#include "utilities.h"

enum TokenType {
  NUMBER = CONSTANTS::TOKEN_ID_START,
  STRING,
  COMMENT,
  RESERVED,
  IDENTIFIER,
  FUNCTION_CALL,
  TERM,
  ARITHMETIC_OPERATOR,
  EQUATION,
  EXPRESSION,
  ASSIGNMENT_STATEMENT,
  DATATYPE,
  DECLARATION_STATEMENT,
  WRITE_STATEMENT,
  READ_STATEMENT,
  RETURN_STATEMENT,
  CONDITIONAL_OPERATOR,
  CONDITION,
  BOOLEAN_OPERATOR,
  CONDITIONAL_STATEMENT,
  IF_STATEMENT,
  ELSE_IF_STATEMENT,
  ELSE_STATEMENT,
  REPEAT_STATEMENT,
  FUNCTION_NAME,
  PARAMETER,
  FUNCTION_DECLARATION,
  FUNCTION_BODY,
  FUNCTION_STATEMENT,
  MAIN_FUNCTION,
  PROGRAM
};

struct Token {
  TokenType token_type;
  string lexeme;
  string token_name(TokenType token) {
    return CONSTANTS::TOKEN_NAMES[token - CONSTANTS::TOKEN_ID_START];
  }
};
