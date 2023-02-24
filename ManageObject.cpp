#include "ManageObject.h"

SDL_Texture* loadTexture(char *name, SDL_Renderer *ren)
{
    SDL_Surface *surface = IMG_Load(name);
    SDL_Texture *texture = SDL_CreateTextureFromSurface(ren, surface);
    SDL_FreeSurface(surface);
    return texture;
}
