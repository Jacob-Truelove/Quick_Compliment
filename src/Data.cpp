#include "../headers/Data.hpp"
#include <fstream>

Data::Data(std::vector<Profile> server_data){
    profile_data = server_data;
}

void Data::add_profile(Profile profile){
    profile_data.push_back(profile);
}

void Data::to_file(){
    std::ofstream fp;
    fp.open("profile_data.txt");
    Profile tempp("", "");
    std::string str;
    for(int i = 0; i < profile_data.size(); i++){
        tempp = profile_data.at(i);
        std::cout << tempp.to_string();
        fp << tempp.to_string();
    }
    fp.close();
}
void Data::readfile(){

}
bool Data::search(Profile profile){
    for(Profile p : profile_data){
        if(p.to_string() == profile.to_string())
            return true;
    }
    return false;
}