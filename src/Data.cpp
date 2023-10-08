#include "../headers/Data.hpp"

char* str_to_char(std::string s){
    char * str = (char*)malloc(s.length() * sizeof(char));
    for(int i = 0; i <s.length(); i++){
        str[i] = s.at(i);
    }
    return str;
}
Data::Data(std::vector<Profile> server_data){
    profile_data = server_data;
}

void Data::add_profile(Profile profile){
    profile_data.push_back(profile);
}

void Data::to_file(){
    FILE * fp = fopen("profile_data.txt", "w");
    Profile tempp(NULL, NULL);
    std::string str;
    for(int i = 0; i < profile_data.size(); i++){
        tempp = profile_data.at(i);
        str = tempp.to_string();
        char * line = str_to_char(str);
        fwrite(line, 1, sizeof(tempp.to_string()), fp);
    }
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