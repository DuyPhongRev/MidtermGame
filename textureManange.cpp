#include "textureManange.h"

SDL_Texture* textureManange::loadTexture(char *name, SDL_Renderer *renderer)
{
    SDL_Surface *surface = IMG_Load(name);
    SDL_Texture *texture = SDL_CreateTextureFromSurface(renderer, surface);
    SDL_FreeSurface(surface);
    return texture;
}

