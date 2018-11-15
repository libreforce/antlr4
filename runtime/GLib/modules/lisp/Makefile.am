noinst_LTLIBRARIES=libantlrlisp.la


libantlrlisp_la_SOURCES=\
    lisp.c \
    lisp.h \
    $(NULL)



libantlrlisp_la_CFLAGS= \
    $(ANTLR_DEBUG_FLAGS) \
    $(G_CFLAGS) \
    -I${top_srcdir}/lib \
    $(NULL)

libantlrlisp_la_LIBADD= \
    $(G_LIBS) \
    $(NULL)

