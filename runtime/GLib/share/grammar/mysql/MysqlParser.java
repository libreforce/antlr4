// Generated from MysqlParser.g4 by ANTLR 4.6
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class MysqlParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.6", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		SELECT=1, FROM=2, WHERE=3, AS=4, AND=5, OR=6, XOR=7, IS=8, NULL=9, LIKE=10, 
		IN=11, EXISTS=12, ALL=13, ANY=14, TRUE=15, FALSE=16, DIVIDE=17, MOD=18, 
		BETWEEN=19, REGEXP=20, PLUS=21, MINUS=22, NEGATION=23, VERTBAR=24, BITAND=25, 
		POWER_OP=26, BINARY=27, SHIFT_LEFT=28, SHIFT_RIGHT=29, ESCAPE=30, ASTERISK=31, 
		RPAREN=32, LPAREN=33, RBRACK=34, LBRACK=35, COLON=36, ALL_FIELDS=37, EQ=38, 
		LTH=39, GTH=40, NOT_EQ=41, NOT=42, LET=43, GET=44, SEMI=45, COMMA=46, 
		DOT=47, COLLATE=48, INNER=49, OUTER=50, JOIN=51, CROSS=52, USING=53, INDEX=54, 
		KEY=55, ORDER=56, GROUP=57, BY=58, FOR=59, USE=60, IGNORE=61, PARTITION=62, 
		STRAIGHT_JOIN=63, NATURAL=64, LEFT=65, RIGHT=66, OJ=67, ON=68, ID=69, 
		INT=70, NEWLINE=71, WS=72, USER_VAR=73;
	public static final int
		RULE_stat = 0, RULE_schema_name = 1, RULE_select_clause = 2, RULE_table_name = 3, 
		RULE_table_alias = 4, RULE_column_name = 5, RULE_column_name_alias = 6, 
		RULE_index_name = 7, RULE_column_list = 8, RULE_column_list_clause = 9, 
		RULE_from_clause = 10, RULE_select_key = 11, RULE_where_clause = 12, RULE_expression = 13, 
		RULE_element = 14, RULE_right_element = 15, RULE_left_element = 16, RULE_target_element = 17, 
		RULE_relational_op = 18, RULE_expr_op = 19, RULE_between_op = 20, RULE_is_or_is_not = 21, 
		RULE_simple_expression = 22, RULE_table_references = 23, RULE_table_reference = 24, 
		RULE_table_factor1 = 25, RULE_table_factor2 = 26, RULE_table_factor3 = 27, 
		RULE_table_factor4 = 28, RULE_table_atom = 29, RULE_join_clause = 30, 
		RULE_join_condition = 31, RULE_index_hint_list = 32, RULE_index_options = 33, 
		RULE_index_hint = 34, RULE_index_list = 35, RULE_partition_clause = 36, 
		RULE_partition_names = 37, RULE_partition_name = 38, RULE_subquery_alias = 39, 
		RULE_subquery = 40;
	public static final String[] ruleNames = {
		"stat", "schema_name", "select_clause", "table_name", "table_alias", "column_name", 
		"column_name_alias", "index_name", "column_list", "column_list_clause", 
		"from_clause", "select_key", "where_clause", "expression", "element", 
		"right_element", "left_element", "target_element", "relational_op", "expr_op", 
		"between_op", "is_or_is_not", "simple_expression", "table_references", 
		"table_reference", "table_factor1", "table_factor2", "table_factor3", 
		"table_factor4", "table_atom", "join_clause", "join_condition", "index_hint_list", 
		"index_options", "index_hint", "index_list", "partition_clause", "partition_names", 
		"partition_name", "subquery_alias", "subquery"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "'select'", "'from'", "'where'", "'as'", null, null, "'xor'", "'is'", 
		"'null'", "'like'", "'in'", "'exists'", "'all'", "'any'", "'true'", "'false'", 
		null, null, "'between'", "'regexp'", "'+'", "'-'", "'~'", "'|'", "'&'", 
		"'^'", "'binary'", "'<<'", "'>>'", "'escape'", "'*'", "')'", "'('", "']'", 
		"'['", "':'", "'.*'", "'='", "'<'", "'>'", "'!='", "'not'", "'<='", "'>='", 
		"';'", "','", "'.'", "'collate'", "'inner'", "'outer'", "'join'", "'cross'", 
		"'using'", "'index'", "'key'", "'order'", "'group'", "'by'", "'for'", 
		"'use'", "'ignore'", "'partition'", "'straight_join'", "'natural'", "'left'", 
		"'right'", "'oj'", "'on'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, "SELECT", "FROM", "WHERE", "AS", "AND", "OR", "XOR", "IS", "NULL", 
		"LIKE", "IN", "EXISTS", "ALL", "ANY", "TRUE", "FALSE", "DIVIDE", "MOD", 
		"BETWEEN", "REGEXP", "PLUS", "MINUS", "NEGATION", "VERTBAR", "BITAND", 
		"POWER_OP", "BINARY", "SHIFT_LEFT", "SHIFT_RIGHT", "ESCAPE", "ASTERISK", 
		"RPAREN", "LPAREN", "RBRACK", "LBRACK", "COLON", "ALL_FIELDS", "EQ", "LTH", 
		"GTH", "NOT_EQ", "NOT", "LET", "GET", "SEMI", "COMMA", "DOT", "COLLATE", 
		"INNER", "OUTER", "JOIN", "CROSS", "USING", "INDEX", "KEY", "ORDER", "GROUP", 
		"BY", "FOR", "USE", "IGNORE", "PARTITION", "STRAIGHT_JOIN", "NATURAL", 
		"LEFT", "RIGHT", "OJ", "ON", "ID", "INT", "NEWLINE", "WS", "USER_VAR"
	};
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "MysqlParser.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public MysqlParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}
	public static class StatContext extends ParserRuleContext {
		public List<Select_clauseContext> select_clause() {
			return getRuleContexts(Select_clauseContext.class);
		}
		public Select_clauseContext select_clause(int i) {
			return getRuleContext(Select_clauseContext.class,i);
		}
		public StatContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_stat; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).enterStat(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).exitStat(this);
		}
	}

	public final StatContext stat() throws RecognitionException {
		StatContext _localctx = new StatContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_stat);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(83); 
			_errHandler.sync(this);
			_la = _input.LA(1);
			do {
				{
				{
				setState(82);
				select_clause();
				}
				}
				setState(85); 
				_errHandler.sync(this);
				_la = _input.LA(1);
			} while ( _la==SELECT );
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Schema_nameContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(MysqlParser.ID, 0); }
		public Schema_nameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_schema_name; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).enterSchema_name(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).exitSchema_name(this);
		}
	}

	public final Schema_nameContext schema_name() throws RecognitionException {
		Schema_nameContext _localctx = new Schema_nameContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_schema_name);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(87);
			match(ID);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Select_clauseContext extends ParserRuleContext {
		public TerminalNode SELECT() { return getToken(MysqlParser.SELECT, 0); }
		public Column_list_clauseContext column_list_clause() {
			return getRuleContext(Column_list_clauseContext.class,0);
		}
		public TerminalNode FROM() { return getToken(MysqlParser.FROM, 0); }
		public Table_referencesContext table_references() {
			return getRuleContext(Table_referencesContext.class,0);
		}
		public Where_clauseContext where_clause() {
			return getRuleContext(Where_clauseContext.class,0);
		}
		public Select_clauseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_select_clause; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).enterSelect_clause(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).exitSelect_clause(this);
		}
	}

	public final Select_clauseContext select_clause() throws RecognitionException {
		Select_clauseContext _localctx = new Select_clauseContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_select_clause);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(89);
			match(SELECT);
			setState(90);
			column_list_clause();
			setState(93);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==FROM) {
				{
				setState(91);
				match(FROM);
				setState(92);
				table_references();
				}
			}

			setState(96);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==WHERE) {
				{
				setState(95);
				where_clause();
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Table_nameContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(MysqlParser.ID, 0); }
		public Table_nameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_table_name; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).enterTable_name(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).exitTable_name(this);
		}
	}

	public final Table_nameContext table_name() throws RecognitionException {
		Table_nameContext _localctx = new Table_nameContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_table_name);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(98);
			match(ID);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Table_aliasContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(MysqlParser.ID, 0); }
		public Table_aliasContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_table_alias; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).enterTable_alias(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).exitTable_alias(this);
		}
	}

	public final Table_aliasContext table_alias() throws RecognitionException {
		Table_aliasContext _localctx = new Table_aliasContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_table_alias);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(100);
			match(ID);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Column_nameContext extends ParserRuleContext {
		public List<TerminalNode> ID() { return getTokens(MysqlParser.ID); }
		public TerminalNode ID(int i) {
			return getToken(MysqlParser.ID, i);
		}
		public List<TerminalNode> DOT() { return getTokens(MysqlParser.DOT); }
		public TerminalNode DOT(int i) {
			return getToken(MysqlParser.DOT, i);
		}
		public TerminalNode AS() { return getToken(MysqlParser.AS, 0); }
		public Column_name_aliasContext column_name_alias() {
			return getRuleContext(Column_name_aliasContext.class,0);
		}
		public Schema_nameContext schema_name() {
			return getRuleContext(Schema_nameContext.class,0);
		}
		public Table_aliasContext table_alias() {
			return getRuleContext(Table_aliasContext.class,0);
		}
		public TerminalNode USER_VAR() { return getToken(MysqlParser.USER_VAR, 0); }
		public Column_nameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_column_name; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).enterColumn_name(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).exitColumn_name(this);
		}
	}

	public final Column_nameContext column_name() throws RecognitionException {
		Column_nameContext _localctx = new Column_nameContext(_ctx, getState());
		enterRule(_localctx, 10, RULE_column_name);
		int _la;
		try {
			setState(126);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,8,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(109);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,4,_ctx) ) {
				case 1:
					{
					setState(105);
					_errHandler.sync(this);
					switch ( getInterpreter().adaptivePredict(_input,3,_ctx) ) {
					case 1:
						{
						setState(102);
						schema_name();
						setState(103);
						match(DOT);
						}
						break;
					}
					setState(107);
					match(ID);
					setState(108);
					match(DOT);
					}
					break;
				}
				setState(111);
				match(ID);
				setState(114);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AS) {
					{
					setState(112);
					match(AS);
					setState(113);
					column_name_alias();
					}
				}

				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(119);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,6,_ctx) ) {
				case 1:
					{
					setState(116);
					table_alias();
					setState(117);
					match(DOT);
					}
					break;
				}
				setState(121);
				match(ID);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(122);
				match(USER_VAR);
				setState(124);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==ID) {
					{
					setState(123);
					column_name_alias();
					}
				}

				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Column_name_aliasContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(MysqlParser.ID, 0); }
		public Column_name_aliasContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_column_name_alias; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).enterColumn_name_alias(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).exitColumn_name_alias(this);
		}
	}

	public final Column_name_aliasContext column_name_alias() throws RecognitionException {
		Column_name_aliasContext _localctx = new Column_name_aliasContext(_ctx, getState());
		enterRule(_localctx, 12, RULE_column_name_alias);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(128);
			match(ID);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Index_nameContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(MysqlParser.ID, 0); }
		public Index_nameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_index_name; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).enterIndex_name(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).exitIndex_name(this);
		}
	}

	public final Index_nameContext index_name() throws RecognitionException {
		Index_nameContext _localctx = new Index_nameContext(_ctx, getState());
		enterRule(_localctx, 14, RULE_index_name);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(130);
			match(ID);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Column_listContext extends ParserRuleContext {
		public TerminalNode LPAREN() { return getToken(MysqlParser.LPAREN, 0); }
		public List<Column_nameContext> column_name() {
			return getRuleContexts(Column_nameContext.class);
		}
		public Column_nameContext column_name(int i) {
			return getRuleContext(Column_nameContext.class,i);
		}
		public TerminalNode RPAREN() { return getToken(MysqlParser.RPAREN, 0); }
		public List<TerminalNode> COMMA() { return getTokens(MysqlParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(MysqlParser.COMMA, i);
		}
		public Column_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_column_list; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).enterColumn_list(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).exitColumn_list(this);
		}
	}

	public final Column_listContext column_list() throws RecognitionException {
		Column_listContext _localctx = new Column_listContext(_ctx, getState());
		enterRule(_localctx, 16, RULE_column_list);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(132);
			match(LPAREN);
			setState(133);
			column_name();
			setState(138);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(134);
				match(COMMA);
				setState(135);
				column_name();
				}
				}
				setState(140);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(141);
			match(RPAREN);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Column_list_clauseContext extends ParserRuleContext {
		public List<Column_nameContext> column_name() {
			return getRuleContexts(Column_nameContext.class);
		}
		public Column_nameContext column_name(int i) {
			return getRuleContext(Column_nameContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(MysqlParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(MysqlParser.COMMA, i);
		}
		public Column_list_clauseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_column_list_clause; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).enterColumn_list_clause(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).exitColumn_list_clause(this);
		}
	}

	public final Column_list_clauseContext column_list_clause() throws RecognitionException {
		Column_list_clauseContext _localctx = new Column_list_clauseContext(_ctx, getState());
		enterRule(_localctx, 18, RULE_column_list_clause);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(143);
			column_name();
			setState(148);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(144);
				match(COMMA);
				setState(145);
				column_name();
				}
				}
				setState(150);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class From_clauseContext extends ParserRuleContext {
		public TerminalNode FROM() { return getToken(MysqlParser.FROM, 0); }
		public List<Table_nameContext> table_name() {
			return getRuleContexts(Table_nameContext.class);
		}
		public Table_nameContext table_name(int i) {
			return getRuleContext(Table_nameContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(MysqlParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(MysqlParser.COMMA, i);
		}
		public From_clauseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_from_clause; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).enterFrom_clause(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).exitFrom_clause(this);
		}
	}

	public final From_clauseContext from_clause() throws RecognitionException {
		From_clauseContext _localctx = new From_clauseContext(_ctx, getState());
		enterRule(_localctx, 20, RULE_from_clause);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(151);
			match(FROM);
			setState(152);
			table_name();
			setState(157);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(153);
				match(COMMA);
				setState(154);
				table_name();
				}
				}
				setState(159);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Select_keyContext extends ParserRuleContext {
		public TerminalNode SELECT() { return getToken(MysqlParser.SELECT, 0); }
		public Select_keyContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_select_key; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).enterSelect_key(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).exitSelect_key(this);
		}
	}

	public final Select_keyContext select_key() throws RecognitionException {
		Select_keyContext _localctx = new Select_keyContext(_ctx, getState());
		enterRule(_localctx, 22, RULE_select_key);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(160);
			match(SELECT);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Where_clauseContext extends ParserRuleContext {
		public TerminalNode WHERE() { return getToken(MysqlParser.WHERE, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public Where_clauseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_where_clause; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).enterWhere_clause(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).exitWhere_clause(this);
		}
	}

	public final Where_clauseContext where_clause() throws RecognitionException {
		Where_clauseContext _localctx = new Where_clauseContext(_ctx, getState());
		enterRule(_localctx, 24, RULE_where_clause);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(162);
			match(WHERE);
			setState(163);
			expression();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExpressionContext extends ParserRuleContext {
		public List<Simple_expressionContext> simple_expression() {
			return getRuleContexts(Simple_expressionContext.class);
		}
		public Simple_expressionContext simple_expression(int i) {
			return getRuleContext(Simple_expressionContext.class,i);
		}
		public List<Expr_opContext> expr_op() {
			return getRuleContexts(Expr_opContext.class);
		}
		public Expr_opContext expr_op(int i) {
			return getRuleContext(Expr_opContext.class,i);
		}
		public ExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expression; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).enterExpression(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).exitExpression(this);
		}
	}

	public final ExpressionContext expression() throws RecognitionException {
		ExpressionContext _localctx = new ExpressionContext(_ctx, getState());
		enterRule(_localctx, 26, RULE_expression);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(165);
			simple_expression();
			setState(171);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,12,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(166);
					expr_op();
					setState(167);
					simple_expression();
					}
					} 
				}
				setState(173);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,12,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ElementContext extends ParserRuleContext {
		public TerminalNode USER_VAR() { return getToken(MysqlParser.USER_VAR, 0); }
		public TerminalNode ID() { return getToken(MysqlParser.ID, 0); }
		public TerminalNode INT() { return getToken(MysqlParser.INT, 0); }
		public Column_nameContext column_name() {
			return getRuleContext(Column_nameContext.class,0);
		}
		public ElementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_element; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).enterElement(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).exitElement(this);
		}
	}

	public final ElementContext element() throws RecognitionException {
		ElementContext _localctx = new ElementContext(_ctx, getState());
		enterRule(_localctx, 28, RULE_element);
		try {
			setState(181);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,13,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(174);
				match(USER_VAR);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(175);
				match(ID);
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				{
				setState(176);
				match(VERTBAR);
				setState(177);
				match(ID);
				setState(178);
				match(VERTBAR);
				}
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				setState(179);
				match(INT);
				}
				break;
			case 5:
				enterOuterAlt(_localctx, 5);
				{
				setState(180);
				column_name();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Right_elementContext extends ParserRuleContext {
		public ElementContext element() {
			return getRuleContext(ElementContext.class,0);
		}
		public Right_elementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_right_element; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).enterRight_element(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).exitRight_element(this);
		}
	}

	public final Right_elementContext right_element() throws RecognitionException {
		Right_elementContext _localctx = new Right_elementContext(_ctx, getState());
		enterRule(_localctx, 30, RULE_right_element);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(183);
			element();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Left_elementContext extends ParserRuleContext {
		public ElementContext element() {
			return getRuleContext(ElementContext.class,0);
		}
		public Left_elementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_left_element; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).enterLeft_element(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).exitLeft_element(this);
		}
	}

	public final Left_elementContext left_element() throws RecognitionException {
		Left_elementContext _localctx = new Left_elementContext(_ctx, getState());
		enterRule(_localctx, 32, RULE_left_element);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(185);
			element();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Target_elementContext extends ParserRuleContext {
		public ElementContext element() {
			return getRuleContext(ElementContext.class,0);
		}
		public Target_elementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_target_element; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).enterTarget_element(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).exitTarget_element(this);
		}
	}

	public final Target_elementContext target_element() throws RecognitionException {
		Target_elementContext _localctx = new Target_elementContext(_ctx, getState());
		enterRule(_localctx, 34, RULE_target_element);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(187);
			element();
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Relational_opContext extends ParserRuleContext {
		public TerminalNode EQ() { return getToken(MysqlParser.EQ, 0); }
		public TerminalNode LTH() { return getToken(MysqlParser.LTH, 0); }
		public TerminalNode GTH() { return getToken(MysqlParser.GTH, 0); }
		public TerminalNode NOT_EQ() { return getToken(MysqlParser.NOT_EQ, 0); }
		public TerminalNode LET() { return getToken(MysqlParser.LET, 0); }
		public TerminalNode GET() { return getToken(MysqlParser.GET, 0); }
		public Relational_opContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_relational_op; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).enterRelational_op(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).exitRelational_op(this);
		}
	}

	public final Relational_opContext relational_op() throws RecognitionException {
		Relational_opContext _localctx = new Relational_opContext(_ctx, getState());
		enterRule(_localctx, 36, RULE_relational_op);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(189);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << EQ) | (1L << LTH) | (1L << GTH) | (1L << NOT_EQ) | (1L << LET) | (1L << GET))) != 0)) ) {
			_errHandler.recoverInline(this);
			} else {
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Expr_opContext extends ParserRuleContext {
		public TerminalNode AND() { return getToken(MysqlParser.AND, 0); }
		public TerminalNode XOR() { return getToken(MysqlParser.XOR, 0); }
		public TerminalNode OR() { return getToken(MysqlParser.OR, 0); }
		public TerminalNode NOT() { return getToken(MysqlParser.NOT, 0); }
		public Expr_opContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expr_op; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).enterExpr_op(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).exitExpr_op(this);
		}
	}

	public final Expr_opContext expr_op() throws RecognitionException {
		Expr_opContext _localctx = new Expr_opContext(_ctx, getState());
		enterRule(_localctx, 38, RULE_expr_op);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(191);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AND) | (1L << OR) | (1L << XOR) | (1L << NOT))) != 0)) ) {
			_errHandler.recoverInline(this);
			} else {
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Between_opContext extends ParserRuleContext {
		public TerminalNode BETWEEN() { return getToken(MysqlParser.BETWEEN, 0); }
		public Between_opContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_between_op; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).enterBetween_op(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).exitBetween_op(this);
		}
	}

	public final Between_opContext between_op() throws RecognitionException {
		Between_opContext _localctx = new Between_opContext(_ctx, getState());
		enterRule(_localctx, 40, RULE_between_op);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(193);
			match(BETWEEN);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Is_or_is_notContext extends ParserRuleContext {
		public TerminalNode IS() { return getToken(MysqlParser.IS, 0); }
		public TerminalNode NOT() { return getToken(MysqlParser.NOT, 0); }
		public Is_or_is_notContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_is_or_is_not; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).enterIs_or_is_not(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).exitIs_or_is_not(this);
		}
	}

	public final Is_or_is_notContext is_or_is_not() throws RecognitionException {
		Is_or_is_notContext _localctx = new Is_or_is_notContext(_ctx, getState());
		enterRule(_localctx, 42, RULE_is_or_is_not);
		try {
			setState(198);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,14,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(195);
				match(IS);
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(196);
				match(IS);
				setState(197);
				match(NOT);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Simple_expressionContext extends ParserRuleContext {
		public Left_elementContext left_element() {
			return getRuleContext(Left_elementContext.class,0);
		}
		public Relational_opContext relational_op() {
			return getRuleContext(Relational_opContext.class,0);
		}
		public Right_elementContext right_element() {
			return getRuleContext(Right_elementContext.class,0);
		}
		public Target_elementContext target_element() {
			return getRuleContext(Target_elementContext.class,0);
		}
		public Between_opContext between_op() {
			return getRuleContext(Between_opContext.class,0);
		}
		public TerminalNode AND() { return getToken(MysqlParser.AND, 0); }
		public Is_or_is_notContext is_or_is_not() {
			return getRuleContext(Is_or_is_notContext.class,0);
		}
		public TerminalNode NULL() { return getToken(MysqlParser.NULL, 0); }
		public Simple_expressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_simple_expression; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).enterSimple_expression(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).exitSimple_expression(this);
		}
	}

	public final Simple_expressionContext simple_expression() throws RecognitionException {
		Simple_expressionContext _localctx = new Simple_expressionContext(_ctx, getState());
		enterRule(_localctx, 44, RULE_simple_expression);
		try {
			setState(214);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,15,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(200);
				left_element();
				setState(201);
				relational_op();
				setState(202);
				right_element();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(204);
				target_element();
				setState(205);
				between_op();
				setState(206);
				left_element();
				setState(207);
				match(AND);
				setState(208);
				right_element();
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				setState(210);
				target_element();
				setState(211);
				is_or_is_not();
				setState(212);
				match(NULL);
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Table_referencesContext extends ParserRuleContext {
		public List<Table_referenceContext> table_reference() {
			return getRuleContexts(Table_referenceContext.class);
		}
		public Table_referenceContext table_reference(int i) {
			return getRuleContext(Table_referenceContext.class,i);
		}
		public List<Join_clauseContext> join_clause() {
			return getRuleContexts(Join_clauseContext.class);
		}
		public Join_clauseContext join_clause(int i) {
			return getRuleContext(Join_clauseContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(MysqlParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(MysqlParser.COMMA, i);
		}
		public Table_referencesContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_table_references; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).enterTable_references(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).exitTable_references(this);
		}
	}

	public final Table_referencesContext table_references() throws RecognitionException {
		Table_referencesContext _localctx = new Table_referencesContext(_ctx, getState());
		enterRule(_localctx, 46, RULE_table_references);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(216);
			table_reference();
			setState(222);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (((((_la - 46)) & ~0x3f) == 0 && ((1L << (_la - 46)) & ((1L << (COMMA - 46)) | (1L << (INNER - 46)) | (1L << (JOIN - 46)) | (1L << (CROSS - 46)) | (1L << (STRAIGHT_JOIN - 46)) | (1L << (NATURAL - 46)) | (1L << (LEFT - 46)) | (1L << (RIGHT - 46)))) != 0)) {
				{
				setState(220);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case COMMA:
					{
					{
					setState(217);
					match(COMMA);
					setState(218);
					table_reference();
					}
					}
					break;
				case INNER:
				case JOIN:
				case CROSS:
				case STRAIGHT_JOIN:
				case NATURAL:
				case LEFT:
				case RIGHT:
					{
					setState(219);
					join_clause();
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
				setState(224);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Table_referenceContext extends ParserRuleContext {
		public Table_factor1Context table_factor1() {
			return getRuleContext(Table_factor1Context.class,0);
		}
		public Table_atomContext table_atom() {
			return getRuleContext(Table_atomContext.class,0);
		}
		public Table_referenceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_table_reference; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).enterTable_reference(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).exitTable_reference(this);
		}
	}

	public final Table_referenceContext table_reference() throws RecognitionException {
		Table_referenceContext _localctx = new Table_referenceContext(_ctx, getState());
		enterRule(_localctx, 48, RULE_table_reference);
		try {
			setState(227);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,18,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				setState(225);
				table_factor1();
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				setState(226);
				table_atom();
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Table_factor1Context extends ParserRuleContext {
		public Table_factor2Context table_factor2() {
			return getRuleContext(Table_factor2Context.class,0);
		}
		public TerminalNode JOIN() { return getToken(MysqlParser.JOIN, 0); }
		public Table_atomContext table_atom() {
			return getRuleContext(Table_atomContext.class,0);
		}
		public Join_conditionContext join_condition() {
			return getRuleContext(Join_conditionContext.class,0);
		}
		public TerminalNode INNER() { return getToken(MysqlParser.INNER, 0); }
		public TerminalNode CROSS() { return getToken(MysqlParser.CROSS, 0); }
		public Table_factor1Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_table_factor1; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).enterTable_factor1(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).exitTable_factor1(this);
		}
	}

	public final Table_factor1Context table_factor1() throws RecognitionException {
		Table_factor1Context _localctx = new Table_factor1Context(_ctx, getState());
		enterRule(_localctx, 50, RULE_table_factor1);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(229);
			table_factor2();
			setState(238);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,21,_ctx) ) {
			case 1:
				{
				setState(231);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==INNER || _la==CROSS) {
					{
					setState(230);
					_la = _input.LA(1);
					if ( !(_la==INNER || _la==CROSS) ) {
					_errHandler.recoverInline(this);
					} else {
						consume();
					}
					}
				}

				setState(233);
				match(JOIN);
				setState(234);
				table_atom();
				setState(236);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,20,_ctx) ) {
				case 1:
					{
					setState(235);
					join_condition();
					}
					break;
				}
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Table_factor2Context extends ParserRuleContext {
		public Table_factor3Context table_factor3() {
			return getRuleContext(Table_factor3Context.class,0);
		}
		public TerminalNode STRAIGHT_JOIN() { return getToken(MysqlParser.STRAIGHT_JOIN, 0); }
		public Table_atomContext table_atom() {
			return getRuleContext(Table_atomContext.class,0);
		}
		public TerminalNode ON() { return getToken(MysqlParser.ON, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public Table_factor2Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_table_factor2; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).enterTable_factor2(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).exitTable_factor2(this);
		}
	}

	public final Table_factor2Context table_factor2() throws RecognitionException {
		Table_factor2Context _localctx = new Table_factor2Context(_ctx, getState());
		enterRule(_localctx, 52, RULE_table_factor2);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(240);
			table_factor3();
			setState(247);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,23,_ctx) ) {
			case 1:
				{
				setState(241);
				match(STRAIGHT_JOIN);
				setState(242);
				table_atom();
				setState(245);
				_errHandler.sync(this);
				switch ( getInterpreter().adaptivePredict(_input,22,_ctx) ) {
				case 1:
					{
					setState(243);
					match(ON);
					setState(244);
					expression();
					}
					break;
				}
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Table_factor3Context extends ParserRuleContext {
		public List<Table_factor4Context> table_factor4() {
			return getRuleContexts(Table_factor4Context.class);
		}
		public Table_factor4Context table_factor4(int i) {
			return getRuleContext(Table_factor4Context.class,i);
		}
		public TerminalNode JOIN() { return getToken(MysqlParser.JOIN, 0); }
		public Join_conditionContext join_condition() {
			return getRuleContext(Join_conditionContext.class,0);
		}
		public TerminalNode LEFT() { return getToken(MysqlParser.LEFT, 0); }
		public TerminalNode RIGHT() { return getToken(MysqlParser.RIGHT, 0); }
		public TerminalNode OUTER() { return getToken(MysqlParser.OUTER, 0); }
		public Table_factor3Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_table_factor3; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).enterTable_factor3(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).exitTable_factor3(this);
		}
	}

	public final Table_factor3Context table_factor3() throws RecognitionException {
		Table_factor3Context _localctx = new Table_factor3Context(_ctx, getState());
		enterRule(_localctx, 54, RULE_table_factor3);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(249);
			table_factor4();
			setState(258);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,25,_ctx) ) {
			case 1:
				{
				setState(250);
				_la = _input.LA(1);
				if ( !(_la==LEFT || _la==RIGHT) ) {
				_errHandler.recoverInline(this);
				} else {
					consume();
				}
				setState(252);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==OUTER) {
					{
					setState(251);
					match(OUTER);
					}
				}

				setState(254);
				match(JOIN);
				setState(255);
				table_factor4();
				setState(256);
				join_condition();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Table_factor4Context extends ParserRuleContext {
		public List<Table_atomContext> table_atom() {
			return getRuleContexts(Table_atomContext.class);
		}
		public Table_atomContext table_atom(int i) {
			return getRuleContext(Table_atomContext.class,i);
		}
		public TerminalNode NATURAL() { return getToken(MysqlParser.NATURAL, 0); }
		public TerminalNode JOIN() { return getToken(MysqlParser.JOIN, 0); }
		public TerminalNode LEFT() { return getToken(MysqlParser.LEFT, 0); }
		public TerminalNode RIGHT() { return getToken(MysqlParser.RIGHT, 0); }
		public TerminalNode OUTER() { return getToken(MysqlParser.OUTER, 0); }
		public Table_factor4Context(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_table_factor4; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).enterTable_factor4(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).exitTable_factor4(this);
		}
	}

	public final Table_factor4Context table_factor4() throws RecognitionException {
		Table_factor4Context _localctx = new Table_factor4Context(_ctx, getState());
		enterRule(_localctx, 56, RULE_table_factor4);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(260);
			table_atom();
			setState(270);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,28,_ctx) ) {
			case 1:
				{
				setState(261);
				match(NATURAL);
				setState(266);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==LEFT || _la==RIGHT) {
					{
					setState(262);
					_la = _input.LA(1);
					if ( !(_la==LEFT || _la==RIGHT) ) {
					_errHandler.recoverInline(this);
					} else {
						consume();
					}
					setState(264);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (_la==OUTER) {
						{
						setState(263);
						match(OUTER);
						}
					}

					}
				}

				setState(268);
				match(JOIN);
				setState(269);
				table_atom();
				}
				break;
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Table_atomContext extends ParserRuleContext {
		public Table_nameContext table_name() {
			return getRuleContext(Table_nameContext.class,0);
		}
		public Partition_clauseContext partition_clause() {
			return getRuleContext(Partition_clauseContext.class,0);
		}
		public TerminalNode AS() { return getToken(MysqlParser.AS, 0); }
		public Table_aliasContext table_alias() {
			return getRuleContext(Table_aliasContext.class,0);
		}
		public Index_hint_listContext index_hint_list() {
			return getRuleContext(Index_hint_listContext.class,0);
		}
		public SubqueryContext subquery() {
			return getRuleContext(SubqueryContext.class,0);
		}
		public Subquery_aliasContext subquery_alias() {
			return getRuleContext(Subquery_aliasContext.class,0);
		}
		public TerminalNode LPAREN() { return getToken(MysqlParser.LPAREN, 0); }
		public Table_referencesContext table_references() {
			return getRuleContext(Table_referencesContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(MysqlParser.RPAREN, 0); }
		public TerminalNode OJ() { return getToken(MysqlParser.OJ, 0); }
		public List<Table_referenceContext> table_reference() {
			return getRuleContexts(Table_referenceContext.class);
		}
		public Table_referenceContext table_reference(int i) {
			return getRuleContext(Table_referenceContext.class,i);
		}
		public TerminalNode LEFT() { return getToken(MysqlParser.LEFT, 0); }
		public TerminalNode OUTER() { return getToken(MysqlParser.OUTER, 0); }
		public TerminalNode JOIN() { return getToken(MysqlParser.JOIN, 0); }
		public TerminalNode ON() { return getToken(MysqlParser.ON, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public Table_atomContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_table_atom; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).enterTable_atom(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).exitTable_atom(this);
		}
	}

	public final Table_atomContext table_atom() throws RecognitionException {
		Table_atomContext _localctx = new Table_atomContext(_ctx, getState());
		enterRule(_localctx, 58, RULE_table_atom);
		int _la;
		try {
			setState(299);
			_errHandler.sync(this);
			switch ( getInterpreter().adaptivePredict(_input,32,_ctx) ) {
			case 1:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(272);
				table_name();
				setState(274);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==PARTITION) {
					{
					setState(273);
					partition_clause();
					}
				}

				setState(278);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==AS) {
					{
					setState(276);
					match(AS);
					setState(277);
					table_alias();
					}
				}

				setState(281);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==USE || _la==IGNORE) {
					{
					setState(280);
					index_hint_list();
					}
				}

				}
				}
				break;
			case 2:
				enterOuterAlt(_localctx, 2);
				{
				{
				setState(283);
				subquery();
				setState(284);
				subquery_alias();
				}
				}
				break;
			case 3:
				enterOuterAlt(_localctx, 3);
				{
				{
				setState(286);
				match(LPAREN);
				setState(287);
				table_references();
				setState(288);
				match(RPAREN);
				}
				}
				break;
			case 4:
				enterOuterAlt(_localctx, 4);
				{
				{
				setState(290);
				match(OJ);
				setState(291);
				table_reference();
				setState(292);
				match(LEFT);
				setState(293);
				match(OUTER);
				setState(294);
				match(JOIN);
				setState(295);
				table_reference();
				setState(296);
				match(ON);
				setState(297);
				expression();
				}
				}
				break;
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Join_clauseContext extends ParserRuleContext {
		public TerminalNode JOIN() { return getToken(MysqlParser.JOIN, 0); }
		public Table_atomContext table_atom() {
			return getRuleContext(Table_atomContext.class,0);
		}
		public Join_conditionContext join_condition() {
			return getRuleContext(Join_conditionContext.class,0);
		}
		public TerminalNode INNER() { return getToken(MysqlParser.INNER, 0); }
		public TerminalNode CROSS() { return getToken(MysqlParser.CROSS, 0); }
		public TerminalNode STRAIGHT_JOIN() { return getToken(MysqlParser.STRAIGHT_JOIN, 0); }
		public TerminalNode ON() { return getToken(MysqlParser.ON, 0); }
		public ExpressionContext expression() {
			return getRuleContext(ExpressionContext.class,0);
		}
		public Table_factor4Context table_factor4() {
			return getRuleContext(Table_factor4Context.class,0);
		}
		public TerminalNode LEFT() { return getToken(MysqlParser.LEFT, 0); }
		public TerminalNode RIGHT() { return getToken(MysqlParser.RIGHT, 0); }
		public TerminalNode OUTER() { return getToken(MysqlParser.OUTER, 0); }
		public TerminalNode NATURAL() { return getToken(MysqlParser.NATURAL, 0); }
		public Join_clauseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_join_clause; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).enterJoin_clause(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).exitJoin_clause(this);
		}
	}

	public final Join_clauseContext join_clause() throws RecognitionException {
		Join_clauseContext _localctx = new Join_clauseContext(_ctx, getState());
		enterRule(_localctx, 60, RULE_join_clause);
		int _la;
		try {
			setState(332);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case INNER:
			case JOIN:
			case CROSS:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(302);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==INNER || _la==CROSS) {
					{
					setState(301);
					_la = _input.LA(1);
					if ( !(_la==INNER || _la==CROSS) ) {
					_errHandler.recoverInline(this);
					} else {
						consume();
					}
					}
				}

				setState(304);
				match(JOIN);
				setState(305);
				table_atom();
				setState(307);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==USING || _la==ON) {
					{
					setState(306);
					join_condition();
					}
				}

				}
				}
				break;
			case STRAIGHT_JOIN:
				enterOuterAlt(_localctx, 2);
				{
				{
				setState(309);
				match(STRAIGHT_JOIN);
				setState(310);
				table_atom();
				setState(313);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==ON) {
					{
					setState(311);
					match(ON);
					setState(312);
					expression();
					}
				}

				}
				}
				break;
			case LEFT:
			case RIGHT:
				enterOuterAlt(_localctx, 3);
				{
				{
				setState(315);
				_la = _input.LA(1);
				if ( !(_la==LEFT || _la==RIGHT) ) {
				_errHandler.recoverInline(this);
				} else {
					consume();
				}
				setState(317);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==OUTER) {
					{
					setState(316);
					match(OUTER);
					}
				}

				setState(319);
				match(JOIN);
				setState(320);
				table_factor4();
				setState(321);
				join_condition();
				}
				}
				break;
			case NATURAL:
				enterOuterAlt(_localctx, 4);
				{
				{
				setState(323);
				match(NATURAL);
				setState(328);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==LEFT || _la==RIGHT) {
					{
					setState(324);
					_la = _input.LA(1);
					if ( !(_la==LEFT || _la==RIGHT) ) {
					_errHandler.recoverInline(this);
					} else {
						consume();
					}
					setState(326);
					_errHandler.sync(this);
					_la = _input.LA(1);
					if (_la==OUTER) {
						{
						setState(325);
						match(OUTER);
						}
					}

					}
				}

				setState(330);
				match(JOIN);
				setState(331);
				table_atom();
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Join_conditionContext extends ParserRuleContext {
		public TerminalNode ON() { return getToken(MysqlParser.ON, 0); }
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public List<Expr_opContext> expr_op() {
			return getRuleContexts(Expr_opContext.class);
		}
		public Expr_opContext expr_op(int i) {
			return getRuleContext(Expr_opContext.class,i);
		}
		public TerminalNode USING() { return getToken(MysqlParser.USING, 0); }
		public Column_listContext column_list() {
			return getRuleContext(Column_listContext.class,0);
		}
		public Join_conditionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_join_condition; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).enterJoin_condition(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).exitJoin_condition(this);
		}
	}

	public final Join_conditionContext join_condition() throws RecognitionException {
		Join_conditionContext _localctx = new Join_conditionContext(_ctx, getState());
		enterRule(_localctx, 62, RULE_join_condition);
		int _la;
		try {
			setState(346);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case ON:
				enterOuterAlt(_localctx, 1);
				{
				{
				setState(334);
				match(ON);
				setState(335);
				expression();
				setState(341);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << AND) | (1L << OR) | (1L << XOR) | (1L << NOT))) != 0)) {
					{
					{
					setState(336);
					expr_op();
					setState(337);
					expression();
					}
					}
					setState(343);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				}
				}
				break;
			case USING:
				enterOuterAlt(_localctx, 2);
				{
				{
				setState(344);
				match(USING);
				setState(345);
				column_list();
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Index_hint_listContext extends ParserRuleContext {
		public List<Index_hintContext> index_hint() {
			return getRuleContexts(Index_hintContext.class);
		}
		public Index_hintContext index_hint(int i) {
			return getRuleContext(Index_hintContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(MysqlParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(MysqlParser.COMMA, i);
		}
		public Index_hint_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_index_hint_list; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).enterIndex_hint_list(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).exitIndex_hint_list(this);
		}
	}

	public final Index_hint_listContext index_hint_list() throws RecognitionException {
		Index_hint_listContext _localctx = new Index_hint_listContext(_ctx, getState());
		enterRule(_localctx, 64, RULE_index_hint_list);
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(348);
			index_hint();
			setState(353);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,42,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(349);
					match(COMMA);
					setState(350);
					index_hint();
					}
					} 
				}
				setState(355);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,42,_ctx);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Index_optionsContext extends ParserRuleContext {
		public TerminalNode INDEX() { return getToken(MysqlParser.INDEX, 0); }
		public TerminalNode KEY() { return getToken(MysqlParser.KEY, 0); }
		public TerminalNode FOR() { return getToken(MysqlParser.FOR, 0); }
		public TerminalNode JOIN() { return getToken(MysqlParser.JOIN, 0); }
		public TerminalNode ORDER() { return getToken(MysqlParser.ORDER, 0); }
		public TerminalNode BY() { return getToken(MysqlParser.BY, 0); }
		public TerminalNode GROUP() { return getToken(MysqlParser.GROUP, 0); }
		public Index_optionsContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_index_options; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).enterIndex_options(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).exitIndex_options(this);
		}
	}

	public final Index_optionsContext index_options() throws RecognitionException {
		Index_optionsContext _localctx = new Index_optionsContext(_ctx, getState());
		enterRule(_localctx, 66, RULE_index_options);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(356);
			_la = _input.LA(1);
			if ( !(_la==INDEX || _la==KEY) ) {
			_errHandler.recoverInline(this);
			} else {
				consume();
			}
			setState(365);
			_errHandler.sync(this);
			_la = _input.LA(1);
			if (_la==FOR) {
				{
				setState(357);
				match(FOR);
				setState(363);
				_errHandler.sync(this);
				switch (_input.LA(1)) {
				case JOIN:
					{
					{
					setState(358);
					match(JOIN);
					}
					}
					break;
				case ORDER:
					{
					{
					setState(359);
					match(ORDER);
					setState(360);
					match(BY);
					}
					}
					break;
				case GROUP:
					{
					{
					setState(361);
					match(GROUP);
					setState(362);
					match(BY);
					}
					}
					break;
				default:
					throw new NoViableAltException(this);
				}
				}
			}

			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Index_hintContext extends ParserRuleContext {
		public TerminalNode USE() { return getToken(MysqlParser.USE, 0); }
		public Index_optionsContext index_options() {
			return getRuleContext(Index_optionsContext.class,0);
		}
		public TerminalNode LPAREN() { return getToken(MysqlParser.LPAREN, 0); }
		public TerminalNode RPAREN() { return getToken(MysqlParser.RPAREN, 0); }
		public Index_listContext index_list() {
			return getRuleContext(Index_listContext.class,0);
		}
		public TerminalNode IGNORE() { return getToken(MysqlParser.IGNORE, 0); }
		public Index_hintContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_index_hint; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).enterIndex_hint(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).exitIndex_hint(this);
		}
	}

	public final Index_hintContext index_hint() throws RecognitionException {
		Index_hintContext _localctx = new Index_hintContext(_ctx, getState());
		enterRule(_localctx, 68, RULE_index_hint);
		int _la;
		try {
			setState(381);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case USE:
				enterOuterAlt(_localctx, 1);
				{
				setState(367);
				match(USE);
				setState(368);
				index_options();
				setState(369);
				match(LPAREN);
				setState(371);
				_errHandler.sync(this);
				_la = _input.LA(1);
				if (_la==ID) {
					{
					setState(370);
					index_list();
					}
				}

				setState(373);
				match(RPAREN);
				}
				break;
			case IGNORE:
				enterOuterAlt(_localctx, 2);
				{
				setState(375);
				match(IGNORE);
				setState(376);
				index_options();
				setState(377);
				match(LPAREN);
				setState(378);
				index_list();
				setState(379);
				match(RPAREN);
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Index_listContext extends ParserRuleContext {
		public List<Index_nameContext> index_name() {
			return getRuleContexts(Index_nameContext.class);
		}
		public Index_nameContext index_name(int i) {
			return getRuleContext(Index_nameContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(MysqlParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(MysqlParser.COMMA, i);
		}
		public Index_listContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_index_list; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).enterIndex_list(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).exitIndex_list(this);
		}
	}

	public final Index_listContext index_list() throws RecognitionException {
		Index_listContext _localctx = new Index_listContext(_ctx, getState());
		enterRule(_localctx, 70, RULE_index_list);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(383);
			index_name();
			setState(388);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(384);
				match(COMMA);
				setState(385);
				index_name();
				}
				}
				setState(390);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Partition_clauseContext extends ParserRuleContext {
		public TerminalNode PARTITION() { return getToken(MysqlParser.PARTITION, 0); }
		public TerminalNode LPAREN() { return getToken(MysqlParser.LPAREN, 0); }
		public Partition_namesContext partition_names() {
			return getRuleContext(Partition_namesContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(MysqlParser.RPAREN, 0); }
		public Partition_clauseContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_partition_clause; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).enterPartition_clause(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).exitPartition_clause(this);
		}
	}

	public final Partition_clauseContext partition_clause() throws RecognitionException {
		Partition_clauseContext _localctx = new Partition_clauseContext(_ctx, getState());
		enterRule(_localctx, 72, RULE_partition_clause);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(391);
			match(PARTITION);
			setState(392);
			match(LPAREN);
			setState(393);
			partition_names();
			setState(394);
			match(RPAREN);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Partition_namesContext extends ParserRuleContext {
		public List<Partition_nameContext> partition_name() {
			return getRuleContexts(Partition_nameContext.class);
		}
		public Partition_nameContext partition_name(int i) {
			return getRuleContext(Partition_nameContext.class,i);
		}
		public List<TerminalNode> COMMA() { return getTokens(MysqlParser.COMMA); }
		public TerminalNode COMMA(int i) {
			return getToken(MysqlParser.COMMA, i);
		}
		public Partition_namesContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_partition_names; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).enterPartition_names(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).exitPartition_names(this);
		}
	}

	public final Partition_namesContext partition_names() throws RecognitionException {
		Partition_namesContext _localctx = new Partition_namesContext(_ctx, getState());
		enterRule(_localctx, 74, RULE_partition_names);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(396);
			partition_name();
			setState(401);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while (_la==COMMA) {
				{
				{
				setState(397);
				match(COMMA);
				setState(398);
				partition_name();
				}
				}
				setState(403);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Partition_nameContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(MysqlParser.ID, 0); }
		public Partition_nameContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_partition_name; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).enterPartition_name(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).exitPartition_name(this);
		}
	}

	public final Partition_nameContext partition_name() throws RecognitionException {
		Partition_nameContext _localctx = new Partition_nameContext(_ctx, getState());
		enterRule(_localctx, 76, RULE_partition_name);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(404);
			match(ID);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class Subquery_aliasContext extends ParserRuleContext {
		public TerminalNode ID() { return getToken(MysqlParser.ID, 0); }
		public Subquery_aliasContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_subquery_alias; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).enterSubquery_alias(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).exitSubquery_alias(this);
		}
	}

	public final Subquery_aliasContext subquery_alias() throws RecognitionException {
		Subquery_aliasContext _localctx = new Subquery_aliasContext(_ctx, getState());
		enterRule(_localctx, 78, RULE_subquery_alias);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(406);
			match(ID);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class SubqueryContext extends ParserRuleContext {
		public TerminalNode LPAREN() { return getToken(MysqlParser.LPAREN, 0); }
		public Select_clauseContext select_clause() {
			return getRuleContext(Select_clauseContext.class,0);
		}
		public TerminalNode RPAREN() { return getToken(MysqlParser.RPAREN, 0); }
		public SubqueryContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_subquery; }
		@Override
		public void enterRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).enterSubquery(this);
		}
		@Override
		public void exitRule(ParseTreeListener listener) {
			if ( listener instanceof MysqlParserListener ) ((MysqlParserListener)listener).exitSubquery(this);
		}
	}

	public final SubqueryContext subquery() throws RecognitionException {
		SubqueryContext _localctx = new SubqueryContext(_ctx, getState());
		enterRule(_localctx, 80, RULE_subquery);
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(408);
			match(LPAREN);
			setState(409);
			select_clause();
			setState(410);
			match(RPAREN);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static final String _serializedATN =
		"\3\u0430\ud6d1\u8206\uad2d\u4417\uaef1\u8d80\uaadd\3K\u019f\4\2\t\2\4"+
		"\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4\13\t"+
		"\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\4\22\t\22"+
		"\4\23\t\23\4\24\t\24\4\25\t\25\4\26\t\26\4\27\t\27\4\30\t\30\4\31\t\31"+
		"\4\32\t\32\4\33\t\33\4\34\t\34\4\35\t\35\4\36\t\36\4\37\t\37\4 \t \4!"+
		"\t!\4\"\t\"\4#\t#\4$\t$\4%\t%\4&\t&\4\'\t\'\4(\t(\4)\t)\4*\t*\3\2\6\2"+
		"V\n\2\r\2\16\2W\3\3\3\3\3\4\3\4\3\4\3\4\5\4`\n\4\3\4\5\4c\n\4\3\5\3\5"+
		"\3\6\3\6\3\7\3\7\3\7\5\7l\n\7\3\7\3\7\5\7p\n\7\3\7\3\7\3\7\5\7u\n\7\3"+
		"\7\3\7\3\7\5\7z\n\7\3\7\3\7\3\7\5\7\177\n\7\5\7\u0081\n\7\3\b\3\b\3\t"+
		"\3\t\3\n\3\n\3\n\3\n\7\n\u008b\n\n\f\n\16\n\u008e\13\n\3\n\3\n\3\13\3"+
		"\13\3\13\7\13\u0095\n\13\f\13\16\13\u0098\13\13\3\f\3\f\3\f\3\f\7\f\u009e"+
		"\n\f\f\f\16\f\u00a1\13\f\3\r\3\r\3\16\3\16\3\16\3\17\3\17\3\17\3\17\7"+
		"\17\u00ac\n\17\f\17\16\17\u00af\13\17\3\20\3\20\3\20\3\20\3\20\3\20\3"+
		"\20\5\20\u00b8\n\20\3\21\3\21\3\22\3\22\3\23\3\23\3\24\3\24\3\25\3\25"+
		"\3\26\3\26\3\27\3\27\3\27\5\27\u00c9\n\27\3\30\3\30\3\30\3\30\3\30\3\30"+
		"\3\30\3\30\3\30\3\30\3\30\3\30\3\30\3\30\5\30\u00d9\n\30\3\31\3\31\3\31"+
		"\3\31\7\31\u00df\n\31\f\31\16\31\u00e2\13\31\3\32\3\32\5\32\u00e6\n\32"+
		"\3\33\3\33\5\33\u00ea\n\33\3\33\3\33\3\33\5\33\u00ef\n\33\5\33\u00f1\n"+
		"\33\3\34\3\34\3\34\3\34\3\34\5\34\u00f8\n\34\5\34\u00fa\n\34\3\35\3\35"+
		"\3\35\5\35\u00ff\n\35\3\35\3\35\3\35\3\35\5\35\u0105\n\35\3\36\3\36\3"+
		"\36\3\36\5\36\u010b\n\36\5\36\u010d\n\36\3\36\3\36\5\36\u0111\n\36\3\37"+
		"\3\37\5\37\u0115\n\37\3\37\3\37\5\37\u0119\n\37\3\37\5\37\u011c\n\37\3"+
		"\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37\3\37\3"+
		"\37\3\37\5\37\u012e\n\37\3 \5 \u0131\n \3 \3 \3 \5 \u0136\n \3 \3 \3 "+
		"\3 \5 \u013c\n \3 \3 \5 \u0140\n \3 \3 \3 \3 \3 \3 \3 \5 \u0149\n \5 "+
		"\u014b\n \3 \3 \5 \u014f\n \3!\3!\3!\3!\3!\7!\u0156\n!\f!\16!\u0159\13"+
		"!\3!\3!\5!\u015d\n!\3\"\3\"\3\"\7\"\u0162\n\"\f\"\16\"\u0165\13\"\3#\3"+
		"#\3#\3#\3#\3#\3#\5#\u016e\n#\5#\u0170\n#\3$\3$\3$\3$\5$\u0176\n$\3$\3"+
		"$\3$\3$\3$\3$\3$\3$\5$\u0180\n$\3%\3%\3%\7%\u0185\n%\f%\16%\u0188\13%"+
		"\3&\3&\3&\3&\3&\3\'\3\'\3\'\7\'\u0192\n\'\f\'\16\'\u0195\13\'\3(\3(\3"+
		")\3)\3*\3*\3*\3*\3*\2\2+\2\4\6\b\n\f\16\20\22\24\26\30\32\34\36 \"$&("+
		"*,.\60\62\64\668:<>@BDFHJLNPR\2\7\4\2(+-.\4\2\7\t,,\4\2\63\63\66\66\3"+
		"\2CD\3\289\u01b0\2U\3\2\2\2\4Y\3\2\2\2\6[\3\2\2\2\bd\3\2\2\2\nf\3\2\2"+
		"\2\f\u0080\3\2\2\2\16\u0082\3\2\2\2\20\u0084\3\2\2\2\22\u0086\3\2\2\2"+
		"\24\u0091\3\2\2\2\26\u0099\3\2\2\2\30\u00a2\3\2\2\2\32\u00a4\3\2\2\2\34"+
		"\u00a7\3\2\2\2\36\u00b7\3\2\2\2 \u00b9\3\2\2\2\"\u00bb\3\2\2\2$\u00bd"+
		"\3\2\2\2&\u00bf\3\2\2\2(\u00c1\3\2\2\2*\u00c3\3\2\2\2,\u00c8\3\2\2\2."+
		"\u00d8\3\2\2\2\60\u00da\3\2\2\2\62\u00e5\3\2\2\2\64\u00e7\3\2\2\2\66\u00f2"+
		"\3\2\2\28\u00fb\3\2\2\2:\u0106\3\2\2\2<\u012d\3\2\2\2>\u014e\3\2\2\2@"+
		"\u015c\3\2\2\2B\u015e\3\2\2\2D\u0166\3\2\2\2F\u017f\3\2\2\2H\u0181\3\2"+
		"\2\2J\u0189\3\2\2\2L\u018e\3\2\2\2N\u0196\3\2\2\2P\u0198\3\2\2\2R\u019a"+
		"\3\2\2\2TV\5\6\4\2UT\3\2\2\2VW\3\2\2\2WU\3\2\2\2WX\3\2\2\2X\3\3\2\2\2"+
		"YZ\7G\2\2Z\5\3\2\2\2[\\\7\3\2\2\\_\5\24\13\2]^\7\4\2\2^`\5\60\31\2_]\3"+
		"\2\2\2_`\3\2\2\2`b\3\2\2\2ac\5\32\16\2ba\3\2\2\2bc\3\2\2\2c\7\3\2\2\2"+
		"de\7G\2\2e\t\3\2\2\2fg\7G\2\2g\13\3\2\2\2hi\5\4\3\2ij\7\61\2\2jl\3\2\2"+
		"\2kh\3\2\2\2kl\3\2\2\2lm\3\2\2\2mn\7G\2\2np\7\61\2\2ok\3\2\2\2op\3\2\2"+
		"\2pq\3\2\2\2qt\7G\2\2rs\7\6\2\2su\5\16\b\2tr\3\2\2\2tu\3\2\2\2u\u0081"+
		"\3\2\2\2vw\5\n\6\2wx\7\61\2\2xz\3\2\2\2yv\3\2\2\2yz\3\2\2\2z{\3\2\2\2"+
		"{\u0081\7G\2\2|~\7K\2\2}\177\5\16\b\2~}\3\2\2\2~\177\3\2\2\2\177\u0081"+
		"\3\2\2\2\u0080o\3\2\2\2\u0080y\3\2\2\2\u0080|\3\2\2\2\u0081\r\3\2\2\2"+
		"\u0082\u0083\7G\2\2\u0083\17\3\2\2\2\u0084\u0085\7G\2\2\u0085\21\3\2\2"+
		"\2\u0086\u0087\7#\2\2\u0087\u008c\5\f\7\2\u0088\u0089\7\60\2\2\u0089\u008b"+
		"\5\f\7\2\u008a\u0088\3\2\2\2\u008b\u008e\3\2\2\2\u008c\u008a\3\2\2\2\u008c"+
		"\u008d\3\2\2\2\u008d\u008f\3\2\2\2\u008e\u008c\3\2\2\2\u008f\u0090\7\""+
		"\2\2\u0090\23\3\2\2\2\u0091\u0096\5\f\7\2\u0092\u0093\7\60\2\2\u0093\u0095"+
		"\5\f\7\2\u0094\u0092\3\2\2\2\u0095\u0098\3\2\2\2\u0096\u0094\3\2\2\2\u0096"+
		"\u0097\3\2\2\2\u0097\25\3\2\2\2\u0098\u0096\3\2\2\2\u0099\u009a\7\4\2"+
		"\2\u009a\u009f\5\b\5\2\u009b\u009c\7\60\2\2\u009c\u009e\5\b\5\2\u009d"+
		"\u009b\3\2\2\2\u009e\u00a1\3\2\2\2\u009f\u009d\3\2\2\2\u009f\u00a0\3\2"+
		"\2\2\u00a0\27\3\2\2\2\u00a1\u009f\3\2\2\2\u00a2\u00a3\7\3\2\2\u00a3\31"+
		"\3\2\2\2\u00a4\u00a5\7\5\2\2\u00a5\u00a6\5\34\17\2\u00a6\33\3\2\2\2\u00a7"+
		"\u00ad\5.\30\2\u00a8\u00a9\5(\25\2\u00a9\u00aa\5.\30\2\u00aa\u00ac\3\2"+
		"\2\2\u00ab\u00a8\3\2\2\2\u00ac\u00af\3\2\2\2\u00ad\u00ab\3\2\2\2\u00ad"+
		"\u00ae\3\2\2\2\u00ae\35\3\2\2\2\u00af\u00ad\3\2\2\2\u00b0\u00b8\7K\2\2"+
		"\u00b1\u00b8\7G\2\2\u00b2\u00b3\7\32\2\2\u00b3\u00b4\7G\2\2\u00b4\u00b8"+
		"\7\32\2\2\u00b5\u00b8\7H\2\2\u00b6\u00b8\5\f\7\2\u00b7\u00b0\3\2\2\2\u00b7"+
		"\u00b1\3\2\2\2\u00b7\u00b2\3\2\2\2\u00b7\u00b5\3\2\2\2\u00b7\u00b6\3\2"+
		"\2\2\u00b8\37\3\2\2\2\u00b9\u00ba\5\36\20\2\u00ba!\3\2\2\2\u00bb\u00bc"+
		"\5\36\20\2\u00bc#\3\2\2\2\u00bd\u00be\5\36\20\2\u00be%\3\2\2\2\u00bf\u00c0"+
		"\t\2\2\2\u00c0\'\3\2\2\2\u00c1\u00c2\t\3\2\2\u00c2)\3\2\2\2\u00c3\u00c4"+
		"\7\25\2\2\u00c4+\3\2\2\2\u00c5\u00c9\7\n\2\2\u00c6\u00c7\7\n\2\2\u00c7"+
		"\u00c9\7,\2\2\u00c8\u00c5\3\2\2\2\u00c8\u00c6\3\2\2\2\u00c9-\3\2\2\2\u00ca"+
		"\u00cb\5\"\22\2\u00cb\u00cc\5&\24\2\u00cc\u00cd\5 \21\2\u00cd\u00d9\3"+
		"\2\2\2\u00ce\u00cf\5$\23\2\u00cf\u00d0\5*\26\2\u00d0\u00d1\5\"\22\2\u00d1"+
		"\u00d2\7\7\2\2\u00d2\u00d3\5 \21\2\u00d3\u00d9\3\2\2\2\u00d4\u00d5\5$"+
		"\23\2\u00d5\u00d6\5,\27\2\u00d6\u00d7\7\13\2\2\u00d7\u00d9\3\2\2\2\u00d8"+
		"\u00ca\3\2\2\2\u00d8\u00ce\3\2\2\2\u00d8\u00d4\3\2\2\2\u00d9/\3\2\2\2"+
		"\u00da\u00e0\5\62\32\2\u00db\u00dc\7\60\2\2\u00dc\u00df\5\62\32\2\u00dd"+
		"\u00df\5> \2\u00de\u00db\3\2\2\2\u00de\u00dd\3\2\2\2\u00df\u00e2\3\2\2"+
		"\2\u00e0\u00de\3\2\2\2\u00e0\u00e1\3\2\2\2\u00e1\61\3\2\2\2\u00e2\u00e0"+
		"\3\2\2\2\u00e3\u00e6\5\64\33\2\u00e4\u00e6\5<\37\2\u00e5\u00e3\3\2\2\2"+
		"\u00e5\u00e4\3\2\2\2\u00e6\63\3\2\2\2\u00e7\u00f0\5\66\34\2\u00e8\u00ea"+
		"\t\4\2\2\u00e9\u00e8\3\2\2\2\u00e9\u00ea\3\2\2\2\u00ea\u00eb\3\2\2\2\u00eb"+
		"\u00ec\7\65\2\2\u00ec\u00ee\5<\37\2\u00ed\u00ef\5@!\2\u00ee\u00ed\3\2"+
		"\2\2\u00ee\u00ef\3\2\2\2\u00ef\u00f1\3\2\2\2\u00f0\u00e9\3\2\2\2\u00f0"+
		"\u00f1\3\2\2\2\u00f1\65\3\2\2\2\u00f2\u00f9\58\35\2\u00f3\u00f4\7A\2\2"+
		"\u00f4\u00f7\5<\37\2\u00f5\u00f6\7F\2\2\u00f6\u00f8\5\34\17\2\u00f7\u00f5"+
		"\3\2\2\2\u00f7\u00f8\3\2\2\2\u00f8\u00fa\3\2\2\2\u00f9\u00f3\3\2\2\2\u00f9"+
		"\u00fa\3\2\2\2\u00fa\67\3\2\2\2\u00fb\u0104\5:\36\2\u00fc\u00fe\t\5\2"+
		"\2\u00fd\u00ff\7\64\2\2\u00fe\u00fd\3\2\2\2\u00fe\u00ff\3\2\2\2\u00ff"+
		"\u0100\3\2\2\2\u0100\u0101\7\65\2\2\u0101\u0102\5:\36\2\u0102\u0103\5"+
		"@!\2\u0103\u0105\3\2\2\2\u0104\u00fc\3\2\2\2\u0104\u0105\3\2\2\2\u0105"+
		"9\3\2\2\2\u0106\u0110\5<\37\2\u0107\u010c\7B\2\2\u0108\u010a\t\5\2\2\u0109"+
		"\u010b\7\64\2\2\u010a\u0109\3\2\2\2\u010a\u010b\3\2\2\2\u010b\u010d\3"+
		"\2\2\2\u010c\u0108\3\2\2\2\u010c\u010d\3\2\2\2\u010d\u010e\3\2\2\2\u010e"+
		"\u010f\7\65\2\2\u010f\u0111\5<\37\2\u0110\u0107\3\2\2\2\u0110\u0111\3"+
		"\2\2\2\u0111;\3\2\2\2\u0112\u0114\5\b\5\2\u0113\u0115\5J&\2\u0114\u0113"+
		"\3\2\2\2\u0114\u0115\3\2\2\2\u0115\u0118\3\2\2\2\u0116\u0117\7\6\2\2\u0117"+
		"\u0119\5\n\6\2\u0118\u0116\3\2\2\2\u0118\u0119\3\2\2\2\u0119\u011b\3\2"+
		"\2\2\u011a\u011c\5B\"\2\u011b\u011a\3\2\2\2\u011b\u011c\3\2\2\2\u011c"+
		"\u012e\3\2\2\2\u011d\u011e\5R*\2\u011e\u011f\5P)\2\u011f\u012e\3\2\2\2"+
		"\u0120\u0121\7#\2\2\u0121\u0122\5\60\31\2\u0122\u0123\7\"\2\2\u0123\u012e"+
		"\3\2\2\2\u0124\u0125\7E\2\2\u0125\u0126\5\62\32\2\u0126\u0127\7C\2\2\u0127"+
		"\u0128\7\64\2\2\u0128\u0129\7\65\2\2\u0129\u012a\5\62\32\2\u012a\u012b"+
		"\7F\2\2\u012b\u012c\5\34\17\2\u012c\u012e\3\2\2\2\u012d\u0112\3\2\2\2"+
		"\u012d\u011d\3\2\2\2\u012d\u0120\3\2\2\2\u012d\u0124\3\2\2\2\u012e=\3"+
		"\2\2\2\u012f\u0131\t\4\2\2\u0130\u012f\3\2\2\2\u0130\u0131\3\2\2\2\u0131"+
		"\u0132\3\2\2\2\u0132\u0133\7\65\2\2\u0133\u0135\5<\37\2\u0134\u0136\5"+
		"@!\2\u0135\u0134\3\2\2\2\u0135\u0136\3\2\2\2\u0136\u014f\3\2\2\2\u0137"+
		"\u0138\7A\2\2\u0138\u013b\5<\37\2\u0139\u013a\7F\2\2\u013a\u013c\5\34"+
		"\17\2\u013b\u0139\3\2\2\2\u013b\u013c\3\2\2\2\u013c\u014f\3\2\2\2\u013d"+
		"\u013f\t\5\2\2\u013e\u0140\7\64\2\2\u013f\u013e\3\2\2\2\u013f\u0140\3"+
		"\2\2\2\u0140\u0141\3\2\2\2\u0141\u0142\7\65\2\2\u0142\u0143\5:\36\2\u0143"+
		"\u0144\5@!\2\u0144\u014f\3\2\2\2\u0145\u014a\7B\2\2\u0146\u0148\t\5\2"+
		"\2\u0147\u0149\7\64\2\2\u0148\u0147\3\2\2\2\u0148\u0149\3\2\2\2\u0149"+
		"\u014b\3\2\2\2\u014a\u0146\3\2\2\2\u014a\u014b\3\2\2\2\u014b\u014c\3\2"+
		"\2\2\u014c\u014d\7\65\2\2\u014d\u014f\5<\37\2\u014e\u0130\3\2\2\2\u014e"+
		"\u0137\3\2\2\2\u014e\u013d\3\2\2\2\u014e\u0145\3\2\2\2\u014f?\3\2\2\2"+
		"\u0150\u0151\7F\2\2\u0151\u0157\5\34\17\2\u0152\u0153\5(\25\2\u0153\u0154"+
		"\5\34\17\2\u0154\u0156\3\2\2\2\u0155\u0152\3\2\2\2\u0156\u0159\3\2\2\2"+
		"\u0157\u0155\3\2\2\2\u0157\u0158\3\2\2\2\u0158\u015d\3\2\2\2\u0159\u0157"+
		"\3\2\2\2\u015a\u015b\7\67\2\2\u015b\u015d\5\22\n\2\u015c\u0150\3\2\2\2"+
		"\u015c\u015a\3\2\2\2\u015dA\3\2\2\2\u015e\u0163\5F$\2\u015f\u0160\7\60"+
		"\2\2\u0160\u0162\5F$\2\u0161\u015f\3\2\2\2\u0162\u0165\3\2\2\2\u0163\u0161"+
		"\3\2\2\2\u0163\u0164\3\2\2\2\u0164C\3\2\2\2\u0165\u0163\3\2\2\2\u0166"+
		"\u016f\t\6\2\2\u0167\u016d\7=\2\2\u0168\u016e\7\65\2\2\u0169\u016a\7:"+
		"\2\2\u016a\u016e\7<\2\2\u016b\u016c\7;\2\2\u016c\u016e\7<\2\2\u016d\u0168"+
		"\3\2\2\2\u016d\u0169\3\2\2\2\u016d\u016b\3\2\2\2\u016e\u0170\3\2\2\2\u016f"+
		"\u0167\3\2\2\2\u016f\u0170\3\2\2\2\u0170E\3\2\2\2\u0171\u0172\7>\2\2\u0172"+
		"\u0173\5D#\2\u0173\u0175\7#\2\2\u0174\u0176\5H%\2\u0175\u0174\3\2\2\2"+
		"\u0175\u0176\3\2\2\2\u0176\u0177\3\2\2\2\u0177\u0178\7\"\2\2\u0178\u0180"+
		"\3\2\2\2\u0179\u017a\7?\2\2\u017a\u017b\5D#\2\u017b\u017c\7#\2\2\u017c"+
		"\u017d\5H%\2\u017d\u017e\7\"\2\2\u017e\u0180\3\2\2\2\u017f\u0171\3\2\2"+
		"\2\u017f\u0179\3\2\2\2\u0180G\3\2\2\2\u0181\u0186\5\20\t\2\u0182\u0183"+
		"\7\60\2\2\u0183\u0185\5\20\t\2\u0184\u0182\3\2\2\2\u0185\u0188\3\2\2\2"+
		"\u0186\u0184\3\2\2\2\u0186\u0187\3\2\2\2\u0187I\3\2\2\2\u0188\u0186\3"+
		"\2\2\2\u0189\u018a\7@\2\2\u018a\u018b\7#\2\2\u018b\u018c\5L\'\2\u018c"+
		"\u018d\7\"\2\2\u018dK\3\2\2\2\u018e\u0193\5N(\2\u018f\u0190\7\60\2\2\u0190"+
		"\u0192\5N(\2\u0191\u018f\3\2\2\2\u0192\u0195\3\2\2\2\u0193\u0191\3\2\2"+
		"\2\u0193\u0194\3\2\2\2\u0194M\3\2\2\2\u0195\u0193\3\2\2\2\u0196\u0197"+
		"\7G\2\2\u0197O\3\2\2\2\u0198\u0199\7G\2\2\u0199Q\3\2\2\2\u019a\u019b\7"+
		"#\2\2\u019b\u019c\5\6\4\2\u019c\u019d\7\"\2\2\u019dS\3\2\2\2\63W_bkot"+
		"y~\u0080\u008c\u0096\u009f\u00ad\u00b7\u00c8\u00d8\u00de\u00e0\u00e5\u00e9"+
		"\u00ee\u00f0\u00f7\u00f9\u00fe\u0104\u010a\u010c\u0110\u0114\u0118\u011b"+
		"\u012d\u0130\u0135\u013b\u013f\u0148\u014a\u014e\u0157\u015c\u0163\u016d"+
		"\u016f\u0175\u017f\u0186\u0193";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}