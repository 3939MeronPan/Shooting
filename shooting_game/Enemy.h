#pragma once
#include"Charactor.h"

class Enemy:public Charactor
{
private:
    int PrevY = 0;
    int Time = 0;
    float Gravity = 0.0f;
public:
    void Init();
    void Update();
    void Draw();
};