
// Generated from eRRoR.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "eRRoRParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by eRRoRParser.
 */
class  eRRoRVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by eRRoRParser.
   */
    virtual std::any visitProgram(eRRoRParser::ProgramContext *context) = 0;

    virtual std::any visitStmt(eRRoRParser::StmtContext *context) = 0;

    virtual std::any visitOutstmt(eRRoRParser::OutstmtContext *context) = 0;

    virtual std::any visitInstmt(eRRoRParser::InstmtContext *context) = 0;

    virtual std::any visitLogic(eRRoRParser::LogicContext *context) = 0;

    virtual std::any visitWhilestmt(eRRoRParser::WhilestmtContext *context) = 0;

    virtual std::any visitIfstmt(eRRoRParser::IfstmtContext *context) = 0;

    virtual std::any visitAssignmentstmt(eRRoRParser::AssignmentstmtContext *context) = 0;

    virtual std::any visitComparestmt(eRRoRParser::ComparestmtContext *context) = 0;

    virtual std::any visitLogicstmt(eRRoRParser::LogicstmtContext *context) = 0;

    virtual std::any visitConvertstmt(eRRoRParser::ConvertstmtContext *context) = 0;

    virtual std::any visitUnionstmt(eRRoRParser::UnionstmtContext *context) = 0;

    virtual std::any visitAdditionstmt(eRRoRParser::AdditionstmtContext *context) = 0;

    virtual std::any visitMultiplicationstmt(eRRoRParser::MultiplicationstmtContext *context) = 0;

    virtual std::any visitValue(eRRoRParser::ValueContext *context) = 0;


};

