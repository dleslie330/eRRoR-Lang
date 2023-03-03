#pragma once
#ifndef LEXER_H
#define LEXER_H

#include <fstream>
#include <string>

class Lexer{
    public:
        Lexer();
        void readTokens();
        void writeTokens();

    private:
        std::string text;
        std::string filename;
        std::string writefile;
        ifstream MyReadFile;
};

#endif
