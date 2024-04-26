#ifndef CUSTOMVISITOR_H_
#define CUSTOMVISITOR_H_

#include "eRRoRVisitor.h"
#include "eRRoRParser.h"

class CustomVisitor : public eRRoRVisitor {
    public:
        std::any visitProgram(eRRoRParser::ProgramContext *context);

        std::any visitStmt(eRRoRParser::StmtContext *context);

        std::any visitOutstmt(eRRoRParser::OutstmtContext *context);

        std::any visitInstmt(eRRoRParser::InstmtContext *context);

        std::any visitLogic(eRRoRParser::LogicContext *context);

        std::any visitWhilestmt(eRRoRParser::WhilestmtContext *context);

        std::any visitIfstmt(eRRoRParser::IfstmtContext *context);

        std::any visitAssignmentstmt(eRRoRParser::AssignmentstmtContext *context);

        std::any visitComparestmt(eRRoRParser::ComparestmtContext *context);

        std::any visitLogicstmt(eRRoRParser::LogicstmtContext *context);

        std::any visitConvertstmt(eRRoRParser::ConvertstmtContext *context);

        std::any visitUnionstmt(eRRoRParser::UnionstmtContext *context);

        std::any visitAdditionstmt(eRRoRParser::AdditionstmtContext *context);

        std::any visitMultiplicationstmt(eRRoRParser::MultiplicationstmtContext *context);

        std::any visitValue(eRRoRParser::ValueContext *context);

    private:
};

#endif /* CUSTOMVISITOR_H_ */
