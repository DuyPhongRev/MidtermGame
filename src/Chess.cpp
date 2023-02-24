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

    WhitePawn = TextureManager::LoadTexture("asset/pawn.png", Renderer, desRect);
    desRect.x = xpos + 100;
    desRect.y = ypos + 100;
    BlackPawn = TextureManager::LoadTexture("asset/pawn1.png", Renderer, desRect);
    /*Pieces = TextureManager::LoadTexture(name, Renderer, desRect);
    Pieces = TextureManager::LoadTexture(name, Renderer, desRect);
    Pieces = TextureManager::LoadTexture(name, Renderer, desRect);
    Pieces = TextureManager::LoadTexture(name, Renderer, desRect);

    Pieces = TextureManager::LoadTexture(name, Renderer, desRect);
    Pieces = TextureManager::LoadTexture(name, Renderer, desRect);
    Pieces = TextureManager::LoadTexture(name, Renderer, desRect);
    Pieces = TextureManager::LoadTexture(name, Renderer, desRect);
    Pieces = TextureManager::LoadTexture(name, Renderer, desRect);
    Pieces = TextureManager::LoadTexture(name, Renderer, desRect);*/
}

void Chess::update()
{
    srcRect.h = 42;
    srcRect.w = 42;
    srcRect.x = 0;
    srcRect.y = 0;

    desRect.x = xpos;
    desRect.y = ypos;
    desRect.h = srcRect.h ;
    desRect.w = srcRect.w * 2;
}


void Chess::render()
{
    SDL_RenderCopy(Renderer, Pieces, &srcRect, &desRect);
}
