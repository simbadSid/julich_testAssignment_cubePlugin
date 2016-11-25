/* A Bison parser, made by GNU Bison 2.7.  */

/* Skeleton implementation for Bison LALR(1) parsers in C++

      Copyright (C) 2002-2012 Free Software Foundation, Inc.

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

// Take the name prefix into account.
#define yylex   cubeparserlex

/* First part of user declarations.  */

/* Line 279 of lalr1.cc  */
#line 40 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.cpp"


#include "Cube4Parser.h"

/* User implementation prologue.  */
/* Line 285 of lalr1.cc  */
#line 244 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"




#include "CubeTypes.h"
#include "CubeSysres.h"
#include "CubeLocation.h"
#include "CubeLocationGroup.h"
#include "CubeSystemTreeNode.h"
#include "CubeMetric.h"
#include "CubeCnode.h"
#include "CubeRegion.h"

#include "CubeDriver.h"
#include "Cube4Scanner.h"
#include <cassert>
#include <cstdlib>
#include <cstring>
#include <stdlib.h>
#include <string>


#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <utility>
#include <string>
#include <vector>
#include "CubeServices.h"
#include "CubeParseContext.h"
#include "CubeMetric.h"
#include "Cube.h"
#include "CubeCartesian.h"

using namespace std;

/* this "connects" the bison parser in the driver to the flex scanner class
 * object. it defines the yylex() function call to pull the next token from the
 * current lexer object of the driver context. */
#undef yylex
#define yylex Cube4Lexer.lex

// Workaround for Sun Studio C++ compilers on Solaris
#if defined( __SVR4 ) &&  defined( __SUNPRO_CC )
  #include <ieeefp.h>

  #define isinf( x )  ( fpclass( x ) == FP_NINF || fpclass( x ) == FP_PINF )
  #define isnan( x )  isnand( x )
#endif


cubeparser::Cube4Parser::location_type cubeparserloc;



/* Line 285 of lalr1.cc  */
#line 104 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.cpp"


# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* FIXME: INFRINGES ON USER NAME SPACE */
#   define YY_( msgid ) dgettext( "bison-runtime", msgid )
#  endif
# endif
# ifndef YY_
#  define YY_( msgid ) msgid
# endif
#endif

#define YYRHSLOC( Rhs, K ) ( ( Rhs )[ K ] )
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT( Current, Rhs, N )                               \
    do {                                                                  \
        if ( N )                                                            \
        {                                                               \
            ( Current ).begin = YYRHSLOC( Rhs, 1 ).begin;                   \
            ( Current ).end   = YYRHSLOC( Rhs, N ).end;                     \
        }                                                               \
        else                                                              \
        {                                                               \
            ( Current ).begin = ( Current ).end = YYRHSLOC( Rhs, 0 ).end;      \
        } }                                                               \
    while ( /*CONSTCOND*/ false )
# endif


/* Suppress unused-variable warnings by "using" E.  */
#define YYUSE( e ) ( ( void )( e ) )

/* Enable debugging if requested.  */
#if CUBEPARSERDEBUG

/* A pseudo ostream that takes yydebug_ into account.  */
# define YYCDEBUG if ( yydebug_ ) ( *yycdebug_ )

# define YY_SYMBOL_PRINT( Title, Type, Value, Location )  \
    do {                                                    \
        if ( yydebug_ )                                         \
        {                                                   \
            *yycdebug_ << Title << ' ';                       \
            yy_symbol_print_( ( Type ), ( Value ), ( Location ) );   \
            *yycdebug_ << std::endl;                          \
        }                                                   \
    } while ( false )

# define YY_REDUCE_PRINT( Rule )          \
    do {                                    \
        if ( yydebug_ ) {                         \
            yy_reduce_print_( Rule ); }            \
    } while ( false )

# define YY_STACK_PRINT()               \
    do {                                    \
        if ( yydebug_ ) {                         \
            yystack_print_(); }                  \
    } while ( false )

#else /* !CUBEPARSERDEBUG */

# define YYCDEBUG if ( false ) std::cerr
# define YY_SYMBOL_PRINT( Title, Type, Value, Location ) YYUSE( Type )
# define YY_REDUCE_PRINT( Rule )        static_cast<void>( 0 )
# define YY_STACK_PRINT()             static_cast<void>( 0 )

#endif /* !CUBEPARSERDEBUG */

#define yyerrok         ( yyerrstatus_ = 0 )
#define yyclearin       ( yychar = yyempty_ )

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  ( !!yyerrstatus_ )


namespace cubeparser
{
/* Line 353 of lalr1.cc  */
#line 199 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.cpp"

/* Return YYSTR after stripping away unnecessary quotes and
   backslashes, so that it's suitable for yyerror.  The heuristic is
   that double-quoting is unnecessary unless the string contains an
   apostrophe, a comma, or backslash (other than backslash-backslash).
   YYSTR is taken from yytname.  */
std::string
Cube4Parser::yytnamerr_( const char* yystr )
{
    if ( *yystr == '"' )
    {
        std::string yyr = "";
        char const* yyp = yystr;

        for (;; )
        {
            switch ( *++yyp )
            {
                case '\'':
                case ',':
                    goto do_not_strip_quotes;

                case '\\':
                    if ( *++yyp != '\\' )
                    {
                        goto do_not_strip_quotes;
                    }
                /* Fall through.  */
                default:
                    yyr += *yyp;
                    break;

                case '"':
                    return yyr;
            }
        }
do_not_strip_quotes:;
    }

    return yystr;
}


/// Build a parser object.
Cube4Parser::Cube4Parser ( class Driver& driver_yyarg, class ParseContext& parseContext_yyarg, class Cube4Scanner& Cube4Lexer_yyarg, class cube::Cube& cube_yyarg, bool& clustering_on_yyarg )
    :
#if CUBEPARSERDEBUG
    yydebug_( false ),
    yycdebug_( &std::cerr ),
#endif
    driver( driver_yyarg ),
    parseContext( parseContext_yyarg ),
    Cube4Lexer( Cube4Lexer_yyarg ),
    cube( cube_yyarg ),
    clustering_on( clustering_on_yyarg )
{
}

Cube4Parser::~Cube4Parser ()
{
}

#if CUBEPARSERDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
   `--------------------------------*/

inline void
Cube4Parser::yy_symbol_value_print_( int yytype,
                                     const semantic_type* yyvaluep, const location_type* yylocationp )
{
    YYUSE( yylocationp );
    YYUSE( yyvaluep );
    std::ostream& yyo      = debug_stream();
    std::ostream& yyoutput = yyo;
    YYUSE( yyoutput );
    switch ( yytype )
    {
        default:
            break;
    }
}


void
Cube4Parser::yy_symbol_print_( int yytype,
                               const semantic_type* yyvaluep, const location_type* yylocationp )
{
    *yycdebug_ << ( yytype < yyntokens_ ? "token" : "nterm" )
               << ' ' << yytname_[ yytype ] << " ("
               << *yylocationp << ": ";
    yy_symbol_value_print_( yytype, yyvaluep, yylocationp );
    *yycdebug_ << ')';
}
#endif

void
Cube4Parser::yydestruct_( const char* yymsg,
                          int yytype, semantic_type* yyvaluep, location_type* yylocationp )
{
    YYUSE( yylocationp );
    YYUSE( yymsg );
    YYUSE( yyvaluep );

    if ( yymsg )
    {
        YY_SYMBOL_PRINT( yymsg, yytype, yyvaluep, yylocationp );
    }

    switch ( yytype )
    {
        default:
            break;
    }
}

void
Cube4Parser::yypop_( unsigned int n )
{
    yystate_stack_.pop( n );
    yysemantic_stack_.pop( n );
    yylocation_stack_.pop( n );
}

#if CUBEPARSERDEBUG
std::ostream&
Cube4Parser::debug_stream() const
{
    return *yycdebug_;
}

void
Cube4Parser::set_debug_stream( std::ostream& o )
{
    yycdebug_ = &o;
}


Cube4Parser::debug_level_type
Cube4Parser::debug_level() const
{
    return yydebug_;
}

void
Cube4Parser::set_debug_level( debug_level_type l )
{
    yydebug_ = l;
}
#endif

inline bool
Cube4Parser::yy_pact_value_is_default_( int yyvalue )
{
    return yyvalue == yypact_ninf_;
}

inline bool
Cube4Parser::yy_table_value_is_error_( int yyvalue )
{
    return yyvalue == yytable_ninf_;
}

int
Cube4Parser::parse()
{
    /// Lookahead and lookahead in internal form.
    int yychar  = yyempty_;
    int yytoken = 0;

    // State.
    int yyn;
    int yylen   = 0;
    int yystate = 0;

    // Error handling.
    int yynerrs_     = 0;
    int yyerrstatus_ = 0;

    /// Semantic value of the lookahead.
    static semantic_type yyval_default;
    semantic_type        yylval = yyval_default;
    /// Location of the lookahead.
    location_type yylloc;
    /// The locations where the error started and ended.
    location_type yyerror_range[ 3 ];

    /// $$.
    semantic_type yyval;
    /// @$.
    location_type yyloc;

    int yyresult;

    // FIXME: This shoud be completely indented.  It is not yet to
    // avoid gratuitous conflicts when merging into the master branch.
    try
    {
        YYCDEBUG << "Starting parse" << std::endl;


/* User initialization code.  */
/* Line 545 of lalr1.cc  */
#line 76 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
        {
            // initialize the initial location object
            yylloc.begin.filename = yylloc.end.filename = &driver.streamname;
            clustering_on         = false;
        }
/* Line 545 of lalr1.cc  */
#line 405 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.cpp"

        /* Initialize the stacks.  The initial state will be pushed in
           yynewstate, since the latter expects the semantical and the
           location values to have been already stored, initialize these
           stacks with a primary value.  */
        yystate_stack_    = state_stack_type( 0 );
        yysemantic_stack_ = semantic_stack_type( 0 );
        yylocation_stack_ = location_stack_type( 0 );
        yysemantic_stack_.push( yylval );
        yylocation_stack_.push( yylloc );

        /* New state.  */
yynewstate:
        yystate_stack_.push( yystate );
        YYCDEBUG << "Entering state " << yystate << std::endl;

        /* Accept?  */
        if ( yystate == yyfinal_ )
        {
            goto yyacceptlab;
        }

        goto yybackup;

        /* Backup.  */
yybackup:

        /* Try to take a decision without lookahead.  */
        yyn = yypact_[ yystate ];
        if ( yy_pact_value_is_default_( yyn ) )
        {
            goto yydefault;
        }

        /* Read a lookahead token.  */
        if ( yychar == yyempty_ )
        {
            YYCDEBUG << "Reading a token: ";
            yychar = yylex( &yylval, &yylloc );
        }

        /* Convert token to internal form.  */
        if ( yychar <= yyeof_ )
        {
            yychar = yytoken = yyeof_;
            YYCDEBUG << "Now at end of input." << std::endl;
        }
        else
        {
            yytoken = yytranslate_( yychar );
            YY_SYMBOL_PRINT( "Next token is", yytoken, &yylval, &yylloc );
        }

        /* If the proper action on seeing token YYTOKEN is to reduce or to
           detect an error, take that action.  */
        yyn += yytoken;
        if ( yyn < 0 || yylast_ < yyn || yycheck_[ yyn ] != yytoken )
        {
            goto yydefault;
        }

        /* Reduce or error.  */
        yyn = yytable_[ yyn ];
        if ( yyn <= 0 )
        {
            if ( yy_table_value_is_error_( yyn ) )
            {
                goto yyerrlab;
            }
            yyn = -yyn;
            goto yyreduce;
        }

        /* Shift the lookahead token.  */
        YY_SYMBOL_PRINT( "Shifting", yytoken, &yylval, &yylloc );

        /* Discard the token being shifted.  */
        yychar = yyempty_;

        yysemantic_stack_.push( yylval );
        yylocation_stack_.push( yylloc );

        /* Count tokens shifted since error; after three, turn off error
           status.  */
        if ( yyerrstatus_ )
        {
            --yyerrstatus_;
        }

        yystate = yyn;
        goto yynewstate;

        /*-----------------------------------------------------------.
        | yydefault -- do the default action for the current state.  |
           `-----------------------------------------------------------*/
yydefault:
        yyn = yydefact_[ yystate ];
        if ( yyn == 0 )
        {
            goto yyerrlab;
        }
        goto yyreduce;

        /*-----------------------------.
        | yyreduce -- Do a reduction.  |
           `-----------------------------*/
yyreduce:
        yylen = yyr2_[ yyn ];
        /* If YYLEN is nonzero, implement the default value of the action:
           `$$ = $1'.  Otherwise, use the top of the stack.

           Otherwise, the following line sets YYVAL to garbage.
           This behavior is undocumented and Bison
           users should not rely upon it.  */
        if ( yylen )
        {
            yyval = yysemantic_stack_[ yylen - 1 ];
        }
        else
        {
            yyval = yysemantic_stack_[ 0 ];
        }

        // Compute the default @$.
        {
            slice<location_type, location_stack_type> slice( yylocation_stack_, yylen );
            YYLLOC_DEFAULT( yyloc, slice, yylen );
        }

        // Perform the reduction.
        YY_REDUCE_PRINT( yyn );
        switch ( yyn )
        {
            case 2:
/* Line 670 of lalr1.cc  */
#line 309 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.versionSeen )
                    {
                        error( cubeparserloc, "Multiple version attributes defines!" );
                    }
                    else
                    {
                        parseContext.versionSeen = true;
                    }
                    parseContext.version = parseContext.str.str();
                }
                break;

            case 3:
/* Line 670 of lalr1.cc  */
#line 316 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.encodingSeen )
                    {
                        error( cubeparserloc, "Multiple encoding attributes defines!" );
                    }
                    else
                    {
                        parseContext.encodingSeen = true;
                    }
                    parseContext.encoding = parseContext.str.str();
                }
                break;

            case 4:
/* Line 670 of lalr1.cc  */
#line 323 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.keySeen )
                    {
                        error( cubeparserloc, "Multiple key attributes defines!" );
                    }
                    else
                    {
                        parseContext.keySeen = true;
                    }
                    parseContext.key = parseContext.str.str();
                }
                break;

            case 5:
/* Line 670 of lalr1.cc  */
#line 330 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.valueSeen )
                    {
                        error( cubeparserloc, "Multiple value attributes defines!" );
                    }
                    else
                    {
                        parseContext.valueSeen = true;
                    }
                    parseContext.value = parseContext.str.str();
                }
                break;

            case 6:
/* Line 670 of lalr1.cc  */
#line 337 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.modSeen )
                    {
                        error( cubeparserloc, "Multiple module attributes defines!" );
                    }
                    else
                    {
                        parseContext.modSeen = true;
                    }
                    parseContext.mod = parseContext.str.str();
                }
                break;

            case 7:
/* Line 670 of lalr1.cc  */
#line 344 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.metricTypeSeen )
                    {
                        error( cubeparserloc, "Multiple metric type attributes defines!" );
                    }
                    else
                    {
                        parseContext.metricTypeSeen = true;
                    }
                    parseContext.metricType = parseContext.str.str();
                }
                break;

            case 8:
/* Line 670 of lalr1.cc  */
#line 352 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.metricVizTypeSeen )
                    {
                        error( cubeparserloc, "Multiple metric visibilty type attributes defines!" );
                    }
                    else
                    {
                        parseContext.metricVizTypeSeen = true;
                    }
                    parseContext.metricVizType = parseContext.str.str();
                }
                break;

            case 9:
/* Line 670 of lalr1.cc  */
#line 360 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.metricConvertibleSeen )
                    {
                        error( cubeparserloc, "Multiple metric convertible type attributes defines!" );
                    }
                    else
                    {
                        parseContext.metricConvertibleSeen = true;
                    }
                    parseContext.metricConvertible = true;
                }
                break;

            case 10:
/* Line 670 of lalr1.cc  */
#line 366 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.metricConvertibleSeen )
                    {
                        error( cubeparserloc, "Multiple metric convertible type attributes defines!" );
                    }
                    else
                    {
                        parseContext.metricConvertibleSeen = true;
                    }
                    parseContext.metricConvertible = false;
                }
                break;

            case 11:
/* Line 670 of lalr1.cc  */
#line 375 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.cnodeParTypeSeen )
                    {
                        error( cubeparserloc, "Multiple cnode parameter type attributes defines!" );
                    }
                    else
                    {
                        parseContext.cnodeParTypeSeen = true;
                    }
                    parseContext.cnode_parameter_type = parseContext.str.str();
                }
                break;

            case 12:
/* Line 670 of lalr1.cc  */
#line 384 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.cnodeParKeySeen )
                    {
                        error( cubeparserloc, "Multiple cnode parameter keys defines!" );
                    }
                    else
                    {
                        parseContext.cnodeParKeySeen = true;
                    }
                    parseContext.cnode_parameter_key = parseContext.str.str();
                }
                break;

            case 13:
/* Line 670 of lalr1.cc  */
#line 393 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.cnodeParValueSeen )
                    {
                        error( cubeparserloc, "Multiple cnode parameter values defines!" );
                    }
                    else
                    {
                        parseContext.cnodeParValueSeen = true;
                    }
                    parseContext.cnode_parameter_value = parseContext.str.str();
                }
                break;

            case 14:
/* Line 670 of lalr1.cc  */
#line 402 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.cartNameSeen )
                    {
                        error( cubeparserloc, "Multiple topology names  defines!" );
                    }
                    else
                    {
                        parseContext.cartNameSeen = true;
                    }
                    parseContext.cartName = parseContext.str.str();
                }
                break;

            case 15:
/* Line 670 of lalr1.cc  */
#line 412 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.dimNameSeen )
                    {
                        error( cubeparserloc, "Multiple names for dimension attributes defines!" );
                    }
                    else
                    {
                        parseContext.dimNameSeen = true;
                    }
                    parseContext.dimNamesCount++;
                    parseContext.dimName = cube::services::escapeFromXML( parseContext.str.str() );
                }
                break;

            case 17:
/* Line 670 of lalr1.cc  */
#line 422 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.metricsTitleSeen )
                    {
                        error( cubeparserloc, "Multiple metrics titles defined!" );
                    }
                    else
                    {
                        parseContext.metricsTitleSeen = true;
                    }
                    parseContext.metricsTitle = parseContext.str.str();
                }
                break;

            case 19:
/* Line 670 of lalr1.cc  */
#line 431 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.calltreeTitleSeen )
                    {
                        error( cubeparserloc, "Multiple calltree titles defined!" );
                    }
                    else
                    {
                        parseContext.calltreeTitleSeen = true;
                    }
                    parseContext.calltreeTitle = parseContext.str.str();
                }
                break;

            case 21:
/* Line 670 of lalr1.cc  */
#line 441 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.systemtreeTitleSeen )
                    {
                        error( cubeparserloc, "Multiple system tree titles defined!" );
                    }
                    else
                    {
                        parseContext.systemtreeTitleSeen = true;
                    }
                    parseContext.systemtreeTitle = parseContext.str.str();
                }
                break;

            case 23:
/* Line 670 of lalr1.cc  */
#line 451 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.cubeplTypeSeen )
                    {
                        error( cubeparserloc, "Multiple cubepl type attributes defines!" );
                    }
                    else
                    {
                        parseContext.cubeplTypeSeen = true;
                    }
                    parseContext.rowwise = false;
                }
                break;

            case 27:
/* Line 670 of lalr1.cc  */
#line 470 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.expressionAggrPlusSeen )
                    {
                        error( cubeparserloc, "Multiple cubepl plus-aggregation attributes defines!" );
                    }
                    else
                    {
                        parseContext.expressionAggrPlusSeen = true;
                    }
                    parseContext.cubeplAggrType = ParseContext::CUBEPL_AGGR_PLUS;
                }
                break;

            case 28:
/* Line 670 of lalr1.cc  */
#line 480 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.expressionAggrMinusSeen )
                    {
                        error( cubeparserloc, "Multiple cubepl minus-aggregation attributes defines!" );
                    }
                    else
                    {
                        parseContext.expressionAggrMinusSeen = true;
                    }
                    parseContext.cubeplAggrType = ParseContext::CUBEPL_AGGR_MINUS;
                }
                break;

            case 29:
/* Line 670 of lalr1.cc  */
#line 491 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.expressionAggrAggrSeen )
                    {
                        error( cubeparserloc, "Multiple cubepl aggr-aggregation attributes defines!" );
                    }
                    else
                    {
                        parseContext.expressionAggrAggrSeen = true;
                    }
                    parseContext.cubeplAggrType = ParseContext::CUBEPL_AGGR_AGGR;
                }
                break;

            case 30:
/* Line 670 of lalr1.cc  */
#line 503 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.idSeen )
                    {
                        error( cubeparserloc, "Multiple id attributes defines!" );
                    }
                    else
                    {
                        parseContext.idSeen = true;
                    }
                    if ( parseContext.longAttribute < 0 )
                    {
                        error( cubeparserloc, "Ids must be non-negative!" );
                    }
                    parseContext.id = ( int )parseContext.longAttribute;
                }
                break;

            case 31:
/* Line 670 of lalr1.cc  */
#line 512 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.calleeidSeen )
                    {
                        error( cubeparserloc, "Multiple callee id attributes defines!" );
                    }
                    else
                    {
                        parseContext.calleeidSeen = true;
                    }
                    if ( parseContext.longAttribute < 0 )
                    {
                        error( cubeparserloc, "Callee ids of regions must be non-negative!" );
                    }
                    parseContext.calleeid = ( int )parseContext.longAttribute;
                }
                break;

            case 32:
/* Line 670 of lalr1.cc  */
#line 524 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.thrdidSeen )
                    {
                        error( cubeparserloc, "Multiple location id attributes defines!" );
                    }
                    else
                    {
                        parseContext.thrdidSeen = true;
                    }
                    if ( parseContext.longAttribute < 0 )
                    {
                        error( cubeparserloc, "Location ids must be non-negative!" );
                    }
                    parseContext.locid = ( int )parseContext.longAttribute;
                }
                break;

            case 33:
/* Line 670 of lalr1.cc  */
#line 533 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.procidSeen )
                    {
                        error( cubeparserloc, "Multiple location group id attributes defines!" );
                    }
                    else
                    {
                        parseContext.procidSeen = true;
                    }
                    if ( parseContext.longAttribute < 0 )
                    {
                        error( cubeparserloc, "Location group ids must be non-negative!" );
                    }
                    parseContext.lgid = ( int )parseContext.longAttribute;
                }
                break;

            case 34:
/* Line 670 of lalr1.cc  */
#line 542 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.nodeidSeen )
                    {
                        error( cubeparserloc, "Multiple system tree node id attributes defines!" );
                    }
                    else
                    {
                        parseContext.nodeidSeen = true;
                    }
                    if ( parseContext.longAttribute < 0 )
                    {
                        error( cubeparserloc, "System tree node ids must be non-negative!" );
                    }
                    parseContext.stnid = ( int )parseContext.longAttribute;
                }
                break;

            case 35:
/* Line 670 of lalr1.cc  */
#line 552 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.thrdidSeen )
                    {
                        error( cubeparserloc, "Multiple thread id attributes defines!" );
                    }
                    else
                    {
                        parseContext.thrdidSeen = true;
                    }
                    if ( parseContext.longAttribute < 0 )
                    {
                        error( cubeparserloc, "Thread ids must be non-negative!" );
                    }
                    parseContext.thrdid = ( int )parseContext.longAttribute;
                }
                break;

            case 36:
/* Line 670 of lalr1.cc  */
#line 561 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.procidSeen )
                    {
                        error( cubeparserloc, "Multiple process id attributes defines!" );
                    }
                    else
                    {
                        parseContext.procidSeen = true;
                    }
                    if ( parseContext.longAttribute < 0 )
                    {
                        error( cubeparserloc, "Process ids must be non-negative!" );
                    }
                    parseContext.procid = ( int )parseContext.longAttribute;
                }
                break;

            case 37:
/* Line 670 of lalr1.cc  */
#line 570 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.nodeidSeen )
                    {
                        error( cubeparserloc, "Multiple node id attributes defines!" );
                    }
                    else
                    {
                        parseContext.nodeidSeen = true;
                    }
                    if ( parseContext.longAttribute < 0 )
                    {
                        error( cubeparserloc, "Node ids must be non-negative!" );
                    }
                    parseContext.nodeid = ( int )parseContext.longAttribute;
                }
                break;

            case 38:
/* Line 670 of lalr1.cc  */
#line 579 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.machidSeen )
                    {
                        error( cubeparserloc, "Multiple machine id attributes defines!" );
                    }
                    else
                    {
                        parseContext.machidSeen = true;
                    }
                    if ( parseContext.longAttribute < 0 )
                    {
                        error( cubeparserloc, "Machine ids must be non-negative!" );
                    }
                    parseContext.machid = ( int )parseContext.longAttribute;
                }
                break;

            case 39:
/* Line 670 of lalr1.cc  */
#line 588 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.metricidSeen )
                    {
                        error( cubeparserloc, "Multiple metric id attributes defines!" );
                    }
                    else
                    {
                        parseContext.metricidSeen = true;
                    }
                    if ( parseContext.longAttribute < 0 )
                    {
                        error( cubeparserloc, "Metric ids must be non-negative!" );
                    }
                    parseContext.metricid = parseContext.longAttribute;
                }
                break;

            case 40:
/* Line 670 of lalr1.cc  */
#line 597 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.cnodeidSeen )
                    {
                        error( cubeparserloc, "Multiple cnode id attributes defines!" );
                    }
                    else
                    {
                        parseContext.cnodeidSeen = true;
                    }
                    if ( parseContext.longAttribute < 0 )
                    {
                        error( cubeparserloc, "Cnode ids must be non-negative!" );
                    }
                    parseContext.cnodeid = ( int )parseContext.longAttribute;
                }
                break;

            case 41:
/* Line 670 of lalr1.cc  */
#line 608 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.beginSeen )
                    {
                        error( cubeparserloc, "Multiple begin attributes defines!" );
                    }
                    else
                    {
                        parseContext.beginSeen = true;
                    }
                    parseContext.beginln = parseContext.longAttribute;
                }
                break;

            case 42:
/* Line 670 of lalr1.cc  */
#line 616 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.endSeen )
                    {
                        error( cubeparserloc, "Multiple end attributes defines!" );
                    }
                    else
                    {
                        parseContext.endSeen = true;
                    }
                    parseContext.endln = parseContext.longAttribute;
                }
                break;

            case 43:
/* Line 670 of lalr1.cc  */
#line 624 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.lineSeen )
                    {
                        error( cubeparserloc, "Multiple line attributes defines!" );
                    }
                    else
                    {
                        parseContext.lineSeen = true;
                    }
                    parseContext.line = parseContext.longAttribute;
                }
                break;

            case 44:
/* Line 670 of lalr1.cc  */
#line 632 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.ndimsSeen )
                    {
                        error( cubeparserloc, "Multiple ndims attributes defines!" );
                    }
                    else
                    {
                        parseContext.ndimsSeen = true;
                    }
                    if ( parseContext.longAttribute <= 0 )
                    {
                        error( cubeparserloc, "Topology dimensions must be positive numbers!" );
                    }
                    parseContext.ndims = parseContext.longAttribute;
                }
                break;

            case 45:
/* Line 670 of lalr1.cc  */
#line 642 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.sizeSeen )
                    {
                        error( cubeparserloc, "Multiple size attributes defines!" );
                    }
                    else
                    {
                        parseContext.sizeSeen = true;
                    }
                    if ( parseContext.longAttribute <= 0 )
                    {
                        error( cubeparserloc, "Dimension sizes must be positive numbers!" );
                    }
                    parseContext.dimVec.push_back( parseContext.longAttribute );
                }
                break;

            case 46:
/* Line 670 of lalr1.cc  */
#line 654 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.periodicSeen )
                    {
                        error( cubeparserloc, "Multiple periodic attributes defines!" );
                    }
                    else
                    {
                        parseContext.periodicSeen = true;
                    }
                    parseContext.periodicVec.push_back( false );
                }
                break;

            case 47:
/* Line 670 of lalr1.cc  */
#line 660 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.periodicSeen )
                    {
                        error( cubeparserloc, "Multiple periodic attributes defined!" );
                    }
                    else
                    {
                        parseContext.periodicSeen = true;
                    }
                    parseContext.periodicVec.push_back( true );
                }
                break;

            case 48:
/* Line 670 of lalr1.cc  */
#line 671 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.murlSeen )
                    {
                        error( cubeparserloc, "Multiple murl tags defined!" );
                    }
                    else
                    {
                        parseContext.murlSeen = true;
                    }
                    parseContext.murl = parseContext.str.str();
                }
                break;

            case 49:
/* Line 670 of lalr1.cc  */
#line 681 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.dispnameSeen )
                    {
                        error( cubeparserloc, "Multiple disp_name tags defined!" );
                    }
                    else
                    {
                        parseContext.dispnameSeen = true;
                    }
                    parseContext.disp_name = parseContext.str.str();
                }
                break;

            case 50:
/* Line 670 of lalr1.cc  */
#line 688 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.uniqnameSeen )
                    {
                        error( cubeparserloc, "Multiple uniq_name tags defined!" );
                    }
                    else
                    {
                        parseContext.uniqnameSeen = true;
                    }
                    parseContext.uniq_name = parseContext.str.str();
                }
                break;

            case 51:
/* Line 670 of lalr1.cc  */
#line 694 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.dtypeSeen )
                    {
                        error( cubeparserloc, "Multiple dtype tags defined!" );
                    }
                    else
                    {
                        parseContext.dtypeSeen = true;
                    }
                    parseContext.dtype = parseContext.str.str();
                }
                break;

            case 52:
/* Line 670 of lalr1.cc  */
#line 701 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.uomSeen )
                    {
                        error( cubeparserloc, "Multiple uom tags defined!" );
                    }
                    else
                    {
                        parseContext.uomSeen = true;
                    }
                    parseContext.uom = parseContext.str.str();
                }
                break;

            case 53:
/* Line 670 of lalr1.cc  */
#line 708 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.valSeen )
                    {
                        error( cubeparserloc, "Multiple val tags defined!" );
                    }
                    else
                    {
                        parseContext.valSeen = true;
                    }
                    parseContext.val = parseContext.str.str();
                }
                break;

            case 54:
/* Line 670 of lalr1.cc  */
#line 715 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.urlSeen )
                    {
                        error( cubeparserloc, "Multiple url tags defined!" );
                    }
                    else
                    {
                        parseContext.urlSeen = true;
                    }
                    parseContext.url = parseContext.str.str();
                }
                break;

            case 57:
/* Line 670 of lalr1.cc  */
#line 727 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.expressionSeen )
                    {
                        error( cubeparserloc, "Multiple expressions defined!" );
                    }
                    else
                    {
                        parseContext.expressionSeen = true;
                    }
                    parseContext.expression = cube::services::escapeFromXML( parseContext.str.str() );
                }
                break;

            case 58:
/* Line 670 of lalr1.cc  */
#line 735 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.expressionInitSeen )
                    {
                        error( cubeparserloc, "Multiple expression initializations defined!" );
                    }
                    else
                    {
                        parseContext.expressionInitSeen = true;
                    }
                    parseContext.expressionInit = cube::services::escapeFromXML( parseContext.str.str() );
                }
                break;

            case 59:
/* Line 670 of lalr1.cc  */
#line 743 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.cubeplAggrType == ParseContext::CUBEPL_AGGR_PLUS )
                    {
                        parseContext.expressionAggrPlus = cube::services::escapeFromXML( parseContext.str.str() );
                    }
                    else
                    if ( parseContext.cubeplAggrType == ParseContext::CUBEPL_AGGR_MINUS )
                    {
                        parseContext.expressionAggrMinus = cube::services::escapeFromXML( parseContext.str.str() );
                    }
                    else
                    if ( parseContext.cubeplAggrType == ParseContext::CUBEPL_AGGR_AGGR )
                    {
                        parseContext.expressionAggrAggr = cube::services::escapeFromXML( parseContext.str.str() );
                    }
                }
                break;

            case 60:
/* Line 670 of lalr1.cc  */
#line 754 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.descrSeen )
                    {
                        error( cubeparserloc, "Multiple descr tags defined!" );
                    }
                    else
                    {
                        parseContext.descrSeen = true;
                    }
                    parseContext.descr = parseContext.str.str();
                }
                break;

            case 61:
/* Line 670 of lalr1.cc  */
#line 761 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.nameSeen )
                    {
                        error( cubeparserloc, "Multiple name tags defined!" );
                    }
                    else
                    {
                        parseContext.nameSeen = true;
                    }
                    parseContext.name         = parseContext.str.str();
                    parseContext.mangled_name = parseContext.name;
                }
                break;

            case 62:
/* Line 670 of lalr1.cc  */
#line 771 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.mangledNameSeen )
                    {
                        error( cubeparserloc, "Multiple mangled name tags defined!" );
                    }
                    else
                    {
                        parseContext.mangledNameSeen = true;
                    }
                    parseContext.mangled_name = parseContext.str.str();
                }
                break;

            case 63:
/* Line 670 of lalr1.cc  */
#line 779 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.paradigmSeen )
                    {
                        error( cubeparserloc, "Multiple paradigm tags defined!" );
                    }
                    else
                    {
                        parseContext.paradigmSeen = true;
                    }
                    parseContext.paradigm = parseContext.str.str();
                }
                break;

            case 64:
/* Line 670 of lalr1.cc  */
#line 787 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.roleSeen )
                    {
                        error( cubeparserloc, "Multiple role tags defined!" );
                    }
                    else
                    {
                        parseContext.roleSeen = true;
                    }
                    parseContext.role = parseContext.str.str();
                }
                break;

            case 65:
/* Line 670 of lalr1.cc  */
#line 796 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.classSeen )
                    {
                        error( cubeparserloc, "Multiple class tags defined!" );
                    }
                    else
                    {
                        parseContext.classSeen = true;
                    }
                    parseContext.stn_class = parseContext.str.str();
                }
                break;

            case 66:
/* Line 670 of lalr1.cc  */
#line 805 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.typeSeen )
                    {
                        error( cubeparserloc, "Multiple type tags defined!" );
                    }
                    else
                    {
                        parseContext.typeSeen = true;
                    }
                    parseContext.type = parseContext.str.str();
                }
                break;

            case 67:
/* Line 670 of lalr1.cc  */
#line 812 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.rankSeen )
                    {
                        error( cubeparserloc, "Multiple rank tags defined!" );
                    }
                    else
                    {
                        parseContext.rankSeen = true;
                    }
                    if ( parseContext.longValues.size() == 0 )
                    {
                        error( cubeparserloc, "No rank is given in a rank tag!" );
                    }
                    if ( parseContext.longValues.size() > 1 )
                    {
                        error( cubeparserloc, "Multiple ranks are given in a rank tag!" );
                    }
                    int rank = ( int )parseContext.longValues[ 0 ];
                    if ( rank < 0 )
                    {
                        error( cubeparserloc, "Ranks must be non-negative!" );
                    }
                    parseContext.rank = rank;
                }
                break;

            case 68:
/* Line 670 of lalr1.cc  */
#line 829 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    unsigned nparameters = 0;
                    if ( parseContext.cnode_parameter_type == "numeric" )
                    {
                        if ( parseContext.n_cnode_num_parameters.size() != 0 || true )
                        {
                            nparameters = parseContext.n_cnode_num_parameters.top();
                            parseContext.n_cnode_num_parameters.pop();
                        }
                        nparameters++;
                        parseContext.n_cnode_num_parameters.push( nparameters );
                        std::pair<std::string, std::string > _key;
                        _key.first  =  cube::services::escapeFromXML( parseContext.cnode_parameter_key );
                        _key.second =  cube::services::escapeFromXML( parseContext.cnode_parameter_value );
                        parseContext.cnode_num_parameters.push( _key );
                    }
                    if ( parseContext.cnode_parameter_type == "string" )
                    {
                        if ( parseContext.n_cnode_str_parameters.size() != 0 ||  true )
                        {
                            nparameters = parseContext.n_cnode_str_parameters.top();
                            parseContext.n_cnode_str_parameters.pop();
                        }
                        nparameters++;
                        parseContext.n_cnode_str_parameters.push( nparameters );

                        std::pair<std::string, std::string > _key;
                        _key.first  =  cube::services::escapeFromXML( parseContext.cnode_parameter_key );
                        _key.second =  cube::services::escapeFromXML( parseContext.cnode_parameter_value );
                        parseContext.cnode_str_parameters.push( _key );
                    }
                    parseContext.stringContent     = false;
                    parseContext.cnodeParTypeSeen  = false;
                    parseContext.cnodeParKeySeen   = false;
                    parseContext.cnodeParValueSeen = false;
                }
                break;

            case 70:
/* Line 670 of lalr1.cc  */
#line 880 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    //check for attributes
                    if ( !parseContext.versionSeen )
                    {
                        error( cubeparserloc, "Missing version attribute!" );
                    }
                    else
                    {
                        parseContext.versionSeen = false;
                    }
                    if ( !parseContext.encodingSeen )
                    {
                        error( cubeparserloc, "Missing encoding attribute!" );
                    }
                    else
                    {
                        parseContext.encodingSeen = false;
                    }
                    int valid = strcmp( parseContext.version.c_str(), "1.0" );
                    if ( valid != 0 )
                    {
                        error( cubeparserloc, "XML version is expected to be 1.0!" );
                    }
                    valid = strcmp( parseContext.encoding.c_str(), "UTF-8" );
                    if ( valid != 0 )
                    {
                        error( cubeparserloc, "XML encoding is expected to be UTF-8!" );
                    }
                    cube.get_operation_progress()->start_step( 0., 1. );
                }
                break;

            case 75:
/* Line 670 of lalr1.cc  */
#line 910 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    cube.get_operation_progress()->finish_step( "Finished parsing" );
                }
                break;

            case 76:
/* Line 670 of lalr1.cc  */
#line 916 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    parseContext.cubeVersion = 4;
                    cube.def_attr( "Cube anchor.xml syntax version", "4" );
                }
                break;

            case 77:
/* Line 670 of lalr1.cc  */
#line 920 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    parseContext.cubeVersion = 4.1;
                    cube.def_attr( "Cube anchor.xml syntax version", "4.1" );
                }
                break;

            case 78:
/* Line 670 of lalr1.cc  */
#line 924 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    parseContext.cubeVersion = 4.2;
                    cube.def_attr( "Cube anchor.xml syntax version", "4.2" );
                }
                break;

            case 79:
/* Line 670 of lalr1.cc  */
#line 928 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    parseContext.cubeVersion = 4.3;
                    cube.def_attr( "Cube anchor.xml syntax version", "4.3" );
                }
                break;

            case 80:
/* Line 670 of lalr1.cc  */
#line 932 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    parseContext.cubeVersion = 4.4;
                    cube.def_attr( "Cube anchor.xml syntax version", "4.4" );
                }
                break;

            case 81:
/* Line 670 of lalr1.cc  */
#line 936 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    parseContext.cubeVersion = 4.5;
                    cube.def_attr( "Cube anchor.xml syntax version", "4.5" );
                }
                break;

            case 82:
/* Line 670 of lalr1.cc  */
#line 940 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    parseContext.cubeVersion = 3;
                    cube.def_attr( "Cube syntax version", "3" );
                }
                break;

            case 83:
/* Line 670 of lalr1.cc  */
#line 944 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    throw cube::NotSupportedVersionError( parseContext.str.str() );
                }
                break;

            case 90:
/* Line 670 of lalr1.cc  */
#line 964 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    //check for attributes
                    if ( !parseContext.keySeen )
                    {
                        error( cubeparserloc, "Missing key attribute!" );
                    }
                    else
                    {
                        parseContext.keySeen = false;
                    }
                    if ( !parseContext.valueSeen )
                    {
                        error( cubeparserloc, "Missing value attribute!" );
                    }
                    else
                    {
                        parseContext.valueSeen = false;
                    }
                    string attrkey   = cube::services::escapeFromXML( parseContext.key );
                    string attrvalue = cube::services::escapeFromXML( parseContext.value );
                    cube.def_attr( attrkey, attrvalue );

                    if ( attrkey.compare( CUBEPL_VERSION_KEY ) == 0 )
                    {
                        cube.select_cubepl_engine( attrvalue );
                    }
                }
                break;

            case 101:
/* Line 670 of lalr1.cc  */
#line 1011 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                { parseContext.murlSeen = false;
                  cube.def_mirror( cube::services::escapeFromXML( parseContext.murl ) );
                }
                break;

            case 102:
/* Line 670 of lalr1.cc  */
#line 1012 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                { parseContext.murlSeen = false;
                  cube.def_mirror( cube::services::escapeFromXML( parseContext.murl ) );
                }
                break;

            case 103:
/* Line 670 of lalr1.cc  */
#line 1021 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    clustering_on = false;
                    cube.get_operation_progress()->progress_step( "Parse metrics" );
                    if ( cube.is_clustering_on() )
                    {
                        cube.get_operation_progress()->progress_step( "Start parsing clusters" );
                        clustering_on = true;
                        std::map<uint64_t, std::map<uint64_t, uint64_t> > clusters_counter;

                        const std::map<std::string, std::string>&          attrs = cube.get_attrs();
                        std::map<std::string, std::string>::const_iterator _iter = attrs.find( "CLUSTERING" );
                        if ( _iter  != attrs.end() && ( *_iter ).second.compare( "ON" ) == 0 )
                        {
                            std::map<std::string, std::string>::const_iterator _iter = attrs.find( "CLUSTER ITERATION COUNT" );
                            if ( _iter != attrs.end() )
                            {
                                parseContext.number_of_iterations = cube::services::string2int( ( *_iter ).second );
                                std::map<std::string, std::string>::const_iterator _iter = attrs.find( "CLUSTER ROOT CNODE ID" );
                                if ( _iter != attrs.end() )
                                {
                                    parseContext.clustering_root_cnode_id = cube::services::string2int( ( *_iter ).second );
                                    for ( uint64_t iteration = 0; iteration < parseContext.number_of_iterations; iteration++ )
                                    {
                                        std::string                                        iteration_number = cube::services::numeric2string( iteration );
                                        std::string                                        key              = "CLUSTER MAPPING " + iteration_number;
                                        std::map<std::string, std::string>::const_iterator _iter            = attrs.find( key );
                                        if ( _iter != attrs.end() )
                                        {
                                            std::string           value                 = ( *_iter ).second;
                                            uint64_t              iteration_key         = iteration;
                                            std::vector<uint64_t> _cluster_id           = cube::services::parse_clustering_value( value );
                                            std::vector<uint64_t> _collapsed_cluster_id = cube::services::sort_and_collapse_clusters( _cluster_id );
                                            parseContext.cluster_mapping[ iteration_key ]           = _cluster_id;
                                            parseContext.cluster_positions[ iteration_key ]         = cube::services::get_cluster_positions( _cluster_id );
                                            parseContext.collapsed_cluster_mapping[ iteration_key ] = _collapsed_cluster_id;
                                            uint64_t process_rank = 0;
                                            for ( std::vector<uint64_t>::iterator iter = _cluster_id.begin(); iter != _cluster_id.end(); iter++, process_rank++ )
                                            {
                                                uint64_t _id = *iter;
                                                clusters_counter[ _id ][ process_rank ]++;
                                            }
                                        }
                                        else
                                        {
                                            cerr << "Clustering mapping is not continuous." << endl;
                                            clustering_on = false;
                                            cube.enable_clustering( false );
                                            break;
                                        }
                                    }
                                    cube.set_clusters_count( clusters_counter );
                                }
                                else
                                {
                                    cerr << "Cannot find cluster root cnode" << endl;
                                    clustering_on = false;
                                    cube.enable_clustering( false );
                                }
                            }
                            else
                            {
                                cerr << "Cannot find number of clustered iterations" << endl;
                                clustering_on = false;
                                cube.enable_clustering( false );
                            }
                            cube.get_operation_progress()->progress_step( "Parsing clusters finished" );
                        }
                        else
                        {
                            clustering_on = false;
                            cube.enable_clustering( false );
                        }
                    }
                }
                break;

            case 104:
/* Line 670 of lalr1.cc  */
#line 1097 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.metricsTitle != "" )
                    {
                        cube.set_metrics_title( cube::services::escapeFromXML( parseContext.metricsTitle ) );
                    }
                    cube.get_operation_progress()->finish_step( "Finished parsing metrics" );
                }
                break;

            case 108:
/* Line 670 of lalr1.cc  */
#line 1114 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    //check for attributes
                    parseContext.idSeen = false;
                    //check for tags
                    if ( parseContext.metricTypeSeen )
                    {
                        parseContext.metricTypeSeen = false;
                    }
                    else
                    {
                        parseContext.metricType = "";
                    }
                    if ( parseContext.metricVizTypeSeen )
                    {
                        parseContext.metricVizTypeSeen = false;
                    }
                    else
                    {
                        parseContext.metricVizType = "";
                    }
                    if ( parseContext.dispnameSeen )
                    {
                        parseContext.dispnameSeen = false;
                    }
                    else
                    {
                        parseContext.disp_name = "";
                    }
                    if ( parseContext.uniqnameSeen )
                    {
                        parseContext.uniqnameSeen = false;
                    }
                    else
                    {
                        parseContext.uniq_name = "";
                    }
                    if ( parseContext.dtypeSeen )
                    {
                        parseContext.dtypeSeen = false;
                    }
                    else
                    {
                        parseContext.dtype = "";
                    }
                    if ( parseContext.uomSeen )
                    {
                        parseContext.uomSeen = false;
                    }
                    else
                    {
                        parseContext.uom = "";
                    }
                    if ( parseContext.valSeen )
                    {
                        parseContext.valSeen = false;
                    }
                    else
                    {
                        parseContext.val = "";
                    }
                    if ( parseContext.urlSeen )
                    {
                        parseContext.urlSeen = false;
                    }
                    else
                    {
                        parseContext.url = "";
                    }
                    if ( parseContext.descrSeen )
                    {
                        parseContext.descrSeen = false;
                    }
                    else
                    {
                        parseContext.descr = "";
                    }
                    if ( parseContext.expressionSeen )
                    {
                        parseContext.expressionSeen = false;
                    }
                    else
                    {
                        parseContext.expression = "";
                    }
                    if ( parseContext.expressionInitSeen )
                    {
                        parseContext.expressionInitSeen = false;
                    }
                    else
                    {
                        parseContext.expressionInit = "";
                    }
                    if ( parseContext.expressionAggrPlusSeen )
                    {
                        parseContext.expressionAggrPlusSeen = false;
                    }
                    else
                    {
                        parseContext.expressionAggrPlus = "";
                    }
                    if ( parseContext.expressionAggrMinusSeen )
                    {
                        parseContext.expressionAggrMinusSeen = false;
                    }
                    else
                    {
                        parseContext.expressionAggrMinus = "";
                    }
                    if ( parseContext.expressionAggrAggrSeen )
                    {
                        parseContext.expressionAggrAggrSeen = false;
                    }
                    else
                    {
                        parseContext.expressionAggrAggr = "";
                    }
                    if ( parseContext.metricConvertibleSeen )
                    {
                        parseContext.metricConvertibleSeen = false;
                    }
                    else
                    {
                        parseContext.metricConvertible = true;
                    }

                    while ( ( int )parseContext.metricVec.size() <= parseContext.id )
                    {
                        parseContext.metricVec.push_back( NULL );
                    }
                    if ( parseContext.metricVec[ parseContext.id ] != NULL )
                    {
                        error( cubeparserloc, "Re-declared metric!" );
                    }

                    parseContext.currentMetric =
                        cube.def_met(
                            cube::services::escapeFromXML( parseContext.disp_name ),
                            cube::services::escapeFromXML( parseContext.uniq_name ),
                            cube::services::escapeFromXML( parseContext.dtype ),
                            cube::services::escapeFromXML( parseContext.uom ),
                            cube::services::escapeFromXML( parseContext.val ),
                            cube::services::escapeFromXML( parseContext.url ),
                            cube::services::escapeFromXML( parseContext.descr ),
                            parseContext.currentMetric,
                            cube::Metric::get_type_of_metric( parseContext.metricType ),
                            cube::services::escapeFromXML( parseContext.expression ),
                            cube::services::escapeFromXML( parseContext.expressionInit ),
                            cube::services::escapeFromXML( parseContext.expressionAggrPlus ),
                            cube::services::escapeFromXML( parseContext.expressionAggrMinus ),
                            cube::services::escapeFromXML( parseContext.expressionAggrAggr ),
                            true,
                            cube::Metric::get_viz_type_of_metric( parseContext.metricVizType ) );
                    if ( parseContext.currentMetric != NULL )
                    {
                        parseContext.currentMetric->setConvertible( parseContext.metricConvertible );
                        parseContext.currentMetric->set_filed_id( parseContext.id );
                        if ( parseContext.n_attributes.size() > 0 )
                        {
                            unsigned nattributes = parseContext.n_attributes.top();
                            parseContext.n_attributes.pop();

                            if ( nattributes > parseContext.attributes.size() )
                            {
                                error( cubeparserloc, "Number of saved attributes for metric " + parseContext.uniq_name + " is more, than number of actual saved parameters." );
                            }
                            for ( unsigned i = 0; i < nattributes; i++ )
                            {
                                std::pair< std::string, std::string> attr = parseContext.attributes.top();
                                parseContext.attributes.pop();
                                parseContext.currentMetric->def_attr( attr.first, attr.second );
                            }
                        }
                        parseContext.metricVec[ parseContext.id ] = parseContext.currentMetric;
                    }
                    else
                    {
                        std::string _error = "Cannot create metric  " + parseContext.uniq_name + ". Ignore it.";
                        cerr << _error << endl;
/*             error(cubeparserloc,_error.c_str()); */
                    }
                }
                break;

            case 131:
/* Line 670 of lalr1.cc  */
#line 1242 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    //check for attributes
                    if ( !parseContext.keySeen )
                    {
                        error( cubeparserloc, "Missing key attribute!" );
                    }
                    else
                    {
                        parseContext.keySeen = false;
                    }
                    if ( !parseContext.valueSeen )
                    {
                        error( cubeparserloc, "Missing value attribute!" );
                    }
                    else
                    {
                        parseContext.valueSeen = false;
                    }

                    unsigned nattributes = 0;
                    if ( parseContext.n_attributes.size() != 0  )
                    {
                        nattributes = parseContext.n_attributes.top();
                        parseContext.n_attributes.pop();
                    }
                    nattributes++;
                    parseContext.n_attributes.push( nattributes );
                    std::pair<std::string, std::string > _key;
                    _key.first  =  cube::services::escapeFromXML( parseContext.key );
                    _key.second =  cube::services::escapeFromXML( parseContext.value );
                    parseContext.attributes.push( _key );
                }
                break;

            case 132:
/* Line 670 of lalr1.cc  */
#line 1270 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.currentMetric != NULL )
                    {
                        parseContext.currentMetric =
                            ( parseContext.currentMetric )->get_parent();
                    }
                }
                break;

            case 133:
/* Line 670 of lalr1.cc  */
#line 1282 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    cube.get_operation_progress()->progress_step( "Start parsing program dimension" );
                }
                break;

            case 134:
/* Line 670 of lalr1.cc  */
#line 1286 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    cube.get_operation_progress()->progress_step( "Start parsing regions" );
                }
                break;

            case 135:
/* Line 670 of lalr1.cc  */
#line 1291 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    cube.get_operation_progress()->progress_step( "Start parsing call tree" );
                }
                break;

            case 136:
/* Line 670 of lalr1.cc  */
#line 1295 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.calltreeTitle != "" )
                    {
                        cube.set_calltree_title( cube::services::escapeFromXML( parseContext.calltreeTitle ) );
                    }

                    if ( clustering_on ) // here look for region template  and create subtrees for iterations
                    {
                        cube.get_operation_progress()->progress_step( "Start declustering" );
                        // after parsing, whole stored calltree is stored not within cube, but separatelly, in parseContext.oroginal_tree_roots.
                        // here we create first a copy of the original tree without clustering subtrees
                        cube::Cnode* clusters_root = NULL;
                        cube.set_original_root_cnodev( parseContext.original_tree_roots );
                        for ( std::vector<cube::Cnode*>::iterator citer = parseContext.original_tree_roots.begin(); citer != parseContext.original_tree_roots.end(); ++citer )
                        {
                            cube::Cnode* cnode          = *citer;
                            cube::Cnode* _clusters_root = NULL;
                            cube::services::copy_tree( cnode, _clusters_root, parseContext.clustering_root_cnode_id,  NULL, &cube );
                            if ( _clusters_root != NULL )
                            {
                                clusters_root = _clusters_root;
                            }
                        }
                        parseContext.clustering_root_cnode = clusters_root;

                        if ( cube::services::get_children( parseContext.original_tree_roots,
                                                           parseContext.clustering_root_cnode_id,
                                                           parseContext.clusters_trees ) )
                        {
                            int i = 0;
                            for ( std::vector<cube::Cnode*>::iterator citer = parseContext.clusters_trees.begin(); citer != parseContext.clusters_trees.end(); ++citer, ++i )
                            {
                                parseContext.id2cluster[ ( *citer )->get_id() ] = i;
                            }
                        }
                        else
                        {
                            clustering_on = false;
                            break;
                        }



                        // here we are going througs registered sofar regions and look for first cluster to take its region as a template for iterations
                        for ( std::vector<cube::Region*>::const_iterator riter = cube.get_regv().begin(); riter != cube.get_regv().end(); ++riter )
                        {
                            cube::Region* region = *riter;
                            if ( region->get_name().compare( "instance=1" ) == 0 )
                            {
                                parseContext.iterationRegionTemplate = region;
                                break;
                            }
                        }
                        // if we didn't found any regions, but clustering was "on" -> fatal error appeared.
                        if ( parseContext.iterationRegionTemplate == NULL ) // we didnt find any template for iteration subtree, bad cube layout
                        {
                            throw cube::CubeClusteringLayoutError( "Cannot find a template for iteration calltree." );
                        }

                        // here we merge different combinations of clusters.
                        // one can reduce amount of merges if one finds ont set of different collapsed rows - improvements for future.

                        // here we create regions for iterations
                        std::map<uint64_t,   std::map<uint64_t, uint64_t> > cluster_counter = cube.get_clusters_counter();
                        for ( unsigned i = 0; i < parseContext.number_of_iterations; i++ )
                        {
                            std::stringstream sstr;
                            std::string       iteration_name;
                            sstr << i;
                            sstr >> iteration_name;
                            // we create a regions
                            cube::Region* region =  cube.def_region(
                                "iteration=" + iteration_name,
                                "iteration=" + iteration_name,
                                parseContext.iterationRegionTemplate->get_paradigm(),
                                parseContext.iterationRegionTemplate->get_role(),
                                parseContext.iterationRegionTemplate->get_begn_ln(),
                                parseContext.iterationRegionTemplate->get_end_ln(),
                                parseContext.iterationRegionTemplate->get_url(),
                                parseContext.iterationRegionTemplate->get_descr(),
                                parseContext.iterationRegionTemplate->get_mod()
                                );
                            parseContext.iteration_regions.push_back( region );
                            // create its cnode
                            cube::Cnode* iteration_cnode = cube.def_cnode(
                                region,
                                region->get_mod(),
                                region->get_begn_ln(),
                                parseContext.clustering_root_cnode
                                );

                            // here we merge all subtrees of all clusters to this callpath.
                            std::vector<cube::Cnode*> subtrees;
                            for ( std::vector< uint64_t>::iterator iter = parseContext.collapsed_cluster_mapping[ i ].begin(); iter != parseContext.collapsed_cluster_mapping[ i ].end(); ++iter  )
                            {
                                uint64_t                     _cluster_id            = *iter;
                                std::map<uint64_t, uint64_t> _cluster_normalization = cluster_counter[ _cluster_id ];
                                uint64_t                     _cluster_position      = parseContext.id2cluster[ _cluster_id ];
                                cube::Cnode*                 cluster_root           = parseContext.clusters_trees[ _cluster_position ];
                                cube.store_ghost_cnode( cluster_root );
                                for ( size_t j = 0; j <  parseContext.cluster_positions[ i ][ _cluster_id ].size(); ++j )
                                {
                                    iteration_cnode->set_remapping_cnode( parseContext.cluster_positions[ i ][ _cluster_id ][ j ], cluster_root,  _cluster_normalization[ parseContext.cluster_positions[ i ][ _cluster_id ][ j ] ] );
                                }
                                cube::services::gather_children( subtrees, cluster_root );
                                cube::services::merge_trees( subtrees, iteration_cnode, &cube, &_cluster_normalization, &( parseContext.cluster_positions[ i ][ _cluster_id ] ) );
                            }
                        }
                        cube.get_operation_progress()->progress_step( "Declustering is done" );
                    }
                    cube.get_operation_progress()->finish_step( "Finished parsing program dimension" );
                }
                break;

            case 139:
/* Line 670 of lalr1.cc  */
#line 1409 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    //check for the attributes
                    if ( !parseContext.idSeen )
                    {
                        error( cubeparserloc, "Missing id attribute!" );
                    }
                    else
                    {
                        parseContext.idSeen = false;
                    }
                    if ( !parseContext.modSeen )
                    {
                        parseContext.mod = "";
                    }
                    else
                    {
                        parseContext.modSeen = false;
                    }
                    if ( !parseContext.beginSeen )
                    {
                        parseContext.beginln = -1;
                    }
                    else
                    {
                        parseContext.beginSeen = false;
                    }
                    if ( !parseContext.endSeen )
                    {
                        parseContext.endln = -1;
                    }
                    else
                    {
                        parseContext.endSeen = false;
                    }
                    if ( !parseContext.paradigmSeen )
                    {
                        parseContext.paradigm = "unknown";
                    }
                    else
                    {
                        parseContext.paradigmSeen = false;
                    }
                    if ( !parseContext.roleSeen )
                    {
                        parseContext.role = "unknown";
                    }
                    else
                    {
                        parseContext.roleSeen = false;
                    }
                    //check for tags
                    if ( parseContext.nameSeen )
                    {
                        parseContext.nameSeen = false;
                    }
                    else
                    {
                        parseContext.name = "";
                    }
                    if ( parseContext.mangledNameSeen )
                    {
                        parseContext.mangledNameSeen = false;
                    }
                    else
                    {
                        parseContext.mangled_name = parseContext.name;
                    }
                    if ( parseContext.urlSeen )
                    {
                        parseContext.urlSeen = false;
                    }
                    else
                    {
                        parseContext.url = "";
                    }
                    if ( parseContext.descrSeen )
                    {
                        parseContext.descrSeen = false;
                    }
                    else
                    {
                        parseContext.descr = "";
                    }

                    while ( ( int )parseContext.regionVec.size() <= parseContext.id )
                    {
                        parseContext.regionVec.push_back( NULL );
                    }
                    if ( parseContext.regionVec[ parseContext.id ] != NULL )
                    {
                        error( cubeparserloc, "Re-declared region!" );
                    }

                    cube::Region* _region =
                        cube.def_region(
                            cube::services::escapeFromXML( parseContext.name ),
                            cube::services::escapeFromXML( parseContext.mangled_name ),
                            cube::services::escapeFromXML( parseContext.paradigm ),
                            cube::services::escapeFromXML( parseContext.role ),
                            parseContext.beginln,
                            parseContext.endln,
                            parseContext.url,
                            cube::services::escapeFromXML( parseContext.descr ),
                            cube::services::escapeFromXML( parseContext.mod ),
                            parseContext.id );
                    if ( parseContext.n_attributes.size() > 0 )
                    {
                        unsigned nattributes = parseContext.n_attributes.top();
                        parseContext.n_attributes.pop();

                        if ( nattributes > parseContext.attributes.size() )
                        {
                            error( cubeparserloc, "Number of saved attributes for region " + parseContext.name + " is more, than number of actual saved parameters." );
                        }
                        for ( unsigned i = 0; i < nattributes; ++i )
                        {
                            std::pair< std::string, std::string> attr = parseContext.attributes.top();
                            parseContext.attributes.pop();
                            _region->def_attr( attr.first, attr.second );
                        }
                    }
                    parseContext.regionVec[ parseContext.id ] = _region;
                }
                break;

            case 159:
/* Line 670 of lalr1.cc  */
#line 1513 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( parseContext.n_attributes.size() > 0 )
                    {
                        unsigned nattributes = parseContext.n_attributes.top();
                        parseContext.n_attributes.pop();

                        if ( nattributes > parseContext.attributes.size() )
                        {
                            error( cubeparserloc, "Number of saved attributes for cnode is more, than number of actual saved parameters." );
                        }
                        for ( unsigned i = 0; i < nattributes; ++i )
                        {
                            std::pair< std::string, std::string> attr = parseContext.attributes.top();
                            parseContext.attributes.pop();
                            parseContext.currentCnode->def_attr( attr.first, attr.second );
                        }
                    }


                    if ( !clustering_on )
                    {
                        if ( parseContext.currentCnode == NULL )
                        {
                            error( cubeparserloc, "Cnode definitions are not correctly nested!" );
                        }


                        if ( !parseContext.n_cnode_num_parameters.empty()  )
                        {
                            unsigned nparameters = parseContext.n_cnode_num_parameters.top();
                            parseContext.n_cnode_num_parameters.pop();

                            if ( nparameters > parseContext.cnode_num_parameters.size() )
                            {
                                error( cubeparserloc, "Number of saved numeric parameters for current cnode is more, than number of actual saved parameters." );
                            }
                            for ( unsigned i = 0; i < nparameters; ++i )
                            {
                                std::pair< std::string, std::string> param = parseContext.cnode_num_parameters.top();

                                parseContext.cnode_num_parameters.pop();

                                double d_value = atof( param.second.data() );
                                parseContext.currentCnode->add_num_parameter( param.first, d_value );
                            }
                        }
                        if ( !parseContext.n_cnode_str_parameters.empty()  )
                        {
                            unsigned nparameters = parseContext.n_cnode_str_parameters.top();
                            parseContext.n_cnode_str_parameters.pop();

                            if ( nparameters > parseContext.cnode_str_parameters.size() )
                            {
                                error( cubeparserloc, "Number of saved string parameters for current cnode is more, than number of actual saved parameters." );
                            }
                            for ( unsigned i = 0; i < nparameters; ++i )
                            {
                                std::pair< std::string, std::string> param = parseContext.cnode_str_parameters.top();
                                parseContext.cnode_str_parameters.pop();
                                parseContext.currentCnode->add_str_parameter( param.first, param.second );
                            }
                        }

                        parseContext.currentCnode =
                            parseContext.currentCnode->get_parent();
                        parseContext.start_parse_clusters = false;
                    }
                    else
                    {
                        if ( parseContext.clusterCurrentCnode == NULL )
                        {
                            error( cubeparserloc, "Cluster cnode definitions are not correctly nested!" );
                        }


                        if ( !parseContext.n_cnode_num_parameters.empty()  )
                        {
                            unsigned nparameters = parseContext.n_cnode_num_parameters.top();
                            parseContext.n_cnode_num_parameters.pop();

                            if ( nparameters > parseContext.cnode_num_parameters.size() )
                            {
                                error( cubeparserloc, "Number of saved numeric parameters for current cnode is more, than number of actual saved parameters." );
                            }
                            for ( unsigned i = 0; i < nparameters; ++i )
                            {
                                std::pair< std::string, std::string> param = parseContext.cnode_num_parameters.top();

                                parseContext.cnode_num_parameters.pop();

                                double d_value = atof( param.second.data() );
                                parseContext.clusterCurrentCnode->add_num_parameter( param.first, d_value );
                            }
                        }
                        if ( !parseContext.n_cnode_str_parameters.empty()  )
                        {
                            unsigned nparameters = parseContext.n_cnode_str_parameters.top();
                            parseContext.n_cnode_str_parameters.pop();

                            if ( nparameters > parseContext.cnode_str_parameters.size() )
                            {
                                error( cubeparserloc, "Number of saved string parameters for current cnode is more, than number of actual saved parameters." );
                            }
                            for ( unsigned i = 0; i < nparameters; ++i )
                            {
                                std::pair< std::string, std::string> param = parseContext.cnode_str_parameters.top();
                                parseContext.cnode_str_parameters.pop();
                                parseContext.clusterCurrentCnode->add_str_parameter( param.first, param.second );
                            }
                        }

                        parseContext.clusterCurrentCnode =
                            parseContext.clusterCurrentCnode->get_parent();
                        if ( parseContext.clusterCurrentCnode == NULL )
                        {
                            parseContext.parse_clusters = false;
                        }
                    }
                }
                break;

            case 160:
/* Line 670 of lalr1.cc  */
#line 1635 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    //check for the attributes
                    if ( !parseContext.idSeen )
                    {
                        error( cubeparserloc, "Missing id attribute in cnode definition!" );
                    }
                    else
                    {
                        parseContext.idSeen = false;
                    }
                    if ( !parseContext.calleeidSeen )
                    {
                        error( cubeparserloc, "Missing callee id attribute in cnode definition!" );
                    }
                    else
                    {
                        parseContext.calleeidSeen = false;
                    }
                    if ( !parseContext.lineSeen )
                    {
                        parseContext.line = -1;
                    }
                    else
                    {
                        parseContext.lineSeen = false;
                    }
                    if ( !parseContext.modSeen )
                    {
                        parseContext.mod = "";
                    }
                    else
                    {
                        parseContext.modSeen = false;
                    }
                    //check if the region is defined
                    if ( ( int )parseContext.regionVec.size() <= parseContext.calleeid )
                    {
                        error( cubeparserloc, "Undefined region in cnode definition!" );
                    }
                    if ( parseContext.regionVec[ parseContext.calleeid ] == NULL )
                    {
                        error( cubeparserloc, "Undefined region in cnode definition!" );
                    }
                    //extend the cnode vector if necessary
                    while ( ( int )parseContext.cnodeVec.size() <= parseContext.id )
                    {
                        parseContext.cnodeVec.push_back( NULL );
                    }
                    if ( parseContext.cnodeVec[ parseContext.id ] != NULL )
                    {
                        error( cubeparserloc, "Re-declared cnode!" );
                    }
                    //define the cnode

                    parseContext.cnodeParTypeSeen  = false;
                    parseContext.cnodeParKeySeen   = false;
                    parseContext.cnodeParValueSeen = false;

                    if ( clustering_on )
                    {
                        parseContext.clusterCurrentCnode = new cube::Cnode( parseContext.regionVec[ parseContext.calleeid ],
                                                                            cube::services::escapeFromXML( parseContext.mod ),
                                                                            parseContext.line,
                                                                            parseContext.clusterCurrentCnode,
                                                                            parseContext.id );
                        if ( parseContext.clusterCurrentCnode->get_parent() == NULL ) // store root call path for cluster in a vector.
                        {
                            parseContext.original_tree_roots.push_back( parseContext.clusterCurrentCnode );
                        }
                    }
                    else
                    {
                        parseContext.currentCnode = cube.def_cnode(
                            parseContext.regionVec[ parseContext.calleeid ],
                            cube::services::escapeFromXML( parseContext.mod ),
                            parseContext.line,
                            parseContext.currentCnode,
                            parseContext.id );

                        parseContext.cnodeVec[ parseContext.id ] =
                            parseContext.currentCnode;
                    }
                }
                break;

            case 171:
/* Line 670 of lalr1.cc  */
#line 1720 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    cube.get_operation_progress()->finish_step( "Finished parsing system tree" );
                    if ( parseContext.systemtreeTitle != "" )
                    {
                        cube.set_systemtree_title( cube::services::escapeFromXML( parseContext.systemtreeTitle ) );
                    }

                    // at this moment all dimensionis are loadeed -> we can initialize containers
                    cube.initialize();
                }
                break;

            case 176:
/* Line 670 of lalr1.cc  */
#line 1745 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    cube.get_operation_progress()->progress_step( "Start parsing system tree" );
                }
                break;

            case 177:
/* Line 670 of lalr1.cc  */
#line 1748 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    //check for attributes
                    parseContext.idSeen = false;
                    //check for tags
                    parseContext.nameSeen = false;
                    if ( !parseContext.classSeen )
                    {
                        error( cubeparserloc, "No class of system tree node declared." );
                    }
                    parseContext.classSeen = false;
                    if ( parseContext.descrSeen )
                    {
                        parseContext.descrSeen = false;
                    }
                    else
                    {
                        parseContext.descr = "";
                    }

                    cube::SystemTreeNode* _stn = cube.def_system_tree_node(
                        cube::services::escapeFromXML( parseContext.name ),
                        cube::services::escapeFromXML( parseContext.descr ),
                        cube::services::escapeFromXML( parseContext.stn_class ),
                        ( parseContext.currentSystemTreeNode.size() == 0 ) ? NULL : parseContext.currentSystemTreeNode.top() );
                    if ( parseContext.n_attributes.size() > 0 )
                    {
                        unsigned nattributes = parseContext.n_attributes.top();
                        parseContext.n_attributes.pop();

                        if ( nattributes > parseContext.attributes.size() )
                        {
                            error( cubeparserloc, "Number of saved attributes for metric " + parseContext.uniq_name + " is more, than number of actual saved parameters." );
                        }
                        for ( unsigned i = 0; i < nattributes; ++i )
                        {
                            std::pair< std::string, std::string> attr = parseContext.attributes.top();
                            parseContext.attributes.pop();
                            _stn->def_attr( attr.first, attr.second );
                        }
                    }


                    parseContext.currentSystemTreeNode.push( _stn );
                    while ( ( unsigned int )parseContext.stnVec.size() <= _stn->get_id() )
                    {
                        parseContext.stnVec.push_back( NULL );
                    }
                    if ( parseContext.stnVec[ _stn->get_id() ] != NULL )
                    {
                        error( cubeparserloc, "Re-declared system tree node!" );
                    }
                    parseContext.stnVec[ _stn->get_id() ] = _stn;


                    std::string _step = "Created system tree node " + cube::services::escapeFromXML( parseContext.name );

                    cube.get_operation_progress()->progress_step(  _step );
                }
                break;

            case 178:
/* Line 670 of lalr1.cc  */
#line 1799 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    parseContext.currentSystemTreeNode.pop();
                    //check for attributes
                    parseContext.idSeen = false;
                    //check for tags
                    parseContext.nameSeen = false;
                    if ( parseContext.descrSeen )
                    {
                        parseContext.descrSeen = false;
                    }
                    else
                    {
                        parseContext.descr = "";
                    }
                    cube.get_operation_progress()->finish_step( "Finished parsing system tree" );
                }
                break;

            case 185:
/* Line 670 of lalr1.cc  */
#line 1835 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    //check for attributes
                    parseContext.idSeen = false;
                    //check for tags
                    parseContext.nameSeen = false;
                    parseContext.rankSeen = false;
                    if ( !parseContext.typeSeen )
                    {
                        error( cubeparserloc, "No type of location group declared." );
                    }
                    parseContext.typeSeen = false;

                    if ( parseContext.descrSeen )
                    {
                        parseContext.descrSeen = false;
                    }
                    else
                    {
                        parseContext.descr = "";
                    }

                    parseContext.currentLocationGroup = cube.def_location_group(
                        cube::services::escapeFromXML( parseContext.name ),
                        parseContext.rank,
                        cube::LocationGroup::getLocationGroupType( cube::services::escapeFromXML( parseContext.type ) ),
                        parseContext.currentSystemTreeNode.top() );
                    if ( parseContext.n_attributes.size() > 0 )
                    {
                        unsigned nattributes = parseContext.n_attributes.top();
                        parseContext.n_attributes.pop();

                        if ( nattributes > parseContext.attributes.size() )
                        {
                            error( cubeparserloc, "Number of saved attributes for location group " + parseContext.name + " is more, than number of actual saved parameters." );
                        }
                        for ( unsigned i = 0; i < nattributes; ++i )
                        {
                            std::pair< std::string, std::string> attr = parseContext.attributes.top();
                            parseContext.attributes.pop();
                            parseContext.currentLocationGroup->def_attr( attr.first, attr.second );
                        }
                    }


                    while ( ( unsigned int )parseContext.locGroup.size() <= parseContext.currentLocationGroup->get_id() )
                    {
                        parseContext.locGroup.push_back( NULL );
                    }
                    if ( parseContext.locGroup[ parseContext.currentLocationGroup->get_id() ] != NULL )
                    {
                        error( cubeparserloc, "Re-declared location group!" );
                    }
                    parseContext.locGroup[ parseContext.currentLocationGroup->get_id() ] = parseContext.currentLocationGroup;

                    std::string _step =  "Created location group " + cube::services::escapeFromXML( parseContext.name );
                    cube.get_operation_progress()->progress_step( _step );
                }
                break;

            case 193:
/* Line 670 of lalr1.cc  */
#line 1902 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    //check for attributes
                    parseContext.idSeen = false;
                    //check for tags
                    parseContext.nameSeen = false;
                    parseContext.rankSeen = false;

                    if ( !parseContext.typeSeen )
                    {
                        error( cubeparserloc, "No type of location group declared." );
                    }
                    parseContext.typeSeen        = false;
                    parseContext.currentLocation = cube.def_location(
                        cube::services::escapeFromXML( parseContext.name ),
                        parseContext.rank,
                        cube::Location::getLocationType( cube::services::escapeFromXML( parseContext.type ) ),
                        parseContext.currentLocationGroup,
                        parseContext.id );
                    if ( parseContext.n_attributes.size() > 0 )
                    {
                        unsigned nattributes = parseContext.n_attributes.top();
                        parseContext.n_attributes.pop();

                        if ( nattributes > parseContext.attributes.size() )
                        {
                            error( cubeparserloc, "Number of saved attributes for location " + parseContext.name + " is more, than number of actual saved parameters." );
                        }
                        for ( unsigned i = 0; i < nattributes; ++i )
                        {
                            std::pair< std::string, std::string> attr = parseContext.attributes.top();
                            parseContext.attributes.pop();
                            parseContext.currentLocation->def_attr( attr.first, attr.second );
                        }
                    }

                    while ( ( unsigned int )parseContext.locVec.size() <= parseContext.currentLocation->get_id() )
                    {
                        parseContext.locVec.push_back( NULL );
                    }
                    if ( parseContext.locVec[ parseContext.currentLocation->get_id() ] != NULL )
                    {
                        error( cubeparserloc, "Re-declared location!" );
                    }
                    parseContext.locVec[ parseContext.currentLocation->get_id() ] = parseContext.currentLocation;
                    if ( parseContext.currentLocation->get_id() % 1024 == 0 )
                    {
                        std::string _step =  "Created location " + cube::services::escapeFromXML( parseContext.name );
                        cube.get_operation_progress()->progress_step( _step );
                    }
                }
                break;

            case 196:
/* Line 670 of lalr1.cc  */
#line 1957 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    //check for attributes
                    parseContext.idSeen = false;
                    //check for tags
                    parseContext.nameSeen = false;
                    if ( parseContext.descrSeen )
                    {
                        parseContext.descrSeen = false;
                    }
                    else
                    {
                        parseContext.descr = "";
                    }

                    parseContext.currentMachine = cube.def_mach(
                        cube::services::escapeFromXML( parseContext.name ),
                        cube::services::escapeFromXML( parseContext.descr ) );
                    while ( ( unsigned int )parseContext.machVec.size() <= parseContext.currentMachine->get_id() )
                    {
                        parseContext.machVec.push_back( NULL );
                    }
                    if ( parseContext.machVec[ parseContext.currentMachine->get_id() ] != NULL )
                    {
                        error( cubeparserloc, "Re-declared machine!" );
                    }
                    parseContext.machVec[ parseContext.currentMachine->get_id() ] = parseContext.currentMachine;
                }
                break;

            case 200:
/* Line 670 of lalr1.cc  */
#line 1982 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    //check for attributes
                    parseContext.idSeen = false;
                    //check for tags
                    parseContext.nameSeen = false;
                    if ( parseContext.descrSeen )
                    {
                        parseContext.descrSeen = false;
                    }
                    else
                    {
                        parseContext.descr = "";
                    }

                    parseContext.currentNode = cube.def_node(
                        cube::services::escapeFromXML( parseContext.name ),
                        parseContext.currentMachine );
                    while ( ( unsigned int )parseContext.nodeVec.size() <= parseContext.currentNode->get_id() )
                    {
                        parseContext.nodeVec.push_back( NULL );
                    }
                    if ( parseContext.nodeVec[ parseContext.currentNode->get_id() ] != NULL )
                    {
                        error( cubeparserloc, "Re-declared node!" );
                    }
                    parseContext.nodeVec[ parseContext.currentNode->get_id() ] = parseContext.currentNode;
                }
                break;

            case 204:
/* Line 670 of lalr1.cc  */
#line 2007 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    //check for attributes
                    parseContext.idSeen = false;
                    //check for tags
                    if ( parseContext.nameSeen )
                    {
                        parseContext.nameSeen = false;
                    }
                    else
                    {
                        parseContext.name = "";
                    }
                    if ( parseContext.rankSeen )
                    {
                        parseContext.rankSeen = false;
                    }
                    else
                    {
                        parseContext.rank = 0;
                    }

                    std::ostringstream name;
                    if ( parseContext.name.empty() )
                    {
                        name << "Process " << parseContext.rank;
                    }
                    else
                    {
                        name << parseContext.name;
                    }
                    parseContext.currentProc = cube.def_proc(
                        cube::services::escapeFromXML( name.str() ),
                        parseContext.rank,
                        parseContext.currentNode );
                    while ( ( unsigned int )parseContext.procVec.size() <= parseContext.currentProc->get_id() )
                    {
                        parseContext.procVec.push_back( NULL );
                    }
                    if ( parseContext.procVec[ parseContext.currentProc->get_id() ] != NULL )
                    {
                        error( cubeparserloc, "Re-declared process!" );
                    }
                    parseContext.procVec[ parseContext.currentProc->get_id() ] = parseContext.currentProc;
                }
                break;

            case 212:
/* Line 670 of lalr1.cc  */
#line 2049 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    //check for attributes
                    parseContext.idSeen = false;
                    //check for tags
                    if ( parseContext.nameSeen )
                    {
                        parseContext.nameSeen = false;
                    }
                    else
                    {
                        parseContext.name = "";
                    }
                    if ( parseContext.rankSeen )
                    {
                        parseContext.rankSeen = false;
                    }
                    else
                    {
                        parseContext.rank = 0;
                    }

                    std::ostringstream name;
                    if ( parseContext.name.empty() )
                    {
                        name << "Thread " << parseContext.rank;
                    }
                    else
                    {
                        name << parseContext.name;
                    }


                    parseContext.currentThread = cube.def_thrd(
                        cube::services::escapeFromXML( name.str() ),
                        parseContext.rank,
                        parseContext.currentProc,
                        parseContext.id );
                    while ( ( unsigned int )parseContext.threadVec.size() <= parseContext.currentThread->get_id() )
                    {
                        parseContext.threadVec.push_back( NULL );
                    }
                    if ( parseContext.threadVec[ parseContext.currentThread->get_id() ] != NULL )
                    {
                        error( cubeparserloc, "Re-declared thread!" );
                    }
                    parseContext.threadVec[ parseContext.currentThread->get_id() ] = parseContext.currentThread;
                }
                break;

            case 215:
/* Line 670 of lalr1.cc  */
#line 2084 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( !parseContext.checkThreadIds() )
                    {
                        error( cubeparserloc, "Thread ids must cover an interval [0,n] without gap!" );
                    }
                }
                break;

            case 223:
/* Line 670 of lalr1.cc  */
#line 2105 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    //check for attributes
                    parseContext.ndimsSeen = false;

                    if ( parseContext.ndims != ( int )parseContext.dimVec.size() )
                    {
                        error( cubeparserloc, "Too few or too many topology dimensions are declared!" );
                    }
                    parseContext.currentCart = cube.def_cart(
                        parseContext.ndims,
                        parseContext.dimVec,
                        parseContext.periodicVec );

                    if ( parseContext.cartNameSeen )
                    {
                        ( parseContext.currentCart )->set_name( cube::services::escapeFromXML( parseContext.cartName ) );
                        parseContext.cartNameSeen = false;
                    }
                    if ( parseContext.dimNamesCount > 0 )
                    {
                        parseContext.dimNamesCount = 0;
                        ( parseContext.currentCart )->set_namedims( parseContext.dimNameVec );
                    }
                    parseContext.dimNameVec.clear();
                }
                break;

            case 225:
/* Line 670 of lalr1.cc  */
#line 2132 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                { parseContext.dimVec.clear();
                  parseContext.periodicVec.clear();
                  parseContext.cartNameSeen = false;
                }
                break;

            case 228:
/* Line 670 of lalr1.cc  */
#line 2144 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    //check for attributes
                    if ( !parseContext.sizeSeen )
                    {
                        error( cubeparserloc, "Missing size attribute!" );
                    }
                    else
                    {
                        parseContext.sizeSeen = false;
                    }
                    if ( !parseContext.periodicSeen )
                    {
                        error( cubeparserloc, "Missing periodic attribute!" );
                    }
                    else
                    {
                        parseContext.periodicSeen = false;
                    }
                    if ( parseContext.dimNameSeen )
                    {
                        parseContext.dimNameVec.push_back( parseContext.dimName );
                    }
                    else
                    {
                        parseContext.dimNameVec.push_back( "" );
                    }
                    parseContext.dimNameSeen = false;
                }
                break;

            case 243:
/* Line 670 of lalr1.cc  */
#line 2193 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    //check for attributes
                    parseContext.thrdidSeen = false;

                    if ( parseContext.dimVec.size() != parseContext.longValues.size() )
                    {
                        error( cubeparserloc, "Too few or too many dimension coordinates in coord tag!" );
                    }
                    for ( unsigned i = 0; i < parseContext.dimVec.size(); ++i )
                    {
                        if ( parseContext.longValues[ i ] >= parseContext.dimVec[ i ] )
                        {
                            error( cubeparserloc, "Topology coordinate is out of range!" );
                        }
                    }
                    if ( parseContext.locid >= ( int )parseContext.locVec.size() )
                    {
                        error( cubeparserloc, "Location of the topology coordinates wasn't declared!" );
                    }
                    if ( parseContext.locVec[ parseContext.locid ] == NULL )
                    {
                        error( cubeparserloc, "Location of the topology coordinates wasn't declared!" );
                    }
                    cube.def_coords( parseContext.currentCart,
                                     ( cube::Sysres* )( parseContext.locVec[ parseContext.locid ] ),
                                     parseContext.longValues );
                }
                break;

            case 244:
/* Line 670 of lalr1.cc  */
#line 2214 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    //check for attributes
                    parseContext.procidSeen = false;

                    if ( parseContext.dimVec.size() != parseContext.longValues.size() )
                    {
                        error( cubeparserloc, "Too few or too many dimension coordinates in coord tag!" );
                    }
                    for ( unsigned i = 0; i < parseContext.dimVec.size(); ++i )
                    {
                        if ( parseContext.longValues[ i ] >= parseContext.dimVec[ i ] )
                        {
                            error( cubeparserloc, "Topology coordinate is out of range!" );
                        }
                    }
                    if ( parseContext.lgid >= ( int )parseContext.locGroup.size() )
                    {
                        error( cubeparserloc, "Location group of the topology coordinates wasn't declared!" );
                    }
                    if ( parseContext.locGroup[ parseContext.lgid ] == NULL )
                    {
                        error( cubeparserloc, "Location group of the topology coordinates wasn't declared!" );
                    }
                    cube.def_coords( parseContext.currentCart,
                                     ( cube::Sysres* )( parseContext.locGroup[ parseContext.lgid ] ),
                                     parseContext.longValues );
                }
                break;

            case 245:
/* Line 670 of lalr1.cc  */
#line 2235 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    //check for attributes
                    parseContext.nodeidSeen = false;

                    if ( parseContext.dimVec.size() != parseContext.longValues.size() )
                    {
                        error( cubeparserloc, "Too few or too many dimension coordinates in coord tag!" );
                    }
                    for ( unsigned i = 0; i < parseContext.dimVec.size(); ++i )
                    {
                        if ( parseContext.longValues[ i ] >= parseContext.dimVec[ i ] )
                        {
                            error( cubeparserloc, "Topology coordinate is out of range!" );
                        }
                    }
                    if ( parseContext.stnid >= ( int )parseContext.stnVec.size() )
                    {
                        error( cubeparserloc, "System tree node of the topology coordinates wasn't declared!" );
                    }
                    if ( parseContext.nodeVec[ parseContext.stnid ] == NULL )
                    {
                        error( cubeparserloc, "System tree node of the topology coordinates wasn't declared!" );
                    }
                    cube.def_coords( parseContext.currentCart,
                                     ( cube::Sysres* )( parseContext.nodeVec[ parseContext.stnid ] ),
                                     parseContext.longValues );
                }
                break;

            case 246:
/* Line 670 of lalr1.cc  */
#line 2257 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    //check for attributes
                    parseContext.thrdidSeen = false;

                    if ( parseContext.dimVec.size() != parseContext.longValues.size() )
                    {
                        error( cubeparserloc, "Too few or too many dimension coordinates in coord tag!" );
                    }
                    for ( unsigned i = 0; i < parseContext.dimVec.size(); ++i )
                    {
                        if ( parseContext.longValues[ i ] >= parseContext.dimVec[ i ] )
                        {
                            error( cubeparserloc, "Topology coordinate is out of range!" );
                        }
                    }
                    if ( parseContext.thrdid >= ( int )parseContext.threadVec.size() )
                    {
                        error( cubeparserloc, "Thread of the topology coordinates wasn't declared!" );
                    }
                    if ( parseContext.threadVec[ parseContext.thrdid ] == NULL )
                    {
                        error( cubeparserloc, "Thread of the topology coordinates wasn't declared!" );
                    }
                    cube.def_coords( parseContext.currentCart,
                                     ( cube::Sysres* )( parseContext.threadVec[ parseContext.thrdid ] ),
                                     parseContext.longValues );
                }
                break;

            case 247:
/* Line 670 of lalr1.cc  */
#line 2278 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    //check for attributes
                    parseContext.procidSeen = false;

                    if ( parseContext.dimVec.size() != parseContext.longValues.size() )
                    {
                        error( cubeparserloc, "Too few or too many dimension coordinates in coord tag!" );
                    }
                    for ( unsigned i = 0; i < parseContext.dimVec.size(); ++i )
                    {
                        if ( parseContext.longValues[ i ] >= parseContext.dimVec[ i ] )
                        {
                            error( cubeparserloc, "Topology coordinate is out of range!" );
                        }
                    }
                    if ( parseContext.procid >= ( int )parseContext.locGroup.size() )
                    {
                        error( cubeparserloc, "Process of the topology coordinates wasn't declared!" );
                    }
                    if ( parseContext.locGroup[ parseContext.procid ] == NULL )
                    {
                        error( cubeparserloc, "Process of the topology coordinates wasn't declared!" );
                    }
                    cube.def_coords( parseContext.currentCart,
                                     ( cube::Sysres* )( parseContext.locGroup[ parseContext.procid ] ),
                                     parseContext.longValues );
                }
                break;

            case 248:
/* Line 670 of lalr1.cc  */
#line 2299 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    //check for attributes
                    parseContext.nodeidSeen = false;

                    if ( parseContext.dimVec.size() != parseContext.longValues.size() )
                    {
                        error( cubeparserloc, "Too few or too many dimension coordinates in coord tag!" );
                    }
                    for ( unsigned i = 0; i < parseContext.dimVec.size(); ++i )
                    {
                        if ( parseContext.longValues[ i ] >= parseContext.dimVec[ i ] )
                        {
                            error( cubeparserloc, "Topology coordinate is out of range!" );
                        }
                    }

                    if ( parseContext.nodeid >= ( int )cube.get_non_root_stnv().size() )
                    {
                        error( cubeparserloc, "Node of the topology coordinates wasn't declared!" );
                    }
                    if ( cube.get_non_root_stnv().at( parseContext.nodeid ) == NULL )
                    {
                        error( cubeparserloc, "Node of the topology coordinates wasn't declared!" );
                    }
                    cube.def_coords( parseContext.currentCart,
                                     ( cube::Sysres* )( cube.get_non_root_stnv().at( parseContext.nodeid ) ),
                                     parseContext.longValues );
                }
                break;

            case 249:
/* Line 670 of lalr1.cc  */
#line 2321 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    //check for attributes
                    parseContext.machidSeen = false;

                    if ( parseContext.dimVec.size() != parseContext.longValues.size() )
                    {
                        error( cubeparserloc, "Too few or too many dimension coordinates in coord tag!" );
                    }
                    for ( unsigned i = 0; i < parseContext.dimVec.size(); ++i )
                    {
                        if ( parseContext.longValues[ i ] >= parseContext.dimVec[ i ] )
                        {
                            error( cubeparserloc, "Topology coordinate is out of range!" );
                        }
                    }
                    if ( parseContext.machid >= ( int )cube.get_root_stnv().size() )
                    {
                        error( cubeparserloc, "Machine of the topology coordinates wasn't declared!" );
                    }
                    if ( cube.get_root_stnv().at( parseContext.nodeid ) == NULL )
                    {
                        error( cubeparserloc, "Machine of the topology coordinates wasn't declared!" );
                    }
                    cube.def_coords( parseContext.currentCart,
                                     ( cube::Sysres* )( cube.get_root_stnv().at( parseContext.machid ) ),
                                     parseContext.longValues );
                }
                break;

            case 252:
/* Line 670 of lalr1.cc  */
#line 2348 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
// if (parseContext.dynamicMetricLoading) return 0;
                    std::string _step = "Start reading data";
                    cube.get_operation_progress()->progress_step( _step );
                }
                break;

            case 253:
/* Line 670 of lalr1.cc  */
#line 2353 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    cube.get_operation_progress()->finish_step( "Finished reading data" );
                }
                break;

            case 256:
/* Line 670 of lalr1.cc  */
#line 2365 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    //check for attributes
                    parseContext.metricidSeen = false;

                    if ( ( int )parseContext.metricVec.size() <= parseContext.metricid )
                    {
                        error( cubeparserloc, "Metric of the severity matrix wasn't declared!" );
                    }
                    if ( parseContext.metricVec[ parseContext.metricid ] == NULL )
                    {
                        error( cubeparserloc, "Metric of the severity matrix wasn't declared!" );
                    }
                    parseContext.currentMetric =
                        parseContext.metricVec[ parseContext.metricid ];

                    parseContext.ignoreMetric = false;
                    cube::Metric* metric = parseContext.currentMetric;
                    while ( metric != NULL )
                    {
                        if ( metric->get_val() == "VOID" )
                        {
                            parseContext.ignoreMetric = true;
                            break;
                        }
                        metric = metric->get_parent();
                    }
                }
                break;

            case 262:
/* Line 670 of lalr1.cc  */
#line 2398 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    //check for attributes
                    parseContext.cnodeidSeen = false;

                    if ( !parseContext.ignoreMetric )
                    {
                        if ( ( int )parseContext.cnodeVec.size() <= parseContext.cnodeid )
                        {
                            error( cubeparserloc, "Cnode of the severity row wasn't declared!" );
                        }
                        if ( parseContext.cnodeVec[ parseContext.cnodeid ] == NULL )
                        {
                            error( cubeparserloc, "Cnode of the severity row wasn't declared!" );
                        }
                        parseContext.currentCnode =
                            parseContext.cnodeVec[ parseContext.cnodeid ];
                    }
                }
                break;

            case 263:
/* Line 670 of lalr1.cc  */
#line 2410 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
                {
                    if ( !parseContext.ignoreMetric )
                    {
                        std::vector<double>&        v = parseContext.realValues;
                        std::vector<cube::Thread*>& t = parseContext.threadVec;
                        if ( v.size() > t.size() )
                        {
                            error( cubeparserloc, "Too many values in severity row!" );
                        }
                        std::vector<cube::Thread*> t_sorted = t;
                        sort( t_sorted.begin(), t_sorted.end(), &cube::IdentObject::id_compare );


                        cube::Metric* metric = parseContext.currentMetric;
                        cube::Cnode*  cnode  = parseContext.currentCnode;
                        for ( unsigned i = 0; i < v.size(); ++i )
                        {
                            cube.set_sev( metric,
                                          cnode,
                                          t_sorted[ i ],
                                          v[ i ] );
                        }
                    }
                }
                break;


/* Line 670 of lalr1.cc  */
#line 2561 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.cpp"
            default:
                break;
        }

        /* User semantic actions sometimes alter yychar, and that requires
           that yytoken be updated with the new translation.  We take the
           approach of translating immediately before every use of yytoken.
           One alternative is translating here after every semantic action,
           but that translation would be missed if the semantic action
           invokes YYABORT, YYACCEPT, or YYERROR immediately after altering
           yychar.  In the case of YYABORT or YYACCEPT, an incorrect
           destructor might then be invoked immediately.  In the case of
           YYERROR, subsequent parser actions might lead to an incorrect
           destructor call or verbose syntax error message before the
           lookahead is translated.  */
        YY_SYMBOL_PRINT( "-> $$ =", yyr1_[ yyn ], &yyval, &yyloc );

        yypop_( yylen );
        yylen = 0;
        YY_STACK_PRINT();

        yysemantic_stack_.push( yyval );
        yylocation_stack_.push( yyloc );

        /* Shift the result of the reduction.  */
        yyn     = yyr1_[ yyn ];
        yystate = yypgoto_[ yyn - yyntokens_ ] + yystate_stack_[ 0 ];
        if ( 0 <= yystate && yystate <= yylast_
             && yycheck_[ yystate ] == yystate_stack_[ 0 ] )
        {
            yystate = yytable_[ yystate ];
        }
        else
        {
            yystate = yydefgoto_[ yyn - yyntokens_ ];
        }
        goto yynewstate;

        /*------------------------------------.
        | yyerrlab -- here on detecting error |
           `------------------------------------*/
yyerrlab:
        /* Make sure we have latest lookahead translation.  See comments at
           user semantic actions for why this is necessary.  */
        yytoken = yytranslate_( yychar );

        /* If not already recovering from an error, report this error.  */
        if ( !yyerrstatus_ )
        {
            ++yynerrs_;
            if ( yychar == yyempty_ )
            {
                yytoken = yyempty_;
            }
            error( yylloc, yysyntax_error_( yystate, yytoken ) );
        }

        yyerror_range[ 1 ] = yylloc;
        if ( yyerrstatus_ == 3 )
        {
            /* If just tried and failed to reuse lookahead token after an
               error, discard it.  */
            if ( yychar <= yyeof_ )
            {
                /* Return failure if at end of input.  */
                if ( yychar == yyeof_ )
                {
                    YYABORT;
                }
            }
            else
            {
                yydestruct_( "Error: discarding", yytoken, &yylval, &yylloc );
                yychar = yyempty_;
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
        if ( false )
        {
            goto yyerrorlab;
        }

        yyerror_range[ 1 ] = yylocation_stack_[ yylen - 1 ];
        /* Do not reclaim the symbols of the rule which action triggered
           this YYERROR.  */
        yypop_( yylen );
        yylen   = 0;
        yystate = yystate_stack_[ 0 ];
        goto yyerrlab1;

        /*-------------------------------------------------------------.
        | yyerrlab1 -- common code for both syntax error and YYERROR.  |
           `-------------------------------------------------------------*/
yyerrlab1:
        yyerrstatus_ = 3; /* Each real token shifted decrements this.  */

        for (;; )
        {
            yyn = yypact_[ yystate ];
            if ( !yy_pact_value_is_default_( yyn ) )
            {
                yyn += yyterror_;
                if ( 0 <= yyn && yyn <= yylast_ && yycheck_[ yyn ] == yyterror_ )
                {
                    yyn = yytable_[ yyn ];
                    if ( 0 < yyn )
                    {
                        break;
                    }
                }
            }

            /* Pop the current state because it cannot handle the error token.  */
            if ( yystate_stack_.height() == 1 )
            {
                YYABORT;
            }

            yyerror_range[ 1 ] = yylocation_stack_[ 0 ];
            yydestruct_( "Error: popping",
                         yystos_[ yystate ],
                         &yysemantic_stack_[ 0 ], &yylocation_stack_[ 0 ] );
            yypop_();
            yystate = yystate_stack_[ 0 ];
            YY_STACK_PRINT();
        }

        yyerror_range[ 2 ] = yylloc;
        // Using YYLLOC is tempting, but would change the location of
        // the lookahead.  YYLOC is available though.
        YYLLOC_DEFAULT( yyloc, yyerror_range, 2 );
        yysemantic_stack_.push( yylval );
        yylocation_stack_.push( yyloc );

        /* Shift the error token.  */
        YY_SYMBOL_PRINT( "Shifting", yystos_[ yyn ],
                         &yysemantic_stack_[ 0 ], &yylocation_stack_[ 0 ] );

        yystate = yyn;
        goto yynewstate;

        /* Accept.  */
yyacceptlab:
        yyresult = 0;
        goto yyreturn;

        /* Abort.  */
yyabortlab:
        yyresult = 1;
        goto yyreturn;

yyreturn:
        if ( yychar != yyempty_ )
        {
            /* Make sure we have latest lookahead translation.  See comments
               at user semantic actions for why this is necessary.  */
            yytoken = yytranslate_( yychar );
            yydestruct_( "Cleanup: discarding lookahead", yytoken, &yylval,
                         &yylloc );
        }

        /* Do not reclaim the symbols of the rule which action triggered
           this YYABORT or YYACCEPT.  */
        yypop_( yylen );
        while ( 1 < yystate_stack_.height() )
        {
            yydestruct_( "Cleanup: popping",
                         yystos_[ yystate_stack_[ 0 ] ],
                         &yysemantic_stack_[ 0 ],
                         &yylocation_stack_[ 0 ] );
            yypop_();
        }

        return yyresult;
    }
    catch ( ... )
    {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack"
                 << std::endl;
        // Do not try to display the values of the reclaimed symbols,
        // as their printer might throw an exception.
        if ( yychar != yyempty_ )
        {
            /* Make sure we have latest lookahead translation.  See
               comments at user semantic actions for why this is
               necessary.  */
            yytoken = yytranslate_( yychar );
            yydestruct_( YY_NULL, yytoken, &yylval, &yylloc );
        }

        while ( 1 < yystate_stack_.height() )
        {
            yydestruct_( YY_NULL,
                         yystos_[ yystate_stack_[ 0 ] ],
                         &yysemantic_stack_[ 0 ],
                         &yylocation_stack_[ 0 ] );
            yypop_();
        }
        throw;
    }
}

// Generate an error message.
std::string
Cube4Parser::yysyntax_error_( int yystate, int yytoken )
{
    std::string yyres;
    // Number of reported tokens (one for the "unexpected", one per
    // "expected").
    size_t yycount = 0;
    // Its maximum.
    enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
    // Arguments of yyformat.
    char const* yyarg[ YYERROR_VERBOSE_ARGS_MAXIMUM ];

    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yytoken) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yychar.
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state
         merging (from LALR or IELR) and default reductions corrupt the
         expected token list.  However, the list is correct for
         canonical LR with one exception: it will still contain any
         token that will not be accepted due to an error action in a
         later state.
     */
    if ( yytoken != yyempty_ )
    {
        yyarg[ yycount++ ] = yytname_[ yytoken ];
        int yyn = yypact_[ yystate ];
        if ( !yy_pact_value_is_default_( yyn ) )
        {
            /* Start YYX at -YYN if negative to avoid negative indexes in
               YYCHECK.  In other words, skip the first -YYN actions for
               this state because they are default actions.  */
            int yyxbegin = yyn < 0 ? -yyn : 0;
            /* Stay within bounds of both yycheck and yytname.  */
            int yychecklim = yylast_ - yyn + 1;
            int yyxend     = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
            for ( int yyx = yyxbegin; yyx < yyxend; ++yyx )
            {
                if ( yycheck_[ yyx + yyn ] == yyx && yyx != yyterror_
                     && !yy_table_value_is_error_( yytable_[ yyx + yyn ] ) )
                {
                    if ( yycount == YYERROR_VERBOSE_ARGS_MAXIMUM )
                    {
                        yycount = 1;
                        break;
                    }
                    else
                    {
                        yyarg[ yycount++ ] = yytname_[ yyx ];
                    }
                }
            }
        }
    }

    char const* yyformat = YY_NULL;
    switch ( yycount )
    {
#define YYCASE_( N, S )                         \
    case N:                               \
        yyformat = S;                       \
        break
        YYCASE_( 0, YY_( "syntax error" ) );
        YYCASE_( 1, YY_( "syntax error, unexpected %s" ) );
        YYCASE_( 2, YY_( "syntax error, unexpected %s, expecting %s" ) );
        YYCASE_( 3, YY_( "syntax error, unexpected %s, expecting %s or %s" ) );
        YYCASE_( 4, YY_( "syntax error, unexpected %s, expecting %s or %s or %s" ) );
        YYCASE_( 5, YY_( "syntax error, unexpected %s, expecting %s or %s or %s or %s" ) );
#undef YYCASE_
    }

    // Argument number.
    size_t yyi = 0;
    for ( char const* yyp = yyformat; *yyp; ++yyp )
    {
        if ( yyp[ 0 ] == '%' && yyp[ 1 ] == 's' && yyi < yycount )
        {
            yyres += yytnamerr_( yyarg[ yyi++ ] );
            ++yyp;
        }
        else
        {
            yyres += *yyp;
        }
    }
    return yyres;
}


/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
const short int Cube4Parser::yypact_ninf_ = -398;
const short int
Cube4Parser::yypact_[] =
{
    9,    -79,   35,    121,   46,    85,    -398,  -398,  -9,    -398,
    -398, -398,  -398,  -398,  -398,  -398,  -398,  -398,  68,    -398,
    1,    -398,  -398,  -398,  -398,  -398,  -35,   39,    -398,  73,
    1,    -398,  40,    36,    120,   124,   -398,  -398,  -6,    -398,
    66,   71,    -398,  23,    -398,  -398,  40,    36,    36,    -398,
    72,   -398,  -398,  -398,  -398,  86,    -398,  99,    66,    -398,
    163,  160,   36,    72,    72,    59,    60,    70,    -398,  -398,
    -398, -398,  148,   72,    70,    70,    170,   166,   172,   169,
    -398, -398,  -398,  67,    2,     -398,  70,    -398,  -398,  -398,
    -398, -398,  24,    -398,  175,   -398,  -39,   -398,  -398,  -398,
    -398, -398,  149,   -398,  67,    80,    145,   -398,  140,   -398,
    -43,  -398,  181,   182,   78,    -398,  -398,  -398,  178,   -39,
    -63,  149,   -398,  67,    179,   -398,  92,    -398,  -398,  -398,
    61,   -398,  -398,  -398,  -398,  -398,  -398,  55,    -398,  186,
    188,  189,   -398,  -398,  -398,  -398,  4,     -398,  159,   -398,
    187,  107,   141,   -398,  194,   190,   94,    69,    171,   74,
    133,  132,   134,   130,   129,   135,   127,   -398,  -398,  -398,
    -398, -398,  -398,  -398,  -398,  -398,  -398,  -398,  55,    -398,
    -398, -398,  -398,  -398,  -5,    -398,  -10,   -23,   -398,  107,
    123,  136,   -398,  108,   141,   -398,  -64,   -398,  -398,  100,
    213,  208,   -398,  147,   209,   -398,  -398,  -398,  -398,  -398,
    -398, -398,  -398,  -398,  -398,  -398,  137,   138,   128,   -398,
    -398, -398,  -398,  -398,  -398,  -398,  191,   -5,    -398,  217,
    218,  -398,  -398,  -398,  -398,  -398,  -2,    117,   -398,  193,
    -398, 139,   -398,  -398,  -398,  -398,  -398,  222,   223,   112,
    -398, 219,   180,   225,   -398,  205,   -398,  -398,  -398,  204,
    -398, -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,  233,
    131,  -398,  7,     150,   136,   195,   -398,  -398,  -398,  228,
    111,  196,   180,   -398,  -398,  -398,  -398,  -398,  238,   142,
    -398, -398,  -398,  -398,  -398,  67,    65,    -398,  -86,   5,
    -398, 242,   239,   -398,  -398,  -398,  243,   240,   241,   244,
    -398, -398,  250,   251,   154,   -398,  -398,  -398,  -7,    -398,
    -398, -398,  -398,  -398,  -398,  -398,  -398,  -398,  107,   -398,
    -398, -398,  -398,  -398,  -398,  21,    201,   32,    136,   253,
    254,  256,   257,   258,   259,   260,   261,   262,   263,   264,
    265,  266,   267,   101,   -398,  -398,  -398,  -398,  -398,  -398,
    -398, -398,  -398,  67,    145,   226,   -398,  -398,  -398,  -398,
    -398, -398,  -398,  -398,  -398,  207,   210,   221,   224,   227,
    229,  230,   -398,  21,    269,   -398,  220,   -398,  -398,  -398,
    -398, -398,  -398,  -398,  -398,  107,   67,    113,   -398,  183,
    -398, -398,  273,   -398,  -398,  168,   197,   245,   -41,   -398,
    198,  241,   67,    122,   -398,  -398,  -398,  -41,   -398,  -398,
    241,  -398,  275,   -398,  -398,  235,   -398,  -398,  107,   67,
    116,  -398,  247,   283,   -398,  -398,  -398,  -41,   -40,   -398
};

/* YYDEFACT[S] -- default reduction number in state S.  Performed when
   YYTABLE doesn't specify something else to do.  Zero means the
   default is an error.  */
const unsigned short int
Cube4Parser::yydefact_[] =
{
    0,   0,     0,     0,     0,     0,     73,    74,    0,     71,
    1,   76,    77,    78,    79,    80,    81,    82,    0,     69,
    0,   2,     3,     70,    72,    83,    0,     96,    103,   0,
    0,   88,    0,     0,     0,     0,     93,    94,    0,     91,
    99,  0,     97,    16,    75,    89,    0,     0,     0,     133,
    0,   4,     5,     90,    92,    0,     101,   0,     100,   95,
    0,   0,     0,     0,     0,     18,    20,    250,   48,    98,
    102, 17,    0,     0,     250,   250,   0,     0,     0,     0,
    252, 87,    251,   109,   0,     105,   250,   85,    86,    19,
    134, 21,    0,     254,   0,     110,   111,   132,   104,   106,
    107, 84,    0,     176,   0,     213,   173,   174,   172,   194,
    0,   30,    0,     0,     0,     113,   114,   115,   0,     111,
    0,   135,   137,   0,     0,     215,   0,     214,   175,   195,
    0,   253,   255,   7,     8,     10,    9,     116,   112,   0,
    0,   0,     154,   153,   155,   156,   0,     151,   0,     138,
    0,   0,     217,   171,   0,     0,     0,     22,    0,     0,
    0,   0,     0,     0,     0,     0,     0,     120,   121,   122,
    123, 124,   125,   127,   128,   129,   126,   108,   117,   118,
    130, 6,     41,    42,    140,   152,   0,     161,   157,   0,
    0,   55,    225,   0,     218,   219,   0,     39,    256,   0,
    0,   0,     58,    0,     0,     24,    25,    26,    49,    50,
    51,  52,    53,    54,    60,    119,   0,     0,     0,     148,
    149, 144,   145,   146,   147,   150,   0,     141,   142,   0,
    0,   167,   165,   168,   166,   169,   0,     0,     136,   161,
    163, 0,     61,    196,   56,    216,   220,   0,     0,     0,
    221, 0,     258,   0,     23,    0,     27,    28,    29,    0,
    63,  64,    62,    139,   143,   43,    31,    160,   170,   0,
    0,   162,   0,     0,     55,    0,     14,    44,    222,   0,
    0,   0,     259,   260,   131,   57,    59,    11,    0,     0,
    159, 164,   158,   65,    179,   0,     0,     198,   0,     0,
    226, 0,     0,     257,   261,   12,    0,     0,     177,   0,
    197, 199,   0,     0,     0,     231,   232,   233,   0,     229,
    223, 227,   40,    262,   13,    68,    180,   183,   0,     15,
    45,  46,    47,    228,   230,   0,     0,     181,   55,    0,
    0,   0,     0,     0,     0,     0,     0,     0,     0,     0,
    0,   0,     0,     0,     234,   240,   241,   242,   236,   237,
    238, 239,   263,   0,     182,   0,     184,   200,   32,    33,
    34,  35,    36,    37,    38,    0,     0,     0,     0,     0,
    0,   0,     224,   0,     0,     178,   0,     243,   244,   245,
    246, 247,   248,   249,   235,   0,     0,     0,     202,   0,
    185, 187,   0,     201,   203,   0,     0,     0,     0,     67,
    0,   189,   0,     0,     191,   208,   209,   204,   206,   66,
    189, 188,   0,     186,   192,   0,     207,   190,   0,     0,
    0,   210,   0,     0,     205,   211,   193,   0,     0,     212
};

/* YYPGOTO[NTERM-NUM].  */
const short int
Cube4Parser::yypgoto_[] =
{
    -398, -398,  -398,  143,   96,    -170,  -398,  -398,  -398,  -398,
    -398, -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,  -398,
    -398, -398,  -83,   -398,  -398,  -398,  -398,  -398,  -398,  -398,
    -398, -398,  -398,  -398,  -398,  -398,  47,    -398,  -398,  246,
    -398, -398,  -398,  -398,  -398,  -167,  -263,  -398,  -398,  -398,
    -128, -150,  -398,  -398,  -398,  -398,  -398,  -102,  -398,  -398,
    -398, -398,  290,   -398,  -398,  -398,  -398,  270,   -398,  268,
    271,  -398,  -398,  -398,  -398,  -8,    -398,  -398,  231,   -398,
    184,  -398,  -398,  -398,  144,   -181,  -398,  -17,   -398,  -398,
    -398, -398,  199,   -398,  -398,  75,    -398,  161,   -398,  33,
    77,   -398,  76,    -398,  -31,   -398,  -29,   -104,  -398,  -398,
    -398, -398,  -398,  -398,  -398,  -119,  -398,  -110,  -398,  -99,
    -398, 203,   -398,  -398,  22,    -398,  -398,  -80,   -398,  -118,
    -397, -398,  -109,  -398,  -398,  -398,  -398,  -398,  -398,  146,
    -398, -398,  -398,  25,    -398,  8,     -398,  -60,   -398,  -398,
    -398, -398,  -398,  -398,  -398,  14,    -398,  -398,  -398,  -398,
    -398, -398,  -398,  43,    -398
};

/* YYDEFGOTO[NTERM-NUM].  */
const short int
Cube4Parser::yydefgoto_[] =
{
    -1,  6,     7,     36,    37,    142,   115,   116,   117,   270,
    289, 307,   249,   315,   61,    77,    79,    201,   204,   205,
    206, 207,   143,   233,   346,   347,   348,   349,   350,   351,
    352, 155,   302,   144,   145,   234,   250,   316,   317,   56,
    167, 168,   169,   170,   171,   172,   243,   173,   174,   175,
    244, 415,   222,   223,   224,   274,   411,   416,   239,   2,
    3,   8,     9,     19,    20,    29,    30,    31,    38,    39,
    32,  41,    42,    57,    58,    33,    43,    84,    85,    96,
    118, 119,   177,   178,   179,   180,   100,   50,    65,    102,
    148, 121,   122,   226,   227,   228,   146,   147,   187,   188,
    240, 272,   235,   236,   67,    105,   106,   107,   123,   327,
    308, 365,   337,   366,   407,   400,   401,   421,   413,   414,
    108, 109,   275,   296,   297,   386,   397,   398,   425,   417,
    418, 430,   431,   126,   127,   152,   193,   194,   251,   195,
    335, 196,   299,   300,   318,   319,   353,   354,   355,   356,
    357, 358,   359,   360,   361,   81,    82,    93,    110,   132,
    252, 281,   282,   283,   336
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF_, syntax error.  */
const signed char Cube4Parser::yytable_ninf_ = -1;
const unsigned short int
Cube4Parser::yytable_[] =
{
    95,  191,   128,   225,   333,   53,    23,    156,   267,   176,
    130, 294,   439,   26,    184,   237,   231,   219,   298,   156,
    426, 124,   47,    1,     48,    312,   4,     5,     83,    97,
    63,  64,    74,    75,    221,   10,    313,   314,   62,    241,
    150, 426,   86,    186,   290,   73,    225,   247,   190,   190,
    176, 21,    94,    139,   140,   141,   220,   248,   405,   405,
    219, 131,   27,    103,   320,   238,   231,   156,   28,    104,
    98,  103,   34,    363,   165,   367,   166,   221,   216,   35,
    217, 135,   136,   157,   190,   158,   218,   159,   87,    88,
    22,  291,   25,    112,   113,   114,   4,     5,     44,    220,
    101, 34,    40,    232,   312,   94,    139,   28,    35,    229,
    230, 310,   295,   94,    139,   313,   314,   229,   230,   94,
    139, 140,   141,   49,    160,   51,    161,   326,   162,   52,
    163, 55,    164,   59,    165,   60,    166,   11,    12,    13,
    14,  15,    16,    17,    18,    339,   340,   341,   342,   343,
    344, 345,   68,    232,   256,   257,   258,   331,   332,   382,
    383, 403,   396,   69,    423,   412,   434,   429,   71,    66,
    72,  76,    78,    80,    83,    89,    90,    91,    338,   92,
    111, 125,   94,    120,   103,   104,   133,   134,   137,   151,
    153, 181,   154,   182,   183,   186,   190,   189,   192,   197,
    198, 34,    202,   208,   209,   200,   211,   212,   210,   214,
    245, 203,   309,   242,   35,    213,   254,   166,   255,   259,
    262, 260,   265,   266,   261,   269,   263,   276,   277,   279,
    420, 237,   273,   248,   285,   280,   284,   286,   287,   420,
    288, 298,   295,   305,   293,   399,   301,   322,   324,   323,
    303, 325,   306,   156,   328,   329,   330,   362,   368,   369,
    128, 370,   371,   372,   373,   374,   385,   387,   409,   396,
    388, 375,   376,   377,   378,   379,   380,   381,   399,   395,
    384, 389,   405,   408,   390,   428,   429,   391,   412,   392,
    393, 436,   410,   437,   419,   253,   278,   406,   24,    199,
    45,  46,    264,   138,   70,    292,   54,    185,   364,   432,
    427, 129,   268,   402,   424,   99,    271,   404,   311,   438,
    149, 435,   215,   394,   321,   304,   334,   0,     0,     422,
    0,   0,     0,     0,     0,     0,     0,     0,     0,     0,
    246, 0,     0,     0,     0,     0,     433
};

/* YYCHECK.  */
const short int
Cube4Parser::yycheck_[] =
{
    83,  151,   106,   184,   11,    11,    15,    12,    10,    137,
    53,  274,   52,    12,    10,    38,    186,   184,   13,    12,
    417, 104,   30,    14,    32,    111,   105,   106,   26,    27,
    47,  48,    63,    64,    184,   0,     122,   123,   46,    189,
    123, 438,   73,    36,    37,    62,    227,   111,   89,    89,
    178, 5,     115,   116,   117,   118,   184,   121,   99,    99,
    227, 104,   61,    39,    59,    88,    236,   12,    67,    45,
    68,  39,    107,   41,    79,    338,   81,    227,   83,    114,
    85,  3,     4,     28,    89,    30,    91,    32,    74,    75,
    5,   272,   24,    132,   133,   134,   105,   106,   25,    227,
    86,  107,   63,    186,   111,   115,   116,   67,    114,   119,
    120, 46,    47,    115,   116,   122,   123,   119,   120,   115,
    116, 117,   118,   87,    69,    5,     71,    308,   73,    5,
    75,  65,    77,    62,    79,    112,   81,    16,    17,    18,
    19,  20,    21,    22,    23,    124,   125,   126,   127,   128,
    129, 130,   66,    236,   7,     8,     9,     3,     4,     58,
    59,  48,    49,    64,    42,    43,    50,    51,    5,     97,
    10,  112,   112,   103,   26,    5,     10,    5,     328,   10,
    5,   101,   115,   34,    39,    45,    5,     5,     10,    10,
    98,  5,     131,   5,     5,     36,    89,    10,    57,    5,
    10,  107,   31,    70,    72,    136,   76,    78,    74,    82,
    102, 137,   295,   90,    114,   80,    3,     81,    10,    10,
    92,  84,    5,     5,     86,    108,   35,    5,     5,     10,
    411, 38,    93,    121,   29,    55,    11,    33,    5,     420,
    109, 13,    47,    5,     94,    395,   135,   5,     5,     10,
    54,  11,    110,   12,    10,    5,     5,     56,    5,     5,
    364, 5,     5,     5,     5,     5,     40,    60,    100,   49,
    60,  10,    10,    10,    10,    10,    10,    10,    428,   10,
    363, 60,    99,    10,    60,    10,    51,    60,    43,    60,
    60,  44,    95,    10,    96,    199,   249,   399,   8,     156,
    30,  30,    227,   119,   58,    272,   38,    146,   337,   428,
    420, 108,   236,   396,   413,   84,    239,   397,   296,   437,
    121, 430,   178,   383,   299,   282,   318,   -1,    -1,    412,
    -1,  -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    194, -1,    -1,    -1,    -1,    -1,    429
};

/* STOS_[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
const unsigned short int
Cube4Parser::yystos_[] =
{
    0,   14,    197,   198,   105,   106,   139,   140,   199,   200,
    0,   16,    17,    18,    19,    20,    21,    22,    23,    201,
    202, 5,     5,     15,    200,   24,    12,    61,    67,    203,
    204, 205,   208,   213,   107,   114,   141,   142,   206,   207,
    63,  209,   210,   214,   25,    205,   208,   213,   213,   87,
    225, 5,     5,     11,    207,   65,    177,   211,   212,   62,
    112, 152,   213,   225,   225,   226,   97,    242,   66,    64,
    177, 5,     10,    225,   242,   242,   112,   153,   112,   154,
    103, 293,   294,   26,    215,   216,   242,   293,   293,   5,
    10,  5,     10,    295,   115,   160,   217,   27,    68,    216,
    224, 293,   227,   39,    45,    243,   244,   245,   258,   259,
    296, 5,     132,   133,   134,   144,   145,   146,   218,   219,
    34,  229,   230,   246,   160,   101,   271,   272,   245,   259,
    53,  104,   297,   5,     5,     3,     4,     10,    218,   116,
    117, 118,   143,   160,   171,   172,   234,   235,   228,   230,
    160, 10,    273,   98,    131,   169,   12,    28,    30,    32,
    69,  71,    73,    75,    77,    79,    81,    178,   179,   180,
    181, 182,   183,   185,   186,   187,   188,   220,   221,   222,
    223, 5,     5,     5,     10,    235,   36,    236,   237,   10,
    89,  189,   57,    274,   275,   277,   279,   5,     10,    141,
    136, 155,   31,    137,   156,   157,   158,   159,   70,    72,
    74,  76,    78,    80,    82,    222,   83,    85,    91,    183,
    188, 189,   190,   191,   192,   223,   231,   232,   233,   119,
    120, 143,   160,   161,   173,   240,   241,   38,    88,    196,
    238, 189,   90,    184,   188,   102,   277,   111,   121,   150,
    174, 276,   298,   142,   3,     10,    7,     8,     9,     10,
    84,  86,    92,    35,    233,   5,     5,     10,    240,   108,
    147, 238,   239,   93,    193,   260,   5,     5,     174,   10,
    55,  299,   300,   301,   11,    29,    33,    5,     109,   148,
    37,  223,   237,   94,    184,   47,    261,   262,   13,    280,
    281, 135,   170,   54,    301,   5,     110,   149,   248,   160,
    46,  262,   111,   122,   123,   151,   175,   176,   282,   283,
    59,  281,   5,     10,    5,     11,    223,   247,   10,    5,
    5,   3,     4,     11,    283,   278,   302,   250,   189,   124,
    125, 126,   127,   128,   129,   130,   162,   163,   164,   165,
    166, 167,   168,   284,   285,   286,   287,   288,   289,   290,
    291, 292,   56,    41,    244,   249,   251,   184,   5,     5,
    5,   5,     5,     5,     5,     10,    10,    10,    10,    10,
    10,  10,    58,    59,    160,   40,    263,   60,    60,    60,
    60,  60,    60,    60,    285,   10,    49,    264,   265,   189,
    253, 254,   160,   48,    265,   99,    195,   252,   10,    100,
    95,  194,   43,    256,   257,   189,   195,   267,   268,   96,
    223, 255,   160,   42,    257,   266,   268,   255,   10,    51,
    269, 270,   253,   160,   50,    270,   44,    10,    267,   52
};

#if CUBEPARSERDEBUG
/* TOKEN_NUMBER_[YYLEX-NUM] -- Internal symbol number corresponding
   to YYLEX-NUM.  */
const unsigned short int
Cube4Parser::yytoken_number_[] =
{
    0,    256,   1001,  1002,  1003,  1004,  1005,  1006,  1007,  1008,
    1009, 1010,  1011,  1012,  1013,  1014,  1015,  1016,  1017,  1018,
    1019, 1020,  1021,  1022,  1000,  1023,  1024,  1025,  1026,  1027,
    1028, 1029,  1030,  1031,  1032,  1033,  1034,  1035,  1036,  1037,
    1038, 1039,  1040,  1041,  1042,  1043,  1044,  1045,  1046,  1047,
    1048, 1049,  1050,  1051,  1052,  1053,  1054,  1055,  1056,  1057,
    1058, 1059,  1060,  1061,  1062,  1063,  1064,  1065,  1066,  1067,
    1068, 1069,  1070,  1071,  1072,  1073,  1074,  1075,  1076,  1077,
    1078, 1079,  1080,  1081,  1082,  1083,  1084,  1085,  1086,  1087,
    1088, 1089,  1090,  1091,  1092,  1093,  1094,  1095,  1096,  1097,
    1098, 1099,  1100,  1101,  1102,  1103,  1104,  1105,  1106,  1107,
    1108, 1109,  1110,  1111,  1112,  1113,  1114,  1115,  1116,  1117,
    1118, 1119,  1120,  1121,  1122,  1123,  1124,  1125,  1126,  1127,
    1128, 1129,  1130,  1131,  1132,  1133,  1134,  1135
};
#endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
const unsigned short int
Cube4Parser::yyr1_[] =
{
    0,   138,   139,   140,   141,   142,   143,   144,   145,   146,
    146, 147,   148,   149,   150,   151,   152,   152,   153,   153,
    154, 154,   155,   155,   156,   156,   156,   157,   158,   159,
    160, 161,   162,   163,   164,   165,   166,   167,   168,   169,
    170, 171,   172,   173,   174,   175,   176,   176,   177,   178,
    179, 180,   181,   182,   183,   184,   184,   185,   186,   187,
    188, 189,   190,   191,   192,   193,   194,   195,   196,   197,
    198, 199,   199,   200,   200,   201,   202,   202,   202,   202,
    202, 202,   202,   202,   203,   203,   203,   203,   204,   204,
    205, 206,   206,   207,   207,   208,   209,   209,   210,   211,
    211, 212,   212,   214,   213,   215,   215,   215,   216,   217,
    217, 218,   218,   219,   219,   219,   220,   220,   221,   221,
    222, 222,   222,   222,   222,   222,   222,   222,   222,   222,
    222, 223,   224,   226,   227,   228,   225,   229,   229,   230,
    231, 231,   232,   232,   233,   233,   233,   233,   233,   233,
    233, 234,   234,   235,   235,   235,   235,   236,   236,   236,
    237, 238,   238,   239,   239,   240,   240,   240,   240,   241,
    241, 242,   243,   243,   244,   244,   246,   247,   245,   248,
    248, 249,   249,   250,   250,   252,   251,   253,   254,   255,
    255, 256,   256,   257,   258,   258,   260,   259,   261,   261,
    263, 262,   264,   264,   266,   265,   267,   267,   268,   268,
    269, 269,   270,   271,   271,   273,   272,   274,   274,   275,
    275, 276,   276,   278,   277,   279,   280,   280,   281,   282,
    282, 283,   283,   283,   284,   284,   285,   285,   285,   285,
    285, 285,   285,   286,   287,   288,   289,   290,   291,   292,
    293, 293,   295,   294,   296,   296,   298,   297,   299,   299,
    300, 300,   302,   301
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
const unsigned char
Cube4Parser::yyr2_[] =
{
    0, 2,     2,     2,     2,     2,     2,     2,     2,     2,
    2, 2,     2,     2,     2,     2,     0,     2,     0,     2,
    0, 2,     0,     2,     1,     1,     1,     2,     2,     2,
    2, 2,     2,     2,     2,     2,     2,     2,     2,     2,
    2, 2,     2,     2,     2,     2,     2,     2,     2,     2,
    2, 2,     2,     2,     2,     0,     1,     4,     2,     4,
    2, 2,     2,     2,     2,     2,     2,     2,     5,     2,
    3, 1,     2,     1,     1,     3,     1,     1,     1,     1,
    1, 1,     1,     2,     6,     5,     5,     4,     1,     2,
    3, 1,     2,     1,     1,     3,     0,     1,     3,     0,
    1, 1,     2,     0,     6,     1,     2,     2,     5,     0,
    1, 0,     2,     1,     1,     1,     0,     1,     1,     2,
    1, 1,     1,     1,     1,     1,     1,     1,     1,     1,
    1, 4,     1,     0,     0,     0,     9,     1,     2,     5,
    0, 1,     1,     2,     1,     1,     1,     1,     1,     1,
    1, 1,     2,     1,     1,     1,     1,     1,     4,     4,
    3, 0,     2,     0,     2,     1,     1,     1,     1,     1,
    2, 6,     1,     1,     1,     2,     0,     0,     12,    0,
    2, 0,     1,     0,     2,     0,     7,     1,     4,     0,
    2, 1,     2,     5,     1,     2,     0,     8,     1,     2,
    0, 8,     1,     2,     0,     7,     1,     2,     1,     1,
    1, 2,     5,     0,     1,     0,     4,     0,     1,     1,
    2, 1,     2,     0,     8,     1,     1,     2,     3,     1,
    2, 1,     1,     1,     1,     3,     1,     1,     1,     1,
    1, 1,     1,     3,     3,     3,     3,     3,     3,     3,
    0, 1,     0,     4,     0,     2,     0,     6,     0,     1,
    1, 2,     0,     5
};


/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at \a yyntokens_, nonterminals.  */
const char*
const Cube4Parser::yytname_[] =
{
    "\"end of file\"",                "error",                             "$undefined",                "\"false\"",           "\"true\"",
    "\"attribute value\"",            "\"error\"",                         "\"plus\"",                  "\"minus\"",           "\"aggr\"",
    "\">\"",                          "\"/>\"",                            "\"<attr\"",                 "\"<dim\"",            "\"<?xml\"",          "\"?>\"",
    "\"<cube version=\\\"4.0\\\"\"",  "\"<cube version=\\\"4.1\\\"\"",
    "\"<cube version=\\\"4.2\\\"\"",  "\"<cube version=\\\"4.3\\\"\"",
    "\"<cube version=\\\"4.4\\\"\"",  "\"<cube version=\\\"4.5\\\"\"",
    "\"<cube version=\\\"3.0\\\"\"",  "\"<cube version=\\\"\"",
    "CUBE_OPEN_NOT_SUPPORTED",        "\"</cube>\"",                       "\"<metric\"",               "\"</metric>\"",
    "\"<cubepl\"",                    "\"</cubepl>\"",                     "\"<cubeplinit>\"",          "\"</cubeplinit>\"",
    "\"<cubeplaggr\"",                "\"</cubeplaggr>\"",                 "\"<region\"",               "\"</region>\"",
    "\"<cnode\"",                     "\"</cnode>\"",                      "\"<parameter\"",            "\"<systemtreenode\"",
    "\"</systemtreenode>\"",          "\"<locationgroup\"",                "\"</locationgroup>\"",
    "\"<location\"",                  "\"</location>\"",                   "\"<machine\"",              "\"</machine>\"",
    "\"<node\"",                      "\"</node>\"",                       "\"<process\"",              "\"</process>\"",
    "\"<thread\"",                    "\"</thread>\"",                     "\"<matrix\"",               "\"</matrix>\"",
    "\"<row\"",                       "\"</row>\"",                        "\"<cart\"",                 "\"</cart>\"",         "\"<coord\"",
    "\"</coord>\"",                   "\"<doc>\"",                         "\"</doc>\"",                "\"<mirrors>\"",
    "\"</mirrors>\"",                 "\"<murl>\"",                        "\"</murl>\"",               "\"<metrics\"",
    "\"</metrics>\"",                 "\"<disp_name>\"",                   "\"</disp_name>\"",
    "\"<uniq_name>\"",                "\"</uniq_name>\"",                  "\"<dtype>\"",               "\"</dtype>\"",
    "\"<uom>\"",                      "\"</uom>\"",                        "\"<val>\"",                 "\"</val>\"",          "\"<url>\"",
    "\"</url>\"",                     "\"<descr>\"",                       "\"</descr>\"",              "\"<paradigm>\"",
    "\"</paradigm>\"",                "\"<role>\"",                        "\"</role>\"",               "\"<program\"",
    "\"</program>\"",                 "\"<name>\"",                        "\"</name>\"",               "\"<mangled_name>\"",
    "\"</mangled_name>\"",            "\"<class>\"",                       "\"</class>\"",              "\"<type>\"",
    "\"</type>\"",                    "\"<system\"",                       "\"</system>\"",             "\"<rank>\"",
    "\"</rank>\"",                    "\"<topologies>\"",                  "\"</topologies>\"",         "\"<severity>\"",
    "\"</severity>\"",                "\"attribute name version\"",
    "\"attribute name encoding\"",    "\"attribute name key\"",
    "\"attribute name partype\"",     "\"attribute name parkey\"",
    "\"attribute name parvalue\"",    "\"attribute name name\"",
    "\"attribute name title\"",       "\"attribute name file\"",
    "\"attribute name value\"",       "\"attribute name id\"",
    "\"attribute name mod\"",         "\"attribute name begin\"",
    "\"attribute name end\"",         "\"attribute name line\"",
    "\"attribute name calleeid\"",    "\"attribute name ndims\"",
    "\"attribute name size\"",        "\"attribute name periodic\"",
    "\"attribute name locId\"",       "\"attribute name lgId\"",
    "\"attribute name stnId\"",       "\"attribute name thrdId\"",
    "\"attribute name procId\"",      "\"attribute name nodeId\"",
    "\"attribute name machId\"",      "\"attribute name metricId\"",
    "\"attribute name type\"",        "\"attribute name viztype\"",
    "\"attribute name convertible\"", "\"attribute name cnodeId\"",
    "\"attribute name rowwise\"",     "\"attribute name cubeplaggrtype\"",
    "$accept",                        "version_attr",                      "encoding_attr",             "key_attr",            "value_attr",
    "mod_attr",                       "metric_type_attr",                  "metric_viz_type_attr",
    "metric_convertible_attr",        "cnode_par_type_attr",               "cnode_par_key_attr",
    "cnode_par_value_attr",           "cart_name_attr",                    "dim_name_attr",
    "metrics_title_attr",             "calltree_title_attr",               "systemtree_title_attr",
    "expression_attr",                "expression_aggr_attr",              "expression_aggr_attr_plus",
    "expression_aggr_attr_minus",     "expression_aggr_attr_aggr",         "id_attr",
    "calleeid_attr",                  "locid_attr",                        "lgid_attr",                 "stnid_attr",          "thrdid_attr",
    "procid_attr",                    "nodeid_attr",                       "machid_attr",               "metricid_attr",
    "cnodeid_attr",                   "begin_attr",                        "end_attr",                  "line_attr",           "ndims_attr",
    "size_attr",                      "periodic_attr",                     "murl_tag",                  "disp_name_tag",
    "uniq_name_tag",                  "dtype_tag",                         "uom_tag",                   "val_tag",             "url_tag",
    "descr_tag_opt",                  "expression_tag",                    "expression_init_tag",
    "expression_aggr_tag",            "descr_tag",                         "name_tag",                  "mangled_name_tag",
    "paradigm_tag",                   "role_tag",                          "class_tag",                 "type_tag",            "rank_tag",
    "parameter_tag",                  "document",                          "xml_tag",                   "xml_attributes",
    "xml_attribute",                  "cube_tag",                          "cube_begin",                "cube_content",        "attr_tags",
    "attr_tag",                       "attr_attributes",                   "attr_attribute",            "doc_tag",
    "mirrors_tag_attr",               "mirrors_tag",                       "murl_tags_attr",            "murl_tags",
    "metrics_tag",                    "$@1",                               "metric_tag",                "metric_begin",        "id_attrs",
    "metric_attrs",                   "metric_attr",                       "tags_of_metric_attr",       "tags_of_metric",
    "tag_of_metric",                  "generic_attr_tag",                  "metric_end",                "program_tag",         "$@2",
    "$@3",                            "$@4",                               "region_tags",               "region_tag",          "tags_of_region_attr",
    "tags_of_region",                 "tag_of_region",                     "region_attributes",
    "region_attribute",               "cnode_tag",                         "cnode_begin",               "cnode_parameters",
    "cnode_attr_tags",                "cnode_attribute",                   "cnode_attributes",          "system_tag",
    "systemtree_tags",                "flexsystemtree_tags",               "systemtree_tag",            "$@5",                 "$@6",
    "systree_attr_tags",              "systemtree_sub_tags",               "location_group_tags",
    "location_group_tag",             "$@7",                               "loc_tags",                  "loc_tag",             "lg_attr_tags",
    "location_tags",                  "location_tag",                      "machine_tags",              "machine_tag",         "$@8",
    "node_tags",                      "node_tag",                          "$@9",                       "process_tags",        "process_tag",        "$@10",
    "tags_of_process",                "tag_of_process",                    "thread_tags",               "thread_tag",
    "topologies_tag_attr",            "topologies_tag",                    "$@11",                      "cart_tags_attr",
    "cart_tags",                      "cart_attrs",                        "cart_tag",                  "$@12",                "cart_open",          "dim_tags",
    "dim_tag",                        "dim_attributes",                    "dim_attribute",             "coord_tags",          "coord_tag",
    "coord_tag_loc",                  "coord_tag_lg",                      "coord_tag_stn",             "coord_tag_thrd",
    "coord_tag_proc",                 "coord_tag_node",                    "coord_tag_mach",            "severity_tag",
    "severity_part",                  "$@13",                              "matrix_tags",               "matrix_tag",          "$@14",
    "row_tags_attr",                  "row_tags",                          "row_tag",                   "$@15",                YY_NULL
};

#if CUBEPARSERDEBUG
/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
const Cube4Parser::rhs_number_type
Cube4Parser::yyrhs_[] =
{
    197, 0,     -1,    105,   5,     -1,    106,   5,     -1,    107,
    5,   -1,    114,   5,     -1,    116,   5,     -1,    132,   5,
    -1,  133,   5,     -1,    134,   4,     -1,    134,   3,     -1,
    108, 5,     -1,    109,   5,     -1,    110,   5,     -1,    111,
    5,   -1,    111,   5,     -1,    -1,    112,   5,     -1,    -1,
    112, 5,     -1,    -1,    112,   5,     -1,    -1,    136,   3,
    -1,  157,   -1,    158,   -1,    159,   -1,    137,   7,     -1,
    137, 8,     -1,    137,   9,     -1,    115,   5,     -1,    120,
    5,   -1,    124,   5,     -1,    125,   5,     -1,    126,   5,
    -1,  127,   5,     -1,    128,   5,     -1,    129,   5,     -1,
    130, 5,     -1,    131,   5,     -1,    135,   5,     -1,    117,
    5,   -1,    118,   5,     -1,    119,   5,     -1,    121,   5,
    -1,  122,   5,     -1,    123,   3,     -1,    123,   4,     -1,
    65,  66,    -1,    69,    70,    -1,    71,    72,    -1,    73,
    74,  -1,    75,    76,    -1,    77,    78,    -1,    79,    80,
    -1,  -1,    188,   -1,    28,    155,   10,    29,    -1,    30,
    31,  -1,    32,    156,   10,    33,    -1,    81,    82,    -1,
    89,  90,    -1,    91,    92,    -1,    83,    84,    -1,    85,
    86,  -1,    93,    94,    -1,    95,    96,    -1,    99,    100,
    -1,  38,    147,   148,   149,   11,    -1,    198,   201,   -1,
    14,  199,   15,    -1,    200,   -1,    199,   200,   -1,    139,
    -1,  140,   -1,    202,   203,   25,    -1,    16,    -1,    17,
    -1,  18,    -1,    19,    -1,    20,    -1,    21,    -1,    22,
    -1,  23,    24,    -1,    204,   208,   213,   225,   242,   293,
    -1,  204,   213,   225,   242,   293,   -1,    208,   213,   225,
    242, 293,   -1,    213,   225,   242,   293,   -1,    205,   -1,
    204, 205,   -1,    12,    206,   11,    -1,    207,   -1,    206,
    207, -1,    141,   -1,    142,   -1,    61,    209,   62,    -1,
    -1,  210,   -1,    63,    211,   64,    -1,    -1,    212,   -1,
    177, -1,    212,   177,   -1,    -1,    67,    214,   152,   10,
    215, 68,    -1,    216,   -1,    215,   216,   -1,    215,   224,
    -1,  26,    217,   218,   10,    220,   -1,    -1,    160,   -1,
    -1,  219,   218,   -1,    144,   -1,    145,   -1,    146,   -1,
    -1,  221,   -1,    222,   -1,    221,   222,   -1,    178,   -1,
    179, -1,    180,   -1,    181,   -1,    182,   -1,    183,   -1,
    188, -1,    185,   -1,    186,   -1,    187,   -1,    223,   -1,
    12,  141,   142,   11,    -1,    27,    -1,    -1,    -1,    -1,
    87,  226,   153,   10,    227,   229,   228,   236,   88,    -1,
    230, -1,    229,   230,   -1,    34,    234,   10,    231,   35,
    -1,  -1,    232,   -1,    233,   -1,    232,   233,   -1,    189,
    -1,  190,   -1,    191,   -1,    192,   -1,    183,   -1,    188,
    -1,  223,   -1,    235,   -1,    234,   235,   -1,    160,   -1,
    143, -1,    171,   -1,    172,   -1,    237,   -1,    236,   238,
    239, 237,   -1,    236,   238,   239,   37,    -1,    36,    241,
    10,  -1,    -1,    196,   238,   -1,    -1,    239,   223,   -1,
    160, -1,    173,   -1,    143,   -1,    161,   -1,    240,   -1,
    241, 240,   -1,    97,    154,   10,    243,   271,   98,    -1,
    258, -1,    244,   -1,    245,   -1,    244,   245,   -1,    -1,
    -1,  39,    246,   160,   10,    189,   193,   184,   248,   247,
    250, 249,   40,    -1,    -1,    248,   223,   -1,    -1,    244,
    -1,  -1,    250,   251,   -1,    -1,    41,    160,   10,    253,
    252, 256,   42,    -1,    254,   -1,    189,   195,   194,   255,
    -1,  -1,    223,   255,   -1,    257,   -1,    256,   257,   -1,
    43,  160,   10,    253,   44,    -1,    259,   -1,    258,   259,
    -1,  -1,    45,    160,   10,    189,   184,   260,   261,   46,
    -1,  262,   -1,    261,   262,   -1,    -1,    47,    160,   10,
    189, 184,   263,   264,   48,    -1,    265,   -1,    264,   265,
    -1,  -1,    49,    160,   10,    267,   266,   269,   50,    -1,
    268, -1,    267,   268,   -1,    189,   -1,    195,   -1,    270,
    -1,  269,   270,   -1,    51,    160,   10,    267,   52,    -1,
    -1,  272,   -1,    -1,    101,   273,   274,   102,   -1,    -1,
    275, -1,    277,   -1,    275,   277,   -1,    174,   -1,    150,
    174, -1,    -1,    279,   276,   10,    280,   59,    278,   284,
    58,  -1,    57,    -1,    281,   -1,    280,   281,   -1,    13,
    282, 11,    -1,    283,   -1,    282,   283,   -1,    151,   -1,
    175, -1,    176,   -1,    285,   -1,    284,   59,    285,   -1,
    289, -1,    290,   -1,    291,   -1,    292,   -1,    286,   -1,
    287, -1,    288,   -1,    162,   10,    60,    -1,    163,   10,
    60,  -1,    164,   10,    60,    -1,    165,   10,    60,    -1,
    166, 10,    60,    -1,    167,   10,    60,    -1,    168,   10,
    60,  -1,    -1,    294,   -1,    -1,    103,   295,   296,   104,
    -1,  -1,    296,   297,   -1,    -1,    53,    169,   10,    298,
    299, 54,    -1,    -1,    300,   -1,    301,   -1,    300,   301,
    -1,  -1,    55,    170,   10,    302,   56,    -1
};

/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
const unsigned short int
Cube4Parser::yyprhs_[] =
{
    0,   0,     3,     6,     9,     12,    15,    18,    21,    24,
    27,  30,    33,    36,    39,    42,    45,    46,    49,    50,
    53,  54,    57,    58,    61,    63,    65,    67,    70,    73,
    76,  79,    82,    85,    88,    91,    94,    97,    100,   103,
    106, 109,   112,   115,   118,   121,   124,   127,   130,   133,
    136, 139,   142,   145,   148,   151,   152,   154,   159,   162,
    167, 170,   173,   176,   179,   182,   185,   188,   191,   197,
    200, 204,   206,   209,   211,   213,   217,   219,   221,   223,
    225, 227,   229,   231,   234,   241,   247,   253,   258,   260,
    263, 267,   269,   272,   274,   276,   280,   281,   283,   287,
    288, 290,   292,   295,   296,   303,   305,   308,   311,   317,
    318, 320,   321,   324,   326,   328,   330,   331,   333,   335,
    338, 340,   342,   344,   346,   348,   350,   352,   354,   356,
    358, 360,   365,   367,   368,   369,   370,   380,   382,   385,
    391, 392,   394,   396,   399,   401,   403,   405,   407,   409,
    411, 413,   415,   418,   420,   422,   424,   426,   428,   433,
    438, 442,   443,   446,   447,   450,   452,   454,   456,   458,
    460, 463,   470,   472,   474,   476,   479,   480,   481,   494,
    495, 498,   499,   501,   502,   505,   506,   514,   516,   521,
    522, 525,   527,   530,   536,   538,   541,   542,   551,   553,
    556, 557,   566,   568,   571,   572,   580,   582,   585,   587,
    589, 591,   594,   600,   601,   603,   604,   609,   610,   612,
    614, 617,   619,   622,   623,   632,   634,   636,   639,   643,
    645, 648,   650,   652,   654,   656,   660,   662,   664,   666,
    668, 670,   672,   674,   678,   682,   686,   690,   694,   698,
    702, 703,   705,   706,   711,   712,   715,   716,   723,   724,
    726, 728,   731,   732
};

/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
const unsigned short int
Cube4Parser::yyrline_[] =
{
    0,    309,   309,   316,   323,   330,   337,   344,   352,   360,
    366,  375,   384,   393,   402,   412,   420,   422,   429,   431,
    439,  441,   449,   451,   461,   463,   465,   470,   480,   491,
    503,  512,   524,   533,   542,   552,   561,   570,   579,   588,
    597,  608,   616,   624,   632,   642,   654,   660,   671,   681,
    688,  694,   701,   708,   715,   721,   722,   727,   735,   743,
    754,  761,   771,   779,   787,   796,   805,   812,   829,   874,
    880,  897,   898,   902,   903,   909,   916,   920,   924,   928,
    932,  936,   940,   944,   950,   951,   952,   953,   959,   960,
    964,  984,   985,   989,   990,   996,   998,   999,   1003,  1006,
    1007, 1011,  1012,  1021,  1020,  1106,  1107,  1108,  1114,  1203,
    1204, 1208,  1209,  1212,  1213,  1214,  1217,  1218,  1222,  1223,
    1227, 1228,  1229,  1230,  1231,  1232,  1233,  1234,  1235,  1236,
    1237, 1242,  1270,  1282,  1286,  1291,  1281,  1404,  1405,  1409,
    1476, 1477,  1481,  1482,  1486,  1487,  1488,  1489,  1490,  1491,
    1492, 1498,  1499,  1503,  1504,  1505,  1506,  1510,  1511,  1512,
    1635, 1692,  1693,  1698,  1700,  1705,  1706,  1707,  1708,  1712,
    1713, 1719,  1733,  1735,  1739,  1740,  1745,  1748,  1744,  1812,
    1814, 1823,  1825,  1828,  1830,  1835,  1835,  1883,  1887,  1890,
    1892, 1898,  1899,  1902,  1952,  1953,  1957,  1957,  1977,  1978,
    1982, 1982,  2002,  2003,  2007,  2007,  2035,  2036,  2039,  2040,
    2044, 2045,  2049,  2079,  2080,  2084,  2084,  2090,  2091,  2095,
    2096, 2100,  2101,  2105,  2105,  2132,  2139,  2140,  2144,  2161,
    2162, 2166,  2167,  2168,  2172,  2173,  2180,  2181,  2182,  2183,
    2184, 2185,  2186,  2193,  2214,  2235,  2257,  2278,  2299,  2321,
    2344, 2345,  2348,  2348,  2358,  2360,  2365,  2365,  2388,  2389,
    2393, 2394,  2398,  2398
};

// Print the state stack on the debug stream.
void
Cube4Parser::yystack_print_()
{
    *yycdebug_ << "Stack now";
    for ( state_stack_type::const_iterator i = yystate_stack_.begin();
          i != yystate_stack_.end(); ++i )
    {
        *yycdebug_ << ' ' << *i;
    }
    *yycdebug_ << std::endl;
}

// Report on the debug stream that the rule \a yyrule is going to be reduced.
void
Cube4Parser::yy_reduce_print_( int yyrule )
{
    unsigned int yylno  = yyrline_[ yyrule ];
    int          yynrhs = yyr2_[ yyrule ];
    /* Print the symbols being reduced, and their result.  */
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):" << std::endl;
    /* The symbols being reduced.  */
    for ( int yyi = 0; yyi < yynrhs; yyi++ )
    {
        YY_SYMBOL_PRINT( "   $" << yyi + 1 << " =",
                         yyrhs_[ yyprhs_[ yyrule ] + yyi ],
                         &( yysemantic_stack_[ ( yynrhs ) - ( yyi + 1 ) ] ),
                         &( yylocation_stack_[ ( yynrhs ) - ( yyi + 1 ) ] ) );
    }
}
#endif // CUBEPARSERDEBUG

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
Cube4Parser::token_number_type
Cube4Parser::yytranslate_( int t )
{
    static
    const token_number_type
        translate_table[] =
    {
        0,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     1,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        2,   2,     2,     2,     2,     2,     2,     2,     2,     2,
        24,  2,     3,     4,     5,     6,     7,     8,     9,     10,
        11,  12,    13,    14,    15,    16,    17,    18,    19,    20,
        21,  22,    23,    25,    26,    27,    28,    29,    30,    31,
        32,  33,    34,    35,    36,    37,    38,    39,    40,    41,
        42,  43,    44,    45,    46,    47,    48,    49,    50,    51,
        52,  53,    54,    55,    56,    57,    58,    59,    60,    61,
        62,  63,    64,    65,    66,    67,    68,    69,    70,    71,
        72,  73,    74,    75,    76,    77,    78,    79,    80,    81,
        82,  83,    84,    85,    86,    87,    88,    89,    90,    91,
        92,  93,    94,    95,    96,    97,    98,    99,    100,   101,
        102, 103,   104,   105,   106,   107,   108,   109,   110,   111,
        112, 113,   114,   115,   116,   117,   118,   119,   120,   121,
        122, 123,   124,   125,   126,   127,   128,   129,   130,   131,
        132, 133,   134,   135,   136,   137
    };
    if ( ( unsigned int )t <= yyuser_token_number_max_ )
    {
        return translate_table[ t ];
    }
    else
    {
        return yyundef_token_;
    }
}

const int Cube4Parser::yyeof_     = 0;
const int Cube4Parser::yylast_    = 346;
const int Cube4Parser::yynnts_    = 165;
const int Cube4Parser::yyempty_   = -2;
const int Cube4Parser::yyfinal_   = 10;
const int Cube4Parser::yyterror_  = 1;
const int Cube4Parser::yyerrcode_ = 256;
const int Cube4Parser::yyntokens_ = 138;

const unsigned int                   Cube4Parser::yyuser_token_number_max_ = 1135;
const Cube4Parser::token_number_type Cube4Parser::yyundef_token_           = 2;
} // cubeparser
/* Line 1141 of lalr1.cc  */
#line 3646 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.cpp"
/* Line 1142 of lalr1.cc  */
#line 2436 "../../build-frontend/../src/cube/src/syntax/Cube4Parser.yy"
/*** Additional Code ***/


void
cubeparser::Cube4Parser::error( const Cube4Parser::location_type& l,
                                const std::string&                m )
{
    if ( strstr( m.c_str(), "expecting <?xml" ) != NULL )
    {
        driver.error_just_message( "The cube file is probably empty or filled with wrong content. The file has ended before the header of cube started. \n" );
    }
    if ( strstr( m.c_str(), " expecting </row>" ) != NULL )
    {
        driver.error_just_message( "One of the possible reasons is \n    1) that the severity value is malformed. CUBE expects the \"double\" value in C_LOCALE with dot instead of comma;. \n    2) that the CUBE file is not properly ended. Probably the writing of CUBE file was interrupted." );
    }
    if ( strstr( m.c_str(), " expecting <matrix" ) != NULL ||
         ( strstr( m.c_str(), " expecting <severity>" ) != NULL ) )
    {
        driver.error_just_message( "The cube file has probably a proper structure, but doesn't contain any severity values." );
    }
    if ( strstr( m.c_str(), " expecting <metric" ) != NULL )
    {
        driver.error_just_message( "The cube file doesn't contain any information about metric dimension." );
    }
    if ( strstr( m.c_str(), " expecting <region" ) != NULL )
    {
        driver.error_just_message( "The cube file doesn't contain any information about program dimension." );
    }
    if ( strstr( m.c_str(), " expecting <machine" ) != NULL )
    {
        driver.error_just_message( "The cube file doesn't contain any information about system dimension." );
    }
    if ( strstr( m.c_str(), " expecting <thread" ) != NULL )
    {
        driver.error_just_message( "The system dimension of the cube file is malformed. It contains a process without any threads." );
    }
    if ( strstr( m.c_str(), " expecting <process" ) != NULL )
    {
        driver.error_just_message( "The system dimension of the cube file is malformed. It contains a node without any processes." );
    }
    if ( strstr( m.c_str(), " expecting <node" ) != NULL )
    {
        driver.error_just_message( "The system dimension of the cube file is malformed. It contains a machine without any computing nodes." );
    }
    driver.error( l, m );
}
