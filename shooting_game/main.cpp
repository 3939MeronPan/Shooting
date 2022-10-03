#include"DxLib.h"
#include"Common.h"
#include"Player.h"
#include"Enemy.h"

//---------------------------------------------------------------------
//@brief メイン関数
//---------------------------------------------------------------------
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
    //画面モードのセット
    SetGraphMode(Window_W,Window_H,Window_C);
    ChangeWindowMode(TRUE);

    //Dxlibライブラリ初期化処理
    if (DxLib_Init() == -1)
    {
        return -1;              //エラーが起きたら終了
    }

    //描画先画面を裏画面にセット
    SetDrawScreen(DX_SCREEN_BACK);

    //各クラスのインスタンス生成
    Player player;
    Enemy enemy;
    
    //各クラスの初期化
    player.Init();
    enemy.Init();
    
    while (1)
    {
        ClearDrawScreen();

        
        //メインルーチン
        player.Update();
        enemy.Update();

        //描画ルーチン
        player.Draw();
        enemy.Draw();

        //裏画面の内容を表画面にコピーする（描画の確定）
        ScreenFlip();
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