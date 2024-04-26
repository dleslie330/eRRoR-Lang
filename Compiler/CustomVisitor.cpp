#include "CustomVisitor.h"
#include <string>
#include <iostream>

using namespace std;

any CustomVisitor::visitProgram(eRRoRParser::ProgramContext *ctx){
    string code = "#include <iostream>\n#include <any> \n\nusing namespace std;\n\nint main(){\n";
    if (ctx->stmt().size() > 0){
        for (int i = 0; i < ctx->stmt().size(); i++){
            any something = visit(ctx->stmt().at(i));
            code = code + any_cast<string> (something);
        }
    }
    return code + "return 0; \n}";
}

any CustomVisitor::visitStmt(eRRoRParser::StmtContext *ctx){
    any placeholder;
    if (ctx->outstmt()){
        placeholder = visit(ctx->outstmt());
    }

    if (ctx->instmt()){
        placeholder = visit(ctx->instmt());
    }

    if (ctx->whilestmt()){
        placeholder = visit(ctx->whilestmt());
    }

    if (ctx->ifstmt()){
        placeholder = visit(ctx->ifstmt());
    }

    if (ctx->assignmentstmt()){
        placeholder = visit(ctx->assignmentstmt());
    }

    if (ctx->comparestmt()){
        placeholder = visit(ctx->comparestmt());
    }

    if (ctx->logicstmt()){
        placeholder = visit(ctx->logicstmt());
    }

    return placeholder;
}

any CustomVisitor::visitOutstmt(eRRoRParser::OutstmtContext *ctx){
    any right;

    if (ctx->value()){
        right = visit(ctx->value());
    }

    if (ctx->convertstmt()){
        right = visit(ctx->convertstmt());
    }

    string sendback = "cout << " + any_cast<string>(right) + ";\n";
    return sendback;
}

any CustomVisitor::visitInstmt(eRRoRParser::InstmtContext *ctx){
    any right = ctx->VARIABLE()->getText().substr(1, ctx->VARIABLE()->getText().length() - 2);
    string sendback = "cin >> " + any_cast<string>(right) + ";\n";
    return sendback;
}

any CustomVisitor::visitLogic(eRRoRParser::LogicContext *ctx){
    any placeholder;

    if (ctx->logicstmt()){
        placeholder = visit(ctx->logicstmt());
    }
    if (ctx->comparestmt()){
        placeholder = visit(ctx->comparestmt());
    }
    if (ctx->AND()){
        placeholder = " && ";
    }
    if (ctx->OR()){
        placeholder = " || ";
    }
    if (ctx->NOT()){
        placeholder = " !";
    }

    string sendback = "" + any_cast<string>(placeholder);
    
    return sendback;
}

any CustomVisitor::visitWhilestmt(eRRoRParser::WhilestmtContext *ctx){
    string sendback = "while(";
    
    if (ctx->logic().size() > 0){
        for (int i = 0; i < ctx->logic().size(); i++){
            sendback = sendback + any_cast<string>(visit(ctx->logic().at(i)));
        }
        sendback = sendback + "){\n";
    }

    if (ctx->stmt().size() > 0){
        for (int i = 0; i < ctx->stmt().size(); i++){
            sendback = sendback + any_cast<string>(visit(ctx->stmt().at(i)));
        }
    }
    sendback = sendback + "}\n";
    return sendback;
}

any CustomVisitor::visitIfstmt(eRRoRParser::IfstmtContext *ctx){
    string sendback = "if(";

    if (ctx->logic().size() > 0){
        for (int i = 0; i < ctx->logic().size(); i++){
            sendback = sendback + any_cast<string>(visit(ctx->logic().at(i)));
        }
        sendback = sendback + "){\n";
    }

    if (ctx->stmt().size() > 0){
        for (int i = 0; i < ctx->stmt().size(); i++){
            sendback = sendback + any_cast<string>(visit(ctx->stmt().at(i)));
        }
    }
    sendback = sendback + "}\n";

    return sendback;
}

any CustomVisitor::visitAssignmentstmt(eRRoRParser::AssignmentstmtContext *ctx){
    auto left = ctx->VARIABLE()->getText().substr(1, ctx->VARIABLE()->getText().length() - 2);
    any right;
    if (ctx->value()){
        right = visit(ctx->value());
    }
    if (ctx->convertstmt()){
        right = visit(ctx->convertstmt());
    }

    if (ctx->unionstmt()){
        right = visit(ctx->unionstmt());
    }

    if (ctx->additionstmt()){
        right = visit(ctx->additionstmt());
    }

    if (ctx->multiplicationstmt()){
        right = visit(ctx->multiplicationstmt());
    }
    string sendback = "int " + left + " = " + any_cast<string>(right) + ";\n";

    return sendback;
}

any CustomVisitor::visitComparestmt(eRRoRParser::ComparestmtContext *ctx){
    string sendback;
    any left;
    any right;

    if (ctx->value().size() == 2){
        left = visit(ctx->value().at(0));
        right = visit(ctx->value().at(1));
    }
    
    sendback = any_cast<string>(left);

    if (ctx->LESSTHAN()){
        sendback = sendback + " < ";
    }
    if (ctx->GREATERTHAN()){
        sendback = sendback + " > ";
    }
    if (ctx->EQUIVALENCE()){
        sendback = sendback + " == ";
    }
    
    sendback = sendback + any_cast<string>(right);

    return sendback;
}

any CustomVisitor::visitLogicstmt(eRRoRParser::LogicstmtContext *ctx){
    string sendback;
    any left;
    any right;

    if (ctx->value().size() == 2){
        left = visit(ctx->value().at(0));
        right = visit(ctx->value().at(1));
    }
    else{
        right = visit(ctx->value().at(0));
    }

    sendback = any_cast<string>(left);

    if (ctx->AND()){
        sendback = sendback + " && ";
    }
    if (ctx->OR()){
        sendback = sendback + " || ";
    }
    if (ctx->NOT()){
        sendback = sendback + "!";
    }

    sendback = sendback + any_cast<string>(right);

    return sendback;
}

any CustomVisitor::visitConvertstmt(eRRoRParser::ConvertstmtContext *ctx){
    string sendback;
    
    // NOTE: This can only convert integers to their respective ASCII characters
    if (ctx->value()){
        sendback = sendback + "char(" + any_cast<string>(visit(ctx->value())) + ")";
    }

    return sendback;
}

any CustomVisitor::visitUnionstmt(eRRoRParser::UnionstmtContext *ctx){
    string sendback;
    any right;

    if (ctx->value().size() == 2){
        sendback = any_cast<string>(visit(ctx->value().at(0))) + " * 10 + " + any_cast<string>(visit(ctx->value().at(1)));
    }

    return sendback;
}

any CustomVisitor::visitAdditionstmt(eRRoRParser::AdditionstmtContext *ctx){
    string sendback;
    any right;
    any left;
    string op;

    if (ctx->value().size() == 2){
       right = visit(ctx->value().at(1));
       left = visit(ctx->value().at(0));
    }
    if (ctx->ADDITION()){
        op = " + ";
    }
    if (ctx->SUBTRACTION()){
        op = " - ";
    }
    sendback = any_cast<string>(left) + op + any_cast<string>(right);

    return sendback;
}

any CustomVisitor::visitMultiplicationstmt(eRRoRParser::MultiplicationstmtContext *ctx){
    string sendback;
    any right;
    any left;
    string op;

    if (ctx->value().size() == 2){
       right = visit(ctx->value().at(1));
       left = visit(ctx->value().at(0));
    }
    if (ctx->MULTIPLICATION()){
        op = " * ";
    }
    if (ctx->DIVISION()){
        op = " / ";
    }
    sendback = any_cast<string>(left) + op + any_cast<string>(right);

    return sendback;
}

any CustomVisitor::visitValue(eRRoRParser::ValueContext *ctx){
    string sendback = "";
    if (ctx->ONE()){
        sendback = sendback + "1";
    }

    if (ctx->ZERO()){
        sendback = sendback + "0";
    }

    if (ctx->VARIABLE()){
        sendback = sendback + ctx->VARIABLE()->getText().substr(1, ctx->VARIABLE()->getText().length() - 2);
    }

    return sendback;
}
