libantlr=$(top_builddir)/lib/antlr-runtime/libantlr.la

# =============================================================================
# Library test
# =============================================================================
check_LTLIBRARIES = libtests_libantlrmock.la

libtests_libantlrmock_la_SOURCES =   \
    config.c                         \
    config.h                         \
    config-set.c                     \
    config-set.h                     \
    prediction.c                     \
    prediction.h                     \
    dfa-state.c                      \
    dfa-state.h                      \
    dfa.c                            \
    dfa.h                            \
    $(NULL)

libtests_libantlrmock_la_LIBADD =    \
    $(libantlr)                      \
    \
    $(G_LIBS)                        \
    $(NULL)

libtests_libantlrmock_la_LDFLAGS =   \
    -lm

libtests_libantlrmock_la_CFLAGS =    \
    -I$(top_srcdir)/lib              \
    $(G_CFLAGS)                      \
    $(NULL)
