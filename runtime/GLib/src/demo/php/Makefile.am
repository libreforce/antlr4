## Process this file with automake to produce Makefile.in
#LD_LIBRARY_PATH=/home/gaulouis/local/build/glib-antlr-debug/lib/antlr/.libs:/home/gaulouis/local/build/glib-antlr-debug/lib/sql/.libs:/home/gaulouis/local/build/glib-antlr-debug/lib/mysql/.libs:/home/gaulouis/local/build/glib-antlr-debug/lib/php/.libs

## Created by Anjuta
libantlr= ${top_builddir}/lib/antlr-runtime/libantlr.la
libphp= ${top_builddir}/lib/php/libphp.la

bin_PROGRAMS= php_antlr

php_antlr_CFLAGS =                                  \
        $(ANTLR_DEBUG_FLAGS)                        \
        -DPACKAGE_LOCALE_DIR=\""$(localedir)"\"     \
        -DPACKAGE_SRC_DIR=\""$(srcdir)"\"           \
        -DPACKAGE_DATA_DIR=\""$(pkgdatadir)"\"      \
        $(G_CFLAGS)                                 \
        $(GTK_CFLAGS)                               \
        -I${top_srcdir}/lib                         \
        -I${top_srcdir}/modules                     \
        $(NULL)

#AM_CFLAGS=
#CFLAGS=

#CFLAGS=
#CPPFLAGS=
#CXXFLAGS=

php_antlr_SOURCES = \
        main.c

php_antlr_LDFLAGS =

php_antlr_LDADD= \
    $(GTK_LIBS) \
    $(G_LIBS) \
    $(libantlr) \
    $(libphp)
