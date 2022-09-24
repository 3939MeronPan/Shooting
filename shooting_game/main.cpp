#include"DxLib.h"
#include"Common.h"

//---------------------------------------------------------------------
//@brief ���C���֐�
//---------------------------------------------------------------------
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    //��ʃ��[�h�̃Z�b�g
    SetGraphMode(Window_w,Window_h,Window_c);
    ChangeWindowMode(TRUE);

    //Dxlib���C�u��������������
    if (DxLib_Init() == -1)
    {
        return -1;              //�G���[���N������I��
    }

    //�`����ʂ𗠉�ʂɃZ�b�g
    SetDrawScreen(DX_SCREEN_BACK);




    while (1)
    {
        


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