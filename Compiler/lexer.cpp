#include <iostream>
#include "lexer.h"

Lexer::Lexer(){
    text = "";
    filename = "testfile.txt";
    writefile = "testfiletokens.txt";
    MyReadFile.open(filename);
    readTokens();
};

Lexer::~Lexer(){
    MyReadFile.close();
};

void Lexer::readTokens(){
    while(getline(MyReadFile, text)){
        std::cout << text;
    }
};

void Lexer::writeTokens(){

};
