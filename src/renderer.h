#pragma once

#ifdef DEBUG
#define LOG(msg) printf("%s\n", msg)
#else
#define LOG(msg)
#endif


#include <stdio.h>
#include <SDL2/SDL.h>
#include <stdbool.h>

int initSDL(void){
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        char msg[sizeof("SDL initialization failed: ") + sizeof(SDL_GetError())];
        sprintf(msg, "SDL initialization failed: %s", SDL_GetError());
        LOG(msg);
        return false;
    }
    LOG("SDL initialized successfully!");

    return true;
}
