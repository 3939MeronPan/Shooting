#include"DxLib.h"
#include "Player.h"

void Player::Init()
{
	//�v���C���[�̏Ə��̉摜�����[�h�E�ʒu��������
	Handle = LoadGraph("assets/letcl.png");
	X = 860;
	Y = 540;
	Speed = 8;

	GetGraphSize(Handle, &W, &H);
}

void Player::Update()
{
	//�ړ�
	Y += Speed;
	
	if (Y > 1080)
	{
		Y = 1080 - H;
		Speed = -Speed;
	}
	if (Y < 0)
	{
		Y = 0;
		Speed = -Speed;
	}
}

void Player::Draw()
{
	DrawGraph(X, Y, Handle, true);
}

//Update��X���W�ړ��i�\���j
//X += Speed;
//if (X > 1920 - W)
//{
//	X = 1920 - W;
//	Speed = -Speed;
//}
//if (X < 0)
//{
//	X = 0;
//	Speed =-Speed;
//}