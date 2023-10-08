#pragma once
#include "Factors.hpp"

class Profile{
    private:
        std::string username, login_word;
        qualities person;
        std::vector<compliment> favorites;

    public:
        Profile(std::string name, std::string password);
        bool set_q(std::string looks, std::string talent, std::string personality);
        void add_favorite(compliment favorite);
        std::string to_string();
        void upload();
};