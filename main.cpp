#include <iostream>
#include <SDL.h>
#include <Game.h>
#define WIDTH 800
#define HEIGHT 800

using namespace std;

int main(int argc, char* arg[])
{
    Game *chess = new Game();
    chess->init("CHESS GAME", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WIDTH, HEIGHT);
    while(chess->isRunning())
    {
        chess->handleEvent();
        chess->update();
        chess->render();
    }
    chess->clean();
    return 0;
}
