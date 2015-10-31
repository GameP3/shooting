#include "GachaScene.h"
#include "Title.h"


GachaScene::GachaScene()
{
	m_KeyManager = new KeyManager();
	x = 300;
	y = 400;
	money = 100000;

}

GachaScene::~GachaScene()
{
	delete (m_KeyManager);
}

SceneBase * GachaScene::Update(GameScene *)
{
	SceneBase* next = this;

	FILE *fp;
	errno_t error;
	if ((error = fopen_s(&fp,"Data\\SaveData.dat","rb"))!=0)
	{
		printfDx("ファイル読み込み失敗");
		ScreenFlip();
	}
	else 
	{
		//データ読み込み
		fread(&money,sizeof(money),1,fp);
		fclose(fp);
	}

	m_KeyManager->KeyCheck();
	if (m_KeyManager->get_up_button() == HOLD)
	{
		//タイトルに戻る
		clsDx();
		next = new Title();
	}

	//ガチャ回す
	if (m_KeyManager->get_down_button() == PUSH)
	{
		money -= 10;
		//乱数取得
		Color = GetColor(0, 255, 0);
		Random_value = GetRand(3);
		
		DrawFormatString(100, 100, Color, "%d", Random_value);

		//所持金セーブ
		FILE *fp;
		if ((error = fopen_s(&fp, "Data\\SaveData.dat", "wb")) != 0)
		{
			printfDx("ファイル書き込み失敗");
			ScreenFlip();
		}
		else
		{
			fwrite(&money, sizeof(money), 1, fp);
			fclose(fp);
		}
	}

	return next;
}

void GachaScene::Draw(GameScene * scene)
{
	clsDx();
	printfDx("上カーソル押下でタイトルへ戻る\n");
	printfDx("下カーソル押下でガチャ回す\n");
	printfDx("所持金：%d\n", money);
	
	ScreenFlip();
}
