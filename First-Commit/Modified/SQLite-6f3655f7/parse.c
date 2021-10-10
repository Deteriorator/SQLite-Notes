/* Driver template for the LEMON parser generator.
** The author disclaims copyright to this source code.
*/
/* First off, code is include which follows the "include" declaration
** in the input file. */
#include <stdio.h>
#line 40 "parse.y"

#include "sqliteInt.h"
#include "parse.h"

#line 13 "parse.c"
/* Next is all token values, in a form suitable for use by makeheaders.
** This section will be null unless lemon is run with the -m switch.
*/
/* 
** These constants (all generated automatically by the parser generator)
** specify the various kinds of tokens (terminals) that the parser
** understands. 
**
** Each symbol here is a terminal symbol in the grammar.
*/
/* Make sure the INTERFACE macro is defined.
*/
#ifndef INTERFACE
# define INTERFACE 1
#endif
/* The next thing included is series of defines which control
** various aspects of the generated parser.
**    YYCODETYPE         is the data type used for storing terminal
**                       and nonterminal numbers.  "unsigned char" is
**                       used if there are fewer than 250 terminals
**                       and nonterminals.  "int" is used otherwise.
**    YYNOCODE           is a number of type YYCODETYPE which corresponds
**                       to no legal terminal or nonterminal number.  This
**                       number is used to fill in empty slots of the hash 
**                       table.
**    YYFALLBACK         If defined, this indicates that one or more tokens
**                       have fall-back values which should be used if the
**                       original value of the token will not parse.
**    YYACTIONTYPE       is the data type used for storing terminal
**                       and nonterminal numbers.  "unsigned char" is
**                       used if there are fewer than 250 rules and
**                       states combined.  "int" is used otherwise.
**    sqliteParserTOKENTYPE     is the data type used for minor tokens given 
**                       directly to the parser from the tokenizer.
**    YYMINORTYPE        is the data type used for all minor tokens.
**                       This is typically a union of many types, one of
**                       which is sqliteParserTOKENTYPE.  The entry in the union
**                       for base tokens is called "yy0".
**    YYSTACKDEPTH       is the maximum depth of the parser's stack.
**    sqliteParserARG_SDECL     A static variable declaration for the %extra_argument
**    sqliteParserARG_PDECL     A parameter declaration for the %extra_argument
**    sqliteParserARG_STORE     Code to store %extra_argument into yypParser
**    sqliteParserARG_FETCH     Code to extract %extra_argument from yypParser
**    YYNSTATE           the combined number of states.
**    YYNRULE            the number of rules in the grammar
**    YYERRORSYMBOL      is the code number of the error symbol.  If not
**                       defined, then do no error processing.
*/
/*  */
#define YYCODETYPE unsigned char
#define YYNOCODE 107
#define YYACTIONTYPE unsigned short int
#define sqliteParserTOKENTYPE Token
typedef union {
  sqliteParserTOKENTYPE yy0;
  ExprList* yy44;
  Token yy58;
  int yy64;
  IdList* yy154;
  Expr* yy202;
  int yy213;
} YYMINORTYPE;
#define YYSTACKDEPTH 100
#define sqliteParserARG_SDECL Parse *pParse;
#define sqliteParserARG_PDECL ,Parse *pParse
#define sqliteParserARG_FETCH Parse *pParse = yypParser->pParse
#define sqliteParserARG_STORE yypParser->pParse = pParse
#define YYNSTATE 218
#define YYNRULE 114
#define YYERRORSYMBOL 75
#define YYERRSYMDT yy213
#define YY_NO_ACTION      (YYNSTATE+YYNRULE+2)
#define YY_ACCEPT_ACTION  (YYNSTATE+YYNRULE+1)
#define YY_ERROR_ACTION   (YYNSTATE+YYNRULE)
/* Next is the action table.  Each entry in this table contains
**
**  +  An integer which is the number representing the look-ahead
**     token
**
**  +  An integer indicating what action to take.  Number (N) between
**     0 and YYNSTATE-1 mean shift the look-ahead and go to state N.
**     Numbers between YYNSTATE and YYNSTATE+YYNRULE-1 mean reduce by
**     rule N-YYNSTATE.  Number YYNSTATE+YYNRULE means that a syntax
**     error has occurred.  Number YYNSTATE+YYNRULE+1 means the parser
**     accepts its input.
**
**  +  A pointer to the next entry with the same hash value.
**
** The action table is really a series of hash tables.  Each hash
** table contains a number of entries which is a power of two.  The
** "state" table (which follows) contains information about the starting
** point and size of each hash table.
*/
struct yyActionEntry {
  YYCODETYPE   lookahead;   /* The value of the look-ahead token */
  YYCODETYPE   next;        /* Next entry + 1. Zero at end of collision chain */
  YYACTIONTYPE action;      /* Action to take for this look-ahead */
};
typedef struct yyActionEntry yyActionEntry;
static const yyActionEntry yyActionTable[] = {
/* State 0 */
  {  15,   0, 209}, /*  1:            END_OF_FILE shift  209 */
  {  76,   0,   4}, /*  2:                explain shift  4 */
  {  92,   5, 137}, /*  3:                 select shift  137 */
  {  48,   0, 138}, /*  4:                 SELECT shift  138 */
  {  17,   0, 208}, /*  5:                EXPLAIN shift  208 */
  {  65,   0, 207}, /*  6:                    cmd shift  207 */
  {  66,   0,   1}, /*  7:                cmdlist shift  1 */
  {  11,   0, 173}, /*  8:                 DELETE shift  173 */
  {  27,   0, 187}, /*  9:                 INSERT shift  187 */
  {   9,   0, 120}, /* 10:                 CREATE shift  120 */
  {  59,  14, 177}, /* 11:                 UPDATE shift  177 */
  {  86,   8, 333}, /* 12:                  input accept */
  {  72,   9,   6}, /* 13:           create_table shift  6 */
  {  14,   0, 132}, /* 14:                   DROP shift  132 */
  {  74,  11, 217}, /* 15:                   ecmd shift  217 */
/* State 1 */
  {   0,   0, 218}, /*  1:                      $ reduce 0 */
  {  49,   0,   2}, /*  2:                   SEMI shift  2 */
/* State 2 */
  {  72,   2,   6}, /*  1:           create_table shift  6 */
  {  48,   0, 138}, /*  2:                 SELECT shift  138 */
  {  74,   7,   3}, /*  3:                   ecmd shift  3 */
  {  27,   0, 187}, /*  4:                 INSERT shift  187 */
  {  76,   0,   4}, /*  5:                explain shift  4 */
  {  65,   8, 207}, /*  6:                    cmd shift  207 */
  {  14,   0, 132}, /*  7:                   DROP shift  132 */
  {  17,   0, 208}, /*  8:                EXPLAIN shift  208 */
  {  92,   0, 137}, /*  9:                 select shift  137 */
  {   9,   0, 120}, /* 10:                 CREATE shift  120 */
  {  11,   0, 173}, /* 11:                 DELETE shift  173 */
  {  59,  11, 177}, /* 12:                 UPDATE shift  177 */
/* State 4 */
  {  72,   2,   6}, /*  1:           create_table shift  6 */
  {  27,   5, 187}, /*  2:                 INSERT shift  187 */
  {  92,   7, 137}, /*  3:                 select shift  137 */
  {  48,   0, 138}, /*  4:                 SELECT shift  138 */
  {   9,   0, 120}, /*  5:                 CREATE shift  120 */
  {  59,   8, 177}, /*  6:                 UPDATE shift  177 */
  {  65,   9,   5}, /*  7:                    cmd shift  5 */
  {  14,   0, 132}, /*  8:                   DROP shift  132 */
  {  11,   0, 173}, /*  9:                 DELETE shift  173 */
/* State 6 */
  {  34,   0,   8}, /*  1:                     LP shift  8 */
  {  73,   0,   7}, /*  2:      create_table_args shift  7 */
/* State 8 */
  {  68,   3,  14}, /*  1:               columnid shift  14 */
  {  69,   0,   9}, /*  2:             columnlist shift  9 */
  {  24,   0,  92}, /*  3:                     ID shift  92 */
  {  67,   0, 119}, /*  4:                 column shift  119 */
/* State 9 */
  {   6,   0,  12}, /*  1:                  COMMA shift  12 */
  {  47,   0, 250}, /*  2:                     RP reduce 32 */
  {  71,   2,  10}, /*  3:           conslist_opt shift  10 */
/* State 10 */
  {  47,   0,  11}, /*  1:                     RP shift  11 */
/* State 12 */
  { 100,   3, 118}, /*  1:                  tcons shift  118 */
  { 101,   0, 117}, /*  2:                 tcons2 shift  117 */
  {  70,   0,  93}, /*  3:               conslist shift  93 */
  {  58,  10, 108}, /*  4:                 UNIQUE shift  108 */
  {  24,   0,  92}, /*  5:                     ID shift  92 */
  {   5,   0, 115}, /*  6:                  CHECK shift  115 */
  {  46,   0,  99}, /*  7:                PRIMARY shift  99 */
  {  67,   0,  13}, /*  8:                 column shift  13 */
  {  68,   4,  14}, /*  9:               columnid shift  14 */
  {   8,   0,  96}, /* 10:             CONSTRAINT shift  96 */
/* State 14 */
  { 102,   3,  15}, /*  1:                   type shift  15 */
  { 103,   0,  78}, /*  2:               typename shift  78 */
  {  24,   0,  91}, /*  3:                     ID shift  91 */
/* State 15 */
  {  63,   0,  16}, /*  1:               carglist shift  16 */
/* State 16 */
  {  64,   2,  75}, /*  1:                  ccons shift  75 */
  {   8,   0,  18}, /*  2:             CONSTRAINT shift  18 */
  {  58,   4,  28}, /*  3:                 UNIQUE shift  28 */
  {  10,   0,  76}, /*  4:                DEFAULT shift  76 */
  {  46,   8,  23}, /*  5:                PRIMARY shift  23 */
  {   5,   0,  29}, /*  6:                  CHECK shift  29 */
  {  62,   5,  17}, /*  7:                   carg shift  17 */
  {  38,   0,  21}, /*  8:                    NOT shift  21 */
/* State 18 */
  {  24,   0,  19}, /*  1:                     ID shift  19 */
/* State 19 */
  {   5,   0,  29}, /*  1:                  CHECK shift  29 */
  {  46,   0,  23}, /*  2:                PRIMARY shift  23 */
  {  38,   0,  21}, /*  3:                    NOT shift  21 */
  {  58,   3,  28}, /*  4:                 UNIQUE shift  28 */
  {  64,   0,  20}, /*  5:                  ccons shift  20 */
/* State 21 */
  {  40,   0,  22}, /*  1:                   NULL shift  22 */
/* State 23 */
  {  32,   0,  24}, /*  1:                    KEY shift  24 */
/* State 24 */
  {  12,   2,  27}, /*  1:                   DESC shift  27 */
  {   3,   0,  26}, /*  2:                    ASC shift  26 */
  {  98,   0,  25}, /*  3:              sortorder shift  25 */
/* State 29 */
  {  40,   0,  39}, /*  1:                   NULL shift  39 */
  {  34,   3,  32}, /*  2:                     LP shift  32 */
  {  24,   0,  36}, /*  3:                     ID shift  36 */
  {  28,   0,  40}, /*  4:                INTEGER shift  40 */
  {  54,   2,  42}, /*  5:                 STRING shift  42 */
  {  45,   0,  72}, /*  6:                   PLUS shift  72 */
  {  36,   0,  70}, /*  7:                  MINUS shift  70 */
  {  77,   0,  30}, /*  8:                   expr shift  30 */
  {  38,   4,  68}, /*  9:                    NOT shift  68 */
  {  19,   0,  41}, /* 10:                  FLOAT shift  41 */
/* State 30 */
  {  45,   3,  58}, /*  1:                   PLUS shift  58 */
  {  31,   5,  66}, /*  2:                 ISNULL shift  66 */
  {  30,   0,  56}, /*  3:                     IS shift  56 */
  {  33,   0,  48}, /*  4:                     LE shift  48 */
  {  16,  11,  54}, /*  5:                     EQ shift  54 */
  {  35,   0,  44}, /*  6:                     LT shift  44 */
  {  51,  12,  64}, /*  7:                  SLASH shift  64 */
  {  37,  14,  52}, /*  8:                     NE shift  52 */
  {  53,  15,  62}, /*  9:                   STAR shift  62 */
  {  39,   0,  67}, /* 10:                NOTNULL shift  67 */
  {   1,   0,  31}, /* 11:                    AND shift  31 */
  {  36,   0,  60}, /* 12:                  MINUS shift  60 */
  {  42,   0,  35}, /* 13:                     OR shift  35 */
  {  22,   0,  50}, /* 14:                     GE shift  50 */
  {  23,   0,  46}, /* 15:                     GT shift  46 */
/* State 31 */
  {  40,   0,  39}, /*  1:                   NULL shift  39 */
  {  34,   3,  32}, /*  2:                     LP shift  32 */
  {  24,   0,  36}, /*  3:                     ID shift  36 */
  {  28,   0,  40}, /*  4:                INTEGER shift  40 */
  {  54,   2,  42}, /*  5:                 STRING shift  42 */
  {  45,   0,  72}, /*  6:                   PLUS shift  72 */
  {  36,   0,  70}, /*  7:                  MINUS shift  70 */
  {  77,   0,  74}, /*  8:                   expr shift  74 */
  {  38,   4,  68}, /*  9:                    NOT shift  68 */
  {  19,   0,  41}, /* 10:                  FLOAT shift  41 */
/* State 32 */
  {  40,   0,  39}, /*  1:                   NULL shift  39 */
  {  34,   3,  32}, /*  2:                     LP shift  32 */
  {  24,   0,  36}, /*  3:                     ID shift  36 */
  {  28,   0,  40}, /*  4:                INTEGER shift  40 */
  {  54,   2,  42}, /*  5:                 STRING shift  42 */
  {  45,   0,  72}, /*  6:                   PLUS shift  72 */
  {  36,   0,  70}, /*  7:                  MINUS shift  70 */
  {  77,   0,  33}, /*  8:                   expr shift  33 */
  {  38,   4,  68}, /*  9:                    NOT shift  68 */
  {  19,   0,  41}, /* 10:                  FLOAT shift  41 */
/* State 33 */
  {  16,   0,  54}, /*  1:                     EQ shift  54 */
  {  33,   3,  48}, /*  2:                     LE shift  48 */
  {   1,   0,  31}, /*  3:                    AND shift  31 */
  {  51,   9,  64}, /*  4:                  SLASH shift  64 */
  {  36,   0,  60}, /*  5:                  MINUS shift  60 */
  {  53,  10,  62}, /*  6:                   STAR shift  62 */
  {  22,   0,  50}, /*  7:                     GE shift  50 */
  {  39,  12,  67}, /*  8:                NOTNULL shift  67 */
  {  35,   0,  44}, /*  9:                     LT shift  44 */
  {  37,   0,  52}, /* 10:                     NE shift  52 */
  {  42,   0,  35}, /* 11:                     OR shift  35 */
  {  23,   0,  46}, /* 12:                     GT shift  46 */
  {  31,   0,  66}, /* 13:                 ISNULL shift  66 */
  {  45,   0,  58}, /* 14:                   PLUS shift  58 */
  {  30,   0,  56}, /* 15:                     IS shift  56 */
  {  47,  13,  34}, /* 16:                     RP shift  34 */
/* State 35 */
  {  40,   0,  39}, /*  1:                   NULL shift  39 */
  {  34,   3,  32}, /*  2:                     LP shift  32 */
  {  24,   0,  36}, /*  3:                     ID shift  36 */
  {  28,   0,  40}, /*  4:                INTEGER shift  40 */
  {  54,   2,  42}, /*  5:                 STRING shift  42 */
  {  45,   0,  72}, /*  6:                   PLUS shift  72 */
  {  36,   0,  70}, /*  7:                  MINUS shift  70 */
  {  77,   0,  43}, /*  8:                   expr shift  43 */
  {  38,   4,  68}, /*  9:                    NOT shift  68 */
  {  19,   0,  41}, /* 10:                  FLOAT shift  41 */
/* State 36 */
  {  13,   0,  37}, /*  1:                    DOT shift  37 */
/* State 37 */
  {  24,   0,  38}, /*  1:                     ID shift  38 */
/* State 43 */
  {  16,   0,  54}, /*  1:                     EQ shift  54 */
  {   1,   0,  31}, /*  2:                    AND shift  31 */
  {  30,   1,  56}, /*  3:                     IS shift  56 */
  {  45,   5,  58}, /*  4:                   PLUS shift  58 */
  {  31,   0,  66}, /*  5:                 ISNULL shift  66 */
  {  33,   0,  48}, /*  6:                     LE shift  48 */
  {  22,   0,  50}, /*  7:                     GE shift  50 */
  {  35,   0,  44}, /*  8:                     LT shift  44 */
  {  36,   7,  60}, /*  9:                  MINUS shift  60 */
  {  51,  11,  64}, /* 10:                  SLASH shift  64 */
  {  37,  13,  52}, /* 11:                     NE shift  52 */
  {  53,  14,  62}, /* 12:                   STAR shift  62 */
  {  23,   0,  46}, /* 13:                     GT shift  46 */
  {  39,   0,  67}, /* 14:                NOTNULL shift  67 */
/* State 44 */
  {  40,   0,  39}, /*  1:                   NULL shift  39 */
  {  34,   3,  32}, /*  2:                     LP shift  32 */
  {  24,   0,  36}, /*  3:                     ID shift  36 */
  {  28,   0,  40}, /*  4:                INTEGER shift  40 */
  {  54,   2,  42}, /*  5:                 STRING shift  42 */
  {  45,   0,  72}, /*  6:                   PLUS shift  72 */
  {  36,   0,  70}, /*  7:                  MINUS shift  70 */
  {  77,   0,  45}, /*  8:                   expr shift  45 */
  {  38,   4,  68}, /*  9:                    NOT shift  68 */
  {  19,   0,  41}, /* 10:                  FLOAT shift  41 */
/* State 45 */
  {  36,   0,  60}, /*  1:                  MINUS shift  60 */
  {  53,   3,  62}, /*  2:                   STAR shift  62 */
  {  45,   0,  58}, /*  3:                   PLUS shift  58 */
  {  51,   0,  64}, /*  4:                  SLASH shift  64 */
/* State 46 */
  {  40,   0,  39}, /*  1:                   NULL shift  39 */
  {  34,   3,  32}, /*  2:                     LP shift  32 */
  {  24,   0,  36}, /*  3:                     ID shift  36 */
  {  28,   0,  40}, /*  4:                INTEGER shift  40 */
  {  54,   2,  42}, /*  5:                 STRING shift  42 */
  {  45,   0,  72}, /*  6:                   PLUS shift  72 */
  {  36,   0,  70}, /*  7:                  MINUS shift  70 */
  {  77,   0,  47}, /*  8:                   expr shift  47 */
  {  38,   4,  68}, /*  9:                    NOT shift  68 */
  {  19,   0,  41}, /* 10:                  FLOAT shift  41 */
/* State 47 */
  {  36,   0,  60}, /*  1:                  MINUS shift  60 */
  {  53,   3,  62}, /*  2:                   STAR shift  62 */
  {  45,   0,  58}, /*  3:                   PLUS shift  58 */
  {  51,   0,  64}, /*  4:                  SLASH shift  64 */
/* State 48 */
  {  40,   0,  39}, /*  1:                   NULL shift  39 */
  {  34,   3,  32}, /*  2:                     LP shift  32 */
  {  24,   0,  36}, /*  3:                     ID shift  36 */
  {  28,   0,  40}, /*  4:                INTEGER shift  40 */
  {  54,   2,  42}, /*  5:                 STRING shift  42 */
  {  45,   0,  72}, /*  6:                   PLUS shift  72 */
  {  36,   0,  70}, /*  7:                  MINUS shift  70 */
  {  77,   0,  49}, /*  8:                   expr shift  49 */
  {  38,   4,  68}, /*  9:                    NOT shift  68 */
  {  19,   0,  41}, /* 10:                  FLOAT shift  41 */
/* State 49 */
  {  36,   0,  60}, /*  1:                  MINUS shift  60 */
  {  53,   3,  62}, /*  2:                   STAR shift  62 */
  {  45,   0,  58}, /*  3:                   PLUS shift  58 */
  {  51,   0,  64}, /*  4:                  SLASH shift  64 */
/* State 50 */
  {  40,   0,  39}, /*  1:                   NULL shift  39 */
  {  34,   3,  32}, /*  2:                     LP shift  32 */
  {  24,   0,  36}, /*  3:                     ID shift  36 */
  {  28,   0,  40}, /*  4:                INTEGER shift  40 */
  {  54,   2,  42}, /*  5:                 STRING shift  42 */
  {  45,   0,  72}, /*  6:                   PLUS shift  72 */
  {  36,   0,  70}, /*  7:                  MINUS shift  70 */
  {  77,   0,  51}, /*  8:                   expr shift  51 */
  {  38,   4,  68}, /*  9:                    NOT shift  68 */
  {  19,   0,  41}, /* 10:                  FLOAT shift  41 */
/* State 51 */
  {  36,   0,  60}, /*  1:                  MINUS shift  60 */
  {  53,   3,  62}, /*  2:                   STAR shift  62 */
  {  45,   0,  58}, /*  3:                   PLUS shift  58 */
  {  51,   0,  64}, /*  4:                  SLASH shift  64 */
/* State 52 */
  {  40,   0,  39}, /*  1:                   NULL shift  39 */
  {  34,   3,  32}, /*  2:                     LP shift  32 */
  {  24,   0,  36}, /*  3:                     ID shift  36 */
  {  28,   0,  40}, /*  4:                INTEGER shift  40 */
  {  54,   2,  42}, /*  5:                 STRING shift  42 */
  {  45,   0,  72}, /*  6:                   PLUS shift  72 */
  {  36,   0,  70}, /*  7:                  MINUS shift  70 */
  {  77,   0,  53}, /*  8:                   expr shift  53 */
  {  38,   4,  68}, /*  9:                    NOT shift  68 */
  {  19,   0,  41}, /* 10:                  FLOAT shift  41 */
/* State 53 */
  {  35,   0,  44}, /*  1:                     LT shift  44 */
  {  33,   0,  48}, /*  2:                     LE shift  48 */
  {  45,   0,  58}, /*  3:                   PLUS shift  58 */
  {  51,   1,  64}, /*  4:                  SLASH shift  64 */
  {  36,   0,  60}, /*  5:                  MINUS shift  60 */
  {  53,   3,  62}, /*  6:                   STAR shift  62 */
  {  22,   0,  50}, /*  7:                     GE shift  50 */
  {  23,   0,  46}, /*  8:                     GT shift  46 */
/* State 54 */
  {  40,   0,  39}, /*  1:                   NULL shift  39 */
  {  34,   3,  32}, /*  2:                     LP shift  32 */
  {  24,   0,  36}, /*  3:                     ID shift  36 */
  {  28,   0,  40}, /*  4:                INTEGER shift  40 */
  {  54,   2,  42}, /*  5:                 STRING shift  42 */
  {  45,   0,  72}, /*  6:                   PLUS shift  72 */
  {  36,   0,  70}, /*  7:                  MINUS shift  70 */
  {  77,   0,  55}, /*  8:                   expr shift  55 */
  {  38,   4,  68}, /*  9:                    NOT shift  68 */
  {  19,   0,  41}, /* 10:                  FLOAT shift  41 */
/* State 55 */
  {  35,   0,  44}, /*  1:                     LT shift  44 */
  {  33,   0,  48}, /*  2:                     LE shift  48 */
  {  45,   0,  58}, /*  3:                   PLUS shift  58 */
  {  51,   1,  64}, /*  4:                  SLASH shift  64 */
  {  36,   0,  60}, /*  5:                  MINUS shift  60 */
  {  53,   3,  62}, /*  6:                   STAR shift  62 */
  {  22,   0,  50}, /*  7:                     GE shift  50 */
  {  23,   0,  46}, /*  8:                     GT shift  46 */
/* State 56 */
  {  40,   0,  39}, /*  1:                   NULL shift  39 */
  {  34,   3,  32}, /*  2:                     LP shift  32 */
  {  24,   0,  36}, /*  3:                     ID shift  36 */
  {  28,   0,  40}, /*  4:                INTEGER shift  40 */
  {  54,   2,  42}, /*  5:                 STRING shift  42 */
  {  45,   0,  72}, /*  6:                   PLUS shift  72 */
  {  36,   0,  70}, /*  7:                  MINUS shift  70 */
  {  77,   0,  57}, /*  8:                   expr shift  57 */
  {  38,   4,  68}, /*  9:                    NOT shift  68 */
  {  19,   0,  41}, /* 10:                  FLOAT shift  41 */
/* State 57 */
  {  35,   0,  44}, /*  1:                     LT shift  44 */
  {  33,   0,  48}, /*  2:                     LE shift  48 */
  {  45,   0,  58}, /*  3:                   PLUS shift  58 */
  {  51,   1,  64}, /*  4:                  SLASH shift  64 */
  {  36,   0,  60}, /*  5:                  MINUS shift  60 */
  {  53,   3,  62}, /*  6:                   STAR shift  62 */
  {  22,   0,  50}, /*  7:                     GE shift  50 */
  {  23,   0,  46}, /*  8:                     GT shift  46 */
/* State 58 */
  {  40,   0,  39}, /*  1:                   NULL shift  39 */
  {  34,   3,  32}, /*  2:                     LP shift  32 */
  {  24,   0,  36}, /*  3:                     ID shift  36 */
  {  28,   0,  40}, /*  4:                INTEGER shift  40 */
  {  54,   2,  42}, /*  5:                 STRING shift  42 */
  {  45,   0,  72}, /*  6:                   PLUS shift  72 */
  {  36,   0,  70}, /*  7:                  MINUS shift  70 */
  {  77,   0,  59}, /*  8:                   expr shift  59 */
  {  38,   4,  68}, /*  9:                    NOT shift  68 */
  {  19,   0,  41}, /* 10:                  FLOAT shift  41 */
/* State 59 */
  {  51,   0,  64}, /*  1:                  SLASH shift  64 */
  {  53,   1,  62}, /*  2:                   STAR shift  62 */
/* State 60 */
  {  40,   0,  39}, /*  1:                   NULL shift  39 */
  {  34,   3,  32}, /*  2:                     LP shift  32 */
  {  24,   0,  36}, /*  3:                     ID shift  36 */
  {  28,   0,  40}, /*  4:                INTEGER shift  40 */
  {  54,   2,  42}, /*  5:                 STRING shift  42 */
  {  45,   0,  72}, /*  6:                   PLUS shift  72 */
  {  36,   0,  70}, /*  7:                  MINUS shift  70 */
  {  77,   0,  61}, /*  8:                   expr shift  61 */
  {  38,   4,  68}, /*  9:                    NOT shift  68 */
  {  19,   0,  41}, /* 10:                  FLOAT shift  41 */
/* State 61 */
  {  51,   0,  64}, /*  1:                  SLASH shift  64 */
  {  53,   1,  62}, /*  2:                   STAR shift  62 */
/* State 62 */
  {  40,   0,  39}, /*  1:                   NULL shift  39 */
  {  34,   3,  32}, /*  2:                     LP shift  32 */
  {  24,   0,  36}, /*  3:                     ID shift  36 */
  {  28,   0,  40}, /*  4:                INTEGER shift  40 */
  {  54,   2,  42}, /*  5:                 STRING shift  42 */
  {  45,   0,  72}, /*  6:                   PLUS shift  72 */
  {  36,   0,  70}, /*  7:                  MINUS shift  70 */
  {  77,   0,  63}, /*  8:                   expr shift  63 */
  {  38,   4,  68}, /*  9:                    NOT shift  68 */
  {  19,   0,  41}, /* 10:                  FLOAT shift  41 */
/* State 64 */
  {  40,   0,  39}, /*  1:                   NULL shift  39 */
  {  34,   3,  32}, /*  2:                     LP shift  32 */
  {  24,   0,  36}, /*  3:                     ID shift  36 */
  {  28,   0,  40}, /*  4:                INTEGER shift  40 */
  {  54,   2,  42}, /*  5:                 STRING shift  42 */
  {  45,   0,  72}, /*  6:                   PLUS shift  72 */
  {  36,   0,  70}, /*  7:                  MINUS shift  70 */
  {  77,   0,  65}, /*  8:                   expr shift  65 */
  {  38,   4,  68}, /*  9:                    NOT shift  68 */
  {  19,   0,  41}, /* 10:                  FLOAT shift  41 */
/* State 68 */
  {  40,   0,  39}, /*  1:                   NULL shift  39 */
  {  34,   3,  32}, /*  2:                     LP shift  32 */
  {  24,   0,  36}, /*  3:                     ID shift  36 */
  {  28,   0,  40}, /*  4:                INTEGER shift  40 */
  {  54,   2,  42}, /*  5:                 STRING shift  42 */
  {  45,   0,  72}, /*  6:                   PLUS shift  72 */
  {  36,   0,  70}, /*  7:                  MINUS shift  70 */
  {  77,   0,  69}, /*  8:                   expr shift  69 */
  {  38,   4,  68}, /*  9:                    NOT shift  68 */
  {  19,   0,  41}, /* 10:                  FLOAT shift  41 */
/* State 70 */
  {  40,   0,  39}, /*  1:                   NULL shift  39 */
  {  34,   3,  32}, /*  2:                     LP shift  32 */
  {  24,   0,  36}, /*  3:                     ID shift  36 */
  {  28,   0,  40}, /*  4:                INTEGER shift  40 */
  {  54,   2,  42}, /*  5:                 STRING shift  42 */
  {  45,   0,  72}, /*  6:                   PLUS shift  72 */
  {  36,   0,  70}, /*  7:                  MINUS shift  70 */
  {  77,   0,  71}, /*  8:                   expr shift  71 */
  {  38,   4,  68}, /*  9:                    NOT shift  68 */
  {  19,   0,  41}, /* 10:                  FLOAT shift  41 */
/* State 72 */
  {  40,   0,  39}, /*  1:                   NULL shift  39 */
  {  34,   3,  32}, /*  2:                     LP shift  32 */
  {  24,   0,  36}, /*  3:                     ID shift  36 */
  {  28,   0,  40}, /*  4:                INTEGER shift  40 */
  {  54,   2,  42}, /*  5:                 STRING shift  42 */
  {  45,   0,  72}, /*  6:                   PLUS shift  72 */
  {  36,   0,  70}, /*  7:                  MINUS shift  70 */
  {  77,   0,  73}, /*  8:                   expr shift  73 */
  {  38,   4,  68}, /*  9:                    NOT shift  68 */
  {  19,   0,  41}, /* 10:                  FLOAT shift  41 */
/* State 74 */
  {  39,   0,  67}, /*  1:                NOTNULL shift  67 */
  {  53,   0,  62}, /*  2:                   STAR shift  62 */
  {  22,   0,  50}, /*  3:                     GE shift  50 */
  {  16,   0,  54}, /*  4:                     EQ shift  54 */
  {  30,   0,  56}, /*  5:                     IS shift  56 */
  {  31,   0,  66}, /*  6:                 ISNULL shift  66 */
  {  45,   0,  58}, /*  7:                   PLUS shift  58 */
  {  33,   0,  48}, /*  8:                     LE shift  48 */
  {  23,   0,  46}, /*  9:                     GT shift  46 */
  {  35,   3,  44}, /* 10:                     LT shift  44 */
  {  36,   9,  60}, /* 11:                  MINUS shift  60 */
  {  37,   0,  52}, /* 12:                     NE shift  52 */
  {  51,   0,  64}, /* 13:                  SLASH shift  64 */
/* State 76 */
  {  40,   0,  39}, /*  1:                   NULL shift  39 */
  {  34,   3,  32}, /*  2:                     LP shift  32 */
  {  24,   0,  36}, /*  3:                     ID shift  36 */
  {  28,   0,  40}, /*  4:                INTEGER shift  40 */
  {  54,   2,  42}, /*  5:                 STRING shift  42 */
  {  45,   0,  72}, /*  6:                   PLUS shift  72 */
  {  36,   0,  70}, /*  7:                  MINUS shift  70 */
  {  77,   0,  77}, /*  8:                   expr shift  77 */
  {  38,   4,  68}, /*  9:                    NOT shift  68 */
  {  19,   0,  41}, /* 10:                  FLOAT shift  41 */
/* State 77 */
  {  45,   3,  58}, /*  1:                   PLUS shift  58 */
  {  31,   5,  66}, /*  2:                 ISNULL shift  66 */
  {  30,   0,  56}, /*  3:                     IS shift  56 */
  {  33,   0,  48}, /*  4:                     LE shift  48 */
  {  16,  11,  54}, /*  5:                     EQ shift  54 */
  {  35,   0,  44}, /*  6:                     LT shift  44 */
  {  51,  12,  64}, /*  7:                  SLASH shift  64 */
  {  37,  14,  52}, /*  8:                     NE shift  52 */
  {  53,  15,  62}, /*  9:                   STAR shift  62 */
  {  39,   0,  67}, /* 10:                NOTNULL shift  67 */
  {   1,   0,  31}, /* 11:                    AND shift  31 */
  {  36,   0,  60}, /* 12:                  MINUS shift  60 */
  {  42,   0,  35}, /* 13:                     OR shift  35 */
  {  22,   0,  50}, /* 14:                     GE shift  50 */
  {  23,   0,  46}, /* 15:                     GT shift  46 */
/* State 78 */
  {  34,   2,  79}, /*  1:                     LP shift  79 */
  {  24,   0,  90}, /*  2:                     ID shift  90 */
/* State 79 */
  {  36,   3,  88}, /*  1:                  MINUS shift  88 */
  {  45,   0,  86}, /*  2:                   PLUS shift  86 */
  {  28,   0,  85}, /*  3:                INTEGER shift  85 */
  {  95,   0,  80}, /*  4:                 signed shift  80 */
/* State 80 */
  {   6,   0,  82}, /*  1:                  COMMA shift  82 */
  {  47,   0,  81}, /*  2:                     RP shift  81 */
/* State 82 */
  {  36,   3,  88}, /*  1:                  MINUS shift  88 */
  {  45,   0,  86}, /*  2:                   PLUS shift  86 */
  {  28,   0,  85}, /*  3:                INTEGER shift  85 */
  {  95,   0,  83}, /*  4:                 signed shift  83 */
/* State 83 */
  {  47,   0,  84}, /*  1:                     RP shift  84 */
/* State 86 */
  {  28,   0,  87}, /*  1:                INTEGER shift  87 */
/* State 88 */
  {  28,   0,  89}, /*  1:                INTEGER shift  89 */
/* State 92 */
  {  24,   0, 232}, /*  1:                     ID reduce 14 */
/* State 93 */
  {   6,   0,  94}, /*  1:                  COMMA shift  94 */
  {  47,   0, 251}, /*  2:                     RP reduce 33 */
/* State 94 */
  {  58,   2, 108}, /*  1:                 UNIQUE shift  108 */
  {  46,   0,  99}, /*  2:                PRIMARY shift  99 */
  {   8,   0,  96}, /*  3:             CONSTRAINT shift  96 */
  {   5,   0, 115}, /*  4:                  CHECK shift  115 */
  { 100,   1,  95}, /*  5:                  tcons shift  95 */
  { 101,   4, 117}, /*  6:                 tcons2 shift  117 */
/* State 96 */
  {  24,   0,  97}, /*  1:                     ID shift  97 */
/* State 97 */
  {   5,   0, 115}, /*  1:                  CHECK shift  115 */
  { 101,   1,  98}, /*  2:                 tcons2 shift  98 */
  {  58,   4, 108}, /*  3:                 UNIQUE shift  108 */
  {  46,   0,  99}, /*  4:                PRIMARY shift  99 */
/* State 99 */
  {  32,   0, 100}, /*  1:                    KEY shift  100 */
/* State 100 */
  {  34,   0, 101}, /*  1:                     LP shift  101 */
/* State 101 */
  {  84,   3, 107}, /*  1:                idxitem shift  107 */
  {  85,   0, 102}, /*  2:                idxlist shift  102 */
  {  24,   0, 106}, /*  3:                     ID shift  106 */
/* State 102 */
  {   6,   0, 104}, /*  1:                  COMMA shift  104 */
  {  47,   0, 103}, /*  2:                     RP shift  103 */
/* State 104 */
  {  84,   2, 105}, /*  1:                idxitem shift  105 */
  {  24,   0, 106}, /*  2:                     ID shift  106 */
/* State 108 */
  {  34,   0, 109}, /*  1:                     LP shift  109 */
/* State 109 */
  {  24,   0, 114}, /*  1:                     ID shift  114 */
  {  83,   0, 110}, /*  2:                 idlist shift  110 */
/* State 110 */
  {   6,   0, 112}, /*  1:                  COMMA shift  112 */
  {  47,   0, 111}, /*  2:                     RP shift  111 */
/* State 112 */
  {  24,   0, 113}, /*  1:                     ID shift  113 */
/* State 115 */
  {  40,   0,  39}, /*  1:                   NULL shift  39 */
  {  34,   3,  32}, /*  2:                     LP shift  32 */
  {  24,   0,  36}, /*  3:                     ID shift  36 */
  {  28,   0,  40}, /*  4:                INTEGER shift  40 */
  {  54,   2,  42}, /*  5:                 STRING shift  42 */
  {  45,   0,  72}, /*  6:                   PLUS shift  72 */
  {  36,   0,  70}, /*  7:                  MINUS shift  70 */
  {  77,   0, 116}, /*  8:                   expr shift  116 */
  {  38,   4,  68}, /*  9:                    NOT shift  68 */
  {  19,   0,  41}, /* 10:                  FLOAT shift  41 */
/* State 116 */
  {  45,   3,  58}, /*  1:                   PLUS shift  58 */
  {  31,   5,  66}, /*  2:                 ISNULL shift  66 */
  {  30,   0,  56}, /*  3:                     IS shift  56 */
  {  33,   0,  48}, /*  4:                     LE shift  48 */
  {  16,  11,  54}, /*  5:                     EQ shift  54 */
  {  35,   0,  44}, /*  6:                     LT shift  44 */
  {  51,  12,  64}, /*  7:                  SLASH shift  64 */
  {  37,  14,  52}, /*  8:                     NE shift  52 */
  {  53,  15,  62}, /*  9:                   STAR shift  62 */
  {  39,   0,  67}, /* 10:                NOTNULL shift  67 */
  {   1,   0,  31}, /* 11:                    AND shift  31 */
  {  36,   0,  60}, /* 12:                  MINUS shift  60 */
  {  42,   0,  35}, /* 13:                     OR shift  35 */
  {  22,   0,  50}, /* 14:                     GE shift  50 */
  {  23,   0,  46}, /* 15:                     GT shift  46 */
/* State 120 */
  { 104,   0, 123}, /*  1:             uniqueflag shift  123 */
  {  26,   0, 327}, /*  2:                  INDEX reduce 109 */
  {  58,   2, 131}, /*  3:                 UNIQUE shift  131 */
  {  55,   0, 121}, /*  4:                  TABLE shift  121 */
/* State 121 */
  {  24,   0, 122}, /*  1:                     ID shift  122 */
/* State 122 */
  {  34,   0, 227}, /*  1:                     LP reduce 9 */
/* State 123 */
  {  26,   0, 124}, /*  1:                  INDEX shift  124 */
/* State 124 */
  {  24,   0, 125}, /*  1:                     ID shift  125 */
/* State 125 */
  {  41,   0, 126}, /*  1:                     ON shift  126 */
/* State 126 */
  {  24,   0, 127}, /*  1:                     ID shift  127 */
/* State 127 */
  {  34,   0, 128}, /*  1:                     LP shift  128 */
/* State 128 */
  {  84,   3, 107}, /*  1:                idxitem shift  107 */
  {  85,   0, 129}, /*  2:                idxlist shift  129 */
  {  24,   0, 106}, /*  3:                     ID shift  106 */
/* State 129 */
  {   6,   0, 104}, /*  1:                  COMMA shift  104 */
  {  47,   0, 130}, /*  2:                     RP shift  130 */
/* State 131 */
  {  26,   0, 326}, /*  1:                  INDEX reduce 108 */
/* State 132 */
  {  26,   0, 135}, /*  1:                  INDEX shift  135 */
  {  55,   0, 133}, /*  2:                  TABLE shift  133 */
/* State 133 */
  {  24,   0, 134}, /*  1:                     ID shift  134 */
/* State 135 */
  {  24,   0, 136}, /*  1:                     ID shift  136 */
/* State 138 */
  {  90,   0, 168}, /*  1:                   sclp shift  168 */
  {  91,   0, 139}, /*  2:             selcollist shift  139 */
  {  53,   0, 164}, /*  3:                   STAR shift  164 */
/* State 139 */
  {   6,   0, 156}, /*  1:                  COMMA shift  156 */
  {  82,   0, 140}, /*  2:                   from shift  140 */
  {  20,   0, 157}, /*  3:                   FROM shift  157 */
/* State 140 */
  {  61,   0, 154}, /*  1:                  WHERE shift  154 */
  { 105,   1, 141}, /*  2:              where_opt shift  141 */
/* State 141 */
  {  43,   0, 143}, /*  1:                  ORDER shift  143 */
  {  89,   1, 142}, /*  2:            orderby_opt shift  142 */
/* State 143 */
  {   4,   0, 144}, /*  1:                     BY shift  144 */
/* State 144 */
  {  96,   3, 152}, /*  1:               sortitem shift  152 */
  {  97,   0, 145}, /*  2:               sortlist shift  145 */
  {  24,   0, 149}, /*  3:                     ID shift  149 */
/* State 145 */
  {   6,   0, 146}, /*  1:                  COMMA shift  146 */
/* State 146 */
  {  96,   2, 147}, /*  1:               sortitem shift  147 */
  {  24,   0, 149}, /*  2:                     ID shift  149 */
/* State 147 */
  {  12,   2,  27}, /*  1:                   DESC shift  27 */
  {   3,   0,  26}, /*  2:                    ASC shift  26 */
  {  98,   0, 148}, /*  3:              sortorder shift  148 */
/* State 149 */
  {  13,   0, 150}, /*  1:                    DOT shift  150 */
/* State 150 */
  {  24,   0, 151}, /*  1:                     ID shift  151 */
/* State 152 */
  {  12,   2,  27}, /*  1:                   DESC shift  27 */
  {   3,   0,  26}, /*  2:                    ASC shift  26 */
  {  98,   0, 153}, /*  3:              sortorder shift  153 */
/* State 154 */
  {  40,   0,  39}, /*  1:                   NULL shift  39 */
  {  34,   3,  32}, /*  2:                     LP shift  32 */
  {  24,   0,  36}, /*  3:                     ID shift  36 */
  {  28,   0,  40}, /*  4:                INTEGER shift  40 */
  {  54,   2,  42}, /*  5:                 STRING shift  42 */
  {  45,   0,  72}, /*  6:                   PLUS shift  72 */
  {  36,   0,  70}, /*  7:                  MINUS shift  70 */
  {  77,   0, 155}, /*  8:                   expr shift  155 */
  {  38,   4,  68}, /*  9:                    NOT shift  68 */
  {  19,   0,  41}, /* 10:                  FLOAT shift  41 */
/* State 155 */
  {  45,   3,  58}, /*  1:                   PLUS shift  58 */
  {  31,   5,  66}, /*  2:                 ISNULL shift  66 */
  {  30,   0,  56}, /*  3:                     IS shift  56 */
  {  33,   0,  48}, /*  4:                     LE shift  48 */
  {  16,  11,  54}, /*  5:                     EQ shift  54 */
  {  35,   0,  44}, /*  6:                     LT shift  44 */
  {  51,  12,  64}, /*  7:                  SLASH shift  64 */
  {  37,  14,  52}, /*  8:                     NE shift  52 */
  {  53,  15,  62}, /*  9:                   STAR shift  62 */
  {  39,   0,  67}, /* 10:                NOTNULL shift  67 */
  {   1,   0,  31}, /* 11:                    AND shift  31 */
  {  36,   0,  60}, /* 12:                  MINUS shift  60 */
  {  42,   0,  35}, /* 13:                     OR shift  35 */
  {  22,   0,  50}, /* 14:                     GE shift  50 */
  {  23,   0,  46}, /* 15:                     GT shift  46 */
/* State 157 */
  {  99,   2, 160}, /*  1:             stl_prefix shift  160 */
  {  93,   3, 158}, /*  2:             seltablist shift  158 */
  {  24,   0, 272}, /*  3:                     ID reduce 54 */
/* State 158 */
  {   6,   0, 159}, /*  1:                  COMMA shift  159 */
/* State 159 */
  {  24,   0, 271}, /*  1:                     ID reduce 53 */
/* State 160 */
  {  24,   0, 161}, /*  1:                     ID shift  161 */
/* State 161 */
  {   2,   0, 162}, /*  1:                     AS shift  162 */
/* State 162 */
  {  24,   0, 163}, /*  1:                     ID shift  163 */
/* State 164 */
  {  82,   2, 165}, /*  1:                   from shift  165 */
  {  20,   0, 157}, /*  2:                   FROM shift  157 */
/* State 165 */
  {  61,   0, 154}, /*  1:                  WHERE shift  154 */
  { 105,   1, 166}, /*  2:              where_opt shift  166 */
/* State 166 */
  {  43,   0, 143}, /*  1:                  ORDER shift  143 */
  {  89,   1, 167}, /*  2:            orderby_opt shift  167 */
/* State 168 */
  {  40,   0,  39}, /*  1:                   NULL shift  39 */
  {  34,   3,  32}, /*  2:                     LP shift  32 */
  {  24,   0,  36}, /*  3:                     ID shift  36 */
  {  28,   0,  40}, /*  4:                INTEGER shift  40 */
  {  54,   2,  42}, /*  5:                 STRING shift  42 */
  {  45,   0,  72}, /*  6:                   PLUS shift  72 */
  {  36,   0,  70}, /*  7:                  MINUS shift  70 */
  {  77,   0, 169}, /*  8:                   expr shift  169 */
  {  38,   4,  68}, /*  9:                    NOT shift  68 */
  {  19,   0,  41}, /* 10:                  FLOAT shift  41 */
/* State 169 */
  {  16,   0,  54}, /*  1:                     EQ shift  54 */
  {  33,   9,  48}, /*  2:                     LE shift  48 */
  {   2,   0, 170}, /*  3:                     AS shift  170 */
  {  51,  10,  64}, /*  4:                  SLASH shift  64 */
  {  36,   0,  60}, /*  5:                  MINUS shift  60 */
  {  53,  12,  62}, /*  6:                   STAR shift  62 */
  {  22,   0,  50}, /*  7:                     GE shift  50 */
  {  39,  13,  67}, /*  8:                NOTNULL shift  67 */
  {   1,   0,  31}, /*  9:                    AND shift  31 */
  {  35,   0,  44}, /* 10:                     LT shift  44 */
  {  42,   0,  35}, /* 11:                     OR shift  35 */
  {  37,   0,  52}, /* 12:                     NE shift  52 */
  {  23,   0,  46}, /* 13:                     GT shift  46 */
  {  45,   0,  58}, /* 14:                   PLUS shift  58 */
  {  30,   0,  56}, /* 15:                     IS shift  56 */
  {  31,   0,  66}, /* 16:                 ISNULL shift  66 */
/* State 170 */
  {  54,   2, 172}, /*  1:                 STRING shift  172 */
  {  24,   0, 171}, /*  2:                     ID shift  171 */
/* State 173 */
  {  20,   0, 174}, /*  1:                   FROM shift  174 */
/* State 174 */
  {  24,   0, 175}, /*  1:                     ID shift  175 */
/* State 175 */
  {  61,   0, 154}, /*  1:                  WHERE shift  154 */
  { 105,   1, 176}, /*  2:              where_opt shift  176 */
/* State 177 */
  {  24,   0, 178}, /*  1:                     ID shift  178 */
/* State 178 */
  {  50,   0, 179}, /*  1:                    SET shift  179 */
/* State 179 */
  {  94,   2, 180}, /*  1:                setlist shift  180 */
  {  24,   0, 182}, /*  2:                     ID shift  182 */
/* State 180 */
  {  61,   0, 154}, /*  1:                  WHERE shift  154 */
  { 105,   1, 181}, /*  2:              where_opt shift  181 */
/* State 182 */
  {  16,   0, 183}, /*  1:                     EQ shift  183 */
/* State 183 */
  {  40,   0,  39}, /*  1:                   NULL shift  39 */
  {  34,   3,  32}, /*  2:                     LP shift  32 */
  {  24,   0,  36}, /*  3:                     ID shift  36 */
  {  28,   0,  40}, /*  4:                INTEGER shift  40 */
  {  54,   2,  42}, /*  5:                 STRING shift  42 */
  {  45,   0,  72}, /*  6:                   PLUS shift  72 */
  {  36,   0,  70}, /*  7:                  MINUS shift  70 */
  {  77,   0, 184}, /*  8:                   expr shift  184 */
  {  38,   4,  68}, /*  9:                    NOT shift  68 */
  {  19,   0,  41}, /* 10:                  FLOAT shift  41 */
/* State 184 */
  {  16,   0,  54}, /*  1:                     EQ shift  54 */
  {  33,   3,  48}, /*  2:                     LE shift  48 */
  {   1,   0,  31}, /*  3:                    AND shift  31 */
  {  51,   9,  64}, /*  4:                  SLASH shift  64 */
  {  36,   0,  60}, /*  5:                  MINUS shift  60 */
  {  53,  10,  62}, /*  6:                   STAR shift  62 */
  {  22,  12,  50}, /*  7:                     GE shift  50 */
  {  39,  13,  67}, /*  8:                NOTNULL shift  67 */
  {  35,   0,  44}, /*  9:                     LT shift  44 */
  {  37,   0,  52}, /* 10:                     NE shift  52 */
  {  42,   0,  35}, /* 11:                     OR shift  35 */
  {   6,   0, 185}, /* 12:                  COMMA shift  185 */
  {  23,   0,  46}, /* 13:                     GT shift  46 */
  {  45,   0,  58}, /* 14:                   PLUS shift  58 */
  {  30,   0,  56}, /* 15:                     IS shift  56 */
  {  31,   0,  66}, /* 16:                 ISNULL shift  66 */
/* State 185 */
  {  94,   2, 186}, /*  1:                setlist shift  186 */
  {  24,   0, 182}, /*  2:                     ID shift  182 */
/* State 187 */
  {  29,   0, 188}, /*  1:                   INTO shift  188 */
/* State 188 */
  {  24,   0, 189}, /*  1:                     ID shift  189 */
/* State 189 */
  {  81,   3, 190}, /*  1:          fieldlist_opt shift  190 */
  {  34,   0, 201}, /*  2:                     LP shift  201 */
  {  60,   0, 296}, /*  3:                 VALUES reduce 78 */
/* State 190 */
  {  60,   0, 191}, /*  1:                 VALUES shift  191 */
/* State 191 */
  {  34,   0, 192}, /*  1:                     LP shift  192 */
/* State 192 */
  {  28,   0, 197}, /*  1:                INTEGER shift  197 */
  {  19,   0, 198}, /*  2:                  FLOAT shift  198 */
  {  87,   0, 200}, /*  3:                   item shift  200 */
  {  88,   1, 193}, /*  4:               itemlist shift  193 */
  {  54,   2, 199}, /*  5:                 STRING shift  199 */
/* State 193 */
  {   6,   0, 195}, /*  1:                  COMMA shift  195 */
  {  47,   0, 194}, /*  2:                     RP shift  194 */
/* State 195 */
  {  28,   0, 197}, /*  1:                INTEGER shift  197 */
  {  19,   0, 198}, /*  2:                  FLOAT shift  198 */
  {  54,   0, 199}, /*  3:                 STRING shift  199 */
  {  87,   2, 196}, /*  4:                   item shift  196 */
/* State 201 */
  {  80,   2, 202}, /*  1:              fieldlist shift  202 */
  {  24,   0, 206}, /*  2:                     ID shift  206 */
/* State 202 */
  {   6,   0, 204}, /*  1:                  COMMA shift  204 */
  {  47,   0, 203}, /*  2:                     RP shift  203 */
/* State 203 */
  {  60,   0, 297}, /*  1:                 VALUES reduce 79 */
/* State 204 */
  {  24,   0, 205}, /*  1:                     ID shift  205 */
/* State 209 */
  {  25,   0, 210}, /*  1:                ILLEGAL shift  210 */
/* State 210 */
  {  52,   0, 211}, /*  1:                  SPACE shift  211 */
/* State 211 */
  {  57,   0, 212}, /*  1:        UNCLOSED_STRING shift  212 */
/* State 212 */
  {   7,   0, 213}, /*  1:                COMMENT shift  213 */
/* State 213 */
  {  21,   0, 214}, /*  1:               FUNCTION shift  214 */
/* State 214 */
  {  56,   0, 215}, /*  1:                 UMINUS shift  215 */
/* State 215 */
  {  18,   0, 216}, /*  1:                  FIELD shift  216 */
/* State 216 */
  {   0,   0, 219}, /*  1:                      $ reduce 1 */
};

/* The state table contains information needed to look up the correct
** action in the action table, given the current state of the parser.
** Information needed includes:
**
**  +  A pointer to the start of the action hash table in yyActionTable.
**
**  +  The number of entries in the action hash table.
**
**  +  The default action.  This is the action to take if no entry for
**     the given look-ahead is found in the action hash table.
*/
struct yyStateEntry {
  const yyActionEntry *hashtbl;  /* Start of the hash table in yyActionTable */
  YYCODETYPE nEntry;             /* Number of entries in action hash table */
  YYACTIONTYPE actionDefault;    /* Default action if look-ahead not found */
};
typedef struct yyStateEntry yyStateEntry;
static const yyStateEntry yyStateTable[] = {
  { &yyActionTable[0],  15, 224 },
  { &yyActionTable[15],   2, 332 },
  { &yyActionTable[17],  12, 224 },
  { &yyActionTable[29],   0, 221 },
  { &yyActionTable[29],   9, 332 },
  { &yyActionTable[38],   0, 222 },
  { &yyActionTable[38],   2, 332 },
  { &yyActionTable[40],   0, 226 },
  { &yyActionTable[40],   4, 332 },
  { &yyActionTable[44],   3, 332 },
  { &yyActionTable[47],   1, 332 },
  { &yyActionTable[48],   0, 228 },
  { &yyActionTable[48],  10, 332 },
  { &yyActionTable[58],   0, 229 },
  { &yyActionTable[58],   3, 332 },
  { &yyActionTable[61],   1, 242 },
  { &yyActionTable[62],   8, 231 },
  { &yyActionTable[70],   0, 241 },
  { &yyActionTable[70],   1, 332 },
  { &yyActionTable[71],   5, 332 },
  { &yyActionTable[76],   0, 243 },
  { &yyActionTable[76],   1, 332 },
  { &yyActionTable[77],   0, 246 },
  { &yyActionTable[77],   1, 332 },
  { &yyActionTable[78],   3, 283 },
  { &yyActionTable[81],   0, 247 },
  { &yyActionTable[81],   0, 281 },
  { &yyActionTable[81],   0, 282 },
  { &yyActionTable[81],   0, 248 },
  { &yyActionTable[81],  10, 332 },
  { &yyActionTable[91],  15, 249 },
  { &yyActionTable[106],  10, 332 },
  { &yyActionTable[116],  10, 332 },
  { &yyActionTable[126],  16, 332 },
  { &yyActionTable[142],   0, 300 },
  { &yyActionTable[142],  10, 332 },
  { &yyActionTable[152],   1, 301 },
  { &yyActionTable[153],   1, 332 },
  { &yyActionTable[154],   0, 303 },
  { &yyActionTable[154],   0, 302 },
  { &yyActionTable[154],   0, 304 },
  { &yyActionTable[154],   0, 305 },
  { &yyActionTable[154],   0, 306 },
  { &yyActionTable[154],  14, 308 },
  { &yyActionTable[168],  10, 332 },
  { &yyActionTable[178],   4, 309 },
  { &yyActionTable[182],  10, 332 },
  { &yyActionTable[192],   4, 310 },
  { &yyActionTable[196],  10, 332 },
  { &yyActionTable[206],   4, 311 },
  { &yyActionTable[210],  10, 332 },
  { &yyActionTable[220],   4, 312 },
  { &yyActionTable[224],  10, 332 },
  { &yyActionTable[234],   8, 313 },
  { &yyActionTable[242],  10, 332 },
  { &yyActionTable[252],   8, 314 },
  { &yyActionTable[260],  10, 332 },
  { &yyActionTable[270],   8, 315 },
  { &yyActionTable[278],  10, 332 },
  { &yyActionTable[288],   2, 316 },
  { &yyActionTable[290],  10, 332 },
  { &yyActionTable[300],   2, 317 },
  { &yyActionTable[302],  10, 332 },
  { &yyActionTable[312],   0, 318 },
  { &yyActionTable[312],  10, 332 },
  { &yyActionTable[322],   0, 319 },
  { &yyActionTable[322],   0, 320 },
  { &yyActionTable[322],   0, 321 },
  { &yyActionTable[322],  10, 332 },
  { &yyActionTable[332],   0, 322 },
  { &yyActionTable[332],  10, 332 },
  { &yyActionTable[342],   0, 323 },
  { &yyActionTable[342],  10, 332 },
  { &yyActionTable[352],   0, 324 },
  { &yyActionTable[352],  13, 307 },
  { &yyActionTable[365],   0, 244 },
  { &yyActionTable[365],  10, 332 },
  { &yyActionTable[375],  15, 245 },
  { &yyActionTable[390],   2, 233 },
  { &yyActionTable[392],   4, 332 },
  { &yyActionTable[396],   2, 332 },
  { &yyActionTable[398],   0, 234 },
  { &yyActionTable[398],   4, 332 },
  { &yyActionTable[402],   1, 332 },
  { &yyActionTable[403],   0, 235 },
  { &yyActionTable[403],   0, 238 },
  { &yyActionTable[403],   1, 332 },
  { &yyActionTable[404],   0, 239 },
  { &yyActionTable[404],   1, 332 },
  { &yyActionTable[405],   0, 240 },
  { &yyActionTable[405],   0, 237 },
  { &yyActionTable[405],   0, 236 },
  { &yyActionTable[405],   1, 332 },
  { &yyActionTable[406],   2, 332 },
  { &yyActionTable[408],   6, 332 },
  { &yyActionTable[414],   0, 252 },
  { &yyActionTable[414],   1, 332 },
  { &yyActionTable[415],   4, 332 },
  { &yyActionTable[419],   0, 254 },
  { &yyActionTable[419],   1, 332 },
  { &yyActionTable[420],   1, 332 },
  { &yyActionTable[421],   3, 332 },
  { &yyActionTable[424],   2, 332 },
  { &yyActionTable[426],   0, 256 },
  { &yyActionTable[426],   2, 332 },
  { &yyActionTable[428],   0, 328 },
  { &yyActionTable[428],   0, 330 },
  { &yyActionTable[428],   0, 329 },
  { &yyActionTable[428],   1, 332 },
  { &yyActionTable[429],   2, 332 },
  { &yyActionTable[431],   2, 332 },
  { &yyActionTable[433],   0, 257 },
  { &yyActionTable[433],   1, 332 },
  { &yyActionTable[434],   0, 259 },
  { &yyActionTable[434],   0, 260 },
  { &yyActionTable[434],  10, 332 },
  { &yyActionTable[444],  15, 258 },
  { &yyActionTable[459],   0, 255 },
  { &yyActionTable[459],   0, 253 },
  { &yyActionTable[459],   0, 230 },
  { &yyActionTable[459],   4, 332 },
  { &yyActionTable[463],   1, 332 },
  { &yyActionTable[464],   1, 332 },
  { &yyActionTable[465],   1, 332 },
  { &yyActionTable[466],   1, 332 },
  { &yyActionTable[467],   1, 332 },
  { &yyActionTable[468],   1, 332 },
  { &yyActionTable[469],   1, 332 },
  { &yyActionTable[470],   3, 332 },
  { &yyActionTable[473],   2, 332 },
  { &yyActionTable[475],   0, 325 },
  { &yyActionTable[475],   1, 332 },
  { &yyActionTable[476],   2, 332 },
  { &yyActionTable[478],   1, 332 },
  { &yyActionTable[479],   0, 261 },
  { &yyActionTable[479],   1, 332 },
  { &yyActionTable[480],   0, 331 },
  { &yyActionTable[480],   0, 262 },
  { &yyActionTable[480],   3, 266 },
  { &yyActionTable[483],   3, 332 },
  { &yyActionTable[486],   2, 285 },
  { &yyActionTable[488],   2, 275 },
  { &yyActionTable[490],   0, 263 },
  { &yyActionTable[490],   1, 332 },
  { &yyActionTable[491],   3, 332 },
  { &yyActionTable[494],   1, 276 },
  { &yyActionTable[495],   2, 332 },
  { &yyActionTable[497],   3, 283 },
  { &yyActionTable[500],   0, 277 },
  { &yyActionTable[500],   1, 279 },
  { &yyActionTable[501],   1, 332 },
  { &yyActionTable[502],   0, 280 },
  { &yyActionTable[502],   3, 283 },
  { &yyActionTable[505],   0, 278 },
  { &yyActionTable[505],  10, 332 },
  { &yyActionTable[515],  15, 286 },
  { &yyActionTable[530],   0, 265 },
  { &yyActionTable[530],   3, 332 },
  { &yyActionTable[533],   1, 270 },
  { &yyActionTable[534],   1, 332 },
  { &yyActionTable[535],   1, 332 },
  { &yyActionTable[536],   1, 273 },
  { &yyActionTable[537],   1, 332 },
  { &yyActionTable[538],   0, 274 },
  { &yyActionTable[538],   2, 332 },
  { &yyActionTable[540],   2, 285 },
  { &yyActionTable[542],   2, 275 },
  { &yyActionTable[544],   0, 264 },
  { &yyActionTable[544],  10, 332 },
  { &yyActionTable[554],  16, 267 },
  { &yyActionTable[570],   2, 332 },
  { &yyActionTable[572],   0, 268 },
  { &yyActionTable[572],   0, 269 },
  { &yyActionTable[572],   1, 332 },
  { &yyActionTable[573],   1, 332 },
  { &yyActionTable[574],   2, 285 },
  { &yyActionTable[576],   0, 284 },
  { &yyActionTable[576],   1, 332 },
  { &yyActionTable[577],   1, 332 },
  { &yyActionTable[578],   2, 332 },
  { &yyActionTable[580],   2, 285 },
  { &yyActionTable[582],   0, 287 },
  { &yyActionTable[582],   1, 332 },
  { &yyActionTable[583],  10, 332 },
  { &yyActionTable[593],  16, 289 },
  { &yyActionTable[609],   2, 332 },
  { &yyActionTable[611],   0, 288 },
  { &yyActionTable[611],   1, 332 },
  { &yyActionTable[612],   1, 332 },
  { &yyActionTable[613],   3, 332 },
  { &yyActionTable[616],   1, 332 },
  { &yyActionTable[617],   1, 332 },
  { &yyActionTable[618],   5, 332 },
  { &yyActionTable[623],   2, 332 },
  { &yyActionTable[625],   0, 290 },
  { &yyActionTable[625],   4, 332 },
  { &yyActionTable[629],   0, 291 },
  { &yyActionTable[629],   0, 293 },
  { &yyActionTable[629],   0, 294 },
  { &yyActionTable[629],   0, 295 },
  { &yyActionTable[629],   0, 292 },
  { &yyActionTable[629],   2, 332 },
  { &yyActionTable[631],   2, 332 },
  { &yyActionTable[633],   1, 332 },
  { &yyActionTable[634],   1, 332 },
  { &yyActionTable[635],   0, 298 },
  { &yyActionTable[635],   0, 299 },
  { &yyActionTable[635],   0, 223 },
  { &yyActionTable[635],   0, 225 },
  { &yyActionTable[635],   1, 332 },
  { &yyActionTable[636],   1, 332 },
  { &yyActionTable[637],   1, 332 },
  { &yyActionTable[638],   1, 332 },
  { &yyActionTable[639],   1, 332 },
  { &yyActionTable[640],   1, 332 },
  { &yyActionTable[641],   1, 332 },
  { &yyActionTable[642],   1, 332 },
  { &yyActionTable[643],   0, 220 },
};

/* The next table maps tokens into fallback tokens.  If a construct
** like the following:
** 
**      %fallback ID X Y Z.
**
** appears in the grammer, then ID becomes a fallback token for X, Y,
** and Z.  Whenever one of the tokens X, Y, or Z is input to the parser
** but it does not parse, the type of the token is changed to ID and
** the parse is retried before an error is thrown.
*/
#ifdef YYFALLBACK
static const YYCODETYPE yyFallback[] = {
};
#endif /* YYFALLBACK */

/* The following structure represents a single element of the
** parser's stack.  Information stored includes:
**
**   +  The state number for the parser at this level of the stack.
**
**   +  The value of the token stored at this level of the stack.
**      (In other words, the "major" token.)
**
**   +  The semantic value stored at this level of the stack.  This is
**      the information used by the action routines in the grammar.
**      It is sometimes called the "minor" token.
*/
struct yyStackEntry {
  int stateno;       /* The state-number */
  int major;         /* The major token value.  This is the code
                     ** number for the token at this stack level */
  YYMINORTYPE minor; /* The user-supplied minor token value.  This
                     ** is the value of the token  */
};
typedef struct yyStackEntry yyStackEntry;

/* The state of the parser is completely contained in an instance of
** the following structure */
struct yyParser {
  int yyidx;                    /* Index of top element in stack */
  int yyerrcnt;                 /* Shifts left before out of the error */
  yyStackEntry *yytop;          /* Pointer to the top stack element */
  sqliteParserARG_SDECL                /* A place to hold %extra_argument */
  yyStackEntry yystack[YYSTACKDEPTH];  /* The parser's stack */
};
typedef struct yyParser yyParser;

#ifndef NDEBUG
#include <stdio.h>
static FILE *yyTraceFILE = 0;
static char *yyTracePrompt = 0;
#endif /* NDEBUG */

#ifndef NDEBUG
/* 
** Turn parser tracing on by giving a stream to which to write the trace
** and a prompt to preface each trace message.  Tracing is turned off
** by making either argument NULL 
**
** Inputs:
** <ul>
** <li> A FILE* to which trace output should be written.
**      If NULL, then tracing is turned off.
** <li> A prefix string written at the beginning of every
**      line of trace output.  If NULL, then tracing is
**      turned off.
** </ul>
**
** Outputs:
** None.
*/
void sqliteParserTrace(FILE *TraceFILE, char *zTracePrompt){
  yyTraceFILE = TraceFILE;
  yyTracePrompt = zTracePrompt;
  if( yyTraceFILE==0 ) yyTracePrompt = 0;
  else if( yyTracePrompt==0 ) yyTraceFILE = 0;
}
#endif /* NDEBUG */

#ifndef NDEBUG
/* For tracing shifts, the names of all terminals and nonterminals
** are required.  The following table supplies these names */
static const char *yyTokenName[] = { 
  "$",             "AND",           "AS",            "ASC",         
  "BY",            "CHECK",         "COMMA",         "COMMENT",     
  "CONSTRAINT",    "CREATE",        "DEFAULT",       "DELETE",      
  "DESC",          "DOT",           "DROP",          "END_OF_FILE", 
  "EQ",            "EXPLAIN",       "FIELD",         "FLOAT",       
  "FROM",          "FUNCTION",      "GE",            "GT",          
  "ID",            "ILLEGAL",       "INDEX",         "INSERT",      
  "INTEGER",       "INTO",          "IS",            "ISNULL",      
  "KEY",           "LE",            "LP",            "LT",          
  "MINUS",         "NE",            "NOT",           "NOTNULL",     
  "NULL",          "ON",            "OR",            "ORDER",       
  "PERCENT",       "PLUS",          "PRIMARY",       "RP",          
  "SELECT",        "SEMI",          "SET",           "SLASH",       
  "SPACE",         "STAR",          "STRING",        "TABLE",       
  "UMINUS",        "UNCLOSED_STRING",  "UNIQUE",        "UPDATE",      
  "VALUES",        "WHERE",         "carg",          "carglist",    
  "ccons",         "cmd",           "cmdlist",       "column",      
  "columnid",      "columnlist",    "conslist",      "conslist_opt",
  "create_table",  "create_table_args",  "ecmd",          "error",       
  "explain",       "expr",          "expritem",      "exprlist",    
  "fieldlist",     "fieldlist_opt",  "from",          "idlist",      
  "idxitem",       "idxlist",       "input",         "item",        
  "itemlist",      "orderby_opt",   "sclp",          "selcollist",  
  "select",        "seltablist",    "setlist",       "signed",      
  "sortitem",      "sortlist",      "sortorder",     "stl_prefix",  
  "tcons",         "tcons2",        "type",          "typename",    
  "uniqueflag",    "where_opt",   
};
#endif /* NDEBUG */

#ifndef NDEBUG
/* For tracing reduce actions, the names of all rules are required.
*/
static const char *yyRuleName[] = {
 /*   0 */ "input ::= cmdlist",
 /*   1 */ "input ::= END_OF_FILE ILLEGAL SPACE UNCLOSED_STRING COMMENT FUNCTION UMINUS FIELD",
 /*   2 */ "cmdlist ::= ecmd",
 /*   3 */ "cmdlist ::= cmdlist SEMI ecmd",
 /*   4 */ "ecmd ::= explain cmd",
 /*   5 */ "ecmd ::= cmd",
 /*   6 */ "ecmd ::=",
 /*   7 */ "explain ::= EXPLAIN",
 /*   8 */ "cmd ::= create_table create_table_args",
 /*   9 */ "create_table ::= CREATE TABLE ID",
 /*  10 */ "create_table_args ::= LP columnlist conslist_opt RP",
 /*  11 */ "columnlist ::= columnlist COMMA column",
 /*  12 */ "columnlist ::= column",
 /*  13 */ "column ::= columnid type carglist",
 /*  14 */ "columnid ::= ID",
 /*  15 */ "type ::= typename",
 /*  16 */ "type ::= typename LP signed RP",
 /*  17 */ "type ::= typename LP signed COMMA signed RP",
 /*  18 */ "typename ::= ID",
 /*  19 */ "typename ::= typename ID",
 /*  20 */ "signed ::= INTEGER",
 /*  21 */ "signed ::= PLUS INTEGER",
 /*  22 */ "signed ::= MINUS INTEGER",
 /*  23 */ "carglist ::= carglist carg",
 /*  24 */ "carglist ::=",
 /*  25 */ "carg ::= CONSTRAINT ID ccons",
 /*  26 */ "carg ::= ccons",
 /*  27 */ "carg ::= DEFAULT expr",
 /*  28 */ "ccons ::= NOT NULL",
 /*  29 */ "ccons ::= PRIMARY KEY sortorder",
 /*  30 */ "ccons ::= UNIQUE",
 /*  31 */ "ccons ::= CHECK expr",
 /*  32 */ "conslist_opt ::=",
 /*  33 */ "conslist_opt ::= COMMA conslist",
 /*  34 */ "conslist ::= conslist COMMA tcons",
 /*  35 */ "conslist ::= tcons",
 /*  36 */ "tcons ::= CONSTRAINT ID tcons2",
 /*  37 */ "tcons ::= tcons2",
 /*  38 */ "tcons2 ::= PRIMARY KEY LP idxlist RP",
 /*  39 */ "tcons2 ::= UNIQUE LP idlist RP",
 /*  40 */ "tcons2 ::= CHECK expr",
 /*  41 */ "idlist ::= idlist COMMA ID",
 /*  42 */ "idlist ::= ID",
 /*  43 */ "cmd ::= DROP TABLE ID",
 /*  44 */ "cmd ::= select",
 /*  45 */ "select ::= SELECT selcollist from where_opt orderby_opt",
 /*  46 */ "select ::= SELECT STAR from where_opt orderby_opt",
 /*  47 */ "sclp ::= selcollist COMMA",
 /*  48 */ "sclp ::=",
 /*  49 */ "selcollist ::= sclp expr",
 /*  50 */ "selcollist ::= sclp expr AS ID",
 /*  51 */ "selcollist ::= sclp expr AS STRING",
 /*  52 */ "from ::= FROM seltablist",
 /*  53 */ "stl_prefix ::= seltablist COMMA",
 /*  54 */ "stl_prefix ::=",
 /*  55 */ "seltablist ::= stl_prefix ID",
 /*  56 */ "seltablist ::= stl_prefix ID AS ID",
 /*  57 */ "orderby_opt ::=",
 /*  58 */ "orderby_opt ::= ORDER BY sortlist",
 /*  59 */ "sortlist ::= sortlist COMMA sortitem sortorder",
 /*  60 */ "sortlist ::= sortitem sortorder",
 /*  61 */ "sortitem ::= ID",
 /*  62 */ "sortitem ::= ID DOT ID",
 /*  63 */ "sortorder ::= ASC",
 /*  64 */ "sortorder ::= DESC",
 /*  65 */ "sortorder ::=",
 /*  66 */ "cmd ::= DELETE FROM ID where_opt",
 /*  67 */ "where_opt ::=",
 /*  68 */ "where_opt ::= WHERE expr",
 /*  69 */ "cmd ::= UPDATE ID SET setlist where_opt",
 /*  70 */ "setlist ::= ID EQ expr COMMA setlist",
 /*  71 */ "setlist ::= ID EQ expr",
 /*  72 */ "cmd ::= INSERT INTO ID fieldlist_opt VALUES LP itemlist RP",
 /*  73 */ "itemlist ::= itemlist COMMA item",
 /*  74 */ "itemlist ::= item",
 /*  75 */ "item ::= INTEGER",
 /*  76 */ "item ::= FLOAT",
 /*  77 */ "item ::= STRING",
 /*  78 */ "fieldlist_opt ::=",
 /*  79 */ "fieldlist_opt ::= LP fieldlist RP",
 /*  80 */ "fieldlist ::= fieldlist COMMA ID",
 /*  81 */ "fieldlist ::= ID",
 /*  82 */ "expr ::= LP expr RP",
 /*  83 */ "expr ::= ID",
 /*  84 */ "expr ::= NULL",
 /*  85 */ "expr ::= ID DOT ID",
 /*  86 */ "expr ::= INTEGER",
 /*  87 */ "expr ::= FLOAT",
 /*  88 */ "expr ::= STRING",
 /*  89 */ "expr ::= expr AND expr",
 /*  90 */ "expr ::= expr OR expr",
 /*  91 */ "expr ::= expr LT expr",
 /*  92 */ "expr ::= expr GT expr",
 /*  93 */ "expr ::= expr LE expr",
 /*  94 */ "expr ::= expr GE expr",
 /*  95 */ "expr ::= expr NE expr",
 /*  96 */ "expr ::= expr EQ expr",
 /*  97 */ "expr ::= expr IS expr",
 /*  98 */ "expr ::= expr PLUS expr",
 /*  99 */ "expr ::= expr MINUS expr",
 /* 100 */ "expr ::= expr STAR expr",
 /* 101 */ "expr ::= expr SLASH expr",
 /* 102 */ "expr ::= expr ISNULL",
 /* 103 */ "expr ::= expr NOTNULL",
 /* 104 */ "expr ::= NOT expr",
 /* 105 */ "expr ::= MINUS expr",
 /* 106 */ "expr ::= PLUS expr",
 /* 107 */ "cmd ::= CREATE uniqueflag INDEX ID ON ID LP idxlist RP",
 /* 108 */ "uniqueflag ::= UNIQUE",
 /* 109 */ "uniqueflag ::=",
 /* 110 */ "idxlist ::= idxlist COMMA idxitem",
 /* 111 */ "idxlist ::= idxitem",
 /* 112 */ "idxitem ::= ID",
 /* 113 */ "cmd ::= DROP INDEX ID",
};
#endif /* NDEBUG */

/*
** This function returns the symbolic name associated with a token
** value.
*/
const char *sqliteParserTokenName(int tokenType){
#ifndef NDEBUG
  if( tokenType>0 && tokenType<(sizeof(yyTokenName)/sizeof(yyTokenName[0])) ){
    return yyTokenName[tokenType];
  }else{
    return "Unknown";
  }
#else
  return "";
#endif
}

/* 
** This function allocates a new parser.
** The only argument is a pointer to a function which works like
** malloc.
**
** Inputs:
** A pointer to the function used to allocate memory.
**
** Outputs:
** A pointer to a parser.  This pointer is used in subsequent calls
** to sqliteParser and sqliteParserFree.
*/
void *sqliteParserAlloc(void *(*mallocProc)(size_t)){
  yyParser *pParser;
  pParser = (yyParser*)(*mallocProc)( (size_t)sizeof(yyParser) );
  if( pParser ){
    pParser->yyidx = -1;
  }
  return pParser;
}

/* The following function deletes the value associated with a
** symbol.  The symbol can be either a terminal or nonterminal.
** "yymajor" is the symbol code, and "yypminor" is a pointer to
** the value.
*/
static void yy_destructor(YYCODETYPE yymajor, YYMINORTYPE *yypminor){
  switch( yymajor ){
    /* Here is inserted the actions which take place when a
    ** terminal or non-terminal is destroyed.  This can happen
    ** when the symbol is popped from the stack during a
    ** reduce or during error processing or when a parser is 
    ** being destroyed before it is finished parsing.
    **
    ** Note: during a reduce, the only symbols destroyed are those
    ** which appear on the RHS of the rule, but which are not used
    ** inside the C code.
    */
    case 77:
#line 243 "parse.y"
{sqliteExprDelete((yypminor->yy202));}
#line 1433 "parse.c"
      break;
    case 78:
#line 278 "parse.y"
{sqliteExprDelete((yypminor->yy202));}
#line 1438 "parse.c"
      break;
    case 79:
#line 276 "parse.y"
{sqliteExprListDelete((yypminor->yy44));}
#line 1443 "parse.c"
      break;
    case 80:
#line 227 "parse.y"
{sqliteIdListDelete((yypminor->yy154));}
#line 1448 "parse.c"
      break;
    case 81:
#line 225 "parse.y"
{sqliteIdListDelete((yypminor->yy154));}
#line 1453 "parse.c"
      break;
    case 82:
#line 147 "parse.y"
{sqliteIdListDelete((yypminor->yy154));}
#line 1458 "parse.c"
      break;
    case 85:
#line 294 "parse.y"
{sqliteIdListDelete((yypminor->yy154));}
#line 1463 "parse.c"
      break;
    case 87:
#line 216 "parse.y"
{sqliteExprDelete((yypminor->yy202));}
#line 1468 "parse.c"
      break;
    case 88:
#line 214 "parse.y"
{sqliteExprListDelete((yypminor->yy44));}
#line 1473 "parse.c"
      break;
    case 89:
#line 158 "parse.y"
{sqliteExprListDelete((yypminor->yy44));}
#line 1478 "parse.c"
      break;
    case 90:
#line 133 "parse.y"
{sqliteExprListDelete((yypminor->yy44));}
#line 1483 "parse.c"
      break;
    case 91:
#line 131 "parse.y"
{sqliteExprListDelete((yypminor->yy44));}
#line 1488 "parse.c"
      break;
    case 93:
#line 143 "parse.y"
{sqliteIdListDelete((yypminor->yy154));}
#line 1493 "parse.c"
      break;
    case 94:
#line 200 "parse.y"
{sqliteExprListDelete((yypminor->yy44));}
#line 1498 "parse.c"
      break;
    case 96:
#line 162 "parse.y"
{sqliteExprDelete((yypminor->yy202));}
#line 1503 "parse.c"
      break;
    case 97:
#line 160 "parse.y"
{sqliteExprListDelete((yypminor->yy44));}
#line 1508 "parse.c"
      break;
    case 99:
#line 145 "parse.y"
{sqliteIdListDelete((yypminor->yy154));}
#line 1513 "parse.c"
      break;
    case 105:
#line 194 "parse.y"
{sqliteExprDelete((yypminor->yy202));}
#line 1518 "parse.c"
      break;
    default:  break;   /* If no destructor action specified: do nothing */
  }
}

/*
** Pop the parser's stack once.
**
** If there is a destructor routine associated with the token which
** is popped from the stack, then call it.
**
** Return the major token number for the symbol popped.
*/
static int yy_pop_parser_stack(yyParser *pParser){
  YYCODETYPE yymajor;

  if( pParser->yyidx<0 ) return 0;
#ifndef NDEBUG
  if( yyTraceFILE && pParser->yyidx>=0 ){
    fprintf(yyTraceFILE,"%sPopping %s\n",
      yyTracePrompt,
      yyTokenName[pParser->yytop->major]);
  }
#endif
  yymajor = pParser->yytop->major;
  yy_destructor( yymajor, &pParser->yytop->minor);
  pParser->yyidx--;
  pParser->yytop--;
  return yymajor;
}

/* 
** Deallocate and destroy a parser.  Destructors are all called for
** all stack elements before shutting the parser down.
**
** Inputs:
** <ul>
** <li>  A pointer to the parser.  This should be a pointer
**       obtained from sqliteParserAlloc.
** <li>  A pointer to a function used to reclaim memory obtained
**       from malloc.
** </ul>
*/
void sqliteParserFree(
  void *p,                    /* The parser to be deleted */
  void (*freeProc)(void*)     /* Function used to reclaim memory */
){
  yyParser *pParser = (yyParser*)p;
  if( pParser==0 ) return;
  while( pParser->yyidx>=0 ) yy_pop_parser_stack(pParser);
  (*freeProc)((void*)pParser);
}

/*
** Find the appropriate action for a parser given the look-ahead token.
**
** If the look-ahead token is YYNOCODE, then check to see if the action is
** independent of the look-ahead.  If it is, return the action, otherwise
** return YY_NO_ACTION.
*/
static int yy_find_parser_action(
  yyParser *pParser,        /* The parser */
  int iLookAhead             /* The look-ahead token */
){
  const yyStateEntry *pState;   /* Appropriate entry in the state table */
  const yyActionEntry *pAction; /* Action appropriate for the look-ahead */
  int iFallback;                /* Fallback token */
 
  /* if( pParser->yyidx<0 ) return YY_NO_ACTION;  */
  pState = &yyStateTable[pParser->yytop->stateno];
  if( pState->nEntry==0 ){
    return pState->actionDefault;
  }else if( iLookAhead!=YYNOCODE ){
    pAction = &pState->hashtbl[iLookAhead % pState->nEntry];
    while( 1 ){
      if( pAction->lookahead==iLookAhead ) return pAction->action;
      if( pAction->next==0 ) break;
      pAction = &pState->hashtbl[pAction->next-1];
    }
#ifdef YYFALLBACK
    if( iLookAhead<sizeof(yyFallback)/sizeof(yyFallback[0])
           && (iFallback = yyFallback[iLookAhead])!=0 ){
#ifndef NDEBUG
      if( yyTraceFILE ){
        fprintf(yyTraceFILE, "%sFALLBACK %s => %s\n",
           yyTracePrompt, yyTokenName[iLookAhead], yyTokenName[iFallback]);
      }
#endif
      return yy_find_parser_action(pParser, iFallback);
    }
#endif
  }else if( pState->hashtbl->lookahead!=YYNOCODE ){
    return YY_NO_ACTION;
  }
  return pState->actionDefault;
}

/*
** Perform a shift action.
*/
static void yy_shift(
  yyParser *yypParser,          /* The parser to be shifted */
  int yyNewState,               /* The new state to shift in */
  int yyMajor,                  /* The major token to shift in */
  YYMINORTYPE *yypMinor         /* Pointer ot the minor token to shift in */
){
  yypParser->yyidx++;
  yypParser->yytop++;
  if( yypParser->yyidx>=YYSTACKDEPTH ){
     sqliteParserARG_FETCH;
     yypParser->yyidx--;
     yypParser->yytop--;
#ifndef NDEBUG
     if( yyTraceFILE ){
       fprintf(yyTraceFILE,"%sStack Overflow!\n",yyTracePrompt);
     }
#endif
     while( yypParser->yyidx>=0 ) yy_pop_parser_stack(yypParser);
     /* Here code is inserted which will execute if the parser
     ** stack every overflows */
     sqliteParserARG_STORE; /* Suppress warning about unused %extra_argument var */
     return;
  }
  yypParser->yytop->stateno = yyNewState;
  yypParser->yytop->major = yyMajor;
  yypParser->yytop->minor = *yypMinor;
#ifndef NDEBUG
  if( yyTraceFILE && yypParser->yyidx>0 ){
    int i;
    fprintf(yyTraceFILE,"%sShift %d\n",yyTracePrompt,yyNewState);
    fprintf(yyTraceFILE,"%sStack:",yyTracePrompt);
    for(i=1; i<=yypParser->yyidx; i++)
      fprintf(yyTraceFILE," %s",yyTokenName[yypParser->yystack[i].major]);
    fprintf(yyTraceFILE,"\n");
  }
#endif
}

/* The following table contains information about every rule that
** is used during the reduce.
*/
static struct {
  YYCODETYPE lhs;         /* Symbol on the left-hand side of the rule */
  unsigned char nrhs;     /* Number of right-hand side symbols in the rule */
} yyRuleInfo[] = {
  { 86, 1 },
  { 86, 8 },
  { 66, 1 },
  { 66, 3 },
  { 74, 2 },
  { 74, 1 },
  { 74, 0 },
  { 76, 1 },
  { 65, 2 },
  { 72, 3 },
  { 73, 4 },
  { 69, 3 },
  { 69, 1 },
  { 67, 3 },
  { 68, 1 },
  { 102, 1 },
  { 102, 4 },
  { 102, 6 },
  { 103, 1 },
  { 103, 2 },
  { 95, 1 },
  { 95, 2 },
  { 95, 2 },
  { 63, 2 },
  { 63, 0 },
  { 62, 3 },
  { 62, 1 },
  { 62, 2 },
  { 64, 2 },
  { 64, 3 },
  { 64, 1 },
  { 64, 2 },
  { 71, 0 },
  { 71, 2 },
  { 70, 3 },
  { 70, 1 },
  { 100, 3 },
  { 100, 1 },
  { 101, 5 },
  { 101, 4 },
  { 101, 2 },
  { 83, 3 },
  { 83, 1 },
  { 65, 3 },
  { 65, 1 },
  { 92, 5 },
  { 92, 5 },
  { 90, 2 },
  { 90, 0 },
  { 91, 2 },
  { 91, 4 },
  { 91, 4 },
  { 82, 2 },
  { 99, 2 },
  { 99, 0 },
  { 93, 2 },
  { 93, 4 },
  { 89, 0 },
  { 89, 3 },
  { 97, 4 },
  { 97, 2 },
  { 96, 1 },
  { 96, 3 },
  { 98, 1 },
  { 98, 1 },
  { 98, 0 },
  { 65, 4 },
  { 105, 0 },
  { 105, 2 },
  { 65, 5 },
  { 94, 5 },
  { 94, 3 },
  { 65, 8 },
  { 88, 3 },
  { 88, 1 },
  { 87, 1 },
  { 87, 1 },
  { 87, 1 },
  { 81, 0 },
  { 81, 3 },
  { 80, 3 },
  { 80, 1 },
  { 77, 3 },
  { 77, 1 },
  { 77, 1 },
  { 77, 3 },
  { 77, 1 },
  { 77, 1 },
  { 77, 1 },
  { 77, 3 },
  { 77, 3 },
  { 77, 3 },
  { 77, 3 },
  { 77, 3 },
  { 77, 3 },
  { 77, 3 },
  { 77, 3 },
  { 77, 3 },
  { 77, 3 },
  { 77, 3 },
  { 77, 3 },
  { 77, 3 },
  { 77, 2 },
  { 77, 2 },
  { 77, 2 },
  { 77, 2 },
  { 77, 2 },
  { 65, 9 },
  { 104, 1 },
  { 104, 0 },
  { 85, 3 },
  { 85, 1 },
  { 84, 1 },
  { 65, 3 },
};

static void yy_accept(yyParser*);  /* Forward Declaration */

/*
** Perform a reduce action and the shift that must immediately
** follow the reduce.
*/
static void yy_reduce(
  yyParser *yypParser,         /* The parser */
  int yyruleno                 /* Number of the rule by which to reduce */
){
  int yygoto;                     /* The next state */
  int yyact;                      /* The next action */
  YYMINORTYPE yygotominor;        /* The LHS of the rule reduced */
  yyStackEntry *yymsp;            /* The top of the parser's stack */
  int yysize;                     /* Amount to pop the stack */
  sqliteParserARG_FETCH;
  yymsp = yypParser->yytop;
#ifndef NDEBUG
  if( yyTraceFILE && yyruleno>=0 
        && yyruleno<sizeof(yyRuleName)/sizeof(yyRuleName[0]) ){
    fprintf(yyTraceFILE, "%sReduce [%s].\n", yyTracePrompt,
      yyRuleName[yyruleno]);
  }
#endif /* NDEBUG */

  switch( yyruleno ){
  /* Beginning here are the reduction cases.  A typical example
  ** follows:
  **   case 0:
  **  #line <lineno> <grammarfile>
  **     { ... }           // User supplied code
  **  #line <lineno> <thisfile>
  **     break;
  */
      case 0:
        /* No destructor defined for cmdlist */
        break;
      case 1:
        /* No destructor defined for END_OF_FILE */
        /* No destructor defined for ILLEGAL */
        /* No destructor defined for SPACE */
        /* No destructor defined for UNCLOSED_STRING */
        /* No destructor defined for COMMENT */
        /* No destructor defined for FUNCTION */
        /* No destructor defined for UMINUS */
        /* No destructor defined for FIELD */
        break;
      case 2:
        /* No destructor defined for ecmd */
        break;
      case 3:
        /* No destructor defined for cmdlist */
        /* No destructor defined for SEMI */
        /* No destructor defined for ecmd */
        break;
      case 4:
#line 60 "parse.y"
{sqliteExec(pParse);}
#line 1838 "parse.c"
        /* No destructor defined for explain */
        /* No destructor defined for cmd */
        break;
      case 5:
#line 61 "parse.y"
{sqliteExec(pParse);}
#line 1845 "parse.c"
        /* No destructor defined for cmd */
        break;
      case 6:
        break;
      case 7:
#line 63 "parse.y"
{pParse->explain = 1;}
#line 1853 "parse.c"
        /* No destructor defined for EXPLAIN */
        break;
      case 8:
        /* No destructor defined for create_table */
        /* No destructor defined for create_table_args */
        break;
      case 9:
#line 68 "parse.y"
{sqliteStartTable(pParse,&yymsp[-2].minor.yy0,&yymsp[0].minor.yy0);}
#line 1863 "parse.c"
        /* No destructor defined for TABLE */
        break;
      case 10:
#line 70 "parse.y"
{sqliteEndTable(pParse,&yymsp[0].minor.yy0);}
#line 1869 "parse.c"
        /* No destructor defined for LP */
        /* No destructor defined for columnlist */
        /* No destructor defined for conslist_opt */
        break;
      case 11:
        /* No destructor defined for columnlist */
        /* No destructor defined for COMMA */
        /* No destructor defined for column */
        break;
      case 12:
        /* No destructor defined for column */
        break;
      case 13:
        /* No destructor defined for columnid */
        /* No destructor defined for type */
        /* No destructor defined for carglist */
        break;
      case 14:
#line 79 "parse.y"
{sqliteAddColumn(pParse,&yymsp[0].minor.yy0);}
#line 1890 "parse.c"
        break;
      case 15:
        /* No destructor defined for typename */
        break;
      case 16:
        /* No destructor defined for typename */
        /* No destructor defined for LP */
        /* No destructor defined for signed */
        /* No destructor defined for RP */
        break;
      case 17:
        /* No destructor defined for typename */
        /* No destructor defined for LP */
        /* No destructor defined for signed */
        /* No destructor defined for COMMA */
        /* No destructor defined for signed */
        /* No destructor defined for RP */
        break;
      case 18:
        /* No destructor defined for ID */
        break;
      case 19:
        /* No destructor defined for typename */
        /* No destructor defined for ID */
        break;
      case 20:
        /* No destructor defined for INTEGER */
        break;
      case 21:
        /* No destructor defined for PLUS */
        /* No destructor defined for INTEGER */
        break;
      case 22:
        /* No destructor defined for MINUS */
        /* No destructor defined for INTEGER */
        break;
      case 23:
        /* No destructor defined for carglist */
        /* No destructor defined for carg */
        break;
      case 24:
        break;
      case 25:
        /* No destructor defined for CONSTRAINT */
        /* No destructor defined for ID */
        /* No destructor defined for ccons */
        break;
      case 26:
        /* No destructor defined for ccons */
        break;
      case 27:
        /* No destructor defined for DEFAULT */
  yy_destructor(77,&yymsp[0].minor);
        break;
      case 28:
        /* No destructor defined for NOT */
        /* No destructor defined for NULL */
        break;
      case 29:
#line 98 "parse.y"
{sqliteCreateIndex(pParse,0,0,0,0,0);}
#line 1952 "parse.c"
        /* No destructor defined for PRIMARY */
        /* No destructor defined for KEY */
        /* No destructor defined for sortorder */
        break;
      case 30:
        /* No destructor defined for UNIQUE */
        break;
      case 31:
        /* No destructor defined for CHECK */
  yy_destructor(77,&yymsp[0].minor);
        break;
      case 32:
        break;
      case 33:
        /* No destructor defined for COMMA */
        /* No destructor defined for conslist */
        break;
      case 34:
        /* No destructor defined for conslist */
        /* No destructor defined for COMMA */
        /* No destructor defined for tcons */
        break;
      case 35:
        /* No destructor defined for tcons */
        break;
      case 36:
        /* No destructor defined for CONSTRAINT */
        /* No destructor defined for ID */
        /* No destructor defined for tcons2 */
        break;
      case 37:
        /* No destructor defined for tcons2 */
        break;
      case 38:
#line 112 "parse.y"
{sqliteCreateIndex(pParse,0,0,yymsp[-1].minor.yy154,0,0);}
#line 1989 "parse.c"
        /* No destructor defined for PRIMARY */
        /* No destructor defined for KEY */
        /* No destructor defined for LP */
        /* No destructor defined for RP */
        break;
      case 39:
        /* No destructor defined for UNIQUE */
        /* No destructor defined for LP */
        /* No destructor defined for idlist */
        /* No destructor defined for RP */
        break;
      case 40:
        /* No destructor defined for CHECK */
  yy_destructor(77,&yymsp[0].minor);
        break;
      case 41:
        /* No destructor defined for idlist */
        /* No destructor defined for COMMA */
        /* No destructor defined for ID */
        break;
      case 42:
        /* No destructor defined for ID */
        break;
      case 43:
#line 120 "parse.y"
{sqliteDropTable(pParse,&yymsp[0].minor.yy0);}
#line 2016 "parse.c"
        /* No destructor defined for DROP */
        /* No destructor defined for TABLE */
        break;
      case 44:
        /* No destructor defined for select */
        break;
      case 45:
#line 126 "parse.y"
{sqliteSelect(pParse, yymsp[-3].minor.yy44, yymsp[-2].minor.yy154, yymsp[-1].minor.yy202, yymsp[0].minor.yy44);}
#line 2026 "parse.c"
        /* No destructor defined for SELECT */
        break;
      case 46:
#line 128 "parse.y"
{sqliteSelect(pParse, 0, yymsp[-2].minor.yy154, yymsp[-1].minor.yy202, yymsp[0].minor.yy44);}
#line 2032 "parse.c"
        /* No destructor defined for SELECT */
        /* No destructor defined for STAR */
        break;
      case 47:
#line 135 "parse.y"
{yygotominor.yy44 = yymsp[-1].minor.yy44;}
#line 2039 "parse.c"
        /* No destructor defined for COMMA */
        break;
      case 48:
#line 136 "parse.y"
{yygotominor.yy44 = 0;}
#line 2045 "parse.c"
        break;
      case 49:
#line 137 "parse.y"
{yygotominor.yy44 = sqliteExprListAppend(yymsp[-1].minor.yy44,yymsp[0].minor.yy202,0);}
#line 2050 "parse.c"
        break;
      case 50:
#line 138 "parse.y"
{yygotominor.yy44 = sqliteExprListAppend(yymsp[-3].minor.yy44,yymsp[-2].minor.yy202,&yymsp[0].minor.yy0);}
#line 2055 "parse.c"
        /* No destructor defined for AS */
        break;
      case 51:
#line 140 "parse.y"
{yygotominor.yy44 = sqliteExprListAppend(yymsp[-3].minor.yy44,yymsp[-2].minor.yy202,&yymsp[0].minor.yy0);}
#line 2061 "parse.c"
        /* No destructor defined for AS */
        break;
      case 52:
#line 149 "parse.y"
{yygotominor.yy154 = yymsp[0].minor.yy154;}
#line 2067 "parse.c"
        /* No destructor defined for FROM */
        break;
      case 53:
#line 150 "parse.y"
{yygotominor.yy154 = yymsp[-1].minor.yy154;}
#line 2073 "parse.c"
        /* No destructor defined for COMMA */
        break;
      case 54:
#line 151 "parse.y"
{yygotominor.yy154 = 0;}
#line 2079 "parse.c"
        break;
      case 55:
#line 152 "parse.y"
{yygotominor.yy154 = sqliteIdListAppend(yymsp[-1].minor.yy154,&yymsp[0].minor.yy0);}
#line 2084 "parse.c"
        break;
      case 56:
#line 154 "parse.y"
{yygotominor.yy154 = sqliteIdListAppend(yymsp[-3].minor.yy154,&yymsp[-2].minor.yy0);
    sqliteIdListAddAlias(yygotominor.yy154,&yymsp[0].minor.yy0);}
#line 2090 "parse.c"
        /* No destructor defined for AS */
        break;
      case 57:
#line 164 "parse.y"
{yygotominor.yy44 = 0;}
#line 2096 "parse.c"
        break;
      case 58:
#line 165 "parse.y"
{yygotominor.yy44 = yymsp[0].minor.yy44;}
#line 2101 "parse.c"
        /* No destructor defined for ORDER */
        /* No destructor defined for BY */
        break;
      case 59:
#line 167 "parse.y"
{
    yygotominor.yy44 = sqliteExprListAppend(yymsp[-3].minor.yy44,yymsp[-1].minor.yy202,0);
    yygotominor.yy44->a[yygotominor.yy44->nExpr-1].idx = yymsp[0].minor.yy64;
  }
#line 2111 "parse.c"
        /* No destructor defined for COMMA */
        break;
      case 60:
#line 172 "parse.y"
{
    yygotominor.yy44 = sqliteExprListAppend(0,yymsp[-1].minor.yy202,0);
    yygotominor.yy44->a[0].idx = yymsp[0].minor.yy64;
  }
#line 2120 "parse.c"
        break;
      case 61:
#line 176 "parse.y"
{yygotominor.yy202 = sqliteExpr(TK_ID, 0, 0, &yymsp[0].minor.yy0);}
#line 2125 "parse.c"
        break;
      case 62:
#line 178 "parse.y"
{
     Expr *temp1 = sqliteExpr(TK_ID, 0, 0, &yymsp[-2].minor.yy0);
     Expr *temp2 = sqliteExpr(TK_ID, 0, 0, &yymsp[0].minor.yy0);
     yygotominor.yy202 = sqliteExpr(TK_DOT, temp1, temp2, 0);
  }
#line 2134 "parse.c"
        /* No destructor defined for DOT */
        break;
      case 63:
#line 186 "parse.y"
{yygotominor.yy64 = 0;}
#line 2140 "parse.c"
        /* No destructor defined for ASC */
        break;
      case 64:
#line 187 "parse.y"
{yygotominor.yy64 = 1;}
#line 2146 "parse.c"
        /* No destructor defined for DESC */
        break;
      case 65:
#line 188 "parse.y"
{yygotominor.yy64 = 0;}
#line 2152 "parse.c"
        break;
      case 66:
#line 191 "parse.y"
{sqliteDeleteFrom(pParse, &yymsp[-1].minor.yy0, yymsp[0].minor.yy202);}
#line 2157 "parse.c"
        /* No destructor defined for DELETE */
        /* No destructor defined for FROM */
        break;
      case 67:
#line 196 "parse.y"
{yygotominor.yy202 = 0;}
#line 2164 "parse.c"
        break;
      case 68:
#line 197 "parse.y"
{yygotominor.yy202 = yymsp[0].minor.yy202;}
#line 2169 "parse.c"
        /* No destructor defined for WHERE */
        break;
      case 69:
#line 203 "parse.y"
{sqliteUpdate(pParse,&yymsp[-3].minor.yy0,yymsp[-1].minor.yy44,yymsp[0].minor.yy202);}
#line 2175 "parse.c"
        /* No destructor defined for UPDATE */
        /* No destructor defined for SET */
        break;
      case 70:
#line 206 "parse.y"
{yygotominor.yy44 = sqliteExprListAppend(yymsp[0].minor.yy44,yymsp[-2].minor.yy202,&yymsp[-4].minor.yy0);}
#line 2182 "parse.c"
        /* No destructor defined for EQ */
        /* No destructor defined for COMMA */
        break;
      case 71:
#line 207 "parse.y"
{yygotominor.yy44 = sqliteExprListAppend(0,yymsp[0].minor.yy202,&yymsp[-2].minor.yy0);}
#line 2189 "parse.c"
        /* No destructor defined for EQ */
        break;
      case 72:
#line 210 "parse.y"
{sqliteInsert(pParse, &yymsp[-5].minor.yy0, yymsp[-1].minor.yy44, yymsp[-4].minor.yy154);}
#line 2195 "parse.c"
        /* No destructor defined for INSERT */
        /* No destructor defined for INTO */
        /* No destructor defined for VALUES */
        /* No destructor defined for LP */
        /* No destructor defined for RP */
        break;
      case 73:
#line 218 "parse.y"
{yygotominor.yy44 = sqliteExprListAppend(yymsp[-2].minor.yy44,yymsp[0].minor.yy202,0);}
#line 2205 "parse.c"
        /* No destructor defined for COMMA */
        break;
      case 74:
#line 219 "parse.y"
{yygotominor.yy44 = sqliteExprListAppend(0,yymsp[0].minor.yy202,0);}
#line 2211 "parse.c"
        break;
      case 75:
#line 220 "parse.y"
{yygotominor.yy202 = sqliteExpr(TK_INTEGER, 0, 0, &yymsp[0].minor.yy0);}
#line 2216 "parse.c"
        break;
      case 76:
#line 221 "parse.y"
{yygotominor.yy202 = sqliteExpr(TK_FLOAT, 0, 0, &yymsp[0].minor.yy0);}
#line 2221 "parse.c"
        break;
      case 77:
#line 222 "parse.y"
{yygotominor.yy202 = sqliteExpr(TK_STRING, 0, 0, &yymsp[0].minor.yy0);}
#line 2226 "parse.c"
        break;
      case 78:
#line 229 "parse.y"
{yygotominor.yy154 = 0;}
#line 2231 "parse.c"
        break;
      case 79:
#line 230 "parse.y"
{yygotominor.yy154 = yymsp[-1].minor.yy154;}
#line 2236 "parse.c"
        /* No destructor defined for LP */
        /* No destructor defined for RP */
        break;
      case 80:
#line 231 "parse.y"
{yygotominor.yy154 = sqliteIdListAppend(yymsp[-2].minor.yy154,&yymsp[0].minor.yy0);}
#line 2243 "parse.c"
        /* No destructor defined for COMMA */
        break;
      case 81:
#line 232 "parse.y"
{yygotominor.yy154 = sqliteIdListAppend(0,&yymsp[0].minor.yy0);}
#line 2249 "parse.c"
        break;
      case 82:
#line 245 "parse.y"
{yygotominor.yy202 = yymsp[-1].minor.yy202;}
#line 2254 "parse.c"
        /* No destructor defined for LP */
        /* No destructor defined for RP */
        break;
      case 83:
#line 246 "parse.y"
{yygotominor.yy202 = sqliteExpr(TK_ID, 0, 0, &yymsp[0].minor.yy0);}
#line 2261 "parse.c"
        break;
      case 84:
#line 247 "parse.y"
{yygotominor.yy202 = sqliteExpr(TK_NULL, 0, 0, 0);}
#line 2266 "parse.c"
        /* No destructor defined for NULL */
        break;
      case 85:
#line 248 "parse.y"
{Expr *temp1 = sqliteExpr(TK_ID, 0, 0, &yymsp[-2].minor.yy0);
                              Expr *temp2 = sqliteExpr(TK_ID, 0, 0, &yymsp[0].minor.yy0);
                              yygotominor.yy202 = sqliteExpr(TK_DOT, temp1, temp2, 0);}
#line 2274 "parse.c"
        /* No destructor defined for DOT */
        break;
      case 86:
#line 251 "parse.y"
{yygotominor.yy202 = sqliteExpr(TK_INTEGER, 0, 0, &yymsp[0].minor.yy0);}
#line 2280 "parse.c"
        break;
      case 87:
#line 252 "parse.y"
{yygotominor.yy202 = sqliteExpr(TK_FLOAT, 0, 0, &yymsp[0].minor.yy0);}
#line 2285 "parse.c"
        break;
      case 88:
#line 253 "parse.y"
{yygotominor.yy202 = sqliteExpr(TK_STRING, 0, 0, &yymsp[0].minor.yy0);}
#line 2290 "parse.c"
        break;
      case 89:
#line 256 "parse.y"
{yygotominor.yy202 = sqliteExpr(TK_AND, yymsp[-2].minor.yy202, yymsp[0].minor.yy202, 0);}
#line 2295 "parse.c"
        /* No destructor defined for AND */
        break;
      case 90:
#line 257 "parse.y"
{yygotominor.yy202 = sqliteExpr(TK_OR, yymsp[-2].minor.yy202, yymsp[0].minor.yy202, 0);}
#line 2301 "parse.c"
        /* No destructor defined for OR */
        break;
      case 91:
#line 258 "parse.y"
{yygotominor.yy202 = sqliteExpr(TK_LT, yymsp[-2].minor.yy202, yymsp[0].minor.yy202, 0);}
#line 2307 "parse.c"
        /* No destructor defined for LT */
        break;
      case 92:
#line 259 "parse.y"
{yygotominor.yy202 = sqliteExpr(TK_GT, yymsp[-2].minor.yy202, yymsp[0].minor.yy202, 0);}
#line 2313 "parse.c"
        /* No destructor defined for GT */
        break;
      case 93:
#line 260 "parse.y"
{yygotominor.yy202 = sqliteExpr(TK_LE, yymsp[-2].minor.yy202, yymsp[0].minor.yy202, 0);}
#line 2319 "parse.c"
        /* No destructor defined for LE */
        break;
      case 94:
#line 261 "parse.y"
{yygotominor.yy202 = sqliteExpr(TK_GE, yymsp[-2].minor.yy202, yymsp[0].minor.yy202, 0);}
#line 2325 "parse.c"
        /* No destructor defined for GE */
        break;
      case 95:
#line 262 "parse.y"
{yygotominor.yy202 = sqliteExpr(TK_NE, yymsp[-2].minor.yy202, yymsp[0].minor.yy202, 0);}
#line 2331 "parse.c"
        /* No destructor defined for NE */
        break;
      case 96:
#line 263 "parse.y"
{yygotominor.yy202 = sqliteExpr(TK_EQ, yymsp[-2].minor.yy202, yymsp[0].minor.yy202, 0);}
#line 2337 "parse.c"
        /* No destructor defined for EQ */
        break;
      case 97:
#line 264 "parse.y"
{yygotominor.yy202 = sqliteExpr(TK_EQ, yymsp[-2].minor.yy202, yymsp[0].minor.yy202, 0);}
#line 2343 "parse.c"
        /* No destructor defined for IS */
        break;
      case 98:
#line 265 "parse.y"
{yygotominor.yy202 = sqliteExpr(TK_PLUS, yymsp[-2].minor.yy202, yymsp[0].minor.yy202, 0);}
#line 2349 "parse.c"
        /* No destructor defined for PLUS */
        break;
      case 99:
#line 266 "parse.y"
{yygotominor.yy202 = sqliteExpr(TK_MINUS, yymsp[-2].minor.yy202, yymsp[0].minor.yy202, 0);}
#line 2355 "parse.c"
        /* No destructor defined for MINUS */
        break;
      case 100:
#line 267 "parse.y"
{yygotominor.yy202 = sqliteExpr(TK_STAR, yymsp[-2].minor.yy202, yymsp[0].minor.yy202, 0);}
#line 2361 "parse.c"
        /* No destructor defined for STAR */
        break;
      case 101:
#line 268 "parse.y"
{yygotominor.yy202 = sqliteExpr(TK_SLASH, yymsp[-2].minor.yy202, yymsp[0].minor.yy202, 0);}
#line 2367 "parse.c"
        /* No destructor defined for SLASH */
        break;
      case 102:
#line 269 "parse.y"
{yygotominor.yy202 = sqliteExpr(TK_ISNULL, yymsp[-1].minor.yy202, 0, 0);}
#line 2373 "parse.c"
        /* No destructor defined for ISNULL */
        break;
      case 103:
#line 270 "parse.y"
{yygotominor.yy202 = sqliteExpr(TK_NOTNULL, yymsp[-1].minor.yy202, 0, 0);}
#line 2379 "parse.c"
        /* No destructor defined for NOTNULL */
        break;
      case 104:
#line 271 "parse.y"
{yygotominor.yy202 = sqliteExpr(TK_NOT, yymsp[0].minor.yy202, 0, 0);}
#line 2385 "parse.c"
        /* No destructor defined for NOT */
        break;
      case 105:
#line 272 "parse.y"
{yygotominor.yy202 = sqliteExpr(TK_UMINUS, yymsp[0].minor.yy202, 0, 0);}
#line 2391 "parse.c"
        /* No destructor defined for MINUS */
        break;
      case 106:
#line 273 "parse.y"
{yygotominor.yy202 = yymsp[0].minor.yy202;}
#line 2397 "parse.c"
        /* No destructor defined for PLUS */
        break;
      case 107:
#line 289 "parse.y"
{sqliteCreateIndex(pParse, &yymsp[-5].minor.yy0, &yymsp[-3].minor.yy0, yymsp[-1].minor.yy154, &yymsp[-8].minor.yy0, &yymsp[0].minor.yy0);}
#line 2403 "parse.c"
        /* No destructor defined for uniqueflag */
        /* No destructor defined for INDEX */
        /* No destructor defined for ON */
        /* No destructor defined for LP */
        break;
      case 108:
        /* No destructor defined for UNIQUE */
        break;
      case 109:
        break;
      case 110:
#line 298 "parse.y"
{yygotominor.yy154 = sqliteIdListAppend(yymsp[-2].minor.yy154,&yymsp[0].minor.yy58);}
#line 2417 "parse.c"
        /* No destructor defined for COMMA */
        break;
      case 111:
#line 300 "parse.y"
{yygotominor.yy154 = sqliteIdListAppend(0,&yymsp[0].minor.yy58);}
#line 2423 "parse.c"
        break;
      case 112:
#line 301 "parse.y"
{yygotominor.yy58 = yymsp[0].minor.yy0;}
#line 2428 "parse.c"
        break;
      case 113:
#line 303 "parse.y"
{sqliteDropIndex(pParse, &yymsp[0].minor.yy0);}
#line 2433 "parse.c"
        /* No destructor defined for DROP */
        /* No destructor defined for INDEX */
        break;
  };
  yygoto = yyRuleInfo[yyruleno].lhs;
  yysize = yyRuleInfo[yyruleno].nrhs;
  yypParser->yyidx -= yysize;
  yypParser->yytop -= yysize;
  yyact = yy_find_parser_action(yypParser,yygoto);
  if( yyact < YYNSTATE ){
    yy_shift(yypParser,yyact,yygoto,&yygotominor);
  }else if( yyact == YYNSTATE + YYNRULE + 1 ){
    yy_accept(yypParser);
  }
}

/*
** The following code executes when the parse fails
*/
static void yy_parse_failed(
  yyParser *yypParser           /* The parser */
){
  sqliteParserARG_FETCH;
#ifndef NDEBUG
  if( yyTraceFILE ){
    fprintf(yyTraceFILE,"%sFail!\n",yyTracePrompt);
  }
#endif
  while( yypParser->yyidx>=0 ) yy_pop_parser_stack(yypParser);
  /* Here code is inserted which will be executed whenever the
  ** parser fails */
  sqliteParserARG_STORE; /* Suppress warning about unused %extra_argument variable */
}

/*
** The following code executes when a syntax error first occurs.
*/
static void yy_syntax_error(
  yyParser *yypParser,           /* The parser */
  int yymajor,                   /* The major type of the error token */
  YYMINORTYPE yyminor            /* The minor type of the error token */
){
  sqliteParserARG_FETCH;
#define TOKEN (yyminor.yy0)
#line 34 "parse.y"

  sqliteSetNString(&pParse->zErrMsg,"syntax error near \"",0,TOKEN.z,TOKEN.n,
                   "\"", 1, 0);
  pParse->sErrToken = TOKEN;

#line 2484 "parse.c"
  sqliteParserARG_STORE; /* Suppress warning about unused %extra_argument variable */
}

/*
** The following is executed when the parser accepts
*/
static void yy_accept(
  yyParser *yypParser           /* The parser */
){
  sqliteParserARG_FETCH;
#ifndef NDEBUG
  if( yyTraceFILE ){
    fprintf(yyTraceFILE,"%sAccept!\n",yyTracePrompt);
  }
#endif
  while( yypParser->yyidx>=0 ) yy_pop_parser_stack(yypParser);
  /* Here code is inserted which will be executed whenever the
  ** parser accepts */
  sqliteParserARG_STORE; /* Suppress warning about unused %extra_argument variable */
}

/* The main parser program.
** The first argument is a pointer to a structure obtained from
** "sqliteParserAlloc" which describes the current state of the parser.
** The second argument is the major token number.  The third is
** the minor token.  The fourth optional argument is whatever the
** user wants (and specified in the grammar) and is available for
** use by the action routines.
**
** Inputs:
** <ul>
** <li> A pointer to the parser (an opaque structure.)
** <li> The major token number.
** <li> The minor token number.
** <li> An option argument of a grammar-specified type.
** </ul>
**
** Outputs:
** None.
*/
void sqliteParser(
  void *yyp,                   /* The parser */
  int yymajor,                 /* The major token code number */
  sqliteParserTOKENTYPE yyminor       /* The value for the token */
  sqliteParserARG_PDECL               /* Optional %extra_argument parameter */
){
  YYMINORTYPE yyminorunion;
  int yyact;            /* The parser action. */
  int yyendofinput;     /* True if we are at the end of input */
  int yyerrorhit = 0;   /* True if yymajor has invoked an error */
  yyParser *yypParser;  /* The parser */

  /* (re)initialize the parser, if necessary */
  yypParser = (yyParser*)yyp;
  if( yypParser->yyidx<0 ){
    if( yymajor==0 ) return;
    yypParser->yyidx = 0;
    yypParser->yyerrcnt = -1;
    yypParser->yytop = &yypParser->yystack[0];
    yypParser->yytop->stateno = 0;
    yypParser->yytop->major = 0;
  }
  yyminorunion.yy0 = yyminor;
  yyendofinput = (yymajor==0);
  sqliteParserARG_STORE;

#ifndef NDEBUG
  if( yyTraceFILE ){
    fprintf(yyTraceFILE,"%sInput %s\n",yyTracePrompt,yyTokenName[yymajor]);
  }
#endif

  do{
    yyact = yy_find_parser_action(yypParser,yymajor);
    if( yyact<YYNSTATE ){
      yy_shift(yypParser,yyact,yymajor,&yyminorunion);
      yypParser->yyerrcnt--;
      if( yyendofinput && yypParser->yyidx>=0 ){
        yymajor = 0;
      }else{
        yymajor = YYNOCODE;
      }
    }else if( yyact < YYNSTATE + YYNRULE ){
      yy_reduce(yypParser,yyact-YYNSTATE);
    }else if( yyact == YY_ERROR_ACTION ){
#ifndef NDEBUG
      if( yyTraceFILE ){
        fprintf(yyTraceFILE,"%sSyntax Error!\n",yyTracePrompt);
      }
#endif
#ifdef YYERRORSYMBOL
      /* A syntax error has occurred.
      ** The response to an error depends upon whether or not the
      ** grammar defines an error token "ERROR".  
      **
      ** This is what we do if the grammar does define ERROR:
      **
      **  * Call the %syntax_error function.
      **
      **  * Begin popping the stack until we enter a state where
      **    it is legal to shift the error symbol, then shift
      **    the error symbol.
      **
      **  * Set the error count to three.
      **
      **  * Begin accepting and shifting new tokens.  No new error
      **    processing will occur until three tokens have been
      **    shifted successfully.
      **
      */
      if( yypParser->yyerrcnt<0 ){
        yy_syntax_error(yypParser,yymajor,yyminorunion);
      }
      if( yypParser->yytop->major==YYERRORSYMBOL || yyerrorhit ){
#ifndef NDEBUG
        if( yyTraceFILE ){
          fprintf(yyTraceFILE,"%sDiscard input token %s\n",
             yyTracePrompt,yyTokenName[yymajor]);
        }
#endif
        yy_destructor(yymajor,&yyminorunion);
        yymajor = YYNOCODE;
      }else{
         while(
          yypParser->yyidx >= 0 &&
          yypParser->yytop->major != YYERRORSYMBOL &&
          (yyact = yy_find_parser_action(yypParser,YYERRORSYMBOL)) >= YYNSTATE
        ){
          yy_pop_parser_stack(yypParser);
        }
        if( yypParser->yyidx < 0 || yymajor==0 ){
          yy_destructor(yymajor,&yyminorunion);
          yy_parse_failed(yypParser);
          yymajor = YYNOCODE;
        }else if( yypParser->yytop->major!=YYERRORSYMBOL ){
          YYMINORTYPE u2;
          u2.YYERRSYMDT = 0;
          yy_shift(yypParser,yyact,YYERRORSYMBOL,&u2);
        }
      }
      yypParser->yyerrcnt = 3;
      yyerrorhit = 1;
#else  /* YYERRORSYMBOL is not defined */
      /* This is what we do if the grammar does not define ERROR:
      **
      **  * Report an error message, and throw away the input token.
      **
      **  * If the input token is $, then fail the parse.
      **
      ** As before, subsequent error messages are suppressed until
      ** three input tokens have been successfully shifted.
      */
      if( yypParser->yyerrcnt<=0 ){
        yy_syntax_error(yypParser,yymajor,yyminorunion);
      }
      yypParser->yyerrcnt = 3;
      yy_destructor(yymajor,&yyminorunion);
      if( yyendofinput ){
        yy_parse_failed(yypParser);
      }
      yymajor = YYNOCODE;
#endif
    }else{
      yy_accept(yypParser);
      yymajor = YYNOCODE;
    }
  }while( yymajor!=YYNOCODE && yypParser->yyidx>=0 );
  return;
}
