/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1





# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    MAIN = 258,                    /* MAIN  */
    CLASS = 259,                   /* CLASS  */
    EXTENDS = 260,                 /* EXTENDS  */
    NATTYPE = 261,                 /* NATTYPE  */
    IF = 262,                      /* IF  */
    ELSE = 263,                    /* ELSE  */
    WHILE = 264,                   /* WHILE  */
    PRINTNAT = 265,                /* PRINTNAT  */
    READNAT = 266,                 /* READNAT  */
    THIS = 267,                    /* THIS  */
    NEW = 268,                     /* NEW  */
    NUL = 269,                     /* NUL  */
    NATLITERAL = 270,              /* NATLITERAL  */
    ID = 271,                      /* ID  */
    ASSIGN = 272,                  /* ASSIGN  */
    PLUS = 273,                    /* PLUS  */
    MINUS = 274,                   /* MINUS  */
    TIMES = 275,                   /* TIMES  */
    EQUALITY = 276,                /* EQUALITY  */
    GREATER = 277,                 /* GREATER  */
    AND = 278,                     /* AND  */
    NOT = 279,                     /* NOT  */
    DOT = 280,                     /* DOT  */
    SEMICOLON = 281,               /* SEMICOLON  */
    COMMA = 282,                   /* COMMA  */
    LBRACE = 283,                  /* LBRACE  */
    RBRACE = 284,                  /* RBRACE  */
    LPAREN = 285,                  /* LPAREN  */
    RPAREN = 286,                  /* RPAREN  */
    ENDOFFILE = 287                /* ENDOFFILE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif




int yyparse (void);

/* "%code provides" blocks.  */
#line 3 "dj.y"

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

#line 176 "dj.tab.c"


/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_MAIN = 3,                       /* MAIN  */
  YYSYMBOL_CLASS = 4,                      /* CLASS  */
  YYSYMBOL_EXTENDS = 5,                    /* EXTENDS  */
  YYSYMBOL_NATTYPE = 6,                    /* NATTYPE  */
  YYSYMBOL_IF = 7,                         /* IF  */
  YYSYMBOL_ELSE = 8,                       /* ELSE  */
  YYSYMBOL_WHILE = 9,                      /* WHILE  */
  YYSYMBOL_PRINTNAT = 10,                  /* PRINTNAT  */
  YYSYMBOL_READNAT = 11,                   /* READNAT  */
  YYSYMBOL_THIS = 12,                      /* THIS  */
  YYSYMBOL_NEW = 13,                       /* NEW  */
  YYSYMBOL_NUL = 14,                       /* NUL  */
  YYSYMBOL_NATLITERAL = 15,                /* NATLITERAL  */
  YYSYMBOL_ID = 16,                        /* ID  */
  YYSYMBOL_ASSIGN = 17,                    /* ASSIGN  */
  YYSYMBOL_PLUS = 18,                      /* PLUS  */
  YYSYMBOL_MINUS = 19,                     /* MINUS  */
  YYSYMBOL_TIMES = 20,                     /* TIMES  */
  YYSYMBOL_EQUALITY = 21,                  /* EQUALITY  */
  YYSYMBOL_GREATER = 22,                   /* GREATER  */
  YYSYMBOL_AND = 23,                       /* AND  */
  YYSYMBOL_NOT = 24,                       /* NOT  */
  YYSYMBOL_DOT = 25,                       /* DOT  */
  YYSYMBOL_SEMICOLON = 26,                 /* SEMICOLON  */
  YYSYMBOL_COMMA = 27,                     /* COMMA  */
  YYSYMBOL_LBRACE = 28,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 29,                    /* RBRACE  */
  YYSYMBOL_LPAREN = 30,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 31,                    /* RPAREN  */
  YYSYMBOL_ENDOFFILE = 32,                 /* ENDOFFILE  */
  YYSYMBOL_YYACCEPT = 33,                  /* $accept  */
  YYSYMBOL_pgm = 34,                       /* pgm  */
  YYSYMBOL_classlist_or_empty = 35,        /* classlist_or_empty  */
  YYSYMBOL_classlist = 36,                 /* classlist  */
  YYSYMBOL_class = 37,                     /* class  */
  YYSYMBOL_variablelist_or_empty = 38,     /* variablelist_or_empty  */
  YYSYMBOL_variable = 39,                  /* variable  */
  YYSYMBOL_methodlist_or_empty = 40,       /* methodlist_or_empty  */
  YYSYMBOL_methodlist = 41,                /* methodlist  */
  YYSYMBOL_method = 42,                    /* method  */
  YYSYMBOL_parameterlist_or_empty = 43,    /* parameterlist_or_empty  */
  YYSYMBOL_parameterlist = 44,             /* parameterlist  */
  YYSYMBOL_parameter = 45,                 /* parameter  */
  YYSYMBOL_id = 46,                        /* id  */
  YYSYMBOL_nat = 47,                       /* nat  */
  YYSYMBOL_explist = 48,                   /* explist  */
  YYSYMBOL_exp = 49,                       /* exp  */
  YYSYMBOL_argumentlist_or_empty = 50,     /* argumentlist_or_empty  */
  YYSYMBOL_argumentlist = 51               /* argumentlist  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   356

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  53
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  133

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   287


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    39,    39,    47,    49,    52,    55,    59,    67,    71,
      74,    77,    82,    84,    87,    90,    94,   101,   110,   112,
     115,   118,   122,   125,   130,   134,   138,   141,   145,   150,
     154,   158,   161,   166,   170,   174,   178,   182,   186,   190,
     193,   197,   202,   206,   209,   212,   215,   218,   221,   224,
     228,   230,   233,   236
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "MAIN", "CLASS",
  "EXTENDS", "NATTYPE", "IF", "ELSE", "WHILE", "PRINTNAT", "READNAT",
  "THIS", "NEW", "NUL", "NATLITERAL", "ID", "ASSIGN", "PLUS", "MINUS",
  "TIMES", "EQUALITY", "GREATER", "AND", "NOT", "DOT", "SEMICOLON",
  "COMMA", "LBRACE", "RBRACE", "LPAREN", "RPAREN", "ENDOFFILE", "$accept",
  "pgm", "classlist_or_empty", "classlist", "class",
  "variablelist_or_empty", "variable", "methodlist_or_empty", "methodlist",
  "method", "parameterlist_or_empty", "parameterlist", "parameter", "id",
  "nat", "explist", "exp", "argumentlist_or_empty", "argumentlist", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-89)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       3,     6,    25,    23,     3,   -89,   -89,    24,   -89,     2,
     -89,     6,   -89,     5,    35,   -89,   -89,     4,     9,    10,
      13,   -89,     6,   -89,   -89,   280,   280,   -89,   -15,     6,
     125,   321,     8,   280,   280,   280,    22,    26,   -13,    29,
      80,   280,   280,    34,    38,    36,   330,   280,   280,   280,
     280,   280,   280,     6,   -89,    32,     8,   -89,     6,     6,
      96,   293,   307,   -89,    44,   -89,   138,   138,    45,    39,
     -89,   -89,   -89,   -89,    -2,    -2,    29,   161,   161,   185,
     -11,   -89,   -89,     6,     6,   -21,   -10,     7,    41,   -89,
     -89,   -89,   280,   280,   280,    47,    50,     8,     8,   280,
     280,   138,   138,    60,    61,    54,   -89,     6,     6,    62,
     160,   184,   -89,    66,     8,   -89,   -89,    67,   101,   -89,
     -89,   -89,   -89,    76,    35,    35,   280,   208,   232,   256,
     -89,   -89,   -89
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,     0,     0,     0,     3,     6,    24,     0,     1,     0,
       5,     0,     9,     0,     0,     9,    25,     0,     0,     0,
       0,    45,     0,    47,    48,     0,     0,     8,    31,     0,
       0,     0,    13,     0,     0,     0,     0,     0,    31,    39,
       0,     0,    51,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    27,     0,    12,    15,     0,     0,
       0,     0,     0,    44,     0,    49,    33,    53,     0,    50,
      10,    11,     2,    26,    34,    35,    36,    37,    38,    40,
      30,     7,    14,     0,     0,     0,     0,     0,     0,    43,
      46,    29,     0,     0,    51,     0,     0,    19,    19,     0,
       0,    52,    32,     0,     0,    18,    21,     0,     0,     0,
       0,     0,    28,     0,     0,    22,    23,     0,     0,    42,
       9,    20,     9,     0,     0,     0,     0,     0,     0,     0,
      16,    17,    41
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -89,   -89,   -89,   -89,   108,   -12,   -89,   -89,   -89,    64,
      27,   -89,    12,    -1,   -24,   -88,    37,    28,   -89
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     2,     3,     4,     5,    14,    27,    55,    56,    57,
     104,   105,   106,    38,    29,    30,    31,    68,    69
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,     6,    41,    32,    41,    70,    93,     1,    59,    97,
      13,   110,   111,    28,    16,    42,    71,    42,    49,    94,
      98,    37,     6,    53,     6,     8,     9,    43,    44,    11,
      12,    58,    84,    15,    33,    99,   127,   128,   129,    34,
      35,    16,    17,    36,    18,    19,    20,    21,    22,    23,
      24,     6,    80,    63,    53,    83,    64,    85,    86,    25,
      70,    81,    39,    40,    71,    26,    92,    46,    72,   100,
      60,    61,    62,   108,   108,    90,    91,    97,    66,    67,
      98,   114,    95,    96,    74,    75,    76,    77,    78,    79,
     108,   112,   113,   117,   120,   122,   107,   107,    47,    48,
      49,    50,    51,    52,   126,    53,   115,   116,   124,   123,
     125,    65,    10,   107,    47,    48,    49,    50,    51,    52,
      82,    53,   103,    28,    28,   109,   121,    87,     0,   101,
     102,    67,    17,     0,    18,    19,    20,    21,    22,    23,
      24,     6,     0,     0,     0,     0,     0,    46,    46,    25,
       0,     0,     0,     0,    45,    26,    47,    48,    49,    50,
      51,    52,     0,    53,    46,    46,    46,    17,     0,    18,
      19,    20,    21,    22,    23,    24,     6,     0,     0,    47,
      48,    49,    -1,    -1,    25,     0,    53,     0,     0,   118,
      26,    17,     0,    18,    19,    20,    21,    22,    23,    24,
       6,     0,     0,    47,    48,    49,    50,    51,    25,     0,
      53,     0,     0,   119,    26,    17,     0,    18,    19,    20,
      21,    22,    23,    24,     6,     0,     0,     0,     0,     0,
       0,     0,    25,     0,     0,     0,     0,   130,    26,    17,
       0,    18,    19,    20,    21,    22,    23,    24,     6,     0,
       0,     0,     0,     0,     0,     0,    25,     0,     0,     0,
       0,   131,    26,    17,     0,    18,    19,    20,    21,    22,
      23,    24,     6,     0,     0,     0,     0,     0,     0,     0,
      25,     0,     0,     0,     0,   132,    26,    17,     0,    18,
      19,    20,    21,    22,    23,    24,     6,     0,     0,     0,
       0,     0,     0,     0,    25,     0,     0,     0,     0,     0,
      26,    47,    48,    49,    50,    51,    52,     0,    53,     0,
       0,     0,     0,     0,    88,    47,    48,    49,    50,    51,
      52,     0,    53,     0,     0,     0,     0,     0,    89,    47,
      48,    49,    50,    51,    52,     0,    53,    54,    47,    48,
      49,    50,    51,    52,     0,    53,    73
};

static const yytype_int16 yycheck[] =
{
       1,    16,    17,    15,    17,    26,    17,     4,    32,    30,
      11,    99,   100,    14,     6,    30,    26,    30,    20,    30,
      30,    22,    16,    25,    16,     0,     3,    28,    29,     5,
      28,    32,    56,    28,    30,    28,   124,   125,   126,    30,
      30,     6,     7,    30,     9,    10,    11,    12,    13,    14,
      15,    16,    53,    31,    25,    56,    30,    58,    59,    24,
      26,    29,    25,    26,    26,    30,    27,    30,    32,    28,
      33,    34,    35,    97,    98,    31,    31,    30,    41,    42,
      30,    27,    83,    84,    47,    48,    49,    50,    51,    52,
     114,    31,    31,    31,    28,    28,    97,    98,    18,    19,
      20,    21,    22,    23,    28,    25,   107,   108,   120,     8,
     122,    31,     4,   114,    18,    19,    20,    21,    22,    23,
      56,    25,    94,   124,   125,    98,   114,    31,    -1,    92,
      93,    94,     7,    -1,     9,    10,    11,    12,    13,    14,
      15,    16,    -1,    -1,    -1,    -1,    -1,   110,   111,    24,
      -1,    -1,    -1,    -1,    29,    30,    18,    19,    20,    21,
      22,    23,    -1,    25,   127,   128,   129,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    -1,    -1,    18,
      19,    20,    21,    22,    24,    -1,    25,    -1,    -1,    29,
      30,     7,    -1,     9,    10,    11,    12,    13,    14,    15,
      16,    -1,    -1,    18,    19,    20,    21,    22,    24,    -1,
      25,    -1,    -1,    29,    30,     7,    -1,     9,    10,    11,
      12,    13,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    30,     7,
      -1,     9,    10,    11,    12,    13,    14,    15,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    29,    30,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    29,    30,     7,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,
      30,    18,    19,    20,    21,    22,    23,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    31,    18,    19,    20,    21,    22,
      23,    -1,    25,    -1,    -1,    -1,    -1,    -1,    31,    18,
      19,    20,    21,    22,    23,    -1,    25,    26,    18,    19,
      20,    21,    22,    23,    -1,    25,    26
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,    34,    35,    36,    37,    16,    46,     0,     3,
      37,     5,    28,    46,    38,    28,     6,     7,     9,    10,
      11,    12,    13,    14,    15,    24,    30,    39,    46,    47,
      48,    49,    38,    30,    30,    30,    30,    46,    46,    49,
      49,    17,    30,    46,    46,    29,    49,    18,    19,    20,
      21,    22,    23,    25,    26,    40,    41,    42,    46,    47,
      49,    49,    49,    31,    30,    31,    49,    49,    50,    51,
      26,    26,    32,    26,    49,    49,    49,    49,    49,    49,
      46,    29,    42,    46,    47,    46,    46,    31,    31,    31,
      31,    31,    27,    17,    30,    46,    46,    30,    30,    28,
      28,    49,    49,    50,    43,    44,    45,    46,    47,    43,
      48,    48,    31,    31,    27,    46,    46,    31,    29,    29,
      28,    45,    28,     8,    38,    38,    28,    48,    48,    48,
      29,    29,    29
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    33,    34,    35,    35,    36,    36,    37,    38,    38,
      39,    39,    40,    40,    41,    41,    42,    42,    43,    43,
      44,    44,    45,    45,    46,    47,    48,    48,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    49,    49,    49,
      50,    50,    51,    51
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     7,     1,     0,     2,     1,     8,     2,     0,
       3,     3,     1,     0,     2,     1,     9,     9,     1,     0,
       3,     1,     2,     2,     1,     1,     3,     2,     6,     4,
       3,     1,     5,     3,     3,     3,     3,     3,     3,     2,
       3,    11,     7,     4,     3,     1,     4,     1,     1,     3,
       1,     0,     3,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
      if (yytable_value_is_error (yyn))
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* pgm: classlist_or_empty MAIN LBRACE variablelist_or_empty explist RBRACE ENDOFFILE  */
#line 40 "dj.y"
     { pgmAST = newAST(PROGRAM, NULL, 0, NULL, yylineno); 
     appendToChildrenList(pgmAST, yyvsp[-6]);
     appendToChildrenList(pgmAST, yyvsp[-3]);
     appendToChildrenList(pgmAST, yyvsp[-2]);
     return 0; }
#line 1319 "dj.tab.c"
    break;

  case 4: /* classlist_or_empty: %empty  */
#line 49 "dj.y"
                    { yyval = newAST(CLASS_DECL_LIST, NULL, 0, NULL, yylineno); }
#line 1325 "dj.tab.c"
    break;

  case 5: /* classlist: classlist class  */
#line 53 "dj.y"
           { appendToChildrenList(yyvsp[-1], yyvsp[0]);
             yyval = yyvsp[-1]; }
#line 1332 "dj.tab.c"
    break;

  case 6: /* classlist: class  */
#line 56 "dj.y"
           { yyval = newAST(CLASS_DECL_LIST, yyvsp[0], 0, NULL, yylineno); }
#line 1338 "dj.tab.c"
    break;

  case 7: /* class: CLASS id EXTENDS id LBRACE variablelist_or_empty methodlist_or_empty RBRACE  */
#line 60 "dj.y"
       { yyval = newAST(CLASS_DECL, NULL, 0, NULL, yylineno);
         appendToChildrenList(yyval, yyvsp[-6]);
         appendToChildrenList(yyval, yyvsp[-4]);
         appendToChildrenList(yyval, yyvsp[-2]);
         appendToChildrenList(yyval, yyvsp[-1]); }
#line 1348 "dj.tab.c"
    break;

  case 8: /* variablelist_or_empty: variablelist_or_empty variable  */
#line 68 "dj.y"
                       { appendToChildrenList(yyvsp[-1], yyvsp[0]);
                         yyval = yyvsp[-1]; }
#line 1355 "dj.tab.c"
    break;

  case 9: /* variablelist_or_empty: %empty  */
#line 71 "dj.y"
                       { yyval = newAST(VAR_DECL_LIST, NULL, 0, NULL, yylineno); }
#line 1361 "dj.tab.c"
    break;

  case 10: /* variable: id id SEMICOLON  */
#line 75 "dj.y"
          { yyval = newAST(VAR_DECL, yyvsp[-2], 0, NULL, yylineno);
            appendToChildrenList(yyval, yyvsp[-1]); }
#line 1368 "dj.tab.c"
    break;

  case 11: /* variable: nat id SEMICOLON  */
#line 78 "dj.y"
          { yyval = newAST(VAR_DECL, yyvsp[-2], 0, NULL, yylineno);
            appendToChildrenList(yyval, yyvsp[-1]); }
#line 1375 "dj.tab.c"
    break;

  case 13: /* methodlist_or_empty: %empty  */
#line 84 "dj.y"
                     { yyval = newAST(METHOD_DECL_LIST, NULL, 0, NULL, yylineno); }
#line 1381 "dj.tab.c"
    break;

  case 14: /* methodlist: methodlist method  */
#line 88 "dj.y"
            { appendToChildrenList(yyvsp[-1], yyvsp[0]);
              yyval = yyvsp[-1]; }
#line 1388 "dj.tab.c"
    break;

  case 15: /* methodlist: method  */
#line 91 "dj.y"
            { yyval = newAST(METHOD_DECL_LIST, yyvsp[0], 0, NULL, yylineno); }
#line 1394 "dj.tab.c"
    break;

  case 16: /* method: id id LPAREN parameterlist_or_empty RPAREN LBRACE variablelist_or_empty explist RBRACE  */
#line 95 "dj.y"
        { yyval = newAST(METHOD_DECL, NULL, 0, NULL, yylineno);
          appendToChildrenList(yyval, yyvsp[-8]);
          appendToChildrenList(yyval, yyvsp[-7]); 
          appendToChildrenList(yyval, yyvsp[-5]);
          appendToChildrenList(yyval, yyvsp[-2]);
          appendToChildrenList(yyval, yyvsp[-1]); }
#line 1405 "dj.tab.c"
    break;

  case 17: /* method: nat id LPAREN parameterlist_or_empty RPAREN LBRACE variablelist_or_empty explist RBRACE  */
#line 102 "dj.y"
        { yyval = newAST(METHOD_DECL, NULL, 0, NULL, yylineno);
          appendToChildrenList(yyval, yyvsp[-8]);
          appendToChildrenList(yyval, yyvsp[-7]);
          appendToChildrenList(yyval, yyvsp[-5]); 
          appendToChildrenList(yyval, yyvsp[-2]); 
          appendToChildrenList(yyval, yyvsp[-1]); }
#line 1416 "dj.tab.c"
    break;

  case 19: /* parameterlist_or_empty: %empty  */
#line 112 "dj.y"
                        { yyval = newAST(PARAM_DECL_LIST, NULL, 0, NULL, yylineno); }
#line 1422 "dj.tab.c"
    break;

  case 20: /* parameterlist: parameterlist COMMA parameter  */
#line 116 "dj.y"
               { appendToChildrenList(yyvsp[-2], yyvsp[0]);
                 yyval = yyvsp[-2]; }
#line 1429 "dj.tab.c"
    break;

  case 21: /* parameterlist: parameter  */
#line 119 "dj.y"
               { yyval = newAST(PARAM_DECL_LIST, yyvsp[0], 0, NULL, yylineno); }
#line 1435 "dj.tab.c"
    break;

  case 22: /* parameter: id id  */
#line 123 "dj.y"
           { yyval = newAST(PARAM_DECL, yyvsp[-1], 0, NULL, yylineno);
            appendToChildrenList(yyval, yyvsp[0]); }
#line 1442 "dj.tab.c"
    break;

  case 23: /* parameter: nat id  */
#line 126 "dj.y"
           { yyval = newAST(PARAM_DECL, yyvsp[-1], 0, NULL, yylineno);
            appendToChildrenList(yyval, yyvsp[0]); }
#line 1449 "dj.tab.c"
    break;

  case 24: /* id: ID  */
#line 131 "dj.y"
    { yyval = newAST(AST_ID, NULL, 0, yytext, yylineno); }
#line 1455 "dj.tab.c"
    break;

  case 25: /* nat: NATTYPE  */
#line 135 "dj.y"
     { yyval = newAST(NAT_TYPE, NULL, 0, NULL, yylineno); }
#line 1461 "dj.tab.c"
    break;

  case 26: /* explist: explist exp SEMICOLON  */
#line 139 "dj.y"
         { appendToChildrenList(yyvsp[-2], yyvsp[-1]);
           yyval = yyvsp[-2]; }
#line 1468 "dj.tab.c"
    break;

  case 27: /* explist: exp SEMICOLON  */
#line 142 "dj.y"
          { yyval = newAST(EXPR_LIST, yyvsp[-1], 0, NULL, yylineno); }
#line 1474 "dj.tab.c"
    break;

  case 28: /* exp: exp DOT id LPAREN argumentlist_or_empty RPAREN  */
#line 146 "dj.y"
     { yyval = newAST(DOT_METHOD_CALL_EXPR, yyvsp[-5], 0, NULL, yylineno);
        appendToChildrenList(yyval, yyvsp[-3]);
        appendToChildrenList(yyval, yyvsp[-1]); }
#line 1482 "dj.tab.c"
    break;

  case 29: /* exp: id LPAREN argumentlist_or_empty RPAREN  */
#line 151 "dj.y"
     { yyval = newAST(METHOD_CALL_EXPR, yyvsp[-3], 0, NULL, yylineno);
        appendToChildrenList(yyval, yyvsp[-1]); }
#line 1489 "dj.tab.c"
    break;

  case 30: /* exp: exp DOT id  */
#line 155 "dj.y"
     { yyval = newAST(DOT_ID_EXPR, yyvsp[-2], 0, NULL, yylineno);
        appendToChildrenList(yyval, yyvsp[0]); }
#line 1496 "dj.tab.c"
    break;

  case 31: /* exp: id  */
#line 159 "dj.y"
     { yyval = newAST(ID_EXPR, yyvsp[0], 0, NULL, yylineno); }
#line 1502 "dj.tab.c"
    break;

  case 32: /* exp: exp DOT id ASSIGN exp  */
#line 162 "dj.y"
     { yyval = newAST(DOT_ASSIGN_EXPR, yyvsp[-4], 0, NULL, yylineno);
        appendToChildrenList(yyval, yyvsp[-2]);
        appendToChildrenList(yyval, yyvsp[0]); }
#line 1510 "dj.tab.c"
    break;

  case 33: /* exp: id ASSIGN exp  */
#line 167 "dj.y"
     { yyval = newAST(ASSIGN_EXPR, yyvsp[-2], 0, NULL, yylineno);
        appendToChildrenList(yyval, yyvsp[0]); }
#line 1517 "dj.tab.c"
    break;

  case 34: /* exp: exp PLUS exp  */
#line 171 "dj.y"
     { yyval = newAST(PLUS_EXPR, yyvsp[-2], 0, NULL, yylineno);
        appendToChildrenList(yyval, yyvsp[0]); }
#line 1524 "dj.tab.c"
    break;

  case 35: /* exp: exp MINUS exp  */
#line 175 "dj.y"
     { yyval = newAST(MINUS_EXPR, yyvsp[-2], 0, NULL, yylineno);
        appendToChildrenList(yyval, yyvsp[0]); }
#line 1531 "dj.tab.c"
    break;

  case 36: /* exp: exp TIMES exp  */
#line 179 "dj.y"
     { yyval = newAST(TIMES_EXPR, yyvsp[-2], 0, NULL, yylineno);
        appendToChildrenList(yyval, yyvsp[0]); }
#line 1538 "dj.tab.c"
    break;

  case 37: /* exp: exp EQUALITY exp  */
#line 183 "dj.y"
     { yyval = newAST(EQUALITY_EXPR, yyvsp[-2], 0, NULL, yylineno);
        appendToChildrenList(yyval, yyvsp[0]); }
#line 1545 "dj.tab.c"
    break;

  case 38: /* exp: exp GREATER exp  */
#line 187 "dj.y"
     { yyval = newAST(GREATER_THAN_EXPR, yyvsp[-2], 0, NULL, yylineno);
        appendToChildrenList(yyval, yyvsp[0]); }
#line 1552 "dj.tab.c"
    break;

  case 39: /* exp: NOT exp  */
#line 191 "dj.y"
     { yyval = newAST(NOT_EXPR, yyvsp[0], 0, NULL, yylineno); }
#line 1558 "dj.tab.c"
    break;

  case 40: /* exp: exp AND exp  */
#line 194 "dj.y"
     { yyval = newAST(AND_EXPR, yyvsp[-2], 0, NULL, yylineno);
        appendToChildrenList(yyval, yyvsp[0]); }
#line 1565 "dj.tab.c"
    break;

  case 41: /* exp: IF LPAREN exp RPAREN LBRACE explist RBRACE ELSE LBRACE explist RBRACE  */
#line 198 "dj.y"
     { yyval = newAST(IF_THEN_ELSE_EXPR, yyvsp[-8], 0, NULL, yylineno);
        appendToChildrenList(yyval,yyvsp[-5]);
        appendToChildrenList(yyval,yyvsp[-1]); }
#line 1573 "dj.tab.c"
    break;

  case 42: /* exp: WHILE LPAREN exp RPAREN LBRACE explist RBRACE  */
#line 203 "dj.y"
     { yyval = newAST(WHILE_EXPR, yyvsp[-4], 0, NULL, yylineno);
        appendToChildrenList(yyval, yyvsp[-1]); }
#line 1580 "dj.tab.c"
    break;

  case 43: /* exp: PRINTNAT LPAREN exp RPAREN  */
#line 207 "dj.y"
     { yyval = newAST(PRINT_EXPR, yyvsp[-1], 0, NULL, yylineno); }
#line 1586 "dj.tab.c"
    break;

  case 44: /* exp: READNAT LPAREN RPAREN  */
#line 210 "dj.y"
     { yyval = newAST(READ_EXPR, NULL, 0, NULL, yylineno); }
#line 1592 "dj.tab.c"
    break;

  case 45: /* exp: THIS  */
#line 213 "dj.y"
     { yyval = newAST(THIS_EXPR, NULL, 0, NULL, yylineno); }
#line 1598 "dj.tab.c"
    break;

  case 46: /* exp: NEW id LPAREN RPAREN  */
#line 216 "dj.y"
     { yyval = newAST(NEW_EXPR, yyvsp[-2], 0, NULL, yylineno); }
#line 1604 "dj.tab.c"
    break;

  case 47: /* exp: NUL  */
#line 219 "dj.y"
     { yyval = newAST(NULL_EXPR, NULL, 0, NULL, yylineno); }
#line 1610 "dj.tab.c"
    break;

  case 48: /* exp: NATLITERAL  */
#line 222 "dj.y"
     { yyval = newAST(NAT_LITERAL_EXPR, NULL, atoi(yytext), NULL, yylineno); }
#line 1616 "dj.tab.c"
    break;

  case 49: /* exp: LPAREN exp RPAREN  */
#line 225 "dj.y"
     { yyval = yyvsp[-1]; }
#line 1622 "dj.tab.c"
    break;

  case 51: /* argumentlist_or_empty: %empty  */
#line 230 "dj.y"
                       { yyval = newAST(ARG_LIST, NULL, 0, NULL, yylineno); }
#line 1628 "dj.tab.c"
    break;

  case 52: /* argumentlist: argumentlist COMMA exp  */
#line 234 "dj.y"
              { appendToChildrenList(yyvsp[-2], yyvsp[0]);
                yyval = yyvsp[-2]; }
#line 1635 "dj.tab.c"
    break;

  case 53: /* argumentlist: exp  */
#line 237 "dj.y"
              { yyval = newAST(ARG_LIST, yyvsp[0], 0, NULL, yylineno); }
#line 1641 "dj.tab.c"
    break;


#line 1645 "dj.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 240 "dj.y"


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

