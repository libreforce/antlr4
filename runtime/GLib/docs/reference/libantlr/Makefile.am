
# The name of the module, e.g. 'glib'.
DOC_MODULE=antlr

# Uncomment for versioned docs and specify the version of the module, e.g. '2'.
DOC_MODULE_VERSION=4

# The top-level XML file.
DOC_MAIN_SGML_FILE=$(DOC_MODULE)-docs.xml

# Directories containing the source code.
# gtk-doc will search all .c and .h files beneath these paths
# for inline comments documenting functions and macros.
# e.g. DOC_SOURCE_DIR=$(top_srcdir)/gtk $(top_srcdir)/gdk
DOC_SOURCE_DIR=$(top_srcdir)/lib/antlr-runtime

# Extra options to pass to gtkdoc-scangobj. Normally not needed.
SCANGOBJ_OPTIONS=

# Extra options to supply to gtkdoc-scan.
# e.g. SCAN_OPTIONS=--deprecated-guards="GTK_DISABLE_DEPRECATED"
SCAN_OPTIONS= --rebuild-types

# Extra options to supply to gtkdoc-mkdb
# e.g. MKDB_OPTIONS=--xml-mode --output-format=xml
MKDB_OPTIONS=--xml-mode --output-format=xml

# Extra options to supply to gtkdoc-mkhtml
MKHTML_OPTIONS=

# Extra options to supply to gtkdoc-fixref. Normally not needed.
# e.g. FIXXREF_OPTIONS=--extra-dir=../gdk-pixbuf/html --extra-dir=../gdk/html
FIXXREF_OPTIONS=--extra-dir=/usr/share/gtk-doc/html/glib// --extra-dir=/usr/share/gtk-doc/html/gobject// --extra-dir=/usr/share/gtk-doc/html/gio//

# Used for dependencies. The docs will be rebuilt if any of these change.
# e.g. HFILE_GLOB=$(top_srcdir)/gtk/*.h
# e.g. CFILE_GLOB=$(top_srcdir)/gtk/*.c
HFILE_GLOB=                                   \
    $(top_srcdir)/lib/antlr-runtime/*.h       \
    $(top_srcdir)/lib/antlr-runtime/atn/*.h   \
    $(top_srcdir)/lib/antlr-runtime/tree/*.h  \
    $(top_srcdir)/lib/antlr-runtime/dfa/*.h   \
    $(top_srcdir)/lib/antlr-runtime/misc/*.h  \
    $(NULL)

CFILE_GLOB=                                   \
    $(top_srcdir)/lib/antlr-runtime/*.c       \
    $(top_srcdir)/lib/antlr-runtime/atn/*.c   \
    $(top_srcdir)/lib/antlr-runtime/tree/*.c  \
    $(top_srcdir)/lib/antlr-runtime/dfa/*.c   \
    $(top_srcdir)/lib/antlr-runtime/misc/*.c  \
    $(NULL)

# Extra header to include when scanning, which are not under DOC_SOURCE_DIR
# e.g. EXTRA_HFILES=$(top_srcdir}/contrib/extra.h
EXTRA_HFILES=

# Header files or dirs to ignore when scanning. Use base file/dir names
# e.g. IGNORE_HFILES=gtkdebug.h gtkintl.h private_code
IGNORE_HFILES= prediction-mode.h prediction-mode.c

# Images to copy into HTML directory.
# e.g. HTML_IMAGES=$(top_srcdir)/gtk/stock-icons/stock_about_24.png
#HTML_IMAGES=html/favicon.png html/antlr-logo.png
#TODO uncomment HTML_IMAGES
# HTML_IMAGES genere une erreur et bloque tout quand les image existe deja


# Extra files that are included by $(DOC_MAIN_SGML_FILE).
# e.g. content_files=running.xml building.xml changes-2.0.xml
content_files= \
    runtime-build.xml \
        runtime-build-linux.xml \
            runtime-build-linux-ubuntu.xml \
            runtime-build-linux-fedora.xml \
        runtime-build-win.xml \
        runtime-build-mac.xml \
    application-build.xml \
    application-running.xml \
    master-parser.xml \
    master-lexer.xml \
    master-listener.xml \
    master-visitor.xml \
    master-stream.xml \
    getting-started.xml

#content_files=



# Files where gtk-doc abbrevations (#GtkWidget) are expanded
# e.g. expand_content_files=running.xml
expand_content_files=

# CFLAGS and LDFLAGS for compiling gtkdoc-scangobj with your library.
# Only needed if you are using gtkdoc-scangobj to dynamically query widget
# signals and properties.
# e.g. GTKDOC_CFLAGS=-I$(top_srcdir) -I$(top_builddir) $(GTK_DEBUG_FLAGS)
# e.g. GTKDOC_LIBS=$(top_builddir)/gtk/$(gtktargetlib)
GTKDOC_CFLAGS=                                \
    -I$(top_srcdir)/lib/antlr-runtime         \
    -I$(top_srcdir)/lib/antlr-runtime/tree    \
    -I$(top_srcdir)/lib/antlr-runtime/atn     \
    -I$(top_srcdir)/lib/antlr-runtime/dfa     \
    -I$(top_srcdir)/lib/antlr-runtime/misc    \
    $(NULL)

GTKDOC_LIBS=                                  \
    $(top_builddir)/lib/antlr-runtime/.libs/libantlr.so \
    $(NULL)


# This includes the standard gtk-doc make rules, copied by gtkdocize.
include $(top_srcdir)/gtk-doc.make

# Comment this out if you want 'make check' to test you doc status
# and run some sanity checks
if ENABLE_GTK_DOC
TESTS_ENVIRONMENT = \
  DOC_MODULE=$(DOC_MODULE) DOC_MAIN_SGML_FILE=$(DOC_MAIN_SGML_FILE) \
  SRCDIR=$(abs_srcdir) BUILDDIR=$(abs_builddir)
#TESTS = $(GTKDOC_CHECK)
endif

-include $(top_srcdir)/git.mk
