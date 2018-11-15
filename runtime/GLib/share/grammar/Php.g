grammar Validator;

word: 'hello' ID;

ID  : [a-z]+ ;


class w: [a-zA-Z0-9_]
char n:
string n:
rule n:
literal n:

TLD: [\w\-]{2,4};// Top Level Domain. org, com, net, ...
DOMAINE: [WORD\-]{2,4};// gmail, hotmail, yahoo, ...

USERMAIL:;
DOT: '.';
AT: '@';
HOST: (SUB_DOMAIN DOT)* DOMAIN DOT TLD;

EMAIL  : USERMAIL AT HOST;



EMAIL  : ^[\w\-]+(\.[\w\-]+)*@[\w\-]+(\.[\w\-]+)*\.[\w\-]{2,4}$;

[:digit:]


grammar RegExp
{
    /*
     * n'importe quelle lettre
     */
    alpha(){}

    /*
     * n'importe quel chiffre
     */
    digit(){}

    /*
     * caractères hexadécimaux
     */
    xdigit(){}

    /*
     * n'importe quelle lettre ou chiffre
     */
    alnum(){}
    /*
    [[:space:]]	n'importe quel espace blanc
    [[:punct:]]	n'importe quel signe de ponctuation
    [[:lower:]]	n'importe quelle lettre en minuscule
    [[:upper:]]	n'importe quelle lettre capitale
    [[:blank:]]	espace ou tabulation
    [[:graph:]]	caractères affichables et imprimables
    [[:cntrl:]]	caractères d'échappement
    [[:print:]]	caractères imprimables exceptés ceux de contrôle
    */

    class alpha = [a-zA-Z]; // 'a..z' | 'A..Z'
}


grammar Validator extends RegExp (all class are useable like \w, \alphanum etc..)
{
   literal NL = '\n\r';
   literal TAB = '\t';
   literal SPACE = ' ';
   literal AT = '@';
   literal DOT = '.';
   literal STOP = DOT;
   class Alpha = [a-zA-Z];
   regex word = "/[:Alpha:]{1, 27}/g";

   /**
    * 1) Les parametre nome les expression capturé
    * 2) Les parenthèse sont capturente et non un signe de priorité
    * 3) Le contenu est la regle gramatical
    */
    username(...) {
    }
    /**
     * Domain: gmail, hotmail, yahoo, ...
     */
    domain() {
        [a-z]{2,4};
    }
    /**
     * Top Level Domain: org, com, net, ...
     */
    tld() {
        [a-z]{2,4};
    }
    host(dom:{sub_domain, ...}, ...) {
        ((domain DOT)* domain) DOT tld;
    }
    email(...) {
        username AT host;
    }
}



grammar Sql
{
    try query() {
        ???
    } catch(select) {
        (USERMAIL) AT HOST
    } catch(update) {
        (USERMAIL) AT HOST
    } catch(update) {
        (USERMAIL) AT HOST
    }


    case(query) {// permet de nomer le noeud
        case(select) {
            SELECT FROM
        }
        case(update) {
            (USERMAIL) AT HOST
        }
    }

}
