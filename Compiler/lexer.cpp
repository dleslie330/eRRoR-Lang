#include <iostream>
#include "lexer.h"

Lexer::Lexer(){
    this.text = NULL;
    this.filename = "testfile.txt";
    this.writefile = "testfiletokens.txt";
    this.MyReadFile.open(filename);
    this.readTokens();
};

void Lexer::readTokens(){
    while(getline(this.MyReadFile, text)){
        cout << text;
    }
};

void Lexer::writeTokens(){

};
