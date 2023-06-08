#pragma once

#include "texture.h"
#include "pipe.h"

using namespace std;

class bird : public LTexture
{
public:
    bool init();
    void render();
    void Free();

    void resetTime() {time = 0;}
    void deathFall();

    void update(int pipeWidth, int pipeHeight);
private:
    double time;
    int angle;
    int x0;
    int frame; // biến đếm frame ngoài main
    SDL_Rect birdClip; // biến lưu rect lấy khung hình chim trong 3 khung hình
    int ahead = 0; // chỉ số của cột trước mặt
    position posBird;
};