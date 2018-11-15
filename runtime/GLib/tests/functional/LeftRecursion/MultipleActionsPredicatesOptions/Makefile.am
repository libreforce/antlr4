## Process this file with automake to produce Makefile.in

## Created by Anjuta
libantlr= ${top_builddir}/lib/antlr-runtime/libantlr.la

AM_CFLAGS =                  \
    -DPACKAGE_SRC_DIR=\""$(srcdir)"\" \
    $(G_CFLAGS)              \
    -I${top_srcdir}/lib      \
    -I${top_srcdir}/modules  \
    $(NULL)

bin_PROGRAMS= functional_left_recursion_multiple_actions_predicates_options

functional_left_recursion_multiple_actions_predicates_options_SOURCES =       \
    TLexer.c                 \
    TLexer.h                 \
    TParser.c                \
    TParser.h                \
    TListener.c              \
    TListener.h              \
    TBaseListener.c          \
    TBaseListener.h          \
    main.c                   \
    $(NULL)

functional_left_recursion_multiple_actions_predicates_options_LDFLAGS =

functional_left_recursion_multiple_actions_predicates_options_LDADD=          \
    $(libantlr)              \
    $(G_LIBS)                \
    $(NULL)
