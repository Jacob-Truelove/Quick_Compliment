#include "../headers/Profile.hpp"

Profile::Profile(std::string name, std::string password){
    username = name;
    login_word = password;
}

bool Profile::set_q(std::string looks, std::string talent, std::string personality){
    
    return false;
}

void Profile::add_favorite(compliment favorite){
    if(favorites.size() < 3 && favorite.cat != favorites.at(0).cat && favorite.cat != favorites.at(1).cat && favorite.cat != favorites.at(2).cat)
        favorites.push_back(favorite);
    else if(favorite.cat == favorites.at(0).cat)
        favorites.at(0) = favorite;
    else if(favorite.cat == favorites.at(1).cat)
        favorites.at(1) = favorite;
    else
        favorites.at(2) = favorite;
}

std::string Profile::to_string(){
    return username + ' ' + login_word + '\n';
}

void Profile::upload(){
    
}