#pragma once
#include "Factors.hpp"

class Profile{
    private:
        std::string username, login_word;
        qualities person;
        std::vector<compliment> favorites;

    public:
        Profile(std::string looks, std::string talent, std::string personality);
        bool login(std::string name, std::string password);
        void add_favorite(compliment favorite);
        std::string to_string();
};