lexer grammar PositionAdjustingLexer;


@members {
protected:
  class PositionAdjustingLexerATNSimulator : public antlr4::atn::LexerATNSimulator {
  public:
    PositionAdjustingLexerATNSimulator(antlr4::Lexer *recog, const antlr4::atn::ATN &atn, std::vector<antlr4::dfa::DFA> &decisionToDFA,
                                       antlr4::atn::PredictionContextCache &sharedContextCache)
      : antlr4::atn::LexerATNSimulator(recog, atn, decisionToDFA, sharedContextCache) {
    }

    void resetAcceptPosition(antlr4::CharStream *input, int index, int line, int charPositionInLine) {
      input->seek(index);
      _line = line;
      _charPositionInLine = charPositionInLine;
      consume(input);
    }

  };

public:
  virtual std::unique_ptr<antlr4::Token> nextToken() override {
    if (dynamic_cast<PositionAdjustingLexerATNSimulator *>(_interpreter) == nullptr) {
      delete _interpreter;
      _interpreter = new PositionAdjustingLexerATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
    }

    return antlr4::Lexer::nextToken();
  }

  virtual antlr4::Token* emit() override {
    switch (type) {
      case TOKENS:
        handleAcceptPositionForKeyword("tokens");
        break;

      case LABEL:
        handleAcceptPositionForIdentifier();
        break;

      default:
        break;
    }
    return antlr4::Lexer::emit();
  }

private:
  bool handleAcceptPositionForIdentifier() {
    std::string tokenText = getText();
    int identifierLength = 0;
    while (identifierLength < tokenText.length() && isIdentifierChar(tokenText[identifierLength])) {
      identifierLength++;
    }

    if (getInputStream()->index() > tokenStartCharIndex + identifierLength) {
      int offset = identifierLength - 1;
      getInterpreter<PositionAdjustingLexerATNSimulator>()->resetAcceptPosition(getInputStream(),
        tokenStartCharIndex + offset, tokenStartLine, tokenStartCharPositionInLine + offset);
      return true;
    }

    return false;
  }

  bool handleAcceptPositionForKeyword(const std::string &keyword) {
    if (getInputStream()->index() > tokenStartCharIndex + keyword.length()) {
      long offset = keyword.size() - 1;
      getInterpreter<PositionAdjustingLexerATNSimulator>()->resetAcceptPosition(getInputStream(),
        tokenStartCharIndex + offset, tokenStartLine, tokenStartCharPositionInLine + offset);
      return true;
    }

    return false;
  }

  static bool isIdentifierChar(char c) {
    return std::isalnum(c) || c == '_';
  }

public:
}

ASSIGN : '=' ;
PLUS_ASSIGN : '+=' ;
LCURLY:    '{';

// 'tokens' followed by '{'
TOKENS : 'tokens' IGNORED '{';

// IDENTIFIER followed by '+=' or '='
LABEL
   :   IDENTIFIER IGNORED '+'? '='
   ;

IDENTIFIER
   :   [a-zA-Z_] [a-zA-Z0-9_]*
   ;

fragment
IGNORED
   :   [ \t\r\n]*
   ;

NEWLINE
   :   [\r\n]+ -> skip
   ;

WS
   :   [ \t]+ -> skip
   ;
