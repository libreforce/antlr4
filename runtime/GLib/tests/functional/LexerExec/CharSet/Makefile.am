## Process this file with automake to produce Makefile.in
libantlr=$(top_builddir)/lib/antlr-runtime/libantlr.la

# =============================================================================
# Program test
# =============================================================================

check_PROGRAMS= lexer_exec_char_set

lexer_exec_char_set_SOURCES =         \
    L.c                               \
    L.h                               \
    test.c                            \
    test.h                            \
    main.c                            \
    $(NULL)

lexer_exec_char_set_LDFLAGS =

lexer_exec_char_set_CFLAGS =          \
    -DPACKAGE_SRC_DIR=\""$(srcdir)"\" \
    -I$(top_srcdir)/lib             \
    $(G_CFLAGS)

lexer_exec_char_set_LDADD=            \
    $(libantlr)                       \
    $(G_LIBS)                         \
    $(NULL)

TESTS = $(check_PROGRAMS)
