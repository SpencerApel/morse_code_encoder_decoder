#ifndef MORSE_H
#define MORSE_H

#include <iostream>
#include <string>
#include <fstream>

class Morse
{
private:

public:
    Morse();
    ~Morse();
    void build_tree();
    std::string encode();
    std::string decode();
};

#endif