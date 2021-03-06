// A Bison parser, made by GNU Bison 3.7.3.

// Skeleton interface for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2020 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.


/**
 ** \file ./S1/compiler_parser.hpp
 ** Define the S1::parser class.
 */

// C++ LALR(1) parser skeleton written by Akim Demaille.

// DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
// especially those whose name start with YY_ or yy_.  They are
// private implementation details that can be changed or removed.

#ifndef YY_S1_S1_COMPILER_PARSER_HPP_INCLUDED
# define YY_S1_S1_COMPILER_PARSER_HPP_INCLUDED
// "%code requires" blocks.
#line 33 "S1.parser.ypp"

    #include <utils.hpp>
    typedef void *yyscan_t;
    #define YY_DECL S1::parser::symbol_type S1lex(yyscan_t yyscanner, gsc::location& loc)

#line 55 "./S1/compiler_parser.hpp"

# include <cassert>
# include <cstdlib> // std::abort
# include <iostream>
# include <stdexcept>
# include <string>
# include <vector>

#if defined __cplusplus
# define YY_CPLUSPLUS __cplusplus
#else
# define YY_CPLUSPLUS 199711L
#endif

// Support move semantics when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_MOVE           std::move
# define YY_MOVE_OR_COPY   move
# define YY_MOVE_REF(Type) Type&&
# define YY_RVREF(Type)    Type&&
# define YY_COPY(Type)     Type
#else
# define YY_MOVE
# define YY_MOVE_OR_COPY   copy
# define YY_MOVE_REF(Type) Type&
# define YY_RVREF(Type)    const Type&
# define YY_COPY(Type)     const Type&
#endif

// Support noexcept when possible.
#if 201103L <= YY_CPLUSPLUS
# define YY_NOEXCEPT noexcept
# define YY_NOTHROW
#else
# define YY_NOEXCEPT
# define YY_NOTHROW throw ()
#endif

// Support constexpr when possible.
#if 201703 <= YY_CPLUSPLUS
# define YY_CONSTEXPR constexpr
#else
# define YY_CONSTEXPR
#endif

#include <typeinfo>
#ifndef YY_ASSERT
# include <cassert>
# define YY_ASSERT assert
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
#ifndef S1DEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define S1DEBUG 1
#  else
#   define S1DEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define S1DEBUG 1
# endif /* ! defined YYDEBUG */
#endif  /* ! defined S1DEBUG */

#line 13 "S1.parser.ypp"
namespace S1 {
#line 198 "./S1/compiler_parser.hpp"




  /// A Bison parser.
  class parser
  {
  public:
#ifndef S1STYPE
  /// A buffer to store and retrieve objects.
  ///
  /// Sort of a variant, but does not keep track of the nature
  /// of the stored data, since that knowledge is available
  /// via the current parser state.
  class semantic_type
  {
  public:
    /// Type of *this.
    typedef semantic_type self_type;

    /// Empty construction.
    semantic_type () YY_NOEXCEPT
      : yybuffer_ ()
      , yytypeid_ (YY_NULLPTR)
    {}

    /// Construct and fill.
    template <typename T>
    semantic_type (YY_RVREF (T) t)
      : yytypeid_ (&typeid (T))
    {
      YY_ASSERT (sizeof (T) <= size);
      new (yyas_<T> ()) T (YY_MOVE (t));
    }

#if 201103L <= YY_CPLUSPLUS
    /// Non copyable.
    semantic_type (const self_type&) = delete;
    /// Non copyable.
    self_type& operator= (const self_type&) = delete;
#endif

    /// Destruction, allowed only if empty.
    ~semantic_type () YY_NOEXCEPT
    {
      YY_ASSERT (!yytypeid_);
    }

# if 201103L <= YY_CPLUSPLUS
    /// Instantiate a \a T in here from \a t.
    template <typename T, typename... U>
    T&
    emplace (U&&... u)
    {
      YY_ASSERT (!yytypeid_);
      YY_ASSERT (sizeof (T) <= size);
      yytypeid_ = & typeid (T);
      return *new (yyas_<T> ()) T (std::forward <U>(u)...);
    }
# else
    /// Instantiate an empty \a T in here.
    template <typename T>
    T&
    emplace ()
    {
      YY_ASSERT (!yytypeid_);
      YY_ASSERT (sizeof (T) <= size);
      yytypeid_ = & typeid (T);
      return *new (yyas_<T> ()) T ();
    }

    /// Instantiate a \a T in here from \a t.
    template <typename T>
    T&
    emplace (const T& t)
    {
      YY_ASSERT (!yytypeid_);
      YY_ASSERT (sizeof (T) <= size);
      yytypeid_ = & typeid (T);
      return *new (yyas_<T> ()) T (t);
    }
# endif

    /// Instantiate an empty \a T in here.
    /// Obsolete, use emplace.
    template <typename T>
    T&
    build ()
    {
      return emplace<T> ();
    }

    /// Instantiate a \a T in here from \a t.
    /// Obsolete, use emplace.
    template <typename T>
    T&
    build (const T& t)
    {
      return emplace<T> (t);
    }

    /// Accessor to a built \a T.
    template <typename T>
    T&
    as () YY_NOEXCEPT
    {
      YY_ASSERT (yytypeid_);
      YY_ASSERT (*yytypeid_ == typeid (T));
      YY_ASSERT (sizeof (T) <= size);
      return *yyas_<T> ();
    }

    /// Const accessor to a built \a T (for %printer).
    template <typename T>
    const T&
    as () const YY_NOEXCEPT
    {
      YY_ASSERT (yytypeid_);
      YY_ASSERT (*yytypeid_ == typeid (T));
      YY_ASSERT (sizeof (T) <= size);
      return *yyas_<T> ();
    }

    /// Swap the content with \a that, of same type.
    ///
    /// Both variants must be built beforehand, because swapping the actual
    /// data requires reading it (with as()), and this is not possible on
    /// unconstructed variants: it would require some dynamic testing, which
    /// should not be the variant's responsibility.
    /// Swapping between built and (possibly) non-built is done with
    /// self_type::move ().
    template <typename T>
    void
    swap (self_type& that) YY_NOEXCEPT
    {
      YY_ASSERT (yytypeid_);
      YY_ASSERT (*yytypeid_ == *that.yytypeid_);
      std::swap (as<T> (), that.as<T> ());
    }

    /// Move the content of \a that to this.
    ///
    /// Destroys \a that.
    template <typename T>
    void
    move (self_type& that)
    {
# if 201103L <= YY_CPLUSPLUS
      emplace<T> (std::move (that.as<T> ()));
# else
      emplace<T> ();
      swap<T> (that);
# endif
      that.destroy<T> ();
    }

# if 201103L <= YY_CPLUSPLUS
    /// Move the content of \a that to this.
    template <typename T>
    void
    move (self_type&& that)
    {
      emplace<T> (std::move (that.as<T> ()));
      that.destroy<T> ();
    }
#endif

    /// Copy the content of \a that to this.
    template <typename T>
    void
    copy (const self_type& that)
    {
      emplace<T> (that.as<T> ());
    }

    /// Destroy the stored \a T.
    template <typename T>
    void
    destroy ()
    {
      as<T> ().~T ();
      yytypeid_ = YY_NULLPTR;
    }

  private:
#if YY_CPLUSPLUS < 201103L
    /// Non copyable.
    semantic_type (const self_type&);
    /// Non copyable.
    self_type& operator= (const self_type&);
#endif

    /// Accessor to raw memory as \a T.
    template <typename T>
    T*
    yyas_ () YY_NOEXCEPT
    {
      void *yyp = yybuffer_.yyraw;
      return static_cast<T*> (yyp);
     }

    /// Const accessor to raw memory as \a T.
    template <typename T>
    const T*
    yyas_ () const YY_NOEXCEPT
    {
      const void *yyp = yybuffer_.yyraw;
      return static_cast<const T*> (yyp);
     }

    /// An auxiliary type to compute the largest semantic type.
    union union_type
    {
      // anim
      char dummy1[sizeof (gsc::anim_ptr)];

      // animation
      char dummy2[sizeof (gsc::animation_ptr)];

      // animtree
      char dummy3[sizeof (gsc::animtree_ptr)];

      // block
      char dummy4[sizeof (gsc::block_ptr)];

      // constant
      char dummy5[sizeof (gsc::constant_ptr)];

      // define
      char dummy6[sizeof (gsc::define_ptr)];

      // empty_array
      char dummy7[sizeof (gsc::empty_array_ptr)];

      // expr_arguments
      char dummy8[sizeof (gsc::expr_arguments_ptr)];

      // expr_assign
      char dummy9[sizeof (gsc::expr_assign_ptr)];

      // expr_call
      // expr_call_thread
      // expr_call_childthread
      char dummy10[sizeof (gsc::expr_call_ptr)];

      // expr_call_function
      // expr_call_pointer
      char dummy11[sizeof (gsc::expr_call_type_ptr)];

      // for_stmt
      // for_expr
      // expr
      // expr_compare
      // expr_binary
      // expr_primitive
      char dummy12[sizeof (gsc::expr_ptr)];

      // false
      char dummy13[sizeof (gsc::false_ptr)];

      // file
      char dummy14[sizeof (gsc::file_ptr)];

      // neg_float
      // float
      char dummy15[sizeof (gsc::float_ptr)];

      // game
      char dummy16[sizeof (gsc::game_ptr)];

      // include
      char dummy17[sizeof (gsc::include_ptr)];

      // neg_integer
      // integer
      char dummy18[sizeof (gsc::integer_ptr)];

      // istring
      char dummy19[sizeof (gsc::istring_ptr)];

      // level
      char dummy20[sizeof (gsc::level_ptr)];

      // name
      char dummy21[sizeof (gsc::name_ptr)];

      // expr_function
      // expr_add_array
      // expr_array
      // expr_field
      // expr_size
      // object
      char dummy22[sizeof (gsc::node_ptr)];

      // parameters
      char dummy23[sizeof (gsc::parameters_ptr)];

      // program
      char dummy24[sizeof (gsc::program_ptr)];

      // self
      char dummy25[sizeof (gsc::self_ptr)];

      // stmt_assign
      char dummy26[sizeof (gsc::stmt_assign_ptr)];

      // stmt_break
      char dummy27[sizeof (gsc::stmt_break_ptr)];

      // stmt_call
      char dummy28[sizeof (gsc::stmt_call_ptr)];

      // stmt_case
      char dummy29[sizeof (gsc::stmt_case_ptr)];

      // stmt_continue
      char dummy30[sizeof (gsc::stmt_continue_ptr)];

      // stmt_default
      char dummy31[sizeof (gsc::stmt_default_ptr)];

      // stmt_endon
      char dummy32[sizeof (gsc::stmt_endon_ptr)];

      // stmt_for
      char dummy33[sizeof (gsc::stmt_for_ptr)];

      // stmt_foreach
      char dummy34[sizeof (gsc::stmt_foreach_ptr)];

      // stmt_if
      char dummy35[sizeof (gsc::stmt_if_ptr)];

      // stmt_ifelse
      char dummy36[sizeof (gsc::stmt_ifelse_ptr)];

      // stmt_notify
      char dummy37[sizeof (gsc::stmt_notify_ptr)];

      // stmt
      char dummy38[sizeof (gsc::stmt_ptr)];

      // stmt_return
      char dummy39[sizeof (gsc::stmt_return_ptr)];

      // stmt_switch
      char dummy40[sizeof (gsc::stmt_switch_ptr)];

      // stmt_wait
      char dummy41[sizeof (gsc::stmt_wait_ptr)];

      // stmt_waittill
      char dummy42[sizeof (gsc::stmt_waittill_ptr)];

      // stmt_waittillframeend
      char dummy43[sizeof (gsc::stmt_waittillframeend_ptr)];

      // stmt_waittillmatch
      char dummy44[sizeof (gsc::stmt_waittillmatch_ptr)];

      // stmt_while
      char dummy45[sizeof (gsc::stmt_while_ptr)];

      // string
      char dummy46[sizeof (gsc::string_ptr)];

      // thisthread
      char dummy47[sizeof (gsc::thisthread_ptr)];

      // thread
      char dummy48[sizeof (gsc::thread_ptr)];

      // true
      char dummy49[sizeof (gsc::true_ptr)];

      // undefined
      char dummy50[sizeof (gsc::undefined_ptr)];

      // usingtree
      char dummy51[sizeof (gsc::usingtree_ptr)];

      // vector
      char dummy52[sizeof (gsc::vector_ptr)];

      // FILE
      // NAME
      // STRING
      // ISTRING
      // FLOAT
      // INTEGER
      char dummy53[sizeof (std::string)];
    };

    /// The size of the largest semantic type.
    enum { size = sizeof (union_type) };

    /// A buffer to store semantic values.
    union
    {
      /// Strongest alignment constraints.
      long double yyalign_me;
      /// A buffer large enough to store any of the semantic values.
      char yyraw[size];
    } yybuffer_;

    /// Whether the content is built: if defined, the name of the stored type.
    const std::type_info *yytypeid_;
  };

#else
    typedef S1STYPE semantic_type;
#endif
    /// Symbol locations.
    typedef gsc::location location_type;

    /// Syntax errors thrown from user actions.
    struct syntax_error : std::runtime_error
    {
      syntax_error (const location_type& l, const std::string& m)
        : std::runtime_error (m)
        , location (l)
      {}

      syntax_error (const syntax_error& s)
        : std::runtime_error (s.what ())
        , location (s.location)
      {}

      ~syntax_error () YY_NOEXCEPT YY_NOTHROW;

      location_type location;
    };

    /// Token kinds.
    struct token
    {
      enum token_kind_type
      {
        S1EMPTY = -2,
    S1EOF = 0,                     // "end of file"
    S1error = 1,                   // error
    S1UNDEF = 2,                   // "invalid token"
    INCLUDE = 3,                   // INCLUDE
    USINGTREE = 4,                 // USINGTREE
    ANIMTREE = 5,                  // ANIMTREE
    ENDON = 6,                     // ENDON
    NOTIFY = 7,                    // NOTIFY
    WAIT = 8,                      // WAIT
    WAITTILL = 9,                  // WAITTILL
    WAITTILLMATCH = 10,            // WAITTILLMATCH
    WAITTILLFRAMEEND = 11,         // WAITTILLFRAMEEND
    IF = 12,                       // IF
    ELSE = 13,                     // ELSE
    WHILE = 14,                    // WHILE
    FOR = 15,                      // FOR
    FOREACH = 16,                  // FOREACH
    IN = 17,                       // IN
    SWITCH = 18,                   // SWITCH
    CASE = 19,                     // CASE
    DEFAULT = 20,                  // DEFAULT
    BREAK = 21,                    // BREAK
    CONTINUE = 22,                 // CONTINUE
    RETURN = 23,                   // RETURN
    THREAD = 24,                   // THREAD
    CHILDTHREAD = 25,              // CHILDTHREAD
    THISTHREAD = 26,               // THISTHREAD
    CALL = 27,                     // CALL
    TRUE = 28,                     // TRUE
    FALSE = 29,                    // FALSE
    UNDEFINED = 30,                // UNDEFINED
    SIZE = 31,                     // SIZE
    GAME = 32,                     // GAME
    SELF = 33,                     // SELF
    ANIM = 34,                     // ANIM
    LEVEL = 35,                    // LEVEL
    EMPTY_ARRAY = 36,              // EMPTY_ARRAY
    LPAREN = 37,                   // LPAREN
    RPAREN = 38,                   // RPAREN
    LBRACE = 39,                   // LBRACE
    RBRACE = 40,                   // RBRACE
    LBRACKET = 41,                 // LBRACKET
    RBRACKET = 42,                 // RBRACKET
    COMMA = 43,                    // COMMA
    DOT = 44,                      // DOT
    DOUBLECOLON = 45,              // DOUBLECOLON
    COLON = 46,                    // COLON
    SEMICOLON = 47,                // SEMICOLON
    INCREMENT = 48,                // INCREMENT
    DECREMENT = 49,                // DECREMENT
    MOD = 50,                      // MOD
    LSHIFT = 51,                   // LSHIFT
    RSHIFT = 52,                   // RSHIFT
    OR = 53,                       // OR
    AND = 54,                      // AND
    EQUALITY = 55,                 // EQUALITY
    INEQUALITY = 56,               // INEQUALITY
    LESS_EQUAL = 57,               // LESS_EQUAL
    GREATER_EQUAL = 58,            // GREATER_EQUAL
    LESS = 59,                     // LESS
    GREATER = 60,                  // GREATER
    NOT = 61,                      // NOT
    COMPLEMENT = 62,               // COMPLEMENT
    ASSIGN_RSHIFT = 63,            // ASSIGN_RSHIFT
    ASSIGN = 64,                   // ASSIGN
    ASSIGN_ADD = 65,               // ASSIGN_ADD
    ASSIGN_SUB = 66,               // ASSIGN_SUB
    ASSIGN_MULT = 67,              // ASSIGN_MULT
    ASSIGN_DIV = 68,               // ASSIGN_DIV
    ASSIGN_MOD = 69,               // ASSIGN_MOD
    ASSIGN_BITWISE_OR = 70,        // ASSIGN_BITWISE_OR
    ASSIGN_BITWISE_AND = 71,       // ASSIGN_BITWISE_AND
    ASSIGN_BITWISE_EXOR = 72,      // ASSIGN_BITWISE_EXOR
    ASSIGN_LSHIFT = 73,            // ASSIGN_LSHIFT
    BITWISE_OR = 74,               // BITWISE_OR
    BITWISE_AND = 75,              // BITWISE_AND
    BITWISE_EXOR = 76,             // BITWISE_EXOR
    ADD = 77,                      // ADD
    SUB = 78,                      // SUB
    MULT = 79,                     // MULT
    DIV = 80,                      // DIV
    FILE = 81,                     // FILE
    NAME = 82,                     // NAME
    STRING = 83,                   // STRING
    ISTRING = 84,                  // ISTRING
    FLOAT = 85,                    // FLOAT
    INTEGER = 86,                  // INTEGER
    NEG = 87,                      // NEG
    ANIMREF = 88,                  // ANIMREF
    PREINC = 89,                   // PREINC
    PREDEC = 90,                   // PREDEC
    POSTINC = 91,                  // POSTINC
    POSTDEC = 92                   // POSTDEC
      };
      /// Backward compatibility alias (Bison 3.6).
      typedef token_kind_type yytokentype;
    };

    /// Token kind, as returned by yylex.
    typedef token::yytokentype token_kind_type;

    /// Backward compatibility alias (Bison 3.6).
    typedef token_kind_type token_type;

    /// Symbol kinds.
    struct symbol_kind
    {
      enum symbol_kind_type
      {
        YYNTOKENS = 93, ///< Number of tokens.
        S_YYEMPTY = -2,
        S_YYEOF = 0,                             // "end of file"
        S_YYerror = 1,                           // error
        S_YYUNDEF = 2,                           // "invalid token"
        S_INCLUDE = 3,                           // INCLUDE
        S_USINGTREE = 4,                         // USINGTREE
        S_ANIMTREE = 5,                          // ANIMTREE
        S_ENDON = 6,                             // ENDON
        S_NOTIFY = 7,                            // NOTIFY
        S_WAIT = 8,                              // WAIT
        S_WAITTILL = 9,                          // WAITTILL
        S_WAITTILLMATCH = 10,                    // WAITTILLMATCH
        S_WAITTILLFRAMEEND = 11,                 // WAITTILLFRAMEEND
        S_IF = 12,                               // IF
        S_ELSE = 13,                             // ELSE
        S_WHILE = 14,                            // WHILE
        S_FOR = 15,                              // FOR
        S_FOREACH = 16,                          // FOREACH
        S_IN = 17,                               // IN
        S_SWITCH = 18,                           // SWITCH
        S_CASE = 19,                             // CASE
        S_DEFAULT = 20,                          // DEFAULT
        S_BREAK = 21,                            // BREAK
        S_CONTINUE = 22,                         // CONTINUE
        S_RETURN = 23,                           // RETURN
        S_THREAD = 24,                           // THREAD
        S_CHILDTHREAD = 25,                      // CHILDTHREAD
        S_THISTHREAD = 26,                       // THISTHREAD
        S_CALL = 27,                             // CALL
        S_TRUE = 28,                             // TRUE
        S_FALSE = 29,                            // FALSE
        S_UNDEFINED = 30,                        // UNDEFINED
        S_SIZE = 31,                             // SIZE
        S_GAME = 32,                             // GAME
        S_SELF = 33,                             // SELF
        S_ANIM = 34,                             // ANIM
        S_LEVEL = 35,                            // LEVEL
        S_EMPTY_ARRAY = 36,                      // EMPTY_ARRAY
        S_LPAREN = 37,                           // LPAREN
        S_RPAREN = 38,                           // RPAREN
        S_LBRACE = 39,                           // LBRACE
        S_RBRACE = 40,                           // RBRACE
        S_LBRACKET = 41,                         // LBRACKET
        S_RBRACKET = 42,                         // RBRACKET
        S_COMMA = 43,                            // COMMA
        S_DOT = 44,                              // DOT
        S_DOUBLECOLON = 45,                      // DOUBLECOLON
        S_COLON = 46,                            // COLON
        S_SEMICOLON = 47,                        // SEMICOLON
        S_INCREMENT = 48,                        // INCREMENT
        S_DECREMENT = 49,                        // DECREMENT
        S_MOD = 50,                              // MOD
        S_LSHIFT = 51,                           // LSHIFT
        S_RSHIFT = 52,                           // RSHIFT
        S_OR = 53,                               // OR
        S_AND = 54,                              // AND
        S_EQUALITY = 55,                         // EQUALITY
        S_INEQUALITY = 56,                       // INEQUALITY
        S_LESS_EQUAL = 57,                       // LESS_EQUAL
        S_GREATER_EQUAL = 58,                    // GREATER_EQUAL
        S_LESS = 59,                             // LESS
        S_GREATER = 60,                          // GREATER
        S_NOT = 61,                              // NOT
        S_COMPLEMENT = 62,                       // COMPLEMENT
        S_ASSIGN_RSHIFT = 63,                    // ASSIGN_RSHIFT
        S_ASSIGN = 64,                           // ASSIGN
        S_ASSIGN_ADD = 65,                       // ASSIGN_ADD
        S_ASSIGN_SUB = 66,                       // ASSIGN_SUB
        S_ASSIGN_MULT = 67,                      // ASSIGN_MULT
        S_ASSIGN_DIV = 68,                       // ASSIGN_DIV
        S_ASSIGN_MOD = 69,                       // ASSIGN_MOD
        S_ASSIGN_BITWISE_OR = 70,                // ASSIGN_BITWISE_OR
        S_ASSIGN_BITWISE_AND = 71,               // ASSIGN_BITWISE_AND
        S_ASSIGN_BITWISE_EXOR = 72,              // ASSIGN_BITWISE_EXOR
        S_ASSIGN_LSHIFT = 73,                    // ASSIGN_LSHIFT
        S_BITWISE_OR = 74,                       // BITWISE_OR
        S_BITWISE_AND = 75,                      // BITWISE_AND
        S_BITWISE_EXOR = 76,                     // BITWISE_EXOR
        S_ADD = 77,                              // ADD
        S_SUB = 78,                              // SUB
        S_MULT = 79,                             // MULT
        S_DIV = 80,                              // DIV
        S_FILE = 81,                             // FILE
        S_NAME = 82,                             // NAME
        S_STRING = 83,                           // STRING
        S_ISTRING = 84,                          // ISTRING
        S_FLOAT = 85,                            // FLOAT
        S_INTEGER = 86,                          // INTEGER
        S_NEG = 87,                              // NEG
        S_ANIMREF = 88,                          // ANIMREF
        S_PREINC = 89,                           // PREINC
        S_PREDEC = 90,                           // PREDEC
        S_POSTINC = 91,                          // POSTINC
        S_POSTDEC = 92,                          // POSTDEC
        S_YYACCEPT = 93,                         // $accept
        S_root = 94,                             // root
        S_program = 95,                          // program
        S_include = 96,                          // include
        S_define = 97,                           // define
        S_usingtree = 98,                        // usingtree
        S_constant = 99,                         // constant
        S_thread = 100,                          // thread
        S_parameters = 101,                      // parameters
        S_block = 102,                           // block
        S_stmt = 103,                            // stmt
        S_stmt_call = 104,                       // stmt_call
        S_stmt_assign = 105,                     // stmt_assign
        S_stmt_endon = 106,                      // stmt_endon
        S_stmt_notify = 107,                     // stmt_notify
        S_stmt_wait = 108,                       // stmt_wait
        S_stmt_waittill = 109,                   // stmt_waittill
        S_stmt_waittillmatch = 110,              // stmt_waittillmatch
        S_stmt_waittillframeend = 111,           // stmt_waittillframeend
        S_stmt_if = 112,                         // stmt_if
        S_stmt_ifelse = 113,                     // stmt_ifelse
        S_stmt_while = 114,                      // stmt_while
        S_stmt_for = 115,                        // stmt_for
        S_stmt_foreach = 116,                    // stmt_foreach
        S_stmt_switch = 117,                     // stmt_switch
        S_stmt_case = 118,                       // stmt_case
        S_stmt_default = 119,                    // stmt_default
        S_stmt_break = 120,                      // stmt_break
        S_stmt_continue = 121,                   // stmt_continue
        S_stmt_return = 122,                     // stmt_return
        S_for_stmt = 123,                        // for_stmt
        S_for_expr = 124,                        // for_expr
        S_expr = 125,                            // expr
        S_expr_assign = 126,                     // expr_assign
        S_expr_compare = 127,                    // expr_compare
        S_expr_binary = 128,                     // expr_binary
        S_expr_primitive = 129,                  // expr_primitive
        S_expr_call = 130,                       // expr_call
        S_expr_call_thread = 131,                // expr_call_thread
        S_expr_call_childthread = 132,           // expr_call_childthread
        S_expr_call_function = 133,              // expr_call_function
        S_expr_call_pointer = 134,               // expr_call_pointer
        S_expr_arguments = 135,                  // expr_arguments
        S_expr_function = 136,                   // expr_function
        S_expr_add_array = 137,                  // expr_add_array
        S_expr_array = 138,                      // expr_array
        S_expr_field = 139,                      // expr_field
        S_expr_size = 140,                       // expr_size
        S_object = 141,                          // object
        S_thisthread = 142,                      // thisthread
        S_empty_array = 143,                     // empty_array
        S_undefined = 144,                       // undefined
        S_game = 145,                            // game
        S_self = 146,                            // self
        S_anim = 147,                            // anim
        S_level = 148,                           // level
        S_animation = 149,                       // animation
        S_animtree = 150,                        // animtree
        S_name = 151,                            // name
        S_file = 152,                            // file
        S_istring = 153,                         // istring
        S_string = 154,                          // string
        S_vector = 155,                          // vector
        S_neg_float = 156,                       // neg_float
        S_neg_integer = 157,                     // neg_integer
        S_float = 158,                           // float
        S_integer = 159,                         // integer
        S_false = 160,                           // false
        S_true = 161                             // true
      };
    };

    /// (Internal) symbol kind.
    typedef symbol_kind::symbol_kind_type symbol_kind_type;

    /// The number of tokens.
    static const symbol_kind_type YYNTOKENS = symbol_kind::YYNTOKENS;

    /// A complete symbol.
    ///
    /// Expects its Base type to provide access to the symbol kind
    /// via kind ().
    ///
    /// Provide access to semantic value and location.
    template <typename Base>
    struct basic_symbol : Base
    {
      /// Alias to Base.
      typedef Base super_type;

      /// Default constructor.
      basic_symbol ()
        : value ()
        , location ()
      {}

#if 201103L <= YY_CPLUSPLUS
      /// Move constructor.
      basic_symbol (basic_symbol&& that)
        : Base (std::move (that))
        , value ()
        , location (std::move (that.location))
      {
        switch (this->kind ())
    {
      case symbol_kind::S_anim: // anim
        value.move< gsc::anim_ptr > (std::move (that.value));
        break;

      case symbol_kind::S_animation: // animation
        value.move< gsc::animation_ptr > (std::move (that.value));
        break;

      case symbol_kind::S_animtree: // animtree
        value.move< gsc::animtree_ptr > (std::move (that.value));
        break;

      case symbol_kind::S_block: // block
        value.move< gsc::block_ptr > (std::move (that.value));
        break;

      case symbol_kind::S_constant: // constant
        value.move< gsc::constant_ptr > (std::move (that.value));
        break;

      case symbol_kind::S_define: // define
        value.move< gsc::define_ptr > (std::move (that.value));
        break;

      case symbol_kind::S_empty_array: // empty_array
        value.move< gsc::empty_array_ptr > (std::move (that.value));
        break;

      case symbol_kind::S_expr_arguments: // expr_arguments
        value.move< gsc::expr_arguments_ptr > (std::move (that.value));
        break;

      case symbol_kind::S_expr_assign: // expr_assign
        value.move< gsc::expr_assign_ptr > (std::move (that.value));
        break;

      case symbol_kind::S_expr_call: // expr_call
      case symbol_kind::S_expr_call_thread: // expr_call_thread
      case symbol_kind::S_expr_call_childthread: // expr_call_childthread
        value.move< gsc::expr_call_ptr > (std::move (that.value));
        break;

      case symbol_kind::S_expr_call_function: // expr_call_function
      case symbol_kind::S_expr_call_pointer: // expr_call_pointer
        value.move< gsc::expr_call_type_ptr > (std::move (that.value));
        break;

      case symbol_kind::S_for_stmt: // for_stmt
      case symbol_kind::S_for_expr: // for_expr
      case symbol_kind::S_expr: // expr
      case symbol_kind::S_expr_compare: // expr_compare
      case symbol_kind::S_expr_binary: // expr_binary
      case symbol_kind::S_expr_primitive: // expr_primitive
        value.move< gsc::expr_ptr > (std::move (that.value));
        break;

      case symbol_kind::S_false: // false
        value.move< gsc::false_ptr > (std::move (that.value));
        break;

      case symbol_kind::S_file: // file
        value.move< gsc::file_ptr > (std::move (that.value));
        break;

      case symbol_kind::S_neg_float: // neg_float
      case symbol_kind::S_float: // float
        value.move< gsc::float_ptr > (std::move (that.value));
        break;

      case symbol_kind::S_game: // game
        value.move< gsc::game_ptr > (std::move (that.value));
        break;

      case symbol_kind::S_include: // include
        value.move< gsc::include_ptr > (std::move (that.value));
        break;

      case symbol_kind::S_neg_integer: // neg_integer
      case symbol_kind::S_integer: // integer
        value.move< gsc::integer_ptr > (std::move (that.value));
        break;

      case symbol_kind::S_istring: // istring
        value.move< gsc::istring_ptr > (std::move (that.value));
        break;

      case symbol_kind::S_level: // level
        value.move< gsc::level_ptr > (std::move (that.value));
        break;

      case symbol_kind::S_name: // name
        value.move< gsc::name_ptr > (std::move (that.value));
        break;

      case symbol_kind::S_expr_function: // expr_function
      case symbol_kind::S_expr_add_array: // expr_add_array
      case symbol_kind::S_expr_array: // expr_array
      case symbol_kind::S_expr_field: // expr_field
      case symbol_kind::S_expr_size: // expr_size
      case symbol_kind::S_object: // object
        value.move< gsc::node_ptr > (std::move (that.value));
        break;

      case symbol_kind::S_parameters: // parameters
        value.move< gsc::parameters_ptr > (std::move (that.value));
        break;

      case symbol_kind::S_program: // program
        value.move< gsc::program_ptr > (std::move (that.value));
        break;

      case symbol_kind::S_self: // self
        value.move< gsc::self_ptr > (std::move (that.value));
        break;

      case symbol_kind::S_stmt_assign: // stmt_assign
        value.move< gsc::stmt_assign_ptr > (std::move (that.value));
        break;

      case symbol_kind::S_stmt_break: // stmt_break
        value.move< gsc::stmt_break_ptr > (std::move (that.value));
        break;

      case symbol_kind::S_stmt_call: // stmt_call
        value.move< gsc::stmt_call_ptr > (std::move (that.value));
        break;

      case symbol_kind::S_stmt_case: // stmt_case
        value.move< gsc::stmt_case_ptr > (std::move (that.value));
        break;

      case symbol_kind::S_stmt_continue: // stmt_continue
        value.move< gsc::stmt_continue_ptr > (std::move (that.value));
        break;

      case symbol_kind::S_stmt_default: // stmt_default
        value.move< gsc::stmt_default_ptr > (std::move (that.value));
        break;

      case symbol_kind::S_stmt_endon: // stmt_endon
        value.move< gsc::stmt_endon_ptr > (std::move (that.value));
        break;

      case symbol_kind::S_stmt_for: // stmt_for
        value.move< gsc::stmt_for_ptr > (std::move (that.value));
        break;

      case symbol_kind::S_stmt_foreach: // stmt_foreach
        value.move< gsc::stmt_foreach_ptr > (std::move (that.value));
        break;

      case symbol_kind::S_stmt_if: // stmt_if
        value.move< gsc::stmt_if_ptr > (std::move (that.value));
        break;

      case symbol_kind::S_stmt_ifelse: // stmt_ifelse
        value.move< gsc::stmt_ifelse_ptr > (std::move (that.value));
        break;

      case symbol_kind::S_stmt_notify: // stmt_notify
        value.move< gsc::stmt_notify_ptr > (std::move (that.value));
        break;

      case symbol_kind::S_stmt: // stmt
        value.move< gsc::stmt_ptr > (std::move (that.value));
        break;

      case symbol_kind::S_stmt_return: // stmt_return
        value.move< gsc::stmt_return_ptr > (std::move (that.value));
        break;

      case symbol_kind::S_stmt_switch: // stmt_switch
        value.move< gsc::stmt_switch_ptr > (std::move (that.value));
        break;

      case symbol_kind::S_stmt_wait: // stmt_wait
        value.move< gsc::stmt_wait_ptr > (std::move (that.value));
        break;

      case symbol_kind::S_stmt_waittill: // stmt_waittill
        value.move< gsc::stmt_waittill_ptr > (std::move (that.value));
        break;

      case symbol_kind::S_stmt_waittillframeend: // stmt_waittillframeend
        value.move< gsc::stmt_waittillframeend_ptr > (std::move (that.value));
        break;

      case symbol_kind::S_stmt_waittillmatch: // stmt_waittillmatch
        value.move< gsc::stmt_waittillmatch_ptr > (std::move (that.value));
        break;

      case symbol_kind::S_stmt_while: // stmt_while
        value.move< gsc::stmt_while_ptr > (std::move (that.value));
        break;

      case symbol_kind::S_string: // string
        value.move< gsc::string_ptr > (std::move (that.value));
        break;

      case symbol_kind::S_thisthread: // thisthread
        value.move< gsc::thisthread_ptr > (std::move (that.value));
        break;

      case symbol_kind::S_thread: // thread
        value.move< gsc::thread_ptr > (std::move (that.value));
        break;

      case symbol_kind::S_true: // true
        value.move< gsc::true_ptr > (std::move (that.value));
        break;

      case symbol_kind::S_undefined: // undefined
        value.move< gsc::undefined_ptr > (std::move (that.value));
        break;

      case symbol_kind::S_usingtree: // usingtree
        value.move< gsc::usingtree_ptr > (std::move (that.value));
        break;

      case symbol_kind::S_vector: // vector
        value.move< gsc::vector_ptr > (std::move (that.value));
        break;

      case symbol_kind::S_FILE: // FILE
      case symbol_kind::S_NAME: // NAME
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_ISTRING: // ISTRING
      case symbol_kind::S_FLOAT: // FLOAT
      case symbol_kind::S_INTEGER: // INTEGER
        value.move< std::string > (std::move (that.value));
        break;

      default:
        break;
    }

      }
#endif

      /// Copy constructor.
      basic_symbol (const basic_symbol& that);

      /// Constructor for valueless symbols, and symbols from each type.
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, location_type&& l)
        : Base (t)
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const location_type& l)
        : Base (t)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, gsc::anim_ptr&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const gsc::anim_ptr& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, gsc::animation_ptr&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const gsc::animation_ptr& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, gsc::animtree_ptr&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const gsc::animtree_ptr& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, gsc::block_ptr&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const gsc::block_ptr& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, gsc::constant_ptr&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const gsc::constant_ptr& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, gsc::define_ptr&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const gsc::define_ptr& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, gsc::empty_array_ptr&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const gsc::empty_array_ptr& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, gsc::expr_arguments_ptr&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const gsc::expr_arguments_ptr& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, gsc::expr_assign_ptr&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const gsc::expr_assign_ptr& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, gsc::expr_call_ptr&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const gsc::expr_call_ptr& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, gsc::expr_call_type_ptr&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const gsc::expr_call_type_ptr& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, gsc::expr_ptr&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const gsc::expr_ptr& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, gsc::false_ptr&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const gsc::false_ptr& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, gsc::file_ptr&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const gsc::file_ptr& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, gsc::float_ptr&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const gsc::float_ptr& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, gsc::game_ptr&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const gsc::game_ptr& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, gsc::include_ptr&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const gsc::include_ptr& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, gsc::integer_ptr&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const gsc::integer_ptr& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, gsc::istring_ptr&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const gsc::istring_ptr& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, gsc::level_ptr&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const gsc::level_ptr& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, gsc::name_ptr&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const gsc::name_ptr& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, gsc::node_ptr&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const gsc::node_ptr& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, gsc::parameters_ptr&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const gsc::parameters_ptr& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, gsc::program_ptr&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const gsc::program_ptr& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, gsc::self_ptr&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const gsc::self_ptr& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, gsc::stmt_assign_ptr&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const gsc::stmt_assign_ptr& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, gsc::stmt_break_ptr&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const gsc::stmt_break_ptr& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, gsc::stmt_call_ptr&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const gsc::stmt_call_ptr& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, gsc::stmt_case_ptr&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const gsc::stmt_case_ptr& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, gsc::stmt_continue_ptr&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const gsc::stmt_continue_ptr& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, gsc::stmt_default_ptr&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const gsc::stmt_default_ptr& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, gsc::stmt_endon_ptr&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const gsc::stmt_endon_ptr& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, gsc::stmt_for_ptr&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const gsc::stmt_for_ptr& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, gsc::stmt_foreach_ptr&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const gsc::stmt_foreach_ptr& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, gsc::stmt_if_ptr&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const gsc::stmt_if_ptr& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, gsc::stmt_ifelse_ptr&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const gsc::stmt_ifelse_ptr& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, gsc::stmt_notify_ptr&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const gsc::stmt_notify_ptr& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, gsc::stmt_ptr&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const gsc::stmt_ptr& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, gsc::stmt_return_ptr&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const gsc::stmt_return_ptr& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, gsc::stmt_switch_ptr&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const gsc::stmt_switch_ptr& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, gsc::stmt_wait_ptr&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const gsc::stmt_wait_ptr& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, gsc::stmt_waittill_ptr&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const gsc::stmt_waittill_ptr& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, gsc::stmt_waittillframeend_ptr&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const gsc::stmt_waittillframeend_ptr& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, gsc::stmt_waittillmatch_ptr&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const gsc::stmt_waittillmatch_ptr& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, gsc::stmt_while_ptr&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const gsc::stmt_while_ptr& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, gsc::string_ptr&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const gsc::string_ptr& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, gsc::thisthread_ptr&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const gsc::thisthread_ptr& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, gsc::thread_ptr&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const gsc::thread_ptr& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, gsc::true_ptr&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const gsc::true_ptr& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, gsc::undefined_ptr&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const gsc::undefined_ptr& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, gsc::usingtree_ptr&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const gsc::usingtree_ptr& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, gsc::vector_ptr&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const gsc::vector_ptr& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif
#if 201103L <= YY_CPLUSPLUS
      basic_symbol (typename Base::kind_type t, std::string&& v, location_type&& l)
        : Base (t)
        , value (std::move (v))
        , location (std::move (l))
      {}
#else
      basic_symbol (typename Base::kind_type t, const std::string& v, const location_type& l)
        : Base (t)
        , value (v)
        , location (l)
      {}
#endif

      /// Destroy the symbol.
      ~basic_symbol ()
      {
        clear ();
      }

      /// Destroy contents, and record that is empty.
      void clear ()
      {
        // User destructor.
        symbol_kind_type yykind = this->kind ();
        basic_symbol<Base>& yysym = *this;
        (void) yysym;
        switch (yykind)
        {
       default:
          break;
        }

        // Value type destructor.
switch (yykind)
    {
      case symbol_kind::S_anim: // anim
        value.template destroy< gsc::anim_ptr > ();
        break;

      case symbol_kind::S_animation: // animation
        value.template destroy< gsc::animation_ptr > ();
        break;

      case symbol_kind::S_animtree: // animtree
        value.template destroy< gsc::animtree_ptr > ();
        break;

      case symbol_kind::S_block: // block
        value.template destroy< gsc::block_ptr > ();
        break;

      case symbol_kind::S_constant: // constant
        value.template destroy< gsc::constant_ptr > ();
        break;

      case symbol_kind::S_define: // define
        value.template destroy< gsc::define_ptr > ();
        break;

      case symbol_kind::S_empty_array: // empty_array
        value.template destroy< gsc::empty_array_ptr > ();
        break;

      case symbol_kind::S_expr_arguments: // expr_arguments
        value.template destroy< gsc::expr_arguments_ptr > ();
        break;

      case symbol_kind::S_expr_assign: // expr_assign
        value.template destroy< gsc::expr_assign_ptr > ();
        break;

      case symbol_kind::S_expr_call: // expr_call
      case symbol_kind::S_expr_call_thread: // expr_call_thread
      case symbol_kind::S_expr_call_childthread: // expr_call_childthread
        value.template destroy< gsc::expr_call_ptr > ();
        break;

      case symbol_kind::S_expr_call_function: // expr_call_function
      case symbol_kind::S_expr_call_pointer: // expr_call_pointer
        value.template destroy< gsc::expr_call_type_ptr > ();
        break;

      case symbol_kind::S_for_stmt: // for_stmt
      case symbol_kind::S_for_expr: // for_expr
      case symbol_kind::S_expr: // expr
      case symbol_kind::S_expr_compare: // expr_compare
      case symbol_kind::S_expr_binary: // expr_binary
      case symbol_kind::S_expr_primitive: // expr_primitive
        value.template destroy< gsc::expr_ptr > ();
        break;

      case symbol_kind::S_false: // false
        value.template destroy< gsc::false_ptr > ();
        break;

      case symbol_kind::S_file: // file
        value.template destroy< gsc::file_ptr > ();
        break;

      case symbol_kind::S_neg_float: // neg_float
      case symbol_kind::S_float: // float
        value.template destroy< gsc::float_ptr > ();
        break;

      case symbol_kind::S_game: // game
        value.template destroy< gsc::game_ptr > ();
        break;

      case symbol_kind::S_include: // include
        value.template destroy< gsc::include_ptr > ();
        break;

      case symbol_kind::S_neg_integer: // neg_integer
      case symbol_kind::S_integer: // integer
        value.template destroy< gsc::integer_ptr > ();
        break;

      case symbol_kind::S_istring: // istring
        value.template destroy< gsc::istring_ptr > ();
        break;

      case symbol_kind::S_level: // level
        value.template destroy< gsc::level_ptr > ();
        break;

      case symbol_kind::S_name: // name
        value.template destroy< gsc::name_ptr > ();
        break;

      case symbol_kind::S_expr_function: // expr_function
      case symbol_kind::S_expr_add_array: // expr_add_array
      case symbol_kind::S_expr_array: // expr_array
      case symbol_kind::S_expr_field: // expr_field
      case symbol_kind::S_expr_size: // expr_size
      case symbol_kind::S_object: // object
        value.template destroy< gsc::node_ptr > ();
        break;

      case symbol_kind::S_parameters: // parameters
        value.template destroy< gsc::parameters_ptr > ();
        break;

      case symbol_kind::S_program: // program
        value.template destroy< gsc::program_ptr > ();
        break;

      case symbol_kind::S_self: // self
        value.template destroy< gsc::self_ptr > ();
        break;

      case symbol_kind::S_stmt_assign: // stmt_assign
        value.template destroy< gsc::stmt_assign_ptr > ();
        break;

      case symbol_kind::S_stmt_break: // stmt_break
        value.template destroy< gsc::stmt_break_ptr > ();
        break;

      case symbol_kind::S_stmt_call: // stmt_call
        value.template destroy< gsc::stmt_call_ptr > ();
        break;

      case symbol_kind::S_stmt_case: // stmt_case
        value.template destroy< gsc::stmt_case_ptr > ();
        break;

      case symbol_kind::S_stmt_continue: // stmt_continue
        value.template destroy< gsc::stmt_continue_ptr > ();
        break;

      case symbol_kind::S_stmt_default: // stmt_default
        value.template destroy< gsc::stmt_default_ptr > ();
        break;

      case symbol_kind::S_stmt_endon: // stmt_endon
        value.template destroy< gsc::stmt_endon_ptr > ();
        break;

      case symbol_kind::S_stmt_for: // stmt_for
        value.template destroy< gsc::stmt_for_ptr > ();
        break;

      case symbol_kind::S_stmt_foreach: // stmt_foreach
        value.template destroy< gsc::stmt_foreach_ptr > ();
        break;

      case symbol_kind::S_stmt_if: // stmt_if
        value.template destroy< gsc::stmt_if_ptr > ();
        break;

      case symbol_kind::S_stmt_ifelse: // stmt_ifelse
        value.template destroy< gsc::stmt_ifelse_ptr > ();
        break;

      case symbol_kind::S_stmt_notify: // stmt_notify
        value.template destroy< gsc::stmt_notify_ptr > ();
        break;

      case symbol_kind::S_stmt: // stmt
        value.template destroy< gsc::stmt_ptr > ();
        break;

      case symbol_kind::S_stmt_return: // stmt_return
        value.template destroy< gsc::stmt_return_ptr > ();
        break;

      case symbol_kind::S_stmt_switch: // stmt_switch
        value.template destroy< gsc::stmt_switch_ptr > ();
        break;

      case symbol_kind::S_stmt_wait: // stmt_wait
        value.template destroy< gsc::stmt_wait_ptr > ();
        break;

      case symbol_kind::S_stmt_waittill: // stmt_waittill
        value.template destroy< gsc::stmt_waittill_ptr > ();
        break;

      case symbol_kind::S_stmt_waittillframeend: // stmt_waittillframeend
        value.template destroy< gsc::stmt_waittillframeend_ptr > ();
        break;

      case symbol_kind::S_stmt_waittillmatch: // stmt_waittillmatch
        value.template destroy< gsc::stmt_waittillmatch_ptr > ();
        break;

      case symbol_kind::S_stmt_while: // stmt_while
        value.template destroy< gsc::stmt_while_ptr > ();
        break;

      case symbol_kind::S_string: // string
        value.template destroy< gsc::string_ptr > ();
        break;

      case symbol_kind::S_thisthread: // thisthread
        value.template destroy< gsc::thisthread_ptr > ();
        break;

      case symbol_kind::S_thread: // thread
        value.template destroy< gsc::thread_ptr > ();
        break;

      case symbol_kind::S_true: // true
        value.template destroy< gsc::true_ptr > ();
        break;

      case symbol_kind::S_undefined: // undefined
        value.template destroy< gsc::undefined_ptr > ();
        break;

      case symbol_kind::S_usingtree: // usingtree
        value.template destroy< gsc::usingtree_ptr > ();
        break;

      case symbol_kind::S_vector: // vector
        value.template destroy< gsc::vector_ptr > ();
        break;

      case symbol_kind::S_FILE: // FILE
      case symbol_kind::S_NAME: // NAME
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_ISTRING: // ISTRING
      case symbol_kind::S_FLOAT: // FLOAT
      case symbol_kind::S_INTEGER: // INTEGER
        value.template destroy< std::string > ();
        break;

      default:
        break;
    }

        Base::clear ();
      }

      /// The user-facing name of this symbol.
      const char *name () const YY_NOEXCEPT
      {
        return parser::symbol_name (this->kind ());
      }

      /// Backward compatibility (Bison 3.6).
      symbol_kind_type type_get () const YY_NOEXCEPT;

      /// Whether empty.
      bool empty () const YY_NOEXCEPT;

      /// Destructive move, \a s is emptied into this.
      void move (basic_symbol& s);

      /// The semantic value.
      semantic_type value;

      /// The location.
      location_type location;

    private:
#if YY_CPLUSPLUS < 201103L
      /// Assignment operator.
      basic_symbol& operator= (const basic_symbol& that);
#endif
    };

    /// Type access provider for token (enum) based symbols.
    struct by_kind
    {
      /// Default constructor.
      by_kind ();

#if 201103L <= YY_CPLUSPLUS
      /// Move constructor.
      by_kind (by_kind&& that);
#endif

      /// Copy constructor.
      by_kind (const by_kind& that);

      /// The symbol kind as needed by the constructor.
      typedef token_kind_type kind_type;

      /// Constructor from (external) token numbers.
      by_kind (kind_type t);

      /// Record that this symbol is empty.
      void clear ();

      /// Steal the symbol kind from \a that.
      void move (by_kind& that);

      /// The (internal) type number (corresponding to \a type).
      /// \a empty when empty.
      symbol_kind_type kind () const YY_NOEXCEPT;

      /// Backward compatibility (Bison 3.6).
      symbol_kind_type type_get () const YY_NOEXCEPT;

      /// The symbol kind.
      /// \a S_YYEMPTY when empty.
      symbol_kind_type kind_;
    };

    /// Backward compatibility for a private implementation detail (Bison 3.6).
    typedef by_kind by_type;

    /// "External" symbols: returned by the scanner.
    struct symbol_type : basic_symbol<by_kind>
    {
      /// Superclass.
      typedef basic_symbol<by_kind> super_type;

      /// Empty symbol.
      symbol_type () {}

      /// Constructor for valueless symbols, and symbols from each type.
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, location_type l)
        : super_type(token_type (tok), std::move (l))
      {
        YY_ASSERT (tok == token::S1EOF || tok == token::S1error || tok == token::S1UNDEF || tok == token::INCLUDE || tok == token::USINGTREE || tok == token::ANIMTREE || tok == token::ENDON || tok == token::NOTIFY || tok == token::WAIT || tok == token::WAITTILL || tok == token::WAITTILLMATCH || tok == token::WAITTILLFRAMEEND || tok == token::IF || tok == token::ELSE || tok == token::WHILE || tok == token::FOR || tok == token::FOREACH || tok == token::IN || tok == token::SWITCH || tok == token::CASE || tok == token::DEFAULT || tok == token::BREAK || tok == token::CONTINUE || tok == token::RETURN || tok == token::THREAD || tok == token::CHILDTHREAD || tok == token::THISTHREAD || tok == token::CALL || tok == token::TRUE || tok == token::FALSE || tok == token::UNDEFINED || tok == token::SIZE || tok == token::GAME || tok == token::SELF || tok == token::ANIM || tok == token::LEVEL || tok == token::EMPTY_ARRAY || tok == token::LPAREN || tok == token::RPAREN || tok == token::LBRACE || tok == token::RBRACE || tok == token::LBRACKET || tok == token::RBRACKET || tok == token::COMMA || tok == token::DOT || tok == token::DOUBLECOLON || tok == token::COLON || tok == token::SEMICOLON || tok == token::INCREMENT || tok == token::DECREMENT || tok == token::MOD || tok == token::LSHIFT || tok == token::RSHIFT || tok == token::OR || tok == token::AND || tok == token::EQUALITY || tok == token::INEQUALITY || tok == token::LESS_EQUAL || tok == token::GREATER_EQUAL || tok == token::LESS || tok == token::GREATER || tok == token::NOT || tok == token::COMPLEMENT || tok == token::ASSIGN_RSHIFT || tok == token::ASSIGN || tok == token::ASSIGN_ADD || tok == token::ASSIGN_SUB || tok == token::ASSIGN_MULT || tok == token::ASSIGN_DIV || tok == token::ASSIGN_MOD || tok == token::ASSIGN_BITWISE_OR || tok == token::ASSIGN_BITWISE_AND || tok == token::ASSIGN_BITWISE_EXOR || tok == token::ASSIGN_LSHIFT || tok == token::BITWISE_OR || tok == token::BITWISE_AND || tok == token::BITWISE_EXOR || tok == token::ADD || tok == token::SUB || tok == token::MULT || tok == token::DIV || tok == token::NEG || tok == token::ANIMREF || tok == token::PREINC || tok == token::PREDEC || tok == token::POSTINC || tok == token::POSTDEC);
      }
#else
      symbol_type (int tok, const location_type& l)
        : super_type(token_type (tok), l)
      {
        YY_ASSERT (tok == token::S1EOF || tok == token::S1error || tok == token::S1UNDEF || tok == token::INCLUDE || tok == token::USINGTREE || tok == token::ANIMTREE || tok == token::ENDON || tok == token::NOTIFY || tok == token::WAIT || tok == token::WAITTILL || tok == token::WAITTILLMATCH || tok == token::WAITTILLFRAMEEND || tok == token::IF || tok == token::ELSE || tok == token::WHILE || tok == token::FOR || tok == token::FOREACH || tok == token::IN || tok == token::SWITCH || tok == token::CASE || tok == token::DEFAULT || tok == token::BREAK || tok == token::CONTINUE || tok == token::RETURN || tok == token::THREAD || tok == token::CHILDTHREAD || tok == token::THISTHREAD || tok == token::CALL || tok == token::TRUE || tok == token::FALSE || tok == token::UNDEFINED || tok == token::SIZE || tok == token::GAME || tok == token::SELF || tok == token::ANIM || tok == token::LEVEL || tok == token::EMPTY_ARRAY || tok == token::LPAREN || tok == token::RPAREN || tok == token::LBRACE || tok == token::RBRACE || tok == token::LBRACKET || tok == token::RBRACKET || tok == token::COMMA || tok == token::DOT || tok == token::DOUBLECOLON || tok == token::COLON || tok == token::SEMICOLON || tok == token::INCREMENT || tok == token::DECREMENT || tok == token::MOD || tok == token::LSHIFT || tok == token::RSHIFT || tok == token::OR || tok == token::AND || tok == token::EQUALITY || tok == token::INEQUALITY || tok == token::LESS_EQUAL || tok == token::GREATER_EQUAL || tok == token::LESS || tok == token::GREATER || tok == token::NOT || tok == token::COMPLEMENT || tok == token::ASSIGN_RSHIFT || tok == token::ASSIGN || tok == token::ASSIGN_ADD || tok == token::ASSIGN_SUB || tok == token::ASSIGN_MULT || tok == token::ASSIGN_DIV || tok == token::ASSIGN_MOD || tok == token::ASSIGN_BITWISE_OR || tok == token::ASSIGN_BITWISE_AND || tok == token::ASSIGN_BITWISE_EXOR || tok == token::ASSIGN_LSHIFT || tok == token::BITWISE_OR || tok == token::BITWISE_AND || tok == token::BITWISE_EXOR || tok == token::ADD || tok == token::SUB || tok == token::MULT || tok == token::DIV || tok == token::NEG || tok == token::ANIMREF || tok == token::PREINC || tok == token::PREDEC || tok == token::POSTINC || tok == token::POSTDEC);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      symbol_type (int tok, std::string v, location_type l)
        : super_type(token_type (tok), std::move (v), std::move (l))
      {
        YY_ASSERT (tok == token::FILE || tok == token::NAME || tok == token::STRING || tok == token::ISTRING || tok == token::FLOAT || tok == token::INTEGER);
      }
#else
      symbol_type (int tok, const std::string& v, const location_type& l)
        : super_type(token_type (tok), v, l)
      {
        YY_ASSERT (tok == token::FILE || tok == token::NAME || tok == token::STRING || tok == token::ISTRING || tok == token::FLOAT || tok == token::INTEGER);
      }
#endif
    };

    /// Build a parser object.
    parser (yyscan_t yyscanner_yyarg, gsc::location& loc_yyarg, gsc::program_ptr& ast_yyarg);
    virtual ~parser ();

#if 201103L <= YY_CPLUSPLUS
    /// Non copyable.
    parser (const parser&) = delete;
    /// Non copyable.
    parser& operator= (const parser&) = delete;
#endif

    /// Parse.  An alias for parse ().
    /// \returns  0 iff parsing succeeded.
    int operator() ();

    /// Parse.
    /// \returns  0 iff parsing succeeded.
    virtual int parse ();

#if S1DEBUG
    /// The current debugging stream.
    std::ostream& debug_stream () const YY_ATTRIBUTE_PURE;
    /// Set the current debugging stream.
    void set_debug_stream (std::ostream &);

    /// Type for debugging levels.
    typedef int debug_level_type;
    /// The current debugging level.
    debug_level_type debug_level () const YY_ATTRIBUTE_PURE;
    /// Set the current debugging level.
    void set_debug_level (debug_level_type l);
#endif

    /// Report a syntax error.
    /// \param loc    where the syntax error is found.
    /// \param msg    a description of the syntax error.
    virtual void error (const location_type& loc, const std::string& msg);

    /// Report a syntax error.
    void error (const syntax_error& err);

    /// The user-facing name of the symbol whose (internal) number is
    /// YYSYMBOL.  No bounds checking.
    static const char *symbol_name (symbol_kind_type yysymbol);

    // Implementation of make_symbol for each symbol type.
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_S1EOF (location_type l)
      {
        return symbol_type (token::S1EOF, std::move (l));
      }
#else
      static
      symbol_type
      make_S1EOF (const location_type& l)
      {
        return symbol_type (token::S1EOF, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_S1error (location_type l)
      {
        return symbol_type (token::S1error, std::move (l));
      }
#else
      static
      symbol_type
      make_S1error (const location_type& l)
      {
        return symbol_type (token::S1error, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_S1UNDEF (location_type l)
      {
        return symbol_type (token::S1UNDEF, std::move (l));
      }
#else
      static
      symbol_type
      make_S1UNDEF (const location_type& l)
      {
        return symbol_type (token::S1UNDEF, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_INCLUDE (location_type l)
      {
        return symbol_type (token::INCLUDE, std::move (l));
      }
#else
      static
      symbol_type
      make_INCLUDE (const location_type& l)
      {
        return symbol_type (token::INCLUDE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_USINGTREE (location_type l)
      {
        return symbol_type (token::USINGTREE, std::move (l));
      }
#else
      static
      symbol_type
      make_USINGTREE (const location_type& l)
      {
        return symbol_type (token::USINGTREE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ANIMTREE (location_type l)
      {
        return symbol_type (token::ANIMTREE, std::move (l));
      }
#else
      static
      symbol_type
      make_ANIMTREE (const location_type& l)
      {
        return symbol_type (token::ANIMTREE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ENDON (location_type l)
      {
        return symbol_type (token::ENDON, std::move (l));
      }
#else
      static
      symbol_type
      make_ENDON (const location_type& l)
      {
        return symbol_type (token::ENDON, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_NOTIFY (location_type l)
      {
        return symbol_type (token::NOTIFY, std::move (l));
      }
#else
      static
      symbol_type
      make_NOTIFY (const location_type& l)
      {
        return symbol_type (token::NOTIFY, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_WAIT (location_type l)
      {
        return symbol_type (token::WAIT, std::move (l));
      }
#else
      static
      symbol_type
      make_WAIT (const location_type& l)
      {
        return symbol_type (token::WAIT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_WAITTILL (location_type l)
      {
        return symbol_type (token::WAITTILL, std::move (l));
      }
#else
      static
      symbol_type
      make_WAITTILL (const location_type& l)
      {
        return symbol_type (token::WAITTILL, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_WAITTILLMATCH (location_type l)
      {
        return symbol_type (token::WAITTILLMATCH, std::move (l));
      }
#else
      static
      symbol_type
      make_WAITTILLMATCH (const location_type& l)
      {
        return symbol_type (token::WAITTILLMATCH, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_WAITTILLFRAMEEND (location_type l)
      {
        return symbol_type (token::WAITTILLFRAMEEND, std::move (l));
      }
#else
      static
      symbol_type
      make_WAITTILLFRAMEEND (const location_type& l)
      {
        return symbol_type (token::WAITTILLFRAMEEND, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_IF (location_type l)
      {
        return symbol_type (token::IF, std::move (l));
      }
#else
      static
      symbol_type
      make_IF (const location_type& l)
      {
        return symbol_type (token::IF, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ELSE (location_type l)
      {
        return symbol_type (token::ELSE, std::move (l));
      }
#else
      static
      symbol_type
      make_ELSE (const location_type& l)
      {
        return symbol_type (token::ELSE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_WHILE (location_type l)
      {
        return symbol_type (token::WHILE, std::move (l));
      }
#else
      static
      symbol_type
      make_WHILE (const location_type& l)
      {
        return symbol_type (token::WHILE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FOR (location_type l)
      {
        return symbol_type (token::FOR, std::move (l));
      }
#else
      static
      symbol_type
      make_FOR (const location_type& l)
      {
        return symbol_type (token::FOR, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FOREACH (location_type l)
      {
        return symbol_type (token::FOREACH, std::move (l));
      }
#else
      static
      symbol_type
      make_FOREACH (const location_type& l)
      {
        return symbol_type (token::FOREACH, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_IN (location_type l)
      {
        return symbol_type (token::IN, std::move (l));
      }
#else
      static
      symbol_type
      make_IN (const location_type& l)
      {
        return symbol_type (token::IN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SWITCH (location_type l)
      {
        return symbol_type (token::SWITCH, std::move (l));
      }
#else
      static
      symbol_type
      make_SWITCH (const location_type& l)
      {
        return symbol_type (token::SWITCH, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CASE (location_type l)
      {
        return symbol_type (token::CASE, std::move (l));
      }
#else
      static
      symbol_type
      make_CASE (const location_type& l)
      {
        return symbol_type (token::CASE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DEFAULT (location_type l)
      {
        return symbol_type (token::DEFAULT, std::move (l));
      }
#else
      static
      symbol_type
      make_DEFAULT (const location_type& l)
      {
        return symbol_type (token::DEFAULT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_BREAK (location_type l)
      {
        return symbol_type (token::BREAK, std::move (l));
      }
#else
      static
      symbol_type
      make_BREAK (const location_type& l)
      {
        return symbol_type (token::BREAK, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CONTINUE (location_type l)
      {
        return symbol_type (token::CONTINUE, std::move (l));
      }
#else
      static
      symbol_type
      make_CONTINUE (const location_type& l)
      {
        return symbol_type (token::CONTINUE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_RETURN (location_type l)
      {
        return symbol_type (token::RETURN, std::move (l));
      }
#else
      static
      symbol_type
      make_RETURN (const location_type& l)
      {
        return symbol_type (token::RETURN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_THREAD (location_type l)
      {
        return symbol_type (token::THREAD, std::move (l));
      }
#else
      static
      symbol_type
      make_THREAD (const location_type& l)
      {
        return symbol_type (token::THREAD, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CHILDTHREAD (location_type l)
      {
        return symbol_type (token::CHILDTHREAD, std::move (l));
      }
#else
      static
      symbol_type
      make_CHILDTHREAD (const location_type& l)
      {
        return symbol_type (token::CHILDTHREAD, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_THISTHREAD (location_type l)
      {
        return symbol_type (token::THISTHREAD, std::move (l));
      }
#else
      static
      symbol_type
      make_THISTHREAD (const location_type& l)
      {
        return symbol_type (token::THISTHREAD, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_CALL (location_type l)
      {
        return symbol_type (token::CALL, std::move (l));
      }
#else
      static
      symbol_type
      make_CALL (const location_type& l)
      {
        return symbol_type (token::CALL, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_TRUE (location_type l)
      {
        return symbol_type (token::TRUE, std::move (l));
      }
#else
      static
      symbol_type
      make_TRUE (const location_type& l)
      {
        return symbol_type (token::TRUE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FALSE (location_type l)
      {
        return symbol_type (token::FALSE, std::move (l));
      }
#else
      static
      symbol_type
      make_FALSE (const location_type& l)
      {
        return symbol_type (token::FALSE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_UNDEFINED (location_type l)
      {
        return symbol_type (token::UNDEFINED, std::move (l));
      }
#else
      static
      symbol_type
      make_UNDEFINED (const location_type& l)
      {
        return symbol_type (token::UNDEFINED, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SIZE (location_type l)
      {
        return symbol_type (token::SIZE, std::move (l));
      }
#else
      static
      symbol_type
      make_SIZE (const location_type& l)
      {
        return symbol_type (token::SIZE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_GAME (location_type l)
      {
        return symbol_type (token::GAME, std::move (l));
      }
#else
      static
      symbol_type
      make_GAME (const location_type& l)
      {
        return symbol_type (token::GAME, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SELF (location_type l)
      {
        return symbol_type (token::SELF, std::move (l));
      }
#else
      static
      symbol_type
      make_SELF (const location_type& l)
      {
        return symbol_type (token::SELF, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ANIM (location_type l)
      {
        return symbol_type (token::ANIM, std::move (l));
      }
#else
      static
      symbol_type
      make_ANIM (const location_type& l)
      {
        return symbol_type (token::ANIM, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LEVEL (location_type l)
      {
        return symbol_type (token::LEVEL, std::move (l));
      }
#else
      static
      symbol_type
      make_LEVEL (const location_type& l)
      {
        return symbol_type (token::LEVEL, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_EMPTY_ARRAY (location_type l)
      {
        return symbol_type (token::EMPTY_ARRAY, std::move (l));
      }
#else
      static
      symbol_type
      make_EMPTY_ARRAY (const location_type& l)
      {
        return symbol_type (token::EMPTY_ARRAY, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LPAREN (location_type l)
      {
        return symbol_type (token::LPAREN, std::move (l));
      }
#else
      static
      symbol_type
      make_LPAREN (const location_type& l)
      {
        return symbol_type (token::LPAREN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_RPAREN (location_type l)
      {
        return symbol_type (token::RPAREN, std::move (l));
      }
#else
      static
      symbol_type
      make_RPAREN (const location_type& l)
      {
        return symbol_type (token::RPAREN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LBRACE (location_type l)
      {
        return symbol_type (token::LBRACE, std::move (l));
      }
#else
      static
      symbol_type
      make_LBRACE (const location_type& l)
      {
        return symbol_type (token::LBRACE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_RBRACE (location_type l)
      {
        return symbol_type (token::RBRACE, std::move (l));
      }
#else
      static
      symbol_type
      make_RBRACE (const location_type& l)
      {
        return symbol_type (token::RBRACE, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LBRACKET (location_type l)
      {
        return symbol_type (token::LBRACKET, std::move (l));
      }
#else
      static
      symbol_type
      make_LBRACKET (const location_type& l)
      {
        return symbol_type (token::LBRACKET, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_RBRACKET (location_type l)
      {
        return symbol_type (token::RBRACKET, std::move (l));
      }
#else
      static
      symbol_type
      make_RBRACKET (const location_type& l)
      {
        return symbol_type (token::RBRACKET, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_COMMA (location_type l)
      {
        return symbol_type (token::COMMA, std::move (l));
      }
#else
      static
      symbol_type
      make_COMMA (const location_type& l)
      {
        return symbol_type (token::COMMA, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DOT (location_type l)
      {
        return symbol_type (token::DOT, std::move (l));
      }
#else
      static
      symbol_type
      make_DOT (const location_type& l)
      {
        return symbol_type (token::DOT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DOUBLECOLON (location_type l)
      {
        return symbol_type (token::DOUBLECOLON, std::move (l));
      }
#else
      static
      symbol_type
      make_DOUBLECOLON (const location_type& l)
      {
        return symbol_type (token::DOUBLECOLON, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_COLON (location_type l)
      {
        return symbol_type (token::COLON, std::move (l));
      }
#else
      static
      symbol_type
      make_COLON (const location_type& l)
      {
        return symbol_type (token::COLON, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SEMICOLON (location_type l)
      {
        return symbol_type (token::SEMICOLON, std::move (l));
      }
#else
      static
      symbol_type
      make_SEMICOLON (const location_type& l)
      {
        return symbol_type (token::SEMICOLON, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_INCREMENT (location_type l)
      {
        return symbol_type (token::INCREMENT, std::move (l));
      }
#else
      static
      symbol_type
      make_INCREMENT (const location_type& l)
      {
        return symbol_type (token::INCREMENT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DECREMENT (location_type l)
      {
        return symbol_type (token::DECREMENT, std::move (l));
      }
#else
      static
      symbol_type
      make_DECREMENT (const location_type& l)
      {
        return symbol_type (token::DECREMENT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_MOD (location_type l)
      {
        return symbol_type (token::MOD, std::move (l));
      }
#else
      static
      symbol_type
      make_MOD (const location_type& l)
      {
        return symbol_type (token::MOD, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LSHIFT (location_type l)
      {
        return symbol_type (token::LSHIFT, std::move (l));
      }
#else
      static
      symbol_type
      make_LSHIFT (const location_type& l)
      {
        return symbol_type (token::LSHIFT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_RSHIFT (location_type l)
      {
        return symbol_type (token::RSHIFT, std::move (l));
      }
#else
      static
      symbol_type
      make_RSHIFT (const location_type& l)
      {
        return symbol_type (token::RSHIFT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_OR (location_type l)
      {
        return symbol_type (token::OR, std::move (l));
      }
#else
      static
      symbol_type
      make_OR (const location_type& l)
      {
        return symbol_type (token::OR, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_AND (location_type l)
      {
        return symbol_type (token::AND, std::move (l));
      }
#else
      static
      symbol_type
      make_AND (const location_type& l)
      {
        return symbol_type (token::AND, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_EQUALITY (location_type l)
      {
        return symbol_type (token::EQUALITY, std::move (l));
      }
#else
      static
      symbol_type
      make_EQUALITY (const location_type& l)
      {
        return symbol_type (token::EQUALITY, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_INEQUALITY (location_type l)
      {
        return symbol_type (token::INEQUALITY, std::move (l));
      }
#else
      static
      symbol_type
      make_INEQUALITY (const location_type& l)
      {
        return symbol_type (token::INEQUALITY, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LESS_EQUAL (location_type l)
      {
        return symbol_type (token::LESS_EQUAL, std::move (l));
      }
#else
      static
      symbol_type
      make_LESS_EQUAL (const location_type& l)
      {
        return symbol_type (token::LESS_EQUAL, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_GREATER_EQUAL (location_type l)
      {
        return symbol_type (token::GREATER_EQUAL, std::move (l));
      }
#else
      static
      symbol_type
      make_GREATER_EQUAL (const location_type& l)
      {
        return symbol_type (token::GREATER_EQUAL, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_LESS (location_type l)
      {
        return symbol_type (token::LESS, std::move (l));
      }
#else
      static
      symbol_type
      make_LESS (const location_type& l)
      {
        return symbol_type (token::LESS, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_GREATER (location_type l)
      {
        return symbol_type (token::GREATER, std::move (l));
      }
#else
      static
      symbol_type
      make_GREATER (const location_type& l)
      {
        return symbol_type (token::GREATER, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_NOT (location_type l)
      {
        return symbol_type (token::NOT, std::move (l));
      }
#else
      static
      symbol_type
      make_NOT (const location_type& l)
      {
        return symbol_type (token::NOT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_COMPLEMENT (location_type l)
      {
        return symbol_type (token::COMPLEMENT, std::move (l));
      }
#else
      static
      symbol_type
      make_COMPLEMENT (const location_type& l)
      {
        return symbol_type (token::COMPLEMENT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ASSIGN_RSHIFT (location_type l)
      {
        return symbol_type (token::ASSIGN_RSHIFT, std::move (l));
      }
#else
      static
      symbol_type
      make_ASSIGN_RSHIFT (const location_type& l)
      {
        return symbol_type (token::ASSIGN_RSHIFT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ASSIGN (location_type l)
      {
        return symbol_type (token::ASSIGN, std::move (l));
      }
#else
      static
      symbol_type
      make_ASSIGN (const location_type& l)
      {
        return symbol_type (token::ASSIGN, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ASSIGN_ADD (location_type l)
      {
        return symbol_type (token::ASSIGN_ADD, std::move (l));
      }
#else
      static
      symbol_type
      make_ASSIGN_ADD (const location_type& l)
      {
        return symbol_type (token::ASSIGN_ADD, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ASSIGN_SUB (location_type l)
      {
        return symbol_type (token::ASSIGN_SUB, std::move (l));
      }
#else
      static
      symbol_type
      make_ASSIGN_SUB (const location_type& l)
      {
        return symbol_type (token::ASSIGN_SUB, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ASSIGN_MULT (location_type l)
      {
        return symbol_type (token::ASSIGN_MULT, std::move (l));
      }
#else
      static
      symbol_type
      make_ASSIGN_MULT (const location_type& l)
      {
        return symbol_type (token::ASSIGN_MULT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ASSIGN_DIV (location_type l)
      {
        return symbol_type (token::ASSIGN_DIV, std::move (l));
      }
#else
      static
      symbol_type
      make_ASSIGN_DIV (const location_type& l)
      {
        return symbol_type (token::ASSIGN_DIV, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ASSIGN_MOD (location_type l)
      {
        return symbol_type (token::ASSIGN_MOD, std::move (l));
      }
#else
      static
      symbol_type
      make_ASSIGN_MOD (const location_type& l)
      {
        return symbol_type (token::ASSIGN_MOD, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ASSIGN_BITWISE_OR (location_type l)
      {
        return symbol_type (token::ASSIGN_BITWISE_OR, std::move (l));
      }
#else
      static
      symbol_type
      make_ASSIGN_BITWISE_OR (const location_type& l)
      {
        return symbol_type (token::ASSIGN_BITWISE_OR, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ASSIGN_BITWISE_AND (location_type l)
      {
        return symbol_type (token::ASSIGN_BITWISE_AND, std::move (l));
      }
#else
      static
      symbol_type
      make_ASSIGN_BITWISE_AND (const location_type& l)
      {
        return symbol_type (token::ASSIGN_BITWISE_AND, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ASSIGN_BITWISE_EXOR (location_type l)
      {
        return symbol_type (token::ASSIGN_BITWISE_EXOR, std::move (l));
      }
#else
      static
      symbol_type
      make_ASSIGN_BITWISE_EXOR (const location_type& l)
      {
        return symbol_type (token::ASSIGN_BITWISE_EXOR, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ASSIGN_LSHIFT (location_type l)
      {
        return symbol_type (token::ASSIGN_LSHIFT, std::move (l));
      }
#else
      static
      symbol_type
      make_ASSIGN_LSHIFT (const location_type& l)
      {
        return symbol_type (token::ASSIGN_LSHIFT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_BITWISE_OR (location_type l)
      {
        return symbol_type (token::BITWISE_OR, std::move (l));
      }
#else
      static
      symbol_type
      make_BITWISE_OR (const location_type& l)
      {
        return symbol_type (token::BITWISE_OR, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_BITWISE_AND (location_type l)
      {
        return symbol_type (token::BITWISE_AND, std::move (l));
      }
#else
      static
      symbol_type
      make_BITWISE_AND (const location_type& l)
      {
        return symbol_type (token::BITWISE_AND, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_BITWISE_EXOR (location_type l)
      {
        return symbol_type (token::BITWISE_EXOR, std::move (l));
      }
#else
      static
      symbol_type
      make_BITWISE_EXOR (const location_type& l)
      {
        return symbol_type (token::BITWISE_EXOR, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ADD (location_type l)
      {
        return symbol_type (token::ADD, std::move (l));
      }
#else
      static
      symbol_type
      make_ADD (const location_type& l)
      {
        return symbol_type (token::ADD, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_SUB (location_type l)
      {
        return symbol_type (token::SUB, std::move (l));
      }
#else
      static
      symbol_type
      make_SUB (const location_type& l)
      {
        return symbol_type (token::SUB, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_MULT (location_type l)
      {
        return symbol_type (token::MULT, std::move (l));
      }
#else
      static
      symbol_type
      make_MULT (const location_type& l)
      {
        return symbol_type (token::MULT, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_DIV (location_type l)
      {
        return symbol_type (token::DIV, std::move (l));
      }
#else
      static
      symbol_type
      make_DIV (const location_type& l)
      {
        return symbol_type (token::DIV, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FILE (std::string v, location_type l)
      {
        return symbol_type (token::FILE, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_FILE (const std::string& v, const location_type& l)
      {
        return symbol_type (token::FILE, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_NAME (std::string v, location_type l)
      {
        return symbol_type (token::NAME, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_NAME (const std::string& v, const location_type& l)
      {
        return symbol_type (token::NAME, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_STRING (std::string v, location_type l)
      {
        return symbol_type (token::STRING, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_STRING (const std::string& v, const location_type& l)
      {
        return symbol_type (token::STRING, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ISTRING (std::string v, location_type l)
      {
        return symbol_type (token::ISTRING, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_ISTRING (const std::string& v, const location_type& l)
      {
        return symbol_type (token::ISTRING, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_FLOAT (std::string v, location_type l)
      {
        return symbol_type (token::FLOAT, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_FLOAT (const std::string& v, const location_type& l)
      {
        return symbol_type (token::FLOAT, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_INTEGER (std::string v, location_type l)
      {
        return symbol_type (token::INTEGER, std::move (v), std::move (l));
      }
#else
      static
      symbol_type
      make_INTEGER (const std::string& v, const location_type& l)
      {
        return symbol_type (token::INTEGER, v, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_NEG (location_type l)
      {
        return symbol_type (token::NEG, std::move (l));
      }
#else
      static
      symbol_type
      make_NEG (const location_type& l)
      {
        return symbol_type (token::NEG, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_ANIMREF (location_type l)
      {
        return symbol_type (token::ANIMREF, std::move (l));
      }
#else
      static
      symbol_type
      make_ANIMREF (const location_type& l)
      {
        return symbol_type (token::ANIMREF, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PREINC (location_type l)
      {
        return symbol_type (token::PREINC, std::move (l));
      }
#else
      static
      symbol_type
      make_PREINC (const location_type& l)
      {
        return symbol_type (token::PREINC, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_PREDEC (location_type l)
      {
        return symbol_type (token::PREDEC, std::move (l));
      }
#else
      static
      symbol_type
      make_PREDEC (const location_type& l)
      {
        return symbol_type (token::PREDEC, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_POSTINC (location_type l)
      {
        return symbol_type (token::POSTINC, std::move (l));
      }
#else
      static
      symbol_type
      make_POSTINC (const location_type& l)
      {
        return symbol_type (token::POSTINC, l);
      }
#endif
#if 201103L <= YY_CPLUSPLUS
      static
      symbol_type
      make_POSTDEC (location_type l)
      {
        return symbol_type (token::POSTDEC, std::move (l));
      }
#else
      static
      symbol_type
      make_POSTDEC (const location_type& l)
      {
        return symbol_type (token::POSTDEC, l);
      }
#endif


    class context
    {
    public:
      context (const parser& yyparser, const symbol_type& yyla);
      const symbol_type& lookahead () const { return yyla_; }
      symbol_kind_type token () const { return yyla_.kind (); }
      const location_type& location () const { return yyla_.location; }

      /// Put in YYARG at most YYARGN of the expected tokens, and return the
      /// number of tokens stored in YYARG.  If YYARG is null, return the
      /// number of expected tokens (guaranteed to be less than YYNTOKENS).
      int expected_tokens (symbol_kind_type yyarg[], int yyargn) const;

    private:
      const parser& yyparser_;
      const symbol_type& yyla_;
    };

  private:
#if YY_CPLUSPLUS < 201103L
    /// Non copyable.
    parser (const parser&);
    /// Non copyable.
    parser& operator= (const parser&);
#endif

    /// Check the lookahead yytoken.
    /// \returns  true iff the token will be eventually shifted.
    bool yy_lac_check_ (symbol_kind_type yytoken) const;
    /// Establish the initial context if no initial context currently exists.
    /// \returns  true iff the token will be eventually shifted.
    bool yy_lac_establish_ (symbol_kind_type yytoken);
    /// Discard any previous initial lookahead context because of event.
    /// \param event  the event which caused the lookahead to be discarded.
    ///               Only used for debbuging output.
    void yy_lac_discard_ (const char* event);

    /// Stored state numbers (used for stacks).
    typedef short state_type;

    /// The arguments of the error message.
    int yy_syntax_error_arguments_ (const context& yyctx,
                                    symbol_kind_type yyarg[], int yyargn) const;

    /// Generate an error message.
    /// \param yyctx     the context in which the error occurred.
    virtual std::string yysyntax_error_ (const context& yyctx) const;
    /// Compute post-reduction state.
    /// \param yystate   the current state
    /// \param yysym     the nonterminal to push on the stack
    static state_type yy_lr_goto_state_ (state_type yystate, int yysym);

    /// Whether the given \c yypact_ value indicates a defaulted state.
    /// \param yyvalue   the value to check
    static bool yy_pact_value_is_default_ (int yyvalue);

    /// Whether the given \c yytable_ value indicates a syntax error.
    /// \param yyvalue   the value to check
    static bool yy_table_value_is_error_ (int yyvalue);

    static const short yypact_ninf_;
    static const short yytable_ninf_;

    /// Convert a scanner token kind \a t to a symbol kind.
    /// In theory \a t should be a token_kind_type, but character literals
    /// are valid, yet not members of the token_type enum.
    static symbol_kind_type yytranslate_ (int t);



    // Tables.
    // YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
    // STATE-NUM.
    static const short yypact_[];

    // YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
    // Performed when YYTABLE does not specify something else to do.  Zero
    // means the default is an error.
    static const unsigned char yydefact_[];

    // YYPGOTO[NTERM-NUM].
    static const short yypgoto_[];

    // YYDEFGOTO[NTERM-NUM].
    static const short yydefgoto_[];

    // YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
    // positive, shift that token.  If negative, reduce the rule whose
    // number is the opposite.  If YYTABLE_NINF, syntax error.
    static const short yytable_[];

    static const short yycheck_[];

    // YYSTOS[STATE-NUM] -- The (internal number of the) accessing
    // symbol of state STATE-NUM.
    static const unsigned char yystos_[];

    // YYR1[YYN] -- Symbol number of symbol that rule YYN derives.
    static const unsigned char yyr1_[];

    // YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.
    static const signed char yyr2_[];


#if S1DEBUG
    // YYRLINE[YYN] -- Source line where rule number YYN was defined.
    static const short yyrline_[];
    /// Report on the debug stream that the rule \a r is going to be reduced.
    virtual void yy_reduce_print_ (int r) const;
    /// Print the state stack on the debug stream.
    virtual void yy_stack_print_ () const;

    /// Debugging level.
    int yydebug_;
    /// Debug stream.
    std::ostream* yycdebug_;

    /// \brief Display a symbol kind, value and location.
    /// \param yyo    The output stream.
    /// \param yysym  The symbol.
    template <typename Base>
    void yy_print_ (std::ostream& yyo, const basic_symbol<Base>& yysym) const;
#endif

    /// \brief Reclaim the memory associated to a symbol.
    /// \param yymsg     Why this token is reclaimed.
    ///                  If null, print nothing.
    /// \param yysym     The symbol.
    template <typename Base>
    void yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const;

  private:
    /// Type access provider for state based symbols.
    struct by_state
    {
      /// Default constructor.
      by_state () YY_NOEXCEPT;

      /// The symbol kind as needed by the constructor.
      typedef state_type kind_type;

      /// Constructor.
      by_state (kind_type s) YY_NOEXCEPT;

      /// Copy constructor.
      by_state (const by_state& that) YY_NOEXCEPT;

      /// Record that this symbol is empty.
      void clear () YY_NOEXCEPT;

      /// Steal the symbol kind from \a that.
      void move (by_state& that);

      /// The symbol kind (corresponding to \a state).
      /// \a symbol_kind::S_YYEMPTY when empty.
      symbol_kind_type kind () const YY_NOEXCEPT;

      /// The state number used to denote an empty symbol.
      /// We use the initial state, as it does not have a value.
      enum { empty_state = 0 };

      /// The state.
      /// \a empty when empty.
      state_type state;
    };

    /// "Internal" symbol: element of the stack.
    struct stack_symbol_type : basic_symbol<by_state>
    {
      /// Superclass.
      typedef basic_symbol<by_state> super_type;
      /// Construct an empty symbol.
      stack_symbol_type ();
      /// Move or copy construction.
      stack_symbol_type (YY_RVREF (stack_symbol_type) that);
      /// Steal the contents from \a sym to build this.
      stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) sym);
#if YY_CPLUSPLUS < 201103L
      /// Assignment, needed by push_back by some old implementations.
      /// Moves the contents of that.
      stack_symbol_type& operator= (stack_symbol_type& that);

      /// Assignment, needed by push_back by other implementations.
      /// Needed by some other old implementations.
      stack_symbol_type& operator= (const stack_symbol_type& that);
#endif
    };

    /// A stack with random access from its top.
    template <typename T, typename S = std::vector<T> >
    class stack
    {
    public:
      // Hide our reversed order.
      typedef typename S::iterator iterator;
      typedef typename S::const_iterator const_iterator;
      typedef typename S::size_type size_type;
      typedef typename std::ptrdiff_t index_type;

      stack (size_type n = 200)
        : seq_ (n)
      {}

#if 201103L <= YY_CPLUSPLUS
      /// Non copyable.
      stack (const stack&) = delete;
      /// Non copyable.
      stack& operator= (const stack&) = delete;
#endif

      /// Random access.
      ///
      /// Index 0 returns the topmost element.
      const T&
      operator[] (index_type i) const
      {
        return seq_[size_type (size () - 1 - i)];
      }

      /// Random access.
      ///
      /// Index 0 returns the topmost element.
      T&
      operator[] (index_type i)
      {
        return seq_[size_type (size () - 1 - i)];
      }

      /// Steal the contents of \a t.
      ///
      /// Close to move-semantics.
      void
      push (YY_MOVE_REF (T) t)
      {
        seq_.push_back (T ());
        operator[] (0).move (t);
      }

      /// Pop elements from the stack.
      void
      pop (std::ptrdiff_t n = 1) YY_NOEXCEPT
      {
        for (; 0 < n; --n)
          seq_.pop_back ();
      }

      /// Pop all elements from the stack.
      void
      clear () YY_NOEXCEPT
      {
        seq_.clear ();
      }

      /// Number of elements on the stack.
      index_type
      size () const YY_NOEXCEPT
      {
        return index_type (seq_.size ());
      }

      /// Iterator on top of the stack (going downwards).
      const_iterator
      begin () const YY_NOEXCEPT
      {
        return seq_.begin ();
      }

      /// Bottom of the stack.
      const_iterator
      end () const YY_NOEXCEPT
      {
        return seq_.end ();
      }

      /// Present a slice of the top of a stack.
      class slice
      {
      public:
        slice (const stack& stack, index_type range)
          : stack_ (stack)
          , range_ (range)
        {}

        const T&
        operator[] (index_type i) const
        {
          return stack_[range_ - i];
        }

      private:
        const stack& stack_;
        index_type range_;
      };

    private:
#if YY_CPLUSPLUS < 201103L
      /// Non copyable.
      stack (const stack&);
      /// Non copyable.
      stack& operator= (const stack&);
#endif
      /// The wrapped container.
      S seq_;
    };


    /// Stack type.
    typedef stack<stack_symbol_type> stack_type;

    /// The stack.
    stack_type yystack_;
    /// The stack for LAC.
    /// Logically, the yy_lac_stack's lifetime is confined to the function
    /// yy_lac_check_. We just store it as a member of this class to hold
    /// on to the memory and to avoid frequent reallocations.
    /// Since yy_lac_check_ is const, this member must be mutable.
    mutable std::vector<state_type> yylac_stack_;
    /// Whether an initial LAC context was established.
    bool yy_lac_established_;


    /// Push a new state on the stack.
    /// \param m    a debug message to display
    ///             if null, no trace is output.
    /// \param sym  the symbol
    /// \warning the contents of \a s.value is stolen.
    void yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym);

    /// Push a new look ahead token on the state on the stack.
    /// \param m    a debug message to display
    ///             if null, no trace is output.
    /// \param s    the state
    /// \param sym  the symbol (for its value and location).
    /// \warning the contents of \a sym.value is stolen.
    void yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym);

    /// Pop \a n symbols from the stack.
    void yypop_ (int n = 1);

    /// Constants.
    enum
    {
      yylast_ = 2722,     ///< Last index in yytable_.
      yynnts_ = 69,  ///< Number of nonterminal symbols.
      yyfinal_ = 15 ///< Termination state number.
    };


    // User arguments.
    yyscan_t yyscanner;
    gsc::location& loc;
    gsc::program_ptr& ast;

  };

  inline
  parser::symbol_kind_type
  parser::yytranslate_ (int t)
  {
    return static_cast<symbol_kind_type> (t);
  }

  // basic_symbol.
  template <typename Base>
  parser::basic_symbol<Base>::basic_symbol (const basic_symbol& that)
    : Base (that)
    , value ()
    , location (that.location)
  {
    switch (this->kind ())
    {
      case symbol_kind::S_anim: // anim
        value.copy< gsc::anim_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_animation: // animation
        value.copy< gsc::animation_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_animtree: // animtree
        value.copy< gsc::animtree_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_block: // block
        value.copy< gsc::block_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_constant: // constant
        value.copy< gsc::constant_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_define: // define
        value.copy< gsc::define_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_empty_array: // empty_array
        value.copy< gsc::empty_array_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_arguments: // expr_arguments
        value.copy< gsc::expr_arguments_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_assign: // expr_assign
        value.copy< gsc::expr_assign_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_call: // expr_call
      case symbol_kind::S_expr_call_thread: // expr_call_thread
      case symbol_kind::S_expr_call_childthread: // expr_call_childthread
        value.copy< gsc::expr_call_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_call_function: // expr_call_function
      case symbol_kind::S_expr_call_pointer: // expr_call_pointer
        value.copy< gsc::expr_call_type_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_for_stmt: // for_stmt
      case symbol_kind::S_for_expr: // for_expr
      case symbol_kind::S_expr: // expr
      case symbol_kind::S_expr_compare: // expr_compare
      case symbol_kind::S_expr_binary: // expr_binary
      case symbol_kind::S_expr_primitive: // expr_primitive
        value.copy< gsc::expr_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_false: // false
        value.copy< gsc::false_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_file: // file
        value.copy< gsc::file_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_neg_float: // neg_float
      case symbol_kind::S_float: // float
        value.copy< gsc::float_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_game: // game
        value.copy< gsc::game_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_include: // include
        value.copy< gsc::include_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_neg_integer: // neg_integer
      case symbol_kind::S_integer: // integer
        value.copy< gsc::integer_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_istring: // istring
        value.copy< gsc::istring_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_level: // level
        value.copy< gsc::level_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_name: // name
        value.copy< gsc::name_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_expr_function: // expr_function
      case symbol_kind::S_expr_add_array: // expr_add_array
      case symbol_kind::S_expr_array: // expr_array
      case symbol_kind::S_expr_field: // expr_field
      case symbol_kind::S_expr_size: // expr_size
      case symbol_kind::S_object: // object
        value.copy< gsc::node_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_parameters: // parameters
        value.copy< gsc::parameters_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_program: // program
        value.copy< gsc::program_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_self: // self
        value.copy< gsc::self_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_assign: // stmt_assign
        value.copy< gsc::stmt_assign_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_break: // stmt_break
        value.copy< gsc::stmt_break_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_call: // stmt_call
        value.copy< gsc::stmt_call_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_case: // stmt_case
        value.copy< gsc::stmt_case_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_continue: // stmt_continue
        value.copy< gsc::stmt_continue_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_default: // stmt_default
        value.copy< gsc::stmt_default_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_endon: // stmt_endon
        value.copy< gsc::stmt_endon_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_for: // stmt_for
        value.copy< gsc::stmt_for_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_foreach: // stmt_foreach
        value.copy< gsc::stmt_foreach_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_if: // stmt_if
        value.copy< gsc::stmt_if_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_ifelse: // stmt_ifelse
        value.copy< gsc::stmt_ifelse_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_notify: // stmt_notify
        value.copy< gsc::stmt_notify_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt: // stmt
        value.copy< gsc::stmt_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_return: // stmt_return
        value.copy< gsc::stmt_return_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_switch: // stmt_switch
        value.copy< gsc::stmt_switch_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_wait: // stmt_wait
        value.copy< gsc::stmt_wait_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_waittill: // stmt_waittill
        value.copy< gsc::stmt_waittill_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_waittillframeend: // stmt_waittillframeend
        value.copy< gsc::stmt_waittillframeend_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_waittillmatch: // stmt_waittillmatch
        value.copy< gsc::stmt_waittillmatch_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_stmt_while: // stmt_while
        value.copy< gsc::stmt_while_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_string: // string
        value.copy< gsc::string_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_thisthread: // thisthread
        value.copy< gsc::thisthread_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_thread: // thread
        value.copy< gsc::thread_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_true: // true
        value.copy< gsc::true_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_undefined: // undefined
        value.copy< gsc::undefined_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_usingtree: // usingtree
        value.copy< gsc::usingtree_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_vector: // vector
        value.copy< gsc::vector_ptr > (YY_MOVE (that.value));
        break;

      case symbol_kind::S_FILE: // FILE
      case symbol_kind::S_NAME: // NAME
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_ISTRING: // ISTRING
      case symbol_kind::S_FLOAT: // FLOAT
      case symbol_kind::S_INTEGER: // INTEGER
        value.copy< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

  }



  template <typename Base>
  parser::symbol_kind_type
  parser::basic_symbol<Base>::type_get () const YY_NOEXCEPT
  {
    return this->kind ();
  }

  template <typename Base>
  bool
  parser::basic_symbol<Base>::empty () const YY_NOEXCEPT
  {
    return this->kind () == symbol_kind::S_YYEMPTY;
  }

  template <typename Base>
  void
  parser::basic_symbol<Base>::move (basic_symbol& s)
  {
    super_type::move (s);
    switch (this->kind ())
    {
      case symbol_kind::S_anim: // anim
        value.move< gsc::anim_ptr > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_animation: // animation
        value.move< gsc::animation_ptr > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_animtree: // animtree
        value.move< gsc::animtree_ptr > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_block: // block
        value.move< gsc::block_ptr > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_constant: // constant
        value.move< gsc::constant_ptr > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_define: // define
        value.move< gsc::define_ptr > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_empty_array: // empty_array
        value.move< gsc::empty_array_ptr > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_expr_arguments: // expr_arguments
        value.move< gsc::expr_arguments_ptr > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_expr_assign: // expr_assign
        value.move< gsc::expr_assign_ptr > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_expr_call: // expr_call
      case symbol_kind::S_expr_call_thread: // expr_call_thread
      case symbol_kind::S_expr_call_childthread: // expr_call_childthread
        value.move< gsc::expr_call_ptr > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_expr_call_function: // expr_call_function
      case symbol_kind::S_expr_call_pointer: // expr_call_pointer
        value.move< gsc::expr_call_type_ptr > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_for_stmt: // for_stmt
      case symbol_kind::S_for_expr: // for_expr
      case symbol_kind::S_expr: // expr
      case symbol_kind::S_expr_compare: // expr_compare
      case symbol_kind::S_expr_binary: // expr_binary
      case symbol_kind::S_expr_primitive: // expr_primitive
        value.move< gsc::expr_ptr > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_false: // false
        value.move< gsc::false_ptr > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_file: // file
        value.move< gsc::file_ptr > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_neg_float: // neg_float
      case symbol_kind::S_float: // float
        value.move< gsc::float_ptr > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_game: // game
        value.move< gsc::game_ptr > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_include: // include
        value.move< gsc::include_ptr > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_neg_integer: // neg_integer
      case symbol_kind::S_integer: // integer
        value.move< gsc::integer_ptr > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_istring: // istring
        value.move< gsc::istring_ptr > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_level: // level
        value.move< gsc::level_ptr > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_name: // name
        value.move< gsc::name_ptr > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_expr_function: // expr_function
      case symbol_kind::S_expr_add_array: // expr_add_array
      case symbol_kind::S_expr_array: // expr_array
      case symbol_kind::S_expr_field: // expr_field
      case symbol_kind::S_expr_size: // expr_size
      case symbol_kind::S_object: // object
        value.move< gsc::node_ptr > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_parameters: // parameters
        value.move< gsc::parameters_ptr > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_program: // program
        value.move< gsc::program_ptr > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_self: // self
        value.move< gsc::self_ptr > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_stmt_assign: // stmt_assign
        value.move< gsc::stmt_assign_ptr > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_stmt_break: // stmt_break
        value.move< gsc::stmt_break_ptr > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_stmt_call: // stmt_call
        value.move< gsc::stmt_call_ptr > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_stmt_case: // stmt_case
        value.move< gsc::stmt_case_ptr > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_stmt_continue: // stmt_continue
        value.move< gsc::stmt_continue_ptr > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_stmt_default: // stmt_default
        value.move< gsc::stmt_default_ptr > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_stmt_endon: // stmt_endon
        value.move< gsc::stmt_endon_ptr > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_stmt_for: // stmt_for
        value.move< gsc::stmt_for_ptr > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_stmt_foreach: // stmt_foreach
        value.move< gsc::stmt_foreach_ptr > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_stmt_if: // stmt_if
        value.move< gsc::stmt_if_ptr > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_stmt_ifelse: // stmt_ifelse
        value.move< gsc::stmt_ifelse_ptr > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_stmt_notify: // stmt_notify
        value.move< gsc::stmt_notify_ptr > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_stmt: // stmt
        value.move< gsc::stmt_ptr > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_stmt_return: // stmt_return
        value.move< gsc::stmt_return_ptr > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_stmt_switch: // stmt_switch
        value.move< gsc::stmt_switch_ptr > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_stmt_wait: // stmt_wait
        value.move< gsc::stmt_wait_ptr > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_stmt_waittill: // stmt_waittill
        value.move< gsc::stmt_waittill_ptr > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_stmt_waittillframeend: // stmt_waittillframeend
        value.move< gsc::stmt_waittillframeend_ptr > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_stmt_waittillmatch: // stmt_waittillmatch
        value.move< gsc::stmt_waittillmatch_ptr > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_stmt_while: // stmt_while
        value.move< gsc::stmt_while_ptr > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_string: // string
        value.move< gsc::string_ptr > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_thisthread: // thisthread
        value.move< gsc::thisthread_ptr > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_thread: // thread
        value.move< gsc::thread_ptr > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_true: // true
        value.move< gsc::true_ptr > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_undefined: // undefined
        value.move< gsc::undefined_ptr > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_usingtree: // usingtree
        value.move< gsc::usingtree_ptr > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_vector: // vector
        value.move< gsc::vector_ptr > (YY_MOVE (s.value));
        break;

      case symbol_kind::S_FILE: // FILE
      case symbol_kind::S_NAME: // NAME
      case symbol_kind::S_STRING: // STRING
      case symbol_kind::S_ISTRING: // ISTRING
      case symbol_kind::S_FLOAT: // FLOAT
      case symbol_kind::S_INTEGER: // INTEGER
        value.move< std::string > (YY_MOVE (s.value));
        break;

      default:
        break;
    }

    location = YY_MOVE (s.location);
  }

  // by_kind.
  inline
  parser::by_kind::by_kind ()
    : kind_ (symbol_kind::S_YYEMPTY)
  {}

#if 201103L <= YY_CPLUSPLUS
  inline
  parser::by_kind::by_kind (by_kind&& that)
    : kind_ (that.kind_)
  {
    that.clear ();
  }
#endif

  inline
  parser::by_kind::by_kind (const by_kind& that)
    : kind_ (that.kind_)
  {}

  inline
  parser::by_kind::by_kind (token_kind_type t)
    : kind_ (yytranslate_ (t))
  {}

  inline
  void
  parser::by_kind::clear ()
  {
    kind_ = symbol_kind::S_YYEMPTY;
  }

  inline
  void
  parser::by_kind::move (by_kind& that)
  {
    kind_ = that.kind_;
    that.clear ();
  }

  inline
  parser::symbol_kind_type
  parser::by_kind::kind () const YY_NOEXCEPT
  {
    return kind_;
  }

  inline
  parser::symbol_kind_type
  parser::by_kind::type_get () const YY_NOEXCEPT
  {
    return this->kind ();
  }

#line 13 "S1.parser.ypp"
} // S1
#line 4629 "./S1/compiler_parser.hpp"




#endif // !YY_S1_S1_COMPILER_PARSER_HPP_INCLUDED
