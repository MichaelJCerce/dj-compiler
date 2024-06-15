/* I pledge my Honor that I have not cheated, and will not cheat, on this assignment. -Michael Cerce */

%code provides {
  #include "..//scanner//lex.yy.c"
  #include "ast.h"
  #include "../typechecker/symtbl.h"
  #include "../typechecker/typecheck.h"
  
  #define YYSTYPE ASTree *
  
  ASTree * pgmAST;

  void yyerror(const char *str) {
    printf("Syntax error on line %d at token %s\n", yylineno, yytext);
    printf("(This version of the compiler exits after finding the first ");
    printf("syntax error.)\n");
    exit(-1);
  }
}

%token MAIN CLASS EXTENDS NATTYPE IF ELSE WHILE
%token PRINTNAT READNAT THIS NEW NUL NATLITERAL 
%token ID ASSIGN PLUS MINUS TIMES EQUALITY GREATER
%token AND NOT DOT SEMICOLON COMMA LBRACE RBRACE 
%token LPAREN RPAREN ENDOFFILE

%start pgm

%right ASSIGN
%left AND
%nonassoc EQUALITY GREATER
%left PLUS MINUS
%left TIMES 
%right NOT
%left DOT

%%

pgm: classlist_or_empty MAIN LBRACE variablelist_or_empty explist RBRACE ENDOFFILE 
     { pgmAST = newAST(PROGRAM, NULL, 0, NULL, yylineno); 
     appendToChildrenList(pgmAST, $1);
     appendToChildrenList(pgmAST, $4);
     appendToChildrenList(pgmAST, $5);
     return 0; } 
   ;

classlist_or_empty: classlist
                  | 
                    { $$ = newAST(CLASS_DECL_LIST, NULL, 0, NULL, yylineno); }
                  ;

classlist: classlist class
           { appendToChildrenList($1, $2);
             $$ = $1; }
         | class
           { $$ = newAST(CLASS_DECL_LIST, $1, 0, NULL, yylineno); }
         ;

class: CLASS id EXTENDS id LBRACE variablelist_or_empty methodlist_or_empty RBRACE
       { $$ = newAST(CLASS_DECL, NULL, 0, NULL, yylineno);
         appendToChildrenList($$, $2);
         appendToChildrenList($$, $4);
         appendToChildrenList($$, $6);
         appendToChildrenList($$, $7); }
     ;
                
variablelist_or_empty: variablelist_or_empty variable
                       { appendToChildrenList($1, $2);
                         $$ = $1; }
                     | 
                       { $$ = newAST(VAR_DECL_LIST, NULL, 0, NULL, yylineno); }
                     ;

variable: id id SEMICOLON
          { $$ = newAST(VAR_DECL, $1, 0, NULL, yylineno);
            appendToChildrenList($$, $2); }
        | nat id SEMICOLON
          { $$ = newAST(VAR_DECL, $1, 0, NULL, yylineno);
            appendToChildrenList($$, $2); }
        ;  
 
methodlist_or_empty: methodlist
                   | 
                     { $$ = newAST(METHOD_DECL_LIST, NULL, 0, NULL, yylineno); }
                   ;

methodlist: methodlist method
            { appendToChildrenList($1, $2);
              $$ = $1; }
          | method
            { $$ = newAST(METHOD_DECL_LIST, $1, 0, NULL, yylineno); }
          ;

method: id id LPAREN parameterlist_or_empty RPAREN LBRACE variablelist_or_empty explist RBRACE
        { $$ = newAST(METHOD_DECL, NULL, 0, NULL, yylineno);
          appendToChildrenList($$, $1);
          appendToChildrenList($$, $2); 
          appendToChildrenList($$, $4);
          appendToChildrenList($$, $7);
          appendToChildrenList($$, $8); }
      | nat id LPAREN parameterlist_or_empty RPAREN LBRACE variablelist_or_empty explist RBRACE
        { $$ = newAST(METHOD_DECL, NULL, 0, NULL, yylineno);
          appendToChildrenList($$, $1);
          appendToChildrenList($$, $2);
          appendToChildrenList($$, $4); 
          appendToChildrenList($$, $7); 
          appendToChildrenList($$, $8); }
      ;

parameterlist_or_empty: parameterlist
                      |
                        { $$ = newAST(PARAM_DECL_LIST, NULL, 0, NULL, yylineno); }
                      ;

parameterlist: parameterlist COMMA parameter
               { appendToChildrenList($1, $3);
                 $$ = $1; }
             | parameter
               { $$ = newAST(PARAM_DECL_LIST, $1, 0, NULL, yylineno); } 
             ;

parameter: id id
           { $$ = newAST(PARAM_DECL, $1, 0, NULL, yylineno);
            appendToChildrenList($$, $2); }
         | nat id
           { $$ = newAST(PARAM_DECL, $1, 0, NULL, yylineno);
            appendToChildrenList($$, $2); }
         ;

id: ID
    { $$ = newAST(AST_ID, NULL, 0, yytext, yylineno); }
  ;
  
nat: NATTYPE
     { $$ = newAST(NAT_TYPE, NULL, 0, NULL, yylineno); }
   ;

explist: explist exp SEMICOLON
         { appendToChildrenList($1, $2);
           $$ = $1; }
       | exp SEMICOLON
          { $$ = newAST(EXPR_LIST, $1, 0, NULL, yylineno); }
       ;

exp: exp DOT id LPAREN argumentlist_or_empty RPAREN
     { $$ = newAST(DOT_METHOD_CALL_EXPR, $1, 0, NULL, yylineno);
        appendToChildrenList($$, $3);
        appendToChildrenList($$, $5); }

   | id LPAREN argumentlist_or_empty RPAREN
     { $$ = newAST(METHOD_CALL_EXPR, $1, 0, NULL, yylineno);
        appendToChildrenList($$, $3); }

   | exp DOT id
     { $$ = newAST(DOT_ID_EXPR, $1, 0, NULL, yylineno);
        appendToChildrenList($$, $3); }

   | id
     { $$ = newAST(ID_EXPR, $1, 0, NULL, yylineno); }

   | exp DOT id ASSIGN exp
     { $$ = newAST(DOT_ASSIGN_EXPR, $1, 0, NULL, yylineno);
        appendToChildrenList($$, $3);
        appendToChildrenList($$, $5); }

   | id ASSIGN exp
     { $$ = newAST(ASSIGN_EXPR, $1, 0, NULL, yylineno);
        appendToChildrenList($$, $3); }

   | exp PLUS exp
     { $$ = newAST(PLUS_EXPR, $1, 0, NULL, yylineno);
        appendToChildrenList($$, $3); }

   | exp MINUS exp
     { $$ = newAST(MINUS_EXPR, $1, 0, NULL, yylineno);
        appendToChildrenList($$, $3); }

   | exp TIMES exp
     { $$ = newAST(TIMES_EXPR, $1, 0, NULL, yylineno);
        appendToChildrenList($$, $3); }

   | exp EQUALITY exp
     { $$ = newAST(EQUALITY_EXPR, $1, 0, NULL, yylineno);
        appendToChildrenList($$, $3); }

   | exp GREATER exp
     { $$ = newAST(GREATER_THAN_EXPR, $1, 0, NULL, yylineno);
        appendToChildrenList($$, $3); }

   | NOT exp    
     { $$ = newAST(NOT_EXPR, $2, 0, NULL, yylineno); }

   | exp AND exp
     { $$ = newAST(AND_EXPR, $1, 0, NULL, yylineno);
        appendToChildrenList($$, $3); }

   | IF LPAREN exp RPAREN LBRACE explist RBRACE ELSE LBRACE explist RBRACE
     { $$ = newAST(IF_THEN_ELSE_EXPR, $3, 0, NULL, yylineno);
        appendToChildrenList($$,$6);
        appendToChildrenList($$,$10); }

   | WHILE LPAREN exp RPAREN LBRACE explist RBRACE
     { $$ = newAST(WHILE_EXPR, $3, 0, NULL, yylineno);
        appendToChildrenList($$, $6); }   
    
   | PRINTNAT LPAREN exp RPAREN
     { $$ = newAST(PRINT_EXPR, $3, 0, NULL, yylineno); }

   | READNAT LPAREN RPAREN
     { $$ = newAST(READ_EXPR, NULL, 0, NULL, yylineno); }
    
   | THIS
     { $$ = newAST(THIS_EXPR, NULL, 0, NULL, yylineno); }

   | NEW id LPAREN RPAREN
     { $$ = newAST(NEW_EXPR, $2, 0, NULL, yylineno); }
    
   | NUL
     { $$ = newAST(NULL_EXPR, NULL, 0, NULL, yylineno); } 

   | NATLITERAL
     { $$ = newAST(NAT_LITERAL_EXPR, NULL, atoi(yytext), NULL, yylineno); }
    
   | LPAREN exp RPAREN
     { $$ = $2; }   
   ;

argumentlist_or_empty: argumentlist
                     |
                       { $$ = newAST(ARG_LIST, NULL, 0, NULL, yylineno); }
                     ;

argumentlist: argumentlist COMMA exp
              { appendToChildrenList($1, $3);
                $$ = $1; }
            | exp
              { $$ = newAST(ARG_LIST, $1, 0, NULL, yylineno); }
            ;

%%

int main(int argc, char **argv) {
  if(argc != 2) {
    printf("Usage: dj-parse filename\n");
    exit(-1);
  }

  yyin = fopen(argv[1], "r");
  if(yyin == NULL) {
    printf("ERROR: could not open file %s\n", argv[1]);
    exit(-1);
  }

  yyparse();
  printAST(pgmAST);
  setupSymbolTables(pgmAST);
  typecheckProgram();
  
  return 0;
}

