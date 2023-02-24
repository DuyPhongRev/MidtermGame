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
        SDL_Texture *WhitePawn = NULL;
        SDL_Texture *WhiteKnight = NULL;
        SDL_Texture *WhiteBishop = NULL;
        SDL_Texture *WhiteRook = NULL;
        SDL_Texture *WhiteQueen = NULL;
        SDL_Texture *WhiteKing = NULL;

        SDL_Texture *BlackPawn = NULL;
        SDL_Texture *BlackKnight = NULL;
        SDL_Texture *BlackBishop = NULL;
        SDL_Texture *BlackRook = NULL;
        SDL_Texture *BlackQueen = NULL;
        SDL_Texture *BlackKing = NULL;

};
#endif // CHESS_H
