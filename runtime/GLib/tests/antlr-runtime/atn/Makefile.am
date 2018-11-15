libantlr=$(top_builddir)/lib/antlr-runtime/libantlr.la

libtests_libantlratn=$(top_builddir)/tests/antlr-runtime/atn/libtests_libantlratn.la
libtests_libantlrmock=$(top_builddir)/tests/antlr-runtime/mock/libtests_libantlrmock.la

# =============================================================================
# Library test
# =============================================================================
check_LTLIBRARIES = libtests_libantlratn.la

libtests_libantlratn_la_SOURCES =   \
    ordered-config-set.c            \
    ordered-config-set.h            \
    config-set.c                    \
    config-set.h                    \
    config.c                        \
    config.h                        \
    suite.c                         \
    suite.h

libtests_libantlratn_la_LIBADD =    \
    $(libantlr)                     \
    $(libtests_libantlrmock)        \
    \
    $(G_LIBS)

libtests_libantlratn_la_LDFLAGS =   \
    -lm

libtests_libantlratn_la_CFLAGS =    \
    -I$(top_srcdir)/lib             \
    -I$(top_srcdir)/tests/antlr/atn \
    $(G_CFLAGS)




# =============================================================================
# Program test
# =============================================================================
check_PROGRAMS = tests_libantlratn

tests_libantlratn_SOURCES =       \
    main.c

tests_libantlratn_LDFLAGS =       \
    -lm

tests_libantlratn_CFLAGS =        \
    -I$(top_srcdir)/lib           \
    -I$(top_srcdir)/tests/antlr   \
    $(G_CFLAGS)

tests_libantlratn_LDADD =         \
    $(libantlr)                   \
    \
    $(libtests_libantlratn)       \
    $(libtests_libantlrmock)      \
    \
    $(G_LIBS)
