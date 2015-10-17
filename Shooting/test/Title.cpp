#include "Title.h"
#include "MainGame.h"
#include "GachaScene.h"

Title::Title()
{
	//コンストラクタ

	m_KeyManager = new KeyManager();
	m_Player = new Player();
}


Title::~Title()
{
	//デストラクタ
	delete(m_Player);
}

SceneBase* Title::Update(GameScene*)
{
	SceneBase* next = this;
	
	m_KeyManager->KeyCheck();
	
	m_Player->Update(m_KeyManager);


	if (m_KeyManager->get_up_button() == PULL)
	{
		next = new GachaScene();
	}

	return next;
}

void Title::Draw(GameScene *)
{
	m_Player->Draw();
}