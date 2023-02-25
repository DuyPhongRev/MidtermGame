#ifndef CHESS_H
#define CHESS_H
#include "../TextureManager.h"

class Chess
{
    public:
        Chess(char *name, SDL_Renderer *ren, int x, int y);
        void update();
        void render();

    private:
        SDL_Renderer *Renderer;
        int xpos, ypos;
        SDL_Rect srcRect, desRect;
        SDL_Texture *BG = NULL;
};
#endif // CHESS_H
