#pragma one
#include "Profile.hpp"

class Data{
    private:
        std::vector<Profile> profile_data;

    public:
        Data(std::vector<Profile> server_data);
        void readfile();
        void add_profile(Profile profile);
        void to_file();
};