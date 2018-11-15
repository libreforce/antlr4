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

bin_PROGRAMS= functional_l

functional_l_SOURCES =       \
    L.c                      \
    main.c                   \
    $(NULL)

functional_l_LDFLAGS =

functional_l_LDADD=          \
    $(libantlr)              \
    $(G_LIBS)                \
    $(NULL)
