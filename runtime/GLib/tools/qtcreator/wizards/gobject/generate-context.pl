#!/usr/bin/perl -w

use strict;
use Getopt::Long;
use IO::File;
use Cwd 'abs_path';
use File::Basename;


# class_name;   # GsnDOMDocument : Nom de la classe
# parent_class; # GObject   : Classe parent

# prefix;       # GNS
# type_object   # DOM_DOCUMENT
# class_prefix  # gsn_dom_document

# autor         # nom de l'auteur
# couriel       # 
# project_name  #


my %parameters = ('class_name',         '',  # GtkWidget
		  'class_name_preffix', '',  # Gtk
		  'class_name_suffix',  '',  # Widget
		  'class_type',         '',  # GTK_TYPE_WIDGET
		  'class_type_preffix', '',  # GTK
		  'class_type_suffix',  '',  # WIDGET
		  'preffix',            '',  # gtk_widget
		  'parent_name',        '',  # GObject
		  'parent_type',        ''); # G_TYPE_OBJECT


my $optHelp             = 0;
my $optDryRun           = 0;
my $optClassNamePreffix = '';
my $optClassNameSuffix  = '';
my $optParentType       = '';
my $optParentName       = '';
my $optProjectName      = '';
my $optLicence          = '';
my $optFilenamePreffix  = 0;
my $optUsePrivate       = 0;

my $optHeaderSuffix = 'h';
my $optSourceSuffix = 'c';
my $optProject = 'Canvas';
my $optDate = '2014';
my $optAutor = 'Sergio DE VASCONCELOS';
my $optContact = '<schaublore@gmail.com>';

sub readFile
{
    my ($fileName) = @_;
    my @rc = ();
    my $fh = new IO::File('<' . $fileName) or die ('Unable to open for reading ' .  $fileName . ' :' . $!);
    while (my $line = <$fh>) {
	chomp($line);
        push (@rc, $line);
    }
    $fh->close();
    return @rc;
}

sub get_parameters
{
	$parameters{'class_name_preffix'} = $optClassNamePreffix;
	$parameters{'class_name_suffix'}  = $optClassNameSuffix;
	my $tmpPreffix = $optClassNamePreffix;
	$tmpPreffix =~ s/([A-Z][a-z]+)/_$1/g;
	$tmpPreffix =~ s/([a-z])([A-Z]+)/$1_$2/g;
	$tmpPreffix =~ s/^_//; # Gns

	my $tmpSuffix = $optClassNameSuffix;
	$tmpSuffix =~ s/([A-Z][a-z]+)/_$1/g;
	$tmpSuffix =~ s/([a-z])([A-Z]+)/$1_$2/g;
	$tmpSuffix =~ s/^_//; # DOM_Document

	$parameters{'class_name'} = $optClassNamePreffix . $optClassNameSuffix;# GnsDOMDocument


	$parameters{'class_type_preffix'} = uc($tmpPreffix);

	$parameters{'class_type_suffix'} = uc($tmpSuffix);
	$parameters{'class_type'} = $parameters{'class_type_preffix'} . '_TYPE_' . $parameters{'class_type_suffix'};

	$parameters{'preffix'} = lc($tmpPreffix) . '_' . lc($tmpSuffix);

	$parameters{'parent_name'} = $optParentName;# TODO: generate $optParentType if null
	$parameters{'parent_type'} = $optParentType;

}

sub generateC
{
	my $basename = ($_[0]);
	my $sourceFileName = $basename.'.c';

	my $content  = '';

	my $licenceFileName = dirname(abs_path($0)) . '/' . lc($optLicence) . '.txt';
	if ($optLicence ne '') {
		foreach my $line (readFile($licenceFileName)) {
			$line =~ s/\@FILE\@/$sourceFileName/g;
			$line =~ s/\@AUTOR\@/$optAutor/g;
			$line =~ s/\@CONTACT\@/$optContact/g;
			$content .= $line. "\n";
		}
	}
	$content .= "\n";

	$content .= '#include "antlr/types.h"' . "\n";
	$content .= '#include "antlr/tree/tree.h"' . "\n";
	$content .= '#include "antlr/tree/syntax-tree.h"' . "\n";
	$content .= '#include "antlr/tree/parse-tree.h"' . "\n";
	$content .= '#include "antlr/tree/terminal-node.h"' . "\n";
	$content .= '#include "antlr/tree/terminal-node-impl.h"' . "\n";
	$content .= '#include "antlr/tree/error-node.h"' . "\n";
	$content .= '#include "antlr/tree/error-node-impl.h"' . "\n";
	$content .= '#include "antlr/tree/parse-tree-listener.h"' . "\n";
	$content .= '#include "antlr/rule-node.h"' . "\n";
	$content .= '#include "antlr/rule-context.h"' . "\n";
	$content .= '#include "antlr/parser-rule-context.h"' . "\n";
	$content .= "\n";
	$content .= '#include "antlr/vocabulary.h"' . "\n";
	$content .= "\n";
	$content .= '#include "antlr/misc/int-iset.h"' . "\n";
	$content .= '#include "antlr/misc/interval.h"' . "\n";
	$content .= '#include "antlr/misc/interval-set.h"' . "\n";
	$content .= "\n";
	$content .= '#include "antlr/vocabulary-impl.h"' . "\n";
	$content .= '#include "antlr/atn/atn-simulator.h"' . "\n";
	$content .= "\n";
	$content .= '#include "antlr/recognizer.h"' . "\n";
	$content .= '#include "antlr/parser.h"' . "\n";
	$content .= "\n";
	$content .= '#include "sql-types.h"' . "\n";
	$content .= '#include "sql-parser.h"' . "\n";


	$content .= '#include "' . $basename . '.h"' . "\n";

	$content .= "\n\n";

	if ($optUsePrivate eq '1') {
		$content .= '#define ' . $parameters{'class_type_preffix'} . '_' . $parameters{'class_type_suffix'} . '_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), ' . $parameters{'class_type'} . ', ' . $parameters{'class_name'} . 'Private))' . "\n";
		
		$content .= 'struct _' . $parameters{'class_name'} . 'Private {' . "\n";
		$content .= "\t" . 'int foo;' . "\n";
		$content .= '};' . "\n";

		$content .= "\n\n";
	}

	$content .= 'static void ' . $parameters{'preffix'} . '_class_init(' . $parameters{'class_name'} . 'Class *klass);' . "\n";
	$content .= 'static void ' . $parameters{'preffix'} . '_init(' . $parameters{'class_name'} . ' *gobject);' . "\n";
	$content .= "\n";

	$content .= 'G_DEFINE_TYPE (' . $parameters{'class_name'}.', '.$parameters{'preffix'}.', '.$parameters{'parent_type'}.')'. "\n";

	$content .= 'static gint' . "\n";
	$content .= $parameters{'preffix'} . '_class_rule_context_get_rule_index(AntlrRuleContext *self) {' . "\n";
	$content .= '    return SQL_RULE_stat;' . "\n";
	$content .= '}' . "\n";

	$content .= 'static void' . "\n";
	$content .= $parameters{'preffix'} . '_class_parser_rule_context_enter_rule(AntlrParserRuleContext *self, AntlrParseTreeListener *listener) {' . "\n";
	$content .= '    //TODO: if ( listener instanceof SQLParserListener ) ((SQLParserListener)listener).enterStat(this);' . "\n";
	$content .= '}' . "\n";

	$content .= 'static void' . "\n";
	$content .= $parameters{'preffix'} . '_class_parser_rule_context_exit_rule(AntlrParserRuleContext *self, AntlrParseTreeListener *listener) {' . "\n";
	$content .= '    //TODO: if ( listener instanceof SQLParserListener ) ((SQLParserListener)listener).exitStat(this);' . "\n";
	$content .= '}' . "\n";


	$content .= "\n";

	if (0) {
		$content .= 'static void' . "\n" . $parameters{'preffix'} . '_finalize(GObject *object)' . "\n";
		$content .= "{\n";
		$content .= '	/* TODO: Add deinitalization code here */' . "\n";
		$content .= '' . "\n";
		$content .= '	G_OBJECT_CLASS (' . $parameters{'preffix'} . '_parent_class)->finalize (object);' . "\n";
		$content .= "}\n";
	}	

	$content .= 'static void' . "\n";
	$content .= $parameters{'preffix'}.'_class_init(' . $parameters{'class_name'}.'Class *klass)'. "\n";
	$content .= '{' . "\n";
	$content .= "\t". 'AntlrParserRuleContextClass *parser_rule_context_class;'. "\n";
	$content .= "\t". 'AntlrRuleContextClass *rule_context_class;' . "\n";
	$content .= "\n";
	$content .= "\t". 'parser_rule_context_class = (AntlrParserRuleContextClass *) klass;'. "\n";
	$content .= "\t". 'rule_context_class = (AntlrRuleContextClass *) klass;' . "\n";
	$content .= "\n";
  $content .= "\t". 'parser_rule_context_class->enter_rule = ' . $parameters{'preffix'} . '_class_parser_rule_context_enter_rule;'. "\n";
  $content .= "\t". 'parser_rule_context_class->exit_rule = ' . $parameters{'preffix'} . '_class_parser_rule_context_exit_rule;'. "\n";
	$content .= "\n";
  $content .= "\t". 'rule_context_class->get_rule_index = ' . $parameters{'preffix'} . '_class_rule_context_get_rule_index;'. "\n";
	if (0) {
		$content .= "\t". lc($parameters{'parent_name'}).'_class->finalize = '.$parameters{'preffix'}.'_finalize;'. "\n";
	}

	$content .= "\n";
	if ($optUsePrivate eq '1') {
		$content .= 'g_type_class_add_private(klass, sizeof(' . $parameters{'class_name'} . 'Private));' . "\n";
	}
	$content .= "\t". $parameters{'preffix'}. '_parent_class = g_type_class_peek_parent (klass);'. "\n";
	$content .= '}'. "\n";
	$content .= "\n";

	$content .= 'static void' . "\n";
	$content .= $parameters{'preffix'}.'_init (' . $parameters{'class_name'}.' *object)' . "\n";
	$content .= '{' . "\n";
	if ($optUsePrivate eq '1') {
		$content .= "\t" . $parameters{'class_name'} . 'Private *priv = ' . $parameters{'class_type_preffix'} . '_' . $parameters{'class_type_suffix'} . "_GET_PRIVATE(object);\n";
		$content .= "\t" . 'object->private_member = priv;' . "\n";
		$content .= "\t" . 'priv->foo = 0;' . "\n";
	}
	$content .= '}' . "\n";

	$content .= "\n";

	$content .= $parameters{'class_name'}.' *' . "\n";
	$content .= $parameters{'preffix'}.'_new (void)' . "\n";
	$content .= '{' . "\n";
	$content .= "\t" . 'return g_object_new ('.$parameters{'preffix'}.'_get_type (),' . "\n";
	$content .= "\t" . '                     NULL);' . "\n";
	$content .= '}' . "\n";

	return $content;
}

sub generateH
{
	my $basename = ($_[0]);
	my $sourceFileName = $basename.'.h';

	my $content  = '';

	my $licenceFileName = dirname(abs_path($0)) . '/' . lc($optLicence) . '.txt';
	if ($optLicence ne '') {
		foreach my $line (readFile($licenceFileName)) {
			$line =~ s/\@FILE\@/$sourceFileName/g;
			$line =~ s/\@AUTOR\@/$optAutor/g;
			$line =~ s/\@CONTACT\@/$optContact/g;
			$content .= $line. "\n";
		}
	}
	$content .= "\n";

	$content .= '#ifndef __' . $parameters{'class_type_preffix'} . '_' . $parameters{'class_type_suffix'} . '_H__' . "\n";
	$content .= '#define __' . $parameters{'class_type_preffix'} . '_' . $parameters{'class_type_suffix'} . '_H__' . "\n";

	$content .= "\n";

	$content .= '#include <glib-object.h>' . "\n";

	$content .= "\n\n";

	$content .= 'G_BEGIN_DECLS' . "\n\n";

	$content .= '#define ' . $parameters{'class_type'} . '            (' . $parameters{'preffix'} . '_get_type())'. "\n";
	$content .= '#define ' . $parameters{'class_type_preffix'} . '_' . $parameters{'class_type_suffix'} . '(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), ' . $parameters{'class_type'} . ', ' . $parameters{'class_name'} . '))' . "\n";
	$content .= '#define ' . $parameters{'class_type_preffix'} . '_' . $parameters{'class_type_suffix'} . '_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass), ' . $parameters{'class_type'} . ', ' . $parameters{'class_name'} . 'Class))' . "\n";
	$content .= '#define ' . $parameters{'class_type_preffix'} . '_IS_' . $parameters{'class_type_suffix'} . '(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), ' . $parameters{'class_type'} . '))' . "\n";
	$content .= '#define ' . $parameters{'class_type_preffix'} . '_IS_' . $parameters{'class_type_suffix'} . '_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), ' . $parameters{'class_type'} . '))' . "\n";
	$content .= '#define ' . $parameters{'class_type_preffix'} . '_' . $parameters{'class_type_suffix'} . '_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj), ' . $parameters{'class_type'} . ', ' . $parameters{'class_name'} . 'Class))' . "\n";

	$content .= "\n";
    
	$content .= 'typedef struct _' . $parameters{'class_name'} . ' ' . $parameters{'class_name'} . ";\n";
	if ($optUsePrivate eq '1') {
		$content .= 'typedef struct _' . $parameters{'class_name'} . 'Private ' . $parameters{'class_name'} . 'Private' . ";\n";
	}
	$content .= 'typedef struct _' . $parameters{'class_name'} . 'Class ' . $parameters{'class_name'} . 'Class' . ";\n";

	$content .= "\n";
	
	$content .= 'struct _' . $parameters{'class_name'} . ' {' . "\n";
	$content .= "\t" . $parameters{'parent_name'} . ' parent_instance;' . "\n";
	if ($optUsePrivate eq '1') {
		$content .= "\t" . '/* private */' . "\n";
		$content .= "\t" . $parameters{'class_name'} . 'Private' . ' *private_member' . ";\n";
	}
	$content .= '};' . "\n";

	$content .= "\n";

	$content .= 'struct _' . $parameters{'class_name'} . 'Class {' . "\n";
	$content .= "\t" . $parameters{'parent_name'} . 'Class parent_class;' . "\n";
	$content .= '};' . "\n";

	$content .= "\n";

	$content .= 'GType ' . $parameters{'preffix'} . '_get_type();' . "\n";
	$content .= $parameters{'class_name'} . ' *' . $parameters{'preffix'} . '_new();' . "\n";

	$content .= "\n";

	$content .= 'G_END_DECLS' . "\n";

	$content .= "\n";

	$content .= '#endif ' . '/* __'.$parameters{'class_type_preffix'}.'_'.$parameters{'class_type_suffix'}.'_H__ */' . "\n";


	return $content;
}

sub generateIH
{
	my $content = '';

	$content .= '#define ' . $parameters{'class_type_preffix'} . '_TYPE_' . $parameters{'class_type_suffix'} . '                (' . $parameters{'preffix'} . '_get_type ())' . "\n";
	$content .= '#define ' . $parameters{'class_type_preffix'} . '_' . $parameters{'class_type_suffix'} . '(obj)                (G_TYPE_CHECK_INSTANCE_CAST ((obj),  ' . $parameters{'class_type'} . ',  ' . $parameters{'class_name'} . '))' . "\n";
	$content .= '#define  ' . $parameters{'class_type'} . '(obj)             (G_TYPE_CHECK_INSTANCE_TYPE ((obj),  ' . $parameters{'class_type'} . '))' . "\n";
	$content .= '#define  ' . $parameters{'class_type_preffix'} . '_ ' . $parameters{'class_type_suffix'} . '_GET_INTERFACE(inst) (G_TYPE_INSTANCE_GET_INTERFACE ((inst),  ' . $parameters{'class_type'} . ',  ' . $parameters{'class_name'} . 'Interface))' . "\n";
	$content .= 'typedef struct _ ' . $parameters{'class_name'} . '  ' . $parameters{'class_name'} . '; /* dummy object */' . "\n";
	$content .= 'typedef struct _ ' . $parameters{'class_name'} . 'Interface  ' . $parameters{'class_name'} . 'Interface;' . "\n";
	$content .= "\n";
	$content .= 'struct _ ' . $parameters{'class_name'} . 'Interface' . "\n";
	$content .= '{' . "\n";
	$content .= "\t" . 'GTypeInterface parent;' . "\n";
	$content .= "\t" . 'void (*do_action) ( ' . $parameters{'class_name'} . ' *self);' . "\n";
	$content .= '};' . "\n";
	$content .= "\n";
	$content .= 'GType  ' . $parameters{'preffix'} . '_get_type (void);' . "\n";
	$content .= 'void ' . $parameters{'preffix'} . '_do_action (' . $parameters{'class_name'} . ' *self);' . "\n";

	$content .= "\n";

	return $content;
}

sub generateIC
{
	my $content = '';

	$content .= 'G_DEFINE_INTERFACE(HelloWorldIf, hello_world_if, 0);' . "\n";

	$content .= 'static void' . "\n";
	$content .= 'hello_world_if_default_init(gpointer g_class) {' . "\n";
	$content .= '	  /* Add properties and signals to the interface here */' . "\n";
	$content .= '	}' . "\n";

	$content .= 'gchar *' . "\n";
	$content .= 'hello_world_if_get_hello(HelloWorldIf *self) {' . "\n";
	$content .= '  g_return_if_fail(IS_HELLO_WORLD_IF(self));' . "\n";
	$content .= '' . "\n";
	$content .= '	  HELLO_WORLD_IF_GET_INTERFACE(self)->get_hello(self);' . "\n";
	$content .= '	}' . "\n";

	return $content;
}



my $USAGE=<<EOF;
Usage: generate.pl [--help] | [--dry-run]
                   [--class-name-prefifx=<Preffix of class>]
                   [--class-name-suffix=<Suffix of class>]
                   [--parent-type=<The type of the parent class: G_TYPE_OBJECT>]
                   [--parent-class=<The name of the parent class: GObject>]
                   [--project-name=<The project name>]
                   [--licence=<The license>]
                   [--use-preffix=<Use preffix in filename>]
                   [--use-private=<Use private structure>]

GObject wizard project generation script.

EOF


my $argCount = scalar(@ARGV);
if ($argCount == 0
    || !GetOptions("help" => \$optHelp,
                   "dry-run" => \$optDryRun,
                   "class-name-preffix:s" => \$optClassNamePreffix,
                   "class-name-suffix:s" => \$optClassNameSuffix,
                   "parent-type:s" => \$optParentType,
                   "parent-name:s" => \$optParentName,
                   "project-name:s" => \$optProjectName,
                   "licence:s" => \$optLicence,
                   "use-preffix:s" => \$optFilenamePreffix,
		   "use-private:s" => \$optUsePrivate)
    || $optHelp != 0) {
    print $USAGE;
    exit (1);
}


get_parameters();


my $filename = '';
if ($optFilenamePreffix eq '1') {
	$filename = $parameters{'preffix'};
} else {
	$filename = lc($parameters{'class_type_suffix'});
}
$filename =~ tr/_/-/;


my $sourceFileName = $filename.'.c';
my $headerFileName = $filename.'.h';

if ($optDryRun) {
#   -- Step 1) Dry run: Print file names along with attributes
    print $sourceFileName,",openeditor\n";
    print $headerFileName,",openeditor\n";
} else {
#   -- Step 2) Generate run: Create files
	my $source = generateC($filename);
	my $sourceFile = new IO::File('>' . $sourceFileName) or die ('Unable to open ' . $sourceFileName . ' :' . $!);
	print $sourceFile  $source, "\n";

	my $header = generateH($filename);
	my $headerFile = new IO::File('>' . $headerFileName) or die ('Unable to open ' . $headerFileName . ' :' . $!);
	print $headerFile  $header, "\n";

	# my $interfaceH = generateIH();
	# my $interfaceC = generateIC();
	# print $interfaceH;
}


