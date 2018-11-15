//import Antlr.SQLParserListener;

import org.antlr.v4.runtime.ParserRuleContext;
import org.antlr.v4.runtime.tree.*;
import java.util.ArrayList;
import java.util.List;

public class SQLListener implements SQLParserListener {

    // Reflection layer
    static class Db {
        public Db() {
        }
        static public Db Factory() {
            return null;
        }
        /*
        public void query(Sql.Statement) {
        }

        static class Sql {
            static class Statement {
                public SQLResult fetchAll() {
                }
            }
        }*/

        public SQLSelect select() {
            SQLSelect select = new SQLSelect();
            return select;
        }
    }

    static class SQLPreparable {
        public void prepare() { }
    }
    // Db.Sql.Preparable
    // Db.Sql.Select
    static class SQLLiteral {
        String text;
        @Override
        public String toString() { return new String("...");}
    }
    static class SQLIdentifier extends SQLLiteral {
    }
    static class SQLExpression extends SQLLiteral {
    }
    static class SQLList extends SQLLiteral {// exemple: select item1, item2, item3, ...
    }
    static class SQLClause extends SQLExpression {
    }
    static class SQLStatement extends SQLExpression {
    }
    static class SQLQuery extends SQLStatement {
    }
    static class SQLSelectClause extends SQLClause {
    }
    static class SQLWhereClause extends SQLClause {
    }
    static class SQLLimitClause extends SQLClause {
    }


    static class SQLColumnName extends SQLIdentifier {
        SQLTable table;
        String name;
        String alias;
    }
    static class SQLColumn {
        SQLColumnName name = new SQLColumnName();
        SQLColumn setName(String name) {
            this.name.name = name;
            return this;
        }
    }
    static class SQLTableName extends SQLIdentifier {
        String schema;
        String name;
        String alias;
    }
    static class SQLTable /*extends SQLAbstract*/ {
        SQLTableName name;
        List<SQLColumn> columns;
        SQLTable setName(String name) {
            this.name = new SQLTableName();
            this.name.name = name;

            return this;
        }
    }
    static class SQLSelect extends SQLQuery {
        List<SQLColumn> columns = new ArrayList<SQLColumn>();// or subquery ResultSet.toList<SQLColumn>()
        SQLTable from_table;
        SQLTable join_table[];
        SQLSelect addColumn(SQLColumn column) {
            this.columns.add(column);
            return this;
        }
        SQLSelect setFrom(SQLTable table) {
            this.from_table = table;
            return this;
        }
        SQLSelect setWhere(SQLExpression expression) { return this;}
        SQLSelect setLimit(int start, int lenght) { return this;}

        SQLSelect from(String name, String alias) {
            // search table ...
            this.from_table = new SQLTable();
            // db_table_alias_lookup();
            this.from_table.setName(name);

            return this;
        }
        SQLSelect where(String conditions) { return this;}
        SQLSelect limit(int start, int length) { return this;}
        //
        public String toString() {
            return new String("select " +this.columns.get(0).name.name+ " from " + this.from_table.name.name);
        }
    }


    SQLSelect model;
    SQLColumn model_column;
    SQLTable model_table;
    @Override
    public String toString() {
//        SQLBlock
//        SQLStatement
//        Script.Statement
//        Block.Statement
//        List<SQLExpression|SQLLiteral> columns = model.getColumns();
//        List<SQLExpression|SQLLiteral> columns = model.queryColumns();
// Db/Adapter/Abstract



        String str = model.toString();
        return new String(">"+str);
        //System.out.println();
        // TODO: pas-a-pas
        // get_literal_column
        // get_literal_column(db)
    }




    @Override
    public void visitTerminal(TerminalNode node) {
        System.out.println("--------------------------visitTerminal>" + node.getText());
    }
    @Override
    public void visitErrorNode(ErrorNode node) {
        System.out.println("visitErrorNode>");
    }
    @Override
    public void enterEveryRule(ParserRuleContext ctx) {
        System.out.println("enterEveryRule>" + ctx.getText());
    }
    @Override
    public void exitEveryRule(ParserRuleContext ctx) {
        System.out.println("exitEveryRule>" + ctx.getText());
    }

    @Override
    public void enterStat(SQLParser.StatContext ctx) {
        System.out.println("enterStat>" + ctx.getText());
    }

    @Override
    public void exitStat(SQLParser.StatContext ctx) {
        System.out.println("exitStat>" + ctx.getText());
    }


    @Override
    public void enterSchema_name(SQLParser.Schema_nameContext ctx) {
        System.out.println("enterSchema_name>" + ctx.getText());
    }

    @Override
    public void exitSchema_name(SQLParser.Schema_nameContext ctx) {
        System.out.println("exitSchema_name>" + ctx.getText());
    }

    @Override
    public void enterSelect_clause(SQLParser.Select_clauseContext ctx) {
        System.out.println("enterSelect_clause>" + ctx.getText());
        model = new SQLSelect();
        model_column = null;
    }

    @Override
    public void exitSelect_clause(SQLParser.Select_clauseContext ctx) {
        System.out.println("exitSelect_clause>" + ctx.getText());
    }

    @Override
    public void enterTable_name(SQLParser.Table_nameContext ctx) {
        System.out.println("enterTable_name>" + ctx.getText());
        model_table = new SQLTable();
        model_table.setName(ctx.getText());
    }

    @Override
    public void exitTable_name(SQLParser.Table_nameContext ctx) {
        System.out.println("exitTable_name>" + ctx.getText());
        model.setFrom(model_table);
    }

    @Override
    public void enterTable_alias(SQLParser.Table_aliasContext ctx) {
        System.out.println("enterTable_alias>" + ctx.getText());
    }

    @Override
    public void exitTable_alias(SQLParser.Table_aliasContext ctx) {
        System.out.println("exitTable_alias>" + ctx.getText());
    }

    @Override
    public void enterColumn_name(SQLParser.Column_nameContext ctx) {
        System.out.println("enterColumn_name>" + ctx.getText());
        model_column = new SQLColumn();
        model_column.setName(ctx.getText());
    }

    @Override
    public void exitColumn_name(SQLParser.Column_nameContext ctx) {
        System.out.println("exitColumn_name>" + ctx.getText());
        model.addColumn(model_column);
    }

    @Override
    public void enterColumn_name_alias(SQLParser.Column_name_aliasContext ctx) {
        System.out.println("enterColumn_name_alias>" + ctx.getText());
        //model_column.setAlias(ctx.getText());
    }

    @Override
    public void exitColumn_name_alias(SQLParser.Column_name_aliasContext ctx) {
        System.out.println("exitColumn_name_alias>" + ctx.getText());
    }

    @Override
    public void enterIndex_name(SQLParser.Index_nameContext ctx) {
        System.out.println("enterIndex_name>" + ctx.getText());
    }

    @Override
    public void exitIndex_name(SQLParser.Index_nameContext ctx) {
        System.out.println("exitIndex_name>" + ctx.getText());
    }

    @Override
    public void enterColumn_list(SQLParser.Column_listContext ctx) {
        System.out.println("enterColumn_list>" + ctx.getText());
    }

    @Override
    public void exitColumn_list(SQLParser.Column_listContext ctx) {
        System.out.println("exitColumn_list>" + ctx.getText());
    }

    @Override
    public void enterColumn_list_clause(SQLParser.Column_list_clauseContext ctx) {
        System.out.println("enterColumn_list_clause>" + ctx.getText());
    }

    @Override
    public void exitColumn_list_clause(SQLParser.Column_list_clauseContext ctx) {
        System.out.println("exitColumn_list_clause>" + ctx.getText());
    }

    @Override
    public void enterFrom_clause(SQLParser.From_clauseContext ctx) {
        System.out.println("enterFrom_clause>" + ctx.getText());
    }

    @Override
    public void exitFrom_clause(SQLParser.From_clauseContext ctx) {
        System.out.println("exitFrom_clause>" + ctx.getText());
    }

    @Override
    public void enterSelect_key(SQLParser.Select_keyContext ctx) {
        System.out.println("enterSelect_key>" + ctx.getText());
    }

    @Override
    public void exitSelect_key(SQLParser.Select_keyContext ctx) {
        System.out.println("exitSelect_key>" + ctx.getText());
    }

    @Override
    public void enterWhere_clause(SQLParser.Where_clauseContext ctx) {
        System.out.println("enterWhere_clause>" + ctx.getText());
    }

    @Override
    public void exitWhere_clause(SQLParser.Where_clauseContext ctx) {
        System.out.println("exitWhere_clause>" + ctx.getText());
    }

    @Override
    public void enterExpression(SQLParser.ExpressionContext ctx) {
        System.out.println("enterExpression>" + ctx.getText());
    }

    @Override
    public void exitExpression(SQLParser.ExpressionContext ctx) {
        System.out.println("exitExpression>" + ctx.getText());
    }

    @Override
    public void enterElement(SQLParser.ElementContext ctx) {
        System.out.println("enterElement>" + ctx.getText());
    }

    @Override
    public void exitElement(SQLParser.ElementContext ctx) {
        System.out.println("exitElement>" + ctx.getText());
    }

    @Override
    public void enterRight_element(SQLParser.Right_elementContext ctx) {
        System.out.println("enterRight_element>" + ctx.getText());
    }

    @Override
    public void exitRight_element(SQLParser.Right_elementContext ctx) {
        System.out.println("exitRight_element>" + ctx.getText());
    }

    @Override
    public void enterLeft_element(SQLParser.Left_elementContext ctx) {
        System.out.println("enterLeft_element>" + ctx.getText());
    }

    @Override
    public void exitLeft_element(SQLParser.Left_elementContext ctx) {
        System.out.println("exitLeft_element>" + ctx.getText());
    }

    @Override
    public void enterTarget_element(SQLParser.Target_elementContext ctx) {
        System.out.println("enterTarget_element>" + ctx.getText());
    }

    @Override
    public void exitTarget_element(SQLParser.Target_elementContext ctx) {
        System.out.println("exitTarget_element>" + ctx.getText());
    }

    @Override
    public void enterRelational_op(SQLParser.Relational_opContext ctx) {
        System.out.println("enterRelational_op>" + ctx.getText());
    }

    @Override
    public void exitRelational_op(SQLParser.Relational_opContext ctx) {
        System.out.println("exitRelational_op>" + ctx.getText());
    }

    @Override
    public void enterExpr_op(SQLParser.Expr_opContext ctx) {
        System.out.println("enterExpr_op>" + ctx.getText());
    }

    @Override
    public void exitExpr_op(SQLParser.Expr_opContext ctx) {
        System.out.println("exitExpr_op>" + ctx.getText());
    }

    @Override
    public void enterBetween_op(SQLParser.Between_opContext ctx) {
        System.out.println("enterBetween_op>" + ctx.getText());
    }

    @Override
    public void exitBetween_op(SQLParser.Between_opContext ctx) {
        System.out.println("exitBetween_op>" + ctx.getText());
    }

    @Override
    public void enterIs_or_is_not(SQLParser.Is_or_is_notContext ctx) {
        System.out.println("enterIs_or_is_not>" + ctx.getText());
    }

    @Override
    public void exitIs_or_is_not(SQLParser.Is_or_is_notContext ctx) {
        System.out.println("exitIs_or_is_not>" + ctx.getText());
    }

    @Override
    public void enterSimple_expression(SQLParser.Simple_expressionContext ctx) {
        System.out.println("enterSimple_expression>" + ctx.getText());
    }

    @Override
    public void exitSimple_expression(SQLParser.Simple_expressionContext ctx) {
        System.out.println("exitSimple_expression>" + ctx.getText());
    }

    @Override
    public void enterTable_references(SQLParser.Table_referencesContext ctx) {
        System.out.println("enterTable_references>" + ctx.getText());
    }

    @Override
    public void exitTable_references(SQLParser.Table_referencesContext ctx) {
        System.out.println("exitTable_references>" + ctx.getText());
    }

    @Override
    public void enterTable_reference(SQLParser.Table_referenceContext ctx) {
        System.out.println("enterTable_reference>" + ctx.getText());
    }

    @Override
    public void exitTable_reference(SQLParser.Table_referenceContext ctx) {
        System.out.println("exitTable_reference>" + ctx.getText());
    }

    @Override
    public void enterTable_factor1(SQLParser.Table_factor1Context ctx) {
        System.out.println("enterTable_factor1>" + ctx.getText());
    }

    @Override
    public void exitTable_factor1(SQLParser.Table_factor1Context ctx) {
        System.out.println("exitTable_factor1>" + ctx.getText());
    }

    @Override
    public void enterTable_factor2(SQLParser.Table_factor2Context ctx) {
        System.out.println("enterTable_factor2>" + ctx.getText());
    }

    @Override
    public void exitTable_factor2(SQLParser.Table_factor2Context ctx) {
        System.out.println("exitTable_factor2>" + ctx.getText());
    }

    @Override
    public void enterTable_factor3(SQLParser.Table_factor3Context ctx) {
        System.out.println("enterTable_factor3>" + ctx.getText());
    }

    @Override
    public void exitTable_factor3(SQLParser.Table_factor3Context ctx) {
        System.out.println("exitTable_factor3>" + ctx.getText());
    }

    @Override
    public void enterTable_factor4(SQLParser.Table_factor4Context ctx) {
        System.out.println("enterTable_factor4>" + ctx.getText());
    }

    @Override
    public void exitTable_factor4(SQLParser.Table_factor4Context ctx) {
        System.out.println("exitTable_factor4>" + ctx.getText());
    }

    @Override
    public void enterTable_atom(SQLParser.Table_atomContext ctx) {
        System.out.println("enterTable_atom>" + ctx.getText());
    }

    @Override
    public void exitTable_atom(SQLParser.Table_atomContext ctx) {
        System.out.println("exitTable_atom>" + ctx.getText());
    }

    @Override
    public void enterJoin_clause(SQLParser.Join_clauseContext ctx) {
        System.out.println("enterJoin_clause>" + ctx.getText());
    }

    @Override
    public void exitJoin_clause(SQLParser.Join_clauseContext ctx) {
        System.out.println("exitJoin_clause>" + ctx.getText());
    }

    @Override
    public void enterJoin_condition(SQLParser.Join_conditionContext ctx) {
        System.out.println("enterJoin_condition>" + ctx.getText());
    }

    @Override
    public void exitJoin_condition(SQLParser.Join_conditionContext ctx) {
        System.out.println("exitJoin_condition>" + ctx.getText());
    }

    @Override
    public void enterIndex_hint_list(SQLParser.Index_hint_listContext ctx) {
        System.out.println("enterIndex_hint_list>" + ctx.getText());
    }

    @Override
    public void exitIndex_hint_list(SQLParser.Index_hint_listContext ctx) {
        System.out.println("exitIndex_hint_list>" + ctx.getText());
    }

    @Override
    public void enterIndex_options(SQLParser.Index_optionsContext ctx) {
        System.out.println("enterIndex_options>" + ctx.getText());
    }

    @Override
    public void exitIndex_options(SQLParser.Index_optionsContext ctx) {
        System.out.println("exitIndex_options>" + ctx.getText());
    }

    @Override
    public void enterIndex_hint(SQLParser.Index_hintContext ctx) {
        System.out.println("enterIndex_hint>" + ctx.getText());
    }

    @Override
    public void exitIndex_hint(SQLParser.Index_hintContext ctx) {
        System.out.println("exitIndex_hint>" + ctx.getText());
    }

    @Override
    public void enterIndex_list(SQLParser.Index_listContext ctx) {
        System.out.println("enterIndex_list>" + ctx.getText());
    }

    @Override
    public void exitIndex_list(SQLParser.Index_listContext ctx) {
        System.out.println("exitIndex_list>" + ctx.getText());
    }

    @Override
    public void enterPartition_clause(SQLParser.Partition_clauseContext ctx) {
        System.out.println("enterPartition_clause>" + ctx.getText());
    }

    @Override
    public void exitPartition_clause(SQLParser.Partition_clauseContext ctx) {
        System.out.println("exitPartition_clause>" + ctx.getText());
    }


    @Override
    public void enterPartition_names(SQLParser.Partition_namesContext ctx) {
        System.out.println("enterPartition_names>" + ctx.getText());
    }

    @Override
    public void exitPartition_names(SQLParser.Partition_namesContext ctx) {
        System.out.println("exitPartition_names>" + ctx.getText());
    }

    @Override
    public void enterPartition_name(SQLParser.Partition_nameContext ctx) {
        System.out.println("enterPartition_name>" + ctx.getText());
    }

    @Override
    public void exitPartition_name(SQLParser.Partition_nameContext ctx) {
        System.out.println("exitPartition_name>" + ctx.getText());
    }


    @Override
    public void enterSubquery_alias(SQLParser.Subquery_aliasContext ctx) {
        System.out.println("enterSubquery_alias>" + ctx.getText());
    }

    @Override
    public void exitSubquery_alias(SQLParser.Subquery_aliasContext ctx) {
        System.out.println("exitSubquery_alias>" + ctx.getText());
    }

    @Override
    public void enterSubquery(SQLParser.SubqueryContext ctx) {
        System.out.println("enterSubquery>" + ctx.getText());
    }

    @Override
    public void exitSubquery(SQLParser.SubqueryContext ctx) {
        System.out.println("exitSubquery>" + ctx.getText());
    }


}
