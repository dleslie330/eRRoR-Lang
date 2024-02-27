
// Generated from eRRoR.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "eRRoRVisitor.h"


/**
 * This class provides an empty implementation of eRRoRVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  eRRoRBaseVisitor : public eRRoRVisitor {
public:

  virtual std::any visitProgram(eRRoRParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStmt(eRRoRParser::StmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOutstmt(eRRoRParser::OutstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInstmt(eRRoRParser::InstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogic(eRRoRParser::LogicContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhilestmt(eRRoRParser::WhilestmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfstmt(eRRoRParser::IfstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignmentstmt(eRRoRParser::AssignmentstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitComparestmt(eRRoRParser::ComparestmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicstmt(eRRoRParser::LogicstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConvertstmt(eRRoRParser::ConvertstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnionstmt(eRRoRParser::UnionstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAdditionstmt(eRRoRParser::AdditionstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultiplicationstmt(eRRoRParser::MultiplicationstmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitValue(eRRoRParser::ValueContext *ctx) override {
    return visitChildren(ctx);
  }


};

