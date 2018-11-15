## Process this file with automake to produce Makefile.in

## Created by Anjuta
libantlr= ${top_builddir}/lib/antlr-runtime/libantlr.la
libmysql= ${top_builddir}/lib/mysql/libmysql.la

AM_CFLAGS = \
        -DPACKAGE_LOCALE_DIR=\""$(localedir)"\" \
        -DPACKAGE_SRC_DIR=\""$(srcdir)"\" \
        -DPACKAGE_DATA_DIR=\""$(pkgdatadir)"\" \
        $(G_CFLAGS) \
        $(GTK_CFLAGS) \
        -I${top_srcdir}/lib \
        -I${top_srcdir}/modules \
        $(NULL)

#AM_CFLAGS=

bin_PROGRAMS= mysql_antlr

mysql_antlr_SOURCES = \
        main.c

mysql_antlr_LDFLAGS =

mysql_antlr_LDADD= \
    $(GTK_LIBS) \
    $(G_LIBS) \
    $(libantlr) \
    $(libmysql)
