#!/usr/bin/env python

# /home/gaulouis/local/src/tmp/test/dummy/gdb_dummy.py
# /home/gaulouis/local/src/glib-antlr/tools/qtcreator/gdb/antlr.py

import sys
import gdb
from dumper import *


# Update module path for glib and gobject
dir_ = '/usr/share/glib-2.0/gdb'
if not dir_ in sys.path:
    sys.path.insert(1, dir_)

from glib import *
from gobject import *


import logging
logging.basicConfig(filename='/home/gaulouis/Documents/log.txt',level=logging.DEBUG)
#logging.debug('qdump__GHashTable .........................')
#logging.debug('%s' % sys.path)

# #############################################################################
# GLib Pretty-Printer
# #############################################################################


class q__GPtrArray:
	"Prints a GPtrArray"

	class _iterator:
		def __init__(self, array, childType):
			self.array = array
			self.index = -1
			self.value = None
			self.childType = childType

		def __iter__(self):
			return self

		def next(self):
			if not self.array:
				raise StopIteration
			while int(self.index+1) < int(self.array["len"]):
				self.index += 1
				val = self.array["pdata"].cast(self.childType.pointer())
				self.value = val[self.index].cast(self.childType)
				return (self.index, self.value)
			raise StopIteration

		__next__ = next # Python 3: def __next__(self)

	def __init__ (self, value, childType):
		self.value = value
		self.childType = childType

	def children(self):
		return self._iterator(self.value, self.childType)

	def count(self):
		size = 0
		for child in self.children(): size += 1
		return size



class q__GHashTable:
        "Prints a GHashTable"

        class _iterator:
                def __init__(self, ht, keyType, valType):
                        self.ht = ht
                        if ht:
                                self.keys   = ht["keys"]
                                self.values = ht["values"]
                                self.hashes = ht["hashes"]
                                self.nnodes = ht["nnodes"]
                        self.pos = -1
                        self.node = 0
                        self.keyType = keyType
                        self.valType = valType
                        self.value = None

                def __iter__(self):
                        return self

                def next(self):
                        if not self.ht:
                                raise StopIteration
                        #if self.value != None:
                        #	v = self.value
                        #	self.value = None
                        #	return v
                        while long(self.node) < long(self.nnodes):
                                self.pos += 1
                                if self.hashes[self.pos] >= 2:
                                        self.node = self.node + 1
                                        key = self.keys[self.pos]
                                        key = key.cast (self.keyType)
                                        val = self.values[self.pos]
                                        val = val.cast(self.valType)
                                        #val = val.cast (gdb.lookup_type("char").pointer())
                                        return (self.pos, key, val)
                        raise StopIteration

                __next__ = next # Python 3: def __next__(self)

        def __init__ (self, val, keyType, valType):
                self.val = val
                self.keyType = keyType
                self.valType = valType

        def children(self):
                return self._iterator(self.val, self.keyType, self.valType)

        def count(self):
                size = 0
                for child in self.children(): size += 1
                return size

# #############################################################################
# GObject Pretty-Printer
# #############################################################################

# -----------------------------------------------------------------------------
# AntlrObject Pretty-Printer
# -----------------------------------------------------------------------------

def AntlrObject_toString(d, value):
    return "@%s" % value.address

class q__AntlrObject:
    def __init__ (self, typeName):
        self.typeName = typeName
    """
    Use C-API antlr_<object>_to_string()
    or Antlr<Object>_toString(d, value) if user define it
    else @0xaddress
    """
    def toString (self, d, value):
        string_value = "<UNKNOW>"
        object_to_string = "%s_toString" % self.typeName
        if object_to_string in globals():
            try:
                string_value = eval("%s(d, value)" % object_to_string)
            except:
                string_value = "<except eval()>"
        else:
            try:
                output = gdb.parse_and_eval("antlr_object_to_string("+str(value.address)+")");
                string_value = output.string()
            except:
                string_value = AntlrObject_toString(d, value)
        return string_value
    """
    Use QtCreator Pretty-Printer API
    """
    def dump (self, d, value):
        object = value.cast (gdb.lookup_type(self.typeName))
        #fields = object.type.fields(); # key = field.name
        keys = object.type.keys()
        d.putNumChild(len(keys))
        isParent = True;
        if d.isExpanded():
            with Children(d):
                    for key in keys: #object.type.keys():
                        if isParent:
                            parent_type = "%s" % object[key].type
                            if parent_type == "GObject":
                                d.putSubItem(key, object[key])
                            else :
                                with SubItem(d, "%s" % key):
                                    q__AntlrObject(parent_type).dump(d, object[key])
                        else:
                            d.putSubItem(key, object[key])
                        isParent = False;
        d.putType("%s *" % self.typeName)
        d.putAddress(value.address)
        d.putValue("%s" % self.toString(d, object))

def qdump__AntlrObject(d, value):
    name = g_type_name_from_instance(value.address)
    # @TODO if name!=None: else:
    q__AntlrObject(name).dump(d, value)


# -----------------------------------------------------------------------------
# GList Pretty-Printer
# -----------------------------------------------------------------------------

#class q__GList:
#    def __init__ (self, dataType):
#        self.dataType = dataType
#    def dump (self, d, value):
#        object = value.cast (gdb.lookup_type(self.typeName))

#items = []

# #############################################################################
# AntlrTransition Pretty-Printer
# #############################################################################

# GList_AntlrTransition -------------------------------------------------------
#def qdump__GList_AntlrTransition(d, value):
#    type_name = GObject | struct _Name
#    q__GList(type_name).dump(d, value)

def qdump__GList_AntlrTransition(d, value):
    str = ""
    glue = ""
    glist = GListPrinter(value.address, "GList")
    num=0
    if d.isExpanded():
        with Children(d):
            for item in glist.children():
                type_name = g_type_name_from_instance(item[1])
                obj = gdb.Value(item[1]).cast(gdb.lookup_type(type_name).pointer())
                object = obj.dereference()
                d.putSubItem("%s" % item[0], object)
                num=num+1
                #str = "%s%s%s" % (str, glue, object.to_string())
                #glue = ", "
    else:
        for item in glist.children():
            num=num+1
    #d.putValue("%s" % str)
    d.putItemCount(num)
    d.putNumChild(num)


# AntlrTransition -------------------------------------------------------------
def AntlrTransition_toString(d, value):
    return "@%s" % value.address

def qdump__AntlrTransition(d, value):
    qdump__AntlrObject(d, value)

def qdump___AntlrTransition(d, value):
    qdump__AntlrTransition(d, value)

# AntlrAbstractPredicateTransition --------------------------------------------
def qdump__AntlrAbstractPredicateTransition(d, value):
    qdump__AntlrObject(d, value)

def qdump___AntlrAbstractPredicateTransition(d, value):
    qdump__AntlrAbstractPredicateTransition(d, value)

# AntlrPrecedencePredicateTransition ------------------------------------------
def qdump__AntlrPrecedencePredicateTransition(d, value):
    qdump__AntlrObject(d, value)

def qdump___AntlrPrecedencePredicateTransition(d, value):
    qdump__AntlrPrecedencePredicateTransition(d, value)

# AntlrPredicateTransition ----------------------------------------------------
def qdump__AntlrPredicateTransition(d, value):
    qdump__AntlrObject(d, value)

def qdump___AntlrPredicateTransition(d, value):
    qdump__AntlrPredicateTransition(d, value)

# AntlrActionTransition -------------------------------------------------------
def qdump__AntlrActionTransition(d, value):
    qdump__AntlrObject(d, value)

def qdump___AntlrActionTransition(d, value):
    qdump__AntlrActionTransition(d, value)

# AntlrAtomTransition ---------------------------------------------------------
def qdump__AntlrAtomTransition(d, value):
    qdump__AntlrObject(d, value)

def qdump___AntlrAtomTransition(d, value):
    qdump__AntlrAtomTransition(d, value)

# AntlrEpsilonTransition ------------------------------------------------------
def qdump__AntlrEpsilonTransition(d, value):
    qdump__AntlrObject(d, value)

def qdump___AntlrEpsilonTransition(d, value):
    qdump__AntlrEpsilonTransition(d, value)

# AntlrRangeTransition --------------------------------------------------------
def qdump__AntlrRangeTransition(d, value):
    qdump__AntlrObject(d, value)

def qdump___AntlrRangeTransition(d, value):
    qdump__AntlrRangeTransition(d, value)

# AntlrRuleTransition ---------------------------------------------------------
def qdump__AntlrRuleTransition(d, value):
    qdump__AntlrObject(d, value)

def qdump___AntlrRuleTransition(d, value):
    qdump__AntlrRuleTransition(d, value)

# AntlrSetTransition ----------------------------------------------------------
def qdump__AntlrSetTransition(d, value):
    qdump__AntlrObject(d, value)

def qdump___AntlrSetTransition(d, value):
    qdump__AntlrSetTransition(d, value)

# AntlrNotSetTransition -------------------------------------------------------
def qdump__AntlrNotSetTransition(d, value):
    qdump__AntlrObject(d, value)

def qdump___AntlrNotSetTransition(d, value):
    qdump__AntlrNotSetTransition(d, value)

# AntlrWildcardTransition -----------------------------------------------------
def qdump__AntlrWildcardTransition(d, value):
    qdump__AntlrObject(d, value)

def qdump___AntlrWildcardTransition(d, value):
    qdump__AntlrWildcardTransition(d, value)




# #############################################################################
# AntlrATNState Pretty-Printer
# #############################################################################


# GList_AntlrATNState ---------------------------------------------------------
def qdump__GList_AntlrATNState(d, value):
    str = ""
    glue = ""
    glist = GListPrinter(value.address, "GList")
    num=0
    if d.isExpanded():
        with Children(d):
            for item in glist.children():
                type_name = g_type_name_from_instance(item[1])
                obj = gdb.Value(item[1]).cast(gdb.lookup_type(type_name).pointer())
                object = obj.dereference()
                d.putSubItem("%s" % item[0], object)
                num=num+1
                #str = "%s%s%s" % (str, glue, object.to_string())
                #glue = ", "
    else:
        for item in glist.children():
            num=num+1
    #d.putValue("%s" % str)
    d.putItemCount(num)
    d.putNumChild(num)

def qdump___GList_AntlrATNState(d, value):
    qdump__GList_AntlrATNState(d, value)


# AntlrATNState ---------------------------------------------------------------
def qdump__AntlrATNState(d, value):
    qdump__AntlrObject(d, value)

def qdump___AntlrATNState(d, value):
    qdump__AntlrATNState(d, value)

# AntlrBasicState -------------------------------------------------------------
def qdump__AntlrBasicState(d, value):
    qdump__AntlrObject(d, value)

def qdump___AntlrBasicState(d, value):
    qdump__AntlrBasicState(d, value)

# AntlrBlockEndState ----------------------------------------------------------
def qdump__AntlrBlockEndState(d, value):
    qdump__AntlrObject(d, value)

def qdump___AntlrBlockEndState(d, value):
    qdump__AntlrBlockEndState(d, value)

# AntlrDecisionState ----------------------------------------------------------
def qdump__AntlrDecisionState(d, value):
    qdump__AntlrObject(d, value)

def qdump___AntlrDecisionState(d, value):
    qdump__AntlrDecisionState(d, value)

# AntlrBlockStartState --------------------------------------------------------
def qdump__AntlrBlockStartState(d, value):
    qdump__AntlrObject(d, value)

def qdump___AntlrBlockStartState(d, value):
    qdump__AntlrBlockStartState(d, value)

# AntlrBasicBlockStartState ---------------------------------------------------
def qdump__AntlrBasicBlockStartState(d, value):
    qdump__AntlrObject(d, value)

def qdump___AntlrBasicBlockStartState(d, value):
    qdump__AntlrBasicBlockStartState(d, value)

# AntlrPlusBlockStartState ----------------------------------------------------
def qdump__AntlrPlusBlockStartState(d, value):
    qdump__AntlrObject(d, value)

def qdump___AntlrPlusBlockStartState(d, value):
    qdump__AntlrPlusBlockStartState(d, value)

# AntlrStarBlockStartState ----------------------------------------------------
def qdump__AntlrStarBlockStartState(d, value):
    qdump__AntlrObject(d, value)

def qdump___AntlrStarBlockStartState(d, value):
    qdump__AntlrStarBlockStartState(d, value)

# AntlrPlusLoopbackState ------------------------------------------------------
def qdump__AntlrPlusLoopbackState(d, value):
    qdump__AntlrObject(d, value)

def qdump___AntlrPlusLoopbackState(d, value):
    qdump__AntlrPlusLoopbackState(d, value)

# AntlrStarLoopEntryState -----------------------------------------------------
def qdump__AntlrStarLoopEntryState(d, value):
    qdump__AntlrObject(d, value)

def qdump___AntlrStarLoopEntryState(d, value):
    qdump__AntlrStarLoopEntryState(d, value)

# AntlrTokensStartState -------------------------------------------------------
def qdump__AntlrTokensStartState(d, value):
    qdump__AntlrObject(d, value)

def qdump___AntlrTokensStartState(d, value):
    qdump__AntlrTokensStartState(d, value)

# AntlrLoopEndState -----------------------------------------------------------
def qdump__AntlrLoopEndState(d, value):
    qdump__AntlrObject(d, value)

def qdump___AntlrLoopEndState(d, value):
    qdump__AntlrLoopEndState(d, value)

# AntlrRuleStartState ---------------------------------------------------------
def qdump__AntlrRuleStartState(d, value):
    qdump__AntlrObject(d, value)

def qdump___AntlrRuleStartState(d, value):
    qdump__AntlrRuleStartState(d, value)

# AntlrRuleStopState ----------------------------------------------------------
def qdump__AntlrRuleStopState(d, value):
    qdump__AntlrObject(d, value)

def qdump___AntlrRuleStopState(d, value):
    qdump__AntlrRuleStopState(d, value)

# AntlrStarLoopbackState ------------------------------------------------------
def qdump__AntlrStarLoopbackState(d, value):
    qdump__AntlrObject(d, value)

def qdump___AntlrStarLoopbackState(d, value):
    qdump__AntlrStarLoopbackState(d, value)


# #############################################################################
# AntlrSemanticContext Pretty-Printer
# #############################################################################

# AntlrSemanticContext --------------------------------------------------------
def qdump__AntlrSemanticContext(d, value):
    qdump__AntlrObject(d, value)

def qdump___AntlrSemanticContext(d, value):
    qdump__AntlrSemanticContext(d, value)

# AntlrOperator ---------------------------------------------------------------
def qdump__AntlrOperator(d, value):
    qdump__AntlrObject(d, value)

def qdump___AntlrOperator(d, value):
    qdump__AntlrOperator(d, value)

# AntlrAnd --------------------------------------------------------------------
def qdump__AntlrAnd(d, value):
    qdump__AntlrObject(d, value)

def qdump___AntlrAnd(d, value):
    qdump__AntlrAnd(d, value)

# AntlrOr ---------------------------------------------------------------------
def qdump__AntlrOr(d, value):
    qdump__AntlrObject(d, value)

def qdump___AntlrOr(d, value):
    qdump__AntlrOr(d, value)

# AntlrPredicate --------------------------------------------------------------
def qdump__AntlrPredicate(d, value):
    qdump__AntlrObject(d, value)

def qdump___AntlrPredicate(d, value):
    qdump__AntlrPredicate(d, value)

# AntlrPrecedencePredicate ----------------------------------------------------
def qdump__AntlrPrecedencePredicate(d, value):
    qdump__AntlrObject(d, value)

def qdump___AntlrPrecedencePredicate(d, value):
    qdump__AntlrPrecedencePredicate(d, value)


# #############################################################################
# AntlrPredictionContext Pretty-Printer
# #############################################################################


# GHashTable_Gint_AntlrPredictionContext --------------------------------------
def qdump__GHashTable_Gint_AntlrPredictionContext(d, value):
    num = 0
    table = q__GHashTable(value.address , gdb.lookup_type("gint"), gdb.lookup_type("AntlrPredictionContext").pointer())
    if True or d.isExpanded():
        with Children(d):
            for pos, key, val in table.children():
                d.putSubItem("@%s"%key, val.dereference())
                num+=1
    else:
        for child in table.children():
            num+=1
    #d.putValue("@%s" % value.address)
    d.putItemCount(num)
    d.putNumChild(num)

def qdump___GHashTable_Gint_AntlrPredictionContext(d, value):
    qdump__GHashTable_Gint_AntlrPredictionContext(d, value)

# AntlrPredictionContext ------------------------------------------------------
def qdump__AntlrPredictionContext(d, value):
    qdump__AntlrObject(d, value)

def qdump___AntlrPredictionContext(d, value):
    qdump__AntlrPredictionContext(d, value)

# AntlrSingletonPredictionContext ---------------------------------------------
def qdump__AntlrSingletonPredictionContext(d, value):
    qdump__AntlrObject(d, value)

def qdump___AntlrSingletonPredictionContext(d, value):
    qdump__AntlrSingletonPredictionContext(d, value)

# AntlrEmptyPredictionContext -------------------------------------------------
def qdump__AntlrEmptyPredictionContext(d, value):
    qdump__AntlrObject(d, value)

def qdump___AntlrEmptyPredictionContext(d, value):
    qdump__AntlrEmptyPredictionContext(d, value)

# AntlrArrayPredictionContext -------------------------------------------------
def qdump__AntlrArrayPredictionContext(d, value):
    qdump__AntlrObject(d, value)

def qdump___AntlrArrayPredictionContext(d, value):
    qdump__AntlrArrayPredictionContext(d, value)


# #############################################################################
# AntlrATNConfigSet Pretty-Printer
# #############################################################################

# AntlrATNConfigSet -----------------------------------------------------------
def qdump__AntlrATNConfigSet(d, value):
    qdump__AntlrObject(d, value)

def qdump___AntlrATNConfigSet(d, value):
    qdump__AntlrATNConfigSet(d, value)


# #############################################################################
# AntlrATNConfig Pretty-Printer
# #############################################################################

# GList_AntlrATNConfig --------------------------------------------------------
def qdump__GList_AntlrATNConfig(d, value):
    str = ""
    glue = ""
    glist = GListPrinter(value.address, "GList")
    num=0
    if d.isExpanded():
        with Children(d):
            for item in glist.children():
                type_name = g_type_name_from_instance(item[1])
                obj = gdb.Value(item[1]).cast(gdb.lookup_type(type_name).pointer())
                object = obj.dereference()
                d.putSubItem("%s" % item[0], object)
                num=num+1
                #str = "%s%s%s" % (str, glue, object.to_string())
                #glue = ", "
    else:
        for item in glist.children():
            num=num+1
    #d.putValue("%s" % str)
    d.putItemCount(num)
    d.putNumChild(num)


# GHashTable_AntlrATNConfig_AntlrATNConfig ------------------------------------
def qdump__GHashTable_AntlrATNConfig_AntlrATNConfig(d, value):
    num = 0
    table = q__GHashTable(value.address , gdb.lookup_type("AntlrATNConfig").pointer(), gdb.lookup_type("AntlrATNConfig").pointer())
    if True or d.isExpanded():
        with Children(d):
            for pos, key, val in table.children():
                #with SubItem(d, "[%d]" % num):
                #    d.putValue("value of value")
                #    with Children(d):
                #        with SubItem(d, "[%dk]" % pos):
                #            d.putItem(key.dereference())
                #        with SubItem(d, "[%dv]" % pos):
                #            d.putItem(val.dereference())
                d.putSubItem("@%s"%key, val.dereference())
                #d.putSubItem("[%d]"%num, val.dereference())
                ##d.putSubItem("k[%d]"%pos, key.dereference())
                ##d.putSubItem("v[%d]"%pos, val.dereference())
                num+=1
    else:
        for child in table.children():
            num+=1
    #d.putValue("@%s" % value.address)
    d.putItemCount(num)
    d.putNumChild(num)

def qdump___GHashTable_AntlrATNConfig_AntlrATNConfig(d, value):
    qdump__GHashTable_AntlrATNConfig_AntlrATNConfig(d, value)

# GHashTable_AntlrATNConfig_GHashTable_AntlrATNConfig_AntlrATNConfig ----------
def qdump__GHashTable_AntlrATNConfig_GHashTable_AntlrATNConfig_AntlrATNConfig(d, value):
    num = 0
    table = q__GHashTable(value.address , gdb.lookup_type("AntlrATNConfig").pointer(), gdb.lookup_type("GHashTable_AntlrATNConfig_AntlrATNConfig").pointer())
    if True or d.isExpanded():
        with Children(d):
            for pos, key, val in table.children():
                #with SubItem(d, "[%d]" % num):
                #    d.putValue("value of value")
                #    with Children(d):
                #        with SubItem(d, "[%dk]" % pos):
                #            d.putItem(key.dereference())
                #        with SubItem(d, "[%dv]" % pos):
                #            d.putItem(val.dereference())
                d.putSubItem("@%s"%key, val.dereference())
                #d.putSubItem("[%d]"%num, val.dereference())
                ##d.putSubItem("k[%d]"%pos, key.dereference())
                ##d.putSubItem("v[%d]"%pos, val.dereference())
                num+=1
    else:
        for child in table.children():
            num+=1
    #d.putValue("@%s" % value.address)
    d.putItemCount(num)
    d.putNumChild(num)

def qdump___GHashTable_AntlrDFAState_AntlrDFAState(d, value):
    qdump__GHashTable_AntlrDFAState_AntlrDFAState(d, value)

# AntlrATNConfig --------------------------------------------------------------
def qdump__AntlrATNConfig(d, value):
    qdump__AntlrObject(d, value)

def qdump___AntlrATNConfig(d, value):
    qdump__AntlrATNConfig(d, value)


# AntlrLexerATNConfig ---------------------------------------------------------
def qdump__AntlrLexerATNConfig(d, value):
    qdump__AntlrObject(d, value)

def qdump___AntlrLexerATNConfig(d, value):
    qdump__AntlrLexerATNConfig(d, value)



# #############################################################################
# AntlrTokenStream Pretty-Printer
# #############################################################################

# AntlrTokenStream ------------------------------------------------------------
def qdump__AntlrTokenStream(d, value):
    qdump__AntlrObject(d, value)

def qdump___AntlrTokenStream(d, value):
    qdump__AntlrTokenStream(d, value)

# AntlrBufferedTokenStream ----------------------------------------------------
def qdump__AntlrBufferedTokenStream(d, value):
    qdump__AntlrObject(d, value)

def qdump___AntlrBufferedTokenStream(d, value):
    qdump__AntlrBufferedTokenStream(d, value)

# AntlrCommonTokenStream ------------------------------------------------------
def qdump__AntlrCommonTokenStream(d, value):
    qdump__AntlrObject(d, value)

def qdump___AntlrCommonTokenStream(d, value):
    qdump__AntlrCommonTokenStream(d, value)


# #############################################################################
# AntlrToken Pretty-Printer
# #############################################################################

# GPtrArray_AntlrToken --------------------------------------------------------
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

# AntlrToken ------------------------------------------------------------------
def qdump__AntlrToken(d, value):
    qdump__AntlrObject(d, value)

def qdump___AntlrToken(d, value):
    qdump__AntlrToken(d, value)

# AntlrCommonToken ------------------------------------------------------------
def qdump__AntlrCommonToken(d, value):
    qdump__AntlrObject(d, value)

def qdump___AntlrCommonToken(d, value):
    qdump__AntlrCommonToken(d, value)


# #############################################################################
# AntlrDFAState Pretty-Printer
# #############################################################################

# GPtrArray_AntlrDFAState -----------------------------------------------------
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
                                        token = obj.cast(gdb.lookup_type("AntlrDFAState").pointer())
                                        val = "AntlrDFAState_toString" #AntlrToken_toString(d, token)
                                        d.putItem(obj)
                                        resume += glue + val
                                        glue = ", "
                                size += 1
                #d.putValue('{' + resume + '}')
                #d.putItemCount(size)
        else:
            size=printer.count()
        d.putNumChild(size)


def qdump___GPtrArray_AntlrDFAState(d, value):
    qdump__GPtrArray_AntlrDFAState(d, value)

# GHashTable_AntlrDFAState_AntlrDFAState --------------------------------------
def qdump__GHashTable_AntlrDFAState_AntlrDFAState(d, value):
    num = 0
    table = q__GHashTable(value.address , gdb.lookup_type("AntlrDFAState").pointer(), gdb.lookup_type("AntlrDFAState").pointer())
    if True or d.isExpanded():
        with Children(d):
            for pos, key, val in table.children():
                #with SubItem(d, "[%d]" % num):
                #    d.putValue("value of value")
                #    with Children(d):
                #        with SubItem(d, "[%dk]" % pos):
                #            d.putItem(key.dereference())
                #        with SubItem(d, "[%dv]" % pos):
                #            d.putItem(val.dereference())
                d.putSubItem("@%s"%key, val.dereference())
                #d.putSubItem("[%d]"%num, val.dereference())
                ##d.putSubItem("k[%d]"%pos, key.dereference())
                ##d.putSubItem("v[%d]"%pos, val.dereference())
                num+=1
    else:
        for child in table.children():
            num+=1
    #d.putValue("@%s" % value.address)
    d.putItemCount(num)
    d.putNumChild(num)

def qdump___GHashTable_AntlrDFAState_AntlrDFAState(d, value):
    qdump__GHashTable_AntlrDFAState_AntlrDFAState(d, value)


# AntlrDFAState ---------------------------------------------------------------
def qdump__AntlrDFAState(d, value):
    qdump__AntlrObject(d, value)

def qdump___AntlrDFAState(d, value):
    qdump__AntlrDFAState(d, value)


# AntlrRuleContext ------------------------------------------------------
def qdump__AntlrRuleContext(d, value):
    qdump__AntlrObject(d, value)

def qdump___AntlrRuleContext(d, value):
    qdump__AntlrRuleContext(d, value)

# AntlrParserRuleContext ------------------------------------------------------
def qdump__AntlrParserRuleContext(d, value):
    qdump__AntlrObject(d, value)

def qdump___AntlrParserRuleContext(d, value):
    qdump__AntlrParserRuleContext(d, value)


# AntlrIntStream ------------------------------------------------------
def qdump__AntlrIntStream(d, value):
    qdump__AntlrObject(d, value)

def qdump___AntlrIntStream(d, value):
    qdump__AntlrIntStream(d, value)

