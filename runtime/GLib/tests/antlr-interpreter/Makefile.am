libantlr=$(top_builddir)/lib/antlr-runtime/libantlr.la
#libantlratn=$(top_builddir)/lib/antlr-runtime/atn/libantlratn.la
#libantlrtree=$(top_builddir)/lib/antlr-runtime/tree/libantlrtree.la
#libantlrdfa=$(top_builddir)/lib/antlr-runtime/dfa/libantlrdfa.la
#libantlrmisc=$(top_builddir)/lib/antlr-runtime/misc/libantlrmisc.la

libantlrinterpreter=$(top_builddir)/lib/antlr-interpreter/libantlr_interpreter.la


libtests_libantlratn=$(top_builddir)/tests/antlr-runtime/atn/libtests_libantlratn.la
libtests_libantlrmisc=$(top_builddir)/tests/antlr-runtime/misc/libtests_libantlrmisc.la
libtests_libantlr=$(top_builddir)/tests/antlr-runtime/libtests_libantlr.la

libtests_libantlrinterpreter=$(top_builddir)/tests/antlr-interpreter/libtests_libantlrinterpreter.la


# =============================================================================
# Dependencies
# =============================================================================
#SUBDIRS= ast tree

# =============================================================================
# Library test
# =============================================================================
check_LTLIBRARIES = libtests_libantlrinterpreter.la

libtests_libantlrinterpreter_la_SOURCES =   \
    suite.c                                 \
    suite.h                                 \
    $(NULL)

libtests_libantlrinterpreter_la_LIBADD =    \
    $(libantlr)                             \
    \
    $(libantlrinterpreter)                  \
    \
    $(G_LIBS)                               \
    $(NULL)

libtests_libantlrinterpreter_la_LDFLAGS =   \
    -lm

libtests_libantlrinterpreter_la_CFLAGS =    \
    -I$(top_srcdir)                         \
    -I$(top_srcdir)/lib                     \
    -I$(top_srcdir)/tests/antlr-interpreter \
    $(G_CFLAGS)                             \
    $(NULL)




# =============================================================================
# Program test
# =============================================================================
check_PROGRAMS = tests_libantlrinterpreter

tests_libantlrinterpreter_SOURCES =         \
    main.c

tests_libantlrinterpreter_LDFLAGS =         \
    -lm

tests_libantlrinterpreter_CFLAGS =          \
    -DGETTEXT_PACKAGE=\"GLR\"               \
    -I$(top_srcdir)                         \
    -I$(top_srcdir)/lib                     \
    -I$(top_srcdir)/tests/antlr-interpreter \
    $(G_CFLAGS)

tests_libantlrinterpreter_LDADD =           \
    $(libantlr)                             \
    \
    $(libantlrinterpreter)                  \
    $(libtests_libantlrinterpreter)         \
    \
    $(G_LIBS)                               \
    $(NULL)
