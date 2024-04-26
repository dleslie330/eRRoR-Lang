
// Generated from eRRoR.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "eRRoRListener.h"


/**
 * This class provides an empty implementation of eRRoRListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  eRRoRBaseListener : public eRRoRListener {
public:

  virtual void enterProgram(eRRoRParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(eRRoRParser::ProgramContext * /*ctx*/) override { }

  virtual void enterStmt(eRRoRParser::StmtContext * /*ctx*/) override { }
  virtual void exitStmt(eRRoRParser::StmtContext * /*ctx*/) override { }

  virtual void enterOutstmt(eRRoRParser::OutstmtContext * /*ctx*/) override { }
  virtual void exitOutstmt(eRRoRParser::OutstmtContext * /*ctx*/) override { }

  virtual void enterInstmt(eRRoRParser::InstmtContext * /*ctx*/) override { }
  virtual void exitInstmt(eRRoRParser::InstmtContext * /*ctx*/) override { }

  virtual void enterLogic(eRRoRParser::LogicContext * /*ctx*/) override { }
  virtual void exitLogic(eRRoRParser::LogicContext * /*ctx*/) override { }

  virtual void enterWhilestmt(eRRoRParser::WhilestmtContext * /*ctx*/) override { }
  virtual void exitWhilestmt(eRRoRParser::WhilestmtContext * /*ctx*/) override { }

  virtual void enterIfstmt(eRRoRParser::IfstmtContext * /*ctx*/) override { }
  virtual void exitIfstmt(eRRoRParser::IfstmtContext * /*ctx*/) override { }

  virtual void enterAssignmentstmt(eRRoRParser::AssignmentstmtContext * /*ctx*/) override { }
  virtual void exitAssignmentstmt(eRRoRParser::AssignmentstmtContext * /*ctx*/) override { }

  virtual void enterComparestmt(eRRoRParser::ComparestmtContext * /*ctx*/) override { }
  virtual void exitComparestmt(eRRoRParser::ComparestmtContext * /*ctx*/) override { }

  virtual void enterLogicstmt(eRRoRParser::LogicstmtContext * /*ctx*/) override { }
  virtual void exitLogicstmt(eRRoRParser::LogicstmtContext * /*ctx*/) override { }

  virtual void enterConvertstmt(eRRoRParser::ConvertstmtContext * /*ctx*/) override { }
  virtual void exitConvertstmt(eRRoRParser::ConvertstmtContext * /*ctx*/) override { }

  virtual void enterUnionstmt(eRRoRParser::UnionstmtContext * /*ctx*/) override { }
  virtual void exitUnionstmt(eRRoRParser::UnionstmtContext * /*ctx*/) override { }

  virtual void enterAdditionstmt(eRRoRParser::AdditionstmtContext * /*ctx*/) override { }
  virtual void exitAdditionstmt(eRRoRParser::AdditionstmtContext * /*ctx*/) override { }

  virtual void enterMultiplicationstmt(eRRoRParser::MultiplicationstmtContext * /*ctx*/) override { }
  virtual void exitMultiplicationstmt(eRRoRParser::MultiplicationstmtContext * /*ctx*/) override { }

  virtual void enterValue(eRRoRParser::ValueContext * /*ctx*/) override { }
  virtual void exitValue(eRRoRParser::ValueContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

