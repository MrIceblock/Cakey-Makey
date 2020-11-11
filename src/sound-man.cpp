#include <AL/al.h>
#include <AL/alut.h>

#include "sound-man.hpp"

// void SoundMan::Play(const char CM_File)
//{
    // alutCreateBufferFromFile(&CM_File);
//}

SoundMan::SoundMan()
{
    alGenSources(1, &source);
}
