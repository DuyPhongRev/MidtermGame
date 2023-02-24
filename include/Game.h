#ifndef GAME_H
#define GAME_H
#include<SDL.h>
#include<SDL_image.h>


class Game
{
    public:
        Game();
        virtual ~Game();
        void init(const char* title, int Xpos, int Ypos, int width, int height, bool fullscreen);
        void handleEvents();
        void update();
        void render();
        void clean();
        bool running();
    private:
        bool isRunning;
        SDL_Window *window = NULL;
        SDL_Renderer *renderer = NULL;
};

#endif // GAME_H
