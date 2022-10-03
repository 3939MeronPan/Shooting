#include"DxLib.h"
#include "Enemy.h"

void Enemy::Init()
{
    Handle = LoadGraph("assets/enemy.png");
    X = 1920;
    Y = 540;
    PrevY = Y;
    Speed = 25;
    Gravity = 1.0f;
    GetGraphSize(Handle,&W,&H);
}

void Enemy::Update()
{
    X -= Speed;
  
    Y = int(0.5 * Gravity * Time * Time - Speed * Time + PrevY);
    Time += 1;

  
}

void Enemy::Draw()
{
    DrawGraph(X,Y,Handle,TRUE);
}


