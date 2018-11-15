// Generated from MysqlParser.g4 by ANTLR 4.6
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link MysqlParser}.
 */
public interface MysqlParserListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link MysqlParser#stat}.
	 * @param ctx the parse tree
	 */
	void enterStat(MysqlParser.StatContext ctx);
	/**
	 * Exit a parse tree produced by {@link MysqlParser#stat}.
	 * @param ctx the parse tree
	 */
	void exitStat(MysqlParser.StatContext ctx);
	/**
	 * Enter a parse tree produced by {@link MysqlParser#schema_name}.
	 * @param ctx the parse tree
	 */
	void enterSchema_name(MysqlParser.Schema_nameContext ctx);
	/**
	 * Exit a parse tree produced by {@link MysqlParser#schema_name}.
	 * @param ctx the parse tree
	 */
	void exitSchema_name(MysqlParser.Schema_nameContext ctx);
	/**
	 * Enter a parse tree produced by {@link MysqlParser#select_clause}.
	 * @param ctx the parse tree
	 */
	void enterSelect_clause(MysqlParser.Select_clauseContext ctx);
	/**
	 * Exit a parse tree produced by {@link MysqlParser#select_clause}.
	 * @param ctx the parse tree
	 */
	void exitSelect_clause(MysqlParser.Select_clauseContext ctx);
	/**
	 * Enter a parse tree produced by {@link MysqlParser#table_name}.
	 * @param ctx the parse tree
	 */
	void enterTable_name(MysqlParser.Table_nameContext ctx);
	/**
	 * Exit a parse tree produced by {@link MysqlParser#table_name}.
	 * @param ctx the parse tree
	 */
	void exitTable_name(MysqlParser.Table_nameContext ctx);
	/**
	 * Enter a parse tree produced by {@link MysqlParser#table_alias}.
	 * @param ctx the parse tree
	 */
	void enterTable_alias(MysqlParser.Table_aliasContext ctx);
	/**
	 * Exit a parse tree produced by {@link MysqlParser#table_alias}.
	 * @param ctx the parse tree
	 */
	void exitTable_alias(MysqlParser.Table_aliasContext ctx);
	/**
	 * Enter a parse tree produced by {@link MysqlParser#column_name}.
	 * @param ctx the parse tree
	 */
	void enterColumn_name(MysqlParser.Column_nameContext ctx);
	/**
	 * Exit a parse tree produced by {@link MysqlParser#column_name}.
	 * @param ctx the parse tree
	 */
	void exitColumn_name(MysqlParser.Column_nameContext ctx);
	/**
	 * Enter a parse tree produced by {@link MysqlParser#column_name_alias}.
	 * @param ctx the parse tree
	 */
	void enterColumn_name_alias(MysqlParser.Column_name_aliasContext ctx);
	/**
	 * Exit a parse tree produced by {@link MysqlParser#column_name_alias}.
	 * @param ctx the parse tree
	 */
	void exitColumn_name_alias(MysqlParser.Column_name_aliasContext ctx);
	/**
	 * Enter a parse tree produced by {@link MysqlParser#index_name}.
	 * @param ctx the parse tree
	 */
	void enterIndex_name(MysqlParser.Index_nameContext ctx);
	/**
	 * Exit a parse tree produced by {@link MysqlParser#index_name}.
	 * @param ctx the parse tree
	 */
	void exitIndex_name(MysqlParser.Index_nameContext ctx);
	/**
	 * Enter a parse tree produced by {@link MysqlParser#column_list}.
	 * @param ctx the parse tree
	 */
	void enterColumn_list(MysqlParser.Column_listContext ctx);
	/**
	 * Exit a parse tree produced by {@link MysqlParser#column_list}.
	 * @param ctx the parse tree
	 */
	void exitColumn_list(MysqlParser.Column_listContext ctx);
	/**
	 * Enter a parse tree produced by {@link MysqlParser#column_list_clause}.
	 * @param ctx the parse tree
	 */
	void enterColumn_list_clause(MysqlParser.Column_list_clauseContext ctx);
	/**
	 * Exit a parse tree produced by {@link MysqlParser#column_list_clause}.
	 * @param ctx the parse tree
	 */
	void exitColumn_list_clause(MysqlParser.Column_list_clauseContext ctx);
	/**
	 * Enter a parse tree produced by {@link MysqlParser#from_clause}.
	 * @param ctx the parse tree
	 */
	void enterFrom_clause(MysqlParser.From_clauseContext ctx);
	/**
	 * Exit a parse tree produced by {@link MysqlParser#from_clause}.
	 * @param ctx the parse tree
	 */
	void exitFrom_clause(MysqlParser.From_clauseContext ctx);
	/**
	 * Enter a parse tree produced by {@link MysqlParser#select_key}.
	 * @param ctx the parse tree
	 */
	void enterSelect_key(MysqlParser.Select_keyContext ctx);
	/**
	 * Exit a parse tree produced by {@link MysqlParser#select_key}.
	 * @param ctx the parse tree
	 */
	void exitSelect_key(MysqlParser.Select_keyContext ctx);
	/**
	 * Enter a parse tree produced by {@link MysqlParser#where_clause}.
	 * @param ctx the parse tree
	 */
	void enterWhere_clause(MysqlParser.Where_clauseContext ctx);
	/**
	 * Exit a parse tree produced by {@link MysqlParser#where_clause}.
	 * @param ctx the parse tree
	 */
	void exitWhere_clause(MysqlParser.Where_clauseContext ctx);
	/**
	 * Enter a parse tree produced by {@link MysqlParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterExpression(MysqlParser.ExpressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MysqlParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitExpression(MysqlParser.ExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MysqlParser#element}.
	 * @param ctx the parse tree
	 */
	void enterElement(MysqlParser.ElementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MysqlParser#element}.
	 * @param ctx the parse tree
	 */
	void exitElement(MysqlParser.ElementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MysqlParser#right_element}.
	 * @param ctx the parse tree
	 */
	void enterRight_element(MysqlParser.Right_elementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MysqlParser#right_element}.
	 * @param ctx the parse tree
	 */
	void exitRight_element(MysqlParser.Right_elementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MysqlParser#left_element}.
	 * @param ctx the parse tree
	 */
	void enterLeft_element(MysqlParser.Left_elementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MysqlParser#left_element}.
	 * @param ctx the parse tree
	 */
	void exitLeft_element(MysqlParser.Left_elementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MysqlParser#target_element}.
	 * @param ctx the parse tree
	 */
	void enterTarget_element(MysqlParser.Target_elementContext ctx);
	/**
	 * Exit a parse tree produced by {@link MysqlParser#target_element}.
	 * @param ctx the parse tree
	 */
	void exitTarget_element(MysqlParser.Target_elementContext ctx);
	/**
	 * Enter a parse tree produced by {@link MysqlParser#relational_op}.
	 * @param ctx the parse tree
	 */
	void enterRelational_op(MysqlParser.Relational_opContext ctx);
	/**
	 * Exit a parse tree produced by {@link MysqlParser#relational_op}.
	 * @param ctx the parse tree
	 */
	void exitRelational_op(MysqlParser.Relational_opContext ctx);
	/**
	 * Enter a parse tree produced by {@link MysqlParser#expr_op}.
	 * @param ctx the parse tree
	 */
	void enterExpr_op(MysqlParser.Expr_opContext ctx);
	/**
	 * Exit a parse tree produced by {@link MysqlParser#expr_op}.
	 * @param ctx the parse tree
	 */
	void exitExpr_op(MysqlParser.Expr_opContext ctx);
	/**
	 * Enter a parse tree produced by {@link MysqlParser#between_op}.
	 * @param ctx the parse tree
	 */
	void enterBetween_op(MysqlParser.Between_opContext ctx);
	/**
	 * Exit a parse tree produced by {@link MysqlParser#between_op}.
	 * @param ctx the parse tree
	 */
	void exitBetween_op(MysqlParser.Between_opContext ctx);
	/**
	 * Enter a parse tree produced by {@link MysqlParser#is_or_is_not}.
	 * @param ctx the parse tree
	 */
	void enterIs_or_is_not(MysqlParser.Is_or_is_notContext ctx);
	/**
	 * Exit a parse tree produced by {@link MysqlParser#is_or_is_not}.
	 * @param ctx the parse tree
	 */
	void exitIs_or_is_not(MysqlParser.Is_or_is_notContext ctx);
	/**
	 * Enter a parse tree produced by {@link MysqlParser#simple_expression}.
	 * @param ctx the parse tree
	 */
	void enterSimple_expression(MysqlParser.Simple_expressionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MysqlParser#simple_expression}.
	 * @param ctx the parse tree
	 */
	void exitSimple_expression(MysqlParser.Simple_expressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MysqlParser#table_references}.
	 * @param ctx the parse tree
	 */
	void enterTable_references(MysqlParser.Table_referencesContext ctx);
	/**
	 * Exit a parse tree produced by {@link MysqlParser#table_references}.
	 * @param ctx the parse tree
	 */
	void exitTable_references(MysqlParser.Table_referencesContext ctx);
	/**
	 * Enter a parse tree produced by {@link MysqlParser#table_reference}.
	 * @param ctx the parse tree
	 */
	void enterTable_reference(MysqlParser.Table_referenceContext ctx);
	/**
	 * Exit a parse tree produced by {@link MysqlParser#table_reference}.
	 * @param ctx the parse tree
	 */
	void exitTable_reference(MysqlParser.Table_referenceContext ctx);
	/**
	 * Enter a parse tree produced by {@link MysqlParser#table_factor1}.
	 * @param ctx the parse tree
	 */
	void enterTable_factor1(MysqlParser.Table_factor1Context ctx);
	/**
	 * Exit a parse tree produced by {@link MysqlParser#table_factor1}.
	 * @param ctx the parse tree
	 */
	void exitTable_factor1(MysqlParser.Table_factor1Context ctx);
	/**
	 * Enter a parse tree produced by {@link MysqlParser#table_factor2}.
	 * @param ctx the parse tree
	 */
	void enterTable_factor2(MysqlParser.Table_factor2Context ctx);
	/**
	 * Exit a parse tree produced by {@link MysqlParser#table_factor2}.
	 * @param ctx the parse tree
	 */
	void exitTable_factor2(MysqlParser.Table_factor2Context ctx);
	/**
	 * Enter a parse tree produced by {@link MysqlParser#table_factor3}.
	 * @param ctx the parse tree
	 */
	void enterTable_factor3(MysqlParser.Table_factor3Context ctx);
	/**
	 * Exit a parse tree produced by {@link MysqlParser#table_factor3}.
	 * @param ctx the parse tree
	 */
	void exitTable_factor3(MysqlParser.Table_factor3Context ctx);
	/**
	 * Enter a parse tree produced by {@link MysqlParser#table_factor4}.
	 * @param ctx the parse tree
	 */
	void enterTable_factor4(MysqlParser.Table_factor4Context ctx);
	/**
	 * Exit a parse tree produced by {@link MysqlParser#table_factor4}.
	 * @param ctx the parse tree
	 */
	void exitTable_factor4(MysqlParser.Table_factor4Context ctx);
	/**
	 * Enter a parse tree produced by {@link MysqlParser#table_atom}.
	 * @param ctx the parse tree
	 */
	void enterTable_atom(MysqlParser.Table_atomContext ctx);
	/**
	 * Exit a parse tree produced by {@link MysqlParser#table_atom}.
	 * @param ctx the parse tree
	 */
	void exitTable_atom(MysqlParser.Table_atomContext ctx);
	/**
	 * Enter a parse tree produced by {@link MysqlParser#join_clause}.
	 * @param ctx the parse tree
	 */
	void enterJoin_clause(MysqlParser.Join_clauseContext ctx);
	/**
	 * Exit a parse tree produced by {@link MysqlParser#join_clause}.
	 * @param ctx the parse tree
	 */
	void exitJoin_clause(MysqlParser.Join_clauseContext ctx);
	/**
	 * Enter a parse tree produced by {@link MysqlParser#join_condition}.
	 * @param ctx the parse tree
	 */
	void enterJoin_condition(MysqlParser.Join_conditionContext ctx);
	/**
	 * Exit a parse tree produced by {@link MysqlParser#join_condition}.
	 * @param ctx the parse tree
	 */
	void exitJoin_condition(MysqlParser.Join_conditionContext ctx);
	/**
	 * Enter a parse tree produced by {@link MysqlParser#index_hint_list}.
	 * @param ctx the parse tree
	 */
	void enterIndex_hint_list(MysqlParser.Index_hint_listContext ctx);
	/**
	 * Exit a parse tree produced by {@link MysqlParser#index_hint_list}.
	 * @param ctx the parse tree
	 */
	void exitIndex_hint_list(MysqlParser.Index_hint_listContext ctx);
	/**
	 * Enter a parse tree produced by {@link MysqlParser#index_options}.
	 * @param ctx the parse tree
	 */
	void enterIndex_options(MysqlParser.Index_optionsContext ctx);
	/**
	 * Exit a parse tree produced by {@link MysqlParser#index_options}.
	 * @param ctx the parse tree
	 */
	void exitIndex_options(MysqlParser.Index_optionsContext ctx);
	/**
	 * Enter a parse tree produced by {@link MysqlParser#index_hint}.
	 * @param ctx the parse tree
	 */
	void enterIndex_hint(MysqlParser.Index_hintContext ctx);
	/**
	 * Exit a parse tree produced by {@link MysqlParser#index_hint}.
	 * @param ctx the parse tree
	 */
	void exitIndex_hint(MysqlParser.Index_hintContext ctx);
	/**
	 * Enter a parse tree produced by {@link MysqlParser#index_list}.
	 * @param ctx the parse tree
	 */
	void enterIndex_list(MysqlParser.Index_listContext ctx);
	/**
	 * Exit a parse tree produced by {@link MysqlParser#index_list}.
	 * @param ctx the parse tree
	 */
	void exitIndex_list(MysqlParser.Index_listContext ctx);
	/**
	 * Enter a parse tree produced by {@link MysqlParser#partition_clause}.
	 * @param ctx the parse tree
	 */
	void enterPartition_clause(MysqlParser.Partition_clauseContext ctx);
	/**
	 * Exit a parse tree produced by {@link MysqlParser#partition_clause}.
	 * @param ctx the parse tree
	 */
	void exitPartition_clause(MysqlParser.Partition_clauseContext ctx);
	/**
	 * Enter a parse tree produced by {@link MysqlParser#partition_names}.
	 * @param ctx the parse tree
	 */
	void enterPartition_names(MysqlParser.Partition_namesContext ctx);
	/**
	 * Exit a parse tree produced by {@link MysqlParser#partition_names}.
	 * @param ctx the parse tree
	 */
	void exitPartition_names(MysqlParser.Partition_namesContext ctx);
	/**
	 * Enter a parse tree produced by {@link MysqlParser#partition_name}.
	 * @param ctx the parse tree
	 */
	void enterPartition_name(MysqlParser.Partition_nameContext ctx);
	/**
	 * Exit a parse tree produced by {@link MysqlParser#partition_name}.
	 * @param ctx the parse tree
	 */
	void exitPartition_name(MysqlParser.Partition_nameContext ctx);
	/**
	 * Enter a parse tree produced by {@link MysqlParser#subquery_alias}.
	 * @param ctx the parse tree
	 */
	void enterSubquery_alias(MysqlParser.Subquery_aliasContext ctx);
	/**
	 * Exit a parse tree produced by {@link MysqlParser#subquery_alias}.
	 * @param ctx the parse tree
	 */
	void exitSubquery_alias(MysqlParser.Subquery_aliasContext ctx);
	/**
	 * Enter a parse tree produced by {@link MysqlParser#subquery}.
	 * @param ctx the parse tree
	 */
	void enterSubquery(MysqlParser.SubqueryContext ctx);
	/**
	 * Exit a parse tree produced by {@link MysqlParser#subquery}.
	 * @param ctx the parse tree
	 */
	void exitSubquery(MysqlParser.SubqueryContext ctx);
}