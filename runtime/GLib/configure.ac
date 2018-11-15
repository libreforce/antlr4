dnl Process this file with autoconf to produce a configure script.

# define antlr_version 4.5.3 in configure.ac
m4_define([antlr_major_version], [4])
m4_define([antlr_minor_version], [5])
m4_define([antlr_micro_version], [3])

m4_define([antlr_version],
          [antlr_major_version.antlr_minor_version.antlr_micro_version])
AC_DEFINE(ANTLR_VERSION, antlr_version, [ANTLR runtime version.])

#required versions of other packages
m4_define([glib_required_major], [2])
m4_define([glib_required_minor], [48])
m4_define([glib_required_micro], [1])
m4_define([glib_required_version],
         [glib_required_major.glib_required_minor.glib_required_micro])
m4_define([glib_min_required_minor],
         [m4_eval(glib_required_minor - (glib_required_minor % 2))])
m4_define([glib_max_allowed_minor],
         [m4_eval(glib_required_minor + (glib_required_minor % 2))])
m4_define([glib_min_required_version], m4_join([_], [GLIB_VERSION], glib_required_major, glib_min_required_minor))
m4_define([glib_max_allowed_version], m4_join([_], [GLIB_VERSION], glib_required_major, glib_max_allowed_minor))
GLIB_VERSION_CFLAGS="-DGLIB_MIN_REQUIRED_VERSION=glib_min_required_version -DGLIB_MAX_ALLOWED_VERSION=glib_max_allowed_version"


AC_PREREQ([2.69])
AC_INIT([ANTLR Runtime], [antlr_version],
        [https://github.com/antlr/antlr4/issues],
        [antlr-glib])


AC_CONFIG_HEADERS([config.h])

AM_INIT_AUTOMAKE([1.11])

AM_SILENT_RULES([no])

AC_PROG_CC


#AC_PROG_CPP
#AC_PROG_CXX


# Support silent build rules. Disable
# by either passing --disable-silent-rules to configure or passing V=1
# to make
AM_SILENT_RULES([yes])


ANTLR_VERSION=antlr_version
AC_SUBST(ANTLR_VERSION)

dnl ***************************************************************************
dnl Internationalization
dnl ***************************************************************************
IT_PROG_INTLTOOL([0.35.0])

GETTEXT_PACKAGE=antlr_runtime
AC_SUBST(GETTEXT_PACKAGE)
AC_DEFINE_UNQUOTED(GETTEXT_PACKAGE,"$GETTEXT_PACKAGE",
                   [The prefix for our gettext translation domains.])

AM_GLIB_GNU_GETTEXT



dnl ***************************************************************************
dnl Check for Windows
dnl ***************************************************************************
AC_CANONICAL_HOST

case $host_os in
  *mingw*)
    platform_win32=yes
    native_win32=yes
    ;;
  pw32* | *cygwin*)
    platform_win32=yes
    native_win32=no
    ;;
  *)
    platform_win32=no
    native_win32=no
    ;;
esac
AM_CONDITIONAL(PLATFORM_WIN32, test x"$platform_win32" = "xyes")
AM_CONDITIONAL(NATIVE_WIN32, test x"$native_win32" = "xyes")


LT_INIT([win32-dll])

PKG_CHECK_MODULES(GTK, [gtk+-2.0])
PKG_CHECK_MODULES(G, [gio-2.0 gobject-2.0])


dnl ***************************************************************************
dnl Extra bin default desabled
dnl ***************************************************************************
AC_ARG_ENABLE([demo-mysql],
    AS_HELP_STRING([--enable-demo-mysql], [Enable demo mysql]), , enable_demo_mysql=no)

AS_IF([test "x$enable_demo_mysql" = "xyes"], [
  dnl Do the stuff needed for enabling the feature
  AC_DEFINE(ENABLE_DEMO_MYSQL, 1, [Define to 1 if you are compiling demo mysql.])
], [enable_demo_mysql="no"])
AM_CONDITIONAL([ENABLE_DEMO_MYSQL], [test "x$enable_demo_mysql" = "xyes"])


AC_ARG_ENABLE([demo-php],
    AS_HELP_STRING([--enable-demo-php], [Enable demo php]), , enable_demo_php=no)

AS_IF([test "x$enable_demo_php" = "xyes"], [
  dnl Do the stuff needed for enabling the feature
  AC_DEFINE(ENABLE_DEMO_PHP, 1, [Define to 1 if you are compiling demo php.])
], [enable_demo_php="no"])
AM_CONDITIONAL([ENABLE_DEMO_PHP], [test "x$enable_demo_php" = "xyes"])




dnl ***************************************************************************
dnl Extra modules export
dnl ***************************************************************************
AC_ARG_ENABLE([export-lisp],
    AS_HELP_STRING([--enable-export-lisp], [Enable Lisp format export]), , enable_export_lisp=yes)

AS_IF([test "x$enable_export_lisp" = "xyes"], [
  dnl Do the stuff needed for enabling the feature
  AC_DEFINE(ENABLE_EXPORT_LISP, 1, [Define to 1 if you are compiling export Lisp.])
], [enable_export_lisp="no"])
AM_CONDITIONAL([ENABLE_EXPORT_LISP], [test "x$enable_export_lisp" = "xyes"])


AC_ARG_ENABLE([export-d3],
    AS_HELP_STRING([--enable-export-d3], [Enable d3 format export]), , enable_export_d3=yes)

AS_IF([test "x$enable_export_d3" = "xyes"], [
  dnl Do the stuff needed for enabling the feature
  AC_DEFINE(ENABLE_EXPORT_D3, 1, [Define to 1 if you are compiling export D3.js.])
], [enable_export_d3="no"])
AM_CONDITIONAL([ENABLE_EXPORT_D3], [test "x$enable_export_d3" = "xyes"])





dnl ***************************************************************************
dnl Debug options
dnl ***************************************************************************
m4_define([debug_default],
              m4_if(m4_eval(antlr_micro_version % 2), [1], [minimum], [no]))
#m4_if(m4_eval(antlr_micro_version % 2), [1], [yes], [minimum]))

dnl declare --enable-* args and collect ac_help strings
AC_ARG_ENABLE(debug,
              [AS_HELP_STRING([--enable-debug=@<:@no/minimum/yes@:>@],
                              [turn on debugging @<:@default=debug_default@:>@])],,
              [enable_debug=debug_default])

if test "x$enable_debug" = "xyes"; then
  test "$cflags_set" = set || CFLAGS="$CFLAGS -g"
  ANTLR_DEBUG_FLAGS="-DG_ENABLE_DEBUG -DG_ENABLE_CONSISTENCY_CHECKS"
else
  if test "x$enable_debug" = "xno"; then
    ANTLR_DEBUG_FLAGS="-DG_DISABLE_ASSERT -DG_DISABLE_CHECKS -DG_DISABLE_CAST_CHECKS"
  else
    ANTLR_DEBUG_FLAGS="-DG_ENABLE_DEBUG -DG_DISABLE_CAST_CHECKS"
  fi
fi
ANTLR_DEBUG_FLAGS="$ANTLR_DEBUG_FLAGS $GLIB_VERSION_CFLAGS"
AC_SUBST(ANTLR_DEBUG_FLAGS)

dnl ***************************************************************************
dnl check for gtk-doc
dnl ***************************************************************************
m4_ifdef([GTK_DOC_CHECK], [
GTK_DOC_CHECK([1.14],[--flavour no-tmpl])
],[
AM_CONDITIONAL([ENABLE_GTK_DOC], false)
])


AC_CONFIG_FILES([
Makefile
src/Makefile
src/demo/Makefile
src/demo/mysql/Makefile
src/demo/php/Makefile
lib/Makefile
lib/antlr-runtime/Makefile
lib/antlr-runtime/dfa/Makefile
lib/antlr-runtime/atn/Makefile
lib/antlr-runtime/misc/Makefile
lib/antlr-runtime/tree/Makefile
lib/antlr-interpreter/Makefile
lib/antlr-interpreter/tree/Makefile
lib/antlr-interpreter/ast/Makefile
lib/antlr-interpreter/parse/Makefile
lib/mysql/Makefile
lib/php/Makefile
lib/sql/Makefile
lib/t/Makefile
modules/Makefile
modules/lisp/Makefile
modules/d3/Makefile
tests/Makefile
tests/antlr-runtime/Makefile
tests/antlr-runtime/mock/Makefile
tests/antlr-runtime/misc/Makefile
tests/antlr-runtime/atn/Makefile
tests/antlr-runtime/tree/Makefile
tests/antlr-runtime/dfa/Makefile
tests/antlr-interpreter/Makefile
tests/functional/Makefile
tests/functional/L/Makefile
tests/functional/T/Makefile
tests/functional/LexerExec/Makefile
tests/functional/LexerExec/LargeLexer/Makefile
tests/functional/LexerExec/ZeroLengthToken/Makefile
tests/functional/LexerExec/Slashes/Makefile
tests/functional/LexerExec/RefToRuleDoesNotSetTokenNorEmitAnother/Makefile
tests/functional/LexerExec/RecursiveLexerRuleRefWithWildcardStar_2/Makefile
tests/functional/LexerExec/RecursiveLexerRuleRefWithWildcardStar_1/Makefile
tests/functional/LexerExec/RecursiveLexerRuleRefWithWildcardPlus_2/Makefile
tests/functional/LexerExec/RecursiveLexerRuleRefWithWildcardPlus_1/Makefile
tests/functional/LexerExec/QuoteTranslation/Makefile
tests/functional/LexerExec/PositionAdjustingLexer/Makefile
tests/functional/LexerExec/Parentheses/Makefile
tests/functional/LexerExec/NonGreedyTermination2/Makefile
tests/functional/LexerExec/NonGreedyTermination1/Makefile
tests/functional/LexerExec/NonGreedyPositiveClosure/Makefile
tests/functional/LexerExec/NonGreedyOptional/Makefile
tests/functional/LexerExec/NonGreedyConfigs/Makefile
tests/functional/LexerExec/NonGreedyClosure/Makefile
tests/functional/LexerExec/KeywordID/Makefile
tests/functional/LexerExec/HexVsID/Makefile
tests/functional/LexerExec/GreedyPositiveClosure/Makefile
tests/functional/LexerExec/GreedyOptional/Makefile
tests/functional/LexerExec/GreedyConfigs/Makefile
tests/functional/LexerExec/GreedyClosure/Makefile
tests/functional/LexerExec/EOFSuffixInFirstRule_2/Makefile
tests/functional/LexerExec/EOFSuffixInFirstRule_1/Makefile
tests/functional/LexerExec/EOFByItself/Makefile
tests/functional/LexerExec/CharSetWithQuote2/Makefile
tests/functional/LexerExec/CharSetWithQuote1/Makefile
tests/functional/LexerExec/CharSetWithMissingEscapeChar/Makefile
tests/functional/LexerExec/CharSetWithMissingEndRange/Makefile
tests/functional/LexerExec/CharSetWithEscapedChar/Makefile
tests/functional/LexerExec/CharSetRange/Makefile
tests/functional/LexerExec/CharSetPlus/Makefile
tests/functional/LexerExec/CharSetNot/Makefile
tests/functional/LexerExec/CharSetInSet/Makefile
tests/functional/LexerExec/CharSet/Makefile
tests/functional/LexerExec/ActionPlacement/Makefile
tests/functional/ParserExec/Makefile
tests/functional/ParserExec/ReferenceToATN_2/Makefile
tests/functional/ParserExec/ReferenceToATN_1/Makefile
tests/functional/ParserExec/PredictionIssue334/Makefile
tests/functional/ParserExec/PredicatedIfIfElse/Makefile
tests/functional/ParserExec/ParserProperty/Makefile
tests/functional/ParserExec/Optional_4/Makefile
tests/functional/ParserExec/Optional_3/Makefile
tests/functional/ParserExec/Optional_2/Makefile
tests/functional/ParserExec/Optional_1/Makefile
tests/functional/ParserExec/MultipleEOFHandling/Makefile
tests/functional/ParserExec/ListLabelsOnSet/Makefile
tests/functional/ParserExec/ListLabelForClosureContext/Makefile
tests/functional/ParserExec/Labels/Makefile
tests/functional/ParserExec/LabelAliasingAcrossLabeledAlternatives/Makefile
tests/functional/ParserExec/LL1OptionalBlock_2/Makefile
tests/functional/ParserExec/LL1OptionalBlock_1/Makefile
tests/functional/ParserExec/IfIfElseNonGreedyBinding2/Makefile
tests/functional/ParserExec/IfIfElseNonGreedyBinding1/Makefile
tests/functional/ParserExec/IfIfElseGreedyBinding2/Makefile
tests/functional/ParserExec/IfIfElseGreedyBinding1/Makefile
tests/functional/ParserExec/EOFInClosure/Makefile
tests/functional/ParserExec/Basic/Makefile
tests/functional/ParserExec/AorBStar_2/Makefile
tests/functional/ParserExec/AorBStar_1/Makefile
tests/functional/ParserExec/AorBPlus/Makefile
tests/functional/ParserExec/AorB/Makefile
tests/functional/ParserExec/AorAStar_2/Makefile
tests/functional/ParserExec/AorAStar_1/Makefile
tests/functional/ParserExec/AorAPlus/Makefile
tests/functional/ParserExec/AStar_2/Makefile
tests/functional/ParserExec/AStar_1/Makefile
tests/functional/ParserExec/APlus/Makefile
tests/functional/LeftRecursion/Makefile
tests/functional/LeftRecursion/AmbigLR/Makefile
tests/functional/LeftRecursion/Declarations/Makefile
tests/functional/LeftRecursion/DirectCallToLeftRecursiveRule/Makefile
tests/functional/LeftRecursion/Expressions/Makefile
tests/functional/LeftRecursion/JavaExpressions/Makefile
tests/functional/LeftRecursion/MultipleActionsPredicatesOptions/Makefile
po/Makefile.in
docs/Makefile
docs/reference/Makefile
docs/reference/libantlr/Makefile
])

AC_OUTPUT

enable_export_graphviz="no"
enable_export_railroad="no"
enable_export_svg="no"
enable_export_latex="no"

echo ""
echo "glib-antlr runtime $ANTLR_VERSION configuration"
echo "======================================"
echo ""
echo "        Modules:"
echo "          * Lisp              $enable_export_lisp (Enable by default)"
echo "          * D3.js             $enable_export_d3 (Enable by default)"
echo "          * Graphviz          $enable_export_graphviz"
echo "          * Railroad          $enable_export_railroad"
echo "          * LaTeX             $enable_export_latex"
echo "          * Svg               $enable_export_svg"
echo "        Demos:"
echo "          * mysql             $enable_demo_mysql"
echo "          * php               $enable_demo_php"
echo "        Debugging:            $enable_debug"
echo "        Documentation:        $enable_gtk_doc"
echo "        Test:                 no|yes"
echo ""
