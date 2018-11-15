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

check_PROGRAMS= functional_t_parser_exec_aor_bstar_2

functional_t_parser_exec_aor_bstar_2_SOURCES =       \
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

functional_t_parser_exec_aor_bstar_2_LDFLAGS =

functional_t_parser_exec_aor_bstar_2_LDADD=          \
    $(libantlr)              \
    $(G_LIBS)                \
    $(NULL)


TESTS = $(check_PROGRAMS)
