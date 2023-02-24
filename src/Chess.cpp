#include "Chess.h"
#include "../textureManange.h"
#include <iostream>

Chess::Chess(char *name, SDL_Renderer *ren, int x, int y)
{
    Renderer = ren;
    Pieces = textureManange::loadTexture(name, Renderer);
    if (Pieces != NULL) std::cout << 1;
    xpos = x;
    ypos = y;
}

void Chess::update()
{

    srcRect.h = 32;
    srcRect.w = 32;
    srcRect.x = 0;
    srcRect.y = 0;

    desRect.x = xpos;
    desRect.y = ypos;
    desRect.h = srcRect.h * 2;
    desRect.w = srcRect.w * 2;
}


void Chess::render()
{
    SDL_RenderCopy(Renderer, Pieces, &srcRect, &desRect);
}
