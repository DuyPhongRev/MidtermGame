#include "Game.h"
#include <iostream>
#include "Chess.h"
#include "../TextureManager.h"

using namespace std;



Game::Game()
{}

Game::~Game()
{}


void Game::init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen)
{
    int flags = 0;
    if (fullscreen) flags = SDL_WINDOW_FULLSCREEN;
    if(SDL_Init(SDL_INIT_EVERYTHING) != 0)
    {
        cout << "SDL create fail!" << endl;
        isRunning = false;
    } else
    {
        window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
        if (window == NULL) cout << "Window create fail!" << endl;
        renderer = SDL_CreateRenderer(window, -1, 0);
        if (renderer == NULL) cout << "Renderer create fail!" << endl;
        else SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
        isRunning = true;
    }

}

void Game::handleEvents()
{
    SDL_Event event;
    SDL_PollEvent(&event);
    switch(event.type)
    {
        case SDL_QUIT:
            isRunning = false;
            break;
        default:
            break;
    }
}

void Game::update()
{
    piece->update();
}

void Game::render()
{
    SDL_RenderClear(renderer);
    piece->render();
    SDL_RenderPresent(renderer);
}

void Game::clean()
{
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
    cout << "Game cleaned!" << endl;
}

bool Game::running()
{
    return isRunning;
}
