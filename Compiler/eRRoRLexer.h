
// Generated from eRRoR.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  eRRoRLexer : public antlr4::Lexer {
public:
  enum {
    WHITESPACE = 1, OUTPUT = 2, INPUT = 3, WHILE = 4, IF = 5, TERMINATE = 6, 
    ENDLOOP = 7, ASSIGNMENT = 8, LESSTHAN = 9, OR = 10, NOT = 11, AND = 12, 
    CONVERTER = 13, UNION = 14, EQUIVALENCE = 15, BEGIN = 16, GREATERTHAN = 17, 
    ONE = 18, SUBTRACTION = 19, ADDITION = 20, DIVISION = 21, MULTIPLICATION = 22, 
    ZERO = 23, VARIABLE = 24
  };

  explicit eRRoRLexer(antlr4::CharStream *input);

  ~eRRoRLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

