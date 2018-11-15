## Process this file with automake to produce Makefile.in

## Created by Anjuta
libantlr= ${top_builddir}/lib/antlr-runtime/libantlr.la

AM_CFLAGS =                  \
    -DPACKAGE_SRC_DIR=\""$(srcdir)"\" \
    $(G_CFLAGS)              \
    -I${top_srcdir}/lib      \
    -I${top_srcdir}/modules  \
    $(NULL)

bin_PROGRAMS= functional_left_recursion_direct_call_to_left_recursive_rule

functional_left_recursion_direct_call_to_left_recursive_rule_SOURCES =       \
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

functional_left_recursion_direct_call_to_left_recursive_rule_LDFLAGS =

functional_left_recursion_direct_call_to_left_recursive_rule_LDADD=          \
    $(libantlr)              \
    $(G_LIBS)                \
    $(NULL)
