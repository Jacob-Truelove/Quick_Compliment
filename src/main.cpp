#include <iostream>
#include "../headers/Data.hpp"

int main(){
    std::vector<Profile> profiles;
    Profile new_p("Hello", "Hello");//takes in username and password input from firebase
    Profile new_p2("Hello", "Hello");
    Data data(profiles);
    if(data.search(new_p) == true)
        exit(1);
    data.to_file();

    exit(0);
    return 0;
}