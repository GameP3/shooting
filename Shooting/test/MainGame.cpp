
#include "MainGame.h"

//コンストラクタ


MainGame::MainGame()
{
	m_image = LoadGraph("02_スピードダウン.bmp");
}

MainGame::~MainGame()
{
}

SceneBase* MainGame::Update(GameScene*)
{
	SceneBase* next = this;



	return next;
}

void MainGame::Draw(GameScene*) {
	DrawGraph(0.0f, 0.0f, m_image, TRUE);
}