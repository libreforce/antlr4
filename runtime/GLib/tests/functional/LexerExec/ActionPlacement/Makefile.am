## Process this file with automake to produce Makefile.in

## Created by Anjuta
libantlr= ${top_builddir}/lib/antlr-runtime/libantlr.la

AM_CFLAGS =                  \
    -DPACKAGE_SRC_DIR=\""$(srcdir)"\" \
    $(G_CFLAGS)              \
    -I${top_srcdir}/lib      \
    $(NULL)

#AM_CFLAGS=

check_PROGRAMS= lexer_exec_action_placement

lexer_exec_action_placement_SOURCES =       \
    L.c                      \
    main.c                   \
    $(NULL)

lexer_exec_action_placement_LDFLAGS =

lexer_exec_action_placement_LDADD=          \
    $(libantlr)              \
    $(G_LIBS)                \
    $(NULL)

TESTS = $(check_PROGRAMS)
