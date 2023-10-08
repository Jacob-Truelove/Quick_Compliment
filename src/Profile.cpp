#include "../headers/Profile.hpp"

Profile::Profile(std::string looks, std::string talent, std::string personality){
    person.look = looks;
    person.personality = personality;
    person.talent = talent;
}

bool Profile::login(std::string name, std::string password){
    if(name == username && password == login_word)
        return true;
    return false;
}

void Profile::add_favorite(compliment favorite){
    if(favorites.size() < 5)
        favorites.push_back(favorite);
    else
        favorites.at(0) = favorite;
}

std::string Profile::to_string(){
    return username + '*' + login_word + '*' + person.look + '*' + person.personality + '*' + person.talent + '\n';
}