#include <iostream>
#include "lexer.h"
#include <vector>

Lexer::Lexer(){
    text = "";
    filename = "errorcode.txt";
    writefile = "errorcodetokens.txt";
    MyReadFile.open(filename);
    readTokens();
};

Lexer::~Lexer(){
    MyReadFile.close();
};

void Lexer::readTokens(){
    std::vector<std::string> filetext;
    // Reads file by splitting the content by space delimiters (spaces get
    // removied)
    while(getline(MyReadFile, text, ' ')){
        // adds each term without a space into a dynamic vector
        // Need to do some checking to split special characters from words
        // Also need to ensure things with quotes are kept together
        filetext.push_back(text);
        // std:;string::substr(pos, len)
        // first argument is starting position for substring from parent string
        // second argument is length of substring
    }
    
    for (int i = 0; i < filetext.max_size(); i++){
        std::cout << filetext[i];
    }
};

void Lexer::writeTokens(){

};
