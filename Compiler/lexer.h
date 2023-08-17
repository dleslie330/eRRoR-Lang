#pragma once
#ifndef LEXER_H
#define LEXER_H

#include <fstream>
#include <string>
#include <set>

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
        std::set<std::string> validtokens = {"!", "?", ":", ";", ".", ",", "error", "eRrror", "erRor", "erroR", "eRRor", "erRoR", "eRroR", "eRRoR", "Error", "ERror", "ErRor", "ErroR", "ERRor", "ErRoR", "ERroR", "ERRoR", "\""}

};

#endif
