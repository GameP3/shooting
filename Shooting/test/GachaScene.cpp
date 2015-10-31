#include "GachaScene.h"
#include "Title.h"


GachaScene::GachaScene()
{
	m_KeyManager = new KeyManager();
	x = 300;
	y = 400;
	money = 100000;
	
	//所持金読み込み
	FILE *fp;
	errno_t error;
	if ((error = fopen_s(&fp, "Data\\SaveData.dat", "rb")) != 0)
	{
		printfDx("ファイル読み込み失敗");
		ScreenFlip();
	}
	else
	{
		//データ読み込み
		fread(&money, sizeof(money), 1, fp);
		fclose(fp);
	}
}

GachaScene::~GachaScene()
{
	delete (m_KeyManager);
}

//あとでstaticを違うのに直す
static int image = 0;
SceneBase * GachaScene::Update(GameScene *)
{
	SceneBase* next = this;

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

		switch (Random_value)
		{
		case 0:
			image = LoadGraph("image\\player\\0.png");
			break;
		case 1:
			image = LoadGraph("image\\player\\1.png");
			break;
		case 2:
			image = LoadGraph("image\\player\\2.png");
			break;
		case 3:
			image = LoadGraph("image\\player\\3.png");
			break;
		}
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
	
	DrawGraph(100,100,image,true);

	ScreenFlip();
}
