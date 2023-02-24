#include "Game.h"
#include <iostream>
#include "Chess.h"
#include"../textureManange.h"

using namespace std;

Game::Game()
{}

Game::~Game()
{}

Chess *piece;

void Game::init(char *title, int xpos, int ypos, int width, int height)
{
    if(SDL_Init(SDL_INIT_EVERYTHING) != 0)
    {
        cout << "Fail to init SDL!" << endl;
        run = false;
    }else
    {
        window = SDL_CreateWindow(title, xpos, ypos, width, height, 0);
        if (window == NULL) cout << "Fail to init window!" << endl;
        renderer = SDL_CreateRenderer(window, 0, -1);
        if (renderer == NULL) cout << "Fail to init renderer!" << endl;
        SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
        piece = new Chess("asset/w_queen_2x.png", renderer, 0, 0);
    }
    std::string fileName = "image.png";
}

void Game::handleEvent()
{
    SDL_Event event;
    SDL_PollEvent(&event);
    switch(event.type)
    {
        case SDL_MOUSEBUTTONDOWN:
        break;
        case SDL_QUIT:
        run = false;
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

bool Game::isRunning()
{
    return run;
}

void Game::clean()
{
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    cout << "Game cleaned." << endl;
}
