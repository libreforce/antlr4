#!/usr/bin/python

from dumper import *

#execfile("/usr/share/glib-2.0/gdb/glib.py")
exec(open("/home/gaulouis/local/Qt/Tools/QtCreator/share/qtcreator/debugger/glibtypes.py").read())

import logging
logging.basicConfig(filename='/home/gaulouis/Documents/log.txt',level=logging.DEBUG)
#logging.debug('qdump__GHashTable .........................')


# -----------------------------------------------------------------------------
# AntlrIntStream Interface
# -----------------------------------------------------------------------------

def AntlrInputStream_size(value):
	return value["n"];


def AntlrFileStream_size(value):
	return value["parent_instance"]["n"];


def AntlrIntStream_size(value):
	name = g_type_name_from_instance(value.address)
	if name!=None:
		options = {
			"AntlrInputStream" : AntlrInputStream_size,
			"AntlrFileStream" : AntlrFileStream_size
			#"AntlrUnbufferedCharStream" : qdump__AntlrLexer
		}
		obj = value.cast (gdb.lookup_type(name))
		return options[name](obj)
		#return options.get(name, 'AntlrCharStream_default_getText')(d, obj)
	else:
		return "<???>"


def AntlrIntStream_toString(d, value):
        return "@%s <TODO>" % value.address

def qdump__AntlrIntStream(d, value):
        name = g_type_name_from_instance(value.address)
        if name!=None and name!="AntlrIntStream":
                obj = value.cast (gdb.lookup_type(name).pointer()).dereference()
                d.putItem(obj)
        else:
                d.putItem(value)

# -----------------------------------------------------------------------------
# AntlrCharStream  Interface
# -----------------------------------------------------------------------------
def AntlrCharStream_getText(d, value, args):
        name = g_type_name_from_instance(value)
        #logging.debug('%s' % name)
        #name = g_type_name_from_instance(value.address)
        #logging.debug('%s' % name)
        if name!=None and name!="AntlrCharStream":
                options = {
                        "AntlrInputStream" : AntlrInputStream_getText,
                        "AntlrFileStream" : AntlrFileStream_getText
                        #"AntlrUnbufferedCharStream" : qdump__AntlrLexer
                }
                obj = value.cast (gdb.lookup_type(name))
                return options[name](d, obj, args)
                #return options.get(name, 'AntlrCharStream_default_getText')(d, obj)
        else:
                return "<Unknow>"

def AntlrCharStream_toString(d, value):
        return "@%s <TODO>" % value.address

def qdump__AntlrCharStream(d, value):
        name = g_type_name_from_instance(value.address)
        if name!=None and name!="AntlrCharStream":
                #obj = value.cast (gdb.lookup_type(name).pointer()).dereference()
                obj = value.cast (gdb.lookup_type(name))
                d.putItem(obj) # AntlrInputStream, AntlrFileStream
        else:
                d.putItem(value)

# -----------------------------------------------------------------------------
# AntlrInputStream
# -----------------------------------------------------------------------------
def AntlrInputStream_getText(d, value, args):
        n = int(value["n"])
        data=value["data"].string()
        start = int(args["start"])
        stop = int(args["stop"])+1
        if start >= n:
                return ""
        return "%s" % (data[start:stop])

def AntlrFileStream_getText(d, value, args):
        input_stream = value["parent_instance"].cast (gdb.lookup_type("AntlrInputStream").pointer())
        return AntlrInputStream_getText(d, input_stream, args)


# -----------------------------------------------------------------------------
# AntlrLexer
# -----------------------------------------------------------------------------
def AntlrLexer_toString(d, value):
        return "@%s" % value.address
"""
TODO add isExpanded
def qdump__AntlrLexer(d, value):
        d.putValue("%s" % AntlrLexer_toString(d, value))
        d.putType("AntlrLexer")
        d.putNumChild(15)
        with Children(d):
                d.putSubItem("listeners", value["parent_instance"]["listeners"])
                d.putSubItem("interp", value["parent_instance"]["interp"])
                d.putSubItem("state_number", value["parent_instance"]["priv"]["state_number"])
                d.putSubItem("input", value["input"])
                d.putSubItem("token_factory_source", value["token_factory_source"])
                d.putSubItem("factory", value["factory"])
                d.putSubItem("token_start_char_index", value["token_start_char_index"])
                d.putSubItem("token_start_line", value["token_start_line"])
                d.putSubItem("token_start_char_position_in_line", value["token_start_char_position_in_line"])
                d.putSubItem("hit_EOF", value["hit_EOF"])
                d.putSubItem("channel", value["channel"])
                d.putSubItem("type", value["type"])
                d.putSubItem("mode_stack", value["mode_stack"])
                d.putSubItem("mode", value["mode"])
                d.putSubItem("text", value["text"])
"""

# -----------------------------------------------------------------------------
# AntlrRecognizer
# -----------------------------------------------------------------------------
"""
TODO add isExpanded
def qdump__AntlrRecognizer(d, value):
        name = g_type_name_from_instance(value.address)
        if name!=None and name!="AntlrRecognizer":
                options = {
                        "AntlrLexer" : qdump__AntlrLexer
                        #"AntlrCommonTokenStream_Default" : qdump__AntlrCommonTokenStream_Default
                }
                obj = value.cast (gdb.lookup_type(name).pointer()).dereference()
                options[name](d, obj)
                # options.get(name, 'AntlrBufferedTokenStream_Default')(d, obj)
        else:
                d.putValue("@%s" % value.address)
                d.putType("AntlrRecognizer")
                d.putNumChild(2)
                with Children(d):
                        d.putSubItem("listeners", value["listeners"])
                        d.putSubItem("interp", value["interp"])
                        d.putSubItem("state_number", value["priv"]["state_number"])
"""

# -----------------------------------------------------------------------------
# AntlrTokenSource
# -----------------------------------------------------------------------------
def AntlrTokenSource_toString(d, value):
        return "@%s" % value.address

def qdump__AntlrTokenSource(d, value):
        name = g_type_name_from_instance(value.address)
        if name!=None and name!="AntlrTokenSource":
                #obj = value.cast (gdb.lookup_type(name).pointer()).dereference()
                obj = value.cast (gdb.lookup_type(name))
                d.putItem(obj)
        else:
                d.putValue("@%s" % value.address)
                d.putType("AntlrTokenSource")
                d.putNumChild(0)


# -----------------------------------------------------------------------------
# AntlrCommonToken
# -----------------------------------------------------------------------------
def AntlrCommonToken_getText(d, value):
        if value["text"]:
                return value["text"]["str"];
        char_stream = value["source"]["b"]
        if not char_stream:
                return "<no input>"
        name = g_type_name_from_instance(char_stream)
        _input = char_stream.cast (gdb.lookup_type(name).pointer())#.dereference()# AntlrFileStream, ...
        if not _input:
                return "<no input>"
        n = AntlrIntStream_size(_input);
        if value["start"]<n and value["stop"]<n:
                return AntlrCharStream_getText(d, _input, {"start": value["start"], "stop": value["stop"]})
        else:
                return "<EOF>"

"""
static gchar*
antlr_common_token_interface_token_get_text(AntlrToken *token)
{
    AntlrCommonToken *t = ANTLR_COMMON_TOKEN(token);
    if ( t->text!=NULL ) {
        return t->text->str;
    }

    AntlrCharStream *input = antlr_token_get_input_stream(token);
    if ( input==NULL ) return NULL;


//    g_print("ComonToken: %s\n", g_type_name_from_instance(input));
    gint n = antlr_int_stream_size(ANTLR_INT_STREAM(input));
    if ( t->start<n && t->stop<n) {
//        return g_string_new(
//            antlr_char_stream_get_text(ANTLR_CHAR_STREAM(input), antlr_interval_of(t->start,t->stop))
//        );
        return antlr_char_stream_get_text(ANTLR_CHAR_STREAM(input), antlr_interval_of(t->start, t->stop));
    }
    else {
//        return g_string_new("<EOF>");
        return g_strdup("<EOF>");
    }
}
"""

def AntlrCommonToken_toString(d, value):
        channelStr=""
        if value["channel"]>0:
                channelStr=",channel=%d" % value["channel"]
        txt = AntlrCommonToken_getText(d, value)
        if not txt:
                txt = "<no text>"
        #else:
        #	remove with space
        return "[@%d,%d:%d='%s',<%d>%s,%d:%d]" % (value["index"], value["start"], value["stop"], txt, value["type"], channelStr, value["line"], value["char_position_in_line"]);
"""
        @Override
        public String toString() {
                String channelStr = "";
                if ( channel>0 ) {
                        channelStr=",channel="+channel;
                }
                String txt = getText();
                if ( txt!=null ) {
                        txt = txt.replace("\n","\\n");
                        txt = txt.replace("\r","\\r");
                        txt = txt.replace("\t","\\t");
                }
                else {
                        txt = "<no text>";
                }
                return "[@"+getTokenIndex()+","+start+":"+stop+"='"+txt+"',<"+type+">"+channelStr+","+line+":"+getCharPositionInLine()+"]";
        }
"""

def qdump__AntlrCommonToken(d, value):
        d.putValue("%s" % AntlrCommonToken_toString(d, value))
        d.putType("AntlrCommonToken")
        d.putNumChild(10)
        if d.isExpanded():
                with Children(d):
                        d.putSubItem("type", value["type"])
                        d.putSubItem("line", value["line"])
                        d.putSubItem("char_position_in_line", value["char_position_in_line"])
                        d.putSubItem("channel", value["channel"])
                        d.putSubItem("source", value["source"])
                        d.putSubItem("text", value["text"])
                        d.putSubItem("index", value["index"])
                        d.putSubItem("start", value["start"])
                        d.putSubItem("stop", value["stop"])
                        d.putSubItem("parent_instance", value["parent_instance"])

def qdump___AntlrCommonToken(d, value):
        qdump__AntlrCommonToken(d, value)

# -----------------------------------------------------------------------------
# AntlrToken
# -----------------------------------------------------------------------------
def qdump__AntlrToken(d, value):
        name = g_type_name_from_instance(value.address)
        if name!=None and name!="AntlrToken":
                obj = value.cast (gdb.lookup_type(name))
                d.putItem(obj)
        else:
                d.putValue("@%s" % value.address)
                d.putType("AntlrToken")
                d.putNumChild(0)


# -----------------------------------------------------------------------------
# AntlrIVocabulary
# -----------------------------------------------------------------------------
def qdump__AntlrIVocabulary(d, value):
        name = g_type_name_from_instance(value.address)
        if name!=None and name!="AntlrIVocabulary":
                obj = value.cast (gdb.lookup_type(name))
                d.putItem(obj)
        else:
                d.putValue("@%s" % value.address)
                d.putType("AntlrIVocabulary")
                d.putNumChild(0)


# TODO put in glibtypes.py
#def qdump__GArray(d, value):
#def qdump__GArrayGObject(d, value):
#def qdump__GArrayCString(d, value):
def qdump__GArrayGString(d, value):
        glue = ""
        resume = ""
        size = 0
        printer = q__GArray(value, gdb.lookup_type("GString").pointer())
        if d.isExpanded():
                with Children(d):
                        for child in printer.children():
                                with SubItem(d, child[0]):
                                        if child[1] and child[1]["str"]:
                                                val = child[1]["str"].string()
                                                d.putValue(val)
                                                resume += glue + "\\\"" + val + "\\\""
                                                glue = ", "
                                        else:
                                                d.putValue("{nil}")
                                size += 1
                d.putValue('{' + resume + '}')
                #d.putItemCount(size)
        else:
                size=printer.count()
        d.putNumChild(size)

def qdump__GArrayGInt(d, value):
        glue = ""
        resume = ""
        size = 0
        printer = q__GArray(value, gdb.lookup_type("gint"))
        if d.isExpanded():
                with Children(d):
                        for child in printer.children():
                                with SubItem(d, child[0]):
                                        val = "%d" % child[1]
                                        d.putValue(val)
                                        resume += glue + val
                                        glue = ", "
                                size += 1
                d.putValue('{' + resume + '}')
                #d.putItemCount(size)
        else:
                size=printer.count()
        d.putNumChild(size)


def qdump__AntlrArrayToken(d, value):
        glue = ""
        resume = ""
        size = 0
        printer = q__GArray(value, gdb.lookup_type("AntlrCommonToken").pointer())
        if d.isExpanded():
                with Children(d):
                        for child in printer.children():
                                with SubItem(d, child[0]):
                                        obj = child[1] #.dereference()
                                        val = AntlrCommonToken_toString(d, obj)
                                        d.putItem(obj)
                                        resume += glue + val
                                        glue = ", "
                                size += 1
                d.putValue('{' + resume + '}')
                #d.putItemCount(size)
        else:
                size=printer.count()
        d.putNumChild(size)


# -----------------------------------------------------------------------------
# AntlrCommonTokenStream
# -----------------------------------------------------------------------------
def AntlrCommonTokenStream_toString(d, value):
        return "@%s" % value.address
"""
def qdump__AntlrCommonTokenStream(d, value):
        d.putValue("%s" % AntlrCommonTokenStream_toString(d, value))
        d.putType("AntlrCommonTokenStream")
        d.putNumChild(5)
        with Children(d):
                d.putSubItem("token_source", value["parent_instance"]["token_source"])
                d.putSubItem("tokens", value["parent_instance"]["tokens"])
                d.putSubItem("p", value["parent_instance"]["p"])
                d.putSubItem("fetched_eof", value["parent_instance"]["fetched_eof"])
                d.putSubItem("channel", value["channel"])
"""

"""
# -----------------------------------------------------------------------------
# AntlrBufferedTokenStream
# -----------------------------------------------------------------------------
def qdump__AntlrBufferedTokenStream(d, value):
        name = g_type_name_from_instance(value.address)
        if name!=None and name!="AntlrBufferedTokenStream":
                options = {
                        "AntlrCommonTokenStream" : qdump__AntlrCommonTokenStream
                        #"AntlrCommonTokenStream_Default" : qdump__AntlrCommonTokenStream_Default
                }
                obj = value.cast (gdb.lookup_type(name).pointer()).dereference()
                options[name](d, obj)
                # options.get(name, 'AntlrBufferedTokenStream_Default')(d, obj)
        else:
                d.putValue("@%s" % value.address)
                d.putType("AntlrBufferedTokenStream")
                d.putNumChild(4)
                with Children(d):
                        d.putSubItem("token_source", value["token_source"])
                        d.putSubItem("tokens", value["tokens"])
                        d.putSubItem("p", value["p"])
                        d.putSubItem("fetched_eof", value["fetched_eof"])
"""

# -----------------------------------------------------------------------------
# AntlrTokenStream Interface
# -----------------------------------------------------------------------------
def AntlrTokenStream_toString(d, value):
        return "<TODO>"

def qdump__AntlrTokenStream(d, value):
        name = g_type_name_from_instance(value.address)
        if name!=None and name!="AntlrTokenStream":
                obj = value.cast (gdb.lookup_type(name))
                d.putItem(obj)
        else:
                d.putValue("@%s" % value.address)
                d.putNumChild(0)


# -----------------------------------------------------------------------------
# AntlrBitSet
# -----------------------------------------------------------------------------
def AntlrBitSet_toString(d, value):
        resume=""
        glue = ""
        garray = q__GArray(value["bits"], gdb.lookup_type('gint'))
        for child in garray.children():
                val = int(child[1])
                if val:
                        for j in range(0, 32):
                                mask = 0x01 << j
                                if (val & mask):
                                        index = int(child[0])*32+j
                                        resume += glue + "%d" % index
                                        glue = ", "
        return '{' + resume + '}'

def qdump__AntlrBitSet(d, value):
        d.putValue(AntlrBitSet_toString(d, value))
        d.putType('AntlrBitSet')
        d.putNumChild(1)
        if d.isExpanded():
                with Children(d):
                        d.putSubItem("ref_count", value['parent_instance']['parent_instance']['ref_count'])

def qdump___AntlrBitSet(d, value):
        qdump__AntlrBitSet(d, value)


# -----------------------------------------------------------------------------
# AntlrInterval
# -----------------------------------------------------------------------------
def AntlrInterval_toString(d, value):
        return "%d..%d" % (value["a"], value["b"])

# -----------------------------------------------------------------------------
# AntlrIntervalSet
# -----------------------------------------------------------------------------
def AntlrIntervalSet_toString(d, value):
        eval_string = "antlr_int_iset_to_string("+str(value.address)+")"
        output = gdb.parse_and_eval(eval_string);
        return output.string()

def qdump__AntlrIntervalSet(d, value):
        d.putValue(AntlrIntervalSet_toString(d, value))

def qdump___AntlrIntervalSet(d, value):
        qdump__AntlrIntervalSet(d, value)


# -----------------------------------------------------------------------------
# AntlrPredictionContext
#   |     * id
#   |     * cached_hash_code
#   |
#   +-> AntlrSingletonPredictionContext
#   |     |     * parent
#   |     |     * return_state
#   |     |
#   |     +-> AntlrEmptyPredictionContext
#   |
#   +-> AntlrArrayPredictionContext
#         * parents
#         * return_states
# -----------------------------------------------------------------------------

# -----------------------------------------------------------------------------
# AntlrArrayPredictionContext
# -----------------------------------------------------------------------------

def AntlrArrayPredictionContext_isEmpty(d, value):
        return value["return_states"][0]>99999 # EMPTY_RETURN_STATE=Integer.MAX_VALUE

def AntlrArrayPredictionContext_toString(d, value):
        #logging.debug("%s" % value["return_states"].cast(gdb.lookup_type("gint").pointer))
        #if AntlrArrayPredictionContext_isEmpty(d, value):
        #	return "[]"
        buf = "["
        glue = ""
        i=0
        printer = q__GArray(value["return_states"], gdb.lookup_type("gint"))
        for child in printer.children():
                buf += glue
                if int(child[1])>99999:
                        buf+="$"
                else:
                        buf += "%d" % int(child[1])
                        parents = value["parents"]["data"].cast(gdb.lookup_type("AntlrPredictionContext").pointer().pointer())
                        if parents[i].address:
                                buf+= " " + AntlrPredictionContext_toString(d, parents[i].dereference())
                        else :
                                buf+="null"
                glue = ", "
                i+=1
        buf+="]"
        return buf

def qdump__AntlrArrayPredictionContext(d, value):
        d.putValue( AntlrArrayPredictionContext_toString(d, value) )
        d.putType("AntlrArrayPredictionContext")
        d.putNumChild(4)
        if d.isExpanded():
                with Children(d):
                        d.putSubItem("id", value["parent_instance"]["id"])
                        d.putSubItem("cached_hash_code", value["parent_instance"]["cached_hash_code"])
                        d.putSubItem("parents", value["parents"])
                        d.putSubItem("return_states", value["return_states"])

def qdump___AntlrArrayPredictionContext(d, value):
        qdump__AntlrArrayPredictionContext(d, value)

# -----------------------------------------------------------------------------
# AntlrSingletonPredictionContext
# -----------------------------------------------------------------------------
def AntlrSingletonPredictionContext_toString(d, value):
        up=""
        if long(value["parent"]) != 0:
                up=AntlrPredictionContext_toString(d, value["parent"].dereference())
        if not up:
                # @see http://stackoverflow.com/questions/30013252/get-all-global-variables-local-variables-in-gdbs-python-interface
                # to get #define ANTLR_PREDICTION_CONTEXT_EMPTY_RETURN_STATE G_MAXINT
                # by using global variable
                # @info sys.maxsize === sys.maxint == 9223372036854775807 instead of 2147483647
                if value["return_state"] > 99999:
                        return "$"
                return "%d" % value["return_state"]
        return "%d %s" % (value["return_state"], up)

def qdump__AntlrSingletonPredictionContext(d, value):
        name = g_type_name_from_instance(value.address)
        if name!=None and name!="AntlrSingletonPredictionContext":
                obj = value.cast (gdb.lookup_type(name))
                d.putItem(obj)
        else:
                d.putValue(AntlrSingletonPredictionContext_toString(d, value))
                d.putType('AntlrSingletonPredictionContext')
                d.putNumChild(4)
                if d.isExpanded():
                        with Children(d):
                                d.putSubItem("id", value["parent_instance"]["id"])
                                d.putSubItem("cached_hash_code", value["parent_instance"]["cached_hash_code"])
                                d.putSubItem("parent", value["parent"])
                                d.putSubItem("return_state", value["return_state"])

def qdump___AntlrSingletonPredictionContext(d, value):
        qdump__AntlrSingletonPredictionContext(d, value)

# -----------------------------------------------------------------------------
# AntlrEmptyPredictionContext
# -----------------------------------------------------------------------------
def AntlrEmptyPredictionContext_toString(d, value):
        return AntlrSingletonPredictionContext_toString(d, value["parent_instance"])

def qdump__AntlrEmptyPredictionContext(d, value):
        d.putValue(AntlrEmptyPredictionContext_toString(d, value))
        d.putType("AntlrEmptyPredictionContext")
        d.putNumChild(2)
        if d.isExpanded():
                with Children(d):
                        d.putSubItem("id", value["parent_instance"]["parent_instance"]["id"])
                        d.putSubItem("cached_hash_code", value["parent_instance"]["parent_instance"]["cached_hash_code"])
                        d.putSubItem("parent", value["parent_instance"]["parent"])
                        d.putSubItem("return_state", value["parent_instance"]["return_state"])

def qdump___AntlrEmptyPredictionContext(d, value):
        qdump__AntlrEmptyPredictionContext(d, value)

# -----------------------------------------------------------------------------
# AntlrPredictionContext
# -----------------------------------------------------------------------------

def AntlrPredictionContext_toString(d, value):
        name = g_type_name_from_instance(value.address)
        if name!=None and name!="AntlrPredictionContext":
                str_func_name = "%s_toString" % name
                if str_func_name in globals():
                        obj = value.cast(gdb.lookup_type(name))
                        return eval("%s(d, obj)" % str_func_name)
                else:
                        logging.debug("%s not implemented" % str_func_name)
        return "@%s" % value.address

def qdump__AntlrPredictionContext(d, value):
        name = g_type_name_from_instance(value.address)
        if name!=None and name!="AntlrPredictionContext":
                obj = value.cast (gdb.lookup_type(name))
                d.putItem(obj)
        else:
                d.putValue(AntlrPredictionContext_toString(d, value))
                d.putType('AntlrPredictionContext')
                d.putNumChild(2)
                if d.isExpanded():
                        with Children(d):
                                d.putSubItem("id", value["id"])
                                d.putSubItem("cached_hash_code", value["cached_hash_code"])

def qdump___AntlrPredictionContext(d, value):
        qdump__AntlrPredictionContext(d, value)

# -----------------------------------------------------------------------------
# AntlrSemanticContext
#   |
#   +-> AntlrOperator
#   |     |
#   |     +-> AntlrAnd
#   |     |
#   |     +-> AntlrOr
#   |
#   +-> AntlrPredicate
#   |
#   +-> AntlrPrecedencePredicate
# -----------------------------------------------------------------------------

def AntlrAnd_isNone(d, value):
        return False

def AntlrAnd_toString(d, value):
        glist = q__GList(value, gdb.lookup_type("AntlrSemanticContext").pointer())
        return glist.toString(' && ')

def qdump__AntlrAnd(d, value):
        d.putValue(AntlrAnd_toString(d, value))
        d.putType('AntlrAnd')
        d.putNumChild(1)
        if d.isExpanded():
                with Children(d):
                        d.putSubItem("opnds", value["opnds"])


def AntlrOr_isNone(d, value):
        return False

def AntlrOr_toString(d, value):
        glist = q__GList(value, gdb.lookup_type("AntlrSemanticContext").pointer())
        return glist.toString(' || ')

def qdump__AntlrOr(d, value):
        d.putValue(AntlrOr_toString(d, value))
        d.putType('AntlrOr')
        d.putNumChild(1)
        if d.isExpanded():
                with Children(d):
                        d.putSubItem("opnds", value["opnds"])

def AntlrPredicate_isNone(d, value):
        if value["rule_index"] == -1 and value["pred_index"] == -1 and value["is_ctx_dependent"] == False:
                return True
        else:
                return False

def AntlrPredicate_toString(d, value):
        return "{%d:%d}?" % (value["rule_index"], value["pred_index"])

def qdump__AntlrPredicate(d, value):
        d.putValue(AntlrPredicate_toString(d, value))
        d.putType('AntlrPredicate')
        d.putNumChild(3)
        if d.isExpanded():
                with Children(d):
                        d.putSubItem("rule_index", value["rule_index"])
                        d.putSubItem("pred_index", value["pred_index"])
                        d.putSubItem("is_ctx_dependent", value["is_ctx_dependent"])

def qdump___AntlrPredicate(d, value):
        qdump__AntlrPredicate(d, value)

def AntlrPrecedencePredicate_toString(d, value):
        return "{%d>=prec}?" % value["precedence"]

def AntlrPrecedencePredicate_isNone(d, value):
        return False

def qdump__AntlrPrecedencePredicate(d, value):
        d.putValue(AntlrPrecedencePredicate_toString(d, value))
        d.putType('AntlrPrecedencePredicate')
        d.putNumChild(1)
        if d.isExpanded():
                with Children(d):
                        d.putSubItem("precedence", value["precedence"])

def qdump___AntlrPrecedencePredicate(d, value):
        qdump__AntlrPrecedencePredicate(d, value)

def AntlrSemanticContext_toString(d, value):
    name = g_type_name_from_instance(value.address)
    if name!=None and name!="AntlrSemanticContext" and name!="AntlrOperator":
            options = {
                    "AntlrAnd" : AntlrAnd_toString,
                    "AntlrOr" : AntlrOr_toString,
                    "AntlrPredicate" : AntlrPredicate_toString,
                    "AntlrPrecedencePredicate" : AntlrPrecedencePredicate_toString
            }
            obj = value.cast (gdb.lookup_type(name))
            return options[name](d, obj)
    else :
        return "<%s_toString>" % name

def AntlrSemanticContext_isNone(d, value):
        name = g_type_name_from_instance(value.address)
        if name!=None:
                options = {
                        #"AntlrOperator" : AntlrOperator_isNone,
                        "AntlrAnd" : AntlrAnd_isNone,
                        "AntlrOr" : AntlrOr_isNone,
                        "AntlrPredicate" : AntlrPredicate_isNone,
                        "AntlrPrecedencePredicate" : AntlrPrecedencePredicate_isNone
                }
                obj = value.cast (gdb.lookup_type(name))
                return options[name](d, obj)
        else :
            return False


def xxx_qdump__AntlrSemanticContext(d, value):
        name = g_type_name_from_instance(value.address)
        if name!=None and name!="AntlrSemanticContext":
                d.putItem(value.cast (gdb.lookup_type(name)))
        else:
                d.putItem(value)


# -----------------------------------------------------------------------------
# AntlrATNConfig
# AntlrLexerATNConfig
# -----------------------------------------------------------------------------

def AntlrATNConfig_getOuterContextDepth(d, value):
        depth = value["reaches_into_outer_context"] & ~0x40000000
        return depth

def AntlrATNConfig_toString(d, value):
        #return "..."
        output="("
        output+="%s,%d" % (AntlrATNState_toString(d, value["state"].dereference()), value["alt"])
        if value["context"]:
                output+=",[%s]" % (AntlrPredictionContext_toString(d, value["context"].dereference()))
        if value["semantic_context"] and not AntlrSemanticContext_isNone(d, value["semantic_context"].dereference()):
                output+= ",%s" % AntlrSemanticContext_toString(d, value["semantic_context"].dereference())
        depth = AntlrATNConfig_getOuterContextDepth(d, value)
        if depth>0:
                output+=",up=%d" % depth
        output+=")"
        return output


def qdump__AntlrATNConfig(d, value):
        d.putValue(AntlrATNConfig_toString(d, value))
        d.putType('AntlrATNConfig')
        d.putNumChild(5)
        if d.isExpanded():
                with Children(d):
                        d.putSubItem("state", value["state"])
                        d.putSubItem("alt", value["alt"])
                        d.putSubItem("context", value["context"])
                        d.putSubItem("reaches_into_outer_context", value["reaches_into_outer_context"])
                        d.putSubItem("semantic_context", value["semantic_context"])


def AntlrATNConfigSet_toString(d, value):
        #glist = q__GList(value["configs"], gdb.lookup_type('AntlrATNConfig').pointer())
        #strout = '['+glist.toString(', ')+']' # pour des raison de lisibilite
        strout = ''
        if value["has_semantic_context"]:
                strout+= ",hasSemanticContext=true"
        if value["unique_alt"]!=0: #define ANTLT_ATN_INVALID_ALT_NUMBER 0
                strout+=",uniqueAlt=%d" % value["unique_alt"];
        if value["conflicting_alts"]:
                strout+= ",conflictingAlts=%s" % AntlrBitSet_toString(value["conflicting_alts"])
        if value["dips_into_outer_context"]:
                strout+= ",dipsIntoOuterContext"
        return strout

def qdump__AntlrATNConfigSet(d, value):
        d.putValue(AntlrATNConfigSet_toString(d, value))
        d.putType('AntlrATNConfigSet')
        d.putNumChild(10)
        if d.isExpanded():
                with Children(d):
                        d.putSubItem("readonly", value["readonly"])
                        d.putSubItem("config_lookup", value["config_lookup"])
                        #d.putSubItem("buckets", value["buckets"])
                        d.putSubItem("configs", value["configs"])
                        d.putSubItem("unique_alt", value["unique_alt"])
                        d.putSubItem("conflicting_alts", value["conflicting_alts"])
                        d.putSubItem("has_semantic_context", value["has_semantic_context"])
                        d.putSubItem("dips_into_outer_context", value["dips_into_outer_context"])
                        d.putSubItem("full_ctx", value["full_ctx"])
                        d.putSubItem("cached_hash_code", value["cached_hash_code"])
                        d.putSubItem("parent_instance", value["parent_instance"])

def qdump___AntlrATNConfigSet(d, value):
        qdump__AntlrATNConfigSet(d, value)


# -----------------------------------------------------------------------------
# GHashTable_AntlrATNState_AntlrBitSet
# -----------------------------------------------------------------------------
def qdump__GHashTable_AntlrATNState_AntlrBitSet(d, value):
        table = q__GHashTable(value, gdb.lookup_type('AntlrATNState').pointer(), gdb.lookup_type('AntlrBitSet').pointer())
        size = table.count()
        d.putNumChild(size)
        #d.putValue(table.toString())
        d.putItemCount(size)
        if d.isExpanded():
                with Children(d):
                        for child in table.children():
                                str_key = AntlrATNState_toString(d, child[0].dereference())
                                d.putSubItem("%s" % str_key, child[1])


# -----------------------------------------------------------------------------
# GHashTable_AntlrDFAState_AntlrDFAState
# -----------------------------------------------------------------------------
def qdump__GHashTable_AntlrDFAState_AntlrDFAState(d, value):
        table = q__GHashTable(value, gdb.lookup_type('AntlrDFAState').pointer(), gdb.lookup_type('AntlrDFAState').pointer())
        size = table.count()
        d.putNumChild(size)
        #d.putValue(table.toString())
        d.putItemCount(size)
        if d.isExpanded():
                with Children(d):
                        i = 0
                        for child in table.children():
                                str_key = child[0]["state_number"] # AntlrDFAState_toString(d, child[0].dereference())
                                #logging.debug("%s - %s" % (child[0].dereference(), child[1].dereference()))
                                d.putSubItem("%s" % str_key, child[1])
                                i+=1

# -----------------------------------------------------------------------------
# GHashTableAntlrATNConfig
# -----------------------------------------------------------------------------
def qdump__GHashTable_AntlrATNConfig(d, value):
        table = q__GHashTable(value, gdb.lookup_type('AntlrATNConfig').pointer(), gdb.lookup_type('AntlrATNConfig').pointer())
        size = table.count()
        d.putNumChild(size)
        d.putValue(table.toString())
        #d.putItemCount(size)
        if d.isExpanded():
                with Children(d):
                        i = 0
                        for child in table.children():
                                d.putSubItem("[%s]" % i, child[1])
                                i+=1

# -----------------------------------------------------------------------------
# AntlrTransition [x]
#   |    * (serializationNames)
#   |    * (serializationTypes)
#   |    * target
#   |
#   +-> AntlrAbstractPredicateTransition [x]
#   |     |
#   |     +-> AntlrPrecedencePredicateTransition [X]
#   |     |    * precedence
#   |     |
#   |     +-> AntlrPredicateTransition [X]
#   |          * rule_index
#   |          * pred_index
#   |          * is_ctx_dependent
#   |
#   +-> AntlrActionTransition [X]
#   |    * rule_index
#   |    * action_index
#   |    * is_ctx_dependent
#   |
#   +-> AntlrAtomTransition [X]
#   |    * label
#   |
#   +-> AntlrEpsilonTransition [x]
#   |    * (outermostPrecedenceReturn)
#   |
#   +-> AntlrRangeTransition [X]
#   |    * from
#   |    * to
#   |
#   +-> AntlrRuleTransition [X]
#   |    * rule_index
#   |    * precedence
#   |    * follow_state
#   |
#   +-> AntlrSetTransition [ ]
#   |     |    * set
#   |     |
#   |     +-> AntlrNotSetTransition [X]
#   |
#   +-> AntlrWildcardTransition [X]
#
# -----------------------------------------------------------------------------
def AntlrWildcardTransition_toString(d, value):
        return "@%s" % value.address

def qdump__AntlrWildcardTransition(d, value):
        d.putValue(AntlrWildcardTransition_toString(d, value))
        d.putType('AntlrWildcardTransition')
        d.putNumChild(1)
        if d.isExpanded():
                with Children(d):
                        d.putSubItem("target", value["parent_instance"]["target"])

def qdump___AntlrWildcardTransition(d, value):
        qdump__AntlrWildcardTransition(d, value)





def AntlrNotSetTransition_toString(d, value):
        return "@%s" % value.address

def qdump__AntlrNotSetTransition(d, value):
        name = g_type_name_from_instance(value.address)
        logging.debug("%s" % name)
        if name!=None and name!="AntlrNotSetTransition":
                obj = value.cast (gdb.lookup_type(name))
                d.putItem(obj)
        else:
                d.putValue(AntlrNotSetTransition_toString(d, value))
                d.putType('AntlrNotSetTransition')
                d.putNumChild(2)
                if d.isExpanded():
                        with Children(d):
                                d.putSubItem("target", value["parent_instance"]["parent_instance"]["target"])
                                d.putSubItem("set", value["parent_instance"]["set"])

def qdump___AntlrNotSetTransition(d, value):
        qdump__AntlrNotSetTransition(d, value)


def AntlrSetTransition_toString(d, value):
        return "@%s" % value.address

def qdump__AntlrSetTransition(d, value):
        name = g_type_name_from_instance(value.address)
        if name!=None and name!="AntlrSetTransition":
                obj = value.cast (gdb.lookup_type(name))
                d.putItem(obj)
        else:
                d.putValue(AntlrSetTransition_toString(d, value))
                d.putType('AntlrSetTransition')
                d.putNumChild(2)
                if d.isExpanded():
                        with Children(d):
                                d.putSubItem("target", value["parent_instance"]["target"])
                                d.putSubItem("set", value["set"])

def qdump___AntlrSetTransition(d, value):
        qdump__AntlrSetTransition(d, value)




def AntlrRuleTransition_toString(d, value):
        return "@%s" % value.address

def qdump__AntlrRuleTransition(d, value):
        d.putValue(AntlrRuleTransition_toString(d, value))
        d.putType('AntlrRuleTransition')
        d.putNumChild(4)
        if d.isExpanded():
                with Children(d):
                        d.putSubItem("target", value["parent_instance"]["target"])
                        d.putSubItem("rule_index", value["rule_index"])
                        d.putSubItem("precedence", value["precedence"])
                        d.putSubItem("follow_state", value["follow_state"])

def qdump___AntlrRuleTransition(d, value):
        qdump__AntlrRuleTransition(d, value)




def AntlrRangeTransition_toString(d, value):
        return "@%s" % value.address

def qdump__AntlrRangeTransition(d, value):
        d.putValue(AntlrRangeTransition_toString(d, value))
        d.putType('AntlrRangeTransition')
        d.putNumChild(3)
        if d.isExpanded():
                with Children(d):
                        d.putSubItem("target", value["parent_instance"]["target"])
                        d.putSubItem("from", value["from"])
                        d.putSubItem("to", value["to"])

def qdump___AntlrRangeTransition(d, value):
        qdump__AntlrRangeTransition(d, value)





def AntlrEpsilonTransition_toString(d, value):
        return "@%s" % value.address

def qdump__AntlrEpsilonTransition(d, value):
        d.putValue(AntlrEpsilonTransition_toString(d, value))
        d.putType('AntlrEpsilonTransition')
        d.putNumChild(1)
        if d.isExpanded():
                with Children(d):
                        d.putSubItem("target", value["parent_instance"]["target"])

def qdump___AntlrEpsilonTransition(d, value):
        qdump__AntlrEpsilonTransition(d, value)




def AntlrAtomTransition_toString(d, value):
        return "@%s" % value.address

def qdump__AntlrAtomTransition(d, value):
        d.putValue(AntlrAtomTransition_toString(d, value))
        d.putType('AntlrAtomTransition')
        d.putNumChild(2)
        if d.isExpanded():
                with Children(d):
                        d.putSubItem("target", value["parent_instance"]["target"])
                        d.putSubItem("label", value["label"])

def qdump___AntlrAtomTransition(d, value):
        qdump__AntlrAtomTransition(d, value)



def AntlrActionTransition_toString(d, value):
        return "@%s" % value.address

def qdump__AntlrActionTransition(d, value):
        d.putValue(AntlrActionTransition_toString(d, value))
        d.putType('AntlrActionTransition')
        d.putNumChild(4)
        if d.isExpanded():
                with Children(d):
                        d.putSubItem("target", value["parent_instance"]["parent_instance"]["target"])
                        d.putSubItem("rule_index", value["rule_index"])
                        d.putSubItem("action_index", value["action_index"])
                        d.putSubItem("is_ctx_dependent", value["is_ctx_dependent"])

def qdump___AntlrActionTransition(d, value):
        qdump__AntlrActionTransition(d, value)



def AntlrPredicateTransition_toString(d, value):
        return "@%s" % value.address

def qdump__AntlrPredicateTransition(d, value):
        d.putValue(AntlrPredicateTransition_toString(d, value))
        d.putType('AntlrPredicateTransition')
        d.putNumChild(4)
        if d.isExpanded():
                with Children(d):
                        d.putSubItem("target", value["parent_instance"]["parent_instance"]["target"])
                        d.putSubItem("rule_index", value["rule_index"])
                        d.putSubItem("pred_index", value["pred_index"])
                        d.putSubItem("is_ctx_dependent", value["is_ctx_dependent"])

def qdump___AntlrPredicateTransition(d, value):
        qdump__AntlrPredicateTransition(d, value)



def AntlrPrecedencePredicateTransition_toString(d, value):
        return "@%s" % value.address

def qdump__AntlrPrecedencePredicateTransition(d, value):
        d.putValue(AntlrPrecedencePredicateTransition_toString(d, value))
        d.putType('AntlrPrecedencePredicateTransition')
        d.putNumChild(2)
        if d.isExpanded():
                with Children(d):
                        d.putSubItem("target", value["parent_instance"]["parent_instance"]["target"])
                        d.putSubItem("precedence", value["precedence"])

def qdump___AntlrPrecedencePredicateTransition(d, value):
        qdump__AntlrPrecedencePredicateTransition(d, value)




def AntlrAbstractPredicateTransition_toString(d, value):
        return "@%s" % value.address

def qdump__AntlrAbstractPredicateTransition(d, value):
        name = g_type_name_from_instance(value.address)
        if name!=None and name!="AntlrAbstractPredicateTransition":
                obj = value.cast (gdb.lookup_type(name))
                d.putItem(obj)
        else:
                d.putValue(AntlrAbstractPredicateTransition_toString(d, value))
                d.putType('AntlrAbstractPredicateTransition')
                d.putNumChild(1)
                if d.isExpanded():
                        with Children(d):
                                d.putSubItem("target", value["parent_instance"]["target"])

def qdump___AntlrAbstractPredicateTransition(d, value):
        qdump__AntlrAbstractPredicateTransition(d, value)



def AntlrTransition_toString(d, value):
        return "@%s" % value.address

def qdump__AntlrTransition(d, value):
        name = g_type_name_from_instance(value.address)
        if name!=None:
                if name!="AntlrTransition":
                        obj = value.cast (gdb.lookup_type(name))
                        d.putItem(obj)
                else:
                        d.putValue("%s" % AntlrTransition_toString(d, value))
                        d.putType('AntlrTransition')
                        d.putNumChild(1)
                        if d.isExpanded():
                                with Children(d):
                                        d.putSubItem("target", value["target"])
        else:
                d.putValue("<UNKNOW>")


def qdump___AntlrTransition(d, value):
        qdump__AntlrTransition(d, value)


# -----------------------------------------------------------------------------
# AntlrATNState [X]
#   |
#   +-> AntlrBasicState [X]
#   |
#   +-> AntlrBlockEndState [X]
#   |
#   +-> AntlrDecisionState [X]
#   |     |
#   |     +-> AntlrBlockStartState [X]
#   |     |     |
#   |     |     +-> AntlrBasicBlockStartState [X]
#   |     |     |
#   |     |     +-> AntlrPlusBlockStartState [X]
#   |     |     |
#   |     |     +-> AntlrStarBlockStartState [X]
#   |     |
#   |     +-> AntlrPlusLoopbackState [X]
#   |     |
#   |     +-> AntlrStarLoopEntryState [X]
#   |     |
#   |     +-> AntlrTokensStartState [X]
#   |
#   +-> AntlrLoopEndState [ ]
#   |
#   +-> AntlrRuleStartState [ ]
#   |
#   +-> AntlrRuleStopState [ ]
#   |
#   +-> AntlrStarLoopbackState [ ]
#
# -----------------------------------------------------------------------------
def AntlrLoopEndState_toString(d, value):
        return "%d" % value["parent_instance"]["state_number"]

def qdump__AntlrLoopEndState(d, value):
        d.putValue(AntlrLoopEndState_toString(d, value))
        d.putNumChild(7)
        d.putType("AntlrLoopEndState")
        if d.isExpanded():
                with Children(d):
                        d.putSubItem("atn", value["parent_instance"]["atn"])
                        d.putSubItem("state_number", value["parent_instance"]["state_number"])
                        d.putSubItem("rule_index", value["parent_instance"]["rule_index"])
                        d.putSubItem("epsilon_only_transitions", value["parent_instance"]["epsilon_only_transitions"])
                        d.putSubItem("transitions", value["parent_instance"]["transitions"])
                        d.putSubItem("next_token_within_rule", value["parent_instance"]["next_token_within_rule"])
                        d.putSubItem("loop_back_state", value["loop_back_state"])

def qdump___AntlrLoopEndState(d, value):
        qdump__AntlrLoopEndState(d, value)


def AntlrRuleStartState_toString(d, value):
        return "%d" % value["parent_instance"]["state_number"]

def qdump__AntlrRuleStartState(d, value):
        d.putValue(AntlrRuleStartState_toString(d, value))
        d.putType('AntlrRuleStartState')
        d.putNumChild(8)
        if d.isExpanded():
                with Children(d):
                        d.putSubItem("atn", value["parent_instance"]["atn"])
                        d.putSubItem("state_number", value["parent_instance"]["state_number"])
                        d.putSubItem("rule_index", value["parent_instance"]["rule_index"])
                        d.putSubItem("epsilon_only_transitions", value["parent_instance"]["epsilon_only_transitions"])
                        d.putSubItem("transitions", value["parent_instance"]["transitions"])
                        d.putSubItem("next_token_within_rule", value["parent_instance"]["next_token_within_rule"])
                        d.putSubItem("stop_state", value["stop_state"])
                        d.putSubItem("is_left_recursive_rule", value["is_left_recursive_rule"])

def qdump___AntlrRuleStartState(d, value):
        qdump__AntlrRuleStartState(d, value)



def AntlrRuleStopState_toString(d, value):
        return "%d" % value["parent_instance"]["state_number"]

def qdump__AntlrRuleStopState(d, value):
        d.putValue(AntlrRuleStopState_toString(d, value))
        d.putType('AntlrRuleStopState')
        d.putNumChild(6)
        if d.isExpanded():
                with Children(d):
                        d.putSubItem("atn", value["parent_instance"]["atn"])
                        d.putSubItem("state_number", value["parent_instance"]["state_number"])
                        d.putSubItem("rule_index", value["parent_instance"]["rule_index"])
                        d.putSubItem("epsilon_only_transitions", value["parent_instance"]["epsilon_only_transitions"])
                        d.putSubItem("transitions", value["parent_instance"]["transitions"])
                        d.putSubItem("next_token_within_rule", value["parent_instance"]["next_token_within_rule"])

def qdump___AntlrRuleStopState(d, value):
        qdump__AntlrRuleStopState(d, value)


def AntlrStarLoopbackState_toString(d, value):
        return "%d" % value["parent_instance"]["state_number"]

def qdump__AntlrStarLoopbackState(d, value):
        d.putValue(AntlrStarLoopbackState_toString(d, value))
        d.putType('AntlrStarLoopbackState')
        d.putNumChild(6)
        if d.isExpanded():
                with Children(d):
                        d.putSubItem("atn", value["parent_instance"]["atn"])
                        d.putSubItem("state_number", value["parent_instance"]["state_number"])
                        d.putSubItem("rule_index", value["parent_instance"]["rule_index"])
                        d.putSubItem("epsilon_only_transitions", value["parent_instance"]["epsilon_only_transitions"])
                        d.putSubItem("transitions", value["parent_instance"]["transitions"])
                        d.putSubItem("next_token_within_rule", value["parent_instance"]["next_token_within_rule"])

def qdump___AntlrStarLoopbackState(d, value):
        qdump__AntlrStarLoopbackState(d, value)




def AntlrStarLoopEntryState_toString(d, value):
        return "%d" % value["parent_instance"]["parent_instance"]["state_number"]

def qdump__AntlrStarLoopEntryState(d, value):
        d.putValue(AntlrStarLoopEntryState_toString(d, value))
        d.putType('AntlrStarLoopEntryState')
        d.putNumChild(8)
        if d.isExpanded():
                with Children(d):
                        d.putSubItem("atn", value["parent_instance"]["parent_instance"]["atn"])
                        d.putSubItem("state_number", value["parent_instance"]["parent_instance"]["state_number"])
                        d.putSubItem("rule_index", value["parent_instance"]["parent_instance"]["rule_index"])
                        d.putSubItem("epsilon_only_transitions", value["parent_instance"]["parent_instance"]["epsilon_only_transitions"])
                        d.putSubItem("transitions", value["parent_instance"]["parent_instance"]["transitions"])
                        d.putSubItem("next_token_within_rule", value["parent_instance"]["parent_instance"]["next_token_within_rule"])
                        d.putSubItem("decision", value["parent_instance"]["decision"])
                        d.putSubItem("non_greedy", value["parent_instance"]["non_greedy"])
                        d.putSubItem("loop_back_state", value["loop_back_state"])
                        d.putSubItem("is_precedence_decision", value["is_precedence_decision"])

def qdump___AntlrStarLoopEntryState(d, value):
        qdump__AntlrStarLoopEntryState(d, value)



def AntlrTokensStartState_toString(d, value):
        return "%d" % value["parent_instance"]["parent_instance"]["state_number"]

def qdump__AntlrTokensStartState(d, value):
        d.putValue(AntlrTokensStartState_toString(d, value))
        d.putType('AntlrTokensStartState')
        d.putNumChild(8)
        if d.isExpanded():
                with Children(d):
                        d.putSubItem("atn", value["parent_instance"]["parent_instance"]["atn"])
                        d.putSubItem("state_number", value["parent_instance"]["parent_instance"]["state_number"])
                        d.putSubItem("rule_index", value["parent_instance"]["parent_instance"]["rule_index"])
                        d.putSubItem("epsilon_only_transitions", value["parent_instance"]["parent_instance"]["epsilon_only_transitions"])
                        d.putSubItem("transitions", value["parent_instance"]["parent_instance"]["transitions"])
                        d.putSubItem("next_token_within_rule", value["parent_instance"]["parent_instance"]["next_token_within_rule"])
                        d.putSubItem("decision", value["parent_instance"]["decision"])
                        d.putSubItem("non_greedy", value["parent_instance"]["non_greedy"])

def qdump___AntlrTokensStartState(d, value):
        qdump__AntlrTokensStartState(d, value)



def AntlrPlusLoopbackState_toString(d, value):
        return "%d" % value["parent_instance"]["parent_instance"]["state_number"]

def qdump__AntlrPlusLoopbackState(d, value):
        d.putValue(AntlrPlusLoopbackState_toString(d, value))
        d.putType('AntlrPlusLoopbackState')
        d.putNumChild(8)
        if d.isExpanded():
                with Children(d):
                        d.putSubItem("atn", value["parent_instance"]["parent_instance"]["atn"])
                        d.putSubItem("state_number", value["parent_instance"]["parent_instance"]["state_number"])
                        d.putSubItem("rule_index", value["parent_instance"]["parent_instance"]["rule_index"])
                        d.putSubItem("epsilon_only_transitions", value["parent_instance"]["parent_instance"]["epsilon_only_transitions"])
                        d.putSubItem("transitions", value["parent_instance"]["parent_instance"]["transitions"])
                        d.putSubItem("next_token_within_rule", value["parent_instance"]["parent_instance"]["next_token_within_rule"])
                        d.putSubItem("decision", value["parent_instance"]["decision"])
                        d.putSubItem("non_greedy", value["parent_instance"]["non_greedy"])

def qdump___AntlrPlusLoopbackState(d, value):
        qdump__AntlrPlusLoopbackState(d, value)



def AntlrBasicBlockStartState_toString(d, value):
        return "%d" % value["parent_instance"]["parent_instance"]["parent_instance"]["state_number"]

def qdump__AntlrBasicBlockStartState(d, value):
        d.putValue(AntlrBasicBlockStartState_toString(d, value))
        d.putType('AntlrBasicBlockStartState')
        d.putNumChild(9)
        if d.isExpanded():
                with Children(d):
                        d.putSubItem("atn", value["parent_instance"]["parent_instance"]["parent_instance"]["atn"])
                        d.putSubItem("state_number", value["parent_instance"]["parent_instance"]["parent_instance"]["state_number"])
                        d.putSubItem("rule_index", value["parent_instance"]["parent_instance"]["parent_instance"]["rule_index"])
                        d.putSubItem("epsilon_only_transitions", value["parent_instance"]["parent_instance"]["parent_instance"]["epsilon_only_transitions"])
                        d.putSubItem("transitions", value["parent_instance"]["parent_instance"]["parent_instance"]["transitions"])
                        d.putSubItem("next_token_within_rule", value["parent_instance"]["parent_instance"]["parent_instance"]["next_token_within_rule"])
                        d.putSubItem("decision", value["parent_instance"]["parent_instance"]["decision"])
                        d.putSubItem("non_greedy", value["parent_instance"]["parent_instance"]["non_greedy"])
                        d.putSubItem("end_state",  value["parent_instance"]["end_state"])

def qdump___AntlrBasicBlockStartState(d, value):
        qdump__AntlrBasicBlockStartState(d, value)


def AntlrPlusBlockStartState_toString(d, value):
        return "%d" % value["parent_instance"]["parent_instance"]["parent_instance"]["state_number"]

def qdump__AntlrPlusBlockStartState(d, value):
        d.putValue(AntlrPlusBlockStartState_toString(d, value))
        d.putType('AntlrPlusBlockStartState')
        d.putNumChild(10)
        if d.isExpanded():
                with Children(d):
                        d.putSubItem("atn", value["parent_instance"]["parent_instance"]["parent_instance"]["atn"])
                        d.putSubItem("state_number", value["parent_instance"]["parent_instance"]["parent_instance"]["state_number"])
                        d.putSubItem("rule_index", value["parent_instance"]["parent_instance"]["parent_instance"]["rule_index"])
                        d.putSubItem("epsilon_only_transitions", value["parent_instance"]["parent_instance"]["parent_instance"]["epsilon_only_transitions"])
                        d.putSubItem("transitions", value["parent_instance"]["parent_instance"]["parent_instance"]["transitions"])
                        d.putSubItem("next_token_within_rule", value["parent_instance"]["parent_instance"]["parent_instance"]["next_token_within_rule"])
                        d.putSubItem("decision", value["parent_instance"]["parent_instance"]["decision"])
                        d.putSubItem("non_greedy", value["parent_instance"]["parent_instance"]["non_greedy"])
                        d.putSubItem("end_state", value["parent_instance"]["end_state"])
                        d.putSubItem("loop_back_state", value["loop_back_state"])

def qdump___AntlrPlusBlockStartState(d, value):
        qdump__AntlrPlusBlockStartState(d, value)

def AntlrStarBlockStartState_toString(d, value):
        return "%d" % value["parent_instance"]["parent_instance"]["parent_instance"]["state_number"]

def qdump__AntlrStarBlockStartState(d, value):
        d.putValue(AntlrStarBlockStartState_toString(d, value))
        d.putType('AntlrStarBlockStartState')
        d.putNumChild(9)
        if d.isExpanded():
                with Children(d):
                        d.putSubItem("atn", value["parent_instance"]["parent_instance"]["parent_instance"]["atn"])
                        d.putSubItem("state_number", value["parent_instance"]["parent_instance"]["parent_instance"]["state_number"])
                        d.putSubItem("rule_index", value["parent_instance"]["parent_instance"]["parent_instance"]["rule_index"])
                        d.putSubItem("epsilon_only_transitions", value["parent_instance"]["parent_instance"]["parent_instance"]["epsilon_only_transitions"])
                        d.putSubItem("transitions", value["parent_instance"]["parent_instance"]["parent_instance"]["transitions"])
                        d.putSubItem("next_token_within_rule", value["parent_instance"]["parent_instance"]["parent_instance"]["next_token_within_rule"])
                        d.putSubItem("decision", value["parent_instance"]["parent_instance"]["decision"])
                        d.putSubItem("non_greedy", value["parent_instance"]["parent_instance"]["non_greedy"])
                        d.putSubItem("end_state", value["parent_instance"]["end_state"])

def qdump___AntlrStarBlockStartState(d, value):
        qdump__AntlrStarBlockStartState(d, value)

def AntlrBlockStartState_toString(d, value):
        return "%d" % value["parent_instance"]["parent_instance"]["state_number"]

def qdump__AntlrBlockStartState(d, value):
        name = g_type_name_from_instance(value.address)
        if name!=None and name!="AntlrBlockStartState":
                obj = value.cast (gdb.lookup_type(name))
                d.putItem(obj)
        else:
                d.putValue(AntlrBlockStartState_toString(d, value))
                d.putType('AntlrBlockStartState')
                d.putNumChild(9)
                if d.isExpanded():
                        with Children(d):
                                d.putSubItem("atn", value["parent_instance"]["parent_instance"]["atn"])
                                d.putSubItem("state_number", value["parent_instance"]["parent_instance"]["state_number"])
                                d.putSubItem("rule_index", value["parent_instance"]["parent_instance"]["rule_index"])
                                d.putSubItem("epsilon_only_transitions", value["parent_instance"]["parent_instance"]["epsilon_only_transitions"])
                                d.putSubItem("transitions", value["parent_instance"]["parent_instance"]["transitions"])
                                d.putSubItem("next_token_within_rule", value["parent_instance"]["parent_instance"]["next_token_within_rule"])
                                d.putSubItem("decision", value["parent_instance"]["decision"])
                                d.putSubItem("non_greedy", value["parent_instance"]["non_greedy"])
                                d.putSubItem("end_state", value["end_state"])


def qdump___AntlrBlockStartState(d, value):
        qdump__AntlrBlockStartState(d, value)

def AntlrDecisionState_toString(d, value):
        return "%d" % value["parent_instance"]["state_number"]

def qdump__AntlrDecisionState(d, value):
        name = g_type_name_from_instance(value.address)
        if name!=None and name!="AntlrDecisionState":
                obj = value.cast (gdb.lookup_type(name))
                d.putItem(obj)
        else:
                d.putValue(AntlrDecisionState_toString(d, value))
                d.putType('AntlrDecisionState')
                d.putNumChild(8)
                if d.isExpanded():
                        with Children(d):
                                d.putSubItem("atn", value["parent_instance"]["atn"])
                                d.putSubItem("state_number", value["parent_instance"]["state_number"])
                                d.putSubItem("rule_index", value["parent_instance"]["rule_index"])
                                d.putSubItem("epsilon_only_transitions", value["parent_instance"]["epsilon_only_transitions"])
                                d.putSubItem("transitions", value["parent_instance"]["transitions"])
                                d.putSubItem("next_token_within_rule", value["parent_instance"]["next_token_within_rule"])
                                d.putSubItem("decision", value["decision"])
                                d.putSubItem("non_greedy", value["non_greedy"])

def qdump___AntlrDecisionState(d, value):
        qdump__AntlrDecisionState(d, value)

def AntlrBlockEndState_toString(d, value):
        return "%d" % value["parent_instance"]["state_number"]

def qdump__AntlrBlockEndState(d, value):
        d.putValue(AntlrBlockEndState_toString(d, value))
        d.putType('AntlrBlockEndState')
        d.putNumChild(7)
        if d.isExpanded():
                with Children(d):
                        d.putSubItem("atn", value["parent_instance"]["atn"])
                        d.putSubItem("state_number", value["parent_instance"]["state_number"])
                        d.putSubItem("rule_index", value["parent_instance"]["rule_index"])
                        d.putSubItem("epsilon_only_transitions", value["parent_instance"]["epsilon_only_transitions"])
                        d.putSubItem("transitions", value["parent_instance"]["transitions"])
                        d.putSubItem("next_token_within_rule", value["parent_instance"]["next_token_within_rule"])
                        d.putSubItem("start_state", value["start_state"])

def qdump___AntlrBlockEndState(d, value):
        qdump__AntlrBlockEndState(d, value)

def AntlrBasicState_toString(d, value):
        return "%d" % value["parent_instance"]["state_number"]

def qdump__AntlrBasicState(d, value):
        d.putValue(AntlrBasicState_toString(d, value))
        d.putType('AntlrBasicState')
        d.putNumChild(6)
        if d.isExpanded():
                with Children(d):
                        d.putSubItem("atn", value["parent_instance"]["atn"])
                        d.putSubItem("state_number", value["parent_instance"]["state_number"])
                        d.putSubItem("rule_index", value["parent_instance"]["rule_index"])
                        d.putSubItem("epsilon_only_transitions", value["parent_instance"]["epsilon_only_transitions"])
                        d.putSubItem("transitions", value["parent_instance"]["transitions"])
                        d.putSubItem("next_token_within_rule", value["parent_instance"]["next_token_within_rule"])

def qdump___AntlrBasicState(d, value):
        qdump__AntlrBasicState(d, value)

def AntlrATNState_toString(d, value):
        return "%d" % value["state_number"]

def qdump__AntlrATNState(d, value):
        name = g_type_name_from_instance(value.address)
        if name!=None and name!="AntlrATNState":
                obj = value.cast (gdb.lookup_type(name))
                d.putItem(obj)
        else:
                d.putValue(AntlrATNState_toString(d, value))
                d.putType('AntlrATNState')
                d.putNumChild(6)
                if d.isExpanded():
                        with Children(d):
                                d.putSubItem("atn", value["atn"])
                                d.putSubItem("state_number", value["state_number"])
                                d.putSubItem("rule_index", value["rule_index"])
                                d.putSubItem("epsilon_only_transitions", value["epsilon_only_transitions"])
                                d.putSubItem("transitions", value["transitions"])
                                d.putSubItem("next_token_within_rule", value["next_token_within_rule"])

def qdump___AntlrATNState(d, value):
        qdump__AntlrATNState(d, value)


# -----------------------------------------------------------------------------
# GPtrArray_AntlrATNState
# TODO use isExpand
# -----------------------------------------------------------------------------
def qdump__GPtrArray_AntlrATNState(d, value):
        glue = ""
        resume = ""
        size = 0
        printer = q__GPtrArray(value, gdb.lookup_type("AntlrATNState").pointer())
        if d.isExpanded():
                with Children(d):
                        for child in printer.children():
                                with SubItem(d, child[0]):
                                        obj = child[1]
                                        state = obj.cast(gdb.lookup_type("AntlrATNState").pointer())
                                        val = AntlrATNState_toString(d, state)
                                        d.putItem(obj)
                                        resume += glue + val
                                        glue = ", "
                                size += 1
                d.putValue('{' + resume + '}')
                #d.putItemCount(size)
                d.putNumChild(size)
        else:
            d.putNumChild(printer.count())


# -----------------------------------------------------------------------------
# GPtrArray_AntlrDFA
# -----------------------------------------------------------------------------
def qdump__GPtrArray_AntlrDFA(d, value):
        glue = ""
        resume = ""
        size = 0
        printer = q__GPtrArray(value, gdb.lookup_type("AntlrDFA").pointer())
        if d.isExpanded():
                with Children(d):
                        for child in printer.children():
                                with SubItem(d, child[0]):
                                        obj = child[1]
                                        state = obj.cast(gdb.lookup_type("AntlrDFA").pointer())
                                        val = ""#AntlrATNState_toString(d, state)
                                        d.putItem(obj)
                                        #resume += glue + val
                                        glue = ", "
                                size += 1
                d.putValue('{' + resume + '}')
                #d.putItemCount(size)
                d.putNumChild(size)
        else:
            d.putNumChild(printer.count())


# -----------------------------------------------------------------------------
# qdump__GPtrArray_AntlrDFAState
# -----------------------------------------------------------------------------
def qdump__GPtrArray_AntlrDFAState(d, value):
        glue = ""
        resume = ""
        size = 0
        printer = q__GPtrArray(value, gdb.lookup_type("AntlrDFAState").pointer())
        if d.isExpanded():
                with Children(d):
                        for child in printer.children():
                                with SubItem(d, child[0]):
                                        obj = child[1]
                                        state = obj.cast(gdb.lookup_type("AntlrDFAState").pointer())
                                        val = ""#AntlrATNState_toString(d, state)
                                        d.putItem(obj)
                                        #resume += glue + val
                                        glue = ", "
                                size += 1
                d.putValue('{' + resume + '}')
                #d.putItemCount(size)
                d.putNumChild(size)
        else:
            d.putNumChild(printer.count())



# -----------------------------------------------------------------------------
# GPtrArray_AntlrATNState
# TODO use isExpand
# -----------------------------------------------------------------------------
def qdump__GPtrArray_AntlrToken(d, value):
        glue = ""
        resume = ""
        size = 0
        printer = q__GPtrArray(value, gdb.lookup_type("AntlrToken").pointer())
        if d.isExpanded():
                with Children(d):
                        for child in printer.children():
                                with SubItem(d, child[0]):
                                        obj = child[1]
                                        token = obj.cast(gdb.lookup_type("AntlrToken").pointer())
                                        val = "AntlrCommonToken_toString" #AntlrToken_toString(d, token)
                                        d.putItem(obj)
                                        resume += glue + val
                                        glue = ", "
                                size += 1
                #d.putValue('{' + resume + '}')
                #d.putItemCount(size)
                d.putNumChild(size)
        else:
            d.putNumChild(printer.count())


# -----------------------------------------------------------------------------
# AntlrDFAState
# -----------------------------------------------------------------------------
def AntlrDFAState_toString(d, value):
        str_configs=""
        glue=""
        configs = value["configs"].cast (gdb.lookup_type("AntlrATNConfigSet").pointer())
        container = configs["configs"]
        while long(container) != 0:
                name = g_type_name_from_instance(container["data"])
                if name!=None:
                        obj = container["data"].cast (gdb.lookup_type("AntlrATNConfig").pointer())
                        str_configs+='%s%s' % ( glue, AntlrATNConfig_toString(d, obj.dereference()) )
                else:
                        obj = container["data"]
                        str_configs+='%s%s' % ( glue, "<Unknow>" )
                glue=", "
                container = container["next"]
        return "%d:[%s]" % (value["state_number"], str_configs)

def qdump__AntlrDFAState(d, value):
        d.putValue(AntlrDFAState_toString(d, value))
        d.putNumChild(9)
        d.putType('AntlrDFAState')
        if d.isExpanded():
                with Children(d):
                        with SubItem(d, "state_number"):
                                d.putValue("%d" % value["state_number"])
                                d.putType("gint")
                                d.putNumChild(0)
                        d.putSubItem("configs", value["configs"])
                        d.putSubItem("edges", value["edges"])
                        d.putSubItem("is_accept_state", value["is_accept_state"])
                        d.putSubItem("prediction", value["prediction"])
                        d.putSubItem("lexer_action_executor", value["lexer_action_executor"])
                        d.putSubItem("requires_full_context", value["requires_full_context"])
                        d.putSubItem("predicates", value["predicates"])
                        d.putSubItem("parent_instance", value["parent_instance"])




# -----------------------------------------------------------------------------
# SqlContextStatement
# -----------------------------------------------------------------------------

# -----------------------------------------------------------------------------
# AntlrParseTree
# -----------------------------------------------------------------------------

# -----------------------------------------------------------------------------
# AntlrATNSimulator
# -----------------------------------------------------------------------------
def qdump__AntlrATNInterpreter(d, value):
        name = g_type_name_from_instance(value.address)
        if name!=None and name!="AntlrATNInterpreter":
                obj = value.cast (gdb.lookup_type(name).pointer())
                d.putItem(obj)
        else:
                d.putItem(value)
                #d.putValue("@%s" % value.address)
                #d.putType("AntlrATNSimulator")
                #d.putNumChild(0)


# -----------------------------------------------------------------------------
# GArrayAntlrDFA
# -----------------------------------------------------------------------------
def qdump__GArrayAntlrDFA(d, value):
        glue = ""
        resume = ""
        printer = q__GArray(value, gdb.lookup_type("AntlrDFA").pointer())
        d.putNumChild(printer.count())
        if d.isExpanded():
                with Children(d):
                        for child in printer.children():
                                with SubItem(d, child[0]):
                                        obj = child[1] #.dereference()
                                        val = "..." #AntlrCommonToken_toString(d, obj)
                                        d.putItem(obj)
                                        resume += glue + val
                                        glue = ", "
                d.putValue('{' + resume + '}')
                #d.putItemCount(size)

# -----------------------------------------------------------------------------
# AntlrexerAction
# -----------------------------------------------------------------------------
#def qdump__AntlrLexerAction(d, value):
#        glue = ""

# -----------------------------------------------------------------------------
# GPtrArray_AntlrexerAction
# -----------------------------------------------------------------------------
def qdump__GPtrArray_AntlrLexerAction(d, value):
        glue = ""
        resume = ""
        printer = q__GPtrArray(value, gdb.lookup_type("AntlrLexerAction").pointer())
        d.putNumChild(printer.count())
        if d.isExpanded():
                with Children(d):
                        for child in printer.children():
                                with SubItem(d, child[0]):
                                        obj = child[1] #.dereference()
                                        val = "..." #AntlrCommonToken_toString(d, obj)
                                        d.putItem(obj)
                                        resume += glue + val
                                        glue = ", "
                d.putValue('{' + resume + '}')
                #d.putItemCount(size)

# -----------------------------------------------------------------------------
# AntlrFlexibleHashMap AntlrATNConfig, AntlrBitSet
# -----------------------------------------------------------------------------
#def qdump__AntlrFlexibleHashMap(d, value):
#        buckets = value["buckets"].cast ( gdb.lookup_type("GHashTable_AntlrATNConfig_GList_AntlrFlexibleHashEntry").pointer() )
#        d.putNumChild(1)
#        with Children(d):
#                d.putSubItem("buckets", buckets)

#def qdump___AntlrFlexibleHashMap(d, value):
#        qdump__AntlrFlexibleHashMap(d, value)

def qdump__GHashTable_AntlrATNConfig_GList_AntlrFlexibleHashEntry(d, value):
        table = q__GHashTable(value, gdb.lookup_type('AntlrATNConfig').pointer(), gdb.lookup_type('GList_AntlrFlexibleHashEntry').pointer())
        size = table.count()
        d.putItemCount(size)
        d.putNumChild(size)
        if d.isExpanded():
                with Children(d):
                        for child in table.children():
                                #entry = child[1].cast (gdb.lookup_type("GList_AntlrFlexibleHashEntry").pointer()).dereference();
                                #key = child[0].cast (gdb.lookup_type("AntlrATNConfig").pointer()).dereference();
                                str_key = AntlrATNConfig_toString(d, child[0].dereference())
                                #entry = child[1]#.cast (gdb.lookup_type("AntlrFlexibleHashEntry").pointer());
                                d.putSubItem("%s" % str_key, child[1].dereference())

def qdump__GList_AntlrFlexibleHashEntry(d, value):
	glist = q__GList(value, gdb.lookup_type("AntlrFlexibleHashEntry").pointer())
	#d.putValue(glist.toString(', '))
	d.putType('GList *')
	d.putAddress(value.address)
	d.putNumChild(glist.count())
	if d.isExpanded():
		with Children(d):
			for item in glist.children():
				d.putSubItem("[%d]" % item[0], item[1])

def qdump__AntlrFlexibleHashEntry(d, value):
        key = value["key"].cast (gdb.lookup_type("AntlrATNConfig").pointer())
        val = value["value"].cast (gdb.lookup_type("AntlrBitSet").pointer())
        d.putNumChild(2)
        if d.isExpanded():
                with Children(d):
                        d.putSubItem("key", key)
                        d.putSubItem("value", val)


def qdump__GPtrArray_AntlrIntervalSet(d, value):
        glue = ""
        resume = ""
        size = 0
        printer = q__GPtrArray(value, gdb.lookup_type("AntlrIntervalSet").pointer())
        if d.isExpanded():
                with Children(d):
                        for child in printer.children():
                                with SubItem(d, child[0]):
                                        obj = child[1]
                                        #state = obj.cast(gdb.lookup_type("AntlrATNState").pointer())
                                        #val = AntlrATNState_toString(d, state)
                                        d.putItem(obj)
                                        #resume += glue + val
                                        #glue = ", "
                                size += 1
                #d.putValue('{' + resume + '}')
                #d.putItemCount(size)
                d.putNumChild(size)
        else:
                d.putNumChild(printer.count())


def qdump__AntlrIntISet__(d, value):
        d.putValue("What happen ?")

def qdump__AntlrIntISet__(d, value):
        name = g_type_name_from_instance(value.address)
        if name!=None and name!="AntlrIntISet":
                obj = value.cast(gdb.lookup_type(name).pointer())
                d.putItem(obj)
        else:
                d.putValue("@%s" % value.address)
