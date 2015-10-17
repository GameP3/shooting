#include "DxLib.h"
#include "GameScene.h"
#include "KeyManager.h"

// プログラムは WinMain から始まります
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	
	SetGraphMode(640, 480, 16);	//画面の解像度
	ChangeWindowMode(TRUE);
	if (DxLib_Init() == -1)		// ＤＸライブラリ初期化処理
	{
		return -1;			// エラーが起きたら直ちに終了
	}
	// 描画先画面を裏画面にセット
	SetDrawScreen(DX_SCREEN_BACK);
	GameScene* mGameScene;		//ゲームシーンの作成 こいつが画面を見ている
	mGameScene = new GameScene;	//インスタンス生成 GameSceneのコンストラクタでタイトルシーンをを入れている

	// ループ
	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
	{
		// 画面を初期化する
		ClearDrawScreen();

		//画面動作処理
		mGameScene->Update();

		//画面描画処理
		mGameScene->Draw();

		// 裏画面の内容を表画面に反映させる
		ScreenFlip();
	}
	DxLib_End();				// ＤＸライブラリ使用の終了処理
	return 0;				// ソフトの終了 
}
