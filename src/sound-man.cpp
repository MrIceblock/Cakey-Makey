#include <stdio.h>

#include <AL/al.h>
#include "sound-man.hpp"

SoundMan::SoundMan()
{
    alGenSources(1, &source);
}
