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
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   188

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  83
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  154

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
       2,     2,     2,    74,     2,     2,     2,    65,    73,     2,
      68,    69,    63,    61,    72,    62,     2,    64,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    78,    80,
      75,    79,    76,    77,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    70,     2,    71,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    81,     2,    82,     2,     2,     2,     2,
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
       0,    94,    94,    99,   105,   141,   150,   158,   162,   165,
     182,   241,   249,   254,   257,   261,   264,   310,   313,   316,
     319,   322,   326,   329,   336,   343,   352,   355,   363,   373,
     376,   384,   392,   402,   413,   416,   426,   438,   441,   453,
     456,   469,   472,   491,   494,   519,   525,   535,   542,   567,
     570,   576,   615,   618,   622,   634,   642,   692,   697,   697,
     701,   705,   710,   713,   716,   721,   724,   727,   730,   733,
     738,   742,   745,   749,   752,   757,   760,   764,   768,   771,
     776,   790,   801,   814,   825,   826,   828,   829,   862
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
  "UNARY", "IF_CONFLICT", "'('", "')'", "'['", "']'", "','", "'&'", "'!'",
  "'<'", "'>'", "'?'", "':'", "'='", "';'", "'{'", "'}'", "$accept", "M",
  "N", "primary_expression", "postfix_expression",
  "argument_expression_list", "argument_expression_list_opt",
  "unary_expression", "unary_operator", "multiplicative_expression",
  "additive_expression", "relational_expression", "equality_expression",
  "logical_AND_expression", "logical_OR_expression",
  "conditional_expression", "assignment_expression", "expression",
  "declaration", "init_declarator", "type_specifier", "declarator",
  "pointer_opt", "direct_declarator", "pointer", "parameter_list_opt",
  "parameter_list", "parameter_declaration", "initializer", "statement",
  "compound_statement", "block_item_list_opt", "block_item_list",
  "block_item", "expression_statement", "expression_opt",
  "selection_statement", "iteration_statement", "jump_statement",
  "translation_unit", "external_declaration", "function_definition", YY_NULLPTR
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
      91,    93,    44,    38,    33,    60,    62,    63,    58,    61,
      59,   123,   125
};
# endif

#define YYPACT_NINF (-130)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-80)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -7,  -130,  -130,  -130,   -57,     2,  -130,  -130,  -130,   -66,
     -24,   -39,  -130,  -130,  -130,  -130,   114,    66,  -130,  -130,
     -10,  -130,  -130,  -130,  -130,  -130,  -130,   114,  -130,  -130,
    -130,    -9,   -23,   114,   -35,   -29,   -22,    23,    22,   -28,
    -130,  -130,  -130,     7,     8,   114,  -130,  -130,  -130,   -57,
    -130,  -130,     1,     4,  -130,  -130,     9,  -130,  -130,  -130,
      -7,    10,    19,   114,   114,   114,  -130,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,  -130,  -130,
      14,   114,   114,    12,    15,  -130,    82,  -130,   -56,    24,
      29,  -130,    31,  -130,    32,    36,  -130,    42,  -130,  -130,
    -130,  -130,  -130,   -35,   -35,   -29,   -29,   -29,   -29,   -22,
     -22,   114,   114,  -130,    35,  -130,  -130,  -130,  -130,  -130,
      -7,  -130,   114,  -130,  -130,    23,    22,   114,  -130,    48,
    -130,  -130,  -130,   114,  -130,    40,  -130,    98,  -130,    41,
     112,   114,  -130,   119,  -130,   114,  -130,  -130,    98,    63,
    -130,  -130,    98,  -130
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    50,    49,    87,    53,     0,    84,    86,    57,     0,
      47,     0,    52,     1,    85,    46,     0,    72,    88,    54,
      51,     5,     6,     4,    19,    20,    18,     0,    17,    21,
       8,    15,    22,     0,    26,    29,    34,    37,    39,    41,
      43,    64,    48,     0,     0,    79,    45,    78,    75,    53,
      76,    65,     0,     2,    73,    66,     0,    67,    68,    69,
      59,     0,     0,    14,     0,     0,    16,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,     2,
       0,    79,     0,     0,    47,    70,    79,    77,    63,     0,
      58,    60,     0,     7,    13,     0,    11,     0,    44,    23,
      24,    25,    22,    27,    28,    33,    32,    30,    31,    36,
      35,     0,     0,     2,     0,     3,    83,    74,    62,    56,
       0,    55,     0,    10,     9,    38,    40,     0,     2,     0,
      61,    12,     3,    79,     2,     0,     3,    79,     2,     0,
      81,     0,     2,     0,    42,    79,     2,     3,    79,     0,
      80,     2,    79,    82
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -130,   -61,   -16,  -130,  -130,  -130,  -130,   -33,  -130,    -2,
     -48,    -6,    25,    21,  -130,    -4,   -15,   -17,   -12,  -130,
     -14,   -37,  -130,  -130,  -130,  -130,  -130,    28,  -130,  -129,
     125,  -130,  -130,    65,  -130,   -36,  -130,  -130,  -130,  -130,
     144,  -130
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    86,    80,    30,    31,    94,    95,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    46,    47,     3,     9,
       4,    10,    11,    20,    12,    89,    90,    91,    42,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,     5,
       6,     7
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      66,    41,    13,    49,   -53,    48,     8,     8,   140,    83,
      62,     1,    84,    79,    15,    72,    73,   111,   112,   150,
       1,    19,     2,   153,   105,   106,   107,   108,    67,    68,
      69,     2,    70,    71,    99,   100,   101,   102,   102,   102,
     102,   102,   102,   102,   102,   114,    88,    97,    96,    -3,
      98,   118,   127,    74,    75,    16,    65,    17,    60,    63,
      61,    64,    76,    77,    78,   115,    92,   133,   103,   104,
     109,   110,    49,   137,    48,    81,    82,   141,   102,   102,
      43,   145,    44,    85,     1,   148,   -71,    45,    93,    87,
     152,   113,   116,   119,    16,     2,    43,   136,    44,   129,
       1,   120,   121,    45,   122,   123,    88,   131,   102,   147,
     132,     2,    43,   124,    44,   128,   135,   134,   138,    45,
     139,   142,    21,    -3,   143,    22,    23,    24,    25,    26,
     146,   149,   151,   126,    27,    18,   125,   144,    21,    28,
      29,    22,    23,    24,    25,    26,   -79,    17,   130,    14,
      27,   117,     0,     0,    21,    28,    29,    22,    23,    24,
      25,    26,     0,    17,     0,     0,    27,     0,     0,     0,
      21,    28,    29,    22,    23,    24,    25,    26,     0,    17,
       0,     0,    27,     0,     0,     0,     0,    28,    29
};

static const yytype_int16 yycheck[] =
{
      33,    16,     0,    17,    60,    17,    63,    63,   137,    45,
      27,    18,    49,    41,    80,    37,    38,    78,    79,   148,
      18,    60,    29,   152,    72,    73,    74,    75,    63,    64,
      65,    29,    61,    62,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    81,    60,    64,    63,    77,
      65,    88,   113,    75,    76,    79,    79,    81,    68,    68,
      70,    70,    39,    40,    42,    82,    56,   128,    70,    71,
      76,    77,    86,   134,    86,    68,    68,   138,   111,   112,
      14,   142,    16,    82,    18,   146,    82,    21,    69,    80,
     151,    77,    80,    69,    79,    29,    14,   133,    16,   115,
      18,    72,    71,    21,    72,    69,   120,   122,   141,   145,
     127,    29,    14,    71,    16,    80,   132,    69,    78,    21,
     136,    80,    56,    11,   140,    59,    60,    61,    62,    63,
      11,   147,    69,   112,    68,    10,   111,   141,    56,    73,
      74,    59,    60,    61,    62,    63,    80,    81,   120,     5,
      68,    86,    -1,    -1,    56,    73,    74,    59,    60,    61,
      62,    63,    -1,    81,    -1,    -1,    68,    -1,    -1,    -1,
      56,    73,    74,    59,    60,    61,    62,    63,    -1,    81,
      -1,    -1,    68,    -1,    -1,    -1,    -1,    73,    74
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    18,    29,   101,   103,   122,   123,   124,    63,   102,
     104,   105,   107,     0,   123,    80,    79,    81,   113,    60,
     106,    56,    59,    60,    61,    62,    63,    68,    73,    74,
      86,    87,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   111,    14,    16,    21,    99,   100,   101,   103,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
      68,    70,   100,    68,    70,    79,    90,    63,    64,    65,
      61,    62,    37,    38,    75,    76,    39,    40,    42,    41,
      85,    68,    68,   118,   104,    82,    84,    80,   103,   108,
     109,   110,    56,    69,    88,    89,    99,   100,    99,    90,
      90,    90,    90,    92,    92,    93,    93,    93,    93,    94,
      94,    84,    84,    77,   118,   100,    80,   116,   104,    69,
      72,    71,    72,    69,    71,    95,    96,    84,    80,    85,
     110,    99,   100,    84,    69,    85,   118,    84,    78,    85,
     112,    84,    80,    85,    98,    84,    11,   118,    84,    85,
     112,    69,    84,   112
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    83,    84,    85,    86,    86,    86,    86,    87,    87,
      87,    88,    88,    89,    89,    90,    90,    91,    91,    91,
      91,    91,    92,    92,    92,    92,    93,    93,    93,    94,
      94,    94,    94,    94,    95,    95,    95,    96,    96,    97,
      97,    98,    98,    99,    99,   100,   101,   102,   102,   103,
     103,   104,   105,   105,   106,   106,   106,   107,   108,   108,
     109,   109,   110,   110,   111,   112,   112,   112,   112,   112,
     113,   114,   114,   115,   115,   116,   116,   117,   118,   118,
     119,   119,   120,   121,   122,   122,   123,   123,   124
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     0,     1,     1,     1,     3,     1,     4,
       4,     1,     3,     1,     0,     1,     2,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     4,     1,
       4,     1,     9,     1,     3,     1,     3,     1,     3,     1,
       1,     2,     1,     0,     1,     4,     4,     1,     1,     0,
       1,     3,     2,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     0,     1,     3,     1,     1,     2,     1,     0,
      11,     7,    14,     3,     1,     2,     1,     1,     3
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
#line 94 "A6_20.y"
{
	(yyval._instruction) = nextInstruction;
}
#line 1578 "y.tab.c"
    break;

  case 3:
#line 99 "A6_20.y"
{
	(yyval._nextlist) = makelist(nextInstruction);
	globalQuadArray.emit(Q_GOTO, -1);
}
#line 1587 "y.tab.c"
    break;

  case 4:
#line 105 "A6_20.y"
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
#line 1628 "y.tab.c"
    break;

  case 5:
#line 141 "A6_20.y"
                         {
		// Declare and initialize the value of the temporary variable with the integer
		(yyval._expression).symTPtr  = currentSymbolTable->gentemp(new symbolType(tp_int));
		(yyval._expression).type = (yyval._expression).symTPtr->type;
		(yyval._expression).symTPtr->_init_val._INT_INITVAL = (yyvsp[0]._int_value);
		(yyval._expression).symTPtr->isInitialized = true;
		(yyval._expression).arr = NULL;
		globalQuadArray.emit(Q_ASSIGN, (yyvsp[0]._int_value), (yyval._expression).symTPtr->name);
	}
#line 1642 "y.tab.c"
    break;

  case 6:
#line 150 "A6_20.y"
                       {
		_string_labels.push_back(*(yyvsp[0]._string_literal));
		(yyval._expression).symTPtr = NULL;
		(yyval._expression).isString = true;
		(yyval._expression).ind_str = _string_labels.size()-1;
		(yyval._expression).arr = NULL;
		(yyval._expression).isPointer = false;
	}
#line 1655 "y.tab.c"
    break;

  case 7:
#line 158 "A6_20.y"
                           {
		(yyval._expression) = (yyvsp[-1]._expression);
	}
#line 1663 "y.tab.c"
    break;

  case 8:
#line 162 "A6_20.y"
                                           {
		(yyval._expression) = (yyvsp[0]._expression);
	}
#line 1671 "y.tab.c"
    break;

  case 9:
#line 165 "A6_20.y"
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
#line 1693 "y.tab.c"
    break;

  case 10:
#line 182 "A6_20.y"
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
#line 1756 "y.tab.c"
    break;

  case 11:
#line 241 "A6_20.y"
                                                      {
		(yyval._paramList).args = new vector<expression*>;
		
		expression * tex = new expression((yyvsp[0]._expression));
		
		(yyval._paramList).args->push_back(tex);
		//printf("name2-->%s\n",tex->symTPtr->name.c_str());
	}
#line 1769 "y.tab.c"
    break;

  case 12:
#line 249 "A6_20.y"
                                                           {
		expression * tex = new expression((yyvsp[0]._expression));
		(yyval._paramList).args->push_back(tex);
	}
#line 1778 "y.tab.c"
    break;

  case 13:
#line 254 "A6_20.y"
                                                         {
	(yyval._paramList) = (yyvsp[0]._paramList);
	}
#line 1786 "y.tab.c"
    break;

  case 14:
#line 257 "A6_20.y"
                    {
		(yyval._paramList).args = NULL;		
	}
#line 1794 "y.tab.c"
    break;

  case 15:
#line 261 "A6_20.y"
                                       {
		(yyval._expression) = (yyvsp[0]._expression);
	}
#line 1802 "y.tab.c"
    break;

  case 16:
#line 265 "A6_20.y"
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
#line 1851 "y.tab.c"
    break;

  case 17:
#line 310 "A6_20.y"
                        {
		(yyval._char_value) = '&';
	}
#line 1859 "y.tab.c"
    break;

  case 18:
#line 313 "A6_20.y"
            {
		(yyval._char_value) = '*';
	}
#line 1867 "y.tab.c"
    break;

  case 19:
#line 316 "A6_20.y"
            {
		(yyval._char_value) = '+';
	}
#line 1875 "y.tab.c"
    break;

  case 20:
#line 319 "A6_20.y"
            {
		(yyval._char_value) = '-';
	}
#line 1883 "y.tab.c"
    break;

  case 21:
#line 322 "A6_20.y"
            {
		(yyval._char_value) = '!';
	}
#line 1891 "y.tab.c"
    break;

  case 22:
#line 326 "A6_20.y"
                                                 {
		(yyval._expression) = (yyvsp[0]._expression);
	}
#line 1899 "y.tab.c"
    break;

  case 23:
#line 329 "A6_20.y"
                                                       {
		typecheck(&(yyvsp[-2]._expression),&(yyvsp[0]._expression));
		(yyval._expression).symTPtr = currentSymbolTable->gentemp((yyvsp[-2]._expression).type);
		(yyval._expression).type = (yyval._expression).symTPtr->type;
		
		globalQuadArray.emit(Q_MULT,(yyvsp[-2]._expression).symTPtr->name,(yyvsp[0]._expression).symTPtr->name,(yyval._expression).symTPtr->name);
	}
#line 1911 "y.tab.c"
    break;

  case 24:
#line 336 "A6_20.y"
                                                       {
		typecheck(&(yyvsp[-2]._expression),&(yyvsp[0]._expression));
		(yyval._expression).symTPtr = currentSymbolTable->gentemp((yyvsp[-2]._expression).type);
		(yyval._expression).type = (yyval._expression).symTPtr->type;
		
		globalQuadArray.emit(Q_DIVIDE,(yyvsp[-2]._expression).symTPtr->name,(yyvsp[0]._expression).symTPtr->name,(yyval._expression).symTPtr->name);
	}
#line 1923 "y.tab.c"
    break;

  case 25:
#line 343 "A6_20.y"
                                                      {
		typecheck(&(yyvsp[-2]._expression),&(yyvsp[0]._expression));
		
		(yyval._expression).symTPtr = currentSymbolTable->gentemp((yyvsp[-2]._expression).type);
		(yyval._expression).type = (yyval._expression).symTPtr->type;
		
		globalQuadArray.emit(Q_MODULO,(yyvsp[-2]._expression).symTPtr->name,(yyvsp[0]._expression).symTPtr->name,(yyval._expression).symTPtr->name);
	}
#line 1936 "y.tab.c"
    break;

  case 26:
#line 352 "A6_20.y"
                                                  {
		(yyval._expression) = (yyvsp[0]._expression);
	}
#line 1944 "y.tab.c"
    break;

  case 27:
#line 355 "A6_20.y"
                                                          {
		typecheck(&(yyvsp[-2]._expression),&(yyvsp[0]._expression));
		
		(yyval._expression).symTPtr = currentSymbolTable->gentemp((yyvsp[-2]._expression).type);
		(yyval._expression).type = (yyval._expression).symTPtr->type;
		
		globalQuadArray.emit(Q_PLUS,(yyvsp[-2]._expression).symTPtr->name,(yyvsp[0]._expression).symTPtr->name,(yyval._expression).symTPtr->name);
	}
#line 1957 "y.tab.c"
    break;

  case 28:
#line 363 "A6_20.y"
                                                          {
		typecheck(&(yyvsp[-2]._expression),&(yyvsp[0]._expression));
		
		(yyval._expression).symTPtr = currentSymbolTable->gentemp((yyvsp[-2]._expression).type);
		(yyval._expression).type = (yyval._expression).symTPtr->type;
		
		globalQuadArray.emit(Q_MINUS,(yyvsp[-2]._expression).symTPtr->name,(yyvsp[0]._expression).symTPtr->name,(yyval._expression).symTPtr->name);
	}
#line 1970 "y.tab.c"
    break;

  case 29:
#line 373 "A6_20.y"
                                            {
		(yyval._expression) = (yyvsp[0]._expression);
	}
#line 1978 "y.tab.c"
    break;

  case 30:
#line 376 "A6_20.y"
                                                      {
		typecheck(&(yyvsp[-2]._expression),&(yyvsp[0]._expression));
		(yyval._expression).type = new symbolType(tp_bool);
		(yyval._expression).truelist = makelist(nextInstruction);
		(yyval._expression).falselist = makelist(nextInstruction+1);
		globalQuadArray.emit(Q_IF_LESS,(yyvsp[-2]._expression).symTPtr->name,(yyvsp[0]._expression).symTPtr->name,"-1");
		globalQuadArray.emit(Q_GOTO,"-1");
	}
#line 1991 "y.tab.c"
    break;

  case 31:
#line 384 "A6_20.y"
                                                      {
		typecheck(&(yyvsp[-2]._expression),&(yyvsp[0]._expression));
		(yyval._expression).type = new symbolType(tp_bool);
		(yyval._expression).truelist = makelist(nextInstruction);
		(yyval._expression).falselist = makelist(nextInstruction+1);
		globalQuadArray.emit(Q_IF_GREATER,(yyvsp[-2]._expression).symTPtr->name,(yyvsp[0]._expression).symTPtr->name,"-1");
		globalQuadArray.emit(Q_GOTO,"-1");
	}
#line 2004 "y.tab.c"
    break;

  case 32:
#line 392 "A6_20.y"
                                                                  {
		typecheck(&(yyvsp[-2]._expression),&(yyvsp[0]._expression));
		(yyval._expression).type = new symbolType(tp_bool);
		
		(yyval._expression).truelist = makelist(nextInstruction);
		
		(yyval._expression).falselist = makelist(nextInstruction+1);
		globalQuadArray.emit(Q_IF_LESS_OR_EQUAL,(yyvsp[-2]._expression).symTPtr->name,(yyvsp[0]._expression).symTPtr->name,"-1");
		globalQuadArray.emit(Q_GOTO,"-1");
	}
#line 2019 "y.tab.c"
    break;

  case 33:
#line 402 "A6_20.y"
                                                                     {
		typecheck(&(yyvsp[-2]._expression),&(yyvsp[0]._expression));

		(yyval._expression).type = new symbolType(tp_bool);
		(yyval._expression).truelist = makelist(nextInstruction);
		
		(yyval._expression).falselist = makelist(nextInstruction+1);
		globalQuadArray.emit(Q_IF_GREATER_OR_EQUAL,(yyvsp[-2]._expression).symTPtr->name,(yyvsp[0]._expression).symTPtr->name,"-1");
		globalQuadArray.emit(Q_GOTO,"-1");
	}
#line 2034 "y.tab.c"
    break;

  case 34:
#line 413 "A6_20.y"
                                              {
		(yyval._expression) = (yyvsp[0]._expression);
	}
#line 2042 "y.tab.c"
    break;

  case 35:
#line 416 "A6_20.y"
                                                           {
		typecheck(&(yyvsp[-2]._expression),&(yyvsp[0]._expression));
		(yyval._expression).type = new symbolType(tp_bool);
		(yyval._expression).truelist = makelist(nextInstruction);
		
		(yyval._expression).falselist = makelist(nextInstruction+1);
		globalQuadArray.emit(Q_IF_EQUAL,(yyvsp[-2]._expression).symTPtr->name,(yyvsp[0]._expression).symTPtr->name,"-1");
		globalQuadArray.emit(Q_GOTO,"-1");
		
	}
#line 2057 "y.tab.c"
    break;

  case 36:
#line 426 "A6_20.y"
                                                            {
		typecheck(&(yyvsp[-2]._expression),&(yyvsp[0]._expression));
		(yyval._expression).type = new symbolType(tp_bool);
		
		(yyval._expression).truelist = makelist(nextInstruction);
		(yyval._expression).falselist = makelist(nextInstruction+1);

		globalQuadArray.emit(Q_IF_NOT_EQUAL,(yyvsp[-2]._expression).symTPtr->name,(yyvsp[0]._expression).symTPtr->name,"-1");
		globalQuadArray.emit(Q_GOTO,"-1");
	}
#line 2072 "y.tab.c"
    break;

  case 37:
#line 438 "A6_20.y"
                                                {
		(yyval._expression) = (yyvsp[0]._expression);
	}
#line 2080 "y.tab.c"
    break;

  case 38:
#line 441 "A6_20.y"
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
#line 2096 "y.tab.c"
    break;

  case 39:
#line 453 "A6_20.y"
                                                   {
		(yyval._expression) = (yyvsp[0]._expression);
	}
#line 2104 "y.tab.c"
    break;

  case 40:
#line 456 "A6_20.y"
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
#line 2120 "y.tab.c"
    break;

  case 41:
#line 469 "A6_20.y"
                                                      {
		(yyval._expression) = (yyvsp[0]._expression);
	}
#line 2128 "y.tab.c"
    break;

  case 42:
#line 472 "A6_20.y"
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
#line 2150 "y.tab.c"
    break;

  case 43:
#line 491 "A6_20.y"
                                                   {
		(yyval._expression) = (yyvsp[0]._expression);
	}
#line 2158 "y.tab.c"
    break;

  case 44:
#line 494 "A6_20.y"
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
#line 2187 "y.tab.c"
    break;

  case 45:
#line 519 "A6_20.y"
                                      {
		(yyval._expression) = (yyvsp[0]._expression);
	}
#line 2195 "y.tab.c"
    break;

  case 46:
#line 525 "A6_20.y"
                                                   {
		if((yyvsp[-1]._expression).symTPtr != NULL && (yyvsp[-1]._expression).type != NULL && (yyvsp[-1]._expression).type->type == tp_func)
		{
			/*Delete currentSymbolTable*/
			
			currentSymbolTable = new symbolTable();
		}
	}
#line 2208 "y.tab.c"
    break;

  case 47:
#line 535 "A6_20.y"
                               {
		/*Nothing to be done here*/
		if((yyvsp[0]._expression).type != NULL && (yyvsp[0]._expression).type->type == tp_func)
		{
			(yyval._expression) = (yyvsp[0]._expression);
		}
	}
#line 2220 "y.tab.c"
    break;

  case 48:
#line 542 "A6_20.y"
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
		}
		//printf("%s = %s\n",$1.symTPtr->name.c_str(),$3.symTPtr->name.c_str());
		//typecheck(&$1,&$3,true);
		globalQuadArray.emit(Q_ASSIGN,(yyvsp[0]._expression).symTPtr->name,(yyvsp[-2]._expression).symTPtr->name);
	}
#line 2248 "y.tab.c"
    break;

  case 49:
#line 567 "A6_20.y"
                         {
		globalType = new symbolType(tp_void);
	}
#line 2256 "y.tab.c"
    break;

  case 50:
#line 570 "A6_20.y"
            {
		globalType = new symbolType(tp_int);
	}
#line 2264 "y.tab.c"
    break;

  case 51:
#line 576 "A6_20.y"
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
#line 2307 "y.tab.c"
    break;

  case 52:
#line 615 "A6_20.y"
                        {
		(yyval._declarator) = (yyvsp[0]._declarator);
	}
#line 2315 "y.tab.c"
    break;

  case 53:
#line 618 "A6_20.y"
                    {
			(yyval._declarator).type = NULL;
	}
#line 2323 "y.tab.c"
    break;

  case 54:
#line 622 "A6_20.y"
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
#line 2340 "y.tab.c"
    break;

  case 55:
#line 634 "A6_20.y"
                                                   {
		
		//add the type of array to list
		(yyvsp[-3]._expression).type = new symbolType(tp_arr,(yyvsp[-1]._int_value),(yyvsp[-3]._expression).type);
	
		(yyval._expression) = (yyvsp[-3]._expression);
		(yyval._expression).symTPtr->type = (yyval._expression).type;
	}
#line 2353 "y.tab.c"
    break;

  case 56:
#line 642 "A6_20.y"
                                                     {
		int params_no=currentSymbolTable->emptyArgList;
		//printf("no.ofparameters-->%d\n",params_no);
		currentSymbolTable->emptyArgList=0;

		//printf("no.ofparameters-->%d\n",params_no);
		int temp_i=currentSymbolTable->symbolTabList.size()-params_no;
		symbol * new_func = globalSymbolTable->search(currentSymbolTable->symbolTabList[temp_i-1]->name);
	
		if(new_func == NULL)
		{
			new_func = globalSymbolTable->lookup(currentSymbolTable->symbolTabList[temp_i-1]->name);
			(yyval._expression).symTPtr = currentSymbolTable->symbolTabList[temp_i-1];
			
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
#line 2406 "y.tab.c"
    break;

  case 57:
#line 692 "A6_20.y"
                {
		(yyval._declarator).type = new symbolType(tp_ptr);
	}
#line 2414 "y.tab.c"
    break;

  case 58:
#line 697 "A6_20.y"
                      {}
#line 2420 "y.tab.c"
    break;

  case 60:
#line 701 "A6_20.y"
                                          {
		/*---------*/
		(currentSymbolTable->emptyArgList)++;
	}
#line 2429 "y.tab.c"
    break;

  case 61:
#line 705 "A6_20.y"
                                                 {
		/*------------*/
		(currentSymbolTable->emptyArgList)++;
	}
#line 2438 "y.tab.c"
    break;

  case 62:
#line 710 "A6_20.y"
                                                  {
		/*The parameter is already added to the current Symbol Table*/
	}
#line 2446 "y.tab.c"
    break;

  case 63:
#line 713 "A6_20.y"
                       {}
#line 2452 "y.tab.c"
    break;

  case 64:
#line 716 "A6_20.y"
                                          {
		(yyval._expression) = (yyvsp[0]._expression);
	}
#line 2460 "y.tab.c"
    break;

  case 65:
#line 721 "A6_20.y"
                                   {
		(yyval._nextlist) = (yyvsp[0]._nextlist);
	}
#line 2468 "y.tab.c"
    break;

  case 66:
#line 724 "A6_20.y"
                             {
		(yyval._nextlist) = NULL;
	}
#line 2476 "y.tab.c"
    break;

  case 67:
#line 727 "A6_20.y"
                            {
		(yyval._nextlist) = (yyvsp[0]._nextlist);
	}
#line 2484 "y.tab.c"
    break;

  case 68:
#line 730 "A6_20.y"
                            {
		(yyval._nextlist) = (yyvsp[0]._nextlist);
	}
#line 2492 "y.tab.c"
    break;

  case 69:
#line 733 "A6_20.y"
                       {
		(yyval._nextlist) = (yyvsp[0]._nextlist);
	}
#line 2500 "y.tab.c"
    break;

  case 70:
#line 738 "A6_20.y"
                                                   {
		(yyval._nextlist) = (yyvsp[-1]._nextlist);
	}
#line 2508 "y.tab.c"
    break;

  case 71:
#line 742 "A6_20.y"
                                        {
			(yyval._nextlist) = (yyvsp[0]._nextlist);
		}
#line 2516 "y.tab.c"
    break;

  case 72:
#line 745 "A6_20.y"
                    {
		(yyval._nextlist) = NULL;	
	}
#line 2524 "y.tab.c"
    break;

  case 73:
#line 749 "A6_20.y"
                                {
		(yyval._nextlist) = (yyvsp[0]._nextlist);
	}
#line 2532 "y.tab.c"
    break;

  case 74:
#line 752 "A6_20.y"
                                     {
		backpatch((yyvsp[-2]._nextlist),(yyvsp[-1]._instruction));
		(yyval._nextlist) = (yyvsp[0]._nextlist);
	}
#line 2541 "y.tab.c"
    break;

  case 75:
#line 757 "A6_20.y"
                           {
		(yyval._nextlist) = NULL;
	}
#line 2549 "y.tab.c"
    break;

  case 76:
#line 760 "A6_20.y"
                  {
		(yyval._nextlist) = (yyvsp[0]._nextlist);
	}
#line 2557 "y.tab.c"
    break;

  case 77:
#line 764 "A6_20.y"
                                          {
		(yyval._expression) = (yyvsp[-1]._expression);
	}
#line 2565 "y.tab.c"
    break;

  case 78:
#line 768 "A6_20.y"
                               {
		(yyval._expression) = (yyvsp[0]._expression);
	}
#line 2573 "y.tab.c"
    break;

  case 79:
#line 771 "A6_20.y"
                    {
		/*Initialize Expression to NULL*/
		(yyval._expression).symTPtr = NULL;
	}
#line 2582 "y.tab.c"
    break;

  case 80:
#line 776 "A6_20.y"
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
#line 2601 "y.tab.c"
    break;

  case 81:
#line 790 "A6_20.y"
                                                             {
		/*N is used for the falselist of expression to skip the block and M is used for truelist of expression*/
		(yyvsp[0]._nextlist) = merge((yyvsp[0]._nextlist),makelist(nextInstruction));
		globalQuadArray.emit(Q_GOTO,"-1");
		backpatch((yyvsp[-3]._nextlist),nextInstruction);
		CONV2BOOL(&(yyvsp[-4]._expression));
		
		backpatch((yyvsp[-4]._expression).truelist,(yyvsp[-1]._instruction));
		(yyval._nextlist) = merge((yyvsp[0]._nextlist),(yyvsp[-4]._expression).falselist);
	}
#line 2616 "y.tab.c"
    break;

  case 82:
#line 801 "A6_20.y"
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
#line 2633 "y.tab.c"
    break;

  case 83:
#line 814 "A6_20.y"
                                              {
		if((yyvsp[-1]._expression).symTPtr == NULL)
			globalQuadArray.emit(Q_RETURN);
		else
		{
			globalQuadArray.emit(Q_RETURN,(yyvsp[-1]._expression).symTPtr->name);
		}
		(yyval._nextlist)=NULL;
	}
#line 2647 "y.tab.c"
    break;

  case 87:
#line 829 "A6_20.y"
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
		currentSymbolTable = new symbolTable();
	}
#line 2684 "y.tab.c"
    break;

  case 88:
#line 862 "A6_20.y"
                                                                     {
		symbol * func = globalSymbolTable->lookup((yyvsp[-1]._expression).symTPtr->name);
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
		func->nested->lastQuad = nextInstruction-1;
		//Create a new Current Symbol Table
		currentSymbolTable = new symbolTable();
}
#line 2710 "y.tab.c"
    break;


#line 2714 "y.tab.c"

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
#line 884 "A6_20.y"

void yyerror(const char*s)
{
	printf("%s",s);
}
