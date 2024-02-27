
// Generated from eRRoR.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  eRRoRParser : public antlr4::Parser {
public:
  enum {
    WHITESPACE = 1, OUTPUT = 2, INPUT = 3, WHILE = 4, IF = 5, TERMINATE = 6, 
    ENDLOOP = 7, ASSIGNMENT = 8, LESSTHAN = 9, OR = 10, NOT = 11, AND = 12, 
    CONVERTER = 13, UNION = 14, EQUIVALENCE = 15, BEGIN = 16, GREATERTHAN = 17, 
    ONE = 18, SUBTRACTION = 19, ADDITION = 20, DIVISION = 21, MULTIPLICATION = 22, 
    ZERO = 23, VARIABLE = 24
  };

  enum {
    RuleProgram = 0, RuleStmt = 1, RuleOutstmt = 2, RuleInstmt = 3, RuleLogic = 4, 
    RuleWhilestmt = 5, RuleIfstmt = 6, RuleAssignmentstmt = 7, RuleComparestmt = 8, 
    RuleLogicstmt = 9, RuleConvertstmt = 10, RuleUnionstmt = 11, RuleAdditionstmt = 12, 
    RuleMultiplicationstmt = 13, RuleValue = 14
  };

  explicit eRRoRParser(antlr4::TokenStream *input);

  eRRoRParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~eRRoRParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgramContext;
  class StmtContext;
  class OutstmtContext;
  class InstmtContext;
  class LogicContext;
  class WhilestmtContext;
  class IfstmtContext;
  class AssignmentstmtContext;
  class ComparestmtContext;
  class LogicstmtContext;
  class ConvertstmtContext;
  class UnionstmtContext;
  class AdditionstmtContext;
  class MultiplicationstmtContext;
  class ValueContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEGIN();
    antlr4::tree::TerminalNode *TERMINATE();
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  StmtContext : public antlr4::ParserRuleContext {
  public:
    StmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OutstmtContext *outstmt();
    InstmtContext *instmt();
    WhilestmtContext *whilestmt();
    IfstmtContext *ifstmt();
    AssignmentstmtContext *assignmentstmt();
    ComparestmtContext *comparestmt();
    LogicstmtContext *logicstmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtContext* stmt();

  class  OutstmtContext : public antlr4::ParserRuleContext {
  public:
    OutstmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OUTPUT();
    ValueContext *value();
    ConvertstmtContext *convertstmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OutstmtContext* outstmt();

  class  InstmtContext : public antlr4::ParserRuleContext {
  public:
    InstmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VARIABLE();
    antlr4::tree::TerminalNode *INPUT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InstmtContext* instmt();

  class  LogicContext : public antlr4::ParserRuleContext {
  public:
    LogicContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LogicstmtContext *logicstmt();
    ComparestmtContext *comparestmt();
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicContext* logic();

  class  WhilestmtContext : public antlr4::ParserRuleContext {
  public:
    WhilestmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *ENDLOOP();
    std::vector<LogicContext *> logic();
    LogicContext* logic(size_t i);
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhilestmtContext* whilestmt();

  class  IfstmtContext : public antlr4::ParserRuleContext {
  public:
    IfstmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *ENDLOOP();
    std::vector<LogicContext *> logic();
    LogicContext* logic(size_t i);
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfstmtContext* ifstmt();

  class  AssignmentstmtContext : public antlr4::ParserRuleContext {
  public:
    AssignmentstmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *VARIABLE();
    antlr4::tree::TerminalNode *ASSIGNMENT();
    ValueContext *value();
    UnionstmtContext *unionstmt();
    AdditionstmtContext *additionstmt();
    MultiplicationstmtContext *multiplicationstmt();
    ConvertstmtContext *convertstmt();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentstmtContext* assignmentstmt();

  class  ComparestmtContext : public antlr4::ParserRuleContext {
  public:
    ComparestmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ValueContext *> value();
    ValueContext* value(size_t i);
    antlr4::tree::TerminalNode *LESSTHAN();
    antlr4::tree::TerminalNode *GREATERTHAN();
    antlr4::tree::TerminalNode *EQUIVALENCE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ComparestmtContext* comparestmt();

  class  LogicstmtContext : public antlr4::ParserRuleContext {
  public:
    LogicstmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ValueContext *> value();
    ValueContext* value(size_t i);
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *NOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LogicstmtContext* logicstmt();

  class  ConvertstmtContext : public antlr4::ParserRuleContext {
  public:
    ConvertstmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONVERTER();
    ValueContext *value();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConvertstmtContext* convertstmt();

  class  UnionstmtContext : public antlr4::ParserRuleContext {
  public:
    UnionstmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ValueContext *> value();
    ValueContext* value(size_t i);
    antlr4::tree::TerminalNode *UNION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnionstmtContext* unionstmt();

  class  AdditionstmtContext : public antlr4::ParserRuleContext {
  public:
    AdditionstmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ValueContext *> value();
    ValueContext* value(size_t i);
    antlr4::tree::TerminalNode *ADDITION();
    antlr4::tree::TerminalNode *SUBTRACTION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AdditionstmtContext* additionstmt();

  class  MultiplicationstmtContext : public antlr4::ParserRuleContext {
  public:
    MultiplicationstmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ValueContext *> value();
    ValueContext* value(size_t i);
    antlr4::tree::TerminalNode *MULTIPLICATION();
    antlr4::tree::TerminalNode *DIVISION();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MultiplicationstmtContext* multiplicationstmt();

  class  ValueContext : public antlr4::ParserRuleContext {
  public:
    ValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ONE();
    antlr4::tree::TerminalNode *ZERO();
    antlr4::tree::TerminalNode *VARIABLE();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;

    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ValueContext* value();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

