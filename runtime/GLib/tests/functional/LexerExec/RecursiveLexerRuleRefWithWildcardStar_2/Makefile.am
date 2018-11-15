## Process this file with automake to produce Makefile.in

## Created by Anjuta
libantlr= ${top_builddir}/lib/antlr-runtime/libantlr.la

AM_CFLAGS =                  \
    -DPACKAGE_SRC_DIR=\""$(srcdir)"\" \
    $(G_CFLAGS)              \
    -I${top_srcdir}/lib      \
    $(NULL)

#AM_CFLAGS=

check_PROGRAMS= lexer_exec_recursive_lexer_rule_ref_with_wildcard_star_2

lexer_exec_recursive_lexer_rule_ref_with_wildcard_star_2_SOURCES =       \
    L.c                      \
    main.c                   \
    $(NULL)

lexer_exec_recursive_lexer_rule_ref_with_wildcard_star_2_LDFLAGS =

lexer_exec_recursive_lexer_rule_ref_with_wildcard_star_2_LDADD=          \
    $(libantlr)              \
    $(G_LIBS)                \
    $(NULL)

TESTS = $(check_PROGRAMS)
