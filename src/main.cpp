#include <iostream>
#include "../headers/Data.hpp"

int main(){
    std::vector<Profile> profiles;
    Profile new_p("", "");//takes in username and password input from firebase
    Data data(profiles);
    if(data.search(new_p) == true)
        exit(1);
    exit(0);
    return 0;
}