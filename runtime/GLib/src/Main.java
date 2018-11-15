import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.tree.*;

public class Main {

    /**
    public static void main( String[] args) throws Exception
    {
        PHPLexer lexer = new PHPLexer( new ANTLRFileStream(args[0]));
        CommonTokenStream tokens = new CommonTokenStream( lexer );
        PHPParser parser = new PHPParser( tokens );
        ParseTree tree = parser.block();

        // Walk it and attach our listener
        ParseTreeWalker walker = new ParseTreeWalker();
        PHPListener listener = new PHPListener();
        walker.walk(listener, tree);

    }
    */

    /*
    public static void main( String[] args) throws Exception
    {
        SQLLexer lexer = new SQLLexer( new ANTLRFileStream(args[0]));
        CommonTokenStream tokens = new CommonTokenStream( lexer );
        SQLParser parser = new SQLParser( tokens );
        ParseTree tree = parser.stat();
        //ParseTreeWalker walker = new ParseTreeWalker();
        //walker.walk( new SQLWalker(), tree );
    }
    */

    public static void main( String[] args) throws Exception
    {
        // Get our lexer
        SQLLexer lexer = new SQLLexer( new ANTLRFileStream(args[0]));

        // Get a list of matched tokens
        CommonTokenStream tokens = new CommonTokenStream( lexer );

        // Pass the tokens to the parser
        SQLParser parser = new SQLParser( tokens );

        // Specify our entry point
        SQLParser.StatContext statContext = parser.stat();

        // Walk it and attach our listener
        ParseTreeWalker walker = new ParseTreeWalker();
        SQLListener listener = new SQLListener();
        walker.walk(listener, statContext);

        db.adapter.Abstract db = Db.Factory("mysql", null);
        //$select = $db->select();
        ///listener.setDbAdapter(db);
        ///listener.getStatements();

        // tests
    }
    /** walker sample
    */

    /*
    public static void main( String[] args) throws Exception
    {
        // Get our lexer
        SQLLexer lexer = new SQLLexer( new ANTLRFileStream(args[0]));

        // Get a list of matched tokens
        CommonTokenStream tokens = new CommonTokenStream( lexer );

        // Pass the tokens to the parser
        SQLParser parser = new SQLParser( tokens );

        // Specify our entry point
        SQLParser.StatContext statContext = parser.stat();
        //SQLStatement statement = statContext.toModel();

        // Walk it and attach our listener
        ParseTreeWalker walker = new ParseTreeWalker();
        SQLListener listener = new SQLListener();
        walker.walk(listener, statContext);

        System.out.println(listener.toString());

//        Db db = org.zend.Db.Factory( ...options... );
//        Select select = new org.zend.Db.Select(db);

        // tests
    }
    */

}
