
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ARGS = 258,
     BOOLEAN = 259,
     BREAK = 260,
     BYTE = 261,
     CASE = 262,
     CHAR = 263,
     CLASS = 264,
     CONTINUE = 265,
     DEFAULT = 266,
     DO = 267,
     DOUBLE = 268,
     ELSE = 269,
     FLOAT = 270,
     FOR = 271,
     IF = 272,
     IMPORT = 273,
     INT = 274,
     JNULL = 275,
     LONG = 276,
     NEW = 277,
     OPERATOR = 278,
     PUBLIC = 279,
     PRINTLN = 280,
     RETURN = 281,
     SHORT = 282,
     STATIC = 283,
     STRING = 284,
     SWITCH = 285,
     VOID = 286,
     WHILE = 287,
     OP_INC = 288,
     OP_DEC = 289,
     OP_SHL = 290,
     OP_SHR = 291,
     OP_GREATER_EQUAL = 292,
     OP_LESS_EQUAL = 293,
     OP_EQUAL = 294,
     OP_DIFFERENT = 295,
     OP_AND = 296,
     OP_OR = 297,
     OP_DIM = 298,
     ASS_MUL = 299,
     ASS_DIV = 300,
     ASS_ADD = 301,
     ASS_SUB = 302,
     ASS_XOR = 303,
     ASS_MOD = 304,
     ASS_SHL = 305,
     ASS_SHR = 306,
     ASS_AND = 307,
     ASS_OR = 308,
     ID = 309,
     LITERAL = 310,
     TRUE = 311,
     FALSE = 312,
     INTEGER = 313,
     FLOATPOINT = 314,
     LOW_PRIORITY = 315
   };
#endif
/* Tokens.  */
#define ARGS 258
#define BOOLEAN 259
#define BREAK 260
#define BYTE 261
#define CASE 262
#define CHAR 263
#define CLASS 264
#define CONTINUE 265
#define DEFAULT 266
#define DO 267
#define DOUBLE 268
#define ELSE 269
#define FLOAT 270
#define FOR 271
#define IF 272
#define IMPORT 273
#define INT 274
#define JNULL 275
#define LONG 276
#define NEW 277
#define OPERATOR 278
#define PUBLIC 279
#define PRINTLN 280
#define RETURN 281
#define SHORT 282
#define STATIC 283
#define STRING 284
#define SWITCH 285
#define VOID 286
#define WHILE 287
#define OP_INC 288
#define OP_DEC 289
#define OP_SHL 290
#define OP_SHR 291
#define OP_GREATER_EQUAL 292
#define OP_LESS_EQUAL 293
#define OP_EQUAL 294
#define OP_DIFFERENT 295
#define OP_AND 296
#define OP_OR 297
#define OP_DIM 298
#define ASS_MUL 299
#define ASS_DIV 300
#define ASS_ADD 301
#define ASS_SUB 302
#define ASS_XOR 303
#define ASS_MOD 304
#define ASS_SHL 305
#define ASS_SHR 306
#define ASS_AND 307
#define ASS_OR 308
#define ID 309
#define LITERAL 310
#define TRUE 311
#define FALSE 312
#define INTEGER 313
#define FLOATPOINT 314
#define LOW_PRIORITY 315




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 115 "pJava.y"

	int i;
	double d;
	char* id;
	is_TypeSpecifier* _typeSpecifier;
	is_Typename* _typename;
	is_ProgramFile* _programFile;
	is_ClassHeader* _classHeader;
	is_FieldDeclaration_list* _fieldDeclaration_list;
	is_FieldDeclaration* _fieldDeclaration;
	is_AttrDeclaration* _attrDeclaration;
	is_VariablesDeclarator_list* _variablesDeclarator_list;
	is_VariablesDeclarator* _variablesDeclarator;
	is_MethodDeclaration* _methodDeclaration;
	is_MethodDeclarator* _methodDeclarator;
	is_Parameters_list* _parameters_list;
	is_Parameter* _parameter;
	is_Block* _block;
	is_LocalVariableDeclarationsOrStatements_list* _localVariableDeclarationsOrStatements_list;
	is_LocalVariableDeclarationsOrStatements* _localVariableDeclarationsOrStatements;
	is_LocalVariableDeclarationStatement* _localVariableDeclarationStatement;
	is_Statement* _statement;
	is_LabeledStatement* _labeledStatement;
	is_SelectionStatement* _selectionStatement;
	is_IterationStatement* _iterationStatement;
	is_ForInit* _forInit;
	is_Expressions_list* _expressions_list;
	is_Expression* _expression;
	is_JumpStatement* _jumpStatement;
	is_MethodCall* _methodCall;
	is_SystemOutPrintln* _systemOutPrintln;
	is_UnaryExpression* _unaryExpression;
	is_BasicElement* _basicElement;
	is_CastExpression* _castExpression;
	is_ArithmeticExpression* _arithmeticExpression;
	is_RelationalExpression* _relationalExpression;
	is_ConditionalExpression* _conditionalExpression;
	is_AssignmentExpression* _assignmentExpression;
	is_PrintExpressions_list* _printExpressions_list;



/* Line 1676 of yacc.c  */
#line 215 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


