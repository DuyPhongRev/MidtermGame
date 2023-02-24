#ifndef MANAGEOBJECT_H
#define MANAGEOBJECT_H
#include <SDL.h>
#include <SDL_image.h>


class ManageObject
{
    public:
        SDL_Texture* loadTexture(int *name, SDL_Renderer *ren);
    private:

};

#endif // MANAGEOBJECT_H
