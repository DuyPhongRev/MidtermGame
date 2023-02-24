#include <iostream>
#include <SDL.h>
#include <Game.h>
#define WIDTH 800
#define HEIGHT 800

using namespace std;

int main(int argc, char* argv[])
{
    Game *game = new Game();
    game->init("CHESS GAME",SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WIDTH, HEIGHT, false);
    while(game->running())
    {
        game->handleEvents();
        game->update();
        game->render();
        SDL_Delay(20);
    }

    game->clean();

    return 0;
}
