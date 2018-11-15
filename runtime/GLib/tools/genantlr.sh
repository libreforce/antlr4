PWD="$(pwd)"
DIR="$( cd "$( dirname "$0" )" && pwd )"
top_srcdir="$( cd "$DIR/.." && pwd )"
cd ${PWD}

#ANTLR_JAR="/home/sam/local/lib/antlr-3.4-complete.jar"
# the dot ATN
#ANTLR_JAR="/home/sam/local/lib/antlr-4.5.1-complete.jar"
# the modified ATN
#MY_ANTLR_JAR="${top_srcdir}/tools/antlr4-4.6-SNAPSHOT.jar"

ANTLR_JAR=/home/gaulouis/local/src/tmp/antlr4.6/tool/target/antlr4-4.6-complete.jar
# both Java, GLib; no ATN export
MY_ANTLR_JAR=/home/gaulouis/local/src/tmp/antlr4.6/tool/target/antlr4-4.6-complete.jar

#ANTLR_JAR=/home/gaulouis/Téléchargements/antlr-3.5.2-complete-no-st3.jar
#MY_ANTLR_JAR=/home/gaulouis/Téléchargements/antlr-3.5.2-complete-no-st3.jar

language="GLib"
#language="Java"

ENABLE_PHP=0
ENABLE_PHP_GRAMMAR=1
ENABLE_PHP_ATN=0

ENABLE_L=1

ENABLE_T=0

ENABLE_MYSQL=0
ENABLE_MYSQL_GRAMMAR=0
ENABLE_MYSQL_ATN=0

ENABLE_SQL=0
ENABLE_SQL_GRAMMAR=1
ENABLE_SQL_ATN=0

ENABLE_ANTLR=0
ENABLE_ANTLR_GRAMMAR=1
ENABLE_ANTLR_ATN=0

if [ "$ENABLE_PHP" -eq 1 ]; then
if [ "$ENABLE_PHP_GRAMMAR" -eq 1 ]; then
#echo "Generate PHP"
#java -Xmx500M -cp ${MY_ANTLR_JAR} org.antlr.v4.Tool -Dlanguage=${language} -package Php -listener -o "${top_srcdir}/lib/php/" "${top_srcdir}/share/grammar/php/Php.g"
echo "Generate PHP Lexer"
java -Xmx500M -cp ${MY_ANTLR_JAR} org.antlr.v4.Tool -Dlanguage=${language} -package Php -o "${top_srcdir}/lib/php/" "${top_srcdir}/share/grammar/php/PhpLexer.g4"
echo "Generate PHP Parser"
java -Xmx500M -cp ${MY_ANTLR_JAR} org.antlr.v4.Tool -Dlanguage=${language} -package Php -o "${top_srcdir}/lib/php/" "${top_srcdir}/share/grammar/php/PhpParser.g4"
fi
if [ "$ENABLE_PHP_ATN" -eq 1 ]; then
echo "Generate PHP ATN"
dot_dir="/home/gaulouis/Documents/antlr/graph_php/dot"
png_dir="/home/gaulouis/Documents/antlr/graph_php/png"
json_dir="/home/gaulouis/Documents/antlr/graph_php/json"
mkdir -p $dot_dir
mkdir -p $png_dir
mkdir -p $json_dir
java -Xmx500M -cp ${ANTLR_JAR} org.antlr.v4.Tool -atn -o "${dot_dir}" "${top_srcdir}/share/grammar/php/PhpLexer.g4"
java -Xmx500M -cp ${ANTLR_JAR} org.antlr.v4.Tool -atn -o "${dot_dir}" "${top_srcdir}/share/grammar/php/PhpParser.g4"

for file in $dot_dir/*.dot; do
  filename="$(basename $file)"
  filename="${filename%.dot}"
  #dot -Tpng "$dot_dir/$filename.dot" > "$png_dir/$filename.png"
  dot -Tsvg "$dot_dir/$filename.dot" > "$json_dir/$filename.svg"
done

fi
fi


if [ "$ENABLE_MYSQL" -eq 1 ]; then
if [ "$ENABLE_MYSQL_GRAMMAR" -eq 1 ]; then
echo "Generate MySQL Lexer"
java -Xmx500M -cp ${MY_ANTLR_JAR} org.antlr.v4.Tool -Dlanguage=${language} -package Mysql -o "${top_srcdir}/lib/mysql/" "${top_srcdir}/share/grammar/mysql/MysqlLexer.g4"
echo "Generate MySQL Parser"
java -Xmx500M -cp ${MY_ANTLR_JAR} org.antlr.v4.Tool -Dlanguage=${language} -package Mysql -o "${top_srcdir}/lib/mysql/" "${top_srcdir}/share/grammar/mysql/MysqlParser.g4"
fi
if [ "$ENABLE_MYSQL_ATN" -eq 1 ]; then
echo "Generate MySQL ATN"

dot_dir="/home/gaulouis/Documents/antlr/graph_mysql/dot"
png_dir="/home/gaulouis/Documents/antlr/graph_mysql/png"
json_dir="/home/gaulouis/Documents/antlr/graph_mysql/json"
mkdir -p $dot_dir
mkdir -p $png_dir
mkdir -p $json_dir
java -Xmx500M -cp ${ANTLR_JAR} org.antlr.v4.Tool -atn -o "${dot_dir}" "${top_srcdir}/share/grammar/mysql/MysqlLexer.g4"
java -Xmx500M -cp ${ANTLR_JAR} org.antlr.v4.Tool -atn -o "${dot_dir}" "${top_srcdir}/share/grammar/mysql/MysqlParser.g4"

for file in $dot_dir/*.dot; do
  filename="$(basename $file)"
  filename="${filename%.dot}"
  #dot -Tpng "$dot_dir/$filename.dot" > "$png_dir/$filename.png"
  dot -Tsvg "$dot_dir/$filename.dot" > "$json_dir/$filename.svg"
done

fi
fi


if [ "$ENABLE_SQL" -eq 1 ]; then
if [ "$ENABLE_SQL_GRAMMAR" -eq 1 ]; then
echo "Generate SQL Lexer"
java -Xmx500M -cp ${MY_ANTLR_JAR} org.antlr.v4.Tool -Dlanguage=${language} -package SQL -o "${top_srcdir}/lib/sql/" "${top_srcdir}/share/grammar/sql/SQLLexer.g4"
echo "Generate SQL Parser"
java -Xmx500M -cp ${MY_ANTLR_JAR} org.antlr.v4.Tool -Dlanguage=${language} -package SQL -o "${top_srcdir}/lib/sql/" "${top_srcdir}/share/grammar/sql/SQLParser.g4"
fi
if [ "$ENABLE_SQL_ATN" -eq 1 ]; then
echo "Generate SQL ATN"

dot_dir="/home/gaulouis/Documents/antlr/graph_sql/dot"
png_dir="/home/gaulouis/Documents/antlr/graph_sql/png"
json_dir="/home/gaulouis/Documents/antlr/graph_sql/json"
mkdir -p $dot_dir
mkdir -p $png_dir
mkdir -p $json_dir
java -Xmx500M -cp ${ANTLR_JAR} org.antlr.v4.Tool -atn -o "${dot_dir}" "${top_srcdir}/share/grammar/sql/SQLLexer.g4"
java -Xmx500M -cp ${ANTLR_JAR} org.antlr.v4.Tool -atn -o "${dot_dir}" "${top_srcdir}/share/grammar/sql/SQLParser.g4"

for file in $dot_dir/*.dot; do
  filename="$(basename $file)"
  filename="${filename%.dot}"
  #dot -Tpng "$dot_dir/$filename.dot" > "$png_dir/$filename.png"
  dot -Tsvg "$dot_dir/$filename.dot" > "$json_dir/$filename.svg"
done

fi
fi

#java -Xmx500M -cp /home/gaulouis/Téléchargements/antlr-3.5.2-complete-no-st3.jar org.antlr.Tool -h
if [ "$ENABLE_ANTLR" -eq 1 ]; then

if [ "$ENABLE_ANTLR_GRAMMAR" -eq 1 ]; then
echo "Generate ANTLR Lexer"
java -Xmx500M -cp ${MY_ANTLR_JAR} org.antlr.v4.Tool -Dlanguage=${language} -package Gap -o "${top_srcdir}/lib/antlr-interpreter/parse/" "${top_srcdir}/share/grammar/antlr/ANTLRLexer.g"
echo "Generate ANTLR Parser"
java -Xmx500M -cp ${MY_ANTLR_JAR} org.antlr.v4.Tool -Dlanguage=${language} -package Gap -o "${top_srcdir}/lib/antlr-interpreter/parse/" "${top_srcdir}/share/grammar/antlr/ANTLRParser.g"
fi

if [ "$ENABLE_ANTLR_ATN" -eq 1 ]; then
echo "Generate ANTLR ATN"
dot_dir="/home/gaulouis/Documents/antlr/graph_antlr/dot"
png_dir="/home/gaulouis/Documents/antlr/graph_antlr/png"
json_dir="/home/gaulouis/Documents/antlr/graph_antlr/json"
mkdir -p $dot_dir
mkdir -p $png_dir
mkdir -p $json_dir
java -Xmx500M -cp ${ANTLR_JAR} org.antlr.v4.Tool -atn -o "${dot_dir}" "${top_srcdir}/share/grammar/antlr/AntlrLexer.g"
java -Xmx500M -cp ${ANTLR_JAR} org.antlr.v4.Tool -atn -o "${dot_dir}" "${top_srcdir}/share/grammar/antlr/AntlrParser.g"
for file in $dot_dir/*.dot; do
  filename="$(basename $file)"
  filename="${filename%.dot}"
  #dot -Tpng "$dot_dir/$filename.dot" > "$png_dir/$filename.png"
  dot -Tsvg "$dot_dir/$filename.dot" > "$json_dir/$filename.svg"
done
fi

fi




if [ "$ENABLE_L" -eq 1 ]; then
echo "Generate L Lexer"
java -Xmx500M -cp ${MY_ANTLR_JAR} org.antlr.v4.Tool -Dlanguage=${language} -package TestFunctional -o "${top_srcdir}/tests/functional/L/" "${top_srcdir}/tests/functional/L/L.g4"
fi

if [ "$ENABLE_T" -eq 1 ]; then
echo "Generate T Lexer/Parser"
java -Xmx500M -cp ${MY_ANTLR_JAR} org.antlr.v4.Tool -Dlanguage=${language} -package TestFunctional -o "${top_srcdir}/tests/functional/T/" "${top_srcdir}/tests/functional/T/T.g4"
fi
