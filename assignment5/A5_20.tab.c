/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 9 "A5_20.y"

    #include "A5_20_translator.h"
    #include <bits/stdc++.h>
    #include <sstream>

    using namespace std;
    
    extern "C" int yylex();
    
    //var_type for last encountered type
    extern string var_type;
    extern vector<Label> label_table;

    void yyerror(string s);

#line 86 "A5_20.tab.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_A5_20_TAB_H_INCLUDED
# define YY_YY_A5_20_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    RESTRICT = 258,
    BREAK = 259,
    CASE = 260,
    CHAR = 261,
    CONST = 262,
    CONTINUE = 263,
    DEFAULT = 264,
    DO = 265,
    DOUBLE = 266,
    ELSE = 267,
    ENUM = 268,
    EXTERN = 269,
    FLOAT = 270,
    FOR = 271,
    GOTO = 272,
    IF = 273,
    INLINE = 274,
    INT = 275,
    LONG = 276,
    RETURN = 277,
    SHORT = 278,
    SIGNED = 279,
    SIZEOF = 280,
    STATIC = 281,
    STRUCT = 282,
    SWITCH = 283,
    TYPEDEF = 284,
    UNION = 285,
    UNSIGNED = 286,
    VOID = 287,
    VOLATILE = 288,
    WHILE = 289,
    _BOOL = 290,
    _COMPLEX = 291,
    _IMAGINARY = 292,
    IDENTIFIER = 293,
    STRING_LITERAL = 294,
    SQUARE_BRACKET_OPEN = 295,
    SQUARE_BRACKET_CLOSE = 296,
    ROUND_BRACKET_OPEN = 297,
    ROUND_BRACKET_CLOSE = 298,
    CURLY_BRACKET_OPEN = 299,
    CURLY_BRACKET_CLOSE = 300,
    DOT = 301,
    IMPLIES = 302,
    INC = 303,
    DEC = 304,
    BITWISE_AND = 305,
    MUL = 306,
    ADD = 307,
    SUB = 308,
    BITWISE_NOT = 309,
    EXCLAIM = 310,
    DIV = 311,
    MOD = 312,
    SHIFT_LEFT = 313,
    SHIFT_RIGHT = 314,
    BIT_SL = 315,
    BIT_SR = 316,
    LTE = 317,
    GTE = 318,
    EQ = 319,
    NEQ = 320,
    BITWISE_XOR = 321,
    BITWISE_OR = 322,
    AND = 323,
    OR = 324,
    QUESTION = 325,
    COLON = 326,
    SEMICOLON = 327,
    DOTS = 328,
    ASSIGN = 329,
    STAR_EQ = 330,
    DIV_EQ = 331,
    MOD_EQ = 332,
    ADD_EQ = 333,
    SUB_EQ = 334,
    SL_EQ = 335,
    SR_EQ = 336,
    BITWISE_AND_EQ = 337,
    BITWISE_XOR_EQ = 338,
    BITWISE_OR_EQ = 339,
    COMMA = 340,
    HASH = 341,
    THEN = 342,
    INTEGER_CONSTANT = 343,
    FLOATING_CONSTANT = 344,
    CHARACTER_CONSTANT = 345
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 26 "A5_20.y"

    // types for terminals
    char unaryOp;
    char* char_value;
    int intval;
    int instr_number;
    int num_params;

    // types for nonterminals
    Expression* expr;
    Statement* stat;
    SymbolType* sym_type;
    Symbol* symp;
    Array* A;

#line 245 "A5_20.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_A5_20_TAB_H_INCLUDED  */



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
typedef yytype_int16 yy_state_t;

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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


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
#define YYFINAL  45
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1234

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  91
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  76
/* YYNRULES -- Number of rules.  */
#define YYNRULES  223
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  398

#define YYUNDEFTOK  2
#define YYMAXUTOK   345


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   109,   109,   116,   123,   130,   138,   154,   163,   178,
     185,   192,   198,   204,   210,   218,   226,   251,   259,   260,
     262,   270,   277,   278,   281,   285,   291,   297,   304,   305,
     311,   317,   353,   354,   357,   359,   361,   363,   365,   367,
     371,   372,   380,   397,   409,   422,   434,   435,   447,   461,
     462,   473,   488,   489,   505,   521,   537,   555,   556,   575,
     596,   597,   615,   616,   634,   635,   651,   653,   665,   667,
     679,   681,   702,   703,   726,   727,   728,   729,   730,   731,
     732,   733,   734,   735,   736,   739,   740,   743,   746,   747,
     750,   751,   752,   753,   754,   755,   756,   757,   760,   761,
     764,   765,   772,   773,   776,   777,   778,   779,   780,   781,
     782,   783,   784,   785,   786,   787,   788,   791,   792,   795,
     796,   799,   800,   801,   804,   805,   808,   809,   812,   813,
     816,   817,   818,   821,   824,   832,   835,   841,   842,   843,
     844,   866,   887,   888,   889,   890,   891,   904,   905,   920,
     921,   924,   928,   934,   935,   938,   939,   942,   943,   946,
     947,   950,   951,   954,   957,   958,   959,   962,   963,   966,
     967,   970,   973,   974,   977,   978,   983,   984,   985,   990,
     991,   992,   995,   996,  1001,  1002,  1003,  1006,  1020,  1021,
    1024,  1031,  1032,  1035,  1036,  1043,  1044,  1047,  1048,  1051,
    1060,  1070,  1073,  1087,  1100,  1109,  1118,  1131,  1144,  1157,
    1172,  1188,  1189,  1190,  1195,  1204,  1205,  1208,  1209,  1212,
    1222,  1223,  1226,  1227
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "RESTRICT", "BREAK", "CASE", "CHAR",
  "CONST", "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE", "ENUM", "EXTERN",
  "FLOAT", "FOR", "GOTO", "IF", "INLINE", "INT", "LONG", "RETURN", "SHORT",
  "SIGNED", "SIZEOF", "STATIC", "STRUCT", "SWITCH", "TYPEDEF", "UNION",
  "UNSIGNED", "VOID", "VOLATILE", "WHILE", "_BOOL", "_COMPLEX",
  "_IMAGINARY", "IDENTIFIER", "STRING_LITERAL", "SQUARE_BRACKET_OPEN",
  "SQUARE_BRACKET_CLOSE", "ROUND_BRACKET_OPEN", "ROUND_BRACKET_CLOSE",
  "CURLY_BRACKET_OPEN", "CURLY_BRACKET_CLOSE", "DOT", "IMPLIES", "INC",
  "DEC", "BITWISE_AND", "MUL", "ADD", "SUB", "BITWISE_NOT", "EXCLAIM",
  "DIV", "MOD", "SHIFT_LEFT", "SHIFT_RIGHT", "BIT_SL", "BIT_SR", "LTE",
  "GTE", "EQ", "NEQ", "BITWISE_XOR", "BITWISE_OR", "AND", "OR", "QUESTION",
  "COLON", "SEMICOLON", "DOTS", "ASSIGN", "STAR_EQ", "DIV_EQ", "MOD_EQ",
  "ADD_EQ", "SUB_EQ", "SL_EQ", "SR_EQ", "BITWISE_AND_EQ", "BITWISE_XOR_EQ",
  "BITWISE_OR_EQ", "COMMA", "HASH", "THEN", "INTEGER_CONSTANT",
  "FLOATING_CONSTANT", "CHARACTER_CONSTANT", "$accept", "M", "W", "D", "F",
  "X", "N", "changetable", "primary_expression", "postfix_expression",
  "argument_expression_list_opt", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "specifier_qualifier_list",
  "specifier_qualifier_list_opt", "enum_specifier", "identifier_opt",
  "enumerator_list", "enumerator", "type_qualifier", "function_specifier",
  "declarator", "direct_declarator", "type_qualifier_list_opt", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name", "initializer",
  "initializer_list", "designation_opt", "designation", "designator_list",
  "designator", "statement", "loop_statement", "labeled_statement",
  "compound_statement", "block_item_list_opt", "block_item_list",
  "block_item", "expression_statement", "selection_statement",
  "iteration_statement", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "declaration_list",
  "declaration_list_opt", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345
};
# endif

#define YYPACT_NINF (-267)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-223)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1162,  -267,  -267,  -267,  -267,    -1,  -267,  -267,  -267,  -267,
    -267,  -267,  -267,  -267,  -267,  -267,  -267,  -267,  -267,  -267,
    -267,   120,  1162,  1162,  -267,  1162,  1162,  1127,  -267,  -267,
      15,    41,  -267,    11,   133,  -267,   -37,  -267,   822,   -17,
     137,  -267,  -267,  -267,  -267,  -267,  -267,     5,     8,  -267,
      22,   133,  -267,    11,   859,  -267,   120,  1162,  -267,   173,
     106,   -17,    38,   -29,  -267,  -267,  -267,  -267,  -267,    68,
     974,  -267,  -267,   414,   105,   996,   996,  -267,  -267,  -267,
    -267,  -267,  -267,  -267,  -267,  -267,  -267,   200,   401,  1017,
    -267,   140,   177,   175,   125,   188,   111,    97,   116,   127,
     215,  -267,  -267,  -267,  -267,   149,   520,  -267,   159,   161,
     467,  -267,  1089,   -30,  1017,  -267,    93,   414,  -267,  -267,
     -15,  1197,  -267,  1197,   165,  1017,   166,    -3,   859,  -267,
     -22,  -267,   414,  -267,  -267,  1017,  1017,   172,   180,  -267,
    -267,  -267,  -267,  -267,  -267,  -267,  -267,  -267,  -267,  -267,
    -267,  -267,  1017,  -267,  -267,  1017,  1017,  1017,  1017,  1017,
    1017,  1017,  1017,  1017,  1017,  1017,  1017,  1017,  1017,  1017,
    1017,  -267,  -267,   143,   294,   190,   520,  -267,  -267,  -267,
     198,   204,  -267,    11,   207,   169,  -267,  -267,   220,  -267,
    -267,  -267,  -267,   227,  -267,  1017,  -267,  -267,  -267,   890,
     233,  -267,  -267,   231,  -267,  -267,  -267,   249,   -21,   251,
     221,  -267,  -267,  -267,  -267,  -267,  -267,  -267,   140,   140,
     177,   177,   175,   175,   175,   175,   125,   125,   188,   111,
      97,  1017,  1017,  -267,   262,  1017,   263,   250,  -267,  -267,
     299,   297,   912,   308,  -267,   270,  -267,  -267,    35,  -267,
    -267,  -267,  -267,   306,   307,  -267,  -267,  -267,  -267,  -267,
    -267,   312,  -267,  -267,  -267,  -267,   857,  -267,   310,  -267,
     105,  -267,  -267,  -267,   859,   310,  -267,  -267,  1017,   116,
     127,  1017,  -267,   284,  -267,   573,   314,   317,   290,  1017,
    -267,    54,  1017,   321,  -267,  -267,  -267,  -267,   294,  -267,
    -267,  -267,     1,  -267,  -267,   271,   573,  -267,  -267,   732,
    -267,  -267,   271,  -267,    -4,  -267,   573,   294,  -267,  -267,
     243,   293,  -267,   294,  -267,  -267,  -267,  -267,  -267,  -267,
    -267,   327,   573,  -267,  -267,   326,  -267,  -267,   331,   338,
     354,  -267,  -267,  -267,  -267,  1017,  -267,   339,  -267,  -267,
     573,  1017,  -267,   360,  1017,   943,   943,  -267,    29,   346,
      65,  -267,  -267,   383,   353,  1017,   328,  1017,  1017,  -267,
    -267,   732,    74,  -267,   271,   271,   573,   294,  -267,   329,
     355,   356,  -267,   365,  -267,  -267,  -267,  -267,   626,   679,
     294,  -267,   294,  -267,   366,   367,  -267,  -267
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   131,   105,   130,   110,   124,   102,   109,   133,   107,
     108,   106,   111,   103,   112,   104,   132,   113,   114,   115,
     218,     0,    91,    93,   116,    95,    97,     0,   215,   217,
     123,     0,   136,     0,   149,    89,     0,    98,   100,   135,
       0,    90,    92,    94,    96,     1,   216,     0,     0,   153,
     151,   150,    88,     0,     0,   220,     0,   223,     8,     0,
       8,   134,   128,     0,   126,   137,   152,   154,    99,   100,
       0,     9,    13,     0,   169,     0,     0,    34,    35,    36,
      37,    38,    39,    10,    11,    12,    15,    28,    40,     0,
      42,    46,    49,    52,    57,    60,    62,    64,    66,    68,
      70,    72,   164,   101,   221,     0,     0,   141,    35,     0,
       0,   161,     0,     0,     0,   121,     0,     0,    32,    85,
       0,   119,   163,   119,     0,     0,     0,     0,     0,   170,
       0,   172,     0,    29,    30,     0,    25,     0,     0,    20,
      21,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,     0,    40,    31,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     2,     0,   191,     0,     0,   145,   140,   139,
      35,     0,   148,   160,     0,   155,   157,   147,     0,    87,
     129,   122,   127,     0,    14,     0,   120,   117,   118,     0,
       0,   175,   165,   169,   167,   171,   173,     0,     0,     0,
      24,    26,    18,    19,    73,    43,    44,    45,    47,    48,
      50,    51,    53,    54,    55,    56,    58,    59,    61,    63,
      65,     0,     0,     2,     0,     0,     0,     0,     4,     5,
       0,     0,     0,     0,     3,     9,     6,   198,     0,   195,
     196,   176,   177,     0,     2,   193,   178,   179,   180,   181,
     143,     0,   144,   138,   159,   146,     0,   162,    33,    86,
     169,    41,   174,   166,     0,     0,    16,    17,     0,    67,
      69,     0,   212,     0,   211,     0,     2,     0,     0,     0,
     214,     0,     0,     0,     2,     8,   197,   219,     0,   142,
     156,   158,     0,   168,    27,     7,     0,   189,     2,     0,
       6,   210,     7,   213,     0,     6,     0,   191,   194,    22,
     169,     0,   188,   191,     2,   182,   183,   184,   185,   186,
       8,     0,     0,     8,   187,     0,    23,     2,     0,     0,
       0,     2,   201,     2,   190,     0,     2,     0,     2,     2,
       0,     0,    71,     0,     0,     0,     0,     7,     0,     0,
       0,     2,     2,   199,     2,     0,     0,     0,     0,     2,
       2,     0,     0,   204,     7,     7,     0,   191,   202,     0,
       0,     0,   200,     0,   205,     2,     2,   203,     0,     0,
     191,   206,   191,   207,     0,     0,   208,   209
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -267,  -105,  -267,  -267,  -267,  -169,  -201,   -58,  -267,  -267,
    -267,  -267,   -67,  -267,   -78,   128,   130,   104,   157,   245,
     246,   244,   185,   186,  -267,  -110,   -23,  -267,   -72,  -113,
       0,     7,  -267,   369,  -267,   -52,   -47,   296,  -267,  -267,
    -267,   315,    84,  -267,   -16,   384,  -267,   373,   -45,  -267,
    -267,   162,  -267,   -91,  -122,   160,  -193,  -267,  -267,   302,
    -266,  -211,  -265,  -267,  -208,  -267,   135,   435,  -255,  -241,
    -234,  -267,   409,  -267,  -267,  -267
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   231,   293,   286,   287,   295,   173,   105,    86,    87,
     209,   210,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   119,   152,   248,   190,
     249,    56,    36,    37,    22,    23,   122,   197,    24,    31,
      63,    64,    25,    26,    69,    39,    50,    40,    51,   184,
     185,   186,   113,   124,   103,   127,   128,   129,   130,   131,
     250,   324,   251,   252,   253,   254,   255,   256,   257,   258,
     259,    27,    28,    29,    57,    58
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      20,   120,   112,   118,   189,    38,   204,    21,   133,   134,
     274,   154,   200,   187,   110,   189,   115,    48,   125,   307,
     276,   121,   153,    59,   126,    60,   193,    20,   194,    41,
      42,   102,    43,    44,    21,    52,   109,    30,    55,   332,
     322,   207,   202,    62,   325,   120,   319,   153,    53,    32,
     334,    65,   205,    33,   327,   188,   116,   104,   153,  -125,
     120,   176,    34,   208,   195,   121,   342,   232,   328,   121,
     195,   121,   364,    34,   196,   329,   196,   215,   216,   217,
     121,   195,   203,   175,   357,    47,   320,   181,   153,   153,
     153,   153,   153,   153,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   153,   321,   102,   325,   296,   366,   335,
     382,   331,   114,   211,   195,   338,   327,   379,    49,   183,
     195,   271,   283,   325,   325,   189,   313,   274,   281,   214,
     328,    62,   153,   327,   327,    67,     1,   329,   191,   195,
       3,   330,    54,    49,   111,   125,   333,   328,   328,   298,
     195,   126,   303,   261,   329,   329,   363,   123,    32,   195,
     378,   168,    33,   169,   153,   153,    16,   264,   153,   383,
     291,    34,   269,   380,   381,    32,     1,   391,   393,    33,
       3,   309,   394,   170,   395,   162,   163,   164,   165,   316,
      49,   155,    35,   174,    67,   171,   156,   157,    70,   106,
     177,   123,   178,   323,   201,   123,    16,   123,   199,   305,
     212,    71,    72,   233,   107,    73,   123,   312,   213,   339,
     314,    75,    76,    77,   108,    79,    80,    81,    82,   158,
     159,   260,   345,   160,   161,   352,   350,   317,   351,   262,
     135,   353,   136,   355,   356,   263,   137,   138,   139,   140,
     265,   102,   166,   167,   266,   304,   367,   368,   267,   371,
      67,    83,    84,    85,   376,   377,   222,   223,   224,   225,
     268,   125,   340,   183,   272,   343,   273,   126,   153,   358,
     388,   389,   360,   125,   172,    -7,   218,   219,   336,   126,
     220,   221,   275,   372,   277,   374,   375,     1,   234,   235,
       2,     3,   236,   237,   238,     4,   278,     5,     6,     7,
     239,   240,   241,     8,     9,    10,   242,    11,    12,    70,
      13,   285,   243,   226,   227,    14,    15,    16,   244,    17,
      18,    19,   245,    72,   282,   284,    73,   288,   246,   289,
     348,   294,    75,    76,    77,    78,    79,    80,    81,    82,
     292,   297,  -192,   299,   270,   306,   195,     1,   308,   310,
       2,     3,   311,   315,   337,     4,   247,     5,     6,     7,
     341,   344,   347,     8,     9,    10,   346,    11,    12,    70,
      13,   354,    83,    84,    85,    14,    15,    16,   365,    17,
      18,    19,    71,    72,   359,   369,    73,   370,   385,   386,
     373,   384,    75,    76,    77,    78,    79,    80,    81,    82,
     387,   396,   397,   228,   230,   229,   279,     1,   280,   198,
       2,     3,    68,    66,    61,     4,   247,     5,   301,     7,
     302,   192,   206,   318,     9,    10,    46,    11,    12,    70,
       0,     0,    83,    84,    85,    14,    15,    16,     0,    17,
      18,    19,    71,    72,     0,     0,    73,     0,     0,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    81,    82,
       1,     0,     0,     0,     3,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,     0,     0,     0,     0,
       0,     0,    70,     0,     0,     0,     0,     0,     0,     0,
      16,     0,    83,    84,    85,    71,    72,     0,   179,    73,
       0,     0,     0,     0,     0,    75,    76,    77,   180,    79,
      80,    81,    82,     1,     0,     0,     0,     3,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    70,     0,     0,     0,     0,
       0,     0,     0,    16,     0,    83,    84,    85,    71,    72,
       0,     0,    73,     0,     0,     0,     0,     0,    75,    76,
      77,    78,    79,    80,    81,    82,     0,   234,   235,     0,
       0,   236,   237,   238,     0,     0,     0,     0,     0,   239,
     240,   241,     0,     0,     0,   242,     0,     0,    70,     0,
       0,   243,     0,     0,     0,     0,     0,   244,    83,    84,
      85,   245,    72,     0,     0,    73,     0,   246,     0,     0,
       0,    75,    76,    77,    78,    79,    80,    81,    82,     0,
     234,   235,     0,     0,   236,   237,   238,     0,     0,     0,
       0,     0,   239,   240,   241,   247,     0,     0,   242,     0,
       0,    70,     0,     0,   243,     0,     0,     0,     0,     0,
     244,    83,    84,    85,   245,    72,     0,     0,    73,     0,
     390,     0,     0,     0,    75,    76,    77,    78,    79,    80,
      81,    82,     0,   234,   235,     0,     0,   236,   237,   238,
       0,     0,     0,     0,     0,   239,   240,   241,   247,     0,
       0,   242,     0,     0,    70,     0,     0,   243,     0,     0,
       0,     0,     0,   244,    83,    84,    85,   245,    72,     0,
       0,    73,     0,   392,     0,     0,     0,    75,    76,    77,
      78,    79,    80,    81,    82,     0,   234,   235,     0,     0,
     236,   237,   238,     0,   326,     0,     0,     0,   239,   240,
     241,   247,     0,     0,   242,     0,     0,    70,     0,     0,
     243,     0,     0,     0,     0,     0,   244,    83,    84,    85,
     245,    72,     0,     0,    73,   349,     0,     0,     0,     0,
      75,    76,    77,    78,    79,    80,    81,    82,     0,     0,
     361,   362,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   247,     0,   326,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      83,    84,    85,   326,   326,     1,     0,     0,     2,     3,
       0,     0,     0,     4,     0,     5,     6,     7,     0,     0,
       0,     8,     9,    10,     0,    11,    12,     0,    13,     0,
       0,     0,     0,    14,    15,    16,     0,    17,    18,    19,
       1,     0,     0,     2,     3,     0,  -222,     0,     4,     0,
       5,     6,     7,     0,     0,     0,     8,     9,    10,     0,
      11,    12,     0,    13,    70,     0,     0,     0,    14,    15,
      16,     0,    17,    18,    19,     0,    54,    71,    72,     0,
       0,    73,     0,    74,     0,     0,     0,    75,    76,    77,
      78,    79,    80,    81,    82,    70,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    71,    72,
     300,     0,    73,     0,   270,     0,     0,    70,    75,    76,
      77,    78,    79,    80,    81,    82,     0,    83,    84,    85,
      71,    72,     0,     0,    73,     0,     0,     0,     0,     0,
      75,    76,    77,    78,    79,    80,    81,    82,    70,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    83,    84,
      85,    71,    72,     0,   290,    73,     0,     0,     0,     0,
       0,    75,    76,    77,    78,    79,    80,    81,    82,    70,
      83,    84,    85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    71,    72,     0,   247,   117,     0,     0,     0,
       0,    70,    75,    76,    77,    78,    79,    80,    81,    82,
       0,    83,    84,    85,    71,    72,     0,     0,   132,     0,
       0,     0,    70,     0,    75,    76,    77,    78,    79,    80,
      81,    82,     0,     0,     0,    71,    72,     0,     0,    73,
       0,     0,    83,    84,    85,    75,    76,    77,    78,    79,
      80,    81,    82,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    83,    84,    85,     0,     0,     0,
       0,     0,     1,     0,     0,     2,     3,     0,     0,     0,
       4,     0,     5,     6,     7,    83,    84,    85,     8,     9,
      10,     0,    11,    12,     0,    13,     0,     0,     0,     0,
      14,    15,    16,     0,    17,    18,    19,    45,     0,     0,
       1,     0,   182,     2,     3,     0,     0,     0,     4,     0,
       5,     6,     7,     0,     0,     0,     8,     9,    10,     0,
      11,    12,     0,    13,     0,     0,     0,     0,    14,    15,
      16,     0,    17,    18,    19,     1,     0,     0,     2,     3,
       0,     0,     0,     4,     0,     5,     6,     7,     0,     0,
       0,     8,     9,    10,     0,    11,    12,     0,    13,     0,
       0,     0,     0,    14,    15,    16,     0,    17,    18,    19,
       1,     0,     0,     2,     3,     0,     0,     0,     4,     0,
       5,     0,     7,     0,     0,     0,     0,     9,    10,     0,
      11,    12,     0,     0,     0,     0,     0,     0,    14,    15,
      16,     0,    17,    18,    19
};

static const yytype_int16 yycheck[] =
{
       0,    73,    60,    70,   114,    21,   128,     0,    75,    76,
     203,    89,   125,    43,    59,   125,    45,    33,    40,   285,
      41,    73,    89,    40,    46,    42,   117,    27,    43,    22,
      23,    54,    25,    26,    27,    72,    59,    38,    38,    43,
     306,   132,    45,    38,   309,   117,    45,   114,    85,    38,
     316,    43,    74,    42,   309,    85,    85,    57,   125,    44,
     132,   106,    51,   135,    85,   117,   332,   172,   309,   121,
      85,   123,    43,    51,   121,   309,   123,   155,   156,   157,
     132,    85,    85,   106,   350,    44,    85,   110,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   305,   128,   371,    72,    43,   317,
     376,   312,    74,   136,    85,   323,   371,    43,    34,   112,
      85,   199,   235,   388,   389,   235,    72,   320,   233,   152,
     371,    38,   199,   388,   389,    51,     3,   371,    45,    85,
       7,   310,    74,    59,    38,    40,   315,   388,   389,   254,
      85,    46,   274,   176,   388,   389,   357,    73,    38,    85,
     371,    50,    42,    66,   231,   232,    33,   183,   235,   377,
     242,    51,   195,   374,   375,    38,     3,   388,   389,    42,
       7,   286,   390,    67,   392,    60,    61,    62,    63,   294,
     106,    51,    72,    44,   110,    68,    56,    57,    25,    26,
      41,   117,    41,   308,    38,   121,    33,   123,    43,   281,
      38,    38,    39,    70,    41,    42,   132,   289,    38,   324,
     292,    48,    49,    50,    51,    52,    53,    54,    55,    52,
      53,    41,   337,    58,    59,   345,   341,   295,   343,    41,
      40,   346,    42,   348,   349,    41,    46,    47,    48,    49,
      43,   274,    64,    65,    85,   278,   361,   362,    38,   364,
     176,    88,    89,    90,   369,   370,   162,   163,   164,   165,
      43,    40,   330,   266,    41,   333,    45,    46,   345,   351,
     385,   386,   354,    40,    69,    70,   158,   159,    45,    46,
     160,   161,    43,   365,    43,   367,   368,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    85,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    71,    28,   166,   167,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    72,    72,    42,    38,    44,    42,
     340,    71,    48,    49,    50,    51,    52,    53,    54,    55,
      42,    45,    45,    41,    44,    71,    85,     3,    44,    42,
       6,     7,    72,    42,    71,    11,    72,    13,    14,    15,
      43,    45,    34,    19,    20,    21,    45,    23,    24,    25,
      26,    42,    88,    89,    90,    31,    32,    33,    42,    35,
      36,    37,    38,    39,    34,    12,    42,    44,    43,    43,
      72,    72,    48,    49,    50,    51,    52,    53,    54,    55,
      45,    45,    45,   168,   170,   169,   231,     3,   232,   123,
       6,     7,    53,    50,    40,    11,    72,    13,   266,    15,
     270,   116,   130,   298,    20,    21,    27,    23,    24,    25,
      -1,    -1,    88,    89,    90,    31,    32,    33,    -1,    35,
      36,    37,    38,    39,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
       3,    -1,    -1,    -1,     7,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    -1,    88,    89,    90,    38,    39,    -1,    41,    42,
      -1,    -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,     3,    -1,    -1,    -1,     7,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    88,    89,    90,    38,    39,
      -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,     4,     5,    -1,
      -1,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,    16,
      17,    18,    -1,    -1,    -1,    22,    -1,    -1,    25,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    34,    88,    89,
      90,    38,    39,    -1,    -1,    42,    -1,    44,    -1,    -1,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
       4,     5,    -1,    -1,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    16,    17,    18,    72,    -1,    -1,    22,    -1,
      -1,    25,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      34,    88,    89,    90,    38,    39,    -1,    -1,    42,    -1,
      44,    -1,    -1,    -1,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,     4,     5,    -1,    -1,     8,     9,    10,
      -1,    -1,    -1,    -1,    -1,    16,    17,    18,    72,    -1,
      -1,    22,    -1,    -1,    25,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    -1,    34,    88,    89,    90,    38,    39,    -1,
      -1,    42,    -1,    44,    -1,    -1,    -1,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,     4,     5,    -1,    -1,
       8,     9,    10,    -1,   309,    -1,    -1,    -1,    16,    17,
      18,    72,    -1,    -1,    22,    -1,    -1,    25,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    34,    88,    89,    90,
      38,    39,    -1,    -1,    42,   340,    -1,    -1,    -1,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    -1,    -1,
     355,   356,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,   371,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      88,    89,    90,   388,   389,     3,    -1,    -1,     6,     7,
      -1,    -1,    -1,    11,    -1,    13,    14,    15,    -1,    -1,
      -1,    19,    20,    21,    -1,    23,    24,    -1,    26,    -1,
      -1,    -1,    -1,    31,    32,    33,    -1,    35,    36,    37,
       3,    -1,    -1,     6,     7,    -1,    44,    -1,    11,    -1,
      13,    14,    15,    -1,    -1,    -1,    19,    20,    21,    -1,
      23,    24,    -1,    26,    25,    -1,    -1,    -1,    31,    32,
      33,    -1,    35,    36,    37,    -1,    74,    38,    39,    -1,
      -1,    42,    -1,    44,    -1,    -1,    -1,    48,    49,    50,
      51,    52,    53,    54,    55,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,
      73,    -1,    42,    -1,    44,    -1,    -1,    25,    48,    49,
      50,    51,    52,    53,    54,    55,    -1,    88,    89,    90,
      38,    39,    -1,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,
      90,    38,    39,    -1,    72,    42,    -1,    -1,    -1,    -1,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    25,
      88,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    39,    -1,    72,    42,    -1,    -1,    -1,
      -1,    25,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    88,    89,    90,    38,    39,    -1,    -1,    42,    -1,
      -1,    -1,    25,    -1,    48,    49,    50,    51,    52,    53,
      54,    55,    -1,    -1,    -1,    38,    39,    -1,    -1,    42,
      -1,    -1,    88,    89,    90,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    88,    89,    90,    -1,    -1,    -1,
      -1,    -1,     3,    -1,    -1,     6,     7,    -1,    -1,    -1,
      11,    -1,    13,    14,    15,    88,    89,    90,    19,    20,
      21,    -1,    23,    24,    -1,    26,    -1,    -1,    -1,    -1,
      31,    32,    33,    -1,    35,    36,    37,     0,    -1,    -1,
       3,    -1,    43,     6,     7,    -1,    -1,    -1,    11,    -1,
      13,    14,    15,    -1,    -1,    -1,    19,    20,    21,    -1,
      23,    24,    -1,    26,    -1,    -1,    -1,    -1,    31,    32,
      33,    -1,    35,    36,    37,     3,    -1,    -1,     6,     7,
      -1,    -1,    -1,    11,    -1,    13,    14,    15,    -1,    -1,
      -1,    19,    20,    21,    -1,    23,    24,    -1,    26,    -1,
      -1,    -1,    -1,    31,    32,    33,    -1,    35,    36,    37,
       3,    -1,    -1,     6,     7,    -1,    -1,    -1,    11,    -1,
      13,    -1,    15,    -1,    -1,    -1,    -1,    20,    21,    -1,
      23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    -1,    35,    36,    37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,    11,    13,    14,    15,    19,    20,
      21,    23,    24,    26,    31,    32,    33,    35,    36,    37,
     121,   122,   125,   126,   129,   133,   134,   162,   163,   164,
      38,   130,    38,    42,    51,    72,   123,   124,   135,   136,
     138,   122,   122,   122,   122,     0,   163,    44,   135,   133,
     137,   139,    72,    85,    74,   121,   122,   165,   166,    40,
      42,   136,    38,   131,   132,    43,   138,   133,   124,   135,
      25,    38,    39,    42,    44,    48,    49,    50,    51,    52,
      53,    54,    55,    88,    89,    90,    99,   100,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   145,   121,    98,    26,    41,    51,   117,
     139,    38,    98,   143,    74,    45,    85,    42,   103,   117,
     119,   126,   127,   133,   144,    40,    46,   146,   147,   148,
     149,   150,    42,   103,   103,    40,    42,    46,    47,    48,
      49,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,   118,   103,   105,    51,    56,    57,    52,    53,
      58,    59,    60,    61,    62,    63,    64,    65,    50,    66,
      67,    68,    69,    97,    44,   117,   139,    41,    41,    41,
      51,   117,    43,   122,   140,   141,   142,    43,    85,   116,
     120,    45,   132,   144,    43,    85,   127,   128,   128,    43,
     120,    38,    45,    85,   145,    74,   150,   144,   119,   101,
     102,   117,    38,    38,   117,   105,   105,   105,   106,   106,
     107,   107,   108,   108,   108,   108,   109,   109,   110,   111,
     112,    92,    92,    70,     4,     5,     8,     9,    10,    16,
      17,    18,    22,    28,    34,    38,    44,    72,   119,   121,
     151,   153,   154,   155,   156,   157,   158,   159,   160,   161,
      41,   117,    41,    41,   135,    43,    85,    38,    43,   117,
      44,   105,    41,    45,   147,    43,    41,    43,    85,   113,
     114,    92,    72,   120,    72,    71,    94,    95,    38,    42,
      72,   119,    42,    93,    71,    96,    72,    45,    92,    41,
      73,   142,   146,   145,   117,   119,    71,   151,    44,    92,
      42,    72,   119,    72,   119,    42,    92,    98,   157,    45,
      85,    97,   151,    92,   152,   153,   158,   159,   160,   161,
      96,    97,    43,    96,   151,   155,    45,    71,   155,    92,
      98,    43,   151,    98,    45,    92,    45,    34,   121,   158,
      92,    92,   116,    92,    42,    92,    92,   151,   119,    34,
     119,   158,   158,    97,    43,    42,    43,    92,    92,    12,
      44,    92,   119,    72,   119,   119,    92,    92,   152,    43,
      97,    97,   151,   155,    72,    43,    43,    45,    92,    92,
      44,   152,    44,   152,   155,   155,    45,    45
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    91,    92,    93,    94,    95,    96,    97,    98,    99,
      99,    99,    99,    99,    99,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   101,   101,   102,   102,   103,   103,
     103,   103,   103,   103,   104,   104,   104,   104,   104,   104,
     105,   105,   106,   106,   106,   106,   107,   107,   107,   108,
     108,   108,   109,   109,   109,   109,   109,   110,   110,   110,
     111,   111,   112,   112,   113,   113,   114,   114,   115,   115,
     116,   116,   117,   117,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   119,   119,   120,   121,   121,
     122,   122,   122,   122,   122,   122,   122,   122,   123,   123,
     124,   124,   125,   125,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   127,   127,   128,
     128,   129,   129,   129,   130,   130,   131,   131,   132,   132,
     133,   133,   133,   134,   135,   135,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   137,
     137,   138,   138,   139,   139,   140,   140,   141,   141,   142,
     142,   143,   143,   144,   145,   145,   145,   146,   146,   147,
     147,   148,   149,   149,   150,   150,   151,   151,   151,   151,
     151,   151,   152,   152,   152,   152,   152,   153,   153,   153,
     154,   155,   155,   156,   156,   157,   157,   158,   158,   159,
     159,   159,   160,   160,   160,   160,   160,   160,   160,   160,
     161,   161,   161,   161,   161,   162,   162,   163,   163,   164,
     165,   165,   166,   166
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     0,     0,     0,     0,     0,     0,     1,
       1,     1,     1,     1,     3,     1,     4,     4,     3,     3,
       2,     2,     6,     7,     1,     0,     1,     3,     1,     2,
       2,     2,     2,     4,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     1,     3,     1,     3,     1,     4,     1,     4,
       1,     9,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     3,     2,
       2,     1,     2,     1,     2,     1,     2,     1,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     0,
       1,     5,     6,     2,     0,     1,     1,     3,     1,     3,
       1,     1,     1,     1,     2,     1,     1,     3,     5,     4,
       4,     3,     6,     5,     5,     4,     5,     4,     4,     0,
       1,     2,     3,     1,     2,     1,     3,     1,     3,     2,
       1,     1,     3,     1,     1,     3,     4,     2,     4,     0,
       1,     2,     1,     2,     3,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     4,     3,
       5,     0,     1,     1,     3,     1,     1,     2,     1,     8,
      11,     5,    10,    12,    10,    12,    14,    14,    16,    16,
       3,     2,     2,     3,     2,     1,     2,     1,     1,     7,
       1,     2,     0,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
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

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
  case 2:
#line 110 "A5_20.y"
    {
        //mainly used in backpatching, stores the next quad 
        (yyval.instr_number) = nextinstr();
    }
#line 1907 "A5_20.tab.c"
    break;

  case 3:
#line 117 "A5_20.y"
    {
        // identifying the start of a while loop
        loop_name = "WHILE";
    }
#line 1916 "A5_20.tab.c"
    break;

  case 4:
#line 124 "A5_20.y"
    { 
        // identifyiong the start of the do while statement
        loop_name = "DO_WHILE";
    }
#line 1925 "A5_20.tab.c"
    break;

  case 5:
#line 131 "A5_20.y"
    {   
        //start of the for statement 
        loop_name = "FOR";
    }
#line 1934 "A5_20.tab.c"
    break;

  case 6:
#line 139 "A5_20.y"
    {
        //update the current symbol pointer used for nested blocks
        string name = ST->name+"."+loop_name+"#"+to_string(table_count);
        table_count++;
        Symbol* s = ST->lookup(name);

        s->nested = new SymbolTable(name);
        s->nested->parent = ST;
        s->name = name;
        s->type = new SymbolType("block");

        currSymbolPtr = s;
    }
#line 1952 "A5_20.tab.c"
    break;

  case 7:
#line 155 "A5_20.y"
    {
        //For backpatching, guard fall through
        (yyval.stat) = new Statement();
        (yyval.stat)->nextlist=makelist(nextinstr());
        emit("goto","");
    }
#line 1963 "A5_20.tab.c"
    break;

  case 8:
#line 164 "A5_20.y"
    {    
        parST = ST;
        if(currSymbolPtr->nested==NULL) 
        {
            changeTable(new SymbolTable(""));    
        }
        else 
        {
            changeTable(currSymbolPtr ->nested);                        
            emit("Label", ST->name);
        }
    }
#line 1980 "A5_20.tab.c"
    break;

  case 9:
#line 179 "A5_20.y"
    {
        // create new expression and store pointer to ST entry in the location
        (yyval.expr)=new Expression();
        (yyval.expr)->loc=(yyvsp[0].symp);
    }
#line 1990 "A5_20.tab.c"
    break;

  case 10:
#line 186 "A5_20.y"
    { 
        (yyval.expr)=new Expression();    
        string p=convertIntToString((yyvsp[0].intval));
        (yyval.expr)->loc=gentemp(new SymbolType("int"),p);
        emit("=",(yyval.expr)->loc->name,p);
    }
#line 2001 "A5_20.tab.c"
    break;

  case 11:
#line 193 "A5_20.y"
    {
        (yyval.expr)=new Expression();
        (yyval.expr)->loc=gentemp(new SymbolType("float"),(yyvsp[0].char_value));
        emit("=",(yyval.expr)->loc->name,string((yyvsp[0].char_value)));
    }
#line 2011 "A5_20.tab.c"
    break;

  case 12:
#line 199 "A5_20.y"
    {
        (yyval.expr)=new Expression();
        (yyval.expr)->loc=gentemp(new SymbolType("char"),(yyvsp[0].char_value));
        emit("=",(yyval.expr)->loc->name,string((yyvsp[0].char_value)));
    }
#line 2021 "A5_20.tab.c"
    break;

  case 13:
#line 205 "A5_20.y"
    {
        (yyval.expr)=new Expression();
        (yyval.expr)->loc=gentemp(new SymbolType("ptr"),(yyvsp[0].char_value));
        (yyval.expr)->loc->type->arrtype=new SymbolType("char");
    }
#line 2031 "A5_20.tab.c"
    break;

  case 14:
#line 211 "A5_20.y"
    {
        // simply equal to expression
        (yyval.expr)=(yyvsp[-1].expr);
    }
#line 2040 "A5_20.tab.c"
    break;

  case 15:
#line 219 "A5_20.y"
    {
        //create new Array and store the location of primary expression in it
        (yyval.A)=new Array();    
        (yyval.A)->Array=(yyvsp[0].expr)->loc;    
        (yyval.A)->type=(yyvsp[0].expr)->loc->type;    
        (yyval.A)->loc=(yyval.A)->Array;
    }
#line 2052 "A5_20.tab.c"
    break;

  case 16:
#line 227 "A5_20.y"
    {     
        
        (yyval.A)=new Array();
        (yyval.A)->type=(yyvsp[-3].A)->type->arrtype;
        (yyval.A)->Array=(yyvsp[-3].A)->Array;
        (yyval.A)->loc=gentemp(new SymbolType("int"));
        (yyval.A)->atype="arr";
        // if already arr, multiply the size of the sub-type of Array with the expression value and add
        if((yyvsp[-3].A)->atype=="arr") 
        {            
            Symbol* t=gentemp(new SymbolType("int"));
            int p=computeSize((yyval.A)->type);
            string str=convertIntToString(p);
            emit("*",t->name,(yyvsp[-1].expr)->loc->name,str);
            emit("+",(yyval.A)->loc->name,(yyvsp[-3].A)->loc->name,t->name);
        }
        //if a 1D Array, calculate size
        else 
        {
            int p=computeSize((yyval.A)->type);    
            string str=convertIntToString(p);
            emit("*",(yyval.A)->loc->name,(yyvsp[-1].expr)->loc->name,str);
        }
    }
#line 2081 "A5_20.tab.c"
    break;

  case 17:
#line 252 "A5_20.y"
    {
        
        (yyval.A)=new Array();    
        (yyval.A)->Array=gentemp((yyvsp[-3].A)->type);
        string str=convertIntToString((yyvsp[-1].num_params));
        emit("call",(yyval.A)->Array->name,(yyvsp[-3].A)->Array->name,str);
    }
#line 2093 "A5_20.tab.c"
    break;

  case 18:
#line 259 "A5_20.y"
                                        {  }
#line 2099 "A5_20.tab.c"
    break;

  case 19:
#line 260 "A5_20.y"
                                             {  }
#line 2105 "A5_20.tab.c"
    break;

  case 20:
#line 263 "A5_20.y"
    { 
        (yyval.A)=new Array();    
        (yyval.A)->Array=gentemp((yyvsp[-1].A)->Array->type);
        emit("=",(yyval.A)->Array->name,(yyvsp[-1].A)->Array->name);
        emit("+",(yyvsp[-1].A)->Array->name,(yyvsp[-1].A)->Array->name,"1");
    }
#line 2116 "A5_20.tab.c"
    break;

  case 21:
#line 271 "A5_20.y"
    {
        (yyval.A)=new Array();    
        (yyval.A)->Array=gentemp((yyvsp[-1].A)->Array->type);
        emit("=",(yyval.A)->Array->name,(yyvsp[-1].A)->Array->name);
        emit("-",(yyvsp[-1].A)->Array->name,(yyvsp[-1].A)->Array->name,"1");    
    }
#line 2127 "A5_20.tab.c"
    break;

  case 22:
#line 277 "A5_20.y"
                                                                                                               {  }
#line 2133 "A5_20.tab.c"
    break;

  case 23:
#line 278 "A5_20.y"
                                                                                                                     {  }
#line 2139 "A5_20.tab.c"
    break;

  case 24:
#line 282 "A5_20.y"
    { 
        (yyval.num_params)=(yyvsp[0].num_params);
    }
#line 2147 "A5_20.tab.c"
    break;

  case 25:
#line 286 "A5_20.y"
    { 
        (yyval.num_params)=0;
    }
#line 2155 "A5_20.tab.c"
    break;

  case 26:
#line 292 "A5_20.y"
    {
        //one argument and emit param
        (yyval.num_params)=1;
        emit("param",(yyvsp[0].expr)->loc->name);    
    }
#line 2165 "A5_20.tab.c"
    break;

  case 27:
#line 298 "A5_20.y"
    {
        (yyval.num_params)=(yyvsp[-2].num_params)+1;
        emit("param",(yyvsp[0].expr)->loc->name);
    }
#line 2174 "A5_20.tab.c"
    break;

  case 28:
#line 304 "A5_20.y"
                                     { (yyval.A)=(yyvsp[0].A);}
#line 2180 "A5_20.tab.c"
    break;

  case 29:
#line 306 "A5_20.y"
    {      
        
        emit("+",(yyvsp[0].A)->Array->name,(yyvsp[0].A)->Array->name,"1");        
        (yyval.A)=(yyvsp[0].A);
    }
#line 2190 "A5_20.tab.c"
    break;

  case 30:
#line 312 "A5_20.y"
    {
        
        emit("-",(yyvsp[0].A)->Array->name,(yyvsp[0].A)->Array->name,"1");
        (yyval.A)=(yyvsp[0].A);
    }
#line 2200 "A5_20.tab.c"
    break;

  case 31:
#line 318 "A5_20.y"
    {
        (yyval.A)=new Array();
        switch((yyvsp[-1].unaryOp))
        {      
            //address, generate a pointer temporary and emit the quad
            case '&':
                (yyval.A)->Array=gentemp(new SymbolType("ptr"));
                (yyval.A)->Array->type->arrtype=(yyvsp[0].A)->Array->type; 
                emit("=&",(yyval.A)->Array->name,(yyvsp[0].A)->Array->name);
                break;
            // value, generate a temporary of the corresponding type
            case '*':
                (yyval.A)->atype="ptr";
                (yyval.A)->loc=gentemp((yyvsp[0].A)->Array->type->arrtype);
                (yyval.A)->Array=(yyvsp[0].A)->Array;
                emit("=*",(yyval.A)->loc->name,(yyvsp[0].A)->Array->name);
                break;
            // Similar case with + - ~ !
            case '+':  
                (yyval.A)=(yyvsp[0].A);
                break;
            case '-':                
                (yyval.A)->Array=gentemp(new SymbolType((yyvsp[0].A)->Array->type->type));
                emit("uminus",(yyval.A)->Array->name,(yyvsp[0].A)->Array->name);
                break;
            case '~':
                (yyval.A)->Array=gentemp(new SymbolType((yyvsp[0].A)->Array->type->type));
                emit("~",(yyval.A)->Array->name,(yyvsp[0].A)->Array->name);
                break;
            case '!':                
                (yyval.A)->Array=gentemp(new SymbolType((yyvsp[0].A)->Array->type->type));
                emit("!",(yyval.A)->Array->name,(yyvsp[0].A)->Array->name);
                break;
        }
    }
#line 2240 "A5_20.tab.c"
    break;

  case 32:
#line 353 "A5_20.y"
                               {  }
#line 2246 "A5_20.tab.c"
    break;

  case 33:
#line 354 "A5_20.y"
                                                                {  }
#line 2252 "A5_20.tab.c"
    break;

  case 34:
#line 358 "A5_20.y"
    { (yyval.unaryOp)='&'; }
#line 2258 "A5_20.tab.c"
    break;

  case 35:
#line 360 "A5_20.y"
    {(yyval.unaryOp)='*'; }
#line 2264 "A5_20.tab.c"
    break;

  case 36:
#line 362 "A5_20.y"
    { (yyval.unaryOp)='+'; }
#line 2270 "A5_20.tab.c"
    break;

  case 37:
#line 364 "A5_20.y"
    { (yyval.unaryOp)='-'; }
#line 2276 "A5_20.tab.c"
    break;

  case 38:
#line 366 "A5_20.y"
    { (yyval.unaryOp)='~'; }
#line 2282 "A5_20.tab.c"
    break;

  case 39:
#line 368 "A5_20.y"
    {(yyval.unaryOp)='!'; }
#line 2288 "A5_20.tab.c"
    break;

  case 40:
#line 371 "A5_20.y"
                                   { (yyval.A)=(yyvsp[0].A); }
#line 2294 "A5_20.tab.c"
    break;

  case 41:
#line 373 "A5_20.y"
    { 
        //generate a new symbol of the same type	
        (yyval.A)=new Array();    
        (yyval.A)->Array=convertType((yyvsp[0].A)->Array,var_type);
    }
#line 2304 "A5_20.tab.c"
    break;

  case 42:
#line 381 "A5_20.y"
    {
        (yyval.expr) = new Expression();
        if((yyvsp[0].A)->atype=="arr")             
        {
            (yyval.expr)->loc = gentemp((yyvsp[0].A)->loc->type);    
            emit("=[]", (yyval.expr)->loc->name, (yyvsp[0].A)->Array->name, (yyvsp[0].A)->loc->name);
        }
        else if((yyvsp[0].A)->atype=="ptr")
        { 
            (yyval.expr)->loc = (yyvsp[0].A)->loc;
        }
        else
        {
            (yyval.expr)->loc = (yyvsp[0].A)->Array;
        }
    }
#line 2325 "A5_20.tab.c"
    break;

  case 43:
#line 398 "A5_20.y"
    { 
        // error in program, type conflict
        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].A)->Array))         
            cout<<"Type Error in Program"<< endl;    
        else                                 
        {
            (yyval.expr) = new Expression();    
            (yyval.expr)->loc = gentemp(new SymbolType((yyvsp[-2].expr)->loc->type->type));
            emit("*", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].A)->Array->name);
        }
    }
#line 2341 "A5_20.tab.c"
    break;

  case 44:
#line 410 "A5_20.y"
    {
        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].A)->Array)){ 
            cout << "Type Error in Program"<< endl;
        }
        else   
        {
            
            (yyval.expr) = new Expression();
            (yyval.expr)->loc = gentemp(new SymbolType((yyvsp[-2].expr)->loc->type->type));
            emit("/", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].A)->Array->name);
        }
    }
#line 2358 "A5_20.tab.c"
    break;

  case 45:
#line 423 "A5_20.y"
    {
        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].A)->Array)) cout << "Type Error in Program"<< endl;        
        else          
        {
            (yyval.expr) = new Expression();
            (yyval.expr)->loc = gentemp(new SymbolType((yyvsp[-2].expr)->loc->type->type));
            emit("%", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].A)->Array->name);    
        }
    }
#line 2372 "A5_20.tab.c"
    break;

  case 46:
#line 434 "A5_20.y"
                                                 { (yyval.expr)=(yyvsp[0].expr); }
#line 2378 "A5_20.tab.c"
    break;

  case 47:
#line 436 "A5_20.y"
    {
        
        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc))
            cout << "Type Error in Program"<< endl;
        else        
        {
            (yyval.expr) = new Expression();    
            (yyval.expr)->loc = gentemp(new SymbolType((yyvsp[-2].expr)->loc->type->type));
            emit("+", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
        }
    }
#line 2394 "A5_20.tab.c"
    break;

  case 48:
#line 448 "A5_20.y"
    {
        
        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc))
            cout << "Type Error in Program"<< endl;        
        else
        {    
            (yyval.expr) = new Expression();    
            (yyval.expr)->loc = gentemp(new SymbolType((yyvsp[-2].expr)->loc->type->type));
            emit("-", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
        }
    }
#line 2410 "A5_20.tab.c"
    break;

  case 49:
#line 461 "A5_20.y"
                                        { (yyval.expr)=(yyvsp[0].expr); }
#line 2416 "A5_20.tab.c"
    break;

  case 50:
#line 463 "A5_20.y"
    { 
        if(!((yyvsp[0].expr)->loc->type->type == "int"))
            cout << "Type Error in Program"<< endl;         
        else
        {        
            (yyval.expr) = new Expression();        
            (yyval.expr)->loc = gentemp(new SymbolType("int"));
            emit("<<", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);        
        }
    }
#line 2431 "A5_20.tab.c"
    break;

  case 51:
#line 474 "A5_20.y"
    {     
        if(!((yyvsp[0].expr)->loc->type->type == "int"))
        {
            cout << "Type Error in Program"<< endl;         
        }
        else          
        {            
            (yyval.expr) = new Expression();    
            (yyval.expr)->loc = gentemp(new SymbolType("int"));
            emit(">>", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);            
        }
    }
#line 2448 "A5_20.tab.c"
    break;

  case 52:
#line 488 "A5_20.y"
                                          { (yyval.expr)=(yyvsp[0].expr); }
#line 2454 "A5_20.tab.c"
    break;

  case 53:
#line 490 "A5_20.y"
    {
        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) 
        {
            yyerror("Type Error in Program");
        }
        else 
        {
            (yyval.expr) = new Expression();
            (yyval.expr)->type = "bool";
            (yyval.expr)->truelist = makelist(nextinstr());
            (yyval.expr)->falselist = makelist(nextinstr()+1);
            emit("<", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
            emit("goto", "");    
        }
    }
#line 2474 "A5_20.tab.c"
    break;

  case 54:
#line 506 "A5_20.y"
    {
        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) 
        {
            yyerror("Type Error in Program");
        }
        else 
        {    
            (yyval.expr) = new Expression();        
            (yyval.expr)->type = "bool";
            (yyval.expr)->truelist = makelist(nextinstr());
            (yyval.expr)->falselist = makelist(nextinstr()+1);
            emit(">", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
            emit("goto", "");
        }    
    }
#line 2494 "A5_20.tab.c"
    break;

  case 55:
#line 522 "A5_20.y"
    {
        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) 
        {
            cout << "Type Error in Program"<< endl;
        }
        else 
        {            
            (yyval.expr) = new Expression();        
            (yyval.expr)->type = "bool";
            (yyval.expr)->truelist = makelist(nextinstr());
            (yyval.expr)->falselist = makelist(nextinstr()+1);
            emit("<=", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
            emit("goto", "");
        }        
    }
#line 2514 "A5_20.tab.c"
    break;

  case 56:
#line 538 "A5_20.y"
    {
        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc))
        {
            cout << "Type Error in Program"<< endl;
        }
        else 
        {    
            (yyval.expr) = new Expression();    
            (yyval.expr)->type = "bool";
            (yyval.expr)->truelist = makelist(nextinstr());
            (yyval.expr)->falselist = makelist(nextinstr()+1);
            emit(">=", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
            emit("goto", "");
        }
    }
#line 2534 "A5_20.tab.c"
    break;

  case 57:
#line 555 "A5_20.y"
                                            { (yyval.expr)=(yyvsp[0].expr); }
#line 2540 "A5_20.tab.c"
    break;

  case 58:
#line 557 "A5_20.y"
    {
        //Similar to above, check compatibility, convert bool to int, make list and emit
        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc))
        {
            cout << "Type Error in Program"<< endl;
        }
        else 
        {
            convertBoolToInt((yyvsp[-2].expr));
            convertBoolToInt((yyvsp[0].expr));
            (yyval.expr) = new Expression();
            (yyval.expr)->type = "bool";
            (yyval.expr)->truelist = makelist(nextinstr());
            (yyval.expr)->falselist = makelist(nextinstr()+1); 
            emit("==", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
            emit("goto", "");                
        }
    }
#line 2563 "A5_20.tab.c"
    break;

  case 59:
#line 576 "A5_20.y"
    {
        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) 
        {
            
            cout << "Type Error in Program"<< endl;
        }
        else 
        {            
            convertBoolToInt((yyvsp[-2].expr));
            convertBoolToInt((yyvsp[0].expr));
            (yyval.expr) = new Expression();
            (yyval.expr)->type = "bool";
            (yyval.expr)->truelist = makelist(nextinstr());
            (yyval.expr)->falselist = makelist(nextinstr()+1);
            emit("!=", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
            emit("goto", "");
        }
    }
#line 2586 "A5_20.tab.c"
    break;

  case 60:
#line 596 "A5_20.y"
                                     { (yyval.expr)=(yyvsp[0].expr); }
#line 2592 "A5_20.tab.c"
    break;

  case 61:
#line 598 "A5_20.y"
    {
        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc))
        {        
            cout << "Type Error in Program"<< endl;
        }
        else 
        {              
            convertBoolToInt((yyvsp[-2].expr));
            convertBoolToInt((yyvsp[0].expr));            
            (yyval.expr) = new Expression();
            (yyval.expr)->type = "not-boolean";
            (yyval.expr)->loc = gentemp(new SymbolType("int"));
            emit("&", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
        }
    }
#line 2612 "A5_20.tab.c"
    break;

  case 62:
#line 615 "A5_20.y"
                                         { (yyval.expr)=(yyvsp[0].expr); }
#line 2618 "A5_20.tab.c"
    break;

  case 63:
#line 617 "A5_20.y"
    {
        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc))
        {
            cout << "Type Error in Program"<< endl;
        }
        else 
        {
            convertBoolToInt((yyvsp[-2].expr));
            convertBoolToInt((yyvsp[0].expr));
            (yyval.expr) = new Expression();
            (yyval.expr)->type = "not-boolean";
            (yyval.expr)->loc = gentemp(new SymbolType("int"));
            emit("^", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
        }
    }
#line 2638 "A5_20.tab.c"
    break;

  case 64:
#line 634 "A5_20.y"
                                                 { (yyval.expr)=(yyvsp[0].expr); }
#line 2644 "A5_20.tab.c"
    break;

  case 65:
#line 636 "A5_20.y"
    { 
        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc))
        { yyerror("Type Error in Program"); }
        else 
        {
            convertBoolToInt((yyvsp[-2].expr));        
            convertBoolToInt((yyvsp[0].expr));
            (yyval.expr) = new Expression();
            (yyval.expr)->type = "not-boolean";
            (yyval.expr)->loc = gentemp(new SymbolType("int"));
            emit("|", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
        } 
    }
#line 2662 "A5_20.tab.c"
    break;

  case 66:
#line 651 "A5_20.y"
                                                 { (yyval.expr)=(yyvsp[0].expr); }
#line 2668 "A5_20.tab.c"
    break;

  case 67:
#line 654 "A5_20.y"
    { 
        convertIntToBool((yyvsp[0].expr));
        convertIntToBool((yyvsp[-3].expr));
        (yyval.expr) = new Expression();
        (yyval.expr)->type = "bool";
        backpatch((yyvsp[-3].expr)->truelist, (yyvsp[-1].instr_number));
        (yyval.expr)->truelist = (yyvsp[0].expr)->truelist;
        (yyval.expr)->falselist = merge((yyvsp[-3].expr)->falselist, (yyvsp[0].expr)->falselist);
    }
#line 2682 "A5_20.tab.c"
    break;

  case 68:
#line 665 "A5_20.y"
                                                { (yyval.expr)=(yyvsp[0].expr); }
#line 2688 "A5_20.tab.c"
    break;

  case 69:
#line 668 "A5_20.y"
    { 
        convertIntToBool((yyvsp[0].expr));            
        convertIntToBool((yyvsp[-3].expr));            
        (yyval.expr) = new Expression();            
        (yyval.expr)->type = "bool";
        backpatch((yyvsp[-3].expr)->falselist, (yyvsp[-1].instr_number));        
        (yyval.expr)->truelist = merge((yyvsp[-3].expr)->truelist, (yyvsp[0].expr)->truelist);        
        (yyval.expr)->falselist = (yyvsp[0].expr)->falselist;             
    }
#line 2702 "A5_20.tab.c"
    break;

  case 70:
#line 679 "A5_20.y"
                                              {(yyval.expr)=(yyvsp[0].expr);}
#line 2708 "A5_20.tab.c"
    break;

  case 71:
#line 682 "A5_20.y"
    {
        // Generate temporary variable and then emit accordingly
        (yyval.expr)->loc = gentemp((yyvsp[-4].expr)->loc->type);
        (yyval.expr)->loc->update((yyvsp[-4].expr)->loc->type);
        emit("=", (yyval.expr)->loc->name, (yyvsp[0].expr)->loc->name);
        list<int> l = makelist(nextinstr());
        emit("goto", "");
        backpatch((yyvsp[-3].stat)->nextlist, nextinstr());
        emit("=", (yyval.expr)->loc->name, (yyvsp[-4].expr)->loc->name);
        list<int> m = makelist(nextinstr());
        l = merge(l, m);                        
        emit("goto", "");                        
        backpatch((yyvsp[-7].stat)->nextlist, nextinstr());
        convertIntToBool((yyvsp[-8].expr));
        backpatch((yyvsp[-8].expr)->truelist, (yyvsp[-5].instr_number));
        backpatch((yyvsp[-8].expr)->falselist, (yyvsp[-1].instr_number));
        backpatch(l, nextinstr());
    }
#line 2731 "A5_20.tab.c"
    break;

  case 72:
#line 702 "A5_20.y"
                                              {(yyval.expr)=(yyvsp[0].expr);}
#line 2737 "A5_20.tab.c"
    break;

  case 73:
#line 704 "A5_20.y"
     {
        // array assignment expression
        if((yyvsp[-2].A)->atype=="arr")
        {
            (yyvsp[0].expr)->loc = convertType((yyvsp[0].expr)->loc, (yyvsp[-2].A)->type->type);
            emit("[]=", (yyvsp[-2].A)->Array->name, (yyvsp[-2].A)->loc->name, (yyvsp[0].expr)->loc->name);        
        }
        // pointer assignment expression
        else if((yyvsp[-2].A)->atype=="ptr")
        {
            emit("*=", (yyvsp[-2].A)->Array->name, (yyvsp[0].expr)->loc->name);    
        }
        // direct assignment expression
        else
        {
            (yyvsp[0].expr)->loc = convertType((yyvsp[0].expr)->loc, (yyvsp[-2].A)->Array->type->type);
            emit("=", (yyvsp[-2].A)->Array->name, (yyvsp[0].expr)->loc->name);
        }
        (yyval.expr) = (yyvsp[0].expr);
    }
#line 2762 "A5_20.tab.c"
    break;

  case 74:
#line 726 "A5_20.y"
                              {  }
#line 2768 "A5_20.tab.c"
    break;

  case 75:
#line 727 "A5_20.y"
                 {  }
#line 2774 "A5_20.tab.c"
    break;

  case 76:
#line 728 "A5_20.y"
                {  }
#line 2780 "A5_20.tab.c"
    break;

  case 77:
#line 729 "A5_20.y"
                {  }
#line 2786 "A5_20.tab.c"
    break;

  case 78:
#line 730 "A5_20.y"
                {  }
#line 2792 "A5_20.tab.c"
    break;

  case 79:
#line 731 "A5_20.y"
                {  }
#line 2798 "A5_20.tab.c"
    break;

  case 80:
#line 732 "A5_20.y"
               {  }
#line 2804 "A5_20.tab.c"
    break;

  case 81:
#line 733 "A5_20.y"
               {  }
#line 2810 "A5_20.tab.c"
    break;

  case 82:
#line 734 "A5_20.y"
                        {  }
#line 2816 "A5_20.tab.c"
    break;

  case 83:
#line 735 "A5_20.y"
                        {  }
#line 2822 "A5_20.tab.c"
    break;

  case 84:
#line 736 "A5_20.y"
                       { }
#line 2828 "A5_20.tab.c"
    break;

  case 85:
#line 739 "A5_20.y"
                                  {  (yyval.expr)=(yyvsp[0].expr);  }
#line 2834 "A5_20.tab.c"
    break;

  case 86:
#line 740 "A5_20.y"
                                             {   }
#line 2840 "A5_20.tab.c"
    break;

  case 87:
#line 743 "A5_20.y"
                                            {   }
#line 2846 "A5_20.tab.c"
    break;

  case 88:
#line 746 "A5_20.y"
                                                                   {    }
#line 2852 "A5_20.tab.c"
    break;

  case 89:
#line 747 "A5_20.y"
                                       {      }
#line 2858 "A5_20.tab.c"
    break;

  case 90:
#line 750 "A5_20.y"
                                                                       {    }
#line 2864 "A5_20.tab.c"
    break;

  case 91:
#line 751 "A5_20.y"
                              {    }
#line 2870 "A5_20.tab.c"
    break;

  case 92:
#line 752 "A5_20.y"
                                            {    }
#line 2876 "A5_20.tab.c"
    break;

  case 93:
#line 753 "A5_20.y"
                     {    }
#line 2882 "A5_20.tab.c"
    break;

  case 94:
#line 754 "A5_20.y"
                                            {    }
#line 2888 "A5_20.tab.c"
    break;

  case 95:
#line 755 "A5_20.y"
                     {    }
#line 2894 "A5_20.tab.c"
    break;

  case 96:
#line 756 "A5_20.y"
                                                {    }
#line 2900 "A5_20.tab.c"
    break;

  case 97:
#line 757 "A5_20.y"
                         {    }
#line 2906 "A5_20.tab.c"
    break;

  case 98:
#line 760 "A5_20.y"
                                      {    }
#line 2912 "A5_20.tab.c"
    break;

  case 99:
#line 761 "A5_20.y"
                                                 {    }
#line 2918 "A5_20.tab.c"
    break;

  case 100:
#line 764 "A5_20.y"
                            {(yyval.symp)=(yyvsp[0].symp);}
#line 2924 "A5_20.tab.c"
    break;

  case 101:
#line 766 "A5_20.y"
    {
        if((yyvsp[0].symp)->val!="") (yyvsp[-2].symp)->val=(yyvsp[0].symp)->val;
        emit("=", (yyvsp[-2].symp)->name, (yyvsp[0].symp)->name);    
    }
#line 2933 "A5_20.tab.c"
    break;

  case 102:
#line 772 "A5_20.y"
                                 { }
#line 2939 "A5_20.tab.c"
    break;

  case 103:
#line 773 "A5_20.y"
              { }
#line 2945 "A5_20.tab.c"
    break;

  case 104:
#line 776 "A5_20.y"
                       { var_type="void"; }
#line 2951 "A5_20.tab.c"
    break;

  case 105:
#line 777 "A5_20.y"
             { var_type="char"; }
#line 2957 "A5_20.tab.c"
    break;

  case 106:
#line 778 "A5_20.y"
             { }
#line 2963 "A5_20.tab.c"
    break;

  case 107:
#line 779 "A5_20.y"
            { var_type="int"; }
#line 2969 "A5_20.tab.c"
    break;

  case 108:
#line 780 "A5_20.y"
             {  }
#line 2975 "A5_20.tab.c"
    break;

  case 109:
#line 781 "A5_20.y"
              { var_type="float"; }
#line 2981 "A5_20.tab.c"
    break;

  case 110:
#line 782 "A5_20.y"
               { }
#line 2987 "A5_20.tab.c"
    break;

  case 111:
#line 783 "A5_20.y"
               {  }
#line 2993 "A5_20.tab.c"
    break;

  case 112:
#line 784 "A5_20.y"
                 { }
#line 2999 "A5_20.tab.c"
    break;

  case 113:
#line 785 "A5_20.y"
              {  }
#line 3005 "A5_20.tab.c"
    break;

  case 114:
#line 786 "A5_20.y"
                 {  }
#line 3011 "A5_20.tab.c"
    break;

  case 115:
#line 787 "A5_20.y"
                   {  }
#line 3017 "A5_20.tab.c"
    break;

  case 116:
#line 788 "A5_20.y"
                       {  }
#line 3023 "A5_20.tab.c"
    break;

  case 117:
#line 791 "A5_20.y"
                                                                        {  }
#line 3029 "A5_20.tab.c"
    break;

  case 118:
#line 792 "A5_20.y"
                                                   {  }
#line 3035 "A5_20.tab.c"
    break;

  case 119:
#line 795 "A5_20.y"
                                     {  }
#line 3041 "A5_20.tab.c"
    break;

  case 120:
#line 796 "A5_20.y"
                                {  }
#line 3047 "A5_20.tab.c"
    break;

  case 121:
#line 799 "A5_20.y"
                                                                                             {  }
#line 3053 "A5_20.tab.c"
    break;

  case 122:
#line 800 "A5_20.y"
                                                                                         {  }
#line 3059 "A5_20.tab.c"
    break;

  case 123:
#line 801 "A5_20.y"
                      {  }
#line 3065 "A5_20.tab.c"
    break;

  case 124:
#line 804 "A5_20.y"
                        {  }
#line 3071 "A5_20.tab.c"
    break;

  case 125:
#line 805 "A5_20.y"
                   {  }
#line 3077 "A5_20.tab.c"
    break;

  case 126:
#line 808 "A5_20.y"
                              {  }
#line 3083 "A5_20.tab.c"
    break;

  case 127:
#line 809 "A5_20.y"
                                         {  }
#line 3089 "A5_20.tab.c"
    break;

  case 128:
#line 812 "A5_20.y"
                         {  }
#line 3095 "A5_20.tab.c"
    break;

  case 129:
#line 813 "A5_20.y"
                                              {  }
#line 3101 "A5_20.tab.c"
    break;

  case 130:
#line 816 "A5_20.y"
                        {  }
#line 3107 "A5_20.tab.c"
    break;

  case 131:
#line 817 "A5_20.y"
                 {  }
#line 3113 "A5_20.tab.c"
    break;

  case 132:
#line 818 "A5_20.y"
                 {  }
#line 3119 "A5_20.tab.c"
    break;

  case 133:
#line 821 "A5_20.y"
                             {  }
#line 3125 "A5_20.tab.c"
    break;

  case 134:
#line 825 "A5_20.y"
    {
        // Pointer declarator
        SymbolType *t = (yyvsp[-1].sym_type);
        while(t->arrtype!=NULL) t = t->arrtype;
        t->arrtype = (yyvsp[0].symp)->type;
        (yyval.symp) = (yyvsp[0].symp)->update((yyvsp[-1].sym_type));
    }
#line 3137 "A5_20.tab.c"
    break;

  case 135:
#line 832 "A5_20.y"
                        {   }
#line 3143 "A5_20.tab.c"
    break;

  case 136:
#line 836 "A5_20.y"
    {
        // assignment to different identifier
        (yyval.symp) = (yyvsp[0].symp)->update(new SymbolType(var_type));
        currSymbolPtr = (yyval.symp);    
    }
#line 3153 "A5_20.tab.c"
    break;

  case 137:
#line 841 "A5_20.y"
                                                        {(yyval.symp)=(yyvsp[-1].symp);}
#line 3159 "A5_20.tab.c"
    break;

  case 138:
#line 842 "A5_20.y"
                                                                                                           {    }
#line 3165 "A5_20.tab.c"
    break;

  case 139:
#line 843 "A5_20.y"
                                                                                     {    }
#line 3171 "A5_20.tab.c"
    break;

  case 140:
#line 845 "A5_20.y"
    {
        SymbolType *t = (yyvsp[-3].symp) -> type;
        SymbolType *prev = NULL;
        while(t->type == "arr") 
        {
            prev = t;  
            //move recursively to get basetype  
            t = t->arrtype;
        }
        if(prev==NULL) 
        {
            int temp = atoi((yyvsp[-1].expr)->loc->val.c_str());
            SymbolType* s = new SymbolType("arr", (yyvsp[-3].symp)->type, temp);
            (yyval.symp) = (yyvsp[-3].symp)->update(s);
        }
        else 
        {
            prev->arrtype =  new SymbolType("arr", t, atoi((yyvsp[-1].expr)->loc->val.c_str()));
            (yyval.symp) = (yyvsp[-3].symp)->update((yyvsp[-3].symp)->type);
        }
    }
#line 3197 "A5_20.tab.c"
    break;

  case 141:
#line 867 "A5_20.y"
    {
        SymbolType *t = (yyvsp[-2].symp) -> type;
        SymbolType *prev = NULL;
        while(t->type == "arr") 
        {
            prev = t;   
            // move recursively to base type 
            t = t->arrtype;
        }
        if(prev==NULL) 
        {
            SymbolType* s = new SymbolType("arr", (yyvsp[-2].symp)->type, 0);
            (yyval.symp) = (yyvsp[-2].symp)->update(s);
        }
        else 
        {
            prev->arrtype =  new SymbolType("arr", t, 0);
            (yyval.symp) = (yyvsp[-2].symp)->update((yyvsp[-2].symp)->type);
        }
    }
#line 3222 "A5_20.tab.c"
    break;

  case 142:
#line 887 "A5_20.y"
                                                                                                                  {    }
#line 3228 "A5_20.tab.c"
    break;

  case 143:
#line 888 "A5_20.y"
                                                                                              {    }
#line 3234 "A5_20.tab.c"
    break;

  case 144:
#line 889 "A5_20.y"
                                                                                         {    }
#line 3240 "A5_20.tab.c"
    break;

  case 145:
#line 890 "A5_20.y"
                                                                     {    }
#line 3246 "A5_20.tab.c"
    break;

  case 146:
#line 892 "A5_20.y"
    {
        ST->name = (yyvsp[-4].symp)->name;    
        if((yyvsp[-4].symp)->type->type !="void") 
        {
            Symbol *s = ST->lookup("return");
            s->update((yyvsp[-4].symp)->type);        
        }
        (yyvsp[-4].symp)->nested=ST;       
        ST->parent = globalST;
        changeTable(globalST);                
        currSymbolPtr = (yyval.symp);
    }
#line 3263 "A5_20.tab.c"
    break;

  case 147:
#line 904 "A5_20.y"
                                                                               {    }
#line 3269 "A5_20.tab.c"
    break;

  case 148:
#line 906 "A5_20.y"
    {
        ST->name = (yyvsp[-3].symp)->name;
        if((yyvsp[-3].symp)->type->type !="void") 
        {
            Symbol *s = ST->lookup("return");
            s->update((yyvsp[-3].symp)->type);
        }
        (yyvsp[-3].symp)->nested=ST;
        ST->parent = globalST;
        changeTable(globalST);                
        currSymbolPtr = (yyval.symp);
    }
#line 3286 "A5_20.tab.c"
    break;

  case 149:
#line 920 "A5_20.y"
                                  {  }
#line 3292 "A5_20.tab.c"
    break;

  case 150:
#line 921 "A5_20.y"
                               {  }
#line 3298 "A5_20.tab.c"
    break;

  case 151:
#line 925 "A5_20.y"
    { 
        (yyval.sym_type) = new SymbolType("ptr");
    }
#line 3306 "A5_20.tab.c"
    break;

  case 152:
#line 929 "A5_20.y"
    { 
        (yyval.sym_type) = new SymbolType("ptr",(yyvsp[0].sym_type));
    }
#line 3314 "A5_20.tab.c"
    break;

  case 153:
#line 934 "A5_20.y"
                                      {  }
#line 3320 "A5_20.tab.c"
    break;

  case 154:
#line 935 "A5_20.y"
                                           {  }
#line 3326 "A5_20.tab.c"
    break;

  case 155:
#line 938 "A5_20.y"
                                      {  }
#line 3332 "A5_20.tab.c"
    break;

  case 156:
#line 939 "A5_20.y"
                                  {  }
#line 3338 "A5_20.tab.c"
    break;

  case 157:
#line 942 "A5_20.y"
                                        {  }
#line 3344 "A5_20.tab.c"
    break;

  case 158:
#line 943 "A5_20.y"
                                                    {  }
#line 3350 "A5_20.tab.c"
    break;

  case 159:
#line 946 "A5_20.y"
                                                           {  }
#line 3356 "A5_20.tab.c"
    break;

  case 160:
#line 947 "A5_20.y"
                                {  }
#line 3362 "A5_20.tab.c"
    break;

  case 161:
#line 950 "A5_20.y"
                               {  }
#line 3368 "A5_20.tab.c"
    break;

  case 162:
#line 951 "A5_20.y"
                                         {  }
#line 3374 "A5_20.tab.c"
    break;

  case 163:
#line 954 "A5_20.y"
                                      {  }
#line 3380 "A5_20.tab.c"
    break;

  case 164:
#line 957 "A5_20.y"
                                     { (yyval.symp)=(yyvsp[0].expr)->loc; }
#line 3386 "A5_20.tab.c"
    break;

  case 165:
#line 958 "A5_20.y"
                                                               {  }
#line 3392 "A5_20.tab.c"
    break;

  case 166:
#line 959 "A5_20.y"
                                                                     {  }
#line 3398 "A5_20.tab.c"
    break;

  case 167:
#line 962 "A5_20.y"
                                               {  }
#line 3404 "A5_20.tab.c"
    break;

  case 168:
#line 963 "A5_20.y"
                                                           {  }
#line 3410 "A5_20.tab.c"
    break;

  case 169:
#line 966 "A5_20.y"
                          {  }
#line 3416 "A5_20.tab.c"
    break;

  case 170:
#line 967 "A5_20.y"
                    {  }
#line 3422 "A5_20.tab.c"
    break;

  case 171:
#line 970 "A5_20.y"
                                      {  }
#line 3428 "A5_20.tab.c"
    break;

  case 172:
#line 973 "A5_20.y"
                               {  }
#line 3434 "A5_20.tab.c"
    break;

  case 173:
#line 974 "A5_20.y"
                                   {  }
#line 3440 "A5_20.tab.c"
    break;

  case 174:
#line 977 "A5_20.y"
                                                                           {  }
#line 3446 "A5_20.tab.c"
    break;

  case 175:
#line 978 "A5_20.y"
                     {  }
#line 3452 "A5_20.tab.c"
    break;

  case 176:
#line 983 "A5_20.y"
                               {  }
#line 3458 "A5_20.tab.c"
    break;

  case 177:
#line 984 "A5_20.y"
                           { (yyval.stat)=(yyvsp[0].stat); }
#line 3464 "A5_20.tab.c"
    break;

  case 178:
#line 986 "A5_20.y"
    { 
        (yyval.stat)=new Statement();
        (yyval.stat)->nextlist=(yyvsp[0].expr)->nextlist; 
    }
#line 3473 "A5_20.tab.c"
    break;

  case 179:
#line 990 "A5_20.y"
                            { (yyval.stat)=(yyvsp[0].stat); }
#line 3479 "A5_20.tab.c"
    break;

  case 180:
#line 991 "A5_20.y"
                            { (yyval.stat)=(yyvsp[0].stat); }
#line 3485 "A5_20.tab.c"
    break;

  case 181:
#line 992 "A5_20.y"
                       { (yyval.stat)=(yyvsp[0].stat); }
#line 3491 "A5_20.tab.c"
    break;

  case 182:
#line 995 "A5_20.y"
                                    {  }
#line 3497 "A5_20.tab.c"
    break;

  case 183:
#line 997 "A5_20.y"
    { 
        (yyval.stat)=new Statement();
        (yyval.stat)->nextlist=(yyvsp[0].expr)->nextlist; 
    }
#line 3506 "A5_20.tab.c"
    break;

  case 184:
#line 1001 "A5_20.y"
                            { (yyval.stat)=(yyvsp[0].stat); }
#line 3512 "A5_20.tab.c"
    break;

  case 185:
#line 1002 "A5_20.y"
                            { (yyval.stat)=(yyvsp[0].stat); }
#line 3518 "A5_20.tab.c"
    break;

  case 186:
#line 1003 "A5_20.y"
                       { (yyval.stat)=(yyvsp[0].stat); }
#line 3524 "A5_20.tab.c"
    break;

  case 187:
#line 1007 "A5_20.y"
    {  
        (yyval.stat) = (yyvsp[0].stat);
        Label *s = find_label((yyvsp[-3].symp)->name);
        if(s!=nullptr){
            s->addr = (yyvsp[-1].instr_number);
            backpatch(s->nextlist,s->addr);
        }else{
            s = new Label((yyvsp[-3].symp)->name);
            s->addr = nextinstr();
            s->nextlist = makelist((yyvsp[-1].instr_number));
            label_table.push_back(*s);
        }
    }
#line 3542 "A5_20.tab.c"
    break;

  case 188:
#line 1020 "A5_20.y"
                                                 {  }
#line 3548 "A5_20.tab.c"
    break;

  case 189:
#line 1021 "A5_20.y"
                                {  }
#line 3554 "A5_20.tab.c"
    break;

  case 190:
#line 1025 "A5_20.y"
    { 
        (yyval.stat)=(yyvsp[-1].stat);
        changeTable(ST->parent); 
    }
#line 3563 "A5_20.tab.c"
    break;

  case 191:
#line 1031 "A5_20.y"
                             { (yyval.stat)=new Statement(); }
#line 3569 "A5_20.tab.c"
    break;

  case 192:
#line 1032 "A5_20.y"
                        { (yyval.stat)=(yyvsp[0].stat); }
#line 3575 "A5_20.tab.c"
    break;

  case 193:
#line 1035 "A5_20.y"
                              { (yyval.stat)=(yyvsp[0].stat); }
#line 3581 "A5_20.tab.c"
    break;

  case 194:
#line 1037 "A5_20.y"
    { 
        (yyval.stat)=(yyvsp[0].stat);
        backpatch((yyvsp[-2].stat)->nextlist,(yyvsp[-1].instr_number));
    }
#line 3590 "A5_20.tab.c"
    break;

  case 195:
#line 1043 "A5_20.y"
                          { (yyval.stat)=new Statement(); }
#line 3596 "A5_20.tab.c"
    break;

  case 196:
#line 1044 "A5_20.y"
                  { (yyval.stat)=(yyvsp[0].stat); }
#line 3602 "A5_20.tab.c"
    break;

  case 197:
#line 1047 "A5_20.y"
                                           {(yyval.expr)=(yyvsp[-1].expr);}
#line 3608 "A5_20.tab.c"
    break;

  case 198:
#line 1048 "A5_20.y"
                {(yyval.expr) = new Expression();}
#line 3614 "A5_20.tab.c"
    break;

  case 199:
#line 1052 "A5_20.y"
    {
        backpatch((yyvsp[-4].stat)->nextlist, nextinstr());
        convertIntToBool((yyvsp[-5].expr));
        (yyval.stat) = new Statement();
        backpatch((yyvsp[-5].expr)->truelist, (yyvsp[-2].instr_number));
        list<int> temp = merge((yyvsp[-5].expr)->falselist, (yyvsp[-1].stat)->nextlist);
        (yyval.stat)->nextlist = merge((yyvsp[0].stat)->nextlist, temp);
    }
#line 3627 "A5_20.tab.c"
    break;

  case 200:
#line 1061 "A5_20.y"
    {
        backpatch((yyvsp[-7].stat)->nextlist, nextinstr());        
        convertIntToBool((yyvsp[-8].expr));
        (yyval.stat) = new Statement();
        backpatch((yyvsp[-8].expr)->truelist, (yyvsp[-5].instr_number));
        backpatch((yyvsp[-8].expr)->falselist, (yyvsp[-1].instr_number));
        list<int> temp = merge((yyvsp[-4].stat)->nextlist, (yyvsp[-3].stat)->nextlist);
        (yyval.stat)->nextlist = merge((yyvsp[0].stat)->nextlist,temp);    
    }
#line 3641 "A5_20.tab.c"
    break;

  case 201:
#line 1070 "A5_20.y"
                                                                         {    }
#line 3647 "A5_20.tab.c"
    break;

  case 202:
#line 1074 "A5_20.y"
    {    
        (yyval.stat) = new Statement();
        convertIntToBool((yyvsp[-3].expr));
        backpatch((yyvsp[0].stat)->nextlist, (yyvsp[-4].instr_number));    
        backpatch((yyvsp[-3].expr)->truelist, (yyvsp[-1].instr_number));    
        (yyval.stat)->nextlist = (yyvsp[-3].expr)->falselist;
        
        string str=convertIntToString((yyvsp[-4].instr_number));        
        emit("goto",str);    
        loop_name = "";
        changeTable(ST->parent);
    }
#line 3664 "A5_20.tab.c"
    break;

  case 203:
#line 1088 "A5_20.y"
    {    
        (yyval.stat) = new Statement();
        convertIntToBool((yyvsp[-5].expr));
        backpatch((yyvsp[-1].stat)->nextlist, (yyvsp[-6].instr_number));    
        backpatch((yyvsp[-5].expr)->truelist, (yyvsp[-2].instr_number));    
        (yyval.stat)->nextlist = (yyvsp[-5].expr)->falselist;
        
        string str=convertIntToString((yyvsp[-6].instr_number));        
        emit("goto",str);    
        loop_name = "";
        changeTable(ST->parent);
    }
#line 3681 "A5_20.tab.c"
    break;

  case 204:
#line 1101 "A5_20.y"
    {
        (yyval.stat) = new Statement();
        convertIntToBool((yyvsp[-2].expr));
        backpatch((yyvsp[-2].expr)->truelist, (yyvsp[-7].instr_number));                        
        backpatch((yyvsp[-6].stat)->nextlist, (yyvsp[-5].instr_number));                        
        (yyval.stat)->nextlist = (yyvsp[-2].expr)->falselist;
        loop_name = "";
    }
#line 3694 "A5_20.tab.c"
    break;

  case 205:
#line 1110 "A5_20.y"
    {
        (yyval.stat) = new Statement();
        convertIntToBool((yyvsp[-2].expr));
        backpatch((yyvsp[-2].expr)->truelist, (yyvsp[-8].instr_number));                        
        backpatch((yyvsp[-7].stat)->nextlist, (yyvsp[-5].instr_number));                        
        (yyval.stat)->nextlist = (yyvsp[-2].expr)->falselist;
        loop_name = "";
    }
#line 3707 "A5_20.tab.c"
    break;

  case 206:
#line 1119 "A5_20.y"
    {
        (yyval.stat) = new Statement();        
        convertIntToBool((yyvsp[-6].expr));
        backpatch((yyvsp[-6].expr)->truelist, (yyvsp[-1].instr_number));    
        backpatch((yyvsp[-3].stat)->nextlist, (yyvsp[-7].instr_number));    
        backpatch((yyvsp[0].stat)->nextlist, (yyvsp[-5].instr_number));    
        string str=convertIntToString((yyvsp[-5].instr_number));
        emit("goto", str);                
        (yyval.stat)->nextlist = (yyvsp[-6].expr)->falselist;    
        loop_name = "";
        changeTable(ST->parent);
    }
#line 3724 "A5_20.tab.c"
    break;

  case 207:
#line 1132 "A5_20.y"
    {
        (yyval.stat) = new Statement();        
        convertIntToBool((yyvsp[-6].expr));
        backpatch((yyvsp[-6].expr)->truelist, (yyvsp[-1].instr_number));    
        backpatch((yyvsp[-3].stat)->nextlist, (yyvsp[-7].instr_number));    
        backpatch((yyvsp[0].stat)->nextlist, (yyvsp[-5].instr_number));    
        string str=convertIntToString((yyvsp[-5].instr_number));
        emit("goto", str);                
        (yyval.stat)->nextlist = (yyvsp[-6].expr)->falselist;    
        loop_name = "";
        changeTable(ST->parent);
    }
#line 3741 "A5_20.tab.c"
    break;

  case 208:
#line 1145 "A5_20.y"
    {
        (yyval.stat) = new Statement();        
        convertIntToBool((yyvsp[-8].expr));
        backpatch((yyvsp[-8].expr)->truelist, (yyvsp[-3].instr_number));    
        backpatch((yyvsp[-5].stat)->nextlist, (yyvsp[-9].instr_number));    
        backpatch((yyvsp[-1].stat)->nextlist, (yyvsp[-7].instr_number));    
        string str=convertIntToString((yyvsp[-7].instr_number));
        emit("goto", str);                
        (yyval.stat)->nextlist = (yyvsp[-8].expr)->falselist;    
        loop_name = "";
        changeTable(ST->parent);
    }
#line 3758 "A5_20.tab.c"
    break;

  case 209:
#line 1158 "A5_20.y"
    {    
        (yyval.stat) = new Statement();        
        convertIntToBool((yyvsp[-8].expr));
        backpatch((yyvsp[-8].expr)->truelist, (yyvsp[-3].instr_number));    
        backpatch((yyvsp[-5].stat)->nextlist, (yyvsp[-9].instr_number));    
        backpatch((yyvsp[-1].stat)->nextlist, (yyvsp[-7].instr_number));    
        string str=convertIntToString((yyvsp[-7].instr_number));
        emit("goto", str);                
        (yyval.stat)->nextlist = (yyvsp[-8].expr)->falselist;    
        loop_name = "";
        changeTable(ST->parent);
    }
#line 3775 "A5_20.tab.c"
    break;

  case 210:
#line 1172 "A5_20.y"
                                          { 
        (yyval.stat) = new Statement();
        Label *l = find_label((yyvsp[-1].symp)->name);
        if(l){
            emit("goto","");
            list<int>lst = makelist(nextinstr());
            l->nextlist = merge(l->nextlist,lst);
            if(l->addr!=-1)
                backpatch(l->nextlist,l->addr);
        } else {
            l = new Label((yyvsp[-1].symp)->name);
            l->nextlist = makelist(nextinstr());
            emit("goto","");
            label_table.push_back(*l);
        }
    }
#line 3796 "A5_20.tab.c"
    break;

  case 211:
#line 1188 "A5_20.y"
                         { (yyval.stat) = new Statement(); }
#line 3802 "A5_20.tab.c"
    break;

  case 212:
#line 1189 "A5_20.y"
                      { (yyval.stat) = new Statement(); }
#line 3808 "A5_20.tab.c"
    break;

  case 213:
#line 1191 "A5_20.y"
    {
        (yyval.stat) = new Statement();    
        emit("return",(yyvsp[-1].expr)->loc->name);
    }
#line 3817 "A5_20.tab.c"
    break;

  case 214:
#line 1196 "A5_20.y"
    {
        (yyval.stat) = new Statement();    
        emit("return","");                         
    }
#line 3826 "A5_20.tab.c"
    break;

  case 215:
#line 1204 "A5_20.y"
                                       { }
#line 3832 "A5_20.tab.c"
    break;

  case 216:
#line 1205 "A5_20.y"
                                            { }
#line 3838 "A5_20.tab.c"
    break;

  case 217:
#line 1208 "A5_20.y"
                                          {  }
#line 3844 "A5_20.tab.c"
    break;

  case 218:
#line 1209 "A5_20.y"
                    {  }
#line 3850 "A5_20.tab.c"
    break;

  case 219:
#line 1213 "A5_20.y"
    {
        int next_instr=0;         
        ST->parent=globalST;
        table_count = 0;
        label_table.clear();
        changeTable(globalST);
    }
#line 3862 "A5_20.tab.c"
    break;

  case 220:
#line 1222 "A5_20.y"
                                {  }
#line 3868 "A5_20.tab.c"
    break;

  case 221:
#line 1223 "A5_20.y"
                                      {  }
#line 3874 "A5_20.tab.c"
    break;

  case 222:
#line 1226 "A5_20.y"
                             {  }
#line 3880 "A5_20.tab.c"
    break;

  case 223:
#line 1227 "A5_20.y"
                         {  }
#line 3886 "A5_20.tab.c"
    break;


#line 3890 "A5_20.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
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
                  yystos[+*yyssp], yyvsp);
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
  return yyresult;
}
#line 1230 "A5_20.y"


void yyerror(string s) {
    cout<<s<<endl;
}
