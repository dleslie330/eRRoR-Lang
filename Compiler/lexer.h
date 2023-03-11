#pragma once
#ifndef LEXER_H
#define LEXER_H

#include <fstream>
#include <string>

class Lexer{
    public:
        Lexer();
        ~Lexer();
        void readTokens();
        void writeTokens();
        std::string text;
        std::string filename;
        std::string writefile;
        std::fstream MyReadFile;
};

#endif
