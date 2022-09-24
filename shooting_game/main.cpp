#include"DxLib.h"
#include"Common.h"

//---------------------------------------------------------------------
//@brief メイン関数
//---------------------------------------------------------------------
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    //画面モードのセット
    SetGraphMode(Window_w,Window_h,Window_c);
    ChangeWindowMode(TRUE);

    //Dxlibライブラリ初期化処理
    if (DxLib_Init() == -1)
    {
        return -1;              //エラーが起きたら終了
    }

    //描画先画面を裏画面にセット
    SetDrawScreen(DX_SCREEN_BACK);




    while (1)
    {
        


        //マイナスの値（エラー値）が返ってきたらループを抜ける
        if (ProcessMessage() < 0)
        {
            break;
        }
        else if (CheckHitKey(KEY_INPUT_ESCAPE))
        {
            break;
        }
    }

     DxLib_End();        //DXライブラリ使用の終了時間
     return 0;           //ソフトの終了
}