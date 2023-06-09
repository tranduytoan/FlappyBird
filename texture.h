#pragma once

#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <string>
#include <vector>
#include <stdio.h>

using namespace std;

class position
{
public:
    double x, y;
    void setPos(const double _x, const double _y)
    {
        x = _x;
        y = _y;
    }
};

class LTexture
{
public:
    LTexture();
    ~LTexture();

    bool Load(string path);

    void Render(int x, int y, int angle = 0, SDL_Rect* clip = NULL, SDL_RendererFlip flip = SDL_FLIP_NONE);
    void free();
public:
    SDL_Texture* Texture;
    int tWidth;
    int tHeight;

public:
    static SDL_Window* gWindow;
    static SDL_Renderer* gRenderer;
    static SDL_Event event;
    static bool quit;
    static bool die;
    static short int score;
    int FPS = 60;

    const int SCREEN_WIDTH = 350;
    const int SCREEN_HEIGHT = 625;

    const int TOTAL_PIPE = 4;
    const int PIPE_SPACE = 160;//khoảng cách ống trên và dưới
    const int PIPE_DISTANCE = 220;//khoảng cách 2 ống
    const int LAND_HEIGHT = 140;

    // bird.png 50x35
    const int BIRD_WIDTH = 50;
    const int BIRD_HEIGHT = 35;
};