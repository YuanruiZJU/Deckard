/** \file
 *  This C header file was generated by $ANTLR version !Unknown version!
 *
 *     -  From the grammar source file : DotC.g
 *     -                            On : 2012-11-18 20:10:54
 *     -                for the parser : DotCParserParser *
 * Editing it, at least manually, is not wise. 
 *
 * C language generator and runtime by Jim Idle, jimi|hereisanat|idle|dotgoeshere|ws.
 *
 *
 * The parser DotCParser has the callable functions (rules) shown below,
 * which will invoke the code for the associated rule in the source grammar
 * assuming that the input stream is pointing to a token/text stream that could begin
 * this rule.
 * 
 * For instance if you call the first (topmost) rule in a parser grammar, you will
 * get the results of a full parse, but calling a rule half way through the grammar will
 * allow you to pass part of a full token stream to the parser, such as for syntax checking
 * in editors and so on.
 *
 * The parser entry points are called indirectly (by function pointer to function) via
 * a parser context typedef pDotCParser, which is returned from a call to DotCParserNew().
 *
 * The methods in pDotCParser are  as follows:
 *
 *  - DotCParser_graph_return      pDotCParser->graph(pDotCParser)
 *  - DotCParser_graphModifier_return      pDotCParser->graphModifier(pDotCParser)
 *  - DotCParser_stmt_list_return      pDotCParser->stmt_list(pDotCParser)
 *  - DotCParser_stmt_return      pDotCParser->stmt(pDotCParser)
 *  - DotCParser_attr_stmt_return      pDotCParser->attr_stmt(pDotCParser)
 *  - DotCParser_attr_list_return      pDotCParser->attr_list(pDotCParser)
 *  - DotCParser_a_list_return      pDotCParser->a_list(pDotCParser)
 *  - DotCParser_attr_return      pDotCParser->attr(pDotCParser)
 *  - DotCParser_edge_stmt_return      pDotCParser->edge_stmt(pDotCParser)
 *  - DotCParser_node_subgraph_return      pDotCParser->node_subgraph(pDotCParser)
 *  - DotCParser_edgeRHS_return      pDotCParser->edgeRHS(pDotCParser)
 *  - DotCParser_node_stmt_return      pDotCParser->node_stmt(pDotCParser)
 *  - DotCParser_node_id_return      pDotCParser->node_id(pDotCParser)
 *  - DotCParser_port_return      pDotCParser->port(pDotCParser)
 *  - DotCParser_subgraph_return      pDotCParser->subgraph(pDotCParser)
 *
 * The return type for any particular rule is of course determined by the source
 * grammar file.
 */
// [The "BSD licence"]
// Copyright (c) 2005-2009 Jim Idle, Temporal Wave LLC
// http://www.temporal-wave.com
// http://www.linkedin.com/in/jimidle
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
// 1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
// 3. The name of the author may not be used to endorse or promote products
//    derived from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
// OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
// NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
// THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef	_DotCParser_H
#define _DotCParser_H
/* =============================================================================
 * Standard antlr3 C runtime definitions
 */
#include    <antlr3.h>

/* End of standard antlr 3 runtime definitions
 * =============================================================================
 */
 
#ifdef __cplusplus
extern "C" {
#endif

// Forward declare the context typedef so that we can use it before it is
// properly defined. Delegators and delegates (from import statements) are
// interdependent and their context structures contain pointers to each other
// C only allows such things to be declared if you pre-declare the typedef.
//
typedef struct DotCParser_Ctx_struct DotCParser, * pDotCParser;



#ifdef	ANTLR3_WINDOWS
// Disable: Unreferenced parameter,							- Rules with parameters that are not used
//          constant conditional,							- ANTLR realizes that a prediction is always true (synpred usually)
//          initialized but unused variable					- tree rewrite variables declared but not needed
//          Unreferenced local variable						- lexer rule declares but does not always use _type
//          potentially unitialized variable used			- retval always returned from a rule 
//			unreferenced local function has been removed	- susually getTokenNames or freeScope, they can go without warnigns
//
// These are only really displayed at warning level /W4 but that is the code ideal I am aiming at
// and the codegen must generate some of these warnings by necessity, apart from 4100, which is
// usually generated when a parser rule is given a parameter that it does not use. Mostly though
// this is a matter of orthogonality hence I disable that one.
//
#pragma warning( disable : 4100 )
#pragma warning( disable : 4101 )
#pragma warning( disable : 4127 )
#pragma warning( disable : 4189 )
#pragma warning( disable : 4505 )
#pragma warning( disable : 4701 )
#endif

/* ========================
 * BACKTRACKING IS ENABLED
 * ========================
 */
typedef struct DotCParser_graph_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    DotCParser_graph_return;

typedef struct DotCParser_graphModifier_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    DotCParser_graphModifier_return;

typedef struct DotCParser_stmt_list_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    DotCParser_stmt_list_return;

typedef struct DotCParser_stmt_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    DotCParser_stmt_return;

typedef struct DotCParser_attr_stmt_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    DotCParser_attr_stmt_return;

typedef struct DotCParser_attr_list_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    DotCParser_attr_list_return;

typedef struct DotCParser_a_list_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    DotCParser_a_list_return;

typedef struct DotCParser_attr_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    DotCParser_attr_return;

typedef struct DotCParser_edge_stmt_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    DotCParser_edge_stmt_return;

typedef struct DotCParser_node_subgraph_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    DotCParser_node_subgraph_return;

typedef struct DotCParser_edgeRHS_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    DotCParser_edgeRHS_return;

typedef struct DotCParser_node_stmt_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    DotCParser_node_stmt_return;

typedef struct DotCParser_node_id_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    DotCParser_node_id_return;

typedef struct DotCParser_port_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    DotCParser_port_return;

typedef struct DotCParser_subgraph_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    pANTLR3_BASE_TREE	tree;
   
}
    DotCParser_subgraph_return;



/** Context tracking structure for DotCParser
 */
struct DotCParser_Ctx_struct
{
    /** Built in ANTLR3 context tracker contains all the generic elements
     *  required for context tracking.
     */
    pANTLR3_PARSER   pParser;


     DotCParser_graph_return (*graph)	(struct DotCParser_Ctx_struct * ctx);
     DotCParser_graphModifier_return (*graphModifier)	(struct DotCParser_Ctx_struct * ctx);
     DotCParser_stmt_list_return (*stmt_list)	(struct DotCParser_Ctx_struct * ctx);
     DotCParser_stmt_return (*stmt)	(struct DotCParser_Ctx_struct * ctx);
     DotCParser_attr_stmt_return (*attr_stmt)	(struct DotCParser_Ctx_struct * ctx);
     DotCParser_attr_list_return (*attr_list)	(struct DotCParser_Ctx_struct * ctx);
     DotCParser_a_list_return (*a_list)	(struct DotCParser_Ctx_struct * ctx);
     DotCParser_attr_return (*attr)	(struct DotCParser_Ctx_struct * ctx);
     DotCParser_edge_stmt_return (*edge_stmt)	(struct DotCParser_Ctx_struct * ctx);
     DotCParser_node_subgraph_return (*node_subgraph)	(struct DotCParser_Ctx_struct * ctx);
     DotCParser_edgeRHS_return (*edgeRHS)	(struct DotCParser_Ctx_struct * ctx);
     DotCParser_node_stmt_return (*node_stmt)	(struct DotCParser_Ctx_struct * ctx);
     DotCParser_node_id_return (*node_id)	(struct DotCParser_Ctx_struct * ctx);
     DotCParser_port_return (*port)	(struct DotCParser_Ctx_struct * ctx);
     DotCParser_subgraph_return (*subgraph)	(struct DotCParser_Ctx_struct * ctx);
     ANTLR3_BOOLEAN (*synpred8_DotC)	(struct DotCParser_Ctx_struct * ctx);
     ANTLR3_BOOLEAN (*synpred9_DotC)	(struct DotCParser_Ctx_struct * ctx);
     ANTLR3_BOOLEAN (*synpred10_DotC)	(struct DotCParser_Ctx_struct * ctx);
     ANTLR3_BOOLEAN (*synpred18_DotC)	(struct DotCParser_Ctx_struct * ctx);
     ANTLR3_BOOLEAN (*synpred22_DotC)	(struct DotCParser_Ctx_struct * ctx);
     ANTLR3_BOOLEAN (*synpred28_DotC)	(struct DotCParser_Ctx_struct * ctx);
     ANTLR3_BOOLEAN (*synpred33_DotC)	(struct DotCParser_Ctx_struct * ctx);
    // Delegated rules
    const char * (*getGrammarFileName)();
    void	    (*free)   (struct DotCParser_Ctx_struct * ctx);
    /* @headerFile.members() */
    pANTLR3_BASE_TREE_ADAPTOR	adaptor;
    pANTLR3_VECTOR_FACTORY		vectors;
    /* End @headerFile.members() */
};

// Function protoypes for the constructor functions that external translation units
// such as delegators and delegates may wish to call.
//
ANTLR3_API pDotCParser DotCParserNew         (pANTLR3_COMMON_TOKEN_STREAM instream);
ANTLR3_API pDotCParser DotCParserNewSSD      (pANTLR3_COMMON_TOKEN_STREAM instream, pANTLR3_RECOGNIZER_SHARED_STATE state);

/** Symbolic definitions of all the tokens that the parser will work with.
 * \{
 *
 * Antlr will define EOF, but we can't use that as it it is too common in
 * in C header files and that would be confusing. There is no way to filter this out at the moment
 * so we just undef it here for now. That isn't the value we get back from C recognizers
 * anyway. We are looking for ANTLR3_TOKEN_EOF.
 */
#ifdef	EOF
#undef	EOF
#endif
#ifdef	Tokens
#undef	Tokens
#endif 
#define GRAPH      14
#define EDGE      18
#define HTMLSTR      47
#define ID      27
#define EOF      -1
#define LPAREN      12
#define VALIDSTR      29
#define ESCAPE_SEQUENCE      50
#define STR      49
#define RPAREN      13
#define O_SQR_BRACKET      6
#define COMMA      10
#define GRAPH_ROOT      20
#define EQUAL      9
#define ALPHACHAR      48
#define COMMENT      53
#define C_SQR_BRACKET      7
#define NODE_STMT      24
#define ATTR      26
#define D      35
#define E      42
#define F      55
#define C_BRACKET      5
#define G      30
#define A      32
#define B      44
#define NODE      17
#define STRICT      16
#define SUBGRAPH      19
#define C      39
#define L      58
#define LINE_COMMENT      54
#define M      59
#define STMT_LIST      22
#define N      40
#define O      41
#define H      34
#define I      36
#define J      56
#define K      57
#define NUMBER      45
#define U      43
#define T      38
#define W      62
#define V      61
#define Q      60
#define SEMI_COLON      8
#define P      33
#define S      37
#define DIGRAPH      15
#define O_BRACKET      4
#define R      31
#define Y      64
#define X      63
#define Z      65
#define COLON      11
#define WS      51
#define NEWLINE      52
#define QUOTEDSTR      46
#define EDGEOP      28
#define EDGE_STMT      23
#define ATTR_LIST      25
#define SUBGRAPH_ROOT      21
#ifdef	EOF
#undef	EOF
#define	EOF	ANTLR3_TOKEN_EOF
#endif

#ifndef TOKENSOURCE
#define TOKENSOURCE(lxr) lxr->pLexer->rec->state->tokSource
#endif

/* End of token definitions for DotCParser
 * =============================================================================
 */
/** \} */

#ifdef __cplusplus
}
#endif

#endif

/* END - Note:Keep extra line feed to satisfy UNIX systems */
