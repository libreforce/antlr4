#!/bin/bash

EXT="g4"
programname=$(basename $0)
working_dir=$(pwd)






grammars=()

#my_var=1
#var_name="my_var"
#if [ -z $var_name ]; then
#    echo "my_var is unset"
#else
#    echo "my_var is set"
#fi

#if [ -z ${!var_name} ]; then
#    echo "my_var is unset"
#else
#    echo "my_var is set"
#fi

function grammar_add {
    grammar_code=$1
    grammar_set="grammar_$grammar_code"
    if [ -z ${!grammar_set} ]; then
        grammars+=($grammar_code)
        export "${grammar_set}"="1"
    fi
}

function grammar_set_parser {
    grammar_code=$(echo $1 | tr '[:upper:]' '[:lower:]')
    filname=$2

    key="grammars_"$grammar_code
    export ${key}=$1

    grammar_add $grammar_code ;
    key="grammars_"$grammar_code
    export "${key}_parser"="$filname"
}

function grammar_set_lexer {
    grammar_code=$(echo $1 | tr '[:upper:]' '[:lower:]')
    filname=$2

    key="grammars_"$grammar_code
    export ${key}=$1

    grammar_add $grammar_code;
    key="grammars_"$grammar_code
    export "${key}_lexer"="$filname"
}




function antlr_tool_generator {
    echo "Generating -g from -G in -o..."
}

function scan {
    echo "Searching grammar"
}

function sanity_check {
    echo "Cheking optionVocab in Parser"
}

function usage {
    version=$(java -cp ${CLASSPATH} org.antlr.v4.Tool | egrep -o "([0-9]{1,}\.)+[0-9]{1,}")
    echo "Create an ANTLR $version demonstration."
    echo ""
    echo "usage:"
    echo "  $programname [OPTION...]"
    echo ""
    echo "Help options:"
    echo "    -h                    Display help"
    echo ""
    echo "Script options:"
    echo "    -g <grammar name>     Generate demo with <grammar name>"
    echo "    -G <grammar dir=pwd>  Scan <grammar dir> and load *.g files"
    echo "                          matching with '<grammar name>(Lexer|Parser)?.g'"
    echo "    -t <target=Java>      Generate demo for <target> runtime. By defaut 'Java'"
    echo "    -o <out file>         specify output file outfile"
    echo ""
    echo "Sample:"
    echo "  \$> export CLASSPATH=/home/antlr/lib/antlr-complete.jar"
    echo "  \$> $programname -t Java -g Algebra -G /share/antlr"
    echo "  This command line load AlgebraLexer.g and AlgebraParser.g or Algebra.g"
    echo "  from /home/antlr/share directory to create antlr's file for Java runtime"
    echo "  in the current working directory"
    exit 1
}



while getopts "gG:t:o:h" opt; do
    case "${opt}" in
        g) g=${OPTARG};;
        G) G=${OPTARG};;
        t) t=${OPTARG};;
        o) o=${OPTARG};;
        *) usage;;
    esac
done
shift $((OPTIND-1))

if [ -z "${CLASSPATH}" ] ; then
    echo "Error: org.antlr.v4.Tool not found."
    echo "       Set CLASSPATH environnement variable with antlr-complete.jar"
    exit 1
fi


if ([ -z "${g}" ] && [ -z "${G}" ] ); then
    usage
fi



output_dir=$working_dir
if [ -d "${o}" ] ; then
    output_dir="${o}"
fi

grammar_dir="?"
if [ -z "${G}" ] ; then
    grammar_dir= $working_dir
else
    grammar_dir=$(cd ${G} && pwd)
fi



language=${t}
if [ -z ${language} ] ; then
    language="Java"
fi


echo "Scaning -r *.${EXT} files in" $grammar_dir
for grammar_file in $(find $grammar_dir -type f -name *.${EXT}); do
    is_recognizer=false
    is_lexer=false
    is_parser=false
    file=$(basename $grammar_file)
    filename=${file%.$EXT}
    if echo $filename | grep --quiet Lexer; then
        grammar_name=${filename%Lexer}
        grammar_set_lexer $grammar_name $grammar_file
    elif echo $filename | grep --quiet Parser; then
        grammar_name=${filename%Parser}
        grammar_set_parser $grammar_name $grammar_file
    else
        echo " is Recognizer"
    fi

    #content=$(head -10 $grammar_file | egrep -oh "^\w* grammar \w*;$" $grammar_file)
    # if $content
done

















#echo "Generate PHP Lexer"
#java -Xmx500M -cp ${MY_ANTLR_JAR} org.antlr.v4.Tool -Dlanguage=${language} -package Php -o "${top_srcdir}/lib/php/" "${top_srcdir}/share/grammar/php/PhpLexer.g4"
#echo "Generate PHP Parser"
#java -Xmx500M -cp ${MY_ANTLR_JAR} org.antlr.v4.Tool -Dlanguage=${language} -package Php -o "${top_srcdir}/lib/php/" "${top_srcdir}/share/grammar/php/PhpParser.g4"


for key in "${grammars[@]}"
do
   var_grammar="grammars_"$key
   grammar_name=${!var_grammar}
   echo "For grammar $key=>"$grammar_name

   var_lexer_file="grammars_"$key"_lexer"
   #printf "$var_lexer_file=>"
   if [ -z ${!var_lexer_file}+x} ]; then
      echo "{unset}";
   else
      pkg_opt=" -package ${!var_grammar} "
      #pkg_opt=" "
      java -Xmx500M -cp ${CLASSPATH} org.antlr.v4.Tool -Dlanguage=${language}${pkg_opt}-o ${output_dir} ${!var_lexer_file}
   fi

   var_parser_file="grammars_"$key"_parser"
   #printf "$var_parser_file=>"
   if [ -z ${!var_parser_file}+x} ]; then
     echo "{unset}";
   else
      pkg_opt=" -package ${!var_grammar} "
      #pkg_opt=" "
      java -Xmx500M -cp ${CLASSPATH} org.antlr.v4.Tool -Dlanguage=${language}${pkg_opt}-o ${output_dir} ${!var_parser_file}
   fi

done


#$ export CLASSPATH=/home/gaulouis/local/src/tmp/antlr4.6/tool/target/antlr4-4.6-complete.jar
#~/local/src/tmp/antlr4.6$ mvn -DskipTests install
#~/local/src/glib-antlr/tools$ ./gendemo.sh -t Java -G /home/gaulouis/local/src/glib-antlr/share/grammar/php -o /home/gaulouis/Workspaces/antlr/php_antlr/src
#~/local/src/glib-antlr/tools$ ./gendemo.sh -t GLib -G /home/gaulouis/local/src/glib-antlr/share/grammar/php -o /home/gaulouis/local/src/glib-antlr/lib/php/
#
#TODO gen ATN
#java -Xmx500M -cp ${ANTLR_JAR} org.antlr.v4.Tool -atn -o "${dot_dir}" "${top_srcdir}/share/grammar/php/PhpLexer.g4"
#java -Xmx500M -cp ${ANTLR_JAR} org.antlr.v4.Tool -atn -o "${dot_dir}" "${top_srcdir}/share/grammar/php/PhpParser.g4"

#
# gendemo -g "Mysql" -l "GLib" -o /home/local/src/glib-antlr/src/demo
# gendemo -g "Php" -l "GLib" -o /home/local/src/glib-antlr/src/demo
# gendemo -g "Content" -l "GLib" -o /home/local/src/glib-antlr/src/demo
# gendemo -g "Alt" -l "GLib" -o /home/local/src/glib-antlr/src/demo
#
#targets={Java [/home/], GLib: [/home/]}
#languages=[Java, GLib]
# foreach (languages as language) do  done
#
#./gendemo -g Rule -t GLib -o /home/local/src/glib-antlr/src/demo
#-g=Rule -l=Java
#-g=Block -l=GLib -o /home/local/src/glib-antlr/src/demo
#-g=Block -l=Java
#-g=GreedyClosure
#-g=GreedyPositiveClosure
#-g=GreedyOptional
#-g=NonGreedyClosure
#-g=NonGreedyPositiveClosure
#-g=NonGreedyOptional
#
