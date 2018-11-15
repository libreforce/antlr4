## Process this file with automake to produce Makefile.in

## Created by Anjuta
libantlr= ${top_builddir}/lib/antlr-runtime/libantlr.la

AM_CFLAGS =                  \
    -DPACKAGE_SRC_DIR=\""$(srcdir)"\" \
    $(G_CFLAGS)              \
    -I${top_srcdir}/lib      \
    $(NULL)

#AM_CFLAGS=

check_PROGRAMS= lexer_exec_ref_to_rule_does_not_set_token_nor_emit_another

lexer_exec_ref_to_rule_does_not_set_token_nor_emit_another_SOURCES =       \
    L.c                      \
    main.c                   \
    $(NULL)

lexer_exec_ref_to_rule_does_not_set_token_nor_emit_another_LDFLAGS =

lexer_exec_ref_to_rule_does_not_set_token_nor_emit_another_LDADD=          \
    $(libantlr)              \
    $(G_LIBS)                \
    $(NULL)

TESTS = $(check_PROGRAMS)
