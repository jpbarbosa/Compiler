
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "pJava.y"

#include <stdio.h>


/* Line 189 of yacc.c  */
#line 78 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     BOOLEAN = 258,
     BREAK = 259,
     BYTE = 260,
     CASE = 261,
     CHAR = 262,
     CLASS = 263,
     CONTINUE = 264,
     DEFAULT = 265,
     DO = 266,
     DOUBLE = 267,
     ELSE = 268,
     FLOAT = 269,
     FOR = 270,
     IF = 271,
     IMPORT = 272,
     INT = 273,
     JNULL = 274,
     LONG = 275,
     NEW = 276,
     OPERATOR = 277,
     PUBLIC = 278,
     RETURN = 279,
     SHORT = 280,
     STATIC = 281,
     SWITCH = 282,
     VOID = 283,
     WHILE = 284,
     OP_INC = 285,
     OP_DEC = 286,
     OP_SHL = 287,
     OP_SHR = 288,
     OP_GREATER_EQUAL = 289,
     OP_LESS_EQUAL = 290,
     OP_EQUAL = 291,
     OP_DIFFERENT = 292,
     OP_AND = 293,
     OP_OR = 294,
     OP_DIM = 295,
     ASS_MUL = 296,
     ASS_DIV = 297,
     ASS_ADD = 298,
     ASS_SUB = 299,
     ASS_XOR = 300,
     ASS_MOD = 301,
     ASS_SHL = 302,
     ASS_SHR = 303,
     ASS_AND = 304,
     ASS_OR = 305,
     ID = 306,
     LITERAL = 307
   };
#endif
/* Tokens.  */
#define BOOLEAN 258
#define BREAK 259
#define BYTE 260
#define CASE 261
#define CHAR 262
#define CLASS 263
#define CONTINUE 264
#define DEFAULT 265
#define DO 266
#define DOUBLE 267
#define ELSE 268
#define FLOAT 269
#define FOR 270
#define IF 271
#define IMPORT 272
#define INT 273
#define JNULL 274
#define LONG 275
#define NEW 276
#define OPERATOR 277
#define PUBLIC 278
#define RETURN 279
#define SHORT 280
#define STATIC 281
#define SWITCH 282
#define VOID 283
#define WHILE 284
#define OP_INC 285
#define OP_DEC 286
#define OP_SHL 287
#define OP_SHR 288
#define OP_GREATER_EQUAL 289
#define OP_LESS_EQUAL 290
#define OP_EQUAL 291
#define OP_DIFFERENT 292
#define OP_AND 293
#define OP_OR 294
#define OP_DIM 295
#define ASS_MUL 296
#define ASS_DIV 297
#define ASS_ADD 298
#define ASS_SUB 299
#define ASS_XOR 300
#define ASS_MOD 301
#define ASS_SHL 302
#define ASS_SHR 303
#define ASS_AND 304
#define ASS_OR 305
#define ID 306
#define LITERAL 307




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 224 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   685

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  77
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  152
/* YYNRULES -- Number of states.  */
#define YYNSTATES  288

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    67,     2,     2,     2,    63,    56,     2,
      64,    65,    61,    60,    72,    59,    71,    62,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    73,    70,
      58,    53,    57,    76,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    74,     2,    75,    55,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    68,    54,    69,    66,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    14,    16,    18,
      20,    22,    24,    26,    28,    30,    36,    41,    43,    46,
      50,    56,    58,    62,    66,    69,    71,    74,    77,    79,
      84,    88,    90,    94,    96,   100,   102,   105,   109,   111,
     115,   118,   124,   129,   134,   138,   141,   143,   147,   150,
     152,   155,   159,   162,   164,   167,   169,   171,   175,   177,
     180,   182,   184,   186,   188,   190,   194,   199,   203,   209,
     217,   223,   229,   237,   245,   252,   255,   257,   259,   262,
     264,   266,   268,   272,   276,   279,   283,   286,   290,   293,
     298,   302,   304,   308,   310,   313,   317,   320,   323,   326,
     329,   332,   334,   337,   340,   343,   345,   347,   349,   351,
     356,   358,   363,   370,   377,   379,   383,   387,   391,   395,
     399,   403,   407,   409,   413,   417,   421,   425,   429,   433,
     437,   441,   445,   449,   453,   455,   457,   461,   463,   469,
     473,   477,   481,   485,   489,   493,   497,   501,   505,   509,
     511,   515,   520
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      81,     0,    -1,    79,    -1,    79,   113,    -1,    80,    -1,
      84,    -1,     3,    -1,     7,    -1,     5,    -1,    25,    -1,
      18,    -1,    20,    -1,    14,    -1,    12,    -1,    28,    -1,
      82,    85,    68,    86,    69,    -1,    85,    68,    86,    69,
      -1,    83,    -1,    82,    83,    -1,    17,    84,    70,    -1,
      17,    84,    71,    61,    70,    -1,    51,    -1,    84,    71,
      51,    -1,    23,     8,    51,    -1,     8,    51,    -1,    87,
      -1,    86,    87,    -1,    88,    70,    -1,    93,    -1,    23,
      26,    78,    89,    -1,    26,    78,    89,    -1,    90,    -1,
      89,    72,    90,    -1,    97,    -1,    97,    53,    91,    -1,
     121,    -1,    68,    69,    -1,    68,    92,    69,    -1,    91,
      -1,    92,    72,    91,    -1,    92,    72,    -1,    23,    26,
      78,    94,    98,    -1,    26,    78,    94,    98,    -1,    97,
      64,    95,    65,    -1,    97,    64,    65,    -1,    94,    40,
      -1,    96,    -1,    95,    72,    96,    -1,    78,    97,    -1,
      51,    -1,    97,    40,    -1,    68,    99,    69,    -1,    68,
      69,    -1,   100,    -1,    99,   100,    -1,   101,    -1,   102,
      -1,    78,    89,    70,    -1,   103,    -1,   121,    70,    -1,
     104,    -1,   105,    -1,   110,    -1,    98,    -1,    70,    -1,
      51,    73,   100,    -1,     6,   122,    73,   100,    -1,    10,
      73,   100,    -1,    16,    64,   121,    65,   102,    -1,    16,
      64,   121,    65,   102,    13,   102,    -1,    27,    64,   121,
      65,    98,    -1,    29,    64,   121,    65,   102,    -1,    11,
     102,    29,    64,   121,    65,    70,    -1,    15,    64,   106,
     107,   108,    65,   102,    -1,    15,    64,   106,   107,    65,
     102,    -1,   109,    70,    -1,   101,    -1,    70,    -1,   121,
      70,    -1,    70,    -1,   109,    -1,   121,    -1,   109,    72,
     121,    -1,     4,    51,    70,    -1,     4,    70,    -1,     9,
      51,    70,    -1,     9,    70,    -1,    24,   121,    70,    -1,
      24,    70,    -1,    84,    64,   112,    65,    -1,    84,    64,
      65,    -1,   121,    -1,   112,    72,   121,    -1,   114,    -1,
     113,   114,    -1,    74,   119,    75,    -1,    74,    75,    -1,
      30,   116,    -1,    31,   116,    -1,   116,    30,    -1,   116,
      31,    -1,   116,    -1,    67,    51,    -1,    67,   111,    -1,
      67,   117,    -1,    52,    -1,   111,    -1,    51,    -1,   117,
      -1,    84,    74,   119,    75,    -1,   115,    -1,    64,    80,
      65,   115,    -1,    64,    80,    65,    64,   123,    65,    -1,
      64,    80,    65,    64,   122,    65,    -1,   118,    -1,   119,
      60,   119,    -1,   119,    59,   119,    -1,   119,    62,   119,
      -1,   119,    61,   119,    -1,   119,    63,   119,    -1,   119,
      32,   119,    -1,   119,    33,   119,    -1,   119,    -1,   119,
      58,   120,    -1,   119,    57,   120,    -1,   119,    35,   120,
      -1,   119,    34,   120,    -1,   119,    36,   120,    -1,   119,
      37,   120,    -1,   119,    56,   120,    -1,   119,    55,   120,
      -1,   119,    54,   120,    -1,   119,    38,   120,    -1,   119,
      39,   120,    -1,   122,    -1,   123,    -1,    64,   121,    65,
      -1,   120,    -1,   120,    76,   121,    73,   121,    -1,    51,
      53,   121,    -1,    51,    53,   124,    -1,    51,    41,   121,
      -1,    51,    42,   121,    -1,    51,    43,   121,    -1,    51,
      44,   121,    -1,    51,    45,   121,    -1,    51,    46,   121,
      -1,    51,    47,   121,    -1,    51,    48,   121,    -1,   125,
      -1,   125,    68,    69,    -1,   125,    68,    92,    69,    -1,
      21,    79,   113,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    54,    54,    55,    60,    61,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    78,    79,    83,    84,    88,
      89,    93,    94,    98,    99,   103,   104,   108,   109,   113,
     114,   118,   119,   123,   124,   128,   129,   130,   134,   135,
     136,   142,   143,   147,   148,   149,   153,   154,   158,   162,
     163,   167,   168,   173,   174,   178,   179,   183,   187,   188,
     189,   190,   191,   192,   193,   197,   198,   199,   203,   204,
     205,   209,   210,   211,   212,   216,   217,   218,   222,   223,
     227,   231,   232,   236,   237,   238,   239,   240,   241,   245,
     246,   250,   251,   255,   256,   260,   261,   265,   266,   267,
     268,   269,   270,   272,   273,   278,   279,   280,   281,   285,
     290,   291,   292,   293,   297,   298,   299,   300,   301,   302,
     303,   304,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   324,   325,   326,   331,   332,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   349,
     350,   351,   355
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BOOLEAN", "BREAK", "BYTE", "CASE",
  "CHAR", "CLASS", "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE", "FLOAT",
  "FOR", "IF", "IMPORT", "INT", "JNULL", "LONG", "NEW", "OPERATOR",
  "PUBLIC", "RETURN", "SHORT", "STATIC", "SWITCH", "VOID", "WHILE",
  "OP_INC", "OP_DEC", "OP_SHL", "OP_SHR", "OP_GREATER_EQUAL",
  "OP_LESS_EQUAL", "OP_EQUAL", "OP_DIFFERENT", "OP_AND", "OP_OR", "OP_DIM",
  "ASS_MUL", "ASS_DIV", "ASS_ADD", "ASS_SUB", "ASS_XOR", "ASS_MOD",
  "ASS_SHL", "ASS_SHR", "ASS_AND", "ASS_OR", "ID", "LITERAL", "'='", "'|'",
  "'^'", "'&'", "'>'", "'<'", "'-'", "'+'", "'*'", "'/'", "'%'", "'('",
  "')'", "'~'", "'!'", "'{'", "'}'", "';'", "'.'", "','", "':'", "'['",
  "']'", "'?'", "$accept", "TypeSpecifier", "TypeName", "PrimitiveType",
  "ProgramFile", "ImportStatements", "ImportStatement", "QualifiedName",
  "ClassHeader", "FieldDeclarations", "FieldDeclaration",
  "AttrDeclaration", "VariableDeclarators", "VariableDeclarator",
  "VariableInitializer", "ArrayInitializers", "MethodDeclaration",
  "MethodDeclarator", "ParameterList", "Parameter", "DeclaratorName",
  "Block", "LocalVariableDeclarationsAndStatements",
  "LocalVariableDeclarationOrStatement",
  "LocalVariableDeclarationStatement", "Statement", "LabeledStatement",
  "SelectionStatement", "IterationStatement", "ForInit", "ForExpr",
  "ForIncr", "Expressions", "JumpStatement", "MethodCall", "ArgumentList",
  "DimExprs", "DimExpr", "UnaryExpression", "BasicElement", "ArrayAccess",
  "CastExpression", "ArithmeticExpression", "RelationalExpression",
  "Expression", "ConditionalExpression", "AssignmentExpression",
  "NewAllocationExpression", "ArrayAllocationExpression", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,    61,   124,    94,    38,    62,    60,    45,
      43,    42,    47,    37,    40,    41,   126,    33,   123,   125,
      59,    46,    44,    58,    91,    93,    63
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    77,    78,    78,    79,    79,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    81,    81,    82,    82,    83,
      83,    84,    84,    85,    85,    86,    86,    87,    87,    88,
      88,    89,    89,    90,    90,    91,    91,    91,    92,    92,
      92,    93,    93,    94,    94,    94,    95,    95,    96,    97,
      97,    98,    98,    99,    99,   100,   100,   101,   102,   102,
     102,   102,   102,   102,   102,   103,   103,   103,   104,   104,
     104,   105,   105,   105,   105,   106,   106,   106,   107,   107,
     108,   109,   109,   110,   110,   110,   110,   110,   110,   111,
     111,   112,   112,   113,   113,   114,   114,   115,   115,   115,
     115,   115,   115,   115,   115,   116,   116,   116,   116,   117,
     118,   118,   118,   118,   119,   119,   119,   119,   119,   119,
     119,   119,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   121,   121,   121,   122,   122,   123,
     123,   123,   123,   123,   123,   123,   123,   123,   123,   124,
     124,   124,   125
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     4,     1,     2,     3,
       5,     1,     3,     3,     2,     1,     2,     2,     1,     4,
       3,     1,     3,     1,     3,     1,     2,     3,     1,     3,
       2,     5,     4,     4,     3,     2,     1,     3,     2,     1,
       2,     3,     2,     1,     2,     1,     1,     3,     1,     2,
       1,     1,     1,     1,     1,     3,     4,     3,     5,     7,
       5,     5,     7,     7,     6,     2,     1,     1,     2,     1,
       1,     1,     3,     3,     2,     3,     2,     3,     2,     4,
       3,     1,     3,     1,     2,     3,     2,     2,     2,     2,
       2,     1,     2,     2,     2,     1,     1,     1,     1,     4,
       1,     4,     6,     6,     1,     3,     3,     3,     3,     3,
       3,     3,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     3,     1,     5,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       3,     4,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,    17,     0,    24,    21,
       0,     0,     1,    18,     0,     0,    19,     0,    23,     0,
       0,     0,     0,    25,     0,    28,    22,     0,     0,     0,
       6,     8,     7,    13,    12,    10,    11,     9,    14,     0,
       2,     4,     5,    16,    26,    27,    20,    15,     0,    49,
      30,    31,     0,    33,     0,     3,    93,     0,    29,     0,
       0,    45,     0,    42,    50,     0,     0,     0,     0,   107,
     105,     0,     0,    96,     0,   106,   110,   101,   108,   114,
       0,    94,    41,    32,    33,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   107,     0,    52,    64,     0,
       5,    63,     0,    53,    55,    56,    58,    60,    61,    62,
     122,   137,     0,   134,   135,   107,     0,    34,    35,    44,
       0,     0,    46,    97,    98,     0,   102,   103,   104,     0,
       0,    99,   100,     0,     0,     0,     0,     0,     0,     0,
      95,     0,    84,     0,     0,    86,     0,     0,     0,     0,
      88,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    51,    54,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      59,    36,    38,     0,    48,    43,     0,     0,    90,     0,
      91,     0,   120,   121,   116,   115,   118,   117,   119,    83,
       0,    85,    67,     0,    77,    76,     0,     0,    81,     0,
      87,     0,     0,   141,   142,   143,   144,   145,   146,   147,
     148,     0,   139,   140,   149,    65,   136,    57,   126,   125,
     127,   128,   132,   133,   131,   130,   129,   124,   123,     0,
      37,    40,    47,     0,   111,    89,     0,   109,    66,     0,
      79,     0,     0,    75,     0,     0,     0,     0,     0,     0,
       0,    39,     0,     0,    92,     0,     0,     0,    80,    78,
      82,    68,    70,    71,   152,   150,     0,   138,   113,   112,
       0,    74,     0,     0,   151,    72,    73,    69
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    99,    40,    41,     4,     5,     6,    74,     7,    22,
      23,    24,    50,    51,   182,   183,    25,    52,   121,   122,
      53,   101,   102,   103,   104,   105,   106,   107,   108,   206,
     251,   267,   207,   109,    75,   189,    55,    56,    76,    77,
      78,    79,   110,   111,   112,   113,   114,   223,   224
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -87
static const yytype_int16 yypact[] =
{
      21,   -29,    -9,    50,    71,    21,   -87,    48,   -87,   -87,
      28,    80,   -87,   -87,    67,    30,   -87,   -27,   -87,    30,
     113,   414,   -10,   -87,    73,   -87,   -87,    75,    -6,   414,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,    90,
      74,   -87,    78,   -87,   -87,   -87,   -87,   -87,    90,   -87,
      79,   -87,   -36,   -28,   126,    74,   -87,   107,    79,   -36,
      90,   -87,   218,   -87,   -87,   477,    23,    52,    52,     1,
     -87,   657,   109,   -87,     2,   -87,   -87,    89,   -87,   -87,
     397,   -87,   -87,   -87,    -7,   -30,   124,   -20,    97,   344,
      98,   115,   423,   118,   119,   539,   385,   -87,   -87,    90,
       2,   -87,   247,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     596,   111,   125,   -87,   -87,   553,   447,   -87,   -87,   -87,
      90,   -11,   -87,   -87,   -87,   120,     1,   -87,   -87,   482,
     124,   -87,   -87,   124,   124,   124,   124,   124,   124,   124,
     -87,   130,   -87,   135,   133,   -87,   315,   176,   122,   371,
     -87,   139,   371,   371,   371,   371,   371,   371,   371,   371,
     371,   371,    66,   315,   145,   -15,   -87,   -87,   124,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   371,
     -87,   -87,   -87,     9,   171,   -87,   414,   505,   -87,     5,
     -87,   408,   105,   105,    61,    61,   -87,   -87,   -87,   -87,
     315,   -87,   -87,   150,   -87,   -87,   433,    56,   -87,   151,
     -87,   152,   153,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   414,   -87,   -87,   147,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   158,
     -87,   477,   -87,   512,   -87,   -87,   371,   -87,   -87,   371,
     -87,   487,   156,   -87,   371,   344,   167,   344,    74,   458,
     371,   -87,   172,   174,   -87,   175,   344,   179,   169,   -87,
     -87,   242,   -87,   -87,    74,   -87,    11,   -87,   -87,   -87,
     190,   -87,   344,   344,   -87,   -87,   -87,   -87
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -87,   -14,    43,   -57,   -87,   -87,   261,    -2,   263,   254,
      57,   -87,   -37,   219,   -60,    22,   -87,   232,   -87,   103,
     -52,   -50,   -87,   -79,   136,   -86,   -87,   -87,   -87,   -87,
     -87,   -87,    32,   -87,   220,   -87,    33,   -54,   106,    70,
     222,   -87,   -44,   132,   -47,   -80,    47,   -87,   -87
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -22
static const yytype_int16 yytable[] =
{
      10,    81,    63,   147,    61,   117,   143,    39,    84,    82,
      80,    58,    64,    20,   125,    48,    21,    20,   118,    42,
      21,   141,     8,   167,    26,    65,    30,    42,    31,     1,
      32,   144,    62,    64,    27,    33,    66,    34,     2,   125,
     142,    35,     9,    36,     3,   151,    65,    84,    37,   164,
     145,    38,   120,    20,   185,   227,    21,    60,    11,    43,
     100,   186,   165,    47,    42,   -21,   129,   202,   184,   118,
     245,    12,   -21,    57,     9,   -21,   130,   246,   240,    44,
     284,   241,   190,   241,   225,    44,   191,   221,   119,   192,
     193,   194,   195,   196,   197,   198,    67,    68,    16,    17,
     100,   208,   209,    69,    70,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   222,    15,   115,    70,   131,
     132,   248,   137,   138,   139,    30,   253,    31,   254,    32,
      96,    18,   239,    72,    33,    19,    34,   123,   124,    29,
      35,    49,    36,    45,   100,    46,   100,    37,    54,    57,
      38,    60,    67,    68,    67,    68,    67,    68,    26,   252,
     126,   100,   148,   262,   135,   136,   137,   138,   139,   271,
     146,   273,   120,   115,    70,    69,    70,    69,    70,   149,
     281,   261,   152,   153,    42,   187,    96,   179,    71,    72,
      71,    72,   204,    72,   118,   180,   286,   287,   100,   264,
     199,    73,   265,   201,   208,   203,   272,   270,   200,   210,
     226,    64,   118,   277,   249,   259,   255,   256,   257,    42,
      81,    30,    85,    31,    86,    32,   269,    87,    88,    89,
      33,   260,    34,    90,    91,    62,    35,   278,    36,   279,
     280,   254,    92,    37,   282,    93,    38,    94,    67,    68,
      30,    85,    31,    86,    32,   283,    87,    88,    89,    33,
     285,    34,    90,    91,   258,    35,    13,    36,    14,    95,
      70,    92,    37,    28,    93,    38,    94,    67,    68,    83,
      59,   276,    96,   268,   205,    72,    62,    97,    98,   242,
     263,   274,   127,   244,   128,     0,     0,     0,    95,    70,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,    96,     0,     0,    72,    62,   166,    98,    30,    85,
      31,    86,    32,     0,    87,    88,    89,    33,     0,    34,
      90,    91,     0,    35,     0,    36,     0,     0,     0,    92,
      37,     0,    93,    38,    94,    67,    68,     0,    85,     0,
      86,     0,     0,    87,    88,    89,     0,     0,     0,    90,
      91,     0,     0,     0,     0,     0,    95,    70,    92,     0,
       0,    93,     0,    94,    67,    68,     0,     0,     0,    96,
       0,     0,    72,    62,     0,    98,     0,     0,    30,     0,
      31,     0,    32,     0,     0,    95,    70,    33,     0,    34,
       0,    67,    68,    35,     0,    36,     0,     0,    96,     0,
      37,    72,    62,    38,    98,    67,    68,    30,     0,    31,
       0,    32,   115,    70,     0,     0,    33,     0,    34,   133,
     134,     0,    35,     0,    36,    96,   115,    70,    72,    37,
     133,   134,    38,     0,     0,     0,     0,     0,     0,    96,
       0,     0,    72,    67,    68,     0,   135,   136,   137,   138,
     139,     0,     0,    67,    68,     9,     0,   135,   136,   137,
     138,   139,   140,     0,   115,    70,     0,    67,    68,     0,
       0,     0,     0,   247,   115,    70,     0,    96,    67,    68,
      72,     0,     0,   150,     0,     0,     0,    96,   115,    70,
      72,     0,     0,   250,     0,     0,     0,    67,    68,   115,
      70,    96,    67,    68,    72,   116,   181,    67,    68,     0,
       0,     0,    96,     0,     0,    72,   116,   275,   115,    70,
       0,     0,     0,   115,    70,    67,    68,     0,   115,    70,
       0,    96,    67,    68,    72,   116,    96,   188,     0,    72,
       0,    96,   266,     0,    72,     0,    69,    70,     0,     0,
       0,     0,     0,   115,    70,     0,     0,     0,     0,   243,
       0,     0,    72,     0,     0,     0,    71,     0,     0,    72,
     154,   155,   156,   157,   158,   159,   160,   161,     0,     0,
     -21,     0,   162,     0,   154,   155,   156,   157,   158,   159,
     160,   161,     0,   -21,   -21,     0,   162,     0,     0,     0,
     -21,     0,   163,   -21,     0,     0,     0,   -21,     0,     0,
       0,     0,     0,     0,   -21,     0,     0,   -21,   133,   134,
     168,   169,   170,   171,   172,   173,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     174,   175,   176,   177,   178,   135,   136,   137,   138,   139,
      30,     0,    31,     0,    32,     0,     0,     0,     0,    33,
       0,    34,     0,     0,     0,    35,     0,    36,     0,     0,
       0,     0,    37,     0,     0,    38
};

static const yytype_int16 yycheck[] =
{
       2,    55,    52,    89,    40,    65,    86,    21,    60,    59,
      54,    48,    40,    23,    71,    29,    26,    23,    65,    21,
      26,    51,    51,   102,    51,    53,     3,    29,     5,     8,
       7,    51,    68,    40,    61,    12,    64,    14,    17,    96,
      70,    18,    51,    20,    23,    92,    53,    99,    25,    96,
      70,    28,    66,    23,    65,    70,    26,    72,     8,    69,
      62,    72,    99,    69,    66,    64,    64,   146,   120,   116,
      65,     0,    71,    71,    51,    74,    74,    72,    69,    22,
      69,    72,   129,    72,   163,    28,   130,    21,    65,   133,
     134,   135,   136,   137,   138,   139,    30,    31,    70,    71,
     102,   148,   149,    51,    52,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,    68,    51,    52,    30,
      31,   200,    61,    62,    63,     3,    70,     5,    72,     7,
      64,    51,   179,    67,    12,    68,    14,    67,    68,    26,
      18,    51,    20,    70,   146,    70,   148,    25,    74,    71,
      28,    72,    30,    31,    30,    31,    30,    31,    51,   206,
      51,   163,    64,   243,    59,    60,    61,    62,    63,   255,
      73,   257,   186,    51,    52,    51,    52,    51,    52,    64,
     266,   241,    64,    64,   186,    65,    64,    76,    64,    67,
      64,    67,    70,    67,   241,    70,   282,   283,   200,   246,
      70,    75,   249,    70,   251,    29,   256,   254,    73,    70,
      65,    40,   259,   260,    64,    68,    65,    65,    65,   221,
     274,     3,     4,     5,     6,     7,    70,     9,    10,    11,
      12,    73,    14,    15,    16,    68,    18,    65,    20,    65,
      65,    72,    24,    25,    65,    27,    28,    29,    30,    31,
       3,     4,     5,     6,     7,    13,     9,    10,    11,    12,
      70,    14,    15,    16,   221,    18,     5,    20,     5,    51,
      52,    24,    25,    19,    27,    28,    29,    30,    31,    60,
      48,   259,    64,   251,   148,    67,    68,    69,    70,   186,
     243,   258,    72,   187,    72,    -1,    -1,    -1,    51,    52,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,    64,    -1,    -1,    67,    68,    69,    70,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    -1,    14,
      15,    16,    -1,    18,    -1,    20,    -1,    -1,    -1,    24,
      25,    -1,    27,    28,    29,    30,    31,    -1,     4,    -1,
       6,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,    15,
      16,    -1,    -1,    -1,    -1,    -1,    51,    52,    24,    -1,
      -1,    27,    -1,    29,    30,    31,    -1,    -1,    -1,    64,
      -1,    -1,    67,    68,    -1,    70,    -1,    -1,     3,    -1,
       5,    -1,     7,    -1,    -1,    51,    52,    12,    -1,    14,
      -1,    30,    31,    18,    -1,    20,    -1,    -1,    64,    -1,
      25,    67,    68,    28,    70,    30,    31,     3,    -1,     5,
      -1,     7,    51,    52,    -1,    -1,    12,    -1,    14,    32,
      33,    -1,    18,    -1,    20,    64,    51,    52,    67,    25,
      32,    33,    28,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    67,    30,    31,    -1,    59,    60,    61,    62,
      63,    -1,    -1,    30,    31,    51,    -1,    59,    60,    61,
      62,    63,    75,    -1,    51,    52,    -1,    30,    31,    -1,
      -1,    -1,    -1,    75,    51,    52,    -1,    64,    30,    31,
      67,    -1,    -1,    70,    -1,    -1,    -1,    64,    51,    52,
      67,    -1,    -1,    70,    -1,    -1,    -1,    30,    31,    51,
      52,    64,    30,    31,    67,    68,    69,    30,    31,    -1,
      -1,    -1,    64,    -1,    -1,    67,    68,    69,    51,    52,
      -1,    -1,    -1,    51,    52,    30,    31,    -1,    51,    52,
      -1,    64,    30,    31,    67,    68,    64,    65,    -1,    67,
      -1,    64,    65,    -1,    67,    -1,    51,    52,    -1,    -1,
      -1,    -1,    -1,    51,    52,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    67,    -1,    -1,    -1,    64,    -1,    -1,    67,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    -1,
      51,    -1,    53,    -1,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    64,    51,    -1,    53,    -1,    -1,    -1,
      71,    -1,    73,    74,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    -1,    74,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
       3,    -1,     5,    -1,     7,    -1,    -1,    -1,    -1,    12,
      -1,    14,    -1,    -1,    -1,    18,    -1,    20,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    28
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,    17,    23,    81,    82,    83,    85,    51,    51,
      84,     8,     0,    83,    85,    68,    70,    71,    51,    68,
      23,    26,    86,    87,    88,    93,    51,    61,    86,    26,
       3,     5,     7,    12,    14,    18,    20,    25,    28,    78,
      79,    80,    84,    69,    87,    70,    70,    69,    78,    51,
      89,    90,    94,    97,    74,   113,   114,    71,    89,    94,
      72,    40,    68,    98,    40,    53,    64,    30,    31,    51,
      52,    64,    67,    75,    84,   111,   115,   116,   117,   118,
     119,   114,    98,    90,    97,     4,     6,     9,    10,    11,
      15,    16,    24,    27,    29,    51,    64,    69,    70,    78,
      84,    98,    99,   100,   101,   102,   103,   104,   105,   110,
     119,   120,   121,   122,   123,    51,    68,    91,   121,    65,
      78,    95,    96,   116,   116,    80,    51,   111,   117,    64,
      74,    30,    31,    32,    33,    59,    60,    61,    62,    63,
      75,    51,    70,   122,    51,    70,    73,   102,    64,    64,
      70,   121,    64,    64,    41,    42,    43,    44,    45,    46,
      47,    48,    53,    73,   121,    89,    69,   100,    34,    35,
      36,    37,    38,    39,    54,    55,    56,    57,    58,    76,
      70,    69,    91,    92,    97,    65,    72,    65,    65,   112,
     121,   119,   119,   119,   119,   119,   119,   119,   119,    70,
      73,    70,   100,    29,    70,   101,   106,   109,   121,   121,
      70,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,    21,   121,   124,   125,   100,    65,    70,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   121,
      69,    72,    96,    64,   115,    65,    72,    75,   100,    64,
      70,   107,   121,    70,    72,    65,    65,    65,    79,    68,
      73,    91,   122,   123,   121,   121,    65,   108,   109,    70,
     121,   102,    98,   102,   113,    69,    92,   121,    65,    65,
      65,   102,    65,    13,    69,    70,   102,   102
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
      

/* Line 1455 of yacc.c  */
#line 1776 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 359 "pJava.y"


int main()
{
yyparse();
return 0;
}

