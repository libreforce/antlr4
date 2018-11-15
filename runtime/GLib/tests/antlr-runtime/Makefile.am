libantlr=$(top_builddir)/lib/antlr-runtime/libantlr.la
#libantlratn=$(top_builddir)/lib/antlr-runtime/atn/libantlratn.la
#libantlrtree=$(top_builddir)/lib/antlr-runtime/tree/libantlrtree.la
#libantlrdfa=$(top_builddir)/lib/antlr-runtime/dfa/libantlrdfa.la
#libantlrmisc=$(top_builddir)/lib/antlr-runtime/misc/libantlrmisc.la


libtests_libantlrdfa=$(top_builddir)/tests/antlr-runtime/dfa/libtests_libantlrdfa.la
libtests_libantlratn=$(top_builddir)/tests/antlr-runtime/atn/libtests_libantlratn.la
libtests_libantlrmisc=$(top_builddir)/tests/antlr-runtime/misc/libtests_libantlrmisc.la
libtests_libantlr=$(top_builddir)/tests/antlr-runtime/libtests_libantlr.la


# =============================================================================
# Dependencies
# =============================================================================
SUBDIRS= mock misc atn tree dfa

# =============================================================================
# Library test
# =============================================================================
check_LTLIBRARIES = libtests_libantlr.la

libtests_libantlr_la_SOURCES =  \
    common-token-stream.c       \
    common-token-stream.h       \
    suite.c                     \
    suite.h

libtests_libantlr_la_LIBADD =   \
    $(libantlr)                 \
    \
    $(libtests_libantlrdfa)     \
    $(libtests_libantlratn)     \
    $(libtests_libantlrmisc)    \
    \
    $(G_LIBS)

libtests_libantlr_la_LDFLAGS =  \
    -lm

libtests_libantlr_la_CFLAGS =   \
    -I$(top_srcdir)             \
    -I$(top_srcdir)/tests/antlr \
    $(G_CFLAGS)




# =============================================================================
# Program test
# =============================================================================
check_PROGRAMS = tests_libantlr

tests_libantlr_SOURCES =    \
    main.c

tests_libantlr_LDFLAGS =    \
    -lm

tests_libantlr_CFLAGS =         \
    -I$(top_srcdir)             \
    -I$(top_srcdir)/tests/antlr \
    $(G_CFLAGS)

tests_libantlr_LDADD =          \
    $(libantlr)                 \
    \
    $(libtests_libantlrdfa)     \
    $(libtests_libantlratn)     \
    $(libtests_libantlrmisc)    \
    $(libtests_libantlr)        \
    \
    $(G_LIBS)

TESTS= tests_libantlr
