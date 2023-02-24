#ifndef GAME_H
#define GAME_H
#include<SDL.h>
#include<SDL_image.h>


class Game
{
    public:
        Game();
        virtual ~Game();
        void init(char *title, int x, int y, int w, int h);
        void handleEvent();
        void update();
        void render();
        void clean();
        bool isRunning();
    private:
        bool run;
        SDL_Window *window = NULL;
        SDL_Renderer *renderer = NULL;
};

#endif // GAME_H
