## Process this file with automake to produce Makefile.in

## Created by Anjuta
libantlr= ${top_builddir}/lib/antlr-runtime/libantlr.la

AM_CFLAGS =                  \
    -DPACKAGE_SRC_DIR=\""$(srcdir)"\" \
    $(G_CFLAGS)              \
    -I${top_srcdir}/lib      \
    -I${top_srcdir}/modules  \
    $(NULL)

#AM_CFLAGS=

bin_PROGRAMS= functional_parser_exec_a_plus
#check_PROGRAMS= functional_parser_exec_a_plus

functional_parser_exec_a_plus_SOURCES =       \
    TLexer.c                 \
    TParser.c                \
    TListener.c              \
    TBaseListener.c          \
    TLexer.h                 \
    TParser.h                \
    TListener.h              \
    TBaseListener.h          \
    main.c                   \
    $(NULL)

functional_parser_exec_a_plus_LDFLAGS =

functional_parser_exec_a_plus_LDADD=          \
    $(libantlr)              \
    $(G_LIBS)                \
    $(NULL)


#TESTS = $(check_PROGRAMS)
