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
#line 9 "A6_20.y"

	#include "A6_20_translator.h"
	void yyerror(const char*);
	extern "C" int yylex(void);
	using namespace std;

#line 77 "y.tab.c"

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
    BREAK = 258,
    CASE = 259,
    CHAR = 260,
    CONST = 261,
    CONTINUE = 262,
    DEFAULT = 263,
    DO = 264,
    DOUBLE = 265,
    ELSE = 266,
    EXTERN = 267,
    FLOAT = 268,
    FOR = 269,
    GOTO = 270,
    IF = 271,
    INLINE = 272,
    INT = 273,
    LONG = 274,
    RESTRICT = 275,
    RETURN = 276,
    SHORT = 277,
    SIZEOF = 278,
    STATIC = 279,
    STRUCT = 280,
    SWITCH = 281,
    TYPEDEF = 282,
    UNION = 283,
    VOID = 284,
    VOLATILE = 285,
    WHILE = 286,
    ARROW = 287,
    DECREMENT = 288,
    INCREMENT = 289,
    RIGHT_SHIFT = 290,
    LEFT_SHIFT = 291,
    GREATER_THAN_EQUAL = 292,
    LESS_THAN_EQUAL = 293,
    NOT_EQUAL = 294,
    EQUALITY = 295,
    OR = 296,
    AND = 297,
    ELLIPSIS = 298,
    PLUS_EQUAL = 299,
    MINUS_EQUAL = 300,
    MULTIPLY_EQUAL = 301,
    MOD_EQUAL = 302,
    DIVIDE_EQUAL = 303,
    AND_EQUAL = 304,
    OR_EQUAL = 305,
    XOR_EQUAL = 306,
    RIGHT_SHIFT_EQUAL = 307,
    LEFT_SHIFT_EQUAL = 308,
    WHITESPACE = 309,
    COMMENT = 310,
    INTEGER_CONSTANT = 311,
    FLOATING_CONSTANT = 312,
    CHAR_CONST = 313,
    STRING_LITERAL = 314,
    IDENTIFIER = 315,
    UNARY = 316,
    IF_CONFLICT = 317
  };
#endif
/* Tokens.  */
#define BREAK 258
#define CASE 259
#define CHAR 260
#define CONST 261
#define CONTINUE 262
#define DEFAULT 263
#define DO 264
#define DOUBLE 265
#define ELSE 266
#define EXTERN 267
#define FLOAT 268
#define FOR 269
#define GOTO 270
#define IF 271
#define INLINE 272
#define INT 273
#define LONG 274
#define RESTRICT 275
#define RETURN 276
#define SHORT 277
#define SIZEOF 278
#define STATIC 279
#define STRUCT 280
#define SWITCH 281
#define TYPEDEF 282
#define UNION 283
#define VOID 284
#define VOLATILE 285
#define WHILE 286
#define ARROW 287
#define DECREMENT 288
#define INCREMENT 289
#define RIGHT_SHIFT 290
#define LEFT_SHIFT 291
#define GREATER_THAN_EQUAL 292
#define LESS_THAN_EQUAL 293
#define NOT_EQUAL 294
#define EQUALITY 295
#define OR 296
#define AND 297
#define ELLIPSIS 298
#define PLUS_EQUAL 299
#define MINUS_EQUAL 300
#define MULTIPLY_EQUAL 301
#define MOD_EQUAL 302
#define DIVIDE_EQUAL 303
#define AND_EQUAL 304
#define OR_EQUAL 305
#define XOR_EQUAL 306
#define RIGHT_SHIFT_EQUAL 307
#define LEFT_SHIFT_EQUAL 308
#define WHITESPACE 309
#define COMMENT 310
#define INTEGER_CONSTANT 311
#define FLOATING_CONSTANT 312
#define CHAR_CONST 313
#define STRING_LITERAL 314
#define IDENTIFIER 315
#define UNARY 316
#define IF_CONFLICT 317

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 17 "A6_20.y"

	int _int_value;   //to hold the value of integer constant
	char _char_value; //to hold the value of character constant
	float _float_value; //to hold the value of floating constant
	string* _string_literal; // to hold the value of string literal
	declarator _declarator;   //to define the declarators
	identifier _identifier;    // to define the type for Identifier
	argList _paramList; //to define the argumnets list
	int _instruction;  // to defin the type used by M->(epsilon)
	expression _expression;   // to define the structure of expression
	list *_nextlist;  //to define the _nextlist type for N->(epsilon)

#line 263 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);





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
#define YYFINAL  35
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   926

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  72
/* YYNRULES -- Number of rules.  */
#define YYNRULES  193
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  339

#define YYUNDEFTOK  2
#define YYMAXUTOK   317


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
       2,     2,     2,    78,     2,     2,     2,    65,    76,     2,
      68,    69,    63,    61,    75,    62,    72,    64,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    84,    86,
      79,    85,    80,    83,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    70,     2,    71,    81,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    73,    82,    74,    77,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    66,    67
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   104,   104,   109,   115,   151,   160,   169,   180,   189,
     193,   196,   213,   271,   272,   275,   299,   323,   326,   330,
     338,   343,   346,   351,   354,   377,   402,   454,   455,   457,
     460,   463,   466,   469,   472,   476,   501,   505,   508,   515,
     522,   531,   534,   542,   551,   554,   560,   568,   571,   579,
     587,   597,   608,   611,   621,   632,   635,   643,   646,   652,
     655,   662,   665,   677,   680,   693,   696,   714,   715,   716,
     717,   718,   719,   720,   721,   722,   723,   724,   726,   729,
     755,   759,   762,   768,   777,   784,   788,   789,   790,   791,
     793,   793,   796,   801,   803,   811,   846,   847,   849,   852,
     855,   856,   859,   860,   861,   865,   868,   870,   871,   874,
     875,   876,   878,   880,   930,   933,   937,   949,   952,   990,
     991,   992,   993,  1102,  1166,  1167,  1169,  1172,  1177,  1177,
    1180,  1183,  1187,  1188,  1190,  1193,  1195,  1199,  1204,  1207,
    1209,  1210,  1212,  1214,  1217,  1218,  1220,  1221,  1223,  1223,
    1226,  1228,  1229,  1231,  1232,  1235,  1236,  1239,  1242,  1245,
    1248,  1253,  1254,  1255,  1257,  1261,  1264,  1269,  1272,  1277,
    1280,  1284,  1288,  1291,  1296,  1310,  1320,  1322,  1333,  1342,
    1354,  1356,  1357,  1358,  1359,  1376,  1377,  1379,  1380,  1414,
    1441,  1441,  1444,  1445
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BREAK", "CASE", "CHAR", "CONST",
  "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE", "EXTERN", "FLOAT", "FOR",
  "GOTO", "IF", "INLINE", "INT", "LONG", "RESTRICT", "RETURN", "SHORT",
  "SIZEOF", "STATIC", "STRUCT", "SWITCH", "TYPEDEF", "UNION", "VOID",
  "VOLATILE", "WHILE", "ARROW", "DECREMENT", "INCREMENT", "RIGHT_SHIFT",
  "LEFT_SHIFT", "GREATER_THAN_EQUAL", "LESS_THAN_EQUAL", "NOT_EQUAL",
  "EQUALITY", "OR", "AND", "ELLIPSIS", "PLUS_EQUAL", "MINUS_EQUAL",
  "MULTIPLY_EQUAL", "MOD_EQUAL", "DIVIDE_EQUAL", "AND_EQUAL", "OR_EQUAL",
  "XOR_EQUAL", "RIGHT_SHIFT_EQUAL", "LEFT_SHIFT_EQUAL", "WHITESPACE",
  "COMMENT", "INTEGER_CONSTANT", "FLOATING_CONSTANT", "CHAR_CONST",
  "STRING_LITERAL", "IDENTIFIER", "'+'", "'-'", "'*'", "'/'", "'%'",
  "UNARY", "IF_CONFLICT", "'('", "')'", "'['", "']'", "'.'", "'{'", "'}'",
  "','", "'&'", "'~'", "'!'", "'<'", "'>'", "'^'", "'|'", "'?'", "':'",
  "'='", "';'", "$accept", "M", "N", "primary_expression",
  "postfix_expression", "argument_expression_list",
  "argument_expression_list_opt", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "AND_expression", "exclusive_OR_expression", "inclusive_OR_expression",
  "logical_AND_expression", "logical_OR_expression",
  "conditional_expression", "assignment_operator", "assignment_expression",
  "constant_expression", "expression", "declaration",
  "init_declarator_list_opt", "declaration_specifiers",
  "declaration_specifiers_opt", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "specifier_qualifier_list",
  "specifier_qualifier_list_opt", "type_qualifier", "function_specifier",
  "declarator", "pointer_opt", "direct_declarator",
  "type_qualifier_list_opt", "assignment_expression_opt",
  "identifier_list_opt", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "initializer", "initializer_list",
  "designation_opt", "designation", "designator_list", "designator",
  "statement", "labeled_statement", "compound_statement",
  "block_item_list_opt", "block_item_list", "block_item",
  "expression_statement", "expression_opt", "selection_statement",
  "iteration_statement", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "declaration_list_opt",
  "declaration_list", YY_NULLPTR
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
     315,    43,    45,    42,    47,    37,   316,   317,    40,    41,
      91,    93,    46,   123,   125,    44,    38,   126,    33,    60,
      62,    94,   124,    63,    58,    61,    59
};
# endif

#define YYPACT_NINF (-192)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-192)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     896,  -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,
    -192,  -192,  -192,  -192,  -192,   -45,   896,   896,   896,   896,
     875,  -192,  -192,   130,   -74,   -58,  -192,   335,   -22,  -192,
    -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,   -16,   130,
    -192,   -16,   602,  -192,   -45,   -20,   896,  -192,   -16,    -5,
    -192,  -192,  -192,   -17,   664,   695,   695,  -192,  -192,  -192,
    -192,  -192,  -192,  -192,  -192,   571,     5,  -192,  -192,  -192,
    -192,    -6,   254,   726,  -192,    94,    55,   119,   -24,   141,
      -4,    16,    21,    18,   -25,  -192,  -192,  -192,   260,  -192,
    -192,    44,   826,     9,   571,  -192,   571,  -192,  -192,  -192,
     -27,   387,  -192,   387,    63,   726,    82,   111,   602,  -192,
     -11,  -192,    86,  -192,  -192,   726,   726,    88,  -192,  -192,
    -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,  -192,   726,
    -192,  -192,   726,   726,   726,   726,   726,   726,   726,   726,
     726,   726,   726,   726,   726,   726,   726,   726,  -192,  -192,
      69,    85,   726,    91,    77,  -192,   114,   128,   133,   726,
     134,   135,   120,   137,  -192,  -192,  -192,  -192,   136,   145,
    -192,  -192,   122,  -192,  -192,  -192,  -192,  -192,   -32,   140,
     153,   148,  -192,   149,   130,   757,   109,   157,   158,  -192,
     726,  -192,  -192,  -192,   633,  -192,   159,  -192,  -192,    51,
    -192,  -192,  -192,  -192,   156,   164,  -192,   -26,  -192,  -192,
    -192,  -192,  -192,    94,    94,    55,    55,   119,   119,   119,
     119,   -24,   -24,   141,    -4,    16,   726,   726,  -192,  -192,
     144,  -192,   441,   441,   510,   151,   726,   152,   726,  -192,
     441,  -192,   365,  -192,  -192,  -192,  -192,   847,   174,   726,
     165,  -192,   168,   726,   162,   162,  -192,     5,  -192,  -192,
    -192,   602,   726,  -192,  -192,    21,    18,   726,   441,  -192,
     209,   726,   155,  -192,   137,  -192,    25,   726,  -192,  -192,
    -192,  -192,  -192,   172,  -192,  -192,   176,   118,  -192,  -192,
     137,  -192,   177,   166,  -192,   181,   441,   137,  -192,  -192,
    -192,    75,   169,  -192,   726,   726,  -192,  -192,   187,  -192,
    -192,   726,   188,  -192,   441,  -192,   726,   137,   441,   173,
     247,   441,  -192,   191,  -192,  -192,   250,  -192,   185,   726,
    -192,  -192,  -192,   441,   216,  -192,  -192,   441,  -192
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    99,   109,   104,    96,   103,   112,   101,   102,   110,
     100,    97,    98,   111,   188,   115,    91,    91,    91,    91,
       0,   185,   187,   125,     0,    84,    92,    94,     0,   114,
      90,    86,    87,    88,    89,     1,   186,   132,   130,   124,
      83,   115,     0,   192,   115,     0,   190,   116,   115,   113,
     131,   133,    93,    94,     0,     0,     0,     5,     6,     7,
       8,     4,    31,    32,    30,     0,   149,    29,    33,    34,
      10,    23,    35,     0,    37,    41,    44,    47,    52,    55,
      57,    59,    61,    63,    65,    78,   143,    95,   166,   189,
     193,     0,   129,   125,     0,    27,     0,    25,    24,    81,
       0,   108,   142,   108,     0,     0,     0,     0,     0,   148,
       0,   151,     0,    16,    15,    22,     0,     0,    71,    72,
      68,    70,    69,    75,    77,    76,    74,    73,    67,     0,
      35,    26,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,     2,
       0,     0,     0,     0,     0,     2,     0,     0,     0,   173,
       0,     0,     4,   172,   169,   170,   155,   156,     0,     2,
     167,   157,     0,   158,   159,   160,   117,   140,   115,     0,
       0,   134,   136,   128,   125,   127,   124,     0,     0,     9,
       0,   107,   105,   106,     0,    80,     0,   154,   144,   149,
     146,   150,   152,    14,    21,     0,    19,     0,    13,    79,
      38,    39,    40,    42,    43,    46,    45,    51,    50,    48,
      49,    54,    53,    56,    58,    60,     0,     0,     2,   183,
       0,   182,   173,   173,   173,     0,     0,     0,     0,     2,
     173,   164,   173,   171,   138,   123,   122,     0,     0,     0,
      30,   126,     0,     0,    28,     0,    82,   149,    36,   153,
     145,     0,     0,    12,    11,    62,    64,     0,   173,   163,
       0,   173,     0,   181,     3,   184,     0,     0,   161,   168,
     135,   137,   141,     0,   121,   118,     0,     0,   147,    20,
       3,   162,     0,     0,     2,     0,   173,     3,   119,   120,
      17,   149,     0,     2,   173,   173,     2,   176,     0,    18,
       2,     0,     0,     3,   173,     2,     0,     3,   173,     0,
     175,   173,    66,     0,   180,     2,     0,   177,     0,   173,
       2,   178,     3,   173,     0,   174,     2,   173,   179
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -192,  -119,  -179,  -192,  -192,  -192,  -192,   -54,  -192,   -63,
      59,    60,    24,    56,   142,   146,   161,    62,    68,  -192,
    -100,  -192,    -7,   160,   -62,   -21,  -192,     4,   150,  -192,
     255,  -192,    11,     3,   194,    34,  -192,    -8,  -192,  -192,
     -82,  -192,  -192,   271,   217,  -192,  -192,    64,  -192,    30,
     -99,    57,  -191,  -192,  -192,   203,   -89,  -192,   270,  -192,
    -192,    83,  -192,  -115,  -192,  -192,  -192,  -192,   304,  -192,
    -192,  -192
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   226,   150,    70,    71,   204,   205,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,   129,    99,   196,   163,    14,    24,    44,    31,    25,
      26,    16,    17,   102,   192,    18,    19,    53,    28,    49,
      38,   252,   179,    29,    39,   180,   181,   182,   183,   104,
      87,   107,   108,   109,   110,   111,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,    20,    21,    22,
      45,    46
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      95,    97,    98,   100,    15,   195,    43,    27,   261,   200,
     131,   185,    40,   139,   140,     2,   149,    41,    23,   130,
      30,    30,    30,    30,    15,    90,   112,   113,   114,     9,
     227,    23,   100,   184,   100,    86,   233,  -139,    47,    13,
      91,   -85,   189,  -139,   237,   264,    48,    23,   190,   190,
     242,   130,   195,    88,   207,   141,   142,    37,    -3,   105,
     148,   106,   115,    92,   116,    93,   117,   164,    42,   210,
     211,   212,   145,    51,   201,   105,   101,   106,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   296,   295,   178,   146,   130,   103,
     190,    86,   249,   147,   191,   101,   191,   101,   206,   267,
     261,   302,   101,   176,   101,     2,   135,   136,   308,   272,
     277,   105,   209,   106,   187,   260,   188,    37,   103,     9,
     103,   258,   194,   253,   319,   103,     2,   103,   323,    13,
     130,   326,   197,   269,   270,   105,   203,   106,   208,   309,
       9,   278,   228,   334,   137,   138,   293,   132,   133,   134,
      13,   232,   288,   217,   218,   219,   220,    32,    33,    34,
     244,   229,   130,   130,   274,   305,   276,   231,   251,   291,
     143,   144,   234,   256,   311,   198,   199,   314,   235,   312,
     313,   316,   300,   301,   213,   214,   321,   215,   216,   221,
     222,   236,   238,   239,   240,   290,   329,   307,   243,   245,
     241,   333,   190,   271,   332,   297,   322,   337,    37,  -165,
      51,   164,   246,   247,   248,   320,   254,   255,   268,   324,
     259,   262,   327,   263,   282,   257,   284,   273,   275,   285,
     292,   294,   283,   298,   335,   303,   286,   299,   338,   317,
     306,   178,   304,   310,    86,   289,   315,   318,    -3,   325,
     328,   330,   130,   151,   152,     1,     2,   153,   154,   155,
       3,   331,     4,     5,   156,   157,   158,     6,     7,     8,
       9,   159,    10,    54,    11,   336,   160,   223,   265,    12,
      13,   161,   224,    55,    56,   266,    52,   193,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   225,    50,
     186,   281,   230,   202,   287,    89,    57,    58,    59,    60,
     162,    62,    63,    64,    36,   279,     0,     0,    65,     0,
       0,     0,     0,    88,     0,     0,    67,    68,    69,   128,
       1,     2,     0,     0,     0,     3,  -173,     4,     5,     0,
       0,     0,     6,     7,     8,     9,     0,    10,     0,    11,
       0,     0,     0,     0,    12,    13,     0,     0,   151,   152,
       1,     2,   153,   154,   155,     3,     0,     4,     5,   156,
     157,   158,     6,     7,     8,     9,   159,    10,    54,    11,
       0,   160,     1,     2,    12,    13,   161,     3,    55,    56,
       5,     0,     0,     0,     0,     7,     8,     9,  -191,    10,
       0,     0,     0,     0,     0,     0,    12,    13,     0,     0,
      42,    57,    58,    59,    60,   162,    62,    63,    64,     0,
       0,     0,     0,    65,     0,     0,     0,     0,    88,     0,
       0,    67,    68,    69,   151,   152,     0,     0,   153,   154,
     155,     0,     0,     0,     0,   156,   157,   158,     0,     0,
       0,     0,   159,     0,    54,     0,     0,   160,     0,     0,
       0,     0,   161,     0,    55,    56,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    57,    58,    59,
      60,   162,    62,    63,    64,     0,     0,     0,     0,    65,
       0,     0,     0,     0,    88,     1,     2,    67,    68,    69,
       3,     0,     4,     5,     0,     0,     0,     6,     7,     8,
       9,     0,    10,    54,    11,     0,     0,     0,     0,    12,
      13,     0,     0,    55,    56,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    57,    58,    59,    60,
      61,    62,    63,    64,     0,     0,     1,     2,    65,     0,
       0,     3,     0,     0,     5,     0,    67,    68,    69,     7,
       8,     9,     0,    10,    54,     0,     0,     0,     0,     0,
      12,    13,     0,     0,    55,    56,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    54,     0,    57,    58,    59,
      60,    61,    62,    63,    64,    55,    56,     0,     0,    65,
       0,     0,     0,     0,     0,     0,     0,    67,    68,    69,
       0,     0,     0,     0,     0,     0,    54,     0,    57,    58,
      59,    60,    61,    62,    63,    64,    55,    56,     0,     0,
      65,     0,     0,     0,     0,    66,     0,     0,    67,    68,
      69,     0,     0,     0,     0,     0,     0,    54,     0,    57,
      58,    59,    60,    61,    62,    63,    64,    55,    56,     0,
       0,    65,     0,     0,     0,     0,   257,     0,     0,    67,
      68,    69,     0,     0,     0,     0,     0,     0,    54,     0,
      57,    58,    59,    60,    61,    62,    63,    64,    55,    56,
       0,     0,    94,     0,     0,     0,     0,     0,     0,     0,
      67,    68,    69,     0,     0,     0,     0,     0,     0,    54,
       0,    57,    58,    59,    60,    61,    62,    63,    64,    55,
      56,     0,     0,    96,     0,     0,     0,     0,     0,     0,
       0,    67,    68,    69,     0,     0,     0,     0,     0,     0,
      54,     0,    57,    58,    59,    60,    61,    62,    63,    64,
      55,    56,     0,     0,    65,     0,     0,     0,     0,     0,
       0,     0,    67,    68,    69,     0,     0,     0,     0,     0,
       0,     0,     0,    57,    58,    59,    60,    61,    62,    63,
     250,     0,     0,     0,     0,    65,     0,     0,     0,     0,
       0,     1,     2,    67,    68,    69,     3,     0,     4,     5,
       0,     0,     0,     6,     7,     8,     9,     0,    10,     0,
      11,     0,     1,     2,     0,    12,    13,     3,     0,     4,
       5,     0,     0,     0,     6,     7,     8,     9,     0,    10,
       0,    11,     0,     0,     0,    35,    12,    13,     0,     0,
       1,     2,     0,     0,     0,     3,   177,     4,     5,     0,
     280,     0,     6,     7,     8,     9,     0,    10,     0,    11,
       0,     1,     2,     0,    12,    13,     3,     0,     4,     5,
       0,     0,     0,     6,     7,     8,     9,     0,    10,     0,
      11,     0,     0,     0,     0,    12,    13
};

static const yytype_int16 yycheck[] =
{
      54,    55,    56,    65,     0,   105,    27,    15,   199,   108,
      73,    93,    86,    37,    38,     6,    41,    75,    63,    73,
      16,    17,    18,    19,    20,    46,    32,    33,    34,    20,
     149,    63,    94,    24,    96,    42,   155,    69,    60,    30,
      48,    86,    69,    75,   159,    71,    68,    63,    75,    75,
     169,   105,   152,    73,   116,    79,    80,    23,    83,    70,
      42,    72,    68,    68,    70,    70,    72,    88,    85,   132,
     133,   134,    76,    39,    85,    70,    65,    72,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,    69,   274,    92,    81,   152,    65,
      75,   108,   184,    82,   101,    94,   103,    96,   115,   228,
     301,   290,   101,    69,   103,     6,    61,    62,   297,   234,
     239,    70,   129,    72,    94,    74,    96,    93,    94,    20,
      96,   194,    69,    24,   313,   101,     6,   103,   317,    30,
     194,   320,    60,   232,   233,    70,    60,    72,    60,    74,
      20,   240,    83,   332,    35,    36,   271,    63,    64,    65,
      30,    84,   261,   139,   140,   141,   142,    17,    18,    19,
     178,    86,   226,   227,   236,   294,   238,    86,   185,   268,
      39,    40,    68,   190,   303,    74,    75,   306,    60,   304,
     305,   310,    74,    75,   135,   136,   315,   137,   138,   143,
     144,    68,    68,    68,    84,   267,   325,   296,    86,    69,
      74,   330,    75,   234,   329,   277,   316,   336,   184,    74,
     186,   242,    69,    75,    75,   314,    69,    69,    84,   318,
      71,    75,   321,    69,    60,    73,    71,    86,    86,    71,
      31,    86,   249,    71,   333,    68,   253,    71,   337,   311,
      69,   247,    86,    84,   261,   262,    69,    69,    11,    86,
      69,    11,   316,     3,     4,     5,     6,     7,     8,     9,
      10,    86,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    69,    26,   145,   226,    29,
      30,    31,   146,    33,    34,   227,    41,   103,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,   147,    38,
      93,   247,   152,   110,   257,    45,    56,    57,    58,    59,
      60,    61,    62,    63,    20,   242,    -1,    -1,    68,    -1,
      -1,    -1,    -1,    73,    -1,    -1,    76,    77,    78,    85,
       5,     6,    -1,    -1,    -1,    10,    86,    12,    13,    -1,
      -1,    -1,    17,    18,    19,    20,    -1,    22,    -1,    24,
      -1,    -1,    -1,    -1,    29,    30,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      -1,    26,     5,     6,    29,    30,    31,    10,    33,    34,
      13,    -1,    -1,    -1,    -1,    18,    19,    20,    73,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    30,    -1,    -1,
      85,    56,    57,    58,    59,    60,    61,    62,    63,    -1,
      -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    73,    -1,
      -1,    76,    77,    78,     3,     4,    -1,    -1,     7,     8,
       9,    -1,    -1,    -1,    -1,    14,    15,    16,    -1,    -1,
      -1,    -1,    21,    -1,    23,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    31,    -1,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    57,    58,
      59,    60,    61,    62,    63,    -1,    -1,    -1,    -1,    68,
      -1,    -1,    -1,    -1,    73,     5,     6,    76,    77,    78,
      10,    -1,    12,    13,    -1,    -1,    -1,    17,    18,    19,
      20,    -1,    22,    23,    24,    -1,    -1,    -1,    -1,    29,
      30,    -1,    -1,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    -1,    -1,     5,     6,    68,    -1,
      -1,    10,    -1,    -1,    13,    -1,    76,    77,    78,    18,
      19,    20,    -1,    22,    23,    -1,    -1,    -1,    -1,    -1,
      29,    30,    -1,    -1,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    -1,    56,    57,    58,
      59,    60,    61,    62,    63,    33,    34,    -1,    -1,    68,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    33,    34,    -1,    -1,
      68,    -1,    -1,    -1,    -1,    73,    -1,    -1,    76,    77,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,    33,    34,    -1,
      -1,    68,    -1,    -1,    -1,    -1,    73,    -1,    -1,    76,
      77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    33,    34,
      -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    33,
      34,    -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      33,    34,    -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    76,    77,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    57,    58,    59,    60,    61,    62,
      63,    -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,
      -1,     5,     6,    76,    77,    78,    10,    -1,    12,    13,
      -1,    -1,    -1,    17,    18,    19,    20,    -1,    22,    -1,
      24,    -1,     5,     6,    -1,    29,    30,    10,    -1,    12,
      13,    -1,    -1,    -1,    17,    18,    19,    20,    -1,    22,
      -1,    24,    -1,    -1,    -1,     0,    29,    30,    -1,    -1,
       5,     6,    -1,    -1,    -1,    10,    60,    12,    13,    -1,
      43,    -1,    17,    18,    19,    20,    -1,    22,    -1,    24,
      -1,     5,     6,    -1,    29,    30,    10,    -1,    12,    13,
      -1,    -1,    -1,    17,    18,    19,    20,    -1,    22,    -1,
      24,    -1,    -1,    -1,    -1,    29,    30
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     6,    10,    12,    13,    17,    18,    19,    20,
      22,    24,    29,    30,   112,   114,   118,   119,   122,   123,
     154,   155,   156,    63,   113,   116,   117,   124,   125,   130,
     114,   115,   115,   115,   115,     0,   155,   122,   127,   131,
      86,    75,    85,   112,   114,   157,   158,    60,    68,   126,
     130,   122,   117,   124,    23,    33,    34,    56,    57,    58,
      59,    60,    61,    62,    63,    68,    73,    76,    77,    78,
      90,    91,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   109,   137,    73,   145,
     112,   124,    68,    70,    68,    94,    68,    94,    94,   109,
     111,   119,   120,   122,   136,    70,    72,   138,   139,   140,
     141,   142,    32,    33,    34,    68,    70,    72,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    85,   108,
      94,    96,    63,    64,    65,    61,    62,    35,    36,    37,
      38,    79,    80,    39,    40,    76,    81,    82,    42,    41,
      89,     3,     4,     7,     8,     9,    14,    15,    16,    21,
      26,    31,    60,   111,   112,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,    69,    60,   114,   129,
     132,   133,   134,   135,    24,   127,   131,   136,   136,    69,
      75,   120,   121,   121,    69,   107,   110,    60,    74,    75,
     137,    85,   142,    60,    92,    93,   109,   111,    60,   109,
      96,    96,    96,    97,    97,    98,    98,    99,    99,    99,
      99,   100,   100,   101,   102,   103,    88,    88,    83,    86,
     110,    86,    84,    88,    68,    60,    68,   150,    68,    68,
      84,    74,    88,    86,   124,    69,    69,    75,    75,   127,
      63,   109,   128,    24,    69,    69,   109,    73,    96,    71,
      74,   139,    75,    69,    71,   104,   105,    88,    84,   143,
     143,   112,   150,    86,   111,    86,   111,    88,   143,   148,
      43,   134,    60,   109,    71,    71,   109,   138,   137,   109,
     111,   143,    31,   150,    86,    89,    69,   111,    71,    71,
      74,    75,    89,    68,    86,    88,    69,   143,    89,    74,
      84,    88,   150,   150,    88,    69,    88,   111,    69,    89,
     143,    88,   107,    89,   143,    86,    89,   143,    69,    88,
      11,    86,   150,    88,    89,   143,    69,    88,   143
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    87,    88,    89,    90,    90,    90,    90,    90,    90,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    92,
      92,    93,    93,    94,    94,    94,    94,    94,    94,    95,
      95,    95,    95,    95,    95,    96,    96,    97,    97,    97,
      97,    98,    98,    98,    99,    99,    99,   100,   100,   100,
     100,   100,   101,   101,   101,   102,   102,   103,   103,   104,
     104,   105,   105,   106,   106,   107,   107,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   109,   109,
     110,   111,   111,   112,   113,   113,   114,   114,   114,   114,
     115,   115,   116,   116,   117,   117,   118,   118,   119,   119,
     119,   119,   119,   119,   119,   120,   120,   121,   121,   122,
     122,   122,   123,   124,   125,   125,   126,   126,   126,   126,
     126,   126,   126,   126,   127,   127,   128,   128,   129,   129,
     130,   130,   131,   131,   132,   132,   133,   133,   134,   134,
     135,   135,   136,   137,   137,   137,   138,   138,   139,   139,
     140,   141,   141,   142,   142,   143,   143,   143,   143,   143,
     143,   144,   144,   144,   145,   146,   146,   147,   147,   148,
     148,   149,   150,   150,   151,   151,   151,   152,   152,   152,
     152,   153,   153,   153,   153,   154,   154,   155,   155,   156,
     157,   157,   158,   158
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     0,     1,     1,     1,     1,     1,     3,
       1,     4,     4,     3,     3,     2,     2,     6,     7,     1,
       3,     1,     0,     1,     2,     2,     2,     2,     4,     1,
       1,     1,     1,     1,     1,     1,     4,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     1,     3,     1,
       3,     1,     4,     1,     4,     1,     9,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     3,     3,     1,     0,     2,     2,     2,     2,
       1,     0,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     1,     0,     1,
       1,     1,     1,     2,     1,     0,     1,     3,     5,     6,
       6,     5,     4,     4,     1,     0,     1,     0,     1,     0,
       2,     3,     1,     2,     1,     3,     1,     3,     2,     1,
       1,     3,     1,     1,     3,     4,     2,     4,     1,     0,
       2,     1,     2,     3,     2,     1,     1,     1,     1,     1,
       1,     3,     4,     3,     3,     1,     0,     1,     3,     1,
       1,     2,     1,     0,    11,     7,     5,     8,    10,    14,
       8,     3,     2,     2,     3,     1,     2,     1,     1,     4,
       1,     0,     1,     2
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
#line 104 "A6_20.y"
{
	(yyval._instruction) = nextInstruction;
}
#line 1831 "y.tab.c"
    break;

  case 3:
#line 109 "A6_20.y"
{
	(yyval._nextlist) = makelist(nextInstruction);
	globalQuadArray.emit(Q_GOTO, -1);
}
#line 1840 "y.tab.c"
    break;

  case 4:
#line 115 "A6_20.y"
                               {
												//Check whether its a function
												symbol * check_func = globalSymbolTable->search(*(yyvsp[0]._identifier).name);
												
												if(check_func == NULL)
												{
													(yyval._expression).symTPtr  =  currentSymbolTable->globalLookup(*(yyvsp[0]._identifier).name);
													if((yyval._expression).symTPtr->type != NULL && (yyval._expression).symTPtr->type->type == tp_arr)
													{
														//If array
														(yyval._expression).arr = (yyval._expression).symTPtr;
														(yyval._expression).symTPtr = currentSymbolTable->gentemp(new symbolType(tp_int));
														(yyval._expression).symTPtr->_init_val._INT_INITVAL = 0;
														(yyval._expression).symTPtr->isInitialized = true;
														globalQuadArray.emit(Q_ASSIGN,0,(yyval._expression).symTPtr->name);
														(yyval._expression).type = (yyval._expression).arr->type;
														(yyval._expression).poss_array = (yyval._expression).arr;
													}
													else
													{
														// If not an array
														(yyval._expression).type = (yyval._expression).symTPtr->type;
														(yyval._expression).arr = NULL;
														(yyval._expression).isPointer = false;
													}
												}
												else
												{
													// It is a function
													(yyval._expression).symTPtr = check_func;
													(yyval._expression).type = check_func->type;
													(yyval._expression).arr = NULL;
													(yyval._expression).isPointer = false;
													
												}
											}
#line 1881 "y.tab.c"
    break;

  case 5:
#line 151 "A6_20.y"
                                                                                 {
													// Declare and initialize the value of the temporary variable with the integer
													(yyval._expression).symTPtr  = currentSymbolTable->gentemp(new symbolType(tp_int));
													(yyval._expression).type = (yyval._expression).symTPtr->type;
													(yyval._expression).symTPtr->_init_val._INT_INITVAL = (yyvsp[0]._int_value);
													(yyval._expression).symTPtr->isInitialized = true;
													(yyval._expression).arr = NULL;
													globalQuadArray.emit(Q_ASSIGN, (yyvsp[0]._int_value), (yyval._expression).symTPtr->name);
												}
#line 1895 "y.tab.c"
    break;

  case 6:
#line 160 "A6_20.y"
                                                                                  {
													// Declare and initialize the value of the temporary variable with the _float_value
													(yyval._expression).symTPtr  = currentSymbolTable->gentemp(new symbolType(tp_double));
													(yyval._expression).type = (yyval._expression).symTPtr->type;
													(yyval._expression).symTPtr->_init_val._DOUBLE_INITVAL = (yyvsp[0]._float_value);
													(yyval._expression).symTPtr->isInitialized = true;
													(yyval._expression).arr = NULL;
													globalQuadArray.emit(Q_ASSIGN, (yyvsp[0]._float_value), (yyval._expression).symTPtr->name);
												  }
#line 1909 "y.tab.c"
    break;

  case 7:
#line 169 "A6_20.y"
                                                                           {
												// Declare and initialize the value of the temporary variable with the character
												(yyval._expression).symTPtr  = currentSymbolTable->gentemp(new symbolType(tp_char));
												(yyval._expression).type = (yyval._expression).symTPtr->type;
												
												(yyval._expression).symTPtr->_init_val._CHAR_INITVAL = (yyvsp[0]._char_value);
												(yyval._expression).symTPtr->isInitialized = true;
												
												(yyval._expression).arr = NULL;
												globalQuadArray.emit(Q_ASSIGN, (yyvsp[0]._char_value), (yyval._expression).symTPtr->name);
											}
#line 1925 "y.tab.c"
    break;

  case 8:
#line 180 "A6_20.y"
                                                                               {

													_string_labels.push_back(*(yyvsp[0]._string_literal));
													(yyval._expression).symTPtr = NULL;
													(yyval._expression).isString = true;
													(yyval._expression).ind_str = _string_labels.size()-1;
													(yyval._expression).arr = NULL;
													(yyval._expression).isPointer = false;
												}
#line 1939 "y.tab.c"
    break;

  case 9:
#line 189 "A6_20.y"
                                                                                   {
														(yyval._expression) = (yyvsp[-1]._expression);
												   }
#line 1947 "y.tab.c"
    break;

  case 10:
#line 193 "A6_20.y"
                                           {
														(yyval._expression) = (yyvsp[0]._expression);
													}
#line 1955 "y.tab.c"
    break;

  case 11:
#line 196 "A6_20.y"
                                                                                                      {
																		//Explanation of Array handling

																		(yyval._expression).symTPtr = currentSymbolTable->gentemp(new symbolType(tp_int));
																		symbol* temporary = currentSymbolTable->gentemp(new symbolType(tp_int));
																		char temp[10];
																		sprintf(temp,"%d",(yyvsp[-3]._expression).type->next->sizeOfType());
																		globalQuadArray.emit(Q_MULT,(yyvsp[-1]._expression).symTPtr->name,temp,temporary->name);
																		globalQuadArray.emit(Q_PLUS,(yyvsp[-3]._expression).symTPtr->name,temporary->name,(yyval._expression).symTPtr->name);
																		// the new size will be calculated and the temporary variable storing the size will be passed on a $$.symTPtr
																		//$$.arr <= base pointer
																		(yyval._expression).arr = (yyvsp[-3]._expression).arr;
																		//$$.type <= type(arr)
																		(yyval._expression).type = (yyvsp[-3]._expression).type->next;
																		(yyval._expression).poss_array = NULL;
																		//$$.arr->type has the full type of the arr which will be used for size calculations
																	 }
#line 1977 "y.tab.c"
    break;

  case 12:
#line 213 "A6_20.y"
                                                                                                                        {
																							//Explanation of Function Handling
																							if(!(yyvsp[-3]._expression).isPointer && !(yyvsp[-3]._expression).isString && ((yyvsp[-3]._expression).type) && ((yyvsp[-3]._expression).type->type==tp_void))
																							{
																								
																							}
																							else
																								(yyval._expression).symTPtr = currentSymbolTable->gentemp(CopyType((yyvsp[-3]._expression).type));
																							//temporary is created
																							char str[10];
																							if((yyvsp[-1]._paramList).args == NULL)
																							{
																								
																								//No function Parameters
																								sprintf(str,"0");
																								
																								if((yyvsp[-3]._expression).type->type!=tp_void)
																									globalQuadArray.emit(Q_CALL,(yyvsp[-3]._expression).symTPtr->name,str,(yyval._expression).symTPtr->name);
																								else
																									globalQuadArray.emitG(Q_CALL,(yyvsp[-3]._expression).symTPtr->name,str);
																							}
																							else
																							{
																								if((*(yyvsp[-1]._paramList).args)[0]->isString)
																								{
																									str[0] = '_';
																									
																									sprintf(str+1,"%d",(*(yyvsp[-1]._paramList).args)[0]->ind_str);
																									globalQuadArray.emit(Q_PARAM,str);
																									
																									globalQuadArray.emit(Q_CALL,(yyvsp[-3]._expression).symTPtr->name,"1",(yyval._expression).symTPtr->name);
																								}
																								else
																								{
																									for(int i=0;i<(yyvsp[-1]._paramList).args->size();i++)
																									{
																										// To print the parameters
																										
																										if((*(yyvsp[-1]._paramList).args)[i]->poss_array != NULL && (yyvsp[-3]._expression).symTPtr->name != "printInt")
																											globalQuadArray.emit(Q_PARAM,(*(yyvsp[-1]._paramList).args)[i]->poss_array->name);
																										else
																											globalQuadArray.emit(Q_PARAM,(*(yyvsp[-1]._paramList).args)[i]->symTPtr->name);

																									}
																									sprintf(str,"%ld",(yyvsp[-1]._paramList).args->size());
																									//printf("function %s-->%d\n",$1.symTPtr->name.c_str(),$1.type->type);
																									if((yyvsp[-3]._expression).type->type!=tp_void) {
																										globalQuadArray.emit(Q_CALL,(yyvsp[-3]._expression).symTPtr->name,str,(yyval._expression).symTPtr->name);
																										
																									}
																									else
																										globalQuadArray.emitG(Q_CALL,(yyvsp[-3]._expression).symTPtr->name,str);
																								}
																							}

																							(yyval._expression).arr = NULL;
																							(yyval._expression).type = (yyval._expression).symTPtr->type;
																						 }
#line 2040 "y.tab.c"
    break;

  case 13:
#line 271 "A6_20.y"
                                                                                                  {/*Struct Logic to be Skipped*/}
#line 2046 "y.tab.c"
    break;

  case 14:
#line 272 "A6_20.y"
                                                                                                    {
																			/*----*/
																	  }
#line 2054 "y.tab.c"
    break;

  case 15:
#line 275 "A6_20.y"
                                                                                             {
																(yyval._expression).symTPtr = currentSymbolTable->gentemp(CopyType((yyvsp[-1]._expression).type));
																if((yyvsp[-1]._expression).arr != NULL)
																{
																	// Post increment of an array element
																	symbol * temp_elem = currentSymbolTable->gentemp(CopyType((yyvsp[-1]._expression).type));
																	globalQuadArray.emit(Q_RINDEX,(yyvsp[-1]._expression).arr->name,(yyvsp[-1]._expression).symTPtr->name,(yyval._expression).symTPtr->name);
																	
																	globalQuadArray.emit(Q_RINDEX,(yyvsp[-1]._expression).arr->name,(yyvsp[-1]._expression).symTPtr->name,temp_elem->name);
																	
																	globalQuadArray.emit(Q_PLUS,temp_elem->name,"1",temp_elem->name);
																	globalQuadArray.emit(Q_LINDEX,(yyvsp[-1]._expression).symTPtr->name,temp_elem->name,(yyvsp[-1]._expression).arr->name);
																	(yyval._expression).arr = NULL;
																}
																else
																{
																	//post increment of an simple element
																	
																	globalQuadArray.emit(Q_ASSIGN,(yyvsp[-1]._expression).symTPtr->name,(yyval._expression).symTPtr->name);
																	
																	globalQuadArray.emit(Q_PLUS,(yyvsp[-1]._expression).symTPtr->name,"1",(yyvsp[-1]._expression).symTPtr->name);
																}
																(yyval._expression).type = (yyval._expression).symTPtr->type;
															 }
#line 2083 "y.tab.c"
    break;

  case 16:
#line 299 "A6_20.y"
                                                                                             {
																(yyval._expression).symTPtr = currentSymbolTable->gentemp(CopyType((yyvsp[-1]._expression).type));
																if((yyvsp[-1]._expression).arr != NULL)
																{
																	// Post decrement of an array element
																	
																	symbol * temp_elem = currentSymbolTable->gentemp(CopyType((yyvsp[-1]._expression).type));
																	globalQuadArray.emit(Q_RINDEX,(yyvsp[-1]._expression).arr->name,(yyvsp[-1]._expression).symTPtr->name,(yyval._expression).symTPtr->name);
																	
																	globalQuadArray.emit(Q_RINDEX,(yyvsp[-1]._expression).arr->name,(yyvsp[-1]._expression).symTPtr->name,temp_elem->name);
																	globalQuadArray.emit(Q_MINUS,temp_elem->name,"1",temp_elem->name);
																	
																	globalQuadArray.emit(Q_LINDEX,(yyvsp[-1]._expression).symTPtr->name,temp_elem->name,(yyvsp[-1]._expression).arr->name);
																	(yyval._expression).arr = NULL;
																}
																else
																{
																	//post decrement of an simple element
																	globalQuadArray.emit(Q_ASSIGN,(yyvsp[-1]._expression).symTPtr->name,(yyval._expression).symTPtr->name);
																	
																	globalQuadArray.emit(Q_MINUS,(yyvsp[-1]._expression).symTPtr->name,"1",(yyvsp[-1]._expression).symTPtr->name);
																}
																(yyval._expression).type = (yyval._expression).symTPtr->type;
															  }
#line 2112 "y.tab.c"
    break;

  case 17:
#line 323 "A6_20.y"
                                                                                                           {
																				/*------*/
																		   }
#line 2120 "y.tab.c"
    break;

  case 18:
#line 326 "A6_20.y"
                                                                                                               {
																					/*------*/
																			   }
#line 2128 "y.tab.c"
    break;

  case 19:
#line 330 "A6_20.y"
                                                      {
														(yyval._paramList).args = new vector<expression*>;
														
														expression * tex = new expression((yyvsp[0]._expression));
														
														(yyval._paramList).args->push_back(tex);
														//printf("name2-->%s\n",tex->symTPtr->name.c_str());
													 }
#line 2141 "y.tab.c"
    break;

  case 20:
#line 338 "A6_20.y"
                                                                                                                   {
																						expression * tex = new expression((yyvsp[0]._expression));
																						(yyval._paramList).args->push_back(tex);
																					}
#line 2150 "y.tab.c"
    break;

  case 21:
#line 343 "A6_20.y"
                                                         {
															(yyval._paramList) = (yyvsp[0]._paramList);
														  }
#line 2158 "y.tab.c"
    break;

  case 22:
#line 346 "A6_20.y"
                                                                            {
												(yyval._paramList).args = NULL;
												
											}
#line 2167 "y.tab.c"
    break;

  case 23:
#line 351 "A6_20.y"
                                                   {
														(yyval._expression) = (yyvsp[0]._expression);
												   }
#line 2175 "y.tab.c"
    break;

  case 24:
#line 354 "A6_20.y"
                                                                                           {
																(yyval._expression).symTPtr = currentSymbolTable->gentemp((yyvsp[0]._expression).type);
																if((yyvsp[0]._expression).arr != NULL)
																{
																	// pre increment of an Array element
																	symbol * temp_elem = currentSymbolTable->gentemp(CopyType((yyvsp[0]._expression).type));
																	globalQuadArray.emit(Q_RINDEX,(yyvsp[0]._expression).arr->name,(yyvsp[0]._expression).symTPtr->name,temp_elem->name);
																	
																	globalQuadArray.emit(Q_PLUS,temp_elem->name,"1",temp_elem->name);
																	globalQuadArray.emit(Q_LINDEX,(yyvsp[0]._expression).symTPtr->name,temp_elem->name,(yyvsp[0]._expression).arr->name);
																	globalQuadArray.emit(Q_RINDEX,(yyvsp[0]._expression).arr->name,(yyvsp[0]._expression).symTPtr->name,(yyval._expression).symTPtr->name);
																	(yyval._expression).arr = NULL;
																}
																else
																{
																	// pre increment
																	globalQuadArray.emit(Q_PLUS,(yyvsp[0]._expression).symTPtr->name,"1",(yyvsp[0]._expression).symTPtr->name);
																	
																	globalQuadArray.emit(Q_ASSIGN,(yyvsp[0]._expression).symTPtr->name,(yyval._expression).symTPtr->name);
																	
																}
																(yyval._expression).type = (yyval._expression).symTPtr->type;
															}
#line 2203 "y.tab.c"
    break;

  case 25:
#line 377 "A6_20.y"
                                                                                           {
																(yyval._expression).symTPtr = currentSymbolTable->gentemp(CopyType((yyvsp[0]._expression).type));
																if((yyvsp[0]._expression).arr != NULL)
																{
																	//pre decrement of  Array Element
																	
																	symbol * temp_elem = currentSymbolTable->gentemp(CopyType((yyvsp[0]._expression).type));
																	globalQuadArray.emit(Q_RINDEX,(yyvsp[0]._expression).arr->name,(yyvsp[0]._expression).symTPtr->name,temp_elem->name);
																	globalQuadArray.emit(Q_MINUS,temp_elem->name,"1",temp_elem->name);
																	
																	globalQuadArray.emit(Q_LINDEX,(yyvsp[0]._expression).symTPtr->name,temp_elem->name,(yyvsp[0]._expression).arr->name);
																	globalQuadArray.emit(Q_RINDEX,(yyvsp[0]._expression).arr->name,(yyvsp[0]._expression).symTPtr->name,(yyval._expression).symTPtr->name);
																	
																	(yyval._expression).arr = NULL;
																}
																else
																{
																	// pre decrement
																	globalQuadArray.emit(Q_MINUS,(yyvsp[0]._expression).symTPtr->name,"1",(yyvsp[0]._expression).symTPtr->name);
																	
																	globalQuadArray.emit(Q_ASSIGN,(yyvsp[0]._expression).symTPtr->name,(yyval._expression).symTPtr->name);
																}
																(yyval._expression).type = (yyval._expression).symTPtr->type;
																
															}
#line 2233 "y.tab.c"
    break;

  case 26:
#line 403 "A6_20.y"
                                                                                                                                {
																	symbolType * temp_type;
																	switch((yyvsp[-1]._char_value))
																	{
																		case '&':
																			//create a temporary type store the type
																			temp_type = new symbolType(tp_ptr,1,(yyvsp[0]._expression).type);
																			
																			(yyval._expression).symTPtr = currentSymbolTable->gentemp(CopyType(temp_type));
																			(yyval._expression).type = (yyval._expression).symTPtr->type;
																			
																			globalQuadArray.emit(Q_ADDR,(yyvsp[0]._expression).symTPtr->name,(yyval._expression).symTPtr->name);
																			(yyval._expression).arr = NULL;
																			break;
																		case '*':
																			(yyval._expression).isPointer = true;
																			(yyval._expression).type = (yyvsp[0]._expression).symTPtr->type->next;
																			(yyval._expression).symTPtr = (yyvsp[0]._expression).symTPtr;
																			
																			(yyval._expression).arr = NULL;
																			break;
																		case '+':
																			(yyval._expression).symTPtr = currentSymbolTable->gentemp(CopyType((yyvsp[0]._expression).type));
																			(yyval._expression).type = (yyval._expression).symTPtr->type;
																			
																			globalQuadArray.emit(Q_ASSIGN,(yyvsp[0]._expression).symTPtr->name,(yyval._expression).symTPtr->name);
																			break;
																		case '-':
																			(yyval._expression).symTPtr = currentSymbolTable->gentemp(CopyType((yyvsp[0]._expression).type));
																			(yyval._expression).type = (yyval._expression).symTPtr->type;
																			
																			globalQuadArray.emit(Q_UNARY_MINUS,(yyvsp[0]._expression).symTPtr->name,(yyval._expression).symTPtr->name);
																			break;
																		case '~':
																			/*Bitwise Not to be implemented Later on*/
																			(yyval._expression).symTPtr = currentSymbolTable->gentemp(CopyType((yyvsp[0]._expression).type));
																			(yyval._expression).type = (yyval._expression).symTPtr->type;
																			
																			globalQuadArray.emit(Q_NOT,(yyvsp[0]._expression).symTPtr->name,(yyval._expression).symTPtr->name);
																			break;
																		case '!':
																			(yyval._expression).symTPtr = currentSymbolTable->gentemp(CopyType((yyvsp[0]._expression).type));
																			(yyval._expression).type = (yyval._expression).symTPtr->type;
																			
																			(yyval._expression).truelist = (yyvsp[0]._expression).falselist;
																			(yyval._expression).falselist = (yyvsp[0]._expression).truelist;
																			break;
																		default:
																			break;
																	}
																}
#line 2289 "y.tab.c"
    break;

  case 27:
#line 454 "A6_20.y"
                                                                                        {}
#line 2295 "y.tab.c"
    break;

  case 28:
#line 455 "A6_20.y"
                                                                                         {}
#line 2301 "y.tab.c"
    break;

  case 29:
#line 457 "A6_20.y"
                                    {
										(yyval._char_value) = '&';
									}
#line 2309 "y.tab.c"
    break;

  case 30:
#line 460 "A6_20.y"
                                                                    {
										(yyval._char_value) = '*';
									}
#line 2317 "y.tab.c"
    break;

  case 31:
#line 463 "A6_20.y"
                                                                    {
										(yyval._char_value) = '+';
									}
#line 2325 "y.tab.c"
    break;

  case 32:
#line 466 "A6_20.y"
                                                                    {
										(yyval._char_value) = '-';
									}
#line 2333 "y.tab.c"
    break;

  case 33:
#line 469 "A6_20.y"
                                                                    {
										(yyval._char_value) = '~';
									}
#line 2341 "y.tab.c"
    break;

  case 34:
#line 472 "A6_20.y"
                                                                    {
										(yyval._char_value) = '!';
									}
#line 2349 "y.tab.c"
    break;

  case 35:
#line 476 "A6_20.y"
                                                 {
													if((yyvsp[0]._expression).arr != NULL && (yyvsp[0]._expression).arr->type != NULL&& (yyvsp[0]._expression).poss_array==NULL)
													{
														//Right Indexing of an array element as unary expression is converted into cast expression
														(yyval._expression).symTPtr = currentSymbolTable->gentemp(new symbolType((yyvsp[0]._expression).type->type));
														
														globalQuadArray.emit(Q_RINDEX,(yyvsp[0]._expression).arr->name,(yyvsp[0]._expression).symTPtr->name,(yyval._expression).symTPtr->name);
														(yyval._expression).arr = NULL;
														
														(yyval._expression).type = (yyval._expression).symTPtr->type;
														//$$.poss_array=$1.arr;
														//printf("name --> %s\n",$$.symTPtr->name.c_str());
													}
													else if((yyvsp[0]._expression).isPointer == true)
													{
														//RDereferencing as its a pointer
														(yyval._expression).symTPtr = currentSymbolTable->gentemp(CopyType((yyvsp[0]._expression).type));
														
														(yyval._expression).isPointer = false;
														
														globalQuadArray.emit(Q_RDEREF,(yyvsp[0]._expression).symTPtr->name,(yyval._expression).symTPtr->name);
													}
													else
														(yyval._expression) = (yyvsp[0]._expression);
												}
#line 2379 "y.tab.c"
    break;

  case 36:
#line 501 "A6_20.y"
                                                                                                 {
																	/*--------*/
																 }
#line 2387 "y.tab.c"
    break;

  case 37:
#line 505 "A6_20.y"
                                                {
													(yyval._expression) = (yyvsp[0]._expression);
												}
#line 2395 "y.tab.c"
    break;

  case 38:
#line 508 "A6_20.y"
                                                                                                              {
																					typecheck(&(yyvsp[-2]._expression),&(yyvsp[0]._expression));
																					(yyval._expression).symTPtr = currentSymbolTable->gentemp((yyvsp[-2]._expression).type);
																					(yyval._expression).type = (yyval._expression).symTPtr->type;
																					
																					globalQuadArray.emit(Q_MULT,(yyvsp[-2]._expression).symTPtr->name,(yyvsp[0]._expression).symTPtr->name,(yyval._expression).symTPtr->name);
																			  }
#line 2407 "y.tab.c"
    break;

  case 39:
#line 515 "A6_20.y"
                                                                                                              {
																					typecheck(&(yyvsp[-2]._expression),&(yyvsp[0]._expression));
																					(yyval._expression).symTPtr = currentSymbolTable->gentemp((yyvsp[-2]._expression).type);
																					(yyval._expression).type = (yyval._expression).symTPtr->type;
																					
																					globalQuadArray.emit(Q_DIVIDE,(yyvsp[-2]._expression).symTPtr->name,(yyvsp[0]._expression).symTPtr->name,(yyval._expression).symTPtr->name);
																			  }
#line 2419 "y.tab.c"
    break;

  case 40:
#line 522 "A6_20.y"
                                                                                                             {
																					typecheck(&(yyvsp[-2]._expression),&(yyvsp[0]._expression));
																					
																					(yyval._expression).symTPtr = currentSymbolTable->gentemp((yyvsp[-2]._expression).type);
																					(yyval._expression).type = (yyval._expression).symTPtr->type;
																					
																					globalQuadArray.emit(Q_MODULO,(yyvsp[-2]._expression).symTPtr->name,(yyvsp[0]._expression).symTPtr->name,(yyval._expression).symTPtr->name);
																			 }
#line 2432 "y.tab.c"
    break;

  case 41:
#line 531 "A6_20.y"
                                                          {
																(yyval._expression) = (yyvsp[0]._expression);
														  }
#line 2440 "y.tab.c"
    break;

  case 42:
#line 534 "A6_20.y"
                                                                                                                  {
																						typecheck(&(yyvsp[-2]._expression),&(yyvsp[0]._expression));
																						
																						(yyval._expression).symTPtr = currentSymbolTable->gentemp((yyvsp[-2]._expression).type);
																						(yyval._expression).type = (yyval._expression).symTPtr->type;
																						
																						globalQuadArray.emit(Q_PLUS,(yyvsp[-2]._expression).symTPtr->name,(yyvsp[0]._expression).symTPtr->name,(yyval._expression).symTPtr->name);
																				  }
#line 2453 "y.tab.c"
    break;

  case 43:
#line 542 "A6_20.y"
                                                                                                                  {
																						typecheck(&(yyvsp[-2]._expression),&(yyvsp[0]._expression));
																						
																						(yyval._expression).symTPtr = currentSymbolTable->gentemp((yyvsp[-2]._expression).type);
																						(yyval._expression).type = (yyval._expression).symTPtr->type;
																						
																						globalQuadArray.emit(Q_MINUS,(yyvsp[-2]._expression).symTPtr->name,(yyvsp[0]._expression).symTPtr->name,(yyval._expression).symTPtr->name);
																				  }
#line 2466 "y.tab.c"
    break;

  case 44:
#line 551 "A6_20.y"
                                                    {
														(yyval._expression) = (yyvsp[0]._expression);
													}
#line 2474 "y.tab.c"
    break;

  case 45:
#line 554 "A6_20.y"
                                                                                                                {
																					(yyval._expression).symTPtr = currentSymbolTable->gentemp((yyvsp[-2]._expression).type);
																					(yyval._expression).type = (yyval._expression).symTPtr->type;
																					
																					globalQuadArray.emit(Q_LEFT_OP,(yyvsp[-2]._expression).symTPtr->name,(yyvsp[0]._expression).symTPtr->name,(yyval._expression).symTPtr->name);
																				}
#line 2485 "y.tab.c"
    break;

  case 46:
#line 560 "A6_20.y"
                                                                                                                {
																					(yyval._expression).symTPtr = currentSymbolTable->gentemp((yyvsp[-2]._expression).type);
																					
																					(yyval._expression).type = (yyval._expression).symTPtr->type;
																					
																					globalQuadArray.emit(Q_RIGHT_OP,(yyvsp[-2]._expression).symTPtr->name,(yyvsp[0]._expression).symTPtr->name,(yyval._expression).symTPtr->name);
																				}
#line 2497 "y.tab.c"
    break;

  case 47:
#line 568 "A6_20.y"
                                                 {
														(yyval._expression) = (yyvsp[0]._expression);
												 }
#line 2505 "y.tab.c"
    break;

  case 48:
#line 571 "A6_20.y"
                                                                                                           {
																				typecheck(&(yyvsp[-2]._expression),&(yyvsp[0]._expression));
																				(yyval._expression).type = new symbolType(tp_bool);
																				(yyval._expression).truelist = makelist(nextInstruction);
																				(yyval._expression).falselist = makelist(nextInstruction+1);
																				globalQuadArray.emit(Q_IF_LESS,(yyvsp[-2]._expression).symTPtr->name,(yyvsp[0]._expression).symTPtr->name,"-1");
																				globalQuadArray.emit(Q_GOTO,"-1");
																		   }
#line 2518 "y.tab.c"
    break;

  case 49:
#line 579 "A6_20.y"
                                                                                                           {
																				typecheck(&(yyvsp[-2]._expression),&(yyvsp[0]._expression));
																				(yyval._expression).type = new symbolType(tp_bool);
																				(yyval._expression).truelist = makelist(nextInstruction);
																				(yyval._expression).falselist = makelist(nextInstruction+1);
																				globalQuadArray.emit(Q_IF_GREATER,(yyvsp[-2]._expression).symTPtr->name,(yyvsp[0]._expression).symTPtr->name,"-1");
																				globalQuadArray.emit(Q_GOTO,"-1");
																		   }
#line 2531 "y.tab.c"
    break;

  case 50:
#line 587 "A6_20.y"
                                                                                                                       {
																						typecheck(&(yyvsp[-2]._expression),&(yyvsp[0]._expression));
																						(yyval._expression).type = new symbolType(tp_bool);
																						
																						(yyval._expression).truelist = makelist(nextInstruction);
																						
																						(yyval._expression).falselist = makelist(nextInstruction+1);
																						globalQuadArray.emit(Q_IF_LESS_OR_EQUAL,(yyvsp[-2]._expression).symTPtr->name,(yyvsp[0]._expression).symTPtr->name,"-1");
																						globalQuadArray.emit(Q_GOTO,"-1");
																					}
#line 2546 "y.tab.c"
    break;

  case 51:
#line 597 "A6_20.y"
                                                                                                                          {
																							typecheck(&(yyvsp[-2]._expression),&(yyvsp[0]._expression));
													
																							(yyval._expression).type = new symbolType(tp_bool);
																							(yyval._expression).truelist = makelist(nextInstruction);
																							
																							(yyval._expression).falselist = makelist(nextInstruction+1);
																							globalQuadArray.emit(Q_IF_GREATER_OR_EQUAL,(yyvsp[-2]._expression).symTPtr->name,(yyvsp[0]._expression).symTPtr->name,"-1");
																							globalQuadArray.emit(Q_GOTO,"-1");
																					  }
#line 2561 "y.tab.c"
    break;

  case 52:
#line 608 "A6_20.y"
                                                      {
															(yyval._expression) = (yyvsp[0]._expression);
													  }
#line 2569 "y.tab.c"
    break;

  case 53:
#line 611 "A6_20.y"
                                                                                                                   {
																						typecheck(&(yyvsp[-2]._expression),&(yyvsp[0]._expression));
																						(yyval._expression).type = new symbolType(tp_bool);
																						(yyval._expression).truelist = makelist(nextInstruction);
																						
																						(yyval._expression).falselist = makelist(nextInstruction+1);
																						globalQuadArray.emit(Q_IF_EQUAL,(yyvsp[-2]._expression).symTPtr->name,(yyvsp[0]._expression).symTPtr->name,"-1");
																						globalQuadArray.emit(Q_GOTO,"-1");
																						
																				 }
#line 2584 "y.tab.c"
    break;

  case 54:
#line 621 "A6_20.y"
                                                                                                                    {
																							typecheck(&(yyvsp[-2]._expression),&(yyvsp[0]._expression));
																							(yyval._expression).type = new symbolType(tp_bool);
																							
																							(yyval._expression).truelist = makelist(nextInstruction);
																							(yyval._expression).falselist = makelist(nextInstruction+1);
													
																							globalQuadArray.emit(Q_IF_NOT_EQUAL,(yyvsp[-2]._expression).symTPtr->name,(yyvsp[0]._expression).symTPtr->name,"-1");
																							globalQuadArray.emit(Q_GOTO,"-1");
																					 }
#line 2599 "y.tab.c"
    break;

  case 55:
#line 632 "A6_20.y"
                                                    {
														(yyval._expression) = (yyvsp[0]._expression);
													}
#line 2607 "y.tab.c"
    break;

  case 56:
#line 635 "A6_20.y"
                                                                                                       {
																			(yyval._expression).symTPtr = currentSymbolTable->gentemp((yyvsp[-2]._expression).type);
																			(yyval._expression).type = (yyval._expression).symTPtr->type;
																		
																			globalQuadArray.emit(Q_LOG_AND,(yyvsp[-2]._expression).symTPtr->name,(yyvsp[0]._expression).symTPtr->name,(yyval._expression).symTPtr->name);
																			
																		}
#line 2619 "y.tab.c"
    break;

  case 57:
#line 643 "A6_20.y"
                                               {
													(yyval._expression) = (yyvsp[0]._expression);
											   }
#line 2627 "y.tab.c"
    break;

  case 58:
#line 646 "A6_20.y"
                                                                                                           {
																				(yyval._expression).symTPtr = currentSymbolTable->gentemp((yyvsp[-2]._expression).type);
																				(yyval._expression).type = (yyval._expression).symTPtr->type;
																				globalQuadArray.emit(Q_XOR,(yyvsp[-2]._expression).symTPtr->name,(yyvsp[0]._expression).symTPtr->name,(yyval._expression).symTPtr->name);
																		   }
#line 2637 "y.tab.c"
    break;

  case 59:
#line 652 "A6_20.y"
                                                        {
															(yyval._expression) = (yyvsp[0]._expression);
														}
#line 2645 "y.tab.c"
    break;

  case 60:
#line 655 "A6_20.y"
                                                                                                                    {
																						(yyval._expression).symTPtr = currentSymbolTable->gentemp((yyvsp[-2]._expression).type);
																						(yyval._expression).type = (yyval._expression).symTPtr->type;
																						
																						globalQuadArray.emit(Q_LOG_OR,(yyvsp[-2]._expression).symTPtr->name,(yyvsp[0]._expression).symTPtr->name,(yyval._expression).symTPtr->name);
																					}
#line 2656 "y.tab.c"
    break;

  case 61:
#line 662 "A6_20.y"
                                                        {
															(yyval._expression) = (yyvsp[0]._expression);
														}
#line 2664 "y.tab.c"
    break;

  case 62:
#line 665 "A6_20.y"
                                                                                                                     {
																						if((yyvsp[-3]._expression).type->type != tp_bool)
																							CONV2BOOL(&(yyvsp[-3]._expression));
																						if((yyvsp[0]._expression).type->type != tp_bool)
																							CONV2BOOL(&(yyvsp[0]._expression));
																						backpatch((yyvsp[-3]._expression).truelist,(yyvsp[-1]._instruction));
																						(yyval._expression).type = new symbolType(tp_bool);
																						
																						(yyval._expression).falselist = merge((yyvsp[-3]._expression).falselist,(yyvsp[0]._expression).falselist);
																						(yyval._expression).truelist = (yyvsp[0]._expression).truelist;
																					}
#line 2680 "y.tab.c"
    break;

  case 63:
#line 677 "A6_20.y"
                                                       {
															(yyval._expression) = (yyvsp[0]._expression);
													   }
#line 2688 "y.tab.c"
    break;

  case 64:
#line 680 "A6_20.y"
                                                                                                                    {
																						if((yyvsp[-3]._expression).type->type != tp_bool)
																							CONV2BOOL(&(yyvsp[-3]._expression));
																						if((yyvsp[0]._expression).type->type != tp_bool)
																							CONV2BOOL(&(yyvsp[0]._expression));
																						backpatch((yyvsp[-3]._expression).falselist,(yyvsp[-1]._instruction));
																						(yyval._expression).type = new symbolType(tp_bool);
																						
																						(yyval._expression).truelist = merge((yyvsp[-3]._expression).truelist,(yyvsp[0]._expression).truelist);
																						(yyval._expression).falselist = (yyvsp[0]._expression).falselist;
																					}
#line 2704 "y.tab.c"
    break;

  case 65:
#line 693 "A6_20.y"
                                                      {
															(yyval._expression) = (yyvsp[0]._expression);
													  }
#line 2712 "y.tab.c"
    break;

  case 66:
#line 696 "A6_20.y"
                                                                                                                                        {
																											(yyval._expression).symTPtr = currentSymbolTable->gentemp((yyvsp[-4]._expression).type);
																											(yyval._expression).type = (yyval._expression).symTPtr->type;
																											globalQuadArray.emit(Q_ASSIGN,(yyvsp[0]._expression).symTPtr->name,(yyval._expression).symTPtr->name);
																											list* TEMP_LIST = makelist(nextInstruction);
																											globalQuadArray.emit(Q_GOTO,"-1");
																											
																											backpatch((yyvsp[-3]._nextlist),nextInstruction);
																											globalQuadArray.emit(Q_ASSIGN,(yyvsp[-4]._expression).symTPtr->name,(yyval._expression).symTPtr->name);
																											TEMP_LIST = merge(TEMP_LIST,makelist(nextInstruction));
																											globalQuadArray.emit(Q_GOTO,"-1");
																											backpatch((yyvsp[-7]._nextlist),nextInstruction);
																											CONV2BOOL(&(yyvsp[-8]._expression));
																											backpatch((yyvsp[-8]._expression).truelist,(yyvsp[-5]._instruction));
																											backpatch((yyvsp[-8]._expression).falselist,(yyvsp[-1]._instruction));
																											backpatch(TEMP_LIST,nextInstruction);
																										}
#line 2734 "y.tab.c"
    break;

  case 78:
#line 726 "A6_20.y"
                                                       {
															(yyval._expression) = (yyvsp[0]._expression);
														}
#line 2742 "y.tab.c"
    break;

  case 79:
#line 729 "A6_20.y"
                                                                                                                           {
																								//LDereferencing
																								//printf("hoboo --> %s\n",$1.symTPtr->name.c_str());
																								if((yyvsp[-2]._expression).isPointer)
																								{
																									//printf("Hookah bar\n");
																									
																									globalQuadArray.emit(Q_LDEREF,(yyvsp[0]._expression).symTPtr->name,(yyvsp[-2]._expression).symTPtr->name);
																								}
																								typecheck(&(yyvsp[-2]._expression),&(yyvsp[0]._expression),true);
																								if((yyvsp[-2]._expression).arr != NULL)
																								{
																									
																									globalQuadArray.emit(Q_LINDEX,(yyvsp[-2]._expression).symTPtr->name,(yyvsp[0]._expression).symTPtr->name,(yyvsp[-2]._expression).arr->name);
																								}
																								else if(!(yyvsp[-2]._expression).isPointer)
																									globalQuadArray.emit(Q_ASSIGN,(yyvsp[0]._expression).symTPtr->name,(yyvsp[-2]._expression).symTPtr->name);
																								(yyval._expression).symTPtr = currentSymbolTable->gentemp((yyvsp[0]._expression).type);
																								(yyval._expression).type = (yyval._expression).symTPtr->type;
																								//printf("assgi hobobob %s == %s\n",)
																								globalQuadArray.emit(Q_ASSIGN,(yyvsp[0]._expression).symTPtr->name,(yyval._expression).symTPtr->name);
																								
																								//printf("assign %s = %s\n",$3.symTPtr->name.c_str(),$$.symTPtr->name.c_str());
																							}
#line 2771 "y.tab.c"
    break;

  case 80:
#line 755 "A6_20.y"
                                                       {
															(yyval._expression) = (yyvsp[0]._expression);
													   }
#line 2779 "y.tab.c"
    break;

  case 81:
#line 759 "A6_20.y"
                                                      {
															(yyval._expression) = (yyvsp[0]._expression);
													  }
#line 2787 "y.tab.c"
    break;

  case 82:
#line 762 "A6_20.y"
                                                                                                     {
																		(yyval._expression) = (yyvsp[0]._expression);
																	 }
#line 2795 "y.tab.c"
    break;

  case 83:
#line 768 "A6_20.y"
                                                                                    {
																						if((yyvsp[-1]._expression).symTPtr != NULL && (yyvsp[-1]._expression).type != NULL && (yyvsp[-1]._expression).type->type == tp_func)
																						{
																							/*Delete currentSymbolTable*/
																							
																							currentSymbolTable = new symbolTable();
																						}
																					}
#line 2808 "y.tab.c"
    break;

  case 84:
#line 777 "A6_20.y"
                                                     {
														if((yyvsp[0]._expression).type != NULL && (yyvsp[0]._expression).type->type == tp_func)
														{
															(yyval._expression) = (yyvsp[0]._expression);
															
														}
													 }
#line 2820 "y.tab.c"
    break;

  case 85:
#line 784 "A6_20.y"
                                                                            {
												(yyval._expression).symTPtr = NULL;
											}
#line 2828 "y.tab.c"
    break;

  case 86:
#line 788 "A6_20.y"
                                                                                   {}
#line 2834 "y.tab.c"
    break;

  case 88:
#line 790 "A6_20.y"
                                                                                                          {}
#line 2840 "y.tab.c"
    break;

  case 89:
#line 791 "A6_20.y"
                                                                                                              {}
#line 2846 "y.tab.c"
    break;

  case 92:
#line 796 "A6_20.y"
                                                {
													/*Expecting only function declaration*/
													(yyval._expression) = (yyvsp[0]._expression);
													
												}
#line 2856 "y.tab.c"
    break;

  case 94:
#line 803 "A6_20.y"
                                           {
												/*Nothing to be done here*/
												if((yyvsp[0]._expression).type != NULL && (yyvsp[0]._expression).type->type == tp_func)
												{
													(yyval._expression) = (yyvsp[0]._expression);
													
												}
											}
#line 2869 "y.tab.c"
    break;

  case 95:
#line 811 "A6_20.y"
                                                                                           {
																//initializations of declarators
																if((yyvsp[0]._expression).type!=NULL)
																{
																if((yyvsp[0]._expression).type->type==tp_int)
																{
																	(yyvsp[-2]._expression).symTPtr->_init_val._INT_INITVAL= (yyvsp[0]._expression).symTPtr->_init_val._INT_INITVAL;
																	(yyvsp[-2]._expression).symTPtr->isInitialized = true;
																	
																	symbol *temp_ver=currentSymbolTable->search((yyvsp[-2]._expression).symTPtr->name);
																	if(temp_ver!=NULL)
																	{
																	//printf("po %s = %s\n",$1.symTPtr->name.c_str(),$3.symTPtr->name.c_str());
																	temp_ver->_init_val._INT_INITVAL= (yyvsp[0]._expression).symTPtr->_init_val._INT_INITVAL;
																	
																	temp_ver->isInitialized = true;
																	}
																}
																else if((yyvsp[0]._expression).type->type==tp_char)
																{
																	(yyvsp[-2]._expression).symTPtr->_init_val._CHAR_INITVAL= (yyvsp[0]._expression).symTPtr->_init_val._CHAR_INITVAL;
																	(yyvsp[-2]._expression).symTPtr->isInitialized = true;
																	
																	symbol *temp_ver=currentSymbolTable->search((yyvsp[-2]._expression).symTPtr->name);
																	if(temp_ver!=NULL)
																	{temp_ver->_init_val._CHAR_INITVAL= (yyvsp[0]._expression).symTPtr->_init_val._CHAR_INITVAL;
																		temp_ver->isInitialized = true;
																	}
																}
																}
																//printf("%s = %s\n",$1.symTPtr->name.c_str(),$3.symTPtr->name.c_str());
																//typecheck(&$1,&$3,true);
																globalQuadArray.emit(Q_ASSIGN,(yyvsp[0]._expression).symTPtr->name,(yyvsp[-2]._expression).symTPtr->name);
															}
#line 2908 "y.tab.c"
    break;

  case 96:
#line 846 "A6_20.y"
                                       {}
#line 2914 "y.tab.c"
    break;

  case 97:
#line 847 "A6_20.y"
                                                                       {}
#line 2920 "y.tab.c"
    break;

  case 98:
#line 849 "A6_20.y"
                                     {
										globalType = new symbolType(tp_void);
									}
#line 2928 "y.tab.c"
    break;

  case 99:
#line 852 "A6_20.y"
                                                                     {
										globalType = new symbolType(tp_char);
									}
#line 2936 "y.tab.c"
    break;

  case 100:
#line 855 "A6_20.y"
                                                                      {}
#line 2942 "y.tab.c"
    break;

  case 101:
#line 856 "A6_20.y"
                                                                    {
										globalType = new symbolType(tp_int);
									}
#line 2950 "y.tab.c"
    break;

  case 102:
#line 859 "A6_20.y"
                                                                     {}
#line 2956 "y.tab.c"
    break;

  case 103:
#line 860 "A6_20.y"
                                                                      {}
#line 2962 "y.tab.c"
    break;

  case 104:
#line 861 "A6_20.y"
                                                                       {
											globalType = new symbolType(tp_double);
										}
#line 2970 "y.tab.c"
    break;

  case 105:
#line 865 "A6_20.y"
                                                                            {
																				/*----------*/
																			}
#line 2978 "y.tab.c"
    break;

  case 106:
#line 868 "A6_20.y"
                                                                                                            {}
#line 2984 "y.tab.c"
    break;

  case 107:
#line 870 "A6_20.y"
                                                         {}
#line 2990 "y.tab.c"
    break;

  case 108:
#line 871 "A6_20.y"
                                                                            {}
#line 2996 "y.tab.c"
    break;

  case 109:
#line 874 "A6_20.y"
                                      {}
#line 3002 "y.tab.c"
    break;

  case 110:
#line 875 "A6_20.y"
                                                                         {}
#line 3008 "y.tab.c"
    break;

  case 111:
#line 876 "A6_20.y"
                                                                         {}
#line 3014 "y.tab.c"
    break;

  case 112:
#line 878 "A6_20.y"
                                       {}
#line 3020 "y.tab.c"
    break;

  case 113:
#line 880 "A6_20.y"
                                                              {
																if((yyvsp[-1]._declarator).type == NULL)
																{
																	/*--------------*/
																	
																}
																else
																{
																	if((yyvsp[0]._expression).symTPtr->type->type != tp_ptr)
																	{
																		symbolType * test = (yyvsp[-1]._declarator).type;

																		int k = 2;
																		for(int i=0;i<10;++i) {
																			int l = 0;
																		}
																		if(k) {
																			for(int i=0;i<10;++i) {
																				int k;
																			}
																		}
																		else{
																			int o;
																		}
																		while(test->next != NULL)
																		{
																			test = test->next;
																		}
																		test->next = (yyvsp[0]._expression).symTPtr->type;
																		(yyvsp[0]._expression).symTPtr->type = (yyvsp[-1]._declarator).type;
																	}
																}

																if((yyvsp[0]._expression).type != NULL && (yyvsp[0]._expression).type->type == tp_func)
																{
																	(yyval._expression) = (yyvsp[0]._expression);
																}
																else
																{
																	//its not a function
																	(yyvsp[0]._expression).symTPtr->width = (yyvsp[0]._expression).symTPtr->type->sizeOfType();
																	
																	(yyvsp[0]._expression).symTPtr->offset = currentSymbolTable->offset;
																	currentSymbolTable->offset += (yyvsp[0]._expression).symTPtr->width;
																	
																	(yyval._expression) = (yyvsp[0]._expression);
																	(yyval._expression).type = (yyval._expression).symTPtr->type;
																}
															}
#line 3074 "y.tab.c"
    break;

  case 114:
#line 930 "A6_20.y"
                                        {
											(yyval._declarator) = (yyvsp[0]._declarator);
										}
#line 3082 "y.tab.c"
    break;

  case 115:
#line 933 "A6_20.y"
                                                                            {
												(yyval._declarator).type = NULL;
											}
#line 3090 "y.tab.c"
    break;

  case 116:
#line 937 "A6_20.y"
                                           {
													(yyval._expression).symTPtr = currentSymbolTable->lookup(*(yyvsp[0]._identifier).name);
												
													if((yyval._expression).symTPtr->var_type == "")
													{
														//Type initialization
														(yyval._expression).symTPtr->var_type = "local";
														(yyval._expression).symTPtr->type = new symbolType(globalType->type);
														//$$.symTPtr->type->print();
													}
													(yyval._expression).type = (yyval._expression).symTPtr->type;
											}
#line 3107 "y.tab.c"
    break;

  case 117:
#line 949 "A6_20.y"
                                                                                   {
														(yyval._expression) = (yyvsp[-1]._expression);
													}
#line 3115 "y.tab.c"
    break;

  case 118:
#line 952 "A6_20.y"
                                                                                                                                            {
																												//printf("Hello\n");
																												if((yyvsp[-4]._expression).type->type == tp_arr)
																												{
																													/*if type is already an arr*/
																													symbolType * typ1 = (yyvsp[-4]._expression).type,*typ = (yyvsp[-4]._expression).type;
																													typ1 = typ1->next;
																													
																													while(typ1->next != NULL)
																													{
																														typ1 = typ1->next;
																														typ = typ->next;
																													}
																													typ->next = new symbolType(tp_arr,(yyvsp[-1]._expression).symTPtr->_init_val._INT_INITVAL,typ1);
																												}
																												else
																												{
																													for(int l=0;l<10;++l) {
																														int pp = 0;
																													}
																													if(1) {
																														for(int m=0;m<10;++m) {
																															int k;
																														}
																													}
																													else{
																														int n;
																													}
																													//add the type of array to list
																													
																													if((yyvsp[-1]._expression).symTPtr == NULL)
																														(yyvsp[-4]._expression).type = new symbolType(tp_arr,-1,(yyvsp[-4]._expression).type);
																													else
																														(yyvsp[-4]._expression).type = new symbolType(tp_arr,(yyvsp[-1]._expression).symTPtr->_init_val._INT_INITVAL,(yyvsp[-4]._expression).type);
																												}
																												(yyval._expression) = (yyvsp[-4]._expression);
																												(yyval._expression).symTPtr->type = (yyval._expression).type;
																											}
#line 3158 "y.tab.c"
    break;

  case 119:
#line 990 "A6_20.y"
                                                                                                                                               {}
#line 3164 "y.tab.c"
    break;

  case 120:
#line 991 "A6_20.y"
                                                                                                                                           {}
#line 3170 "y.tab.c"
    break;

  case 121:
#line 992 "A6_20.y"
                                                                                                                      {/*Not sure but mostly we don't have to implement this*/}
#line 3176 "y.tab.c"
    break;

  case 122:
#line 993 "A6_20.y"
                                                                                                              {
																				   int params_no=currentSymbolTable->emptyArgList;
																				   //printf("no.ofparameters-->%d\n",params_no);
																				   currentSymbolTable->emptyArgList=0;
																				   int dec_params=0;
																				   
																				   int over_params=params_no;
																				   for(int i=currentSymbolTable->symbolTabList.size()-1;i>=0;i--)
																				   {
																						//printf("what-->%s\n",currentSymbolTable->symbolTabList[i]->name.c_str());
																					}
																				   for(int i=currentSymbolTable->symbolTabList.size()-1;i>=0;i--)
																				   {
																						//printf("mazaknaminST-->%s\n",currentSymbolTable->symbolTabList[i]->name.c_str());
																						string detect=currentSymbolTable->symbolTabList[i]->name;
																						if(over_params==0)
																						{
																							break;
																						}
																						if(detect.size()==4)
																						{
																							if(detect[0]=='t')
																							{
																								
																								if('0'<=detect[1]&&detect[1]<='9')
																								{
																									if('0'<=detect[2]&&detect[2]<='9')
																									{
																										if('0'<=detect[3]&&detect[3]<='9')
																											dec_params++;
																									}
																								}
																							}
																						}
																						else
																							over_params--;

																				   }
																				   params_no+=dec_params;
																				   //printf("no.ofparameters-->%d\n",params_no);
																				   int temp_i=currentSymbolTable->symbolTabList.size()-params_no;
																				   symbol * new_func = globalSymbolTable->search(currentSymbolTable->symbolTabList[temp_i-1]->name);
																				
																					if(new_func == NULL)
																					{
																						new_func = globalSymbolTable->lookup(currentSymbolTable->symbolTabList[temp_i-1]->name);
																						(yyval._expression).symTPtr = currentSymbolTable->symbolTabList[temp_i-1];
																						
																						for(int i=0;i<(temp_i-1);i++)
																						{
																							currentSymbolTable->symbolTabList[i]->isValid=false;
																							if(currentSymbolTable->symbolTabList[i]->var_type=="local"||currentSymbolTable->symbolTabList[i]->var_type=="temp")
																							{
																								symbol *glob_var=globalSymbolTable->search(currentSymbolTable->symbolTabList[i]->name);
																								if(glob_var==NULL)
																								{
																									
																									glob_var=globalSymbolTable->lookup(currentSymbolTable->symbolTabList[i]->name);
																									int t_size=currentSymbolTable->symbolTabList[i]->type->sizeOfType();
																									glob_var->offset=globalSymbolTable->offset;
																									glob_var->width=t_size;
																									globalSymbolTable->offset+=t_size;
																								
																									glob_var->nested=globalSymbolTable;
																									glob_var->var_type=currentSymbolTable->symbolTabList[i]->var_type;
																									glob_var->type=currentSymbolTable->symbolTabList[i]->type;
																									if(currentSymbolTable->symbolTabList[i]->isInitialized)
																									{
																										glob_var->isInitialized=currentSymbolTable->symbolTabList[i]->isInitialized;
																										glob_var->_init_val=currentSymbolTable->symbolTabList[i]->_init_val;
																									}

																								}
																							}
																						}
																						if(new_func->var_type == "")
																						{
																							// Declaration of the function for the first time
																							new_func->type = CopyType(currentSymbolTable->symbolTabList[temp_i-1]->type);
													
																							new_func->var_type = "func";
																							new_func->isInitialized = false;
																							new_func->nested = currentSymbolTable;
																							
																							currentSymbolTable->name = currentSymbolTable->symbolTabList[temp_i-1]->name;
																						
																							currentSymbolTable->symbolTabList[temp_i-1]->name = "retVal";
																							currentSymbolTable->symbolTabList[temp_i-1]->var_type = "return";
																							currentSymbolTable->symbolTabList[temp_i-1]->width = currentSymbolTable->symbolTabList[temp_i-1]->type->sizeOfType();
																							currentSymbolTable->symbolTabList[temp_i-1]->offset = 0;
																							currentSymbolTable->offset = 16;
																							int count=0;
																							for(int i=(currentSymbolTable->symbolTabList.size())-params_no;i<currentSymbolTable->symbolTabList.size();i++)
																							{
																								currentSymbolTable->symbolTabList[i]->var_type = "param";
																								currentSymbolTable->symbolTabList[i]->offset = count- currentSymbolTable->symbolTabList[i]->width;
																								count=count-currentSymbolTable->symbolTabList[i]->width;
																							}
																						}
																					}
																					else
																					{
																						currentSymbolTable = new_func->nested;
																						
																					}
																					currentSymbolTable->initQuad = nextInstruction;
																					(yyval._expression).symTPtr = new_func;
																					(yyval._expression).type = new symbolType(tp_func);
																				}
#line 3290 "y.tab.c"
    break;

  case 123:
#line 1102 "A6_20.y"
                                                                                                              {
																				int temp_i=currentSymbolTable->symbolTabList.size();
																				symbol * new_func = globalSymbolTable->search(currentSymbolTable->symbolTabList[temp_i-1]->name);
																				if(new_func == NULL)
																				{
																					
																					new_func = globalSymbolTable->lookup(currentSymbolTable->symbolTabList[temp_i-1]->name);
																					(yyval._expression).symTPtr = currentSymbolTable->symbolTabList[temp_i-1];
																					
																					for(int i=0;i<temp_i-1;i++)
																					{
																						currentSymbolTable->symbolTabList[i]->isValid=false;
																						if(currentSymbolTable->symbolTabList[i]->var_type=="local"||currentSymbolTable->symbolTabList[i]->var_type=="temp")
																						{
																							symbol *glob_var=globalSymbolTable->search(currentSymbolTable->symbolTabList[i]->name);
																							if(glob_var==NULL)
																							{
																								//printf("glob_var-->%s\n",currentSymbolTable->symbolTabList[i]->name.c_str());
																								glob_var=globalSymbolTable->lookup(currentSymbolTable->symbolTabList[i]->name);
																								int t_size=currentSymbolTable->symbolTabList[i]->type->sizeOfType();
																								
																								glob_var->offset=globalSymbolTable->offset;
																								glob_var->width=t_size;
																								globalSymbolTable->offset+=t_size;
																								
																								glob_var->nested=globalSymbolTable;
																								glob_var->var_type=currentSymbolTable->symbolTabList[i]->var_type;
																								glob_var->type=currentSymbolTable->symbolTabList[i]->type;
																								if(currentSymbolTable->symbolTabList[i]->isInitialized)
																								{
																									glob_var->isInitialized=currentSymbolTable->symbolTabList[i]->isInitialized;
																									glob_var->_init_val=currentSymbolTable->symbolTabList[i]->_init_val;
																								}
																							}
																						}
																					}
																					if(new_func->var_type == "")
																					{
																						/*Function is being declared here for the first time*/
																						new_func->type = CopyType(currentSymbolTable->symbolTabList[temp_i-1]->type);
																						new_func->var_type = "func";
																						new_func->isInitialized = false;
																						new_func->nested = currentSymbolTable;
																						
																						/*Change the first element to retval and change the rest to param*/
																						currentSymbolTable->name = currentSymbolTable->symbolTabList[temp_i-1]->name;
																						currentSymbolTable->symbolTabList[temp_i-1]->name = "retVal";
																						currentSymbolTable->symbolTabList[temp_i-1]->var_type = "return";
																						currentSymbolTable->symbolTabList[temp_i-1]->width = currentSymbolTable->symbolTabList[0]->type->sizeOfType();
																						currentSymbolTable->symbolTabList[temp_i-1]->offset = 0;
																						currentSymbolTable->offset = 16;
																					}
																				}
																				else
																				{
																					// Already declared function. Therefore drop the new table and connect current symbol table pointer to the previously created funciton symbol table
																					currentSymbolTable = new_func->nested;
																					
																				}
																				currentSymbolTable->initQuad = nextInstruction;
																				(yyval._expression).symTPtr = new_func;
																				(yyval._expression).type = new symbolType(tp_func);
																			}
#line 3358 "y.tab.c"
    break;

  case 124:
#line 1166 "A6_20.y"
                                                    {}
#line 3364 "y.tab.c"
    break;

  case 125:
#line 1167 "A6_20.y"
                                                                            {}
#line 3370 "y.tab.c"
    break;

  case 126:
#line 1169 "A6_20.y"
                                                      {
															(yyval._expression) = (yyvsp[0]._expression);
														}
#line 3378 "y.tab.c"
    break;

  case 127:
#line 1172 "A6_20.y"
                                                                            {
												(yyval._expression).symTPtr = NULL;
												
											}
#line 3387 "y.tab.c"
    break;

  case 130:
#line 1180 "A6_20.y"
                                                            {
																(yyval._declarator).type = new symbolType(tp_ptr);
															}
#line 3395 "y.tab.c"
    break;

  case 131:
#line 1183 "A6_20.y"
                                                                                                    {
																		(yyval._declarator).type = new symbolType(tp_ptr,1,(yyvsp[0]._declarator).type);
																	}
#line 3403 "y.tab.c"
    break;

  case 132:
#line 1187 "A6_20.y"
                                               {}
#line 3409 "y.tab.c"
    break;

  case 133:
#line 1188 "A6_20.y"
                                                                                                   {}
#line 3415 "y.tab.c"
    break;

  case 134:
#line 1190 "A6_20.y"
                                               {
													/*-------*/
												}
#line 3423 "y.tab.c"
    break;

  case 135:
#line 1193 "A6_20.y"
                                                                                            {}
#line 3429 "y.tab.c"
    break;

  case 136:
#line 1195 "A6_20.y"
                                                      {
															/*---------*/
															(currentSymbolTable->emptyArgList)++;
														}
#line 3438 "y.tab.c"
    break;

  case 137:
#line 1199 "A6_20.y"
                                                                                                         {
																			/*------------*/
																			(currentSymbolTable->emptyArgList)++;
																		}
#line 3447 "y.tab.c"
    break;

  case 138:
#line 1204 "A6_20.y"
                                                                  {
																		/*The parameter is already added to the current Symbol Table*/
																  }
#line 3455 "y.tab.c"
    break;

  case 139:
#line 1207 "A6_20.y"
                                                                                       {}
#line 3461 "y.tab.c"
    break;

  case 143:
#line 1214 "A6_20.y"
                                                      {
									(yyval._expression) = (yyvsp[0]._expression);
								}
#line 3469 "y.tab.c"
    break;

  case 144:
#line 1217 "A6_20.y"
                                                                                         {}
#line 3475 "y.tab.c"
    break;

  case 145:
#line 1218 "A6_20.y"
                                                                                             {}
#line 3481 "y.tab.c"
    break;

  case 154:
#line 1232 "A6_20.y"
                                                                               {}
#line 3487 "y.tab.c"
    break;

  case 155:
#line 1235 "A6_20.y"
                                                  {/*Switch Case*/}
#line 3493 "y.tab.c"
    break;

  case 156:
#line 1236 "A6_20.y"
                                                                                   {
														(yyval._nextlist) = (yyvsp[0]._nextlist);
													}
#line 3501 "y.tab.c"
    break;

  case 157:
#line 1239 "A6_20.y"
                                                                                     {
														(yyval._nextlist) = NULL;
													}
#line 3509 "y.tab.c"
    break;

  case 158:
#line 1242 "A6_20.y"
                                                                                    {
														(yyval._nextlist) = (yyvsp[0]._nextlist);
													}
#line 3517 "y.tab.c"
    break;

  case 159:
#line 1245 "A6_20.y"
                                                                                    {
														(yyval._nextlist) = (yyvsp[0]._nextlist);
													}
#line 3525 "y.tab.c"
    break;

  case 160:
#line 1248 "A6_20.y"
                                                                               {
													(yyval._nextlist) = (yyvsp[0]._nextlist);
													
												}
#line 3534 "y.tab.c"
    break;

  case 161:
#line 1253 "A6_20.y"
                                                         {}
#line 3540 "y.tab.c"
    break;

  case 162:
#line 1254 "A6_20.y"
                                                                                                       {}
#line 3546 "y.tab.c"
    break;

  case 163:
#line 1255 "A6_20.y"
                                                                                      {}
#line 3552 "y.tab.c"
    break;

  case 164:
#line 1257 "A6_20.y"
                                                            {
																(yyval._nextlist) = (yyvsp[-1]._nextlist);
															}
#line 3560 "y.tab.c"
    break;

  case 165:
#line 1261 "A6_20.y"
                                                {
													(yyval._nextlist) = (yyvsp[0]._nextlist);
												}
#line 3568 "y.tab.c"
    break;

  case 166:
#line 1264 "A6_20.y"
                                                                            {
												(yyval._nextlist) = NULL;
												
											}
#line 3577 "y.tab.c"
    break;

  case 167:
#line 1269 "A6_20.y"
                                           {
												(yyval._nextlist) = (yyvsp[0]._nextlist);
											}
#line 3585 "y.tab.c"
    break;

  case 168:
#line 1272 "A6_20.y"
                                                                                             {
																	backpatch((yyvsp[-2]._nextlist),(yyvsp[-1]._instruction));
																	(yyval._nextlist) = (yyvsp[0]._nextlist);
															 }
#line 3594 "y.tab.c"
    break;

  case 169:
#line 1277 "A6_20.y"
                                            {
												(yyval._nextlist) = NULL;
											}
#line 3602 "y.tab.c"
    break;

  case 170:
#line 1280 "A6_20.y"
                                                                          {
												(yyval._nextlist) = (yyvsp[0]._nextlist);
										  }
#line 3610 "y.tab.c"
    break;

  case 171:
#line 1284 "A6_20.y"
                                                  {
														(yyval._expression) = (yyvsp[-1]._expression);
												  }
#line 3618 "y.tab.c"
    break;

  case 172:
#line 1288 "A6_20.y"
                                           {
												(yyval._expression) = (yyvsp[0]._expression);
										   }
#line 3626 "y.tab.c"
    break;

  case 173:
#line 1291 "A6_20.y"
                                                                            {
												/*Initialize Expression to NULL*/
												(yyval._expression).symTPtr = NULL;
											}
#line 3635 "y.tab.c"
    break;

  case 174:
#line 1296 "A6_20.y"
                                                                                       {
																							/*N1 is used for falselist of expression, M1 is used for truelist of expression, N2 is used to prevent fall through, M2 is used for falselist of expression*/
																							(yyvsp[-4]._nextlist) = merge((yyvsp[-4]._nextlist),(yyvsp[-3]._nextlist));
													
																							(yyvsp[0]._nextlist) = merge((yyvsp[0]._nextlist),makelist(nextInstruction));
																							globalQuadArray.emit(Q_GOTO,"-1");
																							backpatch((yyvsp[-7]._nextlist),nextInstruction);
																							
																							CONV2BOOL(&(yyvsp[-8]._expression));

																							backpatch((yyvsp[-8]._expression).truelist,(yyvsp[-5]._instruction));
																							backpatch((yyvsp[-8]._expression).falselist,(yyvsp[-1]._instruction));
																							(yyval._nextlist) = merge((yyvsp[-4]._nextlist),(yyvsp[0]._nextlist));
																						}
#line 3654 "y.tab.c"
    break;

  case 175:
#line 1310 "A6_20.y"
                                                                                                                     {
																		/*N is used for the falselist of expression to skip the block and M is used for truelist of expression*/
																		(yyvsp[0]._nextlist) = merge((yyvsp[0]._nextlist),makelist(nextInstruction));
																		globalQuadArray.emit(Q_GOTO,"-1");
																		backpatch((yyvsp[-3]._nextlist),nextInstruction);
																		CONV2BOOL(&(yyvsp[-4]._expression));
																		
																		backpatch((yyvsp[-4]._expression).truelist,(yyvsp[-1]._instruction));
																		(yyval._nextlist) = merge((yyvsp[0]._nextlist),(yyvsp[-4]._expression).falselist);
																	}
#line 3669 "y.tab.c"
    break;

  case 176:
#line 1320 "A6_20.y"
                                                                                                    {}
#line 3675 "y.tab.c"
    break;

  case 177:
#line 1322 "A6_20.y"
                                                                         {
																			/*The first 'M' takes into consideration that the control will come again at the beginning of the condition checking.'N' here does the work of breaking condition i.e. it generate goto which wii be useful when we are exiting from while loop. Finally, the last 'M' is here to note the startinf statement that will be executed in every loop to populate the truelists of expression*/
																			globalQuadArray.emit(Q_GOTO,(yyvsp[-5]._instruction));
																			
																			backpatch((yyvsp[0]._nextlist),(yyvsp[-5]._instruction));           /*S._nextlist to M1._instruction*/
																			backpatch((yyvsp[-3]._nextlist),nextInstruction);    /*N1._nextlist to nextInstruction*/
																			CONV2BOOL(&(yyvsp[-4]._expression));
																		
																			backpatch((yyvsp[-4]._expression).truelist,(yyvsp[-1]._instruction));
																			(yyval._nextlist) = (yyvsp[-4]._expression).falselist;
																		}
#line 3691 "y.tab.c"
    break;

  case 178:
#line 1333 "A6_20.y"
                                                                                                                 {
																					/*M1 is used for coming back again to the statement as it stores the instruction which will be needed by the truelist of expression. M2 is neede as we have to again to check the condition which will be used to populate the _nextlist of statements. Further N is used to prevent from fall through*/
																					backpatch((yyvsp[-2]._nextlist),nextInstruction);
																					backpatch((yyvsp[-7]._nextlist),(yyvsp[-4]._instruction));           /*S1._nextlist to M2._instruction*/
																					CONV2BOOL(&(yyvsp[-3]._expression));
																					
																					backpatch((yyvsp[-3]._expression).truelist,(yyvsp[-8]._instruction));  /*B.truelist to M1._instruction*/
																					(yyval._nextlist) = (yyvsp[-3]._expression).falselist;
																				}
#line 3705 "y.tab.c"
    break;

  case 179:
#line 1342 "A6_20.y"
                                                                                                                                                     {
																													   /*M1 is used for coming back to check the epression at every iteration. N1 is used  for generating the goto which will be used for exit conditions. M2 is used for _nextlist of statement and N2 is used for jump to check the expression and M3 is used for the truelist of expression*/
																														backpatch((yyvsp[-3]._nextlist),(yyvsp[-9]._instruction));          /*N2._nextlist to M1._instruction*/
																														backpatch((yyvsp[0]._nextlist),(yyvsp[-5]._instruction));          /*S._nextlist to M2._instruction*/
																														globalQuadArray.emit(Q_GOTO,(yyvsp[-5]._instruction));
																														
																														backpatch((yyvsp[-7]._nextlist),nextInstruction);    /*N1._nextlist to nextInstruction*/
																														CONV2BOOL(&(yyvsp[-8]._expression));
																														
																														backpatch((yyvsp[-8]._expression).truelist,(yyvsp[-1]._instruction));
																														(yyval._nextlist) = (yyvsp[-8]._expression).falselist;
																													}
#line 3722 "y.tab.c"
    break;

  case 180:
#line 1354 "A6_20.y"
                                                                                                                                    {}
#line 3728 "y.tab.c"
    break;

  case 181:
#line 1356 "A6_20.y"
                                                    {}
#line 3734 "y.tab.c"
    break;

  case 182:
#line 1357 "A6_20.y"
                                                                             {}
#line 3740 "y.tab.c"
    break;

  case 183:
#line 1358 "A6_20.y"
                                                                          {}
#line 3746 "y.tab.c"
    break;

  case 184:
#line 1359 "A6_20.y"
                                                                                          {
																if((yyvsp[-1]._expression).symTPtr == NULL)
																	globalQuadArray.emit(Q_RETURN);
																else
																{
																	expression * dummy = new expression();
																	dummy->symTPtr = currentSymbolTable->symbolTabList[0];
																	dummy->type = dummy->symTPtr->type;
																	typecheck(dummy,&(yyvsp[-1]._expression),true);
																	
																	delete dummy;
																	globalQuadArray.emit(Q_RETURN,(yyvsp[-1]._expression).symTPtr->name);
																}
																(yyval._nextlist)=NULL;
														  }
#line 3766 "y.tab.c"
    break;

  case 188:
#line 1380 "A6_20.y"
                                                                                 {

																						for(int i=0;i<currentSymbolTable->symbolTabList.size();i++)
																						{
																									if(currentSymbolTable->symbolTabList[i]->nested==NULL)
																									{
																										
																									if(currentSymbolTable->symbolTabList[i]->var_type=="local"||currentSymbolTable->symbolTabList[i]->var_type=="temp")
																									{
																										symbol *glob_var=globalSymbolTable->search(currentSymbolTable->symbolTabList[i]->name);
																										if(glob_var==NULL)
																										{
																											glob_var=globalSymbolTable->lookup(currentSymbolTable->symbolTabList[i]->name);
																											int t_size=currentSymbolTable->symbolTabList[i]->type->sizeOfType();
																											glob_var->offset=globalSymbolTable->offset;
																											
																											glob_var->width=t_size;
																											globalSymbolTable->offset+=t_size;
																											glob_var->nested=globalSymbolTable;
																											
																											glob_var->var_type=currentSymbolTable->symbolTabList[i]->var_type;
																											glob_var->type=currentSymbolTable->symbolTabList[i]->type;
																											if(currentSymbolTable->symbolTabList[i]->isInitialized)
																											{
																												glob_var->isInitialized=currentSymbolTable->symbolTabList[i]->isInitialized;
																												glob_var->_init_val=currentSymbolTable->symbolTabList[i]->_init_val;
																											}
																										}
																									}
																								  }
																						}

													}
#line 3804 "y.tab.c"
    break;

  case 189:
#line 1414 "A6_20.y"
                                                                                                  {
																									symbol * func = globalSymbolTable->lookup((yyvsp[-2]._expression).symTPtr->name);
																									//printf("Hello2\n");
																									func->nested->symbolTabList[0]->type = CopyType(func->type);
																									func->nested->symbolTabList[0]->name = "retVal";
																									
																									func->nested->symbolTabList[0]->offset = 0;
																									//If return type is pointer then change the offset
																									if(func->nested->symbolTabList[0]->type->type == tp_ptr)
																									{
																										int diff = __POINTER_SIZE - func->nested->symbolTabList[0]->width;
																										func->nested->symbolTabList[0]->width = __POINTER_SIZE;
																										for(int i=1;i<func->nested->symbolTabList.size();i++)
																										{
																											func->nested->symbolTabList[i]->offset += diff;
																										}
																									}
																									int offset_size = 0;
																									for(int i=0;i<func->nested->symbolTabList.size();i++)
																									{
																										offset_size += func->nested->symbolTabList[i]->width;
																									}
																									func->nested->lastQuad = nextInstruction-1;
																									//Create a new Current Symbol Table
																									currentSymbolTable = new symbolTable();
																								}
#line 3835 "y.tab.c"
    break;


#line 3839 "y.tab.c"

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
#line 1447 "A6_20.y"

void yyerror(const char*s)
{
	printf("%s",s);
}
