#include <AL/al.h>
#include <AL/alut.h>

#include "sound-man.hpp"

void SoundMan::Load()
{
    alGenBuffers(1, &wav);
}

//void SoundMan::PlaySound(ALuint wav)
//{
    //alSourcei(source, AL_BUFFER, wav);
    //alSourcePlay(source);
//}

SoundMan::SoundMan()
{
    alGenSources(1, &source);
}
