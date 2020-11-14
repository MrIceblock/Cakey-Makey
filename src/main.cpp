#include "sound-man.hpp"
#include <boost/filesystem.hpp>
#include <iostream>
#include <unistd.h>

#include <SDL2/SDL.h>

int main()
{
//    SoundMan::PlaySound("clock.ogg");
    SDL_Window* window = SDL_CreateWindow("Test", 0, 0, 640, 480, SDL_WINDOW_OPENGL);
    SDL_ShowWindow(window);
    sleep(10);
    SDL_DestroyWindow(window);
};
