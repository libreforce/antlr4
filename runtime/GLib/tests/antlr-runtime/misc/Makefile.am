libantlr=$(top_builddir)/lib/antlr-runtime/libantlr.la

#libantlratn=$(top_builddir)/lib/antlr-runtime/atn/libantlratn.la
#libantlrtree=$(top_builddir)/lib/antlr-runtime/tree/libantlrtree.la
#libantlrdfa=$(top_builddir)/lib/antlr-runtime/dfa/libantlrdfa.la
#libantlrmisc=$(top_builddir)/lib/antlr-runtime/misc/libantlrmisc.la

libtests_libantlrmisc=$(top_builddir)/tests/antlr-runtime/misc/libtests_libantlrmisc.la

# =============================================================================
# Library test
# =============================================================================
check_LTLIBRARIES = libtests_libantlrmisc.la

libtests_libantlrmisc_la_SOURCES =      \
    bit-set.c                           \
    bit-set.h                           \
    double-key-map.c                    \
    double-key-map.h                    \
    flexible-hash-map.c                 \
    flexible-hash-map.h                 \
    interval.c                          \
    interval.h                          \
    interval-set.c                      \
    interval-set.h                      \
    suite.c                             \
    suite.h                             \
    $(NULL)

libtests_libantlrmisc_la_LIBADD =       \
    $(libantlr)                         \
    \
    $(G_LIBS)

libtests_libantlrmisc_la_LDFLAGS =      \
    -lm

libtests_libantlrmisc_la_CFLAGS =       \
    -I$(top_srcdir)/lib                 \
    -I$(top_srcdir)/tests/antlr/misc    \
    $(G_CFLAGS)




# =============================================================================
# Program test
# =============================================================================
check_PROGRAMS = tests_libantlrmisc

tests_libantlrmisc_SOURCES =    \
    main.c

tests_libantlrmisc_LDFLAGS =    \
    -lm

tests_libantlrmisc_CFLAGS =        \
    -I$(top_srcdir)/lib            \
    -I$(top_srcdir)/tests/antlr    \
    $(G_CFLAGS)

tests_libantlrmisc_LDADD =      \
    $(libantlr)                 \
    \
    $(libtests_libantlrmisc)    \
    \
    $(G_LIBS)
