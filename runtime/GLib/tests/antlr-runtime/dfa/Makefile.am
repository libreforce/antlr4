libantlr=$(top_builddir)/lib/antlr-runtime/libantlr.la

libtests_libantlrdfa=$(top_builddir)/tests/antlr-runtime/dfa/libtests_libantlrdfa.la
libtests_libantlrmock=$(top_builddir)/tests/antlr-runtime/mock/libtests_libantlrmock.la

# =============================================================================
# Library test
# =============================================================================
check_LTLIBRARIES = libtests_libantlrdfa.la

libtests_libantlrdfa_la_SOURCES =   \
    dfa-state.c                     \
    dfa-state.h                     \
    dfa.c                           \
    dfa.h                           \
    suite.c                         \
    suite.h

libtests_libantlrdfa_la_LIBADD =    \
    $(libantlr)                     \
    $(libtests_libantlrmock)        \
    \
    $(G_LIBS)

libtests_libantlrdfa_la_LDFLAGS =   \
    -lm

libtests_libantlrdfa_la_CFLAGS =    \
    -I$(top_srcdir)/lib             \
    -I$(top_srcdir)/tests/antlr/dfa \
    $(G_CFLAGS)




# =============================================================================
# Program test
# =============================================================================
check_PROGRAMS = tests_libantlrdfa

tests_libantlrdfa_SOURCES =    \
    main.c

tests_libantlrdfa_LDFLAGS =    \
    -lm

tests_libantlrdfa_CFLAGS =        \
    -I$(top_srcdir)/lib            \
    -I$(top_srcdir)/tests/antlr    \
    $(G_CFLAGS)

tests_libantlrdfa_LDADD =      \
    $(libantlr)                 \
    \
    $(libtests_libantlrdfa)    \
    $(libtests_libantlrmock)        \
    \
    $(G_LIBS)
