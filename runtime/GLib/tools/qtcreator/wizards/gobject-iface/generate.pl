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
my $optAutor = 'MY_NAME';
my $optContact = 'MY.NAME@CONTACT';


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

sub generateIH
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

	$content .= "\n\n";

	$content .= '#include <glib-object.h>' . "\n";
	$content .= "\n";

	$content .= 'G_BEGIN_DECLS' . "\n";

	$content .= "\n";

	$content .= '#define ' . $parameters{'class_type_preffix'} . '_TYPE_' . $parameters{'class_type_suffix'} . '                (' . $parameters{'preffix'} . '_get_type ())' . "\n";
	$content .= '#define ' . $parameters{'class_type_preffix'} . '_' . $parameters{'class_type_suffix'} . '(obj)                (G_TYPE_CHECK_INSTANCE_CAST ((obj),  ' . $parameters{'class_type'} . ',  ' . $parameters{'class_name'} . '))' . "\n";
	$content .= '#define ' . $parameters{'class_type_preffix'} . '_IS_' . $parameters{'class_type_suffix'} . '(obj)             (G_TYPE_CHECK_INSTANCE_TYPE ((obj),  ' . $parameters{'class_type'} . '))' . "\n";
	$content .= '#define ' . $parameters{'class_type_preffix'} . '_' . $parameters{'class_type_suffix'} . '_GET_INTERFACE(inst) (G_TYPE_INSTANCE_GET_INTERFACE ((inst),  ' . $parameters{'class_type'} . ',  ' . $parameters{'class_name'} . 'Interface))' . "\n";

	$content .= "\n\n";

	$content .= 'typedef struct _' . $parameters{'class_name'} . '  ' . $parameters{'class_name'} . '; /* dummy object */' . "\n";
	$content .= 'typedef struct _' . $parameters{'class_name'} . 'Interface  ' . $parameters{'class_name'} . 'Interface;' . "\n";
	$content .= "\n";
	$content .= 'struct _' . $parameters{'class_name'} . 'Interface' . "\n";
	$content .= '{' . "\n";
	$content .= "\t" . 'GTypeInterface parent_iface;' . "\n";
	$content .= "\t" . 'void (*do_action) ( ' . $parameters{'class_name'} . ' *self);' . "\n";
	$content .= '};' . "\n";
	$content .= "\n";
	$content .= 'GType  ' . $parameters{'preffix'} . '_get_type (void);' . "\n";
	$content .= 'void ' . $parameters{'preffix'} . '_do_action (' . $parameters{'class_name'} . ' *self);' . "\n";

	$content .= "\n";

	$content .= 'G_END_DECLS' . "\n";

	$content .= "\n";

	$content .= '#endif ' . '/* __'.$parameters{'class_type_preffix'}.'_'.$parameters{'class_type_suffix'}.'_H__ */' . "\n";

	return $content;
}

sub generateIC
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

	$content .= '#include "' . $basename . '.h"' . "\n";
	$content .= "\n";

	$content .= 'G_DEFINE_INTERFACE('. $parameters{'class_name'} .', '. $parameters{'preffix'} .', 0)' . "\n";

	$content .= "\n";

	$content .= 'static void' . "\n";
	$content .= $parameters{'preffix'} . '_default_init(gpointer g_class) {' . "\n";
	$content .= '	  /* Add properties and signals to the interface here */' . "\n";
	$content .= '}' . "\n";

	$content .= "\n";

	$content .= 'gchar *' . "\n";
	$content .= $parameters{'preffix'} . '_do_action (' . $parameters{'class_name'} . ' *self) {' . "\n";
	$content .= "\t" . 'g_return_if_fail('. $parameters{'class_type_preffix'} . '_IS_' . $parameters{'class_type_suffix'} .'(self));' . "\n";
	$content .= "\n";
	$content .= "\t" . $parameters{'class_type_preffix'} . '_' . $parameters{'class_type_suffix'} . '_GET_INTERFACE(self)->do_action(self);' . "\n";
	$content .= '}' . "\n";

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
	my $source = generateIC($filename);
	my $sourceFile = new IO::File('>' . $sourceFileName) or die ('Unable to open ' . $sourceFileName . ' :' . $!);
	print $sourceFile  $source, "\n";

	my $header = generateIH($filename);
	my $headerFile = new IO::File('>' . $headerFileName) or die ('Unable to open ' . $headerFileName . ' :' . $!);
	print $headerFile  $header, "\n";

	# my $interfaceH = generateIH();
	# my $interfaceC = generateIC();
	# print $interfaceH;
}


