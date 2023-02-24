#ifndef CHESS_H
#define CHESS_H
#include "../ManageObject.h"

class Chess
{
    public:
        Chess(char *name, SDL_Renderer *ren, int x, int y);
        void update();
        void render();

    private:
        SDL_Renderer *Renderer;
        int xpos, ypos;
        SDL_Texture *Pieces = NULL;
        SDL_Rect srcRect, desRect;
};

#endif // CHESS_H
