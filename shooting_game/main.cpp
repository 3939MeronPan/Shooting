#include"DxLib.h"
#include"Common.h"
#include"Player.h"
#include"Enemy.h"

//---------------------------------------------------------------------
//@brief ���C���֐�
//---------------------------------------------------------------------
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    //��ʃ��[�h�̃Z�b�g
    SetGraphMode(Window_W,Window_H,Window_C);
    ChangeWindowMode(TRUE);

    //Dxlib���C�u��������������
    if (DxLib_Init() == -1)
    {
        return -1;              //�G���[���N������I��
    }

    //�`����ʂ𗠉�ʂɃZ�b�g
    SetDrawScreen(DX_SCREEN_BACK);

    //�e�N���X�̃C���X�^���X����
    Player player;
    Enemy enemy;
    
    //�e�N���X�̏�����
    player.Init();
    enemy.Init();
    
    while (1)
    {
        ClearDrawScreen();

        
        //���C�����[�`��
        player.Update();
        enemy.Update();

        //�`�惋�[�`��
        player.Draw();
        enemy.Draw();

        //����ʂ̓��e��\��ʂɃR�s�[����i�`��̊m��j
        ScreenFlip();
        //�}�C�i�X�̒l�i�G���[�l�j���Ԃ��Ă����烋�[�v�𔲂���
        if (ProcessMessage() < 0)
        {
            break;
        }
        else if (CheckHitKey(KEY_INPUT_ESCAPE))
        {
            break;
        }
    }

     DxLib_End();        //DX���C�u�����g�p�̏I������
     return 0;           //�\�t�g�̏I��
}