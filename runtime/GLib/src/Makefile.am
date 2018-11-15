## Process this file with automake to produce Makefile.in

## Created by Anjuta
libantlr= ${top_builddir}/lib/antlr-runtime/libantlr.la
libantlratn= ${top_builddir}/lib/antlr-runtime/atn/libantlratn.la
libantlrdfa= ${top_builddir}/lib/antlr-runtime/dfa/libantlrdfa.la
libantlrtree= ${top_builddir}/lib/antlr-runtime/tree/libantlrtree.la
libantlrmisc= ${top_builddir}/lib/antlr-runtime/misc/libantlrmisc.la
libphp= ${top_builddir}/lib/php/libphp.la
libsql= ${top_builddir}/lib/sql/libsql.la
libmysql= ${top_builddir}/lib/mysql/libmysql.la

embeded_grammar=
if ENABLE_DEMO_MYSQL
embeded_grammar+= $(libmysql)
endif
if ENABLE_DEMO_PHP
embeded_grammar+= $(libphp)
endif

SUBDIRS=demo

AM_CFLAGS = \
	-DPACKAGE_LOCALE_DIR=\""$(localedir)"\" \
	-DPACKAGE_SRC_DIR=\""$(srcdir)"\" \
	-DPACKAGE_DATA_DIR=\""$(pkgdatadir)"\" \
        $(G_CFLAGS) \
        $(GTK_CFLAGS) \
        -I${top_srcdir}/lib

#AM_CFLAGS=

bin_PROGRAMS= org_antlr_tool

org_antlr_tool_SOURCES = \
        main.c

org_antlr_tool_LDFLAGS =

org_antlr_tool_LDADD=     \
    $(GTK_LIBS)           \
    $(G_LIBS)             \
    $(libantlratn)        \
    $(libantlrdfa)        \
    $(libantlrtree)       \
    $(libantlrmisc)       \
    $(libantlr)           \
    $(embeded_grammar)    \
    $(NULL)


if PLATFORM_WIN32
org_antlr_tool_LDFLAGS += -Wl,--export-all-symbols
else
org_antlr_tool_LDFLAGS += -Wl,--export-dynamic
endif

if NATIVE_WIN32
org_antlr_tool_LDFLAGS += -mwindows
endif


