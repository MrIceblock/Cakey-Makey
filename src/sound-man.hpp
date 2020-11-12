#ifndef HEADER_SOUNDMAN_HPP
#define HEADER_SOUNDMAN_HPP

#include <AL/al.h>
#include <boost/filesystem.hpp>

class SoundMan{
private:
   ALuint source;
   ALuint wav;
   void   Load();
   void   Play(const std::string CM_File);
public:
    SoundMan();
};

extern SoundMan* sound_man;

#endif
