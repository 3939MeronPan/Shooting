#pragma once
class Charactor
{
protected:
    int Handle;
    int X;
    int Y;
    int W;
    int H;
    int Speed;
public:
    Charactor();
    virtual void Init() = 0;
    virtual void Update() = 0;
    virtual void Draw() = 0;
};