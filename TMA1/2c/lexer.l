%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "common.h"
#include "symtab.h"
#include "parser.tab.h"

// Function prototype for yyerror from Yacc
void yyerror(const char *s);

%}

%option noyywrap
%option yylineno
%option nounput
%option noinput

%%
[ \t]+          { /* Consume whitespace. */ }
\n              { /* Consume newline. */ }
"//".* { /* Single-line comment */ }
"/*"([^*]|\*[^/])*"*/" { /* Matched a multi-line comment, consume it. */ }
"else"          { return ELSE_TOKEN; }
"integer"       { return INTEGER_TOKEN; }
"self"          { return SELF_TOKEN; }
"float"         { return FLOAT_TOKEN; }
"isa"           { return ISA_TOKEN; }
"construct"     { return CONSTRUCT_TOKEN; }
"func"          { return FUNC_TOKEN; }
"private"       { return PRIVATE_TOKEN; }
"then"          { return THEN_TOKEN; }
"if"            { return IF_TOKEN; }
"public"        { return PUBLIC_TOKEN; }
"local"         { return LOCAL_TOKEN; }
"implement"     { return IMPLEMENT_TOKEN; }
"read"          { return READ_TOKEN; }
"void"          { return VOID_TOKEN; }
"and"           { return AND_TOKEN; }
"class"         { return CLASS_TOKEN; }
"or"            { return OR_TOKEN; }
"return"        { return RETURN_TOKEN; }
"while"         { return WHILE_TOKEN; }
"attribute"     { return ATTRIBUTE_TOKEN; }
"write"         { return WRITE_TOKEN; }
"not"           { return NOT_TOKEN; }
":="            { return ASSIGN_OP; }
"=="            { return EQ_OP; }
"<>"            { return NE_OP; }
"<="            { return LE_OP; }
">="            { return GE_OP; }
"=>"            { return ARROW; }
[0-9]+\.[0-9]*([eE][+-]?[0-9]+)? {
                    yylval.fValue = atof(yytext);
                    return FLOATING_POINT_CONSTANT;
                }
[1-9][0-9]* {
                    yylval.iValue = atoi(yytext);
                    return INTEGER_CONSTANT;
                }
"0"             {
                    yylval.iValue = 0;
                    return INTEGER_CONSTANT;
                }
[a-zA-Z][a-zA-Z0-9_]* {
                    yylval.sEntry = install(yytext, IDENTIFIER);
                    return IDENTIFIER;
                }
"+"             { return PLUS_OP; }
"-"             { return MINUS_OP; }
"*"             { return MUL_OP; }
"/"             { return DIV_OP; }
"("             { return LPAREN; }
")"             { return RPAREN; }
"{"             { return LBRACE; }
"}"             { return RBRACE; }
"["             { return LBRACKET; }
"]"             { return RBRACKET; }
";"             { return SEMICOLON; }
","             { return COMMA; }
"."             { return DOT; }
":"             { return COLON; }
"<"             { return LT_OP; }
">"             { return GT_OP; }
.               {
                    yyerror("Unrecognized character");
                    return ERROR_TOKEN;
                }
%%