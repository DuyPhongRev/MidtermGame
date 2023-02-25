#include "Chess.h"
#include "../TextureManager.h"
#include <iostream>

Chess::Chess(char *name, SDL_Renderer *ren, int x, int y)
{
    xpos = x;
    ypos = y;
    Renderer = ren;

    desRect.x = xpos;
    desRect.y = ypos;
    desRect.h = 80;
    desRect.w = 80;
    BG = TextureManager::LoadTexture(name, Renderer, desRect);
}

void Chess::update()
{
    srcRect.h = 1024;
    srcRect.w = 1024;
    srcRect.x = 0;
    srcRect.y = 0;

    desRect.x = xpos;
    desRect.y = ypos;
    desRect.h = srcRect.h ;
    desRect.w = srcRect.w ;
}


void Chess::render()
{
    SDL_RenderCopy(Renderer, BG, &srcRect, &desRect);
}
