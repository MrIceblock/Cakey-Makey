#ifndef HEADER_SOUNDMAN_HPP
#define HEADER_SOUNDMAN_HPP

#include <AL/al.h>
#include <boost/filesystem.hpp>

class SoundMan{
private:
   ALuint source;
   //void   Play(path my_path,( CM_Sound ));
public:
    SoundMan();
};

extern SoundMan* sound_man;

#endif
