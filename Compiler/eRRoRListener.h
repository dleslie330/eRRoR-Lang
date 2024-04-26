
// Generated from eRRoR.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "eRRoRParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by eRRoRParser.
 */
class  eRRoRListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(eRRoRParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(eRRoRParser::ProgramContext *ctx) = 0;

  virtual void enterStmt(eRRoRParser::StmtContext *ctx) = 0;
  virtual void exitStmt(eRRoRParser::StmtContext *ctx) = 0;

  virtual void enterOutstmt(eRRoRParser::OutstmtContext *ctx) = 0;
  virtual void exitOutstmt(eRRoRParser::OutstmtContext *ctx) = 0;

  virtual void enterInstmt(eRRoRParser::InstmtContext *ctx) = 0;
  virtual void exitInstmt(eRRoRParser::InstmtContext *ctx) = 0;

  virtual void enterLogic(eRRoRParser::LogicContext *ctx) = 0;
  virtual void exitLogic(eRRoRParser::LogicContext *ctx) = 0;

  virtual void enterWhilestmt(eRRoRParser::WhilestmtContext *ctx) = 0;
  virtual void exitWhilestmt(eRRoRParser::WhilestmtContext *ctx) = 0;

  virtual void enterIfstmt(eRRoRParser::IfstmtContext *ctx) = 0;
  virtual void exitIfstmt(eRRoRParser::IfstmtContext *ctx) = 0;

  virtual void enterAssignmentstmt(eRRoRParser::AssignmentstmtContext *ctx) = 0;
  virtual void exitAssignmentstmt(eRRoRParser::AssignmentstmtContext *ctx) = 0;

  virtual void enterComparestmt(eRRoRParser::ComparestmtContext *ctx) = 0;
  virtual void exitComparestmt(eRRoRParser::ComparestmtContext *ctx) = 0;

  virtual void enterLogicstmt(eRRoRParser::LogicstmtContext *ctx) = 0;
  virtual void exitLogicstmt(eRRoRParser::LogicstmtContext *ctx) = 0;

  virtual void enterConvertstmt(eRRoRParser::ConvertstmtContext *ctx) = 0;
  virtual void exitConvertstmt(eRRoRParser::ConvertstmtContext *ctx) = 0;

  virtual void enterUnionstmt(eRRoRParser::UnionstmtContext *ctx) = 0;
  virtual void exitUnionstmt(eRRoRParser::UnionstmtContext *ctx) = 0;

  virtual void enterAdditionstmt(eRRoRParser::AdditionstmtContext *ctx) = 0;
  virtual void exitAdditionstmt(eRRoRParser::AdditionstmtContext *ctx) = 0;

  virtual void enterMultiplicationstmt(eRRoRParser::MultiplicationstmtContext *ctx) = 0;
  virtual void exitMultiplicationstmt(eRRoRParser::MultiplicationstmtContext *ctx) = 0;

  virtual void enterValue(eRRoRParser::ValueContext *ctx) = 0;
  virtual void exitValue(eRRoRParser::ValueContext *ctx) = 0;


};

