#include <iostream>
#include <string>
#include "antlr4-runtime.h"
#include "eRRoRLexer.h"
#include "eRRoRParser.h"
#include "CustomVisitor.h"

using namespace std;

int main(int argc, char *argv[]){

    
    if (argc == 1){
        cout << "Please specify the program file name" << endl;
        return -1;
    }

    ifstream stream;
    string filename = argv[1];
    stream.open(filename);
    if( !stream ){
        cout << "Unable to read the file: " << filename << endl;
        return -1;
    }

    antlr4::ANTLRInputStream input(stream);

    eRRoRLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    eRRoRParser parser(&tokens);

    // Provide the input text in a stream
    //antlr4::ANTLRInputStream input("Error ; ErRor eRRoR ErRor\"error\" error ErRor ERRor ErRor,.");

    //Create a lexer from the input
    //eRRoRLexer lexer(&input);

    //Create a token stream from the lexer
    //antlr4::CommonTokenStream tokens(&lexer);

    //Create a parser from the token stream
    //eRRoRParser parser(&tokens);

    antlr4::tree::ParseTree* tree = parser.program();

    CustomVisitor visitor;
    any result = visitor.visit(tree);

   // cout << any_cast<string> (result) << endl;

    string writeFile = filename.substr(0, filename.length() - 4);

    ofstream out(writeFile + ".cpp");
    out << any_cast<string> (result) << endl;
    out.close();

    //cout << "File should be written \"firstWrite.cpp\"" << endl;

    string command = "g++ " + writeFile + ".cpp -o " + filename.substr(0, filename.length() - 4);
    char* runCom = new char[command.length() + 1];

    strcpy(runCom, command.c_str());

    system(runCom);

    return 0;
}
