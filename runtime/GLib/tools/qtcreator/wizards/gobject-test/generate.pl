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

my %parameters = ('class_name',         '',  # TestGeomTransform
		  'class_name_preffix', '',  # Test
		  'class_name_suffix',  '',  # GeomTransform
		  'class_type',         '',  ## TEST_TYPE_GEOM_TRANSFORM
		  'class_type_preffix', '',  # TEST
		  'class_type_suffix',  '',  # GEOM_TRANSFORM
		  'preffix',            '',  # test_geom_transform
		  'parent_name',        '',  ## GObject
		  'parent_type',        ''); ## G_TYPE_OBJECT


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

sub generateTH
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

	$content .= "#include <glib.h>\n";
	$content .= "#include <glib/gtestutils.h>\n";
	$content .= "\n";
	$content .= "#if GLIB_CHECK_VERSION(2,25,12)\n";
	$content .= "typedef GTestFixtureFunc TCFunc;\n";
	$content .= "#else\n";
	$content .= "typedef void (*TCFunc)(void);\n";
	$content .= "#endif\n";
	$content .= "#define TESTCASE(t, d) g_test_create_case (#t, 0, d, NULL, (TCFunc) t, NULL)\n";

	$content .= "\n\n";

	$content .= 'void ' . $parameters{'preffix'} . '_test1 (void);' . "\n";

	$content .= "\n";

	$content .= 'GTestSuite *' . "\n";
	$content .= lc($parameters{'class_type_preffix'}) . '_' . lc($parameters{'class_type_suffix'}).'_create_suite(void);' . "\n";

	$content .= "\n\n";

	$content .= '#endif ' . '/* __'.$parameters{'class_type_preffix'}.'_'.$parameters{'class_type_suffix'}.'_H__ */' . "\n";

	return $content;
}


sub generateTC
{
	my $basename = ($_[0]);
	my $sourceFileName = $basename.'.h';
	
	my $content = '';

	$content .= '#include "'.$sourceFileName.'"' . "\n";
	$content .= "\n";

	$content .= 'void' . "\n";
	$content .= lc($parameters{'class_type_preffix'}).'_'.lc($parameters{'class_type_suffix'}).'_test1(void) {' . "\n";
	$content .= '	g_test_message("Not implemented");' . "\n";
	$content .= '	/* Add asserts */' . "\n";
	$content .= '}' . "\n";
	$content .= "\n";

	$content .= 'GTestSuite *' . "\n";
	$content .= lc($parameters{'class_type_preffix'}).'_'.lc($parameters{'class_type_suffix'}).'_create_suite(void) {' . "\n";
	$content .= '	GTestSuite *suite_'.lc($parameters{'class_type_suffix'}).' = g_test_create_suite("libgeomtransform");' . "\n";
	$content .= '' . "\n";
	$content .= '	g_test_suite_add (suite_'.lc($parameters{'class_type_suffix'}).', TESTCASE (test_'.lc($parameters{'class_type_suffix'}).'_test1, NULL));' . "\n";
	$content .= '' . "\n";
	$content .= '	return suite_'.lc($parameters{'class_type_suffix'}).';' . "\n";
	$content .= '}' . "\n";

	return $content;
}


my $USAGE=<<EOF;
Usage: generate.pl [--help] | [--dry-run]
                   [--class-name-preffix=<Preffix of class>]
                   [--class-name-suffix=<Suffix of class>]
                   [--parent-type=<The type of the parent class: G_TYPE_OBJECT>]
                   [--parent-class=<The name of the parent class: GObject>]
                   [--project-name=<The project name>]
                   [--licence=<The license>]
                   [--use-preffix=<Use preffix in filename>]
                   [--use-private=<Use private structure>]

GObject wizard project generation script.

EOF

# perl generate.pl --class-name-preffix="Test" --class-name-suffix="GeomTransform" --project-name="Ganash" --use-preffix=1

my $argCount = scalar(@ARGV);
if ($argCount == 0
    || !GetOptions("help" => \$optHelp,
                   "dry-run" => \$optDryRun,
                   "class-name-preffix:s" => \$optClassNamePreffix,
                   "class-name-suffix:s" => \$optClassNameSuffix,
                   "project-name:s" => \$optProjectName,
                   "licence:s" => \$optLicence,
                   "use-preffix:s" => \$optFilenamePreffix)
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
	my $source = generateTC($filename);
	my $sourceFile = new IO::File('>' . $sourceFileName) or die ('Unable to open ' . $sourceFileName . ' :' . $!);
	print $sourceFile  $source, "\n";

	my $header = generateTH($filename);
	my $headerFile = new IO::File('>' . $headerFileName) or die ('Unable to open ' . $headerFileName . ' :' . $!);
	print $headerFile  $header, "\n";

}


