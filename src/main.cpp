#include "sound-man.hpp"
#include <boost/filesystem.hpp>
#include <iostream>


int main(){
    SoundMan::Play(boost::filesystem::path::path( "clock.ogg" ));
    return 0;
};
