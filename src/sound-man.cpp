#include <AL/al.h>
#include <AL/alut.h>

#include "sound-man.hpp"

void SoundMan::Load()
{
    alGenBuffers(1, &wav);
}

void SoundMan::Play(const std::string CM_File)
{
    alSourcei(source, AL_BUFFER, wav);
}

SoundMan::SoundMan()
{
    alGenSources(1, &source);
}
