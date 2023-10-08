#pragma once
#include <iostream>
#include <vector>
#include <string>

enum category{
    LOOKS, TALENT, PERSONALITY
};

struct qualities{
    std::string look;
    std::string talent;
    std::string personality;
};

struct compliment{
    std::string comp;
    category cat;
};