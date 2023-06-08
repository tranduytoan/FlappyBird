#include "bird.h"
#include <stdio.h>
#include <iostream>

bool bird::init()
{
    posBird.setPos(75, SCREEN_HEIGHT / 2 - 10);
    ahead = 0;
    angle = 0;
    frame = 1;
    
    birdClip = {50, 0, BIRD_WIDTH, BIRD_HEIGHT};

    if (Texture == NULL)
    {
        if (Load("res/image/bird.png")) return true;
    }
    return false;
}

void bird::Free()
{
    free();
}

void bird::render()
{ 
    Render(posBird.x, posBird.y, angle, &birdClip);

    //update animation
    if (frame == 10)
    {
       if (birdClip.x == 100) birdClip.x = 0;
       else birdClip.x += 50;
       frame = 1;
    }
    else frame += 1 * 60.0/FPS;
}

void bird::deathFall()
{
    if (posBird.y < SCREEN_HEIGHT - LAND_HEIGHT - BIRD_HEIGHT)
    {
        if (angle < 90)
        {
            angle += 6 * 60.0/FPS;
        }

        posBird.y = x0 + time * time * 0.18;
        if (posBird.y > SCREEN_HEIGHT - LAND_HEIGHT - BIRD_HEIGHT) posBird.y = SCREEN_HEIGHT - LAND_HEIGHT - BIRD_HEIGHT;
        time += 1 * 60.0/FPS;
    }

    //cố định animation
    birdClip.x = 50;
}


//update pos, score, check die
void bird::update(int pipeWidth,int pipeHeight)
{
    if (!die)
    {
        if (time == 0)
        {
            x0 = posBird.y;
            angle = -25;
        }
        else if (angle < 90 && time > 30)
        {
            angle += 3 * 60.0/FPS;
        }

        if (time >= 0)
        {
            posBird.y = x0 - 7.3 * time + time * time * 0.18;
            time += 1 * 60.0/FPS;
        }



        // va chạm cột
        if ( (posBird.x + BIRD_WIDTH > posPipe[ahead].x) && (posBird.x < posPipe[ahead].x + pipeWidth) &&
             (posBird.y + 5 < posPipe[ahead].y + pipeHeight || posBird.y  + BIRD_HEIGHT > posPipe[ahead].y + pipeHeight + PIPE_SPACE + 5) )
        {
            die = true;
            x0 = posBird.y;
        }

        //chạm nóc/sàn
        if (posBird.y > SCREEN_HEIGHT - LAND_HEIGHT -  BIRD_HEIGHT - 5 || posBird.y < - 10 )
        {
            die = true;
            x0 = posBird.y;
        }
        
        // vượt qua
        else if (posBird.x > posPipe[ahead].x + pipeWidth )
        {
            ahead = ( ahead + 1 ) % TOTAL_PIPE;
            score++;
        }
    }
}