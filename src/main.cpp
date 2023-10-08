#include <iostream>
#include "../headers/Data.hpp"

int main(){
    std::vector<Profile> profiles;
    Profile new_p("Hello", "Hello");//takes in username and password input from firebase
    Data data(profiles);
    if(data.search(new_p) == true)
        exit(1);
    data.add_profile(new_p);
    data.to_file();

    exit(0);
    return 0;
}